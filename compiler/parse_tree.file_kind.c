/*
** Automatically generated from `file_kind.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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


#include "builtin.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "private_builtin.mih"




#line 41 "parse_tree.file_kind.c"
static const MR_DuFunctorDesc parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_file_kind_0_0;

#line 44 "parse_tree.file_kind.c"
static const MR_PseudoTypeInfo parse_tree__file_kind__parse_tree__file_kind__field_types_file_kind_0_1[1];

#line 47 "parse_tree.file_kind.c"
static const MR_DuFunctorDesc parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_file_kind_0_1;

#line 50 "parse_tree.file_kind.c"
static const MR_PseudoTypeInfo parse_tree__file_kind__parse_tree__file_kind__field_types_file_kind_0_2[1];

#line 53 "parse_tree.file_kind.c"
static const MR_DuFunctorDesc parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_file_kind_0_2;

#line 56 "parse_tree.file_kind.c"
static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_file_kind_0_0[1];

#line 59 "parse_tree.file_kind.c"
static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_file_kind_0_1[1];

#line 62 "parse_tree.file_kind.c"
static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_file_kind_0_2[1];

#line 65 "parse_tree.file_kind.c"
static const MR_DuPtagLayout parse_tree__file_kind__parse_tree__file_kind__du_ptag_ordered_file_kind_0[3];

#line 68 "parse_tree.file_kind.c"
static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_name_ordered_file_kind_0[3];

#line 71 "parse_tree.file_kind.c"
static const MR_Integer parse_tree__file_kind__parse_tree__file_kind__functor_number_map_file_kind_0[3];

#line 74 "parse_tree.file_kind.c"
static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_0;

#line 77 "parse_tree.file_kind.c"
static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_1;

#line 80 "parse_tree.file_kind.c"
static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_2;

#line 83 "parse_tree.file_kind.c"
static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_3;

#line 86 "parse_tree.file_kind.c"
static const MR_EnumFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__enum_value_ordered_int_file_kind_0[4];

#line 89 "parse_tree.file_kind.c"
static const MR_EnumFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__enum_name_ordered_int_file_kind_0[4];

#line 92 "parse_tree.file_kind.c"
static const MR_Integer parse_tree__file_kind__parse_tree__file_kind__functor_number_map_int_file_kind_0[4];

#line 95 "parse_tree.file_kind.c"
static const MR_PseudoTypeInfo parse_tree__file_kind__parse_tree__file_kind__field_types_int_or_opt_file_kind_0_0[1];

#line 98 "parse_tree.file_kind.c"
static const MR_DuFunctorDesc parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_int_or_opt_file_kind_0_0;

#line 101 "parse_tree.file_kind.c"
static const MR_PseudoTypeInfo parse_tree__file_kind__parse_tree__file_kind__field_types_int_or_opt_file_kind_0_1[1];

#line 104 "parse_tree.file_kind.c"
static const MR_DuFunctorDesc parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_int_or_opt_file_kind_0_1;

#line 107 "parse_tree.file_kind.c"
static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_int_or_opt_file_kind_0_0[1];

#line 110 "parse_tree.file_kind.c"
static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_int_or_opt_file_kind_0_1[1];

#line 113 "parse_tree.file_kind.c"
static const MR_DuPtagLayout parse_tree__file_kind__parse_tree__file_kind__du_ptag_ordered_int_or_opt_file_kind_0[2];

#line 116 "parse_tree.file_kind.c"
static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_name_ordered_int_or_opt_file_kind_0[2];

#line 119 "parse_tree.file_kind.c"
static const MR_Integer parse_tree__file_kind__parse_tree__file_kind__functor_number_map_int_or_opt_file_kind_0[2];

#line 122 "parse_tree.file_kind.c"
static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_opt_file_kind_0_0;

#line 125 "parse_tree.file_kind.c"
static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_opt_file_kind_0_1;

#line 128 "parse_tree.file_kind.c"
static const MR_EnumFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__enum_value_ordered_opt_file_kind_0[2];

#line 131 "parse_tree.file_kind.c"
static const MR_EnumFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__enum_name_ordered_opt_file_kind_0[2];

#line 134 "parse_tree.file_kind.c"
static const MR_Integer parse_tree__file_kind__parse_tree__file_kind__functor_number_map_opt_file_kind_0[2];

#line 137 "parse_tree.file_kind.c"
static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_src_file_kind_0_0;

#line 140 "parse_tree.file_kind.c"
static const MR_EnumFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__enum_value_ordered_src_file_kind_0[1];

#line 143 "parse_tree.file_kind.c"
static const MR_EnumFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__enum_name_ordered_src_file_kind_0[1];

#line 146 "parse_tree.file_kind.c"
static const MR_Integer parse_tree__file_kind__parse_tree__file_kind__functor_number_map_src_file_kind_0[1];

#line 149 "parse_tree.file_kind.c"
static MR_bool MR_CALL 
parse_tree__file_kind____Unify____file_kind_0_0_10001(
#line 152 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_1,
#line 154 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_2);

#line 157 "parse_tree.file_kind.c"
static void MR_CALL 
parse_tree__file_kind____Compare____file_kind_0_0_10001(
#line 160 "parse_tree.file_kind.c"
  MR_Box * parse_tree__file_kind__wrapper_arg_1,
#line 162 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_2,
#line 164 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_3);

#line 167 "parse_tree.file_kind.c"
static MR_bool MR_CALL 
parse_tree__file_kind____Unify____int_file_kind_0_0_10001(
#line 170 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_1,
#line 172 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_2);

#line 175 "parse_tree.file_kind.c"
static void MR_CALL 
parse_tree__file_kind____Compare____int_file_kind_0_0_10001(
#line 178 "parse_tree.file_kind.c"
  MR_Box * parse_tree__file_kind__wrapper_arg_1,
#line 180 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_2,
#line 182 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_3);

#line 185 "parse_tree.file_kind.c"
static MR_bool MR_CALL 
parse_tree__file_kind____Unify____int_or_opt_file_kind_0_0_10001(
#line 188 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_1,
#line 190 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_2);

#line 193 "parse_tree.file_kind.c"
static void MR_CALL 
parse_tree__file_kind____Compare____int_or_opt_file_kind_0_0_10001(
#line 196 "parse_tree.file_kind.c"
  MR_Box * parse_tree__file_kind__wrapper_arg_1,
#line 198 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_2,
#line 200 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_3);

#line 203 "parse_tree.file_kind.c"
static MR_bool MR_CALL 
parse_tree__file_kind____Unify____opt_file_kind_0_0_10001(
#line 206 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_1,
#line 208 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_2);

#line 211 "parse_tree.file_kind.c"
static void MR_CALL 
parse_tree__file_kind____Compare____opt_file_kind_0_0_10001(
#line 214 "parse_tree.file_kind.c"
  MR_Box * parse_tree__file_kind__wrapper_arg_1,
#line 216 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_2,
#line 218 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_3);

#line 221 "parse_tree.file_kind.c"
static MR_bool MR_CALL 
parse_tree__file_kind____Unify____src_file_kind_0_0_10001(
#line 224 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_1,
#line 226 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_2);

#line 229 "parse_tree.file_kind.c"
static void MR_CALL 
parse_tree__file_kind____Compare____src_file_kind_0_0_10001(
#line 232 "parse_tree.file_kind.c"
  MR_Box * parse_tree__file_kind__wrapper_arg_1,
#line 234 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_2,
#line 236 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__file_kind_scalar_common_2[6][1];


#line 65 "file_kind.m"
/* sealed */ struct parse_tree__file_kind__vector_common_type_1_0_s {
#line 65 "file_kind.m"
  const MR_String parse_tree__file_kind__vector_common_type_1_0__vct_1_f_0;
#line 65 "file_kind.m"
};

static /* final */ const struct parse_tree__file_kind__vector_common_type_1_0_s parse_tree__file_kind_vector_common_1[8];

#line 75 "file_kind.m"
/* sealed */ struct parse_tree__file_kind__vector_common_type_3_0_s {
#line 75 "file_kind.m"
  const MR_String parse_tree__file_kind__vector_common_type_3_0__vct_3_f_0;
#line 75 "file_kind.m"
  const MR_Word parse_tree__file_kind__vector_common_type_3_0__vct_3_f_1;
#line 75 "file_kind.m"
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





#line 346 "parse_tree.file_kind.c"
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
  NULL
};

#line 361 "parse_tree.file_kind.c"
static const MR_PseudoTypeInfo parse_tree__file_kind__parse_tree__file_kind__field_types_file_kind_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0
};

#line 366 "parse_tree.file_kind.c"
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
  NULL
};

#line 381 "parse_tree.file_kind.c"
static const MR_PseudoTypeInfo parse_tree__file_kind__parse_tree__file_kind__field_types_file_kind_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0
};

#line 386 "parse_tree.file_kind.c"
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
  NULL
};

#line 401 "parse_tree.file_kind.c"
static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_file_kind_0_0[1] = {
  &parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_file_kind_0_0
};

#line 406 "parse_tree.file_kind.c"
static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_file_kind_0_1[1] = {
  &parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_file_kind_0_1
};

#line 411 "parse_tree.file_kind.c"
static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_file_kind_0_2[1] = {
  &parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_file_kind_0_2
};

#line 416 "parse_tree.file_kind.c"
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

#line 435 "parse_tree.file_kind.c"
static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_name_ordered_file_kind_0[3] = {
  &parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_file_kind_0_1,
  &parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_file_kind_0_2,
  &parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_file_kind_0_0
};

#line 442 "parse_tree.file_kind.c"
static const MR_Integer parse_tree__file_kind__parse_tree__file_kind__functor_number_map_file_kind_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 449 "parse_tree.file_kind.c"
const MR_TypeCtorInfo_Struct parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_file_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 466 "parse_tree.file_kind.c"
static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_0 = {
  (MR_String) "ifk_int0",
  (MR_Integer) 0
};

#line 472 "parse_tree.file_kind.c"
static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_1 = {
  (MR_String) "ifk_int3",
  (MR_Integer) 1
};

#line 478 "parse_tree.file_kind.c"
static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_2 = {
  (MR_String) "ifk_int2",
  (MR_Integer) 2
};

#line 484 "parse_tree.file_kind.c"
static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_3 = {
  (MR_String) "ifk_int",
  (MR_Integer) 3
};

#line 490 "parse_tree.file_kind.c"
static const MR_EnumFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__enum_value_ordered_int_file_kind_0[4] = {
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_0,
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_1,
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_2,
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_3
};

#line 498 "parse_tree.file_kind.c"
static const MR_EnumFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__enum_name_ordered_int_file_kind_0[4] = {
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_3,
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_0,
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_2,
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_int_file_kind_0_1
};

#line 506 "parse_tree.file_kind.c"
static const MR_Integer parse_tree__file_kind__parse_tree__file_kind__functor_number_map_int_file_kind_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 514 "parse_tree.file_kind.c"
const MR_TypeCtorInfo_Struct parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 531 "parse_tree.file_kind.c"
static const MR_PseudoTypeInfo parse_tree__file_kind__parse_tree__file_kind__field_types_int_or_opt_file_kind_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0
};

#line 536 "parse_tree.file_kind.c"
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
  NULL
};

#line 551 "parse_tree.file_kind.c"
static const MR_PseudoTypeInfo parse_tree__file_kind__parse_tree__file_kind__field_types_int_or_opt_file_kind_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0
};

#line 556 "parse_tree.file_kind.c"
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
  NULL
};

#line 571 "parse_tree.file_kind.c"
static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_int_or_opt_file_kind_0_0[1] = {
  &parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_int_or_opt_file_kind_0_0
};

#line 576 "parse_tree.file_kind.c"
static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_stag_ordered_int_or_opt_file_kind_0_1[1] = {
  &parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_int_or_opt_file_kind_0_1
};

#line 581 "parse_tree.file_kind.c"
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

#line 595 "parse_tree.file_kind.c"
static const MR_DuFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__du_name_ordered_int_or_opt_file_kind_0[2] = {
  &parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_int_or_opt_file_kind_0_0,
  &parse_tree__file_kind__parse_tree__file_kind__du_functor_desc_int_or_opt_file_kind_0_1
};

#line 601 "parse_tree.file_kind.c"
static const MR_Integer parse_tree__file_kind__parse_tree__file_kind__functor_number_map_int_or_opt_file_kind_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 607 "parse_tree.file_kind.c"
const MR_TypeCtorInfo_Struct parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_or_opt_file_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 624 "parse_tree.file_kind.c"
static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_opt_file_kind_0_0 = {
  (MR_String) "ofk_opt",
  (MR_Integer) 0
};

#line 630 "parse_tree.file_kind.c"
static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_opt_file_kind_0_1 = {
  (MR_String) "ofk_trans_opt",
  (MR_Integer) 1
};

#line 636 "parse_tree.file_kind.c"
static const MR_EnumFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__enum_value_ordered_opt_file_kind_0[2] = {
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_opt_file_kind_0_0,
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_opt_file_kind_0_1
};

#line 642 "parse_tree.file_kind.c"
static const MR_EnumFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__enum_name_ordered_opt_file_kind_0[2] = {
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_opt_file_kind_0_0,
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_opt_file_kind_0_1
};

#line 648 "parse_tree.file_kind.c"
static const MR_Integer parse_tree__file_kind__parse_tree__file_kind__functor_number_map_opt_file_kind_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 654 "parse_tree.file_kind.c"
const MR_TypeCtorInfo_Struct parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 671 "parse_tree.file_kind.c"
static const MR_EnumFunctorDesc parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_src_file_kind_0_0 = {
  (MR_String) "sfk_src",
  (MR_Integer) 0
};

#line 677 "parse_tree.file_kind.c"
static const MR_EnumFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__enum_value_ordered_src_file_kind_0[1] = {
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_src_file_kind_0_0
};

#line 682 "parse_tree.file_kind.c"
static const MR_EnumFunctorDescPtr parse_tree__file_kind__parse_tree__file_kind__enum_name_ordered_src_file_kind_0[1] = {
  &parse_tree__file_kind__parse_tree__file_kind__enum_functor_desc_src_file_kind_0_0
};

#line 687 "parse_tree.file_kind.c"
static const MR_Integer parse_tree__file_kind__parse_tree__file_kind__functor_number_map_src_file_kind_0[1] = {
  (MR_Integer) 0
};

#line 692 "parse_tree.file_kind.c"
const MR_TypeCtorInfo_Struct parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_src_file_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 709 "parse_tree.file_kind.c"
static MR_bool MR_CALL 
parse_tree__file_kind____Unify____file_kind_0_0_10001(
#line 712 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_1,
#line 714 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_2)
#line 716 "parse_tree.file_kind.c"
{
#line 718 "parse_tree.file_kind.c"
  {
#line 720 "parse_tree.file_kind.c"
    MR_bool parse_tree__file_kind__succeeded;

#line 723 "parse_tree.file_kind.c"
    {
#line 725 "parse_tree.file_kind.c"
      parse_tree__file_kind__succeeded = parse_tree__file_kind____Unify____file_kind_0_0(((MR_Word) parse_tree__file_kind__wrapper_arg_1), ((MR_Word) parse_tree__file_kind__wrapper_arg_2));
    }
#line 728 "parse_tree.file_kind.c"
    return parse_tree__file_kind__succeeded;
#line 730 "parse_tree.file_kind.c"
  }
#line 732 "parse_tree.file_kind.c"
}

#line 735 "parse_tree.file_kind.c"
static void MR_CALL 
parse_tree__file_kind____Compare____file_kind_0_0_10001(
#line 738 "parse_tree.file_kind.c"
  MR_Box * parse_tree__file_kind__wrapper_arg_1,
#line 740 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_2,
#line 742 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_3)
#line 744 "parse_tree.file_kind.c"
{
#line 746 "parse_tree.file_kind.c"
  {
#line 748 "parse_tree.file_kind.c"
    MR_Word parse_tree__file_kind__conv0_HeadVar__1_1;

#line 751 "parse_tree.file_kind.c"
    {
#line 753 "parse_tree.file_kind.c"
      parse_tree__file_kind____Compare____file_kind_0_0(&parse_tree__file_kind__conv0_HeadVar__1_1, ((MR_Word) parse_tree__file_kind__wrapper_arg_2), ((MR_Word) parse_tree__file_kind__wrapper_arg_3));
    }
#line 756 "parse_tree.file_kind.c"
    *parse_tree__file_kind__wrapper_arg_1 = ((MR_Box) (parse_tree__file_kind__conv0_HeadVar__1_1));
#line 758 "parse_tree.file_kind.c"
  }
#line 760 "parse_tree.file_kind.c"
}

#line 763 "parse_tree.file_kind.c"
static MR_bool MR_CALL 
parse_tree__file_kind____Unify____int_file_kind_0_0_10001(
#line 766 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_1,
#line 768 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_2)
#line 770 "parse_tree.file_kind.c"
{
#line 772 "parse_tree.file_kind.c"
  {
#line 774 "parse_tree.file_kind.c"
    MR_bool parse_tree__file_kind__succeeded;

#line 777 "parse_tree.file_kind.c"
    {
#line 779 "parse_tree.file_kind.c"
      parse_tree__file_kind__succeeded = parse_tree__file_kind____Unify____int_file_kind_0_0(((MR_Word) parse_tree__file_kind__wrapper_arg_1), ((MR_Word) parse_tree__file_kind__wrapper_arg_2));
    }
#line 782 "parse_tree.file_kind.c"
    return parse_tree__file_kind__succeeded;
#line 784 "parse_tree.file_kind.c"
  }
#line 786 "parse_tree.file_kind.c"
}

#line 789 "parse_tree.file_kind.c"
static void MR_CALL 
parse_tree__file_kind____Compare____int_file_kind_0_0_10001(
#line 792 "parse_tree.file_kind.c"
  MR_Box * parse_tree__file_kind__wrapper_arg_1,
#line 794 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_2,
#line 796 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_3)
#line 798 "parse_tree.file_kind.c"
{
#line 800 "parse_tree.file_kind.c"
  {
#line 802 "parse_tree.file_kind.c"
    MR_Word parse_tree__file_kind__conv0_HeadVar__1_1;

#line 805 "parse_tree.file_kind.c"
    {
#line 807 "parse_tree.file_kind.c"
      parse_tree__file_kind____Compare____int_file_kind_0_0(&parse_tree__file_kind__conv0_HeadVar__1_1, ((MR_Word) parse_tree__file_kind__wrapper_arg_2), ((MR_Word) parse_tree__file_kind__wrapper_arg_3));
    }
#line 810 "parse_tree.file_kind.c"
    *parse_tree__file_kind__wrapper_arg_1 = ((MR_Box) (parse_tree__file_kind__conv0_HeadVar__1_1));
#line 812 "parse_tree.file_kind.c"
  }
#line 814 "parse_tree.file_kind.c"
}

#line 817 "parse_tree.file_kind.c"
static MR_bool MR_CALL 
parse_tree__file_kind____Unify____int_or_opt_file_kind_0_0_10001(
#line 820 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_1,
#line 822 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_2)
#line 824 "parse_tree.file_kind.c"
{
#line 826 "parse_tree.file_kind.c"
  {
#line 828 "parse_tree.file_kind.c"
    MR_bool parse_tree__file_kind__succeeded;

#line 831 "parse_tree.file_kind.c"
    {
#line 833 "parse_tree.file_kind.c"
      parse_tree__file_kind__succeeded = parse_tree__file_kind____Unify____int_or_opt_file_kind_0_0(((MR_Word) parse_tree__file_kind__wrapper_arg_1), ((MR_Word) parse_tree__file_kind__wrapper_arg_2));
    }
#line 836 "parse_tree.file_kind.c"
    return parse_tree__file_kind__succeeded;
#line 838 "parse_tree.file_kind.c"
  }
#line 840 "parse_tree.file_kind.c"
}

#line 843 "parse_tree.file_kind.c"
static void MR_CALL 
parse_tree__file_kind____Compare____int_or_opt_file_kind_0_0_10001(
#line 846 "parse_tree.file_kind.c"
  MR_Box * parse_tree__file_kind__wrapper_arg_1,
#line 848 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_2,
#line 850 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_3)
#line 852 "parse_tree.file_kind.c"
{
#line 854 "parse_tree.file_kind.c"
  {
#line 856 "parse_tree.file_kind.c"
    MR_Word parse_tree__file_kind__conv0_HeadVar__1_1;

#line 859 "parse_tree.file_kind.c"
    {
#line 861 "parse_tree.file_kind.c"
      parse_tree__file_kind____Compare____int_or_opt_file_kind_0_0(&parse_tree__file_kind__conv0_HeadVar__1_1, ((MR_Word) parse_tree__file_kind__wrapper_arg_2), ((MR_Word) parse_tree__file_kind__wrapper_arg_3));
    }
#line 864 "parse_tree.file_kind.c"
    *parse_tree__file_kind__wrapper_arg_1 = ((MR_Box) (parse_tree__file_kind__conv0_HeadVar__1_1));
#line 866 "parse_tree.file_kind.c"
  }
#line 868 "parse_tree.file_kind.c"
}

#line 871 "parse_tree.file_kind.c"
static MR_bool MR_CALL 
parse_tree__file_kind____Unify____opt_file_kind_0_0_10001(
#line 874 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_1,
#line 876 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_2)
#line 878 "parse_tree.file_kind.c"
{
#line 880 "parse_tree.file_kind.c"
  {
#line 882 "parse_tree.file_kind.c"
    MR_bool parse_tree__file_kind__succeeded;

#line 885 "parse_tree.file_kind.c"
    {
#line 887 "parse_tree.file_kind.c"
      parse_tree__file_kind__succeeded = parse_tree__file_kind____Unify____opt_file_kind_0_0(((MR_Word) parse_tree__file_kind__wrapper_arg_1), ((MR_Word) parse_tree__file_kind__wrapper_arg_2));
    }
#line 890 "parse_tree.file_kind.c"
    return parse_tree__file_kind__succeeded;
#line 892 "parse_tree.file_kind.c"
  }
#line 894 "parse_tree.file_kind.c"
}

#line 897 "parse_tree.file_kind.c"
static void MR_CALL 
parse_tree__file_kind____Compare____opt_file_kind_0_0_10001(
#line 900 "parse_tree.file_kind.c"
  MR_Box * parse_tree__file_kind__wrapper_arg_1,
#line 902 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_2,
#line 904 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_3)
#line 906 "parse_tree.file_kind.c"
{
#line 908 "parse_tree.file_kind.c"
  {
#line 910 "parse_tree.file_kind.c"
    MR_Word parse_tree__file_kind__conv0_HeadVar__1_1;

#line 913 "parse_tree.file_kind.c"
    {
#line 915 "parse_tree.file_kind.c"
      parse_tree__file_kind____Compare____opt_file_kind_0_0(&parse_tree__file_kind__conv0_HeadVar__1_1, ((MR_Word) parse_tree__file_kind__wrapper_arg_2), ((MR_Word) parse_tree__file_kind__wrapper_arg_3));
    }
#line 918 "parse_tree.file_kind.c"
    *parse_tree__file_kind__wrapper_arg_1 = ((MR_Box) (parse_tree__file_kind__conv0_HeadVar__1_1));
#line 920 "parse_tree.file_kind.c"
  }
#line 922 "parse_tree.file_kind.c"
}

#line 925 "parse_tree.file_kind.c"
static MR_bool MR_CALL 
parse_tree__file_kind____Unify____src_file_kind_0_0_10001(
#line 928 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_1,
#line 930 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_2)
#line 932 "parse_tree.file_kind.c"
{
#line 934 "parse_tree.file_kind.c"
  {
#line 936 "parse_tree.file_kind.c"
    MR_bool parse_tree__file_kind__succeeded;

#line 939 "parse_tree.file_kind.c"
    {
#line 941 "parse_tree.file_kind.c"
      parse_tree__file_kind__succeeded = parse_tree__file_kind____Unify____src_file_kind_0_0();
    }
#line 944 "parse_tree.file_kind.c"
    return parse_tree__file_kind__succeeded;
#line 946 "parse_tree.file_kind.c"
  }
#line 948 "parse_tree.file_kind.c"
}

#line 951 "parse_tree.file_kind.c"
static void MR_CALL 
parse_tree__file_kind____Compare____src_file_kind_0_0_10001(
#line 954 "parse_tree.file_kind.c"
  MR_Box * parse_tree__file_kind__wrapper_arg_1,
#line 956 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_2,
#line 958 "parse_tree.file_kind.c"
  MR_Box parse_tree__file_kind__wrapper_arg_3)
#line 960 "parse_tree.file_kind.c"
{
#line 962 "parse_tree.file_kind.c"
  {
#line 964 "parse_tree.file_kind.c"
    MR_Word parse_tree__file_kind__conv0_HeadVar__1_1;

#line 967 "parse_tree.file_kind.c"
    {
#line 969 "parse_tree.file_kind.c"
      parse_tree__file_kind____Compare____src_file_kind_0_0(&parse_tree__file_kind__conv0_HeadVar__1_1);
    }
#line 972 "parse_tree.file_kind.c"
    *parse_tree__file_kind__wrapper_arg_1 = ((MR_Box) (parse_tree__file_kind__conv0_HeadVar__1_1));
#line 974 "parse_tree.file_kind.c"
  }
#line 976 "parse_tree.file_kind.c"
}

#line 36 "file_kind.m"
void MR_CALL 
parse_tree__file_kind__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_102_105_108_101_95_107_105_110_100_95_95_115_114_99_95_102_105_108_101_95_107_105_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 36 "file_kind.m"
  MR_Word * parse_tree__file_kind__HeadVar__1_1)
#line 36 "file_kind.m"
{
#line 36 "file_kind.m"
  {
#line 36 "file_kind.m"
    MR_bool parse_tree__file_kind__succeeded;

#line 36 "file_kind.m"
    *parse_tree__file_kind__HeadVar__1_1 = (MR_Integer) 0;
#line 36 "file_kind.m"
  }
#line 36 "file_kind.m"
}

#line 36 "file_kind.m"
MR_bool MR_CALL 
parse_tree__file_kind__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_102_105_108_101_95_107_105_110_100_95_95_115_114_99_95_102_105_108_101_95_107_105_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 36 "file_kind.m"
{
#line 36 "file_kind.m"
  {
#line 36 "file_kind.m"
    return MR_TRUE;
#line 36 "file_kind.m"
  }
#line 36 "file_kind.m"
}

#line 36 "file_kind.m"
void MR_CALL 
parse_tree__file_kind____Compare____src_file_kind_0_0(
#line 36 "file_kind.m"
  MR_Word * parse_tree__file_kind__HeadVar__1_1)
#line 36 "file_kind.m"
{
#line 36 "file_kind.m"
  {
#line 36 "file_kind.m"
    MR_bool parse_tree__file_kind__succeeded;

#line 36 "file_kind.m"
    {
#line 36 "file_kind.m"
      parse_tree__file_kind__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_102_105_108_101_95_107_105_110_100_95_95_115_114_99_95_102_105_108_101_95_107_105_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(parse_tree__file_kind__HeadVar__1_1);
#line 36 "file_kind.m"
      return;
    }
#line 36 "file_kind.m"
  }
#line 36 "file_kind.m"
}

#line 36 "file_kind.m"
MR_bool MR_CALL 
parse_tree__file_kind____Unify____src_file_kind_0_0(void)
#line 36 "file_kind.m"
{
#line 36 "file_kind.m"
  {
#line 36 "file_kind.m"
    MR_bool parse_tree__file_kind__succeeded;

#line 36 "file_kind.m"
    {
#line 36 "file_kind.m"
      return parse_tree__file_kind__succeeded = parse_tree__file_kind__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_102_105_108_101_95_107_105_110_100_95_95_115_114_99_95_102_105_108_101_95_107_105_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 36 "file_kind.m"
    return parse_tree__file_kind__succeeded;
#line 36 "file_kind.m"
  }
#line 36 "file_kind.m"
}

#line 45 "file_kind.m"
void MR_CALL 
parse_tree__file_kind____Compare____opt_file_kind_0_0(
#line 45 "file_kind.m"
  MR_Word * parse_tree__file_kind__HeadVar__1_1,
#line 45 "file_kind.m"
  MR_Word parse_tree__file_kind__HeadVar__2_2,
#line 45 "file_kind.m"
  MR_Word parse_tree__file_kind__HeadVar__3_3)
#line 45 "file_kind.m"
{
#line 45 "file_kind.m"
  {
#line 45 "file_kind.m"
    MR_bool parse_tree__file_kind__succeeded;
#line 45 "file_kind.m"
    MR_Integer parse_tree__file_kind__Cast_HeadVar1_4 = (MR_Integer) parse_tree__file_kind__HeadVar__2_2;
#line 45 "file_kind.m"
    MR_Integer parse_tree__file_kind__Cast_HeadVar2_5 = (MR_Integer) parse_tree__file_kind__HeadVar__3_3;

#line 45 "file_kind.m"
    {
#line 45 "file_kind.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__file_kind__HeadVar__1_1, parse_tree__file_kind__Cast_HeadVar1_4, parse_tree__file_kind__Cast_HeadVar2_5);
#line 45 "file_kind.m"
      return;
    }
#line 45 "file_kind.m"
  }
#line 45 "file_kind.m"
}

#line 45 "file_kind.m"
MR_bool MR_CALL 
parse_tree__file_kind____Unify____opt_file_kind_0_0(
#line 45 "file_kind.m"
  MR_Word parse_tree__file_kind__HeadVar__2_1,
#line 45 "file_kind.m"
  MR_Word parse_tree__file_kind__HeadVar__2_2)
#line 45 "file_kind.m"
{
#line 1099 "parse_tree.file_kind.c"
  {
#line 1101 "parse_tree.file_kind.c"
    MR_bool parse_tree__file_kind__succeeded = (parse_tree__file_kind__HeadVar__2_1 == parse_tree__file_kind__HeadVar__2_2);

#line 1104 "parse_tree.file_kind.c"
    return parse_tree__file_kind__succeeded;
#line 1106 "parse_tree.file_kind.c"
  }
#line 45 "file_kind.m"
}

#line 32 "file_kind.m"
void MR_CALL 
parse_tree__file_kind____Compare____int_or_opt_file_kind_0_0(
#line 32 "file_kind.m"
  MR_Word * parse_tree__file_kind__HeadVar__1_1,
#line 32 "file_kind.m"
  MR_Word parse_tree__file_kind__HeadVar__2_2,
#line 32 "file_kind.m"
  MR_Word parse_tree__file_kind__HeadVar__3_3)
#line 32 "file_kind.m"
{
#line 32 "file_kind.m"
  {
#line 32 "file_kind.m"
    MR_bool parse_tree__file_kind__succeeded;
#line 32 "file_kind.m"
    MR_Integer parse_tree__file_kind__CastX_12 = (MR_Integer) parse_tree__file_kind__HeadVar__2_2;
#line 32 "file_kind.m"
    MR_Integer parse_tree__file_kind__CastY_13 = (MR_Integer) parse_tree__file_kind__HeadVar__3_3;

#line 32 "file_kind.m"
    parse_tree__file_kind__succeeded = (parse_tree__file_kind__CastX_12 == parse_tree__file_kind__CastY_13);
#line 32 "file_kind.m"
    if (parse_tree__file_kind__succeeded)
#line 1135 "parse_tree.file_kind.c"
      *parse_tree__file_kind__HeadVar__1_1 = (MR_Integer) 0;
#line 32 "file_kind.m"
    else
#line 32 "file_kind.m"
    if (((MR_tag((MR_Word) parse_tree__file_kind__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 32 "file_kind.m"
      {
#line 32 "file_kind.m"
        MR_Word parse_tree__file_kind__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__file_kind__HeadVar__2_2, (MR_Integer) 0)));

#line 32 "file_kind.m"
        if (((MR_tag((MR_Word) parse_tree__file_kind__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 32 "file_kind.m"
          {
#line 32 "file_kind.m"
            MR_Word parse_tree__file_kind__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__file_kind__HeadVar__3_3, (MR_Integer) 0)));
#line 32 "file_kind.m"
            MR_Integer parse_tree__file_kind__V_18_18 = (MR_Integer) parse_tree__file_kind__V_16_16;
#line 32 "file_kind.m"
            MR_Integer parse_tree__file_kind__V_19_19 = (MR_Integer) parse_tree__file_kind__V_5_5;

#line 32 "file_kind.m"
            {
#line 32 "file_kind.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__file_kind__HeadVar__1_1, parse_tree__file_kind__V_18_18, parse_tree__file_kind__V_19_19);
#line 32 "file_kind.m"
              return;
            }
#line 32 "file_kind.m"
          }
#line 32 "file_kind.m"
        else
#line 1168 "parse_tree.file_kind.c"
          *parse_tree__file_kind__HeadVar__1_1 = (MR_Integer) 1;
#line 32 "file_kind.m"
      }
#line 32 "file_kind.m"
    else
#line 32 "file_kind.m"
      {
#line 32 "file_kind.m"
        MR_Word parse_tree__file_kind__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__file_kind__HeadVar__2_2, (MR_Integer) 0)));

#line 32 "file_kind.m"
        if (((MR_tag((MR_Word) parse_tree__file_kind__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1181 "parse_tree.file_kind.c"
          *parse_tree__file_kind__HeadVar__1_1 = (MR_Integer) 2;
#line 32 "file_kind.m"
        else
#line 32 "file_kind.m"
          {
#line 32 "file_kind.m"
            MR_Word parse_tree__file_kind__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__file_kind__HeadVar__3_3, (MR_Integer) 0)));
#line 32 "file_kind.m"
            MR_Integer parse_tree__file_kind__V_20_20 = (MR_Integer) parse_tree__file_kind__V_17_17;
#line 32 "file_kind.m"
            MR_Integer parse_tree__file_kind__V_21_21 = (MR_Integer) parse_tree__file_kind__V_11_11;

#line 32 "file_kind.m"
            {
#line 32 "file_kind.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__file_kind__HeadVar__1_1, parse_tree__file_kind__V_20_20, parse_tree__file_kind__V_21_21);
#line 32 "file_kind.m"
              return;
            }
#line 32 "file_kind.m"
          }
#line 32 "file_kind.m"
      }
#line 32 "file_kind.m"
  }
#line 32 "file_kind.m"
}

#line 32 "file_kind.m"
MR_bool MR_CALL 
parse_tree__file_kind____Unify____int_or_opt_file_kind_0_0(
#line 32 "file_kind.m"
  MR_Word parse_tree__file_kind__HeadVar__1_1,
#line 32 "file_kind.m"
  MR_Word parse_tree__file_kind__HeadVar__2_2)
#line 32 "file_kind.m"
{
#line 32 "file_kind.m"
  {
#line 32 "file_kind.m"
    MR_bool parse_tree__file_kind__succeeded;
#line 32 "file_kind.m"
    MR_Integer parse_tree__file_kind__CastX_7 = (MR_Integer) parse_tree__file_kind__HeadVar__1_1;
#line 32 "file_kind.m"
    MR_Integer parse_tree__file_kind__CastY_8 = (MR_Integer) parse_tree__file_kind__HeadVar__2_2;

#line 32 "file_kind.m"
    parse_tree__file_kind__succeeded = (parse_tree__file_kind__CastX_7 == parse_tree__file_kind__CastY_8);
#line 32 "file_kind.m"
    if (parse_tree__file_kind__succeeded)
#line 32 "file_kind.m"
      parse_tree__file_kind__succeeded = MR_TRUE;
#line 32 "file_kind.m"
    else
#line 32 "file_kind.m"
    if (((MR_tag((MR_Word) parse_tree__file_kind__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 32 "file_kind.m"
      {
#line 32 "file_kind.m"
        MR_Word parse_tree__file_kind__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__file_kind__HeadVar__1_1, (MR_Integer) 0)));
#line 32 "file_kind.m"
        MR_Word parse_tree__file_kind__V_4_4;

#line 32 "file_kind.m"
        parse_tree__file_kind__succeeded = ((MR_tag((MR_Word) parse_tree__file_kind__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 32 "file_kind.m"
        if (parse_tree__file_kind__succeeded)
#line 32 "file_kind.m"
          {
#line 32 "file_kind.m"
            parse_tree__file_kind__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__file_kind__HeadVar__2_2, (MR_Integer) 0)));
#line 1253 "parse_tree.file_kind.c"
            parse_tree__file_kind__succeeded = (parse_tree__file_kind__V_3_3 == parse_tree__file_kind__V_4_4);
#line 32 "file_kind.m"
          }
#line 32 "file_kind.m"
      }
#line 32 "file_kind.m"
    else
#line 32 "file_kind.m"
      {
#line 32 "file_kind.m"
        MR_Word parse_tree__file_kind__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__file_kind__HeadVar__1_1, (MR_Integer) 0)));
#line 32 "file_kind.m"
        MR_Word parse_tree__file_kind__V_6_6;

#line 32 "file_kind.m"
        parse_tree__file_kind__succeeded = ((MR_tag((MR_Word) parse_tree__file_kind__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 32 "file_kind.m"
        if (parse_tree__file_kind__succeeded)
#line 32 "file_kind.m"
          {
#line 32 "file_kind.m"
            parse_tree__file_kind__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__file_kind__HeadVar__2_2, (MR_Integer) 0)));
#line 1276 "parse_tree.file_kind.c"
            parse_tree__file_kind__succeeded = (parse_tree__file_kind__V_5_5 == parse_tree__file_kind__V_6_6);
#line 32 "file_kind.m"
          }
#line 32 "file_kind.m"
      }
#line 32 "file_kind.m"
    return parse_tree__file_kind__succeeded;
#line 32 "file_kind.m"
  }
#line 32 "file_kind.m"
}

#line 39 "file_kind.m"
void MR_CALL 
parse_tree__file_kind____Compare____int_file_kind_0_0(
#line 39 "file_kind.m"
  MR_Word * parse_tree__file_kind__HeadVar__1_1,
#line 39 "file_kind.m"
  MR_Word parse_tree__file_kind__HeadVar__2_2,
#line 39 "file_kind.m"
  MR_Word parse_tree__file_kind__HeadVar__3_3)
#line 39 "file_kind.m"
{
#line 39 "file_kind.m"
  {
#line 39 "file_kind.m"
    MR_bool parse_tree__file_kind__succeeded;
#line 39 "file_kind.m"
    MR_Integer parse_tree__file_kind__Cast_HeadVar1_4 = (MR_Integer) parse_tree__file_kind__HeadVar__2_2;
#line 39 "file_kind.m"
    MR_Integer parse_tree__file_kind__Cast_HeadVar2_5 = (MR_Integer) parse_tree__file_kind__HeadVar__3_3;

#line 39 "file_kind.m"
    {
#line 39 "file_kind.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__file_kind__HeadVar__1_1, parse_tree__file_kind__Cast_HeadVar1_4, parse_tree__file_kind__Cast_HeadVar2_5);
#line 39 "file_kind.m"
      return;
    }
#line 39 "file_kind.m"
  }
#line 39 "file_kind.m"
}

#line 39 "file_kind.m"
MR_bool MR_CALL 
parse_tree__file_kind____Unify____int_file_kind_0_0(
#line 39 "file_kind.m"
  MR_Word parse_tree__file_kind__HeadVar__2_1,
#line 39 "file_kind.m"
  MR_Word parse_tree__file_kind__HeadVar__2_2)
#line 39 "file_kind.m"
{
#line 1330 "parse_tree.file_kind.c"
  {
#line 1332 "parse_tree.file_kind.c"
    MR_bool parse_tree__file_kind__succeeded = (parse_tree__file_kind__HeadVar__2_1 == parse_tree__file_kind__HeadVar__2_2);

#line 1335 "parse_tree.file_kind.c"
    return parse_tree__file_kind__succeeded;
#line 1337 "parse_tree.file_kind.c"
  }
#line 39 "file_kind.m"
}

#line 27 "file_kind.m"
void MR_CALL 
parse_tree__file_kind____Compare____file_kind_0_0(
#line 27 "file_kind.m"
  MR_Word * parse_tree__file_kind__HeadVar__1_1,
#line 27 "file_kind.m"
  MR_Word parse_tree__file_kind__HeadVar__2_2,
#line 27 "file_kind.m"
  MR_Word parse_tree__file_kind__HeadVar__3_3)
#line 27 "file_kind.m"
{
#line 27 "file_kind.m"
  {
#line 27 "file_kind.m"
    MR_bool parse_tree__file_kind__succeeded;
#line 27 "file_kind.m"
    MR_Integer parse_tree__file_kind__CastX_16 = (MR_Integer) parse_tree__file_kind__HeadVar__2_2;
#line 27 "file_kind.m"
    MR_Integer parse_tree__file_kind__CastY_17 = (MR_Integer) parse_tree__file_kind__HeadVar__3_3;

#line 27 "file_kind.m"
    parse_tree__file_kind__succeeded = (parse_tree__file_kind__CastX_16 == parse_tree__file_kind__CastY_17);
#line 27 "file_kind.m"
    if (parse_tree__file_kind__succeeded)
#line 1366 "parse_tree.file_kind.c"
      *parse_tree__file_kind__HeadVar__1_1 = (MR_Integer) 0;
#line 27 "file_kind.m"
    else
#line 27 "file_kind.m"
#line 27 "file_kind.m"
      switch (MR_tag((MR_Word) parse_tree__file_kind__HeadVar__2_2)) {
#line 27 "file_kind.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 27 "file_kind.m"
        case (MR_Integer) 0:
#line 27 "file_kind.m"
#line 27 "file_kind.m"
          switch (MR_tag((MR_Word) parse_tree__file_kind__HeadVar__3_3)) {
#line 27 "file_kind.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 27 "file_kind.m"
            case (MR_Integer) 0:
#line 27 "file_kind.m"
              *parse_tree__file_kind__HeadVar__1_1 = (MR_Integer) 0;
#line 27 "file_kind.m"
              break;
#line 27 "file_kind.m"
            case (MR_Integer) 1:
#line 1390 "parse_tree.file_kind.c"
              *parse_tree__file_kind__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "file_kind.m"
              break;
#line 27 "file_kind.m"
            case (MR_Integer) 2:
#line 1396 "parse_tree.file_kind.c"
              *parse_tree__file_kind__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "file_kind.m"
              break;
#line 27 "file_kind.m"
          }
#line 27 "file_kind.m"
          break;
#line 27 "file_kind.m"
        case (MR_Integer) 1:
#line 27 "file_kind.m"
          {
#line 27 "file_kind.m"
            MR_Word parse_tree__file_kind__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__file_kind__HeadVar__2_2, (MR_Integer) 0)));

#line 27 "file_kind.m"
#line 27 "file_kind.m"
            switch (MR_tag((MR_Word) parse_tree__file_kind__HeadVar__3_3)) {
#line 27 "file_kind.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 27 "file_kind.m"
              case (MR_Integer) 0:
#line 1418 "parse_tree.file_kind.c"
                *parse_tree__file_kind__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "file_kind.m"
                break;
#line 27 "file_kind.m"
              case (MR_Integer) 1:
#line 27 "file_kind.m"
                {
#line 27 "file_kind.m"
                  MR_Word parse_tree__file_kind__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__file_kind__HeadVar__3_3, (MR_Integer) 0)));
#line 27 "file_kind.m"
                  MR_Integer parse_tree__file_kind__V_22_22 = (MR_Integer) parse_tree__file_kind__V_20_20;
#line 27 "file_kind.m"
                  MR_Integer parse_tree__file_kind__V_23_23 = (MR_Integer) parse_tree__file_kind__V_8_8;

#line 27 "file_kind.m"
                  {
#line 27 "file_kind.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__file_kind__HeadVar__1_1, parse_tree__file_kind__V_22_22, parse_tree__file_kind__V_23_23);
#line 27 "file_kind.m"
                    return;
                  }
#line 27 "file_kind.m"
                }
#line 27 "file_kind.m"
                break;
#line 27 "file_kind.m"
              case (MR_Integer) 2:
#line 1446 "parse_tree.file_kind.c"
                *parse_tree__file_kind__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "file_kind.m"
                break;
#line 27 "file_kind.m"
            }
#line 27 "file_kind.m"
          }
#line 27 "file_kind.m"
          break;
#line 27 "file_kind.m"
        case (MR_Integer) 2:
#line 27 "file_kind.m"
          {
#line 27 "file_kind.m"
            MR_Word parse_tree__file_kind__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__file_kind__HeadVar__2_2, (MR_Integer) 0)));

#line 27 "file_kind.m"
#line 27 "file_kind.m"
            switch (MR_tag((MR_Word) parse_tree__file_kind__HeadVar__3_3)) {
#line 27 "file_kind.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 27 "file_kind.m"
              case (MR_Integer) 0:
#line 1470 "parse_tree.file_kind.c"
                *parse_tree__file_kind__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "file_kind.m"
                break;
#line 27 "file_kind.m"
              case (MR_Integer) 1:
#line 1476 "parse_tree.file_kind.c"
                *parse_tree__file_kind__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "file_kind.m"
                break;
#line 27 "file_kind.m"
              case (MR_Integer) 2:
#line 27 "file_kind.m"
                {
#line 27 "file_kind.m"
                  MR_Word parse_tree__file_kind__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__file_kind__HeadVar__3_3, (MR_Integer) 0)));
#line 27 "file_kind.m"
                  MR_Integer parse_tree__file_kind__V_24_24 = (MR_Integer) parse_tree__file_kind__V_21_21;
#line 27 "file_kind.m"
                  MR_Integer parse_tree__file_kind__V_25_25 = (MR_Integer) parse_tree__file_kind__V_15_15;

#line 27 "file_kind.m"
                  {
#line 27 "file_kind.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__file_kind__HeadVar__1_1, parse_tree__file_kind__V_24_24, parse_tree__file_kind__V_25_25);
#line 27 "file_kind.m"
                    return;
                  }
#line 27 "file_kind.m"
                }
#line 27 "file_kind.m"
                break;
#line 27 "file_kind.m"
            }
#line 27 "file_kind.m"
          }
#line 27 "file_kind.m"
          break;
#line 27 "file_kind.m"
      }
#line 27 "file_kind.m"
  }
#line 27 "file_kind.m"
}

#line 27 "file_kind.m"
MR_bool MR_CALL 
parse_tree__file_kind____Unify____file_kind_0_0(
#line 27 "file_kind.m"
  MR_Word parse_tree__file_kind__HeadVar__1_1,
#line 27 "file_kind.m"
  MR_Word parse_tree__file_kind__HeadVar__2_2)
#line 27 "file_kind.m"
{
#line 27 "file_kind.m"
  {
#line 27 "file_kind.m"
    MR_bool parse_tree__file_kind__succeeded;
#line 27 "file_kind.m"
    MR_Integer parse_tree__file_kind__CastX_9 = (MR_Integer) parse_tree__file_kind__HeadVar__1_1;
#line 27 "file_kind.m"
    MR_Integer parse_tree__file_kind__CastY_10 = (MR_Integer) parse_tree__file_kind__HeadVar__2_2;

#line 27 "file_kind.m"
    parse_tree__file_kind__succeeded = (parse_tree__file_kind__CastX_9 == parse_tree__file_kind__CastY_10);
#line 27 "file_kind.m"
    if (parse_tree__file_kind__succeeded)
#line 27 "file_kind.m"
      parse_tree__file_kind__succeeded = MR_TRUE;
#line 27 "file_kind.m"
    else
#line 27 "file_kind.m"
#line 27 "file_kind.m"
      switch (MR_tag((MR_Word) parse_tree__file_kind__HeadVar__1_1)) {
#line 27 "file_kind.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 27 "file_kind.m"
        case (MR_Integer) 0:
#line 27 "file_kind.m"
          {
#line 27 "file_kind.m"
            MR_Integer parse_tree__file_kind__CastX_3 = (MR_Integer) parse_tree__file_kind__HeadVar__1_1;
#line 27 "file_kind.m"
            MR_Integer parse_tree__file_kind__CastY_4 = (MR_Integer) parse_tree__file_kind__HeadVar__2_2;

#line 27 "file_kind.m"
            parse_tree__file_kind__succeeded = (parse_tree__file_kind__CastY_4 == parse_tree__file_kind__CastX_3);
#line 27 "file_kind.m"
          }
#line 27 "file_kind.m"
          break;
#line 27 "file_kind.m"
        case (MR_Integer) 1:
#line 27 "file_kind.m"
          {
#line 27 "file_kind.m"
            MR_Word parse_tree__file_kind__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__file_kind__HeadVar__1_1, (MR_Integer) 0)));
#line 27 "file_kind.m"
            MR_Word parse_tree__file_kind__V_6_6;

#line 27 "file_kind.m"
            parse_tree__file_kind__succeeded = ((MR_tag((MR_Word) parse_tree__file_kind__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 27 "file_kind.m"
            if (parse_tree__file_kind__succeeded)
#line 27 "file_kind.m"
              {
#line 27 "file_kind.m"
                parse_tree__file_kind__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__file_kind__HeadVar__2_2, (MR_Integer) 0)));
#line 1578 "parse_tree.file_kind.c"
                parse_tree__file_kind__succeeded = (parse_tree__file_kind__V_5_5 == parse_tree__file_kind__V_6_6);
#line 27 "file_kind.m"
              }
#line 27 "file_kind.m"
          }
#line 27 "file_kind.m"
          break;
#line 27 "file_kind.m"
        case (MR_Integer) 2:
#line 27 "file_kind.m"
          {
#line 27 "file_kind.m"
            MR_Word parse_tree__file_kind__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__file_kind__HeadVar__1_1, (MR_Integer) 0)));
#line 27 "file_kind.m"
            MR_Word parse_tree__file_kind__V_8_8;

#line 27 "file_kind.m"
            parse_tree__file_kind__succeeded = ((MR_tag((MR_Word) parse_tree__file_kind__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 27 "file_kind.m"
            if (parse_tree__file_kind__succeeded)
#line 27 "file_kind.m"
              {
#line 27 "file_kind.m"
                parse_tree__file_kind__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__file_kind__HeadVar__2_2, (MR_Integer) 0)));
#line 1603 "parse_tree.file_kind.c"
                parse_tree__file_kind__succeeded = (parse_tree__file_kind__V_7_7 == parse_tree__file_kind__V_8_8);
#line 27 "file_kind.m"
              }
#line 27 "file_kind.m"
          }
#line 27 "file_kind.m"
          break;
#line 27 "file_kind.m"
      }
#line 27 "file_kind.m"
    return parse_tree__file_kind__succeeded;
#line 27 "file_kind.m"
  }
#line 27 "file_kind.m"
}

#line 53 "file_kind.m"
MR_bool MR_CALL 
parse_tree__file_kind__extension_to_file_kind_2_p_0(
#line 53 "file_kind.m"
  MR_String parse_tree__file_kind__Extension_3,
#line 53 "file_kind.m"
  MR_Word * parse_tree__file_kind__FileKind_4)
#line 53 "file_kind.m"
{
#line 75 "file_kind.m"
  {
#line 75 "file_kind.m"
    MR_bool parse_tree__file_kind__succeeded;
#line 75 "file_kind.m"
    MR_Integer parse_tree__file_kind__lo_0;
#line 75 "file_kind.m"
    MR_Integer parse_tree__file_kind__hi_1;
#line 75 "file_kind.m"
    MR_Integer parse_tree__file_kind__mid_2;
#line 75 "file_kind.m"
    MR_Integer parse_tree__file_kind__result_3;

#line 75 "file_kind.m"
    /* binary string simple lookup switch */
#line 75 "file_kind.m"
    parse_tree__file_kind__lo_0 = (MR_Integer) 0;
#line 75 "file_kind.m"
    parse_tree__file_kind__hi_1 = (MR_Integer) 6;
#line 75 "file_kind.m"
    do
#line 75 "file_kind.m"
      {
#line 75 "file_kind.m"
        parse_tree__file_kind__mid_2 = (((parse_tree__file_kind__lo_0 + parse_tree__file_kind__hi_1)) / (MR_Integer) 2);
#line 75 "file_kind.m"
        parse_tree__file_kind__result_3 = MR_strcmp(parse_tree__file_kind__Extension_3, ((&parse_tree__file_kind_vector_common_3[0 + parse_tree__file_kind__mid_2]))->parse_tree__file_kind__vector_common_type_3_0__vct_3_f_0);
#line 75 "file_kind.m"
        if ((parse_tree__file_kind__result_3 == (MR_Integer) 0))
#line 75 "file_kind.m"
          {
#line 75 "file_kind.m"
            *parse_tree__file_kind__FileKind_4 = ((&parse_tree__file_kind_vector_common_3[0 + parse_tree__file_kind__mid_2]))->parse_tree__file_kind__vector_common_type_3_0__vct_3_f_1;
#line 75 "file_kind.m"
            parse_tree__file_kind__succeeded = MR_TRUE;
#line 75 "file_kind.m"
            /* jump out of search loop */
#line 75 "file_kind.m"
            goto label_0;
#line 75 "file_kind.m"
          }
#line 75 "file_kind.m"
        else
#line 75 "file_kind.m"
        if ((parse_tree__file_kind__result_3 < (MR_Integer) 0))
#line 75 "file_kind.m"
          parse_tree__file_kind__hi_1 = (parse_tree__file_kind__mid_2 - (MR_Integer) 1);
#line 75 "file_kind.m"
        else
#line 75 "file_kind.m"
          parse_tree__file_kind__lo_0 = (parse_tree__file_kind__mid_2 + (MR_Integer) 1);
#line 75 "file_kind.m"
      }
#line 75 "file_kind.m"
    while ((parse_tree__file_kind__lo_0 <= parse_tree__file_kind__hi_1));
#line 75 "file_kind.m"
    parse_tree__file_kind__succeeded = MR_FALSE;
#line 75 "file_kind.m"
  label_0:;
#line 75 "file_kind.m"
    return parse_tree__file_kind__succeeded;
#line 75 "file_kind.m"
  }
#line 53 "file_kind.m"
}

#line 51 "file_kind.m"
MR_String MR_CALL 
parse_tree__file_kind__opt_file_kind_to_extension_1_f_0(
#line 51 "file_kind.m"
  MR_Word parse_tree__file_kind__HeadVar__1_1)
#line 51 "file_kind.m"
{
#line 70 "file_kind.m"
  {
#line 70 "file_kind.m"
    MR_bool parse_tree__file_kind__succeeded;
#line 70 "file_kind.m"
    MR_String parse_tree__file_kind__HeadVar__2_2;

#line 70 "file_kind.m"
#line 70 "file_kind.m"
    switch (parse_tree__file_kind__HeadVar__1_1) {
#line 70 "file_kind.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 70 "file_kind.m"
      case (MR_Integer) 0:
#line 70 "file_kind.m"
        parse_tree__file_kind__HeadVar__2_2 = (MR_String) ".opt";
#line 70 "file_kind.m"
        break;
#line 70 "file_kind.m"
      case (MR_Integer) 1:
#line 71 "file_kind.m"
        parse_tree__file_kind__HeadVar__2_2 = (MR_String) ".trans_opt";
#line 70 "file_kind.m"
        break;
#line 70 "file_kind.m"
    }
#line 70 "file_kind.m"
    return parse_tree__file_kind__HeadVar__2_2;
#line 70 "file_kind.m"
  }
#line 51 "file_kind.m"
}

#line 50 "file_kind.m"
MR_String MR_CALL 
parse_tree__file_kind__int_file_kind_to_extension_1_f_0(
#line 50 "file_kind.m"
  MR_Word parse_tree__file_kind__HeadVar__1_1)
#line 50 "file_kind.m"
{
#line 65 "file_kind.m"
  {
#line 65 "file_kind.m"
    MR_bool parse_tree__file_kind__succeeded;
#line 65 "file_kind.m"
    MR_String parse_tree__file_kind__HeadVar__2_2 = ((&parse_tree__file_kind_vector_common_1[4 + parse_tree__file_kind__HeadVar__1_1]))->parse_tree__file_kind__vector_common_type_1_0__vct_1_f_0;

#line 65 "file_kind.m"
    return parse_tree__file_kind__HeadVar__2_2;
#line 65 "file_kind.m"
  }
#line 50 "file_kind.m"
}

#line 49 "file_kind.m"
MR_String MR_CALL 
parse_tree__file_kind__file_kind_to_extension_1_f_0(
#line 49 "file_kind.m"
  MR_Word parse_tree__file_kind__HeadVar__1_1)
#line 49 "file_kind.m"
{
#line 59 "file_kind.m"
  {
#line 59 "file_kind.m"
    MR_bool parse_tree__file_kind__succeeded;
#line 59 "file_kind.m"
    MR_String parse_tree__file_kind__HeadVar__2_2;

#line 59 "file_kind.m"
#line 59 "file_kind.m"
    switch (MR_tag((MR_Word) parse_tree__file_kind__HeadVar__1_1)) {
#line 59 "file_kind.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 59 "file_kind.m"
      case (MR_Integer) 0:
#line 59 "file_kind.m"
        parse_tree__file_kind__HeadVar__2_2 = (MR_String) ".m";
#line 59 "file_kind.m"
        break;
#line 59 "file_kind.m"
      case (MR_Integer) 1:
#line 60 "file_kind.m"
        {
#line 60 "file_kind.m"
          MR_Word parse_tree__file_kind__IntFileKind_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__file_kind__HeadVar__1_1, (MR_Integer) 0)));

#line 65 "file_kind.m"
          parse_tree__file_kind__HeadVar__2_2 = ((&parse_tree__file_kind_vector_common_1[0 + parse_tree__file_kind__IntFileKind_3]))->parse_tree__file_kind__vector_common_type_1_0__vct_1_f_0;
#line 60 "file_kind.m"
        }
#line 59 "file_kind.m"
        break;
#line 59 "file_kind.m"
      case (MR_Integer) 2:
#line 62 "file_kind.m"
        {
#line 62 "file_kind.m"
          MR_Word parse_tree__file_kind__OptFileKind_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__file_kind__HeadVar__1_1, (MR_Integer) 0)));

#line 70 "file_kind.m"
#line 70 "file_kind.m"
          switch (parse_tree__file_kind__OptFileKind_4) {
#line 70 "file_kind.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 70 "file_kind.m"
            case (MR_Integer) 0:
#line 70 "file_kind.m"
              parse_tree__file_kind__HeadVar__2_2 = (MR_String) ".opt";
#line 70 "file_kind.m"
              break;
#line 70 "file_kind.m"
            case (MR_Integer) 1:
#line 71 "file_kind.m"
              parse_tree__file_kind__HeadVar__2_2 = (MR_String) ".trans_opt";
#line 70 "file_kind.m"
              break;
#line 70 "file_kind.m"
          }
#line 62 "file_kind.m"
        }
#line 59 "file_kind.m"
        break;
#line 59 "file_kind.m"
    }
#line 59 "file_kind.m"
    return parse_tree__file_kind__HeadVar__2_2;
#line 59 "file_kind.m"
  }
#line 49 "file_kind.m"
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
