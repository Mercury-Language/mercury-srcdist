/*
** Automatically generated from `prog_detism.m'
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


/* :- module parse_tree.prog_detism. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_detism__init
ENDINIT
*/

#include "parse_tree.prog_detism.mih"


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 97 "parse_tree.prog_detism.c"
static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_0;

#line 100 "parse_tree.prog_detism.c"
static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_1;

#line 103 "parse_tree.prog_detism.c"
static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_2;

#line 106 "parse_tree.prog_detism.c"
static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_3;

#line 109 "parse_tree.prog_detism.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_detism__parse_tree__prog_detism__enum_value_ordered_det_comparison_0[4];

#line 112 "parse_tree.prog_detism.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_detism__parse_tree__prog_detism__enum_name_ordered_det_comparison_0[4];

#line 115 "parse_tree.prog_detism.c"
static const MR_Integer parse_tree__prog_detism__parse_tree__prog_detism__functor_number_map_det_comparison_0[4];

#line 118 "parse_tree.prog_detism.c"
static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_component_comparison_0_0;

#line 121 "parse_tree.prog_detism.c"
static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_component_comparison_0_1;

#line 124 "parse_tree.prog_detism.c"
static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_component_comparison_0_2;

#line 127 "parse_tree.prog_detism.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_detism__parse_tree__prog_detism__enum_value_ordered_det_component_comparison_0[3];

#line 130 "parse_tree.prog_detism.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_detism__parse_tree__prog_detism__enum_name_ordered_det_component_comparison_0[3];

#line 133 "parse_tree.prog_detism.c"
static const MR_Integer parse_tree__prog_detism__parse_tree__prog_detism__functor_number_map_det_component_comparison_0[3];

#line 136 "parse_tree.prog_detism.c"
static MR_bool MR_CALL 
parse_tree__prog_detism____Unify____det_comparison_0_0_10001(
#line 139 "parse_tree.prog_detism.c"
  MR_Box parse_tree__prog_detism__wrapper_arg_1,
#line 141 "parse_tree.prog_detism.c"
  MR_Box parse_tree__prog_detism__wrapper_arg_2);

#line 144 "parse_tree.prog_detism.c"
static void MR_CALL 
parse_tree__prog_detism____Compare____det_comparison_0_0_10001(
#line 147 "parse_tree.prog_detism.c"
  MR_Box * parse_tree__prog_detism__wrapper_arg_1,
#line 149 "parse_tree.prog_detism.c"
  MR_Box parse_tree__prog_detism__wrapper_arg_2,
#line 151 "parse_tree.prog_detism.c"
  MR_Box parse_tree__prog_detism__wrapper_arg_3);

#line 154 "parse_tree.prog_detism.c"
static MR_bool MR_CALL 
parse_tree__prog_detism____Unify____det_component_comparison_0_0_10001(
#line 157 "parse_tree.prog_detism.c"
  MR_Box parse_tree__prog_detism__wrapper_arg_1,
#line 159 "parse_tree.prog_detism.c"
  MR_Box parse_tree__prog_detism__wrapper_arg_2);

#line 162 "parse_tree.prog_detism.c"
static void MR_CALL 
parse_tree__prog_detism____Compare____det_component_comparison_0_0_10001(
#line 165 "parse_tree.prog_detism.c"
  MR_Box * parse_tree__prog_detism__wrapper_arg_1,
#line 167 "parse_tree.prog_detism.c"
  MR_Box parse_tree__prog_detism__wrapper_arg_2,
#line 169 "parse_tree.prog_detism.c"
  MR_Box parse_tree__prog_detism__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_detism_scalar_common_1[4][1];


#line 142 "prog_detism.m"
/* sealed */ struct parse_tree__prog_detism__vector_common_type_2_0_s {
#line 142 "prog_detism.m"
  const MR_Word parse_tree__prog_detism__vector_common_type_2_0__vct_2_f_0;
#line 142 "prog_detism.m"
};

static /* final */ const struct parse_tree__prog_detism__vector_common_type_2_0_s parse_tree__prog_detism_vector_common_2[8];

#line 153 "prog_detism.m"
/* sealed */ struct parse_tree__prog_detism__vector_common_type_3_0_s {
#line 153 "prog_detism.m"
  const MR_Word parse_tree__prog_detism__vector_common_type_3_0__vct_3_f_0;
#line 153 "prog_detism.m"
};

static /* final */ const struct parse_tree__prog_detism__vector_common_type_3_0_s parse_tree__prog_detism_vector_common_3[44];

#line 289 "prog_detism.m"
/* sealed */ struct parse_tree__prog_detism__vector_common_type_4_0_s {
#line 289 "prog_detism.m"
  const MR_Word parse_tree__prog_detism__vector_common_type_4_0__vct_4_f_0;
#line 289 "prog_detism.m"
};

static /* final */ const struct parse_tree__prog_detism__vector_common_type_4_0_s parse_tree__prog_detism_vector_common_4[16];



static /* final */ const MR_Box parse_tree__prog_detism_scalar_common_1[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 7))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 6))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};


static /* final */ const struct parse_tree__prog_detism__vector_common_type_2_0_s parse_tree__prog_detism_vector_common_2[8] = {
  /* row 0 */   {     (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_detism_scalar_common_1[0]) },
  /* row 1 */   {     (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_detism_scalar_common_1[3]) },
  /* row 2 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) },
  /* row 3 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) },
  /* row 4 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) },
  /* row 5 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) },
  /* row 6 */   {     (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_detism_scalar_common_1[1]) },
  /* row 7 */   {     (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_detism_scalar_common_1[2]) },
};

static /* final */ const struct parse_tree__prog_detism__vector_common_type_3_0_s parse_tree__prog_detism_vector_common_3[44] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 3 },
  /* row 2 */   {     (MR_Integer) 3 },
  /* row 3 */   {     (MR_Integer) 3 },
  /* row 4 */   {     (MR_Integer) 0 },
  /* row 5 */   {     (MR_Integer) 1 },
  /* row 6 */   {     (MR_Integer) 2 },
  /* row 7 */   {     (MR_Integer) 3 },
  /* row 8 */   {     (MR_Integer) 0 },
  /* row 9 */   {     (MR_Integer) 0 },
  /* row 10 */   {     (MR_Integer) 0 },
  /* row 11 */   {     (MR_Integer) 0 },
  /* row 12 */   {     (MR_Integer) 3 },
  /* row 13 */   {     (MR_Integer) 3 },
  /* row 14 */   {     (MR_Integer) 2 },
  /* row 15 */   {     (MR_Integer) 3 },
  /* row 16 */   {     (MR_Integer) 2 },
  /* row 17 */   {     (MR_Integer) 2 },
  /* row 18 */   {     (MR_Integer) 2 },
  /* row 19 */   {     (MR_Integer) 2 },
  /* row 20 */   {     (MR_Integer) 1 },
  /* row 21 */   {     (MR_Integer) 3 },
  /* row 22 */   {     (MR_Integer) 2 },
  /* row 23 */   {     (MR_Integer) 3 },
  /* row 24 */   {     (MR_Integer) 0 },
  /* row 25 */   {     (MR_Integer) 1 },
  /* row 26 */   {     (MR_Integer) 2 },
  /* row 27 */   {     (MR_Integer) 3 },
  /* row 28 */   {     (MR_Integer) 3 },
  /* row 29 */   {     (MR_Integer) 3 },
  /* row 30 */   {     (MR_Integer) 2 },
  /* row 31 */   {     (MR_Integer) 3 },
  /* row 32 */   {     (MR_Integer) 2 },
  /* row 33 */   {     (MR_Integer) 2 },
  /* row 34 */   {     (MR_Integer) 2 },
  /* row 35 */   {     (MR_Integer) 2 },
  /* row 36 */   {     (MR_Integer) 1 },
  /* row 37 */   {     (MR_Integer) 1 },
  /* row 38 */   {     (MR_Integer) 2 },
  /* row 39 */   {     (MR_Integer) 3 },
  /* row 40 */   {     (MR_Integer) 0 },
  /* row 41 */   {     (MR_Integer) 1 },
  /* row 42 */   {     (MR_Integer) 2 },
  /* row 43 */   {     (MR_Integer) 3 },
};

static /* final */ const struct parse_tree__prog_detism__vector_common_type_4_0_s parse_tree__prog_detism_vector_common_4[16] = {
  /* row 0 */   {     (MR_Integer) 2 },
  /* row 1 */   {     (MR_Integer) 2 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 1 },
  /* row 4 */   {     (MR_Integer) 2 },
  /* row 5 */   {     (MR_Integer) 2 },
  /* row 6 */   {     (MR_Integer) 1 },
  /* row 7 */   {     (MR_Integer) 0 },
  /* row 8 */   {     (MR_Integer) 2 },
  /* row 9 */   {     (MR_Integer) 1 },
  /* row 10 */   {     (MR_Integer) 0 },
  /* row 11 */   {     (MR_Integer) 0 },
  /* row 12 */   {     (MR_Integer) 1 },
  /* row 13 */   {     (MR_Integer) 0 },
  /* row 14 */   {     (MR_Integer) 0 },
  /* row 15 */   {     (MR_Integer) 0 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 310 "parse_tree.prog_detism.c"
static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_0 = {
  (MR_String) "first_detism_tighter_than",
  (MR_Integer) 0
};

#line 316 "parse_tree.prog_detism.c"
static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_1 = {
  (MR_String) "first_detism_same_as",
  (MR_Integer) 1
};

#line 322 "parse_tree.prog_detism.c"
static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_2 = {
  (MR_String) "first_detism_looser_than",
  (MR_Integer) 2
};

#line 328 "parse_tree.prog_detism.c"
static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_3 = {
  (MR_String) "first_detism_incomparable",
  (MR_Integer) 3
};

#line 334 "parse_tree.prog_detism.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_detism__parse_tree__prog_detism__enum_value_ordered_det_comparison_0[4] = {
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_0,
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_1,
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_2,
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_3
};

#line 342 "parse_tree.prog_detism.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_detism__parse_tree__prog_detism__enum_name_ordered_det_comparison_0[4] = {
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_3,
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_2,
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_1,
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_0
};

#line 350 "parse_tree.prog_detism.c"
static const MR_Integer parse_tree__prog_detism__parse_tree__prog_detism__functor_number_map_det_comparison_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 358 "parse_tree.prog_detism.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_detism__parse_tree__prog_detism__type_ctor_info_det_comparison_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_detism____Unify____det_comparison_0_0_10001)),
  ((MR_Box) (parse_tree__prog_detism____Compare____det_comparison_0_0_10001)),
  (MR_String) "parse_tree.prog_detism",
  (MR_String) "det_comparison",
  {     parse_tree__prog_detism__parse_tree__prog_detism__enum_name_ordered_det_comparison_0 },
  {     parse_tree__prog_detism__parse_tree__prog_detism__enum_value_ordered_det_comparison_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__prog_detism__parse_tree__prog_detism__functor_number_map_det_comparison_0
};

#line 375 "parse_tree.prog_detism.c"
static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_component_comparison_0_0 = {
  (MR_String) "first_tighter_than",
  (MR_Integer) 0
};

#line 381 "parse_tree.prog_detism.c"
static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_component_comparison_0_1 = {
  (MR_String) "first_same_as",
  (MR_Integer) 1
};

#line 387 "parse_tree.prog_detism.c"
static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_component_comparison_0_2 = {
  (MR_String) "first_looser_than",
  (MR_Integer) 2
};

#line 393 "parse_tree.prog_detism.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_detism__parse_tree__prog_detism__enum_value_ordered_det_component_comparison_0[3] = {
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_component_comparison_0_0,
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_component_comparison_0_1,
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_component_comparison_0_2
};

#line 400 "parse_tree.prog_detism.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_detism__parse_tree__prog_detism__enum_name_ordered_det_component_comparison_0[3] = {
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_component_comparison_0_2,
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_component_comparison_0_1,
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_component_comparison_0_0
};

#line 407 "parse_tree.prog_detism.c"
static const MR_Integer parse_tree__prog_detism__parse_tree__prog_detism__functor_number_map_det_component_comparison_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 414 "parse_tree.prog_detism.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_detism__parse_tree__prog_detism__type_ctor_info_det_component_comparison_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_detism____Unify____det_component_comparison_0_0_10001)),
  ((MR_Box) (parse_tree__prog_detism____Compare____det_component_comparison_0_0_10001)),
  (MR_String) "parse_tree.prog_detism",
  (MR_String) "det_component_comparison",
  {     parse_tree__prog_detism__parse_tree__prog_detism__enum_name_ordered_det_component_comparison_0 },
  {     parse_tree__prog_detism__parse_tree__prog_detism__enum_value_ordered_det_component_comparison_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__prog_detism__parse_tree__prog_detism__functor_number_map_det_component_comparison_0
};

#line 431 "parse_tree.prog_detism.c"
static MR_bool MR_CALL 
parse_tree__prog_detism____Unify____det_comparison_0_0_10001(
#line 434 "parse_tree.prog_detism.c"
  MR_Box parse_tree__prog_detism__wrapper_arg_1,
#line 436 "parse_tree.prog_detism.c"
  MR_Box parse_tree__prog_detism__wrapper_arg_2)
#line 438 "parse_tree.prog_detism.c"
{
#line 440 "parse_tree.prog_detism.c"
  {
#line 442 "parse_tree.prog_detism.c"
    MR_bool parse_tree__prog_detism__succeeded;

#line 445 "parse_tree.prog_detism.c"
    {
#line 447 "parse_tree.prog_detism.c"
      parse_tree__prog_detism__succeeded = parse_tree__prog_detism____Unify____det_comparison_0_0(((MR_Word) parse_tree__prog_detism__wrapper_arg_1), ((MR_Word) parse_tree__prog_detism__wrapper_arg_2));
    }
#line 450 "parse_tree.prog_detism.c"
    return parse_tree__prog_detism__succeeded;
#line 452 "parse_tree.prog_detism.c"
  }
#line 454 "parse_tree.prog_detism.c"
}

#line 457 "parse_tree.prog_detism.c"
static void MR_CALL 
parse_tree__prog_detism____Compare____det_comparison_0_0_10001(
#line 460 "parse_tree.prog_detism.c"
  MR_Box * parse_tree__prog_detism__wrapper_arg_1,
#line 462 "parse_tree.prog_detism.c"
  MR_Box parse_tree__prog_detism__wrapper_arg_2,
#line 464 "parse_tree.prog_detism.c"
  MR_Box parse_tree__prog_detism__wrapper_arg_3)
#line 466 "parse_tree.prog_detism.c"
{
#line 468 "parse_tree.prog_detism.c"
  {
#line 470 "parse_tree.prog_detism.c"
    MR_Word parse_tree__prog_detism__conv0_HeadVar__1_1;

#line 473 "parse_tree.prog_detism.c"
    {
#line 475 "parse_tree.prog_detism.c"
      parse_tree__prog_detism____Compare____det_comparison_0_0(&parse_tree__prog_detism__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_detism__wrapper_arg_2), ((MR_Word) parse_tree__prog_detism__wrapper_arg_3));
    }
#line 478 "parse_tree.prog_detism.c"
    *parse_tree__prog_detism__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_detism__conv0_HeadVar__1_1));
#line 480 "parse_tree.prog_detism.c"
  }
#line 482 "parse_tree.prog_detism.c"
}

#line 485 "parse_tree.prog_detism.c"
static MR_bool MR_CALL 
parse_tree__prog_detism____Unify____det_component_comparison_0_0_10001(
#line 488 "parse_tree.prog_detism.c"
  MR_Box parse_tree__prog_detism__wrapper_arg_1,
#line 490 "parse_tree.prog_detism.c"
  MR_Box parse_tree__prog_detism__wrapper_arg_2)
#line 492 "parse_tree.prog_detism.c"
{
#line 494 "parse_tree.prog_detism.c"
  {
#line 496 "parse_tree.prog_detism.c"
    MR_bool parse_tree__prog_detism__succeeded;

#line 499 "parse_tree.prog_detism.c"
    {
#line 501 "parse_tree.prog_detism.c"
      parse_tree__prog_detism__succeeded = parse_tree__prog_detism____Unify____det_component_comparison_0_0(((MR_Word) parse_tree__prog_detism__wrapper_arg_1), ((MR_Word) parse_tree__prog_detism__wrapper_arg_2));
    }
#line 504 "parse_tree.prog_detism.c"
    return parse_tree__prog_detism__succeeded;
#line 506 "parse_tree.prog_detism.c"
  }
#line 508 "parse_tree.prog_detism.c"
}

#line 511 "parse_tree.prog_detism.c"
static void MR_CALL 
parse_tree__prog_detism____Compare____det_component_comparison_0_0_10001(
#line 514 "parse_tree.prog_detism.c"
  MR_Box * parse_tree__prog_detism__wrapper_arg_1,
#line 516 "parse_tree.prog_detism.c"
  MR_Box parse_tree__prog_detism__wrapper_arg_2,
#line 518 "parse_tree.prog_detism.c"
  MR_Box parse_tree__prog_detism__wrapper_arg_3)
#line 520 "parse_tree.prog_detism.c"
{
#line 522 "parse_tree.prog_detism.c"
  {
#line 524 "parse_tree.prog_detism.c"
    MR_Word parse_tree__prog_detism__conv0_HeadVar__1_1;

#line 527 "parse_tree.prog_detism.c"
    {
#line 529 "parse_tree.prog_detism.c"
      parse_tree__prog_detism____Compare____det_component_comparison_0_0(&parse_tree__prog_detism__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_detism__wrapper_arg_2), ((MR_Word) parse_tree__prog_detism__wrapper_arg_3));
    }
#line 532 "parse_tree.prog_detism.c"
    *parse_tree__prog_detism__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_detism__conv0_HeadVar__1_1));
#line 534 "parse_tree.prog_detism.c"
  }
#line 536 "parse_tree.prog_detism.c"
}

#line 85 "prog_detism.m"
void MR_CALL 
parse_tree__prog_detism____Compare____det_component_comparison_0_0(
#line 85 "prog_detism.m"
  MR_Word * parse_tree__prog_detism__HeadVar__1_1,
#line 85 "prog_detism.m"
  MR_Word parse_tree__prog_detism__HeadVar__2_2,
#line 85 "prog_detism.m"
  MR_Word parse_tree__prog_detism__HeadVar__3_3)
#line 85 "prog_detism.m"
{
#line 85 "prog_detism.m"
  {
#line 85 "prog_detism.m"
    MR_bool parse_tree__prog_detism__succeeded;
#line 85 "prog_detism.m"
    MR_Integer parse_tree__prog_detism__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_detism__HeadVar__2_2;
#line 85 "prog_detism.m"
    MR_Integer parse_tree__prog_detism__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_detism__HeadVar__3_3;

#line 85 "prog_detism.m"
    {
#line 85 "prog_detism.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_detism__HeadVar__1_1, parse_tree__prog_detism__Cast_HeadVar1_4, parse_tree__prog_detism__Cast_HeadVar2_5);
    }
#line 85 "prog_detism.m"
  }
#line 85 "prog_detism.m"
}

#line 85 "prog_detism.m"
MR_bool MR_CALL 
parse_tree__prog_detism____Unify____det_component_comparison_0_0(
#line 85 "prog_detism.m"
  MR_Word parse_tree__prog_detism__HeadVar__2_1,
#line 85 "prog_detism.m"
  MR_Word parse_tree__prog_detism__HeadVar__2_2)
#line 85 "prog_detism.m"
{
#line 578 "parse_tree.prog_detism.c"
  {
#line 580 "parse_tree.prog_detism.c"
    MR_bool parse_tree__prog_detism__succeeded = (parse_tree__prog_detism__HeadVar__2_1 == parse_tree__prog_detism__HeadVar__2_2);

#line 583 "parse_tree.prog_detism.c"
    return parse_tree__prog_detism__succeeded;
#line 585 "parse_tree.prog_detism.c"
  }
#line 85 "prog_detism.m"
}

#line 68 "prog_detism.m"
void MR_CALL 
parse_tree__prog_detism____Compare____det_comparison_0_0(
#line 68 "prog_detism.m"
  MR_Word * parse_tree__prog_detism__HeadVar__1_1,
#line 68 "prog_detism.m"
  MR_Word parse_tree__prog_detism__HeadVar__2_2,
#line 68 "prog_detism.m"
  MR_Word parse_tree__prog_detism__HeadVar__3_3)
#line 68 "prog_detism.m"
{
#line 68 "prog_detism.m"
  {
#line 68 "prog_detism.m"
    MR_bool parse_tree__prog_detism__succeeded;
#line 68 "prog_detism.m"
    MR_Integer parse_tree__prog_detism__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_detism__HeadVar__2_2;
#line 68 "prog_detism.m"
    MR_Integer parse_tree__prog_detism__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_detism__HeadVar__3_3;

#line 68 "prog_detism.m"
    {
#line 68 "prog_detism.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_detism__HeadVar__1_1, parse_tree__prog_detism__Cast_HeadVar1_4, parse_tree__prog_detism__Cast_HeadVar2_5);
    }
#line 68 "prog_detism.m"
  }
#line 68 "prog_detism.m"
}

#line 68 "prog_detism.m"
MR_bool MR_CALL 
parse_tree__prog_detism____Unify____det_comparison_0_0(
#line 68 "prog_detism.m"
  MR_Word parse_tree__prog_detism__HeadVar__2_1,
#line 68 "prog_detism.m"
  MR_Word parse_tree__prog_detism__HeadVar__2_2)
#line 68 "prog_detism.m"
{
#line 629 "parse_tree.prog_detism.c"
  {
#line 631 "parse_tree.prog_detism.c"
    MR_bool parse_tree__prog_detism__succeeded = (parse_tree__prog_detism__HeadVar__2_1 == parse_tree__prog_detism__HeadVar__2_2);

#line 634 "parse_tree.prog_detism.c"
    return parse_tree__prog_detism__succeeded;
#line 636 "parse_tree.prog_detism.c"
  }
#line 68 "prog_detism.m"
}

#line 93 "prog_detism.m"
void MR_CALL 
parse_tree__prog_detism__compare_solncounts_3_p_0(
#line 93 "prog_detism.m"
  MR_Word parse_tree__prog_detism__HeadVar__1_1,
#line 93 "prog_detism.m"
  MR_Word parse_tree__prog_detism__HeadVar__2_2,
#line 93 "prog_detism.m"
  MR_Word * parse_tree__prog_detism__HeadVar__3_3)
#line 93 "prog_detism.m"
{
#line 289 "prog_detism.m"
  {
#line 289 "prog_detism.m"
    MR_bool parse_tree__prog_detism__succeeded;

#line 289 "prog_detism.m"
#line 289 "prog_detism.m"
    switch (parse_tree__prog_detism__HeadVar__1_1) {
#line 289 "prog_detism.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 289 "prog_detism.m"
      case (MR_Integer) 3:
#line 289 "prog_detism.m"
        {
#line 289 "prog_detism.m"
          *parse_tree__prog_detism__HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_4[0 + parse_tree__prog_detism__HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_4_0__vct_4_f_0;
#line 289 "prog_detism.m"
        }
#line 289 "prog_detism.m"
        break;
#line 289 "prog_detism.m"
      case (MR_Integer) 2:
#line 289 "prog_detism.m"
        {
#line 289 "prog_detism.m"
          *parse_tree__prog_detism__HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_4[4 + parse_tree__prog_detism__HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_4_0__vct_4_f_0;
#line 289 "prog_detism.m"
        }
#line 289 "prog_detism.m"
        break;
#line 289 "prog_detism.m"
      case (MR_Integer) 1:
#line 289 "prog_detism.m"
        {
#line 289 "prog_detism.m"
          *parse_tree__prog_detism__HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_4[8 + parse_tree__prog_detism__HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_4_0__vct_4_f_0;
#line 289 "prog_detism.m"
        }
#line 289 "prog_detism.m"
        break;
#line 289 "prog_detism.m"
      case (MR_Integer) 0:
#line 289 "prog_detism.m"
        {
#line 289 "prog_detism.m"
          *parse_tree__prog_detism__HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_4[12 + parse_tree__prog_detism__HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_4_0__vct_4_f_0;
#line 289 "prog_detism.m"
        }
#line 289 "prog_detism.m"
        break;
#line 289 "prog_detism.m"
    }
#line 289 "prog_detism.m"
  }
#line 93 "prog_detism.m"
}

#line 90 "prog_detism.m"
void MR_CALL 
parse_tree__prog_detism__compare_canfails_3_p_0(
#line 90 "prog_detism.m"
  MR_Word parse_tree__prog_detism__HeadVar__1_1,
#line 90 "prog_detism.m"
  MR_Word parse_tree__prog_detism__HeadVar__2_2,
#line 90 "prog_detism.m"
  MR_Word * parse_tree__prog_detism__HeadVar__3_3)
#line 90 "prog_detism.m"
{
#line 284 "prog_detism.m"
  {
#line 284 "prog_detism.m"
    MR_bool parse_tree__prog_detism__succeeded;

#line 284 "prog_detism.m"
#line 284 "prog_detism.m"
    switch (parse_tree__prog_detism__HeadVar__1_1) {
#line 284 "prog_detism.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 284 "prog_detism.m"
      case (MR_Integer) 0:
#line 284 "prog_detism.m"
#line 284 "prog_detism.m"
        switch (parse_tree__prog_detism__HeadVar__2_2) {
#line 284 "prog_detism.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 284 "prog_detism.m"
          case (MR_Integer) 0:
#line 287 "prog_detism.m"
            *parse_tree__prog_detism__HeadVar__3_3 = (MR_Integer) 1;
#line 284 "prog_detism.m"
            break;
#line 284 "prog_detism.m"
          case (MR_Integer) 1:
#line 286 "prog_detism.m"
            *parse_tree__prog_detism__HeadVar__3_3 = (MR_Integer) 2;
#line 284 "prog_detism.m"
            break;
#line 284 "prog_detism.m"
        }
#line 284 "prog_detism.m"
        break;
#line 284 "prog_detism.m"
      case (MR_Integer) 1:
#line 284 "prog_detism.m"
#line 284 "prog_detism.m"
        switch (parse_tree__prog_detism__HeadVar__2_2) {
#line 284 "prog_detism.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 284 "prog_detism.m"
          case (MR_Integer) 0:
#line 285 "prog_detism.m"
            *parse_tree__prog_detism__HeadVar__3_3 = (MR_Integer) 0;
#line 284 "prog_detism.m"
            break;
#line 284 "prog_detism.m"
          case (MR_Integer) 1:
#line 284 "prog_detism.m"
            *parse_tree__prog_detism__HeadVar__3_3 = (MR_Integer) 1;
#line 284 "prog_detism.m"
            break;
#line 284 "prog_detism.m"
        }
#line 284 "prog_detism.m"
        break;
#line 284 "prog_detism.m"
    }
#line 284 "prog_detism.m"
  }
#line 90 "prog_detism.m"
}

#line 82 "prog_detism.m"
void MR_CALL 
parse_tree__prog_detism__compare_determinisms_3_p_0(
#line 82 "prog_detism.m"
  MR_Word parse_tree__prog_detism__DetismA_4,
#line 82 "prog_detism.m"
  MR_Word parse_tree__prog_detism__DetismB_5,
#line 82 "prog_detism.m"
  MR_Word * parse_tree__prog_detism__CmpDetism_6)
#line 82 "prog_detism.m"
{
#line 237 "prog_detism.m"
  {
#line 237 "prog_detism.m"
    MR_bool parse_tree__prog_detism__succeeded;
#line 237 "prog_detism.m"
    MR_Word parse_tree__prog_detism__CanFailA_7;
#line 237 "prog_detism.m"
    MR_Word parse_tree__prog_detism__SolnsA_8;
#line 237 "prog_detism.m"
    MR_Word parse_tree__prog_detism__CanFailB_9;
#line 237 "prog_detism.m"
    MR_Word parse_tree__prog_detism__SolnsB_10;
#line 237 "prog_detism.m"
    MR_Word parse_tree__prog_detism__CmpSolns_12;

#line 238 "prog_detism.m"
    {
#line 238 "prog_detism.m"
      parse_tree__prog_data__determinism_components_3_p_0(parse_tree__prog_detism__DetismA_4, &parse_tree__prog_detism__CanFailA_7, &parse_tree__prog_detism__SolnsA_8);
    }
#line 239 "prog_detism.m"
    {
#line 239 "prog_detism.m"
      parse_tree__prog_data__determinism_components_3_p_0(parse_tree__prog_detism__DetismB_5, &parse_tree__prog_detism__CanFailB_9, &parse_tree__prog_detism__SolnsB_10);
    }
#line 241 "prog_detism.m"
    {
#line 241 "prog_detism.m"
      parse_tree__prog_detism__compare_solncounts_3_p_0(parse_tree__prog_detism__SolnsA_8, parse_tree__prog_detism__SolnsB_10, &parse_tree__prog_detism__CmpSolns_12);
    }
#line 824 "parse_tree.prog_detism.c"
#line 825 "parse_tree.prog_detism.c"
    switch (parse_tree__prog_detism__CanFailA_7) {
#line 827 "parse_tree.prog_detism.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 829 "parse_tree.prog_detism.c"
      case (MR_Integer) 0:
#line 831 "parse_tree.prog_detism.c"
#line 832 "parse_tree.prog_detism.c"
        switch (parse_tree__prog_detism__CanFailB_9) {
#line 834 "parse_tree.prog_detism.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 836 "parse_tree.prog_detism.c"
          case (MR_Integer) 0:
#line 264 "prog_detism.m"
#line 264 "prog_detism.m"
            switch (parse_tree__prog_detism__CmpSolns_12) {
#line 264 "prog_detism.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 264 "prog_detism.m"
              case (MR_Integer) 2:
#line 269 "prog_detism.m"
                *parse_tree__prog_detism__CmpDetism_6 = (MR_Integer) 2;
#line 264 "prog_detism.m"
                break;
#line 264 "prog_detism.m"
              case (MR_Integer) 1:
#line 266 "prog_detism.m"
                *parse_tree__prog_detism__CmpDetism_6 = (MR_Integer) 1;
#line 264 "prog_detism.m"
                break;
#line 264 "prog_detism.m"
              case (MR_Integer) 0:
#line 263 "prog_detism.m"
                *parse_tree__prog_detism__CmpDetism_6 = (MR_Integer) 0;
#line 264 "prog_detism.m"
                break;
#line 264 "prog_detism.m"
            }
#line 863 "parse_tree.prog_detism.c"
            break;
#line 865 "parse_tree.prog_detism.c"
          case (MR_Integer) 1:
#line 276 "prog_detism.m"
#line 276 "prog_detism.m"
            switch (parse_tree__prog_detism__CmpSolns_12) {
#line 276 "prog_detism.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 276 "prog_detism.m"
              case (MR_Integer) 2:
#line 276 "prog_detism.m"
              case (MR_Integer) 1:
#line 280 "prog_detism.m"
                *parse_tree__prog_detism__CmpDetism_6 = (MR_Integer) 2;
#line 276 "prog_detism.m"
                break;
#line 276 "prog_detism.m"
              case (MR_Integer) 0:
#line 275 "prog_detism.m"
                *parse_tree__prog_detism__CmpDetism_6 = (MR_Integer) 3;
#line 276 "prog_detism.m"
                break;
#line 276 "prog_detism.m"
            }
#line 888 "parse_tree.prog_detism.c"
            break;
#line 890 "parse_tree.prog_detism.c"
        }
#line 892 "parse_tree.prog_detism.c"
        break;
#line 894 "parse_tree.prog_detism.c"
      case (MR_Integer) 1:
#line 896 "parse_tree.prog_detism.c"
#line 897 "parse_tree.prog_detism.c"
        switch (parse_tree__prog_detism__CanFailB_9) {
#line 899 "parse_tree.prog_detism.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 901 "parse_tree.prog_detism.c"
          case (MR_Integer) 0:
#line 255 "prog_detism.m"
#line 255 "prog_detism.m"
            switch (parse_tree__prog_detism__CmpSolns_12) {
#line 255 "prog_detism.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 255 "prog_detism.m"
              case (MR_Integer) 2:
#line 257 "prog_detism.m"
                *parse_tree__prog_detism__CmpDetism_6 = (MR_Integer) 3;
#line 255 "prog_detism.m"
                break;
#line 255 "prog_detism.m"
              case (MR_Integer) 1:
#line 255 "prog_detism.m"
              case (MR_Integer) 0:
#line 254 "prog_detism.m"
                *parse_tree__prog_detism__CmpDetism_6 = (MR_Integer) 0;
#line 255 "prog_detism.m"
                break;
#line 255 "prog_detism.m"
            }
#line 924 "parse_tree.prog_detism.c"
            break;
#line 926 "parse_tree.prog_detism.c"
          case (MR_Integer) 1:
#line 264 "prog_detism.m"
#line 264 "prog_detism.m"
            switch (parse_tree__prog_detism__CmpSolns_12) {
#line 264 "prog_detism.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 264 "prog_detism.m"
              case (MR_Integer) 2:
#line 269 "prog_detism.m"
                *parse_tree__prog_detism__CmpDetism_6 = (MR_Integer) 2;
#line 264 "prog_detism.m"
                break;
#line 264 "prog_detism.m"
              case (MR_Integer) 1:
#line 266 "prog_detism.m"
                *parse_tree__prog_detism__CmpDetism_6 = (MR_Integer) 1;
#line 264 "prog_detism.m"
                break;
#line 264 "prog_detism.m"
              case (MR_Integer) 0:
#line 263 "prog_detism.m"
                *parse_tree__prog_detism__CmpDetism_6 = (MR_Integer) 0;
#line 264 "prog_detism.m"
                break;
#line 264 "prog_detism.m"
            }
#line 953 "parse_tree.prog_detism.c"
            break;
#line 955 "parse_tree.prog_detism.c"
        }
#line 957 "parse_tree.prog_detism.c"
        break;
#line 959 "parse_tree.prog_detism.c"
    }
#line 237 "prog_detism.m"
  }
#line 82 "prog_detism.m"
}

#line 64 "prog_detism.m"
void MR_CALL 
parse_tree__prog_detism__det_switch_canfail_3_p_0(
#line 64 "prog_detism.m"
  MR_Word parse_tree__prog_detism__HeadVar__1_1,
#line 64 "prog_detism.m"
  MR_Word parse_tree__prog_detism__HeadVar__2_2,
#line 64 "prog_detism.m"
  MR_Word * parse_tree__prog_detism__HeadVar__3_3)
#line 64 "prog_detism.m"
{
#line 230 "prog_detism.m"
  {
#line 230 "prog_detism.m"
    MR_bool parse_tree__prog_detism__succeeded;

#line 230 "prog_detism.m"
#line 230 "prog_detism.m"
    switch (parse_tree__prog_detism__HeadVar__1_1) {
#line 230 "prog_detism.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 230 "prog_detism.m"
      case (MR_Integer) 0:
#line 230 "prog_detism.m"
#line 230 "prog_detism.m"
        switch (parse_tree__prog_detism__HeadVar__2_2) {
#line 230 "prog_detism.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 230 "prog_detism.m"
          case (MR_Integer) 0:
#line 230 "prog_detism.m"
            *parse_tree__prog_detism__HeadVar__3_3 = (MR_Integer) 0;
#line 230 "prog_detism.m"
            break;
#line 230 "prog_detism.m"
          case (MR_Integer) 1:
#line 231 "prog_detism.m"
            *parse_tree__prog_detism__HeadVar__3_3 = (MR_Integer) 0;
#line 230 "prog_detism.m"
            break;
#line 230 "prog_detism.m"
        }
#line 230 "prog_detism.m"
        break;
#line 230 "prog_detism.m"
      case (MR_Integer) 1:
#line 230 "prog_detism.m"
#line 230 "prog_detism.m"
        switch (parse_tree__prog_detism__HeadVar__2_2) {
#line 230 "prog_detism.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 230 "prog_detism.m"
          case (MR_Integer) 0:
#line 232 "prog_detism.m"
            *parse_tree__prog_detism__HeadVar__3_3 = (MR_Integer) 0;
#line 230 "prog_detism.m"
            break;
#line 230 "prog_detism.m"
          case (MR_Integer) 1:
#line 233 "prog_detism.m"
            *parse_tree__prog_detism__HeadVar__3_3 = (MR_Integer) 1;
#line 230 "prog_detism.m"
            break;
#line 230 "prog_detism.m"
        }
#line 230 "prog_detism.m"
        break;
#line 230 "prog_detism.m"
    }
#line 230 "prog_detism.m"
  }
#line 64 "prog_detism.m"
}

#line 61 "prog_detism.m"
void MR_CALL 
parse_tree__prog_detism__det_switch_maxsoln_3_p_0(
#line 61 "prog_detism.m"
  MR_Word parse_tree__prog_detism__HeadVar__1_1,
#line 61 "prog_detism.m"
  MR_Word parse_tree__prog_detism__HeadVar__2_2,
#line 61 "prog_detism.m"
  MR_Word * parse_tree__prog_detism__HeadVar__3_3)
#line 61 "prog_detism.m"
{
#line 210 "prog_detism.m"
  {
#line 210 "prog_detism.m"
    MR_bool parse_tree__prog_detism__succeeded;

#line 210 "prog_detism.m"
#line 210 "prog_detism.m"
    switch (parse_tree__prog_detism__HeadVar__1_1) {
#line 210 "prog_detism.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 210 "prog_detism.m"
      case (MR_Integer) 3:
#line 210 "prog_detism.m"
        {
#line 210 "prog_detism.m"
          *parse_tree__prog_detism__HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_3[28 + parse_tree__prog_detism__HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_3_0__vct_3_f_0;
#line 210 "prog_detism.m"
        }
#line 210 "prog_detism.m"
        break;
#line 210 "prog_detism.m"
      case (MR_Integer) 2:
#line 210 "prog_detism.m"
        {
#line 210 "prog_detism.m"
          *parse_tree__prog_detism__HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_3[32 + parse_tree__prog_detism__HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_3_0__vct_3_f_0;
#line 210 "prog_detism.m"
        }
#line 210 "prog_detism.m"
        break;
#line 210 "prog_detism.m"
      case (MR_Integer) 1:
#line 210 "prog_detism.m"
        {
#line 210 "prog_detism.m"
          *parse_tree__prog_detism__HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_3[36 + parse_tree__prog_detism__HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_3_0__vct_3_f_0;
#line 210 "prog_detism.m"
        }
#line 210 "prog_detism.m"
        break;
#line 210 "prog_detism.m"
      case (MR_Integer) 0:
#line 210 "prog_detism.m"
        {
#line 210 "prog_detism.m"
          *parse_tree__prog_detism__HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_3[40 + parse_tree__prog_detism__HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_3_0__vct_3_f_0;
#line 210 "prog_detism.m"
        }
#line 210 "prog_detism.m"
        break;
#line 210 "prog_detism.m"
    }
#line 210 "prog_detism.m"
  }
#line 61 "prog_detism.m"
}

#line 58 "prog_detism.m"
void MR_CALL 
parse_tree__prog_detism__det_disjunction_canfail_3_p_0(
#line 58 "prog_detism.m"
  MR_Word parse_tree__prog_detism__HeadVar__1_1,
#line 58 "prog_detism.m"
  MR_Word parse_tree__prog_detism__HeadVar__2_2,
#line 58 "prog_detism.m"
  MR_Word * parse_tree__prog_detism__HeadVar__3_3)
#line 58 "prog_detism.m"
{
#line 203 "prog_detism.m"
  {
#line 203 "prog_detism.m"
    MR_bool parse_tree__prog_detism__succeeded;

#line 203 "prog_detism.m"
#line 203 "prog_detism.m"
    switch (parse_tree__prog_detism__HeadVar__1_1) {
#line 203 "prog_detism.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 203 "prog_detism.m"
      case (MR_Integer) 0:
#line 203 "prog_detism.m"
#line 203 "prog_detism.m"
        switch (parse_tree__prog_detism__HeadVar__2_2) {
#line 203 "prog_detism.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 203 "prog_detism.m"
          case (MR_Integer) 0:
#line 203 "prog_detism.m"
            *parse_tree__prog_detism__HeadVar__3_3 = (MR_Integer) 0;
#line 203 "prog_detism.m"
            break;
#line 203 "prog_detism.m"
          case (MR_Integer) 1:
#line 204 "prog_detism.m"
            *parse_tree__prog_detism__HeadVar__3_3 = (MR_Integer) 1;
#line 203 "prog_detism.m"
            break;
#line 203 "prog_detism.m"
        }
#line 203 "prog_detism.m"
        break;
#line 203 "prog_detism.m"
      case (MR_Integer) 1:
#line 203 "prog_detism.m"
#line 203 "prog_detism.m"
        switch (parse_tree__prog_detism__HeadVar__2_2) {
#line 203 "prog_detism.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 203 "prog_detism.m"
          case (MR_Integer) 0:
#line 205 "prog_detism.m"
            *parse_tree__prog_detism__HeadVar__3_3 = (MR_Integer) 1;
#line 203 "prog_detism.m"
            break;
#line 203 "prog_detism.m"
          case (MR_Integer) 1:
#line 206 "prog_detism.m"
            *parse_tree__prog_detism__HeadVar__3_3 = (MR_Integer) 1;
#line 203 "prog_detism.m"
            break;
#line 203 "prog_detism.m"
        }
#line 203 "prog_detism.m"
        break;
#line 203 "prog_detism.m"
    }
#line 203 "prog_detism.m"
  }
#line 58 "prog_detism.m"
}

#line 55 "prog_detism.m"
void MR_CALL 
parse_tree__prog_detism__det_disjunction_maxsoln_3_p_0(
#line 55 "prog_detism.m"
  MR_Word parse_tree__prog_detism__HeadVar__1_1,
#line 55 "prog_detism.m"
  MR_Word parse_tree__prog_detism__HeadVar__2_2,
#line 55 "prog_detism.m"
  MR_Word * parse_tree__prog_detism__HeadVar__3_3)
#line 55 "prog_detism.m"
{
#line 183 "prog_detism.m"
  {
#line 183 "prog_detism.m"
    MR_bool parse_tree__prog_detism__succeeded;

#line 183 "prog_detism.m"
#line 183 "prog_detism.m"
    switch (parse_tree__prog_detism__HeadVar__1_1) {
#line 183 "prog_detism.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 183 "prog_detism.m"
      case (MR_Integer) 3:
#line 183 "prog_detism.m"
        {
#line 183 "prog_detism.m"
          *parse_tree__prog_detism__HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_3[12 + parse_tree__prog_detism__HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_3_0__vct_3_f_0;
#line 183 "prog_detism.m"
        }
#line 183 "prog_detism.m"
        break;
#line 183 "prog_detism.m"
      case (MR_Integer) 2:
#line 183 "prog_detism.m"
        {
#line 183 "prog_detism.m"
          *parse_tree__prog_detism__HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_3[16 + parse_tree__prog_detism__HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_3_0__vct_3_f_0;
#line 183 "prog_detism.m"
        }
#line 183 "prog_detism.m"
        break;
#line 183 "prog_detism.m"
      case (MR_Integer) 1:
#line 183 "prog_detism.m"
        {
#line 183 "prog_detism.m"
          *parse_tree__prog_detism__HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_3[20 + parse_tree__prog_detism__HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_3_0__vct_3_f_0;
#line 183 "prog_detism.m"
        }
#line 183 "prog_detism.m"
        break;
#line 183 "prog_detism.m"
      case (MR_Integer) 0:
#line 183 "prog_detism.m"
        {
#line 183 "prog_detism.m"
          *parse_tree__prog_detism__HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_3[24 + parse_tree__prog_detism__HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_3_0__vct_3_f_0;
#line 183 "prog_detism.m"
        }
#line 183 "prog_detism.m"
        break;
#line 183 "prog_detism.m"
    }
#line 183 "prog_detism.m"
  }
#line 55 "prog_detism.m"
}

#line 52 "prog_detism.m"
void MR_CALL 
parse_tree__prog_detism__det_conjunction_canfail_3_p_0(
#line 52 "prog_detism.m"
  MR_Word parse_tree__prog_detism__HeadVar__1_1,
#line 52 "prog_detism.m"
  MR_Word parse_tree__prog_detism__HeadVar__2_2,
#line 52 "prog_detism.m"
  MR_Word * parse_tree__prog_detism__HeadVar__3_3)
#line 52 "prog_detism.m"
{
#line 176 "prog_detism.m"
  {
#line 176 "prog_detism.m"
    MR_bool parse_tree__prog_detism__succeeded;

#line 176 "prog_detism.m"
#line 176 "prog_detism.m"
    switch (parse_tree__prog_detism__HeadVar__1_1) {
#line 176 "prog_detism.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 176 "prog_detism.m"
      case (MR_Integer) 0:
#line 176 "prog_detism.m"
#line 176 "prog_detism.m"
        switch (parse_tree__prog_detism__HeadVar__2_2) {
#line 176 "prog_detism.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 176 "prog_detism.m"
          case (MR_Integer) 0:
#line 176 "prog_detism.m"
            *parse_tree__prog_detism__HeadVar__3_3 = (MR_Integer) 0;
#line 176 "prog_detism.m"
            break;
#line 176 "prog_detism.m"
          case (MR_Integer) 1:
#line 177 "prog_detism.m"
            *parse_tree__prog_detism__HeadVar__3_3 = (MR_Integer) 0;
#line 176 "prog_detism.m"
            break;
#line 176 "prog_detism.m"
        }
#line 176 "prog_detism.m"
        break;
#line 176 "prog_detism.m"
      case (MR_Integer) 1:
#line 176 "prog_detism.m"
#line 176 "prog_detism.m"
        switch (parse_tree__prog_detism__HeadVar__2_2) {
#line 176 "prog_detism.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 176 "prog_detism.m"
          case (MR_Integer) 0:
#line 178 "prog_detism.m"
            *parse_tree__prog_detism__HeadVar__3_3 = (MR_Integer) 0;
#line 176 "prog_detism.m"
            break;
#line 176 "prog_detism.m"
          case (MR_Integer) 1:
#line 179 "prog_detism.m"
            *parse_tree__prog_detism__HeadVar__3_3 = (MR_Integer) 1;
#line 176 "prog_detism.m"
            break;
#line 176 "prog_detism.m"
        }
#line 176 "prog_detism.m"
        break;
#line 176 "prog_detism.m"
    }
#line 176 "prog_detism.m"
  }
#line 52 "prog_detism.m"
}

#line 49 "prog_detism.m"
void MR_CALL 
parse_tree__prog_detism__det_conjunction_maxsoln_3_p_0(
#line 49 "prog_detism.m"
  MR_Word parse_tree__prog_detism__HeadVar__1_1,
#line 49 "prog_detism.m"
  MR_Word parse_tree__prog_detism__HeadVar__2_2,
#line 49 "prog_detism.m"
  MR_Word * parse_tree__prog_detism__HeadVar__3_3)
#line 49 "prog_detism.m"
{
#line 153 "prog_detism.m"
  {
#line 153 "prog_detism.m"
    MR_bool parse_tree__prog_detism__succeeded;

#line 153 "prog_detism.m"
#line 153 "prog_detism.m"
    switch (parse_tree__prog_detism__HeadVar__1_1) {
#line 153 "prog_detism.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 153 "prog_detism.m"
      case (MR_Integer) 3:
#line 153 "prog_detism.m"
        {
#line 153 "prog_detism.m"
          *parse_tree__prog_detism__HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_3[0 + parse_tree__prog_detism__HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_3_0__vct_3_f_0;
#line 153 "prog_detism.m"
        }
#line 153 "prog_detism.m"
        break;
#line 153 "prog_detism.m"
      case (MR_Integer) 2:
#line 153 "prog_detism.m"
#line 153 "prog_detism.m"
        switch (parse_tree__prog_detism__HeadVar__2_2) {
#line 153 "prog_detism.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 153 "prog_detism.m"
          case (MR_Integer) 3:
#line 166 "prog_detism.m"
            {
#line 169 "prog_detism.m"
              {
#line 169 "prog_detism.m"
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_detism", (MR_String) "predicate \140parse_tree.prog_detism.det_conjunction_maxsoln\'/3", (MR_String) "many_cc, many");
#line 169 "prog_detism.m"
                return;
              }
#line 166 "prog_detism.m"
            }
#line 153 "prog_detism.m"
            break;
#line 153 "prog_detism.m"
          case (MR_Integer) 2:
#line 165 "prog_detism.m"
            *parse_tree__prog_detism__HeadVar__3_3 = (MR_Integer) 2;
#line 153 "prog_detism.m"
            break;
#line 153 "prog_detism.m"
          case (MR_Integer) 1:
#line 164 "prog_detism.m"
            *parse_tree__prog_detism__HeadVar__3_3 = (MR_Integer) 2;
#line 153 "prog_detism.m"
            break;
#line 153 "prog_detism.m"
          case (MR_Integer) 0:
#line 163 "prog_detism.m"
            *parse_tree__prog_detism__HeadVar__3_3 = (MR_Integer) 0;
#line 153 "prog_detism.m"
            break;
#line 153 "prog_detism.m"
        }
#line 153 "prog_detism.m"
        break;
#line 153 "prog_detism.m"
      case (MR_Integer) 1:
#line 153 "prog_detism.m"
        {
#line 153 "prog_detism.m"
          *parse_tree__prog_detism__HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_3[4 + parse_tree__prog_detism__HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_3_0__vct_3_f_0;
#line 153 "prog_detism.m"
        }
#line 153 "prog_detism.m"
        break;
#line 153 "prog_detism.m"
      case (MR_Integer) 0:
#line 153 "prog_detism.m"
        {
#line 153 "prog_detism.m"
          *parse_tree__prog_detism__HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_3[8 + parse_tree__prog_detism__HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_3_0__vct_3_f_0;
#line 153 "prog_detism.m"
        }
#line 153 "prog_detism.m"
        break;
#line 153 "prog_detism.m"
    }
#line 153 "prog_detism.m"
  }
#line 49 "prog_detism.m"
}

#line 35 "prog_detism.m"
void MR_CALL 
parse_tree__prog_detism__det_negation_det_2_p_0(
#line 35 "prog_detism.m"
  MR_Word parse_tree__prog_detism__HeadVar__1_1,
#line 35 "prog_detism.m"
  MR_Word * parse_tree__prog_detism__HeadVar__2_2)
#line 35 "prog_detism.m"
{
#line 142 "prog_detism.m"
  {
#line 142 "prog_detism.m"
    MR_bool parse_tree__prog_detism__succeeded;

#line 142 "prog_detism.m"
    *parse_tree__prog_detism__HeadVar__2_2 = ((&parse_tree__prog_detism_vector_common_2[0 + parse_tree__prog_detism__HeadVar__1_1]))->parse_tree__prog_detism__vector_common_type_2_0__vct_2_f_0;
#line 142 "prog_detism.m"
  }
#line 35 "prog_detism.m"
}

#line 32 "prog_detism.m"
void MR_CALL 
parse_tree__prog_detism__det_switch_detism_3_p_0(
#line 32 "prog_detism.m"
  MR_Word parse_tree__prog_detism__DetismA_4,
#line 32 "prog_detism.m"
  MR_Word parse_tree__prog_detism__DetismB_5,
#line 32 "prog_detism.m"
  MR_Word * parse_tree__prog_detism__Detism_6)
#line 32 "prog_detism.m"
{
#line 135 "prog_detism.m"
  {
#line 135 "prog_detism.m"
    MR_bool parse_tree__prog_detism__succeeded;
#line 135 "prog_detism.m"
    MR_Word parse_tree__prog_detism__CanFailA_7;
#line 135 "prog_detism.m"
    MR_Word parse_tree__prog_detism__MaxSolnA_8;
#line 135 "prog_detism.m"
    MR_Word parse_tree__prog_detism__CanFailB_9;
#line 135 "prog_detism.m"
    MR_Word parse_tree__prog_detism__MaxSolnB_10;
#line 135 "prog_detism.m"
    MR_Word parse_tree__prog_detism__CanFail_11;
#line 135 "prog_detism.m"
    MR_Word parse_tree__prog_detism__MaxSoln_12;

#line 136 "prog_detism.m"
    {
#line 136 "prog_detism.m"
      parse_tree__prog_data__determinism_components_3_p_0(parse_tree__prog_detism__DetismA_4, &parse_tree__prog_detism__CanFailA_7, &parse_tree__prog_detism__MaxSolnA_8);
    }
#line 137 "prog_detism.m"
    {
#line 137 "prog_detism.m"
      parse_tree__prog_data__determinism_components_3_p_0(parse_tree__prog_detism__DetismB_5, &parse_tree__prog_detism__CanFailB_9, &parse_tree__prog_detism__MaxSolnB_10);
    }
#line 230 "prog_detism.m"
#line 230 "prog_detism.m"
    switch (parse_tree__prog_detism__CanFailA_7) {
#line 230 "prog_detism.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 230 "prog_detism.m"
      case (MR_Integer) 0:
#line 230 "prog_detism.m"
#line 230 "prog_detism.m"
        switch (parse_tree__prog_detism__CanFailB_9) {
#line 230 "prog_detism.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 230 "prog_detism.m"
          case (MR_Integer) 0:
#line 230 "prog_detism.m"
            parse_tree__prog_detism__CanFail_11 = (MR_Integer) 0;
#line 230 "prog_detism.m"
            break;
#line 230 "prog_detism.m"
          case (MR_Integer) 1:
#line 231 "prog_detism.m"
            parse_tree__prog_detism__CanFail_11 = (MR_Integer) 0;
#line 230 "prog_detism.m"
            break;
#line 230 "prog_detism.m"
        }
#line 230 "prog_detism.m"
        break;
#line 230 "prog_detism.m"
      case (MR_Integer) 1:
#line 230 "prog_detism.m"
#line 230 "prog_detism.m"
        switch (parse_tree__prog_detism__CanFailB_9) {
#line 230 "prog_detism.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 230 "prog_detism.m"
          case (MR_Integer) 0:
#line 232 "prog_detism.m"
            parse_tree__prog_detism__CanFail_11 = (MR_Integer) 0;
#line 230 "prog_detism.m"
            break;
#line 230 "prog_detism.m"
          case (MR_Integer) 1:
#line 233 "prog_detism.m"
            parse_tree__prog_detism__CanFail_11 = (MR_Integer) 1;
#line 230 "prog_detism.m"
            break;
#line 230 "prog_detism.m"
        }
#line 230 "prog_detism.m"
        break;
#line 230 "prog_detism.m"
    }
#line 139 "prog_detism.m"
    {
#line 139 "prog_detism.m"
      parse_tree__prog_detism__det_switch_maxsoln_3_p_0(parse_tree__prog_detism__MaxSolnA_8, parse_tree__prog_detism__MaxSolnB_10, &parse_tree__prog_detism__MaxSoln_12);
    }
#line 140 "prog_detism.m"
    {
#line 140 "prog_detism.m"
      parse_tree__prog_data__determinism_components_3_p_1(parse_tree__prog_detism__Detism_6, parse_tree__prog_detism__CanFail_11, parse_tree__prog_detism__MaxSoln_12);
    }
#line 135 "prog_detism.m"
  }
#line 32 "prog_detism.m"
}

#line 29 "prog_detism.m"
void MR_CALL 
parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(
#line 29 "prog_detism.m"
  MR_Word parse_tree__prog_detism__DetismA_4,
#line 29 "prog_detism.m"
  MR_Word parse_tree__prog_detism__DetismB_5,
#line 29 "prog_detism.m"
  MR_Word * parse_tree__prog_detism__Detism_6)
#line 29 "prog_detism.m"
{
#line 124 "prog_detism.m"
  {
#line 124 "prog_detism.m"
    MR_bool parse_tree__prog_detism__succeeded;
#line 124 "prog_detism.m"
    MR_Word parse_tree__prog_detism__CanFailA_7;
#line 124 "prog_detism.m"
    MR_Word parse_tree__prog_detism__MaxSolnA_8;
#line 124 "prog_detism.m"
    MR_Word parse_tree__prog_detism__CanFailB_9;
#line 124 "prog_detism.m"
    MR_Word parse_tree__prog_detism__MaxSolnB_10;
#line 124 "prog_detism.m"
    MR_Word parse_tree__prog_detism__CanFail_11;
#line 124 "prog_detism.m"
    MR_Word parse_tree__prog_detism__MaxSoln_12;

#line 129 "prog_detism.m"
    {
#line 129 "prog_detism.m"
      parse_tree__prog_data__determinism_components_3_p_0(parse_tree__prog_detism__DetismA_4, &parse_tree__prog_detism__CanFailA_7, &parse_tree__prog_detism__MaxSolnA_8);
    }
#line 130 "prog_detism.m"
    {
#line 130 "prog_detism.m"
      parse_tree__prog_data__determinism_components_3_p_0(parse_tree__prog_detism__DetismB_5, &parse_tree__prog_detism__CanFailB_9, &parse_tree__prog_detism__MaxSolnB_10);
    }
#line 176 "prog_detism.m"
#line 176 "prog_detism.m"
    switch (parse_tree__prog_detism__CanFailA_7) {
#line 176 "prog_detism.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 176 "prog_detism.m"
      case (MR_Integer) 0:
#line 176 "prog_detism.m"
#line 176 "prog_detism.m"
        switch (parse_tree__prog_detism__CanFailB_9) {
#line 176 "prog_detism.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 176 "prog_detism.m"
          case (MR_Integer) 0:
#line 176 "prog_detism.m"
            parse_tree__prog_detism__CanFail_11 = (MR_Integer) 0;
#line 176 "prog_detism.m"
            break;
#line 176 "prog_detism.m"
          case (MR_Integer) 1:
#line 177 "prog_detism.m"
            parse_tree__prog_detism__CanFail_11 = (MR_Integer) 0;
#line 176 "prog_detism.m"
            break;
#line 176 "prog_detism.m"
        }
#line 176 "prog_detism.m"
        break;
#line 176 "prog_detism.m"
      case (MR_Integer) 1:
#line 176 "prog_detism.m"
#line 176 "prog_detism.m"
        switch (parse_tree__prog_detism__CanFailB_9) {
#line 176 "prog_detism.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 176 "prog_detism.m"
          case (MR_Integer) 0:
#line 178 "prog_detism.m"
            parse_tree__prog_detism__CanFail_11 = (MR_Integer) 0;
#line 176 "prog_detism.m"
            break;
#line 176 "prog_detism.m"
          case (MR_Integer) 1:
#line 179 "prog_detism.m"
            parse_tree__prog_detism__CanFail_11 = (MR_Integer) 1;
#line 176 "prog_detism.m"
            break;
#line 176 "prog_detism.m"
        }
#line 176 "prog_detism.m"
        break;
#line 176 "prog_detism.m"
    }
#line 132 "prog_detism.m"
    {
#line 132 "prog_detism.m"
      parse_tree__prog_detism__det_conjunction_maxsoln_3_p_0(parse_tree__prog_detism__MaxSolnA_8, parse_tree__prog_detism__MaxSolnB_10, &parse_tree__prog_detism__MaxSoln_12);
    }
#line 133 "prog_detism.m"
    {
#line 133 "prog_detism.m"
      parse_tree__prog_data__determinism_components_3_p_1(parse_tree__prog_detism__Detism_6, parse_tree__prog_detism__CanFail_11, parse_tree__prog_detism__MaxSoln_12);
    }
#line 124 "prog_detism.m"
  }
#line 29 "prog_detism.m"
}

#line 26 "prog_detism.m"
void MR_CALL 
parse_tree__prog_detism__det_conjunction_detism_3_p_0(
#line 26 "prog_detism.m"
  MR_Word parse_tree__prog_detism__DetismA_4,
#line 26 "prog_detism.m"
  MR_Word parse_tree__prog_detism__DetismB_5,
#line 26 "prog_detism.m"
  MR_Word * parse_tree__prog_detism__Detism_6)
#line 26 "prog_detism.m"
{
#line 104 "prog_detism.m"
  {
#line 104 "prog_detism.m"
    MR_bool parse_tree__prog_detism__succeeded;
#line 104 "prog_detism.m"
    MR_Word parse_tree__prog_detism__CanFailA_7;
#line 104 "prog_detism.m"
    MR_Word parse_tree__prog_detism__MaxSolnA_8;

#line 109 "prog_detism.m"
    {
#line 109 "prog_detism.m"
      parse_tree__prog_data__determinism_components_3_p_0(parse_tree__prog_detism__DetismA_4, &parse_tree__prog_detism__CanFailA_7, &parse_tree__prog_detism__MaxSolnA_8);
    }
#line 113 "prog_detism.m"
#line 113 "prog_detism.m"
    switch (parse_tree__prog_detism__MaxSolnA_8) {
#line 113 "prog_detism.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 113 "prog_detism.m"
      case (MR_Integer) 3:
#line 113 "prog_detism.m"
      case (MR_Integer) 2:
#line 113 "prog_detism.m"
      case (MR_Integer) 1:
#line 117 "prog_detism.m"
        {
#line 117 "prog_detism.m"
          MR_Word parse_tree__prog_detism__CanFailB_9;
#line 117 "prog_detism.m"
          MR_Word parse_tree__prog_detism__MaxSolnB_10;
#line 117 "prog_detism.m"
          MR_Word parse_tree__prog_detism__CanFail_11;
#line 117 "prog_detism.m"
          MR_Word parse_tree__prog_detism__MaxSoln_12;

#line 118 "prog_detism.m"
          {
#line 118 "prog_detism.m"
            parse_tree__prog_data__determinism_components_3_p_0(parse_tree__prog_detism__DetismB_5, &parse_tree__prog_detism__CanFailB_9, &parse_tree__prog_detism__MaxSolnB_10);
          }
#line 176 "prog_detism.m"
#line 176 "prog_detism.m"
          switch (parse_tree__prog_detism__CanFailA_7) {
#line 176 "prog_detism.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 176 "prog_detism.m"
            case (MR_Integer) 0:
#line 176 "prog_detism.m"
#line 176 "prog_detism.m"
              switch (parse_tree__prog_detism__CanFailB_9) {
#line 176 "prog_detism.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 176 "prog_detism.m"
                case (MR_Integer) 0:
#line 176 "prog_detism.m"
                  parse_tree__prog_detism__CanFail_11 = (MR_Integer) 0;
#line 176 "prog_detism.m"
                  break;
#line 176 "prog_detism.m"
                case (MR_Integer) 1:
#line 177 "prog_detism.m"
                  parse_tree__prog_detism__CanFail_11 = (MR_Integer) 0;
#line 176 "prog_detism.m"
                  break;
#line 176 "prog_detism.m"
              }
#line 176 "prog_detism.m"
              break;
#line 176 "prog_detism.m"
            case (MR_Integer) 1:
#line 176 "prog_detism.m"
#line 176 "prog_detism.m"
              switch (parse_tree__prog_detism__CanFailB_9) {
#line 176 "prog_detism.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 176 "prog_detism.m"
                case (MR_Integer) 0:
#line 178 "prog_detism.m"
                  parse_tree__prog_detism__CanFail_11 = (MR_Integer) 0;
#line 176 "prog_detism.m"
                  break;
#line 176 "prog_detism.m"
                case (MR_Integer) 1:
#line 179 "prog_detism.m"
                  parse_tree__prog_detism__CanFail_11 = (MR_Integer) 1;
#line 176 "prog_detism.m"
                  break;
#line 176 "prog_detism.m"
              }
#line 176 "prog_detism.m"
              break;
#line 176 "prog_detism.m"
          }
#line 120 "prog_detism.m"
          {
#line 120 "prog_detism.m"
            parse_tree__prog_detism__det_conjunction_maxsoln_3_p_0(parse_tree__prog_detism__MaxSolnA_8, parse_tree__prog_detism__MaxSolnB_10, &parse_tree__prog_detism__MaxSoln_12);
          }
#line 121 "prog_detism.m"
          {
#line 121 "prog_detism.m"
            parse_tree__prog_data__determinism_components_3_p_1(parse_tree__prog_detism__Detism_6, parse_tree__prog_detism__CanFail_11, parse_tree__prog_detism__MaxSoln_12);
          }
#line 117 "prog_detism.m"
        }
#line 113 "prog_detism.m"
        break;
#line 113 "prog_detism.m"
      case (MR_Integer) 0:
#line 112 "prog_detism.m"
        *parse_tree__prog_detism__Detism_6 = parse_tree__prog_detism__DetismA_4;
#line 113 "prog_detism.m"
        break;
#line 113 "prog_detism.m"
    }
#line 104 "prog_detism.m"
  }
#line 26 "prog_detism.m"
}

void mercury__parse_tree__prog_detism__init(void)
{
}

void mercury__parse_tree__prog_detism__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_detism__parse_tree__prog_detism__type_ctor_info_det_comparison_0);
	MR_register_type_ctor_info(&parse_tree__prog_detism__parse_tree__prog_detism__type_ctor_info_det_component_comparison_0);
}

void mercury__parse_tree__prog_detism__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_detism. */
