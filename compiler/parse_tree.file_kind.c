/*
** Automatically generated from `file_kind.m'
** by the Mercury compiler,
** version rotd-2016-06-30
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


/* :- module parse_tree.file_kind. */
/* :- implementation. */

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

static const MR_DuFunctorDesc parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_file_kind_0_1;

static const MR_PseudoTypeInfo parse_tree__file_kind__parse_tree__file_kind__field_types_file_kind_0_2[1];

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

static const MR_DuFunctorDesc parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_int_or_opt_file_kind_0_0;

static const MR_PseudoTypeInfo parse_tree__file_kind__parse_tree__file_kind__field_types_int_or_opt_file_kind_0_1[1];

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
  MR_Box parse_tree__file_kind__wrapper_arg_1,
  MR_Box parse_tree__file_kind__wrapper_arg_2);

static void MR_CALL 
parse_tree__file_kind____Compare____file_kind_0_0_10001(
  MR_Box * parse_tree__file_kind__wrapper_arg_1,
  MR_Box parse_tree__file_kind__wrapper_arg_2,
  MR_Box parse_tree__file_kind__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_kind____Unify____int_file_kind_0_0_10001(
  MR_Box parse_tree__file_kind__wrapper_arg_1,
  MR_Box parse_tree__file_kind__wrapper_arg_2);

static void MR_CALL 
parse_tree__file_kind____Compare____int_file_kind_0_0_10001(
  MR_Box * parse_tree__file_kind__wrapper_arg_1,
  MR_Box parse_tree__file_kind__wrapper_arg_2,
  MR_Box parse_tree__file_kind__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_kind____Unify____int_or_opt_file_kind_0_0_10001(
  MR_Box parse_tree__file_kind__wrapper_arg_1,
  MR_Box parse_tree__file_kind__wrapper_arg_2);

static void MR_CALL 
parse_tree__file_kind____Compare____int_or_opt_file_kind_0_0_10001(
  MR_Box * parse_tree__file_kind__wrapper_arg_1,
  MR_Box parse_tree__file_kind__wrapper_arg_2,
  MR_Box parse_tree__file_kind__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_kind____Unify____opt_file_kind_0_0_10001(
  MR_Box parse_tree__file_kind__wrapper_arg_1,
  MR_Box parse_tree__file_kind__wrapper_arg_2);

static void MR_CALL 
parse_tree__file_kind____Compare____opt_file_kind_0_0_10001(
  MR_Box * parse_tree__file_kind__wrapper_arg_1,
  MR_Box parse_tree__file_kind__wrapper_arg_2,
  MR_Box parse_tree__file_kind__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_kind____Unify____src_file_kind_0_0_10001(
  MR_Box parse_tree__file_kind__wrapper_arg_1,
  MR_Box parse_tree__file_kind__wrapper_arg_2);

static void MR_CALL 
parse_tree__file_kind____Compare____src_file_kind_0_0_10001(
  MR_Box * parse_tree__file_kind__wrapper_arg_1,
  MR_Box parse_tree__file_kind__wrapper_arg_2,
  MR_Box parse_tree__file_kind__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__file_kind_scalar_common_2[6][1];


/* sealed */ struct parse_tree__file_kind__vector_common_type_1_0_s {
  const MR_String parse_tree__file_kind__vector_common_type_1_0__vct_1_f_0;
};

static /* final */ const struct parse_tree__file_kind__vector_common_type_1_0_s parse_tree__file_kind_vector_common_1[8];

/* sealed */ struct parse_tree__file_kind__vector_common_type_3_0_s {
  const MR_String parse_tree__file_kind__vector_common_type_3_0__vct_3_f_0;
  const MR_Word parse_tree__file_kind__vector_common_type_3_0__vct_3_f_1;
};

static /* final */ const struct parse_tree__file_kind__vector_common_type_3_0_s parse_tree__file_kind_vector_common_3[7];



static /* final */ const MR_Box parse_tree__file_kind_scalar_common_2[6][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};


static /* final */ const struct parse_tree__file_kind__vector_common_type_1_0_s parse_tree__file_kind_vector_common_1[8] = {
  /* row 0 */   {     (MR_String) ".int0" },
  /* row 1 */   {     (MR_String) ".int3" },
  /* row 2 */   {     (MR_String) ".int2" },
  /* row 3 */   {     (MR_String) ".int" },
  /* row 4 */   {     (MR_String) ".int0" },
  /* row 5 */   {     (MR_String) ".int3" },
  /* row 6 */   {     (MR_String) ".int2" },
  /* row 7 */   {     (MR_String) ".int" },
};

static /* final */ const struct parse_tree__file_kind__vector_common_type_3_0_s parse_tree__file_kind_vector_common_3[7] = {
  /* row 0 */
  {
    (MR_String) ".int",
    (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__file_kind_scalar_common_2[0])
  },
  /* row 1 */
  {
    (MR_String) ".int0",
    (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__file_kind_scalar_common_2[1])
  },
  /* row 2 */
  {
    (MR_String) ".int2",
    (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__file_kind_scalar_common_2[2])
  },
  /* row 3 */
  {
    (MR_String) ".int3",
    (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__file_kind_scalar_common_2[3])
  },
  /* row 4 */
  {
    (MR_String) ".m",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 5 */
  {
    (MR_String) ".opt",
    (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__file_kind_scalar_common_2[4])
  },
  /* row 6 */
  {
    (MR_String) ".trans_opt",
    (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__file_kind_scalar_common_2[5])
  },
};





static const MR_DuFunctorDesc parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_file_kind_0_0 = {
  (MR_String) "fk_src",
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

static const MR_PseudoTypeInfo parse_tree__file_kind__parse_tree__file_kind__field_types_file_kind_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0
};

static const MR_DuFunctorDesc parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_file_kind_0_1 = {
  (MR_String) "fk_int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__file_kind__parse_tree__file_kind__field_types_file_kind_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__file_kind__parse_tree__file_kind__field_types_file_kind_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0
};

static const MR_DuFunctorDesc parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_file_kind_0_2 = {
  (MR_String) "fk_opt",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__file_kind__parse_tree__file_kind__field_types_file_kind_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_file_kind_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_file_kind_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_file_kind_0_2
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
  (MR_Integer) 16,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__file_kind____Unify____file_kind_0_0_10001)),
  ((MR_Box) (parse_tree__file_kind____Compare____file_kind_0_0_10001)),
  (MR_String) "parse_tree.file_kind",
  (MR_String) "file_kind",
  {     parse_tree__file_kind__parse_tree__file_kind__du_name_ordered_file_kind_0 },
  {     parse_tree__file_kind__parse_tree__file_kind__du_ptag_ordered_file_kind_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__file_kind__parse_tree__file_kind__functor_number_map_file_kind_0
};

static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_0 = {
  (MR_String) "ifk_int0",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_1 = {
  (MR_String) "ifk_int3",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_2 = {
  (MR_String) "ifk_int2",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_3 = {
  (MR_String) "ifk_int",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__enum_value_ordered_int_file_kind_0[4] = {
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_0,
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_1,
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_2,
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_3
};

static const MR_EnumFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__enum_name_ordered_int_file_kind_0[4] = {
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_3,
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_0,
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_2,
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_1
};

static const MR_Integer parse_tree__file_kind__parse_tree__file_kind__functor_number_map_int_file_kind_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__file_kind____Unify____int_file_kind_0_0_10001)),
  ((MR_Box) (parse_tree__file_kind____Compare____int_file_kind_0_0_10001)),
  (MR_String) "parse_tree.file_kind",
  (MR_String) "int_file_kind",
  {     parse_tree__file_kind__parse_tree__file_kind__enum_name_ordered_int_file_kind_0 },
  {     parse_tree__file_kind__parse_tree__file_kind__enum_value_ordered_int_file_kind_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__file_kind__parse_tree__file_kind__functor_number_map_int_file_kind_0
};

static const MR_PseudoTypeInfo parse_tree__file_kind__parse_tree__file_kind__field_types_int_or_opt_file_kind_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0
};

static const MR_DuFunctorDesc parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_int_or_opt_file_kind_0_0 = {
  (MR_String) "iofk_int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__file_kind__parse_tree__file_kind__field_types_int_or_opt_file_kind_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__file_kind__parse_tree__file_kind__field_types_int_or_opt_file_kind_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0
};

static const MR_DuFunctorDesc parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_int_or_opt_file_kind_0_1 = {
  (MR_String) "iofk_opt",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__file_kind__parse_tree__file_kind__field_types_int_or_opt_file_kind_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_int_or_opt_file_kind_0_0[1] = {
  &parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_int_or_opt_file_kind_0_0
};

static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_int_or_opt_file_kind_0_1[1] = {
  &parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_int_or_opt_file_kind_0_1
};

static const MR_DuPtagLayout parse_tree__file_kind__parse_tree__file_kind__du_ptag_ordered_int_or_opt_file_kind_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_int_or_opt_file_kind_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_int_or_opt_file_kind_0_1
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__file_kind____Unify____int_or_opt_file_kind_0_0_10001)),
  ((MR_Box) (parse_tree__file_kind____Compare____int_or_opt_file_kind_0_0_10001)),
  (MR_String) "parse_tree.file_kind",
  (MR_String) "int_or_opt_file_kind",
  {     parse_tree__file_kind__parse_tree__file_kind__du_name_ordered_int_or_opt_file_kind_0 },
  {     parse_tree__file_kind__parse_tree__file_kind__du_ptag_ordered_int_or_opt_file_kind_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__file_kind__parse_tree__file_kind__functor_number_map_int_or_opt_file_kind_0
};

static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_opt_file_kind_0_0 = {
  (MR_String) "ofk_opt",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_opt_file_kind_0_1 = {
  (MR_String) "ofk_trans_opt",
  (MR_Integer) 1
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__file_kind____Unify____opt_file_kind_0_0_10001)),
  ((MR_Box) (parse_tree__file_kind____Compare____opt_file_kind_0_0_10001)),
  (MR_String) "parse_tree.file_kind",
  (MR_String) "opt_file_kind",
  {     parse_tree__file_kind__parse_tree__file_kind__enum_name_ordered_opt_file_kind_0 },
  {     parse_tree__file_kind__parse_tree__file_kind__enum_value_ordered_opt_file_kind_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__file_kind__parse_tree__file_kind__functor_number_map_opt_file_kind_0
};

static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_src_file_kind_0_0 = {
  (MR_String) "sfk_src",
  (MR_Integer) 0
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (parse_tree__file_kind____Unify____src_file_kind_0_0_10001)),
  ((MR_Box) (parse_tree__file_kind____Compare____src_file_kind_0_0_10001)),
  (MR_String) "parse_tree.file_kind",
  (MR_String) "src_file_kind",
  {     parse_tree__file_kind__parse_tree__file_kind__enum_name_ordered_src_file_kind_0 },
  {     parse_tree__file_kind__parse_tree__file_kind__enum_value_ordered_src_file_kind_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__file_kind__parse_tree__file_kind__functor_number_map_src_file_kind_0
};

static MR_bool MR_CALL 
parse_tree__file_kind____Unify____file_kind_0_0_10001(
  MR_Box parse_tree__file_kind__wrapper_arg_1,
  MR_Box parse_tree__file_kind__wrapper_arg_2)
{
  {
    MR_bool parse_tree__file_kind__succeeded;

    {
      parse_tree__file_kind__succeeded = parse_tree__file_kind____Unify____file_kind_0_0(((MR_Word) parse_tree__file_kind__wrapper_arg_1), ((MR_Word) parse_tree__file_kind__wrapper_arg_2));
    }
    return parse_tree__file_kind__succeeded;
  }
}

static void MR_CALL 
parse_tree__file_kind____Compare____file_kind_0_0_10001(
  MR_Box * parse_tree__file_kind__wrapper_arg_1,
  MR_Box parse_tree__file_kind__wrapper_arg_2,
  MR_Box parse_tree__file_kind__wrapper_arg_3)
{
  {
    MR_Word parse_tree__file_kind__conv0_HeadVar__1_1;

    {
      parse_tree__file_kind____Compare____file_kind_0_0(&parse_tree__file_kind__conv0_HeadVar__1_1, ((MR_Word) parse_tree__file_kind__wrapper_arg_2), ((MR_Word) parse_tree__file_kind__wrapper_arg_3));
    }
    *parse_tree__file_kind__wrapper_arg_1 = ((MR_Box) (parse_tree__file_kind__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__file_kind____Unify____int_file_kind_0_0_10001(
  MR_Box parse_tree__file_kind__wrapper_arg_1,
  MR_Box parse_tree__file_kind__wrapper_arg_2)
{
  {
    MR_bool parse_tree__file_kind__succeeded;

    {
      parse_tree__file_kind__succeeded = parse_tree__file_kind____Unify____int_file_kind_0_0(((MR_Word) parse_tree__file_kind__wrapper_arg_1), ((MR_Word) parse_tree__file_kind__wrapper_arg_2));
    }
    return parse_tree__file_kind__succeeded;
  }
}

static void MR_CALL 
parse_tree__file_kind____Compare____int_file_kind_0_0_10001(
  MR_Box * parse_tree__file_kind__wrapper_arg_1,
  MR_Box parse_tree__file_kind__wrapper_arg_2,
  MR_Box parse_tree__file_kind__wrapper_arg_3)
{
  {
    MR_Word parse_tree__file_kind__conv0_HeadVar__1_1;

    {
      parse_tree__file_kind____Compare____int_file_kind_0_0(&parse_tree__file_kind__conv0_HeadVar__1_1, ((MR_Word) parse_tree__file_kind__wrapper_arg_2), ((MR_Word) parse_tree__file_kind__wrapper_arg_3));
    }
    *parse_tree__file_kind__wrapper_arg_1 = ((MR_Box) (parse_tree__file_kind__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__file_kind____Unify____int_or_opt_file_kind_0_0_10001(
  MR_Box parse_tree__file_kind__wrapper_arg_1,
  MR_Box parse_tree__file_kind__wrapper_arg_2)
{
  {
    MR_bool parse_tree__file_kind__succeeded;

    {
      parse_tree__file_kind__succeeded = parse_tree__file_kind____Unify____int_or_opt_file_kind_0_0(((MR_Word) parse_tree__file_kind__wrapper_arg_1), ((MR_Word) parse_tree__file_kind__wrapper_arg_2));
    }
    return parse_tree__file_kind__succeeded;
  }
}

static void MR_CALL 
parse_tree__file_kind____Compare____int_or_opt_file_kind_0_0_10001(
  MR_Box * parse_tree__file_kind__wrapper_arg_1,
  MR_Box parse_tree__file_kind__wrapper_arg_2,
  MR_Box parse_tree__file_kind__wrapper_arg_3)
{
  {
    MR_Word parse_tree__file_kind__conv0_HeadVar__1_1;

    {
      parse_tree__file_kind____Compare____int_or_opt_file_kind_0_0(&parse_tree__file_kind__conv0_HeadVar__1_1, ((MR_Word) parse_tree__file_kind__wrapper_arg_2), ((MR_Word) parse_tree__file_kind__wrapper_arg_3));
    }
    *parse_tree__file_kind__wrapper_arg_1 = ((MR_Box) (parse_tree__file_kind__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__file_kind____Unify____opt_file_kind_0_0_10001(
  MR_Box parse_tree__file_kind__wrapper_arg_1,
  MR_Box parse_tree__file_kind__wrapper_arg_2)
{
  {
    MR_bool parse_tree__file_kind__succeeded;

    {
      parse_tree__file_kind__succeeded = parse_tree__file_kind____Unify____opt_file_kind_0_0(((MR_Word) parse_tree__file_kind__wrapper_arg_1), ((MR_Word) parse_tree__file_kind__wrapper_arg_2));
    }
    return parse_tree__file_kind__succeeded;
  }
}

static void MR_CALL 
parse_tree__file_kind____Compare____opt_file_kind_0_0_10001(
  MR_Box * parse_tree__file_kind__wrapper_arg_1,
  MR_Box parse_tree__file_kind__wrapper_arg_2,
  MR_Box parse_tree__file_kind__wrapper_arg_3)
{
  {
    MR_Word parse_tree__file_kind__conv0_HeadVar__1_1;

    {
      parse_tree__file_kind____Compare____opt_file_kind_0_0(&parse_tree__file_kind__conv0_HeadVar__1_1, ((MR_Word) parse_tree__file_kind__wrapper_arg_2), ((MR_Word) parse_tree__file_kind__wrapper_arg_3));
    }
    *parse_tree__file_kind__wrapper_arg_1 = ((MR_Box) (parse_tree__file_kind__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__file_kind____Unify____src_file_kind_0_0_10001(
  MR_Box parse_tree__file_kind__wrapper_arg_1,
  MR_Box parse_tree__file_kind__wrapper_arg_2)
{
  {
    MR_bool parse_tree__file_kind__succeeded;

    {
      parse_tree__file_kind__succeeded = parse_tree__file_kind____Unify____src_file_kind_0_0();
    }
    return parse_tree__file_kind__succeeded;
  }
}

static void MR_CALL 
parse_tree__file_kind____Compare____src_file_kind_0_0_10001(
  MR_Box * parse_tree__file_kind__wrapper_arg_1,
  MR_Box parse_tree__file_kind__wrapper_arg_2,
  MR_Box parse_tree__file_kind__wrapper_arg_3)
{
  {
    MR_Word parse_tree__file_kind__conv0_HeadVar__1_1;

    {
      parse_tree__file_kind____Compare____src_file_kind_0_0(&parse_tree__file_kind__conv0_HeadVar__1_1);
    }
    *parse_tree__file_kind__wrapper_arg_1 = ((MR_Box) (parse_tree__file_kind__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
parse_tree__file_kind__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_102_105_108_101_95_107_105_110_100_95_95_115_114_99_95_102_105_108_101_95_107_105_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * parse_tree__file_kind__HeadVar__1_1)
{
  {
    MR_bool parse_tree__file_kind__succeeded;

    *parse_tree__file_kind__HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
parse_tree__file_kind__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_102_105_108_101_95_107_105_110_100_95_95_115_114_99_95_102_105_108_101_95_107_105_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  {
    return MR_TRUE;
  }
}

void MR_CALL 
parse_tree__file_kind____Compare____src_file_kind_0_0(
  MR_Word * parse_tree__file_kind__HeadVar__1_1)
{
  {
    MR_bool parse_tree__file_kind__succeeded;

    {
      parse_tree__file_kind__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_102_105_108_101_95_107_105_110_100_95_95_115_114_99_95_102_105_108_101_95_107_105_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(parse_tree__file_kind__HeadVar__1_1);
    }
  }
}

MR_bool MR_CALL 
parse_tree__file_kind____Unify____src_file_kind_0_0(void)
{
  {
    MR_bool parse_tree__file_kind__succeeded;

    {
      parse_tree__file_kind__succeeded = parse_tree__file_kind__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_102_105_108_101_95_107_105_110_100_95_95_115_114_99_95_102_105_108_101_95_107_105_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
    return parse_tree__file_kind__succeeded;
  }
}

void MR_CALL 
parse_tree__file_kind____Compare____opt_file_kind_0_0(
  MR_Word * parse_tree__file_kind__HeadVar__1_1,
  MR_Word parse_tree__file_kind__HeadVar__2_2,
  MR_Word parse_tree__file_kind__HeadVar__3_3)
{
  {
    MR_bool parse_tree__file_kind__succeeded;
    MR_Integer parse_tree__file_kind__Cast_HeadVar1_4 = (MR_Integer) parse_tree__file_kind__HeadVar__2_2;
    MR_Integer parse_tree__file_kind__Cast_HeadVar2_5 = (MR_Integer) parse_tree__file_kind__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__file_kind__HeadVar__1_1, parse_tree__file_kind__Cast_HeadVar1_4, parse_tree__file_kind__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__file_kind____Unify____opt_file_kind_0_0(
  MR_Word parse_tree__file_kind__HeadVar__2_1,
  MR_Word parse_tree__file_kind__HeadVar__2_2)
{
  {
    MR_bool parse_tree__file_kind__succeeded = (parse_tree__file_kind__HeadVar__2_1 == parse_tree__file_kind__HeadVar__2_2);

    return parse_tree__file_kind__succeeded;
  }
}

void MR_CALL 
parse_tree__file_kind____Compare____int_or_opt_file_kind_0_0(
  MR_Word * parse_tree__file_kind__HeadVar__1_1,
  MR_Word parse_tree__file_kind__HeadVar__2_2,
  MR_Word parse_tree__file_kind__HeadVar__3_3)
{
  {
    MR_bool parse_tree__file_kind__succeeded;
    MR_Integer parse_tree__file_kind__CastX_12 = (MR_Integer) parse_tree__file_kind__HeadVar__2_2;
    MR_Integer parse_tree__file_kind__CastY_13 = (MR_Integer) parse_tree__file_kind__HeadVar__3_3;

    parse_tree__file_kind__succeeded = (parse_tree__file_kind__CastX_12 == parse_tree__file_kind__CastY_13);
    if (parse_tree__file_kind__succeeded)
      *parse_tree__file_kind__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) parse_tree__file_kind__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__file_kind__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__file_kind__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) parse_tree__file_kind__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word parse_tree__file_kind__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__file_kind__HeadVar__3_3, (MR_Integer) 0)));
            MR_Integer parse_tree__file_kind__V_18_18 = (MR_Integer) parse_tree__file_kind__V_16_16;
            MR_Integer parse_tree__file_kind__V_19_19 = (MR_Integer) parse_tree__file_kind__V_5_5;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__file_kind__HeadVar__1_1, parse_tree__file_kind__V_18_18, parse_tree__file_kind__V_19_19);
            }
          }
        else
          *parse_tree__file_kind__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Word parse_tree__file_kind__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__file_kind__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) parse_tree__file_kind__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__file_kind__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word parse_tree__file_kind__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__file_kind__HeadVar__3_3, (MR_Integer) 0)));
            MR_Integer parse_tree__file_kind__V_20_20 = (MR_Integer) parse_tree__file_kind__V_17_17;
            MR_Integer parse_tree__file_kind__V_21_21 = (MR_Integer) parse_tree__file_kind__V_11_11;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__file_kind__HeadVar__1_1, parse_tree__file_kind__V_20_20, parse_tree__file_kind__V_21_21);
            }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__file_kind____Unify____int_or_opt_file_kind_0_0(
  MR_Word parse_tree__file_kind__HeadVar__1_1,
  MR_Word parse_tree__file_kind__HeadVar__2_2)
{
  {
    MR_bool parse_tree__file_kind__succeeded;
    MR_Integer parse_tree__file_kind__CastX_7 = (MR_Integer) parse_tree__file_kind__HeadVar__1_1;
    MR_Integer parse_tree__file_kind__CastY_8 = (MR_Integer) parse_tree__file_kind__HeadVar__2_2;

    parse_tree__file_kind__succeeded = (parse_tree__file_kind__CastX_7 == parse_tree__file_kind__CastY_8);
    if (parse_tree__file_kind__succeeded)
      parse_tree__file_kind__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) parse_tree__file_kind__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__file_kind__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__file_kind__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__file_kind__V_4_4;

        parse_tree__file_kind__succeeded = ((MR_tag((MR_Word) parse_tree__file_kind__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__file_kind__succeeded)
          {
            parse_tree__file_kind__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__file_kind__HeadVar__2_2, (MR_Integer) 0)));
            parse_tree__file_kind__succeeded = (parse_tree__file_kind__V_3_3 == parse_tree__file_kind__V_4_4);
          }
      }
    else
      {
        MR_Word parse_tree__file_kind__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__file_kind__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__file_kind__V_6_6;

        parse_tree__file_kind__succeeded = ((MR_tag((MR_Word) parse_tree__file_kind__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__file_kind__succeeded)
          {
            parse_tree__file_kind__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__file_kind__HeadVar__2_2, (MR_Integer) 0)));
            parse_tree__file_kind__succeeded = (parse_tree__file_kind__V_5_5 == parse_tree__file_kind__V_6_6);
          }
      }
    return parse_tree__file_kind__succeeded;
  }
}

void MR_CALL 
parse_tree__file_kind____Compare____int_file_kind_0_0(
  MR_Word * parse_tree__file_kind__HeadVar__1_1,
  MR_Word parse_tree__file_kind__HeadVar__2_2,
  MR_Word parse_tree__file_kind__HeadVar__3_3)
{
  {
    MR_bool parse_tree__file_kind__succeeded;
    MR_Integer parse_tree__file_kind__Cast_HeadVar1_4 = (MR_Integer) parse_tree__file_kind__HeadVar__2_2;
    MR_Integer parse_tree__file_kind__Cast_HeadVar2_5 = (MR_Integer) parse_tree__file_kind__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__file_kind__HeadVar__1_1, parse_tree__file_kind__Cast_HeadVar1_4, parse_tree__file_kind__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__file_kind____Unify____int_file_kind_0_0(
  MR_Word parse_tree__file_kind__HeadVar__2_1,
  MR_Word parse_tree__file_kind__HeadVar__2_2)
{
  {
    MR_bool parse_tree__file_kind__succeeded = (parse_tree__file_kind__HeadVar__2_1 == parse_tree__file_kind__HeadVar__2_2);

    return parse_tree__file_kind__succeeded;
  }
}

void MR_CALL 
parse_tree__file_kind____Compare____file_kind_0_0(
  MR_Word * parse_tree__file_kind__HeadVar__1_1,
  MR_Word parse_tree__file_kind__HeadVar__2_2,
  MR_Word parse_tree__file_kind__HeadVar__3_3)
{
  {
    MR_bool parse_tree__file_kind__succeeded;
    MR_Integer parse_tree__file_kind__CastX_16 = (MR_Integer) parse_tree__file_kind__HeadVar__2_2;
    MR_Integer parse_tree__file_kind__CastY_17 = (MR_Integer) parse_tree__file_kind__HeadVar__3_3;

    parse_tree__file_kind__succeeded = (parse_tree__file_kind__CastX_16 == parse_tree__file_kind__CastY_17);
    if (parse_tree__file_kind__succeeded)
      *parse_tree__file_kind__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__file_kind__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) parse_tree__file_kind__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *parse_tree__file_kind__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *parse_tree__file_kind__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *parse_tree__file_kind__HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__file_kind__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__file_kind__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__file_kind__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__file_kind__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__file_kind__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__file_kind__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer parse_tree__file_kind__V_22_22 = (MR_Integer) parse_tree__file_kind__V_20_20;
                  MR_Integer parse_tree__file_kind__V_23_23 = (MR_Integer) parse_tree__file_kind__V_8_8;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__file_kind__HeadVar__1_1, parse_tree__file_kind__V_22_22, parse_tree__file_kind__V_23_23);
                  }
                }
                break;
              case (MR_Integer) 2:
                *parse_tree__file_kind__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__file_kind__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__file_kind__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__file_kind__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__file_kind__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *parse_tree__file_kind__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__file_kind__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__file_kind__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer parse_tree__file_kind__V_24_24 = (MR_Integer) parse_tree__file_kind__V_21_21;
                  MR_Integer parse_tree__file_kind__V_25_25 = (MR_Integer) parse_tree__file_kind__V_15_15;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__file_kind__HeadVar__1_1, parse_tree__file_kind__V_24_24, parse_tree__file_kind__V_25_25);
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
  MR_Word parse_tree__file_kind__HeadVar__1_1,
  MR_Word parse_tree__file_kind__HeadVar__2_2)
{
  {
    MR_bool parse_tree__file_kind__succeeded;
    MR_Integer parse_tree__file_kind__CastX_9 = (MR_Integer) parse_tree__file_kind__HeadVar__1_1;
    MR_Integer parse_tree__file_kind__CastY_10 = (MR_Integer) parse_tree__file_kind__HeadVar__2_2;

    parse_tree__file_kind__succeeded = (parse_tree__file_kind__CastX_9 == parse_tree__file_kind__CastY_10);
    if (parse_tree__file_kind__succeeded)
      parse_tree__file_kind__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__file_kind__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer parse_tree__file_kind__CastX_3 = (MR_Integer) parse_tree__file_kind__HeadVar__1_1;
            MR_Integer parse_tree__file_kind__CastY_4 = (MR_Integer) parse_tree__file_kind__HeadVar__2_2;

            parse_tree__file_kind__succeeded = (parse_tree__file_kind__CastY_4 == parse_tree__file_kind__CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__file_kind__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__file_kind__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__file_kind__V_6_6;

            parse_tree__file_kind__succeeded = ((MR_tag((MR_Word) parse_tree__file_kind__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__file_kind__succeeded)
              {
                parse_tree__file_kind__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__file_kind__HeadVar__2_2, (MR_Integer) 0)));
                parse_tree__file_kind__succeeded = (parse_tree__file_kind__V_5_5 == parse_tree__file_kind__V_6_6);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__file_kind__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__file_kind__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__file_kind__V_8_8;

            parse_tree__file_kind__succeeded = ((MR_tag((MR_Word) parse_tree__file_kind__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__file_kind__succeeded)
              {
                parse_tree__file_kind__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__file_kind__HeadVar__2_2, (MR_Integer) 0)));
                parse_tree__file_kind__succeeded = (parse_tree__file_kind__V_7_7 == parse_tree__file_kind__V_8_8);
              }
          }
          break;
      }
    return parse_tree__file_kind__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__file_kind__extension_to_file_kind_2_p_0(
  MR_String parse_tree__file_kind__Extension_3,
  MR_Word * parse_tree__file_kind__FileKind_4)
{
  {
    MR_bool parse_tree__file_kind__succeeded;
    MR_Integer parse_tree__file_kind__lo_0;
    MR_Integer parse_tree__file_kind__hi_1;
    MR_Integer parse_tree__file_kind__mid_2;
    MR_Integer parse_tree__file_kind__result_3;

    /* binary string simple lookup switch */
    parse_tree__file_kind__lo_0 = (MR_Integer) 0;
    parse_tree__file_kind__hi_1 = (MR_Integer) 6;
    do
      {
        parse_tree__file_kind__mid_2 = (((parse_tree__file_kind__lo_0 + parse_tree__file_kind__hi_1)) / (MR_Integer) 2);
        parse_tree__file_kind__result_3 = MR_strcmp(parse_tree__file_kind__Extension_3, ((&parse_tree__file_kind_vector_common_3[0 + parse_tree__file_kind__mid_2]))->parse_tree__file_kind__vector_common_type_3_0__vct_3_f_0);
        if ((parse_tree__file_kind__result_3 == (MR_Integer) 0))
          {
            *parse_tree__file_kind__FileKind_4 = ((&parse_tree__file_kind_vector_common_3[0 + parse_tree__file_kind__mid_2]))->parse_tree__file_kind__vector_common_type_3_0__vct_3_f_1;
            parse_tree__file_kind__succeeded = MR_TRUE;
            /* jump out of search loop */
            goto label_0;
          }
        else
        if ((parse_tree__file_kind__result_3 < (MR_Integer) 0))
          parse_tree__file_kind__hi_1 = (parse_tree__file_kind__mid_2 - (MR_Integer) 1);
        else
          parse_tree__file_kind__lo_0 = (parse_tree__file_kind__mid_2 + (MR_Integer) 1);
      }
    while ((parse_tree__file_kind__lo_0 <= parse_tree__file_kind__hi_1));
    parse_tree__file_kind__succeeded = MR_FALSE;
  label_0:;
    return parse_tree__file_kind__succeeded;
  }
}

MR_String MR_CALL 
parse_tree__file_kind__opt_file_kind_to_extension_1_f_0(
  MR_Word parse_tree__file_kind__HeadVar__1_1)
{
  {
    MR_bool parse_tree__file_kind__succeeded;
    MR_String parse_tree__file_kind__HeadVar__2_2;

    switch (parse_tree__file_kind__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__file_kind__HeadVar__2_2 = (MR_String) ".opt";
        break;
      case (MR_Integer) 1:
        parse_tree__file_kind__HeadVar__2_2 = (MR_String) ".trans_opt";
        break;
    }
    return parse_tree__file_kind__HeadVar__2_2;
  }
}

MR_String MR_CALL 
parse_tree__file_kind__int_file_kind_to_extension_1_f_0(
  MR_Word parse_tree__file_kind__HeadVar__1_1)
{
  {
    MR_bool parse_tree__file_kind__succeeded;
    MR_String parse_tree__file_kind__HeadVar__2_2 = ((&parse_tree__file_kind_vector_common_1[4 + parse_tree__file_kind__HeadVar__1_1]))->parse_tree__file_kind__vector_common_type_1_0__vct_1_f_0;

    return parse_tree__file_kind__HeadVar__2_2;
  }
}

MR_String MR_CALL 
parse_tree__file_kind__file_kind_to_extension_1_f_0(
  MR_Word parse_tree__file_kind__HeadVar__1_1)
{
  {
    MR_bool parse_tree__file_kind__succeeded;
    MR_String parse_tree__file_kind__HeadVar__2_2;

    switch (MR_tag((MR_Word) parse_tree__file_kind__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__file_kind__HeadVar__2_2 = (MR_String) ".m";
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__file_kind__IntFileKind_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__file_kind__HeadVar__1_1, (MR_Integer) 0)));

          parse_tree__file_kind__HeadVar__2_2 = ((&parse_tree__file_kind_vector_common_1[0 + parse_tree__file_kind__IntFileKind_3]))->parse_tree__file_kind__vector_common_type_1_0__vct_1_f_0;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__file_kind__OptFileKind_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__file_kind__HeadVar__1_1, (MR_Integer) 0)));

          switch (parse_tree__file_kind__OptFileKind_4) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              parse_tree__file_kind__HeadVar__2_2 = (MR_String) ".opt";
              break;
            case (MR_Integer) 1:
              parse_tree__file_kind__HeadVar__2_2 = (MR_String) ".trans_opt";
              break;
          }
        }
        break;
    }
    return parse_tree__file_kind__HeadVar__2_2;
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.file_kind. */
