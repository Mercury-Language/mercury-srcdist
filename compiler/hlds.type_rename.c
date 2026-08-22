/*
** Automatically generated from `type_rename.m'
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


// :- module hlds.type_rename.
// :- implementation.

/*
INIT mercury__hlds__type_rename__init
ENDINIT
*/

#include "hlds.type_rename.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "enum.mih"
#include "hlds.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "hlds.hlds_class.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.status.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type_subst.mih"




static const MR_FA_TypeInfo_Struct1 hlds__type_rename__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__type_rename__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__type_rename__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__type_rename__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__type_rename__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__type_rename__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_class__type_ctor_info_constraint_proof_0;

static void MR_CALL 
hlds__type_rename__IntroducedFrom__pred__apply_rec_subst_to_constraint_db__190__1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_rename__IntroducedFrom__pred__apply_rec_subst_to_constraint_db__190__1_3_p_0(
  MR_Word Subst_4,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26);

static void MR_CALL 
hlds__type_rename__IntroducedFrom__pred__apply_subst_to_constraint_db__169__1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_rename__IntroducedFrom__pred__apply_subst_to_constraint_db__169__1_3_p_0(
  MR_Word Subst_4,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26);

static void MR_CALL 
hlds__type_rename__IntroducedFrom__pred__apply_renaming_to_constraint_db__140__1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_rename__IntroducedFrom__pred__apply_renaming_to_constraint_db__140__1_3_p_0(
  MR_Word Renaming_4,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26);

static void MR_CALL 
hlds__type_rename__apply_rec_subst_to_constraint_proof_map_2_5_p_0(
  MR_Word Subst_6,
  MR_Word Constraint0_7,
  MR_Word Proof0_8,
  MR_Word STATE_VARIABLE_ProofMap_0_15,
  MR_Word * STATE_VARIABLE_ProofMap_16);

static void MR_CALL 
hlds__type_rename__apply_subst_to_constraint_proof_map_2_5_p_0(
  MR_Word Subst_6,
  MR_Word Constraint0_7,
  MR_Word Proof0_8,
  MR_Word STATE_VARIABLE_ProofMap_0_15,
  MR_Word * STATE_VARIABLE_ProofMap_16);

static void MR_CALL 
hlds__type_rename__rename_constraint_proof_3_p_0(
  MR_Word TSubst_4,
  MR_Word Proof0_5,
  MR_Word * Proof_6);

static void MR_CALL 
hlds__type_rename__apply_rec_subst_to_constraint_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_rename__apply_subst_to_constraint_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_rename__apply_renaming_to_constraint_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_rename__apply_rec_subst_to_constraint_proof_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__type_rename__apply_subst_to_constraint_proof_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__type_rename__apply_renaming_to_constraint_proof_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_rename__apply_rec_subst_to_constraint_db_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_rename__apply_rec_subst_to_constraint_db_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_rename__apply_rec_subst_to_constraint_db_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_rename__apply_subst_to_constraint_db_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_rename__apply_subst_to_constraint_db_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_rename__apply_subst_to_constraint_db_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_rename__apply_renaming_to_constraint_db_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_rename__apply_renaming_to_constraint_db_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_rename__apply_renaming_to_constraint_db_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_rename__apply_rec_subst_to_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_rename__apply_subst_to_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__type_rename__apply_renaming_to_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);


static /* final */ const MR_Box hlds__type_rename_scalar_common_1[2][2];

static /* final */ const MR_Box hlds__type_rename_scalar_common_2[1][3];

static /* final */ const MR_Box hlds__type_rename_scalar_common_3[9][6];

static /* final */ const MR_Box hlds__type_rename_scalar_common_4[1][8];




static /* final */ const MR_Box hlds__type_rename_scalar_common_1[2][2] = {
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
};

static /* final */ const MR_Box hlds__type_rename_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0))
  },
};

static /* final */ const MR_Box hlds__type_rename_scalar_common_3[9][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__type_rename__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__type_rename__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__type_rename__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__type_rename__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__type_rename__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__type_rename__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__type_rename__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__type_rename__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__type_rename__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__type_rename__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__type_rename__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__type_rename__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__type_rename__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__type_rename__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__type_rename__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__type_rename__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__type_rename__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box hlds__type_rename_scalar_common_4[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__type_rename__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0)),
    ((MR_Box) (&hlds__type_rename__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_class__type_ctor_info_constraint_proof_0)),
    ((MR_Box) (&hlds__type_rename__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_class__type_ctor_info_constraint_proof_0))
  },
};



#include "array.mh"


static const MR_FA_TypeInfo_Struct1 hlds__type_rename__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__type_rename__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__type_rename__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&hlds__type_rename__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__type_rename__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__type_rename__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__type_rename__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__type_rename__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__type_rename__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_class__type_ctor_info_constraint_proof_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0)
  }
};

static void MR_CALL 
hlds__type_rename__IntroducedFrom__pred__apply_rec_subst_to_constraint_db__190__1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Constraint_11;

  hlds__type_rename__apply_rec_subst_to_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
}

static void MR_CALL 
hlds__type_rename__IntroducedFrom__pred__apply_rec_subst_to_constraint_db__190__1_3_p_0(
  MR_Word Subst_4,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26)
{
  MR_Word L0_15;
  MR_Word L_16;
  MR_Word Var_32;

  mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), LambdaHeadVar__1_25, &L0_15);
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (&hlds__type_rename_scalar_common_3[1]));
    MR_hl_field(0, Var_32, 1) = ((MR_Box) (hlds__type_rename__IntroducedFrom__pred__apply_rec_subst_to_constraint_db__190__1_3_p_0_1));
    MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_32, 3) = ((MR_Box) (Subst_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_32, L0_15, &L_16);
  mercury__set__list_to_set_2_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), L_16, LambdaHeadVar__2_26);
}

static void MR_CALL 
hlds__type_rename__IntroducedFrom__pred__apply_subst_to_constraint_db__169__1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Constraint_11;

  hlds__type_rename__apply_subst_to_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
}

static void MR_CALL 
hlds__type_rename__IntroducedFrom__pred__apply_subst_to_constraint_db__169__1_3_p_0(
  MR_Word Subst_4,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26)
{
  MR_Word L0_15;
  MR_Word L_16;
  MR_Word Var_32;

  mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), LambdaHeadVar__1_25, &L0_15);
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (&hlds__type_rename_scalar_common_3[1]));
    MR_hl_field(0, Var_32, 1) = ((MR_Box) (hlds__type_rename__IntroducedFrom__pred__apply_subst_to_constraint_db__169__1_3_p_0_1));
    MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_32, 3) = ((MR_Box) (Subst_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_32, L0_15, &L_16);
  mercury__set__list_to_set_2_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), L_16, LambdaHeadVar__2_26);
}

static void MR_CALL 
hlds__type_rename__IntroducedFrom__pred__apply_renaming_to_constraint_db__140__1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Constraint_11;

  hlds__type_rename__apply_renaming_to_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
}

static void MR_CALL 
hlds__type_rename__IntroducedFrom__pred__apply_renaming_to_constraint_db__140__1_3_p_0(
  MR_Word Renaming_4,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26)
{
  MR_Word L0_16;
  MR_Word L_17;
  MR_Word Var_38;

  mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), LambdaHeadVar__1_25, &L0_16);
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (&hlds__type_rename_scalar_common_3[0]));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (hlds__type_rename__IntroducedFrom__pred__apply_renaming_to_constraint_db__140__1_3_p_0_1));
    MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_38, 3) = ((MR_Box) (Renaming_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_38, L0_16, &L_17);
  mercury__set__list_to_set_2_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), L_17, LambdaHeadVar__2_26);
}

static void MR_CALL 
hlds__type_rename__apply_rec_subst_to_constraint_proof_map_2_5_p_0(
  MR_Word Subst_6,
  MR_Word Constraint0_7,
  MR_Word Proof0_8,
  MR_Word STATE_VARIABLE_ProofMap_0_15,
  MR_Word * STATE_VARIABLE_ProofMap_16)
{
  MR_Word Constraint_10;
  MR_Word Proof_12;

  parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(Subst_6, Constraint0_7, &Constraint_10);
  if (((MR_tag((MR_Word) Proof0_8)) == (MR_Integer) 0))
    Proof_12 = Proof0_8;
  else
  {
    MR_Word Super0_13 = ((MR_Word) ((MR_hl_field(1, Proof0_8, 0))));
    MR_Word Super_14;

    parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(Subst_6, Super0_13, &Super_14);
    {
      Proof_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Proof_12, 0) = ((MR_Box) (Super_14));
    }
  }
  mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ((MR_Box) (Constraint_10)), ((MR_Box) (Proof_12)), STATE_VARIABLE_ProofMap_0_15, STATE_VARIABLE_ProofMap_16);
}

static void MR_CALL 
hlds__type_rename__apply_subst_to_constraint_proof_map_2_5_p_0(
  MR_Word Subst_6,
  MR_Word Constraint0_7,
  MR_Word Proof0_8,
  MR_Word STATE_VARIABLE_ProofMap_0_15,
  MR_Word * STATE_VARIABLE_ProofMap_16)
{
  MR_Word Constraint_10;
  MR_Word Proof_12;

  parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(Subst_6, Constraint0_7, &Constraint_10);
  if (((MR_tag((MR_Word) Proof0_8)) == (MR_Integer) 0))
    Proof_12 = Proof0_8;
  else
  {
    MR_Word Super0_13 = ((MR_Word) ((MR_hl_field(1, Proof0_8, 0))));
    MR_Word Super_14;

    parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(Subst_6, Super0_13, &Super_14);
    {
      Proof_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Proof_12, 0) = ((MR_Box) (Super_14));
    }
  }
  mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ((MR_Box) (Constraint_10)), ((MR_Box) (Proof_12)), STATE_VARIABLE_ProofMap_0_15, STATE_VARIABLE_ProofMap_16);
}

static void MR_CALL 
hlds__type_rename__rename_constraint_proof_3_p_0(
  MR_Word TSubst_4,
  MR_Word Proof0_5,
  MR_Word * Proof_6)
{
  if (((MR_tag((MR_Word) Proof0_5)) == (MR_Integer) 0))
    *Proof_6 = Proof0_5;
  else
  {
    MR_Word ClassConstraint0_8 = ((MR_Word) ((MR_hl_field(1, Proof0_5, 0))));
    MR_Word ClassConstraint_9;

    parse_tree__prog_type_subst__apply_renaming_to_prog_constraint_3_p_0(TSubst_4, ClassConstraint0_8, &ClassConstraint_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Proof_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ClassConstraint_9));
    }
  }
}

static void MR_CALL 
hlds__type_rename__apply_rec_subst_to_constraint_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
hlds__type_rename__apply_rec_subst_to_constraint_map_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_ConstraintMap_0_6,
  MR_Word * STATE_VARIABLE_ConstraintMap_7)
{
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&hlds__type_rename_scalar_common_3[8]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (hlds__type_rename__apply_rec_subst_to_constraint_map_3_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Subst_4));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), Var_8, STATE_VARIABLE_ConstraintMap_0_6, STATE_VARIABLE_ConstraintMap_7);
}

static void MR_CALL 
hlds__type_rename__apply_subst_to_constraint_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
hlds__type_rename__apply_subst_to_constraint_map_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_ConstraintMap_0_6,
  MR_Word * STATE_VARIABLE_ConstraintMap_7)
{
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&hlds__type_rename_scalar_common_3[8]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (hlds__type_rename__apply_subst_to_constraint_map_3_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Subst_4));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), Var_8, STATE_VARIABLE_ConstraintMap_0_6, STATE_VARIABLE_ConstraintMap_7);
}

static void MR_CALL 
hlds__type_rename__apply_renaming_to_constraint_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  parse_tree__prog_type_subst__apply_renaming_to_prog_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
hlds__type_rename__apply_renaming_to_constraint_map_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_ConstraintMap_0_6,
  MR_Word * STATE_VARIABLE_ConstraintMap_7)
{
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&hlds__type_rename_scalar_common_3[7]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (hlds__type_rename__apply_renaming_to_constraint_map_3_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Renaming_4));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), Var_8, STATE_VARIABLE_ConstraintMap_0_6, STATE_VARIABLE_ConstraintMap_7);
}

static void MR_CALL 
hlds__type_rename__apply_rec_subst_to_constraint_proof_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ProofMap_16;

  hlds__type_rename__apply_rec_subst_to_constraint_proof_map_2_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ProofMap_16);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ProofMap_16));
}

void MR_CALL 
hlds__type_rename__apply_rec_subst_to_constraint_proof_map_3_p_0(
  MR_Word Subst_4,
  MR_Word ProofMap0_5,
  MR_Word * ProofMap_6)
{
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Box conv1_ProofMap_6;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&hlds__type_rename_scalar_common_4[0]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (hlds__type_rename__apply_rec_subst_to_constraint_proof_map_3_p_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (Subst_4));
  }
  Var_8 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), (MR_Word) (&hlds__type_rename_scalar_common_2[0]), Var_7, ProofMap0_5, ((MR_Box) (Var_8)), &conv1_ProofMap_6);
  *ProofMap_6 = ((MR_Word) (conv1_ProofMap_6));
}

static void MR_CALL 
hlds__type_rename__apply_subst_to_constraint_proof_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ProofMap_16;

  hlds__type_rename__apply_subst_to_constraint_proof_map_2_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ProofMap_16);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ProofMap_16));
}

void MR_CALL 
hlds__type_rename__apply_subst_to_constraint_proof_map_3_p_0(
  MR_Word Subst_4,
  MR_Word ProofMap0_5,
  MR_Word * ProofMap_6)
{
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Box conv1_ProofMap_6;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&hlds__type_rename_scalar_common_4[0]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (hlds__type_rename__apply_subst_to_constraint_proof_map_3_p_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (Subst_4));
  }
  Var_8 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), (MR_Word) (&hlds__type_rename_scalar_common_2[0]), Var_7, ProofMap0_5, ((MR_Box) (Var_8)), &conv1_ProofMap_6);
  *ProofMap_6 = ((MR_Word) (conv1_ProofMap_6));
}

static void MR_CALL 
hlds__type_rename__apply_renaming_to_constraint_proof_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Proof_6;

  hlds__type_rename__rename_constraint_proof_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Proof_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Proof_6));
}

void MR_CALL 
hlds__type_rename__apply_renaming_to_constraint_proof_map_3_p_0(
  MR_Word Renaming_4,
  MR_Word ProofMap0_5,
  MR_Word * ProofMap_6)
{
  MR_bool succeeded;

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ProofMap0_5);
  if (succeeded)
    *ProofMap_6 = ProofMap0_5;
  else
  {
    MR_Word Keys0_7;
    MR_Word Values0_8;
    MR_Word Keys_9;
    MR_Word Values_10;
    MR_Word Var_11;

    mercury__map__keys_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ProofMap0_5, &Keys0_7);
    mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ProofMap0_5, &Values0_8);
    parse_tree__prog_type_subst__apply_renaming_to_prog_constraints_3_p_0(Renaming_4, Keys0_7, &Keys_9);
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_11, 0) = ((MR_Box) (&hlds__type_rename_scalar_common_3[6]));
      MR_hl_field(0, Var_11, 1) = ((MR_Box) (hlds__type_rename__apply_renaming_to_constraint_proof_map_3_p_0_1));
      MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_11, 3) = ((MR_Box) (Renaming_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), Var_11, Values0_8, &Values_10);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), Keys_9, Values_10, ProofMap_6);
  }
}

static void MR_CALL 
hlds__type_rename__apply_rec_subst_to_constraint_db_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;

  parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
}

static void MR_CALL 
hlds__type_rename__apply_rec_subst_to_constraint_db_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_26;

  hlds__type_rename__IntroducedFrom__pred__apply_rec_subst_to_constraint_db__190__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_26);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_26));
}

static void MR_CALL 
hlds__type_rename__apply_rec_subst_to_constraint_db_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Constraint_11;

  hlds__type_rename__apply_rec_subst_to_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
}

void MR_CALL 
hlds__type_rename__apply_rec_subst_to_constraint_db_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_ConstraintDb_0_23,
  MR_Word * STATE_VARIABLE_ConstraintDb_24)
{
  MR_Word Unproven0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConstraintDb_0_23, 0))));
  MR_Word Assumed0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConstraintDb_0_23, 1))));
  MR_Word Redundant0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConstraintDb_0_23, 2))));
  MR_Word Ancestors0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConstraintDb_0_23, 3))));
  MR_Word Unproven_10;
  MR_Word Assumed_11;
  MR_Word Pred_12;
  MR_Word Redundant_17;
  MR_Word AncestorsKeys0_18;
  MR_Word AncestorsValues0_19;
  MR_Word AncestorsKeys_20;
  MR_Word AncestorsValues_21;
  MR_Word Ancestors_22;
  MR_Word Var_27;
  MR_Word Var_36;

  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (&hlds__type_rename_scalar_common_3[1]));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) (hlds__type_rename__apply_rec_subst_to_constraint_db_3_p_0_1));
    MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_36, 3) = ((MR_Box) (Subst_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_36, Unproven0_6, &Unproven_10);
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_36, Assumed0_7, &Assumed_11);
  {
    Pred_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Pred_12, 0) = ((MR_Box) (&hlds__type_rename_scalar_common_3[4]));
    MR_hl_field(0, Pred_12, 1) = ((MR_Box) (hlds__type_rename__apply_rec_subst_to_constraint_db_3_p_0_2));
    MR_hl_field(0, Pred_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Pred_12, 3) = ((MR_Box) (Subst_4));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__type_rename_scalar_common_1[0]), (MR_Word) (&hlds__type_rename_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), Pred_12, Redundant0_8, &Redundant_17);
  mercury__map__keys_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__type_rename_scalar_common_1[1]), Ancestors0_9, &AncestorsKeys0_18);
  mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__type_rename_scalar_common_1[1]), Ancestors0_9, &AncestorsValues0_19);
  parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0(Subst_4, AncestorsKeys0_18, &AncestorsKeys_20);
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (&hlds__type_rename_scalar_common_3[5]));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (hlds__type_rename__apply_rec_subst_to_constraint_db_3_p_0_3));
    MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_27, 3) = ((MR_Box) (Subst_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__type_rename_scalar_common_1[1]), (MR_Word) (&hlds__type_rename_scalar_common_1[1]), Var_27, AncestorsValues0_19, &AncestorsValues_21);
  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__type_rename_scalar_common_1[1]), AncestorsKeys_20, AncestorsValues_21, &Ancestors_22);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_ConstraintDb_24 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Unproven_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Assumed_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Redundant_17));
    MR_hl_field(0, base, 3) = ((MR_Box) (Ancestors_22));
  }
}

static void MR_CALL 
hlds__type_rename__apply_subst_to_constraint_db_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;

  parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
}

static void MR_CALL 
hlds__type_rename__apply_subst_to_constraint_db_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_26;

  hlds__type_rename__IntroducedFrom__pred__apply_subst_to_constraint_db__169__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_26);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_26));
}

static void MR_CALL 
hlds__type_rename__apply_subst_to_constraint_db_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Constraint_11;

  hlds__type_rename__apply_subst_to_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
}

void MR_CALL 
hlds__type_rename__apply_subst_to_constraint_db_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_ConstraintDb_0_23,
  MR_Word * STATE_VARIABLE_ConstraintDb_24)
{
  MR_Word Unproven0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConstraintDb_0_23, 0))));
  MR_Word Assumed0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConstraintDb_0_23, 1))));
  MR_Word Redundant0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConstraintDb_0_23, 2))));
  MR_Word Ancestors0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConstraintDb_0_23, 3))));
  MR_Word Unproven_10;
  MR_Word Assumed_11;
  MR_Word Pred_12;
  MR_Word Redundant_17;
  MR_Word AncestorsKeys0_18;
  MR_Word AncestorsValues0_19;
  MR_Word AncestorsKeys_20;
  MR_Word AncestorsValues_21;
  MR_Word Ancestors_22;
  MR_Word Var_27;
  MR_Word Var_36;

  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (&hlds__type_rename_scalar_common_3[1]));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) (hlds__type_rename__apply_subst_to_constraint_db_3_p_0_1));
    MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_36, 3) = ((MR_Box) (Subst_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_36, Unproven0_6, &Unproven_10);
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_36, Assumed0_7, &Assumed_11);
  {
    Pred_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Pred_12, 0) = ((MR_Box) (&hlds__type_rename_scalar_common_3[4]));
    MR_hl_field(0, Pred_12, 1) = ((MR_Box) (hlds__type_rename__apply_subst_to_constraint_db_3_p_0_2));
    MR_hl_field(0, Pred_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Pred_12, 3) = ((MR_Box) (Subst_4));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__type_rename_scalar_common_1[0]), (MR_Word) (&hlds__type_rename_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), Pred_12, Redundant0_8, &Redundant_17);
  mercury__map__keys_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__type_rename_scalar_common_1[1]), Ancestors0_9, &AncestorsKeys0_18);
  mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__type_rename_scalar_common_1[1]), Ancestors0_9, &AncestorsValues0_19);
  parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_p_0(Subst_4, AncestorsKeys0_18, &AncestorsKeys_20);
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (&hlds__type_rename_scalar_common_3[5]));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (hlds__type_rename__apply_subst_to_constraint_db_3_p_0_3));
    MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_27, 3) = ((MR_Box) (Subst_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__type_rename_scalar_common_1[1]), (MR_Word) (&hlds__type_rename_scalar_common_1[1]), Var_27, AncestorsValues0_19, &AncestorsValues_21);
  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__type_rename_scalar_common_1[1]), AncestorsKeys_20, AncestorsValues_21, &Ancestors_22);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_ConstraintDb_24 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Unproven_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Assumed_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Redundant_17));
    MR_hl_field(0, base, 3) = ((MR_Box) (Ancestors_22));
  }
}

static void MR_CALL 
hlds__type_rename__apply_renaming_to_constraint_db_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;

  parse_tree__prog_type_subst__apply_renaming_to_prog_constraints_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
}

static void MR_CALL 
hlds__type_rename__apply_renaming_to_constraint_db_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_26;

  hlds__type_rename__IntroducedFrom__pred__apply_renaming_to_constraint_db__140__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_26);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_26));
}

static void MR_CALL 
hlds__type_rename__apply_renaming_to_constraint_db_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Constraint_11;

  hlds__type_rename__apply_renaming_to_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
}

void MR_CALL 
hlds__type_rename__apply_renaming_to_constraint_db_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_ConstraintDb_0_23,
  MR_Word * STATE_VARIABLE_ConstraintDb_24)
{
  MR_bool succeeded;
  MR_Word Unproven0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConstraintDb_0_23, 0))));
  MR_Word Assumed0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConstraintDb_0_23, 1))));
  MR_Word Redundant0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConstraintDb_0_23, 2))));
  MR_Word Ancestors0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConstraintDb_0_23, 3))));
  MR_Word TypeCtorInfo_31_31;
  MR_Word TypeInfo_32_32;
  MR_Word TypeCtorInfo_33_33;
  MR_Word TypeInfo_34_34;

  succeeded = (Unproven0_6 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    succeeded = (Assumed0_7 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TypeCtorInfo_31_31 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0);
      TypeInfo_32_32 = (MR_Word) (&hlds__type_rename_scalar_common_1[0]);
      succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_31_31, TypeInfo_32_32, Redundant0_8);
      if (succeeded)
      {
        TypeCtorInfo_33_33 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0);
        TypeInfo_34_34 = (MR_Word) (&hlds__type_rename_scalar_common_1[1]);
        succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_33_33, TypeInfo_34_34, Ancestors0_9);
      }
    }
  }
  if (succeeded)
    *STATE_VARIABLE_ConstraintDb_24 = STATE_VARIABLE_ConstraintDb_0_23;
  else
  {
    MR_Word Unproven_10;
    MR_Word Assumed_11;
    MR_Word Redundant_12;
    MR_Word Ancestors_18;
    MR_Word Var_44;

    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_44, 0) = ((MR_Box) (&hlds__type_rename_scalar_common_3[0]));
      MR_hl_field(0, Var_44, 1) = ((MR_Box) (hlds__type_rename__apply_renaming_to_constraint_db_3_p_0_1));
      MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_44, 3) = ((MR_Box) (Renaming_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_44, Unproven0_6, &Unproven_10);
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_44, Assumed0_7, &Assumed_11);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__type_rename_scalar_common_1[0]), Redundant0_8);
    if (succeeded)
      Redundant_12 = Redundant0_8;
    else
    {
      MR_Word Pred_13;

      {
        Pred_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Pred_13, 0) = ((MR_Box) (&hlds__type_rename_scalar_common_3[2]));
        MR_hl_field(0, Pred_13, 1) = ((MR_Box) (hlds__type_rename__apply_renaming_to_constraint_db_3_p_0_2));
        MR_hl_field(0, Pred_13, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Pred_13, 3) = ((MR_Box) (Renaming_4));
      }
      mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__type_rename_scalar_common_1[0]), (MR_Word) (&hlds__type_rename_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), Pred_13, Redundant0_8, &Redundant_12);
    }
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__type_rename_scalar_common_1[1]), Ancestors0_9);
    if (succeeded)
      Ancestors_18 = Ancestors0_9;
    else
    {
      MR_Word AncestorsKeys0_19;
      MR_Word AncestorsValues0_20;
      MR_Word AncestorsKeys_21;
      MR_Word AncestorsValues_22;
      MR_Word Var_27;

      mercury__map__keys_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__type_rename_scalar_common_1[1]), Ancestors0_9, &AncestorsKeys0_19);
      mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__type_rename_scalar_common_1[1]), Ancestors0_9, &AncestorsValues0_20);
      parse_tree__prog_type_subst__apply_renaming_to_prog_constraints_3_p_0(Renaming_4, AncestorsKeys0_19, &AncestorsKeys_21);
      {
        Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_27, 0) = ((MR_Box) (&hlds__type_rename_scalar_common_3[3]));
        MR_hl_field(0, Var_27, 1) = ((MR_Box) (hlds__type_rename__apply_renaming_to_constraint_db_3_p_0_3));
        MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_27, 3) = ((MR_Box) (Renaming_4));
      }
      mercury__list__map_3_p_0((MR_Word) (&hlds__type_rename_scalar_common_1[1]), (MR_Word) (&hlds__type_rename_scalar_common_1[1]), Var_27, AncestorsValues0_20, &AncestorsValues_22);
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__type_rename_scalar_common_1[1]), AncestorsKeys_21, AncestorsValues_22, &Ancestors_18);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ConstraintDb_24 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Unproven_10));
      MR_hl_field(0, base, 1) = ((MR_Box) (Assumed_11));
      MR_hl_field(0, base, 2) = ((MR_Box) (Redundant_12));
      MR_hl_field(0, base, 3) = ((MR_Box) (Ancestors_18));
    }
  }
}

static void MR_CALL 
hlds__type_rename__apply_rec_subst_to_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Constraint_11;

  hlds__type_rename__apply_rec_subst_to_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
}

void MR_CALL 
hlds__type_rename__apply_rec_subst_to_constraints_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Constraints_0_6,
  MR_Word * STATE_VARIABLE_Constraints_7)
{
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&hlds__type_rename_scalar_common_3[1]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (hlds__type_rename__apply_rec_subst_to_constraints_3_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Subst_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_8, STATE_VARIABLE_Constraints_0_6, STATE_VARIABLE_Constraints_7);
}

static void MR_CALL 
hlds__type_rename__apply_subst_to_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Constraint_11;

  hlds__type_rename__apply_subst_to_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
}

void MR_CALL 
hlds__type_rename__apply_subst_to_constraints_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Constraints_0_6,
  MR_Word * STATE_VARIABLE_Constraints_7)
{
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&hlds__type_rename_scalar_common_3[1]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (hlds__type_rename__apply_subst_to_constraints_3_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Subst_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_8, STATE_VARIABLE_Constraints_0_6, STATE_VARIABLE_Constraints_7);
}

static void MR_CALL 
hlds__type_rename__apply_renaming_to_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Constraint_11;

  hlds__type_rename__apply_renaming_to_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Constraint_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Constraint_11));
}

void MR_CALL 
hlds__type_rename__apply_renaming_to_constraints_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Constraints_0_6,
  MR_Word * STATE_VARIABLE_Constraints_7)
{
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&hlds__type_rename_scalar_common_3[0]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (hlds__type_rename__apply_renaming_to_constraints_3_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Renaming_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_8, STATE_VARIABLE_Constraints_0_6, STATE_VARIABLE_Constraints_7);
}

void MR_CALL 
hlds__type_rename__apply_rec_subst_to_constraint_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Constraint_0_10,
  MR_Word * STATE_VARIABLE_Constraint_11)
{
  MR_Word Ids_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraint_0_10, 0))));
  MR_Word ClassName_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraint_0_10, 1))));
  MR_Word ArgTypes0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraint_0_10, 2))));
  MR_Word ArgTypes_9;

  parse_tree__prog_type_subst__apply_rec_subst_to_types_3_p_0(Subst_4, ArgTypes0_8, &ArgTypes_9);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Constraint_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Ids_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (ClassName_7));
    MR_hl_field(0, base, 2) = ((MR_Box) (ArgTypes_9));
  }
}

void MR_CALL 
hlds__type_rename__apply_subst_to_constraint_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Constraint_0_10,
  MR_Word * STATE_VARIABLE_Constraint_11)
{
  MR_Word Ids_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraint_0_10, 0))));
  MR_Word ClassName_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraint_0_10, 1))));
  MR_Word ArgTypes0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraint_0_10, 2))));
  MR_Word ArgTypes_9;

  parse_tree__prog_type_subst__apply_subst_to_types_3_p_0(Subst_4, ArgTypes0_8, &ArgTypes_9);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Constraint_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Ids_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (ClassName_7));
    MR_hl_field(0, base, 2) = ((MR_Box) (ArgTypes_9));
  }
}

void MR_CALL 
hlds__type_rename__apply_renaming_to_constraint_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Constraint_0_10,
  MR_Word * STATE_VARIABLE_Constraint_11)
{
  MR_Word Ids_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraint_0_10, 0))));
  MR_Word ClassName_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraint_0_10, 1))));
  MR_Word ArgTypes0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraint_0_10, 2))));
  MR_Word ArgTypes_9;

  parse_tree__prog_type_subst__apply_renaming_to_types_3_p_0(Renaming_4, ArgTypes0_8, &ArgTypes_9);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Constraint_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Ids_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (ClassName_7));
    MR_hl_field(0, base, 2) = ((MR_Box) (ArgTypes_9));
  }
}

void mercury__hlds__type_rename__init(void)
{
}

void mercury__hlds__type_rename__init_type_tables(void)
{
}

void mercury__hlds__type_rename__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__type_rename__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.type_rename.
