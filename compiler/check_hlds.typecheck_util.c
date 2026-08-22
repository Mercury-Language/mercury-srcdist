/*
** Automatically generated from `typecheck_util.m'
** by the Mercury compiler,
** version rotd-2026-08-22
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


// :- module check_hlds.typecheck_util.
// :- implementation.

/*
INIT mercury__check_hlds__typecheck_util__init
ENDINIT
*/

#include "check_hlds.typecheck_util.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "hlds.mih"
#include "integer.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.type_assign.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.status.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_construct.mih"
#include "parse_tree.prog_type_unify.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.vartypes.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_util__check_hlds__typecheck_util__field_types_du_type_info_0_0[4];

static const MR_DuFunctorDesc check_hlds__typecheck_util__check_hlds__typecheck_util__du_functor_desc_du_type_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_util__check_hlds__typecheck_util__du_stag_ordered_du_type_info_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_util__check_hlds__typecheck_util__du_ptag_ordered_du_type_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_util__check_hlds__typecheck_util__du_name_ordered_du_type_info_0[1];

static const MR_Integer check_hlds__typecheck_util__check_hlds__typecheck_util__functor_number_map_du_type_info_0[1];

static const MR_PseudoTypeInfo check_hlds__typecheck_util__check_hlds__typecheck_util__field_types_maybe_du_type_0_0[1];

static const MR_DuFunctorDesc check_hlds__typecheck_util__check_hlds__typecheck_util__du_functor_desc_maybe_du_type_0_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_util__check_hlds__typecheck_util__field_types_maybe_du_type_0_1[1];

static const MR_DuFunctorDesc check_hlds__typecheck_util__check_hlds__typecheck_util__du_functor_desc_maybe_du_type_0_1;

static const MR_DuFunctorDescPtr check_hlds__typecheck_util__check_hlds__typecheck_util__du_stag_ordered_maybe_du_type_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_util__check_hlds__typecheck_util__du_stag_ordered_maybe_du_type_0_1[1];

static const MR_DuPtagLayout check_hlds__typecheck_util__check_hlds__typecheck_util__du_ptag_ordered_maybe_du_type_0[2];

static const MR_DuFunctorDescPtr check_hlds__typecheck_util__check_hlds__typecheck_util__du_name_ordered_maybe_du_type_0[2];

static const MR_Integer check_hlds__typecheck_util__check_hlds__typecheck_util__functor_number_map_maybe_du_type_0[2];

static void MR_CALL 
check_hlds__typecheck_util__acc_type_assigns_where_var_can_have_type_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Var_2,
  MR_Word Type_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5);

static MR_bool MR_CALL 
check_hlds__typecheck_util____Unify____du_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_util____Compare____du_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_util____Unify____maybe_du_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_util____Compare____maybe_du_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__typecheck_util_scalar_common_1[4][2];

static /* final */ const MR_Box check_hlds__typecheck_util_scalar_common_2[8][1];




static /* final */ const MR_Box check_hlds__typecheck_util_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_util_scalar_common_2[8][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "builtin type")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "tuple type")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "type variable")) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "abstract type")) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "equivalence type")) },
  /* row   5 */
  { ((MR_Box) ((MR_String) "foreign type")) },
  /* row   6 */
  { ((MR_Box) ((MR_String) "solver type")) },
  /* row   7 */
  { ((MR_Box) ((MR_String) "unknown type")) },
};



#include "array.mh"


static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_util__check_hlds__typecheck_util__field_types_du_type_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_type_body_du_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_util__check_hlds__typecheck_util__du_functor_desc_du_type_info_0_0 = {
  (MR_String) "du_type_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_util__check_hlds__typecheck_util__field_types_du_type_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_util__check_hlds__typecheck_util__du_stag_ordered_du_type_info_0_0[1] = { &check_hlds__typecheck_util__check_hlds__typecheck_util__du_functor_desc_du_type_info_0_0 };

static const MR_DuPtagLayout check_hlds__typecheck_util__check_hlds__typecheck_util__du_ptag_ordered_du_type_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_util__check_hlds__typecheck_util__du_stag_ordered_du_type_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_util__check_hlds__typecheck_util__du_name_ordered_du_type_info_0[1] = { &check_hlds__typecheck_util__check_hlds__typecheck_util__du_functor_desc_du_type_info_0_0 };

static const MR_Integer check_hlds__typecheck_util__check_hlds__typecheck_util__functor_number_map_du_type_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__typecheck_util__check_hlds__typecheck_util__type_ctor_info_du_type_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_util____Unify____du_type_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_util____Compare____du_type_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_util",
  (MR_String) "du_type_info",
  { check_hlds__typecheck_util__check_hlds__typecheck_util__du_name_ordered_du_type_info_0 },
  { check_hlds__typecheck_util__check_hlds__typecheck_util__du_ptag_ordered_du_type_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_util__check_hlds__typecheck_util__functor_number_map_du_type_info_0,

};

static const MR_PseudoTypeInfo check_hlds__typecheck_util__check_hlds__typecheck_util__field_types_maybe_du_type_0_0[1] = { (MR_PseudoTypeInfo) (&check_hlds__typecheck_util__check_hlds__typecheck_util__type_ctor_info_du_type_info_0) };

static const MR_DuFunctorDesc check_hlds__typecheck_util__check_hlds__typecheck_util__du_functor_desc_maybe_du_type_0_0 = {
  (MR_String) "is_du_type",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_util__check_hlds__typecheck_util__field_types_maybe_du_type_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__typecheck_util__check_hlds__typecheck_util__field_types_maybe_du_type_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc check_hlds__typecheck_util__check_hlds__typecheck_util__du_functor_desc_maybe_du_type_0_1 = {
  (MR_String) "is_not_du_type",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__typecheck_util__check_hlds__typecheck_util__field_types_maybe_du_type_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_util__check_hlds__typecheck_util__du_stag_ordered_maybe_du_type_0_0[1] = { &check_hlds__typecheck_util__check_hlds__typecheck_util__du_functor_desc_maybe_du_type_0_0 };

static const MR_DuFunctorDescPtr check_hlds__typecheck_util__check_hlds__typecheck_util__du_stag_ordered_maybe_du_type_0_1[1] = { &check_hlds__typecheck_util__check_hlds__typecheck_util__du_functor_desc_maybe_du_type_0_1 };

static const MR_DuPtagLayout check_hlds__typecheck_util__check_hlds__typecheck_util__du_ptag_ordered_maybe_du_type_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__typecheck_util__check_hlds__typecheck_util__du_stag_ordered_maybe_du_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_util__check_hlds__typecheck_util__du_stag_ordered_maybe_du_type_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_util__check_hlds__typecheck_util__du_name_ordered_maybe_du_type_0[2] = {
  &check_hlds__typecheck_util__check_hlds__typecheck_util__du_functor_desc_maybe_du_type_0_0,
  &check_hlds__typecheck_util__check_hlds__typecheck_util__du_functor_desc_maybe_du_type_0_1
};

static const MR_Integer check_hlds__typecheck_util__check_hlds__typecheck_util__functor_number_map_maybe_du_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_util__check_hlds__typecheck_util__type_ctor_info_maybe_du_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_util____Unify____maybe_du_type_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_util____Compare____maybe_du_type_0_0_10001)),
  (MR_String) "check_hlds.typecheck_util",
  (MR_String) "maybe_du_type",
  { check_hlds__typecheck_util__check_hlds__typecheck_util__du_name_ordered_maybe_du_type_0 },
  { check_hlds__typecheck_util__check_hlds__typecheck_util__du_ptag_ordered_maybe_du_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_util__check_hlds__typecheck_util__functor_number_map_maybe_du_type_0,

};

void MR_CALL 
check_hlds__typecheck_util____Compare____maybe_du_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

      check_hlds__typecheck_util____Compare____du_type_info_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_String ArgX1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_util____Unify____maybe_du_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Word ArgX1_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      succeeded = check_hlds__typecheck_util____Unify____du_type_info_0_0(ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_String ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__typecheck_util____Compare____du_type_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_util_scalar_common_1[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__hlds_data____Compare____hlds_type_defn_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          hlds__hlds_data____Compare____type_body_du_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_util____Unify____du_type_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_14_14;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&check_hlds__typecheck_util_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = hlds__hlds_data____Unify____hlds_type_defn_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
          succeeded = hlds__hlds_data____Unify____type_body_du_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__typecheck_util__classify_is_du_type_3_p_0(
  MR_Word TypeTable_4,
  MR_Word Type_5,
  MR_Word * MaybeDuType_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *MaybeDuType_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_util_scalar_common_2[2]));
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(1, Type_5, 0))));
          MR_Word ArgTypes_10 = ((MR_Word) ((MR_hl_field(1, Type_5, 1))));
          MR_Integer Arity_12;
          MR_Word TypeCtor_13;

          mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_10, &Arity_12);
          {
            TypeCtor_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeCtor_13, 0) = ((MR_Box) (SymName_9));
            MR_hl_field(0, TypeCtor_13, 1) = ((MR_Box) (Arity_12));
          }
          check_hlds__typecheck_util__classify_defined_type_is_du_type_4_p_0(TypeTable_4, TypeCtor_13, ArgTypes_10, MaybeDuType_6);
        }
        break;
      case (MR_Integer) 2:
        *MaybeDuType_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_util_scalar_common_2[0]));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type_5, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *MaybeDuType_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_util_scalar_common_2[1]));
            break;
          case (MR_Integer) 1:
            {
              MR_Word PorF_17 = ((MR_Unsigned) ((MR_hl_field(3, Type_5, 1))) & (MR_Integer) 1);
              MR_Word Purity_20 = ((MR_Unsigned) ((MR_hl_field(3, Type_5, 4))) & (MR_Integer) 3);
              MR_String PorFStr_21;
              MR_String DescStr_22;

              switch (PorF_17) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  PorFStr_21 = (MR_String) "function type";
                  break;
                case (MR_Integer) 0:
                  PorFStr_21 = (MR_String) "predicate type";
                  break;
              }
              switch (Purity_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  DescStr_22 = mercury__string__f_43_43_2_f_0((MR_String) "impure ", PorFStr_21);
                  break;
                case (MR_Integer) 0:
                  DescStr_22 = PorFStr_21;
                  break;
                case (MR_Integer) 1:
                  DescStr_22 = mercury__string__f_43_43_2_f_0((MR_String) "semipure ", PorFStr_21);
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeDuType_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (DescStr_22));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubType_23 = ((MR_Word) ((MR_hl_field(3, Type_5, 1))));
              MR_Word next_value_of_Type_5 = SubType_23;

              // direct tailcall eliminated
              ;
              Type_5 = next_value_of_Type_5;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
check_hlds__typecheck_util__classify_defined_type_is_du_type_4_p_0(
  MR_Word TypeTable_5,
  MR_Word TypeCtor_6,
  MR_Word ArgTypes_7,
  MR_Word * MaybeDuType_8)
{
  MR_bool succeeded;
  MR_Word TypeDefn_9;

  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_5, TypeCtor_6, &TypeDefn_9);
  if (succeeded)
  {
    MR_Word TypeBody_10;

    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_9, &TypeBody_10);
    switch (MR_tag((MR_Word) TypeBody_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeBodyDu_11 = (MR_Word) ((MR_Word) (TypeBody_10));
          MR_Word DuType_12;

          {
            DuType_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DuType_12, 0) = ((MR_Box) (TypeCtor_6));
            MR_hl_field(0, DuType_12, 1) = ((MR_Box) (ArgTypes_7));
            MR_hl_field(0, DuType_12, 2) = ((MR_Box) (TypeDefn_9));
            MR_hl_field(0, DuType_12, 3) = ((MR_Box) (TypeBodyDu_11));
          }
          *MaybeDuType_8 = (MR_Word) ((MR_Word) (DuType_12));
        }
        break;
      case (MR_Integer) 1:
        *MaybeDuType_8 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_util_scalar_common_2[5]));
        break;
      case (MR_Integer) 2:
        *MaybeDuType_8 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_util_scalar_common_2[4]));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TypeBody_10, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *MaybeDuType_8 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_util_scalar_common_2[6]));
            break;
          case (MR_Integer) 1:
            *MaybeDuType_8 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_util_scalar_common_2[3]));
            break;
        }
        break;
    }
  }
  else
    *MaybeDuType_8 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_util_scalar_common_2[7]));
}

void MR_CALL 
check_hlds__typecheck_util__general_higher_order_func_type_6_p_0(
  MR_Word Purity_7,
  MR_Integer Arity_8,
  MR_Word * TypeVarSet_9,
  MR_Word * FuncType_10,
  MR_Word * ArgTypes_11,
  MR_Word * RetType_12)
{
  MR_Word TypeVarSet0_13;
  MR_Word ArgTypeVars_14;
  MR_Word TypeVarSet1_15;
  MR_Word RetTypeVar_16;
  MR_Word Var_17;

  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_13);
  mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), Arity_8, &ArgTypeVars_14, TypeVarSet0_13, &TypeVarSet1_15);
  mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &RetTypeVar_16, TypeVarSet1_15, TypeVarSet_9);
  Var_17 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__typecheck_util_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
  parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_17, ArgTypeVars_14, ArgTypes_11);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *RetType_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (RetTypeVar_16));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__prog_type_construct__construct_higher_order_func_type_4_p_0(Purity_7, *ArgTypes_11, *RetType_12, FuncType_10);
}

void MR_CALL 
check_hlds__typecheck_util__general_higher_order_pred_type_5_p_0(
  MR_Word Purity_6,
  MR_Integer Arity_7,
  MR_Word * TypeVarSet_8,
  MR_Word * PredType_9,
  MR_Word * ArgTypes_10)
{
  MR_Word TypeVarSet0_11;
  MR_Word ArgTypeVars_12;
  MR_Word Var_13;

  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_11);
  mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), Arity_7, &ArgTypeVars_12, TypeVarSet0_11, TypeVarSet_8);
  Var_13 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__typecheck_util_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
  parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_13, ArgTypeVars_12, ArgTypes_10);
  parse_tree__prog_type_construct__construct_higher_order_type_4_p_0(Purity_6, (MR_Integer) 0, *ArgTypes_10, PredType_9);
}

void MR_CALL 
check_hlds__typecheck_util__keep_type_assigns_where_var_can_have_type_4_p_0(
  MR_Word Var_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_8,
  MR_Word * STATE_VARIABLE_TypeAssignSet_9)
{
  check_hlds__typecheck_util__acc_type_assigns_where_var_can_have_type_5_p_0(STATE_VARIABLE_TypeAssignSet_0_8, Var_5, Type_6, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_TypeAssignSet_9);
}

static void MR_CALL 
check_hlds__typecheck_util__acc_type_assigns_where_var_can_have_type_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Var_2,
  MR_Word Type_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TypeAssignSet_5 = STATE_VARIABLE_TypeAssignSet_0_4;
    else
    {
      MR_Word TypeAssign0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word TypeAssigns0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_TypeAssignSet_1_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;

      check_hlds__typecheck_util__acc_type_assign_if_var_can_have_type_5_p_0(TypeAssign0_11, Var_2, Type_3, STATE_VARIABLE_TypeAssignSet_0_4, &STATE_VARIABLE_TypeAssignSet_1_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TypeAssigns0_12;
      next_value_of_STATE_VARIABLE_TypeAssignSet_0_4 = STATE_VARIABLE_TypeAssignSet_1_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeAssignSet_0_4 = next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
check_hlds__typecheck_util__acc_type_assign_if_var_can_have_type_5_p_0(
  MR_Word TypeAssign0_6,
  MR_Word Var_7,
  MR_Word Type_8,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_16,
  MR_Word * STATE_VARIABLE_TypeAssignSet_17)
{
  MR_bool succeeded;
  MR_Word VarTypes0_10;
  MR_Word MaybeOldVarType_11;
  MR_Word VarTypes_12;

  check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign0_6, &VarTypes0_10);
  parse_tree__vartypes__search_insert_var_type_5_p_0(Var_7, Type_8, &MaybeOldVarType_11, VarTypes0_10, &VarTypes_12);
  if ((MaybeOldVarType_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word TypeAssign_15;

    check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_12, TypeAssign0_6, &TypeAssign_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_TypeAssignSet_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TypeAssign_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_16));
    }
  }
  else
  {
    MR_Word OldVarType_13 = ((MR_Word) ((MR_hl_field(1, MaybeOldVarType_11, 0))));
    MR_Word TypeAssign1_14;
    MR_Word ExistQTVars_18;
    MR_Word TypeBindings0_19;
    MR_Word TypeBindings_20;

    check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign0_6, &ExistQTVars_18);
    check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign0_6, &TypeBindings0_19);
    succeeded = parse_tree__prog_type_unify__type_unify_5_p_0(OldVarType_13, Type_8, ExistQTVars_18, TypeBindings0_19, &TypeBindings_20);
    if (succeeded)
    {
      check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_20, TypeAssign0_6, &TypeAssign1_14);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_TypeAssignSet_17 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (TypeAssign1_14));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_16));
      }
    else
      *STATE_VARIABLE_TypeAssignSet_17 = STATE_VARIABLE_TypeAssignSet_0_16;
  }
}

void MR_CALL 
check_hlds__typecheck_util__type_assign_rename_apart_4_p_0(
  MR_Word TypeAssign0_5,
  MR_Word PredTypeVarSet_6,
  MR_Word * TypeAssign_7,
  MR_Word * Renaming_8)
{
  MR_Word TypeVarSet0_9;
  MR_Word TypeVarSet_10;

  check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign0_5, &TypeVarSet0_9);
  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TypeVarSet0_9, PredTypeVarSet_6, &TypeVarSet_10, Renaming_8);
  check_hlds__type_assign__type_assign_set_typevarset_3_p_0(TypeVarSet_10, TypeAssign0_5, TypeAssign_7);
}

MR_bool MR_CALL 
check_hlds__typecheck_util__type_assign_unify_type_4_p_0(
  MR_Word X_5,
  MR_Word Y_6,
  MR_Word TypeAssign0_7,
  MR_Word * TypeAssign_8)
{
  MR_bool succeeded;
  MR_Word ExistQTVars_9;
  MR_Word TypeBindings0_10;
  MR_Word TypeBindings_11;

  check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign0_7, &ExistQTVars_9);
  check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign0_7, &TypeBindings0_10);
  succeeded = parse_tree__prog_type_unify__type_unify_5_p_0(X_5, Y_6, ExistQTVars_9, TypeBindings0_10, &TypeBindings_11);
  if (succeeded)
  {
    check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_11, TypeAssign0_7, TypeAssign_8);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
check_hlds__typecheck_util__type_assign_fresh_type_var_4_p_0(
  MR_Word Var_5,
  MR_Word * Type_6,
  MR_Word STATE_VARIABLE_TypeAssign_0_13,
  MR_Word * STATE_VARIABLE_TypeAssign_14)
{
  MR_Word VarTypes0_8;
  MR_Word TypeVarSet0_9;
  MR_Word TypeVar_10;
  MR_Word TypeVarSet_11;
  MR_Word VarTypes1_12;
  MR_Word STATE_VARIABLE_TypeAssign_1_15;

  check_hlds__type_assign__type_assign_get_var_types_2_p_0(STATE_VARIABLE_TypeAssign_0_13, &VarTypes0_8);
  check_hlds__type_assign__type_assign_get_typevarset_2_p_0(STATE_VARIABLE_TypeAssign_0_13, &TypeVarSet0_9);
  mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVar_10, TypeVarSet0_9, &TypeVarSet_11);
  check_hlds__type_assign__type_assign_set_typevarset_3_p_0(TypeVarSet_11, STATE_VARIABLE_TypeAssign_0_13, &STATE_VARIABLE_TypeAssign_1_15);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Type_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TypeVar_10));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__vartypes__add_var_type_4_p_0(Var_5, *Type_6, VarTypes0_8, &VarTypes1_12);
  check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes1_12, STATE_VARIABLE_TypeAssign_1_15, STATE_VARIABLE_TypeAssign_14);
}

MR_Word MR_CALL 
check_hlds__typecheck_util__empty_hlds_constraint_db_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_4;
  MR_Word Var_5;

  Var_4 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__typecheck_util_scalar_common_1[0]));
  Var_5 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__typecheck_util_scalar_common_1[1]));
  {
    HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__1_1, 2) = ((MR_Box) (Var_4));
    MR_hl_field(0, HeadVar__1_1, 3) = ((MR_Box) (Var_5));
  }
  return HeadVar__1_1;
}

static MR_bool MR_CALL 
check_hlds__typecheck_util____Unify____du_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_util____Unify____du_type_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_util____Compare____du_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_util____Compare____du_type_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_util____Unify____maybe_du_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_util____Unify____maybe_du_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_util____Compare____maybe_du_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_util____Compare____maybe_du_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__typecheck_util__init(void)
{
}

void mercury__check_hlds__typecheck_util__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__typecheck_util__check_hlds__typecheck_util__type_ctor_info_du_type_info_0);
  MR_register_type_ctor_info(&check_hlds__typecheck_util__check_hlds__typecheck_util__type_ctor_info_maybe_du_type_0);
}

void mercury__check_hlds__typecheck_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__typecheck_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.typecheck_util.
