/*
** Automatically generated from `prog_detism.m'
** by the Mercury compiler,
** version rotd-2024-03-11
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


// :- module parse_tree.prog_detism.
// :- implementation.

/*
INIT mercury__parse_tree__prog_detism__init
ENDINIT
*/

#include "parse_tree.prog_detism.mih"


#include "assoc_list.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "enum.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"




static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_1;

static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_2;

static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_3;

static const MR_EnumFunctorDescPtr parse_tree__prog_detism__parse_tree__prog_detism__enum_ordinal_ordered_det_comparison_0[4];

static const MR_EnumFunctorDescPtr parse_tree__prog_detism__parse_tree__prog_detism__enum_name_ordered_det_comparison_0[4];

static const MR_Integer parse_tree__prog_detism__parse_tree__prog_detism__functor_number_map_det_comparison_0[4];

static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_component_comparison_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_component_comparison_0_1;

static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_component_comparison_0_2;

static const MR_EnumFunctorDescPtr parse_tree__prog_detism__parse_tree__prog_detism__enum_ordinal_ordered_det_component_comparison_0[3];

static const MR_EnumFunctorDescPtr parse_tree__prog_detism__parse_tree__prog_detism__enum_name_ordered_det_component_comparison_0[3];

static const MR_Integer parse_tree__prog_detism__parse_tree__prog_detism__functor_number_map_det_component_comparison_0[3];

static MR_bool MR_CALL 
parse_tree__prog_detism____Unify____det_comparison_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_detism____Compare____det_comparison_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_detism____Unify____det_component_comparison_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_detism____Compare____det_component_comparison_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_detism_scalar_common_1[4][1];


struct parse_tree__prog_detism__vector_common_type_2_0_s {
  const MR_Word parse_tree__prog_detism__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct parse_tree__prog_detism__vector_common_type_2_0_s parse_tree__prog_detism_vector_common_2[44];

struct parse_tree__prog_detism__vector_common_type_3_0_s {
  const MR_Word parse_tree__prog_detism__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct parse_tree__prog_detism__vector_common_type_3_0_s parse_tree__prog_detism_vector_common_3[8];

struct parse_tree__prog_detism__vector_common_type_4_0_s {
  const MR_Word parse_tree__prog_detism__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct parse_tree__prog_detism__vector_common_type_4_0_s parse_tree__prog_detism_vector_common_4[16];



static /* final */ const MR_Box parse_tree__prog_detism_scalar_common_1[4][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 7)) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 6)) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 1)) },
};


static /* final */ const struct parse_tree__prog_detism__vector_common_type_2_0_s parse_tree__prog_detism_vector_common_2[44] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 3 },
  /* row   2 */   { (MR_Integer) 3 },
  /* row   3 */   { (MR_Integer) 3 },
  /* row   4 */   { (MR_Integer) 0 },
  /* row   5 */   { (MR_Integer) 1 },
  /* row   6 */   { (MR_Integer) 2 },
  /* row   7 */   { (MR_Integer) 3 },
  /* row   8 */   { (MR_Integer) 0 },
  /* row   9 */   { (MR_Integer) 0 },
  /* row  10 */   { (MR_Integer) 0 },
  /* row  11 */   { (MR_Integer) 0 },
  /* row  12 */   { (MR_Integer) 3 },
  /* row  13 */   { (MR_Integer) 3 },
  /* row  14 */   { (MR_Integer) 2 },
  /* row  15 */   { (MR_Integer) 3 },
  /* row  16 */   { (MR_Integer) 2 },
  /* row  17 */   { (MR_Integer) 2 },
  /* row  18 */   { (MR_Integer) 2 },
  /* row  19 */   { (MR_Integer) 2 },
  /* row  20 */   { (MR_Integer) 1 },
  /* row  21 */   { (MR_Integer) 1 },
  /* row  22 */   { (MR_Integer) 2 },
  /* row  23 */   { (MR_Integer) 3 },
  /* row  24 */   { (MR_Integer) 0 },
  /* row  25 */   { (MR_Integer) 1 },
  /* row  26 */   { (MR_Integer) 2 },
  /* row  27 */   { (MR_Integer) 3 },
  /* row  28 */   { (MR_Integer) 3 },
  /* row  29 */   { (MR_Integer) 3 },
  /* row  30 */   { (MR_Integer) 2 },
  /* row  31 */   { (MR_Integer) 3 },
  /* row  32 */   { (MR_Integer) 2 },
  /* row  33 */   { (MR_Integer) 2 },
  /* row  34 */   { (MR_Integer) 2 },
  /* row  35 */   { (MR_Integer) 2 },
  /* row  36 */   { (MR_Integer) 1 },
  /* row  37 */   { (MR_Integer) 3 },
  /* row  38 */   { (MR_Integer) 2 },
  /* row  39 */   { (MR_Integer) 3 },
  /* row  40 */   { (MR_Integer) 0 },
  /* row  41 */   { (MR_Integer) 1 },
  /* row  42 */   { (MR_Integer) 2 },
  /* row  43 */   { (MR_Integer) 3 },
};

static /* final */ const struct parse_tree__prog_detism__vector_common_type_3_0_s parse_tree__prog_detism_vector_common_3[8] = {
  /* row   0 */   { (MR_Word) (MR_mkword(1, &parse_tree__prog_detism_scalar_common_1[0])) },
  /* row   1 */   { (MR_Word) (MR_mkword(1, &parse_tree__prog_detism_scalar_common_1[3])) },
  /* row   2 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   3 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   4 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   5 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   6 */   { (MR_Word) (MR_mkword(1, &parse_tree__prog_detism_scalar_common_1[1])) },
  /* row   7 */   { (MR_Word) (MR_mkword(1, &parse_tree__prog_detism_scalar_common_1[2])) },
};

static /* final */ const struct parse_tree__prog_detism__vector_common_type_4_0_s parse_tree__prog_detism_vector_common_4[16] = {
  /* row   0 */   { (MR_Integer) 2 },
  /* row   1 */   { (MR_Integer) 2 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 1 },
  /* row   4 */   { (MR_Integer) 2 },
  /* row   5 */   { (MR_Integer) 2 },
  /* row   6 */   { (MR_Integer) 1 },
  /* row   7 */   { (MR_Integer) 0 },
  /* row   8 */   { (MR_Integer) 2 },
  /* row   9 */   { (MR_Integer) 1 },
  /* row  10 */   { (MR_Integer) 0 },
  /* row  11 */   { (MR_Integer) 0 },
  /* row  12 */   { (MR_Integer) 1 },
  /* row  13 */   { (MR_Integer) 0 },
  /* row  14 */   { (MR_Integer) 0 },
  /* row  15 */   { (MR_Integer) 0 },
};




static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_0 = {
  (MR_String) "first_detism_tighter_than",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_1 = {
  (MR_String) "first_detism_same_as",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_2 = {
  (MR_String) "first_detism_looser_than",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_3 = {
  (MR_String) "first_detism_incomparable",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_detism__parse_tree__prog_detism__enum_ordinal_ordered_det_comparison_0[4] = {
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_0,
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_1,
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_2,
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_3
};

static const MR_EnumFunctorDescPtr parse_tree__prog_detism__parse_tree__prog_detism__enum_name_ordered_det_comparison_0[4] = {
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_3,
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_2,
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_1,
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_comparison_0_0
};

static const MR_Integer parse_tree__prog_detism__parse_tree__prog_detism__functor_number_map_det_comparison_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_detism__parse_tree__prog_detism__type_ctor_info_det_comparison_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_detism____Unify____det_comparison_0_0_10001)),
  ((MR_Box) (parse_tree__prog_detism____Compare____det_comparison_0_0_10001)),
  (MR_String) "parse_tree.prog_detism",
  (MR_String) "det_comparison",
  { parse_tree__prog_detism__parse_tree__prog_detism__enum_name_ordered_det_comparison_0 },
  { parse_tree__prog_detism__parse_tree__prog_detism__enum_ordinal_ordered_det_comparison_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  parse_tree__prog_detism__parse_tree__prog_detism__functor_number_map_det_comparison_0,

};

static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_component_comparison_0_0 = {
  (MR_String) "first_tighter_than",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_component_comparison_0_1 = {
  (MR_String) "first_same_as",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_component_comparison_0_2 = {
  (MR_String) "first_looser_than",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_detism__parse_tree__prog_detism__enum_ordinal_ordered_det_component_comparison_0[3] = {
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_component_comparison_0_0,
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_component_comparison_0_1,
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_component_comparison_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__prog_detism__parse_tree__prog_detism__enum_name_ordered_det_component_comparison_0[3] = {
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_component_comparison_0_2,
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_component_comparison_0_1,
  &parse_tree__prog_detism__parse_tree__prog_detism__enum_functor_desc_det_component_comparison_0_0
};

static const MR_Integer parse_tree__prog_detism__parse_tree__prog_detism__functor_number_map_det_component_comparison_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_detism__parse_tree__prog_detism__type_ctor_info_det_component_comparison_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_detism____Unify____det_component_comparison_0_0_10001)),
  ((MR_Box) (parse_tree__prog_detism____Compare____det_component_comparison_0_0_10001)),
  (MR_String) "parse_tree.prog_detism",
  (MR_String) "det_component_comparison",
  { parse_tree__prog_detism__parse_tree__prog_detism__enum_name_ordered_det_component_comparison_0 },
  { parse_tree__prog_detism__parse_tree__prog_detism__enum_ordinal_ordered_det_component_comparison_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__prog_detism__parse_tree__prog_detism__functor_number_map_det_component_comparison_0,

};

void MR_CALL 
parse_tree__prog_detism____Compare____det_component_comparison_0_0(
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
parse_tree__prog_detism____Unify____det_component_comparison_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__prog_detism____Compare____det_comparison_0_0(
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
parse_tree__prog_detism____Unify____det_comparison_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__prog_detism__compare_canfails_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__3_3 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          *HeadVar__3_3 = (MR_Integer) 2;
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__3_3 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__3_3 = (MR_Integer) 1;
          break;
      }
      break;
  }
}

void MR_CALL 
parse_tree__prog_detism__compare_determinisms_3_p_0(
  MR_Word DetismA_4,
  MR_Word DetismB_5,
  MR_Word * CmpDetism_6)
{
  MR_Word CanFailA_7;
  MR_Word SolnsA_8;
  MR_Word CanFailB_9;
  MR_Word SolnsB_10;
  MR_Word CmpSolns_12;

  parse_tree__prog_data__determinism_components_3_p_0(DetismA_4, &CanFailA_7, &SolnsA_8);
  parse_tree__prog_data__determinism_components_3_p_0(DetismB_5, &CanFailB_9, &SolnsB_10);
  parse_tree__prog_detism__compare_solncounts_3_p_0(SolnsA_8, SolnsB_10, &CmpSolns_12);
  switch (CanFailA_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (CanFailB_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (CmpSolns_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              *CmpDetism_6 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *CmpDetism_6 = (MR_Integer) 1;
              break;
            case (MR_Integer) 0:
              *CmpDetism_6 = (MR_Integer) 0;
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (CmpSolns_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              *CmpDetism_6 = (MR_Integer) 2;
              break;
            case (MR_Integer) 0:
              *CmpDetism_6 = (MR_Integer) 3;
              break;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (CanFailB_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (CmpSolns_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              *CmpDetism_6 = (MR_Integer) 3;
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 0:
              *CmpDetism_6 = (MR_Integer) 0;
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (CmpSolns_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              *CmpDetism_6 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *CmpDetism_6 = (MR_Integer) 1;
              break;
            case (MR_Integer) 0:
              *CmpDetism_6 = (MR_Integer) 0;
              break;
          }
          break;
      }
      break;
  }
}

void MR_CALL 
parse_tree__prog_detism__compare_solncounts_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      *HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_4[0 + HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_4_0__vct_4_f_0;
      break;
    case (MR_Integer) 2:
      *HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_4[4 + HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_4_0__vct_4_f_0;
      break;
    case (MR_Integer) 1:
      *HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_4[8 + HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_4_0__vct_4_f_0;
      break;
    case (MR_Integer) 0:
      *HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_4[12 + HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_4_0__vct_4_f_0;
      break;
  }
}

void MR_CALL 
parse_tree__prog_detism__det_switch_canfail_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__3_3 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__3_3 = (MR_Integer) 0;
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__3_3 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__3_3 = (MR_Integer) 1;
          break;
      }
      break;
  }
}

void MR_CALL 
parse_tree__prog_detism__det_disjunction_canfail_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__3_3 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__3_3 = (MR_Integer) 1;
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__3_3 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          *HeadVar__3_3 = (MR_Integer) 1;
          break;
      }
      break;
  }
}

void MR_CALL 
parse_tree__prog_detism__det_disjunction_maxsoln_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      *HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_2[28 + HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_2_0__vct_2_f_0;
      break;
    case (MR_Integer) 2:
      *HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_2[32 + HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_2_0__vct_2_f_0;
      break;
    case (MR_Integer) 1:
      *HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_2[36 + HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_2_0__vct_2_f_0;
      break;
    case (MR_Integer) 0:
      *HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_2[40 + HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_2_0__vct_2_f_0;
      break;
  }
}

void MR_CALL 
parse_tree__prog_detism__det_conjunction_canfail_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__3_3 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__3_3 = (MR_Integer) 0;
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__3_3 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__3_3 = (MR_Integer) 1;
          break;
      }
      break;
  }
}

void MR_CALL 
parse_tree__prog_detism__det_negation_det_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((&parse_tree__prog_detism_vector_common_3[0 + HeadVar__1_1]))->parse_tree__prog_detism__vector_common_type_3_0__vct_3_f_0;
}

void MR_CALL 
parse_tree__prog_detism__det_switch_detism_3_p_0(
  MR_Word DetismA_4,
  MR_Word DetismB_5,
  MR_Word * Detism_6)
{
  MR_Word CanFailA_7;
  MR_Word MaxSolnA_8;
  MR_Word CanFailB_9;
  MR_Word MaxSolnB_10;
  MR_Word CanFail_11;
  MR_Word MaxSoln_12;

  parse_tree__prog_data__determinism_components_3_p_0(DetismA_4, &CanFailA_7, &MaxSolnA_8);
  parse_tree__prog_data__determinism_components_3_p_0(DetismB_5, &CanFailB_9, &MaxSolnB_10);
  switch (CanFailA_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (CanFailB_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          CanFail_11 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          CanFail_11 = (MR_Integer) 0;
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (CanFailB_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          CanFail_11 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          CanFail_11 = (MR_Integer) 1;
          break;
      }
      break;
  }
  parse_tree__prog_detism__det_switch_maxsoln_3_p_0(MaxSolnA_8, MaxSolnB_10, &MaxSoln_12);
  parse_tree__prog_data__determinism_components_3_p_1(Detism_6, CanFail_11, MaxSoln_12);
}

void MR_CALL 
parse_tree__prog_detism__det_switch_maxsoln_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      *HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_2[12 + HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_2_0__vct_2_f_0;
      break;
    case (MR_Integer) 2:
      *HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_2[16 + HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_2_0__vct_2_f_0;
      break;
    case (MR_Integer) 1:
      *HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_2[20 + HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_2_0__vct_2_f_0;
      break;
    case (MR_Integer) 0:
      *HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_2[24 + HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_2_0__vct_2_f_0;
      break;
  }
}

void MR_CALL 
parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(
  MR_Word DetismA_4,
  MR_Word DetismB_5,
  MR_Word * Detism_6)
{
  MR_Word CanFailA_7;
  MR_Word MaxSolnA_8;
  MR_Word CanFailB_9;
  MR_Word MaxSolnB_10;
  MR_Word CanFail_11;
  MR_Word MaxSoln_12;

  parse_tree__prog_data__determinism_components_3_p_0(DetismA_4, &CanFailA_7, &MaxSolnA_8);
  parse_tree__prog_data__determinism_components_3_p_0(DetismB_5, &CanFailB_9, &MaxSolnB_10);
  switch (CanFailA_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (CanFailB_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          CanFail_11 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          CanFail_11 = (MR_Integer) 0;
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (CanFailB_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          CanFail_11 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          CanFail_11 = (MR_Integer) 1;
          break;
      }
      break;
  }
  parse_tree__prog_detism__det_conjunction_maxsoln_3_p_0(MaxSolnA_8, MaxSolnB_10, &MaxSoln_12);
  parse_tree__prog_data__determinism_components_3_p_1(Detism_6, CanFail_11, MaxSoln_12);
}

void MR_CALL 
parse_tree__prog_detism__det_conjunction_detism_3_p_0(
  MR_Word DetismA_4,
  MR_Word DetismB_5,
  MR_Word * Detism_6)
{
  MR_Word CanFailA_7;
  MR_Word MaxSolnA_8;

  parse_tree__prog_data__determinism_components_3_p_0(DetismA_4, &CanFailA_7, &MaxSolnA_8);
  switch (MaxSolnA_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MR_Word CanFailB_9;
        MR_Word MaxSolnB_10;
        MR_Word CanFail_11;
        MR_Word MaxSoln_12;

        parse_tree__prog_data__determinism_components_3_p_0(DetismB_5, &CanFailB_9, &MaxSolnB_10);
        switch (CanFailA_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (CanFailB_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                CanFail_11 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                CanFail_11 = (MR_Integer) 0;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (CanFailB_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                CanFail_11 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                CanFail_11 = (MR_Integer) 1;
                break;
            }
            break;
        }
        parse_tree__prog_detism__det_conjunction_maxsoln_3_p_0(MaxSolnA_8, MaxSolnB_10, &MaxSoln_12);
        parse_tree__prog_data__determinism_components_3_p_1(Detism_6, CanFail_11, MaxSoln_12);
      }
      break;
    case (MR_Integer) 0:
      *Detism_6 = DetismA_4;
      break;
  }
}

void MR_CALL 
parse_tree__prog_detism__det_conjunction_maxsoln_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      *HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_2[0 + HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_2_0__vct_2_f_0;
      break;
    case (MR_Integer) 2:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_detism.det_conjunction_maxsoln\'/3", (MR_String) "many_cc, many");
            return;
          }
          break;
        case (MR_Integer) 2:
          *HeadVar__3_3 = (MR_Integer) 2;
          break;
        case (MR_Integer) 1:
          *HeadVar__3_3 = (MR_Integer) 2;
          break;
        case (MR_Integer) 0:
          *HeadVar__3_3 = (MR_Integer) 0;
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_2[4 + HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_2_0__vct_2_f_0;
      break;
    case (MR_Integer) 0:
      *HeadVar__3_3 = ((&parse_tree__prog_detism_vector_common_2[8 + HeadVar__2_2]))->parse_tree__prog_detism__vector_common_type_2_0__vct_2_f_0;
      break;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_detism____Unify____det_comparison_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_detism____Unify____det_comparison_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_detism____Compare____det_comparison_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_detism____Compare____det_comparison_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_detism____Unify____det_component_comparison_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_detism____Unify____det_component_comparison_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_detism____Compare____det_component_comparison_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_detism____Compare____det_component_comparison_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_detism__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.prog_detism.
