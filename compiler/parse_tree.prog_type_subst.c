/*
** Automatically generated from `prog_type_subst.m'
** by the Mercury compiler,
** version rotd-2020-03-12
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


#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "assoc_list.mih"
#include "builtin.mih"
#include "char.mih"
#include "enum.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"




static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type_subst__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type_subst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_kind_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_2_5_p_0(
  MR_Word Renaming_6,
  MR_Word TVar0_7,
  MR_Word Kind_8,
  MR_Word STATE_VARIABLE_KindMap_0_11,
  MR_Word * STATE_VARIABLE_KindMap_12);

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
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0_1(
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
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_tvar_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_4(
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
parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_4(
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
parse_tree__prog_type_subst__apply_type_args_3_p_0(
  MR_Word Type0_4,
  MR_Word Args_5,
  MR_Word * Type_6);

static void MR_CALL 
parse_tree__prog_type_subst__apply_type_args_to_kind_3_p_0(
  MR_Word Kind0_4,
  MR_Word ArgTypes_5,
  MR_Word * Kind_6);

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0_1(
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
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_3[1][8] = {
  /* row 0 */
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
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_type_subst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_type_subst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 4 */
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
  /* row 0 */
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
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
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
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_2_5_p_0(
  MR_Word Renaming_6,
  MR_Word TVar0_7,
  MR_Word Kind_8,
  MR_Word STATE_VARIABLE_KindMap_0_11,
  MR_Word * STATE_VARIABLE_KindMap_12)
{
  {
    MR_bool succeeded;
    MR_Word TVar_10;
    MR_Word TVar1_19;
    MR_Box conv0_TVar1_19;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), Renaming_6, ((MR_Box) (TVar0_7)), &conv0_TVar1_19);
    if (succeeded)
    {
      TVar1_19 = ((MR_Word) (conv0_TVar1_19));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      TVar_10 = TVar1_19;
    else
      TVar_10 = TVar0_7;
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0), ((MR_Box) (TVar_10)), ((MR_Box) (Kind_8)), STATE_VARIABLE_KindMap_0_11, STATE_VARIABLE_KindMap_12);
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Constraint_10;

    parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_10);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_10));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Constraints_0_10,
  MR_Word * STATE_VARIABLE_Constraints_11)
{
  {
    MR_Word UnivCs0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_10, (MR_Integer) 0))));
    MR_Word ExistCs0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_10, (MR_Integer) 1))));
    MR_Word UnivCs_8;
    MR_Word ExistCs_9;
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Subst_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_17, UnivCs0_6, &UnivCs_8);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_17, ExistCs0_7, &ExistCs_9);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Constraints_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (UnivCs_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExistCs_9));
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Constraint_10;

    parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_10);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_10));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_p_0(
  MR_Word Subst_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word UniversalCs0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ExistentialCs0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word UniversalCs_7;
    MR_Word ExistentialCs_8;
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Subst_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_13, UniversalCs0_5, &UniversalCs_7);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_13, ExistentialCs0_6, &ExistentialCs_8);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (UniversalCs_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExistentialCs_8));
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Constraint_10;

    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_10);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_10));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Constraints_0_10,
  MR_Word * STATE_VARIABLE_Constraints_11)
{
  {
    MR_Word UnivConstraints0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_10, (MR_Integer) 0))));
    MR_Word ExistConstraints0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_10, (MR_Integer) 1))));
    MR_Word UnivConstraints_8;
    MR_Word ExistConstraints_9;
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Renaming_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_17, UnivConstraints0_6, &UnivConstraints_8);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_17, ExistConstraints0_7, &ExistConstraints_9);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Constraints_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (UnivConstraints_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExistConstraints_9));
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Constraint_10;

    parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_10);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_10));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Constraints_0_6,
  MR_Word * STATE_VARIABLE_Constraints_7)
{
  {
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (Subst_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_8, STATE_VARIABLE_Constraints_0_6, STATE_VARIABLE_Constraints_7);
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Constraint_10;

    parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_10);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_10));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Constraints_0_6,
  MR_Word * STATE_VARIABLE_Constraints_7)
{
  {
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (Subst_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_8, STATE_VARIABLE_Constraints_0_6, STATE_VARIABLE_Constraints_7);
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Constraint_10;

    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_10);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_10));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Constraints_0_6,
  MR_Word * STATE_VARIABLE_Constraints_7)
{
  {
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (Renaming_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_8, STATE_VARIABLE_Constraints_0_6, STATE_VARIABLE_Constraints_7);
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Type_6;

    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Type_6));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Constraint_0_9,
  MR_Word * STATE_VARIABLE_Constraint_10)
{
  {
    MR_Word ClassName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraint_0_9, (MR_Integer) 0))));
    MR_Word Types0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraint_0_9, (MR_Integer) 1))));
    MR_Word Types_8;
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Subst_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_15, Types0_7, &Types_8);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Constraint_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ClassName_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Types_8));
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Type_6;

    parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Type_6));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Constraint_0_9,
  MR_Word * STATE_VARIABLE_Constraint_10)
{
  {
    MR_Word ClassName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraint_0_9, (MR_Integer) 0))));
    MR_Word Types0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraint_0_9, (MR_Integer) 1))));
    MR_Word Types_8;
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Subst_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_15, Types0_7, &Types_8);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Constraint_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ClassName_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Types_8));
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Type_6;

    parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Type_6));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Constraint_0_9,
  MR_Word * STATE_VARIABLE_Constraint_10)
{
  {
    MR_Word ClassName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraint_0_9, (MR_Integer) 0))));
    MR_Word ClassArgTypes0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraint_0_9, (MR_Integer) 1))));
    MR_Word ClassArgTypes_8;
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Renaming_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_15, ClassArgTypes0_7, &ClassArgTypes_8);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Constraint_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ClassName_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ClassArgTypes_8));
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Type_6;

    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Type_6));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(
  MR_Word Subst_4,
  MR_Word Types0_5,
  MR_Word * Types_6)
{
  {
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (Subst_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_7, Types0_5, Types_6);
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Type_6;

    parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Type_6));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(
  MR_Word Subst_4,
  MR_Word Types0_5,
  MR_Word * Types_6)
{
  {
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (Subst_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_7, Types0_5, Types_6);
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Type_6;

    parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Type_6));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(
  MR_Word Renaming_4,
  MR_Word Types0_5,
  MR_Word * Types_6)
{
  {
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (Renaming_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_7, Types0_5, Types_6);
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_Type_6;

    parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_Type_6);
    *wrapper_arg_2 = ((MR_Box) (conv4_Type_6));
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Type_6;

    parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_Type_6);
    *wrapper_arg_2 = ((MR_Box) (conv3_Type_6));
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Type_6;

    parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_Type_6);
    *wrapper_arg_2 = ((MR_Box) (conv2_Type_6));
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Type_6;

    parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Type_6));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(
  MR_Word Renaming_4,
  MR_Word Type0_5,
  MR_Word * Type_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Type0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TVar0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type0_5, (MR_Integer) 0))));
          MR_Word Kind_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type0_5, (MR_Integer) 1))));
          MR_Word TVar_9;
          MR_Word TVar1_68;
          MR_Box conv5_TVar1_68;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), Renaming_4, ((MR_Box) (TVar0_7)), &conv5_TVar1_68);
          if (succeeded)
          {
            TVar1_68 = ((MR_Word) (conv5_TVar1_68));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            TVar_9 = TVar1_68;
          else
            TVar_9 = TVar0_7;
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Type_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TVar_9));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Kind_8));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Name_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_5, (MR_Integer) 0))));
          MR_Word Args0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_5, (MR_Integer) 1))));
          MR_Word Args_12;
          MR_Word Kind_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_5, (MR_Integer) 2))));
          MR_Word Var_47;

          {
            Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
            MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0_2));
            MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (Renaming_4));
          }
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_47, Args0_11, &Args_12);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Type_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Name_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_12));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Kind_20));
          }
        }
        break;
      case (MR_Integer) 2:
        *Type_6 = Type0_5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Kind_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 2))));
              MR_Word Args0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 1))));
              MR_Word Args_25;
              MR_Word Var_61;

              {
                Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0_4));
                MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (Renaming_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_61, Args0_24, &Args_25);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Type_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Args_25));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Kind_23));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PorF_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word HOInstInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 3))));
              MR_Word Purity_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 4))) & (MR_Integer) 3);
              MR_Word Args0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 2))));
              MR_Word Args_22;
              MR_Word Var_54;

              {
                Var_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0_3));
                MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (Renaming_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_54, Args0_21, &Args_22);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                *Type_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (PorF_14));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Args_22));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (HOInstInfo_15));
                MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) (Purity_16));
                MR_hl_field(MR_mktag(3), base, 5) = NULL;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TVar0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 1))));
              MR_Word Kind_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 3))));
              MR_Word TVar_28;
              MR_Word Args0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 2))));
              MR_Word Args_30;
              MR_Word Var_35;
              MR_Word TVar1_42;
              MR_Box conv1_TVar1_42;

              {
                Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0_1));
                MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (Renaming_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_35, Args0_29, &Args_30);
              succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), Renaming_4, ((MR_Box) (TVar0_26)), &conv1_TVar1_42);
              if (succeeded)
              {
                TVar1_42 = ((MR_Word) (conv1_TVar1_42));
                succeeded = MR_TRUE;
              }
              if (succeeded)
                TVar_28 = TVar1_42;
              else
                TVar_28 = TVar0_26;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Type_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TVar_28));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Args_30));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Kind_27));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word BaseType0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 1))));
              MR_Word BaseType_19;
              MR_Word Kind_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 2))));

              parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(Renaming_4, BaseType0_18, &BaseType_19);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Type_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (BaseType_19));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Kind_31));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Type_8;

    parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_Type_8));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(
  MR_Word KindMap_5,
  MR_Word Subst_6,
  MR_Word TVars_7,
  MR_Word * Types_8)
{
  {
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (KindMap_5));
      MR_hl_field(MR_mktag(0), Var_9, 4) = ((MR_Box) (Subst_6));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_9, TVars_7, Types_8);
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_tvar_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Type_8;

    parse_tree__prog_type_subst__apply_subst_to_tvar_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_Type_8));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_tvar_list_4_p_0(
  MR_Word KindMap_5,
  MR_Word Subst_6,
  MR_Word TVars_7,
  MR_Word * Types_8)
{
  {
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_tvar_list_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (KindMap_5));
      MR_hl_field(MR_mktag(0), Var_9, 4) = ((MR_Box) (Subst_6));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_9, TVars_7, Types_8);
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_TVar_6;

    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_TVar_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_TVar_6));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(
  MR_Word Renaming_4,
  MR_Word TVars0_5,
  MR_Word * TVars_6)
{
  {
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (Renaming_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), Var_7, TVars0_5, TVars_6);
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_p_0(
  MR_Word KindMap_5,
  MR_Word Subst_6,
  MR_Word TVar_7,
  MR_Word * Type_8)
{
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
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TVar_7));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Kind_10));
      }
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_Type_6;

    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_Type_6);
    *wrapper_arg_2 = ((MR_Box) (conv4_Type_6));
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Type_6;

    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_Type_6);
    *wrapper_arg_2 = ((MR_Box) (conv3_Type_6));
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Type_6;

    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_Type_6);
    *wrapper_arg_2 = ((MR_Box) (conv2_Type_6));
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Type_6;

    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Type_6));
  }
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
          MR_Word TVar_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type0_5, (MR_Integer) 0))));
          MR_Word Kind_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type0_5, (MR_Integer) 1))));
          MR_Word Type1_9;
          MR_Box conv5_Type1_9;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Subst_4, ((MR_Box) (TVar_7)), &conv5_Type1_9);
          if (succeeded)
          {
            Type1_9 = ((MR_Word) (conv5_Type1_9));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word Type2_10;
            MR_Word Var_71;
            MR_Word next_value_of_Type0_5;

            Var_71 = parse_tree__prog_data__get_type_kind_1_f_0(Type1_9);
            succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_8, Var_71);
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
          MR_Word Name_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_5, (MR_Integer) 0))));
          MR_Word Args0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_5, (MR_Integer) 1))));
          MR_Word Args_13;
          MR_Word Kind_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_5, (MR_Integer) 2))));
          MR_Word Var_48;

          {
            Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_2));
            MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (Subst_4));
          }
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_48, Args0_12, &Args_13);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Type_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Name_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_13));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Kind_23));
          }
        }
        break;
      case (MR_Integer) 2:
        *Type_6 = Type0_5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Kind_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 2))));
              MR_Word Args0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 1))));
              MR_Word Args_28;
              MR_Word Var_62;

              {
                Var_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_4));
                MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (Subst_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_62, Args0_27, &Args_28);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Type_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Args_28));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Kind_26));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PorF_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word HOInstInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 3))));
              MR_Word Purity_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 4))) & (MR_Integer) 3);
              MR_Word Args0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 2))));
              MR_Word Args_25;
              MR_Word Var_55;

              {
                Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_3));
                MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (Subst_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_55, Args0_24, &Args_25);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                *Type_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (PorF_15));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Args_25));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (HOInstInfo_16));
                MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) (Purity_17));
                MR_hl_field(MR_mktag(3), base, 5) = NULL;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TVar_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 1))));
              MR_Word Kind_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 3))));
              MR_Word Args0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 2))));
              MR_Word Args_32;
              MR_Word Var_41;
              MR_Word AppliedType0_19;
              MR_Box conv1_AppliedType0_19;

              {
                Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_1));
                MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (Subst_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_41, Args0_31, &Args_32);
              succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Subst_4, ((MR_Box) (TVar_29)), &conv1_AppliedType0_19);
              if (succeeded)
              {
                AppliedType0_19 = ((MR_Word) (conv1_AppliedType0_19));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word AppliedType_20;

                parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(Subst_4, AppliedType0_19, &AppliedType_20);
                parse_tree__prog_type_subst__apply_type_args_3_p_0(AppliedType_20, Args_32, Type_6);
              }
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *Type_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TVar_29));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Args_32));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Kind_30));
                }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word BaseType0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 1))));
              MR_Word BaseType_22;
              MR_Word Kind_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 2))));

              parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(Subst_4, BaseType0_21, &BaseType_22);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Type_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (BaseType_22));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Kind_33));
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
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TVar_7));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Kind_10));
      }
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_Type_6;

    parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_Type_6);
    *wrapper_arg_2 = ((MR_Box) (conv4_Type_6));
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Type_6;

    parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_Type_6);
    *wrapper_arg_2 = ((MR_Box) (conv3_Type_6));
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Type_6;

    parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_Type_6);
    *wrapper_arg_2 = ((MR_Box) (conv2_Type_6));
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Type_6;

    parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Type_6));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(
  MR_Word Subst_4,
  MR_Word Type0_5,
  MR_Word * Type_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Type0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TVar_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type0_5, (MR_Integer) 0))));
          MR_Word Kind_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type0_5, (MR_Integer) 1))));
          MR_Word Type1_9;
          MR_Box conv5_Type1_9;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Subst_4, ((MR_Box) (TVar_7)), &conv5_Type1_9);
          if (succeeded)
          {
            Type1_9 = ((MR_Word) (conv5_Type1_9));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word Var_69;

            Var_69 = parse_tree__prog_data__get_type_kind_1_f_0(Type1_9);
            succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_8, Var_69);
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
          MR_Word Name_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_5, (MR_Integer) 0))));
          MR_Word Args0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_5, (MR_Integer) 1))));
          MR_Word Args_12;
          MR_Word Kind_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_5, (MR_Integer) 2))));
          MR_Word Var_46;

          {
            Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_2));
            MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (Subst_4));
          }
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_46, Args0_11, &Args_12);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Type_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Name_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_12));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Kind_21));
          }
        }
        break;
      case (MR_Integer) 2:
        *Type_6 = Type0_5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Kind_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 2))));
              MR_Word Args0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 1))));
              MR_Word Args_26;
              MR_Word Var_60;

              {
                Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_4));
                MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (Subst_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_60, Args0_25, &Args_26);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Type_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Args_26));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Kind_24));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PorF_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word HOInstInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 3))));
              MR_Word Purity_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 4))) & (MR_Integer) 3);
              MR_Word Args0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 2))));
              MR_Word Args_23;
              MR_Word Var_53;

              {
                Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_3));
                MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (Subst_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_53, Args0_22, &Args_23);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                *Type_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (PorF_14));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Args_23));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (HOInstInfo_15));
                MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) (Purity_16));
                MR_hl_field(MR_mktag(3), base, 5) = NULL;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TVar_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 1))));
              MR_Word Kind_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 3))));
              MR_Word Args0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 2))));
              MR_Word Args_30;
              MR_Word Var_39;
              MR_Word AppliedType_18;
              MR_Box conv1_AppliedType_18;

              {
                Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_1));
                MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (Subst_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_39, Args0_29, &Args_30);
              succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Subst_4, ((MR_Box) (TVar_27)), &conv1_AppliedType_18);
              if (succeeded)
              {
                AppliedType_18 = ((MR_Word) (conv1_AppliedType_18));
                succeeded = MR_TRUE;
              }
              if (succeeded)
                parse_tree__prog_type_subst__apply_type_args_3_p_0(AppliedType_18, Args_30, Type_6);
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *Type_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TVar_27));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Args_30));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Kind_28));
                }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word BaseType0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 1))));
              MR_Word BaseType_20;
              MR_Word Kind_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_5, (MR_Integer) 2))));

              parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_4, BaseType0_19, &BaseType_20);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Type_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (BaseType_20));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Kind_31));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_type_args_3_p_0(
  MR_Word Type0_4,
  MR_Word Args_5,
  MR_Word * Type_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type0_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TVar_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type0_4, (MR_Integer) 0))));
          MR_Word Kind0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type0_4, (MR_Integer) 1))));
          MR_Word Kind_9;

          parse_tree__prog_type_subst__apply_type_args_to_kind_3_p_0(Kind0_8, Args_5, &Kind_9);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *Type_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TVar_7));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Args_5));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Kind_9));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Name_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_4, (MR_Integer) 0))));
          MR_Word Args0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_4, (MR_Integer) 1))));
          MR_Word Var_26;
          MR_Word Kind0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_4, (MR_Integer) 2))));
          MR_Word Kind_28;

          parse_tree__prog_type_subst__apply_type_args_to_kind_3_p_0(Kind0_27, Args_5, &Kind_28);
          Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Args0_11, Args_5);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Type_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Name_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_26));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Kind_28));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          if (!((Args_5 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_type_subst.apply_type_args\'/3", (MR_String) "applied type args to builtin");
              return;
            }
          *Type_6 = Type0_4;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type0_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_23;
              MR_Word Kind0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_4, (MR_Integer) 2))));
              MR_Word Kind_30;
              MR_Word Args0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_4, (MR_Integer) 1))));

              parse_tree__prog_type_subst__apply_type_args_to_kind_3_p_0(Kind0_29, Args_5, &Kind_30);
              Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Args0_31, Args_5);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Type_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_23));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Kind_30));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              if (!((Args_5 == (MR_Word) ((MR_Unsigned) 0U))))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_type_subst.apply_type_args\'/3", (MR_String) "applied type args to builtin");
                  return;
                }
              *Type_6 = Type0_4;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_22;
              MR_Word TVar_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_4, (MR_Integer) 1))));
              MR_Word Kind0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_4, (MR_Integer) 3))));
              MR_Word Kind_34;
              MR_Word Args0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_4, (MR_Integer) 2))));

              parse_tree__prog_type_subst__apply_type_args_to_kind_3_p_0(Kind0_33, Args_5, &Kind_34);
              Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Args0_35, Args_5);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Type_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TVar_32));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_22));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Kind_34));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word BaseType0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_4, (MR_Integer) 1))));
              MR_Word next_value_of_Type0_4 = BaseType0_20;

              // direct tailcall eliminated
              ;
              Type0_4 = next_value_of_Type0_4;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_type_args_to_kind_3_p_0(
  MR_Word Kind0_4,
  MR_Word ArgTypes_5,
  MR_Word * Kind_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((ArgTypes_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *Kind_6 = Kind0_4;
    else
    {
      MR_Word HeadArgType_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_5, (MR_Integer) 0))));
      MR_Word TailArgTypes_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_5, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) Kind0_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_type_subst.apply_type_args_to_kind\'/3", (MR_String) "too many args in apply_n");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word KindA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Kind0_4, (MR_Integer) 0))));
            MR_Word KindB_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Kind0_4, (MR_Integer) 1))));
            MR_Word Var_18;

            Var_18 = parse_tree__prog_data__get_type_kind_1_f_0(HeadArgType_7);
            succeeded = parse_tree__prog_data____Unify____kind_0_0(KindA_9, Var_18);
            if (succeeded)
            {
              MR_Word next_value_of_Kind0_4 = KindB_10;
              MR_Word next_value_of_ArgTypes_5 = TailArgTypes_8;

              // direct tailcall eliminated
              ;
              Kind0_4 = next_value_of_Kind0_4;
              ArgTypes_5 = next_value_of_ArgTypes_5;
              continue;
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_type_subst.apply_type_args_to_kind\'/3", (MR_String) "kind error in apply_n");
                return;
              }
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_type_subst.apply_type_args_to_kind\'/3", (MR_String) "unbound kind variable");
            return;
          }
          break;
      }
    }
    break;
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_p_0(
  MR_Word Renaming_4,
  MR_Word TVar0_5,
  MR_Word * TVar_6)
{
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
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_KindMap_12;

    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_2_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_KindMap_12);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_KindMap_12));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(
  MR_Word Renaming_4,
  MR_Word KindMap0_5,
  MR_Word * KindMap_6)
{
  {
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Box conv1_KindMap_6;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (Renaming_4));
    }
    Var_8 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_type_subst_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0), (MR_Word) (&parse_tree__prog_type_subst_scalar_common_2[0]), Var_7, KindMap0_5, ((MR_Box) (Var_8)), &conv1_KindMap_6);
    *KindMap_6 = ((MR_Word) (conv1_KindMap_6));
  }
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
