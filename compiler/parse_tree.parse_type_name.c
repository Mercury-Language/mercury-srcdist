/*
** Automatically generated from `parse_type_name.m'
** by the Mercury compiler,
** version DEV
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


/* :- module parse_tree.parse_type_name. */
/* :- implementation. */

/*
INIT mercury__parse_tree__parse_type_name__init
ENDINIT
*/

#include "parse_tree.parse_type_name.mih"


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
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_allow_ho_inst_info_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_allow_ho_inst_info_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__enum_value_ordered_allow_ho_inst_info_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__enum_name_ordered_allow_ho_inst_info_0[2];

static const MR_Integer parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_allow_ho_inst_info_0[2];

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_name__list__pti_list_1__pseudo_1;

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_0[1];

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_0;

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_1[2];

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_1;

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_2[1];

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_2;

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_3[2];

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_3;

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_4[2];

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_4;

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_5[1];

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_5;

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_2[1];

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_3[3];

static const MR_DuPtagLayout parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_known_compound_type_kind_1[4];

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_known_compound_type_kind_1[6];

static const MR_Integer parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_known_compound_type_kind_1[6];

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_type_kind_1_0[1];

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_name__parse_tree__parse_type_name__pti_known_compound_type_kind_1__pseudo_1;

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_type_kind_1_1[1];

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_1;

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_2;

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_2[1];

static const MR_DuPtagLayout parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_known_type_kind_1[3];

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_known_type_kind_1[3];

static const MR_Integer parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_known_type_kind_1[3];

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____allow_ho_inst_info_0_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_type_name____Compare____allow_ho_inst_info_0_0_10001(
  MR_Box * parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____known_compound_type_kind_1_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_compound_type_kind_1_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3,
  MR_Box parse_tree__parse_type_name__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____known_type_kind_1_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_type_kind_1_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3,
  MR_Box parse_tree__parse_type_name__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
  MR_String parse_tree__parse_type_name__Name_4,
  MR_Word parse_tree__parse_type_name__Args_5,
  MR_Word * parse_tree__parse_type_name__KnownType_6);

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_type_kind_1_0(
  MR_Word parse_tree__parse_type_name__TypeInfo_for_T_18,
  MR_Word * parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2,
  MR_Word parse_tree__parse_type_name__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____known_type_kind_1_0(
  MR_Word parse_tree__parse_type_name__TypeInfo_for_T_11,
  MR_Word parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_compound_type_kind_1_0(
  MR_Word parse_tree__parse_type_name__TypeInfo_for_T_117,
  MR_Word * parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2,
  MR_Word parse_tree__parse_type_name__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____known_compound_type_kind_1_0(
  MR_Word parse_tree__parse_type_name__TypeInfo_for_T_23,
  MR_Word parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_type_name__parse_types_acc_8_p_0(
  MR_Word parse_tree__parse_type_name__AllowHOInstInfo_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2,
  MR_Word parse_tree__parse_type_name__VarSet_3,
  MR_Word parse_tree__parse_type_name__ContextPieces_4,
  MR_Word parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_0_5,
  MR_Word * parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_6,
  MR_Word parse_tree__parse_type_name__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__parse_type_name__STATE_VARIABLE_Specs_8);

static MR_Word MR_CALL 
parse_tree__parse_type_name__ill_formed_type_result_3_f_0(
  MR_Word parse_tree__parse_type_name__ContextPieces_5,
  MR_Word parse_tree__parse_type_name__VarSet_6,
  MR_Word parse_tree__parse_type_name__Term_7);

static MR_bool MR_CALL 
parse_tree__parse_type_name__maybe_parse_type_and_mode_3_p_0(
  MR_Word parse_tree__parse_type_name__Term_4,
  MR_Word * parse_tree__parse_type_name__Type_5,
  MR_Word * parse_tree__parse_type_name__Mode_6);

static MR_bool MR_CALL 
parse_tree__parse_type_name__maybe_parse_types_and_modes_acc_5_p_0(
  MR_Word parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2,
  MR_Word * parse_tree__parse_type_name__HeadVar__3_3,
  MR_Word parse_tree__parse_type_name__HeadVar__4_4,
  MR_Word * parse_tree__parse_type_name__HeadVar__5_5);

static MR_bool MR_CALL 
parse_tree__parse_type_name__maybe_parse_types_and_modes_3_p_0(
  MR_Word parse_tree__parse_type_name__ArgTerms_4,
  MR_Word * parse_tree__parse_type_name__ArgTypes_5,
  MR_Word * parse_tree__parse_type_name__ArgModes_6);

static MR_bool MR_CALL 
parse_tree__parse_type_name__maybe_parse_ho_type_and_inst_4_p_0(
  MR_Word parse_tree__parse_type_name__Arg1_5,
  MR_Word parse_tree__parse_type_name__Arg2_6,
  MR_Word parse_tree__parse_type_name__Purity_7,
  MR_Word * parse_tree__parse_type_name__Type_8);

static void MR_CALL 
parse_tree__parse_type_name__parse_compound_type_6_p_0(
  MR_Word parse_tree__parse_type_name__AllowHOInstInfo_7,
  MR_Word parse_tree__parse_type_name__Term_8,
  MR_Word parse_tree__parse_type_name__VarSet_9,
  MR_Word parse_tree__parse_type_name__ContextPieces_10,
  MR_Word parse_tree__parse_type_name__CompoundTypeKind_11,
  MR_Word * parse_tree__parse_type_name__Result_12);


static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_1[5][2];

static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_2[8][1];


/* sealed */ struct parse_tree__parse_type_name__vector_common_type_3_0_s {
  const MR_String parse_tree__parse_type_name__vector_common_type_3_0__vct_3_f_0;
  const MR_Integer parse_tree__parse_type_name__vector_common_type_3_0__vct_3_f_1;
};

static /* final */ const struct parse_tree__parse_type_name__vector_common_type_3_0_s parse_tree__parse_type_name_vector_common_3[32];



static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_1[5][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: ill-formed type"))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_2[8][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_2[0])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_2[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_2[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_2[6])))
  },
};


static /* final */ const struct parse_tree__parse_type_name__vector_common_type_3_0_s parse_tree__parse_type_name_vector_common_3[32] = {
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
    (MR_String) "is",
    (MR_Integer) -1
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



static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_allow_ho_inst_info_0_0 = {
  (MR_String) "allow_ho_inst_info",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_allow_ho_inst_info_0_1 = {
  (MR_String) "no_allow_ho_inst_info",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__enum_value_ordered_allow_ho_inst_info_0[2] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_allow_ho_inst_info_0_0,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_allow_ho_inst_info_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__enum_name_ordered_allow_ho_inst_info_0[2] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_allow_ho_inst_info_0_0,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_allow_ho_inst_info_0_1
};

static const MR_Integer parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_allow_ho_inst_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_allow_ho_inst_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_type_name____Unify____allow_ho_inst_info_0_0_10001)),
  ((MR_Box) (parse_tree__parse_type_name____Compare____allow_ho_inst_info_0_0_10001)),
  (MR_String) "parse_tree.parse_type_name",
  (MR_String) "allow_ho_inst_info",
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__enum_name_ordered_allow_ho_inst_info_0 },
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__enum_value_ordered_allow_ho_inst_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_allow_ho_inst_info_0
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_name__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_type_name__list__pti_list_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_0 = {
  (MR_String) "kctk_tuple",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_1 = {
  (MR_String) "kctk_pure_func",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_type_name__list__pti_list_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_2 = {
  (MR_String) "kctk_pure_pred",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_3[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_3 = {
  (MR_String) "kctk_is",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_4[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_4 = {
  (MR_String) "kctk_purity",
  (MR_Integer) 2,
  (MR_Integer) 2,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_4,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_5[1] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_type_name__list__pti_list_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_5 = {
  (MR_String) "kctk_apply",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_5,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_0[1] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_1[1] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_1
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_2[1] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_2
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_3[3] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_3,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_4,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_5
};

static const MR_DuPtagLayout parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_known_compound_type_kind_1[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_2
  },
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_3
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_known_compound_type_kind_1[6] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_5,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_3,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_1,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_2,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_4,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_0
};

static const MR_Integer parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_known_compound_type_kind_1[6] = {
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_known_compound_type_kind_1 = {
  (MR_Integer) 1,
  (MR_Integer) 16,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_type_name____Unify____known_compound_type_kind_1_0_10001)),
  ((MR_Box) (parse_tree__parse_type_name____Compare____known_compound_type_kind_1_0_10001)),
  (MR_String) "parse_tree.parse_type_name",
  (MR_String) "known_compound_type_kind",
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_known_compound_type_kind_1 },
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_known_compound_type_kind_1 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_known_compound_type_kind_1
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_type_kind_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_0 = {
  (MR_String) "known_type_simple",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_type_kind_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_name__parse_tree__parse_type_name__pti_known_compound_type_kind_1__pseudo_1 = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_known_compound_type_kind_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_type_kind_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_type_name__parse_tree__parse_type_name__pti_known_compound_type_kind_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_1 = {
  (MR_String) "known_type_compound",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_type_kind_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_2 = {
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_0[1] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_2
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_1[1] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_2[1] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_1
};

static const MR_DuPtagLayout parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_known_type_kind_1[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_2
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_known_type_kind_1[3] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_2,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_1,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_0
};

static const MR_Integer parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_known_type_kind_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_known_type_kind_1 = {
  (MR_Integer) 1,
  (MR_Integer) 16,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_type_name____Unify____known_type_kind_1_0_10001)),
  ((MR_Box) (parse_tree__parse_type_name____Compare____known_type_kind_1_0_10001)),
  (MR_String) "parse_tree.parse_type_name",
  (MR_String) "known_type_kind",
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_known_type_kind_1 },
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_known_type_kind_1 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_known_type_kind_1
};

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____allow_ho_inst_info_0_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;

    {
      parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name____Unify____allow_ho_inst_info_0_0(((MR_Word) parse_tree__parse_type_name__wrapper_arg_1), ((MR_Word) parse_tree__parse_type_name__wrapper_arg_2));
    }
    return parse_tree__parse_type_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____allow_ho_inst_info_0_0_10001(
  MR_Box * parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_type_name__conv0_HeadVar__1_1;

    {
      parse_tree__parse_type_name____Compare____allow_ho_inst_info_0_0(&parse_tree__parse_type_name__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_type_name__wrapper_arg_2), ((MR_Word) parse_tree__parse_type_name__wrapper_arg_3));
    }
    *parse_tree__parse_type_name__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_type_name__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____known_compound_type_kind_1_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;

    {
      parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name____Unify____known_compound_type_kind_1_0(((MR_Word) parse_tree__parse_type_name__wrapper_arg_1), ((MR_Word) parse_tree__parse_type_name__wrapper_arg_2), ((MR_Word) parse_tree__parse_type_name__wrapper_arg_3));
    }
    return parse_tree__parse_type_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_compound_type_kind_1_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3,
  MR_Box parse_tree__parse_type_name__wrapper_arg_4)
{
  {
    MR_Word parse_tree__parse_type_name__conv0_HeadVar__1_1;

    {
      parse_tree__parse_type_name____Compare____known_compound_type_kind_1_0(((MR_Word) parse_tree__parse_type_name__wrapper_arg_1), &parse_tree__parse_type_name__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_type_name__wrapper_arg_3), ((MR_Word) parse_tree__parse_type_name__wrapper_arg_4));
    }
    *parse_tree__parse_type_name__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_name__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____known_type_kind_1_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;

    {
      parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name____Unify____known_type_kind_1_0(((MR_Word) parse_tree__parse_type_name__wrapper_arg_1), ((MR_Word) parse_tree__parse_type_name__wrapper_arg_2), ((MR_Word) parse_tree__parse_type_name__wrapper_arg_3));
    }
    return parse_tree__parse_type_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_type_kind_1_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3,
  MR_Box parse_tree__parse_type_name__wrapper_arg_4)
{
  {
    MR_Word parse_tree__parse_type_name__conv0_HeadVar__1_1;

    {
      parse_tree__parse_type_name____Compare____known_type_kind_1_0(((MR_Word) parse_tree__parse_type_name__wrapper_arg_1), &parse_tree__parse_type_name__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_type_name__wrapper_arg_3), ((MR_Word) parse_tree__parse_type_name__wrapper_arg_4));
    }
    *parse_tree__parse_type_name__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_name__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
  MR_String parse_tree__parse_type_name__Name_4,
  MR_Word parse_tree__parse_type_name__Args_5,
  MR_Word * parse_tree__parse_type_name__KnownType_6)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Integer parse_tree__parse_type_name__slot_0;
    MR_String parse_tree__parse_type_name__str_1;

    /* hashed string jump switch */
    /* compute the hash value of the input string */
    parse_tree__parse_type_name__slot_0 = ((MR_hash_string6(parse_tree__parse_type_name__Name_4)) & (MR_Integer) 31);
    /* hash chain loop */
    do
      {
        /* lookup the string for this hash slot */
        parse_tree__parse_type_name__str_1 = ((&parse_tree__parse_type_name_vector_common_3[0 + parse_tree__parse_type_name__slot_0]))->parse_tree__parse_type_name__vector_common_type_3_0__vct_3_f_0;
        /* did we find a match? */
        if ((((parse_tree__parse_type_name__str_1 != NULL)) && ((strcmp(parse_tree__parse_type_name__str_1, parse_tree__parse_type_name__Name_4) == 0))))
          {
            /* we found a match; dispatch to the corresponding code */
            switch (parse_tree__parse_type_name__slot_0) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* case "" */
                  {
                    MR_Word parse_tree__parse_type_name__V_26_26;

                    {
                      parse_tree__parse_type_name__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_26_26, 1) = ((MR_Box) (parse_tree__parse_type_name__Args_5));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__parse_type_name__KnownType_6 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_26_26));
                    }
                    parse_tree__parse_type_name__succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  /* case "string" */
                  if ((parse_tree__parse_type_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_2[7]);
                    }
                  else
                    *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  parse_tree__parse_type_name__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  /* case "semipure" */
                  if ((parse_tree__parse_type_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  else
                    {
                      MR_Word parse_tree__parse_type_name__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_5, (MR_Integer) 1)));
                      MR_Box parse_tree__parse_type_name__V_164_164 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_5, (MR_Integer) 0));

                      if ((parse_tree__parse_type_name__V_163_163 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Word parse_tree__parse_type_name__V_112_112;

                          {
                            parse_tree__parse_type_name__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_112_112, 1) = ((MR_Box) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_112_112, 2) = parse_tree__parse_type_name__V_164_164;
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *parse_tree__parse_type_name__KnownType_6 = base;
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_112_112));
                          }
                        }
                      else
                        *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  parse_tree__parse_type_name__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  /* case "float" */
                  if ((parse_tree__parse_type_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_2[3]);
                    }
                  else
                    *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  parse_tree__parse_type_name__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 4:
                {
                  /* case "character" */
                  if ((parse_tree__parse_type_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_2[1]);
                    }
                  else
                    *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  parse_tree__parse_type_name__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 5:
                {
                  /* case "impure" */
                  if ((parse_tree__parse_type_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  else
                    {
                      MR_Word parse_tree__parse_type_name__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_5, (MR_Integer) 1)));
                      MR_Box parse_tree__parse_type_name__V_158_158 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_5, (MR_Integer) 0));

                      if ((parse_tree__parse_type_name__V_157_157 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Word parse_tree__parse_type_name__V_28_28;

                          {
                            parse_tree__parse_type_name__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_28_28, 1) = ((MR_Box) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_28_28, 2) = parse_tree__parse_type_name__V_158_158;
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *parse_tree__parse_type_name__KnownType_6 = base;
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_28_28));
                          }
                        }
                      else
                        *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  parse_tree__parse_type_name__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 8:
                {
                  /* case "int" */
                  if ((parse_tree__parse_type_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_2[5]);
                    }
                  else
                    *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  parse_tree__parse_type_name__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 10:
                {
                  /* case "{}" */
                  {
                    MR_Word parse_tree__parse_type_name__V_43_43;

                    {
                      parse_tree__parse_type_name__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_43_43, 0) = ((MR_Box) (parse_tree__parse_type_name__Args_5));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__parse_type_name__KnownType_6 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_43_43));
                    }
                    parse_tree__parse_type_name__succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 14:
                {
                  /* case "is" */
                  if ((parse_tree__parse_type_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  else
                    {
                      MR_Word parse_tree__parse_type_name__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_5, (MR_Integer) 1)));
                      MR_Box parse_tree__parse_type_name__V_160_160 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_5, (MR_Integer) 0));

                      if ((parse_tree__parse_type_name__V_159_159 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      else
                        {
                          MR_Word parse_tree__parse_type_name__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_159_159, (MR_Integer) 1)));
                          MR_Box parse_tree__parse_type_name__V_168_168 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_159_159, (MR_Integer) 0));

                          if ((parse_tree__parse_type_name__V_167_167 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                            {
                              MR_Word parse_tree__parse_type_name__V_32_32;

                              {
                                parse_tree__parse_type_name__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                                MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_32_32, 1) = parse_tree__parse_type_name__V_160_160;
                                MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_32_32, 2) = parse_tree__parse_type_name__V_168_168;
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                *parse_tree__parse_type_name__KnownType_6 = base;
                                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_32_32));
                              }
                            }
                          else
                            *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        }
                    }
                  parse_tree__parse_type_name__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 24:
                {
                  /* case "pure" */
                  if ((parse_tree__parse_type_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  else
                    {
                      MR_Word parse_tree__parse_type_name__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_5, (MR_Integer) 1)));
                      MR_Box parse_tree__parse_type_name__V_162_162 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_5, (MR_Integer) 0));

                      if ((parse_tree__parse_type_name__V_161_161 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Word parse_tree__parse_type_name__V_80_80;

                          {
                            parse_tree__parse_type_name__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_80_80, 1) = ((MR_Box) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_80_80, 2) = parse_tree__parse_type_name__V_162_162;
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *parse_tree__parse_type_name__KnownType_6 = base;
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_80_80));
                          }
                        }
                      else
                        *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  parse_tree__parse_type_name__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 28:
                {
                  /* case "=" */
                  if ((parse_tree__parse_type_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  else
                    {
                      MR_Word parse_tree__parse_type_name__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_5, (MR_Integer) 1)));
                      MR_Box parse_tree__parse_type_name__V_156_156 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_5, (MR_Integer) 0));

                      if ((parse_tree__parse_type_name__V_155_155 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      else
                        {
                          MR_Word parse_tree__parse_type_name__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_155_155, (MR_Integer) 1)));
                          MR_Box parse_tree__parse_type_name__V_166_166 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_155_155, (MR_Integer) 0));

                          if ((parse_tree__parse_type_name__V_165_165 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                            {
                              MR_Word parse_tree__parse_type_name__V_39_39;

                              {
                                parse_tree__parse_type_name__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_39_39, 0) = parse_tree__parse_type_name__V_156_156;
                                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_39_39, 1) = parse_tree__parse_type_name__V_166_166;
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                *parse_tree__parse_type_name__KnownType_6 = base;
                                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_39_39));
                              }
                            }
                          else
                            *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        }
                    }
                  parse_tree__parse_type_name__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 31:
                {
                  /* case "pred" */
                  {
                    MR_Word parse_tree__parse_type_name__V_36_36;

                    {
                      parse_tree__parse_type_name__V_36_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), parse_tree__parse_type_name__V_36_36, 0) = ((MR_Box) (parse_tree__parse_type_name__Args_5));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__parse_type_name__KnownType_6 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_36_36));
                    }
                    parse_tree__parse_type_name__succeeded = MR_TRUE;
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
            parse_tree__parse_type_name__slot_0 = ((&parse_tree__parse_type_name_vector_common_3[0 + parse_tree__parse_type_name__slot_0]))->parse_tree__parse_type_name__vector_common_type_3_0__vct_3_f_1;
          }
      }
    while ((parse_tree__parse_type_name__slot_0 >= (MR_Integer) 0));
    parse_tree__parse_type_name__succeeded = MR_FALSE;
  label_0:;
    return parse_tree__parse_type_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_type_kind_1_0(
  MR_Word parse_tree__parse_type_name__TypeInfo_for_T_18,
  MR_Word * parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2,
  MR_Word parse_tree__parse_type_name__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Integer parse_tree__parse_type_name__CastX_16 = (MR_Integer) parse_tree__parse_type_name__HeadVar__2_2;
    MR_Integer parse_tree__parse_type_name__CastY_17 = (MR_Integer) parse_tree__parse_type_name__HeadVar__3_3;

    parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__CastX_16 == parse_tree__parse_type_name__CastY_17);
    if (parse_tree__parse_type_name__succeeded)
      *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__parse_type_name__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__parse_type_name__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    parse_tree__prog_data____Compare____mer_type_0_0(parse_tree__parse_type_name__HeadVar__1_1, parse_tree__parse_type_name__V_23_23, parse_tree__parse_type_name__V_5_5);
                  }
                }
                break;
              case (MR_Integer) 2:
                *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__parse_type_name__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__parse_type_name__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    parse_tree__parse_type_name____Compare____known_compound_type_kind_1_0(parse_tree__parse_type_name__TypeInfo_for_T_18, parse_tree__parse_type_name__HeadVar__1_1, parse_tree__parse_type_name__V_22_22, parse_tree__parse_type_name__V_12_12);
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
parse_tree__parse_type_name____Unify____known_type_kind_1_0(
  MR_Word parse_tree__parse_type_name__TypeInfo_for_T_11,
  MR_Word parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Integer parse_tree__parse_type_name__CastX_9 = (MR_Integer) parse_tree__parse_type_name__HeadVar__1_1;
    MR_Integer parse_tree__parse_type_name__CastY_10 = (MR_Integer) parse_tree__parse_type_name__HeadVar__2_2;

    parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__CastX_9 == parse_tree__parse_type_name__CastY_10);
    if (parse_tree__parse_type_name__succeeded)
      parse_tree__parse_type_name__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer parse_tree__parse_type_name__CastX_7 = (MR_Integer) parse_tree__parse_type_name__HeadVar__1_1;
            MR_Integer parse_tree__parse_type_name__CastY_8 = (MR_Integer) parse_tree__parse_type_name__HeadVar__2_2;

            parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__CastY_8 == parse_tree__parse_type_name__CastX_7);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__parse_type_name__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__parse_type_name__V_4_4;

            parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_name__succeeded)
              {
                parse_tree__parse_type_name__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__parse_type_name__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__parse_type_name__V_3_3, parse_tree__parse_type_name__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__parse_type_name__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__parse_type_name__V_6_6;

            parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__parse_type_name__succeeded)
              {
                parse_tree__parse_type_name__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name____Unify____known_compound_type_kind_1_0(parse_tree__parse_type_name__TypeInfo_for_T_11, parse_tree__parse_type_name__V_5_5, parse_tree__parse_type_name__V_6_6);
                }
              }
          }
          break;
      }
    return parse_tree__parse_type_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_compound_type_kind_1_0(
  MR_Word parse_tree__parse_type_name__TypeInfo_for_T_117,
  MR_Word * parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2,
  MR_Word parse_tree__parse_type_name__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Integer parse_tree__parse_type_name__CastX_115 = (MR_Integer) parse_tree__parse_type_name__HeadVar__2_2;
    MR_Integer parse_tree__parse_type_name__CastY_116 = (MR_Integer) parse_tree__parse_type_name__HeadVar__3_3;

    parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__CastX_115 == parse_tree__parse_type_name__CastY_116);
    if (parse_tree__parse_type_name__succeeded)
      *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__parse_type_name__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__parse_type_name__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__list____Compare____list_1_0(parse_tree__parse_type_name__TypeInfo_for_T_117, parse_tree__parse_type_name__HeadVar__1_1, parse_tree__parse_type_name__V_133_133, parse_tree__parse_type_name__V_5_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box parse_tree__parse_type_name__V_128_128 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 1));
            MR_Box parse_tree__parse_type_name__V_129_129 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box parse_tree__parse_type_name__V_24_24 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 0));
                  MR_Box parse_tree__parse_type_name__V_25_25 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 1));
                  MR_Word parse_tree__parse_type_name__V_26_26;

                  {
                    mercury__builtin__compare_3_p_0(parse_tree__parse_type_name__TypeInfo_for_T_117, &parse_tree__parse_type_name__V_26_26, parse_tree__parse_type_name__V_129_129, parse_tree__parse_type_name__V_24_24);
                  }
                  parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__V_26_26 == (MR_Integer) 0);
                  parse_tree__parse_type_name__succeeded = !(parse_tree__parse_type_name__succeeded);
                  if (parse_tree__parse_type_name__succeeded)
                    *parse_tree__parse_type_name__HeadVar__1_1 = parse_tree__parse_type_name__V_26_26;
                  else
                    {
                      mercury__builtin__compare_3_p_0(parse_tree__parse_type_name__TypeInfo_for_T_117, parse_tree__parse_type_name__HeadVar__1_1, parse_tree__parse_type_name__V_128_128, parse_tree__parse_type_name__V_25_25);
                    }
                }
                break;
              case (MR_Integer) 2:
                *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__parse_type_name__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__parse_type_name__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__list____Compare____list_1_0(parse_tree__parse_type_name__TypeInfo_for_T_117, parse_tree__parse_type_name__HeadVar__1_1, parse_tree__parse_type_name__V_130_130, parse_tree__parse_type_name__V_47_47);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box parse_tree__parse_type_name__V_126_126 = (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 2));
                MR_Box parse_tree__parse_type_name__V_127_127 = (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 1));

                switch (MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Box parse_tree__parse_type_name__V_68_68 = (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 1));
                          MR_Box parse_tree__parse_type_name__V_69_69 = (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 2));
                          MR_Word parse_tree__parse_type_name__V_70_70;

                          {
                            mercury__builtin__compare_3_p_0(parse_tree__parse_type_name__TypeInfo_for_T_117, &parse_tree__parse_type_name__V_70_70, parse_tree__parse_type_name__V_127_127, parse_tree__parse_type_name__V_68_68);
                          }
                          parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__V_70_70 == (MR_Integer) 0);
                          parse_tree__parse_type_name__succeeded = !(parse_tree__parse_type_name__succeeded);
                          if (parse_tree__parse_type_name__succeeded)
                            *parse_tree__parse_type_name__HeadVar__1_1 = parse_tree__parse_type_name__V_70_70;
                          else
                            {
                              mercury__builtin__compare_3_p_0(parse_tree__parse_type_name__TypeInfo_for_T_117, parse_tree__parse_type_name__HeadVar__1_1, parse_tree__parse_type_name__V_126_126, parse_tree__parse_type_name__V_69_69);
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box parse_tree__parse_type_name__V_131_131 = (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 2));
                MR_Word parse_tree__parse_type_name__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word parse_tree__parse_type_name__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Box parse_tree__parse_type_name__V_95_95 = (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 2));
                          MR_Word parse_tree__parse_type_name__V_96_96;
                          MR_Integer parse_tree__parse_type_name__V_134_134 = (MR_Integer) parse_tree__parse_type_name__V_132_132;
                          MR_Integer parse_tree__parse_type_name__V_135_135 = (MR_Integer) parse_tree__parse_type_name__V_94_94;

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__parse_type_name__V_96_96, parse_tree__parse_type_name__V_134_134, parse_tree__parse_type_name__V_135_135);
                          }
                          parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__V_96_96 == (MR_Integer) 0);
                          parse_tree__parse_type_name__succeeded = !(parse_tree__parse_type_name__succeeded);
                          if (parse_tree__parse_type_name__succeeded)
                            *parse_tree__parse_type_name__HeadVar__1_1 = parse_tree__parse_type_name__V_96_96;
                          else
                            {
                              mercury__builtin__compare_3_p_0(parse_tree__parse_type_name__TypeInfo_for_T_117, parse_tree__parse_type_name__HeadVar__1_1, parse_tree__parse_type_name__V_131_131, parse_tree__parse_type_name__V_95_95);
                            }
                        }
                        break;
                      case (MR_Integer) 2:
                        *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word parse_tree__parse_type_name__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word parse_tree__parse_type_name__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__list____Compare____list_1_0(parse_tree__parse_type_name__TypeInfo_for_T_117, parse_tree__parse_type_name__HeadVar__1_1, parse_tree__parse_type_name__V_125_125, parse_tree__parse_type_name__V_114_114);
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
parse_tree__parse_type_name____Unify____known_compound_type_kind_1_0(
  MR_Word parse_tree__parse_type_name__TypeInfo_for_T_23,
  MR_Word parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Integer parse_tree__parse_type_name__CastX_21 = (MR_Integer) parse_tree__parse_type_name__HeadVar__1_1;
    MR_Integer parse_tree__parse_type_name__CastY_22 = (MR_Integer) parse_tree__parse_type_name__HeadVar__2_2;

    parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__CastX_21 == parse_tree__parse_type_name__CastY_22);
    if (parse_tree__parse_type_name__succeeded)
      parse_tree__parse_type_name__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__parse_type_name__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__parse_type_name__V_4_4;

            parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_type_name__succeeded)
              {
                parse_tree__parse_type_name__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__parse_type_name__succeeded = mercury__list____Unify____list_1_0(parse_tree__parse_type_name__TypeInfo_for_T_23, parse_tree__parse_type_name__V_3_3, parse_tree__parse_type_name__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box parse_tree__parse_type_name__V_5_5 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 0));
            MR_Box parse_tree__parse_type_name__V_6_6 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 1));
            MR_Box parse_tree__parse_type_name__V_7_7;
            MR_Box parse_tree__parse_type_name__V_8_8;

            parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_name__succeeded)
              {
                parse_tree__parse_type_name__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0));
                parse_tree__parse_type_name__V_8_8 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 1));
                {
                  parse_tree__parse_type_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_type_name__TypeInfo_for_T_23, parse_tree__parse_type_name__V_5_5, parse_tree__parse_type_name__V_7_7);
                }
                if (parse_tree__parse_type_name__succeeded)
                  {
                    parse_tree__parse_type_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_type_name__TypeInfo_for_T_23, parse_tree__parse_type_name__V_6_6, parse_tree__parse_type_name__V_8_8);
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__parse_type_name__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__parse_type_name__V_10_10;

            parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__parse_type_name__succeeded)
              {
                parse_tree__parse_type_name__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__parse_type_name__succeeded = mercury__list____Unify____list_1_0(parse_tree__parse_type_name__TypeInfo_for_T_23, parse_tree__parse_type_name__V_9_9, parse_tree__parse_type_name__V_10_10);
                }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box parse_tree__parse_type_name__V_11_11 = (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 1));
                MR_Box parse_tree__parse_type_name__V_12_12 = (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 2));
                MR_Box parse_tree__parse_type_name__V_13_13;
                MR_Box parse_tree__parse_type_name__V_14_14;

                parse_tree__parse_type_name__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (parse_tree__parse_type_name__succeeded)
                  {
                    parse_tree__parse_type_name__V_13_13 = (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 1));
                    parse_tree__parse_type_name__V_14_14 = (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 2));
                    {
                      parse_tree__parse_type_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_type_name__TypeInfo_for_T_23, parse_tree__parse_type_name__V_11_11, parse_tree__parse_type_name__V_13_13);
                    }
                    if (parse_tree__parse_type_name__succeeded)
                      {
                        parse_tree__parse_type_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_type_name__TypeInfo_for_T_23, parse_tree__parse_type_name__V_12_12, parse_tree__parse_type_name__V_14_14);
                      }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__parse_type_name__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 1)));
                MR_Box parse_tree__parse_type_name__V_16_16 = (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 2));
                MR_Word parse_tree__parse_type_name__V_17_17;
                MR_Box parse_tree__parse_type_name__V_18_18;

                parse_tree__parse_type_name__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (parse_tree__parse_type_name__succeeded)
                  {
                    parse_tree__parse_type_name__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__parse_type_name__V_18_18 = (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 2));
                    parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__V_15_15 == parse_tree__parse_type_name__V_17_17);
                    if (parse_tree__parse_type_name__succeeded)
                      {
                        parse_tree__parse_type_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_type_name__TypeInfo_for_T_23, parse_tree__parse_type_name__V_16_16, parse_tree__parse_type_name__V_18_18);
                      }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word parse_tree__parse_type_name__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__parse_type_name__V_20_20;

                parse_tree__parse_type_name__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (parse_tree__parse_type_name__succeeded)
                  {
                    parse_tree__parse_type_name__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      parse_tree__parse_type_name__succeeded = mercury__list____Unify____list_1_0(parse_tree__parse_type_name__TypeInfo_for_T_23, parse_tree__parse_type_name__V_19_19, parse_tree__parse_type_name__V_20_20);
                    }
                  }
              }
              break;
          }
          break;
      }
    return parse_tree__parse_type_name__succeeded;
  }
}

void MR_CALL 
parse_tree__parse_type_name____Compare____allow_ho_inst_info_0_0(
  MR_Word * parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2,
  MR_Word parse_tree__parse_type_name__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Integer parse_tree__parse_type_name__Cast_HeadVar1_4 = (MR_Integer) parse_tree__parse_type_name__HeadVar__2_2;
    MR_Integer parse_tree__parse_type_name__Cast_HeadVar2_5 = (MR_Integer) parse_tree__parse_type_name__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_type_name__HeadVar__1_1, parse_tree__parse_type_name__Cast_HeadVar1_4, parse_tree__parse_type_name__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____allow_ho_inst_info_0_0(
  MR_Word parse_tree__parse_type_name__HeadVar__2_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__HeadVar__2_1 == parse_tree__parse_type_name__HeadVar__2_2);

    return parse_tree__parse_type_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name__parse_types_acc_8_p_0(
  MR_Word parse_tree__parse_type_name__AllowHOInstInfo_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2,
  MR_Word parse_tree__parse_type_name__VarSet_3,
  MR_Word parse_tree__parse_type_name__ContextPieces_4,
  MR_Word parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_0_5,
  MR_Word * parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_6,
  MR_Word parse_tree__parse_type_name__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__parse_type_name__STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_type_name__succeeded;

        if ((parse_tree__parse_type_name__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *parse_tree__parse_type_name__STATE_VARIABLE_Specs_8 = parse_tree__parse_type_name__STATE_VARIABLE_Specs_0_7;
            *parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_6 = parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_0_5;
          }
        else
          {
            MR_Word parse_tree__parse_type_name__Term_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word parse_tree__parse_type_name__Terms_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word parse_tree__parse_type_name__TermResult_25;
            MR_Word parse_tree__parse_type_name__STATE_VARIABLE_Specs_32_32;
            MR_Word parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_33_33;

            {
              parse_tree__parse_type_name__parse_type_5_p_0(parse_tree__parse_type_name__AllowHOInstInfo_1, parse_tree__parse_type_name__Term_19, parse_tree__parse_type_name__VarSet_3, parse_tree__parse_type_name__ContextPieces_4, &parse_tree__parse_type_name__TermResult_25);
            }
            if (((MR_tag((MR_Word) parse_tree__parse_type_name__TermResult_25)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__parse_type_name__TermSpecs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__TermResult_25, (MR_Integer) 0)));

                {
                  parse_tree__parse_type_name__STATE_VARIABLE_Specs_32_32 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_type_name__TermSpecs_27, parse_tree__parse_type_name__STATE_VARIABLE_Specs_0_7);
                }
                parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_33_33 = parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_0_5;
              }
            else
              {
                MR_Word parse_tree__parse_type_name__Type_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__TermResult_25, (MR_Integer) 0)));

                {
                  parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_33_33, 0) = ((MR_Box) (parse_tree__parse_type_name__Type_26));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_33_33, 1) = ((MR_Box) (parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_0_5));
                }
                parse_tree__parse_type_name__STATE_VARIABLE_Specs_32_32 = parse_tree__parse_type_name__STATE_VARIABLE_Specs_0_7;
              }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__parse_type_name__HeadVar__2__tmp_copy_2 = parse_tree__parse_type_name__Terms_20;
              MR_Word parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_0__tmp_copy_5 = parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_33_33;
              MR_Word parse_tree__parse_type_name__STATE_VARIABLE_Specs_0__tmp_copy_7 = parse_tree__parse_type_name__STATE_VARIABLE_Specs_32_32;

              parse_tree__parse_type_name__STATE_VARIABLE_Specs_0_7 = parse_tree__parse_type_name__STATE_VARIABLE_Specs_0__tmp_copy_7;
              parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_0_5 = parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_0__tmp_copy_5;
              parse_tree__parse_type_name__HeadVar__2_2 = parse_tree__parse_type_name__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
parse_tree__parse_type_name__ill_formed_type_result_3_f_0(
  MR_Word parse_tree__parse_type_name__ContextPieces_5,
  MR_Word parse_tree__parse_type_name__VarSet_6,
  MR_Word parse_tree__parse_type_name__Term_7)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Word parse_tree__parse_type_name__Result_8;
    MR_Word parse_tree__parse_type_name__TypeCtorInfo_37_37 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word parse_tree__parse_type_name__TypeCtorInfo_38_38;
    MR_String parse_tree__parse_type_name__TermStr_9;
    MR_Word parse_tree__parse_type_name__Pieces_10;
    MR_Word parse_tree__parse_type_name__Spec_11;
    MR_Word parse_tree__parse_type_name__V_12_12;
    MR_Word parse_tree__parse_type_name__V_13_13;
    MR_Word parse_tree__parse_type_name__V_15_15;
    MR_Word parse_tree__parse_type_name__V_18_18;
    MR_Word parse_tree__parse_type_name__V_19_19;
    MR_Word parse_tree__parse_type_name__V_28_28;
    MR_Word parse_tree__parse_type_name__V_29_29;
    MR_Word parse_tree__parse_type_name__V_30_30;
    MR_Word parse_tree__parse_type_name__V_31_31;
    MR_Word parse_tree__parse_type_name__V_32_32;
    MR_Word parse_tree__parse_type_name__V_35_35;

    {
      parse_tree__parse_type_name__TermStr_9 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_37_37, parse_tree__parse_type_name__VarSet_6, parse_tree__parse_type_name__Term_7);
    }
    parse_tree__parse_type_name__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      parse_tree__parse_type_name__V_12_12 = mercury__cord__list_1_f_0(parse_tree__parse_type_name__TypeCtorInfo_38_38, parse_tree__parse_type_name__ContextPieces_5);
    }
    {
      parse_tree__parse_type_name__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_19_19, 1) = ((MR_Box) (parse_tree__parse_type_name__TermStr_9));
    }
    {
      parse_tree__parse_type_name__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_18_18, 0) = ((MR_Box) (parse_tree__parse_type_name__V_19_19));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[3])));
    }
    {
      parse_tree__parse_type_name__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_15_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[4])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_15_15, 1) = ((MR_Box) (parse_tree__parse_type_name__V_18_18));
    }
    {
      parse_tree__parse_type_name__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_13_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_13_13, 1) = ((MR_Box) (parse_tree__parse_type_name__V_15_15));
    }
    {
      parse_tree__parse_type_name__Pieces_10 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_38_38, parse_tree__parse_type_name__V_12_12, parse_tree__parse_type_name__V_13_13);
    }
    {
      parse_tree__parse_type_name__V_30_30 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_name__TypeCtorInfo_37_37, parse_tree__parse_type_name__Term_7);
    }
    {
      parse_tree__parse_type_name__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_32_32, 0) = ((MR_Box) (parse_tree__parse_type_name__Pieces_10));
    }
    {
      parse_tree__parse_type_name__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_31_31, 0) = ((MR_Box) (parse_tree__parse_type_name__V_32_32));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_type_name__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_29_29, 0) = ((MR_Box) (parse_tree__parse_type_name__V_30_30));
      MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_29_29, 1) = ((MR_Box) (parse_tree__parse_type_name__V_31_31));
    }
    {
      parse_tree__parse_type_name__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_28_28, 0) = ((MR_Box) (parse_tree__parse_type_name__V_29_29));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_type_name__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_11, 2) = ((MR_Box) (parse_tree__parse_type_name__V_28_28));
    }
    {
      parse_tree__parse_type_name__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_35_35, 0) = ((MR_Box) (parse_tree__parse_type_name__Spec_11));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_type_name__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Result_8, 0) = ((MR_Box) (parse_tree__parse_type_name__V_35_35));
    }
    return parse_tree__parse_type_name__Result_8;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_name__maybe_parse_type_and_mode_3_p_0(
  MR_Word parse_tree__parse_type_name__Term_4,
  MR_Word * parse_tree__parse_type_name__Type_5,
  MR_Word * parse_tree__parse_type_name__Mode_6)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__Term_4)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_type_name__TypeCtorInfo_10_23;
    MR_Word parse_tree__parse_type_name__TypeCtorInfo_11_24;
    MR_Word parse_tree__parse_type_name__TypeTerm_7;
    MR_Word parse_tree__parse_type_name__ModeTerm_8;
    MR_Word parse_tree__parse_type_name__V_10_10;
    MR_String parse_tree__parse_type_name__V_11_11;
    MR_Word parse_tree__parse_type_name__V_12_12;
    MR_Word parse_tree__parse_type_name__V_13_13;
    MR_Word parse_tree__parse_type_name__V_14_14;
    MR_Word parse_tree__parse_type_name__V_15_15;
    MR_Word parse_tree__parse_type_name__V_16_16;
    MR_Word parse_tree__parse_type_name__VarSet_20;
    MR_Word parse_tree__parse_type_name__ContextPieces_21;
    MR_Word parse_tree__parse_type_name__V_22_22;
    MR_Word parse_tree__parse_type_name__V_9_9;

    if (parse_tree__parse_type_name__succeeded)
      {
        parse_tree__parse_type_name__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Term_4, (MR_Integer) 0)));
        parse_tree__parse_type_name__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Term_4, (MR_Integer) 1)));
        parse_tree__parse_type_name__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Term_4, (MR_Integer) 2)));
        parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_10_10)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_name__succeeded)
          {
            parse_tree__parse_type_name__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_10_10, (MR_Integer) 0)));
            parse_tree__parse_type_name__succeeded = (strcmp(parse_tree__parse_type_name__V_11_11, (MR_String) "::") == 0);
            if (parse_tree__parse_type_name__succeeded)
              {
                parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_12_12)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_type_name__succeeded)
                  {
                    parse_tree__parse_type_name__TypeTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_12_12, (MR_Integer) 0)));
                    parse_tree__parse_type_name__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_12_12, (MR_Integer) 1)));
                    parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_13_13)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_name__succeeded)
                      {
                        parse_tree__parse_type_name__ModeTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_13_13, (MR_Integer) 0)));
                        parse_tree__parse_type_name__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_13_13, (MR_Integer) 1)));
                        parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__parse_type_name__succeeded)
                          {
                            parse_tree__parse_type_name__V_15_15 = (MR_Integer) 1;
                            parse_tree__parse_type_name__TypeCtorInfo_10_23 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                            {
                              parse_tree__parse_type_name__VarSet_20 = mercury__varset__init_0_f_0(parse_tree__parse_type_name__TypeCtorInfo_10_23);
                            }
                            parse_tree__parse_type_name__TypeCtorInfo_11_24 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                            {
                              parse_tree__parse_type_name__ContextPieces_21 = mercury__cord__init_0_f_0(parse_tree__parse_type_name__TypeCtorInfo_11_24);
                            }
                            {
                              parse_tree__parse_type_name__parse_type_5_p_0(parse_tree__parse_type_name__V_15_15, parse_tree__parse_type_name__TypeTerm_7, parse_tree__parse_type_name__VarSet_20, parse_tree__parse_type_name__ContextPieces_21, &parse_tree__parse_type_name__V_22_22);
                            }
                            parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_22_22)) == (MR_mktag((MR_Integer) 1)));
                            if (parse_tree__parse_type_name__succeeded)
                              {
                                *parse_tree__parse_type_name__Type_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_22_22, (MR_Integer) 0)));
                                parse_tree__parse_type_name__V_16_16 = (MR_Integer) 1;
                                {
                                  parse_tree__parse_type_name__succeeded = parse_tree__parse_inst_mode_name__convert_mode_3_p_0(parse_tree__parse_type_name__V_16_16, parse_tree__parse_type_name__ModeTerm_8, parse_tree__parse_type_name__Mode_6);
                                }
                              }
                          }
                      }
                  }
              }
          }
      }
    return parse_tree__parse_type_name__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_name__maybe_parse_types_and_modes_acc_5_p_0(
  MR_Word parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2,
  MR_Word * parse_tree__parse_type_name__HeadVar__3_3,
  MR_Word parse_tree__parse_type_name__HeadVar__4_4,
  MR_Word * parse_tree__parse_type_name__HeadVar__5_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_type_name__succeeded;

        if ((parse_tree__parse_type_name__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *parse_tree__parse_type_name__HeadVar__5_5 = parse_tree__parse_type_name__HeadVar__4_4;
            *parse_tree__parse_type_name__HeadVar__3_3 = parse_tree__parse_type_name__HeadVar__2_2;
            parse_tree__parse_type_name__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word parse_tree__parse_type_name__ArgTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__parse_type_name__ArgTerms_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__parse_type_name__ArgType_18;
            MR_Word parse_tree__parse_type_name__ArgMode_19;
            MR_Word parse_tree__parse_type_name__V_20_20;
            MR_Word parse_tree__parse_type_name__V_21_21;

            {
              parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name__maybe_parse_type_and_mode_3_p_0(parse_tree__parse_type_name__ArgTerm_12, &parse_tree__parse_type_name__ArgType_18, &parse_tree__parse_type_name__ArgMode_19);
            }
            if (parse_tree__parse_type_name__succeeded)
              {
                {
                  parse_tree__parse_type_name__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_20_20, 0) = ((MR_Box) (parse_tree__parse_type_name__ArgType_18));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_20_20, 1) = ((MR_Box) (parse_tree__parse_type_name__HeadVar__2_2));
                }
                {
                  parse_tree__parse_type_name__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_21_21, 0) = ((MR_Box) (parse_tree__parse_type_name__ArgMode_19));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_21_21, 1) = ((MR_Box) (parse_tree__parse_type_name__HeadVar__4_4));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word parse_tree__parse_type_name__HeadVar__1__tmp_copy_1 = parse_tree__parse_type_name__ArgTerms_13;
                  MR_Word parse_tree__parse_type_name__HeadVar__2__tmp_copy_2 = parse_tree__parse_type_name__V_20_20;
                  MR_Word parse_tree__parse_type_name__HeadVar__4__tmp_copy_4 = parse_tree__parse_type_name__V_21_21;

                  parse_tree__parse_type_name__HeadVar__4_4 = parse_tree__parse_type_name__HeadVar__4__tmp_copy_4;
                  parse_tree__parse_type_name__HeadVar__2_2 = parse_tree__parse_type_name__HeadVar__2__tmp_copy_2;
                  parse_tree__parse_type_name__HeadVar__1_1 = parse_tree__parse_type_name__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return parse_tree__parse_type_name__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
parse_tree__parse_type_name__maybe_parse_types_and_modes_3_p_0(
  MR_Word parse_tree__parse_type_name__ArgTerms_4,
  MR_Word * parse_tree__parse_type_name__ArgTypes_5,
  MR_Word * parse_tree__parse_type_name__ArgModes_6)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Word parse_tree__parse_type_name__RevArgTerms_7;

    {
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__parse_type_name_scalar_common_1[0], parse_tree__parse_type_name__ArgTerms_4, &parse_tree__parse_type_name__RevArgTerms_7);
    }
    {
      parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name__maybe_parse_types_and_modes_acc_5_p_0(parse_tree__parse_type_name__RevArgTerms_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_type_name__ArgTypes_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_type_name__ArgModes_6);
    }
    return parse_tree__parse_type_name__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_name__maybe_parse_ho_type_and_inst_4_p_0(
  MR_Word parse_tree__parse_type_name__Arg1_5,
  MR_Word parse_tree__parse_type_name__Arg2_6,
  MR_Word parse_tree__parse_type_name__Purity_7,
  MR_Word * parse_tree__parse_type_name__Type_8)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__Arg2_6)) == (MR_mktag((MR_Integer) 0)));
    MR_String parse_tree__parse_type_name__DetString_9;
    MR_Word parse_tree__parse_type_name__Detism_11;
    MR_Word parse_tree__parse_type_name__V_22_22;
    MR_Word parse_tree__parse_type_name__V_23_23;
    MR_Word parse_tree__parse_type_name__V_39_39;
    MR_Word parse_tree__parse_type_name__V_40_40;
    MR_String parse_tree__parse_type_name__V_41_41;
    MR_Word parse_tree__parse_type_name__V_10_10;
    MR_Word parse_tree__parse_type_name__V_38_38;

    if (parse_tree__parse_type_name__succeeded)
      {
        parse_tree__parse_type_name__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Arg2_6, (MR_Integer) 0)));
        parse_tree__parse_type_name__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Arg2_6, (MR_Integer) 1)));
        parse_tree__parse_type_name__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Arg2_6, (MR_Integer) 2)));
        parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_type_name__succeeded)
          {
            parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_22_22)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_type_name__succeeded)
              {
                parse_tree__parse_type_name__DetString_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_22_22, (MR_Integer) 0)));
                {
                  parse_tree__parse_type_name__succeeded = parse_tree__parse_inst_mode_name__standard_det_2_p_0(parse_tree__parse_type_name__DetString_9, &parse_tree__parse_type_name__Detism_11);
                }
                if (parse_tree__parse_type_name__succeeded)
                  {
                    parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__Arg1_5)) == (MR_mktag((MR_Integer) 0)));
                    if (parse_tree__parse_type_name__succeeded)
                      {
                        parse_tree__parse_type_name__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Arg1_5, (MR_Integer) 0)));
                        parse_tree__parse_type_name__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Arg1_5, (MR_Integer) 1)));
                        parse_tree__parse_type_name__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Arg1_5, (MR_Integer) 2)));
                        parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_40_40)) == (MR_mktag((MR_Integer) 0)));
                        if (parse_tree__parse_type_name__succeeded)
                          {
                            parse_tree__parse_type_name__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_40_40, (MR_Integer) 0)));
                            if ((strcmp(parse_tree__parse_type_name__V_41_41, (MR_String) "=") == 0))
                              {
                                MR_Word parse_tree__parse_type_name__FuncTerm_12;
                                MR_Word parse_tree__parse_type_name__RetTerm_13;
                                MR_Word parse_tree__parse_type_name__ArgTerms_15;
                                MR_Word parse_tree__parse_type_name__ArgTypes_17;
                                MR_Word parse_tree__parse_type_name__ArgModes_18;
                                MR_Word parse_tree__parse_type_name__RetType_19;
                                MR_Word parse_tree__parse_type_name__RetMode_20;
                                MR_Word parse_tree__parse_type_name__V_30_30;
                                MR_Word parse_tree__parse_type_name__V_31_31;
                                MR_Word parse_tree__parse_type_name__V_32_32;
                                MR_String parse_tree__parse_type_name__V_33_33;
                                MR_Word parse_tree__parse_type_name__V_16_16;

                                parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_39_39)) == (MR_mktag((MR_Integer) 1)));
                                if (parse_tree__parse_type_name__succeeded)
                                  {
                                    parse_tree__parse_type_name__FuncTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_39_39, (MR_Integer) 0)));
                                    parse_tree__parse_type_name__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_39_39, (MR_Integer) 1)));
                                    parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_30_30)) == (MR_mktag((MR_Integer) 1)));
                                    if (parse_tree__parse_type_name__succeeded)
                                      {
                                        parse_tree__parse_type_name__RetTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_30_30, (MR_Integer) 0)));
                                        parse_tree__parse_type_name__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_30_30, (MR_Integer) 1)));
                                        parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (parse_tree__parse_type_name__succeeded)
                                          {
                                            parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__FuncTerm_12)) == (MR_mktag((MR_Integer) 0)));
                                            if (parse_tree__parse_type_name__succeeded)
                                              {
                                                parse_tree__parse_type_name__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__FuncTerm_12, (MR_Integer) 0)));
                                                parse_tree__parse_type_name__ArgTerms_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__FuncTerm_12, (MR_Integer) 1)));
                                                parse_tree__parse_type_name__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__FuncTerm_12, (MR_Integer) 2)));
                                                parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_32_32)) == (MR_mktag((MR_Integer) 0)));
                                                if (parse_tree__parse_type_name__succeeded)
                                                  {
                                                    parse_tree__parse_type_name__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_32_32, (MR_Integer) 0)));
                                                    parse_tree__parse_type_name__succeeded = (strcmp(parse_tree__parse_type_name__V_33_33, (MR_String) "func") == 0);
                                                    if (parse_tree__parse_type_name__succeeded)
                                                      {
                                                        {
                                                          parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name__maybe_parse_types_and_modes_3_p_0(parse_tree__parse_type_name__ArgTerms_15, &parse_tree__parse_type_name__ArgTypes_17, &parse_tree__parse_type_name__ArgModes_18);
                                                        }
                                                        if (parse_tree__parse_type_name__succeeded)
                                                          {
                                                            {
                                                              parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name__maybe_parse_type_and_mode_3_p_0(parse_tree__parse_type_name__RetTerm_13, &parse_tree__parse_type_name__RetType_19, &parse_tree__parse_type_name__RetMode_20);
                                                            }
                                                            if (parse_tree__parse_type_name__succeeded)
                                                              {
                                                                mercury__private_builtin__dummy_var = (MR_Integer) 0;
                                                                {
                                                                  parse_tree__prog_type__construct_higher_order_func_type_8_p_0(parse_tree__parse_type_name__Purity_7, parse_tree__parse_type_name__ArgTypes_17, parse_tree__parse_type_name__RetType_19, parse_tree__parse_type_name__ArgModes_18, parse_tree__parse_type_name__RetMode_20, parse_tree__parse_type_name__Detism_11, parse_tree__parse_type_name__Type_8);
                                                                }
                                                                parse_tree__parse_type_name__succeeded = MR_TRUE;
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
                            if ((strcmp(parse_tree__parse_type_name__V_41_41, (MR_String) "pred") == 0))
                              {
                                MR_Word parse_tree__parse_type_name__ArgTypes_36;
                                MR_Word parse_tree__parse_type_name__ArgModes_37;

                                {
                                  parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name__maybe_parse_types_and_modes_3_p_0(parse_tree__parse_type_name__V_39_39, &parse_tree__parse_type_name__ArgTypes_36, &parse_tree__parse_type_name__ArgModes_37);
                                }
                                if (parse_tree__parse_type_name__succeeded)
                                  {
                                    mercury__private_builtin__dummy_var = (MR_Integer) 0;
                                    {
                                      parse_tree__prog_type__construct_higher_order_pred_type_6_p_0(parse_tree__parse_type_name__Purity_7, parse_tree__parse_type_name__ArgTypes_36, parse_tree__parse_type_name__ArgModes_37, parse_tree__parse_type_name__Detism_11, parse_tree__parse_type_name__Type_8);
                                    }
                                    parse_tree__parse_type_name__succeeded = MR_TRUE;
                                  }
                              }
                            else
                              parse_tree__parse_type_name__succeeded = MR_FALSE;
                          }
                      }
                  }
              }
          }
      }
    return parse_tree__parse_type_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name__parse_compound_type_6_p_0(
  MR_Word parse_tree__parse_type_name__AllowHOInstInfo_7,
  MR_Word parse_tree__parse_type_name__Term_8,
  MR_Word parse_tree__parse_type_name__VarSet_9,
  MR_Word parse_tree__parse_type_name__ContextPieces_10,
  MR_Word parse_tree__parse_type_name__CompoundTypeKind_11,
  MR_Word * parse_tree__parse_type_name__Result_12)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;

    switch (MR_tag((MR_Word) parse_tree__parse_type_name__CompoundTypeKind_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__parse_type_name__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__CompoundTypeKind_11, (MR_Integer) 0)));
          MR_Word parse_tree__parse_type_name__ArgsResult_14;

          {
            parse_tree__parse_type_name__parse_types_5_p_0((MR_Integer) 1, parse_tree__parse_type_name__Args_13, parse_tree__parse_type_name__VarSet_9, parse_tree__parse_type_name__ContextPieces_10, &parse_tree__parse_type_name__ArgsResult_14);
          }
          if (((MR_tag((MR_Word) parse_tree__parse_type_name__ArgsResult_14)) == (MR_mktag((MR_Integer) 0))))
            *parse_tree__parse_type_name__Result_12 = (MR_Word) parse_tree__parse_type_name__ArgsResult_14;
          else
            {
              MR_Word parse_tree__parse_type_name__ArgTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__ArgsResult_14, (MR_Integer) 0)));
              MR_Word parse_tree__parse_type_name__V_82_82;

              {
                parse_tree__parse_type_name__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_82_82, 1) = ((MR_Box) (parse_tree__parse_type_name__ArgTypes_15));
                MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_82_82, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__parse_type_name__Result_12 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_82_82));
              }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_type_name__Arg1_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__CompoundTypeKind_11, (MR_Integer) 0)));
          MR_Word parse_tree__parse_type_name__Arg2_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__CompoundTypeKind_11, (MR_Integer) 1)));
          MR_Word parse_tree__parse_type_name__RetType_26;
          MR_Word parse_tree__parse_type_name__ArgTypes_87;
          MR_Word parse_tree__parse_type_name__FuncArgs_24;
          MR_Word parse_tree__parse_type_name__V_47_47;
          MR_String parse_tree__parse_type_name__V_48_48;
          MR_Word parse_tree__parse_type_name__V_49_49;
          MR_Word parse_tree__parse_type_name__V_50_50;
          MR_Word parse_tree__parse_type_name__V_25_25;

          parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__Arg1_22)) == (MR_mktag((MR_Integer) 0)));
          if (parse_tree__parse_type_name__succeeded)
            {
              parse_tree__parse_type_name__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Arg1_22, (MR_Integer) 0)));
              parse_tree__parse_type_name__FuncArgs_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Arg1_22, (MR_Integer) 1)));
              parse_tree__parse_type_name__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Arg1_22, (MR_Integer) 2)));
              parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_47_47)) == (MR_mktag((MR_Integer) 0)));
              if (parse_tree__parse_type_name__succeeded)
                {
                  parse_tree__parse_type_name__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_47_47, (MR_Integer) 0)));
                  parse_tree__parse_type_name__succeeded = (strcmp(parse_tree__parse_type_name__V_48_48, (MR_String) "func") == 0);
                  if (parse_tree__parse_type_name__succeeded)
                    {
                      parse_tree__parse_type_name__V_49_49 = (MR_Integer) 1;
                      {
                        parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name__maybe_parse_types_3_p_0(parse_tree__parse_type_name__V_49_49, parse_tree__parse_type_name__FuncArgs_24, &parse_tree__parse_type_name__ArgTypes_87);
                      }
                      if (parse_tree__parse_type_name__succeeded)
                        {
                          parse_tree__parse_type_name__V_50_50 = (MR_Integer) 1;
                          {
                            parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name__maybe_parse_type_3_p_0(parse_tree__parse_type_name__V_50_50, parse_tree__parse_type_name__Arg2_23, &parse_tree__parse_type_name__RetType_26);
                          }
                        }
                    }
                }
            }
          if (parse_tree__parse_type_name__succeeded)
            {
              MR_Word parse_tree__parse_type_name__FuncType_27;

              mercury__private_builtin__dummy_var = (MR_Integer) 0;
              {
                parse_tree__prog_type__construct_higher_order_func_type_5_p_0((MR_Integer) 0, parse_tree__parse_type_name__ArgTypes_87, parse_tree__parse_type_name__RetType_26, &parse_tree__parse_type_name__FuncType_27);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__parse_type_name__Result_12 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__FuncType_27));
              }
            }
          else
            {
              *parse_tree__parse_type_name__Result_12 = parse_tree__parse_type_name__ill_formed_type_result_3_f_0(parse_tree__parse_type_name__ContextPieces_10, parse_tree__parse_type_name__VarSet_9, parse_tree__parse_type_name__Term_8);
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__parse_type_name__Args_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_type_name__CompoundTypeKind_11, (MR_Integer) 0)));
          MR_Word parse_tree__parse_type_name__ArgTypes_84;

          {
            parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name__maybe_parse_types_3_p_0((MR_Integer) 1, parse_tree__parse_type_name__Args_85, &parse_tree__parse_type_name__ArgTypes_84);
          }
          if (parse_tree__parse_type_name__succeeded)
            {
              MR_Word parse_tree__parse_type_name__PredType_21;

              mercury__private_builtin__dummy_var = (MR_Integer) 0;
              {
                parse_tree__prog_type__construct_higher_order_pred_type_4_p_0((MR_Integer) 0, parse_tree__parse_type_name__ArgTypes_84, &parse_tree__parse_type_name__PredType_21);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__parse_type_name__Result_12 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__PredType_21));
              }
            }
          else
            {
              *parse_tree__parse_type_name__Result_12 = parse_tree__parse_type_name__ill_formed_type_result_3_f_0(parse_tree__parse_type_name__ContextPieces_10, parse_tree__parse_type_name__VarSet_9, parse_tree__parse_type_name__Term_8);
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__CompoundTypeKind_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__parse_type_name__Arg1_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__CompoundTypeKind_11, (MR_Integer) 1)));
              MR_Word parse_tree__parse_type_name__Arg2_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__CompoundTypeKind_11, (MR_Integer) 2)));
              MR_Word parse_tree__parse_type_name__Type_28;
              MR_Word parse_tree__parse_type_name__V_46_46;

              parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__AllowHOInstInfo_7 == (MR_Integer) 0);
              if (parse_tree__parse_type_name__succeeded)
                {
                  parse_tree__parse_type_name__V_46_46 = (MR_Integer) 0;
                  {
                    parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name__maybe_parse_ho_type_and_inst_4_p_0(parse_tree__parse_type_name__Arg1_89, parse_tree__parse_type_name__Arg2_90, parse_tree__parse_type_name__V_46_46, &parse_tree__parse_type_name__Type_28);
                  }
                }
              if (parse_tree__parse_type_name__succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_type_name__Result_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__Type_28));
                }
              else
                {
                  *parse_tree__parse_type_name__Result_12 = parse_tree__parse_type_name__ill_formed_type_result_3_f_0(parse_tree__parse_type_name__ContextPieces_10, parse_tree__parse_type_name__VarSet_9, parse_tree__parse_type_name__Term_8);
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_type_name__Purity_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__CompoundTypeKind_11, (MR_Integer) 1)));
              MR_Word parse_tree__parse_type_name__SubTerm_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__CompoundTypeKind_11, (MR_Integer) 2)));
              MR_Word parse_tree__parse_type_name__Type_116;
              MR_String parse_tree__parse_type_name__Name_31;
              MR_Word parse_tree__parse_type_name__V_34_34;
              MR_Word parse_tree__parse_type_name__Args_104;
              MR_Word parse_tree__parse_type_name__V_32_32;

              parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__SubTerm_30)) == (MR_mktag((MR_Integer) 0)));
              if (parse_tree__parse_type_name__succeeded)
                {
                  parse_tree__parse_type_name__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__SubTerm_30, (MR_Integer) 0)));
                  parse_tree__parse_type_name__Args_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__SubTerm_30, (MR_Integer) 1)));
                  parse_tree__parse_type_name__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__SubTerm_30, (MR_Integer) 2)));
                  parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_34_34)) == (MR_mktag((MR_Integer) 0)));
                  if (parse_tree__parse_type_name__succeeded)
                    {
                      parse_tree__parse_type_name__Name_31 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_34_34, (MR_Integer) 0)));
                      if ((strcmp(parse_tree__parse_type_name__Name_31, (MR_String) "=") == 0))
                        {
                          MR_Word parse_tree__parse_type_name__V_39_39;
                          MR_Word parse_tree__parse_type_name__V_40_40;
                          MR_Word parse_tree__parse_type_name__V_41_41;
                          MR_String parse_tree__parse_type_name__V_42_42;
                          MR_Word parse_tree__parse_type_name__V_43_43;
                          MR_Word parse_tree__parse_type_name__V_44_44;
                          MR_Word parse_tree__parse_type_name__ArgTypes_91;
                          MR_Word parse_tree__parse_type_name__Arg1_92;
                          MR_Word parse_tree__parse_type_name__Arg2_93;
                          MR_Word parse_tree__parse_type_name__FuncArgs_94;
                          MR_Word parse_tree__parse_type_name__RetType_95;
                          MR_Word parse_tree__parse_type_name__V_33_33;

                          parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__Args_104)) == (MR_mktag((MR_Integer) 1)));
                          if (parse_tree__parse_type_name__succeeded)
                            {
                              parse_tree__parse_type_name__Arg1_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_104, (MR_Integer) 0)));
                              parse_tree__parse_type_name__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_104, (MR_Integer) 1)));
                              parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_39_39)) == (MR_mktag((MR_Integer) 1)));
                              if (parse_tree__parse_type_name__succeeded)
                                {
                                  parse_tree__parse_type_name__Arg2_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_39_39, (MR_Integer) 0)));
                                  parse_tree__parse_type_name__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_39_39, (MR_Integer) 1)));
                                  parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (parse_tree__parse_type_name__succeeded)
                                    {
                                      parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__Arg1_92)) == (MR_mktag((MR_Integer) 0)));
                                      if (parse_tree__parse_type_name__succeeded)
                                        {
                                          parse_tree__parse_type_name__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Arg1_92, (MR_Integer) 0)));
                                          parse_tree__parse_type_name__FuncArgs_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Arg1_92, (MR_Integer) 1)));
                                          parse_tree__parse_type_name__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Arg1_92, (MR_Integer) 2)));
                                          parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_41_41)) == (MR_mktag((MR_Integer) 0)));
                                          if (parse_tree__parse_type_name__succeeded)
                                            {
                                              parse_tree__parse_type_name__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_41_41, (MR_Integer) 0)));
                                              parse_tree__parse_type_name__succeeded = (strcmp(parse_tree__parse_type_name__V_42_42, (MR_String) "func") == 0);
                                              if (parse_tree__parse_type_name__succeeded)
                                                {
                                                  parse_tree__parse_type_name__V_43_43 = (MR_Integer) 1;
                                                  {
                                                    parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name__maybe_parse_types_3_p_0(parse_tree__parse_type_name__V_43_43, parse_tree__parse_type_name__FuncArgs_94, &parse_tree__parse_type_name__ArgTypes_91);
                                                  }
                                                  if (parse_tree__parse_type_name__succeeded)
                                                    {
                                                      parse_tree__parse_type_name__V_44_44 = (MR_Integer) 1;
                                                      {
                                                        parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name__maybe_parse_type_3_p_0(parse_tree__parse_type_name__V_44_44, parse_tree__parse_type_name__Arg2_93, &parse_tree__parse_type_name__RetType_95);
                                                      }
                                                      if (parse_tree__parse_type_name__succeeded)
                                                        {
                                                          mercury__private_builtin__dummy_var = (MR_Integer) 0;
                                                          {
                                                            parse_tree__prog_type__construct_higher_order_func_type_5_p_0(parse_tree__parse_type_name__Purity_29, parse_tree__parse_type_name__ArgTypes_91, parse_tree__parse_type_name__RetType_95, &parse_tree__parse_type_name__Type_116);
                                                          }
                                                          parse_tree__parse_type_name__succeeded = MR_TRUE;
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
                      if ((strcmp(parse_tree__parse_type_name__Name_31, (MR_String) "is") == 0))
                        {
                          MR_Word parse_tree__parse_type_name__V_35_35;
                          MR_Word parse_tree__parse_type_name__V_36_36;
                          MR_Word parse_tree__parse_type_name__Arg1_97;
                          MR_Word parse_tree__parse_type_name__Arg2_98;

                          parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__AllowHOInstInfo_7 == (MR_Integer) 0);
                          if (parse_tree__parse_type_name__succeeded)
                            {
                              parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__Args_104)) == (MR_mktag((MR_Integer) 1)));
                              if (parse_tree__parse_type_name__succeeded)
                                {
                                  parse_tree__parse_type_name__Arg1_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_104, (MR_Integer) 0)));
                                  parse_tree__parse_type_name__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_104, (MR_Integer) 1)));
                                  parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_35_35)) == (MR_mktag((MR_Integer) 1)));
                                  if (parse_tree__parse_type_name__succeeded)
                                    {
                                      parse_tree__parse_type_name__Arg2_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_35_35, (MR_Integer) 0)));
                                      parse_tree__parse_type_name__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_35_35, (MR_Integer) 1)));
                                      parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      if (parse_tree__parse_type_name__succeeded)
                                        {
                                          parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name__maybe_parse_ho_type_and_inst_4_p_0(parse_tree__parse_type_name__Arg1_97, parse_tree__parse_type_name__Arg2_98, parse_tree__parse_type_name__Purity_29, &parse_tree__parse_type_name__Type_116);
                                        }
                                    }
                                }
                            }
                        }
                      else
                      if ((strcmp(parse_tree__parse_type_name__Name_31, (MR_String) "pred") == 0))
                        {
                          MR_Word parse_tree__parse_type_name__ArgTypes_96;

                          {
                            parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name__maybe_parse_types_3_p_0((MR_Integer) 1, parse_tree__parse_type_name__Args_104, &parse_tree__parse_type_name__ArgTypes_96);
                          }
                          if (parse_tree__parse_type_name__succeeded)
                            {
                              mercury__private_builtin__dummy_var = (MR_Integer) 0;
                              {
                                parse_tree__prog_type__construct_higher_order_pred_type_4_p_0(parse_tree__parse_type_name__Purity_29, parse_tree__parse_type_name__ArgTypes_96, &parse_tree__parse_type_name__Type_116);
                              }
                              parse_tree__parse_type_name__succeeded = MR_TRUE;
                            }
                        }
                      else
                        parse_tree__parse_type_name__succeeded = MR_FALSE;
                    }
                }
              if (parse_tree__parse_type_name__succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_type_name__Result_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__Type_116));
                }
              else
                {
                  *parse_tree__parse_type_name__Result_12 = parse_tree__parse_type_name__ill_formed_type_result_3_f_0(parse_tree__parse_type_name__ContextPieces_10, parse_tree__parse_type_name__VarSet_9, parse_tree__parse_type_name__Term_8);
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__parse_type_name__TypeCtorInfo_124_124 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
              MR_Word parse_tree__parse_type_name__TypeCtorInfo_125_125;
              MR_String parse_tree__parse_type_name__TermStr_18;
              MR_Word parse_tree__parse_type_name__Pieces_19;
              MR_Word parse_tree__parse_type_name__Spec_20;
              MR_Word parse_tree__parse_type_name__V_56_56;
              MR_Word parse_tree__parse_type_name__V_57_57;
              MR_Word parse_tree__parse_type_name__V_59_59;
              MR_Word parse_tree__parse_type_name__V_62_62;
              MR_Word parse_tree__parse_type_name__V_63_63;
              MR_Word parse_tree__parse_type_name__V_72_72;
              MR_Word parse_tree__parse_type_name__V_73_73;
              MR_Word parse_tree__parse_type_name__V_74_74;
              MR_Word parse_tree__parse_type_name__V_75_75;
              MR_Word parse_tree__parse_type_name__V_76_76;
              MR_Word parse_tree__parse_type_name__V_79_79;

              {
                parse_tree__parse_type_name__TermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_124_124, parse_tree__parse_type_name__VarSet_9, parse_tree__parse_type_name__Term_8);
              }
              parse_tree__parse_type_name__TypeCtorInfo_125_125 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              {
                parse_tree__parse_type_name__V_56_56 = mercury__cord__list_1_f_0(parse_tree__parse_type_name__TypeCtorInfo_125_125, parse_tree__parse_type_name__ContextPieces_10);
              }
              {
                parse_tree__parse_type_name__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_63_63, 1) = ((MR_Box) (parse_tree__parse_type_name__TermStr_18));
              }
              {
                parse_tree__parse_type_name__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_62_62, 0) = ((MR_Box) (parse_tree__parse_type_name__V_63_63));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[3])));
              }
              {
                parse_tree__parse_type_name__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[4])));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_59_59, 1) = ((MR_Box) (parse_tree__parse_type_name__V_62_62));
              }
              {
                parse_tree__parse_type_name__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_57_57, 1) = ((MR_Box) (parse_tree__parse_type_name__V_59_59));
              }
              {
                parse_tree__parse_type_name__Pieces_19 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_125_125, parse_tree__parse_type_name__V_56_56, parse_tree__parse_type_name__V_57_57);
              }
              {
                parse_tree__parse_type_name__V_74_74 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_name__TypeCtorInfo_124_124, parse_tree__parse_type_name__Term_8);
              }
              {
                parse_tree__parse_type_name__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_76_76, 0) = ((MR_Box) (parse_tree__parse_type_name__Pieces_19));
              }
              {
                parse_tree__parse_type_name__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_75_75, 0) = ((MR_Box) (parse_tree__parse_type_name__V_76_76));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_type_name__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_73_73, 0) = ((MR_Box) (parse_tree__parse_type_name__V_74_74));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_73_73, 1) = ((MR_Box) (parse_tree__parse_type_name__V_75_75));
              }
              {
                parse_tree__parse_type_name__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_72_72, 0) = ((MR_Box) (parse_tree__parse_type_name__V_73_73));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_type_name__Spec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_20, 2) = ((MR_Box) (parse_tree__parse_type_name__V_72_72));
              }
              {
                parse_tree__parse_type_name__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_79_79, 0) = ((MR_Box) (parse_tree__parse_type_name__Spec_20));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_type_name__Result_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_79_79));
              }
            }
            break;
        }
        break;
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_type_name__is_known_type_name_1_p_0(
  MR_String parse_tree__parse_type_name__Name_2)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;

    {
      MR_Word parse_tree__parse_type_name__V_3_3;

      {
        parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__parse_type_name__Name_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_type_name__V_3_3);
      }
    }
    if (!(parse_tree__parse_type_name__succeeded))
      parse_tree__parse_type_name__succeeded = (strcmp(parse_tree__parse_type_name__Name_2, (MR_String) "func") == 0);
    return parse_tree__parse_type_name__succeeded;
  }
}

void MR_CALL 
parse_tree__parse_type_name__parse_types_5_p_0(
  MR_Word parse_tree__parse_type_name__AllowHOInstInfo_6,
  MR_Word parse_tree__parse_type_name__Terms_7,
  MR_Word parse_tree__parse_type_name__VarSet_8,
  MR_Word parse_tree__parse_type_name__ContextPieces_9,
  MR_Word * parse_tree__parse_type_name__Result_10)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Word parse_tree__parse_type_name__RevTypes_11;
    MR_Word parse_tree__parse_type_name__Specs_12;

    {
      parse_tree__parse_type_name__parse_types_acc_8_p_0(parse_tree__parse_type_name__AllowHOInstInfo_6, parse_tree__parse_type_name__Terms_7, parse_tree__parse_type_name__VarSet_8, parse_tree__parse_type_name__ContextPieces_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_type_name__RevTypes_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_type_name__Specs_12);
    }
    if ((parse_tree__parse_type_name__Specs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word parse_tree__parse_type_name__V_17_17;

        {
          parse_tree__parse_type_name__V_17_17 = mercury__list__reverse_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__parse_type_name__RevTypes_11);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_type_name__Result_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_17_17));
        }
      }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *parse_tree__parse_type_name__Result_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_name__Specs_12));
      }
  }
}

MR_bool MR_CALL 
parse_tree__parse_type_name__maybe_parse_types_3_p_0(
  MR_Word parse_tree__parse_type_name__AllowHOInstInfo_4,
  MR_Word parse_tree__parse_type_name__Term_5,
  MR_Word * parse_tree__parse_type_name__Types_6)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Word parse_tree__parse_type_name__VarSet_7;
    MR_Word parse_tree__parse_type_name__ContextPieces_8;
    MR_Word parse_tree__parse_type_name__V_9_9;

    {
      parse_tree__parse_type_name__VarSet_7 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
    {
      parse_tree__parse_type_name__ContextPieces_8 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
    }
    {
      parse_tree__parse_type_name__parse_types_5_p_0(parse_tree__parse_type_name__AllowHOInstInfo_4, parse_tree__parse_type_name__Term_5, parse_tree__parse_type_name__VarSet_7, parse_tree__parse_type_name__ContextPieces_8, &parse_tree__parse_type_name__V_9_9);
    }
    parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_9_9)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__parse_type_name__succeeded)
      *parse_tree__parse_type_name__Types_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_9_9, (MR_Integer) 0)));
    return parse_tree__parse_type_name__succeeded;
  }
}

void MR_CALL 
parse_tree__parse_type_name__parse_type_5_p_0(
  MR_Word parse_tree__parse_type_name__AllowHOInstInfo_6,
  MR_Word parse_tree__parse_type_name__Term_7,
  MR_Word parse_tree__parse_type_name__VarSet_8,
  MR_Word parse_tree__parse_type_name__ContextPieces_9,
  MR_Word * parse_tree__parse_type_name__Result_10)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;

    if (((MR_tag((MR_Word) parse_tree__parse_type_name__Term_7)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__parse_type_name__Functor_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Term_7, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_name__ArgTerms_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Term_7, (MR_Integer) 1)));
        MR_Word parse_tree__parse_type_name__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Term_7, (MR_Integer) 2)));

        switch (MR_tag((MR_Word) parse_tree__parse_type_name__Functor_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String parse_tree__parse_type_name__Name_23 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Functor_14, (MR_Integer) 0)));
              MR_Word parse_tree__parse_type_name__KnownTypeKind_24;

              {
                parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__parse_type_name__Name_23, parse_tree__parse_type_name__ArgTerms_15, &parse_tree__parse_type_name__KnownTypeKind_24);
              }
              if (parse_tree__parse_type_name__succeeded)
                switch (MR_tag((MR_Word) parse_tree__parse_type_name__KnownTypeKind_24)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      *parse_tree__parse_type_name__Result_10 = parse_tree__parse_type_name__ill_formed_type_result_3_f_0(parse_tree__parse_type_name__ContextPieces_9, parse_tree__parse_type_name__VarSet_8, parse_tree__parse_type_name__Term_7);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word parse_tree__parse_type_name__Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__KnownTypeKind_24, (MR_Integer) 0)));

                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__parse_type_name__Result_10 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__Type_25));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word parse_tree__parse_type_name__CompoundTypeKind_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_type_name__KnownTypeKind_24, (MR_Integer) 0)));

                      {
                        parse_tree__parse_type_name__parse_compound_type_6_p_0(parse_tree__parse_type_name__AllowHOInstInfo_6, parse_tree__parse_type_name__Term_7, parse_tree__parse_type_name__VarSet_8, parse_tree__parse_type_name__ContextPieces_9, parse_tree__parse_type_name__CompoundTypeKind_26, parse_tree__parse_type_name__Result_10);
                      }
                    }
                    break;
                }
              else
                {
                  MR_Word parse_tree__parse_type_name__NameResult_27;

                  {
                    parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_name__Term_7, parse_tree__parse_type_name__VarSet_8, parse_tree__parse_type_name__ContextPieces_9, &parse_tree__parse_type_name__NameResult_27);
                  }
                  if (((MR_tag((MR_Word) parse_tree__parse_type_name__NameResult_27)) == (MR_mktag((MR_Integer) 0))))
                    {
                      MR_Word parse_tree__parse_type_name__Specs_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__NameResult_27, (MR_Integer) 0)));

                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *parse_tree__parse_type_name__Result_10 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_name__Specs_38));
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__parse_type_name__SymName_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__NameResult_27, (MR_Integer) 0)));
                      MR_Word parse_tree__parse_type_name__SymNameArgTerms_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__NameResult_27, (MR_Integer) 1)));
                      MR_Word parse_tree__parse_type_name__SymNameArgsResult_30;

                      {
                        parse_tree__parse_type_name__parse_types_5_p_0((MR_Integer) 1, parse_tree__parse_type_name__SymNameArgTerms_29, parse_tree__parse_type_name__VarSet_8, parse_tree__parse_type_name__ContextPieces_9, &parse_tree__parse_type_name__SymNameArgsResult_30);
                      }
                      if (((MR_tag((MR_Word) parse_tree__parse_type_name__SymNameArgsResult_30)) == (MR_mktag((MR_Integer) 0))))
                        *parse_tree__parse_type_name__Result_10 = (MR_Word) parse_tree__parse_type_name__SymNameArgsResult_30;
                      else
                        {
                          MR_Word parse_tree__parse_type_name__ArgTypes_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__SymNameArgsResult_30, (MR_Integer) 0)));
                          MR_Word parse_tree__parse_type_name__V_34_34;

                          {
                            parse_tree__parse_type_name__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_34_34, 0) = ((MR_Box) (parse_tree__parse_type_name__SymName_28));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_34_34, 1) = ((MR_Box) (parse_tree__parse_type_name__ArgTypes_31));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_34_34, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *parse_tree__parse_type_name__Result_10 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_34_34));
                          }
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              *parse_tree__parse_type_name__Result_10 = parse_tree__parse_type_name__ill_formed_type_result_3_f_0(parse_tree__parse_type_name__ContextPieces_9, parse_tree__parse_type_name__VarSet_8, parse_tree__parse_type_name__Term_7);
            }
            break;
          case (MR_Integer) 3:
            {
              *parse_tree__parse_type_name__Result_10 = parse_tree__parse_type_name__ill_formed_type_result_3_f_0(parse_tree__parse_type_name__ContextPieces_9, parse_tree__parse_type_name__VarSet_8, parse_tree__parse_type_name__Term_7);
            }
            break;
        }
      }
    else
      {
        MR_Word parse_tree__parse_type_name__Var0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Term_7, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_name__Var_13;
        MR_Word parse_tree__parse_type_name__V_36_36;
        MR_Word parse_tree__parse_type_name__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Term_7, (MR_Integer) 1)));

        {
          mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_name__Var0_11, &parse_tree__parse_type_name__Var_13);
        }
        {
          parse_tree__parse_type_name__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_36_36, 0) = ((MR_Box) (parse_tree__parse_type_name__Var_13));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_type_name__Result_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_36_36));
        }
      }
  }
}

MR_bool MR_CALL 
parse_tree__parse_type_name__maybe_parse_type_3_p_0(
  MR_Word parse_tree__parse_type_name__AllowHOInstInfo_4,
  MR_Word parse_tree__parse_type_name__Term_5,
  MR_Word * parse_tree__parse_type_name__Type_6)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Word parse_tree__parse_type_name__VarSet_7;
    MR_Word parse_tree__parse_type_name__ContextPieces_8;
    MR_Word parse_tree__parse_type_name__V_9_9;

    {
      parse_tree__parse_type_name__VarSet_7 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
    {
      parse_tree__parse_type_name__ContextPieces_8 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
    }
    {
      parse_tree__parse_type_name__parse_type_5_p_0(parse_tree__parse_type_name__AllowHOInstInfo_4, parse_tree__parse_type_name__Term_5, parse_tree__parse_type_name__VarSet_7, parse_tree__parse_type_name__ContextPieces_8, &parse_tree__parse_type_name__V_9_9);
    }
    parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_9_9)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__parse_type_name__succeeded)
      *parse_tree__parse_type_name__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_9_9, (MR_Integer) 0)));
    return parse_tree__parse_type_name__succeeded;
  }
}

void mercury__parse_tree__parse_type_name__init(void)
{
}

void mercury__parse_tree__parse_type_name__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_allow_ho_inst_info_0);
	MR_register_type_ctor_info(&parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_known_compound_type_kind_1);
	MR_register_type_ctor_info(&parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_known_type_kind_1);
}

void mercury__parse_tree__parse_type_name__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.parse_type_name. */
