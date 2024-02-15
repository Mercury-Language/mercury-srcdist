/*
** Automatically generated from `goal_store.m'
** by the Mercury compiler,
** version rotd-2024-02-15
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


// :- module transform_hlds.goal_store.
// :- implementation.

/*
INIT mercury__transform_hlds__goal_store__init
ENDINIT
*/

#include "transform_hlds.goal_store.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"



struct transform_hlds__goal_store__direct_ancestor_6_p_0_env_0_s {
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__TypeInfo_for_T_20;
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__ModuleInfo_7;
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__VarTable_8;
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__FullyStrict_10;
  MR_Box transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__StartId_11;
  MR_Box * transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierId_12;
  MR_Cont transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__cont;
  void * transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__cont_env_ptr;
  MR_bool transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__succeeded;
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__LaterGoal_13;
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__LaterInstMap_14;
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierGoal_15;
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierInstMap_16;
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__Var_18;
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__Var_19;
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__Var_21;
  MR_Box transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__conv1_Var_18;
};

struct transform_hlds__goal_store__goal_store_member_3_p_0_env_0_s {
  MR_Word * transform_hlds__goal_store__goal_store_member_3_p_0_env_0__Goal_6;
  MR_Cont transform_hlds__goal_store__goal_store_member_3_p_0_env_0__cont;
  void * transform_hlds__goal_store__goal_store_member_3_p_0_env_0__cont_env_ptr;
  MR_Box transform_hlds__goal_store__goal_store_member_3_p_0_env_0__conv0_Goal_6;
};


static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__goal_store__tree234__pti_tree234_2__pseudo_1__plain_transform_hlds__goal_store__type_ctor_info_stored_goal_0;

static const MR_PseudoTypeInfo transform_hlds__goal_store__transform_hlds__goal_store__field_types_stored_goal_0_0[2];

static const MR_DuFunctorDesc transform_hlds__goal_store__transform_hlds__goal_store__du_functor_desc_stored_goal_0_0;

static const MR_DuFunctorDescPtr transform_hlds__goal_store__transform_hlds__goal_store__du_stag_ordered_stored_goal_0_0[1];

static const MR_DuPtagLayout transform_hlds__goal_store__transform_hlds__goal_store__du_ptag_ordered_stored_goal_0[1];

static const MR_DuFunctorDescPtr transform_hlds__goal_store__transform_hlds__goal_store__du_name_ordered_stored_goal_0[1];

static const MR_Integer transform_hlds__goal_store__transform_hlds__goal_store__functor_number_map_stored_goal_0[1];

static void MR_CALL 
transform_hlds__goal_store__direct_ancestor_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__goal_store__direct_ancestor_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__goal_store__direct_ancestor_6_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word ModuleInfo_7,
  MR_Word VarTable_8,
  MR_Word GoalStore_9,
  MR_Word FullyStrict_10,
  MR_Box StartId_11,
  MR_Box * EarlierId_12,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
transform_hlds__goal_store__ancestors_loop_8_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
transform_hlds__goal_store__ancestors_loop_8_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word GoalStore_3,
  MR_Word FullyStrict_4,
  MR_Word VisitedIds0_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_AncestorIds_0_7,
  MR_Word * STATE_VARIABLE_AncestorIds_8);

static void MR_CALL 
transform_hlds__goal_store__goal_store_member_3_p_0_1(
  void * env_ptr_arg);

static MR_bool MR_CALL 
transform_hlds__goal_store____Unify____goal_store_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
transform_hlds__goal_store____Compare____goal_store_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__goal_store____Unify____stored_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__goal_store____Compare____stored_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Integer transform_hlds__goal_store_scalar_common_1[1][2];

static /* final */ const MR_Box transform_hlds__goal_store_scalar_common_2[1][10];




static /* final */ const MR_Integer transform_hlds__goal_store_scalar_common_1[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box transform_hlds__goal_store_scalar_common_2[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&transform_hlds__goal_store_scalar_common_1[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__goal_store__tree234__pti_tree234_2__pseudo_1__plain_transform_hlds__goal_store__type_ctor_info_stored_goal_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__goal_store__tree234__pti_tree234_2__pseudo_1__plain_transform_hlds__goal_store__type_ctor_info_stored_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_goal_store_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (transform_hlds__goal_store____Unify____goal_store_1_0_10001)),
  ((MR_Box) (transform_hlds__goal_store____Compare____goal_store_1_0_10001)),
  (MR_String) "transform_hlds.goal_store",
  (MR_String) "goal_store",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__goal_store__tree234__pti_tree234_2__pseudo_1__plain_transform_hlds__goal_store__type_ctor_info_stored_goal_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo transform_hlds__goal_store__transform_hlds__goal_store__field_types_stored_goal_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)
};

static const MR_DuFunctorDesc transform_hlds__goal_store__transform_hlds__goal_store__du_functor_desc_stored_goal_0_0 = {
  (MR_String) "stored_goal",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__goal_store__transform_hlds__goal_store__field_types_stored_goal_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__goal_store__transform_hlds__goal_store__du_stag_ordered_stored_goal_0_0[1] = { &transform_hlds__goal_store__transform_hlds__goal_store__du_functor_desc_stored_goal_0_0 };

static const MR_DuPtagLayout transform_hlds__goal_store__transform_hlds__goal_store__du_ptag_ordered_stored_goal_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__goal_store__transform_hlds__goal_store__du_stag_ordered_stored_goal_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__goal_store__transform_hlds__goal_store__du_name_ordered_stored_goal_0[1] = { &transform_hlds__goal_store__transform_hlds__goal_store__du_functor_desc_stored_goal_0_0 };

static const MR_Integer transform_hlds__goal_store__transform_hlds__goal_store__functor_number_map_stored_goal_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__goal_store____Unify____stored_goal_0_0_10001)),
  ((MR_Box) (transform_hlds__goal_store____Compare____stored_goal_0_0_10001)),
  (MR_String) "transform_hlds.goal_store",
  (MR_String) "stored_goal",
  { transform_hlds__goal_store__transform_hlds__goal_store__du_name_ordered_stored_goal_0 },
  { transform_hlds__goal_store__transform_hlds__goal_store__du_ptag_ordered_stored_goal_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__goal_store__transform_hlds__goal_store__functor_number_map_stored_goal_0,

};

void MR_CALL 
transform_hlds__goal_store____Compare____stored_goal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    hlds__hlds_goal____Compare____hlds_goal_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      hlds__instmap____Compare____instmap_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
transform_hlds__goal_store____Unify____stored_goal_0_0(
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
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = hlds__instmap____Unify____instmap_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__goal_store____Compare____goal_store_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__tree234____Compare____tree234_2_0(TypeInfo_for_T_6, (MR_Word) (&transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0), HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
transform_hlds__goal_store____Unify____goal_store_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_T_5, (MR_Word) (&transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
transform_hlds__goal_store__direct_ancestor_6_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__goal_store__direct_ancestor_6_p_0_env_0_s * env_ptr = (struct transform_hlds__goal_store__direct_ancestor_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__Var_18 = ((MR_Word) ((env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__conv1_Var_18));
  transform_hlds__goal_store__direct_ancestor_6_p_0_1(env_ptr);
}

static void MR_CALL 
transform_hlds__goal_store__direct_ancestor_6_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__goal_store__direct_ancestor_6_p_0_env_0_s * env_ptr = (struct transform_hlds__goal_store__direct_ancestor_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierGoal_15 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__Var_18, (MR_Integer) 0))));
  (env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierInstMap_16 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__Var_18, (MR_Integer) 1))));
  (env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__Var_19 = (MR_Integer) 1;
  mercury__builtin__compare_3_p_0((env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__TypeInfo_for_T_20, &(env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__Var_21, *((env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierId_12), (env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__StartId_11);
  (env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__Var_19 == (env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__Var_21);
  if ((env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__succeeded)
  {
    (env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__succeeded = hlds__goal_util__can_reorder_goals_old_7_p_0((env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__ModuleInfo_7, (env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__VarTable_8, (env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__FullyStrict_10, (env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierInstMap_16, (env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierGoal_15, (env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__LaterInstMap_14, (env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__LaterGoal_13);
    (env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__succeeded);
    if ((env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__succeeded)
      ((env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__cont)((env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
transform_hlds__goal_store__direct_ancestor_6_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word ModuleInfo_7,
  MR_Word VarTable_8,
  MR_Word GoalStore_9,
  MR_Word FullyStrict_10,
  MR_Box StartId_11,
  MR_Box * EarlierId_12,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct transform_hlds__goal_store__direct_ancestor_6_p_0_env_0_s env;

  (env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__TypeInfo_for_T_20 = TypeInfo_for_T_20;
  (env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__ModuleInfo_7 = ModuleInfo_7;
  (env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__VarTable_8 = VarTable_8;
  (env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__FullyStrict_10 = FullyStrict_10;
  (env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__StartId_11 = StartId_11;
  (env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierId_12 = EarlierId_12;
  (env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__cont = cont;
  (env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Word Var_17;
    MR_Box conv0_Var_17;

    mercury__map__lookup_3_p_0((env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__TypeInfo_for_T_20, (MR_Word) (&transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0), GoalStore_9, (env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__StartId_11, &conv0_Var_17);
    Var_17 = ((MR_Word) (conv0_Var_17));
    (env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__LaterGoal_13 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
    (env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__LaterInstMap_14 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 1))));
    mercury__map__member_3_p_0((env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__TypeInfo_for_T_20, (MR_Word) (&transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0), GoalStore_9, (env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierId_12, &(env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__conv1_Var_18, transform_hlds__goal_store__direct_ancestor_6_p_0_2, &env);
  }
}

void MR_CALL 
transform_hlds__goal_store__goal_store_all_ancestors_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word ModuleInfo_7,
  MR_Word VarTable_8,
  MR_Word GoalStore_9,
  MR_Word FullyStrict_10,
  MR_Box StartId_11,
  MR_Word * AncestorIds_12)
{
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;

  Var_13 = mercury__set__init_0_f_0(TypeInfo_for_T_17);
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = StartId_11;
    MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_15 = mercury__set__init_0_f_0(TypeInfo_for_T_17);
  transform_hlds__goal_store__ancestors_loop_8_p_0(TypeInfo_for_T_17, ModuleInfo_7, VarTable_8, GoalStore_9, FullyStrict_10, Var_13, Var_14, Var_15, AncestorIds_12);
}

static void MR_CALL 
transform_hlds__goal_store__ancestors_loop_8_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Box closure = closure_arg;

  transform_hlds__goal_store__direct_ancestor_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), (MR_hl_field(0, closure, (MR_Integer) 8)), wrapper_arg_1, cont, cont_env_ptr);
}

static void MR_CALL 
transform_hlds__goal_store__ancestors_loop_8_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word GoalStore_3,
  MR_Word FullyStrict_4,
  MR_Word VisitedIds0_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_AncestorIds_0_7,
  MR_Word * STATE_VARIABLE_AncestorIds_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_AncestorIds_8 = STATE_VARIABLE_AncestorIds_0_7;
    else
    {
      MR_Box Id_22 = (MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0));
      MR_Word Ids_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));

      succeeded = mercury__set__member_2_p_0(TypeInfo_for_T_33, Id_22, VisitedIds0_5);
      if (succeeded)
      {
        MR_Word next_value_of_HeadVar__6_6 = Ids_23;

        // direct tailcall eliminated
        ;
        HeadVar__6_6 = next_value_of_HeadVar__6_6;
        continue;
      }
      else
      {
        MR_Word IdAncestors_25;
        MR_Word VisitedIds_26;
        MR_Word ToProcessIds_27;
        MR_Word Var_31;
        MR_Word STATE_VARIABLE_AncestorIds_32_32;
        MR_Word Var_34;
        MR_Word next_value_of_VisitedIds0_5;
        MR_Word next_value_of_HeadVar__6_6;
        MR_Word next_value_of_STATE_VARIABLE_AncestorIds_0_7;

        {
          Var_34 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_34, 0) = ((MR_Box) (&transform_hlds__goal_store_scalar_common_2[0]));
          MR_hl_field(0, Var_34, 1) = ((MR_Box) (transform_hlds__goal_store__ancestors_loop_8_p_0_1));
          MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 6));
          MR_hl_field(0, Var_34, 3) = ((MR_Box) (TypeInfo_for_T_33));
          MR_hl_field(0, Var_34, 4) = ((MR_Box) (ModuleInfo_1));
          MR_hl_field(0, Var_34, 5) = ((MR_Box) (VarTable_2));
          MR_hl_field(0, Var_34, 6) = ((MR_Box) (GoalStore_3));
          MR_hl_field(0, Var_34, 7) = ((MR_Box) (FullyStrict_4));
          MR_hl_field(0, Var_34, 8) = Id_22;
        }
        mercury__solutions__solutions_set_2_p_1(TypeInfo_for_T_33, Var_34, &IdAncestors_25);
        mercury__set__insert_3_p_0(TypeInfo_for_T_33, Id_22, VisitedIds0_5, &VisitedIds_26);
        Var_31 = mercury__set__to_sorted_list_1_f_0(TypeInfo_for_T_33, IdAncestors_25);
        ToProcessIds_27 = mercury__list__f_43_43_2_f_0(TypeInfo_for_T_33, Var_31, Ids_23);
        mercury__set__union_3_p_0(TypeInfo_for_T_33, IdAncestors_25, STATE_VARIABLE_AncestorIds_0_7, &STATE_VARIABLE_AncestorIds_32_32);
        // direct tailcall eliminated
        ;
        next_value_of_VisitedIds0_5 = VisitedIds_26;
        next_value_of_HeadVar__6_6 = ToProcessIds_27;
        next_value_of_STATE_VARIABLE_AncestorIds_0_7 = STATE_VARIABLE_AncestorIds_32_32;
        VisitedIds0_5 = next_value_of_VisitedIds0_5;
        HeadVar__6_6 = next_value_of_HeadVar__6_6;
        STATE_VARIABLE_AncestorIds_0_7 = next_value_of_STATE_VARIABLE_AncestorIds_0_7;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__goal_store__goal_store_member_3_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__goal_store__goal_store_member_3_p_0_env_0_s * env_ptr = (struct transform_hlds__goal_store__goal_store_member_3_p_0_env_0_s *) (env_ptr_arg);

  *((env_ptr)->transform_hlds__goal_store__goal_store_member_3_p_0_env_0__Goal_6) = ((MR_Word) ((env_ptr)->transform_hlds__goal_store__goal_store_member_3_p_0_env_0__conv0_Goal_6));
  ((env_ptr)->transform_hlds__goal_store__goal_store_member_3_p_0_env_0__cont)((env_ptr)->transform_hlds__goal_store__goal_store_member_3_p_0_env_0__cont_env_ptr);
}

void MR_CALL 
transform_hlds__goal_store__goal_store_member_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word GoalStore_4,
  MR_Box * Key_5,
  MR_Word * Goal_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct transform_hlds__goal_store__goal_store_member_3_p_0_env_0_s env;

  (env).transform_hlds__goal_store__goal_store_member_3_p_0_env_0__Goal_6 = Goal_6;
  (env).transform_hlds__goal_store__goal_store_member_3_p_0_env_0__cont = cont;
  (env).transform_hlds__goal_store__goal_store_member_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
  mercury__map__member_3_p_0(TypeInfo_for_T_7, (MR_Word) (&transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0), GoalStore_4, Key_5, &(env).transform_hlds__goal_store__goal_store_member_3_p_0_env_0__conv0_Goal_6, transform_hlds__goal_store__goal_store_member_3_p_0_1, &env);
}

void MR_CALL 
transform_hlds__goal_store__goal_store_lookup_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word GS_4,
  MR_Box Id_5,
  MR_Word * Goal_6)
{
  MR_Box conv0_Goal_6;

  mercury__map__lookup_3_p_0(TypeInfo_for_T_7, (MR_Word) (&transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0), GS_4, Id_5, &conv0_Goal_6);
  *Goal_6 = ((MR_Word) (conv0_Goal_6));
}

void MR_CALL 
transform_hlds__goal_store__goal_store_det_insert_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box Id_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_GS_0_8,
  MR_Word * STATE_VARIABLE_GS_9)
{
  mercury__map__det_insert_4_p_0(TypeInfo_for_T_10, (MR_Word) (&transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0), Id_5, ((MR_Box) (Goal_6)), STATE_VARIABLE_GS_0_8, STATE_VARIABLE_GS_9);
}

MR_Word MR_CALL 
transform_hlds__goal_store__goal_store_init_0_f_0(
  MR_Word TypeInfo_for_T_3)
{
  MR_Word GS_2;

  mercury__map__init_1_p_0(TypeInfo_for_T_3, (MR_Word) (&transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0), &GS_2);
  return GS_2;
}

void MR_CALL 
transform_hlds__goal_store__goal_store_init_1_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word * GS_2)
{
  mercury__map__init_1_p_0(TypeInfo_for_T_3, (MR_Word) (&transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0), GS_2);
}

static MR_bool MR_CALL 
transform_hlds__goal_store____Unify____goal_store_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = transform_hlds__goal_store____Unify____goal_store_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__goal_store____Compare____goal_store_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__goal_store____Compare____goal_store_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__goal_store____Unify____stored_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__goal_store____Unify____stored_goal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__goal_store____Compare____stored_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__goal_store____Compare____stored_goal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__goal_store__init(void)
{
}

void mercury__transform_hlds__goal_store__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_goal_store_1);
	MR_register_type_ctor_info(&transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0);
}

void mercury__transform_hlds__goal_store__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__goal_store__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.goal_store.
