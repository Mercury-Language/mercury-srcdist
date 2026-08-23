/*
** Automatically generated from `find_bind_var.m'
** by the Mercury compiler,
** version rotd-2026-08-23
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


// :- module check_hlds.find_bind_var.
// :- implementation.

/*
INIT mercury__check_hlds__find_bind_var__init
ENDINIT
*/

#include "check_hlds.find_bind_var.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "enum.mih"
#include "hlds.mih"
#include "integer.mih"
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
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_subst.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.det_util.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_proc_id.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"




static const MR_EnumFunctorDesc check_hlds__find_bind_var__check_hlds__find_bind_var__enum_functor_desc_deconstruct_search_0_0;

static const MR_EnumFunctorDesc check_hlds__find_bind_var__check_hlds__find_bind_var__enum_functor_desc_deconstruct_search_0_1;

static const MR_EnumFunctorDesc check_hlds__find_bind_var__check_hlds__find_bind_var__enum_functor_desc_deconstruct_search_0_2;

static const MR_EnumFunctorDescPtr check_hlds__find_bind_var__check_hlds__find_bind_var__enum_ordinal_ordered_deconstruct_search_0[3];

static const MR_EnumFunctorDescPtr check_hlds__find_bind_var__check_hlds__find_bind_var__enum_name_ordered_deconstruct_search_0[3];

static const MR_Integer check_hlds__find_bind_var__check_hlds__find_bind_var__functor_number_map_deconstruct_search_0[3];

static const MR_EnumFunctorDesc check_hlds__find_bind_var__check_hlds__find_bind_var__enum_functor_desc_found_deconstruct_0_0;

static const MR_EnumFunctorDesc check_hlds__find_bind_var__check_hlds__find_bind_var__enum_functor_desc_found_deconstruct_0_1;

static const MR_EnumFunctorDescPtr check_hlds__find_bind_var__check_hlds__find_bind_var__enum_ordinal_ordered_found_deconstruct_0[2];

static const MR_EnumFunctorDescPtr check_hlds__find_bind_var__check_hlds__find_bind_var__enum_name_ordered_found_deconstruct_0[2];

static const MR_Integer check_hlds__find_bind_var__check_hlds__find_bind_var__functor_number_map_found_deconstruct_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__find_bind_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__find_bind_var__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_VA_PseudoTypeInfo_Struct8 check_hlds__find_bind_var____vpti_pred_8__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_expr_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_info_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2;

static void MR_CALL 
check_hlds__find_bind_var____Compare____deconstruct_search_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__find_bind_var____Unify____deconstruct_search_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__find_bind_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ProcessUnify_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Subst_0_5,
  MR_Word * STATE_VARIABLE_Subst_6,
  MR_Box STATE_VARIABLE_Result_0_7,
  MR_Box * STATE_VARIABLE_Result_8,
  MR_Box STATE_VARIABLE_Info_0_9,
  MR_Box * STATE_VARIABLE_Info_10,
  MR_Word * HeadVar__11_11);

static void MR_CALL 
check_hlds__find_bind_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_p_0(
  MR_Word Var_12,
  MR_Word ProcessUnify_13,
  MR_Word Goal0_14,
  MR_Word * Goal_15,
  MR_Word STATE_VARIABLE_Subst_0_88,
  MR_Word * STATE_VARIABLE_Subst_89,
  MR_Box STATE_VARIABLE_Result_0_90,
  MR_Box * STATE_VARIABLE_Result_91,
  MR_Box STATE_VARIABLE_Info_0_92,
  MR_Box * STATE_VARIABLE_Info_93,
  MR_Word * FoundDeconstruct_19);

static MR_bool MR_CALL 
check_hlds__find_bind_var____Unify____deconstruct_search_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__find_bind_var____Compare____deconstruct_search_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__find_bind_var____Unify____found_deconstruct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__find_bind_var____Compare____found_deconstruct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__find_bind_var____Unify____process_unify_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
check_hlds__find_bind_var____Compare____process_unify_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);


static /* final */ const MR_Box check_hlds__find_bind_var_scalar_common_1[2][2];




static /* final */ const MR_Box check_hlds__find_bind_var_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"


static const MR_EnumFunctorDesc check_hlds__find_bind_var__check_hlds__find_bind_var__enum_functor_desc_deconstruct_search_0_0 = {
  (MR_String) "before_deconstruct",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__find_bind_var__check_hlds__find_bind_var__enum_functor_desc_deconstruct_search_0_1 = {
  (MR_String) "found_deconstruct",
  INT32_C(1)
};

static const MR_EnumFunctorDesc check_hlds__find_bind_var__check_hlds__find_bind_var__enum_functor_desc_deconstruct_search_0_2 = {
  (MR_String) "given_up_search",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr check_hlds__find_bind_var__check_hlds__find_bind_var__enum_ordinal_ordered_deconstruct_search_0[3] = {
  &check_hlds__find_bind_var__check_hlds__find_bind_var__enum_functor_desc_deconstruct_search_0_0,
  &check_hlds__find_bind_var__check_hlds__find_bind_var__enum_functor_desc_deconstruct_search_0_1,
  &check_hlds__find_bind_var__check_hlds__find_bind_var__enum_functor_desc_deconstruct_search_0_2
};

static const MR_EnumFunctorDescPtr check_hlds__find_bind_var__check_hlds__find_bind_var__enum_name_ordered_deconstruct_search_0[3] = {
  &check_hlds__find_bind_var__check_hlds__find_bind_var__enum_functor_desc_deconstruct_search_0_0,
  &check_hlds__find_bind_var__check_hlds__find_bind_var__enum_functor_desc_deconstruct_search_0_1,
  &check_hlds__find_bind_var__check_hlds__find_bind_var__enum_functor_desc_deconstruct_search_0_2
};

static const MR_Integer check_hlds__find_bind_var__check_hlds__find_bind_var__functor_number_map_deconstruct_search_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__find_bind_var__check_hlds__find_bind_var__type_ctor_info_deconstruct_search_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__find_bind_var____Unify____deconstruct_search_0_0_10001)),
  ((MR_Box) (check_hlds__find_bind_var____Compare____deconstruct_search_0_0_10001)),
  (MR_String) "check_hlds.find_bind_var",
  (MR_String) "deconstruct_search",
  { check_hlds__find_bind_var__check_hlds__find_bind_var__enum_name_ordered_deconstruct_search_0 },
  { check_hlds__find_bind_var__check_hlds__find_bind_var__enum_ordinal_ordered_deconstruct_search_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__find_bind_var__check_hlds__find_bind_var__functor_number_map_deconstruct_search_0,

};

static const MR_EnumFunctorDesc check_hlds__find_bind_var__check_hlds__find_bind_var__enum_functor_desc_found_deconstruct_0_0 = {
  (MR_String) "did_find_deconstruct",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__find_bind_var__check_hlds__find_bind_var__enum_functor_desc_found_deconstruct_0_1 = {
  (MR_String) "did_not_find_deconstruct",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__find_bind_var__check_hlds__find_bind_var__enum_ordinal_ordered_found_deconstruct_0[2] = {
  &check_hlds__find_bind_var__check_hlds__find_bind_var__enum_functor_desc_found_deconstruct_0_0,
  &check_hlds__find_bind_var__check_hlds__find_bind_var__enum_functor_desc_found_deconstruct_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__find_bind_var__check_hlds__find_bind_var__enum_name_ordered_found_deconstruct_0[2] = {
  &check_hlds__find_bind_var__check_hlds__find_bind_var__enum_functor_desc_found_deconstruct_0_0,
  &check_hlds__find_bind_var__check_hlds__find_bind_var__enum_functor_desc_found_deconstruct_0_1
};

static const MR_Integer check_hlds__find_bind_var__check_hlds__find_bind_var__functor_number_map_found_deconstruct_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__find_bind_var__check_hlds__find_bind_var__type_ctor_info_found_deconstruct_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__find_bind_var____Unify____found_deconstruct_0_0_10001)),
  ((MR_Box) (check_hlds__find_bind_var____Compare____found_deconstruct_0_0_10001)),
  (MR_String) "check_hlds.find_bind_var",
  (MR_String) "found_deconstruct",
  { check_hlds__find_bind_var__check_hlds__find_bind_var__enum_name_ordered_found_deconstruct_0 },
  { check_hlds__find_bind_var__check_hlds__find_bind_var__enum_ordinal_ordered_found_deconstruct_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__find_bind_var__check_hlds__find_bind_var__functor_number_map_found_deconstruct_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__find_bind_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__find_bind_var__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_VA_PseudoTypeInfo_Struct8 check_hlds__find_bind_var____vpti_pred_8__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_expr_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_info_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) (&check_hlds__find_bind_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_expr_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0),
    (MR_PseudoTypeInfo) (&check_hlds__find_bind_var__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__find_bind_var__check_hlds__find_bind_var__type_ctor_info_process_unify_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (check_hlds__find_bind_var____Unify____process_unify_2_0_10001)),
  ((MR_Box) (check_hlds__find_bind_var____Compare____process_unify_2_0_10001)),
  (MR_String) "check_hlds.find_bind_var",
  (MR_String) "process_unify",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__find_bind_var____vpti_pred_8__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_expr_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_info_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
check_hlds__find_bind_var____Compare____process_unify_2_0(
  MR_Word TypeInfo_for_Result_4,
  MR_Word TypeInfo_for_Info_5,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

MR_bool MR_CALL 
check_hlds__find_bind_var____Unify____process_unify_2_0(
  MR_Word TypeInfo_for_Result_3,
  MR_Word TypeInfo_for_Info_4,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

void MR_CALL 
check_hlds__find_bind_var____Compare____found_deconstruct_0_0(
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
check_hlds__find_bind_var____Unify____found_deconstruct_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__find_bind_var____Compare____deconstruct_search_0_0(
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

static MR_bool MR_CALL 
check_hlds__find_bind_var____Unify____deconstruct_search_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__find_bind_var__find_bind_var_9_p_0(
  MR_Word TypeInfo_for_Result_25,
  MR_Word TypeInfo_for_Info_26,
  MR_Word Var_10,
  MR_Word ProcessUnify_11,
  MR_Word STATE_VARIABLE_Goal_0_19,
  MR_Word * STATE_VARIABLE_Goal_20,
  MR_Box STATE_VARIABLE_Result_0_21,
  MR_Box * STATE_VARIABLE_Result_22,
  MR_Box STATE_VARIABLE_Info_0_23,
  MR_Box * STATE_VARIABLE_Info_24,
  MR_Word * FoundDeconstruct_15)
{
  MR_Word Subst_16;
  MR_Word DeconstructSearch_18;
  MR_Word Var_17;

  mercury__map__init_1_p_0((MR_Word) (&check_hlds__find_bind_var_scalar_common_1[0]), (MR_Word) (&check_hlds__find_bind_var_scalar_common_1[1]), &Subst_16);
  check_hlds__find_bind_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_p_0(Var_10, ProcessUnify_11, STATE_VARIABLE_Goal_0_19, STATE_VARIABLE_Goal_20, Subst_16, &Var_17, STATE_VARIABLE_Result_0_21, STATE_VARIABLE_Result_22, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24, &DeconstructSearch_18);
  switch (DeconstructSearch_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *FoundDeconstruct_15 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      *FoundDeconstruct_15 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      *FoundDeconstruct_15 = (MR_Integer) 1;
      break;
  }
}

static void MR_CALL 
check_hlds__find_bind_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ProcessUnify_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Subst_0_5,
  MR_Word * STATE_VARIABLE_Subst_6,
  MR_Box STATE_VARIABLE_Result_0_7,
  MR_Box * STATE_VARIABLE_Result_8,
  MR_Box STATE_VARIABLE_Info_0_9,
  MR_Box * STATE_VARIABLE_Info_10,
  MR_Word * HeadVar__11_11)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__11_11 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
    *STATE_VARIABLE_Result_8 = STATE_VARIABLE_Result_0_7;
    *STATE_VARIABLE_Subst_6 = STATE_VARIABLE_Subst_0_5;
  }
  else
  {
    MR_Word HeadGoal0_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word TailGoals0_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word HeadGoal_32;
    MR_Word FoundDeconstruct1_33;
    MR_Word STATE_VARIABLE_Subst_1_44;
    MR_Box STATE_VARIABLE_Result_1_45;
    MR_Box STATE_VARIABLE_Info_1_46;

    check_hlds__find_bind_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_p_0(HeadVar__1_1, ProcessUnify_2, HeadGoal0_25, &HeadGoal_32, STATE_VARIABLE_Subst_0_5, &STATE_VARIABLE_Subst_1_44, STATE_VARIABLE_Result_0_7, &STATE_VARIABLE_Result_1_45, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_1_46, &FoundDeconstruct1_33);
    switch (FoundDeconstruct1_33) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TailGoals_34;

          check_hlds__find_bind_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_p_0(HeadVar__1_1, ProcessUnify_2, TailGoals0_26, &TailGoals_34, STATE_VARIABLE_Subst_1_44, STATE_VARIABLE_Subst_6, STATE_VARIABLE_Result_1_45, STATE_VARIABLE_Result_8, STATE_VARIABLE_Info_1_46, STATE_VARIABLE_Info_10, HeadVar__11_11);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (HeadGoal_32));
            MR_hl_field(1, base, 1) = ((MR_Box) (TailGoals_34));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HeadGoalExpr_35;
          MR_Word HeadGoalConjuncts_37;
          MR_Word Var_50;

          *HeadVar__11_11 = FoundDeconstruct1_33;
          HeadGoalExpr_35 = ((MR_Word) ((MR_hl_field(0, HeadGoal_32, 0))));
          succeeded = ((((MR_tag((MR_Word) HeadGoalExpr_35)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadGoalExpr_35, 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_50 = ((MR_Unsigned) ((MR_hl_field(3, HeadGoalExpr_35, 1))) & (MR_Integer) 1);
            HeadGoalConjuncts_37 = ((MR_Word) ((MR_hl_field(3, HeadGoalExpr_35, 2))));
            succeeded = (Var_50 == (MR_Integer) 0);
          }
          if (succeeded)
            *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadGoalConjuncts_37, TailGoals0_26);
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (HeadGoal_32));
              MR_hl_field(1, base, 1) = ((MR_Box) (TailGoals0_26));
            }
          *STATE_VARIABLE_Subst_6 = STATE_VARIABLE_Subst_1_44;
          *STATE_VARIABLE_Result_8 = STATE_VARIABLE_Result_1_45;
          *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_1_46;
        }
        break;
      case (MR_Integer) 2:
        {
          *HeadVar__11_11 = FoundDeconstruct1_33;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (HeadGoal_32));
            MR_hl_field(1, base, 1) = ((MR_Box) (TailGoals0_26));
          }
          *STATE_VARIABLE_Subst_6 = STATE_VARIABLE_Subst_1_44;
          *STATE_VARIABLE_Result_8 = STATE_VARIABLE_Result_1_45;
          *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_1_46;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__find_bind_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_p_0(
  MR_Word Var_12,
  MR_Word ProcessUnify_13,
  MR_Word Goal0_14,
  MR_Word * Goal_15,
  MR_Word STATE_VARIABLE_Subst_0_88,
  MR_Word * STATE_VARIABLE_Subst_89,
  MR_Box STATE_VARIABLE_Result_0_90,
  MR_Box * STATE_VARIABLE_Result_91,
  MR_Box STATE_VARIABLE_Info_0_92,
  MR_Box * STATE_VARIABLE_Info_93,
  MR_Word * FoundDeconstruct_19)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_20 = ((MR_Word) ((MR_hl_field(0, Goal0_14, 0))));
  MR_Word GoalInfo_21 = ((MR_Word) ((MR_hl_field(0, Goal0_14, 1))));

  switch (MR_tag((MR_Word) GoalExpr0_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
      {
        *Goal_15 = Goal0_14;
        succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_21, (MR_Integer) 1);
        if (succeeded)
          *FoundDeconstruct_19 = (MR_Integer) 0;
        else
          *FoundDeconstruct_19 = (MR_Integer) 2;
        *STATE_VARIABLE_Subst_89 = STATE_VARIABLE_Subst_0_88;
        *STATE_VARIABLE_Result_91 = STATE_VARIABLE_Result_0_90;
        *STATE_VARIABLE_Info_93 = STATE_VARIABLE_Info_0_92;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHS_32 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_20, 0))));
        MR_Word RHS_33 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_20, 1))));
        MR_Word UnifyInfo0_35 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_20, 3))));
        MR_Word TypeCtorInfo_120_120;
        MR_Word TypeInfo_125_125;
        MR_Word UnifyVar_37;
        MR_Word SubstVar_43;
        MR_Word SubstUnifyVar_44;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_107;
        MR_Word Var_108;
        MR_Word Var_109;
        MR_Word Var_110;
        MR_Word Var_111;
        MR_Word Var_121;
        MR_Word Var_122;

        succeeded = ((MR_tag((MR_Word) UnifyInfo0_35)) == (MR_Integer) 1);
        if (succeeded)
        {
          UnifyVar_37 = ((MR_Word) ((MR_hl_field(1, UnifyInfo0_35, 0))));
          Var_106 = mercury__term_context__dummy_context_0_f_0();
          {
            Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_104, 0) = ((MR_Box) (Var_12));
            MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_106));
          }
          Var_107 = mercury__term_context__dummy_context_0_f_0();
          TypeCtorInfo_120_120 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          mercury__term_subst__apply_rec_substitution_in_term_3_p_0(TypeCtorInfo_120_120, STATE_VARIABLE_Subst_0_88, Var_104, &Var_105);
          succeeded = ((MR_tag((MR_Word) Var_105)) == (MR_Integer) 1);
          if (succeeded)
          {
            SubstVar_43 = ((MR_Word) ((MR_hl_field(1, Var_105, 0))));
            Var_121 = ((MR_Word) ((MR_hl_field(1, Var_105, 1))));
            succeeded = mercury__term_context____Unify____term_context_0_0(Var_107, Var_121);
            if (succeeded)
            {
              Var_110 = mercury__term_context__dummy_context_0_f_0();
              {
                Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_108, 0) = ((MR_Box) (UnifyVar_37));
                MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_110));
              }
              Var_111 = mercury__term_context__dummy_context_0_f_0();
              mercury__term_subst__apply_rec_substitution_in_term_3_p_0(TypeCtorInfo_120_120, STATE_VARIABLE_Subst_0_88, Var_108, &Var_109);
              succeeded = ((MR_tag((MR_Word) Var_109)) == (MR_Integer) 1);
              if (succeeded)
              {
                SubstUnifyVar_44 = ((MR_Word) ((MR_hl_field(1, Var_109, 0))));
                Var_122 = ((MR_Word) ((MR_hl_field(1, Var_109, 1))));
                succeeded = mercury__term_context____Unify____term_context_0_0(Var_111, Var_122);
                if (succeeded)
                {
                  TypeInfo_125_125 = (MR_Word) (&check_hlds__find_bind_var_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_125_125, ((MR_Box) (SubstVar_43)), ((MR_Box) (SubstUnifyVar_44)));
                }
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word Goals_46;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, ProcessUnify_13, 1))));
          MR_Box conv1_Goals_46;

          func_0(((MR_Box) (ProcessUnify_13)), ((MR_Box) (Var_12)), ((MR_Box) (GoalExpr0_20)), ((MR_Box) (GoalInfo_21)), &conv1_Goals_46, STATE_VARIABLE_Result_0_90, STATE_VARIABLE_Result_91, STATE_VARIABLE_Info_0_92, STATE_VARIABLE_Info_93);
          Goals_46 = ((MR_Word) (conv1_Goals_46));
          hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals_46, GoalInfo_21, Goal_15);
          *FoundDeconstruct_19 = (MR_Integer) 1;
          *STATE_VARIABLE_Subst_89 = STATE_VARIABLE_Subst_0_88;
        }
        else
        {
          MR_Word NewSubst_47;

          *Goal_15 = Goal0_14;
          *FoundDeconstruct_19 = (MR_Integer) 0;
          succeeded = check_hlds__det_util__interpret_unify_4_p_0(LHS_32, RHS_33, STATE_VARIABLE_Subst_0_88, &NewSubst_47);
          if (succeeded)
            *STATE_VARIABLE_Subst_89 = NewSubst_47;
          else
            *STATE_VARIABLE_Subst_89 = STATE_VARIABLE_Subst_0_88;
          *STATE_VARIABLE_Info_93 = STATE_VARIABLE_Info_0_92;
          *STATE_VARIABLE_Result_91 = STATE_VARIABLE_Result_0_90;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_20, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 6:
          {
            *Goal_15 = Goal0_14;
            succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_21, (MR_Integer) 1);
            if (succeeded)
              *FoundDeconstruct_19 = (MR_Integer) 0;
            else
              *FoundDeconstruct_19 = (MR_Integer) 2;
            *STATE_VARIABLE_Subst_89 = STATE_VARIABLE_Subst_0_88;
            *STATE_VARIABLE_Result_91 = STATE_VARIABLE_Result_0_90;
            *STATE_VARIABLE_Info_93 = STATE_VARIABLE_Info_0_92;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_27 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_20, 1))) & (MR_Integer) 1);
            MR_Word SubGoals0_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, 2))));

            switch (ConjType_27) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  *Goal_15 = Goal0_14;
                  *FoundDeconstruct_19 = (MR_Integer) 2;
                  *STATE_VARIABLE_Subst_89 = STATE_VARIABLE_Subst_0_88;
                  *STATE_VARIABLE_Result_91 = STATE_VARIABLE_Result_0_90;
                  *STATE_VARIABLE_Info_93 = STATE_VARIABLE_Info_0_92;
                }
                break;
              case (MR_Integer) 0:
                if ((SubGoals0_28 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  *Goal_15 = Goal0_14;
                  *FoundDeconstruct_19 = (MR_Integer) 0;
                  *STATE_VARIABLE_Subst_89 = STATE_VARIABLE_Subst_0_88;
                  *STATE_VARIABLE_Result_91 = STATE_VARIABLE_Result_0_90;
                  *STATE_VARIABLE_Info_93 = STATE_VARIABLE_Info_0_92;
                }
                else
                {
                  MR_Word SubGoals_31;
                  MR_Word Var_103;

                  check_hlds__find_bind_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_p_0(Var_12, ProcessUnify_13, SubGoals0_28, &SubGoals_31, STATE_VARIABLE_Subst_0_88, STATE_VARIABLE_Subst_89, STATE_VARIABLE_Result_0_90, STATE_VARIABLE_Result_91, STATE_VARIABLE_Info_0_92, STATE_VARIABLE_Info_93, FoundDeconstruct_19);
                  {
                    Var_103 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_103, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, Var_103, 1) = (MR_Box) ((MR_Unsigned) (ConjType_27));
                    MR_hl_field(3, Var_103, 2) = ((MR_Box) (SubGoals_31));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *Goal_15 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Var_103));
                    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_21));
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason0_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, 1))));
            MR_Word SubGoal0_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, 2))));
            MR_Word Var_94;

            succeeded = ((((MR_tag((MR_Word) Reason0_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason0_22, 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Var_94 = ((MR_Unsigned) ((MR_hl_field(3, Reason0_22, 2))) & (MR_Integer) 3);
              succeeded = (Var_94 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              *Goal_15 = Goal0_14;
              *FoundDeconstruct_19 = (MR_Integer) 0;
              *STATE_VARIABLE_Info_93 = STATE_VARIABLE_Info_0_92;
              *STATE_VARIABLE_Result_91 = STATE_VARIABLE_Result_0_90;
              *STATE_VARIABLE_Subst_89 = STATE_VARIABLE_Subst_0_88;
            }
            else
            {
              MR_Word SubGoal_25;
              MR_Word Var_98;

              check_hlds__find_bind_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_p_0(Var_12, ProcessUnify_13, SubGoal0_23, &SubGoal_25, STATE_VARIABLE_Subst_0_88, STATE_VARIABLE_Subst_89, STATE_VARIABLE_Result_0_90, STATE_VARIABLE_Result_91, STATE_VARIABLE_Info_0_92, STATE_VARIABLE_Info_93, FoundDeconstruct_19);
              succeeded = (*FoundDeconstruct_19 == (MR_Integer) 1);
              if (succeeded)
              {
                succeeded = ((((MR_tag((MR_Word) Reason0_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason0_22, 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Var_98 = ((MR_Unsigned) ((MR_hl_field(3, Reason0_22, 2))) & (MR_Integer) 3);
                  succeeded = (Var_98 == (MR_Integer) 2);
                }
              }
              if (succeeded)
                *Goal_15 = SubGoal_25;
              else
              {
                MR_Word Var_99;

                {
                  Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(3, Var_99, 1) = ((MR_Box) (Reason0_22));
                  MR_hl_field(3, Var_99, 2) = ((MR_Box) (SubGoal_25));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Goal_15 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_99));
                  MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_21));
                }
              }
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, 1))));

            switch (MR_tag((MR_Word) ShortHand0_75)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.find_bind_var.find_bind_var_2\'/11", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  *Goal_15 = Goal0_14;
                  *FoundDeconstruct_19 = (MR_Integer) 2;
                }
                break;
              case (MR_Integer) 2:
                {
                  *Goal_15 = Goal0_14;
                  *FoundDeconstruct_19 = (MR_Integer) 2;
                }
                break;
            }
            *STATE_VARIABLE_Subst_89 = STATE_VARIABLE_Subst_0_88;
            *STATE_VARIABLE_Result_91 = STATE_VARIABLE_Result_0_90;
            *STATE_VARIABLE_Info_93 = STATE_VARIABLE_Info_0_92;
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
check_hlds__find_bind_var____Unify____deconstruct_search_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__find_bind_var____Unify____deconstruct_search_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__find_bind_var____Compare____deconstruct_search_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__find_bind_var____Compare____deconstruct_search_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__find_bind_var____Unify____found_deconstruct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__find_bind_var____Unify____found_deconstruct_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__find_bind_var____Compare____found_deconstruct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__find_bind_var____Compare____found_deconstruct_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__find_bind_var____Unify____process_unify_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = check_hlds__find_bind_var____Unify____process_unify_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__find_bind_var____Compare____process_unify_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__find_bind_var____Compare____process_unify_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__find_bind_var__init(void)
{
}

void mercury__check_hlds__find_bind_var__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__find_bind_var__check_hlds__find_bind_var__type_ctor_info_deconstruct_search_0);
  MR_register_type_ctor_info(&check_hlds__find_bind_var__check_hlds__find_bind_var__type_ctor_info_found_deconstruct_0);
  MR_register_type_ctor_info(&check_hlds__find_bind_var__check_hlds__find_bind_var__type_ctor_info_process_unify_2);
}

void mercury__check_hlds__find_bind_var__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__find_bind_var__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.find_bind_var.
