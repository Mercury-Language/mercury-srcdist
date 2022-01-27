/*
** Automatically generated from `parse_inst_mode_name.m'
** by the Mercury compiler,
** version rotd-2017-01-21
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
    ((MR_Box) ((MR_String) "an integer"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "such as"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a floating point number"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "an implementation defined literal"))
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
                MR_Word parse_tree__parse_inst_mode_name__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Args_5, (MR_Integer) 1)));
                MR_Box parse_tree__parse_inst_mode_name__V_225_225 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Args_5, (MR_Integer) 0));

                if ((parse_tree__parse_inst_mode_name__V_224_224 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_2[5]);
                  }
                else
                  {
                    MR_Word parse_tree__parse_inst_mode_name__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_224_224, (MR_Integer) 1)));
                    MR_Box parse_tree__parse_inst_mode_name__V_237_237 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_224_224, (MR_Integer) 0));

                    if ((parse_tree__parse_inst_mode_name__V_236_236 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Word parse_tree__parse_inst_mode_name__V_44_44;

                        {
                          parse_tree__parse_inst_mode_name__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_44_44, 0) = parse_tree__parse_inst_mode_name__V_225_225;
                          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_44_44, 1) = parse_tree__parse_inst_mode_name__V_237_237;
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__parse_inst_mode_name__KnownInst_6 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_44_44));
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
                MR_Word parse_tree__parse_inst_mode_name__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Args_5, (MR_Integer) 1)));
                MR_Box parse_tree__parse_inst_mode_name__V_227_227 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Args_5, (MR_Integer) 0));

                if ((parse_tree__parse_inst_mode_name__V_226_226 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word parse_tree__parse_inst_mode_name__V_39_39;

                    {
                      parse_tree__parse_inst_mode_name__V_39_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__V_39_39, 0) = parse_tree__parse_inst_mode_name__V_227_227;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__parse_inst_mode_name__KnownInst_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_39_39));
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
                MR_Word parse_tree__parse_inst_mode_name__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Args_5, (MR_Integer) 1)));
                MR_Box parse_tree__parse_inst_mode_name__V_229_229 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Args_5, (MR_Integer) 0));

                if ((parse_tree__parse_inst_mode_name__V_228_228 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word parse_tree__parse_inst_mode_name__V_35_35;

                    {
                      parse_tree__parse_inst_mode_name__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_35_35, 1) = parse_tree__parse_inst_mode_name__V_229_229;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__parse_inst_mode_name__KnownInst_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_35_35));
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
                MR_Word parse_tree__parse_inst_mode_name__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Args_5, (MR_Integer) 1)));
                MR_Box parse_tree__parse_inst_mode_name__V_231_231 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Args_5, (MR_Integer) 0));

                if ((parse_tree__parse_inst_mode_name__V_230_230 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    *parse_tree__parse_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_inst_mode_name_scalar_common_2[5]);
                  }
                else
                  {
                    MR_Word parse_tree__parse_inst_mode_name__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_230_230, (MR_Integer) 1)));
                    MR_Box parse_tree__parse_inst_mode_name__V_239_239 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_230_230, (MR_Integer) 0));

                    if ((parse_tree__parse_inst_mode_name__V_238_238 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Word parse_tree__parse_inst_mode_name__V_51_51;

                        {
                          parse_tree__parse_inst_mode_name__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_51_51, 0) = parse_tree__parse_inst_mode_name__V_231_231;
                          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_51_51, 1) = parse_tree__parse_inst_mode_name__V_239_239;
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__parse_inst_mode_name__KnownInst_6 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_51_51));
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
                MR_Word parse_tree__parse_inst_mode_name__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Args_5, (MR_Integer) 1)));
                MR_Box parse_tree__parse_inst_mode_name__V_233_233 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Args_5, (MR_Integer) 0));

                if ((parse_tree__parse_inst_mode_name__V_232_232 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word parse_tree__parse_inst_mode_name__V_59_59;

                    {
                      parse_tree__parse_inst_mode_name__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_59_59, 1) = parse_tree__parse_inst_mode_name__V_233_233;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__parse_inst_mode_name__KnownInst_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_59_59));
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
                MR_Word parse_tree__parse_inst_mode_name__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Args_5, (MR_Integer) 1)));
                MR_Box parse_tree__parse_inst_mode_name__V_235_235 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Args_5, (MR_Integer) 0));

                if ((parse_tree__parse_inst_mode_name__V_234_234 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word parse_tree__parse_inst_mode_name__V_66_66;

                    {
                      parse_tree__parse_inst_mode_name__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_66_66, 1) = parse_tree__parse_inst_mode_name__V_235_235;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__parse_inst_mode_name__KnownInst_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_66_66));
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
            MR_Word parse_tree__parse_inst_mode_name__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__parse_inst_mode_name__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    parse_tree__prog_data____Compare____mer_inst_0_0(parse_tree__parse_inst_mode_name__HeadVar__1_1, parse_tree__parse_inst_mode_name__V_31_31, parse_tree__parse_inst_mode_name__V_5_5);
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
            MR_Word parse_tree__parse_inst_mode_name__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__parse_inst_mode_name__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    parse_tree__parse_inst_mode_name____Compare____known_compound_inst_kind_1_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_24, parse_tree__parse_inst_mode_name__HeadVar__1_1, parse_tree__parse_inst_mode_name__V_30_30, parse_tree__parse_inst_mode_name__V_13_13);
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
            MR_String parse_tree__parse_inst_mode_name__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_String parse_tree__parse_inst_mode_name__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__parse_inst_mode_name__HeadVar__1_1, parse_tree__parse_inst_mode_name__V_29_29, parse_tree__parse_inst_mode_name__V_21_21);
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
            MR_Word parse_tree__parse_inst_mode_name__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__parse_inst_mode_name__V_4_4;

            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_inst_mode_name__succeeded)
              {
                parse_tree__parse_inst_mode_name__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__parse_inst_mode_name__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__parse_inst_mode_name__V_3_3, parse_tree__parse_inst_mode_name__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__parse_inst_mode_name__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__parse_inst_mode_name__V_6_6;

            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_inst_mode_name__succeeded)
              {
                parse_tree__parse_inst_mode_name__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__parse_inst_mode_name__succeeded = parse_tree__parse_inst_mode_name____Unify____known_compound_inst_kind_1_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_11, parse_tree__parse_inst_mode_name__V_5_5, parse_tree__parse_inst_mode_name__V_6_6);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String parse_tree__parse_inst_mode_name__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 0)));
            MR_String parse_tree__parse_inst_mode_name__V_8_8;

            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__parse_inst_mode_name__succeeded)
              {
                parse_tree__parse_inst_mode_name__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)));
                parse_tree__parse_inst_mode_name__succeeded = (strcmp(parse_tree__parse_inst_mode_name__V_7_7, parse_tree__parse_inst_mode_name__V_8_8) == 0);
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
            MR_Box parse_tree__parse_inst_mode_name__V_82_82 = (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 1));
            MR_Box parse_tree__parse_inst_mode_name__V_83_83 = (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Box parse_tree__parse_inst_mode_name__V_6_6 = (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 0));
                  MR_Box parse_tree__parse_inst_mode_name__V_7_7 = (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 1));
                  MR_Word parse_tree__parse_inst_mode_name__V_8_8;

                  {
                    mercury__builtin__compare_3_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_78, &parse_tree__parse_inst_mode_name__V_8_8, parse_tree__parse_inst_mode_name__V_83_83, parse_tree__parse_inst_mode_name__V_6_6);
                  }
                  parse_tree__parse_inst_mode_name__succeeded = (parse_tree__parse_inst_mode_name__V_8_8 == (MR_Integer) 0);
                  parse_tree__parse_inst_mode_name__succeeded = !(parse_tree__parse_inst_mode_name__succeeded);
                  if (parse_tree__parse_inst_mode_name__succeeded)
                    *parse_tree__parse_inst_mode_name__HeadVar__1_1 = parse_tree__parse_inst_mode_name__V_8_8;
                  else
                    {
                      mercury__builtin__compare_3_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_78, parse_tree__parse_inst_mode_name__HeadVar__1_1, parse_tree__parse_inst_mode_name__V_82_82, parse_tree__parse_inst_mode_name__V_7_7);
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
            MR_Box parse_tree__parse_inst_mode_name__V_80_80 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 1));
            MR_Box parse_tree__parse_inst_mode_name__V_81_81 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box parse_tree__parse_inst_mode_name__V_28_28 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 0));
                  MR_Box parse_tree__parse_inst_mode_name__V_29_29 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 1));
                  MR_Word parse_tree__parse_inst_mode_name__V_30_30;

                  {
                    mercury__builtin__compare_3_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_78, &parse_tree__parse_inst_mode_name__V_30_30, parse_tree__parse_inst_mode_name__V_81_81, parse_tree__parse_inst_mode_name__V_28_28);
                  }
                  parse_tree__parse_inst_mode_name__succeeded = (parse_tree__parse_inst_mode_name__V_30_30 == (MR_Integer) 0);
                  parse_tree__parse_inst_mode_name__succeeded = !(parse_tree__parse_inst_mode_name__succeeded);
                  if (parse_tree__parse_inst_mode_name__succeeded)
                    *parse_tree__parse_inst_mode_name__HeadVar__1_1 = parse_tree__parse_inst_mode_name__V_30_30;
                  else
                    {
                      mercury__builtin__compare_3_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_78, parse_tree__parse_inst_mode_name__HeadVar__1_1, parse_tree__parse_inst_mode_name__V_80_80, parse_tree__parse_inst_mode_name__V_29_29);
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
            MR_Box parse_tree__parse_inst_mode_name__V_79_79 = (MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0));

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
                  MR_Box parse_tree__parse_inst_mode_name__V_47_47 = (MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 0));

                  {
                    mercury__builtin__compare_3_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_78, parse_tree__parse_inst_mode_name__HeadVar__1_1, parse_tree__parse_inst_mode_name__V_79_79, parse_tree__parse_inst_mode_name__V_47_47);
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
                MR_Box parse_tree__parse_inst_mode_name__V_85_85 = (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 1));

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
                          MR_Box parse_tree__parse_inst_mode_name__V_61_61 = (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 1));

                          {
                            mercury__builtin__compare_3_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_78, parse_tree__parse_inst_mode_name__HeadVar__1_1, parse_tree__parse_inst_mode_name__V_85_85, parse_tree__parse_inst_mode_name__V_61_61);
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
                MR_Box parse_tree__parse_inst_mode_name__V_84_84 = (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 1));

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
                          MR_Box parse_tree__parse_inst_mode_name__V_75_75 = (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 1));

                          {
                            mercury__builtin__compare_3_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_78, parse_tree__parse_inst_mode_name__HeadVar__1_1, parse_tree__parse_inst_mode_name__V_84_84, parse_tree__parse_inst_mode_name__V_75_75);
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
            MR_Box parse_tree__parse_inst_mode_name__V_3_3 = (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 0));
            MR_Box parse_tree__parse_inst_mode_name__V_4_4 = (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 1));
            MR_Box parse_tree__parse_inst_mode_name__V_5_5;
            MR_Box parse_tree__parse_inst_mode_name__V_6_6;

            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_inst_mode_name__succeeded)
              {
                parse_tree__parse_inst_mode_name__V_5_5 = (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0));
                parse_tree__parse_inst_mode_name__V_6_6 = (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 1));
                {
                  parse_tree__parse_inst_mode_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_19, parse_tree__parse_inst_mode_name__V_3_3, parse_tree__parse_inst_mode_name__V_5_5);
                }
                if (parse_tree__parse_inst_mode_name__succeeded)
                  {
                    parse_tree__parse_inst_mode_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_19, parse_tree__parse_inst_mode_name__V_4_4, parse_tree__parse_inst_mode_name__V_6_6);
                  }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box parse_tree__parse_inst_mode_name__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 0));
            MR_Box parse_tree__parse_inst_mode_name__V_8_8 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 1));
            MR_Box parse_tree__parse_inst_mode_name__V_9_9;
            MR_Box parse_tree__parse_inst_mode_name__V_10_10;

            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_inst_mode_name__succeeded)
              {
                parse_tree__parse_inst_mode_name__V_9_9 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0));
                parse_tree__parse_inst_mode_name__V_10_10 = (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 1));
                {
                  parse_tree__parse_inst_mode_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_19, parse_tree__parse_inst_mode_name__V_7_7, parse_tree__parse_inst_mode_name__V_9_9);
                }
                if (parse_tree__parse_inst_mode_name__succeeded)
                  {
                    parse_tree__parse_inst_mode_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_19, parse_tree__parse_inst_mode_name__V_8_8, parse_tree__parse_inst_mode_name__V_10_10);
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box parse_tree__parse_inst_mode_name__V_11_11 = (MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 0));
            MR_Box parse_tree__parse_inst_mode_name__V_12_12;

            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__parse_inst_mode_name__succeeded)
              {
                parse_tree__parse_inst_mode_name__V_12_12 = (MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0));
                {
                  parse_tree__parse_inst_mode_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_19, parse_tree__parse_inst_mode_name__V_11_11, parse_tree__parse_inst_mode_name__V_12_12);
                }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box parse_tree__parse_inst_mode_name__V_13_13 = (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 1));
                MR_Box parse_tree__parse_inst_mode_name__V_14_14;

                parse_tree__parse_inst_mode_name__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (parse_tree__parse_inst_mode_name__succeeded)
                  {
                    parse_tree__parse_inst_mode_name__V_14_14 = (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 1));
                    {
                      parse_tree__parse_inst_mode_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_19, parse_tree__parse_inst_mode_name__V_13_13, parse_tree__parse_inst_mode_name__V_14_14);
                    }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box parse_tree__parse_inst_mode_name__V_15_15 = (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 1));
                MR_Box parse_tree__parse_inst_mode_name__V_16_16;

                parse_tree__parse_inst_mode_name__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (parse_tree__parse_inst_mode_name__succeeded)
                  {
                    parse_tree__parse_inst_mode_name__V_16_16 = (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 1));
                    {
                      parse_tree__parse_inst_mode_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_inst_mode_name__TypeInfo_for_T_19, parse_tree__parse_inst_mode_name__V_15_15, parse_tree__parse_inst_mode_name__V_16_16);
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
        MR_Word parse_tree__parse_inst_mode_name__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)));

        if ((parse_tree__parse_inst_mode_name__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__parse_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word parse_tree__parse_inst_mode_name__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__3_3, (MR_Integer) 0)));
            MR_Integer parse_tree__parse_inst_mode_name__V_12_12 = (MR_Integer) parse_tree__parse_inst_mode_name__V_11_11;
            MR_Integer parse_tree__parse_inst_mode_name__V_13_13 = (MR_Integer) parse_tree__parse_inst_mode_name__V_7_7;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_inst_mode_name__HeadVar__1_1, parse_tree__parse_inst_mode_name__V_12_12, parse_tree__parse_inst_mode_name__V_13_13);
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
        MR_Word parse_tree__parse_inst_mode_name__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__parse_inst_mode_name__V_6_6;

        parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            parse_tree__parse_inst_mode_name__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)));
            parse_tree__parse_inst_mode_name__succeeded = (parse_tree__parse_inst_mode_name__V_5_5 == parse_tree__parse_inst_mode_name__V_6_6);
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
        MR_Word parse_tree__parse_inst_mode_name__Context_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Term_9, (MR_Integer) 2)));

        switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__Functor_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__parse_inst_mode_name__MaybeFunctor_19;
              MR_Word parse_tree__parse_inst_mode_name__V_100_100;

              {
                parse_tree__parse_inst_mode_name__V_100_100 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
              }
              {
                parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__V_100_100, parse_tree__parse_inst_mode_name__Term_9, &parse_tree__parse_inst_mode_name__MaybeFunctor_19);
              }
              if (((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeFunctor_19)) == (MR_mktag((MR_Integer) 0))))
                {
                  MR_Word parse_tree__parse_inst_mode_name__Specs_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__MaybeFunctor_19, (MR_Integer) 0)));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__parse_inst_mode_name__MaybeBoundInst_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Specs_127));
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
                      MR_Word parse_tree__parse_inst_mode_name__V_101_101;
                      MR_Word parse_tree__parse_inst_mode_name__V_102_102;

                      {
                        mercury__list__length_2_p_0((MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_1[2], parse_tree__parse_inst_mode_name__ArgTerms1_21, &parse_tree__parse_inst_mode_name__Arity_24);
                      }
                      {
                        parse_tree__parse_inst_mode_name__V_101_101 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                      }
                      {
                        parse_tree__parse_inst_mode_name__ConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__ConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__ConsId_25, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__SymName_20));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__ConsId_25, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__Arity_24));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__ConsId_25, 3) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_101_101));
                      }
                      {
                        parse_tree__parse_inst_mode_name__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_102_102, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__ConsId_25));
                        MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_102_102, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__ArgInsts_23));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__parse_inst_mode_name__MaybeBoundInst_10 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_102_102));
                      }
                    }
                }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            if ((parse_tree__parse_inst_mode_name__ArgTerms0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word parse_tree__parse_inst_mode_name__BoundInst_33;
                MR_Word parse_tree__parse_inst_mode_name__ConsId_131;

                {
                  parse_tree__prog_util__det_make_functor_cons_id_3_p_0(parse_tree__parse_inst_mode_name__Functor_16, (MR_Integer) 0, &parse_tree__parse_inst_mode_name__ConsId_131);
                }
                {
                  parse_tree__parse_inst_mode_name__BoundInst_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BoundInst_33, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__ConsId_131));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BoundInst_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_inst_mode_name__MaybeBoundInst_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__BoundInst_33));
                }
              }
            else
              {
                MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_161_161;
                MR_String parse_tree__parse_inst_mode_name__FunctorStr_37;
                MR_Word parse_tree__parse_inst_mode_name__V_42_42;
                MR_Word parse_tree__parse_inst_mode_name__V_43_43;
                MR_Word parse_tree__parse_inst_mode_name__V_45_45;
                MR_Word parse_tree__parse_inst_mode_name__V_48_48;
                MR_Word parse_tree__parse_inst_mode_name__V_49_49;
                MR_Word parse_tree__parse_inst_mode_name__V_50_50;
                MR_Word parse_tree__parse_inst_mode_name__V_53_53;
                MR_Word parse_tree__parse_inst_mode_name__V_54_54;
                MR_Word parse_tree__parse_inst_mode_name__V_63_63;
                MR_Word parse_tree__parse_inst_mode_name__V_64_64;
                MR_Word parse_tree__parse_inst_mode_name__V_65_65;
                MR_Word parse_tree__parse_inst_mode_name__V_66_66;
                MR_Word parse_tree__parse_inst_mode_name__V_69_69;
                MR_String parse_tree__parse_inst_mode_name__TermStr_132;
                MR_Word parse_tree__parse_inst_mode_name__Pieces_133;
                MR_Word parse_tree__parse_inst_mode_name__Spec_134;

                switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__Functor_16)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    parse_tree__parse_inst_mode_name__FunctorStr_37 = (MR_String) "an integer";
                    break;
                  case (MR_Integer) 2:
                    parse_tree__parse_inst_mode_name__FunctorStr_37 = (MR_String) "an integer";
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Functor_16, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        parse_tree__parse_inst_mode_name__FunctorStr_37 = (MR_String) "a string";
                        break;
                      case (MR_Integer) 1:
                        parse_tree__parse_inst_mode_name__FunctorStr_37 = (MR_String) "a float";
                        break;
                    }
                    break;
                }
                {
                  parse_tree__parse_inst_mode_name__TermStr_132 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__Term_9);
                }
                parse_tree__parse_inst_mode_name__TypeCtorInfo_161_161 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                {
                  parse_tree__parse_inst_mode_name__V_42_42 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_161_161, parse_tree__parse_inst_mode_name__ContextPieces_8);
                }
                {
                  parse_tree__parse_inst_mode_name__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_49_49, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__FunctorStr_37));
                }
                {
                  parse_tree__parse_inst_mode_name__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_54_54, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_132));
                }
                {
                  parse_tree__parse_inst_mode_name__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_53_53, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_54_54));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[53])));
                }
                {
                  parse_tree__parse_inst_mode_name__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_50_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[60])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_50_50, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_53_53));
                }
                {
                  parse_tree__parse_inst_mode_name__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_48_48, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_49_49));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_48_48, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_50_50));
                }
                {
                  parse_tree__parse_inst_mode_name__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[58])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_45_45, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_48_48));
                }
                {
                  parse_tree__parse_inst_mode_name__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_43_43, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_45_45));
                }
                {
                  parse_tree__parse_inst_mode_name__Pieces_133 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_161_161, parse_tree__parse_inst_mode_name__V_42_42, parse_tree__parse_inst_mode_name__V_43_43);
                }
                {
                  parse_tree__parse_inst_mode_name__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_66_66, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_133));
                }
                {
                  parse_tree__parse_inst_mode_name__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_65_65, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_66_66));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_inst_mode_name__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_64_64, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_149));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_64_64, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_65_65));
                }
                {
                  parse_tree__parse_inst_mode_name__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_63_63, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_64_64));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_inst_mode_name__Spec_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_134, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_134, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_63_63));
                }
                {
                  parse_tree__parse_inst_mode_name__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_69_69, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_134));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_inst_mode_name__MaybeBoundInst_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_69_69));
                }
              }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Functor_16, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                if ((parse_tree__parse_inst_mode_name__ArgTerms0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word parse_tree__parse_inst_mode_name__BoundInst_33;
                    MR_Word parse_tree__parse_inst_mode_name__ConsId_131;

                    {
                      parse_tree__prog_util__det_make_functor_cons_id_3_p_0(parse_tree__parse_inst_mode_name__Functor_16, (MR_Integer) 0, &parse_tree__parse_inst_mode_name__ConsId_131);
                    }
                    {
                      parse_tree__parse_inst_mode_name__BoundInst_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BoundInst_33, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__ConsId_131));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BoundInst_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__parse_inst_mode_name__MaybeBoundInst_10 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__BoundInst_33));
                    }
                  }
                else
                  {
                    MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_161_161;
                    MR_String parse_tree__parse_inst_mode_name__FunctorStr_37;
                    MR_Word parse_tree__parse_inst_mode_name__V_42_42;
                    MR_Word parse_tree__parse_inst_mode_name__V_43_43;
                    MR_Word parse_tree__parse_inst_mode_name__V_45_45;
                    MR_Word parse_tree__parse_inst_mode_name__V_48_48;
                    MR_Word parse_tree__parse_inst_mode_name__V_49_49;
                    MR_Word parse_tree__parse_inst_mode_name__V_50_50;
                    MR_Word parse_tree__parse_inst_mode_name__V_53_53;
                    MR_Word parse_tree__parse_inst_mode_name__V_54_54;
                    MR_Word parse_tree__parse_inst_mode_name__V_63_63;
                    MR_Word parse_tree__parse_inst_mode_name__V_64_64;
                    MR_Word parse_tree__parse_inst_mode_name__V_65_65;
                    MR_Word parse_tree__parse_inst_mode_name__V_66_66;
                    MR_Word parse_tree__parse_inst_mode_name__V_69_69;
                    MR_String parse_tree__parse_inst_mode_name__TermStr_132;
                    MR_Word parse_tree__parse_inst_mode_name__Pieces_133;
                    MR_Word parse_tree__parse_inst_mode_name__Spec_134;

                    switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__Functor_16)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        parse_tree__parse_inst_mode_name__FunctorStr_37 = (MR_String) "an integer";
                        break;
                      case (MR_Integer) 2:
                        parse_tree__parse_inst_mode_name__FunctorStr_37 = (MR_String) "an integer";
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Functor_16, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            parse_tree__parse_inst_mode_name__FunctorStr_37 = (MR_String) "a string";
                            break;
                          case (MR_Integer) 1:
                            parse_tree__parse_inst_mode_name__FunctorStr_37 = (MR_String) "a float";
                            break;
                        }
                        break;
                    }
                    {
                      parse_tree__parse_inst_mode_name__TermStr_132 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__Term_9);
                    }
                    parse_tree__parse_inst_mode_name__TypeCtorInfo_161_161 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                    {
                      parse_tree__parse_inst_mode_name__V_42_42 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_161_161, parse_tree__parse_inst_mode_name__ContextPieces_8);
                    }
                    {
                      parse_tree__parse_inst_mode_name__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_49_49, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__FunctorStr_37));
                    }
                    {
                      parse_tree__parse_inst_mode_name__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_54_54, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_132));
                    }
                    {
                      parse_tree__parse_inst_mode_name__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_53_53, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_54_54));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[53])));
                    }
                    {
                      parse_tree__parse_inst_mode_name__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_50_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[60])));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_50_50, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_53_53));
                    }
                    {
                      parse_tree__parse_inst_mode_name__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_48_48, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_49_49));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_48_48, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_50_50));
                    }
                    {
                      parse_tree__parse_inst_mode_name__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[58])));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_45_45, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_48_48));
                    }
                    {
                      parse_tree__parse_inst_mode_name__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_43_43, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_45_45));
                    }
                    {
                      parse_tree__parse_inst_mode_name__Pieces_133 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_161_161, parse_tree__parse_inst_mode_name__V_42_42, parse_tree__parse_inst_mode_name__V_43_43);
                    }
                    {
                      parse_tree__parse_inst_mode_name__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_66_66, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_133));
                    }
                    {
                      parse_tree__parse_inst_mode_name__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_65_65, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_66_66));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_inst_mode_name__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_64_64, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_149));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_64_64, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_65_65));
                    }
                    {
                      parse_tree__parse_inst_mode_name__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_63_63, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_64_64));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_inst_mode_name__Spec_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_134, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_134, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_63_63));
                    }
                    {
                      parse_tree__parse_inst_mode_name__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_69_69, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_134));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      *parse_tree__parse_inst_mode_name__MaybeBoundInst_10 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_69_69));
                    }
                  }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_159_159;
                  MR_Word parse_tree__parse_inst_mode_name__V_73_73;
                  MR_Word parse_tree__parse_inst_mode_name__V_74_74;
                  MR_Word parse_tree__parse_inst_mode_name__V_76_76;
                  MR_Word parse_tree__parse_inst_mode_name__V_79_79;
                  MR_Word parse_tree__parse_inst_mode_name__V_82_82;
                  MR_Word parse_tree__parse_inst_mode_name__V_83_83;
                  MR_Word parse_tree__parse_inst_mode_name__V_92_92;
                  MR_Word parse_tree__parse_inst_mode_name__V_93_93;
                  MR_Word parse_tree__parse_inst_mode_name__V_94_94;
                  MR_Word parse_tree__parse_inst_mode_name__V_95_95;
                  MR_Word parse_tree__parse_inst_mode_name__V_98_98;
                  MR_String parse_tree__parse_inst_mode_name__TermStr_128;
                  MR_Word parse_tree__parse_inst_mode_name__Pieces_129;
                  MR_Word parse_tree__parse_inst_mode_name__Spec_130;

                  {
                    parse_tree__parse_inst_mode_name__TermStr_128 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__Term_9);
                  }
                  parse_tree__parse_inst_mode_name__TypeCtorInfo_159_159 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                  {
                    parse_tree__parse_inst_mode_name__V_73_73 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_159_159, parse_tree__parse_inst_mode_name__ContextPieces_8);
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_83_83, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_128));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_82_82, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_83_83));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[55])));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[60])));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_79_79, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_82_82));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_76_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[73])));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_76_76, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_79_79));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_74_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_74_74, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_76_76));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Pieces_129 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_159_159, parse_tree__parse_inst_mode_name__V_73_73, parse_tree__parse_inst_mode_name__V_74_74);
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_95_95, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_129));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_94_94, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_95_95));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_93_93, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_149));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_93_93, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_94_94));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_92_92, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_93_93));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Spec_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_130, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_130, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_92_92));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_98_98, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_130));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__parse_inst_mode_name__MaybeBoundInst_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_98_98));
                  }
                }
                break;
            }
            break;
        }
      }
    else
      {
        MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_154_154;
        MR_Word parse_tree__parse_inst_mode_name__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Term_9, (MR_Integer) 1)));
        MR_String parse_tree__parse_inst_mode_name__TermStr_13;
        MR_Word parse_tree__parse_inst_mode_name__Pieces_14;
        MR_Word parse_tree__parse_inst_mode_name__Spec_15;
        MR_Word parse_tree__parse_inst_mode_name__V_103_103;
        MR_Word parse_tree__parse_inst_mode_name__V_104_104;
        MR_Word parse_tree__parse_inst_mode_name__V_106_106;
        MR_Word parse_tree__parse_inst_mode_name__V_109_109;
        MR_Word parse_tree__parse_inst_mode_name__V_110_110;
        MR_Word parse_tree__parse_inst_mode_name__V_119_119;
        MR_Word parse_tree__parse_inst_mode_name__V_120_120;
        MR_Word parse_tree__parse_inst_mode_name__V_121_121;
        MR_Word parse_tree__parse_inst_mode_name__V_122_122;
        MR_Word parse_tree__parse_inst_mode_name__V_125_125;
        MR_Word parse_tree__parse_inst_mode_name__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Term_9, (MR_Integer) 0)));

        {
          parse_tree__parse_inst_mode_name__TermStr_13 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__Term_9);
        }
        parse_tree__parse_inst_mode_name__TypeCtorInfo_154_154 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          parse_tree__parse_inst_mode_name__V_103_103 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_154_154, parse_tree__parse_inst_mode_name__ContextPieces_8);
        }
        {
          parse_tree__parse_inst_mode_name__V_110_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_110_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_110_110, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_13));
        }
        {
          parse_tree__parse_inst_mode_name__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_109_109, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_110_110));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[57])));
        }
        {
          parse_tree__parse_inst_mode_name__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_106_106, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[58])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_106_106, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_109_109));
        }
        {
          parse_tree__parse_inst_mode_name__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_104_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_104_104, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_106_106));
        }
        {
          parse_tree__parse_inst_mode_name__Pieces_14 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_154_154, parse_tree__parse_inst_mode_name__V_103_103, parse_tree__parse_inst_mode_name__V_104_104);
        }
        {
          parse_tree__parse_inst_mode_name__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_122_122, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_14));
        }
        {
          parse_tree__parse_inst_mode_name__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_121_121, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_122_122));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_inst_mode_name__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_120_120, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_12));
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_120_120, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_121_121));
        }
        {
          parse_tree__parse_inst_mode_name__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_119_119, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_120_120));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_119_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_inst_mode_name__Spec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_15, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_119_119));
        }
        {
          parse_tree__parse_inst_mode_name__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_125_125, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_15));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_inst_mode_name__MaybeBoundInst_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_125_125));
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
            MR_Word parse_tree__parse_inst_mode_name__V_21_21;

            {
              parse_tree__parse_inst_mode_name__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_21_21, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__HeadBoundInst_18));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_21_21, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TailBoundInsts_19));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_inst_mode_name__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_21_21));
            }
          }
        else
          {
            MR_Word parse_tree__parse_inst_mode_name__Specs_20;
            MR_Word parse_tree__parse_inst_mode_name__V_22_22;
            MR_Word parse_tree__parse_inst_mode_name__V_23_23;

            {
              parse_tree__parse_inst_mode_name__V_22_22 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, parse_tree__parse_inst_mode_name__MaybeHeadBoundInst_16);
            }
            {
              parse_tree__parse_inst_mode_name__V_23_23 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_1[4], parse_tree__parse_inst_mode_name__MaybeTailBoundInsts_17);
            }
            {
              parse_tree__parse_inst_mode_name__Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_inst_mode_name__V_22_22, parse_tree__parse_inst_mode_name__V_23_23);
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
        MR_Word parse_tree__parse_inst_mode_name__V_11_11;
        MR_Word parse_tree__parse_inst_mode_name__V_13_13;

        {
          parse_tree__parse_inst_mode_name__find_duplicate_cons_id_bound_insts_3_p_0(parse_tree__parse_inst_mode_name__Cur_6, parse_tree__parse_inst_mode_name__Next_7, &parse_tree__parse_inst_mode_name__DuplicatesTail_9);
        }
        parse_tree__parse_inst_mode_name__PrevConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 0)));
        parse_tree__parse_inst_mode_name__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__HeadVar__1_1, (MR_Integer) 1)));
        parse_tree__parse_inst_mode_name__CurConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Cur_6, (MR_Integer) 0)));
        parse_tree__parse_inst_mode_name__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Cur_6, (MR_Integer) 1)));
        {
          parse_tree__parse_inst_mode_name__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(parse_tree__parse_inst_mode_name__PrevConsId_10, parse_tree__parse_inst_mode_name__CurConsId_12);
        }
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            MR_Word parse_tree__parse_inst_mode_name__V_14_14;

            {
              parse_tree__parse_inst_mode_name__V_14_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_14_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
              MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_14_14, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__CurConsId_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_inst_mode_name__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_14_14));
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
        MR_Word parse_tree__parse_inst_mode_name__V_22_22;
        MR_Word parse_tree__parse_inst_mode_name__V_23_23;

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
                parse_tree__parse_inst_mode_name__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Duplicates_21, (MR_Integer) 0)));
                parse_tree__parse_inst_mode_name__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Duplicates_21, (MR_Integer) 1)));
              }
          }
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            MR_Word parse_tree__parse_inst_mode_name__Pieces_24;
            MR_Word parse_tree__parse_inst_mode_name__Spec_25;
            MR_Word parse_tree__parse_inst_mode_name__V_27_27;
            MR_Word parse_tree__parse_inst_mode_name__V_28_28;
            MR_Word parse_tree__parse_inst_mode_name__V_29_29;
            MR_Word parse_tree__parse_inst_mode_name__V_31_31;
            MR_Word parse_tree__parse_inst_mode_name__V_34_34;
            MR_Word parse_tree__parse_inst_mode_name__V_43_43;
            MR_Word parse_tree__parse_inst_mode_name__V_44_44;
            MR_Word parse_tree__parse_inst_mode_name__V_45_45;
            MR_Word parse_tree__parse_inst_mode_name__V_46_46;
            MR_Word parse_tree__parse_inst_mode_name__V_47_47;
            MR_Word parse_tree__parse_inst_mode_name__V_50_50;

            {
              parse_tree__parse_inst_mode_name__V_27_27 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_56_56, parse_tree__parse_inst_mode_name__ContextPieces_9);
            }
            {
              parse_tree__parse_inst_mode_name__V_34_34 = parse_tree__error_util__component_list_to_pieces_1_f_0(parse_tree__parse_inst_mode_name__Duplicates_21);
            }
            {
              parse_tree__parse_inst_mode_name__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_31_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[72])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_31_31, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_34_34));
            }
            {
              parse_tree__parse_inst_mode_name__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_29_29, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_31_31));
            }
            {
              parse_tree__parse_inst_mode_name__V_28_28 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_56_56, parse_tree__parse_inst_mode_name__V_29_29, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[51]));
            }
            {
              parse_tree__parse_inst_mode_name__Pieces_24 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_56_56, parse_tree__parse_inst_mode_name__V_27_27, parse_tree__parse_inst_mode_name__V_28_28);
            }
            {
              parse_tree__parse_inst_mode_name__V_45_45 = mercury__term__get_term_context_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_53_53, parse_tree__parse_inst_mode_name__DisjunctionTerm_10);
            }
            {
              parse_tree__parse_inst_mode_name__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_47_47, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_24));
            }
            {
              parse_tree__parse_inst_mode_name__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_46_46, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_47_47));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_inst_mode_name__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_44_44, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_45_45));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_44_44, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_46_46));
            }
            {
              parse_tree__parse_inst_mode_name__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_43_43, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_44_44));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_inst_mode_name__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_25, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_43_43));
            }
            {
              parse_tree__parse_inst_mode_name__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_50_50, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_25));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_inst_mode_name__MaybeInst_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_50_50));
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
    MR_Word parse_tree__parse_inst_mode_name__V_37_37;
    MR_Word parse_tree__parse_inst_mode_name__V_15_15;

    if (parse_tree__parse_inst_mode_name__succeeded)
      {
        parse_tree__parse_inst_mode_name__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BeforeIsTerm_10, (MR_Integer) 0)));
        parse_tree__parse_inst_mode_name__BeforeIsArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BeforeIsTerm_10, (MR_Integer) 1)));
        parse_tree__parse_inst_mode_name__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BeforeIsTerm_10, (MR_Integer) 2)));
        parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__V_37_37)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            parse_tree__parse_inst_mode_name__BeforeIsFunctor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_37_37, (MR_Integer) 0)));
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
                  MR_Word parse_tree__parse_inst_mode_name__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_inst_mode_name__PredInst_21);

                  {
                    parse_tree__parse_inst_mode_name__Inst_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_22, 1) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_22, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_43_43));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__parse_inst_mode_name__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_inst_mode_name__PredInst_21);

                  {
                    parse_tree__parse_inst_mode_name__Inst_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__Inst_22, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__Inst_22, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_41_41));
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
            MR_Word parse_tree__parse_inst_mode_name__V_44_44;
            MR_Word parse_tree__parse_inst_mode_name__V_45_45;

            {
              parse_tree__parse_inst_mode_name__V_44_44 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_1[0], parse_tree__parse_inst_mode_name__MaybeArgModes_17);
            }
            {
              parse_tree__parse_inst_mode_name__V_45_45 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0, parse_tree__parse_inst_mode_name__MaybeDetism_18);
            }
            {
              parse_tree__parse_inst_mode_name__Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_inst_mode_name__V_44_44, parse_tree__parse_inst_mode_name__V_45_45);
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
        MR_Word parse_tree__parse_inst_mode_name__V_46_46;
        MR_Word parse_tree__parse_inst_mode_name__V_47_47;
        MR_Word parse_tree__parse_inst_mode_name__V_48_48;
        MR_Word parse_tree__parse_inst_mode_name__V_49_49;
        MR_String parse_tree__parse_inst_mode_name__BeforeIsFunctor_110;
        MR_Word parse_tree__parse_inst_mode_name__BeforeIsArgTerms_111;
        MR_Word parse_tree__parse_inst_mode_name__V_24_24;
        MR_Word parse_tree__parse_inst_mode_name__V_29_29;

        parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__BeforeIsTerm_10)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            parse_tree__parse_inst_mode_name__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BeforeIsTerm_10, (MR_Integer) 0)));
            parse_tree__parse_inst_mode_name__BeforeIsArgTerms_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BeforeIsTerm_10, (MR_Integer) 1)));
            parse_tree__parse_inst_mode_name__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BeforeIsTerm_10, (MR_Integer) 2)));
            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__V_46_46)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_inst_mode_name__succeeded)
              {
                parse_tree__parse_inst_mode_name__BeforeIsFunctor_110 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_46_46, (MR_Integer) 0)));
                parse_tree__parse_inst_mode_name__succeeded = (strcmp(parse_tree__parse_inst_mode_name__BeforeIsFunctor_110, (MR_String) "=") == 0);
                if (parse_tree__parse_inst_mode_name__succeeded)
                  {
                    parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__BeforeIsArgTerms_111)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_inst_mode_name__succeeded)
                      {
                        parse_tree__parse_inst_mode_name__FuncTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__BeforeIsArgTerms_111, (MR_Integer) 0)));
                        parse_tree__parse_inst_mode_name__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__BeforeIsArgTerms_111, (MR_Integer) 1)));
                        parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__V_47_47)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_inst_mode_name__succeeded)
                          {
                            parse_tree__parse_inst_mode_name__RetModeTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_47_47, (MR_Integer) 0)));
                            parse_tree__parse_inst_mode_name__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_47_47, (MR_Integer) 1)));
                            parse_tree__parse_inst_mode_name__succeeded = (parse_tree__parse_inst_mode_name__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (parse_tree__parse_inst_mode_name__succeeded)
                              {
                                parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__FuncTerm_25)) == (MR_mktag((MR_Integer) 0)));
                                if (parse_tree__parse_inst_mode_name__succeeded)
                                  {
                                    parse_tree__parse_inst_mode_name__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__FuncTerm_25, (MR_Integer) 0)));
                                    parse_tree__parse_inst_mode_name__ArgModesTerms_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__FuncTerm_25, (MR_Integer) 1)));
                                    parse_tree__parse_inst_mode_name__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__FuncTerm_25, (MR_Integer) 2)));
                                    parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__V_49_49)) == (MR_mktag((MR_Integer) 0)));
                                    if (parse_tree__parse_inst_mode_name__succeeded)
                                      {
                                        parse_tree__parse_inst_mode_name__FuncTermFunctor_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_49_49, (MR_Integer) 0)));
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
                MR_Word parse_tree__parse_inst_mode_name__V_50_50;
                MR_Word parse_tree__parse_inst_mode_name__ArgModes_112;
                MR_Word parse_tree__parse_inst_mode_name__Inst_113;

                {
                  parse_tree__parse_inst_mode_name__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_50_50, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__RetMode_33));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_inst_mode_name__ArgModes_112 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_inst_mode_name__ArgModes0_32, parse_tree__parse_inst_mode_name__V_50_50);
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
                      MR_Word parse_tree__parse_inst_mode_name__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_inst_mode_name__FuncInst_34);

                      {
                        parse_tree__parse_inst_mode_name__Inst_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_113, 1) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_113, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_57_57));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word parse_tree__parse_inst_mode_name__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_inst_mode_name__FuncInst_34);

                      {
                        parse_tree__parse_inst_mode_name__Inst_113 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__Inst_113, 0) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__Inst_113, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_55_55));
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
                MR_Word parse_tree__parse_inst_mode_name__V_58_58;
                MR_Word parse_tree__parse_inst_mode_name__V_59_59;
                MR_Word parse_tree__parse_inst_mode_name__V_60_60;
                MR_Word parse_tree__parse_inst_mode_name__V_61_61;
                MR_Word parse_tree__parse_inst_mode_name__Specs_114;

                {
                  parse_tree__parse_inst_mode_name__V_58_58 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_1[0], parse_tree__parse_inst_mode_name__MaybeArgModes0_30);
                }
                {
                  parse_tree__parse_inst_mode_name__V_60_60 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_inst_mode_name__MaybeRetMode_31);
                }
                {
                  parse_tree__parse_inst_mode_name__V_61_61 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0, parse_tree__parse_inst_mode_name__MaybeDetism_119);
                }
                {
                  parse_tree__parse_inst_mode_name__V_59_59 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_136_136, parse_tree__parse_inst_mode_name__V_60_60, parse_tree__parse_inst_mode_name__V_61_61);
                }
                {
                  parse_tree__parse_inst_mode_name__Specs_114 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_136_136, parse_tree__parse_inst_mode_name__V_58_58, parse_tree__parse_inst_mode_name__V_59_59);
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
            MR_Word parse_tree__parse_inst_mode_name__V_62_62;
            MR_Word parse_tree__parse_inst_mode_name__V_101_101;
            MR_Word parse_tree__parse_inst_mode_name__V_102_102;
            MR_Word parse_tree__parse_inst_mode_name__V_103_103;
            MR_Word parse_tree__parse_inst_mode_name__V_104_104;
            MR_Word parse_tree__parse_inst_mode_name__V_105_105;
            MR_Word parse_tree__parse_inst_mode_name__V_108_108;

            {
              parse_tree__parse_inst_mode_name__V_62_62 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_140_140, parse_tree__parse_inst_mode_name__ContextPieces_9);
            }
            {
              parse_tree__parse_inst_mode_name__Pieces_35 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_140_140, parse_tree__parse_inst_mode_name__V_62_62, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[49]));
            }
            {
              parse_tree__parse_inst_mode_name__V_103_103 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__BeforeIsTerm_10);
            }
            {
              parse_tree__parse_inst_mode_name__V_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_105_105, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_35));
            }
            {
              parse_tree__parse_inst_mode_name__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_104_104, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_105_105));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_inst_mode_name__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_102_102, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_103_103));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_102_102, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_104_104));
            }
            {
              parse_tree__parse_inst_mode_name__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_101_101, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_102_102));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_inst_mode_name__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_36, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_101_101));
            }
            {
              parse_tree__parse_inst_mode_name__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_108_108, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_36));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_inst_mode_name__MaybeInst_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_108_108));
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
    MR_Word parse_tree__parse_inst_mode_name__V_17_17;
    MR_Word parse_tree__parse_inst_mode_name__V_18_18;
    MR_Word parse_tree__parse_inst_mode_name__V_20_20;
    MR_Word parse_tree__parse_inst_mode_name__V_23_23;
    MR_Word parse_tree__parse_inst_mode_name__V_26_26;
    MR_Word parse_tree__parse_inst_mode_name__V_27_27;
    MR_Word parse_tree__parse_inst_mode_name__V_28_28;
    MR_Word parse_tree__parse_inst_mode_name__V_31_31;
    MR_Word parse_tree__parse_inst_mode_name__V_32_32;
    MR_Word parse_tree__parse_inst_mode_name__V_41_41;
    MR_Word parse_tree__parse_inst_mode_name__V_42_42;
    MR_Word parse_tree__parse_inst_mode_name__V_43_43;
    MR_Word parse_tree__parse_inst_mode_name__V_44_44;
    MR_Word parse_tree__parse_inst_mode_name__V_45_45;
    MR_Word parse_tree__parse_inst_mode_name__V_48_48;

    {
      parse_tree__parse_inst_mode_name__TermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_50_50, parse_tree__parse_inst_mode_name__VarSet_8, parse_tree__parse_inst_mode_name__Term_9);
    }
    parse_tree__parse_inst_mode_name__Place_12 = ((&parse_tree__parse_inst_mode_name_vector_common_4[0 + parse_tree__parse_inst_mode_name__Why_7]))->parse_tree__parse_inst_mode_name__vector_common_type_4_0__vct_4_f_0;
    parse_tree__parse_inst_mode_name__TypeCtorInfo_51_51 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      parse_tree__parse_inst_mode_name__V_17_17 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_51_51, parse_tree__parse_inst_mode_name__ContextPieces_6);
    }
    {
      parse_tree__parse_inst_mode_name__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_27_27, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_11));
    }
    {
      parse_tree__parse_inst_mode_name__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_32_32, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Place_12));
    }
    {
      parse_tree__parse_inst_mode_name__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_31_31, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_32_32));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[15])));
    }
    {
      parse_tree__parse_inst_mode_name__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[71])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_28_28, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_31_31));
    }
    {
      parse_tree__parse_inst_mode_name__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_26_26, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_27_27));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_26_26, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_28_28));
    }
    {
      parse_tree__parse_inst_mode_name__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_23_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[60])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_23_23, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_26_26));
    }
    {
      parse_tree__parse_inst_mode_name__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[70])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_20_20, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_23_23));
    }
    {
      parse_tree__parse_inst_mode_name__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_18_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_18_18, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_20_20));
    }
    {
      parse_tree__parse_inst_mode_name__Pieces_13 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_51_51, parse_tree__parse_inst_mode_name__V_17_17, parse_tree__parse_inst_mode_name__V_18_18);
    }
    {
      parse_tree__parse_inst_mode_name__V_43_43 = mercury__term__get_term_context_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_50_50, parse_tree__parse_inst_mode_name__Term_9);
    }
    {
      parse_tree__parse_inst_mode_name__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_45_45, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_13));
    }
    {
      parse_tree__parse_inst_mode_name__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_44_44, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_45_45));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_inst_mode_name__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_42_42, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_43_43));
      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_42_42, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_44_44));
    }
    {
      parse_tree__parse_inst_mode_name__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_41_41, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_42_42));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_inst_mode_name__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_14, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_41_41));
    }
    {
      parse_tree__parse_inst_mode_name__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_48_48, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_14));
      MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_inst_mode_name__MaybeInst_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__MaybeInst_10, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_48_48));
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
                      MR_Word parse_tree__parse_inst_mode_name__V_47_47;
                      MR_Word parse_tree__parse_inst_mode_name__V_48_48;
                      MR_Word parse_tree__parse_inst_mode_name__V_50_50;
                      MR_Word parse_tree__parse_inst_mode_name__V_53_53;
                      MR_Word parse_tree__parse_inst_mode_name__V_56_56;
                      MR_Word parse_tree__parse_inst_mode_name__V_59_59;
                      MR_Word parse_tree__parse_inst_mode_name__V_60_60;
                      MR_Word parse_tree__parse_inst_mode_name__V_69_69;
                      MR_Word parse_tree__parse_inst_mode_name__V_70_70;
                      MR_Word parse_tree__parse_inst_mode_name__V_71_71;
                      MR_Word parse_tree__parse_inst_mode_name__V_72_72;
                      MR_Word parse_tree__parse_inst_mode_name__V_73_73;
                      MR_Word parse_tree__parse_inst_mode_name__V_76_76;
                      MR_Word parse_tree__parse_inst_mode_name__Pieces_127;
                      MR_Word parse_tree__parse_inst_mode_name__Spec_128;

                      {
                        parse_tree__parse_inst_mode_name__VarTermStr_36 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_166_166, parse_tree__parse_inst_mode_name__VarSet_9, parse_tree__parse_inst_mode_name__VarTerm_24);
                      }
                      parse_tree__parse_inst_mode_name__TypeCtorInfo_167_167 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                      {
                        parse_tree__parse_inst_mode_name__V_47_47 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_167_167, parse_tree__parse_inst_mode_name__ContextPieces_10);
                      }
                      {
                        parse_tree__parse_inst_mode_name__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_60_60, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__VarTermStr_36));
                      }
                      {
                        parse_tree__parse_inst_mode_name__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_59_59, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_60_60));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[15])));
                      }
                      {
                        parse_tree__parse_inst_mode_name__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[69])));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_56_56, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_59_59));
                      }
                      {
                        parse_tree__parse_inst_mode_name__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[68])));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_53_53, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_56_56));
                      }
                      {
                        parse_tree__parse_inst_mode_name__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_50_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[67])));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_50_50, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_53_53));
                      }
                      {
                        parse_tree__parse_inst_mode_name__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_48_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_48_48, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_50_50));
                      }
                      {
                        parse_tree__parse_inst_mode_name__Pieces_127 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_167_167, parse_tree__parse_inst_mode_name__V_47_47, parse_tree__parse_inst_mode_name__V_48_48);
                      }
                      {
                        parse_tree__parse_inst_mode_name__V_71_71 = mercury__term__get_term_context_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_166_166, parse_tree__parse_inst_mode_name__VarTerm_24);
                      }
                      {
                        parse_tree__parse_inst_mode_name__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_73_73, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_127));
                      }
                      {
                        parse_tree__parse_inst_mode_name__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_72_72, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_73_73));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        parse_tree__parse_inst_mode_name__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_70_70, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_71_71));
                        MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_70_70, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_72_72));
                      }
                      {
                        parse_tree__parse_inst_mode_name__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_69_69, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_70_70));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        parse_tree__parse_inst_mode_name__Spec_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_128, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                        MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_128, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_69_69));
                      }
                      {
                        parse_tree__parse_inst_mode_name__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_76_76, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_128));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *parse_tree__parse_inst_mode_name__MaybeInst_14 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_76_76));
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__parse_inst_mode_name__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__VarTerm_24, (MR_Integer) 0)));
                      MR_Word parse_tree__parse_inst_mode_name__MaybeSubInst_28;
                      MR_Word parse_tree__parse_inst_mode_name__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__VarTerm_24, (MR_Integer) 1)));

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
                              MR_Word parse_tree__parse_inst_mode_name__V_81_81;
                              MR_Word parse_tree__parse_inst_mode_name__V_82_82;
                              MR_Word parse_tree__parse_inst_mode_name__Inst_122;

                              {
                                parse_tree__parse_inst_mode_name__V_82_82 = mercury__term__coerce_var_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__parse_inst_mode_name__Var_26);
                              }
                              {
                                parse_tree__parse_inst_mode_name__V_81_81 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_1[3], ((MR_Box) (parse_tree__parse_inst_mode_name__V_82_82)));
                              }
                              {
                                parse_tree__parse_inst_mode_name__Inst_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                                MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_122, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_81_81));
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
                              MR_Word parse_tree__parse_inst_mode_name__V_80_80;

                              {
                                parse_tree__parse_inst_mode_name__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_80_80, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Name_11));
                              }
                              {
                                parse_tree__parse_inst_mode_name__BadTerm_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BadTerm_31, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_80_80));
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
            MR_Word parse_tree__parse_inst_mode_name__V_86_86;
            MR_Word parse_tree__parse_inst_mode_name__V_87_87;
            MR_Word parse_tree__parse_inst_mode_name__V_89_89;
            MR_Word parse_tree__parse_inst_mode_name__V_92_92;
            MR_Word parse_tree__parse_inst_mode_name__V_93_93;
            MR_Word parse_tree__parse_inst_mode_name__V_94_94;
            MR_Word parse_tree__parse_inst_mode_name__V_97_97;
            MR_Word parse_tree__parse_inst_mode_name__V_98_98;
            MR_Word parse_tree__parse_inst_mode_name__V_107_107;
            MR_Word parse_tree__parse_inst_mode_name__V_108_108;
            MR_Word parse_tree__parse_inst_mode_name__V_109_109;
            MR_Word parse_tree__parse_inst_mode_name__V_110_110;
            MR_Word parse_tree__parse_inst_mode_name__V_113_113;

            {
              parse_tree__parse_inst_mode_name__V_86_86 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_162_162, parse_tree__parse_inst_mode_name__ContextPieces_10);
            }
            {
              parse_tree__parse_inst_mode_name__V_93_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_93_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_93_93, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__Name_11));
            }
            {
              parse_tree__parse_inst_mode_name__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_98_98, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__ExpectedArityStr_16));
            }
            {
              parse_tree__parse_inst_mode_name__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_97_97, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_98_98));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[15])));
            }
            {
              parse_tree__parse_inst_mode_name__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_94_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[66])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_94_94, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_97_97));
            }
            {
              parse_tree__parse_inst_mode_name__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_92_92, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_93_93));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_92_92, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_94_94));
            }
            {
              parse_tree__parse_inst_mode_name__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_89_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[65])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_89_89, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_92_92));
            }
            {
              parse_tree__parse_inst_mode_name__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_87_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_87_87, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_89_89));
            }
            {
              parse_tree__parse_inst_mode_name__Pieces_17 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_162_162, parse_tree__parse_inst_mode_name__V_86_86, parse_tree__parse_inst_mode_name__V_87_87);
            }
            {
              parse_tree__parse_inst_mode_name__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_110_110, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_17));
            }
            {
              parse_tree__parse_inst_mode_name__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_109_109, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_110_110));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_inst_mode_name__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_108_108, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_13));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_108_108, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_109_109));
            }
            {
              parse_tree__parse_inst_mode_name__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_107_107, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_108_108));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_inst_mode_name__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_18, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_107_107));
            }
            {
              parse_tree__parse_inst_mode_name__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_113_113, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_18));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_inst_mode_name__MaybeInst_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_113_113));
            }
          }
          break;
      }
    else
      {
        MR_Word parse_tree__parse_inst_mode_name__UserDefnInstTerm_37;
        MR_Word parse_tree__parse_inst_mode_name__MaybeFunctor_38;
        MR_Word parse_tree__parse_inst_mode_name__V_115_115;

        {
          parse_tree__parse_inst_mode_name__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_115_115, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Name_11));
        }
        {
          parse_tree__parse_inst_mode_name__UserDefnInstTerm_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__UserDefnInstTerm_37, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_115_115));
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
            MR_Word parse_tree__parse_inst_mode_name__V_170_170;
            MR_Word parse_tree__parse_inst_mode_name__V_118_118;
            MR_Word parse_tree__parse_inst_mode_name__V_43_43;
            MR_Word parse_tree__parse_inst_mode_name__V_44_44;

            {
              parse_tree__parse_inst_mode_name__BuiltinModule_41 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            }
            {
              mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(parse_tree__parse_inst_mode_name__QualifiedName_39, (MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_2[3], &parse_tree__parse_inst_mode_name__V_170_170);
            }
            {
              parse_tree__parse_inst_mode_name__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__parse_inst_mode_name__BuiltinModule_41, parse_tree__parse_inst_mode_name__V_170_170);
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
                            parse_tree__parse_inst_mode_name__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_149, (MR_Integer) 1)));
                            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__V_118_118)) == (MR_mktag((MR_Integer) 0)));
                            if (parse_tree__parse_inst_mode_name__succeeded)
                              {
                                parse_tree__parse_inst_mode_name__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_118_118, (MR_Integer) 0)));
                                parse_tree__parse_inst_mode_name__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_118_118, (MR_Integer) 1)));
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
                    MR_Word parse_tree__parse_inst_mode_name__V_119_119;
                    MR_Word parse_tree__parse_inst_mode_name__Inst_142;

                    {
                      parse_tree__parse_inst_mode_name__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_119_119, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__QualifiedName_39));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_119_119, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__ArgInsts_46));
                    }
                    {
                      parse_tree__parse_inst_mode_name__Inst_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_142, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_119_119));
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
    MR_Word parse_tree__parse_inst_mode_name__V_38_38;
    MR_Word parse_tree__parse_inst_mode_name__V_15_15;

    if (parse_tree__parse_inst_mode_name__succeeded)
      {
        parse_tree__parse_inst_mode_name__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BeforeIsTerm_10, (MR_Integer) 0)));
        parse_tree__parse_inst_mode_name__BeforeIsArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BeforeIsTerm_10, (MR_Integer) 1)));
        parse_tree__parse_inst_mode_name__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BeforeIsTerm_10, (MR_Integer) 2)));
        parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__V_38_38)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            parse_tree__parse_inst_mode_name__BeforeIsFunctor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_38_38, (MR_Integer) 0)));
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
                  MR_Word parse_tree__parse_inst_mode_name__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_inst_mode_name__PredInstInfo_21);

                  {
                    parse_tree__parse_inst_mode_name__Inst_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_22, 1) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_22, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_44_44));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__parse_inst_mode_name__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_inst_mode_name__PredInstInfo_21);

                  {
                    parse_tree__parse_inst_mode_name__Inst_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__Inst_22, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__Inst_22, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_42_42));
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
            MR_Word parse_tree__parse_inst_mode_name__V_46_46;
            MR_Word parse_tree__parse_inst_mode_name__V_47_47;

            {
              parse_tree__parse_inst_mode_name__V_46_46 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_1[0], parse_tree__parse_inst_mode_name__MaybeArgModes_17);
            }
            {
              parse_tree__parse_inst_mode_name__V_47_47 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0, parse_tree__parse_inst_mode_name__MaybeDetism_18);
            }
            {
              parse_tree__parse_inst_mode_name__Specs_24 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_inst_mode_name__V_46_46, parse_tree__parse_inst_mode_name__V_47_47);
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
        MR_Word parse_tree__parse_inst_mode_name__V_48_48;
        MR_Word parse_tree__parse_inst_mode_name__V_49_49;
        MR_Word parse_tree__parse_inst_mode_name__V_50_50;
        MR_Word parse_tree__parse_inst_mode_name__V_51_51;
        MR_String parse_tree__parse_inst_mode_name__BeforeIsFunctor_113;
        MR_Word parse_tree__parse_inst_mode_name__BeforeIsArgTerms_114;
        MR_Word parse_tree__parse_inst_mode_name__V_25_25;
        MR_Word parse_tree__parse_inst_mode_name__V_30_30;

        parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__BeforeIsTerm_10)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            parse_tree__parse_inst_mode_name__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BeforeIsTerm_10, (MR_Integer) 0)));
            parse_tree__parse_inst_mode_name__BeforeIsArgTerms_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BeforeIsTerm_10, (MR_Integer) 1)));
            parse_tree__parse_inst_mode_name__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__BeforeIsTerm_10, (MR_Integer) 2)));
            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__V_48_48)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_inst_mode_name__succeeded)
              {
                parse_tree__parse_inst_mode_name__BeforeIsFunctor_113 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_48_48, (MR_Integer) 0)));
                parse_tree__parse_inst_mode_name__succeeded = (strcmp(parse_tree__parse_inst_mode_name__BeforeIsFunctor_113, (MR_String) "=") == 0);
                if (parse_tree__parse_inst_mode_name__succeeded)
                  {
                    parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__BeforeIsArgTerms_114)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_inst_mode_name__succeeded)
                      {
                        parse_tree__parse_inst_mode_name__FuncTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__BeforeIsArgTerms_114, (MR_Integer) 0)));
                        parse_tree__parse_inst_mode_name__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__BeforeIsArgTerms_114, (MR_Integer) 1)));
                        parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__V_49_49)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_inst_mode_name__succeeded)
                          {
                            parse_tree__parse_inst_mode_name__RetModeTerm_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_49_49, (MR_Integer) 0)));
                            parse_tree__parse_inst_mode_name__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_49_49, (MR_Integer) 1)));
                            parse_tree__parse_inst_mode_name__succeeded = (parse_tree__parse_inst_mode_name__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (parse_tree__parse_inst_mode_name__succeeded)
                              {
                                parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__FuncTerm_26)) == (MR_mktag((MR_Integer) 0)));
                                if (parse_tree__parse_inst_mode_name__succeeded)
                                  {
                                    parse_tree__parse_inst_mode_name__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__FuncTerm_26, (MR_Integer) 0)));
                                    parse_tree__parse_inst_mode_name__ArgModesTerms_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__FuncTerm_26, (MR_Integer) 1)));
                                    parse_tree__parse_inst_mode_name__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__FuncTerm_26, (MR_Integer) 2)));
                                    parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__V_51_51)) == (MR_mktag((MR_Integer) 0)));
                                    if (parse_tree__parse_inst_mode_name__succeeded)
                                      {
                                        parse_tree__parse_inst_mode_name__FuncTermFunctor_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_51_51, (MR_Integer) 0)));
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
                MR_Word parse_tree__parse_inst_mode_name__V_52_52;
                MR_Word parse_tree__parse_inst_mode_name__ArgModes_115;
                MR_Word parse_tree__parse_inst_mode_name__Inst_116;
                MR_Word parse_tree__parse_inst_mode_name__Mode_117;

                {
                  parse_tree__parse_inst_mode_name__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_52_52, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__RetMode_34));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_inst_mode_name__ArgModes_115 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_inst_mode_name__ArgModes0_33, parse_tree__parse_inst_mode_name__V_52_52);
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
                      MR_Word parse_tree__parse_inst_mode_name__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_inst_mode_name__FuncInstInfo_35);

                      {
                        parse_tree__parse_inst_mode_name__Inst_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_116, 1) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__Inst_116, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_59_59));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word parse_tree__parse_inst_mode_name__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_inst_mode_name__FuncInstInfo_35);

                      {
                        parse_tree__parse_inst_mode_name__Inst_116 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__Inst_116, 0) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(2), parse_tree__parse_inst_mode_name__Inst_116, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_57_57));
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
                MR_Word parse_tree__parse_inst_mode_name__V_61_61;
                MR_Word parse_tree__parse_inst_mode_name__V_62_62;
                MR_Word parse_tree__parse_inst_mode_name__V_63_63;
                MR_Word parse_tree__parse_inst_mode_name__V_64_64;
                MR_Word parse_tree__parse_inst_mode_name__Specs_118;

                {
                  parse_tree__parse_inst_mode_name__V_61_61 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_1[0], parse_tree__parse_inst_mode_name__MaybeArgModes0_31);
                }
                {
                  parse_tree__parse_inst_mode_name__V_63_63 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_inst_mode_name__MaybeRetMode_32);
                }
                {
                  parse_tree__parse_inst_mode_name__V_64_64 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0, parse_tree__parse_inst_mode_name__MaybeDetism_124);
                }
                {
                  parse_tree__parse_inst_mode_name__V_62_62 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_143_143, parse_tree__parse_inst_mode_name__V_63_63, parse_tree__parse_inst_mode_name__V_64_64);
                }
                {
                  parse_tree__parse_inst_mode_name__Specs_118 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_143_143, parse_tree__parse_inst_mode_name__V_61_61, parse_tree__parse_inst_mode_name__V_62_62);
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
            MR_Word parse_tree__parse_inst_mode_name__V_65_65;
            MR_Word parse_tree__parse_inst_mode_name__V_104_104;
            MR_Word parse_tree__parse_inst_mode_name__V_105_105;
            MR_Word parse_tree__parse_inst_mode_name__V_106_106;
            MR_Word parse_tree__parse_inst_mode_name__V_107_107;
            MR_Word parse_tree__parse_inst_mode_name__V_108_108;
            MR_Word parse_tree__parse_inst_mode_name__V_111_111;

            {
              parse_tree__parse_inst_mode_name__V_65_65 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_147_147, parse_tree__parse_inst_mode_name__ContextPieces_9);
            }
            {
              parse_tree__parse_inst_mode_name__Pieces_36 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_147_147, parse_tree__parse_inst_mode_name__V_65_65, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[33]));
            }
            {
              parse_tree__parse_inst_mode_name__V_106_106 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__BeforeIsTerm_10);
            }
            {
              parse_tree__parse_inst_mode_name__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_108_108, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_36));
            }
            {
              parse_tree__parse_inst_mode_name__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_107_107, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_108_108));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_inst_mode_name__V_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_105_105, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_106_106));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_105_105, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_107_107));
            }
            {
              parse_tree__parse_inst_mode_name__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_104_104, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_105_105));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_inst_mode_name__Spec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_37, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_104_104));
            }
            {
              parse_tree__parse_inst_mode_name__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_111_111, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_37));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_inst_mode_name__MaybeMode_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_111_111));
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
    MR_Word parse_tree__parse_inst_mode_name__V_13_13;
    MR_Word parse_tree__parse_inst_mode_name__V_14_14;
    MR_Word parse_tree__parse_inst_mode_name__V_8_8;

    if (parse_tree__parse_inst_mode_name__succeeded)
      {
        parse_tree__parse_inst_mode_name__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Term_5, (MR_Integer) 0)));
        parse_tree__parse_inst_mode_name__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Term_5, (MR_Integer) 1)));
        parse_tree__parse_inst_mode_name__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Term_5, (MR_Integer) 2)));
        parse_tree__parse_inst_mode_name__succeeded = (parse_tree__parse_inst_mode_name__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_inst_mode_name__succeeded)
          {
            parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__V_13_13)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_inst_mode_name__succeeded)
              {
                parse_tree__parse_inst_mode_name__DetString_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_13_13, (MR_Integer) 0)));
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
        MR_Word parse_tree__parse_inst_mode_name__V_17_17;
        MR_Word parse_tree__parse_inst_mode_name__V_18_18;
        MR_Word parse_tree__parse_inst_mode_name__V_27_27;
        MR_Word parse_tree__parse_inst_mode_name__V_28_28;
        MR_Word parse_tree__parse_inst_mode_name__V_29_29;
        MR_Word parse_tree__parse_inst_mode_name__V_30_30;
        MR_Word parse_tree__parse_inst_mode_name__V_31_31;
        MR_Word parse_tree__parse_inst_mode_name__V_34_34;

        {
          parse_tree__parse_inst_mode_name__TermStr_10 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_36_36, parse_tree__parse_inst_mode_name__VarSet_4, parse_tree__parse_inst_mode_name__Term_5);
        }
        {
          parse_tree__parse_inst_mode_name__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_18_18, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_10));
        }
        {
          parse_tree__parse_inst_mode_name__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_17_17, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_18_18));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[13])));
        }
        {
          parse_tree__parse_inst_mode_name__DetismPieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__DetismPieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[58])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__DetismPieces_11, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_17_17));
        }
        {
          parse_tree__parse_inst_mode_name__V_29_29 = mercury__term__get_term_context_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_36_36, parse_tree__parse_inst_mode_name__Term_5);
        }
        {
          parse_tree__parse_inst_mode_name__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_31_31, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__DetismPieces_11));
        }
        {
          parse_tree__parse_inst_mode_name__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_30_30, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_31_31));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_inst_mode_name__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_28_28, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_29_29));
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_28_28, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_30_30));
        }
        {
          parse_tree__parse_inst_mode_name__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_27_27, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_28_28));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_inst_mode_name__DetismSpec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__DetismSpec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__DetismSpec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__DetismSpec_12, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_27_27));
        }
        {
          parse_tree__parse_inst_mode_name__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_34_34, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__DetismSpec_12));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_inst_mode_name__MaybeDetism_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_34_34));
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
    MR_Word parse_tree__parse_inst_mode_name__V_3_3;

    {
      parse_tree__parse_inst_mode_name__succeeded = parse_tree__parse_inst_mode_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__parse_inst_mode_name__Name_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_inst_mode_name__V_3_3);
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
              MR_String parse_tree__parse_inst_mode_name__Name_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Functor_14, (MR_Integer) 0)));

              {
                parse_tree__parse_inst_mode_name__parse_inst_atom_functor_7_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_6, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__ContextPieces_8, parse_tree__parse_inst_mode_name__Name_26, parse_tree__parse_inst_mode_name__ArgTerms_15, parse_tree__parse_inst_mode_name__Context_16, parse_tree__parse_inst_mode_name__MaybeInst_10);
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_55_55;
              MR_String parse_tree__parse_inst_mode_name__TermStr_23;
              MR_Word parse_tree__parse_inst_mode_name__Pieces_24;
              MR_Word parse_tree__parse_inst_mode_name__Spec_25;
              MR_Word parse_tree__parse_inst_mode_name__V_27_27;
              MR_Word parse_tree__parse_inst_mode_name__V_28_28;
              MR_Word parse_tree__parse_inst_mode_name__V_30_30;
              MR_Word parse_tree__parse_inst_mode_name__V_33_33;
              MR_Word parse_tree__parse_inst_mode_name__V_34_34;
              MR_Word parse_tree__parse_inst_mode_name__V_43_43;
              MR_Word parse_tree__parse_inst_mode_name__V_44_44;
              MR_Word parse_tree__parse_inst_mode_name__V_45_45;
              MR_Word parse_tree__parse_inst_mode_name__V_46_46;
              MR_Word parse_tree__parse_inst_mode_name__V_49_49;

              {
                parse_tree__parse_inst_mode_name__TermStr_23 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__Term_9);
              }
              parse_tree__parse_inst_mode_name__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              {
                parse_tree__parse_inst_mode_name__V_27_27 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_55_55, parse_tree__parse_inst_mode_name__ContextPieces_8);
              }
              {
                parse_tree__parse_inst_mode_name__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_34_34, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_23));
              }
              {
                parse_tree__parse_inst_mode_name__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_33_33, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_34_34));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[11])));
              }
              {
                parse_tree__parse_inst_mode_name__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[58])));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_30_30, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_33_33));
              }
              {
                parse_tree__parse_inst_mode_name__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_28_28, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_30_30));
              }
              {
                parse_tree__parse_inst_mode_name__Pieces_24 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_55_55, parse_tree__parse_inst_mode_name__V_27_27, parse_tree__parse_inst_mode_name__V_28_28);
              }
              {
                parse_tree__parse_inst_mode_name__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_46_46, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_24));
              }
              {
                parse_tree__parse_inst_mode_name__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_45_45, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_46_46));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_inst_mode_name__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_44_44, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_16));
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_44_44, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_45_45));
              }
              {
                parse_tree__parse_inst_mode_name__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_43_43, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_44_44));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_inst_mode_name__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_25, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_43_43));
              }
              {
                parse_tree__parse_inst_mode_name__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_49_49, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_25));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_inst_mode_name__MaybeInst_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_49_49));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_55_55;
              MR_String parse_tree__parse_inst_mode_name__TermStr_23;
              MR_Word parse_tree__parse_inst_mode_name__Pieces_24;
              MR_Word parse_tree__parse_inst_mode_name__Spec_25;
              MR_Word parse_tree__parse_inst_mode_name__V_27_27;
              MR_Word parse_tree__parse_inst_mode_name__V_28_28;
              MR_Word parse_tree__parse_inst_mode_name__V_30_30;
              MR_Word parse_tree__parse_inst_mode_name__V_33_33;
              MR_Word parse_tree__parse_inst_mode_name__V_34_34;
              MR_Word parse_tree__parse_inst_mode_name__V_43_43;
              MR_Word parse_tree__parse_inst_mode_name__V_44_44;
              MR_Word parse_tree__parse_inst_mode_name__V_45_45;
              MR_Word parse_tree__parse_inst_mode_name__V_46_46;
              MR_Word parse_tree__parse_inst_mode_name__V_49_49;

              {
                parse_tree__parse_inst_mode_name__TermStr_23 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__Term_9);
              }
              parse_tree__parse_inst_mode_name__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              {
                parse_tree__parse_inst_mode_name__V_27_27 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_55_55, parse_tree__parse_inst_mode_name__ContextPieces_8);
              }
              {
                parse_tree__parse_inst_mode_name__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_34_34, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_23));
              }
              {
                parse_tree__parse_inst_mode_name__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_33_33, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_34_34));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[11])));
              }
              {
                parse_tree__parse_inst_mode_name__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[58])));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_30_30, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_33_33));
              }
              {
                parse_tree__parse_inst_mode_name__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_28_28, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_30_30));
              }
              {
                parse_tree__parse_inst_mode_name__Pieces_24 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_55_55, parse_tree__parse_inst_mode_name__V_27_27, parse_tree__parse_inst_mode_name__V_28_28);
              }
              {
                parse_tree__parse_inst_mode_name__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_46_46, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_24));
              }
              {
                parse_tree__parse_inst_mode_name__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_45_45, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_46_46));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_inst_mode_name__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_44_44, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_16));
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_44_44, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_45_45));
              }
              {
                parse_tree__parse_inst_mode_name__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_43_43, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_44_44));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_inst_mode_name__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_25, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_43_43));
              }
              {
                parse_tree__parse_inst_mode_name__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_49_49, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_25));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_inst_mode_name__MaybeInst_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_49_49));
              }
            }
            break;
        }
      }
    else
      {
        MR_Word parse_tree__parse_inst_mode_name__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Term_9, (MR_Integer) 0)));
        MR_Word parse_tree__parse_inst_mode_name__InstVar_13;
        MR_Word parse_tree__parse_inst_mode_name__V_51_51;
        MR_Word parse_tree__parse_inst_mode_name__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Term_9, (MR_Integer) 1)));

        {
          mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__parse_inst_mode_name__Var_11, &parse_tree__parse_inst_mode_name__InstVar_13);
        }
        {
          parse_tree__parse_inst_mode_name__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_51_51, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__InstVar_13));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_inst_mode_name__MaybeInst_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_51_51));
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
            MR_Word parse_tree__parse_inst_mode_name__V_21_21;

            {
              parse_tree__parse_inst_mode_name__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_21_21, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__HeadInst_18));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_21_21, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TailInsts_19));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_inst_mode_name__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_21_21));
            }
          }
        else
          {
            MR_Word parse_tree__parse_inst_mode_name__Specs_20;
            MR_Word parse_tree__parse_inst_mode_name__V_22_22;
            MR_Word parse_tree__parse_inst_mode_name__V_23_23;

            {
              parse_tree__parse_inst_mode_name__V_22_22 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__parse_inst_mode_name__MaybeHeadInst_16);
            }
            {
              parse_tree__parse_inst_mode_name__V_23_23 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_1[1], parse_tree__parse_inst_mode_name__MaybeTailInsts_17);
            }
            {
              parse_tree__parse_inst_mode_name__Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_inst_mode_name__V_22_22, parse_tree__parse_inst_mode_name__V_23_23);
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
        MR_Word parse_tree__parse_inst_mode_name__Context_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Term_9, (MR_Integer) 2)));

        switch (MR_tag((MR_Word) parse_tree__parse_inst_mode_name__TermFunctor_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String parse_tree__parse_inst_mode_name__FunctorName_25 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__TermFunctor_16, (MR_Integer) 0)));
              MR_Word parse_tree__parse_inst_mode_name__InstTermA_26;
              MR_Word parse_tree__parse_inst_mode_name__InstTermB_27;
              MR_Word parse_tree__parse_inst_mode_name__V_40_40;
              MR_Word parse_tree__parse_inst_mode_name__V_41_41;

              parse_tree__parse_inst_mode_name__succeeded = (strcmp(parse_tree__parse_inst_mode_name__FunctorName_25, (MR_String) ">>") == 0);
              if (parse_tree__parse_inst_mode_name__succeeded)
                {
                  parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__ArgTerms0_17)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__parse_inst_mode_name__succeeded)
                    {
                      parse_tree__parse_inst_mode_name__InstTermA_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__ArgTerms0_17, (MR_Integer) 0)));
                      parse_tree__parse_inst_mode_name__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__ArgTerms0_17, (MR_Integer) 1)));
                      parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__V_40_40)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__parse_inst_mode_name__succeeded)
                        {
                          parse_tree__parse_inst_mode_name__InstTermB_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_40_40, (MR_Integer) 0)));
                          parse_tree__parse_inst_mode_name__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_40_40, (MR_Integer) 1)));
                          parse_tree__parse_inst_mode_name__succeeded = (parse_tree__parse_inst_mode_name__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                    }
                }
              if (parse_tree__parse_inst_mode_name__succeeded)
                {
                  MR_Word parse_tree__parse_inst_mode_name__MaybeInstA_28;
                  MR_Word parse_tree__parse_inst_mode_name__MaybeInstB_29;
                  MR_Word parse_tree__parse_inst_mode_name__InstA_30;
                  MR_Word parse_tree__parse_inst_mode_name__InstB_31;

                  {
                    parse_tree__parse_inst_mode_name__parse_inst_5_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_6, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__ContextPieces_8, parse_tree__parse_inst_mode_name__InstTermA_26, &parse_tree__parse_inst_mode_name__MaybeInstA_28);
                  }
                  {
                    parse_tree__parse_inst_mode_name__parse_inst_5_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_6, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__ContextPieces_8, parse_tree__parse_inst_mode_name__InstTermB_27, &parse_tree__parse_inst_mode_name__MaybeInstB_29);
                  }
                  parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeInstA_28)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__parse_inst_mode_name__succeeded)
                    {
                      parse_tree__parse_inst_mode_name__InstA_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeInstA_28, (MR_Integer) 0)));
                      parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeInstB_29)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__parse_inst_mode_name__succeeded)
                        parse_tree__parse_inst_mode_name__InstB_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeInstB_29, (MR_Integer) 0)));
                    }
                  if (parse_tree__parse_inst_mode_name__succeeded)
                    {
                      MR_Word parse_tree__parse_inst_mode_name__V_42_42;

                      {
                        parse_tree__parse_inst_mode_name__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_42_42, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__InstA_30));
                        MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_42_42, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__InstB_31));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__parse_inst_mode_name__MaybeMode_10 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_42_42));
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_123_123 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
                      MR_Word parse_tree__parse_inst_mode_name__Specs_32;
                      MR_Word parse_tree__parse_inst_mode_name__V_43_43;
                      MR_Word parse_tree__parse_inst_mode_name__V_44_44;

                      {
                        parse_tree__parse_inst_mode_name__V_43_43 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_123_123, parse_tree__parse_inst_mode_name__MaybeInstA_28);
                      }
                      {
                        parse_tree__parse_inst_mode_name__V_44_44 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_123_123, parse_tree__parse_inst_mode_name__MaybeInstB_29);
                      }
                      {
                        parse_tree__parse_inst_mode_name__Specs_32 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_inst_mode_name__V_43_43, parse_tree__parse_inst_mode_name__V_44_44);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *parse_tree__parse_inst_mode_name__MaybeMode_10 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Specs_32));
                      }
                    }
                }
              else
                {
                  MR_Word parse_tree__parse_inst_mode_name__BeforeIsTerm_33;
                  MR_Word parse_tree__parse_inst_mode_name__DetTerm_34;
                  MR_Word parse_tree__parse_inst_mode_name__V_45_45;
                  MR_Word parse_tree__parse_inst_mode_name__V_46_46;

                  parse_tree__parse_inst_mode_name__succeeded = (strcmp(parse_tree__parse_inst_mode_name__FunctorName_25, (MR_String) "is") == 0);
                  if (parse_tree__parse_inst_mode_name__succeeded)
                    {
                      parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__ArgTerms0_17)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__parse_inst_mode_name__succeeded)
                        {
                          parse_tree__parse_inst_mode_name__BeforeIsTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__ArgTerms0_17, (MR_Integer) 0)));
                          parse_tree__parse_inst_mode_name__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__ArgTerms0_17, (MR_Integer) 1)));
                          parse_tree__parse_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__V_45_45)) == (MR_mktag((MR_Integer) 1)));
                          if (parse_tree__parse_inst_mode_name__succeeded)
                            {
                              parse_tree__parse_inst_mode_name__DetTerm_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_45_45, (MR_Integer) 0)));
                              parse_tree__parse_inst_mode_name__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_45_45, (MR_Integer) 1)));
                              parse_tree__parse_inst_mode_name__succeeded = (parse_tree__parse_inst_mode_name__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                        }
                    }
                  if (parse_tree__parse_inst_mode_name__succeeded)
                    {
                      parse_tree__parse_inst_mode_name__parse_higher_order_mode_6_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_6, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__ContextPieces_8, parse_tree__parse_inst_mode_name__BeforeIsTerm_33, parse_tree__parse_inst_mode_name__DetTerm_34, parse_tree__parse_inst_mode_name__MaybeMode_10);
                    }
                  else
                    {
                      MR_Word parse_tree__parse_inst_mode_name__MaybeFunctor_35;

                      {
                        parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__ContextPieces_8, parse_tree__parse_inst_mode_name__Term_9, &parse_tree__parse_inst_mode_name__MaybeFunctor_35);
                      }
                      if (((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeFunctor_35)) == (MR_mktag((MR_Integer) 0))))
                        {
                          MR_Word parse_tree__parse_inst_mode_name__Specs_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__MaybeFunctor_35, (MR_Integer) 0)));

                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                            *parse_tree__parse_inst_mode_name__MaybeMode_10 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Specs_107));
                          }
                        }
                      else
                        {
                          MR_Word parse_tree__parse_inst_mode_name__SymName_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeFunctor_35, (MR_Integer) 0)));
                          MR_Word parse_tree__parse_inst_mode_name__ArgTerms_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeFunctor_35, (MR_Integer) 1)));
                          MR_Word parse_tree__parse_inst_mode_name__MaybeArgInsts_38;

                          {
                            parse_tree__parse_inst_mode_name__parse_insts_5_p_0(parse_tree__parse_inst_mode_name__AllowConstrainedInstVar_6, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__ContextPieces_8, parse_tree__parse_inst_mode_name__ArgTerms_37, &parse_tree__parse_inst_mode_name__MaybeArgInsts_38);
                          }
                          if (((MR_tag((MR_Word) parse_tree__parse_inst_mode_name__MaybeArgInsts_38)) == (MR_mktag((MR_Integer) 0))))
                            *parse_tree__parse_inst_mode_name__MaybeMode_10 = (MR_Word) parse_tree__parse_inst_mode_name__MaybeArgInsts_38;
                          else
                            {
                              MR_Word parse_tree__parse_inst_mode_name__ArgInsts_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__MaybeArgInsts_38, (MR_Integer) 0)));
                              MR_Word parse_tree__parse_inst_mode_name__V_47_47;

                              {
                                parse_tree__parse_inst_mode_name__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_47_47, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__SymName_36));
                                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_47_47, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__ArgInsts_39));
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                *parse_tree__parse_inst_mode_name__MaybeMode_10 = base;
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_47_47));
                              }
                            }
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_121_214;
              MR_Word parse_tree__parse_inst_mode_name__V_186_186;
              MR_Word parse_tree__parse_inst_mode_name__V_187_187;
              MR_Word parse_tree__parse_inst_mode_name__V_189_189;
              MR_Word parse_tree__parse_inst_mode_name__V_192_192;
              MR_Word parse_tree__parse_inst_mode_name__V_194_194;
              MR_Word parse_tree__parse_inst_mode_name__V_197_197;
              MR_Word parse_tree__parse_inst_mode_name__V_198_198;
              MR_Word parse_tree__parse_inst_mode_name__V_202_202;
              MR_Word parse_tree__parse_inst_mode_name__V_203_203;
              MR_Word parse_tree__parse_inst_mode_name__V_204_204;
              MR_Word parse_tree__parse_inst_mode_name__V_205_205;
              MR_Word parse_tree__parse_inst_mode_name__V_208_208;
              MR_String parse_tree__parse_inst_mode_name__TermStr_210;
              MR_Word parse_tree__parse_inst_mode_name__Pieces_211;
              MR_Word parse_tree__parse_inst_mode_name__Spec_212;

              {
                parse_tree__parse_inst_mode_name__TermStr_210 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__Term_9);
              }
              parse_tree__parse_inst_mode_name__TypeCtorInfo_121_214 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              {
                parse_tree__parse_inst_mode_name__V_186_186 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_121_214, parse_tree__parse_inst_mode_name__ContextPieces_8);
              }
              {
                parse_tree__parse_inst_mode_name__V_198_198 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_198_198, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_198_198, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_210));
              }
              {
                parse_tree__parse_inst_mode_name__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_197_197, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_198_198));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_197_197, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[7])));
              }
              {
                parse_tree__parse_inst_mode_name__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_194_194, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[60])));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_194_194, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_197_197));
              }
              {
                parse_tree__parse_inst_mode_name__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_192_192, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[59])));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_192_192, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_194_194));
              }
              {
                parse_tree__parse_inst_mode_name__V_189_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_189_189, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[58])));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_189_189, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_192_192));
              }
              {
                parse_tree__parse_inst_mode_name__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_187_187, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_187_187, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_189_189));
              }
              {
                parse_tree__parse_inst_mode_name__Pieces_211 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_121_214, parse_tree__parse_inst_mode_name__V_186_186, parse_tree__parse_inst_mode_name__V_187_187);
              }
              {
                parse_tree__parse_inst_mode_name__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_205_205, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_211));
              }
              {
                parse_tree__parse_inst_mode_name__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_204_204, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_205_205));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_204_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_inst_mode_name__V_203_203 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_203_203, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_114));
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_203_203, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_204_204));
              }
              {
                parse_tree__parse_inst_mode_name__V_202_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_202_202, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_203_203));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_202_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_inst_mode_name__Spec_212 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_212, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_212, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_212, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_202_202));
              }
              {
                parse_tree__parse_inst_mode_name__V_208_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_208_208, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_212));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_208_208, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_inst_mode_name__MaybeMode_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_208_208));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_121_121;
              MR_Word parse_tree__parse_inst_mode_name__V_48_48;
              MR_Word parse_tree__parse_inst_mode_name__V_49_49;
              MR_Word parse_tree__parse_inst_mode_name__V_51_51;
              MR_Word parse_tree__parse_inst_mode_name__V_54_54;
              MR_Word parse_tree__parse_inst_mode_name__V_56_56;
              MR_Word parse_tree__parse_inst_mode_name__V_59_59;
              MR_Word parse_tree__parse_inst_mode_name__V_60_60;
              MR_Word parse_tree__parse_inst_mode_name__V_69_69;
              MR_Word parse_tree__parse_inst_mode_name__V_70_70;
              MR_Word parse_tree__parse_inst_mode_name__V_71_71;
              MR_Word parse_tree__parse_inst_mode_name__V_72_72;
              MR_Word parse_tree__parse_inst_mode_name__V_75_75;
              MR_String parse_tree__parse_inst_mode_name__TermStr_101;
              MR_Word parse_tree__parse_inst_mode_name__Pieces_102;
              MR_Word parse_tree__parse_inst_mode_name__Spec_103;

              {
                parse_tree__parse_inst_mode_name__TermStr_101 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__Term_9);
              }
              parse_tree__parse_inst_mode_name__TypeCtorInfo_121_121 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              {
                parse_tree__parse_inst_mode_name__V_48_48 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_121_121, parse_tree__parse_inst_mode_name__ContextPieces_8);
              }
              {
                parse_tree__parse_inst_mode_name__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_60_60, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_101));
              }
              {
                parse_tree__parse_inst_mode_name__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_59_59, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_60_60));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[7])));
              }
              {
                parse_tree__parse_inst_mode_name__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[60])));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_56_56, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_59_59));
              }
              {
                parse_tree__parse_inst_mode_name__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[59])));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_54_54, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_56_56));
              }
              {
                parse_tree__parse_inst_mode_name__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_51_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[58])));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_51_51, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_54_54));
              }
              {
                parse_tree__parse_inst_mode_name__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_49_49, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_51_51));
              }
              {
                parse_tree__parse_inst_mode_name__Pieces_102 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_121_121, parse_tree__parse_inst_mode_name__V_48_48, parse_tree__parse_inst_mode_name__V_49_49);
              }
              {
                parse_tree__parse_inst_mode_name__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_72_72, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_102));
              }
              {
                parse_tree__parse_inst_mode_name__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_71_71, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_72_72));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_inst_mode_name__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_70_70, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_114));
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_70_70, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_71_71));
              }
              {
                parse_tree__parse_inst_mode_name__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_69_69, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_70_70));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_inst_mode_name__Spec_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_103, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_103, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_69_69));
              }
              {
                parse_tree__parse_inst_mode_name__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_75_75, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_103));
                MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_inst_mode_name__MaybeMode_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_75_75));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__TermFunctor_16, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_121_244;
                  MR_Word parse_tree__parse_inst_mode_name__V_216_216;
                  MR_Word parse_tree__parse_inst_mode_name__V_217_217;
                  MR_Word parse_tree__parse_inst_mode_name__V_219_219;
                  MR_Word parse_tree__parse_inst_mode_name__V_222_222;
                  MR_Word parse_tree__parse_inst_mode_name__V_224_224;
                  MR_Word parse_tree__parse_inst_mode_name__V_227_227;
                  MR_Word parse_tree__parse_inst_mode_name__V_228_228;
                  MR_Word parse_tree__parse_inst_mode_name__V_232_232;
                  MR_Word parse_tree__parse_inst_mode_name__V_233_233;
                  MR_Word parse_tree__parse_inst_mode_name__V_234_234;
                  MR_Word parse_tree__parse_inst_mode_name__V_235_235;
                  MR_Word parse_tree__parse_inst_mode_name__V_238_238;
                  MR_String parse_tree__parse_inst_mode_name__TermStr_240;
                  MR_Word parse_tree__parse_inst_mode_name__Pieces_241;
                  MR_Word parse_tree__parse_inst_mode_name__Spec_242;

                  {
                    parse_tree__parse_inst_mode_name__TermStr_240 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__Term_9);
                  }
                  parse_tree__parse_inst_mode_name__TypeCtorInfo_121_244 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                  {
                    parse_tree__parse_inst_mode_name__V_216_216 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_121_244, parse_tree__parse_inst_mode_name__ContextPieces_8);
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_228_228 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_228_228, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_228_228, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_240));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_227_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_227_227, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_228_228));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_227_227, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[7])));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_224_224, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[60])));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_224_224, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_227_227));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_222_222, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[63])));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_222_222, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_224_224));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_219_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_219_219, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[58])));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_219_219, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_222_222));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_217_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_217_217, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_217_217, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_219_219));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Pieces_241 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_121_244, parse_tree__parse_inst_mode_name__V_216_216, parse_tree__parse_inst_mode_name__V_217_217);
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_235_235 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_235_235, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_241));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_234_234, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_235_235));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_234_234, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_233_233 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_233_233, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_114));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_233_233, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_234_234));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_232_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_232_232, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_233_233));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_232_232, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Spec_242 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_242, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_242, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_242, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_232_232));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_238_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_238_238, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_242));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_238_238, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__parse_inst_mode_name__MaybeMode_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_238_238));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_121_154;
                  MR_Word parse_tree__parse_inst_mode_name__V_126_126;
                  MR_Word parse_tree__parse_inst_mode_name__V_127_127;
                  MR_Word parse_tree__parse_inst_mode_name__V_129_129;
                  MR_Word parse_tree__parse_inst_mode_name__V_132_132;
                  MR_Word parse_tree__parse_inst_mode_name__V_134_134;
                  MR_Word parse_tree__parse_inst_mode_name__V_137_137;
                  MR_Word parse_tree__parse_inst_mode_name__V_138_138;
                  MR_Word parse_tree__parse_inst_mode_name__V_142_142;
                  MR_Word parse_tree__parse_inst_mode_name__V_143_143;
                  MR_Word parse_tree__parse_inst_mode_name__V_144_144;
                  MR_Word parse_tree__parse_inst_mode_name__V_145_145;
                  MR_Word parse_tree__parse_inst_mode_name__V_148_148;
                  MR_String parse_tree__parse_inst_mode_name__TermStr_150;
                  MR_Word parse_tree__parse_inst_mode_name__Pieces_151;
                  MR_Word parse_tree__parse_inst_mode_name__Spec_152;

                  {
                    parse_tree__parse_inst_mode_name__TermStr_150 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__Term_9);
                  }
                  parse_tree__parse_inst_mode_name__TypeCtorInfo_121_154 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                  {
                    parse_tree__parse_inst_mode_name__V_126_126 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_121_154, parse_tree__parse_inst_mode_name__ContextPieces_8);
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_138_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_138_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_138_138, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_150));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_137_137, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_138_138));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[7])));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_134_134, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[60])));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_134_134, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_137_137));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_132_132, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[61])));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_132_132, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_134_134));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_129_129, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[58])));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_129_129, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_132_132));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_127_127, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_127_127, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_129_129));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Pieces_151 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_121_154, parse_tree__parse_inst_mode_name__V_126_126, parse_tree__parse_inst_mode_name__V_127_127);
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_145_145, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_151));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_144_144, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_145_145));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_144_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_143_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_143_143, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_114));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_143_143, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_144_144));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_142_142, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_143_143));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Spec_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_152, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_152, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_142_142));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_148_148, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_152));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_148_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__parse_inst_mode_name__MaybeMode_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_148_148));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_121_184;
                  MR_Word parse_tree__parse_inst_mode_name__V_156_156;
                  MR_Word parse_tree__parse_inst_mode_name__V_157_157;
                  MR_Word parse_tree__parse_inst_mode_name__V_159_159;
                  MR_Word parse_tree__parse_inst_mode_name__V_162_162;
                  MR_Word parse_tree__parse_inst_mode_name__V_164_164;
                  MR_Word parse_tree__parse_inst_mode_name__V_167_167;
                  MR_Word parse_tree__parse_inst_mode_name__V_168_168;
                  MR_Word parse_tree__parse_inst_mode_name__V_172_172;
                  MR_Word parse_tree__parse_inst_mode_name__V_173_173;
                  MR_Word parse_tree__parse_inst_mode_name__V_174_174;
                  MR_Word parse_tree__parse_inst_mode_name__V_175_175;
                  MR_Word parse_tree__parse_inst_mode_name__V_178_178;
                  MR_String parse_tree__parse_inst_mode_name__TermStr_180;
                  MR_Word parse_tree__parse_inst_mode_name__Pieces_181;
                  MR_Word parse_tree__parse_inst_mode_name__Spec_182;

                  {
                    parse_tree__parse_inst_mode_name__TermStr_180 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__Term_9);
                  }
                  parse_tree__parse_inst_mode_name__TypeCtorInfo_121_184 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                  {
                    parse_tree__parse_inst_mode_name__V_156_156 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_121_184, parse_tree__parse_inst_mode_name__ContextPieces_8);
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_168_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_168_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_168_168, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_180));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_167_167, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_168_168));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_167_167, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[7])));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_164_164, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[60])));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_164_164, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_167_167));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_162_162, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[62])));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_162_162, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_164_164));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_159_159, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[58])));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_159_159, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_162_162));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_157_157, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_157_157, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_159_159));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Pieces_181 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_121_184, parse_tree__parse_inst_mode_name__V_156_156, parse_tree__parse_inst_mode_name__V_157_157);
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_175_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_175_175, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_181));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_174_174, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_175_175));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_174_174, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_173_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_173_173, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_114));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_173_173, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_174_174));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_172_172, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_173_173));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_172_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_inst_mode_name__Spec_182 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_182, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_182, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_182, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_172_172));
                  }
                  {
                    parse_tree__parse_inst_mode_name__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_178_178, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_182));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_178_178, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__parse_inst_mode_name__MaybeMode_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_178_178));
                  }
                }
                break;
            }
            break;
        }
      }
    else
      {
        MR_Word parse_tree__parse_inst_mode_name__TypeCtorInfo_119_119;
        MR_Word parse_tree__parse_inst_mode_name__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Term_9, (MR_Integer) 1)));
        MR_String parse_tree__parse_inst_mode_name__TermStr_13;
        MR_Word parse_tree__parse_inst_mode_name__Pieces_14;
        MR_Word parse_tree__parse_inst_mode_name__Spec_15;
        MR_Word parse_tree__parse_inst_mode_name__V_77_77;
        MR_Word parse_tree__parse_inst_mode_name__V_78_78;
        MR_Word parse_tree__parse_inst_mode_name__V_80_80;
        MR_Word parse_tree__parse_inst_mode_name__V_83_83;
        MR_Word parse_tree__parse_inst_mode_name__V_84_84;
        MR_Word parse_tree__parse_inst_mode_name__V_93_93;
        MR_Word parse_tree__parse_inst_mode_name__V_94_94;
        MR_Word parse_tree__parse_inst_mode_name__V_95_95;
        MR_Word parse_tree__parse_inst_mode_name__V_96_96;
        MR_Word parse_tree__parse_inst_mode_name__V_99_99;
        MR_Word parse_tree__parse_inst_mode_name__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__Term_9, (MR_Integer) 0)));

        {
          parse_tree__parse_inst_mode_name__TermStr_13 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_inst_mode_name__VarSet_7, parse_tree__parse_inst_mode_name__Term_9);
        }
        parse_tree__parse_inst_mode_name__TypeCtorInfo_119_119 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          parse_tree__parse_inst_mode_name__V_77_77 = mercury__cord__list_1_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_119_119, parse_tree__parse_inst_mode_name__ContextPieces_8);
        }
        {
          parse_tree__parse_inst_mode_name__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__parse_inst_mode_name__V_84_84, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TermStr_13));
        }
        {
          parse_tree__parse_inst_mode_name__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_83_83, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_84_84));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_name_scalar_common_1[9])));
        }
        {
          parse_tree__parse_inst_mode_name__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_80_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_name_scalar_common_1[64])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_80_80, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_83_83));
        }
        {
          parse_tree__parse_inst_mode_name__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_78_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_78_78, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_80_80));
        }
        {
          parse_tree__parse_inst_mode_name__Pieces_14 = mercury__list__f_43_43_2_f_0(parse_tree__parse_inst_mode_name__TypeCtorInfo_119_119, parse_tree__parse_inst_mode_name__V_77_77, parse_tree__parse_inst_mode_name__V_78_78);
        }
        {
          parse_tree__parse_inst_mode_name__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_96_96, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Pieces_14));
        }
        {
          parse_tree__parse_inst_mode_name__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_95_95, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_96_96));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_inst_mode_name__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_94_94, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Context_12));
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__V_94_94, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_95_95));
        }
        {
          parse_tree__parse_inst_mode_name__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_93_93, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_94_94));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_inst_mode_name__Spec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_inst_mode_name__Spec_15, 2) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_93_93));
        }
        {
          parse_tree__parse_inst_mode_name__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_99_99, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__Spec_15));
          MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_inst_mode_name__MaybeMode_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_99_99));
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
            MR_Word parse_tree__parse_inst_mode_name__V_21_21;

            {
              parse_tree__parse_inst_mode_name__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_21_21, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__HeadMode_18));
              MR_hl_field(MR_mktag(1), parse_tree__parse_inst_mode_name__V_21_21, 1) = ((MR_Box) (parse_tree__parse_inst_mode_name__TailModes_19));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_inst_mode_name__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_inst_mode_name__V_21_21));
            }
          }
        else
          {
            MR_Word parse_tree__parse_inst_mode_name__Specs_20;
            MR_Word parse_tree__parse_inst_mode_name__V_22_22;
            MR_Word parse_tree__parse_inst_mode_name__V_23_23;

            {
              parse_tree__parse_inst_mode_name__V_22_22 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_inst_mode_name__MaybeHeadMode_16);
            }
            {
              parse_tree__parse_inst_mode_name__V_23_23 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_inst_mode_name_scalar_common_1[0], parse_tree__parse_inst_mode_name__MaybeTailModes_17);
            }
            {
              parse_tree__parse_inst_mode_name__Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_inst_mode_name__V_22_22, parse_tree__parse_inst_mode_name__V_23_23);
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
