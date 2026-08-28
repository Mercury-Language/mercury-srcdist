/*
** Automatically generated from `prog_type_subst.m'
** by the Mercury compiler,
** version rotd-2026-08-28
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


// :- module parse_tree.prog_type_subst.
// :- implementation.

/*
INIT mercury__parse_tree__prog_type_subst__init
ENDINIT
*/

#include "parse_tree.prog_type_subst.mih"


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




static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type_subst__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type_subst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_kind_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_tvar_kind_map_2_5_p_0(
  MR_Word Renaming_6,
  MR_Word TVar0_7,
  MR_Word Kind_8,
  MR_Word STATE_VARIABLE_KindMap_0_11,
  MR_Word * STATE_VARIABLE_KindMap_12);

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_univ_exist_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_univ_exist_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_univ_exist_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_prog_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_prog_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_tvars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_tvars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_tvars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_tvar_kind_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);


static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_1[1][2];

static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_2[1][3];

static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_3[1][8];

static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_4[5][6];

static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_5[1][7];




static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_3[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_type_subst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_kind_0)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_kind_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_4[5][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_type_subst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_type_subst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_5[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_kind_0)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_type_subst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};





static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type_subst__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_type_subst__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_type_subst__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type_subst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_kind_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_type_subst__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_type_subst__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_tvar_kind_map_2_5_p_0(
  MR_Word Renaming_6,
  MR_Word TVar0_7,
  MR_Word Kind_8,
  MR_Word STATE_VARIABLE_KindMap_0_11,
  MR_Word * STATE_VARIABLE_KindMap_12)
{
  MR_bool succeeded;
  MR_Word TVar_10;
  MR_Word TVar1_15;
  MR_Box conv0_TVar1_15;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), Renaming_6, ((MR_Box) (TVar0_7)), &conv0_TVar1_15);
  if (succeeded)
  {
    TVar1_15 = ((MR_Word) (conv0_TVar1_15));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    TVar_10 = TVar1_15;
  else
    TVar_10 = TVar0_7;
  mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0), ((MR_Box) (TVar_10)), ((MR_Box) (Kind_8)), STATE_VARIABLE_KindMap_0_11, STATE_VARIABLE_KindMap_12);
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_univ_exist_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Constraint_10;

  parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_10));
}

void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_univ_exist_constraints_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Constraints_0_10,
  MR_Word * STATE_VARIABLE_Constraints_11)
{
  MR_Word UnivCs0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_10, 0))));
  MR_Word ExistCs0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_10, 1))));
  MR_Word UnivCs_8;
  MR_Word ExistCs_9;
  MR_Word Var_12;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[4]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_univ_exist_constraints_3_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (Subst_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_12, UnivCs0_6, &UnivCs_8);
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_12, ExistCs0_7, &ExistCs_9);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Constraints_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (UnivCs_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (ExistCs_9));
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_univ_exist_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Constraint_10;

  parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_10));
}

void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_univ_exist_constraints_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Constraints_0_10,
  MR_Word * STATE_VARIABLE_Constraints_11)
{
  MR_Word UnivCs0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_10, 0))));
  MR_Word ExistCs0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_10, 1))));
  MR_Word UnivCs_8;
  MR_Word ExistCs_9;
  MR_Word Var_12;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[4]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_univ_exist_constraints_3_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (Subst_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_12, UnivCs0_6, &UnivCs_8);
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_12, ExistCs0_7, &ExistCs_9);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Constraints_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (UnivCs_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (ExistCs_9));
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_univ_exist_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Constraint_10;

  parse_tree__prog_type_subst__apply_renaming_to_prog_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_10));
}

void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_univ_exist_constraints_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Constraints_0_10,
  MR_Word * STATE_VARIABLE_Constraints_11)
{
  MR_Word UnivCs0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_10, 0))));
  MR_Word ExistCs0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_10, 1))));
  MR_Word UnivCs_8;
  MR_Word ExistCs_9;
  MR_Word Var_12;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[3]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_renaming_to_univ_exist_constraints_3_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (Renaming_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_12, UnivCs0_6, &UnivCs_8);
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_12, ExistCs0_7, &ExistCs_9);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Constraints_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (UnivCs_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (ExistCs_9));
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Constraint_10;

  parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_10));
}

void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Constraints_0_6,
  MR_Word * STATE_VARIABLE_Constraints_7)
{
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[4]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Subst_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_8, STATE_VARIABLE_Constraints_0_6, STATE_VARIABLE_Constraints_7);
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Constraint_10;

  parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_10));
}

void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Constraints_0_6,
  MR_Word * STATE_VARIABLE_Constraints_7)
{
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[4]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Subst_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_8, STATE_VARIABLE_Constraints_0_6, STATE_VARIABLE_Constraints_7);
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_prog_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Constraint_10;

  parse_tree__prog_type_subst__apply_renaming_to_prog_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_10));
}

void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_prog_constraints_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Constraints_0_6,
  MR_Word * STATE_VARIABLE_Constraints_7)
{
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[3]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_renaming_to_prog_constraints_3_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Renaming_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_8, STATE_VARIABLE_Constraints_0_6, STATE_VARIABLE_Constraints_7);
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Type_6;

  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Type_6));
}

void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Constraint_0_9,
  MR_Word * STATE_VARIABLE_Constraint_10)
{
  MR_Word ClassName_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraint_0_9, 0))));
  MR_Word Types0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraint_0_9, 1))));
  MR_Word Types_8;
  MR_Word Var_11;

  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0_1));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (Subst_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_11, Types0_7, &Types_8);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Constraint_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ClassName_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (Types_8));
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Type_6;

  parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Type_6));
}

void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Constraint_0_9,
  MR_Word * STATE_VARIABLE_Constraint_10)
{
  MR_Word ClassName_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraint_0_9, 0))));
  MR_Word Types0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraint_0_9, 1))));
  MR_Word Types_8;
  MR_Word Var_11;

  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0_1));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (Subst_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_11, Types0_7, &Types_8);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Constraint_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ClassName_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (Types_8));
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_prog_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Type_6;

  parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Type_6));
}

void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_prog_constraint_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Constraint_0_9,
  MR_Word * STATE_VARIABLE_Constraint_10)
{
  MR_Word ClassName_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraint_0_9, 0))));
  MR_Word ClassArgTypes0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraint_0_9, 1))));
  MR_Word ClassArgTypes_8;
  MR_Word Var_11;

  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_renaming_to_prog_constraint_3_p_0_1));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (Renaming_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_11, ClassArgTypes0_7, &ClassArgTypes_8);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Constraint_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ClassName_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (ClassArgTypes_8));
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Type_6;

  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Type_6));
}

void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_types_3_p_0(
  MR_Word Subst_4,
  MR_Word Types0_5,
  MR_Word * Types_6)
{
  MR_Word Var_7;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_types_3_p_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (Subst_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_7, Types0_5, Types_6);
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Type_6;

  parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Type_6));
}

void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_types_3_p_0(
  MR_Word Subst_4,
  MR_Word Types0_5,
  MR_Word * Types_6)
{
  MR_Word Var_7;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_types_3_p_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (Subst_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_7, Types0_5, Types_6);
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Type_6;

  parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Type_6));
}

void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_types_3_p_0(
  MR_Word Renaming_4,
  MR_Word Types0_5,
  MR_Word * Types_6)
{
  MR_Word Var_7;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_renaming_to_types_3_p_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (Renaming_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_7, Types0_5, Types_6);
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Type_6;

  parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_Type_6);
  *wrapper_arg_2 = ((MR_Box) (conv2_Type_6));
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Type_6;

  parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Type_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_Type_6));
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Type_6;

  parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Type_6));
}

void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0(
  MR_Word Renaming_4,
  MR_Word Type0_5,
  MR_Word * Type_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Type0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TVar0_7 = ((MR_Word) ((MR_hl_field(0, Type0_5, 0))));
        MR_Word Kind_8 = ((MR_Word) ((MR_hl_field(0, Type0_5, 1))));
        MR_Word TVar_9;
        MR_Word TVar1_32;
        MR_Box conv3_TVar1_32;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), Renaming_4, ((MR_Box) (TVar0_7)), &conv3_TVar1_32);
        if (succeeded)
        {
          TVar1_32 = ((MR_Word) (conv3_TVar1_32));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          TVar_9 = TVar1_32;
        else
          TVar_9 = TVar0_7;
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Type_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (TVar_9));
          MR_hl_field(0, base, 1) = ((MR_Box) (Kind_8));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Name_10 = ((MR_Word) ((MR_hl_field(1, Type0_5, 0))));
        MR_Word Args0_11 = ((MR_Word) ((MR_hl_field(1, Type0_5, 1))));
        MR_Word Args_12;
        MR_Word Kind_19 = ((MR_Word) ((MR_hl_field(1, Type0_5, 2))));
        MR_Word Var_26;

        {
          Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_26, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
          MR_hl_field(0, Var_26, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0_1));
          MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_26, 3) = ((MR_Box) (Renaming_4));
        }
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_26, Args0_11, &Args_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Type_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Name_10));
          MR_hl_field(1, base, 1) = ((MR_Box) (Args_12));
          MR_hl_field(1, base, 2) = ((MR_Box) (Kind_19));
        }
      }
      break;
    case (MR_Integer) 2:
      *Type_6 = Type0_5;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type0_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Kind_22 = ((MR_Word) ((MR_hl_field(3, Type0_5, 2))));
            MR_Word Args0_23 = ((MR_Word) ((MR_hl_field(3, Type0_5, 1))));
            MR_Word Args_24;
            MR_Word Var_30;

            {
              Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_30, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
              MR_hl_field(0, Var_30, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0_3));
              MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_30, 3) = ((MR_Box) (Renaming_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_30, Args0_23, &Args_24);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Type_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Args_24));
              MR_hl_field(3, base, 2) = ((MR_Box) (Kind_22));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PorF_14 = ((MR_Unsigned) ((MR_hl_field(3, Type0_5, 1))) & (MR_Integer) 1);
            MR_Word HOInstInfo_15 = ((MR_Word) ((MR_hl_field(3, Type0_5, 3))));
            MR_Word Purity_16 = ((MR_Unsigned) ((MR_hl_field(3, Type0_5, 4))) & (MR_Integer) 3);
            MR_Word Args0_20 = ((MR_Word) ((MR_hl_field(3, Type0_5, 2))));
            MR_Word Args_21;
            MR_Word Var_28;

            {
              Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_28, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
              MR_hl_field(0, Var_28, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0_2));
              MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_28, 3) = ((MR_Box) (Renaming_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_28, Args0_20, &Args_21);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *Type_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (PorF_14));
              MR_hl_field(3, base, 2) = ((MR_Box) (Args_21));
              MR_hl_field(3, base, 3) = ((MR_Box) (HOInstInfo_15));
              MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) (Purity_16));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word BaseType0_17 = ((MR_Word) ((MR_hl_field(3, Type0_5, 1))));
            MR_Word BaseType_18;
            MR_Word Kind_25 = ((MR_Word) ((MR_hl_field(3, Type0_5, 2))));

            parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0(Renaming_4, BaseType0_17, &BaseType_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Type_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (BaseType_18));
              MR_hl_field(3, base, 2) = ((MR_Box) (Kind_25));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_tvars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Type_8;

  parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_Type_8));
}

void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_tvars_4_p_0(
  MR_Word KindMap_5,
  MR_Word Subst_6,
  MR_Word TVars_7,
  MR_Word * Types_8)
{
  MR_Word Var_9;

  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_5[0]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_tvars_4_p_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (KindMap_5));
    MR_hl_field(0, Var_9, 4) = ((MR_Box) (Subst_6));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_9, TVars_7, Types_8);
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_tvars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Type_8;

  parse_tree__prog_type_subst__apply_subst_to_tvar_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_Type_8));
}

void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_tvars_4_p_0(
  MR_Word KindMap_5,
  MR_Word Subst_6,
  MR_Word TVars_7,
  MR_Word * Types_8)
{
  MR_Word Var_9;

  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_5[0]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_tvars_4_p_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (KindMap_5));
    MR_hl_field(0, Var_9, 4) = ((MR_Box) (Subst_6));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_9, TVars_7, Types_8);
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_tvars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_TVar_6;

  parse_tree__prog_type_subst__apply_renaming_to_tvar_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_TVar_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_TVar_6));
}

void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_tvars_3_p_0(
  MR_Word Renaming_4,
  MR_Word TVars0_5,
  MR_Word * TVars_6)
{
  MR_Word Var_7;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[1]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_renaming_to_tvars_3_p_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (Renaming_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), Var_7, TVars0_5, TVars_6);
}

void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_p_0(
  MR_Word KindMap_5,
  MR_Word Subst_6,
  MR_Word TVar_7,
  MR_Word * Type_8)
{
  MR_bool succeeded;
  MR_Word Type0_9;
  MR_Box conv0_Type0_9;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Subst_6, ((MR_Box) (TVar_7)), &conv0_Type0_9);
  if (succeeded)
  {
    Type0_9 = ((MR_Word) (conv0_Type0_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(Subst_6, Type0_9, Type_8);
  else
  {
    MR_Word Kind_10;

    parse_tree__prog_data__get_tvar_kind_3_p_0(KindMap_5, TVar_7, &Kind_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Type_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (TVar_7));
      MR_hl_field(0, base, 1) = ((MR_Box) (Kind_10));
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Type_6;

  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_Type_6);
  *wrapper_arg_2 = ((MR_Box) (conv2_Type_6));
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Type_6;

  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Type_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_Type_6));
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Type_6;

  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Type_6));
}

void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(
  MR_Word Subst_4,
  MR_Word Type0_5,
  MR_Word * Type_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TVar_7 = ((MR_Word) ((MR_hl_field(0, Type0_5, 0))));
          MR_Word Kind_8 = ((MR_Word) ((MR_hl_field(0, Type0_5, 1))));
          MR_Word Type1_9;
          MR_Box conv3_Type1_9;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Subst_4, ((MR_Box) (TVar_7)), &conv3_Type1_9);
          if (succeeded)
          {
            Type1_9 = ((MR_Word) (conv3_Type1_9));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word Type2_10;
            MR_Word Var_37;
            MR_Word next_value_of_Type0_5;

            Var_37 = parse_tree__prog_data__get_type_kind_1_f_0(Type1_9);
            succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_8, Var_37);
            if (succeeded)
              Type2_10 = Type1_9;
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_type_subst.ensure_type_has_kind\'/3", (MR_String) "substitution not kind preserving");
                return;
              }
            // direct tailcall eliminated
            ;
            next_value_of_Type0_5 = Type2_10;
            Type0_5 = next_value_of_Type0_5;
            continue;
          }
          else
            *Type_6 = Type0_5;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Name_11 = ((MR_Word) ((MR_hl_field(1, Type0_5, 0))));
          MR_Word Args0_12 = ((MR_Word) ((MR_hl_field(1, Type0_5, 1))));
          MR_Word Args_13;
          MR_Word Kind_20 = ((MR_Word) ((MR_hl_field(1, Type0_5, 2))));
          MR_Word Var_29;

          {
            Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_29, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
            MR_hl_field(0, Var_29, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_1));
            MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_29, 3) = ((MR_Box) (Subst_4));
          }
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_29, Args0_12, &Args_13);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Type_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Name_11));
            MR_hl_field(1, base, 1) = ((MR_Box) (Args_13));
            MR_hl_field(1, base, 2) = ((MR_Box) (Kind_20));
          }
        }
        break;
      case (MR_Integer) 2:
        *Type_6 = Type0_5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type0_5, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Kind_23 = ((MR_Word) ((MR_hl_field(3, Type0_5, 2))));
              MR_Word Args0_24 = ((MR_Word) ((MR_hl_field(3, Type0_5, 1))));
              MR_Word Args_25;
              MR_Word Var_33;

              {
                Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_33, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
                MR_hl_field(0, Var_33, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_3));
                MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_33, 3) = ((MR_Box) (Subst_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_33, Args0_24, &Args_25);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Type_6 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Args_25));
                MR_hl_field(3, base, 2) = ((MR_Box) (Kind_23));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PorF_15 = ((MR_Unsigned) ((MR_hl_field(3, Type0_5, 1))) & (MR_Integer) 1);
              MR_Word HOInstInfo_16 = ((MR_Word) ((MR_hl_field(3, Type0_5, 3))));
              MR_Word Purity_17 = ((MR_Unsigned) ((MR_hl_field(3, Type0_5, 4))) & (MR_Integer) 3);
              MR_Word Args0_21 = ((MR_Word) ((MR_hl_field(3, Type0_5, 2))));
              MR_Word Args_22;
              MR_Word Var_31;

              {
                Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_31, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
                MR_hl_field(0, Var_31, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_2));
                MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_31, 3) = ((MR_Box) (Subst_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_31, Args0_21, &Args_22);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                *Type_6 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (PorF_15));
                MR_hl_field(3, base, 2) = ((MR_Box) (Args_22));
                MR_hl_field(3, base, 3) = ((MR_Box) (HOInstInfo_16));
                MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) (Purity_17));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word BaseType0_18 = ((MR_Word) ((MR_hl_field(3, Type0_5, 1))));
              MR_Word BaseType_19;
              MR_Word Kind_26 = ((MR_Word) ((MR_hl_field(3, Type0_5, 2))));

              parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(Subst_4, BaseType0_18, &BaseType_19);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Type_6 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, base, 1) = ((MR_Box) (BaseType_19));
                MR_hl_field(3, base, 2) = ((MR_Box) (Kind_26));
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_tvar_4_p_0(
  MR_Word KindMap_5,
  MR_Word Subst_6,
  MR_Word TVar_7,
  MR_Word * Type_8)
{
  MR_bool succeeded;
  MR_Word Type0_9;
  MR_Box conv0_Type0_9;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Subst_6, ((MR_Box) (TVar_7)), &conv0_Type0_9);
  if (succeeded)
  {
    Type0_9 = ((MR_Word) (conv0_Type0_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_6, Type0_9, Type_8);
  else
  {
    MR_Word Kind_10;

    parse_tree__prog_data__get_tvar_kind_3_p_0(KindMap_5, TVar_7, &Kind_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Type_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (TVar_7));
      MR_hl_field(0, base, 1) = ((MR_Box) (Kind_10));
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Type_6;

  parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_Type_6);
  *wrapper_arg_2 = ((MR_Box) (conv2_Type_6));
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Type_6;

  parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Type_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_Type_6));
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Type_6;

  parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Type_6));
}

void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(
  MR_Word Subst_4,
  MR_Word Type0_5,
  MR_Word * Type_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Type0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TVar_7 = ((MR_Word) ((MR_hl_field(0, Type0_5, 0))));
        MR_Word Kind_8 = ((MR_Word) ((MR_hl_field(0, Type0_5, 1))));
        MR_Word Type1_9;
        MR_Box conv3_Type1_9;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Subst_4, ((MR_Box) (TVar_7)), &conv3_Type1_9);
        if (succeeded)
        {
          Type1_9 = ((MR_Word) (conv3_Type1_9));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Var_36;

          Var_36 = parse_tree__prog_data__get_type_kind_1_f_0(Type1_9);
          succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_8, Var_36);
          if (succeeded)
            *Type_6 = Type1_9;
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_type_subst.ensure_type_has_kind\'/3", (MR_String) "substitution not kind preserving");
              return;
            }
        }
        else
          *Type_6 = Type0_5;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Name_10 = ((MR_Word) ((MR_hl_field(1, Type0_5, 0))));
        MR_Word Args0_11 = ((MR_Word) ((MR_hl_field(1, Type0_5, 1))));
        MR_Word Args_12;
        MR_Word Kind_19 = ((MR_Word) ((MR_hl_field(1, Type0_5, 2))));
        MR_Word Var_28;

        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_28, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
          MR_hl_field(0, Var_28, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_1));
          MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_28, 3) = ((MR_Box) (Subst_4));
        }
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_28, Args0_11, &Args_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Type_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Name_10));
          MR_hl_field(1, base, 1) = ((MR_Box) (Args_12));
          MR_hl_field(1, base, 2) = ((MR_Box) (Kind_19));
        }
      }
      break;
    case (MR_Integer) 2:
      *Type_6 = Type0_5;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type0_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Kind_22 = ((MR_Word) ((MR_hl_field(3, Type0_5, 2))));
            MR_Word Args0_23 = ((MR_Word) ((MR_hl_field(3, Type0_5, 1))));
            MR_Word Args_24;
            MR_Word Var_32;

            {
              Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_32, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
              MR_hl_field(0, Var_32, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_3));
              MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_32, 3) = ((MR_Box) (Subst_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_32, Args0_23, &Args_24);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Type_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Args_24));
              MR_hl_field(3, base, 2) = ((MR_Box) (Kind_22));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PorF_14 = ((MR_Unsigned) ((MR_hl_field(3, Type0_5, 1))) & (MR_Integer) 1);
            MR_Word HOInstInfo_15 = ((MR_Word) ((MR_hl_field(3, Type0_5, 3))));
            MR_Word Purity_16 = ((MR_Unsigned) ((MR_hl_field(3, Type0_5, 4))) & (MR_Integer) 3);
            MR_Word Args0_20 = ((MR_Word) ((MR_hl_field(3, Type0_5, 2))));
            MR_Word Args_21;
            MR_Word Var_30;

            {
              Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_30, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
              MR_hl_field(0, Var_30, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_2));
              MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_30, 3) = ((MR_Box) (Subst_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_30, Args0_20, &Args_21);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *Type_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (PorF_14));
              MR_hl_field(3, base, 2) = ((MR_Box) (Args_21));
              MR_hl_field(3, base, 3) = ((MR_Box) (HOInstInfo_15));
              MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) (Purity_16));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word BaseType0_17 = ((MR_Word) ((MR_hl_field(3, Type0_5, 1))));
            MR_Word BaseType_18;
            MR_Word Kind_25 = ((MR_Word) ((MR_hl_field(3, Type0_5, 2))));

            parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_4, BaseType0_17, &BaseType_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Type_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (BaseType_18));
              MR_hl_field(3, base, 2) = ((MR_Box) (Kind_25));
            }
          }
          break;
      }
      break;
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_tvar_3_p_0(
  MR_Word Renaming_4,
  MR_Word TVar0_5,
  MR_Word * TVar_6)
{
  MR_bool succeeded;
  MR_Word TVar1_7;
  MR_Box conv0_TVar1_7;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), Renaming_4, ((MR_Box) (TVar0_5)), &conv0_TVar1_7);
  if (succeeded)
  {
    TVar1_7 = ((MR_Word) (conv0_TVar1_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *TVar_6 = TVar1_7;
  else
    *TVar_6 = TVar0_5;
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_tvar_kind_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_KindMap_12;

  parse_tree__prog_type_subst__apply_renaming_to_tvar_kind_map_2_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_KindMap_12);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_KindMap_12));
}

void MR_CALL 
parse_tree__prog_type_subst__apply_renaming_to_tvar_kind_map_3_p_0(
  MR_Word Renaming_4,
  MR_Word KindMap0_5,
  MR_Word * KindMap_6)
{
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Box conv1_KindMap_6;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_3[0]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_renaming_to_tvar_kind_map_3_p_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (Renaming_4));
  }
  Var_8 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0), (MR_Word) (&parse_tree__prog_type_subst_scalar_common_2[0]), Var_7, KindMap0_5, ((MR_Box) (Var_8)), &conv1_KindMap_6);
  *KindMap_6 = ((MR_Word) (conv1_KindMap_6));
}

void mercury__parse_tree__prog_type_subst__init(void)
{
}

void mercury__parse_tree__prog_type_subst__init_type_tables(void)
{
}

void mercury__parse_tree__prog_type_subst__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_type_subst__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.prog_type_subst.
