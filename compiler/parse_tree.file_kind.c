/*
** Automatically generated from `file_kind.m'
** by the Mercury compiler,
** version 20.01.1-beta-2020-02-11
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


// :- module parse_tree.file_kind.
// :- implementation.

/*
INIT mercury__parse_tree__file_kind__init
ENDINIT
*/

#include "parse_tree.file_kind.mih"


#include "parse_tree.mih"
#include "builtin.mih"
#include "private_builtin.mih"




static const MR_DuFunctorDesc parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_file_kind_0_0;

static const MR_PseudoTypeInfo parse_tree__file_kind__parse_tree__file_kind__field_types_file_kind_0_1[1];

static const MR_DuArgLocn parse_tree__file_kind__parse_tree__file_kind__field_locns_file_kind_0_1[1];

static const MR_DuFunctorDesc parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_file_kind_0_1;

static const MR_PseudoTypeInfo parse_tree__file_kind__parse_tree__file_kind__field_types_file_kind_0_2[1];

static const MR_DuArgLocn parse_tree__file_kind__parse_tree__file_kind__field_locns_file_kind_0_2[1];

static const MR_DuFunctorDesc parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_file_kind_0_2;

static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_file_kind_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_file_kind_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_file_kind_0_2[1];

static const MR_DuPtagLayout parse_tree__file_kind__parse_tree__file_kind__du_ptag_ordered_file_kind_0[3];

static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_name_ordered_file_kind_0[3];

static const MR_Integer parse_tree__file_kind__parse_tree__file_kind__functor_number_map_file_kind_0[3];

static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_0;

static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_1;

static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_2;

static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_3;

static const MR_EnumFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__enum_value_ordered_int_file_kind_0[4];

static const MR_EnumFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__enum_name_ordered_int_file_kind_0[4];

static const MR_Integer parse_tree__file_kind__parse_tree__file_kind__functor_number_map_int_file_kind_0[4];

static const MR_PseudoTypeInfo parse_tree__file_kind__parse_tree__file_kind__field_types_int_or_opt_file_kind_0_0[1];

static const MR_DuArgLocn parse_tree__file_kind__parse_tree__file_kind__field_locns_int_or_opt_file_kind_0_0[1];

static const MR_DuFunctorDesc parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_int_or_opt_file_kind_0_0;

static const MR_PseudoTypeInfo parse_tree__file_kind__parse_tree__file_kind__field_types_int_or_opt_file_kind_0_1[1];

static const MR_DuArgLocn parse_tree__file_kind__parse_tree__file_kind__field_locns_int_or_opt_file_kind_0_1[1];

static const MR_DuFunctorDesc parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_int_or_opt_file_kind_0_1;

static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_int_or_opt_file_kind_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_int_or_opt_file_kind_0_1[1];

static const MR_DuPtagLayout parse_tree__file_kind__parse_tree__file_kind__du_ptag_ordered_int_or_opt_file_kind_0[2];

static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_name_ordered_int_or_opt_file_kind_0[2];

static const MR_Integer parse_tree__file_kind__parse_tree__file_kind__functor_number_map_int_or_opt_file_kind_0[2];

static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_opt_file_kind_0_0;

static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_opt_file_kind_0_1;

static const MR_EnumFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__enum_value_ordered_opt_file_kind_0[2];

static const MR_EnumFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__enum_name_ordered_opt_file_kind_0[2];

static const MR_Integer parse_tree__file_kind__parse_tree__file_kind__functor_number_map_opt_file_kind_0[2];

static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_src_file_kind_0_0;

static const MR_EnumFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__enum_value_ordered_src_file_kind_0[1];

static const MR_EnumFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__enum_name_ordered_src_file_kind_0[1];

static const MR_Integer parse_tree__file_kind__parse_tree__file_kind__functor_number_map_src_file_kind_0[1];

static MR_bool MR_CALL 
parse_tree__file_kind____Unify____file_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_kind____Compare____file_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_kind____Unify____int_file_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_kind____Compare____int_file_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_kind____Unify____int_or_opt_file_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_kind____Compare____int_or_opt_file_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_kind____Unify____opt_file_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_kind____Compare____opt_file_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_kind____Unify____src_file_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_kind____Compare____src_file_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__file_kind_scalar_common_2[4][1];


/* sealed */ struct parse_tree__file_kind__vector_common_type_1_0_s {
  const MR_String parse_tree__file_kind__vector_common_type_1_0__vct_1_f_0;
};

static /* final */ const struct parse_tree__file_kind__vector_common_type_1_0_s parse_tree__file_kind_vector_common_1[8];

/* sealed */ struct parse_tree__file_kind__vector_common_type_3_0_s {
  const MR_String parse_tree__file_kind__vector_common_type_3_0__vct_3_f_0;
  const MR_Word parse_tree__file_kind__vector_common_type_3_0__vct_3_f_1;
};

static /* final */ const struct parse_tree__file_kind__vector_common_type_3_0_s parse_tree__file_kind_vector_common_3[7];



static /* final */ const MR_Box parse_tree__file_kind_scalar_common_2[4][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 3 */
  {
    (MR_Box) ((MR_Unsigned) 3U)
  },
};


static /* final */ const struct parse_tree__file_kind__vector_common_type_1_0_s parse_tree__file_kind_vector_common_1[8] = {
  /* row 0 */   {     (MR_String) ".int0" },
  /* row 1 */   {     (MR_String) ".int" },
  /* row 2 */   {     (MR_String) ".int2" },
  /* row 3 */   {     (MR_String) ".int3" },
  /* row 4 */   {     (MR_String) ".int0" },
  /* row 5 */   {     (MR_String) ".int" },
  /* row 6 */   {     (MR_String) ".int2" },
  /* row 7 */   {     (MR_String) ".int3" },
};

static /* final */ const struct parse_tree__file_kind__vector_common_type_3_0_s parse_tree__file_kind_vector_common_3[7] = {
  /* row 0 */
  {
    (MR_String) ".int",
    (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__file_kind_scalar_common_2[0]))
  },
  /* row 1 */
  {
    (MR_String) ".int0",
    (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__file_kind_scalar_common_2[1]))
  },
  /* row 2 */
  {
    (MR_String) ".int2",
    (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__file_kind_scalar_common_2[2]))
  },
  /* row 3 */
  {
    (MR_String) ".int3",
    (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__file_kind_scalar_common_2[3]))
  },
  /* row 4 */
  {
    (MR_String) ".m",
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 5 */
  {
    (MR_String) ".opt",
    (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__file_kind_scalar_common_2[1]))
  },
  /* row 6 */
  {
    (MR_String) ".trans_opt",
    (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__file_kind_scalar_common_2[0]))
  },
};





static const MR_DuFunctorDesc parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_file_kind_0_0 = {
  (MR_String) "fk_src",
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

static const MR_PseudoTypeInfo parse_tree__file_kind__parse_tree__file_kind__field_types_file_kind_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0)
};

static const MR_DuArgLocn parse_tree__file_kind__parse_tree__file_kind__field_locns_file_kind_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_file_kind_0_1 = {
  (MR_String) "fk_int",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__file_kind__parse_tree__file_kind__field_types_file_kind_0_1,
  NULL,
  parse_tree__file_kind__parse_tree__file_kind__field_locns_file_kind_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__file_kind__parse_tree__file_kind__field_types_file_kind_0_2[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0)
};

static const MR_DuArgLocn parse_tree__file_kind__parse_tree__file_kind__field_locns_file_kind_0_2[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_file_kind_0_2 = {
  (MR_String) "fk_opt",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__file_kind__parse_tree__file_kind__field_types_file_kind_0_2,
  NULL,
  parse_tree__file_kind__parse_tree__file_kind__field_locns_file_kind_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_file_kind_0_0[1] = {
  &parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_file_kind_0_0
};

static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_file_kind_0_1[1] = {
  &parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_file_kind_0_1
};

static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_file_kind_0_2[1] = {
  &parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_file_kind_0_2
};

static const MR_DuPtagLayout parse_tree__file_kind__parse_tree__file_kind__du_ptag_ordered_file_kind_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_file_kind_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_file_kind_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_file_kind_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_name_ordered_file_kind_0[3] = {
  &parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_file_kind_0_1,
  &parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_file_kind_0_2,
  &parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_file_kind_0_0
};

static const MR_Integer parse_tree__file_kind__parse_tree__file_kind__functor_number_map_file_kind_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_file_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__file_kind____Unify____file_kind_0_0_10001)),
  ((MR_Box) (parse_tree__file_kind____Compare____file_kind_0_0_10001)),
  (MR_String) "parse_tree.file_kind",
  (MR_String) "file_kind",
  {     parse_tree__file_kind__parse_tree__file_kind__du_name_ordered_file_kind_0 },
  {     parse_tree__file_kind__parse_tree__file_kind__du_ptag_ordered_file_kind_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  parse_tree__file_kind__parse_tree__file_kind__functor_number_map_file_kind_0
};

static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_0 = {
  (MR_String) "ifk_int0",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_1 = {
  (MR_String) "ifk_int1",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_2 = {
  (MR_String) "ifk_int2",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_3 = {
  (MR_String) "ifk_int3",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__enum_value_ordered_int_file_kind_0[4] = {
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_0,
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_1,
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_2,
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_3
};

static const MR_EnumFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__enum_name_ordered_int_file_kind_0[4] = {
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_0,
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_1,
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_2,
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_3
};

static const MR_Integer parse_tree__file_kind__parse_tree__file_kind__functor_number_map_int_file_kind_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__file_kind____Unify____int_file_kind_0_0_10001)),
  ((MR_Box) (parse_tree__file_kind____Compare____int_file_kind_0_0_10001)),
  (MR_String) "parse_tree.file_kind",
  (MR_String) "int_file_kind",
  {     parse_tree__file_kind__parse_tree__file_kind__enum_name_ordered_int_file_kind_0 },
  {     parse_tree__file_kind__parse_tree__file_kind__enum_value_ordered_int_file_kind_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  parse_tree__file_kind__parse_tree__file_kind__functor_number_map_int_file_kind_0
};

static const MR_PseudoTypeInfo parse_tree__file_kind__parse_tree__file_kind__field_types_int_or_opt_file_kind_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0)
};

static const MR_DuArgLocn parse_tree__file_kind__parse_tree__file_kind__field_locns_int_or_opt_file_kind_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_int_or_opt_file_kind_0_0 = {
  (MR_String) "iofk_int",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__file_kind__parse_tree__file_kind__field_types_int_or_opt_file_kind_0_0,
  NULL,
  parse_tree__file_kind__parse_tree__file_kind__field_locns_int_or_opt_file_kind_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__file_kind__parse_tree__file_kind__field_types_int_or_opt_file_kind_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0)
};

static const MR_DuArgLocn parse_tree__file_kind__parse_tree__file_kind__field_locns_int_or_opt_file_kind_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_int_or_opt_file_kind_0_1 = {
  (MR_String) "iofk_opt",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__file_kind__parse_tree__file_kind__field_types_int_or_opt_file_kind_0_1,
  NULL,
  parse_tree__file_kind__parse_tree__file_kind__field_locns_int_or_opt_file_kind_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_int_or_opt_file_kind_0_0[1] = {
  &parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_int_or_opt_file_kind_0_0
};

static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_int_or_opt_file_kind_0_1[1] = {
  &parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_int_or_opt_file_kind_0_1
};

static const MR_DuPtagLayout parse_tree__file_kind__parse_tree__file_kind__du_ptag_ordered_int_or_opt_file_kind_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_int_or_opt_file_kind_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_int_or_opt_file_kind_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_name_ordered_int_or_opt_file_kind_0[2] = {
  &parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_int_or_opt_file_kind_0_0,
  &parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_int_or_opt_file_kind_0_1
};

static const MR_Integer parse_tree__file_kind__parse_tree__file_kind__functor_number_map_int_or_opt_file_kind_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_or_opt_file_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__file_kind____Unify____int_or_opt_file_kind_0_0_10001)),
  ((MR_Box) (parse_tree__file_kind____Compare____int_or_opt_file_kind_0_0_10001)),
  (MR_String) "parse_tree.file_kind",
  (MR_String) "int_or_opt_file_kind",
  {     parse_tree__file_kind__parse_tree__file_kind__du_name_ordered_int_or_opt_file_kind_0 },
  {     parse_tree__file_kind__parse_tree__file_kind__du_ptag_ordered_int_or_opt_file_kind_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__file_kind__parse_tree__file_kind__functor_number_map_int_or_opt_file_kind_0
};

static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_opt_file_kind_0_0 = {
  (MR_String) "ofk_opt",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_opt_file_kind_0_1 = {
  (MR_String) "ofk_trans_opt",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__enum_value_ordered_opt_file_kind_0[2] = {
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_opt_file_kind_0_0,
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_opt_file_kind_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__enum_name_ordered_opt_file_kind_0[2] = {
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_opt_file_kind_0_0,
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_opt_file_kind_0_1
};

static const MR_Integer parse_tree__file_kind__parse_tree__file_kind__functor_number_map_opt_file_kind_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__file_kind____Unify____opt_file_kind_0_0_10001)),
  ((MR_Box) (parse_tree__file_kind____Compare____opt_file_kind_0_0_10001)),
  (MR_String) "parse_tree.file_kind",
  (MR_String) "opt_file_kind",
  {     parse_tree__file_kind__parse_tree__file_kind__enum_name_ordered_opt_file_kind_0 },
  {     parse_tree__file_kind__parse_tree__file_kind__enum_value_ordered_opt_file_kind_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__file_kind__parse_tree__file_kind__functor_number_map_opt_file_kind_0
};

static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_src_file_kind_0_0 = {
  (MR_String) "sfk_src",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__enum_value_ordered_src_file_kind_0[1] = {
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_src_file_kind_0_0
};

static const MR_EnumFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__enum_name_ordered_src_file_kind_0[1] = {
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_src_file_kind_0_0
};

static const MR_Integer parse_tree__file_kind__parse_tree__file_kind__functor_number_map_src_file_kind_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_src_file_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (parse_tree__file_kind____Unify____src_file_kind_0_0_10001)),
  ((MR_Box) (parse_tree__file_kind____Compare____src_file_kind_0_0_10001)),
  (MR_String) "parse_tree.file_kind",
  (MR_String) "src_file_kind",
  {     parse_tree__file_kind__parse_tree__file_kind__enum_name_ordered_src_file_kind_0 },
  {     parse_tree__file_kind__parse_tree__file_kind__enum_value_ordered_src_file_kind_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__file_kind__parse_tree__file_kind__functor_number_map_src_file_kind_0
};

void MR_CALL 
parse_tree__file_kind____Compare____src_file_kind_0_0(
  MR_Word * HeadVar__1_1)
{
  parse_tree__file_kind__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_102_105_108_101_95_107_105_110_100_95_95_115_114_99_95_102_105_108_101_95_107_105_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
parse_tree__file_kind__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_102_105_108_101_95_107_105_110_100_95_95_115_114_99_95_102_105_108_101_95_107_105_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
parse_tree__file_kind____Unify____src_file_kind_0_0(void)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__file_kind__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_102_105_108_101_95_107_105_110_100_95_95_115_114_99_95_102_105_108_101_95_107_105_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__file_kind__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_102_105_108_101_95_107_105_110_100_95_95_115_114_99_95_102_105_108_101_95_107_105_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
parse_tree__file_kind____Compare____opt_file_kind_0_0(
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

MR_bool MR_CALL 
parse_tree__file_kind____Unify____opt_file_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__file_kind____Compare____int_or_opt_file_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Integer Var_18 = (MR_Integer) (Var_16);
        MR_Integer Var_19 = (MR_Integer) (ArgY1_5);

        succeeded = (Var_18 < Var_19);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_18 > Var_19);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Integer Var_20 = (MR_Integer) (Var_17);
        MR_Integer Var_21 = (MR_Integer) (ArgY1_11);

        succeeded = (Var_20 < Var_21);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_20 > Var_21);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__file_kind____Unify____int_or_opt_file_kind_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
        succeeded = (ArgX1_3 == ArgY1_4);
      }
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
        succeeded = (ArgX1_5 == ArgY1_6);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__file_kind____Compare____int_file_kind_0_0(
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

MR_bool MR_CALL 
parse_tree__file_kind____Unify____int_file_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__file_kind____Compare____file_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_16 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_17 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_16 == CastY_17);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Integer Var_22 = (MR_Integer) (Var_20);
                  MR_Integer Var_23 = (MR_Integer) (ArgY1_8);

                  succeeded = (Var_22 < Var_23);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_22 > Var_23);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
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
            MR_Word Var_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

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
                  MR_Word ArgY1_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                  MR_Integer Var_24 = (MR_Integer) (Var_21);
                  MR_Integer Var_25 = (MR_Integer) (ArgY1_15);

                  succeeded = (Var_24 < Var_25);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_24 > Var_25);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
parse_tree__file_kind____Unify____file_kind_0_0(
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
            MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_4 == CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              succeeded = (ArgX1_7 == ArgY1_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__file_kind__extension_to_file_kind_2_p_0(
  MR_String Extension_3,
  MR_Word * FileKind_4)
{
  {
    MR_bool succeeded;
    MR_Integer lo_0 = (MR_Integer) 0;
    MR_Integer hi_1 = (MR_Integer) 6;
    MR_Integer mid_2;
    MR_Integer result_3;

    // binary string simple lookup switch
    ;
    do
    {
      mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
      result_3 = MR_strcmp(Extension_3, ((&parse_tree__file_kind_vector_common_3[0 + mid_2]))->parse_tree__file_kind__vector_common_type_3_0__vct_3_f_0);
      if ((result_3 == (MR_Integer) 0))
      {
        *FileKind_4 = ((&parse_tree__file_kind_vector_common_3[0 + mid_2]))->parse_tree__file_kind__vector_common_type_3_0__vct_3_f_1;
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
    return succeeded;
  }
}

MR_String MR_CALL 
parse_tree__file_kind__opt_file_kind_to_extension_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_String) ".opt";
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_String) ".trans_opt";
        break;
    }
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
parse_tree__file_kind__int_file_kind_to_extension_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2 = ((&parse_tree__file_kind_vector_common_1[4 + HeadVar__1_1]))->parse_tree__file_kind__vector_common_type_1_0__vct_1_f_0;

    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
parse_tree__file_kind__file_kind_to_extension_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_String) ".m";
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntFileKind_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);

          HeadVar__2_2 = ((&parse_tree__file_kind_vector_common_1[0 + IntFileKind_3]))->parse_tree__file_kind__vector_common_type_1_0__vct_1_f_0;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word OptFileKind_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (OptFileKind_4) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              HeadVar__2_2 = (MR_String) ".opt";
              break;
            case (MR_Integer) 1:
              HeadVar__2_2 = (MR_String) ".trans_opt";
              break;
          }
        }
        break;
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
parse_tree__file_kind____Unify____file_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__file_kind____Unify____file_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__file_kind____Compare____file_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__file_kind____Compare____file_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__file_kind____Unify____int_file_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__file_kind____Unify____int_file_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__file_kind____Compare____int_file_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__file_kind____Compare____int_file_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__file_kind____Unify____int_or_opt_file_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__file_kind____Unify____int_or_opt_file_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__file_kind____Compare____int_or_opt_file_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__file_kind____Compare____int_or_opt_file_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__file_kind____Unify____opt_file_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__file_kind____Unify____opt_file_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__file_kind____Compare____opt_file_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__file_kind____Compare____opt_file_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__file_kind____Unify____src_file_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__file_kind____Unify____src_file_kind_0_0();
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__file_kind____Compare____src_file_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__file_kind____Compare____src_file_kind_0_0(&conv0_HeadVar__1_1);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__file_kind__init(void)
{
}

void mercury__parse_tree__file_kind__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_file_kind_0);
	MR_register_type_ctor_info(&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0);
	MR_register_type_ctor_info(&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_or_opt_file_kind_0);
	MR_register_type_ctor_info(&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0);
	MR_register_type_ctor_info(&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_src_file_kind_0);
}

void mercury__parse_tree__file_kind__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__file_kind__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.file_kind.
