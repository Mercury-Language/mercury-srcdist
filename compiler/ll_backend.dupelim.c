/*
** Automatically generated from `dupelim.m'
** by the Mercury compiler,
** version rotd-2022-09-27
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


// :- module ll_backend.dupelim.
// :- implementation.

/*
INIT mercury__ll_backend__dupelim__init
ENDINIT
*/

#include "ll_backend.dupelim.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "counter.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "hlds.code_model.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "libs.globals.mih"
#include "libs.trace_params.mih"
#include "ll_backend.basic_block.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.opt_util.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__dupelim__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__dupelim__list__ti_list_1ll_backend__llds__type_ctor_info_label_0;

static const MR_PseudoTypeInfo ll_backend__dupelim__ll_backend__dupelim__field_types_cluster_0_0[2];

static const MR_DuFunctorDesc ll_backend__dupelim__ll_backend__dupelim__du_functor_desc_cluster_0_0;

static const MR_DuFunctorDescPtr ll_backend__dupelim__ll_backend__dupelim__du_stag_ordered_cluster_0_0[1];

static const MR_DuPtagLayout ll_backend__dupelim__ll_backend__dupelim__du_ptag_ordered_cluster_0[1];

static const MR_DuFunctorDescPtr ll_backend__dupelim__ll_backend__dupelim__du_name_ordered_cluster_0[1];

static const MR_Integer ll_backend__dupelim__ll_backend__dupelim__functor_number_map_cluster_0[1];

static const MR_FA_TypeInfo_Struct1 ll_backend__dupelim__list__ti_list_1ll_backend__llds__type_ctor_info_instr_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__dupelim__tree234__ti_tree234_2list__ti_list_1ll_backend__llds__type_ctor_info_instr_0list__ti_list_1ll_backend__llds__type_ctor_info_label_0;

static MR_bool MR_CALL 
ll_backend__dupelim__IntroducedFrom__pred__process_elim_labels__285__1_2_p_0(
  MR_Word ElimLabel_24,
  MR_Word ElimLabel2_34);

static MR_bool MR_CALL 
ll_backend__dupelim__IntroducedFrom__pred__process_clusters__254__1_2_p_0(
  MR_Word Exemplar_22,
  MR_Word ExLabel_25);

static MR_bool MR_CALL 
ll_backend__dupelim__IntroducedFrom__pred__find_clusters__217__1_2_p_0(
  MR_Word Fixed_2,
  MR_Word LambdaHeadVar__1_28);

static void MR_CALL 
ll_backend__dupelim____Compare____std_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__dupelim____Unify____std_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__dupelim____Compare____cluster_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__dupelim____Unify____cluster_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__dupelim__add_pragma_pref_labels_3_p_0(
  MR_Word Instr_4,
  MR_Word STATE_VARIABLE_FoldFixed_0_22,
  MR_Word * STATE_VARIABLE_FoldFixed_23);

static MR_bool MR_CALL 
ll_backend__dupelim__process_clusters_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__dupelim__process_clusters_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_LabelSeq_0_2,
  MR_Word * STATE_VARIABLE_LabelSeq_3,
  MR_Word STATE_VARIABLE_BlockMap_0_4,
  MR_Word * STATE_VARIABLE_BlockMap_5,
  MR_Word STATE_VARIABLE_ReplMap_0_6,
  MR_Word * STATE_VARIABLE_ReplMap_7);

static MR_bool MR_CALL 
ll_backend__dupelim__process_elim_labels_11_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__dupelim__process_elim_labels_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_LabelSeq_0_3,
  MR_Word * STATE_VARIABLE_LabelSeq_4,
  MR_Word BlockMap_5,
  MR_Word Exemplar_6,
  MR_Word STATE_VARIABLE_ReplMap_0_7,
  MR_Word * STATE_VARIABLE_ReplMap_8,
  MR_Word * Instrs_9,
  MR_Word STATE_VARIABLE_MaybeFallThrough_0_10,
  MR_Word * STATE_VARIABLE_MaybeFallThrough_11);

static MR_bool MR_CALL 
ll_backend__dupelim__most_specific_instrs_3_p_0(
  MR_Word InstrsA_4,
  MR_Word InstrsB_5,
  MR_Word * Instrs_6);

static void MR_CALL 
ll_backend__dupelim__most_specific_instr_3_p_0(
  MR_Word InstrA_4,
  MR_Word InstrB_5,
  MR_Word * MaybeInstr_6);

static MR_bool MR_CALL 
ll_backend__dupelim__most_specific_rval_3_p_0(
  MR_Word RvalA_4,
  MR_Word RvalB_5,
  MR_Word * Rval_6);

static MR_bool MR_CALL 
ll_backend__dupelim__most_specific_lval_3_p_0(
  MR_Word LvalA_4,
  MR_Word LvalB_5,
  MR_Word * Lval_6);

static MR_bool MR_CALL 
ll_backend__dupelim__find_clusters_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__dupelim__find_clusters_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Fixed_2,
  MR_Word STATE_VARIABLE_Clusters_0_3,
  MR_Word * STATE_VARIABLE_Clusters_4);

static void MR_CALL 
ll_backend__dupelim__dupelim_build_maps_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__dupelim__dupelim_build_maps_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word BlockMap_2,
  MR_Word STATE_VARIABLE_StdMap_0_3,
  MR_Word * STATE_VARIABLE_StdMap_4,
  MR_Word STATE_VARIABLE_Fixed_0_5,
  MR_Word * STATE_VARIABLE_Fixed_6);

static void MR_CALL 
ll_backend__dupelim__standardize_instrs_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ll_backend__dupelim__standardize_instr_2_p_0(
  MR_Word Instr0_3,
  MR_Word * Instr_4);

static void MR_CALL 
ll_backend__dupelim__standardize_rval_2_p_0(
  MR_Word Rval0_3,
  MR_Word * Rval_4);

static void MR_CALL 
ll_backend__dupelim__standardize_lval_2_p_0(
  MR_Word Lval0_3,
  MR_Word * Lval_4);

static MR_bool MR_CALL 
ll_backend__dupelim____Unify____cluster_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__dupelim____Compare____cluster_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__dupelim____Unify____std_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__dupelim____Compare____std_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__dupelim_scalar_common_1[6][2];

static /* final */ const MR_Box ll_backend__dupelim_scalar_common_2[2][3];

static /* final */ const MR_Box ll_backend__dupelim_scalar_common_3[1][6];

static /* final */ const MR_Box ll_backend__dupelim_scalar_common_4[2][5];




static /* final */ const MR_Box ll_backend__dupelim_scalar_common_1[6][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instr_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0))
  },
};

static /* final */ const MR_Box ll_backend__dupelim_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__dupelim_scalar_common_1[0])),
    ((MR_Box) (&ll_backend__dupelim_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (&ll_backend__dupelim_scalar_common_3[0])),
    ((MR_Box) (ll_backend__dupelim__dupelim_build_maps_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__dupelim_scalar_common_3[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__dupelim__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__dupelim__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_label_0))
  },
};

static /* final */ const MR_Box ll_backend__dupelim_scalar_common_4[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__dupelim__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
};



#include "array.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__dupelim__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__dupelim__list__ti_list_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__dupelim__ll_backend__dupelim__field_types_cluster_0_0[2] = {
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
  (MR_PseudoTypeInfo) (&ll_backend__dupelim__list__ti_list_1ll_backend__llds__type_ctor_info_label_0)
};

static const MR_DuFunctorDesc ll_backend__dupelim__ll_backend__dupelim__du_functor_desc_cluster_0_0 = {
  (MR_String) "cluster",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__dupelim__ll_backend__dupelim__field_types_cluster_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__dupelim__ll_backend__dupelim__du_stag_ordered_cluster_0_0[1] = {
  &ll_backend__dupelim__ll_backend__dupelim__du_functor_desc_cluster_0_0
};

static const MR_DuPtagLayout ll_backend__dupelim__ll_backend__dupelim__du_ptag_ordered_cluster_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__dupelim__ll_backend__dupelim__du_stag_ordered_cluster_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__dupelim__ll_backend__dupelim__du_name_ordered_cluster_0[1] = {
  &ll_backend__dupelim__ll_backend__dupelim__du_functor_desc_cluster_0_0
};

static const MR_Integer ll_backend__dupelim__ll_backend__dupelim__functor_number_map_cluster_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__dupelim__ll_backend__dupelim__type_ctor_info_cluster_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__dupelim____Unify____cluster_0_0_10001)),
  ((MR_Box) (ll_backend__dupelim____Compare____cluster_0_0_10001)),
  (MR_String) "ll_backend.dupelim",
  (MR_String) "cluster",
  { ll_backend__dupelim__ll_backend__dupelim__du_name_ordered_cluster_0 },
  { ll_backend__dupelim__ll_backend__dupelim__du_ptag_ordered_cluster_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__dupelim__ll_backend__dupelim__functor_number_map_cluster_0,

};

static const MR_FA_TypeInfo_Struct1 ll_backend__dupelim__list__ti_list_1ll_backend__llds__type_ctor_info_instr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instr_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__dupelim__tree234__ti_tree234_2list__ti_list_1ll_backend__llds__type_ctor_info_instr_0list__ti_list_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__dupelim__list__ti_list_1ll_backend__llds__type_ctor_info_instr_0),
    (MR_TypeInfo) (&ll_backend__dupelim__list__ti_list_1ll_backend__llds__type_ctor_info_label_0)
  }
};

const MR_TypeCtorInfo_Struct ll_backend__dupelim__ll_backend__dupelim__type_ctor_info_std_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__dupelim____Unify____std_map_0_0_10001)),
  ((MR_Box) (ll_backend__dupelim____Compare____std_map_0_0_10001)),
  (MR_String) "ll_backend.dupelim",
  (MR_String) "std_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&ll_backend__dupelim__tree234__ti_tree234_2list__ti_list_1ll_backend__llds__type_ctor_info_instr_0list__ti_list_1ll_backend__llds__type_ctor_info_label_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
ll_backend__dupelim__IntroducedFrom__pred__process_elim_labels__285__1_2_p_0(
  MR_Word ElimLabel_24,
  MR_Word ElimLabel2_34)
{
  MR_bool succeeded;

  succeeded = ll_backend__llds____Unify____label_0_0(ElimLabel_24, ElimLabel2_34);
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__dupelim__IntroducedFrom__pred__process_clusters__254__1_2_p_0(
  MR_Word Exemplar_22,
  MR_Word ExLabel_25)
{
  MR_bool succeeded;

  succeeded = ll_backend__llds____Unify____label_0_0(Exemplar_22, ExLabel_25);
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__dupelim__IntroducedFrom__pred__find_clusters__217__1_2_p_0(
  MR_Word Fixed_2,
  MR_Word LambdaHeadVar__1_28)
{
  MR_bool succeeded;

  succeeded = mercury__set__member_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (LambdaHeadVar__1_28)), Fixed_2);
  return succeeded;
}

static void MR_CALL 
ll_backend__dupelim____Compare____std_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__dupelim_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
ll_backend__dupelim____Unify____std_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__dupelim_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
ll_backend__dupelim____Compare____cluster_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    ll_backend__llds____Compare____label_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__dupelim_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
ll_backend__dupelim____Unify____cluster_0_0(
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
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    succeeded = ll_backend__llds____Unify____label_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&ll_backend__dupelim_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__dupelim__add_pragma_pref_labels_3_p_0(
  MR_Word Instr_4,
  MR_Word STATE_VARIABLE_FoldFixed_0_22,
  MR_Word * STATE_VARIABLE_FoldFixed_23)
{
  MR_bool succeeded;
  MR_Word Uinstr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr_4, (MR_Integer) 0))));
  MR_Word MaybeFixedLabel_11;
  MR_Word MaybeLayoutLabel_12;
  MR_Word MaybeOnlyLayoutLabel_13;
  MR_Word MaybeDefLabel_15;

  succeeded = ((((MR_tag((MR_Word) Uinstr_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 27)));
  if (succeeded)
  {
    MaybeFixedLabel_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_6, (MR_Integer) 4))));
    MaybeLayoutLabel_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_6, (MR_Integer) 5))));
    MaybeOnlyLayoutLabel_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_6, (MR_Integer) 6))));
    MaybeDefLabel_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_6, (MR_Integer) 8))));
    {
      MR_Word STATE_VARIABLE_FoldFixed_24_24;
      MR_Word STATE_VARIABLE_FoldFixed_25_25;
      MR_Word STATE_VARIABLE_FoldFixed_26_26;

      if ((MaybeFixedLabel_11 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_FoldFixed_24_24 = STATE_VARIABLE_FoldFixed_0_22;
      else
      {
        MR_Word FixedLabel_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFixedLabel_11, (MR_Integer) 0))));

        mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (FixedLabel_18)), STATE_VARIABLE_FoldFixed_0_22, &STATE_VARIABLE_FoldFixed_24_24);
      }
      if ((MaybeLayoutLabel_12 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_FoldFixed_25_25 = STATE_VARIABLE_FoldFixed_24_24;
      else
      {
        MR_Word LayoutLabel_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLayoutLabel_12, (MR_Integer) 0))));

        mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (LayoutLabel_19)), STATE_VARIABLE_FoldFixed_24_24, &STATE_VARIABLE_FoldFixed_25_25);
      }
      if ((MaybeOnlyLayoutLabel_13 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_FoldFixed_26_26 = STATE_VARIABLE_FoldFixed_25_25;
      else
      {
        MR_Word OnlyLayoutLabel_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOnlyLayoutLabel_13, (MR_Integer) 0))));

        mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (OnlyLayoutLabel_20)), STATE_VARIABLE_FoldFixed_25_25, &STATE_VARIABLE_FoldFixed_26_26);
      }
      if ((MaybeDefLabel_15 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_FoldFixed_23 = STATE_VARIABLE_FoldFixed_26_26;
      else
      {
        MR_Word DefLabel_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefLabel_15, (MR_Integer) 0))));

        mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (DefLabel_21)), STATE_VARIABLE_FoldFixed_26_26, STATE_VARIABLE_FoldFixed_23);
      }
    }
  }
  else
    *STATE_VARIABLE_FoldFixed_23 = STATE_VARIABLE_FoldFixed_0_22;
}

void MR_CALL 
ll_backend__dupelim__dupelim_main_5_p_0(
  MR_Word ProcLabel_6,
  MR_Word STATE_VARIABLE_C_0_29,
  MR_Word * STATE_VARIABLE_C_30,
  MR_Word Instrs0_8,
  MR_Word * Instrs_9)
{
  MR_Word Comments_10;
  MR_Word LabelSeq0_12;
  MR_Word BlockMap0_13;
  MR_Word StdMap0_14;
  MR_Word Fixed0_15;
  MR_Word StdMap_16;
  MR_Word Fixed_17;
  MR_Word StdList_18;
  MR_Word Clusters_19;
  MR_Word _NewLabels_11;

  ll_backend__basic_block__create_basic_blocks_8_p_0(Instrs0_8, &Comments_10, ProcLabel_6, STATE_VARIABLE_C_0_29, STATE_VARIABLE_C_30, &_NewLabels_11, &LabelSeq0_12, &BlockMap0_13);
  mercury__map__init_1_p_0((MR_Word) (&ll_backend__dupelim_scalar_common_1[0]), (MR_Word) (&ll_backend__dupelim_scalar_common_1[1]), &StdMap0_14);
  mercury__set__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), &Fixed0_15);
  ll_backend__dupelim__dupelim_build_maps_6_p_0(LabelSeq0_12, BlockMap0_13, StdMap0_14, &StdMap_16, Fixed0_15, &Fixed_17);
  mercury__map__values_2_p_0((MR_Word) (&ll_backend__dupelim_scalar_common_1[0]), (MR_Word) (&ll_backend__dupelim_scalar_common_1[1]), StdMap_16, &StdList_18);
  ll_backend__dupelim__find_clusters_4_p_0(StdList_18, Fixed_17, (MR_Word) ((MR_Unsigned) 0U), &Clusters_19);
  if ((Clusters_19 == (MR_Word) ((MR_Unsigned) 0U)))
    *Instrs_9 = Instrs0_8;
  else
  {
    MR_Word ReplMap0_22;
    MR_Word LabelSeq_23;
    MR_Word BlockMap_24;
    MR_Word ReplMap_25;
    MR_Word Instrs1_26;
    MR_Word Instrs2_28;
    MR_Integer Var_27;

    mercury__map__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), &ReplMap0_22);
    ll_backend__dupelim__process_clusters_7_p_0(Clusters_19, LabelSeq0_12, &LabelSeq_23, BlockMap0_13, &BlockMap_24, ReplMap0_22, &ReplMap_25);
    ll_backend__basic_block__flatten_basic_blocks_4_p_0(LabelSeq_23, BlockMap_24, &Instrs1_26, &Var_27);
    ll_backend__opt_util__replace_labels_instruction_list_5_p_0(Instrs1_26, &Instrs2_28, ReplMap_25, (MR_Integer) 1, (MR_Integer) 0);
    *Instrs_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Comments_10, Instrs2_28);
  }
}

static MR_bool MR_CALL 
ll_backend__dupelim__process_clusters_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__dupelim__IntroducedFrom__pred__process_clusters__254__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__dupelim__process_clusters_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_LabelSeq_0_2,
  MR_Word * STATE_VARIABLE_LabelSeq_3,
  MR_Word STATE_VARIABLE_BlockMap_0_4,
  MR_Word * STATE_VARIABLE_BlockMap_5,
  MR_Word STATE_VARIABLE_ReplMap_0_6,
  MR_Word * STATE_VARIABLE_ReplMap_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ReplMap_7 = STATE_VARIABLE_ReplMap_0_6;
      *STATE_VARIABLE_BlockMap_5 = STATE_VARIABLE_BlockMap_0_4;
      *STATE_VARIABLE_LabelSeq_3 = STATE_VARIABLE_LabelSeq_0_2;
    }
    else
    {
      MR_Word Cluster_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Clusters_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Exemplar_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cluster_17, (MR_Integer) 0))));
      MR_Word ElimLabels_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cluster_17, (MR_Integer) 1))));
      MR_Word ExemplarInfo0_24;
      MR_Word ExLabel_25;
      MR_Word ExLabelInstr_26;
      MR_Word ExInstrs0_27;
      MR_Integer ExNumInstrs_28;
      MR_Word ExFallInto_29;
      MR_Word ExSideLabels_30;
      MR_Word ExMaybeFallThrough_31;
      MR_Word UnifiedInstrs_32;
      MR_Word UnifiedMaybeFallThrough_33;
      MR_Word ExemplarInfo_34;
      MR_Word Var_41;
      MR_Word STATE_VARIABLE_LabelSeq_44_44;
      MR_Word STATE_VARIABLE_ReplMap_45_45;
      MR_Word STATE_VARIABLE_BlockMap_46_46;
      MR_Box conv0_ExemplarInfo0_24;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_LabelSeq_0_2;
      MR_Word next_value_of_STATE_VARIABLE_BlockMap_0_4;
      MR_Word next_value_of_STATE_VARIABLE_ReplMap_0_6;

      mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0), STATE_VARIABLE_BlockMap_0_4, ((MR_Box) (Exemplar_22)), &conv0_ExemplarInfo0_24);
      ExemplarInfo0_24 = ((MR_Word) (conv0_ExemplarInfo0_24));
      ExLabel_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExemplarInfo0_24, (MR_Integer) 0))));
      ExLabelInstr_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExemplarInfo0_24, (MR_Integer) 1))));
      ExInstrs0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExemplarInfo0_24, (MR_Integer) 2))));
      ExNumInstrs_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ExemplarInfo0_24, (MR_Integer) 3))));
      ExFallInto_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ExemplarInfo0_24, (MR_Integer) 4))) & (MR_Integer) 1);
      ExSideLabels_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExemplarInfo0_24, (MR_Integer) 5))));
      ExMaybeFallThrough_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExemplarInfo0_24, (MR_Integer) 6))));
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&ll_backend__dupelim_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (ll_backend__dupelim__process_clusters_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (Exemplar_22));
        MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (ExLabel_25));
      }
      mercury__require__expect_3_p_0(Var_41, (MR_String) "predicate \140ll_backend.dupelim.process_clusters\'/7", (MR_String) "exemplar label mismatch");
      ll_backend__dupelim__process_elim_labels_11_p_0(ElimLabels_23, ExInstrs0_27, STATE_VARIABLE_LabelSeq_0_2, &STATE_VARIABLE_LabelSeq_44_44, STATE_VARIABLE_BlockMap_0_4, Exemplar_22, STATE_VARIABLE_ReplMap_0_6, &STATE_VARIABLE_ReplMap_45_45, &UnifiedInstrs_32, ExMaybeFallThrough_31, &UnifiedMaybeFallThrough_33);
      {
        ExemplarInfo_34 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ExemplarInfo_34, 0) = ((MR_Box) (ExLabel_25));
        MR_hl_field(MR_mktag(0), ExemplarInfo_34, 1) = ((MR_Box) (ExLabelInstr_26));
        MR_hl_field(MR_mktag(0), ExemplarInfo_34, 2) = ((MR_Box) (UnifiedInstrs_32));
        MR_hl_field(MR_mktag(0), ExemplarInfo_34, 3) = ((MR_Box) (ExNumInstrs_28));
        MR_hl_field(MR_mktag(0), ExemplarInfo_34, 4) = (MR_Box) ((MR_Unsigned) (ExFallInto_29));
        MR_hl_field(MR_mktag(0), ExemplarInfo_34, 5) = ((MR_Box) (ExSideLabels_30));
        MR_hl_field(MR_mktag(0), ExemplarInfo_34, 6) = ((MR_Box) (UnifiedMaybeFallThrough_33));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0), ((MR_Box) (Exemplar_22)), ((MR_Box) (ExemplarInfo_34)), STATE_VARIABLE_BlockMap_0_4, &STATE_VARIABLE_BlockMap_46_46);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Clusters_18;
      next_value_of_STATE_VARIABLE_LabelSeq_0_2 = STATE_VARIABLE_LabelSeq_44_44;
      next_value_of_STATE_VARIABLE_BlockMap_0_4 = STATE_VARIABLE_BlockMap_46_46;
      next_value_of_STATE_VARIABLE_ReplMap_0_6 = STATE_VARIABLE_ReplMap_45_45;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_LabelSeq_0_2 = next_value_of_STATE_VARIABLE_LabelSeq_0_2;
      STATE_VARIABLE_BlockMap_0_4 = next_value_of_STATE_VARIABLE_BlockMap_0_4;
      STATE_VARIABLE_ReplMap_0_6 = next_value_of_STATE_VARIABLE_ReplMap_0_6;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__dupelim__process_elim_labels_11_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__dupelim__IntroducedFrom__pred__process_elim_labels__285__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__dupelim__process_elim_labels_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_LabelSeq_0_3,
  MR_Word * STATE_VARIABLE_LabelSeq_4,
  MR_Word BlockMap_5,
  MR_Word Exemplar_6,
  MR_Word STATE_VARIABLE_ReplMap_0_7,
  MR_Word * STATE_VARIABLE_ReplMap_8,
  MR_Word * Instrs_9,
  MR_Word STATE_VARIABLE_MaybeFallThrough_0_10,
  MR_Word * STATE_VARIABLE_MaybeFallThrough_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Instrs_9 = HeadVar__2_2;
      *STATE_VARIABLE_MaybeFallThrough_11 = STATE_VARIABLE_MaybeFallThrough_0_10;
      *STATE_VARIABLE_ReplMap_8 = STATE_VARIABLE_ReplMap_0_7;
      *STATE_VARIABLE_LabelSeq_4 = STATE_VARIABLE_LabelSeq_0_3;
    }
    else
    {
      MR_Word ElimLabel_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ElimLabels_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ElimLabelInfo_33;
      MR_Word ElimLabel2_34;
      MR_Word ElimInstrs_36;
      MR_Word ElimMaybeFallThrough_40;
      MR_Word Var_48;
      MR_Box conv0_ElimLabelInfo_33;
      MR_Word Instrs1_41;
      MR_Word STATE_VARIABLE_MaybeFallThrough_51_51;
      MR_Word TypeCtorInfo_20_68;
      MR_Word StdInstrs1_61;
      MR_Word StdInstrs2_62;
      MR_Word LastInstr_63;
      MR_Box conv3_LastInstr_63;
      MR_Word Label_64;
      MR_Word Var_66;
      MR_Word Var_67;

      mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0), BlockMap_5, ((MR_Box) (ElimLabel_24)), &conv0_ElimLabelInfo_33);
      ElimLabelInfo_33 = ((MR_Word) (conv0_ElimLabelInfo_33));
      ElimLabel2_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ElimLabelInfo_33, (MR_Integer) 0))));
      ElimInstrs_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ElimLabelInfo_33, (MR_Integer) 2))));
      ElimMaybeFallThrough_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ElimLabelInfo_33, (MR_Integer) 6))));
      {
        Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&ll_backend__dupelim_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (ll_backend__dupelim__process_elim_labels_11_p_0_1));
        MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (ElimLabel_24));
        MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) (ElimLabel2_34));
      }
      mercury__require__expect_3_p_0(Var_48, (MR_String) "predicate \140ll_backend.dupelim.process_elim_labels\'/11", (MR_String) "elim label mismatch");
      if ((STATE_VARIABLE_MaybeFallThrough_0_10 == (MR_Word) ((MR_Unsigned) 0U)))
        StdInstrs1_61 = HeadVar__2_2;
      else
      {
        MR_Word Label_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeFallThrough_0_10, (MR_Integer) 0))));
        MR_Word LastInstr_70;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_82;
        MR_Box conv1_LastInstr_70;

        succeeded = mercury__list__last_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), HeadVar__2_2, &conv1_LastInstr_70);
        if (succeeded)
        {
          LastInstr_70 = ((MR_Word) (conv1_LastInstr_70));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LastInstr_70, (MR_Integer) 0))));
          succeeded = ((((MR_tag((MR_Word) Var_73)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_73, (MR_Integer) 0)))) == (MR_Integer) 6)));
          if (succeeded)
          {
            Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_73, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_74)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_74, (MR_Integer) 0))));
              succeeded = ll_backend__llds____Unify____label_0_0(Label_69, Var_82);
            }
          }
        }
        if (succeeded)
          StdInstrs1_61 = HeadVar__2_2;
        else
        {
          MR_Word Goto_72;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Var_78;

          {
            Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Label_69));
          }
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (Var_76));
          }
          {
            Goto_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Goto_72, 0) = ((MR_Box) (Var_75));
            MR_hl_field(MR_mktag(0), Goto_72, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Goto_72));
            MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          StdInstrs1_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), HeadVar__2_2, Var_78);
        }
      }
      if ((ElimMaybeFallThrough_40 == (MR_Word) ((MR_Unsigned) 0U)))
        StdInstrs2_62 = ElimInstrs_36;
      else
      {
        MR_Word Label_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ElimMaybeFallThrough_40, (MR_Integer) 0))));
        MR_Word LastInstr_85;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_97;
        MR_Box conv2_LastInstr_85;

        succeeded = mercury__list__last_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ElimInstrs_36, &conv2_LastInstr_85);
        if (succeeded)
        {
          LastInstr_85 = ((MR_Word) (conv2_LastInstr_85));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LastInstr_85, (MR_Integer) 0))));
          succeeded = ((((MR_tag((MR_Word) Var_88)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_88, (MR_Integer) 0)))) == (MR_Integer) 6)));
          if (succeeded)
          {
            Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_88, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_89)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_89, (MR_Integer) 0))));
              succeeded = ll_backend__llds____Unify____label_0_0(Label_84, Var_97);
            }
          }
        }
        if (succeeded)
          StdInstrs2_62 = ElimInstrs_36;
        else
        {
          MR_Word Goto_87;
          MR_Word Var_90;
          MR_Word Var_91;
          MR_Word Var_93;

          {
            Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Label_84));
          }
          {
            Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (Var_91));
          }
          {
            Goto_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Goto_87, 0) = ((MR_Box) (Var_90));
            MR_hl_field(MR_mktag(0), Goto_87, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Goto_87));
            MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          StdInstrs2_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ElimInstrs_36, Var_93);
        }
      }
      succeeded = ll_backend__dupelim__most_specific_instrs_3_p_0(StdInstrs1_61, StdInstrs2_62, &Instrs1_41);
      if (succeeded)
      {
        TypeCtorInfo_20_68 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        mercury__list__det_last_2_p_0(TypeCtorInfo_20_68, Instrs1_41, &conv3_LastInstr_63);
        LastInstr_63 = ((MR_Word) (conv3_LastInstr_63));
        Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LastInstr_63, (MR_Integer) 0))));
        succeeded = ((((MR_tag((MR_Word) Var_66)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_66, (MR_Integer) 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_66, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_67)) == (MR_Integer) 1);
          if (succeeded)
            Label_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_67, (MR_Integer) 0))));
        }
        if (succeeded)
          {
            STATE_VARIABLE_MaybeFallThrough_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeFallThrough_51_51, 0) = ((MR_Box) (Label_64));
          }
        else
          STATE_VARIABLE_MaybeFallThrough_51_51 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_LabelSeq_52_52;
        MR_Word STATE_VARIABLE_ReplMap_53_53;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_LabelSeq_0_3;
        MR_Word next_value_of_STATE_VARIABLE_ReplMap_0_7;
        MR_Word next_value_of_STATE_VARIABLE_MaybeFallThrough_0_10;

        mercury__list__delete_all_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), STATE_VARIABLE_LabelSeq_0_3, ((MR_Box) (ElimLabel_24)), &STATE_VARIABLE_LabelSeq_52_52);
        mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (ElimLabel_24)), ((MR_Box) (Exemplar_6)), STATE_VARIABLE_ReplMap_0_7, &STATE_VARIABLE_ReplMap_53_53);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = ElimLabels_25;
        next_value_of_HeadVar__2_2 = Instrs1_41;
        next_value_of_STATE_VARIABLE_LabelSeq_0_3 = STATE_VARIABLE_LabelSeq_52_52;
        next_value_of_STATE_VARIABLE_ReplMap_0_7 = STATE_VARIABLE_ReplMap_53_53;
        next_value_of_STATE_VARIABLE_MaybeFallThrough_0_10 = STATE_VARIABLE_MaybeFallThrough_51_51;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_LabelSeq_0_3 = next_value_of_STATE_VARIABLE_LabelSeq_0_3;
        STATE_VARIABLE_ReplMap_0_7 = next_value_of_STATE_VARIABLE_ReplMap_0_7;
        STATE_VARIABLE_MaybeFallThrough_0_10 = next_value_of_STATE_VARIABLE_MaybeFallThrough_0_10;
        continue;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.dupelim.process_elim_labels\'/11", (MR_String) "blocks with same standard form don\'t antiunify");
          return;
        }
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__dupelim__most_specific_instrs_3_p_0(
  MR_Word InstrsA_4,
  MR_Word InstrsB_5,
  MR_Word * Instrs_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (InstrsA_4 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word InstrA_7;
    MR_Word TailA_8;
    MR_Word InstrB_9;
    MR_Word TailB_10;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      InstrA_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstrsA_4, (MR_Integer) 0))));
      TailA_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstrsA_4, (MR_Integer) 1))));
      succeeded = (InstrsB_5 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        InstrB_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstrsB_5, (MR_Integer) 0))));
        TailB_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstrsB_5, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Word UinstrA_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstrA_7, (MR_Integer) 0))));
      MR_String CommentA_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), InstrA_7, (MR_Integer) 1))));
      MR_Word UinstrB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstrB_9, (MR_Integer) 0))));
      MR_String CommentB_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), InstrB_9, (MR_Integer) 1))));
      MR_Word Uinstr_15;
      MR_Word Var_25;

      ll_backend__dupelim__most_specific_instr_3_p_0(UinstrA_11, UinstrB_13, &Var_25);
      succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Uinstr_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0))));
        {
          MR_String Comment_16;
          MR_Word Instr_17;
          MR_Word Tail_18;

          succeeded = (strcmp(CommentA_12, CommentB_14) == 0);
          if (succeeded)
            Comment_16 = CommentA_12;
          else
            Comment_16 = (MR_String) "unified intruction";
          {
            Instr_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Instr_17, 0) = ((MR_Box) (Uinstr_15));
            MR_hl_field(MR_mktag(0), Instr_17, 1) = ((MR_Box) (Comment_16));
          }
          succeeded = ll_backend__dupelim__most_specific_instrs_3_p_0(TailA_8, TailB_10, &Tail_18);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Instrs_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr_17));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Tail_18));
            }
            succeeded = MR_TRUE;
          }
        }
      }
      else
      {
        succeeded = ((MR_tag((MR_Word) UinstrA_11)) == (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word next_value_of_InstrsA_4 = TailA_8;

          // direct tailcall eliminated
          ;
          InstrsA_4 = next_value_of_InstrsA_4;
          continue;
        }
        else
        {
          MR_Word next_value_of_InstrsB_5;

          succeeded = ((MR_tag((MR_Word) UinstrB_13)) == (MR_Integer) 1);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_InstrsB_5 = TailB_10;
            InstrsB_5 = next_value_of_InstrsB_5;
            continue;
          }
        }
      }
    }
    else
    {
      succeeded = (InstrsA_4 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (InstrsB_5 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *Instrs_6 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word TailA_33;
        MR_Word Var_26;
        MR_Word InstrA_28;

        succeeded = (InstrsA_4 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          InstrA_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstrsA_4, (MR_Integer) 0))));
          TailA_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstrsA_4, (MR_Integer) 1))));
          Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstrA_28, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_Integer) 1);
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          MR_Word next_value_of_InstrsA_4 = TailA_33;

          // direct tailcall eliminated
          ;
          InstrsA_4 = next_value_of_InstrsA_4;
          continue;
        }
        else
        {
          MR_Word Var_27;
          MR_Word InstrB_29;
          MR_Word TailB_31;
          MR_Word next_value_of_InstrsB_5;

          succeeded = (InstrsB_5 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            InstrB_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstrsB_5, (MR_Integer) 0))));
            TailB_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstrsB_5, (MR_Integer) 1))));
            Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstrB_29, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 1);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_InstrsB_5 = TailB_31;
              InstrsB_5 = next_value_of_InstrsB_5;
              continue;
            }
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
ll_backend__dupelim__most_specific_instr_3_p_0(
  MR_Word InstrA_4,
  MR_Word InstrB_5,
  MR_Word * MaybeInstr_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) InstrA_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        succeeded = ll_backend__llds____Unify____instr_0_0(InstrA_4, InstrB_5);
        if (succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeInstr_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstrA_4));
          }
        else
          *MaybeInstr_6 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      *MaybeInstr_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        succeeded = ll_backend__llds____Unify____instr_0_0(InstrA_4, InstrB_5);
        if (succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeInstr_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstrA_4));
          }
        else
          *MaybeInstr_6 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
        case (MR_Integer) 24:
        case (MR_Integer) 25:
        case (MR_Integer) 26:
        case (MR_Integer) 27:
        case (MR_Integer) 28:
        case (MR_Integer) 29:
        case (MR_Integer) 30:
          {
            succeeded = ll_backend__llds____Unify____instr_0_0(InstrA_4, InstrB_5);
            if (succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeInstr_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstrA_4));
              }
            else
              *MaybeInstr_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word LvalA_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 1))));
            MR_Word RvalA_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 2))));
            MR_Word Lval_11;
            MR_Word Rval_12;
            MR_Word LvalB_9;
            MR_Word RvalB_10;

            succeeded = ((((MR_tag((MR_Word) InstrB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              LvalB_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 1))));
              RvalB_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 2))));
              succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(LvalA_7, LvalB_9, &Lval_11);
              if (succeeded)
                succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(RvalA_8, RvalB_10, &Rval_12);
            }
            if (succeeded)
            {
              MR_Word Var_107;

              {
                Var_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_107, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_107, 1) = ((MR_Box) (Lval_11));
                MR_hl_field(MR_mktag(3), Var_107, 2) = ((MR_Box) (Rval_12));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeInstr_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_107));
              }
            }
            else
              *MaybeInstr_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word LvalA_132 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 1))));
            MR_Word RvalA_133 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 2))));
            MR_Word Lval_130;
            MR_Word Rval_131;
            MR_Word LvalB_126;
            MR_Word RvalB_127;

            succeeded = ((((MR_tag((MR_Word) InstrB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              LvalB_126 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 1))));
              RvalB_127 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 2))));
              succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(LvalA_132, LvalB_126, &Lval_130);
              if (succeeded)
                succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(RvalA_133, RvalB_127, &Rval_131);
            }
            if (succeeded)
            {
              MR_Word Var_108;

              {
                Var_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_108, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), Var_108, 1) = ((MR_Box) (Lval_130));
                MR_hl_field(MR_mktag(3), Var_108, 2) = ((MR_Box) (Rval_131));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeInstr_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_108));
              }
            }
            else
              *MaybeInstr_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word CodeAddrA_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 2))));
            MR_Word RvalA_141 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 1))));
            MR_Word Rval_140;
            MR_Word CodeAddrB_14;
            MR_Word RvalB_138;

            succeeded = ((((MR_tag((MR_Word) InstrB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 9)));
            if (succeeded)
            {
              RvalB_138 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 1))));
              CodeAddrB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 2))));
              succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(RvalA_141, RvalB_138, &Rval_140);
              if (succeeded)
                succeeded = ll_backend__llds____Unify____code_addr_0_0(CodeAddrA_13, CodeAddrB_14);
            }
            if (succeeded)
            {
              MR_Word Var_109;

              {
                Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_109, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(MR_mktag(3), Var_109, 1) = ((MR_Box) (Rval_140));
                MR_hl_field(MR_mktag(3), Var_109, 2) = ((MR_Box) (CodeAddrA_13));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeInstr_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_109));
              }
            }
            else
              *MaybeInstr_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word MaybeTag_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 2))));
            MR_Word MaybeOffset_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 3))));
            MR_Word Msg_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 5))));
            MR_Word MayUseAtomic_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 6))) & (MR_Integer) 1);
            MR_Word MaybeRegionRvalA_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 7))));
            MR_Word MaybeReuseA_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 8))));
            MR_Word LvalA_150 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 1))));
            MR_Word RvalA_151 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 4))));
            MR_Word MaybeRegionRval_26;
            MR_Word MaybeReuse_36;
            MR_Word Lval_148;
            MR_Word Rval_149;
            MR_Word TypeInfo_246_246;
            MR_Word TypeInfo_247_247;
            MR_Word TypeInfo_248_248;
            MR_Word MaybeRegionRvalB_21;
            MR_Word MaybeReuseB_22;
            MR_Word LvalB_144;
            MR_Word RvalB_145;
            MR_Word Var_228;
            MR_Word Var_229;
            MR_Word Var_230;
            MR_Word Var_231;

            succeeded = ((((MR_tag((MR_Word) InstrB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 12)));
            if (succeeded)
            {
              LvalB_144 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 1))));
              Var_228 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 2))));
              Var_229 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 3))));
              RvalB_145 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 4))));
              Var_230 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 5))));
              Var_231 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 6))) & (MR_Integer) 1);
              MaybeRegionRvalB_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 7))));
              MaybeReuseB_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 8))));
              TypeInfo_246_246 = (MR_Word) (&ll_backend__dupelim_scalar_common_1[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_246_246, ((MR_Box) (MaybeTag_15)), ((MR_Box) (Var_228)));
              if (succeeded)
              {
                TypeInfo_247_247 = (MR_Word) (&ll_backend__dupelim_scalar_common_1[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_247_247, ((MR_Box) (MaybeOffset_16)), ((MR_Box) (Var_229)));
                if (succeeded)
                {
                  TypeInfo_248_248 = (MR_Word) (&ll_backend__dupelim_scalar_common_1[5]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_248_248, ((MR_Box) (Msg_17)), ((MR_Box) (Var_230)));
                  if (succeeded)
                  {
                    succeeded = (MayUseAtomic_18 == Var_231);
                    if (succeeded)
                    {
                      succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(LvalA_150, LvalB_144, &Lval_148);
                      if (succeeded)
                      {
                        succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(RvalA_151, RvalB_145, &Rval_149);
                        if (succeeded)
                        {
                          if ((MaybeRegionRvalA_19 == (MR_Word) ((MR_Unsigned) 0U)))
                          {
                            succeeded = (MaybeRegionRvalB_21 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              MaybeRegionRval_26 = (MR_Word) ((MR_Unsigned) 0U);
                              succeeded = MR_TRUE;
                            }
                          }
                          else
                          {
                            MR_Word RegionRvalA_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRegionRvalA_19, (MR_Integer) 0))));
                            MR_Word RegionRvalB_24;
                            MR_Word RegionRval_25;

                            succeeded = (MaybeRegionRvalB_21 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              RegionRvalB_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRegionRvalB_21, (MR_Integer) 0))));
                              succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(RegionRvalA_23, RegionRvalB_24, &RegionRval_25);
                              if (succeeded)
                              {
                                {
                                  MaybeRegionRval_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), MaybeRegionRval_26, 0) = ((MR_Box) (RegionRval_25));
                                }
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                          {
                            if ((MaybeReuseA_20 == (MR_Word) ((MR_Unsigned) 0U)))
                            {
                              succeeded = (MaybeReuseB_22 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                MaybeReuse_36 = (MR_Word) ((MR_Unsigned) 0U);
                                succeeded = MR_TRUE;
                              }
                            }
                            else
                            {
                              MR_Word ReuseRvalA_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuseA_20, (MR_Integer) 0))));
                              MR_Word MaybeFlagLvalA_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuseA_20, (MR_Integer) 1))));
                              MR_Word ReuseRvalB_29;
                              MR_Word MaybeFlagLvalB_30;
                              MR_Word ReuseRval_31;
                              MR_Word MaybeFlagLval_35;

                              succeeded = (MaybeReuseB_22 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                ReuseRvalB_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuseB_22, (MR_Integer) 0))));
                                MaybeFlagLvalB_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuseB_22, (MR_Integer) 1))));
                                succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ReuseRvalA_27, ReuseRvalB_29, &ReuseRval_31);
                                if (succeeded)
                                {
                                  if ((MaybeFlagLvalA_28 == (MR_Word) ((MR_Unsigned) 0U)))
                                  {
                                    succeeded = (MaybeFlagLvalB_30 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      MaybeFlagLval_35 = (MR_Word) ((MR_Unsigned) 0U);
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                  else
                                  {
                                    MR_Word FlagLvalA_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFlagLvalA_28, (MR_Integer) 0))));
                                    MR_Word FlagLvalB_33;
                                    MR_Word FlagLval_34;

                                    succeeded = (MaybeFlagLvalB_30 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      FlagLvalB_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFlagLvalB_30, (MR_Integer) 0))));
                                      succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(FlagLvalA_32, FlagLvalB_33, &FlagLval_34);
                                      if (succeeded)
                                      {
                                        {
                                          MaybeFlagLval_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), MaybeFlagLval_35, 0) = ((MR_Box) (FlagLval_34));
                                        }
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                  }
                                  if (succeeded)
                                  {
                                    {
                                      MaybeReuse_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), MaybeReuse_36, 0) = ((MR_Box) (ReuseRval_31));
                                      MR_hl_field(MR_mktag(1), MaybeReuse_36, 1) = ((MR_Box) (MaybeFlagLval_35));
                                    }
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word Var_110;

              {
                Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_110, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(3), Var_110, 1) = ((MR_Box) (Lval_148));
                MR_hl_field(MR_mktag(3), Var_110, 2) = ((MR_Box) (MaybeTag_15));
                MR_hl_field(MR_mktag(3), Var_110, 3) = ((MR_Box) (MaybeOffset_16));
                MR_hl_field(MR_mktag(3), Var_110, 4) = ((MR_Box) (Rval_149));
                MR_hl_field(MR_mktag(3), Var_110, 5) = ((MR_Box) (Msg_17));
                MR_hl_field(MR_mktag(3), Var_110, 6) = (MR_Box) ((MR_Unsigned) (MayUseAtomic_18));
                MR_hl_field(MR_mktag(3), Var_110, 7) = ((MR_Box) (MaybeRegionRval_26));
                MR_hl_field(MR_mktag(3), Var_110, 8) = ((MR_Box) (MaybeReuse_36));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeInstr_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_110));
              }
            }
            else
              *MaybeInstr_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word LvalA_159 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 1))));
            MR_Word Lval_158;
            MR_Word LvalB_156;

            succeeded = ((((MR_tag((MR_Word) InstrB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 13)));
            if (succeeded)
            {
              LvalB_156 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 1))));
              succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(LvalA_159, LvalB_156, &Lval_158);
            }
            if (succeeded)
            {
              MR_Word Var_111;

              {
                Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_111, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                MR_hl_field(MR_mktag(3), Var_111, 1) = ((MR_Box) (Lval_158));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeInstr_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_111));
              }
            }
            else
              *MaybeInstr_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word RvalA_165 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 1))));
            MR_Word Rval_164;
            MR_Word RvalB_162;

            succeeded = ((((MR_tag((MR_Word) InstrB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 14)));
            if (succeeded)
            {
              RvalB_162 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 1))));
              succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(RvalA_165, RvalB_162, &Rval_164);
            }
            if (succeeded)
            {
              MR_Word Var_112;

              {
                Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_112, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                MR_hl_field(MR_mktag(3), Var_112, 1) = ((MR_Box) (Rval_164));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeInstr_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_112));
              }
            }
            else
              *MaybeInstr_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word RvalA_171 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 1))));
            MR_Word Rval_170;
            MR_Word RvalB_168;

            succeeded = ((((MR_tag((MR_Word) InstrB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 15)));
            if (succeeded)
            {
              RvalB_168 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 1))));
              succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(RvalA_171, RvalB_168, &Rval_170);
            }
            if (succeeded)
            {
              MR_Word Var_113;

              {
                Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) ((MR_Unsigned) 15U));
                MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (Rval_170));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeInstr_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_113));
              }
            }
            else
              *MaybeInstr_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 16:
          {
            MR_Word StackId_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_Word EmbeddedStackFrame_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 2))));
            MR_Word Var_232;
            MR_Word Var_233;

            succeeded = ((((MR_tag((MR_Word) InstrB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 16)));
            if (succeeded)
            {
              Var_232 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 1))) & (MR_Integer) 3);
              Var_233 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 2))));
              succeeded = (StackId_37 == Var_232);
              if (succeeded)
                succeeded = ll_backend__llds____Unify____embedded_stack_frame_id_0_0(EmbeddedStackFrame_38, Var_233);
            }
            if (succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeInstr_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstrA_4));
              }
            else
              *MaybeInstr_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Word FillOp_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 1))));
            MR_Word IdRvalA_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 3))));
            MR_Word NumLvalA_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 4))));
            MR_Word AddrLvalA_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 5))));
            MR_Word EmbeddedStackFrame_174 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 2))));
            MR_Word IdRval_46;
            MR_Word NumLval_47;
            MR_Word AddrLval_48;
            MR_Word IdRvalB_43;
            MR_Word NumLvalB_44;
            MR_Word AddrLvalB_45;
            MR_Word Var_234;
            MR_Word Var_235;

            succeeded = ((((MR_tag((MR_Word) InstrB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 17)));
            if (succeeded)
            {
              Var_234 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 1))));
              Var_235 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 2))));
              IdRvalB_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 3))));
              NumLvalB_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 4))));
              AddrLvalB_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 5))));
              succeeded = ll_backend__llds____Unify____region_fill_frame_op_0_0(FillOp_39, Var_234);
              if (succeeded)
              {
                succeeded = ll_backend__llds____Unify____embedded_stack_frame_id_0_0(EmbeddedStackFrame_174, Var_235);
                if (succeeded)
                {
                  succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(IdRvalA_40, IdRvalB_43, &IdRval_46);
                  if (succeeded)
                  {
                    succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(NumLvalA_41, NumLvalB_44, &NumLval_47);
                    if (succeeded)
                      succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(AddrLvalA_42, AddrLvalB_45, &AddrLval_48);
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word Var_115;

              {
                Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) ((MR_Unsigned) 17U));
                MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (FillOp_39));
                MR_hl_field(MR_mktag(3), Var_115, 2) = ((MR_Box) (EmbeddedStackFrame_174));
                MR_hl_field(MR_mktag(3), Var_115, 3) = ((MR_Box) (IdRval_46));
                MR_hl_field(MR_mktag(3), Var_115, 4) = ((MR_Box) (NumLval_47));
                MR_hl_field(MR_mktag(3), Var_115, 5) = ((MR_Box) (AddrLval_48));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeInstr_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_115));
              }
            }
            else
              *MaybeInstr_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word SetOp_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word ValueRvalA_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 3))));
            MR_Word EmbeddedStackFrame_175 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 2))));
            MR_Word ValueRval_52;
            MR_Word ValueRvalB_51;
            MR_Word Var_236;
            MR_Word Var_237;

            succeeded = ((((MR_tag((MR_Word) InstrB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 18)));
            if (succeeded)
            {
              Var_236 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 1))) & (MR_Integer) 7);
              Var_237 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 2))));
              ValueRvalB_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 3))));
              succeeded = (SetOp_49 == Var_236);
              if (succeeded)
              {
                succeeded = ll_backend__llds____Unify____embedded_stack_frame_id_0_0(EmbeddedStackFrame_175, Var_237);
                if (succeeded)
                  succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ValueRvalA_50, ValueRvalB_51, &ValueRval_52);
              }
            }
            if (succeeded)
            {
              MR_Word Var_116;

              {
                Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_116, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                MR_hl_field(MR_mktag(3), Var_116, 1) = (MR_Box) ((MR_Unsigned) (SetOp_49));
                MR_hl_field(MR_mktag(3), Var_116, 2) = ((MR_Box) (EmbeddedStackFrame_175));
                MR_hl_field(MR_mktag(3), Var_116, 3) = ((MR_Box) (ValueRval_52));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeInstr_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_116));
              }
            }
            else
              *MaybeInstr_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 19:
          {
            MR_Word UseOp_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 1))));
            MR_Word EmbeddedStackFrame_176 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 2))));
            MR_Word Var_238;
            MR_Word Var_239;

            succeeded = ((((MR_tag((MR_Word) InstrB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 19)));
            if (succeeded)
            {
              Var_238 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 1))));
              Var_239 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 2))));
              succeeded = ll_backend__llds____Unify____region_use_frame_op_0_0(UseOp_53, Var_238);
              if (succeeded)
                succeeded = ll_backend__llds____Unify____embedded_stack_frame_id_0_0(EmbeddedStackFrame_176, Var_239);
            }
            if (succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeInstr_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstrA_4));
              }
            else
              *MaybeInstr_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Word LvalA_180 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 1))));
            MR_Word Lval_179;
            MR_Word LvalB_177;

            succeeded = ((((MR_tag((MR_Word) InstrB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 20)));
            if (succeeded)
            {
              LvalB_177 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 1))));
              succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(LvalA_180, LvalB_177, &Lval_179);
            }
            if (succeeded)
            {
              MR_Word Var_118;

              {
                Var_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_118, 0) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(MR_mktag(3), Var_118, 1) = ((MR_Box) (Lval_179));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeInstr_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_118));
              }
            }
            else
              *MaybeInstr_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Word Reason_54 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 2))) & (MR_Integer) 7);
            MR_Word RvalA_186 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 1))));
            MR_Word Rval_185;
            MR_Word RvalB_183;
            MR_Word Var_240;

            succeeded = ((((MR_tag((MR_Word) InstrB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 21)));
            if (succeeded)
            {
              RvalB_183 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 1))));
              Var_240 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 2))) & (MR_Integer) 7);
              succeeded = (Reason_54 == Var_240);
              if (succeeded)
                succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(RvalA_186, RvalB_183, &Rval_185);
            }
            if (succeeded)
            {
              MR_Word Var_119;

              {
                Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) ((MR_Unsigned) 21U));
                MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (Rval_185));
                MR_hl_field(MR_mktag(3), Var_119, 2) = (MR_Box) ((MR_Unsigned) (Reason_54));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeInstr_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_119));
              }
            }
            else
              *MaybeInstr_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word LvalA_192 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 1))));
            MR_Word Lval_191;
            MR_Word LvalB_189;

            succeeded = ((((MR_tag((MR_Word) InstrB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 22)));
            if (succeeded)
            {
              LvalB_189 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 1))));
              succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(LvalA_192, LvalB_189, &Lval_191);
            }
            if (succeeded)
            {
              MR_Word Var_120;

              {
                Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_120, 0) = ((MR_Box) ((MR_Unsigned) 22U));
                MR_hl_field(MR_mktag(3), Var_120, 1) = ((MR_Box) (Lval_191));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeInstr_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_120));
              }
            }
            else
              *MaybeInstr_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word RvalA_198 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 1))));
            MR_Word Rval_197;
            MR_Word RvalB_195;

            succeeded = ((((MR_tag((MR_Word) InstrB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 23)));
            if (succeeded)
            {
              RvalB_195 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 1))));
              succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(RvalA_198, RvalB_195, &Rval_197);
            }
            if (succeeded)
            {
              MR_Word Var_121;

              {
                Var_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_121, 0) = ((MR_Box) ((MR_Unsigned) 23U));
                MR_hl_field(MR_mktag(3), Var_121, 1) = ((MR_Box) (Rval_197));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeInstr_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_121));
              }
            }
            else
              *MaybeInstr_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 31:
          {
            MR_Integer NumSlots_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 1))));
            MR_Word LvalA_204 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 2))));
            MR_Word Lval_203;
            MR_Word LvalB_201;
            MR_Integer Var_241;

            succeeded = ((((MR_tag((MR_Word) InstrB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 31)));
            if (succeeded)
            {
              Var_241 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 1))));
              LvalB_201 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 2))));
              succeeded = (NumSlots_55 == Var_241);
              if (succeeded)
                succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(LvalA_204, LvalB_201, &Lval_203);
            }
            if (succeeded)
            {
              MR_Word Var_122;

              {
                Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                MR_hl_field(MR_mktag(3), Var_122, 1) = ((MR_Box) (NumSlots_55));
                MR_hl_field(MR_mktag(3), Var_122, 2) = ((MR_Box) (Lval_203));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeInstr_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_122));
              }
            }
            else
              *MaybeInstr_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 32:
          {
            MR_Word Label_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 3))));
            MR_Word LvalA_213 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 2))));
            MR_Word RvalA_214 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 1))));
            MR_Word Lval_211;
            MR_Word Rval_212;
            MR_Word LvalB_207;
            MR_Word RvalB_208;
            MR_Word Var_242;

            succeeded = ((((MR_tag((MR_Word) InstrB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 32)));
            if (succeeded)
            {
              RvalB_208 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 1))));
              LvalB_207 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 2))));
              Var_242 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 3))));
              succeeded = ll_backend__llds____Unify____label_0_0(Label_56, Var_242);
              if (succeeded)
              {
                succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(RvalA_214, RvalB_208, &Rval_212);
                if (succeeded)
                  succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(LvalA_213, LvalB_207, &Lval_211);
              }
            }
            if (succeeded)
            {
              MR_Word Var_123;

              {
                Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_123, 0) = ((MR_Box) ((MR_Unsigned) 32U));
                MR_hl_field(MR_mktag(3), Var_123, 1) = ((MR_Box) (Rval_212));
                MR_hl_field(MR_mktag(3), Var_123, 2) = ((MR_Box) (Lval_211));
                MR_hl_field(MR_mktag(3), Var_123, 3) = ((MR_Box) (Label_56));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeInstr_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_123));
              }
            }
            else
              *MaybeInstr_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 33:
          {
            MR_Word LCRvalA_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 1))));
            MR_Word LCSRvalA_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 2))));
            MR_Word Label_219 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 3))));
            MR_Word LCRval_61;
            MR_Word LCSRval_62;
            MR_Word LCRvalB_59;
            MR_Word LCSRvalB_60;
            MR_Word Var_243;

            succeeded = ((((MR_tag((MR_Word) InstrB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 33)));
            if (succeeded)
            {
              LCRvalB_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 1))));
              LCSRvalB_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 2))));
              Var_243 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 3))));
              succeeded = ll_backend__llds____Unify____label_0_0(Label_219, Var_243);
              if (succeeded)
              {
                succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(LCRvalA_57, LCRvalB_59, &LCRval_61);
                if (succeeded)
                  succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(LCSRvalA_58, LCSRvalB_60, &LCSRval_62);
              }
            }
            if (succeeded)
            {
              MR_Word Var_124;

              {
                Var_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_124, 0) = ((MR_Box) ((MR_Unsigned) 33U));
                MR_hl_field(MR_mktag(3), Var_124, 1) = ((MR_Box) (LCRval_61));
                MR_hl_field(MR_mktag(3), Var_124, 2) = ((MR_Box) (LCSRval_62));
                MR_hl_field(MR_mktag(3), Var_124, 3) = ((MR_Box) (Label_219));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeInstr_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_124));
              }
            }
            else
              *MaybeInstr_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 34:
          {
            MR_Word LCRvalA_226 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 1))));
            MR_Word LCSRvalA_227 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrA_4, (MR_Integer) 2))));
            MR_Word LCRval_224;
            MR_Word LCSRval_225;
            MR_Word LCRvalB_220;
            MR_Word LCSRvalB_221;

            succeeded = ((((MR_tag((MR_Word) InstrB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 34)));
            if (succeeded)
            {
              LCRvalB_220 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 1))));
              LCSRvalB_221 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstrB_5, (MR_Integer) 2))));
              succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(LCRvalA_226, LCRvalB_220, &LCRval_224);
              if (succeeded)
                succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(LCSRvalA_227, LCSRvalB_221, &LCSRval_225);
            }
            if (succeeded)
            {
              MR_Word Var_125;

              {
                Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_125, 0) = ((MR_Box) ((MR_Unsigned) 34U));
                MR_hl_field(MR_mktag(3), Var_125, 1) = ((MR_Box) (LCRval_224));
                MR_hl_field(MR_mktag(3), Var_125, 2) = ((MR_Box) (LCSRval_225));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeInstr_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_125));
              }
            }
            else
              *MaybeInstr_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
ll_backend__dupelim__most_specific_rval_3_p_0(
  MR_Word RvalA_4,
  MR_Word RvalB_5,
  MR_Word * Rval_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) RvalA_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word LvalA_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalA_4, (MR_Integer) 0))));
        MR_Word LvalB_8;
        MR_Word Lval_9;

        succeeded = ((MR_tag((MR_Word) RvalB_5)) == (MR_Integer) 0);
        if (succeeded)
        {
          LvalB_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalB_5, (MR_Integer) 0))));
          succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(LvalA_7, LvalB_8, &Lval_9);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *Rval_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Lval_9));
            }
            succeeded = MR_TRUE;
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.dupelim.most_specific_rval\'/3", (MR_String) "var");
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 2:
      {
        succeeded = ll_backend__llds____Unify____rval_0_0(RvalB_5, RvalA_4);
        if (succeeded)
        {
          *Rval_6 = RvalA_4;
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 5:
          {
            succeeded = ll_backend__llds____Unify____rval_0_0(RvalB_5, RvalA_4);
            if (succeeded)
            {
              *Rval_6 = RvalA_4;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 1))));
            MR_Word RvalAL_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 2))));
            MR_Word RvalBL_18;
            MR_Word RvalL_19;
            MR_Word Var_33;

            succeeded = ((((MR_tag((MR_Word) RvalB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 1))));
              RvalBL_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 2))));
              succeeded = ll_backend__llds____Unify____llds_type_0_0(Type_16, Var_33);
              if (succeeded)
              {
                succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(RvalAL_17, RvalBL_18, &RvalL_19);
                if (succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Rval_6 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_16));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (RvalL_19));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Unop_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 1))));
            MR_Word RvalAL_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 2))));
            MR_Word RvalBL_28;
            MR_Word RvalL_29;
            MR_Word Var_34;

            succeeded = ((((MR_tag((MR_Word) RvalB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (succeeded)
            {
              Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 1))));
              RvalBL_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 2))));
              succeeded = backend_libs__builtin_ops____Unify____unary_op_0_0(Unop_20, Var_34);
              if (succeeded)
              {
                succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(RvalAL_27, RvalBL_28, &RvalL_29);
                if (succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Rval_6 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Unop_20));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (RvalL_29));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Binnop_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 1))));
            MR_Word RvalAR_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 3))));
            MR_Word RvalBR_23;
            MR_Word RvalR_24;
            MR_Word RvalAL_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 2))));
            MR_Word RvalBL_31;
            MR_Word RvalL_32;
            MR_Word Var_35;

            succeeded = ((((MR_tag((MR_Word) RvalB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (succeeded)
            {
              Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 1))));
              RvalBL_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 2))));
              RvalBR_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 3))));
              succeeded = backend_libs__builtin_ops____Unify____binary_op_0_0(Binnop_21, Var_35);
              if (succeeded)
              {
                succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(RvalAL_30, RvalBL_31, &RvalL_32);
                if (succeeded)
                {
                  succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(RvalAR_22, RvalBR_23, &RvalR_24);
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      *Rval_6 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Binnop_21));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (RvalL_32));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (RvalR_24));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__dupelim__most_specific_lval_3_p_0(
  MR_Word LvalA_4,
  MR_Word LvalB_5,
  MR_Word * Lval_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) LvalA_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        succeeded = ll_backend__llds____Unify____lval_0_0(LvalA_4, LvalB_5);
        if (succeeded)
        {
          *Lval_6 = LvalA_4;
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        succeeded = ll_backend__llds____Unify____lval_0_0(LvalA_4, LvalB_5);
        if (succeeded)
        {
          *Lval_6 = LvalA_4;
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), LvalA_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
          {
            succeeded = ll_backend__llds____Unify____lval_0_0(LvalA_4, LvalB_5);
            if (succeeded)
            {
              *Lval_6 = LvalA_4;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word MaybeTagA_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LvalA_4, (MR_Integer) 1))));
            MR_Word Addr_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LvalA_4, (MR_Integer) 2))));
            MR_Word FieldNum_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LvalA_4, (MR_Integer) 3))));
            MR_Word MaybeTagB_26;
            MR_Word MaybeTag_27;
            MR_Word Var_31;
            MR_Word Var_32;
            MR_Word TypeInfo_36_36;

            succeeded = ((((MR_tag((MR_Word) LvalB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), LvalB_5, (MR_Integer) 0)))) == (MR_Integer) 9)));
            if (succeeded)
            {
              MaybeTagB_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LvalB_5, (MR_Integer) 1))));
              Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LvalB_5, (MR_Integer) 2))));
              Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LvalB_5, (MR_Integer) 3))));
              succeeded = ll_backend__llds____Unify____rval_0_0(Addr_24, Var_31);
              if (succeeded)
              {
                succeeded = ll_backend__llds____Unify____rval_0_0(FieldNum_25, Var_32);
                if (succeeded)
                {
                  TypeInfo_36_36 = (MR_Word) (&ll_backend__dupelim_scalar_common_1[3]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_36_36, ((MR_Box) (MaybeTagA_23)), ((MR_Box) (MaybeTagB_26)));
                  if (succeeded)
                    MaybeTag_27 = MaybeTagA_23;
                  else
                    MaybeTag_27 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *Lval_6 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MaybeTag_27));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Addr_24));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (FieldNum_25));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
          }
          break;
        case (MR_Integer) 12:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.dupelim.most_specific_lval\'/3", (MR_String) "lvar");
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__dupelim__find_clusters_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__dupelim__IntroducedFrom__pred__find_clusters__217__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
ll_backend__dupelim__find_clusters_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Fixed_2,
  MR_Word STATE_VARIABLE_Clusters_0_3,
  MR_Word * STATE_VARIABLE_Clusters_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Clusters_4 = STATE_VARIABLE_Clusters_0_3;
    else
    {
      MR_Word Labels_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word LabelsList_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Clusters_29_29;
      MR_Word FixedLabels_18;
      MR_Word NonFixedLabels_19;
      MR_Word FirstNonFixed_20;
      MR_Word OtherNonFixed_21;
      MR_Word TypeCtorInfo_33_33;
      MR_Word IsFallenInto_16;
      MR_Word Var_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Clusters_0_3;

      succeeded = (Labels_9 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Labels_9, (MR_Integer) 1))));
        succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TypeCtorInfo_33_33 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0);
          {
            IsFallenInto_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), IsFallenInto_16, 0) = ((MR_Box) (&ll_backend__dupelim_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), IsFallenInto_16, 1) = ((MR_Box) (ll_backend__dupelim__find_clusters_4_p_0_1));
            MR_hl_field(MR_mktag(0), IsFallenInto_16, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), IsFallenInto_16, 3) = ((MR_Box) (Fixed_2));
          }
          mercury__list__filter_4_p_0(TypeCtorInfo_33_33, IsFallenInto_16, Labels_9, &FixedLabels_18, &NonFixedLabels_19);
          succeeded = (NonFixedLabels_19 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            FirstNonFixed_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonFixedLabels_19, (MR_Integer) 0))));
            OtherNonFixed_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonFixedLabels_19, (MR_Integer) 1))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word Cluster_24;

        if ((FixedLabels_18 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            Cluster_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Cluster_24, 0) = ((MR_Box) (FirstNonFixed_20));
            MR_hl_field(MR_mktag(0), Cluster_24, 1) = ((MR_Box) (OtherNonFixed_21));
          }
        else
        {
          MR_Word ChosenLabel_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FixedLabels_18, (MR_Integer) 0))));

          {
            Cluster_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Cluster_24, 0) = ((MR_Box) (ChosenLabel_22));
            MR_hl_field(MR_mktag(0), Cluster_24, 1) = ((MR_Box) (NonFixedLabels_19));
          }
        }
        {
          STATE_VARIABLE_Clusters_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Clusters_29_29, 0) = ((MR_Box) (Cluster_24));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Clusters_29_29, 1) = ((MR_Box) (STATE_VARIABLE_Clusters_0_3));
        }
      }
      else
        STATE_VARIABLE_Clusters_29_29 = STATE_VARIABLE_Clusters_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = LabelsList_10;
      next_value_of_STATE_VARIABLE_Clusters_0_3 = STATE_VARIABLE_Clusters_29_29;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Clusters_0_3 = next_value_of_STATE_VARIABLE_Clusters_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__dupelim__dupelim_build_maps_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_FoldFixed_23;

  ll_backend__dupelim__add_pragma_pref_labels_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_FoldFixed_23);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_FoldFixed_23));
}

static void MR_CALL 
ll_backend__dupelim__dupelim_build_maps_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word BlockMap_2,
  MR_Word STATE_VARIABLE_StdMap_0_3,
  MR_Word * STATE_VARIABLE_StdMap_4,
  MR_Word STATE_VARIABLE_Fixed_0_5,
  MR_Word * STATE_VARIABLE_Fixed_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Fixed_6 = STATE_VARIABLE_Fixed_0_5;
      *STATE_VARIABLE_StdMap_4 = STATE_VARIABLE_StdMap_0_3;
    }
    else
    {
      MR_Word Label_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Labels_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word BlockInfo_19;
      MR_Word Instrs_22;
      MR_Integer NumInstrs_23;
      MR_Word MaybeFallThrough_26;
      MR_Word STATE_VARIABLE_StdMap_40_40;
      MR_Word STATE_VARIABLE_Fixed_41_41;
      MR_Word STATE_VARIABLE_Fixed_43_43;
      MR_Box conv0_BlockInfo_19;
      MR_Box conv2_STATE_VARIABLE_Fixed_43_43;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_StdMap_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Fixed_0_5;

      mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0), BlockMap_2, ((MR_Box) (Label_14)), &conv0_BlockInfo_19);
      BlockInfo_19 = ((MR_Word) (conv0_BlockInfo_19));
      Instrs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_19, (MR_Integer) 2))));
      NumInstrs_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), BlockInfo_19, (MR_Integer) 3))));
      MaybeFallThrough_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_19, (MR_Integer) 6))));
      succeeded = (NumInstrs_23 < (MR_Integer) 10);
      if (succeeded)
      {
        MR_Word StdInstrs_27;
        MR_Word MaybeOldCluster_28;
        MR_Word Var_36;
        MR_Word STATE_VARIABLE_StdMap_37_37;
        MR_Word Uinstrs1_53;

        ll_backend__dupelim__standardize_instrs_2_p_0(Instrs_22, &Uinstrs1_53);
        if ((MaybeFallThrough_26 == (MR_Word) ((MR_Unsigned) 0U)))
          StdInstrs_27 = Uinstrs1_53;
        else
        {
          MR_Word Label_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFallThrough_26, (MR_Integer) 0))));
          MR_Word Goto_55;
          MR_Word Var_56;
          MR_Word Var_57;

          {
            Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Label_54));
          }
          {
            Goto_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Goto_55, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), Goto_55, 1) = ((MR_Box) (Var_56));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Goto_55));
            MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          StdInstrs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instr_0), Uinstrs1_53, Var_57);
        }
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Label_14));
          MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__search_insert_5_p_0((MR_Word) (&ll_backend__dupelim_scalar_common_1[0]), (MR_Word) (&ll_backend__dupelim_scalar_common_1[1]), ((MR_Box) (StdInstrs_27)), ((MR_Box) (Var_36)), &MaybeOldCluster_28, STATE_VARIABLE_StdMap_0_3, &STATE_VARIABLE_StdMap_37_37);
        if ((MaybeOldCluster_28 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_StdMap_40_40 = STATE_VARIABLE_StdMap_37_37;
        else
        {
          MR_Word OldCluster_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOldCluster_28, (MR_Integer) 0))));
          MR_Word Var_39;

          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Label_14));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (OldCluster_29));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__dupelim_scalar_common_1[0]), (MR_Word) (&ll_backend__dupelim_scalar_common_1[1]), ((MR_Box) (StdInstrs_27)), ((MR_Box) (Var_39)), STATE_VARIABLE_StdMap_37_37, &STATE_VARIABLE_StdMap_40_40);
        }
      }
      else
        STATE_VARIABLE_StdMap_40_40 = STATE_VARIABLE_StdMap_0_3;
      if ((MaybeFallThrough_26 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Fixed_41_41 = STATE_VARIABLE_Fixed_0_5;
      else
      {
        MR_Word FallIntoLabel_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFallThrough_26, (MR_Integer) 0))));

        mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (FallIntoLabel_30)), STATE_VARIABLE_Fixed_0_5, &STATE_VARIABLE_Fixed_41_41);
      }
      mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), (MR_Word) (&ll_backend__dupelim_scalar_common_1[2]), (MR_Word) (&ll_backend__dupelim_scalar_common_2[1]), Instrs_22, ((MR_Box) (STATE_VARIABLE_Fixed_41_41)), &conv2_STATE_VARIABLE_Fixed_43_43);
      STATE_VARIABLE_Fixed_43_43 = ((MR_Word) (conv2_STATE_VARIABLE_Fixed_43_43));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Labels_15;
      next_value_of_STATE_VARIABLE_StdMap_0_3 = STATE_VARIABLE_StdMap_40_40;
      next_value_of_STATE_VARIABLE_Fixed_0_5 = STATE_VARIABLE_Fixed_43_43;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_StdMap_0_3 = next_value_of_STATE_VARIABLE_StdMap_0_3;
      STATE_VARIABLE_Fixed_0_5 = next_value_of_STATE_VARIABLE_Fixed_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__dupelim__standardize_instrs_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Instr_3;
    MR_Word Instrs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word StdInstrs1_7;
    MR_Word StdInstr_8;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    Instr_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0))));
    ll_backend__dupelim__standardize_instrs_2_p_0(Instrs_5, &StdInstrs1_7);
    ll_backend__dupelim__standardize_instr_2_p_0(Instr_3, &StdInstr_8);
    succeeded = ((MR_tag((MR_Word) StdInstr_8)) == (MR_Integer) 1);
    if (succeeded)
      *HeadVar__2_2 = StdInstrs1_7;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StdInstr_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (StdInstrs1_7));
      }
  }
}

static void MR_CALL 
ll_backend__dupelim__standardize_instr_2_p_0(
  MR_Word Instr0_3,
  MR_Word * Instr_4)
{
  switch (MR_tag((MR_Word) Instr0_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Instr_4 = Instr0_3;
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *Instr_4 = Instr0_3;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 16:
        case (MR_Integer) 19:
        case (MR_Integer) 24:
        case (MR_Integer) 25:
        case (MR_Integer) 26:
        case (MR_Integer) 27:
        case (MR_Integer) 29:
          *Instr_4 = Instr0_3;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 1))));
            MR_Word Rval0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 2))));
            MR_Word Lval_7;
            MR_Word Rval_8;

            ll_backend__dupelim__standardize_lval_2_p_0(Lval0_5, &Lval_7);
            ll_backend__dupelim__standardize_rval_2_p_0(Rval0_6, &Rval_8);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Instr_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_7));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_8));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval0_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 1))));
            MR_Word Rval0_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 2))));
            MR_Word Lval_89;
            MR_Word Rval_90;

            ll_backend__dupelim__standardize_lval_2_p_0(Lval0_87, &Lval_89);
            ll_backend__dupelim__standardize_rval_2_p_0(Rval0_88, &Rval_90);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Instr_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_89));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_90));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word CodeAddr_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 2))));
            MR_Word Rval0_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 1))));
            MR_Word Rval_92;

            ll_backend__dupelim__standardize_rval_2_p_0(Rval0_91, &Rval_92);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Instr_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_92));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (CodeAddr_9));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Lval0_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 1))));
            MR_Word Lval_94;

            ll_backend__dupelim__standardize_lval_2_p_0(Lval0_93, &Lval_94);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Instr_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_94));
            }
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word Lval0_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 1))));
            MR_Word Lval_96;

            ll_backend__dupelim__standardize_lval_2_p_0(Lval0_95, &Lval_96);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Instr_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_96));
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word MaybeTag_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 2))));
            MR_Word MaybeOffset_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 3))));
            MR_Word Msg_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 5))));
            MR_Word MayUseAtomic_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 6))) & (MR_Integer) 1);
            MR_Word MaybeRegionRval0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 7))));
            MR_Word MaybeReuse0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 8))));
            MR_Word MaybeRegionRval_18;
            MR_Word MaybeReuse_25;
            MR_Word Lval0_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 1))));
            MR_Word Rval0_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 4))));
            MR_Word Lval_99;
            MR_Word Rval_100;

            ll_backend__dupelim__standardize_lval_2_p_0(Lval0_97, &Lval_99);
            ll_backend__dupelim__standardize_rval_2_p_0(Rval0_98, &Rval_100);
            if ((MaybeRegionRval0_14 == (MR_Word) ((MR_Unsigned) 0U)))
              MaybeRegionRval_18 = MaybeRegionRval0_14;
            else
            {
              MR_Word RegionRval0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRegionRval0_14, (MR_Integer) 0))));
              MR_Word RegionRval_17;

              ll_backend__dupelim__standardize_rval_2_p_0(RegionRval0_16, &RegionRval_17);
              {
                MaybeRegionRval_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeRegionRval_18, 0) = ((MR_Box) (RegionRval_17));
              }
            }
            if ((MaybeReuse0_15 == (MR_Word) ((MR_Unsigned) 0U)))
              MaybeReuse_25 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word ReuseRval0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuse0_15, (MR_Integer) 0))));
              MR_Word MaybeFlagLval0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuse0_15, (MR_Integer) 1))));
              MR_Word ReuseRval_21;
              MR_Word MaybeFlagLval_24;

              ll_backend__dupelim__standardize_rval_2_p_0(ReuseRval0_19, &ReuseRval_21);
              if ((MaybeFlagLval0_20 == (MR_Word) ((MR_Unsigned) 0U)))
                MaybeFlagLval_24 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word FlagLval0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFlagLval0_20, (MR_Integer) 0))));
                MR_Word FlagLval_23;

                ll_backend__dupelim__standardize_lval_2_p_0(FlagLval0_22, &FlagLval_23);
                {
                  MaybeFlagLval_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeFlagLval_24, 0) = ((MR_Box) (FlagLval_23));
                }
              }
              {
                MaybeReuse_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeReuse_25, 0) = ((MR_Box) (ReuseRval_21));
                MR_hl_field(MR_mktag(1), MaybeReuse_25, 1) = ((MR_Box) (MaybeFlagLval_24));
              }
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL));
              *Instr_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_99));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeTag_10));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybeOffset_11));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Rval_100));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (Msg_12));
              MR_hl_field(MR_mktag(3), base, 6) = (MR_Box) ((MR_Unsigned) (MayUseAtomic_13));
              MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (MaybeRegionRval_18));
              MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (MaybeReuse_25));
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Lval0_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 1))));
            MR_Word Lval_102;

            ll_backend__dupelim__standardize_lval_2_p_0(Lval0_101, &Lval_102);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Instr_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 13U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_102));
            }
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Rval0_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 1))));
            MR_Word Rval_104;

            ll_backend__dupelim__standardize_rval_2_p_0(Rval0_103, &Rval_104);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Instr_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_104));
            }
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Rval0_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 1))));
            MR_Word Rval_107;

            ll_backend__dupelim__standardize_rval_2_p_0(Rval0_106, &Rval_107);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Instr_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 15U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_107));
            }
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Word FillOp_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 1))));
            MR_Word EmbeddedStackFrame_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 2))));
            MR_Word IdRval0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 3))));
            MR_Word NumLval0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 4))));
            MR_Word AddrLval0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 5))));
            MR_Word IdRval_31;
            MR_Word NumLval_32;
            MR_Word AddrLval_33;

            ll_backend__dupelim__standardize_rval_2_p_0(IdRval0_28, &IdRval_31);
            ll_backend__dupelim__standardize_lval_2_p_0(NumLval0_29, &NumLval_32);
            ll_backend__dupelim__standardize_lval_2_p_0(AddrLval0_30, &AddrLval_33);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *Instr_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 17U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (FillOp_26));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (EmbeddedStackFrame_27));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (IdRval_31));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (NumLval_32));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (AddrLval_33));
            }
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word SetOp_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word ValueRval0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 3))));
            MR_Word ValueRval_36;
            MR_Word EmbeddedStackFrame_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 2))));

            ll_backend__dupelim__standardize_rval_2_p_0(ValueRval0_35, &ValueRval_36);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Instr_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 18U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (SetOp_34));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (EmbeddedStackFrame_105));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ValueRval_36));
            }
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Word Lval0_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 1))));
            MR_Word Lval_109;

            ll_backend__dupelim__standardize_lval_2_p_0(Lval0_108, &Lval_109);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Instr_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_109));
            }
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Word Reason_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 2))) & (MR_Integer) 7);
            MR_Word Rval0_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 1))));
            MR_Word Rval_111;

            ll_backend__dupelim__standardize_rval_2_p_0(Rval0_110, &Rval_111);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Instr_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 21U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_111));
              MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) (Reason_37));
            }
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word Lval0_112 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 1))));
            MR_Word Lval_113;

            ll_backend__dupelim__standardize_lval_2_p_0(Lval0_112, &Lval_113);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Instr_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 22U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_113));
            }
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word Rval0_114 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 1))));
            MR_Word Rval_115;

            ll_backend__dupelim__standardize_rval_2_p_0(Rval0_114, &Rval_115);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Instr_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 23U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_115));
            }
          }
          break;
        case (MR_Integer) 28:
          {
            MR_Integer N_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 2))));
            MR_Integer ConjId_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 3))));
            MR_Word Lval0_116 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 1))));
            MR_Word Lval_117;

            ll_backend__dupelim__standardize_lval_2_p_0(Lval0_116, &Lval_117);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Instr_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_117));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (N_38));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ConjId_39));
            }
          }
          break;
        case (MR_Integer) 30:
          {
            MR_Word Label_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 2))));
            MR_Word Lval0_118 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 1))));
            MR_Word Lval_119;

            ll_backend__dupelim__standardize_lval_2_p_0(Lval0_118, &Lval_119);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Instr_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 30U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_119));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Label_40));
            }
          }
          break;
        case (MR_Integer) 31:
          {
            MR_Integer NumSlots_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 1))));
            MR_Word Lval0_120 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 2))));
            MR_Word Lval_121;

            ll_backend__dupelim__standardize_lval_2_p_0(Lval0_120, &Lval_121);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Instr_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 31U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (NumSlots_41));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Lval_121));
            }
          }
          break;
        case (MR_Integer) 32:
          {
            MR_Word Lval0_122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 2))));
            MR_Word Rval0_123 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 1))));
            MR_Word Lval_124;
            MR_Word Rval_125;
            MR_Word Label_126 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 3))));

            ll_backend__dupelim__standardize_rval_2_p_0(Rval0_123, &Rval_125);
            ll_backend__dupelim__standardize_lval_2_p_0(Lval0_122, &Lval_124);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Instr_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 32U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_125));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Lval_124));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Label_126));
            }
          }
          break;
        case (MR_Integer) 33:
          {
            MR_Word LCRval0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 1))));
            MR_Word LCSRval0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 2))));
            MR_Word LCRval_44;
            MR_Word LCSRval_45;
            MR_Word Label_127 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 3))));

            ll_backend__dupelim__standardize_rval_2_p_0(LCRval0_42, &LCRval_44);
            ll_backend__dupelim__standardize_rval_2_p_0(LCSRval0_43, &LCSRval_45);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Instr_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 33U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (LCRval_44));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (LCSRval_45));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Label_127));
            }
          }
          break;
        case (MR_Integer) 34:
          {
            MR_Word LCRval0_128 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 1))));
            MR_Word LCSRval0_129 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Instr0_3, (MR_Integer) 2))));
            MR_Word LCRval_130;
            MR_Word LCSRval_131;

            ll_backend__dupelim__standardize_rval_2_p_0(LCRval0_128, &LCRval_130);
            ll_backend__dupelim__standardize_rval_2_p_0(LCSRval0_129, &LCSRval_131);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Instr_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 34U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (LCRval_130));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (LCSRval_131));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__dupelim__standardize_rval_2_p_0(
  MR_Word Rval0_3,
  MR_Word * Rval_4)
{
  switch (MR_tag((MR_Word) Rval0_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Lval0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Rval0_3, (MR_Integer) 0))));
        MR_Word Lval_6;

        ll_backend__dupelim__standardize_lval_2_p_0(Lval0_5, &Lval_6);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Rval_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Lval_6));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.dupelim.standardize_rval\'/2", (MR_String) "var");
        return;
      }
      break;
    case (MR_Integer) 2:
      *Rval_4 = Rval0_3;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval0_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 5:
          *Rval_4 = Rval0_3;
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_3, (MR_Integer) 1))));
            MR_Word Rval0L_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_3, (MR_Integer) 2))));
            MR_Word RvalL_14;

            ll_backend__dupelim__standardize_rval_2_p_0(Rval0L_13, &RvalL_14);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_12));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (RvalL_14));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Unop_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_3, (MR_Integer) 1))));
            MR_Word Rval0L_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_3, (MR_Integer) 2))));
            MR_Word RvalL_23;

            ll_backend__dupelim__standardize_rval_2_p_0(Rval0L_22, &RvalL_23);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Unop_15));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (RvalL_23));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Binop_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_3, (MR_Integer) 1))));
            MR_Word Rval0R_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_3, (MR_Integer) 3))));
            MR_Word RvalR_18;
            MR_Word Rval0L_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_3, (MR_Integer) 2))));
            MR_Word RvalL_25;

            ll_backend__dupelim__standardize_rval_2_p_0(Rval0L_24, &RvalL_25);
            ll_backend__dupelim__standardize_rval_2_p_0(Rval0R_17, &RvalR_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Rval_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Binop_16));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (RvalL_25));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (RvalR_18));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__dupelim__standardize_lval_2_p_0(
  MR_Word Lval0_3,
  MR_Word * Lval_4)
{
  switch (MR_tag((MR_Word) Lval0_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Lval_4 = Lval0_3;
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *Lval_4 = Lval0_3;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval0_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
          *Lval_4 = Lval0_3;
          break;
        case (MR_Integer) 9:
          {
            MR_Word Addr_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_3, (MR_Integer) 2))));
            MR_Word FieldNum_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_3, (MR_Integer) 3))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Lval_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Addr_22));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (FieldNum_23));
            }
          }
          break;
        case (MR_Integer) 12:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.dupelim.standardize_lval\'/2", (MR_String) "lvar");
            return;
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
ll_backend__dupelim____Unify____cluster_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__dupelim____Unify____cluster_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__dupelim____Compare____cluster_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__dupelim____Compare____cluster_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__dupelim____Unify____std_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__dupelim____Unify____std_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__dupelim____Compare____std_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__dupelim____Compare____std_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__dupelim__init(void)
{
}

void mercury__ll_backend__dupelim__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__dupelim__ll_backend__dupelim__type_ctor_info_cluster_0);
	MR_register_type_ctor_info(&ll_backend__dupelim__ll_backend__dupelim__type_ctor_info_std_map_0);
}

void mercury__ll_backend__dupelim__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__dupelim__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.dupelim.
