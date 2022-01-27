/*
** Automatically generated from `prog_io_type_name.m'
** by the Mercury compiler,
** version rotd-2016-01-15
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


/* :- module parse_tree.prog_io_type_name. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_type_name__init
ENDINIT
*/

#include "parse_tree.prog_io_type_name.mih"


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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_name__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_name__list__pti_list_1__pseudo_1;

static const MR_PseudoTypeInfo parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__field_types_known_compound_type_kind_1_0[1];

static const MR_DuFunctorDesc parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_compound_type_kind_1_0;

static const MR_PseudoTypeInfo parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__field_types_known_compound_type_kind_1_1[2];

static const MR_DuFunctorDesc parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_compound_type_kind_1_1;

static const MR_PseudoTypeInfo parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__field_types_known_compound_type_kind_1_2[1];

static const MR_DuFunctorDesc parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_compound_type_kind_1_2;

static const MR_PseudoTypeInfo parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__field_types_known_compound_type_kind_1_3[2];

static const MR_DuFunctorDesc parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_compound_type_kind_1_3;

static const MR_PseudoTypeInfo parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__field_types_known_compound_type_kind_1_4[1];

static const MR_DuFunctorDesc parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_compound_type_kind_1_4;

static const MR_DuFunctorDescPtr parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_stag_ordered_known_compound_type_kind_1_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_stag_ordered_known_compound_type_kind_1_1[1];

static const MR_DuFunctorDescPtr parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_stag_ordered_known_compound_type_kind_1_2[1];

static const MR_DuFunctorDescPtr parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_stag_ordered_known_compound_type_kind_1_3[2];

static const MR_DuPtagLayout parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_ptag_ordered_known_compound_type_kind_1[4];

static const MR_DuFunctorDescPtr parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_name_ordered_known_compound_type_kind_1[5];

static const MR_Integer parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__functor_number_map_known_compound_type_kind_1[5];

static const MR_PseudoTypeInfo parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__field_types_known_type_kind_1_0[1];

static const MR_DuFunctorDesc parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_type_kind_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__pti_known_compound_type_kind_1__pseudo_1;

static const MR_PseudoTypeInfo parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__field_types_known_type_kind_1_1[1];

static const MR_DuFunctorDesc parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_type_kind_1_1;

static const MR_DuFunctorDesc parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_type_kind_1_2;

static const MR_DuFunctorDescPtr parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_stag_ordered_known_type_kind_1_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_stag_ordered_known_type_kind_1_1[1];

static const MR_DuFunctorDescPtr parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_stag_ordered_known_type_kind_1_2[1];

static const MR_DuPtagLayout parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_ptag_ordered_known_type_kind_1[3];

static const MR_DuFunctorDescPtr parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_name_ordered_known_type_kind_1[3];

static const MR_Integer parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__functor_number_map_known_type_kind_1[3];

static MR_bool MR_CALL 
parse_tree__prog_io_type_name____Unify____known_compound_type_kind_1_0_10001(
  MR_Box parse_tree__prog_io_type_name__wrapper_arg_1,
  MR_Box parse_tree__prog_io_type_name__wrapper_arg_2,
  MR_Box parse_tree__prog_io_type_name__wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_io_type_name____Compare____known_compound_type_kind_1_0_10001(
  MR_Box parse_tree__prog_io_type_name__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_type_name__wrapper_arg_2,
  MR_Box parse_tree__prog_io_type_name__wrapper_arg_3,
  MR_Box parse_tree__prog_io_type_name__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__prog_io_type_name____Unify____known_type_kind_1_0_10001(
  MR_Box parse_tree__prog_io_type_name__wrapper_arg_1,
  MR_Box parse_tree__prog_io_type_name__wrapper_arg_2,
  MR_Box parse_tree__prog_io_type_name__wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_io_type_name____Compare____known_type_kind_1_0_10001(
  MR_Box parse_tree__prog_io_type_name__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_type_name__wrapper_arg_2,
  MR_Box parse_tree__prog_io_type_name__wrapper_arg_3,
  MR_Box parse_tree__prog_io_type_name__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__prog_io_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
  MR_String parse_tree__prog_io_type_name__Name_4,
  MR_Word parse_tree__prog_io_type_name__Args_5,
  MR_Word * parse_tree__prog_io_type_name__KnownType_6);

static void MR_CALL 
parse_tree__prog_io_type_name____Compare____known_type_kind_1_0(
  MR_Word parse_tree__prog_io_type_name__TypeInfo_for_T_18,
  MR_Word * parse_tree__prog_io_type_name__HeadVar__1_1,
  MR_Word parse_tree__prog_io_type_name__HeadVar__2_2,
  MR_Word parse_tree__prog_io_type_name__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_io_type_name____Unify____known_type_kind_1_0(
  MR_Word parse_tree__prog_io_type_name__TypeInfo_for_T_11,
  MR_Word parse_tree__prog_io_type_name__HeadVar__1_1,
  MR_Word parse_tree__prog_io_type_name__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_io_type_name____Compare____known_compound_type_kind_1_0(
  MR_Word parse_tree__prog_io_type_name__TypeInfo_for_T_78,
  MR_Word * parse_tree__prog_io_type_name__HeadVar__1_1,
  MR_Word parse_tree__prog_io_type_name__HeadVar__2_2,
  MR_Word parse_tree__prog_io_type_name__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_io_type_name____Unify____known_compound_type_kind_1_0(
  MR_Word parse_tree__prog_io_type_name__TypeInfo_for_T_19,
  MR_Word parse_tree__prog_io_type_name__HeadVar__1_1,
  MR_Word parse_tree__prog_io_type_name__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_io_type_name__unparse_qualified_term_3_p_0(
  MR_Word parse_tree__prog_io_type_name__HeadVar__1_1,
  MR_Word parse_tree__prog_io_type_name__Args_2,
  MR_Word * parse_tree__prog_io_type_name__Term_3);

static void MR_CALL 
parse_tree__prog_io_type_name__unparse_type_list_2_p_0_1(
  MR_Box parse_tree__prog_io_type_name__closure_arg,
  MR_Box parse_tree__prog_io_type_name__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_type_name__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_io_type_name__unparse_type_list_2_p_0(
  MR_Word parse_tree__prog_io_type_name__Types_3,
  MR_Word * parse_tree__prog_io_type_name__Terms_4);

static void MR_CALL 
parse_tree__prog_io_type_name__parse_types_acc_7_p_0(
  MR_Word parse_tree__prog_io_type_name__HeadVar__1_1,
  MR_Word parse_tree__prog_io_type_name__VarSet_2,
  MR_Word parse_tree__prog_io_type_name__ContextPieces_3,
  MR_Word parse_tree__prog_io_type_name__STATE_VARIABLE_RevTypes_0_4,
  MR_Word * parse_tree__prog_io_type_name__STATE_VARIABLE_RevTypes_5,
  MR_Word parse_tree__prog_io_type_name__STATE_VARIABLE_Specs_0_6,
  MR_Word * parse_tree__prog_io_type_name__STATE_VARIABLE_Specs_7);

static MR_Word MR_CALL 
parse_tree__prog_io_type_name__ill_formed_type_result_3_f_0(
  MR_Word parse_tree__prog_io_type_name__ContextPieces_5,
  MR_Word parse_tree__prog_io_type_name__VarSet_6,
  MR_Word parse_tree__prog_io_type_name__Term_7);

static void MR_CALL 
parse_tree__prog_io_type_name__parse_compound_type_5_p_0(
  MR_Word parse_tree__prog_io_type_name__Term_6,
  MR_Word parse_tree__prog_io_type_name__VarSet_7,
  MR_Word parse_tree__prog_io_type_name__ContextPieces_8,
  MR_Word parse_tree__prog_io_type_name__CompoundTypeKind_9,
  MR_Word * parse_tree__prog_io_type_name__Result_10);


static /* final */ const MR_Box parse_tree__prog_io_type_name_scalar_common_1[5][2];

static /* final */ const MR_Box parse_tree__prog_io_type_name_scalar_common_2[16][1];

static /* final */ const MR_Box parse_tree__prog_io_type_name_scalar_common_3[1][5];

static /* final */ const MR_Box parse_tree__prog_io_type_name_scalar_common_4[1][3];


/* sealed */ struct parse_tree__prog_io_type_name__vector_common_type_5_0_s {
  const MR_String parse_tree__prog_io_type_name__vector_common_type_5_0__vct_5_f_0;
  const MR_Integer parse_tree__prog_io_type_name__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct parse_tree__prog_io_type_name__vector_common_type_5_0_s parse_tree__prog_io_type_name_vector_common_5[32];



static /* final */ const MR_Box parse_tree__prog_io_type_name_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_name_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_name_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: ill-formed type"))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_type_name_scalar_common_2[16][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "="))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "impure"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "semipure"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "."))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_name_scalar_common_2[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_name_scalar_common_2[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_name_scalar_common_2[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_name_scalar_common_2[14])))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_type_name_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_io_type_name__term__pti_term_1__plain_term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_type_name_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_name_scalar_common_3[0])),
    ((MR_Box) (parse_tree__prog_io_type_name__unparse_type_list_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};


static /* final */ const struct parse_tree__prog_io_type_name__vector_common_type_5_0_s parse_tree__prog_io_type_name_vector_common_5[32] = {
  /* row 0 */
  {
    (MR_String) "",
    (MR_Integer) -1
  },
  /* row 1 */
  {
    (MR_String) "string",
    (MR_Integer) -1
  },
  /* row 2 */
  {
    (MR_String) "semipure",
    (MR_Integer) -1
  },
  /* row 3 */
  {
    (MR_String) "float",
    (MR_Integer) -1
  },
  /* row 4 */
  {
    (MR_String) "character",
    (MR_Integer) 5
  },
  /* row 5 */
  {
    (MR_String) "impure",
    (MR_Integer) -1
  },
  /* row 6 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 7 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 8 */
  {
    (MR_String) "int",
    (MR_Integer) -1
  },
  /* row 9 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 10 */
  {
    (MR_String) "{}",
    (MR_Integer) -1
  },
  /* row 11 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 12 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 13 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 14 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 15 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 16 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 17 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 18 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 19 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 20 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 21 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 22 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 23 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 24 */
  {
    (MR_String) "pure",
    (MR_Integer) -1
  },
  /* row 25 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 26 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 27 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 28 */
  {
    (MR_String) "=",
    (MR_Integer) -1
  },
  /* row 29 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 30 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 31 */
  {
    (MR_String) "pred",
    (MR_Integer) -1
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_name__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_name__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__field_types_known_compound_type_kind_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_type_name__list__pti_list_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_compound_type_kind_1_0 = {
  (MR_String) "kctk_tuple",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__field_types_known_compound_type_kind_1_0,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__field_types_known_compound_type_kind_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_compound_type_kind_1_1 = {
  (MR_String) "kctk_pure_func",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__field_types_known_compound_type_kind_1_1,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__field_types_known_compound_type_kind_1_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_type_name__list__pti_list_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_compound_type_kind_1_2 = {
  (MR_String) "kctk_pure_pred",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__field_types_known_compound_type_kind_1_2,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__field_types_known_compound_type_kind_1_3[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_compound_type_kind_1_3 = {
  (MR_String) "kctk_purity",
  (MR_Integer) 2,
  (MR_Integer) 2,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__field_types_known_compound_type_kind_1_3,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__field_types_known_compound_type_kind_1_4[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_type_name__list__pti_list_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_compound_type_kind_1_4 = {
  (MR_String) "kctk_apply",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__field_types_known_compound_type_kind_1_4,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_stag_ordered_known_compound_type_kind_1_0[1] = {
  &parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_compound_type_kind_1_0
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_stag_ordered_known_compound_type_kind_1_1[1] = {
  &parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_compound_type_kind_1_1
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_stag_ordered_known_compound_type_kind_1_2[1] = {
  &parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_compound_type_kind_1_2
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_stag_ordered_known_compound_type_kind_1_3[2] = {
  &parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_compound_type_kind_1_3,
  &parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_compound_type_kind_1_4
};

static const MR_DuPtagLayout parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_ptag_ordered_known_compound_type_kind_1[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_stag_ordered_known_compound_type_kind_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_stag_ordered_known_compound_type_kind_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_stag_ordered_known_compound_type_kind_1_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_stag_ordered_known_compound_type_kind_1_3
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_name_ordered_known_compound_type_kind_1[5] = {
  &parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_compound_type_kind_1_4,
  &parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_compound_type_kind_1_1,
  &parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_compound_type_kind_1_2,
  &parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_compound_type_kind_1_3,
  &parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_compound_type_kind_1_0
};

static const MR_Integer parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__functor_number_map_known_compound_type_kind_1[5] = {
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__type_ctor_info_known_compound_type_kind_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_type_name____Unify____known_compound_type_kind_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_type_name____Compare____known_compound_type_kind_1_0_10001)),
  (MR_String) "parse_tree.prog_io_type_name",
  (MR_String) "known_compound_type_kind",
  {     parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_name_ordered_known_compound_type_kind_1 },
  {     parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_ptag_ordered_known_compound_type_kind_1 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__functor_number_map_known_compound_type_kind_1
};

static const MR_PseudoTypeInfo parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__field_types_known_type_kind_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_type_kind_1_0 = {
  (MR_String) "known_type_simple",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__field_types_known_type_kind_1_0,
  NULL,
  NULL,
  NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__pti_known_compound_type_kind_1__pseudo_1 = {
  &parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__type_ctor_info_known_compound_type_kind_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__field_types_known_type_kind_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__pti_known_compound_type_kind_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_type_kind_1_1 = {
  (MR_String) "known_type_compound",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__field_types_known_type_kind_1_1,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_type_kind_1_2 = {
  (MR_String) "known_type_bad_arity",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_stag_ordered_known_type_kind_1_0[1] = {
  &parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_type_kind_1_2
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_stag_ordered_known_type_kind_1_1[1] = {
  &parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_type_kind_1_0
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_stag_ordered_known_type_kind_1_2[1] = {
  &parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_type_kind_1_1
};

static const MR_DuPtagLayout parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_ptag_ordered_known_type_kind_1[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_stag_ordered_known_type_kind_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_stag_ordered_known_type_kind_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_stag_ordered_known_type_kind_1_2
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_name_ordered_known_type_kind_1[3] = {
  &parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_type_kind_1_2,
  &parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_type_kind_1_1,
  &parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_functor_desc_known_type_kind_1_0
};

static const MR_Integer parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__functor_number_map_known_type_kind_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__type_ctor_info_known_type_kind_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_type_name____Unify____known_type_kind_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_type_name____Compare____known_type_kind_1_0_10001)),
  (MR_String) "parse_tree.prog_io_type_name",
  (MR_String) "known_type_kind",
  {     parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_name_ordered_known_type_kind_1 },
  {     parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__du_ptag_ordered_known_type_kind_1 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__functor_number_map_known_type_kind_1
};

static MR_bool MR_CALL 
parse_tree__prog_io_type_name____Unify____known_compound_type_kind_1_0_10001(
  MR_Box parse_tree__prog_io_type_name__wrapper_arg_1,
  MR_Box parse_tree__prog_io_type_name__wrapper_arg_2,
  MR_Box parse_tree__prog_io_type_name__wrapper_arg_3)
{
  {
    MR_bool parse_tree__prog_io_type_name__succeeded;

    {
      parse_tree__prog_io_type_name__succeeded = parse_tree__prog_io_type_name____Unify____known_compound_type_kind_1_0(((MR_Word) parse_tree__prog_io_type_name__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_type_name__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_type_name__wrapper_arg_3));
    }
    return parse_tree__prog_io_type_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_type_name____Compare____known_compound_type_kind_1_0_10001(
  MR_Box parse_tree__prog_io_type_name__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_type_name__wrapper_arg_2,
  MR_Box parse_tree__prog_io_type_name__wrapper_arg_3,
  MR_Box parse_tree__prog_io_type_name__wrapper_arg_4)
{
  {
    MR_Word parse_tree__prog_io_type_name__conv0_HeadVar__1_1;

    {
      parse_tree__prog_io_type_name____Compare____known_compound_type_kind_1_0(((MR_Word) parse_tree__prog_io_type_name__wrapper_arg_1), &parse_tree__prog_io_type_name__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_type_name__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_type_name__wrapper_arg_4));
    }
    *parse_tree__prog_io_type_name__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_name__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_type_name____Unify____known_type_kind_1_0_10001(
  MR_Box parse_tree__prog_io_type_name__wrapper_arg_1,
  MR_Box parse_tree__prog_io_type_name__wrapper_arg_2,
  MR_Box parse_tree__prog_io_type_name__wrapper_arg_3)
{
  {
    MR_bool parse_tree__prog_io_type_name__succeeded;

    {
      parse_tree__prog_io_type_name__succeeded = parse_tree__prog_io_type_name____Unify____known_type_kind_1_0(((MR_Word) parse_tree__prog_io_type_name__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_type_name__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_type_name__wrapper_arg_3));
    }
    return parse_tree__prog_io_type_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_type_name____Compare____known_type_kind_1_0_10001(
  MR_Box parse_tree__prog_io_type_name__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_type_name__wrapper_arg_2,
  MR_Box parse_tree__prog_io_type_name__wrapper_arg_3,
  MR_Box parse_tree__prog_io_type_name__wrapper_arg_4)
{
  {
    MR_Word parse_tree__prog_io_type_name__conv0_HeadVar__1_1;

    {
      parse_tree__prog_io_type_name____Compare____known_type_kind_1_0(((MR_Word) parse_tree__prog_io_type_name__wrapper_arg_1), &parse_tree__prog_io_type_name__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_type_name__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_type_name__wrapper_arg_4));
    }
    *parse_tree__prog_io_type_name__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_name__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
  MR_String parse_tree__prog_io_type_name__Name_4,
  MR_Word parse_tree__prog_io_type_name__Args_5,
  MR_Word * parse_tree__prog_io_type_name__KnownType_6)
{
  {
    MR_bool parse_tree__prog_io_type_name__succeeded;
    MR_Integer parse_tree__prog_io_type_name__slot_0;
    MR_String parse_tree__prog_io_type_name__str_1;

    /* hashed string jump switch */
    /* compute the hash value of the input string */
    parse_tree__prog_io_type_name__slot_0 = ((MR_hash_string6(parse_tree__prog_io_type_name__Name_4)) & (MR_Integer) 31);
    /* hash chain loop */
    do
      {
        /* lookup the string for this hash slot */
        parse_tree__prog_io_type_name__str_1 = ((&parse_tree__prog_io_type_name_vector_common_5[0 + parse_tree__prog_io_type_name__slot_0]))->parse_tree__prog_io_type_name__vector_common_type_5_0__vct_5_f_0;
        /* did we find a match? */
        if ((((parse_tree__prog_io_type_name__str_1 != NULL)) && ((strcmp(parse_tree__prog_io_type_name__str_1, parse_tree__prog_io_type_name__Name_4) == 0))))
          {
            /* we found a match; dispatch to the corresponding code */
            switch (parse_tree__prog_io_type_name__slot_0) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* case "" */
                  {
                    MR_Word parse_tree__prog_io_type_name__V_21_21;

                    {
                      parse_tree__prog_io_type_name__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_21_21, 1) = ((MR_Box) (parse_tree__prog_io_type_name__Args_5));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__prog_io_type_name__KnownType_6 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_21_21));
                    }
                    parse_tree__prog_io_type_name__succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  /* case "string" */
                  if ((parse_tree__prog_io_type_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *parse_tree__prog_io_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_name_scalar_common_2[15]);
                    }
                  else
                    *parse_tree__prog_io_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  parse_tree__prog_io_type_name__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  /* case "semipure" */
                  if ((parse_tree__prog_io_type_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *parse_tree__prog_io_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  else
                    {
                      MR_Word parse_tree__prog_io_type_name__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__Args_5, (MR_Integer) 1)));
                      MR_Box parse_tree__prog_io_type_name__V_145_145 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__Args_5, (MR_Integer) 0));

                      if ((parse_tree__prog_io_type_name__V_144_144 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Word parse_tree__prog_io_type_name__V_95_95;

                          {
                            parse_tree__prog_io_type_name__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_95_95, 1) = ((MR_Box) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_95_95, 2) = parse_tree__prog_io_type_name__V_145_145;
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *parse_tree__prog_io_type_name__KnownType_6 = base;
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_95_95));
                          }
                        }
                      else
                        *parse_tree__prog_io_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  parse_tree__prog_io_type_name__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  /* case "float" */
                  if ((parse_tree__prog_io_type_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *parse_tree__prog_io_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_name_scalar_common_2[11]);
                    }
                  else
                    *parse_tree__prog_io_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  parse_tree__prog_io_type_name__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 4:
                {
                  /* case "character" */
                  if ((parse_tree__prog_io_type_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *parse_tree__prog_io_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_name_scalar_common_2[9]);
                    }
                  else
                    *parse_tree__prog_io_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  parse_tree__prog_io_type_name__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 5:
                {
                  /* case "impure" */
                  if ((parse_tree__prog_io_type_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *parse_tree__prog_io_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  else
                    {
                      MR_Word parse_tree__prog_io_type_name__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__Args_5, (MR_Integer) 1)));
                      MR_Box parse_tree__prog_io_type_name__V_141_141 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__Args_5, (MR_Integer) 0));

                      if ((parse_tree__prog_io_type_name__V_140_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Word parse_tree__prog_io_type_name__V_23_23;

                          {
                            parse_tree__prog_io_type_name__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_23_23, 1) = ((MR_Box) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_23_23, 2) = parse_tree__prog_io_type_name__V_141_141;
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *parse_tree__prog_io_type_name__KnownType_6 = base;
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_23_23));
                          }
                        }
                      else
                        *parse_tree__prog_io_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  parse_tree__prog_io_type_name__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 8:
                {
                  /* case "int" */
                  if ((parse_tree__prog_io_type_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *parse_tree__prog_io_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_name_scalar_common_2[13]);
                    }
                  else
                    *parse_tree__prog_io_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  parse_tree__prog_io_type_name__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 10:
                {
                  /* case "{}" */
                  {
                    MR_Word parse_tree__prog_io_type_name__V_32_32;

                    {
                      parse_tree__prog_io_type_name__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_type_name__Args_5));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__prog_io_type_name__KnownType_6 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_32_32));
                    }
                    parse_tree__prog_io_type_name__succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 24:
                {
                  /* case "pure" */
                  if ((parse_tree__prog_io_type_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *parse_tree__prog_io_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  else
                    {
                      MR_Word parse_tree__prog_io_type_name__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__Args_5, (MR_Integer) 1)));
                      MR_Box parse_tree__prog_io_type_name__V_143_143 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__Args_5, (MR_Integer) 0));

                      if ((parse_tree__prog_io_type_name__V_142_142 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Word parse_tree__prog_io_type_name__V_63_63;

                          {
                            parse_tree__prog_io_type_name__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_63_63, 1) = ((MR_Box) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_63_63, 2) = parse_tree__prog_io_type_name__V_143_143;
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *parse_tree__prog_io_type_name__KnownType_6 = base;
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_63_63));
                          }
                        }
                      else
                        *parse_tree__prog_io_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  parse_tree__prog_io_type_name__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 28:
                {
                  /* case "=" */
                  if ((parse_tree__prog_io_type_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *parse_tree__prog_io_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  else
                    {
                      MR_Word parse_tree__prog_io_type_name__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__Args_5, (MR_Integer) 1)));
                      MR_Box parse_tree__prog_io_type_name__V_139_139 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__Args_5, (MR_Integer) 0));

                      if ((parse_tree__prog_io_type_name__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        *parse_tree__prog_io_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      else
                        {
                          MR_Word parse_tree__prog_io_type_name__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_138_138, (MR_Integer) 1)));
                          MR_Box parse_tree__prog_io_type_name__V_147_147 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_138_138, (MR_Integer) 0));

                          if ((parse_tree__prog_io_type_name__V_146_146 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                            {
                              MR_Word parse_tree__prog_io_type_name__V_28_28;

                              {
                                parse_tree__prog_io_type_name__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_28_28, 0) = parse_tree__prog_io_type_name__V_139_139;
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_28_28, 1) = parse_tree__prog_io_type_name__V_147_147;
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                *parse_tree__prog_io_type_name__KnownType_6 = base;
                                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_28_28));
                              }
                            }
                          else
                            *parse_tree__prog_io_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        }
                    }
                  parse_tree__prog_io_type_name__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 31:
                {
                  /* case "pred" */
                  {
                    MR_Word parse_tree__prog_io_type_name__V_25_25;

                    {
                      parse_tree__prog_io_type_name__V_25_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_type_name__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_name__Args_5));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__prog_io_type_name__KnownType_6 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_25_25));
                    }
                    parse_tree__prog_io_type_name__succeeded = MR_TRUE;
                  }
                }
                break;
            }
            /* jump out of search loop */
            goto label_0;
          }
        else
          {
            /* no match yet, so get next slot in hash chain */
            parse_tree__prog_io_type_name__slot_0 = ((&parse_tree__prog_io_type_name_vector_common_5[0 + parse_tree__prog_io_type_name__slot_0]))->parse_tree__prog_io_type_name__vector_common_type_5_0__vct_5_f_1;
          }
      }
    while ((parse_tree__prog_io_type_name__slot_0 >= (MR_Integer) 0));
    parse_tree__prog_io_type_name__succeeded = MR_FALSE;
  label_0:;
    return parse_tree__prog_io_type_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_type_name____Compare____known_type_kind_1_0(
  MR_Word parse_tree__prog_io_type_name__TypeInfo_for_T_18,
  MR_Word * parse_tree__prog_io_type_name__HeadVar__1_1,
  MR_Word parse_tree__prog_io_type_name__HeadVar__2_2,
  MR_Word parse_tree__prog_io_type_name__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_io_type_name__succeeded;
    MR_Integer parse_tree__prog_io_type_name__CastX_16 = (MR_Integer) parse_tree__prog_io_type_name__HeadVar__2_2;
    MR_Integer parse_tree__prog_io_type_name__CastY_17 = (MR_Integer) parse_tree__prog_io_type_name__HeadVar__3_3;

    parse_tree__prog_io_type_name__succeeded = (parse_tree__prog_io_type_name__CastX_16 == parse_tree__prog_io_type_name__CastY_17);
    if (parse_tree__prog_io_type_name__succeeded)
      *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__prog_io_type_name__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) parse_tree__prog_io_type_name__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__prog_io_type_name__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__prog_io_type_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__prog_io_type_name__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    parse_tree__prog_data____Compare____mer_type_0_0(parse_tree__prog_io_type_name__HeadVar__1_1, parse_tree__prog_io_type_name__V_23_23, parse_tree__prog_io_type_name__V_5_5);
                  }
                }
                break;
              case (MR_Integer) 2:
                *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__prog_io_type_name__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_type_name__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__prog_io_type_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__prog_io_type_name__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_type_name__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    parse_tree__prog_io_type_name____Compare____known_compound_type_kind_1_0(parse_tree__prog_io_type_name__TypeInfo_for_T_18, parse_tree__prog_io_type_name__HeadVar__1_1, parse_tree__prog_io_type_name__V_22_22, parse_tree__prog_io_type_name__V_12_12);
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
parse_tree__prog_io_type_name____Unify____known_type_kind_1_0(
  MR_Word parse_tree__prog_io_type_name__TypeInfo_for_T_11,
  MR_Word parse_tree__prog_io_type_name__HeadVar__1_1,
  MR_Word parse_tree__prog_io_type_name__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_io_type_name__succeeded;
    MR_Integer parse_tree__prog_io_type_name__CastX_9 = (MR_Integer) parse_tree__prog_io_type_name__HeadVar__1_1;
    MR_Integer parse_tree__prog_io_type_name__CastY_10 = (MR_Integer) parse_tree__prog_io_type_name__HeadVar__2_2;

    parse_tree__prog_io_type_name__succeeded = (parse_tree__prog_io_type_name__CastX_9 == parse_tree__prog_io_type_name__CastY_10);
    if (parse_tree__prog_io_type_name__succeeded)
      parse_tree__prog_io_type_name__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__prog_io_type_name__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer parse_tree__prog_io_type_name__CastX_7 = (MR_Integer) parse_tree__prog_io_type_name__HeadVar__1_1;
            MR_Integer parse_tree__prog_io_type_name__CastY_8 = (MR_Integer) parse_tree__prog_io_type_name__HeadVar__2_2;

            parse_tree__prog_io_type_name__succeeded = (parse_tree__prog_io_type_name__CastY_8 == parse_tree__prog_io_type_name__CastX_7);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__prog_io_type_name__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_io_type_name__V_4_4;

            parse_tree__prog_io_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_io_type_name__succeeded)
              {
                parse_tree__prog_io_type_name__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__prog_io_type_name__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__prog_io_type_name__V_3_3, parse_tree__prog_io_type_name__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__prog_io_type_name__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_type_name__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_io_type_name__V_6_6;

            parse_tree__prog_io_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__prog_io_type_name__succeeded)
              {
                parse_tree__prog_io_type_name__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_type_name__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__prog_io_type_name__succeeded = parse_tree__prog_io_type_name____Unify____known_compound_type_kind_1_0(parse_tree__prog_io_type_name__TypeInfo_for_T_11, parse_tree__prog_io_type_name__V_5_5, parse_tree__prog_io_type_name__V_6_6);
                }
              }
          }
          break;
      }
    return parse_tree__prog_io_type_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_type_name____Compare____known_compound_type_kind_1_0(
  MR_Word parse_tree__prog_io_type_name__TypeInfo_for_T_78,
  MR_Word * parse_tree__prog_io_type_name__HeadVar__1_1,
  MR_Word parse_tree__prog_io_type_name__HeadVar__2_2,
  MR_Word parse_tree__prog_io_type_name__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_io_type_name__succeeded;
    MR_Integer parse_tree__prog_io_type_name__CastX_76 = (MR_Integer) parse_tree__prog_io_type_name__HeadVar__2_2;
    MR_Integer parse_tree__prog_io_type_name__CastY_77 = (MR_Integer) parse_tree__prog_io_type_name__HeadVar__3_3;

    parse_tree__prog_io_type_name__succeeded = (parse_tree__prog_io_type_name__CastX_76 == parse_tree__prog_io_type_name__CastY_77);
    if (parse_tree__prog_io_type_name__succeeded)
      *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__prog_io_type_name__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__prog_io_type_name__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__prog_io_type_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__prog_io_type_name__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__list____Compare____list_1_0(parse_tree__prog_io_type_name__TypeInfo_for_T_78, parse_tree__prog_io_type_name__HeadVar__1_1, parse_tree__prog_io_type_name__V_92_92, parse_tree__prog_io_type_name__V_5_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box parse_tree__prog_io_type_name__V_87_87 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__HeadVar__2_2, (MR_Integer) 1));
            MR_Box parse_tree__prog_io_type_name__V_88_88 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) parse_tree__prog_io_type_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box parse_tree__prog_io_type_name__V_21_21 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__HeadVar__3_3, (MR_Integer) 0));
                  MR_Box parse_tree__prog_io_type_name__V_22_22 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__HeadVar__3_3, (MR_Integer) 1));
                  MR_Word parse_tree__prog_io_type_name__V_23_23;

                  {
                    mercury__builtin__compare_3_p_0(parse_tree__prog_io_type_name__TypeInfo_for_T_78, &parse_tree__prog_io_type_name__V_23_23, parse_tree__prog_io_type_name__V_88_88, parse_tree__prog_io_type_name__V_21_21);
                  }
                  parse_tree__prog_io_type_name__succeeded = (parse_tree__prog_io_type_name__V_23_23 == (MR_Integer) 0);
                  parse_tree__prog_io_type_name__succeeded = !(parse_tree__prog_io_type_name__succeeded);
                  if (parse_tree__prog_io_type_name__succeeded)
                    *parse_tree__prog_io_type_name__HeadVar__1_1 = parse_tree__prog_io_type_name__V_23_23;
                  else
                    {
                      mercury__builtin__compare_3_p_0(parse_tree__prog_io_type_name__TypeInfo_for_T_78, parse_tree__prog_io_type_name__HeadVar__1_1, parse_tree__prog_io_type_name__V_87_87, parse_tree__prog_io_type_name__V_22_22);
                    }
                }
                break;
              case (MR_Integer) 2:
                *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__prog_io_type_name__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_type_name__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__prog_io_type_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__prog_io_type_name__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_type_name__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__list____Compare____list_1_0(parse_tree__prog_io_type_name__TypeInfo_for_T_78, parse_tree__prog_io_type_name__HeadVar__1_1, parse_tree__prog_io_type_name__V_89_89, parse_tree__prog_io_type_name__V_40_40);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box parse_tree__prog_io_type_name__V_90_90 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__HeadVar__2_2, (MR_Integer) 2));
                MR_Word parse_tree__prog_io_type_name__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) parse_tree__prog_io_type_name__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word parse_tree__prog_io_type_name__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Box parse_tree__prog_io_type_name__V_59_59 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__HeadVar__3_3, (MR_Integer) 2));
                          MR_Word parse_tree__prog_io_type_name__V_60_60;
                          MR_Integer parse_tree__prog_io_type_name__V_93_93 = (MR_Integer) parse_tree__prog_io_type_name__V_91_91;
                          MR_Integer parse_tree__prog_io_type_name__V_94_94 = (MR_Integer) parse_tree__prog_io_type_name__V_58_58;

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_io_type_name__V_60_60, parse_tree__prog_io_type_name__V_93_93, parse_tree__prog_io_type_name__V_94_94);
                          }
                          parse_tree__prog_io_type_name__succeeded = (parse_tree__prog_io_type_name__V_60_60 == (MR_Integer) 0);
                          parse_tree__prog_io_type_name__succeeded = !(parse_tree__prog_io_type_name__succeeded);
                          if (parse_tree__prog_io_type_name__succeeded)
                            *parse_tree__prog_io_type_name__HeadVar__1_1 = parse_tree__prog_io_type_name__V_60_60;
                          else
                            {
                              mercury__builtin__compare_3_p_0(parse_tree__prog_io_type_name__TypeInfo_for_T_78, parse_tree__prog_io_type_name__HeadVar__1_1, parse_tree__prog_io_type_name__V_90_90, parse_tree__prog_io_type_name__V_59_59);
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__prog_io_type_name__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) parse_tree__prog_io_type_name__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *parse_tree__prog_io_type_name__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word parse_tree__prog_io_type_name__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__list____Compare____list_1_0(parse_tree__prog_io_type_name__TypeInfo_for_T_78, parse_tree__prog_io_type_name__HeadVar__1_1, parse_tree__prog_io_type_name__V_86_86, parse_tree__prog_io_type_name__V_75_75);
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
parse_tree__prog_io_type_name____Unify____known_compound_type_kind_1_0(
  MR_Word parse_tree__prog_io_type_name__TypeInfo_for_T_19,
  MR_Word parse_tree__prog_io_type_name__HeadVar__1_1,
  MR_Word parse_tree__prog_io_type_name__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_io_type_name__succeeded;
    MR_Integer parse_tree__prog_io_type_name__CastX_17 = (MR_Integer) parse_tree__prog_io_type_name__HeadVar__1_1;
    MR_Integer parse_tree__prog_io_type_name__CastY_18 = (MR_Integer) parse_tree__prog_io_type_name__HeadVar__2_2;

    parse_tree__prog_io_type_name__succeeded = (parse_tree__prog_io_type_name__CastX_17 == parse_tree__prog_io_type_name__CastY_18);
    if (parse_tree__prog_io_type_name__succeeded)
      parse_tree__prog_io_type_name__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__prog_io_type_name__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__prog_io_type_name__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_io_type_name__V_4_4;

            parse_tree__prog_io_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__prog_io_type_name__succeeded)
              {
                parse_tree__prog_io_type_name__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__prog_io_type_name__succeeded = mercury__list____Unify____list_1_0(parse_tree__prog_io_type_name__TypeInfo_for_T_19, parse_tree__prog_io_type_name__V_3_3, parse_tree__prog_io_type_name__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box parse_tree__prog_io_type_name__V_5_5 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__HeadVar__1_1, (MR_Integer) 0));
            MR_Box parse_tree__prog_io_type_name__V_6_6 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__HeadVar__1_1, (MR_Integer) 1));
            MR_Box parse_tree__prog_io_type_name__V_7_7;
            MR_Box parse_tree__prog_io_type_name__V_8_8;

            parse_tree__prog_io_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_io_type_name__succeeded)
              {
                parse_tree__prog_io_type_name__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__HeadVar__2_2, (MR_Integer) 0));
                parse_tree__prog_io_type_name__V_8_8 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__HeadVar__2_2, (MR_Integer) 1));
                {
                  parse_tree__prog_io_type_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_type_name__TypeInfo_for_T_19, parse_tree__prog_io_type_name__V_5_5, parse_tree__prog_io_type_name__V_7_7);
                }
                if (parse_tree__prog_io_type_name__succeeded)
                  {
                    parse_tree__prog_io_type_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_type_name__TypeInfo_for_T_19, parse_tree__prog_io_type_name__V_6_6, parse_tree__prog_io_type_name__V_8_8);
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__prog_io_type_name__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_type_name__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_io_type_name__V_10_10;

            parse_tree__prog_io_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__prog_io_type_name__succeeded)
              {
                parse_tree__prog_io_type_name__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_type_name__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__prog_io_type_name__succeeded = mercury__list____Unify____list_1_0(parse_tree__prog_io_type_name__TypeInfo_for_T_19, parse_tree__prog_io_type_name__V_9_9, parse_tree__prog_io_type_name__V_10_10);
                }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word parse_tree__prog_io_type_name__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__HeadVar__1_1, (MR_Integer) 1)));
                MR_Box parse_tree__prog_io_type_name__V_12_12 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__HeadVar__1_1, (MR_Integer) 2));
                MR_Word parse_tree__prog_io_type_name__V_13_13;
                MR_Box parse_tree__prog_io_type_name__V_14_14;

                parse_tree__prog_io_type_name__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_type_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (parse_tree__prog_io_type_name__succeeded)
                  {
                    parse_tree__prog_io_type_name__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__prog_io_type_name__V_14_14 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__HeadVar__2_2, (MR_Integer) 2));
                    parse_tree__prog_io_type_name__succeeded = (parse_tree__prog_io_type_name__V_11_11 == parse_tree__prog_io_type_name__V_13_13);
                    if (parse_tree__prog_io_type_name__succeeded)
                      {
                        parse_tree__prog_io_type_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_type_name__TypeInfo_for_T_19, parse_tree__prog_io_type_name__V_12_12, parse_tree__prog_io_type_name__V_14_14);
                      }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__prog_io_type_name__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__prog_io_type_name__V_16_16;

                parse_tree__prog_io_type_name__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_type_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (parse_tree__prog_io_type_name__succeeded)
                  {
                    parse_tree__prog_io_type_name__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      parse_tree__prog_io_type_name__succeeded = mercury__list____Unify____list_1_0(parse_tree__prog_io_type_name__TypeInfo_for_T_19, parse_tree__prog_io_type_name__V_15_15, parse_tree__prog_io_type_name__V_16_16);
                    }
                  }
              }
              break;
          }
          break;
      }
    return parse_tree__prog_io_type_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_type_name__unparse_qualified_term_3_p_0(
  MR_Word parse_tree__prog_io_type_name__HeadVar__1_1,
  MR_Word parse_tree__prog_io_type_name__Args_2,
  MR_Word * parse_tree__prog_io_type_name__Term_3)
{
  {
    MR_bool parse_tree__prog_io_type_name__succeeded;

    if (((MR_tag((MR_Word) parse_tree__prog_io_type_name__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__prog_io_type_name__Qualifier_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__HeadVar__1_1, (MR_Integer) 0)));
        MR_String parse_tree__prog_io_type_name__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__prog_io_type_name__Context_13;
        MR_Word parse_tree__prog_io_type_name__QualTerm_14;
        MR_Word parse_tree__prog_io_type_name__Term0_15;
        MR_Word parse_tree__prog_io_type_name__V_17_17;
        MR_Word parse_tree__prog_io_type_name__V_20_20;
        MR_Word parse_tree__prog_io_type_name__V_21_21;

        {
          parse_tree__prog_io_type_name__Context_13 = mercury__term__context_init_0_f_0();
        }
        {
          parse_tree__prog_io_type_name__unparse_qualified_term_3_p_0(parse_tree__prog_io_type_name__Qualifier_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_type_name__QualTerm_14);
        }
        {
          parse_tree__prog_io_type_name__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_type_name__Name_10));
        }
        {
          parse_tree__prog_io_type_name__Term0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Term0_15, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_17_17));
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Term0_15, 1) = ((MR_Box) (parse_tree__prog_io_type_name__Args_2));
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Term0_15, 2) = ((MR_Box) (parse_tree__prog_io_type_name__Context_13));
        }
        {
          parse_tree__prog_io_type_name__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_type_name__Term0_15));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__prog_io_type_name__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_20_20, 0) = ((MR_Box) (parse_tree__prog_io_type_name__QualTerm_14));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_20_20, 1) = ((MR_Box) (parse_tree__prog_io_type_name__V_21_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__prog_io_type_name__Term_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_type_name_scalar_common_2[7]));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_type_name__V_20_20));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_type_name__Context_13));
        }
      }
    else
      {
        MR_String parse_tree__prog_io_type_name__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_type_name__Context_7;
        MR_Word parse_tree__prog_io_type_name__V_8_8;

        {
          parse_tree__prog_io_type_name__Context_7 = mercury__term__context_init_0_f_0();
        }
        {
          parse_tree__prog_io_type_name__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__V_8_8, 0) = ((MR_Box) (parse_tree__prog_io_type_name__Name_4));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__prog_io_type_name__Term_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_8_8));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_type_name__Args_2));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_type_name__Context_7));
        }
      }
  }
}

static void MR_CALL 
parse_tree__prog_io_type_name__unparse_type_list_2_p_0_1(
  MR_Box parse_tree__prog_io_type_name__closure_arg,
  MR_Box parse_tree__prog_io_type_name__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_type_name__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_io_type_name__closure = parse_tree__prog_io_type_name__closure_arg;
    MR_Word parse_tree__prog_io_type_name__conv0_Term_4;

    {
      parse_tree__prog_io_type_name__unparse_type_2_p_0(((MR_Word) parse_tree__prog_io_type_name__wrapper_arg_1), &parse_tree__prog_io_type_name__conv0_Term_4);
    }
    *parse_tree__prog_io_type_name__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_name__conv0_Term_4));
  }
}

static void MR_CALL 
parse_tree__prog_io_type_name__unparse_type_list_2_p_0(
  MR_Word parse_tree__prog_io_type_name__Types_3,
  MR_Word * parse_tree__prog_io_type_name__Terms_4)
{
  {
    MR_bool parse_tree__prog_io_type_name__succeeded;

    {
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_io_type_name_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_type_name_scalar_common_4[0], parse_tree__prog_io_type_name__Types_3, parse_tree__prog_io_type_name__Terms_4);
    }
  }
}

static void MR_CALL 
parse_tree__prog_io_type_name__parse_types_acc_7_p_0(
  MR_Word parse_tree__prog_io_type_name__HeadVar__1_1,
  MR_Word parse_tree__prog_io_type_name__VarSet_2,
  MR_Word parse_tree__prog_io_type_name__ContextPieces_3,
  MR_Word parse_tree__prog_io_type_name__STATE_VARIABLE_RevTypes_0_4,
  MR_Word * parse_tree__prog_io_type_name__STATE_VARIABLE_RevTypes_5,
  MR_Word parse_tree__prog_io_type_name__STATE_VARIABLE_Specs_0_6,
  MR_Word * parse_tree__prog_io_type_name__STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_io_type_name__succeeded;

        if ((parse_tree__prog_io_type_name__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *parse_tree__prog_io_type_name__STATE_VARIABLE_Specs_7 = parse_tree__prog_io_type_name__STATE_VARIABLE_Specs_0_6;
            *parse_tree__prog_io_type_name__STATE_VARIABLE_RevTypes_5 = parse_tree__prog_io_type_name__STATE_VARIABLE_RevTypes_0_4;
          }
        else
          {
            MR_Word parse_tree__prog_io_type_name__Term_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_io_type_name__Terms_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__prog_io_type_name__TermResult_22;
            MR_Word parse_tree__prog_io_type_name__STATE_VARIABLE_Specs_29_29;
            MR_Word parse_tree__prog_io_type_name__STATE_VARIABLE_RevTypes_30_30;

            {
              parse_tree__prog_io_type_name__parse_type_4_p_0(parse_tree__prog_io_type_name__Term_16, parse_tree__prog_io_type_name__VarSet_2, parse_tree__prog_io_type_name__ContextPieces_3, &parse_tree__prog_io_type_name__TermResult_22);
            }
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_name__TermResult_22)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__prog_io_type_name__TermSpecs_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__TermResult_22, (MR_Integer) 0)));

                {
                  parse_tree__prog_io_type_name__STATE_VARIABLE_Specs_29_29 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_type_name__TermSpecs_24, parse_tree__prog_io_type_name__STATE_VARIABLE_Specs_0_6);
                }
                parse_tree__prog_io_type_name__STATE_VARIABLE_RevTypes_30_30 = parse_tree__prog_io_type_name__STATE_VARIABLE_RevTypes_0_4;
              }
            else
              {
                MR_Word parse_tree__prog_io_type_name__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__TermResult_22, (MR_Integer) 0)));

                {
                  parse_tree__prog_io_type_name__STATE_VARIABLE_RevTypes_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__STATE_VARIABLE_RevTypes_30_30, 0) = ((MR_Box) (parse_tree__prog_io_type_name__Type_23));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__STATE_VARIABLE_RevTypes_30_30, 1) = ((MR_Box) (parse_tree__prog_io_type_name__STATE_VARIABLE_RevTypes_0_4));
                }
                parse_tree__prog_io_type_name__STATE_VARIABLE_Specs_29_29 = parse_tree__prog_io_type_name__STATE_VARIABLE_Specs_0_6;
              }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__prog_io_type_name__HeadVar__1__tmp_copy_1 = parse_tree__prog_io_type_name__Terms_17;
              MR_Word parse_tree__prog_io_type_name__STATE_VARIABLE_RevTypes_0__tmp_copy_4 = parse_tree__prog_io_type_name__STATE_VARIABLE_RevTypes_30_30;
              MR_Word parse_tree__prog_io_type_name__STATE_VARIABLE_Specs_0__tmp_copy_6 = parse_tree__prog_io_type_name__STATE_VARIABLE_Specs_29_29;

              parse_tree__prog_io_type_name__STATE_VARIABLE_Specs_0_6 = parse_tree__prog_io_type_name__STATE_VARIABLE_Specs_0__tmp_copy_6;
              parse_tree__prog_io_type_name__STATE_VARIABLE_RevTypes_0_4 = parse_tree__prog_io_type_name__STATE_VARIABLE_RevTypes_0__tmp_copy_4;
              parse_tree__prog_io_type_name__HeadVar__1_1 = parse_tree__prog_io_type_name__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
parse_tree__prog_io_type_name__ill_formed_type_result_3_f_0(
  MR_Word parse_tree__prog_io_type_name__ContextPieces_5,
  MR_Word parse_tree__prog_io_type_name__VarSet_6,
  MR_Word parse_tree__prog_io_type_name__Term_7)
{
  {
    MR_bool parse_tree__prog_io_type_name__succeeded;
    MR_Word parse_tree__prog_io_type_name__Result_8;
    MR_Word parse_tree__prog_io_type_name__TypeCtorInfo_37_37 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word parse_tree__prog_io_type_name__TypeCtorInfo_38_38;
    MR_String parse_tree__prog_io_type_name__TermStr_9;
    MR_Word parse_tree__prog_io_type_name__Pieces_10;
    MR_Word parse_tree__prog_io_type_name__Spec_11;
    MR_Word parse_tree__prog_io_type_name__V_12_12;
    MR_Word parse_tree__prog_io_type_name__V_13_13;
    MR_Word parse_tree__prog_io_type_name__V_15_15;
    MR_Word parse_tree__prog_io_type_name__V_18_18;
    MR_Word parse_tree__prog_io_type_name__V_19_19;
    MR_Word parse_tree__prog_io_type_name__V_28_28;
    MR_Word parse_tree__prog_io_type_name__V_29_29;
    MR_Word parse_tree__prog_io_type_name__V_30_30;
    MR_Word parse_tree__prog_io_type_name__V_31_31;
    MR_Word parse_tree__prog_io_type_name__V_32_32;
    MR_Word parse_tree__prog_io_type_name__V_35_35;

    {
      parse_tree__prog_io_type_name__TermStr_9 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_type_name__TypeCtorInfo_37_37, parse_tree__prog_io_type_name__VarSet_6, parse_tree__prog_io_type_name__Term_7);
    }
    parse_tree__prog_io_type_name__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      parse_tree__prog_io_type_name__V_12_12 = mercury__cord__list_1_f_0(parse_tree__prog_io_type_name__TypeCtorInfo_38_38, parse_tree__prog_io_type_name__ContextPieces_5);
    }
    {
      parse_tree__prog_io_type_name__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_type_name__TermStr_9));
    }
    {
      parse_tree__prog_io_type_name__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_18_18, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_19_19));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_name_scalar_common_1[3])));
    }
    {
      parse_tree__prog_io_type_name__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_15_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_name_scalar_common_1[4])));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_15_15, 1) = ((MR_Box) (parse_tree__prog_io_type_name__V_18_18));
    }
    {
      parse_tree__prog_io_type_name__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_13_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_13_13, 1) = ((MR_Box) (parse_tree__prog_io_type_name__V_15_15));
    }
    {
      parse_tree__prog_io_type_name__Pieces_10 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_name__TypeCtorInfo_38_38, parse_tree__prog_io_type_name__V_12_12, parse_tree__prog_io_type_name__V_13_13);
    }
    {
      parse_tree__prog_io_type_name__V_30_30 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_name__TypeCtorInfo_37_37, parse_tree__prog_io_type_name__Term_7);
    }
    {
      parse_tree__prog_io_type_name__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_type_name__Pieces_10));
    }
    {
      parse_tree__prog_io_type_name__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_32_32));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__prog_io_type_name__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_30_30));
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_type_name__V_31_31));
    }
    {
      parse_tree__prog_io_type_name__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_29_29));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__prog_io_type_name__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Spec_11, 2) = ((MR_Box) (parse_tree__prog_io_type_name__V_28_28));
    }
    {
      parse_tree__prog_io_type_name__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_type_name__Spec_11));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__prog_io_type_name__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_35_35));
    }
    return parse_tree__prog_io_type_name__Result_8;
  }
}

static void MR_CALL 
parse_tree__prog_io_type_name__parse_compound_type_5_p_0(
  MR_Word parse_tree__prog_io_type_name__Term_6,
  MR_Word parse_tree__prog_io_type_name__VarSet_7,
  MR_Word parse_tree__prog_io_type_name__ContextPieces_8,
  MR_Word parse_tree__prog_io_type_name__CompoundTypeKind_9,
  MR_Word * parse_tree__prog_io_type_name__Result_10)
{
  {
    MR_bool parse_tree__prog_io_type_name__succeeded;

    switch (MR_tag((MR_Word) parse_tree__prog_io_type_name__CompoundTypeKind_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__prog_io_type_name__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__CompoundTypeKind_9, (MR_Integer) 0)));
          MR_Word parse_tree__prog_io_type_name__ArgsResult_12;

          {
            parse_tree__prog_io_type_name__parse_types_4_p_0(parse_tree__prog_io_type_name__Args_11, parse_tree__prog_io_type_name__VarSet_7, parse_tree__prog_io_type_name__ContextPieces_8, &parse_tree__prog_io_type_name__ArgsResult_12);
          }
          if (((MR_tag((MR_Word) parse_tree__prog_io_type_name__ArgsResult_12)) == (MR_mktag((MR_Integer) 0))))
            *parse_tree__prog_io_type_name__Result_10 = (MR_Word) parse_tree__prog_io_type_name__ArgsResult_12;
          else
            {
              MR_Word parse_tree__prog_io_type_name__ArgTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__ArgsResult_12, (MR_Integer) 0)));
              MR_Word parse_tree__prog_io_type_name__V_76_76;

              {
                parse_tree__prog_io_type_name__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_76_76, 1) = ((MR_Box) (parse_tree__prog_io_type_name__ArgTypes_13));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_76_76, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_io_type_name__Result_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_76_76));
              }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__prog_io_type_name__Arg1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__CompoundTypeKind_9, (MR_Integer) 0)));
          MR_Word parse_tree__prog_io_type_name__Arg2_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__CompoundTypeKind_9, (MR_Integer) 1)));
          MR_Word parse_tree__prog_io_type_name__RetType_23;
          MR_Word parse_tree__prog_io_type_name__ArgTypes_81;
          MR_Word parse_tree__prog_io_type_name__FuncArgs_21;
          MR_Word parse_tree__prog_io_type_name__V_41_41;
          MR_String parse_tree__prog_io_type_name__V_42_42;
          MR_Word parse_tree__prog_io_type_name__V_22_22;

          parse_tree__prog_io_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_name__Arg1_19)) == (MR_mktag((MR_Integer) 0)));
          if (parse_tree__prog_io_type_name__succeeded)
            {
              parse_tree__prog_io_type_name__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Arg1_19, (MR_Integer) 0)));
              parse_tree__prog_io_type_name__FuncArgs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Arg1_19, (MR_Integer) 1)));
              parse_tree__prog_io_type_name__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Arg1_19, (MR_Integer) 2)));
              parse_tree__prog_io_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_name__V_41_41)) == (MR_mktag((MR_Integer) 0)));
              if (parse_tree__prog_io_type_name__succeeded)
                {
                  parse_tree__prog_io_type_name__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__V_41_41, (MR_Integer) 0)));
                  parse_tree__prog_io_type_name__succeeded = (strcmp(parse_tree__prog_io_type_name__V_42_42, (MR_String) "func") == 0);
                  if (parse_tree__prog_io_type_name__succeeded)
                    {
                      {
                        parse_tree__prog_io_type_name__succeeded = parse_tree__prog_io_type_name__maybe_parse_types_2_p_0(parse_tree__prog_io_type_name__FuncArgs_21, &parse_tree__prog_io_type_name__ArgTypes_81);
                      }
                      if (parse_tree__prog_io_type_name__succeeded)
                        {
                          parse_tree__prog_io_type_name__succeeded = parse_tree__prog_io_type_name__maybe_parse_type_2_p_0(parse_tree__prog_io_type_name__Arg2_20, &parse_tree__prog_io_type_name__RetType_23);
                        }
                    }
                }
            }
          if (parse_tree__prog_io_type_name__succeeded)
            {
              MR_Word parse_tree__prog_io_type_name__V_43_43;
              MR_Word parse_tree__prog_io_type_name__V_44_44;

              {
                parse_tree__prog_io_type_name__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_type_name__RetType_23));
              }
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
              {
                parse_tree__prog_io_type_name__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_43_43, 1) = ((MR_Box) (parse_tree__prog_io_type_name__ArgTypes_81));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_43_43, 2) = ((MR_Box) (parse_tree__prog_io_type_name__V_44_44));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_43_43, 3) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_43_43, 4) = NULL;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_io_type_name__Result_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_43_43));
              }
            }
          else
            {
              *parse_tree__prog_io_type_name__Result_10 = parse_tree__prog_io_type_name__ill_formed_type_result_3_f_0(parse_tree__prog_io_type_name__ContextPieces_8, parse_tree__prog_io_type_name__VarSet_7, parse_tree__prog_io_type_name__Term_6);
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__prog_io_type_name__Args_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_type_name__CompoundTypeKind_9, (MR_Integer) 0)));
          MR_Word parse_tree__prog_io_type_name__ArgTypes_78;

          {
            parse_tree__prog_io_type_name__succeeded = parse_tree__prog_io_type_name__maybe_parse_types_2_p_0(parse_tree__prog_io_type_name__Args_79, &parse_tree__prog_io_type_name__ArgTypes_78);
          }
          if (parse_tree__prog_io_type_name__succeeded)
            {
              MR_Word parse_tree__prog_io_type_name__V_47_47;

              mercury__private_builtin__dummy_var = (MR_Integer) 0;
              {
                parse_tree__prog_io_type_name__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io_type_name__ArgTypes_78));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_47_47, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_47_47, 3) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_47_47, 4) = NULL;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_io_type_name__Result_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_47_47));
              }
            }
          else
            {
              *parse_tree__prog_io_type_name__Result_10 = parse_tree__prog_io_type_name__ill_formed_type_result_3_f_0(parse_tree__prog_io_type_name__ContextPieces_8, parse_tree__prog_io_type_name__VarSet_7, parse_tree__prog_io_type_name__Term_6);
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__CompoundTypeKind_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__prog_io_type_name__Purity_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__CompoundTypeKind_9, (MR_Integer) 1)));
              MR_Word parse_tree__prog_io_type_name__SubTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__CompoundTypeKind_9, (MR_Integer) 2)));
              MR_Word parse_tree__prog_io_type_name__ResultPrime_29;
              MR_String parse_tree__prog_io_type_name__Name_26;
              MR_Word parse_tree__prog_io_type_name__V_30_30;
              MR_Word parse_tree__prog_io_type_name__Args_94;
              MR_Word parse_tree__prog_io_type_name__V_27_27;

              parse_tree__prog_io_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_name__SubTerm_25)) == (MR_mktag((MR_Integer) 0)));
              if (parse_tree__prog_io_type_name__succeeded)
                {
                  parse_tree__prog_io_type_name__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__SubTerm_25, (MR_Integer) 0)));
                  parse_tree__prog_io_type_name__Args_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__SubTerm_25, (MR_Integer) 1)));
                  parse_tree__prog_io_type_name__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__SubTerm_25, (MR_Integer) 2)));
                  parse_tree__prog_io_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_name__V_30_30)) == (MR_mktag((MR_Integer) 0)));
                  if (parse_tree__prog_io_type_name__succeeded)
                    {
                      parse_tree__prog_io_type_name__Name_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__V_30_30, (MR_Integer) 0)));
                      if ((strcmp(parse_tree__prog_io_type_name__Name_26, (MR_String) "=") == 0))
                        {
                          MR_Word parse_tree__prog_io_type_name__V_34_34;
                          MR_Word parse_tree__prog_io_type_name__V_35_35;
                          MR_Word parse_tree__prog_io_type_name__V_36_36;
                          MR_String parse_tree__prog_io_type_name__V_37_37;
                          MR_Word parse_tree__prog_io_type_name__V_38_38;
                          MR_Word parse_tree__prog_io_type_name__V_39_39;
                          MR_Word parse_tree__prog_io_type_name__ArgTypes_83;
                          MR_Word parse_tree__prog_io_type_name__Arg1_84;
                          MR_Word parse_tree__prog_io_type_name__Arg2_85;
                          MR_Word parse_tree__prog_io_type_name__FuncArgs_86;
                          MR_Word parse_tree__prog_io_type_name__RetType_87;
                          MR_Word parse_tree__prog_io_type_name__V_28_28;

                          parse_tree__prog_io_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_name__Args_94)) == (MR_mktag((MR_Integer) 1)));
                          if (parse_tree__prog_io_type_name__succeeded)
                            {
                              parse_tree__prog_io_type_name__Arg1_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__Args_94, (MR_Integer) 0)));
                              parse_tree__prog_io_type_name__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__Args_94, (MR_Integer) 1)));
                              parse_tree__prog_io_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_name__V_34_34)) == (MR_mktag((MR_Integer) 1)));
                              if (parse_tree__prog_io_type_name__succeeded)
                                {
                                  parse_tree__prog_io_type_name__Arg2_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_34_34, (MR_Integer) 0)));
                                  parse_tree__prog_io_type_name__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_34_34, (MR_Integer) 1)));
                                  parse_tree__prog_io_type_name__succeeded = (parse_tree__prog_io_type_name__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (parse_tree__prog_io_type_name__succeeded)
                                    {
                                      parse_tree__prog_io_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_name__Arg1_84)) == (MR_mktag((MR_Integer) 0)));
                                      if (parse_tree__prog_io_type_name__succeeded)
                                        {
                                          parse_tree__prog_io_type_name__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Arg1_84, (MR_Integer) 0)));
                                          parse_tree__prog_io_type_name__FuncArgs_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Arg1_84, (MR_Integer) 1)));
                                          parse_tree__prog_io_type_name__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Arg1_84, (MR_Integer) 2)));
                                          parse_tree__prog_io_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_name__V_36_36)) == (MR_mktag((MR_Integer) 0)));
                                          if (parse_tree__prog_io_type_name__succeeded)
                                            {
                                              parse_tree__prog_io_type_name__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__V_36_36, (MR_Integer) 0)));
                                              parse_tree__prog_io_type_name__succeeded = (strcmp(parse_tree__prog_io_type_name__V_37_37, (MR_String) "func") == 0);
                                              if (parse_tree__prog_io_type_name__succeeded)
                                                {
                                                  {
                                                    parse_tree__prog_io_type_name__succeeded = parse_tree__prog_io_type_name__maybe_parse_types_2_p_0(parse_tree__prog_io_type_name__FuncArgs_86, &parse_tree__prog_io_type_name__ArgTypes_83);
                                                  }
                                                  if (parse_tree__prog_io_type_name__succeeded)
                                                    {
                                                      {
                                                        parse_tree__prog_io_type_name__succeeded = parse_tree__prog_io_type_name__maybe_parse_type_2_p_0(parse_tree__prog_io_type_name__Arg2_85, &parse_tree__prog_io_type_name__RetType_87);
                                                      }
                                                      if (parse_tree__prog_io_type_name__succeeded)
                                                        {
                                                          mercury__private_builtin__dummy_var = (MR_Integer) 0;
                                                          {
                                                            parse_tree__prog_io_type_name__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_type_name__RetType_87));
                                                          }
                                                          {
                                                            parse_tree__prog_io_type_name__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_38_38, 1) = ((MR_Box) (parse_tree__prog_io_type_name__ArgTypes_83));
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_38_38, 2) = ((MR_Box) (parse_tree__prog_io_type_name__V_39_39));
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_38_38, 3) = ((MR_Box) (parse_tree__prog_io_type_name__Purity_24));
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_38_38, 4) = NULL;
                                                          }
                                                          {
                                                            parse_tree__prog_io_type_name__ResultPrime_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__ResultPrime_29, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_38_38));
                                                          }
                                                          parse_tree__prog_io_type_name__succeeded = MR_TRUE;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                      else
                      if ((strcmp(parse_tree__prog_io_type_name__Name_26, (MR_String) "pred") == 0))
                        {
                          MR_Word parse_tree__prog_io_type_name__V_31_31;
                          MR_Word parse_tree__prog_io_type_name__V_32_32;
                          MR_Word parse_tree__prog_io_type_name__ArgTypes_88;

                          {
                            parse_tree__prog_io_type_name__succeeded = parse_tree__prog_io_type_name__maybe_parse_types_2_p_0(parse_tree__prog_io_type_name__Args_94, &parse_tree__prog_io_type_name__ArgTypes_88);
                          }
                          if (parse_tree__prog_io_type_name__succeeded)
                            {
                              parse_tree__prog_io_type_name__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                              mercury__private_builtin__dummy_var = (MR_Integer) 0;
                              {
                                parse_tree__prog_io_type_name__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_31_31, 1) = ((MR_Box) (parse_tree__prog_io_type_name__ArgTypes_88));
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_31_31, 2) = ((MR_Box) (parse_tree__prog_io_type_name__V_32_32));
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_31_31, 3) = ((MR_Box) (parse_tree__prog_io_type_name__Purity_24));
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_31_31, 4) = NULL;
                              }
                              {
                                parse_tree__prog_io_type_name__ResultPrime_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__ResultPrime_29, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_31_31));
                              }
                              parse_tree__prog_io_type_name__succeeded = MR_TRUE;
                            }
                        }
                      else
                        parse_tree__prog_io_type_name__succeeded = MR_FALSE;
                    }
                }
              if (parse_tree__prog_io_type_name__succeeded)
                *parse_tree__prog_io_type_name__Result_10 = parse_tree__prog_io_type_name__ResultPrime_29;
              else
                {
                  *parse_tree__prog_io_type_name__Result_10 = parse_tree__prog_io_type_name__ill_formed_type_result_3_f_0(parse_tree__prog_io_type_name__ContextPieces_8, parse_tree__prog_io_type_name__VarSet_7, parse_tree__prog_io_type_name__Term_6);
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__prog_io_type_name__TypeCtorInfo_112_112 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
              MR_Word parse_tree__prog_io_type_name__TypeCtorInfo_113_113;
              MR_String parse_tree__prog_io_type_name__TermStr_16;
              MR_Word parse_tree__prog_io_type_name__Pieces_17;
              MR_Word parse_tree__prog_io_type_name__Spec_18;
              MR_Word parse_tree__prog_io_type_name__V_51_51;
              MR_Word parse_tree__prog_io_type_name__V_52_52;
              MR_Word parse_tree__prog_io_type_name__V_54_54;
              MR_Word parse_tree__prog_io_type_name__V_57_57;
              MR_Word parse_tree__prog_io_type_name__V_58_58;
              MR_Word parse_tree__prog_io_type_name__V_67_67;
              MR_Word parse_tree__prog_io_type_name__V_68_68;
              MR_Word parse_tree__prog_io_type_name__V_69_69;
              MR_Word parse_tree__prog_io_type_name__V_70_70;
              MR_Word parse_tree__prog_io_type_name__V_71_71;
              MR_Word parse_tree__prog_io_type_name__V_74_74;

              {
                parse_tree__prog_io_type_name__TermStr_16 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_type_name__TypeCtorInfo_112_112, parse_tree__prog_io_type_name__VarSet_7, parse_tree__prog_io_type_name__Term_6);
              }
              parse_tree__prog_io_type_name__TypeCtorInfo_113_113 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              {
                parse_tree__prog_io_type_name__V_51_51 = mercury__cord__list_1_f_0(parse_tree__prog_io_type_name__TypeCtorInfo_113_113, parse_tree__prog_io_type_name__ContextPieces_8);
              }
              {
                parse_tree__prog_io_type_name__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_type_name__TermStr_16));
              }
              {
                parse_tree__prog_io_type_name__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_58_58));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_name_scalar_common_1[3])));
              }
              {
                parse_tree__prog_io_type_name__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_name_scalar_common_1[4])));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_type_name__V_57_57));
              }
              {
                parse_tree__prog_io_type_name__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_52_52, 1) = ((MR_Box) (parse_tree__prog_io_type_name__V_54_54));
              }
              {
                parse_tree__prog_io_type_name__Pieces_17 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_name__TypeCtorInfo_113_113, parse_tree__prog_io_type_name__V_51_51, parse_tree__prog_io_type_name__V_52_52);
              }
              {
                parse_tree__prog_io_type_name__V_69_69 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_name__TypeCtorInfo_112_112, parse_tree__prog_io_type_name__Term_6);
              }
              {
                parse_tree__prog_io_type_name__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io_type_name__Pieces_17));
              }
              {
                parse_tree__prog_io_type_name__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_71_71));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__prog_io_type_name__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_69_69));
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__V_68_68, 1) = ((MR_Box) (parse_tree__prog_io_type_name__V_70_70));
              }
              {
                parse_tree__prog_io_type_name__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_68_68));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__prog_io_type_name__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Spec_18, 2) = ((MR_Box) (parse_tree__prog_io_type_name__V_67_67));
              }
              {
                parse_tree__prog_io_type_name__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io_type_name__Spec_18));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_io_type_name__Result_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_74_74));
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__prog_io_type_name__unparse_type_2_p_0(
  MR_Word parse_tree__prog_io_type_name__Type_3,
  MR_Word * parse_tree__prog_io_type_name__Term_4)
{
  {
    MR_bool parse_tree__prog_io_type_name__succeeded;
    MR_Word parse_tree__prog_io_type_name__Context_5;

    {
      parse_tree__prog_io_type_name__Context_5 = mercury__term__context_init_0_f_0();
    }
    switch (MR_tag((MR_Word) parse_tree__prog_io_type_name__Type_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__prog_io_type_name__TVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Type_3, (MR_Integer) 0)));
          MR_Word parse_tree__prog_io_type_name__Var_8;
          MR_Word parse_tree__prog_io_type_name__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Type_3, (MR_Integer) 1)));

          {
            parse_tree__prog_io_type_name__Var_8 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_name__TVar_6);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__prog_io_type_name__Term_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_name__Var_8));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_type_name__Context_5));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__prog_io_type_name__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__Type_3, (MR_Integer) 0)));
          MR_Word parse_tree__prog_io_type_name__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__Type_3, (MR_Integer) 1)));
          MR_Word parse_tree__prog_io_type_name__ArgTerms_12;
          MR_Word parse_tree__prog_io_type_name__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__Type_3, (MR_Integer) 2)));

          {
            parse_tree__prog_io_type_name__unparse_type_list_2_p_0(parse_tree__prog_io_type_name__Args_10, &parse_tree__prog_io_type_name__ArgTerms_12);
          }
          {
            parse_tree__prog_io_type_name__unparse_qualified_term_3_p_0(parse_tree__prog_io_type_name__SymName_9, parse_tree__prog_io_type_name__ArgTerms_12, parse_tree__prog_io_type_name__Term_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__prog_io_type_name__BuiltinType_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_type_name__Type_3, (MR_Integer) 0)));
          MR_String parse_tree__prog_io_type_name__Name_14;
          MR_Word parse_tree__prog_io_type_name__V_45_45;

          {
            parse_tree__prog_out__builtin_type_to_string_2_p_0(parse_tree__prog_io_type_name__BuiltinType_13, &parse_tree__prog_io_type_name__Name_14);
          }
          {
            parse_tree__prog_io_type_name__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_type_name__Name_14));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__prog_io_type_name__Term_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_45_45));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_type_name__Context_5));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__Type_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__prog_io_type_name__Args_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__Type_3, (MR_Integer) 1)));
              MR_Word parse_tree__prog_io_type_name__ArgTerms_51;
              MR_Word parse_tree__prog_io_type_name__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__Type_3, (MR_Integer) 2)));

              {
                parse_tree__prog_io_type_name__unparse_type_list_2_p_0(parse_tree__prog_io_type_name__Args_50, &parse_tree__prog_io_type_name__ArgTerms_51);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_io_type_name__Term_4 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_type_name_scalar_common_2[6]));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_type_name__ArgTerms_51));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_type_name__Context_5));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__prog_io_type_name__MaybeRet_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__Type_3, (MR_Integer) 2)));
              MR_Word parse_tree__prog_io_type_name__Purity_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__Type_3, (MR_Integer) 3)));
              MR_Word parse_tree__prog_io_type_name__Term2_22;
              MR_Word parse_tree__prog_io_type_name__Args_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__Type_3, (MR_Integer) 1)));
              MR_Word parse_tree__prog_io_type_name__ArgTerms_49;

              {
                parse_tree__prog_io_type_name__unparse_type_list_2_p_0(parse_tree__prog_io_type_name__Args_48, &parse_tree__prog_io_type_name__ArgTerms_49);
              }
              if ((parse_tree__prog_io_type_name__MaybeRet_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    parse_tree__prog_io_type_name__Term2_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Term2_22, 0) = ((MR_Box) (&parse_tree__prog_io_type_name_scalar_common_2[1]));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Term2_22, 1) = ((MR_Box) (parse_tree__prog_io_type_name__ArgTerms_49));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Term2_22, 2) = ((MR_Box) (parse_tree__prog_io_type_name__Context_5));
                  }
                }
              else
                {
                  MR_Word parse_tree__prog_io_type_name__Ret_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__MaybeRet_15, (MR_Integer) 0)));
                  MR_Word parse_tree__prog_io_type_name__Term1_20;
                  MR_Word parse_tree__prog_io_type_name__RetTerm_21;
                  MR_Word parse_tree__prog_io_type_name__V_42_42;
                  MR_Word parse_tree__prog_io_type_name__V_43_43;

                  {
                    parse_tree__prog_io_type_name__Term1_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Term1_20, 0) = ((MR_Box) (&parse_tree__prog_io_type_name_scalar_common_2[2]));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Term1_20, 1) = ((MR_Box) (parse_tree__prog_io_type_name__ArgTerms_49));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Term1_20, 2) = ((MR_Box) (parse_tree__prog_io_type_name__Context_5));
                  }
                  {
                    parse_tree__prog_io_type_name__unparse_type_2_p_0(parse_tree__prog_io_type_name__Ret_18, &parse_tree__prog_io_type_name__RetTerm_21);
                  }
                  {
                    parse_tree__prog_io_type_name__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_type_name__RetTerm_21));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__prog_io_type_name__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_type_name__Term1_20));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io_type_name__V_43_43));
                  }
                  {
                    parse_tree__prog_io_type_name__Term2_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Term2_22, 0) = ((MR_Box) (&parse_tree__prog_io_type_name_scalar_common_2[3]));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Term2_22, 1) = ((MR_Box) (parse_tree__prog_io_type_name__V_42_42));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Term2_22, 2) = ((MR_Box) (parse_tree__prog_io_type_name__Context_5));
                  }
                }
              switch (parse_tree__prog_io_type_name__Purity_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  {
                    MR_Word parse_tree__prog_io_type_name__Context_72;
                    MR_Word parse_tree__prog_io_type_name__V_75_75;

                    {
                      parse_tree__prog_io_type_name__Context_72 = mercury__term__context_init_0_f_0();
                    }
                    {
                      parse_tree__prog_io_type_name__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_type_name__Term2_22));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      *parse_tree__prog_io_type_name__Term_4 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_type_name_scalar_common_2[4]));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_type_name__V_75_75));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_type_name__Context_72));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  *parse_tree__prog_io_type_name__Term_4 = parse_tree__prog_io_type_name__Term2_22;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word parse_tree__prog_io_type_name__Context_65;
                    MR_Word parse_tree__prog_io_type_name__V_68_68;

                    {
                      parse_tree__prog_io_type_name__Context_65 = mercury__term__context_init_0_f_0();
                    }
                    {
                      parse_tree__prog_io_type_name__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_type_name__Term2_22));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      *parse_tree__prog_io_type_name__Term_4 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_type_name_scalar_common_2[5]));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_type_name__V_68_68));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_type_name__Context_65));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__prog_io_type_name__V_32_32;
              MR_Word parse_tree__prog_io_type_name__V_33_33;
              MR_Word parse_tree__prog_io_type_name__TVar_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__Type_3, (MR_Integer) 1)));
              MR_Word parse_tree__prog_io_type_name__Var_53;
              MR_Word parse_tree__prog_io_type_name__Args_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__Type_3, (MR_Integer) 2)));
              MR_Word parse_tree__prog_io_type_name__ArgTerms_55;
              MR_Word parse_tree__prog_io_type_name__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_name__Type_3, (MR_Integer) 3)));

              {
                parse_tree__prog_io_type_name__Var_53 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_name__TVar_52);
              }
              {
                parse_tree__prog_io_type_name__unparse_type_list_2_p_0(parse_tree__prog_io_type_name__Args_54, &parse_tree__prog_io_type_name__ArgTerms_55);
              }
              {
                parse_tree__prog_io_type_name__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_type_name__Var_53));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_type_name__Context_5));
              }
              {
                parse_tree__prog_io_type_name__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_33_33));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_32_32, 1) = ((MR_Box) (parse_tree__prog_io_type_name__ArgTerms_55));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_io_type_name__Term_4 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_type_name_scalar_common_2[0]));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_type_name__V_32_32));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_type_name__Context_5));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io_type_name", (MR_String) "predicate \140parse_tree.prog_io_type_name.unparse_type\'/2", (MR_String) "kind annotation");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_type_name__is_known_type_name_1_p_0(
  MR_String parse_tree__prog_io_type_name__Name_2)
{
  {
    MR_bool parse_tree__prog_io_type_name__succeeded;

    {
      MR_Word parse_tree__prog_io_type_name__V_3_3;

      {
        parse_tree__prog_io_type_name__succeeded = parse_tree__prog_io_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_type_name__Name_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_type_name__V_3_3);
      }
    }
    if (!(parse_tree__prog_io_type_name__succeeded))
      parse_tree__prog_io_type_name__succeeded = (strcmp(parse_tree__prog_io_type_name__Name_2, (MR_String) "func") == 0);
    return parse_tree__prog_io_type_name__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_io_type_name__parse_types_4_p_0(
  MR_Word parse_tree__prog_io_type_name__Terms_5,
  MR_Word parse_tree__prog_io_type_name__VarSet_6,
  MR_Word parse_tree__prog_io_type_name__ContextPieces_7,
  MR_Word * parse_tree__prog_io_type_name__Result_8)
{
  {
    MR_bool parse_tree__prog_io_type_name__succeeded;
    MR_Word parse_tree__prog_io_type_name__RevTypes_9;
    MR_Word parse_tree__prog_io_type_name__Specs_10;

    {
      parse_tree__prog_io_type_name__parse_types_acc_7_p_0(parse_tree__prog_io_type_name__Terms_5, parse_tree__prog_io_type_name__VarSet_6, parse_tree__prog_io_type_name__ContextPieces_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_type_name__RevTypes_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_type_name__Specs_10);
    }
    if ((parse_tree__prog_io_type_name__Specs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word parse_tree__prog_io_type_name__V_15_15;

        {
          parse_tree__prog_io_type_name__V_15_15 = mercury__list__reverse_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_io_type_name__RevTypes_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_io_type_name__Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_15_15));
        }
      }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *parse_tree__prog_io_type_name__Result_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_name__Specs_10));
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_type_name__maybe_parse_types_2_p_0(
  MR_Word parse_tree__prog_io_type_name__Term_3,
  MR_Word * parse_tree__prog_io_type_name__Types_4)
{
  {
    MR_bool parse_tree__prog_io_type_name__succeeded;
    MR_Word parse_tree__prog_io_type_name__VarSet_5;
    MR_Word parse_tree__prog_io_type_name__ContextPieces_6;
    MR_Word parse_tree__prog_io_type_name__V_7_7;

    {
      parse_tree__prog_io_type_name__VarSet_5 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
    {
      parse_tree__prog_io_type_name__ContextPieces_6 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
    }
    {
      parse_tree__prog_io_type_name__parse_types_4_p_0(parse_tree__prog_io_type_name__Term_3, parse_tree__prog_io_type_name__VarSet_5, parse_tree__prog_io_type_name__ContextPieces_6, &parse_tree__prog_io_type_name__V_7_7);
    }
    parse_tree__prog_io_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_name__V_7_7)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__prog_io_type_name__succeeded)
      *parse_tree__prog_io_type_name__Types_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_7_7, (MR_Integer) 0)));
    return parse_tree__prog_io_type_name__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_io_type_name__parse_type_4_p_0(
  MR_Word parse_tree__prog_io_type_name__Term_5,
  MR_Word parse_tree__prog_io_type_name__VarSet_6,
  MR_Word parse_tree__prog_io_type_name__ContextPieces_7,
  MR_Word * parse_tree__prog_io_type_name__Result_8)
{
  {
    MR_bool parse_tree__prog_io_type_name__succeeded;

    if (((MR_tag((MR_Word) parse_tree__prog_io_type_name__Term_5)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__prog_io_type_name__Functor_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Term_5, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_type_name__ArgTerms_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Term_5, (MR_Integer) 1)));
        MR_Word parse_tree__prog_io_type_name__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Term_5, (MR_Integer) 2)));

        switch (MR_tag((MR_Word) parse_tree__prog_io_type_name__Functor_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String parse_tree__prog_io_type_name__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__Functor_12, (MR_Integer) 0)));
              MR_Word parse_tree__prog_io_type_name__KnownTypeKind_22;

              {
                parse_tree__prog_io_type_name__succeeded = parse_tree__prog_io_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_type_name__Name_21, parse_tree__prog_io_type_name__ArgTerms_13, &parse_tree__prog_io_type_name__KnownTypeKind_22);
              }
              if (parse_tree__prog_io_type_name__succeeded)
                switch (MR_tag((MR_Word) parse_tree__prog_io_type_name__KnownTypeKind_22)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      *parse_tree__prog_io_type_name__Result_8 = parse_tree__prog_io_type_name__ill_formed_type_result_3_f_0(parse_tree__prog_io_type_name__ContextPieces_7, parse_tree__prog_io_type_name__VarSet_6, parse_tree__prog_io_type_name__Term_5);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word parse_tree__prog_io_type_name__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__KnownTypeKind_22, (MR_Integer) 0)));

                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__prog_io_type_name__Result_8 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_name__Type_23));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word parse_tree__prog_io_type_name__CompoundTypeKind_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_type_name__KnownTypeKind_22, (MR_Integer) 0)));

                      {
                        parse_tree__prog_io_type_name__parse_compound_type_5_p_0(parse_tree__prog_io_type_name__Term_5, parse_tree__prog_io_type_name__VarSet_6, parse_tree__prog_io_type_name__ContextPieces_7, parse_tree__prog_io_type_name__CompoundTypeKind_24, parse_tree__prog_io_type_name__Result_8);
                      }
                    }
                    break;
                }
              else
                {
                  MR_Word parse_tree__prog_io_type_name__NameResult_25;

                  {
                    parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_name__Term_5, parse_tree__prog_io_type_name__VarSet_6, parse_tree__prog_io_type_name__ContextPieces_7, &parse_tree__prog_io_type_name__NameResult_25);
                  }
                  if (((MR_tag((MR_Word) parse_tree__prog_io_type_name__NameResult_25)) == (MR_mktag((MR_Integer) 0))))
                    {
                      MR_Word parse_tree__prog_io_type_name__Specs_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__NameResult_25, (MR_Integer) 0)));

                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *parse_tree__prog_io_type_name__Result_8 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_name__Specs_35));
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__prog_io_type_name__SymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__NameResult_25, (MR_Integer) 0)));
                      MR_Word parse_tree__prog_io_type_name__SymNameArgTerms_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__NameResult_25, (MR_Integer) 1)));
                      MR_Word parse_tree__prog_io_type_name__SymNameArgsResult_28;

                      {
                        parse_tree__prog_io_type_name__parse_types_4_p_0(parse_tree__prog_io_type_name__SymNameArgTerms_27, parse_tree__prog_io_type_name__VarSet_6, parse_tree__prog_io_type_name__ContextPieces_7, &parse_tree__prog_io_type_name__SymNameArgsResult_28);
                      }
                      if (((MR_tag((MR_Word) parse_tree__prog_io_type_name__SymNameArgsResult_28)) == (MR_mktag((MR_Integer) 0))))
                        *parse_tree__prog_io_type_name__Result_8 = (MR_Word) parse_tree__prog_io_type_name__SymNameArgsResult_28;
                      else
                        {
                          MR_Word parse_tree__prog_io_type_name__ArgTypes_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__SymNameArgsResult_28, (MR_Integer) 0)));
                          MR_Word parse_tree__prog_io_type_name__V_31_31;

                          {
                            parse_tree__prog_io_type_name__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_type_name__SymName_26));
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_31_31, 1) = ((MR_Box) (parse_tree__prog_io_type_name__ArgTypes_29));
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_31_31, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *parse_tree__prog_io_type_name__Result_8 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_31_31));
                          }
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              *parse_tree__prog_io_type_name__Result_8 = parse_tree__prog_io_type_name__ill_formed_type_result_3_f_0(parse_tree__prog_io_type_name__ContextPieces_7, parse_tree__prog_io_type_name__VarSet_6, parse_tree__prog_io_type_name__Term_5);
            }
            break;
          case (MR_Integer) 3:
            {
              *parse_tree__prog_io_type_name__Result_8 = parse_tree__prog_io_type_name__ill_formed_type_result_3_f_0(parse_tree__prog_io_type_name__ContextPieces_7, parse_tree__prog_io_type_name__VarSet_6, parse_tree__prog_io_type_name__Term_5);
            }
            break;
        }
      }
    else
      {
        MR_Word parse_tree__prog_io_type_name__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__Term_5, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_type_name__Var_11;
        MR_Word parse_tree__prog_io_type_name__V_33_33;
        MR_Word parse_tree__prog_io_type_name__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__Term_5, (MR_Integer) 1)));

        {
          mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_name__Var0_9, &parse_tree__prog_io_type_name__Var_11);
        }
        {
          parse_tree__prog_io_type_name__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_type_name__Var_11));
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_name__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_io_type_name__Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_name__V_33_33));
        }
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_type_name__maybe_parse_type_2_p_0(
  MR_Word parse_tree__prog_io_type_name__Term_3,
  MR_Word * parse_tree__prog_io_type_name__Type_4)
{
  {
    MR_bool parse_tree__prog_io_type_name__succeeded;
    MR_Word parse_tree__prog_io_type_name__VarSet_5;
    MR_Word parse_tree__prog_io_type_name__ContextPieces_6;
    MR_Word parse_tree__prog_io_type_name__V_7_7;

    {
      parse_tree__prog_io_type_name__VarSet_5 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
    {
      parse_tree__prog_io_type_name__ContextPieces_6 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
    }
    {
      parse_tree__prog_io_type_name__parse_type_4_p_0(parse_tree__prog_io_type_name__Term_3, parse_tree__prog_io_type_name__VarSet_5, parse_tree__prog_io_type_name__ContextPieces_6, &parse_tree__prog_io_type_name__V_7_7);
    }
    parse_tree__prog_io_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_name__V_7_7)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__prog_io_type_name__succeeded)
      *parse_tree__prog_io_type_name__Type_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_name__V_7_7, (MR_Integer) 0)));
    return parse_tree__prog_io_type_name__succeeded;
  }
}

void mercury__parse_tree__prog_io_type_name__init(void)
{
}

void mercury__parse_tree__prog_io_type_name__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__type_ctor_info_known_compound_type_kind_1);
	MR_register_type_ctor_info(&parse_tree__prog_io_type_name__parse_tree__prog_io_type_name__type_ctor_info_known_type_kind_1);
}

void mercury__parse_tree__prog_io_type_name__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io_type_name. */
