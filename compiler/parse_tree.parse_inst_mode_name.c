/*
** Automatically generated from `parse_inst_mode_name.m'
** by the Mercury compiler,
** version rotd-2017-07-04
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module parse_tree.parse_inst_mode_name. */
/* :- implementation. */

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

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____allow_constrained_inst_var_0_0_10001(
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_1,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____allow_constrained_inst_var_0_0_10001(
  MR_Box * parse_tree__parse_inst_mode_name__wrapper_arg_1,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_2,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____known_compound_inst_kind_1_0_10001(
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_1,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_2,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____known_compound_inst_kind_1_0_10001(
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_1,
  MR_Box * parse_tree__parse_inst_mode_name__wrapper_arg_2,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_3,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____known_inst_kind_1_0_10001(
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_1,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_2,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____known_inst_kind_1_0_10001(
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_1,
  MR_Box * parse_tree__parse_inst_mode_name__wrapper_arg_2,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_3,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____why_no_constrained_inst_var_0_0_10001(
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_1,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____why_no_constrained_inst_var_0_0_10001(
  MR_Box * parse_tree__parse_inst_mode_name__wrapper_arg_1,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_2,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
  MR_String parse_tree__parse_inst_mode_name__Name_4,
  MR_Word parse_tree__parse_inst_mode_name__Args_5,
  MR_Word * parse_tree__parse_inst_mode_name__KnownInst_6);

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____known_inst_kind_1_0(
  MR_Word parse_tree__parse_inst_mode_name__TypeInfo_for_T_24,
  MR_Word * parse_tree__parse_inst_mode_name__HeadVar__1_1,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__2_2,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____known_inst_kind_1_0(
  MR_Word parse_tree__parse_inst_mode_name__TypeInfo_for_T_11,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__1_1,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____known_compound_inst_kind_1_0(
  MR_Word parse_tree__parse_inst_mode_name__TypeInfo_for_T_78,
  MR_Word * parse_tree__parse_inst_mode_name__HeadVar__1_1,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__2_2,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____known_compound_inst_kind_1_0(
  MR_Word parse_tree__parse_inst_mode_name__TypeInfo_for_T_19,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__1_1,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_inst_mode_name__parse_bound_inst_5_p_0(
  MR_Word parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_6,
  MR_Word parse_tree__parse_inst_mode_name__VarSet_7,
  MR_Word parse_tree__parse_inst_mode_name__ContextPieces_8,
  MR_Word parse_tree__parse_inst_mode_name__Term_9,
  MR_Word * parse_tree__parse_inst_mode_name__MaybeBoundInst_10);

static void MR_CALL 
parse_tree__parse_inst_mode_name__parse_bound_insts_5_p_0(
  MR_Word parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_1,
  MR_Word parse_tree__parse_inst_mode_name__VarSet_2,
  MR_Word parse_tree__parse_inst_mode_name__ContextPieces_3,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__4_4,
  MR_Word * parse_tree__parse_inst_mode_name__HeadVar__5_5);

static void MR_CALL 
parse_tree__parse_inst_mode_name__find_duplicate_cons_id_bound_insts_3_p_0(
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__1_1,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__2_2,
  MR_Word * parse_tree__parse_inst_mode_name__HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_inst_mode_name__parse_bound_inst_list_6_p_0(
  MR_Word parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_7,
  MR_Word parse_tree__parse_inst_mode_name__VarSet_8,
  MR_Word parse_tree__parse_inst_mode_name__ContextPieces_9,
  MR_Word parse_tree__parse_inst_mode_name__DisjunctionTerm_10,
  MR_Word parse_tree__parse_inst_mode_name__Uniqueness_11,
  MR_Word * parse_tree__parse_inst_mode_name__MaybeInst_12);

static void MR_CALL 
parse_tree__parse_inst_mode_name__parse_higher_order_inst_6_p_0(
  MR_Word parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_7,
  MR_Word parse_tree__parse_inst_mode_name__VarSet_8,
  MR_Word parse_tree__parse_inst_mode_name__ContextPieces_9,
  MR_Word parse_tree__parse_inst_mode_name__BeforeIsTerm_10,
  MR_Word parse_tree__parse_inst_mode_name__DetTerm_11,
  MR_Word * parse_tree__parse_inst_mode_name__MaybeInst_12);

static MR_Word MR_CALL 
parse_tree__parse_inst_mode_name__no_allow_constrained_inst_var_result_4_f_0(
  MR_Word parse_tree__parse_inst_mode_name__ContextPieces_6,
  MR_Word parse_tree__parse_inst_mode_name__Why_7,
  MR_Word parse_tree__parse_inst_mode_name__VarSet_8,
  MR_Word parse_tree__parse_inst_mode_name__Term_9);

static void MR_CALL 
parse_tree__parse_inst_mode_name__parse_inst_atom_functor_7_p_0(
  MR_Word parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_8,
  MR_Word parse_tree__parse_inst_mode_name__VarSet_9,
  MR_Word parse_tree__parse_inst_mode_name__ContextPieces_10,
  MR_String parse_tree__parse_inst_mode_name__Name_11,
  MR_Word parse_tree__parse_inst_mode_name__ArgTerms0_12,
  MR_Word parse_tree__parse_inst_mode_name__Context_13,
  MR_Word * parse_tree__parse_inst_mode_name__MaybeInst_14);

static void MR_CALL 
parse_tree__parse_inst_mode_name__parse_higher_order_mode_6_p_0(
  MR_Word parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_7,
  MR_Word parse_tree__parse_inst_mode_name__VarSet_8,
  MR_Word parse_tree__parse_inst_mode_name__ContextPieces_9,
  MR_Word parse_tree__parse_inst_mode_name__BeforeIsTerm_10,
  MR_Word parse_tree__parse_inst_mode_name__DetTerm_11,
  MR_Word * parse_tree__parse_inst_mode_name__MaybeMode_12);


static /* final */ const MR_Box parse_tree__parse_inst_mode_name_scalar_common_1[79][2];

static /* final */ const MR_Box parse_tree__parse_inst_mode_name_scalar_common_2[21][1];

static /* final */ const MR_Box parse_tree__parse_inst_mode_name_scalar_common_5[5][3];


/* sealed */ struct parse_tree__parse_inst_mode_name__vector_common_type_3_0_s {
  const MR_String parse_tree__parse_inst_mode_name__vector_common_type_3_0__vct_3_f_0;
  const MR_Integer parse_tree__parse_inst_mode_name__vector_common_type_3_0__vct_3_f_1;
  const MR_Word parse_tree__parse_inst_mode_name__vector_common_type_3_0__vct_3_f_2;
};

static /* final */ const struct parse_tree__parse_inst_mode_name__vector_common_type_3_0_s parse_tree__parse_inst_mode_name_vector_common_3[32];

/* sealed */ struct parse_tree__parse_inst_mode_name__vector_common_type_4_0_s {
  const MR_String parse_tree__parse_inst_mode_name__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct parse_tree__parse_inst_mode_name__vector_common_type_4_0_s parse_tree__parse_inst_mode_name_vector_common_4[7];



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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
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
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a floating point number"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "such as"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "an implementation defined literal"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "an integer"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a string"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a variable such as"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the builtin inst"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should only be used with arity"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: inst constraints can be applied"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "only to inst variables,"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not to terms such as"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a constrained inst variable"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may not appear"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: this bound inst lists"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: an implementation defined literal"))
  },
  /* row 74 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 75 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 76 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 77 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 78 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__parse_inst_mode_name_scalar_common_2[21][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "two"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_1[74])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "zero"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "one"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_5[0])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_1[75])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_5[1])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_5[2])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_1[76])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_5[3])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "zero or one"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_1[77])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_5[4])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_1[78])))
  },
};

static /* final */ const MR_Box parse_tree__parse_inst_mode_name_scalar_common_5[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
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
    (MR_Word) (MR_Integer) 0
  },
  /* row 4 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 5 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 6 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
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
    (MR_Word) (MR_Integer) 0
  },
  /* row 9 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 10 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 11 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
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
    (MR_Word) (MR_Integer) 0
  },
  /* row 14 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 15 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 16 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 17 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 18 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 19 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
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
    (MR_Word) (MR_Integer) 0
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
    (MR_Word) (MR_Integer) 0
  },
  /* row 24 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 25 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 26 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 27 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
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
    (MR_Word) (MR_Integer) 0
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
    (MR_Word) (MR_Integer) 0
  },
};

static /* final */ const struct parse_tree__parse_inst_mode_name__vector_common_type_4_0_s parse_tree__parse_inst_mode_name_vector_common_4[7] = {
  /* row 0 */   {     (MR_String) "on the right hand side of an inst constraint" },
  /* row 1 */   {     (MR_String) "on the left hand side of the definition of a named inst" },
  /* row 2 */   {     (MR_String) "on the right hand side of the definition of a named inst equivalence" },
  /* row 3 */   {     (MR_String) "on the right hand side of the definition of a named mode" },
  /* row 4 */   {     (MR_String) "in a mode annotation on a type" },
  /* row 5 */   {     (MR_String) "as the ground or any inst of a solver type definition" },
  /* row 6 */   {     (MR_String) "as the inst of a mutable" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_allow_constrained_inst_var_0_0 = {
  (MR_String) "allow_constrained_inst_var",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_allow_constrained_inst_var_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__type_ctor_info_why_no_constrained_inst_var_0
};

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_allow_constrained_inst_var_0_1 = {
  (MR_String) "no_allow_constrained_inst_var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_allow_constrained_inst_var_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_allow_constrained_inst_var_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_allow_constrained_inst_var_0_1
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_0 = {
  (MR_String) "kcik_is",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_1 = {
  (MR_String) "kcik_constrained",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_2 = {
  (MR_String) "kcik_bound",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_3[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_3 = {
  (MR_String) "kcik_unique",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_4[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_4 = {
  (MR_String) "kcik_mostly_unique",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_compound_inst_kind_1_4,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_3
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_inst_kind_1_0 = {
  (MR_String) "known_inst_simple",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_inst_kind_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__pti_known_compound_inst_kind_1__pseudo_1 = {
  &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__type_ctor_info_known_compound_inst_kind_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_inst_kind_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__pti_known_compound_inst_kind_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_inst_kind_1_1 = {
  (MR_String) "known_inst_compound",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_inst_kind_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_inst_kind_1_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_functor_desc_known_inst_kind_1_2 = {
  (MR_String) "known_inst_bad_arity",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__field_types_known_inst_kind_1_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_inst_kind_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_inst_kind_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_inst_mode_name__parse_tree__parse_inst_mode_name__du_stag_ordered_known_inst_kind_1_2
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____allow_constrained_inst_var_0_0_10001(
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_1,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded;

    {
      parse_tree__parse_inst_mode_name__succeeded = parse_tree__parse_inst_mode_name____Unify____allow_constrained_inst_var_0_0(((MR_Word) parse_tree__parse_inst_mode_name__wrapper_arg_1), ((MR_Word) parse_tree__parse_inst_mode_name__wrapper_arg_2));
    }
    return parse_tree__parse_inst_mode_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____allow_constrained_inst_var_0_0_10001(
  MR_Box * parse_tree__parse_inst_mode_name__wrapper_arg_1,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_2,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_inst_mode_name__conv0_HeadVar__1_1;

    {
      parse_tree__parse_inst_mode_name____Compare____allow_constrained_inst_var_0_0(&parse_tree__parse_inst_mode_name__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_inst_mode_name__wrapper_arg_2), ((MR_Word) parse_tree__parse_inst_mode_name__wrapper_arg_3));
    }
    *parse_tree__parse_inst_mode_name__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_inst_mode_name__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____known_compound_inst_kind_1_0_10001(
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_1,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_2,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_3)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded;

    {
      parse_tree__parse_inst_mode_name__succeeded = parse_tree__parse_inst_mode_name____Unify____known_compound_inst_kind_1_0(((MR_Word) parse_tree__parse_inst_mode_name__wrapper_arg_1), ((MR_Word) parse_tree__parse_inst_mode_name__wrapper_arg_2), ((MR_Word) parse_tree__parse_inst_mode_name__wrapper_arg_3));
    }
    return parse_tree__parse_inst_mode_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____known_compound_inst_kind_1_0_10001(
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_1,
  MR_Box * parse_tree__parse_inst_mode_name__wrapper_arg_2,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_3,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_4)
{
  {
    MR_Word parse_tree__parse_inst_mode_name__conv0_HeadVar__1_1;

    {
      parse_tree__parse_inst_mode_name____Compare____known_compound_inst_kind_1_0(((MR_Word) parse_tree__parse_inst_mode_name__wrapper_arg_1), &parse_tree__parse_inst_mode_name__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_inst_mode_name__wrapper_arg_3), ((MR_Word) parse_tree__parse_inst_mode_name__wrapper_arg_4));
    }
    *parse_tree__parse_inst_mode_name__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_inst_mode_name__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____known_inst_kind_1_0_10001(
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_1,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_2,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_3)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded;

    {
      parse_tree__parse_inst_mode_name__succeeded = parse_tree__parse_inst_mode_name____Unify____known_inst_kind_1_0(((MR_Word) parse_tree__parse_inst_mode_name__wrapper_arg_1), ((MR_Word) parse_tree__parse_inst_mode_name__wrapper_arg_2), ((MR_Word) parse_tree__parse_inst_mode_name__wrapper_arg_3));
    }
    return parse_tree__parse_inst_mode_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____known_inst_kind_1_0_10001(
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_1,
  MR_Box * parse_tree__parse_inst_mode_name__wrapper_arg_2,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_3,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_4)
{
  {
    MR_Word parse_tree__parse_inst_mode_name__conv0_HeadVar__1_1;

    {
      parse_tree__parse_inst_mode_name____Compare____known_inst_kind_1_0(((MR_Word) parse_tree__parse_inst_mode_name__wrapper_arg_1), &parse_tree__parse_inst_mode_name__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_inst_mode_name__wrapper_arg_3), ((MR_Word) parse_tree__parse_inst_mode_name__wrapper_arg_4));
    }
    *parse_tree__parse_inst_mode_name__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_inst_mode_name__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____why_no_constrained_inst_var_0_0_10001(
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_1,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded;

    {
      parse_tree__parse_inst_mode_name__succeeded = parse_tree__parse_inst_mode_name____Unify____why_no_constrained_inst_var_0_0(((MR_Word) parse_tree__parse_inst_mode_name__wrapper_arg_1), ((MR_Word) parse_tree__parse_inst_mode_name__wrapper_arg_2));
    }
    return parse_tree__parse_inst_mode_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____why_no_constrained_inst_var_0_0_10001(
  MR_Box * parse_tree__parse_inst_mode_name__wrapper_arg_1,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_2,
  MR_Box parse_tree__parse_inst_mode_name__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_inst_mode_name__conv0_HeadVar__1_1;

    {
      parse_tree__parse_inst_mode_name____Compare____why_no_constrained_inst_var_0_0(&parse_tree__parse_inst_mode_name__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_inst_mode_name__wrapper_arg_2), ((MR_Word) parse_tree__parse_inst_mode_name__wrapper_arg_3));
    }
    *parse_tree__parse_inst_mode_name__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_inst_mode_name__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
  MR_String parse_tree__parse_inst_mode_name__Name_4,
  MR_Word parse_tree__parse_inst_mode_name__Args_5,
  MR_Word * parse_tree__parse_inst_mode_name__KnownInst_6)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded;

    {
      MR_Integer parse_tree__parse_inst_mode_name__case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 0)) {
        case (MR_Integer) 61:
          if (MR_offset_streq(1, parse_tree__parse_inst_mode_name__Name_4, (MR_String) "=<"))
            parse_tree__parse_inst_mode_name__case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 97:
          if (MR_offset_streq(1, parse_tree__parse_inst_mode_name__Name_4, (MR_String) "any"))
            parse_tree__parse_inst_mode_name__case_num_0 = (MR_Integer) 1;
          break;
        case (MR_Integer) 98:
          if (((((((((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 1)) == (MR_Integer) 111)) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 2)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 3)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 4)) == (MR_Integer) 100))))
            switch (MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 5)) {
              case (MR_Integer) 0:
                parse_tree__parse_inst_mode_name__case_num_0 = (MR_Integer) 2;
                break;
              case (MR_Integer) 95:
                if (MR_offset_streq(6, parse_tree__parse_inst_mode_name__Name_4, (MR_String) "bound_unique"))
                  parse_tree__parse_inst_mode_name__case_num_0 = (MR_Integer) 3;
                break;
            }
          break;
        case (MR_Integer) 99:
          if (((((((((((((((((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 1)) == (MR_Integer) 108)) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 2)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 3)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 4)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 5)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 6)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 7)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 8)) == (MR_Integer) 100))))
            switch (MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 9)) {
              case (MR_Integer) 0:
                parse_tree__parse_inst_mode_name__case_num_0 = (MR_Integer) 4;
                break;
              case (MR_Integer) 95:
                if (MR_offset_streq(10, parse_tree__parse_inst_mode_name__Name_4, (MR_String) "clobbered_any"))
                  parse_tree__parse_inst_mode_name__case_num_0 = (MR_Integer) 5;
                break;
            }
          break;
        case (MR_Integer) 102:
          if (MR_offset_streq(1, parse_tree__parse_inst_mode_name__Name_4, (MR_String) "free"))
            parse_tree__parse_inst_mode_name__case_num_0 = (MR_Integer) 6;
          break;
        case (MR_Integer) 103:
          if (MR_offset_streq(1, parse_tree__parse_inst_mode_name__Name_4, (MR_String) "ground"))
            parse_tree__parse_inst_mode_name__case_num_0 = (MR_Integer) 7;
          break;
        case (MR_Integer) 105:
          if (MR_offset_streq(1, parse_tree__parse_inst_mode_name__Name_4, (MR_String) "is"))
            parse_tree__parse_inst_mode_name__case_num_0 = (MR_Integer) 8;
          break;
        case (MR_Integer) 109:
          if (((((((((((((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 1)) == (MR_Integer) 111)) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 2)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 3)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 5)) == (MR_Integer) 121)))) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 6)) == (MR_Integer) 95))))
            switch (MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 7)) {
              case (MR_Integer) 99:
                if (((((((((((((((((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 8)) == (MR_Integer) 108)) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 9)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 10)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 11)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 12)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 13)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 14)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 15)) == (MR_Integer) 100))))
                  switch (MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 16)) {
                    case (MR_Integer) 0:
                      parse_tree__parse_inst_mode_name__case_num_0 = (MR_Integer) 9;
                      break;
                    case (MR_Integer) 95:
                      if (MR_offset_streq(17, parse_tree__parse_inst_mode_name__Name_4, (MR_String) "mostly_clobbered_any"))
                        parse_tree__parse_inst_mode_name__case_num_0 = (MR_Integer) 10;
                      break;
                  }
                break;
              case (MR_Integer) 117:
                if (((((((((((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 8)) == (MR_Integer) 110)) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 9)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 10)) == (MR_Integer) 113)))) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 11)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 12)) == (MR_Integer) 101))))
                  switch (MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 13)) {
                    case (MR_Integer) 0:
                      parse_tree__parse_inst_mode_name__case_num_0 = (MR_Integer) 11;
                      break;
                    case (MR_Integer) 95:
                      if (MR_offset_streq(14, parse_tree__parse_inst_mode_name__Name_4, (MR_String) "mostly_unique_any"))
                        parse_tree__parse_inst_mode_name__case_num_0 = (MR_Integer) 12;
                      break;
                  }
                break;
            }
          break;
        case (MR_Integer) 110:
          if (MR_offset_streq(1, parse_tree__parse_inst_mode_name__Name_4, (MR_String) "not_reached"))
            parse_tree__parse_inst_mode_name__case_num_0 = (MR_Integer) 13;
          break;
        case (MR_Integer) 117:
          if (((((((((((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 2)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 3)) == (MR_Integer) 113)))) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 4)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 5)) == (MR_Integer) 101))))
            switch (MR_nth_code_unit(parse_tree__parse_inst_mode_name__Name_4, 6)) {
              case (MR_Integer) 0:
                parse_tree__parse_inst_mode_name__case_num_0 = (MR_Integer) 14;
                break;
              case (MR_Integer) 95:
                if (MR_offset_streq(7, parse_tree__parse_inst_mode_name__Name_4, (MR_String) "unique_any"))
                  parse_tree__parse_inst_mode_name__case_num_0 = (MR_Integer) 15;
                break;
            }
          break;
      }
      switch (parse_tree__parse_inst_mode_name__case_num_0) {
        default:
          parse_tree__parse_inst_mode_name__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            /* case "=<" */
            if ((parse_tree__parse_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_2[5]);
              }
            else
              {
                MR_Word parse_tree__parse_inst_mode_name__Var_224 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Args_5, (MR_Integer) 1)));
                MR_Box parse_tree__parse_inst_mode_name__Var_225 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Args_5, (MR_Integer) 0));

                if ((parse_tree__parse_inst_mode_name__Var_224 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_2[5]);
                  }
                else
                  {
                    MR_Word parse_tree__parse_inst_mode_name__Var_236 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_224, (MR_Integer) 1)));
                    MR_Box parse_tree__parse_inst_mode_name__Var_237 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_224, (MR_Integer) 0));

                    if ((parse_tree__parse_inst_mode_name__Var_236 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Word parse_tree__parse_inst_mode_name__Var_44;

                        {
                          parse_tree__parse_inst_mode_name__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_44, 0) = parse_tree__parse_inst_mode_name__Var_225;
                          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_44, 1) = parse_tree__parse_inst_mode_name__Var_237;
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__parse_inst_mode_name__KnownInst_6 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_44));
                        }
                      }
                    else
                      {
                        *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_2[5]);
                      }
                  }
              }
            parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          {
            /* case "any" */
            if ((parse_tree__parse_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_2[6];
            else
              {
                *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_2[7]);
              }
            parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            /* case "bound" */
            if ((parse_tree__parse_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_2[8]);
              }
            else
              {
                MR_Word parse_tree__parse_inst_mode_name__Var_226 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Args_5, (MR_Integer) 1)));
                MR_Box parse_tree__parse_inst_mode_name__Var_227 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Args_5, (MR_Integer) 0));

                if ((parse_tree__parse_inst_mode_name__Var_226 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word parse_tree__parse_inst_mode_name__Var_39;

                    {
                      parse_tree__parse_inst_mode_name__Var_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__Var_39, 0) = parse_tree__parse_inst_mode_name__Var_227;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__parse_inst_mode_name__KnownInst_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_39));
                    }
                  }
                else
                  {
                    *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_2[8]);
                  }
              }
            parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          {
            /* case "bound_unique" */
            if ((parse_tree__parse_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_2[8]);
              }
            else
              {
                MR_Word parse_tree__parse_inst_mode_name__Var_228 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Args_5, (MR_Integer) 1)));
                MR_Box parse_tree__parse_inst_mode_name__Var_229 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Args_5, (MR_Integer) 0));

                if ((parse_tree__parse_inst_mode_name__Var_228 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word parse_tree__parse_inst_mode_name__Var_35;

                    {
                      parse_tree__parse_inst_mode_name__Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_35, 1) = parse_tree__parse_inst_mode_name__Var_229;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__parse_inst_mode_name__KnownInst_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_35));
                    }
                  }
                else
                  {
                    *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_2[8]);
                  }
              }
            parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 4:
          {
            /* case "clobbered" */
            if ((parse_tree__parse_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_2[9];
            else
              {
                *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_2[7]);
              }
            parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 5:
          {
            /* case "clobbered_any" */
            if ((parse_tree__parse_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_2[10];
            else
              {
                *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_2[7]);
              }
            parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 6:
          {
            /* case "free" */
            if ((parse_tree__parse_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_2[11];
            else
              {
                *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_2[7]);
              }
            parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 7:
          {
            /* case "ground" */
            if ((parse_tree__parse_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_2[12];
            else
              {
                *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_2[7]);
              }
            parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 8:
          {
            /* case "is" */
            if ((parse_tree__parse_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_2[5]);
              }
            else
              {
                MR_Word parse_tree__parse_inst_mode_name__Var_230 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Args_5, (MR_Integer) 1)));
                MR_Box parse_tree__parse_inst_mode_name__Var_231 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Args_5, (MR_Integer) 0));

                if ((parse_tree__parse_inst_mode_name__Var_230 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_2[5]);
                  }
                else
                  {
                    MR_Word parse_tree__parse_inst_mode_name__Var_238 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_230, (MR_Integer) 1)));
                    MR_Box parse_tree__parse_inst_mode_name__Var_239 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_230, (MR_Integer) 0));

                    if ((parse_tree__parse_inst_mode_name__Var_238 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Word parse_tree__parse_inst_mode_name__Var_51;

                        {
                          parse_tree__parse_inst_mode_name__Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_51, 0) = parse_tree__parse_inst_mode_name__Var_231;
                          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_51, 1) = parse_tree__parse_inst_mode_name__Var_239;
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__parse_inst_mode_name__KnownInst_6 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_51));
                        }
                      }
                    else
                      {
                        *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_2[5]);
                      }
                  }
              }
            parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 9:
          {
            /* case "mostly_clobbered" */
            if ((parse_tree__parse_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_2[13];
            else
              {
                *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_2[7]);
              }
            parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 10:
          {
            /* case "mostly_clobbered_any" */
            if ((parse_tree__parse_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_2[14];
            else
              {
                *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_2[7]);
              }
            parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 11:
          {
            /* case "mostly_unique" */
            if ((parse_tree__parse_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_2[15];
              }
            else
              {
                MR_Word parse_tree__parse_inst_mode_name__Var_232 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Args_5, (MR_Integer) 1)));
                MR_Box parse_tree__parse_inst_mode_name__Var_233 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Args_5, (MR_Integer) 0));

                if ((parse_tree__parse_inst_mode_name__Var_232 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word parse_tree__parse_inst_mode_name__Var_59;

                    {
                      parse_tree__parse_inst_mode_name__Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_59, 1) = parse_tree__parse_inst_mode_name__Var_233;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__parse_inst_mode_name__KnownInst_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_59));
                    }
                  }
                else
                  {
                    *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_2[16]);
                  }
              }
            parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 12:
          {
            /* case "mostly_unique_any" */
            if ((parse_tree__parse_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_2[17];
            else
              {
                *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_2[7]);
              }
            parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 13:
          {
            /* case "not_reached" */
            if ((parse_tree__parse_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_2[18];
            else
              {
                *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_2[7]);
              }
            parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 14:
          {
            /* case "unique" */
            if ((parse_tree__parse_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_2[19];
              }
            else
              {
                MR_Word parse_tree__parse_inst_mode_name__Var_234 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Args_5, (MR_Integer) 1)));
                MR_Box parse_tree__parse_inst_mode_name__Var_235 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Args_5, (MR_Integer) 0));

                if ((parse_tree__parse_inst_mode_name__Var_234 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word parse_tree__parse_inst_mode_name__Var_66;

                    {
                      parse_tree__parse_inst_mode_name__Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_66, 1) = parse_tree__parse_inst_mode_name__Var_235;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__parse_inst_mode_name__KnownInst_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_66));
                    }
                  }
                else
                  {
                    *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_2[16]);
                  }
              }
            parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 15:
          {
            /* case "unique_any" */
            if ((parse_tree__parse_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_2[20];
            else
              {
                *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_2[7]);
              }
            parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
      }
    }
    return parse_tree__parse_inst_mode_name__succeeded;
  }
}

void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____why_no_constrained_inst_var_0_0(
  MR_Word * parse_tree__parse_inst_mode_name__HeadVar__1_1,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__2_2,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded;
    MR_Integer parse_tree__parse_inst_mode_name__Cast_HeadVar1_4 = (MR_Integer) parse_tree__parse_inst_mode_name__HeadVar__2_2;
    MR_Integer parse_tree__parse_inst_mode_name__Cast_HeadVar2_5 = (MR_Integer) parse_tree__parse_inst_mode_name__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_inst_mode_name__HeadVar__1_1, parse_tree__parse_inst_mode_name__Cast_HeadVar1_4, parse_tree__parse_inst_mode_name__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____why_no_constrained_inst_var_0_0(
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__2_1,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded = (parse_tree__parse_inst_mode_name__HeadVar__2_1 == parse_tree__parse_inst_mode_name__HeadVar__2_2);

    return parse_tree__parse_inst_mode_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____known_inst_kind_1_0(
  MR_Word parse_tree__parse_inst_mode_name__TypeInfo_for_T_24,
  MR_Word * parse_tree__parse_inst_mode_name__HeadVar__1_1,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__2_2,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded;
    MR_Integer parse_tree__parse_inst_mode_name__CastX_22 = (MR_Integer) parse_tree__parse_inst_mode_name__HeadVar__2_2;
    MR_Integer parse_tree__parse_inst_mode_name__CastY_23 = (MR_Integer) parse_tree__parse_inst_mode_name__HeadVar__3_3;

    parse_tree__parse_inst_mode_name__succeeded = (parse_tree__parse_inst_mode_name__CastX_22 == parse_tree__parse_inst_mode_name__CastY_23);
    if (parse_tree__parse_inst_mode_name__succeeded)
      *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__parse_inst_mode_name__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__parse_inst_mode_name__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    parse_tree__prog_data____Compare____mer_inst_0_0(parse_tree__parse_inst_mode_name__HeadVar__1_1, parse_tree__parse_inst_mode_name__Var_31, parse_tree__parse_inst_mode_name__ArgY1_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__parse_inst_mode_name__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__parse_inst_mode_name__ArgY1_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    parse_tree__parse_inst_mode_name____Compare____known_compound_inst_kind_1_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_24, parse_tree__parse_inst_mode_name__HeadVar__1_1, parse_tree__parse_inst_mode_name__Var_30, parse_tree__parse_inst_mode_name__ArgY1_13);
                  }
                }
                break;
              case (MR_Integer) 2:
                *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String parse_tree__parse_inst_mode_name__Var_29 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String parse_tree__parse_inst_mode_name__ArgY1_21 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__parse_inst_mode_name__HeadVar__1_1, parse_tree__parse_inst_mode_name__Var_29, parse_tree__parse_inst_mode_name__ArgY1_21);
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
parse_tree__parse_inst_mode_name____Unify____known_inst_kind_1_0(
  MR_Word parse_tree__parse_inst_mode_name__TypeInfo_for_T_11,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__1_1,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded;
    MR_Integer parse_tree__parse_inst_mode_name__CastX_9 = (MR_Integer) parse_tree__parse_inst_mode_name__HeadVar__1_1;
    MR_Integer parse_tree__parse_inst_mode_name__CastY_10 = (MR_Integer) parse_tree__parse_inst_mode_name__HeadVar__2_2;

    parse_tree__parse_inst_mode_name__succeeded = (parse_tree__parse_inst_mode_name__CastX_9 == parse_tree__parse_inst_mode_name__CastY_10);
    if (parse_tree__parse_inst_mode_name__succeeded)
      parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__parse_inst_mode_name__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__parse_inst_mode_name__ArgY1_4;

            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_inst_mode_name__succeeded)
              {
                parse_tree__parse_inst_mode_name__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__parse_inst_mode_name__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__parse_inst_mode_name__ArgX1_3, parse_tree__parse_inst_mode_name__ArgY1_4);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__parse_inst_mode_name__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__parse_inst_mode_name__ArgY1_6;

            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_inst_mode_name__succeeded)
              {
                parse_tree__parse_inst_mode_name__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__parse_inst_mode_name__succeeded = parse_tree__parse_inst_mode_name____Unify____known_compound_inst_kind_1_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_11, parse_tree__parse_inst_mode_name__ArgX1_5, parse_tree__parse_inst_mode_name__ArgY1_6);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String parse_tree__parse_inst_mode_name__ArgX1_7 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 0)));
            MR_String parse_tree__parse_inst_mode_name__ArgY1_8;

            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__parse_inst_mode_name__succeeded)
              {
                parse_tree__parse_inst_mode_name__ArgY1_8 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)));
                parse_tree__parse_inst_mode_name__succeeded = (strcmp(parse_tree__parse_inst_mode_name__ArgX1_7, parse_tree__parse_inst_mode_name__ArgY1_8) == 0);
              }
          }
          break;
      }
    return parse_tree__parse_inst_mode_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____known_compound_inst_kind_1_0(
  MR_Word parse_tree__parse_inst_mode_name__TypeInfo_for_T_78,
  MR_Word * parse_tree__parse_inst_mode_name__HeadVar__1_1,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__2_2,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded;
    MR_Integer parse_tree__parse_inst_mode_name__CastX_76 = (MR_Integer) parse_tree__parse_inst_mode_name__HeadVar__2_2;
    MR_Integer parse_tree__parse_inst_mode_name__CastY_77 = (MR_Integer) parse_tree__parse_inst_mode_name__HeadVar__3_3;

    parse_tree__parse_inst_mode_name__succeeded = (parse_tree__parse_inst_mode_name__CastX_76 == parse_tree__parse_inst_mode_name__CastY_77);
    if (parse_tree__parse_inst_mode_name__succeeded)
      *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box parse_tree__parse_inst_mode_name__Var_82 = (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 1));
            MR_Box parse_tree__parse_inst_mode_name__Var_83 = (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Box parse_tree__parse_inst_mode_name__ArgY1_5 = (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 0));
                  MR_Box parse_tree__parse_inst_mode_name__ArgY2_7 = (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 1));
                  MR_Word parse_tree__parse_inst_mode_name__Var_8;

                  {
                    mercury__builtin__compare_3_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_78, &parse_tree__parse_inst_mode_name__Var_8, parse_tree__parse_inst_mode_name__Var_83, parse_tree__parse_inst_mode_name__ArgY1_5);
                  }
                  parse_tree__parse_inst_mode_name__succeeded = (parse_tree__parse_inst_mode_name__Var_8 == (MR_Integer) 0);
                  parse_tree__parse_inst_mode_name__succeeded = !(parse_tree__parse_inst_mode_name__succeeded);
                  if (parse_tree__parse_inst_mode_name__succeeded)
                    *parse_tree__parse_inst_mode_name__HeadVar__1_1 = parse_tree__parse_inst_mode_name__Var_8;
                  else
                    {
                      mercury__builtin__compare_3_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_78, parse_tree__parse_inst_mode_name__HeadVar__1_1, parse_tree__parse_inst_mode_name__Var_82, parse_tree__parse_inst_mode_name__ArgY2_7);
                    }
                }
                break;
              case (MR_Integer) 1:
                *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box parse_tree__parse_inst_mode_name__Var_80 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 1));
            MR_Box parse_tree__parse_inst_mode_name__Var_81 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box parse_tree__parse_inst_mode_name__ArgY1_27 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 0));
                  MR_Box parse_tree__parse_inst_mode_name__ArgY2_29 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 1));
                  MR_Word parse_tree__parse_inst_mode_name__Var_30;

                  {
                    mercury__builtin__compare_3_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_78, &parse_tree__parse_inst_mode_name__Var_30, parse_tree__parse_inst_mode_name__Var_81, parse_tree__parse_inst_mode_name__ArgY1_27);
                  }
                  parse_tree__parse_inst_mode_name__succeeded = (parse_tree__parse_inst_mode_name__Var_30 == (MR_Integer) 0);
                  parse_tree__parse_inst_mode_name__succeeded = !(parse_tree__parse_inst_mode_name__succeeded);
                  if (parse_tree__parse_inst_mode_name__succeeded)
                    *parse_tree__parse_inst_mode_name__HeadVar__1_1 = parse_tree__parse_inst_mode_name__Var_30;
                  else
                    {
                      mercury__builtin__compare_3_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_78, parse_tree__parse_inst_mode_name__HeadVar__1_1, parse_tree__parse_inst_mode_name__Var_80, parse_tree__parse_inst_mode_name__ArgY2_29);
                    }
                }
                break;
              case (MR_Integer) 2:
                *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box parse_tree__parse_inst_mode_name__Var_79 = (MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Box parse_tree__parse_inst_mode_name__ArgY1_47 = (MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 0));

                  {
                    mercury__builtin__compare_3_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_78, parse_tree__parse_inst_mode_name__HeadVar__1_1, parse_tree__parse_inst_mode_name__Var_79, parse_tree__parse_inst_mode_name__ArgY1_47);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box parse_tree__parse_inst_mode_name__Var_85 = (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 1));

                switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Box parse_tree__parse_inst_mode_name__ArgY1_61 = (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 1));

                          {
                            mercury__builtin__compare_3_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_78, parse_tree__parse_inst_mode_name__HeadVar__1_1, parse_tree__parse_inst_mode_name__Var_85, parse_tree__parse_inst_mode_name__ArgY1_61);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box parse_tree__parse_inst_mode_name__Var_84 = (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 1));

                switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Box parse_tree__parse_inst_mode_name__ArgY1_75 = (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 1));

                          {
                            mercury__builtin__compare_3_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_78, parse_tree__parse_inst_mode_name__HeadVar__1_1, parse_tree__parse_inst_mode_name__Var_84, parse_tree__parse_inst_mode_name__ArgY1_75);
                          }
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
  MR_Word parse_tree__parse_inst_mode_name__TypeInfo_for_T_19,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__1_1,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded;
    MR_Integer parse_tree__parse_inst_mode_name__CastX_17 = (MR_Integer) parse_tree__parse_inst_mode_name__HeadVar__1_1;
    MR_Integer parse_tree__parse_inst_mode_name__CastY_18 = (MR_Integer) parse_tree__parse_inst_mode_name__HeadVar__2_2;

    parse_tree__parse_inst_mode_name__succeeded = (parse_tree__parse_inst_mode_name__CastX_17 == parse_tree__parse_inst_mode_name__CastY_18);
    if (parse_tree__parse_inst_mode_name__succeeded)
      parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box parse_tree__parse_inst_mode_name__ArgX1_3 = (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 0));
            MR_Box parse_tree__parse_inst_mode_name__ArgY1_4;
            MR_Box parse_tree__parse_inst_mode_name__ArgX2_5 = (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 1));
            MR_Box parse_tree__parse_inst_mode_name__ArgY2_6;

            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_inst_mode_name__succeeded)
              {
                parse_tree__parse_inst_mode_name__ArgY1_4 = (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0));
                parse_tree__parse_inst_mode_name__ArgY2_6 = (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 1));
                {
                  parse_tree__parse_inst_mode_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_19, parse_tree__parse_inst_mode_name__ArgX1_3, parse_tree__parse_inst_mode_name__ArgY1_4);
                }
                if (parse_tree__parse_inst_mode_name__succeeded)
                  {
                    parse_tree__parse_inst_mode_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_19, parse_tree__parse_inst_mode_name__ArgX2_5, parse_tree__parse_inst_mode_name__ArgY2_6);
                  }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box parse_tree__parse_inst_mode_name__ArgX1_7 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 0));
            MR_Box parse_tree__parse_inst_mode_name__ArgY1_8;
            MR_Box parse_tree__parse_inst_mode_name__ArgX2_9 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 1));
            MR_Box parse_tree__parse_inst_mode_name__ArgY2_10;

            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_inst_mode_name__succeeded)
              {
                parse_tree__parse_inst_mode_name__ArgY1_8 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0));
                parse_tree__parse_inst_mode_name__ArgY2_10 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 1));
                {
                  parse_tree__parse_inst_mode_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_19, parse_tree__parse_inst_mode_name__ArgX1_7, parse_tree__parse_inst_mode_name__ArgY1_8);
                }
                if (parse_tree__parse_inst_mode_name__succeeded)
                  {
                    parse_tree__parse_inst_mode_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_19, parse_tree__parse_inst_mode_name__ArgX2_9, parse_tree__parse_inst_mode_name__ArgY2_10);
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box parse_tree__parse_inst_mode_name__ArgX1_11 = (MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 0));
            MR_Box parse_tree__parse_inst_mode_name__ArgY1_12;

            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__parse_inst_mode_name__succeeded)
              {
                parse_tree__parse_inst_mode_name__ArgY1_12 = (MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0));
                {
                  parse_tree__parse_inst_mode_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_19, parse_tree__parse_inst_mode_name__ArgX1_11, parse_tree__parse_inst_mode_name__ArgY1_12);
                }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box parse_tree__parse_inst_mode_name__ArgX1_13 = (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 1));
                MR_Box parse_tree__parse_inst_mode_name__ArgY1_14;

                parse_tree__parse_inst_mode_name__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (parse_tree__parse_inst_mode_name__succeeded)
                  {
                    parse_tree__parse_inst_mode_name__ArgY1_14 = (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 1));
                    {
                      parse_tree__parse_inst_mode_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_19, parse_tree__parse_inst_mode_name__ArgX1_13, parse_tree__parse_inst_mode_name__ArgY1_14);
                    }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box parse_tree__parse_inst_mode_name__ArgX1_15 = (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 1));
                MR_Box parse_tree__parse_inst_mode_name__ArgY1_16;

                parse_tree__parse_inst_mode_name__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (parse_tree__parse_inst_mode_name__succeeded)
                  {
                    parse_tree__parse_inst_mode_name__ArgY1_16 = (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 1));
                    {
                      parse_tree__parse_inst_mode_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_19, parse_tree__parse_inst_mode_name__ArgX1_15, parse_tree__parse_inst_mode_name__ArgY1_16);
                    }
                  }
              }
              break;
          }
          break;
      }
    return parse_tree__parse_inst_mode_name__succeeded;
  }
}

void MR_CALL 
parse_tree__parse_inst_mode_name____Compare____allow_constrained_inst_var_0_0(
  MR_Word * parse_tree__parse_inst_mode_name__HeadVar__1_1,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__2_2,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded;
    MR_Integer parse_tree__parse_inst_mode_name__CastX_8 = (MR_Integer) parse_tree__parse_inst_mode_name__HeadVar__2_2;
    MR_Integer parse_tree__parse_inst_mode_name__CastY_9 = (MR_Integer) parse_tree__parse_inst_mode_name__HeadVar__3_3;

    parse_tree__parse_inst_mode_name__succeeded = (parse_tree__parse_inst_mode_name__CastX_8 == parse_tree__parse_inst_mode_name__CastY_9);
    if (parse_tree__parse_inst_mode_name__succeeded)
      *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((parse_tree__parse_inst_mode_name__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((parse_tree__parse_inst_mode_name__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 0;
      else
        *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Word parse_tree__parse_inst_mode_name__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)));

        if ((parse_tree__parse_inst_mode_name__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word parse_tree__parse_inst_mode_name__ArgY1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 0)));
            MR_Integer parse_tree__parse_inst_mode_name__Var_12 = (MR_Integer) parse_tree__parse_inst_mode_name__Var_11;
            MR_Integer parse_tree__parse_inst_mode_name__Var_13 = (MR_Integer) parse_tree__parse_inst_mode_name__ArgY1_7;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_inst_mode_name__HeadVar__1_1, parse_tree__parse_inst_mode_name__Var_12, parse_tree__parse_inst_mode_name__Var_13);
            }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__parse_inst_mode_name____Unify____allow_constrained_inst_var_0_0(
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__1_1,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded;
    MR_Integer parse_tree__parse_inst_mode_name__CastX_7 = (MR_Integer) parse_tree__parse_inst_mode_name__HeadVar__1_1;
    MR_Integer parse_tree__parse_inst_mode_name__CastY_8 = (MR_Integer) parse_tree__parse_inst_mode_name__HeadVar__2_2;

    parse_tree__parse_inst_mode_name__succeeded = (parse_tree__parse_inst_mode_name__CastX_7 == parse_tree__parse_inst_mode_name__CastY_8);
    if (parse_tree__parse_inst_mode_name__succeeded)
      parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
    else
    if ((parse_tree__parse_inst_mode_name__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer parse_tree__parse_inst_mode_name__CastX_3 = (MR_Integer) parse_tree__parse_inst_mode_name__HeadVar__1_1;
        MR_Integer parse_tree__parse_inst_mode_name__CastY_4 = (MR_Integer) parse_tree__parse_inst_mode_name__HeadVar__2_2;

        parse_tree__parse_inst_mode_name__succeeded = (parse_tree__parse_inst_mode_name__CastY_4 == parse_tree__parse_inst_mode_name__CastX_3);
      }
    else
      {
        MR_Word parse_tree__parse_inst_mode_name__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__parse_inst_mode_name__ArgY1_6;

        parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            parse_tree__parse_inst_mode_name__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)));
            parse_tree__parse_inst_mode_name__succeeded = (parse_tree__parse_inst_mode_name__ArgX1_5 == parse_tree__parse_inst_mode_name__ArgY1_6);
          }
      }
    return parse_tree__parse_inst_mode_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_name__parse_bound_inst_5_p_0(
  MR_Word parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_6,
  MR_Word parse_tree__parse_inst_mode_name__VarSet_7,
  MR_Word parse_tree__parse_inst_mode_name__ContextPieces_8,
  MR_Word parse_tree__parse_inst_mode_name__Term_9,
  MR_Word * parse_tree__parse_inst_mode_name__MaybeBoundInst_10)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded;

    if (((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__Term_9)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__parse_inst_mode_name__Functor_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Term_9, (MR_Integer) 0)));
        MR_Word parse_tree__parse_inst_mode_name__ArgTerms0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Term_9, (MR_Integer) 1)));
        MR_Word parse_tree__parse_inst_mode_name__Context_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Term_9, (MR_Integer) 2)));

        switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__Functor_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__parse_inst_mode_name__MaybeFunctor_19;
              MR_Word parse_tree__parse_inst_mode_name__Var_102;

              {
                parse_tree__parse_inst_mode_name__Var_102 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
              }
              {
                parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__Var_102, parse_tree__parse_inst_mode_name__Term_9, &parse_tree__parse_inst_mode_name__MaybeFunctor_19);
              }
              if (((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeFunctor_19)) == (MR_mktag((MR_Integer) 0))))
                {
                  MR_Word parse_tree__parse_inst_mode_name__Specs_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__MaybeFunctor_19, (MR_Integer) 0)));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__parse_inst_mode_name__MaybeBoundInst_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Specs_129));
                  }
                }
              else
                {
                  MR_Word parse_tree__parse_inst_mode_name__SymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeFunctor_19, (MR_Integer) 0)));
                  MR_Word parse_tree__parse_inst_mode_name__ArgTerms1_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeFunctor_19, (MR_Integer) 1)));
                  MR_Word parse_tree__parse_inst_mode_name__MaybeArgInsts_22;

                  {
                    parse_tree__parse_inst_mode_name__parse_insts_5_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_6, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__ContextPieces_8, parse_tree__parse_inst_mode_name__ArgTerms1_21, &parse_tree__parse_inst_mode_name__MaybeArgInsts_22);
                  }
                  if (((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeArgInsts_22)) == (MR_mktag((MR_Integer) 0))))
                    *parse_tree__parse_inst_mode_name__MaybeBoundInst_10 = (MR_Word) parse_tree__parse_inst_mode_name__MaybeArgInsts_22;
                  else
                    {
                      MR_Word parse_tree__parse_inst_mode_name__ArgInsts_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeArgInsts_22, (MR_Integer) 0)));
                      MR_Integer parse_tree__parse_inst_mode_name__Arity_24;
                      MR_Word parse_tree__parse_inst_mode_name__ConsId_25;
                      MR_Word parse_tree__parse_inst_mode_name__Var_103;
                      MR_Word parse_tree__parse_inst_mode_name__Var_104;

                      {
                        mercury__list__length_2_p_0((MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_1[2], parse_tree__parse_inst_mode_name__ArgTerms1_21, &parse_tree__parse_inst_mode_name__Arity_24);
                      }
                      {
                        parse_tree__parse_inst_mode_name__Var_103 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                      }
                      {
                        parse_tree__parse_inst_mode_name__ConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__ConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__ConsId_25, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__SymName_20));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__ConsId_25, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__Arity_24));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__ConsId_25, 3) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_103));
                      }
                      {
                        parse_tree__parse_inst_mode_name__Var_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_104, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__ConsId_25));
                        MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_104, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__ArgInsts_23));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__parse_inst_mode_name__MaybeBoundInst_10 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_104));
                      }
                    }
                }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            if ((parse_tree__parse_inst_mode_name__ArgTerms0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word parse_tree__parse_inst_mode_name__BoundInst_34;
                MR_Word parse_tree__parse_inst_mode_name__ConsId_133;

                {
                  parse_tree__prog_util__det_make_functor_cons_id_3_p_0(parse_tree__parse_inst_mode_name__Functor_16, (MR_Integer) 0, &parse_tree__parse_inst_mode_name__ConsId_133);
                }
                {
                  parse_tree__parse_inst_mode_name__BoundInst_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BoundInst_34, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__ConsId_133));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BoundInst_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_inst_mode_name__MaybeBoundInst_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__BoundInst_34));
                }
              }
            else
              {
                MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_163_163;
                MR_String parse_tree__parse_inst_mode_name__FunctorStr_41;
                MR_Word parse_tree__parse_inst_mode_name__Var_44;
                MR_Word parse_tree__parse_inst_mode_name__Var_45;
                MR_Word parse_tree__parse_inst_mode_name__Var_47;
                MR_Word parse_tree__parse_inst_mode_name__Var_50;
                MR_Word parse_tree__parse_inst_mode_name__Var_51;
                MR_Word parse_tree__parse_inst_mode_name__Var_52;
                MR_Word parse_tree__parse_inst_mode_name__Var_55;
                MR_Word parse_tree__parse_inst_mode_name__Var_56;
                MR_Word parse_tree__parse_inst_mode_name__Var_65;
                MR_Word parse_tree__parse_inst_mode_name__Var_66;
                MR_Word parse_tree__parse_inst_mode_name__Var_67;
                MR_Word parse_tree__parse_inst_mode_name__Var_68;
                MR_Word parse_tree__parse_inst_mode_name__Var_71;
                MR_String parse_tree__parse_inst_mode_name__TermStr_134;
                MR_Word parse_tree__parse_inst_mode_name__Pieces_135;
                MR_Word parse_tree__parse_inst_mode_name__Spec_136;

                switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__Functor_16)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    parse_tree__parse_inst_mode_name__FunctorStr_41 = (MR_String) "an integer";
                    break;
                  case (MR_Integer) 2:
                    parse_tree__parse_inst_mode_name__FunctorStr_41 = (MR_String) "a string";
                    break;
                  case (MR_Integer) 3:
                    parse_tree__parse_inst_mode_name__FunctorStr_41 = (MR_String) "a float";
                    break;
                }
                {
                  parse_tree__parse_inst_mode_name__TermStr_134 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__Term_9);
                }
                parse_tree__parse_inst_mode_name__TypeCtorInfo_163_163 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                {
                  parse_tree__parse_inst_mode_name__Var_44 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_163_163, parse_tree__parse_inst_mode_name__ContextPieces_8);
                }
                {
                  parse_tree__parse_inst_mode_name__Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_51, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__FunctorStr_41));
                }
                {
                  parse_tree__parse_inst_mode_name__Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_56, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_134));
                }
                {
                  parse_tree__parse_inst_mode_name__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_55, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_56));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[53])));
                }
                {
                  parse_tree__parse_inst_mode_name__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[60])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_52, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_55));
                }
                {
                  parse_tree__parse_inst_mode_name__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_50, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_51));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_50, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_52));
                }
                {
                  parse_tree__parse_inst_mode_name__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[58])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_47, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_50));
                }
                {
                  parse_tree__parse_inst_mode_name__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_45, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_47));
                }
                {
                  parse_tree__parse_inst_mode_name__Pieces_135 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_163_163, parse_tree__parse_inst_mode_name__Var_44, parse_tree__parse_inst_mode_name__Var_45);
                }
                {
                  parse_tree__parse_inst_mode_name__Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_68, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_135));
                }
                {
                  parse_tree__parse_inst_mode_name__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_67, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_68));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_inst_mode_name__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_66, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_151));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_66, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_67));
                }
                {
                  parse_tree__parse_inst_mode_name__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_65, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_66));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_inst_mode_name__Spec_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_136, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_65));
                }
                {
                  parse_tree__parse_inst_mode_name__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_71, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_136));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_inst_mode_name__MaybeBoundInst_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_71));
                }
              }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Functor_16, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                if ((parse_tree__parse_inst_mode_name__ArgTerms0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word parse_tree__parse_inst_mode_name__BoundInst_34;
                    MR_Word parse_tree__parse_inst_mode_name__ConsId_133;

                    {
                      parse_tree__prog_util__det_make_functor_cons_id_3_p_0(parse_tree__parse_inst_mode_name__Functor_16, (MR_Integer) 0, &parse_tree__parse_inst_mode_name__ConsId_133);
                    }
                    {
                      parse_tree__parse_inst_mode_name__BoundInst_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BoundInst_34, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__ConsId_133));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BoundInst_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__parse_inst_mode_name__MaybeBoundInst_10 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__BoundInst_34));
                    }
                  }
                else
                  {
                    MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_163_163;
                    MR_String parse_tree__parse_inst_mode_name__FunctorStr_41;
                    MR_Word parse_tree__parse_inst_mode_name__Var_44;
                    MR_Word parse_tree__parse_inst_mode_name__Var_45;
                    MR_Word parse_tree__parse_inst_mode_name__Var_47;
                    MR_Word parse_tree__parse_inst_mode_name__Var_50;
                    MR_Word parse_tree__parse_inst_mode_name__Var_51;
                    MR_Word parse_tree__parse_inst_mode_name__Var_52;
                    MR_Word parse_tree__parse_inst_mode_name__Var_55;
                    MR_Word parse_tree__parse_inst_mode_name__Var_56;
                    MR_Word parse_tree__parse_inst_mode_name__Var_65;
                    MR_Word parse_tree__parse_inst_mode_name__Var_66;
                    MR_Word parse_tree__parse_inst_mode_name__Var_67;
                    MR_Word parse_tree__parse_inst_mode_name__Var_68;
                    MR_Word parse_tree__parse_inst_mode_name__Var_71;
                    MR_String parse_tree__parse_inst_mode_name__TermStr_134;
                    MR_Word parse_tree__parse_inst_mode_name__Pieces_135;
                    MR_Word parse_tree__parse_inst_mode_name__Spec_136;

                    switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__Functor_16)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        parse_tree__parse_inst_mode_name__FunctorStr_41 = (MR_String) "an integer";
                        break;
                      case (MR_Integer) 2:
                        parse_tree__parse_inst_mode_name__FunctorStr_41 = (MR_String) "a string";
                        break;
                      case (MR_Integer) 3:
                        parse_tree__parse_inst_mode_name__FunctorStr_41 = (MR_String) "a float";
                        break;
                    }
                    {
                      parse_tree__parse_inst_mode_name__TermStr_134 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__Term_9);
                    }
                    parse_tree__parse_inst_mode_name__TypeCtorInfo_163_163 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                    {
                      parse_tree__parse_inst_mode_name__Var_44 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_163_163, parse_tree__parse_inst_mode_name__ContextPieces_8);
                    }
                    {
                      parse_tree__parse_inst_mode_name__Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_51, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__FunctorStr_41));
                    }
                    {
                      parse_tree__parse_inst_mode_name__Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_56, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_134));
                    }
                    {
                      parse_tree__parse_inst_mode_name__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_55, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_56));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[53])));
                    }
                    {
                      parse_tree__parse_inst_mode_name__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[60])));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_52, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_55));
                    }
                    {
                      parse_tree__parse_inst_mode_name__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_50, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_51));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_50, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_52));
                    }
                    {
                      parse_tree__parse_inst_mode_name__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[58])));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_47, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_50));
                    }
                    {
                      parse_tree__parse_inst_mode_name__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_45, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_47));
                    }
                    {
                      parse_tree__parse_inst_mode_name__Pieces_135 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_163_163, parse_tree__parse_inst_mode_name__Var_44, parse_tree__parse_inst_mode_name__Var_45);
                    }
                    {
                      parse_tree__parse_inst_mode_name__Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_68, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_135));
                    }
                    {
                      parse_tree__parse_inst_mode_name__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_67, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_68));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_inst_mode_name__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_66, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_151));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_66, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_67));
                    }
                    {
                      parse_tree__parse_inst_mode_name__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_65, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_66));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_inst_mode_name__Spec_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_136, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_65));
                    }
                    {
                      parse_tree__parse_inst_mode_name__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_71, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_136));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      *parse_tree__parse_inst_mode_name__MaybeBoundInst_10 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_71));
                    }
                  }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_161_161;
                  MR_Word parse_tree__parse_inst_mode_name__Var_75;
                  MR_Word parse_tree__parse_inst_mode_name__Var_76;
                  MR_Word parse_tree__parse_inst_mode_name__Var_78;
                  MR_Word parse_tree__parse_inst_mode_name__Var_81;
                  MR_Word parse_tree__parse_inst_mode_name__Var_84;
                  MR_Word parse_tree__parse_inst_mode_name__Var_85;
                  MR_Word parse_tree__parse_inst_mode_name__Var_94;
                  MR_Word parse_tree__parse_inst_mode_name__Var_95;
                  MR_Word parse_tree__parse_inst_mode_name__Var_96;
                  MR_Word parse_tree__parse_inst_mode_name__Var_97;
                  MR_Word parse_tree__parse_inst_mode_name__Var_100;
                  MR_String parse_tree__parse_inst_mode_name__TermStr_130;
                  MR_Word parse_tree__parse_inst_mode_name__Pieces_131;
                  MR_Word parse_tree__parse_inst_mode_name__Spec_132;

                  {
                    parse_tree__parse_inst_mode_name__TermStr_130 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__Term_9);
                  }
                  parse_tree__parse_inst_mode_name__TypeCtorInfo_161_161 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                  {
                    parse_tree__parse_inst_mode_name__Var_75 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_161_161, parse_tree__parse_inst_mode_name__ContextPieces_8);
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_85, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_130));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_84, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_85));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[55])));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[60])));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_81, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_84));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[73])));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_78, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_81));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_76, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_78));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Pieces_131 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_161_161, parse_tree__parse_inst_mode_name__Var_75, parse_tree__parse_inst_mode_name__Var_76);
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_97, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_131));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_96, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_97));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_95, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_151));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_95, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_96));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_94, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_95));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Spec_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_132, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_132, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_94));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_100, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_132));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__parse_inst_mode_name__MaybeBoundInst_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_100));
                  }
                }
                break;
            }
            break;
        }
      }
    else
      {
        MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_156_156;
        MR_Word parse_tree__parse_inst_mode_name__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Term_9, (MR_Integer) 1)));
        MR_String parse_tree__parse_inst_mode_name__TermStr_13;
        MR_Word parse_tree__parse_inst_mode_name__Pieces_14;
        MR_Word parse_tree__parse_inst_mode_name__Spec_15;
        MR_Word parse_tree__parse_inst_mode_name__Var_105;
        MR_Word parse_tree__parse_inst_mode_name__Var_106;
        MR_Word parse_tree__parse_inst_mode_name__Var_108;
        MR_Word parse_tree__parse_inst_mode_name__Var_111;
        MR_Word parse_tree__parse_inst_mode_name__Var_112;
        MR_Word parse_tree__parse_inst_mode_name__Var_121;
        MR_Word parse_tree__parse_inst_mode_name__Var_122;
        MR_Word parse_tree__parse_inst_mode_name__Var_123;
        MR_Word parse_tree__parse_inst_mode_name__Var_124;
        MR_Word parse_tree__parse_inst_mode_name__Var_127;
        MR_Word parse_tree__parse_inst_mode_name__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Term_9, (MR_Integer) 0)));

        {
          parse_tree__parse_inst_mode_name__TermStr_13 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__Term_9);
        }
        parse_tree__parse_inst_mode_name__TypeCtorInfo_156_156 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          parse_tree__parse_inst_mode_name__Var_105 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_156_156, parse_tree__parse_inst_mode_name__ContextPieces_8);
        }
        {
          parse_tree__parse_inst_mode_name__Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_112, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_13));
        }
        {
          parse_tree__parse_inst_mode_name__Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_111, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_112));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[57])));
        }
        {
          parse_tree__parse_inst_mode_name__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_108, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[58])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_108, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_111));
        }
        {
          parse_tree__parse_inst_mode_name__Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_106, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_106, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_108));
        }
        {
          parse_tree__parse_inst_mode_name__Pieces_14 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_156_156, parse_tree__parse_inst_mode_name__Var_105, parse_tree__parse_inst_mode_name__Var_106);
        }
        {
          parse_tree__parse_inst_mode_name__Var_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_124, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_14));
        }
        {
          parse_tree__parse_inst_mode_name__Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_123, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_124));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_inst_mode_name__Var_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_122, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_12));
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_122, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_123));
        }
        {
          parse_tree__parse_inst_mode_name__Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_121, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_122));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_inst_mode_name__Spec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_15, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_121));
        }
        {
          parse_tree__parse_inst_mode_name__Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_127, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_15));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_inst_mode_name__MaybeBoundInst_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_127));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_name__parse_bound_insts_5_p_0(
  MR_Word parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_1,
  MR_Word parse_tree__parse_inst_mode_name__VarSet_2,
  MR_Word parse_tree__parse_inst_mode_name__ContextPieces_3,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__4_4,
  MR_Word * parse_tree__parse_inst_mode_name__HeadVar__5_5)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded;

    if ((parse_tree__parse_inst_mode_name__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__parse_inst_mode_name__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_2[4]);
      }
    else
      {
        MR_Word parse_tree__parse_inst_mode_name__Term_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word parse_tree__parse_inst_mode_name__Terms_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word parse_tree__parse_inst_mode_name__MaybeHeadBoundInst_16;
        MR_Word parse_tree__parse_inst_mode_name__MaybeTailBoundInsts_17;
        MR_Word parse_tree__parse_inst_mode_name__HeadBoundInst_18;
        MR_Word parse_tree__parse_inst_mode_name__TailBoundInsts_19;

        {
          parse_tree__parse_inst_mode_name__parse_bound_inst_5_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_1, parse_tree__parse_inst_mode_name__VarSet_2, parse_tree__parse_inst_mode_name__ContextPieces_3, parse_tree__parse_inst_mode_name__Term_13, &parse_tree__parse_inst_mode_name__MaybeHeadBoundInst_16);
        }
        {
          parse_tree__parse_inst_mode_name__parse_bound_insts_5_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_1, parse_tree__parse_inst_mode_name__VarSet_2, parse_tree__parse_inst_mode_name__ContextPieces_3, parse_tree__parse_inst_mode_name__Terms_14, &parse_tree__parse_inst_mode_name__MaybeTailBoundInsts_17);
        }
        parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeHeadBoundInst_16)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            parse_tree__parse_inst_mode_name__HeadBoundInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeHeadBoundInst_16, (MR_Integer) 0)));
            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeTailBoundInsts_17)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_inst_mode_name__succeeded)
              parse_tree__parse_inst_mode_name__TailBoundInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeTailBoundInsts_17, (MR_Integer) 0)));
          }
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            MR_Word parse_tree__parse_inst_mode_name__Var_21;

            {
              parse_tree__parse_inst_mode_name__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_21, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__HeadBoundInst_18));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_21, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TailBoundInsts_19));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_inst_mode_name__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_21));
            }
          }
        else
          {
            MR_Word parse_tree__parse_inst_mode_name__Specs_20;
            MR_Word parse_tree__parse_inst_mode_name__Var_22;
            MR_Word parse_tree__parse_inst_mode_name__Var_23;

            {
              parse_tree__parse_inst_mode_name__Var_22 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, parse_tree__parse_inst_mode_name__MaybeHeadBoundInst_16);
            }
            {
              parse_tree__parse_inst_mode_name__Var_23 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_1[4], parse_tree__parse_inst_mode_name__MaybeTailBoundInsts_17);
            }
            {
              parse_tree__parse_inst_mode_name__Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_inst_mode_name__Var_22, parse_tree__parse_inst_mode_name__Var_23);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_inst_mode_name__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Specs_20));
            }
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_name__find_duplicate_cons_id_bound_insts_3_p_0(
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__1_1,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__2_2,
  MR_Word * parse_tree__parse_inst_mode_name__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded;

    if ((parse_tree__parse_inst_mode_name__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__parse_inst_mode_name__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word parse_tree__parse_inst_mode_name__Cur_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__parse_inst_mode_name__Next_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__parse_inst_mode_name__DuplicatesTail_9;
        MR_Word parse_tree__parse_inst_mode_name__PrevConsId_10;
        MR_Word parse_tree__parse_inst_mode_name__CurConsId_12;
        MR_Word parse_tree__parse_inst_mode_name__Var_11;
        MR_Word parse_tree__parse_inst_mode_name__Var_13;

        {
          parse_tree__parse_inst_mode_name__find_duplicate_cons_id_bound_insts_3_p_0(parse_tree__parse_inst_mode_name__Cur_6, parse_tree__parse_inst_mode_name__Next_7, &parse_tree__parse_inst_mode_name__DuplicatesTail_9);
        }
        parse_tree__parse_inst_mode_name__PrevConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 0)));
        parse_tree__parse_inst_mode_name__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 1)));
        parse_tree__parse_inst_mode_name__CurConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Cur_6, (MR_Integer) 0)));
        parse_tree__parse_inst_mode_name__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Cur_6, (MR_Integer) 1)));
        {
          parse_tree__parse_inst_mode_name__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(parse_tree__parse_inst_mode_name__PrevConsId_10, parse_tree__parse_inst_mode_name__CurConsId_12);
        }
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            MR_Word parse_tree__parse_inst_mode_name__Var_14;

            {
              parse_tree__parse_inst_mode_name__Var_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
              MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_14, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__CurConsId_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_inst_mode_name__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_14));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__DuplicatesTail_9));
            }
          }
        else
          *parse_tree__parse_inst_mode_name__HeadVar__3_3 = parse_tree__parse_inst_mode_name__DuplicatesTail_9;
      }
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_name__parse_bound_inst_list_6_p_0(
  MR_Word parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_7,
  MR_Word parse_tree__parse_inst_mode_name__VarSet_8,
  MR_Word parse_tree__parse_inst_mode_name__ContextPieces_9,
  MR_Word parse_tree__parse_inst_mode_name__DisjunctionTerm_10,
  MR_Word parse_tree__parse_inst_mode_name__Uniqueness_11,
  MR_Word * parse_tree__parse_inst_mode_name__MaybeInst_12)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded;
    MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_53_53 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word parse_tree__parse_inst_mode_name__DisjunctTerms_13;
    MR_Word parse_tree__parse_inst_mode_name__MaybeBoundInsts_14;

    {
      parse_tree__parse_util__disjunction_to_list_2_p_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_53_53, parse_tree__parse_inst_mode_name__DisjunctionTerm_10, &parse_tree__parse_inst_mode_name__DisjunctTerms_13);
    }
    {
      parse_tree__parse_inst_mode_name__parse_bound_insts_5_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_7, parse_tree__parse_inst_mode_name__VarSet_8, parse_tree__parse_inst_mode_name__ContextPieces_9, parse_tree__parse_inst_mode_name__DisjunctTerms_13, &parse_tree__parse_inst_mode_name__MaybeBoundInsts_14);
    }
    if (((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeBoundInsts_14)) == (MR_mktag((MR_Integer) 0))))
      *parse_tree__parse_inst_mode_name__MaybeInst_12 = (MR_Word) parse_tree__parse_inst_mode_name__MaybeBoundInsts_14;
    else
      {
        MR_Word parse_tree__parse_inst_mode_name__BoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeBoundInsts_14, (MR_Integer) 0)));
        MR_Word parse_tree__parse_inst_mode_name__SortedBoundInsts_17;
        MR_Word parse_tree__parse_inst_mode_name__Duplicates_21;
        MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_55_55;
        MR_Word parse_tree__parse_inst_mode_name__FirstBoundInst_18;
        MR_Word parse_tree__parse_inst_mode_name__LaterBoundInsts_19;
        MR_Word parse_tree__parse_inst_mode_name__Duplicates0_20;
        MR_Word parse_tree__parse_inst_mode_name__Var_22;
        MR_Word parse_tree__parse_inst_mode_name__Var_23;

        {
          mercury__list__sort_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, parse_tree__parse_inst_mode_name__BoundInsts_16, &parse_tree__parse_inst_mode_name__SortedBoundInsts_17);
        }
        parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__SortedBoundInsts_17)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            parse_tree__parse_inst_mode_name__FirstBoundInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__SortedBoundInsts_17, (MR_Integer) 0)));
            parse_tree__parse_inst_mode_name__LaterBoundInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__SortedBoundInsts_17, (MR_Integer) 1)));
            {
              parse_tree__parse_inst_mode_name__find_duplicate_cons_id_bound_insts_3_p_0(parse_tree__parse_inst_mode_name__FirstBoundInst_18, parse_tree__parse_inst_mode_name__LaterBoundInsts_19, &parse_tree__parse_inst_mode_name__Duplicates0_20);
            }
            parse_tree__parse_inst_mode_name__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            {
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_55_55, parse_tree__parse_inst_mode_name__Duplicates0_20, &parse_tree__parse_inst_mode_name__Duplicates_21);
            }
            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__Duplicates_21)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_inst_mode_name__succeeded)
              {
                parse_tree__parse_inst_mode_name__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Duplicates_21, (MR_Integer) 0)));
                parse_tree__parse_inst_mode_name__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Duplicates_21, (MR_Integer) 1)));
              }
          }
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            MR_Word parse_tree__parse_inst_mode_name__Pieces_24;
            MR_Word parse_tree__parse_inst_mode_name__Spec_25;
            MR_Word parse_tree__parse_inst_mode_name__Var_27;
            MR_Word parse_tree__parse_inst_mode_name__Var_28;
            MR_Word parse_tree__parse_inst_mode_name__Var_29;
            MR_Word parse_tree__parse_inst_mode_name__Var_31;
            MR_Word parse_tree__parse_inst_mode_name__Var_34;
            MR_Word parse_tree__parse_inst_mode_name__Var_43;
            MR_Word parse_tree__parse_inst_mode_name__Var_44;
            MR_Word parse_tree__parse_inst_mode_name__Var_45;
            MR_Word parse_tree__parse_inst_mode_name__Var_46;
            MR_Word parse_tree__parse_inst_mode_name__Var_47;
            MR_Word parse_tree__parse_inst_mode_name__Var_50;

            {
              parse_tree__parse_inst_mode_name__Var_27 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_56_56, parse_tree__parse_inst_mode_name__ContextPieces_9);
            }
            {
              parse_tree__parse_inst_mode_name__Var_34 = parse_tree__error_util__component_list_to_pieces_1_f_0(parse_tree__parse_inst_mode_name__Duplicates_21);
            }
            {
              parse_tree__parse_inst_mode_name__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[72])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_31, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_34));
            }
            {
              parse_tree__parse_inst_mode_name__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_29, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_31));
            }
            {
              parse_tree__parse_inst_mode_name__Var_28 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_56_56, parse_tree__parse_inst_mode_name__Var_29, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[51]));
            }
            {
              parse_tree__parse_inst_mode_name__Pieces_24 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_56_56, parse_tree__parse_inst_mode_name__Var_27, parse_tree__parse_inst_mode_name__Var_28);
            }
            {
              parse_tree__parse_inst_mode_name__Var_45 = mercury__term__get_term_context_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_53_53, parse_tree__parse_inst_mode_name__DisjunctionTerm_10);
            }
            {
              parse_tree__parse_inst_mode_name__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_47, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_24));
            }
            {
              parse_tree__parse_inst_mode_name__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_46, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_47));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_inst_mode_name__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_44, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_45));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_44, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_46));
            }
            {
              parse_tree__parse_inst_mode_name__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_43, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_44));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_inst_mode_name__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_25, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_43));
            }
            {
              parse_tree__parse_inst_mode_name__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_50, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_25));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_inst_mode_name__MaybeInst_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_50));
            }
          }
        else
          {
            MR_Word parse_tree__parse_inst_mode_name__Inst_26;

            {
              parse_tree__parse_inst_mode_name__Inst_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_26, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Uniqueness_11));
              MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_26, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_26, 3) = ((MR_Box) (parse_tree__parse_inst_mode_name__SortedBoundInsts_17));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_inst_mode_name__MaybeInst_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Inst_26));
            }
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_name__parse_higher_order_inst_6_p_0(
  MR_Word parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_7,
  MR_Word parse_tree__parse_inst_mode_name__VarSet_8,
  MR_Word parse_tree__parse_inst_mode_name__ContextPieces_9,
  MR_Word parse_tree__parse_inst_mode_name__BeforeIsTerm_10,
  MR_Word parse_tree__parse_inst_mode_name__DetTerm_11,
  MR_Word * parse_tree__parse_inst_mode_name__MaybeInst_12)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__BeforeIsTerm_10)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_inst_mode_name__BeforeIsArgTerms_14;
    MR_Word parse_tree__parse_inst_mode_name__IsAny_16;
    MR_String parse_tree__parse_inst_mode_name__BeforeIsFunctor_13;
    MR_Word parse_tree__parse_inst_mode_name__Var_37;
    MR_Word parse_tree__parse_inst_mode_name__Var_15;

    if (parse_tree__parse_inst_mode_name__succeeded)
      {
        parse_tree__parse_inst_mode_name__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BeforeIsTerm_10, (MR_Integer) 0)));
        parse_tree__parse_inst_mode_name__BeforeIsArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BeforeIsTerm_10, (MR_Integer) 1)));
        parse_tree__parse_inst_mode_name__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BeforeIsTerm_10, (MR_Integer) 2)));
        parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__Var_37)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            parse_tree__parse_inst_mode_name__BeforeIsFunctor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_37, (MR_Integer) 0)));
            if ((strcmp(parse_tree__parse_inst_mode_name__BeforeIsFunctor_13, (MR_String) "pred") == 0))
              {
                parse_tree__parse_inst_mode_name__IsAny_16 = (MR_Integer) 0;
                parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
              }
            else
            if ((strcmp(parse_tree__parse_inst_mode_name__BeforeIsFunctor_13, (MR_String) "any_pred") == 0))
              {
                parse_tree__parse_inst_mode_name__IsAny_16 = (MR_Integer) 1;
                parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
              }
            else
              parse_tree__parse_inst_mode_name__succeeded = MR_FALSE;
          }
      }
    if (parse_tree__parse_inst_mode_name__succeeded)
      {
        MR_Word parse_tree__parse_inst_mode_name__MaybeArgModes_17;
        MR_Word parse_tree__parse_inst_mode_name__MaybeDetism_18;
        MR_Word parse_tree__parse_inst_mode_name__ArgModes_19;
        MR_Word parse_tree__parse_inst_mode_name__Detism_20;

        {
          parse_tree__parse_inst_mode_name__parse_modes_5_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_7, parse_tree__parse_inst_mode_name__VarSet_8, parse_tree__parse_inst_mode_name__ContextPieces_9, parse_tree__parse_inst_mode_name__BeforeIsArgTerms_14, &parse_tree__parse_inst_mode_name__MaybeArgModes_17);
        }
        {
          parse_tree__parse_inst_mode_name__parse_determinism_3_p_0(parse_tree__parse_inst_mode_name__VarSet_8, parse_tree__parse_inst_mode_name__DetTerm_11, &parse_tree__parse_inst_mode_name__MaybeDetism_18);
        }
        parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeArgModes_17)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            parse_tree__parse_inst_mode_name__ArgModes_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeArgModes_17, (MR_Integer) 0)));
            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeDetism_18)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_inst_mode_name__succeeded)
              parse_tree__parse_inst_mode_name__Detism_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeDetism_18, (MR_Integer) 0)));
          }
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            MR_Word parse_tree__parse_inst_mode_name__PredInst_21;
            MR_Word parse_tree__parse_inst_mode_name__Inst_22;

            {
              parse_tree__parse_inst_mode_name__PredInst_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__PredInst_21, 0) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__PredInst_21, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__ArgModes_19));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__PredInst_21, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__PredInst_21, 3) = ((MR_Box) (parse_tree__parse_inst_mode_name__Detism_20));
            }
            switch (parse_tree__parse_inst_mode_name__IsAny_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__parse_inst_mode_name__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_inst_mode_name__PredInst_21);

                  {
                    parse_tree__parse_inst_mode_name__Inst_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_22, 1) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_22, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_43));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__parse_inst_mode_name__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_inst_mode_name__PredInst_21);

                  {
                    parse_tree__parse_inst_mode_name__Inst_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__Inst_22, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__Inst_22, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_41));
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_inst_mode_name__MaybeInst_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Inst_22));
            }
          }
        else
          {
            MR_Word parse_tree__parse_inst_mode_name__Specs_23;
            MR_Word parse_tree__parse_inst_mode_name__Var_44;
            MR_Word parse_tree__parse_inst_mode_name__Var_45;

            {
              parse_tree__parse_inst_mode_name__Var_44 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_1[0], parse_tree__parse_inst_mode_name__MaybeArgModes_17);
            }
            {
              parse_tree__parse_inst_mode_name__Var_45 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0, parse_tree__parse_inst_mode_name__MaybeDetism_18);
            }
            {
              parse_tree__parse_inst_mode_name__Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_inst_mode_name__Var_44, parse_tree__parse_inst_mode_name__Var_45);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_inst_mode_name__MaybeInst_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Specs_23));
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_inst_mode_name__RetModeTerm_26;
        MR_Word parse_tree__parse_inst_mode_name__ArgModesTerms_28;
        MR_Word parse_tree__parse_inst_mode_name__IsAny_126;
        MR_Word parse_tree__parse_inst_mode_name__FuncTerm_25;
        MR_String parse_tree__parse_inst_mode_name__FuncTermFunctor_27;
        MR_Word parse_tree__parse_inst_mode_name__Var_46;
        MR_Word parse_tree__parse_inst_mode_name__Var_47;
        MR_Word parse_tree__parse_inst_mode_name__Var_48;
        MR_Word parse_tree__parse_inst_mode_name__Var_49;
        MR_String parse_tree__parse_inst_mode_name__BeforeIsFunctor_110;
        MR_Word parse_tree__parse_inst_mode_name__BeforeIsArgTerms_111;
        MR_Word parse_tree__parse_inst_mode_name__Var_24;
        MR_Word parse_tree__parse_inst_mode_name__Var_29;

        parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__BeforeIsTerm_10)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            parse_tree__parse_inst_mode_name__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BeforeIsTerm_10, (MR_Integer) 0)));
            parse_tree__parse_inst_mode_name__BeforeIsArgTerms_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BeforeIsTerm_10, (MR_Integer) 1)));
            parse_tree__parse_inst_mode_name__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BeforeIsTerm_10, (MR_Integer) 2)));
            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__Var_46)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_inst_mode_name__succeeded)
              {
                parse_tree__parse_inst_mode_name__BeforeIsFunctor_110 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_46, (MR_Integer) 0)));
                parse_tree__parse_inst_mode_name__succeeded = (strcmp(parse_tree__parse_inst_mode_name__BeforeIsFunctor_110, (MR_String) "=") == 0);
                if (parse_tree__parse_inst_mode_name__succeeded)
                  {
                    parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__BeforeIsArgTerms_111)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_inst_mode_name__succeeded)
                      {
                        parse_tree__parse_inst_mode_name__FuncTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__BeforeIsArgTerms_111, (MR_Integer) 0)));
                        parse_tree__parse_inst_mode_name__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__BeforeIsArgTerms_111, (MR_Integer) 1)));
                        parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__Var_47)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_inst_mode_name__succeeded)
                          {
                            parse_tree__parse_inst_mode_name__RetModeTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_47, (MR_Integer) 0)));
                            parse_tree__parse_inst_mode_name__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_47, (MR_Integer) 1)));
                            parse_tree__parse_inst_mode_name__succeeded = (parse_tree__parse_inst_mode_name__Var_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (parse_tree__parse_inst_mode_name__succeeded)
                              {
                                parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__FuncTerm_25)) == (MR_mktag((MR_Integer) 0)));
                                if (parse_tree__parse_inst_mode_name__succeeded)
                                  {
                                    parse_tree__parse_inst_mode_name__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__FuncTerm_25, (MR_Integer) 0)));
                                    parse_tree__parse_inst_mode_name__ArgModesTerms_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__FuncTerm_25, (MR_Integer) 1)));
                                    parse_tree__parse_inst_mode_name__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__FuncTerm_25, (MR_Integer) 2)));
                                    parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__Var_49)) == (MR_mktag((MR_Integer) 0)));
                                    if (parse_tree__parse_inst_mode_name__succeeded)
                                      {
                                        parse_tree__parse_inst_mode_name__FuncTermFunctor_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_49, (MR_Integer) 0)));
                                        if ((strcmp(parse_tree__parse_inst_mode_name__FuncTermFunctor_27, (MR_String) "func") == 0))
                                          {
                                            parse_tree__parse_inst_mode_name__IsAny_126 = (MR_Integer) 0;
                                            parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
                                          }
                                        else
                                        if ((strcmp(parse_tree__parse_inst_mode_name__FuncTermFunctor_27, (MR_String) "any_func") == 0))
                                          {
                                            parse_tree__parse_inst_mode_name__IsAny_126 = (MR_Integer) 1;
                                            parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
                                          }
                                        else
                                          parse_tree__parse_inst_mode_name__succeeded = MR_FALSE;
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            MR_Word parse_tree__parse_inst_mode_name__MaybeArgModes0_30;
            MR_Word parse_tree__parse_inst_mode_name__MaybeRetMode_31;
            MR_Word parse_tree__parse_inst_mode_name__MaybeDetism_119;
            MR_Word parse_tree__parse_inst_mode_name__ArgModes0_32;
            MR_Word parse_tree__parse_inst_mode_name__RetMode_33;
            MR_Word parse_tree__parse_inst_mode_name__Detism_116;

            {
              parse_tree__parse_inst_mode_name__parse_modes_5_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_7, parse_tree__parse_inst_mode_name__VarSet_8, parse_tree__parse_inst_mode_name__ContextPieces_9, parse_tree__parse_inst_mode_name__ArgModesTerms_28, &parse_tree__parse_inst_mode_name__MaybeArgModes0_30);
            }
            {
              parse_tree__parse_inst_mode_name__parse_mode_5_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_7, parse_tree__parse_inst_mode_name__VarSet_8, parse_tree__parse_inst_mode_name__ContextPieces_9, parse_tree__parse_inst_mode_name__RetModeTerm_26, &parse_tree__parse_inst_mode_name__MaybeRetMode_31);
            }
            {
              parse_tree__parse_inst_mode_name__parse_determinism_3_p_0(parse_tree__parse_inst_mode_name__VarSet_8, parse_tree__parse_inst_mode_name__DetTerm_11, &parse_tree__parse_inst_mode_name__MaybeDetism_119);
            }
            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeArgModes0_30)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_inst_mode_name__succeeded)
              {
                parse_tree__parse_inst_mode_name__ArgModes0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeArgModes0_30, (MR_Integer) 0)));
                parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeRetMode_31)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_inst_mode_name__succeeded)
                  {
                    parse_tree__parse_inst_mode_name__RetMode_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeRetMode_31, (MR_Integer) 0)));
                    parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeDetism_119)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_inst_mode_name__succeeded)
                      parse_tree__parse_inst_mode_name__Detism_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeDetism_119, (MR_Integer) 0)));
                  }
              }
            if (parse_tree__parse_inst_mode_name__succeeded)
              {
                MR_Word parse_tree__parse_inst_mode_name__FuncInst_34;
                MR_Word parse_tree__parse_inst_mode_name__Var_50;
                MR_Word parse_tree__parse_inst_mode_name__ArgModes_112;
                MR_Word parse_tree__parse_inst_mode_name__Inst_113;

                {
                  parse_tree__parse_inst_mode_name__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_50, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__RetMode_33));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_inst_mode_name__ArgModes_112 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_inst_mode_name__ArgModes0_32, parse_tree__parse_inst_mode_name__Var_50);
                }
                {
                  parse_tree__parse_inst_mode_name__FuncInst_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__FuncInst_34, 0) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__FuncInst_34, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__ArgModes_112));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__FuncInst_34, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__FuncInst_34, 3) = ((MR_Box) (parse_tree__parse_inst_mode_name__Detism_116));
                }
                switch (parse_tree__parse_inst_mode_name__IsAny_126) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word parse_tree__parse_inst_mode_name__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_inst_mode_name__FuncInst_34);

                      {
                        parse_tree__parse_inst_mode_name__Inst_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_113, 1) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_113, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_57));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word parse_tree__parse_inst_mode_name__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_inst_mode_name__FuncInst_34);

                      {
                        parse_tree__parse_inst_mode_name__Inst_113 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__Inst_113, 0) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__Inst_113, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_55));
                      }
                    }
                    break;
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_inst_mode_name__MaybeInst_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Inst_113));
                }
              }
            else
              {
                MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_136_136 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
                MR_Word parse_tree__parse_inst_mode_name__Var_58;
                MR_Word parse_tree__parse_inst_mode_name__Var_59;
                MR_Word parse_tree__parse_inst_mode_name__Var_60;
                MR_Word parse_tree__parse_inst_mode_name__Var_61;
                MR_Word parse_tree__parse_inst_mode_name__Specs_114;

                {
                  parse_tree__parse_inst_mode_name__Var_58 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_1[0], parse_tree__parse_inst_mode_name__MaybeArgModes0_30);
                }
                {
                  parse_tree__parse_inst_mode_name__Var_60 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_inst_mode_name__MaybeRetMode_31);
                }
                {
                  parse_tree__parse_inst_mode_name__Var_61 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0, parse_tree__parse_inst_mode_name__MaybeDetism_119);
                }
                {
                  parse_tree__parse_inst_mode_name__Var_59 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_136_136, parse_tree__parse_inst_mode_name__Var_60, parse_tree__parse_inst_mode_name__Var_61);
                }
                {
                  parse_tree__parse_inst_mode_name__Specs_114 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_136_136, parse_tree__parse_inst_mode_name__Var_58, parse_tree__parse_inst_mode_name__Var_59);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_inst_mode_name__MaybeInst_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Specs_114));
                }
              }
          }
        else
          {
            MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_140_140 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            MR_Word parse_tree__parse_inst_mode_name__Pieces_35;
            MR_Word parse_tree__parse_inst_mode_name__Spec_36;
            MR_Word parse_tree__parse_inst_mode_name__Var_62;
            MR_Word parse_tree__parse_inst_mode_name__Var_101;
            MR_Word parse_tree__parse_inst_mode_name__Var_102;
            MR_Word parse_tree__parse_inst_mode_name__Var_103;
            MR_Word parse_tree__parse_inst_mode_name__Var_104;
            MR_Word parse_tree__parse_inst_mode_name__Var_105;
            MR_Word parse_tree__parse_inst_mode_name__Var_108;

            {
              parse_tree__parse_inst_mode_name__Var_62 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_140_140, parse_tree__parse_inst_mode_name__ContextPieces_9);
            }
            {
              parse_tree__parse_inst_mode_name__Pieces_35 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_140_140, parse_tree__parse_inst_mode_name__Var_62, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[49]));
            }
            {
              parse_tree__parse_inst_mode_name__Var_103 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__BeforeIsTerm_10);
            }
            {
              parse_tree__parse_inst_mode_name__Var_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_105, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_35));
            }
            {
              parse_tree__parse_inst_mode_name__Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_104, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_105));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_inst_mode_name__Var_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_102, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_103));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_102, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_104));
            }
            {
              parse_tree__parse_inst_mode_name__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_101, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_102));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_inst_mode_name__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_36, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_101));
            }
            {
              parse_tree__parse_inst_mode_name__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_108, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_36));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_inst_mode_name__MaybeInst_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_108));
            }
          }
      }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_inst_mode_name__no_allow_constrained_inst_var_result_4_f_0(
  MR_Word parse_tree__parse_inst_mode_name__ContextPieces_6,
  MR_Word parse_tree__parse_inst_mode_name__Why_7,
  MR_Word parse_tree__parse_inst_mode_name__VarSet_8,
  MR_Word parse_tree__parse_inst_mode_name__Term_9)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded;
    MR_Word parse_tree__parse_inst_mode_name__MaybeInst_10;
    MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_50_50 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_51_51;
    MR_String parse_tree__parse_inst_mode_name__TermStr_11;
    MR_String parse_tree__parse_inst_mode_name__Place_12;
    MR_Word parse_tree__parse_inst_mode_name__Pieces_13;
    MR_Word parse_tree__parse_inst_mode_name__Spec_14;
    MR_Word parse_tree__parse_inst_mode_name__Var_17;
    MR_Word parse_tree__parse_inst_mode_name__Var_18;
    MR_Word parse_tree__parse_inst_mode_name__Var_20;
    MR_Word parse_tree__parse_inst_mode_name__Var_23;
    MR_Word parse_tree__parse_inst_mode_name__Var_26;
    MR_Word parse_tree__parse_inst_mode_name__Var_27;
    MR_Word parse_tree__parse_inst_mode_name__Var_28;
    MR_Word parse_tree__parse_inst_mode_name__Var_31;
    MR_Word parse_tree__parse_inst_mode_name__Var_32;
    MR_Word parse_tree__parse_inst_mode_name__Var_41;
    MR_Word parse_tree__parse_inst_mode_name__Var_42;
    MR_Word parse_tree__parse_inst_mode_name__Var_43;
    MR_Word parse_tree__parse_inst_mode_name__Var_44;
    MR_Word parse_tree__parse_inst_mode_name__Var_45;
    MR_Word parse_tree__parse_inst_mode_name__Var_48;

    {
      parse_tree__parse_inst_mode_name__TermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_50_50, parse_tree__parse_inst_mode_name__VarSet_8, parse_tree__parse_inst_mode_name__Term_9);
    }
    parse_tree__parse_inst_mode_name__Place_12 = ((&parse_tree__parse_inst_mode_name_vector_common_4[0 + parse_tree__parse_inst_mode_name__Why_7]))->parse_tree__parse_inst_mode_name__vector_common_type_4_0__vct_4_f_0;
    parse_tree__parse_inst_mode_name__TypeCtorInfo_51_51 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      parse_tree__parse_inst_mode_name__Var_17 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_51_51, parse_tree__parse_inst_mode_name__ContextPieces_6);
    }
    {
      parse_tree__parse_inst_mode_name__Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_27, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_11));
    }
    {
      parse_tree__parse_inst_mode_name__Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_32, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Place_12));
    }
    {
      parse_tree__parse_inst_mode_name__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_31, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_32));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[15])));
    }
    {
      parse_tree__parse_inst_mode_name__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[71])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_28, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_31));
    }
    {
      parse_tree__parse_inst_mode_name__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_26, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_27));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_26, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_28));
    }
    {
      parse_tree__parse_inst_mode_name__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[60])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_23, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_26));
    }
    {
      parse_tree__parse_inst_mode_name__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[70])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_20, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_23));
    }
    {
      parse_tree__parse_inst_mode_name__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_18, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_20));
    }
    {
      parse_tree__parse_inst_mode_name__Pieces_13 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_51_51, parse_tree__parse_inst_mode_name__Var_17, parse_tree__parse_inst_mode_name__Var_18);
    }
    {
      parse_tree__parse_inst_mode_name__Var_43 = mercury__term__get_term_context_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_50_50, parse_tree__parse_inst_mode_name__Term_9);
    }
    {
      parse_tree__parse_inst_mode_name__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_45, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_13));
    }
    {
      parse_tree__parse_inst_mode_name__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_44, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_45));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_inst_mode_name__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_42, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_43));
      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_42, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_44));
    }
    {
      parse_tree__parse_inst_mode_name__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_41, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_42));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_inst_mode_name__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_14, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_41));
    }
    {
      parse_tree__parse_inst_mode_name__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_48, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_14));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_inst_mode_name__MaybeInst_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__MaybeInst_10, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_48));
    }
    return parse_tree__parse_inst_mode_name__MaybeInst_10;
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_name__parse_inst_atom_functor_7_p_0(
  MR_Word parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_8,
  MR_Word parse_tree__parse_inst_mode_name__VarSet_9,
  MR_Word parse_tree__parse_inst_mode_name__ContextPieces_10,
  MR_String parse_tree__parse_inst_mode_name__Name_11,
  MR_Word parse_tree__parse_inst_mode_name__ArgTerms0_12,
  MR_Word parse_tree__parse_inst_mode_name__Context_13,
  MR_Word * parse_tree__parse_inst_mode_name__MaybeInst_14)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded;
    MR_Word parse_tree__parse_inst_mode_name__KnownInstKind_15;

    {
      parse_tree__parse_inst_mode_name__succeeded = parse_tree__parse_inst_mode_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__parse_inst_mode_name__Name_11, parse_tree__parse_inst_mode_name__ArgTerms0_12, &parse_tree__parse_inst_mode_name__KnownInstKind_15);
    }
    if (parse_tree__parse_inst_mode_name__succeeded)
      switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__KnownInstKind_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__parse_inst_mode_name__Inst_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__KnownInstKind_15, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_inst_mode_name__MaybeInst_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Inst_19));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__parse_inst_mode_name__CompoundInstKind_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__KnownInstKind_15, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__CompoundInstKind_20)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__parse_inst_mode_name__BeforeIsTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__CompoundInstKind_20, (MR_Integer) 0)));
                  MR_Word parse_tree__parse_inst_mode_name__DetTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__CompoundInstKind_20, (MR_Integer) 1)));

                  {
                    parse_tree__parse_inst_mode_name__parse_higher_order_inst_6_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_8, parse_tree__parse_inst_mode_name__VarSet_9, parse_tree__parse_inst_mode_name__ContextPieces_10, parse_tree__parse_inst_mode_name__BeforeIsTerm_21, parse_tree__parse_inst_mode_name__DetTerm_22, parse_tree__parse_inst_mode_name__MaybeInst_14);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__parse_inst_mode_name__VarTerm_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__CompoundInstKind_20, (MR_Integer) 0)));
                  MR_Word parse_tree__parse_inst_mode_name__SubInstTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__CompoundInstKind_20, (MR_Integer) 1)));

                  if (((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__VarTerm_24)) == (MR_mktag((MR_Integer) 0))))
                    {
                      MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_166_166 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                      MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_167_167;
                      MR_String parse_tree__parse_inst_mode_name__VarTermStr_36;
                      MR_Word parse_tree__parse_inst_mode_name__Var_47;
                      MR_Word parse_tree__parse_inst_mode_name__Var_48;
                      MR_Word parse_tree__parse_inst_mode_name__Var_50;
                      MR_Word parse_tree__parse_inst_mode_name__Var_53;
                      MR_Word parse_tree__parse_inst_mode_name__Var_56;
                      MR_Word parse_tree__parse_inst_mode_name__Var_59;
                      MR_Word parse_tree__parse_inst_mode_name__Var_60;
                      MR_Word parse_tree__parse_inst_mode_name__Var_69;
                      MR_Word parse_tree__parse_inst_mode_name__Var_70;
                      MR_Word parse_tree__parse_inst_mode_name__Var_71;
                      MR_Word parse_tree__parse_inst_mode_name__Var_72;
                      MR_Word parse_tree__parse_inst_mode_name__Var_73;
                      MR_Word parse_tree__parse_inst_mode_name__Var_76;
                      MR_Word parse_tree__parse_inst_mode_name__Pieces_127;
                      MR_Word parse_tree__parse_inst_mode_name__Spec_128;

                      {
                        parse_tree__parse_inst_mode_name__VarTermStr_36 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_166_166, parse_tree__parse_inst_mode_name__VarSet_9, parse_tree__parse_inst_mode_name__VarTerm_24);
                      }
                      parse_tree__parse_inst_mode_name__TypeCtorInfo_167_167 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                      {
                        parse_tree__parse_inst_mode_name__Var_47 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_167_167, parse_tree__parse_inst_mode_name__ContextPieces_10);
                      }
                      {
                        parse_tree__parse_inst_mode_name__Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_60, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__VarTermStr_36));
                      }
                      {
                        parse_tree__parse_inst_mode_name__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_59, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_60));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[15])));
                      }
                      {
                        parse_tree__parse_inst_mode_name__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[69])));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_56, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_59));
                      }
                      {
                        parse_tree__parse_inst_mode_name__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[68])));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_53, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_56));
                      }
                      {
                        parse_tree__parse_inst_mode_name__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[67])));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_50, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_53));
                      }
                      {
                        parse_tree__parse_inst_mode_name__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_48, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_50));
                      }
                      {
                        parse_tree__parse_inst_mode_name__Pieces_127 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_167_167, parse_tree__parse_inst_mode_name__Var_47, parse_tree__parse_inst_mode_name__Var_48);
                      }
                      {
                        parse_tree__parse_inst_mode_name__Var_71 = mercury__term__get_term_context_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_166_166, parse_tree__parse_inst_mode_name__VarTerm_24);
                      }
                      {
                        parse_tree__parse_inst_mode_name__Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_73, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_127));
                      }
                      {
                        parse_tree__parse_inst_mode_name__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_72, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_73));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        parse_tree__parse_inst_mode_name__Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_70, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_71));
                        MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_70, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_72));
                      }
                      {
                        parse_tree__parse_inst_mode_name__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_69, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_70));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        parse_tree__parse_inst_mode_name__Spec_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_128, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                        MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_128, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_69));
                      }
                      {
                        parse_tree__parse_inst_mode_name__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_76, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_128));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *parse_tree__parse_inst_mode_name__MaybeInst_14 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_76));
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__parse_inst_mode_name__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__VarTerm_24, (MR_Integer) 0)));
                      MR_Word parse_tree__parse_inst_mode_name__MaybeSubInst_28;
                      MR_Word parse_tree__parse_inst_mode_name__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__VarTerm_24, (MR_Integer) 1)));

                      {
                        parse_tree__parse_inst_mode_name__parse_inst_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_2[2]), parse_tree__parse_inst_mode_name__VarSet_9, parse_tree__parse_inst_mode_name__ContextPieces_10, parse_tree__parse_inst_mode_name__SubInstTerm_25, &parse_tree__parse_inst_mode_name__MaybeSubInst_28);
                      }
                      if (((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeSubInst_28)) == (MR_mktag((MR_Integer) 0))))
                        *parse_tree__parse_inst_mode_name__MaybeInst_14 = parse_tree__parse_inst_mode_name__MaybeSubInst_28;
                      else
                        {
                          MR_Word parse_tree__parse_inst_mode_name__SubInst_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeSubInst_28, (MR_Integer) 0)));

                          if ((parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                            {
                              MR_Word parse_tree__parse_inst_mode_name__Var_81;
                              MR_Word parse_tree__parse_inst_mode_name__Var_82;
                              MR_Word parse_tree__parse_inst_mode_name__Inst_122;

                              {
                                parse_tree__parse_inst_mode_name__Var_82 = mercury__term__coerce_var_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__parse_inst_mode_name__Var_26);
                              }
                              {
                                parse_tree__parse_inst_mode_name__Var_81 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_1[3], ((MR_Box) (parse_tree__parse_inst_mode_name__Var_82)));
                              }
                              {
                                parse_tree__parse_inst_mode_name__Inst_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                                MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_122, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_81));
                                MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_122, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__SubInst_29));
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                *parse_tree__parse_inst_mode_name__MaybeInst_14 = base;
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Inst_122));
                              }
                            }
                          else
                            {
                              MR_Word parse_tree__parse_inst_mode_name__Why_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_8, (MR_Integer) 0)));
                              MR_Word parse_tree__parse_inst_mode_name__BadTerm_31;
                              MR_Word parse_tree__parse_inst_mode_name__Var_80;

                              {
                                parse_tree__parse_inst_mode_name__Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_80, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Name_11));
                              }
                              {
                                parse_tree__parse_inst_mode_name__BadTerm_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BadTerm_31, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_80));
                                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BadTerm_31, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__ArgTerms0_12));
                                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BadTerm_31, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_13));
                              }
                              {
                                *parse_tree__parse_inst_mode_name__MaybeInst_14 = parse_tree__parse_inst_mode_name__no_allow_constrained_inst_var_result_4_f_0(parse_tree__parse_inst_mode_name__ContextPieces_10, parse_tree__parse_inst_mode_name__Why_30, parse_tree__parse_inst_mode_name__VarSet_9, parse_tree__parse_inst_mode_name__BadTerm_31);
                              }
                            }
                        }
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__parse_inst_mode_name__DisjTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__CompoundInstKind_20, (MR_Integer) 0)));

                  {
                    parse_tree__parse_inst_mode_name__parse_bound_inst_list_6_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_8, parse_tree__parse_inst_mode_name__VarSet_9, parse_tree__parse_inst_mode_name__ContextPieces_10, parse_tree__parse_inst_mode_name__DisjTerm_23, (MR_Integer) 0, parse_tree__parse_inst_mode_name__MaybeInst_14);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__CompoundInstKind_20, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word parse_tree__parse_inst_mode_name__DisjTerm_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__CompoundInstKind_20, (MR_Integer) 1)));

                      {
                        parse_tree__parse_inst_mode_name__parse_bound_inst_list_6_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_8, parse_tree__parse_inst_mode_name__VarSet_9, parse_tree__parse_inst_mode_name__ContextPieces_10, parse_tree__parse_inst_mode_name__DisjTerm_120, (MR_Integer) 1, parse_tree__parse_inst_mode_name__MaybeInst_14);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word parse_tree__parse_inst_mode_name__DisjTerm_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__CompoundInstKind_20, (MR_Integer) 1)));

                      {
                        parse_tree__parse_inst_mode_name__parse_bound_inst_list_6_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_8, parse_tree__parse_inst_mode_name__VarSet_9, parse_tree__parse_inst_mode_name__ContextPieces_10, parse_tree__parse_inst_mode_name__DisjTerm_121, (MR_Integer) 2, parse_tree__parse_inst_mode_name__MaybeInst_14);
                      }
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_162_162 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            MR_String parse_tree__parse_inst_mode_name__ExpectedArityStr_16 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__KnownInstKind_15, (MR_Integer) 0)));
            MR_Word parse_tree__parse_inst_mode_name__Pieces_17;
            MR_Word parse_tree__parse_inst_mode_name__Spec_18;
            MR_Word parse_tree__parse_inst_mode_name__Var_86;
            MR_Word parse_tree__parse_inst_mode_name__Var_87;
            MR_Word parse_tree__parse_inst_mode_name__Var_89;
            MR_Word parse_tree__parse_inst_mode_name__Var_92;
            MR_Word parse_tree__parse_inst_mode_name__Var_93;
            MR_Word parse_tree__parse_inst_mode_name__Var_94;
            MR_Word parse_tree__parse_inst_mode_name__Var_97;
            MR_Word parse_tree__parse_inst_mode_name__Var_98;
            MR_Word parse_tree__parse_inst_mode_name__Var_107;
            MR_Word parse_tree__parse_inst_mode_name__Var_108;
            MR_Word parse_tree__parse_inst_mode_name__Var_109;
            MR_Word parse_tree__parse_inst_mode_name__Var_110;
            MR_Word parse_tree__parse_inst_mode_name__Var_113;

            {
              parse_tree__parse_inst_mode_name__Var_86 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_162_162, parse_tree__parse_inst_mode_name__ContextPieces_10);
            }
            {
              parse_tree__parse_inst_mode_name__Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_93, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Name_11));
            }
            {
              parse_tree__parse_inst_mode_name__Var_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_98, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__ExpectedArityStr_16));
            }
            {
              parse_tree__parse_inst_mode_name__Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_97, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_98));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[15])));
            }
            {
              parse_tree__parse_inst_mode_name__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[66])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_94, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_97));
            }
            {
              parse_tree__parse_inst_mode_name__Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_92, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_93));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_92, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_94));
            }
            {
              parse_tree__parse_inst_mode_name__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[65])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_89, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_92));
            }
            {
              parse_tree__parse_inst_mode_name__Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_87, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_89));
            }
            {
              parse_tree__parse_inst_mode_name__Pieces_17 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_162_162, parse_tree__parse_inst_mode_name__Var_86, parse_tree__parse_inst_mode_name__Var_87);
            }
            {
              parse_tree__parse_inst_mode_name__Var_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_110, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_17));
            }
            {
              parse_tree__parse_inst_mode_name__Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_109, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_110));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_inst_mode_name__Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_108, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_13));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_108, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_109));
            }
            {
              parse_tree__parse_inst_mode_name__Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_107, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_108));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_inst_mode_name__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_18, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_107));
            }
            {
              parse_tree__parse_inst_mode_name__Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_113, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_18));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_inst_mode_name__MaybeInst_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_113));
            }
          }
          break;
      }
    else
      {
        MR_Word parse_tree__parse_inst_mode_name__UserDefnInstTerm_37;
        MR_Word parse_tree__parse_inst_mode_name__MaybeFunctor_38;
        MR_Word parse_tree__parse_inst_mode_name__Var_115;

        {
          parse_tree__parse_inst_mode_name__Var_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_115, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Name_11));
        }
        {
          parse_tree__parse_inst_mode_name__UserDefnInstTerm_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__UserDefnInstTerm_37, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_115));
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__UserDefnInstTerm_37, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__ArgTerms0_12));
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__UserDefnInstTerm_37, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_13));
        }
        {
          parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_9, parse_tree__parse_inst_mode_name__ContextPieces_10, parse_tree__parse_inst_mode_name__UserDefnInstTerm_37, &parse_tree__parse_inst_mode_name__MaybeFunctor_38);
        }
        if (((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeFunctor_38)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word parse_tree__parse_inst_mode_name__Specs_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__MaybeFunctor_38, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_inst_mode_name__MaybeInst_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Specs_154));
            }
          }
        else
          {
            MR_Word parse_tree__parse_inst_mode_name__QualifiedName_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeFunctor_38, (MR_Integer) 0)));
            MR_Word parse_tree__parse_inst_mode_name__ArgTerms1_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeFunctor_38, (MR_Integer) 1)));
            MR_Word parse_tree__parse_inst_mode_name__Inst_149;
            MR_Word parse_tree__parse_inst_mode_name__BuiltinModule_41;
            MR_String parse_tree__parse_inst_mode_name__UnqualifiedName_42;
            MR_Word parse_tree__parse_inst_mode_name__KnownInstKind_141;
            MR_Word parse_tree__parse_inst_mode_name__Var_170;
            MR_Word parse_tree__parse_inst_mode_name__Var_118;
            MR_Word parse_tree__parse_inst_mode_name__Var_43;
            MR_Word parse_tree__parse_inst_mode_name__Var_44;

            {
              parse_tree__parse_inst_mode_name__BuiltinModule_41 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            }
            {
              mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(parse_tree__parse_inst_mode_name__QualifiedName_39, (MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_2[3], &parse_tree__parse_inst_mode_name__Var_170);
            }
            {
              parse_tree__parse_inst_mode_name__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__parse_inst_mode_name__BuiltinModule_41, parse_tree__parse_inst_mode_name__Var_170);
            }
            if (parse_tree__parse_inst_mode_name__succeeded)
              {
                {
                  parse_tree__parse_inst_mode_name__UnqualifiedName_42 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__parse_inst_mode_name__QualifiedName_39);
                }
                {
                  parse_tree__parse_inst_mode_name__succeeded = parse_tree__parse_inst_mode_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__parse_inst_mode_name__UnqualifiedName_42, parse_tree__parse_inst_mode_name__ArgTerms1_40, &parse_tree__parse_inst_mode_name__KnownInstKind_141);
                }
                if (parse_tree__parse_inst_mode_name__succeeded)
                  {
                    parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__KnownInstKind_141)) == (MR_mktag((MR_Integer) 0)));
                    if (parse_tree__parse_inst_mode_name__succeeded)
                      {
                        parse_tree__parse_inst_mode_name__Inst_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__KnownInstKind_141, (MR_Integer) 0)));
                        parse_tree__parse_inst_mode_name__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__Inst_149)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_149, (MR_Integer) 0)))) == (MR_Integer) 4)));
                        if (parse_tree__parse_inst_mode_name__succeeded)
                          {
                            parse_tree__parse_inst_mode_name__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_149, (MR_Integer) 1)));
                            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__Var_118)) == (MR_mktag((MR_Integer) 0)));
                            if (parse_tree__parse_inst_mode_name__succeeded)
                              {
                                parse_tree__parse_inst_mode_name__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_118, (MR_Integer) 0)));
                                parse_tree__parse_inst_mode_name__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_118, (MR_Integer) 1)));
                              }
                          }
                        parse_tree__parse_inst_mode_name__succeeded = !(parse_tree__parse_inst_mode_name__succeeded);
                      }
                  }
              }
            if (parse_tree__parse_inst_mode_name__succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__parse_inst_mode_name__MaybeInst_14 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Inst_149));
              }
            else
              {
                MR_Word parse_tree__parse_inst_mode_name__MaybeArgInsts_45;

                {
                  parse_tree__parse_inst_mode_name__parse_insts_5_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_8, parse_tree__parse_inst_mode_name__VarSet_9, parse_tree__parse_inst_mode_name__ContextPieces_10, parse_tree__parse_inst_mode_name__ArgTerms1_40, &parse_tree__parse_inst_mode_name__MaybeArgInsts_45);
                }
                if (((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeArgInsts_45)) == (MR_mktag((MR_Integer) 0))))
                  *parse_tree__parse_inst_mode_name__MaybeInst_14 = (MR_Word) parse_tree__parse_inst_mode_name__MaybeArgInsts_45;
                else
                  {
                    MR_Word parse_tree__parse_inst_mode_name__ArgInsts_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeArgInsts_45, (MR_Integer) 0)));
                    MR_Word parse_tree__parse_inst_mode_name__Var_119;
                    MR_Word parse_tree__parse_inst_mode_name__Inst_142;

                    {
                      parse_tree__parse_inst_mode_name__Var_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_119, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__QualifiedName_39));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_119, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__ArgInsts_46));
                    }
                    {
                      parse_tree__parse_inst_mode_name__Inst_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_142, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_119));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__parse_inst_mode_name__MaybeInst_14 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Inst_142));
                    }
                  }
              }
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_name__parse_higher_order_mode_6_p_0(
  MR_Word parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_7,
  MR_Word parse_tree__parse_inst_mode_name__VarSet_8,
  MR_Word parse_tree__parse_inst_mode_name__ContextPieces_9,
  MR_Word parse_tree__parse_inst_mode_name__BeforeIsTerm_10,
  MR_Word parse_tree__parse_inst_mode_name__DetTerm_11,
  MR_Word * parse_tree__parse_inst_mode_name__MaybeMode_12)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__BeforeIsTerm_10)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_inst_mode_name__BeforeIsArgTerms_14;
    MR_Word parse_tree__parse_inst_mode_name__IsAny_16;
    MR_String parse_tree__parse_inst_mode_name__BeforeIsFunctor_13;
    MR_Word parse_tree__parse_inst_mode_name__Var_38;
    MR_Word parse_tree__parse_inst_mode_name__Var_15;

    if (parse_tree__parse_inst_mode_name__succeeded)
      {
        parse_tree__parse_inst_mode_name__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BeforeIsTerm_10, (MR_Integer) 0)));
        parse_tree__parse_inst_mode_name__BeforeIsArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BeforeIsTerm_10, (MR_Integer) 1)));
        parse_tree__parse_inst_mode_name__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BeforeIsTerm_10, (MR_Integer) 2)));
        parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__Var_38)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            parse_tree__parse_inst_mode_name__BeforeIsFunctor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_38, (MR_Integer) 0)));
            if ((strcmp(parse_tree__parse_inst_mode_name__BeforeIsFunctor_13, (MR_String) "pred") == 0))
              {
                parse_tree__parse_inst_mode_name__IsAny_16 = (MR_Integer) 0;
                parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
              }
            else
            if ((strcmp(parse_tree__parse_inst_mode_name__BeforeIsFunctor_13, (MR_String) "any_pred") == 0))
              {
                parse_tree__parse_inst_mode_name__IsAny_16 = (MR_Integer) 1;
                parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
              }
            else
              parse_tree__parse_inst_mode_name__succeeded = MR_FALSE;
          }
      }
    if (parse_tree__parse_inst_mode_name__succeeded)
      {
        MR_Word parse_tree__parse_inst_mode_name__MaybeArgModes_17;
        MR_Word parse_tree__parse_inst_mode_name__MaybeDetism_18;
        MR_Word parse_tree__parse_inst_mode_name__ArgModes_19;
        MR_Word parse_tree__parse_inst_mode_name__Detism_20;

        {
          parse_tree__parse_inst_mode_name__parse_modes_5_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_7, parse_tree__parse_inst_mode_name__VarSet_8, parse_tree__parse_inst_mode_name__ContextPieces_9, parse_tree__parse_inst_mode_name__BeforeIsArgTerms_14, &parse_tree__parse_inst_mode_name__MaybeArgModes_17);
        }
        {
          parse_tree__parse_inst_mode_name__parse_determinism_3_p_0(parse_tree__parse_inst_mode_name__VarSet_8, parse_tree__parse_inst_mode_name__DetTerm_11, &parse_tree__parse_inst_mode_name__MaybeDetism_18);
        }
        parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeArgModes_17)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            parse_tree__parse_inst_mode_name__ArgModes_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeArgModes_17, (MR_Integer) 0)));
            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeDetism_18)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_inst_mode_name__succeeded)
              parse_tree__parse_inst_mode_name__Detism_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeDetism_18, (MR_Integer) 0)));
          }
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            MR_Word parse_tree__parse_inst_mode_name__PredInstInfo_21;
            MR_Word parse_tree__parse_inst_mode_name__Inst_22;
            MR_Word parse_tree__parse_inst_mode_name__Mode_23;

            {
              parse_tree__parse_inst_mode_name__PredInstInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__PredInstInfo_21, 0) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__PredInstInfo_21, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__ArgModes_19));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__PredInstInfo_21, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__PredInstInfo_21, 3) = ((MR_Box) (parse_tree__parse_inst_mode_name__Detism_20));
            }
            switch (parse_tree__parse_inst_mode_name__IsAny_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__parse_inst_mode_name__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_inst_mode_name__PredInstInfo_21);

                  {
                    parse_tree__parse_inst_mode_name__Inst_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_22, 1) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_22, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_44));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__parse_inst_mode_name__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_inst_mode_name__PredInstInfo_21);

                  {
                    parse_tree__parse_inst_mode_name__Inst_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__Inst_22, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__Inst_22, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_42));
                  }
                }
                break;
            }
            {
              parse_tree__parse_inst_mode_name__Mode_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Mode_23, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Inst_22));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Mode_23, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Inst_22));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_inst_mode_name__MaybeMode_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Mode_23));
            }
          }
        else
          {
            MR_Word parse_tree__parse_inst_mode_name__Specs_24;
            MR_Word parse_tree__parse_inst_mode_name__Var_46;
            MR_Word parse_tree__parse_inst_mode_name__Var_47;

            {
              parse_tree__parse_inst_mode_name__Var_46 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_1[0], parse_tree__parse_inst_mode_name__MaybeArgModes_17);
            }
            {
              parse_tree__parse_inst_mode_name__Var_47 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0, parse_tree__parse_inst_mode_name__MaybeDetism_18);
            }
            {
              parse_tree__parse_inst_mode_name__Specs_24 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_inst_mode_name__Var_46, parse_tree__parse_inst_mode_name__Var_47);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_inst_mode_name__MaybeMode_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Specs_24));
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_inst_mode_name__RetModeTerm_27;
        MR_Word parse_tree__parse_inst_mode_name__ArgModesTerms_29;
        MR_Word parse_tree__parse_inst_mode_name__IsAny_132;
        MR_Word parse_tree__parse_inst_mode_name__FuncTerm_26;
        MR_String parse_tree__parse_inst_mode_name__FuncTermFunctor_28;
        MR_Word parse_tree__parse_inst_mode_name__Var_48;
        MR_Word parse_tree__parse_inst_mode_name__Var_49;
        MR_Word parse_tree__parse_inst_mode_name__Var_50;
        MR_Word parse_tree__parse_inst_mode_name__Var_51;
        MR_String parse_tree__parse_inst_mode_name__BeforeIsFunctor_113;
        MR_Word parse_tree__parse_inst_mode_name__BeforeIsArgTerms_114;
        MR_Word parse_tree__parse_inst_mode_name__Var_25;
        MR_Word parse_tree__parse_inst_mode_name__Var_30;

        parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__BeforeIsTerm_10)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            parse_tree__parse_inst_mode_name__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BeforeIsTerm_10, (MR_Integer) 0)));
            parse_tree__parse_inst_mode_name__BeforeIsArgTerms_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BeforeIsTerm_10, (MR_Integer) 1)));
            parse_tree__parse_inst_mode_name__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BeforeIsTerm_10, (MR_Integer) 2)));
            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__Var_48)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_inst_mode_name__succeeded)
              {
                parse_tree__parse_inst_mode_name__BeforeIsFunctor_113 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_48, (MR_Integer) 0)));
                parse_tree__parse_inst_mode_name__succeeded = (strcmp(parse_tree__parse_inst_mode_name__BeforeIsFunctor_113, (MR_String) "=") == 0);
                if (parse_tree__parse_inst_mode_name__succeeded)
                  {
                    parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__BeforeIsArgTerms_114)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_inst_mode_name__succeeded)
                      {
                        parse_tree__parse_inst_mode_name__FuncTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__BeforeIsArgTerms_114, (MR_Integer) 0)));
                        parse_tree__parse_inst_mode_name__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__BeforeIsArgTerms_114, (MR_Integer) 1)));
                        parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__Var_49)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_inst_mode_name__succeeded)
                          {
                            parse_tree__parse_inst_mode_name__RetModeTerm_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_49, (MR_Integer) 0)));
                            parse_tree__parse_inst_mode_name__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_49, (MR_Integer) 1)));
                            parse_tree__parse_inst_mode_name__succeeded = (parse_tree__parse_inst_mode_name__Var_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (parse_tree__parse_inst_mode_name__succeeded)
                              {
                                parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__FuncTerm_26)) == (MR_mktag((MR_Integer) 0)));
                                if (parse_tree__parse_inst_mode_name__succeeded)
                                  {
                                    parse_tree__parse_inst_mode_name__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__FuncTerm_26, (MR_Integer) 0)));
                                    parse_tree__parse_inst_mode_name__ArgModesTerms_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__FuncTerm_26, (MR_Integer) 1)));
                                    parse_tree__parse_inst_mode_name__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__FuncTerm_26, (MR_Integer) 2)));
                                    parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__Var_51)) == (MR_mktag((MR_Integer) 0)));
                                    if (parse_tree__parse_inst_mode_name__succeeded)
                                      {
                                        parse_tree__parse_inst_mode_name__FuncTermFunctor_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_51, (MR_Integer) 0)));
                                        if ((strcmp(parse_tree__parse_inst_mode_name__FuncTermFunctor_28, (MR_String) "func") == 0))
                                          {
                                            parse_tree__parse_inst_mode_name__IsAny_132 = (MR_Integer) 0;
                                            parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
                                          }
                                        else
                                        if ((strcmp(parse_tree__parse_inst_mode_name__FuncTermFunctor_28, (MR_String) "any_func") == 0))
                                          {
                                            parse_tree__parse_inst_mode_name__IsAny_132 = (MR_Integer) 1;
                                            parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
                                          }
                                        else
                                          parse_tree__parse_inst_mode_name__succeeded = MR_FALSE;
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            MR_Word parse_tree__parse_inst_mode_name__MaybeArgModes0_31;
            MR_Word parse_tree__parse_inst_mode_name__MaybeRetMode_32;
            MR_Word parse_tree__parse_inst_mode_name__MaybeDetism_124;
            MR_Word parse_tree__parse_inst_mode_name__ArgModes0_33;
            MR_Word parse_tree__parse_inst_mode_name__RetMode_34;
            MR_Word parse_tree__parse_inst_mode_name__Detism_120;

            {
              parse_tree__parse_inst_mode_name__parse_modes_5_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_7, parse_tree__parse_inst_mode_name__VarSet_8, parse_tree__parse_inst_mode_name__ContextPieces_9, parse_tree__parse_inst_mode_name__ArgModesTerms_29, &parse_tree__parse_inst_mode_name__MaybeArgModes0_31);
            }
            {
              parse_tree__parse_inst_mode_name__parse_mode_5_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_7, parse_tree__parse_inst_mode_name__VarSet_8, parse_tree__parse_inst_mode_name__ContextPieces_9, parse_tree__parse_inst_mode_name__RetModeTerm_27, &parse_tree__parse_inst_mode_name__MaybeRetMode_32);
            }
            {
              parse_tree__parse_inst_mode_name__parse_determinism_3_p_0(parse_tree__parse_inst_mode_name__VarSet_8, parse_tree__parse_inst_mode_name__DetTerm_11, &parse_tree__parse_inst_mode_name__MaybeDetism_124);
            }
            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeArgModes0_31)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_inst_mode_name__succeeded)
              {
                parse_tree__parse_inst_mode_name__ArgModes0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeArgModes0_31, (MR_Integer) 0)));
                parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeRetMode_32)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_inst_mode_name__succeeded)
                  {
                    parse_tree__parse_inst_mode_name__RetMode_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeRetMode_32, (MR_Integer) 0)));
                    parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeDetism_124)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_inst_mode_name__succeeded)
                      parse_tree__parse_inst_mode_name__Detism_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeDetism_124, (MR_Integer) 0)));
                  }
              }
            if (parse_tree__parse_inst_mode_name__succeeded)
              {
                MR_Word parse_tree__parse_inst_mode_name__FuncInstInfo_35;
                MR_Word parse_tree__parse_inst_mode_name__Var_52;
                MR_Word parse_tree__parse_inst_mode_name__ArgModes_115;
                MR_Word parse_tree__parse_inst_mode_name__Inst_116;
                MR_Word parse_tree__parse_inst_mode_name__Mode_117;

                {
                  parse_tree__parse_inst_mode_name__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_52, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__RetMode_34));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_inst_mode_name__ArgModes_115 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_inst_mode_name__ArgModes0_33, parse_tree__parse_inst_mode_name__Var_52);
                }
                {
                  parse_tree__parse_inst_mode_name__FuncInstInfo_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__FuncInstInfo_35, 0) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__FuncInstInfo_35, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__ArgModes_115));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__FuncInstInfo_35, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__FuncInstInfo_35, 3) = ((MR_Box) (parse_tree__parse_inst_mode_name__Detism_120));
                }
                switch (parse_tree__parse_inst_mode_name__IsAny_132) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word parse_tree__parse_inst_mode_name__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_inst_mode_name__FuncInstInfo_35);

                      {
                        parse_tree__parse_inst_mode_name__Inst_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_116, 1) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_116, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_59));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word parse_tree__parse_inst_mode_name__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_inst_mode_name__FuncInstInfo_35);

                      {
                        parse_tree__parse_inst_mode_name__Inst_116 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__Inst_116, 0) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__Inst_116, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_57));
                      }
                    }
                    break;
                }
                {
                  parse_tree__parse_inst_mode_name__Mode_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Mode_117, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Inst_116));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Mode_117, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Inst_116));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_inst_mode_name__MaybeMode_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Mode_117));
                }
              }
            else
              {
                MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_143_143 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
                MR_Word parse_tree__parse_inst_mode_name__Var_61;
                MR_Word parse_tree__parse_inst_mode_name__Var_62;
                MR_Word parse_tree__parse_inst_mode_name__Var_63;
                MR_Word parse_tree__parse_inst_mode_name__Var_64;
                MR_Word parse_tree__parse_inst_mode_name__Specs_118;

                {
                  parse_tree__parse_inst_mode_name__Var_61 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_1[0], parse_tree__parse_inst_mode_name__MaybeArgModes0_31);
                }
                {
                  parse_tree__parse_inst_mode_name__Var_63 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_inst_mode_name__MaybeRetMode_32);
                }
                {
                  parse_tree__parse_inst_mode_name__Var_64 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0, parse_tree__parse_inst_mode_name__MaybeDetism_124);
                }
                {
                  parse_tree__parse_inst_mode_name__Var_62 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_143_143, parse_tree__parse_inst_mode_name__Var_63, parse_tree__parse_inst_mode_name__Var_64);
                }
                {
                  parse_tree__parse_inst_mode_name__Specs_118 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_143_143, parse_tree__parse_inst_mode_name__Var_61, parse_tree__parse_inst_mode_name__Var_62);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_inst_mode_name__MaybeMode_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Specs_118));
                }
              }
          }
        else
          {
            MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_147_147 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            MR_Word parse_tree__parse_inst_mode_name__Pieces_36;
            MR_Word parse_tree__parse_inst_mode_name__Spec_37;
            MR_Word parse_tree__parse_inst_mode_name__Var_65;
            MR_Word parse_tree__parse_inst_mode_name__Var_104;
            MR_Word parse_tree__parse_inst_mode_name__Var_105;
            MR_Word parse_tree__parse_inst_mode_name__Var_106;
            MR_Word parse_tree__parse_inst_mode_name__Var_107;
            MR_Word parse_tree__parse_inst_mode_name__Var_108;
            MR_Word parse_tree__parse_inst_mode_name__Var_111;

            {
              parse_tree__parse_inst_mode_name__Var_65 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_147_147, parse_tree__parse_inst_mode_name__ContextPieces_9);
            }
            {
              parse_tree__parse_inst_mode_name__Pieces_36 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_147_147, parse_tree__parse_inst_mode_name__Var_65, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[33]));
            }
            {
              parse_tree__parse_inst_mode_name__Var_106 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__BeforeIsTerm_10);
            }
            {
              parse_tree__parse_inst_mode_name__Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_108, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_36));
            }
            {
              parse_tree__parse_inst_mode_name__Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_107, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_108));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_inst_mode_name__Var_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_105, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_106));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_105, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_107));
            }
            {
              parse_tree__parse_inst_mode_name__Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_104, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_105));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_inst_mode_name__Spec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_37, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_104));
            }
            {
              parse_tree__parse_inst_mode_name__Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_111, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_37));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_inst_mode_name__MaybeMode_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_111));
            }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__parse_inst_mode_name__standard_det_2_p_0(
  MR_String parse_tree__parse_inst_mode_name__HeadVar__1_1,
  MR_Word * parse_tree__parse_inst_mode_name__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded;
    MR_Integer parse_tree__parse_inst_mode_name__slot_0;
    MR_String parse_tree__parse_inst_mode_name__str_1;

    /* hashed string simple lookup switch */
    /* compute the hash value of the input string */
    parse_tree__parse_inst_mode_name__slot_0 = ((MR_hash_string4(parse_tree__parse_inst_mode_name__HeadVar__1_1)) & (MR_Integer) 31);
    /* hash chain loop */
    do
      {
        /* lookup the string for this hash slot */
        parse_tree__parse_inst_mode_name__str_1 = ((&parse_tree__parse_inst_mode_name_vector_common_3[0 + parse_tree__parse_inst_mode_name__slot_0]))->parse_tree__parse_inst_mode_name__vector_common_type_3_0__vct_3_f_0;
        /* did we find a match? */
        if ((((parse_tree__parse_inst_mode_name__str_1 != NULL)) && ((strcmp(parse_tree__parse_inst_mode_name__str_1, parse_tree__parse_inst_mode_name__HeadVar__1_1) == 0))))
          {
            /* we found a match; look up the results */
            *parse_tree__parse_inst_mode_name__HeadVar__2_2 = ((&parse_tree__parse_inst_mode_name_vector_common_3[0 + parse_tree__parse_inst_mode_name__slot_0]))->parse_tree__parse_inst_mode_name__vector_common_type_3_0__vct_3_f_2;
            parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
            /* jump out of search loop */
            goto label_0;
          }
        else
          {
            /* no match yet, so get next slot in hash chain */
            parse_tree__parse_inst_mode_name__slot_0 = ((&parse_tree__parse_inst_mode_name_vector_common_3[0 + parse_tree__parse_inst_mode_name__slot_0]))->parse_tree__parse_inst_mode_name__vector_common_type_3_0__vct_3_f_1;
          }
      }
    while ((parse_tree__parse_inst_mode_name__slot_0 >= (MR_Integer) 0));
    parse_tree__parse_inst_mode_name__succeeded = MR_FALSE;
  label_0:;
    return parse_tree__parse_inst_mode_name__succeeded;
  }
}

void MR_CALL 
parse_tree__parse_inst_mode_name__parse_determinism_3_p_0(
  MR_Word parse_tree__parse_inst_mode_name__VarSet_4,
  MR_Word parse_tree__parse_inst_mode_name__Term_5,
  MR_Word * parse_tree__parse_inst_mode_name__MaybeDetism_6)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__Term_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_inst_mode_name__Detism_9;
    MR_String parse_tree__parse_inst_mode_name__DetString_7;
    MR_Word parse_tree__parse_inst_mode_name__Var_13;
    MR_Word parse_tree__parse_inst_mode_name__Var_14;
    MR_Word parse_tree__parse_inst_mode_name__Var_8;

    if (parse_tree__parse_inst_mode_name__succeeded)
      {
        parse_tree__parse_inst_mode_name__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Term_5, (MR_Integer) 0)));
        parse_tree__parse_inst_mode_name__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Term_5, (MR_Integer) 1)));
        parse_tree__parse_inst_mode_name__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Term_5, (MR_Integer) 2)));
        parse_tree__parse_inst_mode_name__succeeded = (parse_tree__parse_inst_mode_name__Var_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__Var_13)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_inst_mode_name__succeeded)
              {
                parse_tree__parse_inst_mode_name__DetString_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_13, (MR_Integer) 0)));
                {
                  parse_tree__parse_inst_mode_name__succeeded = parse_tree__parse_inst_mode_name__standard_det_2_p_0(parse_tree__parse_inst_mode_name__DetString_7, &parse_tree__parse_inst_mode_name__Detism_9);
                }
              }
          }
      }
    if (parse_tree__parse_inst_mode_name__succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *parse_tree__parse_inst_mode_name__MaybeDetism_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Detism_9));
      }
    else
      {
        MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        MR_String parse_tree__parse_inst_mode_name__TermStr_10;
        MR_Word parse_tree__parse_inst_mode_name__DetismPieces_11;
        MR_Word parse_tree__parse_inst_mode_name__DetismSpec_12;
        MR_Word parse_tree__parse_inst_mode_name__Var_17;
        MR_Word parse_tree__parse_inst_mode_name__Var_18;
        MR_Word parse_tree__parse_inst_mode_name__Var_27;
        MR_Word parse_tree__parse_inst_mode_name__Var_28;
        MR_Word parse_tree__parse_inst_mode_name__Var_29;
        MR_Word parse_tree__parse_inst_mode_name__Var_30;
        MR_Word parse_tree__parse_inst_mode_name__Var_31;
        MR_Word parse_tree__parse_inst_mode_name__Var_34;

        {
          parse_tree__parse_inst_mode_name__TermStr_10 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_36_36, parse_tree__parse_inst_mode_name__VarSet_4, parse_tree__parse_inst_mode_name__Term_5);
        }
        {
          parse_tree__parse_inst_mode_name__Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_18, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_10));
        }
        {
          parse_tree__parse_inst_mode_name__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_17, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_18));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[13])));
        }
        {
          parse_tree__parse_inst_mode_name__DetismPieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__DetismPieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[58])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__DetismPieces_11, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_17));
        }
        {
          parse_tree__parse_inst_mode_name__Var_29 = mercury__term__get_term_context_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_36_36, parse_tree__parse_inst_mode_name__Term_5);
        }
        {
          parse_tree__parse_inst_mode_name__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_31, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__DetismPieces_11));
        }
        {
          parse_tree__parse_inst_mode_name__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_30, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_31));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_inst_mode_name__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_28, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_29));
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_28, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_30));
        }
        {
          parse_tree__parse_inst_mode_name__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_27, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_28));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_inst_mode_name__DetismSpec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__DetismSpec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__DetismSpec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__DetismSpec_12, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_27));
        }
        {
          parse_tree__parse_inst_mode_name__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_34, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__DetismSpec_12));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_inst_mode_name__MaybeDetism_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_34));
        }
      }
  }
}

MR_bool MR_CALL 
parse_tree__parse_inst_mode_name__is_known_inst_name_1_p_0(
  MR_String parse_tree__parse_inst_mode_name__Name_2)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded;
    MR_Word parse_tree__parse_inst_mode_name__Var_3;

    {
      parse_tree__parse_inst_mode_name__succeeded = parse_tree__parse_inst_mode_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__parse_inst_mode_name__Name_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_inst_mode_name__Var_3);
    }
    return parse_tree__parse_inst_mode_name__succeeded;
  }
}

void MR_CALL 
parse_tree__parse_inst_mode_name__parse_inst_5_p_0(
  MR_Word parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_6,
  MR_Word parse_tree__parse_inst_mode_name__VarSet_7,
  MR_Word parse_tree__parse_inst_mode_name__ContextPieces_8,
  MR_Word parse_tree__parse_inst_mode_name__Term_9,
  MR_Word * parse_tree__parse_inst_mode_name__MaybeInst_10)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded;

    if (((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__Term_9)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__parse_inst_mode_name__Functor_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Term_9, (MR_Integer) 0)));
        MR_Word parse_tree__parse_inst_mode_name__ArgTerms_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Term_9, (MR_Integer) 1)));
        MR_Word parse_tree__parse_inst_mode_name__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Term_9, (MR_Integer) 2)));

        switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__Functor_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String parse_tree__parse_inst_mode_name__Name_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Functor_14, (MR_Integer) 0)));

              {
                parse_tree__parse_inst_mode_name__parse_inst_atom_functor_7_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_6, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__ContextPieces_8, parse_tree__parse_inst_mode_name__Name_27, parse_tree__parse_inst_mode_name__ArgTerms_15, parse_tree__parse_inst_mode_name__Context_16, parse_tree__parse_inst_mode_name__MaybeInst_10);
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_56_56;
              MR_String parse_tree__parse_inst_mode_name__TermStr_24;
              MR_Word parse_tree__parse_inst_mode_name__Pieces_25;
              MR_Word parse_tree__parse_inst_mode_name__Spec_26;
              MR_Word parse_tree__parse_inst_mode_name__Var_28;
              MR_Word parse_tree__parse_inst_mode_name__Var_29;
              MR_Word parse_tree__parse_inst_mode_name__Var_31;
              MR_Word parse_tree__parse_inst_mode_name__Var_34;
              MR_Word parse_tree__parse_inst_mode_name__Var_35;
              MR_Word parse_tree__parse_inst_mode_name__Var_44;
              MR_Word parse_tree__parse_inst_mode_name__Var_45;
              MR_Word parse_tree__parse_inst_mode_name__Var_46;
              MR_Word parse_tree__parse_inst_mode_name__Var_47;
              MR_Word parse_tree__parse_inst_mode_name__Var_50;

              {
                parse_tree__parse_inst_mode_name__TermStr_24 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__Term_9);
              }
              parse_tree__parse_inst_mode_name__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              {
                parse_tree__parse_inst_mode_name__Var_28 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_56_56, parse_tree__parse_inst_mode_name__ContextPieces_8);
              }
              {
                parse_tree__parse_inst_mode_name__Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_35, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_24));
              }
              {
                parse_tree__parse_inst_mode_name__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_34, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_35));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[11])));
              }
              {
                parse_tree__parse_inst_mode_name__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[58])));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_31, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_34));
              }
              {
                parse_tree__parse_inst_mode_name__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_29, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_31));
              }
              {
                parse_tree__parse_inst_mode_name__Pieces_25 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_56_56, parse_tree__parse_inst_mode_name__Var_28, parse_tree__parse_inst_mode_name__Var_29);
              }
              {
                parse_tree__parse_inst_mode_name__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_47, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_25));
              }
              {
                parse_tree__parse_inst_mode_name__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_46, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_47));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_inst_mode_name__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_45, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_16));
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_45, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_46));
              }
              {
                parse_tree__parse_inst_mode_name__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_44, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_45));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_inst_mode_name__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_26, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_44));
              }
              {
                parse_tree__parse_inst_mode_name__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_50, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_26));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_inst_mode_name__MaybeInst_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_50));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_56_56;
              MR_String parse_tree__parse_inst_mode_name__TermStr_24;
              MR_Word parse_tree__parse_inst_mode_name__Pieces_25;
              MR_Word parse_tree__parse_inst_mode_name__Spec_26;
              MR_Word parse_tree__parse_inst_mode_name__Var_28;
              MR_Word parse_tree__parse_inst_mode_name__Var_29;
              MR_Word parse_tree__parse_inst_mode_name__Var_31;
              MR_Word parse_tree__parse_inst_mode_name__Var_34;
              MR_Word parse_tree__parse_inst_mode_name__Var_35;
              MR_Word parse_tree__parse_inst_mode_name__Var_44;
              MR_Word parse_tree__parse_inst_mode_name__Var_45;
              MR_Word parse_tree__parse_inst_mode_name__Var_46;
              MR_Word parse_tree__parse_inst_mode_name__Var_47;
              MR_Word parse_tree__parse_inst_mode_name__Var_50;

              {
                parse_tree__parse_inst_mode_name__TermStr_24 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__Term_9);
              }
              parse_tree__parse_inst_mode_name__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              {
                parse_tree__parse_inst_mode_name__Var_28 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_56_56, parse_tree__parse_inst_mode_name__ContextPieces_8);
              }
              {
                parse_tree__parse_inst_mode_name__Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_35, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_24));
              }
              {
                parse_tree__parse_inst_mode_name__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_34, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_35));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[11])));
              }
              {
                parse_tree__parse_inst_mode_name__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[58])));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_31, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_34));
              }
              {
                parse_tree__parse_inst_mode_name__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_29, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_31));
              }
              {
                parse_tree__parse_inst_mode_name__Pieces_25 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_56_56, parse_tree__parse_inst_mode_name__Var_28, parse_tree__parse_inst_mode_name__Var_29);
              }
              {
                parse_tree__parse_inst_mode_name__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_47, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_25));
              }
              {
                parse_tree__parse_inst_mode_name__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_46, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_47));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_inst_mode_name__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_45, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_16));
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_45, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_46));
              }
              {
                parse_tree__parse_inst_mode_name__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_44, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_45));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_inst_mode_name__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_26, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_44));
              }
              {
                parse_tree__parse_inst_mode_name__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_50, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_26));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_inst_mode_name__MaybeInst_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_50));
              }
            }
            break;
        }
      }
    else
      {
        MR_Word parse_tree__parse_inst_mode_name__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Term_9, (MR_Integer) 0)));
        MR_Word parse_tree__parse_inst_mode_name__InstVar_13;
        MR_Word parse_tree__parse_inst_mode_name__Var_52;
        MR_Word parse_tree__parse_inst_mode_name__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Term_9, (MR_Integer) 1)));

        {
          mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__parse_inst_mode_name__Var_11, &parse_tree__parse_inst_mode_name__InstVar_13);
        }
        {
          parse_tree__parse_inst_mode_name__Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_52, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__InstVar_13));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_inst_mode_name__MaybeInst_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_52));
        }
      }
  }
}

void MR_CALL 
parse_tree__parse_inst_mode_name__parse_insts_5_p_0(
  MR_Word parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_1,
  MR_Word parse_tree__parse_inst_mode_name__VarSet_2,
  MR_Word parse_tree__parse_inst_mode_name__ContextPieces_3,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__4_4,
  MR_Word * parse_tree__parse_inst_mode_name__HeadVar__5_5)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded;

    if ((parse_tree__parse_inst_mode_name__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__parse_inst_mode_name__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_2[1]);
      }
    else
      {
        MR_Word parse_tree__parse_inst_mode_name__Term_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word parse_tree__parse_inst_mode_name__Terms_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word parse_tree__parse_inst_mode_name__MaybeHeadInst_16;
        MR_Word parse_tree__parse_inst_mode_name__MaybeTailInsts_17;
        MR_Word parse_tree__parse_inst_mode_name__HeadInst_18;
        MR_Word parse_tree__parse_inst_mode_name__TailInsts_19;

        {
          parse_tree__parse_inst_mode_name__parse_inst_5_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_1, parse_tree__parse_inst_mode_name__VarSet_2, parse_tree__parse_inst_mode_name__ContextPieces_3, parse_tree__parse_inst_mode_name__Term_13, &parse_tree__parse_inst_mode_name__MaybeHeadInst_16);
        }
        {
          parse_tree__parse_inst_mode_name__parse_insts_5_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_1, parse_tree__parse_inst_mode_name__VarSet_2, parse_tree__parse_inst_mode_name__ContextPieces_3, parse_tree__parse_inst_mode_name__Terms_14, &parse_tree__parse_inst_mode_name__MaybeTailInsts_17);
        }
        parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeHeadInst_16)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            parse_tree__parse_inst_mode_name__HeadInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeHeadInst_16, (MR_Integer) 0)));
            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeTailInsts_17)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_inst_mode_name__succeeded)
              parse_tree__parse_inst_mode_name__TailInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeTailInsts_17, (MR_Integer) 0)));
          }
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            MR_Word parse_tree__parse_inst_mode_name__Var_21;

            {
              parse_tree__parse_inst_mode_name__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_21, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__HeadInst_18));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_21, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TailInsts_19));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_inst_mode_name__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_21));
            }
          }
        else
          {
            MR_Word parse_tree__parse_inst_mode_name__Specs_20;
            MR_Word parse_tree__parse_inst_mode_name__Var_22;
            MR_Word parse_tree__parse_inst_mode_name__Var_23;

            {
              parse_tree__parse_inst_mode_name__Var_22 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__parse_inst_mode_name__MaybeHeadInst_16);
            }
            {
              parse_tree__parse_inst_mode_name__Var_23 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_1[1], parse_tree__parse_inst_mode_name__MaybeTailInsts_17);
            }
            {
              parse_tree__parse_inst_mode_name__Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_inst_mode_name__Var_22, parse_tree__parse_inst_mode_name__Var_23);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_inst_mode_name__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Specs_20));
            }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__parse_inst_mode_name__is_known_mode_name_1_p_0(
  MR_String parse_tree__parse_inst_mode_name__HeadVar__1_1)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded;

    if ((strcmp(parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_String) ">>") == 0))
      parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
    else
    if ((strcmp(parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_String) "is") == 0))
      parse_tree__parse_inst_mode_name__succeeded = MR_TRUE;
    else
      parse_tree__parse_inst_mode_name__succeeded = MR_FALSE;
    return parse_tree__parse_inst_mode_name__succeeded;
  }
}

void MR_CALL 
parse_tree__parse_inst_mode_name__parse_mode_5_p_0(
  MR_Word parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_6,
  MR_Word parse_tree__parse_inst_mode_name__VarSet_7,
  MR_Word parse_tree__parse_inst_mode_name__ContextPieces_8,
  MR_Word parse_tree__parse_inst_mode_name__Term_9,
  MR_Word * parse_tree__parse_inst_mode_name__MaybeMode_10)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded;

    if (((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__Term_9)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__parse_inst_mode_name__TermFunctor_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Term_9, (MR_Integer) 0)));
        MR_Word parse_tree__parse_inst_mode_name__ArgTerms0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Term_9, (MR_Integer) 1)));
        MR_Word parse_tree__parse_inst_mode_name__Context_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Term_9, (MR_Integer) 2)));

        switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__TermFunctor_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String parse_tree__parse_inst_mode_name__FunctorName_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__TermFunctor_16, (MR_Integer) 0)));
              MR_Word parse_tree__parse_inst_mode_name__InstTermA_27;
              MR_Word parse_tree__parse_inst_mode_name__InstTermB_28;
              MR_Word parse_tree__parse_inst_mode_name__Var_41;
              MR_Word parse_tree__parse_inst_mode_name__Var_42;

              parse_tree__parse_inst_mode_name__succeeded = (strcmp(parse_tree__parse_inst_mode_name__FunctorName_26, (MR_String) ">>") == 0);
              if (parse_tree__parse_inst_mode_name__succeeded)
                {
                  parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__ArgTerms0_17)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__parse_inst_mode_name__succeeded)
                    {
                      parse_tree__parse_inst_mode_name__InstTermA_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__ArgTerms0_17, (MR_Integer) 0)));
                      parse_tree__parse_inst_mode_name__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__ArgTerms0_17, (MR_Integer) 1)));
                      parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__Var_41)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__parse_inst_mode_name__succeeded)
                        {
                          parse_tree__parse_inst_mode_name__InstTermB_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_41, (MR_Integer) 0)));
                          parse_tree__parse_inst_mode_name__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_41, (MR_Integer) 1)));
                          parse_tree__parse_inst_mode_name__succeeded = (parse_tree__parse_inst_mode_name__Var_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                    }
                }
              if (parse_tree__parse_inst_mode_name__succeeded)
                {
                  MR_Word parse_tree__parse_inst_mode_name__MaybeInstA_29;
                  MR_Word parse_tree__parse_inst_mode_name__MaybeInstB_30;
                  MR_Word parse_tree__parse_inst_mode_name__InstA_31;
                  MR_Word parse_tree__parse_inst_mode_name__InstB_32;

                  {
                    parse_tree__parse_inst_mode_name__parse_inst_5_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_6, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__ContextPieces_8, parse_tree__parse_inst_mode_name__InstTermA_27, &parse_tree__parse_inst_mode_name__MaybeInstA_29);
                  }
                  {
                    parse_tree__parse_inst_mode_name__parse_inst_5_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_6, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__ContextPieces_8, parse_tree__parse_inst_mode_name__InstTermB_28, &parse_tree__parse_inst_mode_name__MaybeInstB_30);
                  }
                  parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeInstA_29)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__parse_inst_mode_name__succeeded)
                    {
                      parse_tree__parse_inst_mode_name__InstA_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeInstA_29, (MR_Integer) 0)));
                      parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeInstB_30)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__parse_inst_mode_name__succeeded)
                        parse_tree__parse_inst_mode_name__InstB_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeInstB_30, (MR_Integer) 0)));
                    }
                  if (parse_tree__parse_inst_mode_name__succeeded)
                    {
                      MR_Word parse_tree__parse_inst_mode_name__Var_43;

                      {
                        parse_tree__parse_inst_mode_name__Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_43, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__InstA_31));
                        MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_43, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__InstB_32));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__parse_inst_mode_name__MaybeMode_10 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_43));
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_124_124 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
                      MR_Word parse_tree__parse_inst_mode_name__Specs_33;
                      MR_Word parse_tree__parse_inst_mode_name__Var_44;
                      MR_Word parse_tree__parse_inst_mode_name__Var_45;

                      {
                        parse_tree__parse_inst_mode_name__Var_44 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_124_124, parse_tree__parse_inst_mode_name__MaybeInstA_29);
                      }
                      {
                        parse_tree__parse_inst_mode_name__Var_45 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_124_124, parse_tree__parse_inst_mode_name__MaybeInstB_30);
                      }
                      {
                        parse_tree__parse_inst_mode_name__Specs_33 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_inst_mode_name__Var_44, parse_tree__parse_inst_mode_name__Var_45);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *parse_tree__parse_inst_mode_name__MaybeMode_10 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Specs_33));
                      }
                    }
                }
              else
                {
                  MR_Word parse_tree__parse_inst_mode_name__BeforeIsTerm_34;
                  MR_Word parse_tree__parse_inst_mode_name__DetTerm_35;
                  MR_Word parse_tree__parse_inst_mode_name__Var_46;
                  MR_Word parse_tree__parse_inst_mode_name__Var_47;

                  parse_tree__parse_inst_mode_name__succeeded = (strcmp(parse_tree__parse_inst_mode_name__FunctorName_26, (MR_String) "is") == 0);
                  if (parse_tree__parse_inst_mode_name__succeeded)
                    {
                      parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__ArgTerms0_17)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__parse_inst_mode_name__succeeded)
                        {
                          parse_tree__parse_inst_mode_name__BeforeIsTerm_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__ArgTerms0_17, (MR_Integer) 0)));
                          parse_tree__parse_inst_mode_name__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__ArgTerms0_17, (MR_Integer) 1)));
                          parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__Var_46)) == (MR_mktag((MR_Integer) 1)));
                          if (parse_tree__parse_inst_mode_name__succeeded)
                            {
                              parse_tree__parse_inst_mode_name__DetTerm_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_46, (MR_Integer) 0)));
                              parse_tree__parse_inst_mode_name__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_46, (MR_Integer) 1)));
                              parse_tree__parse_inst_mode_name__succeeded = (parse_tree__parse_inst_mode_name__Var_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                        }
                    }
                  if (parse_tree__parse_inst_mode_name__succeeded)
                    {
                      parse_tree__parse_inst_mode_name__parse_higher_order_mode_6_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_6, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__ContextPieces_8, parse_tree__parse_inst_mode_name__BeforeIsTerm_34, parse_tree__parse_inst_mode_name__DetTerm_35, parse_tree__parse_inst_mode_name__MaybeMode_10);
                    }
                  else
                    {
                      MR_Word parse_tree__parse_inst_mode_name__MaybeFunctor_36;

                      {
                        parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__ContextPieces_8, parse_tree__parse_inst_mode_name__Term_9, &parse_tree__parse_inst_mode_name__MaybeFunctor_36);
                      }
                      if (((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeFunctor_36)) == (MR_mktag((MR_Integer) 0))))
                        {
                          MR_Word parse_tree__parse_inst_mode_name__Specs_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__MaybeFunctor_36, (MR_Integer) 0)));

                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                            *parse_tree__parse_inst_mode_name__MaybeMode_10 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Specs_108));
                          }
                        }
                      else
                        {
                          MR_Word parse_tree__parse_inst_mode_name__SymName_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeFunctor_36, (MR_Integer) 0)));
                          MR_Word parse_tree__parse_inst_mode_name__ArgTerms_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeFunctor_36, (MR_Integer) 1)));
                          MR_Word parse_tree__parse_inst_mode_name__MaybeArgInsts_39;

                          {
                            parse_tree__parse_inst_mode_name__parse_insts_5_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_6, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__ContextPieces_8, parse_tree__parse_inst_mode_name__ArgTerms_38, &parse_tree__parse_inst_mode_name__MaybeArgInsts_39);
                          }
                          if (((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeArgInsts_39)) == (MR_mktag((MR_Integer) 0))))
                            *parse_tree__parse_inst_mode_name__MaybeMode_10 = (MR_Word) parse_tree__parse_inst_mode_name__MaybeArgInsts_39;
                          else
                            {
                              MR_Word parse_tree__parse_inst_mode_name__ArgInsts_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeArgInsts_39, (MR_Integer) 0)));
                              MR_Word parse_tree__parse_inst_mode_name__Var_48;

                              {
                                parse_tree__parse_inst_mode_name__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_48, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__SymName_37));
                                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_48, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__ArgInsts_40));
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                *parse_tree__parse_inst_mode_name__MaybeMode_10 = base;
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_48));
                              }
                            }
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_122_185;
              MR_Word parse_tree__parse_inst_mode_name__Var_157;
              MR_Word parse_tree__parse_inst_mode_name__Var_158;
              MR_Word parse_tree__parse_inst_mode_name__Var_160;
              MR_Word parse_tree__parse_inst_mode_name__Var_163;
              MR_Word parse_tree__parse_inst_mode_name__Var_165;
              MR_Word parse_tree__parse_inst_mode_name__Var_168;
              MR_Word parse_tree__parse_inst_mode_name__Var_169;
              MR_Word parse_tree__parse_inst_mode_name__Var_173;
              MR_Word parse_tree__parse_inst_mode_name__Var_174;
              MR_Word parse_tree__parse_inst_mode_name__Var_175;
              MR_Word parse_tree__parse_inst_mode_name__Var_176;
              MR_Word parse_tree__parse_inst_mode_name__Var_179;
              MR_String parse_tree__parse_inst_mode_name__TermStr_181;
              MR_Word parse_tree__parse_inst_mode_name__Pieces_182;
              MR_Word parse_tree__parse_inst_mode_name__Spec_183;

              {
                parse_tree__parse_inst_mode_name__TermStr_181 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__Term_9);
              }
              parse_tree__parse_inst_mode_name__TypeCtorInfo_122_185 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              {
                parse_tree__parse_inst_mode_name__Var_157 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_122_185, parse_tree__parse_inst_mode_name__ContextPieces_8);
              }
              {
                parse_tree__parse_inst_mode_name__Var_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_169, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_169, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_181));
              }
              {
                parse_tree__parse_inst_mode_name__Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_168, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_169));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_168, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[7])));
              }
              {
                parse_tree__parse_inst_mode_name__Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_165, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[60])));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_165, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_168));
              }
              {
                parse_tree__parse_inst_mode_name__Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_163, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[62])));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_163, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_165));
              }
              {
                parse_tree__parse_inst_mode_name__Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_160, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[58])));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_160, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_163));
              }
              {
                parse_tree__parse_inst_mode_name__Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_158, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_158, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_160));
              }
              {
                parse_tree__parse_inst_mode_name__Pieces_182 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_122_185, parse_tree__parse_inst_mode_name__Var_157, parse_tree__parse_inst_mode_name__Var_158);
              }
              {
                parse_tree__parse_inst_mode_name__Var_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_176, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_182));
              }
              {
                parse_tree__parse_inst_mode_name__Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_175, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_176));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_175, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_inst_mode_name__Var_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_174, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_115));
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_174, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_175));
              }
              {
                parse_tree__parse_inst_mode_name__Var_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_173, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_174));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_173, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_inst_mode_name__Spec_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_183, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_183, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_173));
              }
              {
                parse_tree__parse_inst_mode_name__Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_179, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_183));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_inst_mode_name__MaybeMode_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_179));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_122_215;
              MR_Word parse_tree__parse_inst_mode_name__Var_187;
              MR_Word parse_tree__parse_inst_mode_name__Var_188;
              MR_Word parse_tree__parse_inst_mode_name__Var_190;
              MR_Word parse_tree__parse_inst_mode_name__Var_193;
              MR_Word parse_tree__parse_inst_mode_name__Var_195;
              MR_Word parse_tree__parse_inst_mode_name__Var_198;
              MR_Word parse_tree__parse_inst_mode_name__Var_199;
              MR_Word parse_tree__parse_inst_mode_name__Var_203;
              MR_Word parse_tree__parse_inst_mode_name__Var_204;
              MR_Word parse_tree__parse_inst_mode_name__Var_205;
              MR_Word parse_tree__parse_inst_mode_name__Var_206;
              MR_Word parse_tree__parse_inst_mode_name__Var_209;
              MR_String parse_tree__parse_inst_mode_name__TermStr_211;
              MR_Word parse_tree__parse_inst_mode_name__Pieces_212;
              MR_Word parse_tree__parse_inst_mode_name__Spec_213;

              {
                parse_tree__parse_inst_mode_name__TermStr_211 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__Term_9);
              }
              parse_tree__parse_inst_mode_name__TypeCtorInfo_122_215 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              {
                parse_tree__parse_inst_mode_name__Var_187 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_122_215, parse_tree__parse_inst_mode_name__ContextPieces_8);
              }
              {
                parse_tree__parse_inst_mode_name__Var_199 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_199, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_199, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_211));
              }
              {
                parse_tree__parse_inst_mode_name__Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_198, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_199));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_198, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[7])));
              }
              {
                parse_tree__parse_inst_mode_name__Var_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_195, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[60])));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_195, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_198));
              }
              {
                parse_tree__parse_inst_mode_name__Var_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_193, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[63])));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_193, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_195));
              }
              {
                parse_tree__parse_inst_mode_name__Var_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_190, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[58])));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_190, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_193));
              }
              {
                parse_tree__parse_inst_mode_name__Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_188, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_188, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_190));
              }
              {
                parse_tree__parse_inst_mode_name__Pieces_212 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_122_215, parse_tree__parse_inst_mode_name__Var_187, parse_tree__parse_inst_mode_name__Var_188);
              }
              {
                parse_tree__parse_inst_mode_name__Var_206 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_206, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_212));
              }
              {
                parse_tree__parse_inst_mode_name__Var_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_205, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_206));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_inst_mode_name__Var_204 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_204, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_115));
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_204, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_205));
              }
              {
                parse_tree__parse_inst_mode_name__Var_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_203, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_204));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_203, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_inst_mode_name__Spec_213 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_213, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_213, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_213, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_203));
              }
              {
                parse_tree__parse_inst_mode_name__Var_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_209, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_213));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_209, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_inst_mode_name__MaybeMode_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_209));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__TermFunctor_16, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_122_122;
                  MR_Word parse_tree__parse_inst_mode_name__Var_49;
                  MR_Word parse_tree__parse_inst_mode_name__Var_50;
                  MR_Word parse_tree__parse_inst_mode_name__Var_52;
                  MR_Word parse_tree__parse_inst_mode_name__Var_55;
                  MR_Word parse_tree__parse_inst_mode_name__Var_57;
                  MR_Word parse_tree__parse_inst_mode_name__Var_60;
                  MR_Word parse_tree__parse_inst_mode_name__Var_61;
                  MR_Word parse_tree__parse_inst_mode_name__Var_70;
                  MR_Word parse_tree__parse_inst_mode_name__Var_71;
                  MR_Word parse_tree__parse_inst_mode_name__Var_72;
                  MR_Word parse_tree__parse_inst_mode_name__Var_73;
                  MR_Word parse_tree__parse_inst_mode_name__Var_76;
                  MR_String parse_tree__parse_inst_mode_name__TermStr_102;
                  MR_Word parse_tree__parse_inst_mode_name__Pieces_103;
                  MR_Word parse_tree__parse_inst_mode_name__Spec_104;

                  {
                    parse_tree__parse_inst_mode_name__TermStr_102 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__Term_9);
                  }
                  parse_tree__parse_inst_mode_name__TypeCtorInfo_122_122 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                  {
                    parse_tree__parse_inst_mode_name__Var_49 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_122_122, parse_tree__parse_inst_mode_name__ContextPieces_8);
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_61, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_102));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_60, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_61));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[7])));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[60])));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_57, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_60));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[59])));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_55, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_57));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[58])));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_52, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_55));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_50, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_52));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Pieces_103 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_122_122, parse_tree__parse_inst_mode_name__Var_49, parse_tree__parse_inst_mode_name__Var_50);
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_73, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_103));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_72, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_73));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_71, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_115));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_71, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_72));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_70, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_71));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Spec_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_104, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_70));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_76, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_104));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__parse_inst_mode_name__MaybeMode_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_76));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_122_155;
                  MR_Word parse_tree__parse_inst_mode_name__Var_127;
                  MR_Word parse_tree__parse_inst_mode_name__Var_128;
                  MR_Word parse_tree__parse_inst_mode_name__Var_130;
                  MR_Word parse_tree__parse_inst_mode_name__Var_133;
                  MR_Word parse_tree__parse_inst_mode_name__Var_135;
                  MR_Word parse_tree__parse_inst_mode_name__Var_138;
                  MR_Word parse_tree__parse_inst_mode_name__Var_139;
                  MR_Word parse_tree__parse_inst_mode_name__Var_143;
                  MR_Word parse_tree__parse_inst_mode_name__Var_144;
                  MR_Word parse_tree__parse_inst_mode_name__Var_145;
                  MR_Word parse_tree__parse_inst_mode_name__Var_146;
                  MR_Word parse_tree__parse_inst_mode_name__Var_149;
                  MR_String parse_tree__parse_inst_mode_name__TermStr_151;
                  MR_Word parse_tree__parse_inst_mode_name__Pieces_152;
                  MR_Word parse_tree__parse_inst_mode_name__Spec_153;

                  {
                    parse_tree__parse_inst_mode_name__TermStr_151 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__Term_9);
                  }
                  parse_tree__parse_inst_mode_name__TypeCtorInfo_122_155 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                  {
                    parse_tree__parse_inst_mode_name__Var_127 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_122_155, parse_tree__parse_inst_mode_name__ContextPieces_8);
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_139, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_151));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_138, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_139));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[7])));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_135, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[60])));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_135, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_138));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_133, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[61])));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_133, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_135));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_130, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[58])));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_130, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_133));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_128, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_128, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_130));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Pieces_152 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_122_155, parse_tree__parse_inst_mode_name__Var_127, parse_tree__parse_inst_mode_name__Var_128);
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_146, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_152));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_145, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_146));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_144, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_115));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_144, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_145));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_143, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_144));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Spec_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_153, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_153, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_143));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_149, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_153));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_149, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__parse_inst_mode_name__MaybeMode_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_149));
                  }
                }
                break;
            }
            break;
        }
      }
    else
      {
        MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_120_120;
        MR_Word parse_tree__parse_inst_mode_name__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Term_9, (MR_Integer) 1)));
        MR_String parse_tree__parse_inst_mode_name__TermStr_13;
        MR_Word parse_tree__parse_inst_mode_name__Pieces_14;
        MR_Word parse_tree__parse_inst_mode_name__Spec_15;
        MR_Word parse_tree__parse_inst_mode_name__Var_78;
        MR_Word parse_tree__parse_inst_mode_name__Var_79;
        MR_Word parse_tree__parse_inst_mode_name__Var_81;
        MR_Word parse_tree__parse_inst_mode_name__Var_84;
        MR_Word parse_tree__parse_inst_mode_name__Var_85;
        MR_Word parse_tree__parse_inst_mode_name__Var_94;
        MR_Word parse_tree__parse_inst_mode_name__Var_95;
        MR_Word parse_tree__parse_inst_mode_name__Var_96;
        MR_Word parse_tree__parse_inst_mode_name__Var_97;
        MR_Word parse_tree__parse_inst_mode_name__Var_100;
        MR_Word parse_tree__parse_inst_mode_name__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Term_9, (MR_Integer) 0)));

        {
          parse_tree__parse_inst_mode_name__TermStr_13 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__Term_9);
        }
        parse_tree__parse_inst_mode_name__TypeCtorInfo_120_120 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          parse_tree__parse_inst_mode_name__Var_78 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_120_120, parse_tree__parse_inst_mode_name__ContextPieces_8);
        }
        {
          parse_tree__parse_inst_mode_name__Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Var_85, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_13));
        }
        {
          parse_tree__parse_inst_mode_name__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_84, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_85));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[9])));
        }
        {
          parse_tree__parse_inst_mode_name__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[64])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_81, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_84));
        }
        {
          parse_tree__parse_inst_mode_name__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_79, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_81));
        }
        {
          parse_tree__parse_inst_mode_name__Pieces_14 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_120_120, parse_tree__parse_inst_mode_name__Var_78, parse_tree__parse_inst_mode_name__Var_79);
        }
        {
          parse_tree__parse_inst_mode_name__Var_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_97, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_14));
        }
        {
          parse_tree__parse_inst_mode_name__Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_96, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_97));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_inst_mode_name__Var_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_95, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_12));
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Var_95, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_96));
        }
        {
          parse_tree__parse_inst_mode_name__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_94, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_95));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_inst_mode_name__Spec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_15, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_94));
        }
        {
          parse_tree__parse_inst_mode_name__Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_100, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_15));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_inst_mode_name__MaybeMode_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_100));
        }
      }
  }
}

void MR_CALL 
parse_tree__parse_inst_mode_name__parse_modes_5_p_0(
  MR_Word parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_1,
  MR_Word parse_tree__parse_inst_mode_name__VarSet_2,
  MR_Word parse_tree__parse_inst_mode_name__ContextPieces_3,
  MR_Word parse_tree__parse_inst_mode_name__HeadVar__4_4,
  MR_Word * parse_tree__parse_inst_mode_name__HeadVar__5_5)
{
  {
    MR_bool parse_tree__parse_inst_mode_name__succeeded;

    if ((parse_tree__parse_inst_mode_name__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__parse_inst_mode_name__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_2[0]);
      }
    else
      {
        MR_Word parse_tree__parse_inst_mode_name__Term_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word parse_tree__parse_inst_mode_name__Terms_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word parse_tree__parse_inst_mode_name__MaybeHeadMode_16;
        MR_Word parse_tree__parse_inst_mode_name__MaybeTailModes_17;
        MR_Word parse_tree__parse_inst_mode_name__HeadMode_18;
        MR_Word parse_tree__parse_inst_mode_name__TailModes_19;

        {
          parse_tree__parse_inst_mode_name__parse_mode_5_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_1, parse_tree__parse_inst_mode_name__VarSet_2, parse_tree__parse_inst_mode_name__ContextPieces_3, parse_tree__parse_inst_mode_name__Term_13, &parse_tree__parse_inst_mode_name__MaybeHeadMode_16);
        }
        {
          parse_tree__parse_inst_mode_name__parse_modes_5_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_1, parse_tree__parse_inst_mode_name__VarSet_2, parse_tree__parse_inst_mode_name__ContextPieces_3, parse_tree__parse_inst_mode_name__Terms_14, &parse_tree__parse_inst_mode_name__MaybeTailModes_17);
        }
        parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeHeadMode_16)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            parse_tree__parse_inst_mode_name__HeadMode_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeHeadMode_16, (MR_Integer) 0)));
            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeTailModes_17)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_inst_mode_name__succeeded)
              parse_tree__parse_inst_mode_name__TailModes_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeTailModes_17, (MR_Integer) 0)));
          }
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            MR_Word parse_tree__parse_inst_mode_name__Var_21;

            {
              parse_tree__parse_inst_mode_name__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_21, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__HeadMode_18));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Var_21, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TailModes_19));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_inst_mode_name__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Var_21));
            }
          }
        else
          {
            MR_Word parse_tree__parse_inst_mode_name__Specs_20;
            MR_Word parse_tree__parse_inst_mode_name__Var_22;
            MR_Word parse_tree__parse_inst_mode_name__Var_23;

            {
              parse_tree__parse_inst_mode_name__Var_22 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_inst_mode_name__MaybeHeadMode_16);
            }
            {
              parse_tree__parse_inst_mode_name__Var_23 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_1[0], parse_tree__parse_inst_mode_name__MaybeTailModes_17);
            }
            {
              parse_tree__parse_inst_mode_name__Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_inst_mode_name__Var_22, parse_tree__parse_inst_mode_name__Var_23);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_inst_mode_name__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Specs_20));
            }
          }
      }
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

/* :- end_module parse_tree.parse_inst_mode_name. */
