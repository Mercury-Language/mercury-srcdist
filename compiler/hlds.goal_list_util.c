/*
** Automatically generated from `goal_list_util.m'
** by the Mercury compiler,
** version rotd-2026-09-03
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


// :- module hlds.goal_list_util.
// :- implementation.

/*
INIT mercury__hlds__goal_list_util__init
ENDINIT
*/

#include "hlds.goal_list_util.mih"


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
#include "deconstruct.mih"
#include "enum.mih"
#include "hlds.mih"
#include "io.mih"
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
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_proc_id.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"




static const MR_FA_TypeInfo_Struct1 hlds__goal_list_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_list_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
hlds__goal_list_util__IntroducedFrom__pred__goal_list_purity__256__1_3_p_0(
  MR_Word LambdaHeadVar__1_12,
  MR_Word LambdaHeadVar__2_13,
  MR_Word * LambdaHeadVar__3_14);

static void MR_CALL 
hlds__goal_list_util__IntroducedFrom__pred__goal_list_determinism__247__1_3_p_0(
  MR_Word LambdaHeadVar__1_12,
  MR_Word LambdaHeadVar__2_13,
  MR_Word * LambdaHeadVar__3_14);

static void MR_CALL 
hlds__goal_list_util__IntroducedFrom__pred__goal_list_instmap_delta__237__1_3_p_0(
  MR_Word LambdaHeadVar__1_13,
  MR_Word LambdaHeadVar__2_14,
  MR_Word * LambdaHeadVar__3_15);

static void MR_CALL 
hlds__goal_list_util__goal_list_purity_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__goal_list_util__goal_list_determinism_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__goal_list_util__goal_list_instmap_delta_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
hlds__goal_list_util__goal_list_nonlocals_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__goal_list_util__create_conj_from_list_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__goal_list_util__create_conj_from_list_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__goal_list_util__create_conj_from_list_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
hlds__goal_list_util__create_conj_from_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box hlds__goal_list_util_scalar_common_1[1][2];

static /* final */ const MR_Box hlds__goal_list_util_scalar_common_2[1][5];

static /* final */ const MR_Box hlds__goal_list_util_scalar_common_3[8][3];

static /* final */ const MR_Box hlds__goal_list_util_scalar_common_4[3][6];




static /* final */ const MR_Box hlds__goal_list_util_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__goal_list_util_scalar_common_2[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__goal_list_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__goal_list_util_scalar_common_3[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&hlds__goal_list_util_scalar_common_2[0])),
    ((MR_Box) (hlds__goal_list_util__create_conj_from_list_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__goal_list_util_scalar_common_4[0])),
    ((MR_Box) (hlds__goal_list_util__create_conj_from_list_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__goal_list_util_scalar_common_4[1])),
    ((MR_Box) (hlds__goal_list_util__create_conj_from_list_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__goal_list_util_scalar_common_4[2])),
    ((MR_Box) (hlds__goal_list_util__create_conj_from_list_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__goal_list_util_scalar_common_2[0])),
    ((MR_Box) (hlds__goal_list_util__goal_list_nonlocals_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__goal_list_util_scalar_common_4[0])),
    ((MR_Box) (hlds__goal_list_util__goal_list_instmap_delta_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__goal_list_util_scalar_common_4[1])),
    ((MR_Box) (hlds__goal_list_util__goal_list_determinism_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__goal_list_util_scalar_common_4[2])),
    ((MR_Box) (hlds__goal_list_util__goal_list_purity_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__goal_list_util_scalar_common_4[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 hlds__goal_list_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_list_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&hlds__goal_list_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static void MR_CALL 
hlds__goal_list_util__IntroducedFrom__pred__goal_list_purity__256__1_3_p_0(
  MR_Word LambdaHeadVar__1_12,
  MR_Word LambdaHeadVar__2_13,
  MR_Word * LambdaHeadVar__3_14)
{
  MR_Word GoalInfo_10 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_12, 1))));
  MR_Word Purity1_11;

  Purity1_11 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_10);
  *LambdaHeadVar__3_14 = parse_tree__prog_data__worst_purity_2_f_0(LambdaHeadVar__2_13, Purity1_11);
}

static void MR_CALL 
hlds__goal_list_util__IntroducedFrom__pred__goal_list_determinism__247__1_3_p_0(
  MR_Word LambdaHeadVar__1_12,
  MR_Word LambdaHeadVar__2_13,
  MR_Word * LambdaHeadVar__3_14)
{
  MR_Word GoalInfo_10 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_12, 1))));
  MR_Word Det1_11;

  Det1_11 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_10);
  parse_tree__prog_detism__det_conjunction_detism_3_p_0(LambdaHeadVar__2_13, Det1_11, LambdaHeadVar__3_14);
}

static void MR_CALL 
hlds__goal_list_util__IntroducedFrom__pred__goal_list_instmap_delta__237__1_3_p_0(
  MR_Word LambdaHeadVar__1_13,
  MR_Word LambdaHeadVar__2_14,
  MR_Word * LambdaHeadVar__3_15)
{
  MR_Word GoalInfo_10 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_13, 1))));
  MR_Word Delta1_11;

  Delta1_11 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_10);
  hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(LambdaHeadVar__2_14, Delta1_11, (MR_Integer) 2, LambdaHeadVar__3_15);
}

static void MR_CALL 
hlds__goal_list_util__goal_list_purity_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_14;

  hlds__goal_list_util__IntroducedFrom__pred__goal_list_purity__256__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_14));
}

void MR_CALL 
hlds__goal_list_util__goal_list_purity_2_p_0(
  MR_Word Goals_3,
  MR_Word * GoalsPurity_4)
{
  MR_Box conv1_GoalsPurity_4;

  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0), (MR_Word) (&hlds__goal_list_util_scalar_common_3[7]), Goals_3, ((MR_Box) ((MR_Integer) 0)), &conv1_GoalsPurity_4);
  *GoalsPurity_4 = ((MR_Word) (conv1_GoalsPurity_4));
}

static void MR_CALL 
hlds__goal_list_util__goal_list_determinism_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_14;

  hlds__goal_list_util__IntroducedFrom__pred__goal_list_determinism__247__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_14));
}

void MR_CALL 
hlds__goal_list_util__goal_list_determinism_2_p_0(
  MR_Word Goals_3,
  MR_Word * Determinism_4)
{
  MR_Box conv1_Determinism_4;

  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), (MR_Word) (&hlds__goal_list_util_scalar_common_3[6]), Goals_3, ((MR_Box) ((MR_Integer) 0)), &conv1_Determinism_4);
  *Determinism_4 = ((MR_Word) (conv1_Determinism_4));
}

static void MR_CALL 
hlds__goal_list_util__goal_list_instmap_delta_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_15;

  hlds__goal_list_util__IntroducedFrom__pred__goal_list_instmap_delta__237__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_15));
}

void MR_CALL 
hlds__goal_list_util__goal_list_instmap_delta_2_p_0(
  MR_Word Goals_3,
  MR_Word * InstMapDelta_4)
{
  MR_Word InstMapDelta0_12;
  MR_Box conv1_InstMapDelta_4;

  hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstMapDelta0_12);
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), (MR_Word) (&hlds__goal_list_util_scalar_common_3[5]), Goals_3, ((MR_Box) (InstMapDelta0_12)), &conv1_InstMapDelta_4);
  *InstMapDelta_4 = ((MR_Word) (conv1_InstMapDelta_4));
}

static MR_Box MR_CALL 
hlds__goal_list_util__goal_list_nonlocals_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
hlds__goal_list_util__goal_list_nonlocals_2_p_0(
  MR_Word Goals_3,
  MR_Word * NonLocals_4)
{
  MR_Word GoalNonLocals_5;

  GoalNonLocals_5 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__goal_list_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_list_util_scalar_common_3[4]), Goals_3);
  parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalNonLocals_5, NonLocals_4);
}

void MR_CALL 
hlds__goal_list_util__create_conj_4_p_0(
  MR_Word GoalA_5,
  MR_Word GoalB_6,
  MR_Word Type_7,
  MR_Word * ConjGoal_8)
{
  MR_Word Var_9;
  MR_Word Var_10;

  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (GoalB_6));
    MR_hl_field(1, Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (GoalA_5));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) (Var_10));
  }
  hlds__goal_list_util__create_conj_from_list_3_p_0(Var_9, Type_7, ConjGoal_8);
}

static void MR_CALL 
hlds__goal_list_util__create_conj_from_list_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_LambdaHeadVar__3_14;

  hlds__goal_list_util__IntroducedFrom__pred__goal_list_purity__256__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_LambdaHeadVar__3_14);
  *wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_14));
}

static void MR_CALL 
hlds__goal_list_util__create_conj_from_list_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_LambdaHeadVar__3_14;

  hlds__goal_list_util__IntroducedFrom__pred__goal_list_determinism__247__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_LambdaHeadVar__3_14);
  *wrapper_arg_3 = ((MR_Box) (conv3_LambdaHeadVar__3_14));
}

static void MR_CALL 
hlds__goal_list_util__create_conj_from_list_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__3_15;

  hlds__goal_list_util__IntroducedFrom__pred__goal_list_instmap_delta__237__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_15);
  *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_15));
}

static MR_Box MR_CALL 
hlds__goal_list_util__create_conj_from_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
hlds__goal_list_util__create_conj_from_list_3_p_0(
  MR_Word Conjuncts_4,
  MR_Word ConjType_5,
  MR_Word * ConjGoal_6)
{
  if ((Conjuncts_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_list_util.create_conj_from_list\'/3", (MR_String) "empty conjunction");
      return;
    }
  else
  {
    MR_Word HeadGoal_7 = ((MR_Word) ((MR_hl_field(1, Conjuncts_4, 0))));
    MR_Word TailGoals_8 = ((MR_Word) ((MR_hl_field(1, Conjuncts_4, 1))));

    if ((TailGoals_8 == (MR_Word) ((MR_Unsigned) 0U)))
      *ConjGoal_6 = HeadGoal_7;
    else
    {
      MR_Word ConjGoalExpr_11;
      MR_Word NonLocals_12;
      MR_Word InstMapDelta_13;
      MR_Word Detism_14;
      MR_Word Purity_15;
      MR_Word HeadGoalInfo_17;
      MR_Word Context_18;
      MR_Word ConjGoalInfo_19;
      MR_Word GoalNonLocals_22;
      MR_Word InstMapDelta0_28;
      MR_Box conv2_InstMapDelta_13;
      MR_Box conv4_Detism_14;
      MR_Box conv6_Purity_15;

      {
        ConjGoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ConjGoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, ConjGoalExpr_11, 1) = (MR_Box) ((MR_Unsigned) (ConjType_5));
        MR_hl_field(3, ConjGoalExpr_11, 2) = ((MR_Box) (Conjuncts_4));
      }
      GoalNonLocals_22 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__goal_list_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_list_util_scalar_common_3[0]), Conjuncts_4);
      parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalNonLocals_22, &NonLocals_12);
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstMapDelta0_28);
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), (MR_Word) (&hlds__goal_list_util_scalar_common_3[1]), Conjuncts_4, ((MR_Box) (InstMapDelta0_28)), &conv2_InstMapDelta_13);
      InstMapDelta_13 = ((MR_Word) (conv2_InstMapDelta_13));
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), (MR_Word) (&hlds__goal_list_util_scalar_common_3[2]), Conjuncts_4, ((MR_Box) ((MR_Integer) 0)), &conv4_Detism_14);
      Detism_14 = ((MR_Word) (conv4_Detism_14));
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0), (MR_Word) (&hlds__goal_list_util_scalar_common_3[3]), Conjuncts_4, ((MR_Box) ((MR_Integer) 0)), &conv6_Purity_15);
      Purity_15 = ((MR_Word) (conv6_Purity_15));
      HeadGoalInfo_17 = ((MR_Word) ((MR_hl_field(0, HeadGoal_7, 1))));
      Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(HeadGoalInfo_17);
      hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_12, InstMapDelta_13, Detism_14, Purity_15, Context_18, &ConjGoalInfo_19);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *ConjGoal_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (ConjGoalExpr_11));
        MR_hl_field(0, base, 1) = ((MR_Box) (ConjGoalInfo_19));
      }
    }
  }
}

void MR_CALL 
hlds__goal_list_util__conjoin_goals_3_p_0(
  MR_Word Goal1_4,
  MR_Word Goal2_5,
  MR_Word * Goal_6)
{
  MR_bool succeeded;
  MR_Word GoalList_9;
  MR_Word Goals2_7;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, Goal2_5, 0))));
  MR_Word Var_11;

  succeeded = ((((MR_tag((MR_Word) Var_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_10, 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_11 = ((MR_Unsigned) ((MR_hl_field(3, Var_10, 1))) & (MR_Integer) 1);
    Goals2_7 = ((MR_Word) ((MR_hl_field(3, Var_10, 2))));
    succeeded = (Var_11 == (MR_Integer) 0);
  }
  if (succeeded)
    GoalList_9 = Goals2_7;
  else
    {
      GoalList_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GoalList_9, 0) = ((MR_Box) (Goal2_5));
      MR_hl_field(1, GoalList_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  hlds__goal_list_util__conjoin_goal_and_goal_list_3_p_0(Goal1_4, GoalList_9, Goal_6);
}

void MR_CALL 
hlds__goal_list_util__conjoin_goal_and_goal_list_3_p_0(
  MR_Word Goal0_4,
  MR_Word Goals_5,
  MR_Word * Goal_6)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_7 = ((MR_Word) ((MR_hl_field(0, Goal0_4, 0))));
  MR_Word GoalInfo0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_4, 1))));
  MR_Word GoalExpr_11;
  MR_Word GoalList0_9;
  MR_Word Var_12;

  succeeded = ((((MR_tag((MR_Word) GoalExpr0_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr0_7, 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_12 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_7, 1))) & (MR_Integer) 1);
    GoalList0_9 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, 2))));
    succeeded = (Var_12 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    MR_Word GoalList_10;

    GoalList_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalList0_9, Goals_5);
    {
      GoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, GoalExpr_11, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, GoalExpr_11, 2) = ((MR_Box) (GoalList_10));
    }
  }
  else
  {
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_15, 0) = ((MR_Box) (Goal0_4));
      MR_hl_field(1, Var_15, 1) = ((MR_Box) (Goals_5));
    }
    {
      GoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, GoalExpr_11, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, GoalExpr_11, 2) = ((MR_Box) (Var_15));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_8));
  }
}

void MR_CALL 
hlds__goal_list_util__disj_list_to_goal_3_p_0(
  MR_Word DisjList_4,
  MR_Word GoalInfo_5,
  MR_Word * Goal_6)
{
  MR_bool succeeded = (DisjList_4 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Goal0_7;
  MR_Word Var_8;

  if (succeeded)
  {
    Goal0_7 = ((MR_Word) ((MR_hl_field(1, DisjList_4, 0))));
    Var_8 = ((MR_Word) ((MR_hl_field(1, DisjList_4, 1))));
    succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
    *Goal_6 = Goal0_7;
  else
  {
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_9, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_9, 1) = ((MR_Box) (DisjList_4));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_5));
    }
  }
}

void MR_CALL 
hlds__goal_list_util__par_conj_list_to_goal_3_p_0(
  MR_Word ConjList_4,
  MR_Word GoalInfo_5,
  MR_Word * Goal_6)
{
  MR_bool succeeded = (ConjList_4 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Goal0_7;
  MR_Word Var_8;

  if (succeeded)
  {
    Goal0_7 = ((MR_Word) ((MR_hl_field(1, ConjList_4, 0))));
    Var_8 = ((MR_Word) ((MR_hl_field(1, ConjList_4, 1))));
    succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
    *Goal_6 = Goal0_7;
  else
  {
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_9, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, Var_9, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, Var_9, 2) = ((MR_Box) (ConjList_4));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_5));
    }
  }
}

void MR_CALL 
hlds__goal_list_util__conj_list_to_goal_3_p_0(
  MR_Word ConjList_4,
  MR_Word GoalInfo_5,
  MR_Word * Goal_6)
{
  MR_bool succeeded = (ConjList_4 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Goal0_7;
  MR_Word Var_8;

  if (succeeded)
  {
    Goal0_7 = ((MR_Word) ((MR_hl_field(1, ConjList_4, 0))));
    Var_8 = ((MR_Word) ((MR_hl_field(1, ConjList_4, 1))));
    succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
    *Goal_6 = Goal0_7;
  else
  {
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_9, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, Var_9, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, Var_9, 2) = ((MR_Box) (ConjList_4));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_5));
    }
  }
}

void MR_CALL 
hlds__goal_list_util__goal_to_disj_list_2_p_0(
  MR_Word Goal_3,
  MR_Word * DisjList_4)
{
  MR_bool succeeded;
  MR_Word List_5;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, Goal_3, 0))));

  succeeded = ((((MR_tag((MR_Word) Var_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_7, 0)))) == (MR_Integer) 3)));
  if (succeeded)
  {
    List_5 = ((MR_Word) ((MR_hl_field(3, Var_7, 1))));
    *DisjList_4 = List_5;
  }
  else
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *DisjList_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_3));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
}

void MR_CALL 
hlds__goal_list_util__goal_to_par_conj_list_2_p_0(
  MR_Word Goal_3,
  MR_Word * ConjList_4)
{
  MR_bool succeeded;
  MR_Word List_5;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, Goal_3, 0))));
  MR_Word Var_8;

  succeeded = ((((MR_tag((MR_Word) Var_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_7, 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_8 = ((MR_Unsigned) ((MR_hl_field(3, Var_7, 1))) & (MR_Integer) 1);
    List_5 = ((MR_Word) ((MR_hl_field(3, Var_7, 2))));
    succeeded = (Var_8 == (MR_Integer) 1);
  }
  if (succeeded)
    *ConjList_4 = List_5;
  else
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ConjList_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_3));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
}

void MR_CALL 
hlds__goal_list_util__goal_to_conj_list_2_p_0(
  MR_Word Goal_3,
  MR_Word * ConjList_4)
{
  MR_bool succeeded;
  MR_Word List_5;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, Goal_3, 0))));
  MR_Word Var_8;

  succeeded = ((((MR_tag((MR_Word) Var_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_7, 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_8 = ((MR_Unsigned) ((MR_hl_field(3, Var_7, 1))) & (MR_Integer) 1);
    List_5 = ((MR_Word) ((MR_hl_field(3, Var_7, 2))));
    succeeded = (Var_8 == (MR_Integer) 0);
  }
  if (succeeded)
    *ConjList_4 = List_5;
  else
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ConjList_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_3));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
}

MR_Word MR_CALL 
hlds__goal_list_util__get_hlds_goal_info_1_f_0(
  MR_Word Goal_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, Goal_3, 1))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
hlds__goal_list_util__get_hlds_goal_expr_1_f_0(
  MR_Word Goal_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, Goal_3, 0))));

  return HeadVar__2_2;
}

void mercury__hlds__goal_list_util__init(void)
{
}

void mercury__hlds__goal_list_util__init_type_tables(void)
{
}

void mercury__hlds__goal_list_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__goal_list_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.goal_list_util.
