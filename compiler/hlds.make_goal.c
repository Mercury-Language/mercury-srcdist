/*
** Automatically generated from `make_goal.m'
** by the Mercury compiler,
** version rotd-2021-10-13
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


// :- module hlds.make_goal.
// :- implementation.

/*
INIT mercury__hlds__make_goal__init
ENDINIT
*/

#include "hlds.make_goal.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "enum.mih"
#include "hlds.mih"
#include "integer.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "term.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"





static /* final */ const MR_Box hlds__make_goal_scalar_common_1[3][2];

static /* final */ const MR_Box hlds__make_goal_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__make_goal_scalar_common_3[4][4];




static /* final */ const MR_Box hlds__make_goal_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_goal_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_goal_scalar_common_3[4][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (&hlds__make_goal_scalar_common_3[0])),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_2[1])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_2[1])))
  },
};



#include "array.mh"



void MR_CALL 
hlds__make_goal__deconstruct_tuple_3_p_0(
  MR_Word Tuple_4,
  MR_Word Args_5,
  MR_Word * Goal_6)
{
  {
    MR_Integer Arity_7;
    MR_Word ConsId_8;

    mercury__list__length_2_p_0((MR_Word) (&hlds__make_goal_scalar_common_1[0]), Args_5, &Arity_7);
    {
      ConsId_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_8, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), ConsId_8, 1) = ((MR_Box) (Arity_7));
    }
    hlds__make_goal__deconstruct_functor_4_p_0(Tuple_4, ConsId_8, Args_5, Goal_6);
  }
}

void MR_CALL 
hlds__make_goal__construct_tuple_3_p_0(
  MR_Word Tuple_4,
  MR_Word Args_5,
  MR_Word * Goal_6)
{
  {
    MR_Integer Arity_7;
    MR_Word ConsId_8;

    mercury__list__length_2_p_0((MR_Word) (&hlds__make_goal_scalar_common_1[0]), Args_5, &Arity_7);
    {
      ConsId_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_8, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), ConsId_8, 1) = ((MR_Box) (Arity_7));
    }
    hlds__make_goal__construct_functor_4_p_0(Tuple_4, ConsId_8, Args_5, Goal_6);
  }
}

void MR_CALL 
hlds__make_goal__deconstruct_functor_4_p_0(
  MR_Word Var_5,
  MR_Word ConsId_6,
  MR_Word Args_7,
  MR_Word * Goal_8)
{
  {
    MR_Integer Arity_9;
    MR_Word RHS_10;
    MR_Word UnifyMode_11;
    MR_Word ArgModes_12;
    MR_Word Unification_14;
    MR_Word Unify_15;
    MR_Word NonLocals_16;
    MR_Word InstMapDelta_17;
    MR_Word GoalInfo_18;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_28;

    mercury__list__length_2_p_0((MR_Word) (&hlds__make_goal_scalar_common_1[0]), Args_7, &Arity_9);
    {
      RHS_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RHS_10, 0) = ((MR_Box) (ConsId_6));
      MR_hl_field(MR_mktag(1), RHS_10, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), RHS_10, 2) = ((MR_Box) (Args_7));
    }
    Var_20 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_21 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_22 = parse_tree__prog_mode__free_inst_0_f_0();
    Var_23 = parse_tree__prog_mode__ground_inst_0_f_0();
    {
      UnifyMode_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyMode_11, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), UnifyMode_11, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), UnifyMode_11, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), UnifyMode_11, 3) = ((MR_Box) (Var_23));
    }
    mercury__list__duplicate_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), Arity_9, ((MR_Box) (UnifyMode_11)), &ArgModes_12);
    {
      Unification_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Unification_14, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), Unification_14, 1) = ((MR_Box) (ConsId_6));
      MR_hl_field(MR_mktag(1), Unification_14, 2) = ((MR_Box) (Args_7));
      MR_hl_field(MR_mktag(1), Unification_14, 3) = ((MR_Box) (ArgModes_12));
      MR_hl_field(MR_mktag(1), Unification_14, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
    }
    {
      Unify_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Unify_15, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), Unify_15, 1) = ((MR_Box) (RHS_10));
      MR_hl_field(MR_mktag(1), Unify_15, 2) = ((MR_Box) (UnifyMode_11));
      MR_hl_field(MR_mktag(1), Unify_15, 3) = ((MR_Box) (Unification_14));
      MR_hl_field(MR_mktag(1), Unify_15, 4) = ((MR_Box) (&hlds__make_goal_scalar_common_1[2]));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Args_7));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_28, &NonLocals_16);
    InstMapDelta_17 = hlds__instmap__instmap_delta_bind_vars_1_f_0(Args_7);
    hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_16, InstMapDelta_17, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_18);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Unify_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_18));
    }
  }
}

void MR_CALL 
hlds__make_goal__construct_functor_4_p_0(
  MR_Word Var_5,
  MR_Word ConsId_6,
  MR_Word Args_7,
  MR_Word * Goal_8)
{
  {
    MR_Integer Arity_9;
    MR_Word RHS_10;
    MR_Word UnifyMode_11;
    MR_Word ArgModes_12;
    MR_Word Unification_13;
    MR_Word Unify_15;
    MR_Word NonLocals_16;
    MR_Word InstMapDelta_17;
    MR_Word GoalInfo_18;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_29;

    mercury__list__length_2_p_0((MR_Word) (&hlds__make_goal_scalar_common_1[0]), Args_7, &Arity_9);
    {
      RHS_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RHS_10, 0) = ((MR_Box) (ConsId_6));
      MR_hl_field(MR_mktag(1), RHS_10, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), RHS_10, 2) = ((MR_Box) (Args_7));
    }
    Var_20 = parse_tree__prog_mode__free_inst_0_f_0();
    Var_21 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_22 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_23 = parse_tree__prog_mode__ground_inst_0_f_0();
    {
      UnifyMode_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyMode_11, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), UnifyMode_11, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), UnifyMode_11, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), UnifyMode_11, 3) = ((MR_Box) (Var_23));
    }
    mercury__list__duplicate_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), Arity_9, ((MR_Box) (UnifyMode_11)), &ArgModes_12);
    {
      Unification_13 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Unification_13, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), Unification_13, 1) = ((MR_Box) (ConsId_6));
      MR_hl_field(MR_mktag(0), Unification_13, 2) = ((MR_Box) (Args_7));
      MR_hl_field(MR_mktag(0), Unification_13, 3) = ((MR_Box) (ArgModes_12));
      MR_hl_field(MR_mktag(0), Unification_13, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_13, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Unification_13, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Unify_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Unify_15, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), Unify_15, 1) = ((MR_Box) (RHS_10));
      MR_hl_field(MR_mktag(1), Unify_15, 2) = ((MR_Box) (UnifyMode_11));
      MR_hl_field(MR_mktag(1), Unify_15, 3) = ((MR_Box) (Unification_13));
      MR_hl_field(MR_mktag(1), Unify_15, 4) = ((MR_Box) (&hlds__make_goal_scalar_common_1[2]));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Args_7));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_29, &NonLocals_16);
    InstMapDelta_17 = hlds__instmap__instmap_delta_bind_var_1_f_0(Var_5);
    hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_16, InstMapDelta_17, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_18);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Unify_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_18));
    }
  }
}

void MR_CALL 
hlds__make_goal__make_const_construction_alloc_9_p_0(
  MR_Word ConsId_10,
  MR_Word Type_11,
  MR_Word MaybeName_12,
  MR_Word * Goal_13,
  MR_Word * Var_14,
  MR_Word STATE_VARIABLE_VarSet_0_17,
  MR_Word * STATE_VARIABLE_VarSet_18,
  MR_Word STATE_VARIABLE_VarTypes_0_19,
  MR_Word * STATE_VARIABLE_VarTypes_20)
{
  {
    MR_Word Var_23;

    mercury__varset__new_maybe_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MaybeName_12, Var_14, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
    hlds__vartypes__add_var_type_4_p_0(*Var_14, Type_11, STATE_VARIABLE_VarTypes_0_19, STATE_VARIABLE_VarTypes_20);
    Var_23 = mercury__term__context_init_0_f_0();
    hlds__make_goal__make_const_construction_4_p_0(Var_23, *Var_14, ConsId_10, Goal_13);
  }
}

void MR_CALL 
hlds__make_goal__make_char_const_construction_alloc_8_p_0(
  MR_Char Char_9,
  MR_Word MaybeName_10,
  MR_Word * Goal_11,
  MR_Word * Var_12,
  MR_Word STATE_VARIABLE_VarSet_0_15,
  MR_Word * STATE_VARIABLE_VarSet_16,
  MR_Word STATE_VARIABLE_VarTypes_0_17,
  MR_Word * STATE_VARIABLE_VarTypes_18)
{
  {
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_28;

    mercury__varset__new_maybe_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MaybeName_10, Var_12, STATE_VARIABLE_VarSet_0_15, STATE_VARIABLE_VarSet_16);
    Var_20 = parse_tree__builtin_lib_types__char_type_0_f_0();
    hlds__vartypes__add_var_type_4_p_0(*Var_12, Var_20, STATE_VARIABLE_VarTypes_0_17, STATE_VARIABLE_VarTypes_18);
    Var_22 = mercury__term__context_init_0_f_0();
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (MR_Word) (Char_9));
    }
    hlds__make_goal__make_const_construction_4_p_0(Var_22, *Var_12, Var_28, Goal_11);
  }
}

void MR_CALL 
hlds__make_goal__make_float_const_construction_alloc_8_p_0(
  MR_Float Float_9,
  MR_Word MaybeName_10,
  MR_Word * Goal_11,
  MR_Word * Var_12,
  MR_Word STATE_VARIABLE_VarSet_0_15,
  MR_Word * STATE_VARIABLE_VarSet_16,
  MR_Word STATE_VARIABLE_VarTypes_0_17,
  MR_Word * STATE_VARIABLE_VarTypes_18)
{
  {
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_28;

    mercury__varset__new_maybe_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MaybeName_10, Var_12, STATE_VARIABLE_VarSet_0_15, STATE_VARIABLE_VarSet_16);
    Var_20 = parse_tree__builtin_lib_types__float_type_0_f_0();
    hlds__vartypes__add_var_type_4_p_0(*Var_12, Var_20, STATE_VARIABLE_VarTypes_0_17, STATE_VARIABLE_VarTypes_18);
    Var_22 = mercury__term__context_init_0_f_0();
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_28, 1) = MR_box_float(Float_9);
    }
    hlds__make_goal__make_const_construction_4_p_0(Var_22, *Var_12, Var_28, Goal_11);
  }
}

void MR_CALL 
hlds__make_goal__make_string_const_construction_alloc_8_p_0(
  MR_String String_9,
  MR_Word MaybeName_10,
  MR_Word * Goal_11,
  MR_Word * Var_12,
  MR_Word STATE_VARIABLE_VarSet_0_15,
  MR_Word * STATE_VARIABLE_VarSet_16,
  MR_Word STATE_VARIABLE_VarTypes_0_17,
  MR_Word * STATE_VARIABLE_VarTypes_18)
{
  {
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_28;

    mercury__varset__new_maybe_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MaybeName_10, Var_12, STATE_VARIABLE_VarSet_0_15, STATE_VARIABLE_VarSet_16);
    Var_20 = parse_tree__builtin_lib_types__string_type_0_f_0();
    hlds__vartypes__add_var_type_4_p_0(*Var_12, Var_20, STATE_VARIABLE_VarTypes_0_17, STATE_VARIABLE_VarTypes_18);
    Var_22 = mercury__term__context_init_0_f_0();
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (String_9));
    }
    hlds__make_goal__make_const_construction_4_p_0(Var_22, *Var_12, Var_28, Goal_11);
  }
}

void MR_CALL 
hlds__make_goal__make_int_const_construction_alloc_8_p_0(
  MR_Integer Int_9,
  MR_Word MaybeName_10,
  MR_Word * Goal_11,
  MR_Word * Var_12,
  MR_Word STATE_VARIABLE_VarSet_0_15,
  MR_Word * STATE_VARIABLE_VarSet_16,
  MR_Word STATE_VARIABLE_VarTypes_0_17,
  MR_Word * STATE_VARIABLE_VarTypes_18)
{
  {
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word ConsId_28;
    MR_Word Var_29;

    mercury__varset__new_maybe_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MaybeName_10, Var_12, STATE_VARIABLE_VarSet_0_15, STATE_VARIABLE_VarSet_16);
    Var_20 = parse_tree__builtin_lib_types__int_type_0_f_0();
    hlds__vartypes__add_var_type_4_p_0(*Var_12, Var_20, STATE_VARIABLE_VarTypes_0_17, STATE_VARIABLE_VarTypes_18);
    Var_22 = mercury__term__context_init_0_f_0();
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (Int_9));
    }
    {
      ConsId_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_28, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), ConsId_28, 1) = ((MR_Box) (Var_29));
    }
    hlds__make_goal__make_const_construction_4_p_0(Var_22, *Var_12, ConsId_28, Goal_11);
  }
}

void MR_CALL 
hlds__make_goal__make_const_construction_alloc_in_proc_7_p_0(
  MR_Word ConsId_8,
  MR_Word Type_9,
  MR_Word MaybeName_10,
  MR_Word * Goal_11,
  MR_Word * Var_12,
  MR_Word STATE_VARIABLE_ProcInfo_0_14,
  MR_Word * STATE_VARIABLE_ProcInfo_15)
{
  {
    MR_Word Var_17;

    hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(Type_9, MaybeName_10, Var_12, STATE_VARIABLE_ProcInfo_0_14, STATE_VARIABLE_ProcInfo_15);
    Var_17 = mercury__term__context_init_0_f_0();
    hlds__make_goal__make_const_construction_4_p_0(Var_17, *Var_12, ConsId_8, Goal_11);
  }
}

void MR_CALL 
hlds__make_goal__make_char_const_construction_alloc_in_proc_6_p_0(
  MR_Char Char_7,
  MR_Word MaybeName_8,
  MR_Word * Goal_9,
  MR_Word * Var_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_12,
  MR_Word * STATE_VARIABLE_ProcInfo_13)
{
  {
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Word Var_21;

    Var_14 = parse_tree__builtin_lib_types__char_type_0_f_0();
    hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(Var_14, MaybeName_8, Var_10, STATE_VARIABLE_ProcInfo_0_12, STATE_VARIABLE_ProcInfo_13);
    Var_16 = mercury__term__context_init_0_f_0();
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (MR_Word) (Char_7));
    }
    hlds__make_goal__make_const_construction_4_p_0(Var_16, *Var_10, Var_21, Goal_9);
  }
}

void MR_CALL 
hlds__make_goal__make_float_const_construction_alloc_in_proc_6_p_0(
  MR_Float Float_7,
  MR_Word MaybeName_8,
  MR_Word * Goal_9,
  MR_Word * Var_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_12,
  MR_Word * STATE_VARIABLE_ProcInfo_13)
{
  {
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Word Var_21;

    Var_14 = parse_tree__builtin_lib_types__float_type_0_f_0();
    hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(Var_14, MaybeName_8, Var_10, STATE_VARIABLE_ProcInfo_0_12, STATE_VARIABLE_ProcInfo_13);
    Var_16 = mercury__term__context_init_0_f_0();
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_21, 1) = MR_box_float(Float_7);
    }
    hlds__make_goal__make_const_construction_4_p_0(Var_16, *Var_10, Var_21, Goal_9);
  }
}

void MR_CALL 
hlds__make_goal__make_string_const_construction_alloc_in_proc_6_p_0(
  MR_String String_7,
  MR_Word MaybeName_8,
  MR_Word * Goal_9,
  MR_Word * Var_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_12,
  MR_Word * STATE_VARIABLE_ProcInfo_13)
{
  {
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Word Var_21;

    Var_14 = parse_tree__builtin_lib_types__string_type_0_f_0();
    hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(Var_14, MaybeName_8, Var_10, STATE_VARIABLE_ProcInfo_0_12, STATE_VARIABLE_ProcInfo_13);
    Var_16 = mercury__term__context_init_0_f_0();
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (String_7));
    }
    hlds__make_goal__make_const_construction_4_p_0(Var_16, *Var_10, Var_21, Goal_9);
  }
}

void MR_CALL 
hlds__make_goal__make_int_const_construction_alloc_in_proc_6_p_0(
  MR_Integer Int_7,
  MR_Word MaybeName_8,
  MR_Word * Goal_9,
  MR_Word * Var_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_12,
  MR_Word * STATE_VARIABLE_ProcInfo_13)
{
  {
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Word ConsId_21;
    MR_Word Var_22;

    Var_14 = parse_tree__builtin_lib_types__int_type_0_f_0();
    hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(Var_14, MaybeName_8, Var_10, STATE_VARIABLE_ProcInfo_0_12, STATE_VARIABLE_ProcInfo_13);
    Var_16 = mercury__term__context_init_0_f_0();
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (Int_7));
    }
    {
      ConsId_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_21, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), ConsId_21, 1) = ((MR_Box) (Var_22));
    }
    hlds__make_goal__make_const_construction_4_p_0(Var_16, *Var_10, ConsId_21, Goal_9);
  }
}

void MR_CALL 
hlds__make_goal__make_char_const_construction_4_p_0(
  MR_Word Context_5,
  MR_Word Var_6,
  MR_Char Char_7,
  MR_Word * Goal_8)
{
  {
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_9, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_9, 1) = ((MR_Box) (MR_Word) (Char_7));
    }
    hlds__make_goal__make_const_construction_4_p_0(Context_5, Var_6, Var_9, Goal_8);
  }
}

void MR_CALL 
hlds__make_goal__make_float_const_construction_4_p_0(
  MR_Word Context_5,
  MR_Word Var_6,
  MR_Float Float_7,
  MR_Word * Goal_8)
{
  {
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_9, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_9, 1) = MR_box_float(Float_7);
    }
    hlds__make_goal__make_const_construction_4_p_0(Context_5, Var_6, Var_9, Goal_8);
  }
}

void MR_CALL 
hlds__make_goal__make_string_const_construction_4_p_0(
  MR_Word Context_5,
  MR_Word Var_6,
  MR_String String_7,
  MR_Word * Goal_8)
{
  {
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_9, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_9, 1) = ((MR_Box) (String_7));
    }
    hlds__make_goal__make_const_construction_4_p_0(Context_5, Var_6, Var_9, Goal_8);
  }
}

void MR_CALL 
hlds__make_goal__make_int_const_construction_4_p_0(
  MR_Word Context_5,
  MR_Word Var_6,
  MR_Integer Int_7,
  MR_Word * Goal_8)
{
  {
    MR_Word ConsId_9;
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Int_7));
    }
    {
      ConsId_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_9, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), ConsId_9, 1) = ((MR_Box) (Var_10));
    }
    hlds__make_goal__make_const_construction_4_p_0(Context_5, Var_6, ConsId_9, Goal_8);
  }
}

void MR_CALL 
hlds__make_goal__make_const_construction_4_p_0(
  MR_Word Context_5,
  MR_Word Var_6,
  MR_Word ConsId_7,
  MR_Word * Goal_8)
{
  {
    MR_Word RHS_9;
    MR_Word Inst_10;
    MR_Word UnifyMode_11;
    MR_Word Unification_12;
    MR_Word GoalExpr_14;
    MR_Word NonLocals_15;
    MR_Word InstMapDelta0_16;
    MR_Word InstMapDelta_17;
    MR_Word GoalInfo_18;
    MR_Word Var_23;
    MR_Word Var_24;

    {
      RHS_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RHS_9, 0) = ((MR_Box) (ConsId_7));
      MR_hl_field(MR_mktag(1), RHS_9, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), RHS_9, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (ConsId_7));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Inst_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Inst_10, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Inst_10, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Inst_10, 2) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Inst_10, 3) = ((MR_Box) (Var_23));
    }
    {
      UnifyMode_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyMode_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), UnifyMode_11, 1) = ((MR_Box) (Inst_10));
      MR_hl_field(MR_mktag(0), UnifyMode_11, 2) = ((MR_Box) (Inst_10));
      MR_hl_field(MR_mktag(0), UnifyMode_11, 3) = ((MR_Box) (Inst_10));
    }
    {
      Unification_12 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Unification_12, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), Unification_12, 1) = ((MR_Box) (ConsId_7));
      MR_hl_field(MR_mktag(0), Unification_12, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_12, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_12, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_12, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Unification_12, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      GoalExpr_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GoalExpr_14, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(1), GoalExpr_14, 1) = ((MR_Box) (RHS_9));
      MR_hl_field(MR_mktag(1), GoalExpr_14, 2) = ((MR_Box) (UnifyMode_11));
      MR_hl_field(MR_mktag(1), GoalExpr_14, 3) = ((MR_Box) (Unification_12));
      MR_hl_field(MR_mktag(1), GoalExpr_14, 4) = ((MR_Box) (&hlds__make_goal_scalar_common_1[2]));
    }
    NonLocals_15 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_6);
    hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstMapDelta0_16);
    hlds__instmap__instmap_delta_insert_var_4_p_0(Var_6, Inst_10, InstMapDelta0_16, &InstMapDelta_17);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_15, InstMapDelta_17, (MR_Integer) 0, (MR_Integer) 0, Context_5, &GoalInfo_18);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_18));
    }
  }
}

void MR_CALL 
hlds__make_goal__make_simple_test_5_p_0(
  MR_Word X_6,
  MR_Word Y_7,
  MR_Word UnifyMainContext_8,
  MR_Word UnifySubContext_9,
  MR_Word * Goal_10)
{
  {
    MR_Word Unification_13;
    MR_Word UnifyContext_14;
    MR_Word GoalInfo_15;
    MR_Word GoalExpr_16;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_29;

    {
      Unification_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Unification_13, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Unification_13, 1) = ((MR_Box) (X_6));
      MR_hl_field(MR_mktag(3), Unification_13, 2) = ((MR_Box) (Y_7));
    }
    {
      UnifyContext_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyContext_14, 0) = ((MR_Box) (UnifyMainContext_8));
      MR_hl_field(MR_mktag(0), UnifyContext_14, 1) = ((MR_Box) (UnifySubContext_9));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Y_7));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (X_6));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_27));
    }
    Var_22 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_26);
    Var_23 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    hlds__hlds_goal__goal_info_init_5_p_0(Var_22, Var_23, (MR_Integer) 1, (MR_Integer) 0, &GoalInfo_15);
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (Y_7));
    }
    {
      GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GoalExpr_16, 0) = ((MR_Box) (X_6));
      MR_hl_field(MR_mktag(1), GoalExpr_16, 1) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), GoalExpr_16, 2) = ((MR_Box) (&hlds__make_goal_scalar_common_3[3]));
      MR_hl_field(MR_mktag(1), GoalExpr_16, 3) = ((MR_Box) (Unification_13));
      MR_hl_field(MR_mktag(1), GoalExpr_16, 4) = ((MR_Box) (UnifyContext_14));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_15));
    }
  }
}

void MR_CALL 
hlds__make_goal__make_simple_assign_5_p_0(
  MR_Word X_6,
  MR_Word Y_7,
  MR_Word UnifyMainContext_8,
  MR_Word UnifySubContext_9,
  MR_Word * Goal_10)
{
  {
    MR_Word Unification_13;
    MR_Word UnifyContext_14;
    MR_Word GoalInfo_15;
    MR_Word GoalExpr_16;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_29;

    {
      Unification_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Unification_13, 0) = ((MR_Box) (X_6));
      MR_hl_field(MR_mktag(2), Unification_13, 1) = ((MR_Box) (Y_7));
    }
    {
      UnifyContext_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyContext_14, 0) = ((MR_Box) (UnifyMainContext_8));
      MR_hl_field(MR_mktag(0), UnifyContext_14, 1) = ((MR_Box) (UnifySubContext_9));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Y_7));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (X_6));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_27));
    }
    Var_22 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_26);
    Var_23 = hlds__instmap__instmap_delta_bind_var_1_f_0(X_6);
    hlds__hlds_goal__goal_info_init_5_p_0(Var_22, Var_23, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_15);
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (Y_7));
    }
    {
      GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GoalExpr_16, 0) = ((MR_Box) (X_6));
      MR_hl_field(MR_mktag(1), GoalExpr_16, 1) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), GoalExpr_16, 2) = ((MR_Box) (&hlds__make_goal_scalar_common_3[2]));
      MR_hl_field(MR_mktag(1), GoalExpr_16, 3) = ((MR_Box) (Unification_13));
      MR_hl_field(MR_mktag(1), GoalExpr_16, 4) = ((MR_Box) (UnifyContext_14));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_15));
    }
  }
}

void MR_CALL 
hlds__make_goal__make_complicated_unify_assigns_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_goal.make_complicated_unify_assigns\'/3", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_goal.make_complicated_unify_assigns\'/3", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word Var2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vars2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Goal_18;
      MR_Word Goals_19;

      hlds__make_goal__make_complicated_unify_assign_3_p_0(Var_21, Var2_16, &Goal_18);
      hlds__make_goal__make_complicated_unify_assigns_3_p_0(Var_20, Vars2_17, &Goals_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_18));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_19));
      }
    }
  }
}

void MR_CALL 
hlds__make_goal__make_complicated_unify_assign_3_p_0(
  MR_Word Var1_4,
  MR_Word Var2_5,
  MR_Word * Goal_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_goal_scalar_common_1[0]), ((MR_Box) (Var1_4)), ((MR_Box) (Var2_5)));
    if (succeeded)
      *Goal_6 = hlds__make_goal__true_goal_0_f_0();
    else
    {
      MR_Word Context_7;
      MR_Word Var_8;

      mercury__term__context_init_1_p_0(&Context_7);
      {
        Var_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (Var2_5));
      }
      hlds__make_goal__create_atomic_complicated_unification_7_p_0(Var1_4, Var_8, Context_7, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, Goal_6);
    }
  }
}

void MR_CALL 
hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(
  MR_Word LHS_7,
  MR_Word RHS_8,
  MR_Word Context_9,
  MR_Word UnifyMainContext_10,
  MR_Word UnifySubContext_11,
  MR_Word * Goal_12)
{
  hlds__make_goal__create_atomic_complicated_unification_7_p_0(LHS_7, RHS_8, Context_9, UnifyMainContext_10, UnifySubContext_11, (MR_Integer) 0, Goal_12);
}

void MR_CALL 
hlds__make_goal__create_atomic_complicated_unification_7_p_0(
  MR_Word LHS_8,
  MR_Word RHS_9,
  MR_Word Context_10,
  MR_Word UnifyMainContext_11,
  MR_Word UnifySubContext_12,
  MR_Word Purity_13,
  MR_Word * Goal_14)
{
  {
    MR_Word UnifyContext_17;
    MR_Word GoalInfo_18;
    MR_Word GoalExpr_19;

    {
      UnifyContext_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyContext_17, 0) = ((MR_Box) (UnifyMainContext_11));
      MR_hl_field(MR_mktag(0), UnifyContext_17, 1) = ((MR_Box) (UnifySubContext_12));
    }
    hlds__hlds_goal__goal_info_init_context_purity_3_p_0(Context_10, Purity_13, &GoalInfo_18);
    {
      GoalExpr_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GoalExpr_19, 0) = ((MR_Box) (LHS_8));
      MR_hl_field(MR_mktag(1), GoalExpr_19, 1) = ((MR_Box) (RHS_9));
      MR_hl_field(MR_mktag(1), GoalExpr_19, 2) = ((MR_Box) (&hlds__make_goal_scalar_common_3[0]));
      MR_hl_field(MR_mktag(1), GoalExpr_19, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_3[1])));
      MR_hl_field(MR_mktag(1), GoalExpr_19, 4) = ((MR_Box) (UnifyContext_17));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_18));
    }
  }
}

MR_Word MR_CALL 
hlds__make_goal__fail_goal_with_context_1_f_0(
  MR_Word Context_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word GoalExpr_4;
    MR_Word GoalInfo_5;
    MR_Word GoalInfo0_6;
    MR_Word Var_7;

    Var_7 = hlds__make_goal__fail_goal_0_f_0();
    GoalExpr_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0))));
    GoalInfo0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 1))));
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_3, GoalInfo0_6, &GoalInfo_5);
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (GoalExpr_4));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (GoalInfo_5));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__make_goal__fail_goal_info_0_f_0(void)
{
  {
    MR_Word GoalInfo_2;
    MR_Word InstMapDelta_3;
    MR_Word Var_4;

    hlds__instmap__instmap_delta_init_unreachable_1_p_0(&InstMapDelta_3);
    Var_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    hlds__hlds_goal__goal_info_init_5_p_0(Var_4, InstMapDelta_3, (MR_Integer) 7, (MR_Integer) 0, &GoalInfo_2);
    return GoalInfo_2;
  }
}

MR_Word MR_CALL 
hlds__make_goal__fail_goal_expr_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_1[1]));
}

MR_Word MR_CALL 
hlds__make_goal__fail_goal_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word GoalInfo_2;
    MR_Word InstMapDelta_3;
    MR_Word Var_5;

    hlds__instmap__instmap_delta_init_unreachable_1_p_0(&InstMapDelta_3);
    Var_5 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    hlds__hlds_goal__goal_info_init_5_p_0(Var_5, InstMapDelta_3, (MR_Integer) 7, (MR_Integer) 0, &GoalInfo_2);
    {
      HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_1[1])));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 1) = ((MR_Box) (GoalInfo_2));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
hlds__make_goal__true_goal_with_context_1_f_0(
  MR_Word Context_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word GoalExpr_4;
    MR_Word GoalInfo_5;
    MR_Word GoalInfo0_6;
    MR_Word Var_7;

    Var_7 = hlds__make_goal__true_goal_0_f_0();
    GoalExpr_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0))));
    GoalInfo0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 1))));
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_3, GoalInfo0_6, &GoalInfo_5);
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (GoalExpr_4));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (GoalInfo_5));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__make_goal__true_goal_expr_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_2[0]));
}

MR_Word MR_CALL 
hlds__make_goal__true_goal_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word GoalInfo_2;
    MR_Word InstMapDelta_3;
    MR_Word Var_5;

    hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstMapDelta_3);
    Var_5 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    hlds__hlds_goal__goal_info_init_5_p_0(Var_5, InstMapDelta_3, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_2);
    {
      HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_2[0])));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 1) = ((MR_Box) (GoalInfo_2));
    }
    return HeadVar__1_1;
  }
}

void mercury__hlds__make_goal__init(void)
{
}

void mercury__hlds__make_goal__init_type_tables(void)
{
}

void mercury__hlds__make_goal__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_goal__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.make_goal.
