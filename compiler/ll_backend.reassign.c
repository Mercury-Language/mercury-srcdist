/*
** Automatically generated from `reassign.m'
** by the Mercury compiler,
** version rotd-2023-09-21
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


// :- module ll_backend.reassign.
// :- implementation.

/*
INIT mercury__ll_backend__reassign__init
ENDINIT
*/

#include "ll_backend.reassign.mih"


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
#include "sparse_bitset.mih"
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
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "libs.optimization_options.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"



struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s {
  MR_bool ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded;
  MR_Word ll_backend__reassign__clobber_dependents_5_p_0_env_0__SubLvals_10;
  jmp_buf ll_backend__reassign__clobber_dependents_5_p_0_env_0__commit_0;
  MR_Word ll_backend__reassign__clobber_dependents_5_p_0_env_0__SubLval_23;
  MR_Box ll_backend__reassign__clobber_dependents_5_p_0_env_0__conv3_SubLval_23;
};


static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__reassign__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_rval_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__reassign__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__reassign__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__reassign__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__reassign__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_rval_0;

static void MR_CALL 
ll_backend__reassign____Compare____known_contents_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__reassign____Unify____known_contents_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__reassign____Compare____dependent_lval_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__reassign____Unify____dependent_lval_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__reassign__make_dependent_4_p_0(
  MR_Word Target_5,
  MR_Word SubLval_6,
  MR_Word STATE_VARIABLE_DepLvalMap_0_10,
  MR_Word * STATE_VARIABLE_DepLvalMap_11);

static void MR_CALL 
ll_backend__reassign__make_not_dependent_4_p_0(
  MR_Word Target_5,
  MR_Word SubLval_6,
  MR_Word STATE_VARIABLE_DepLvalMap_0_10,
  MR_Word * STATE_VARIABLE_DepLvalMap_11);

static void MR_CALL 
ll_backend__reassign__clobber_dependent_3_p_0(
  MR_Word Dependent_4,
  MR_Word STATE_VARIABLE_KnownContentsMap_0_6,
  MR_Word * STATE_VARIABLE_KnownContentsMap_7);

static void MR_CALL 
ll_backend__reassign__remove_reassign_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_KnownContentsMap_0_2,
  MR_Word STATE_VARIABLE_DepLvalMap_0_3,
  MR_Word STATE_VARIABLE_RevInstrs_0_4,
  MR_Word * STATE_VARIABLE_RevInstrs_5);

static void MR_CALL 
ll_backend__reassign__record_known_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__reassign__record_known_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__reassign__record_known_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__reassign__record_known_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__reassign__record_known_6_p_0(
  MR_Word TargetLval_7,
  MR_Word SourceRval_8,
  MR_Word STATE_VARIABLE_KnownContentsMap_0_13,
  MR_Word * STATE_VARIABLE_KnownContentsMap_14,
  MR_Word STATE_VARIABLE_DepLvalMap_0_15,
  MR_Word * STATE_VARIABLE_DepLvalMap_16);

static MR_bool MR_CALL 
ll_backend__reassign__no_implicit_alias_target_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__reassign__update_embdedded_frame_5_p_0(
  MR_Word EmbeddedFrame_6,
  MR_Word STATE_VARIABLE_KnownContentsMap_0_12,
  MR_Word * STATE_VARIABLE_KnownContentsMap_13,
  MR_Word STATE_VARIABLE_DepLvalMap_0_14,
  MR_Word * STATE_VARIABLE_DepLvalMap_15);

static void MR_CALL 
ll_backend__reassign__update_embdedded_frame_2_7_p_0(
  MR_Word StackId_8,
  MR_Integer CurSlot_9,
  MR_Integer LastSlot_10,
  MR_Word STATE_VARIABLE_KnownContentsMap_0_14,
  MR_Word * STATE_VARIABLE_KnownContentsMap_15,
  MR_Word STATE_VARIABLE_DepLvalMap_0_16,
  MR_Word * STATE_VARIABLE_DepLvalMap_17);

static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0(
  MR_Word Target_6,
  MR_Word STATE_VARIABLE_KnownContentsMap_0_13,
  MR_Word * STATE_VARIABLE_KnownContentsMap_14,
  MR_Word STATE_VARIABLE_DepLvalMap_0_15,
  MR_Word * STATE_VARIABLE_DepLvalMap_16);

static MR_bool MR_CALL 
ll_backend__reassign____Unify____dependent_lval_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__reassign____Compare____dependent_lval_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__reassign____Unify____known_contents_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__reassign____Compare____known_contents_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__reassign_scalar_common_1[1][2];

static /* final */ const MR_Box ll_backend__reassign_scalar_common_2[3][3];

static /* final */ const MR_Box ll_backend__reassign_scalar_common_3[1][6];

static /* final */ const MR_Box ll_backend__reassign_scalar_common_4[1][7];




static /* final */ const MR_Box ll_backend__reassign_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__reassign_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__reassign_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&ll_backend__reassign_scalar_common_3[0])),
    ((MR_Box) (ll_backend__reassign__clobber_dependents_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__reassign_scalar_common_3[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__reassign__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__reassign__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_rval_0))
  },
};

static /* final */ const MR_Box ll_backend__reassign_scalar_common_4[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__reassign__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__reassign__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0))
  },
};



#include "array.mh"


static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__reassign__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__reassign__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__reassign__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
    (MR_PseudoTypeInfo) (&ll_backend__reassign__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__reassign__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
    (MR_TypeInfo) (&ll_backend__reassign__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)
  }
};

const MR_TypeCtorInfo_Struct ll_backend__reassign__ll_backend__reassign__type_ctor_info_dependent_lval_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__reassign____Unify____dependent_lval_map_0_0_10001)),
  ((MR_Box) (ll_backend__reassign____Compare____dependent_lval_map_0_0_10001)),
  (MR_String) "ll_backend.reassign",
  (MR_String) "dependent_lval_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&ll_backend__reassign__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 ll_backend__reassign__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)
  }
};

const MR_TypeCtorInfo_Struct ll_backend__reassign__ll_backend__reassign__type_ctor_info_known_contents_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__reassign____Unify____known_contents_0_0_10001)),
  ((MR_Box) (ll_backend__reassign____Compare____known_contents_0_0_10001)),
  (MR_String) "ll_backend.reassign",
  (MR_String) "known_contents",
  { NULL },
  { (MR_PseudoTypeInfo) (&ll_backend__reassign__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_rval_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
ll_backend__reassign____Compare____known_contents_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__reassign_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
ll_backend__reassign____Unify____known_contents_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__reassign_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
ll_backend__reassign____Compare____dependent_lval_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__reassign_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
ll_backend__reassign____Unify____dependent_lval_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__reassign_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
ll_backend__reassign__make_dependent_4_p_0(
  MR_Word Target_5,
  MR_Word SubLval_6,
  MR_Word STATE_VARIABLE_DepLvalMap_0_10,
  MR_Word * STATE_VARIABLE_DepLvalMap_11)
{
  MR_bool succeeded;
  MR_Word DepLvals0_8;
  MR_Box conv0_DepLvals0_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]), STATE_VARIABLE_DepLvalMap_0_10, ((MR_Box) (SubLval_6)), &conv0_DepLvals0_8);
  if (succeeded)
  {
    DepLvals0_8 = ((MR_Word) (conv0_DepLvals0_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word DepLvals_9;

    mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Target_5)), DepLvals0_8, &DepLvals_9);
    mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]), ((MR_Box) (SubLval_6)), ((MR_Box) (DepLvals_9)), STATE_VARIABLE_DepLvalMap_0_10, STATE_VARIABLE_DepLvalMap_11);
  }
  else
  {
    MR_Word DepLvals_14;

    DepLvals_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Target_5)));
    mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]), ((MR_Box) (SubLval_6)), ((MR_Box) (DepLvals_14)), STATE_VARIABLE_DepLvalMap_0_10, STATE_VARIABLE_DepLvalMap_11);
  }
}

static void MR_CALL 
ll_backend__reassign__make_not_dependent_4_p_0(
  MR_Word Target_5,
  MR_Word SubLval_6,
  MR_Word STATE_VARIABLE_DepLvalMap_0_10,
  MR_Word * STATE_VARIABLE_DepLvalMap_11)
{
  MR_bool succeeded;
  MR_Word DepLvals0_8;
  MR_Box conv0_DepLvals0_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]), STATE_VARIABLE_DepLvalMap_0_10, ((MR_Box) (SubLval_6)), &conv0_DepLvals0_8);
  if (succeeded)
  {
    DepLvals0_8 = ((MR_Word) (conv0_DepLvals0_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word DepLvals_9;

    mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Target_5)), DepLvals0_8, &DepLvals_9);
    mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]), ((MR_Box) (SubLval_6)), ((MR_Box) (DepLvals_9)), STATE_VARIABLE_DepLvalMap_0_10, STATE_VARIABLE_DepLvalMap_11);
  }
  else
    *STATE_VARIABLE_DepLvalMap_11 = STATE_VARIABLE_DepLvalMap_0_10;
}

static void MR_CALL 
ll_backend__reassign__clobber_dependent_3_p_0(
  MR_Word Dependent_4,
  MR_Word STATE_VARIABLE_KnownContentsMap_0_6,
  MR_Word * STATE_VARIABLE_KnownContentsMap_7)
{
  mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (Dependent_4)), STATE_VARIABLE_KnownContentsMap_0_6, STATE_VARIABLE_KnownContentsMap_7);
}

void MR_CALL 
ll_backend__reassign__remove_reassign_2_p_0(
  MR_Word Instrs0_3,
  MR_Word * Instrs_4)
{
  MR_Word RevInstrs_5;
  MR_Word Var_6;
  MR_Word Var_7;

  Var_6 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
  Var_7 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]));
  ll_backend__reassign__remove_reassign_loop_5_p_0(Instrs0_3, Var_6, Var_7, (MR_Word) ((MR_Unsigned) 0U), &RevInstrs_5);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RevInstrs_5, Instrs_4);
}

static void MR_CALL 
ll_backend__reassign__remove_reassign_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_KnownContentsMap_0_2,
  MR_Word STATE_VARIABLE_DepLvalMap_0_3,
  MR_Word STATE_VARIABLE_RevInstrs_0_4,
  MR_Word * STATE_VARIABLE_RevInstrs_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevInstrs_5 = STATE_VARIABLE_RevInstrs_0_4;
    else
    {
      MR_Word Instr0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Uinstr0_16 = ((MR_Word) ((MR_hl_field(0, Instr0_11, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_RevInstrs_100_100;
      MR_Word STATE_VARIABLE_KnownContentsMap_106_106;
      MR_Word STATE_VARIABLE_DepLvalMap_107_107;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_KnownContentsMap_0_2;
      MR_Word next_value_of_STATE_VARIABLE_DepLvalMap_0_3;
      MR_Word next_value_of_STATE_VARIABLE_RevInstrs_0_4;

      switch (MR_tag((MR_Word) Uinstr0_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              STATE_VARIABLE_RevInstrs_100_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 0) = ((MR_Box) (Instr0_11));
              MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
            }
            STATE_VARIABLE_KnownContentsMap_106_106 = STATE_VARIABLE_KnownContentsMap_0_2;
            STATE_VARIABLE_DepLvalMap_107_107 = STATE_VARIABLE_DepLvalMap_0_3;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            {
              STATE_VARIABLE_RevInstrs_100_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 0) = ((MR_Box) (Instr0_11));
              MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
            }
            STATE_VARIABLE_KnownContentsMap_106_106 = STATE_VARIABLE_KnownContentsMap_0_2;
            STATE_VARIABLE_DepLvalMap_107_107 = STATE_VARIABLE_DepLvalMap_0_3;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.reassign.remove_reassign_loop\'/5", (MR_String) "block");
                return;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Target_34 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));
                MR_Word Source_35 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 2))));
                MR_Word KnownContents_36;
                MR_Box conv0_KnownContents_36;

                succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), STATE_VARIABLE_KnownContentsMap_0_2, ((MR_Box) (Target_34)), &conv0_KnownContents_36);
                if (succeeded)
                {
                  KnownContents_36 = ((MR_Word) (conv0_KnownContents_36));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                  succeeded = ll_backend__llds____Unify____rval_0_0(KnownContents_36, Source_35);
                if (succeeded)
                {
                  STATE_VARIABLE_RevInstrs_100_100 = STATE_VARIABLE_RevInstrs_0_4;
                  STATE_VARIABLE_DepLvalMap_107_107 = STATE_VARIABLE_DepLvalMap_0_3;
                  STATE_VARIABLE_KnownContentsMap_106_106 = STATE_VARIABLE_KnownContentsMap_0_2;
                }
                else
                {
                  MR_Word STATE_VARIABLE_KnownContentsMap_104_104;
                  MR_Word STATE_VARIABLE_DepLvalMap_105_105;

                  {
                    STATE_VARIABLE_RevInstrs_100_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 0) = ((MR_Box) (Instr0_11));
                    MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                  }
                  ll_backend__reassign__clobber_dependents_5_p_0(Target_34, STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_104_104, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_105_105);
                  succeeded = ll_backend__reassign__no_implicit_alias_target_1_p_0(Target_34);
                  if (succeeded)
                    ll_backend__reassign__record_known_6_p_0(Target_34, Source_35, STATE_VARIABLE_KnownContentsMap_104_104, &STATE_VARIABLE_KnownContentsMap_106_106, STATE_VARIABLE_DepLvalMap_105_105, &STATE_VARIABLE_DepLvalMap_107_107);
                  else
                  {
                    STATE_VARIABLE_DepLvalMap_107_107 = STATE_VARIABLE_DepLvalMap_105_105;
                    STATE_VARIABLE_KnownContentsMap_106_106 = STATE_VARIABLE_KnownContentsMap_104_104;
                  }
                }
              }
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 9:
            case (MR_Integer) 15:
            case (MR_Integer) 23:
            case (MR_Integer) 33:
            case (MR_Integer) 34:
              {
                {
                  STATE_VARIABLE_RevInstrs_100_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                STATE_VARIABLE_KnownContentsMap_106_106 = STATE_VARIABLE_KnownContentsMap_0_2;
                STATE_VARIABLE_DepLvalMap_107_107 = STATE_VARIABLE_DepLvalMap_0_3;
              }
              break;
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 6:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 21:
            case (MR_Integer) 24:
            case (MR_Integer) 25:
            case (MR_Integer) 26:
            case (MR_Integer) 27:
            case (MR_Integer) 29:
            case (MR_Integer) 30:
              {
                {
                  STATE_VARIABLE_RevInstrs_100_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                STATE_VARIABLE_KnownContentsMap_106_106 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
                STATE_VARIABLE_DepLvalMap_107_107 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]));
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word STATE_VARIABLE_KnownContentsMap_112_168;
                MR_Word Target_169 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevInstrs_100_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__clobber_dependents_5_p_0(Target_169, STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_112_168, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_107_107);
                mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (Target_169)), STATE_VARIABLE_KnownContentsMap_112_168, &STATE_VARIABLE_KnownContentsMap_106_106);
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word STATE_VARIABLE_KnownContentsMap_112_164;

                {
                  STATE_VARIABLE_RevInstrs_100_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__clobber_dependents_5_p_0((MR_Word) ((MR_Unsigned) 4U), STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_112_164, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_107_107);
                mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) ((MR_Unsigned) 4U)), STATE_VARIABLE_KnownContentsMap_112_164, &STATE_VARIABLE_KnownContentsMap_106_106);
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word STATE_VARIABLE_KnownContentsMap_112_112;
                MR_Word Target_131 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevInstrs_100_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__clobber_dependents_5_p_0(Target_131, STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_112_112, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_107_107);
                mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (Target_131)), STATE_VARIABLE_KnownContentsMap_112_112, &STATE_VARIABLE_KnownContentsMap_106_106);
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word STATE_VARIABLE_KnownContentsMap_112_151;
                MR_Word Target_152 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevInstrs_100_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__clobber_dependents_5_p_0(Target_152, STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_112_151, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_107_107);
                mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (Target_152)), STATE_VARIABLE_KnownContentsMap_112_151, &STATE_VARIABLE_KnownContentsMap_106_106);
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word STATE_VARIABLE_KnownContentsMap_112_160;

                {
                  STATE_VARIABLE_RevInstrs_100_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__clobber_dependents_5_p_0((MR_Word) ((MR_Unsigned) 12U), STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_112_160, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_107_107);
                mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) ((MR_Unsigned) 12U)), STATE_VARIABLE_KnownContentsMap_112_160, &STATE_VARIABLE_KnownContentsMap_106_106);
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word EmbeddedFrame_86 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 2))));

                {
                  STATE_VARIABLE_RevInstrs_100_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__update_embdedded_frame_5_p_0(EmbeddedFrame_86, STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_106_106, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_107_107);
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word NumLval_92 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 4))));
                MR_Word AddrLval_93 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 5))));
                MR_Word STATE_VARIABLE_KnownContentsMap_119_119;
                MR_Word STATE_VARIABLE_DepLvalMap_120_120;
                MR_Word STATE_VARIABLE_KnownContentsMap_121_121;
                MR_Word STATE_VARIABLE_DepLvalMap_122_122;
                MR_Word STATE_VARIABLE_KnownContentsMap_123_123;
                MR_Word STATE_VARIABLE_KnownContentsMap_125_125;
                MR_Word EmbeddedFrame_132 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 2))));

                {
                  STATE_VARIABLE_RevInstrs_100_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__update_embdedded_frame_5_p_0(EmbeddedFrame_132, STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_119_119, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_120_120);
                ll_backend__reassign__clobber_dependents_5_p_0(NumLval_92, STATE_VARIABLE_KnownContentsMap_119_119, &STATE_VARIABLE_KnownContentsMap_121_121, STATE_VARIABLE_DepLvalMap_120_120, &STATE_VARIABLE_DepLvalMap_122_122);
                ll_backend__reassign__clobber_dependents_5_p_0(AddrLval_93, STATE_VARIABLE_KnownContentsMap_121_121, &STATE_VARIABLE_KnownContentsMap_123_123, STATE_VARIABLE_DepLvalMap_122_122, &STATE_VARIABLE_DepLvalMap_107_107);
                mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (NumLval_92)), STATE_VARIABLE_KnownContentsMap_123_123, &STATE_VARIABLE_KnownContentsMap_125_125);
                mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (AddrLval_93)), STATE_VARIABLE_KnownContentsMap_125_125, &STATE_VARIABLE_KnownContentsMap_106_106);
              }
              break;
            case (MR_Integer) 18:
              {
                MR_Word EmbeddedFrame_159 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 2))));

                {
                  STATE_VARIABLE_RevInstrs_100_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__update_embdedded_frame_5_p_0(EmbeddedFrame_159, STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_106_106, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_107_107);
              }
              break;
            case (MR_Integer) 19:
              {
                MR_Word EmbeddedFrame_176 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 2))));

                {
                  STATE_VARIABLE_RevInstrs_100_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__update_embdedded_frame_5_p_0(EmbeddedFrame_176, STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_106_106, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_107_107);
              }
              break;
            case (MR_Integer) 20:
              {
                MR_Word STATE_VARIABLE_KnownContentsMap_112_172;
                MR_Word Target_173 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevInstrs_100_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__clobber_dependents_5_p_0(Target_173, STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_112_172, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_107_107);
                mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (Target_173)), STATE_VARIABLE_KnownContentsMap_112_172, &STATE_VARIABLE_KnownContentsMap_106_106);
              }
              break;
            case (MR_Integer) 22:
              {
                MR_Word STATE_VARIABLE_KnownContentsMap_112_155;
                MR_Word Target_156 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevInstrs_100_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__clobber_dependents_5_p_0(Target_156, STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_112_155, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_107_107);
                mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (Target_156)), STATE_VARIABLE_KnownContentsMap_112_155, &STATE_VARIABLE_KnownContentsMap_106_106);
              }
              break;
            case (MR_Integer) 28:
              {
                MR_Word Target_133 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevInstrs_100_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__clobber_dependents_5_p_0(Target_133, STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_106_106, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_107_107);
              }
              break;
            case (MR_Integer) 31:
              {
                MR_Word STATE_VARIABLE_KnownContentsMap_112_143;
                MR_Word Target_144 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 2))));

                {
                  STATE_VARIABLE_RevInstrs_100_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__clobber_dependents_5_p_0(Target_144, STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_112_143, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_107_107);
                mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (Target_144)), STATE_VARIABLE_KnownContentsMap_112_143, &STATE_VARIABLE_KnownContentsMap_106_106);
              }
              break;
            case (MR_Integer) 32:
              {
                MR_Word STATE_VARIABLE_KnownContentsMap_112_147;
                MR_Word Target_148 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 2))));

                {
                  STATE_VARIABLE_RevInstrs_100_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(1, STATE_VARIABLE_RevInstrs_100_100, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__clobber_dependents_5_p_0(Target_148, STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_112_147, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_107_107);
                mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (Target_148)), STATE_VARIABLE_KnownContentsMap_112_147, &STATE_VARIABLE_KnownContentsMap_106_106);
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Instrs0_12;
      next_value_of_STATE_VARIABLE_KnownContentsMap_0_2 = STATE_VARIABLE_KnownContentsMap_106_106;
      next_value_of_STATE_VARIABLE_DepLvalMap_0_3 = STATE_VARIABLE_DepLvalMap_107_107;
      next_value_of_STATE_VARIABLE_RevInstrs_0_4 = STATE_VARIABLE_RevInstrs_100_100;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_KnownContentsMap_0_2 = next_value_of_STATE_VARIABLE_KnownContentsMap_0_2;
      STATE_VARIABLE_DepLvalMap_0_3 = next_value_of_STATE_VARIABLE_DepLvalMap_0_3;
      STATE_VARIABLE_RevInstrs_0_4 = next_value_of_STATE_VARIABLE_RevInstrs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__reassign__record_known_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_DepLvalMap_11;

  ll_backend__reassign__make_dependent_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_DepLvalMap_11);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_DepLvalMap_11));
}

static void MR_CALL 
ll_backend__reassign__record_known_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_DepLvalMap_11;

  ll_backend__reassign__make_not_dependent_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_DepLvalMap_11);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_DepLvalMap_11));
}

static void MR_CALL 
ll_backend__reassign__record_known_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_DepLvalMap_11;

  ll_backend__reassign__make_dependent_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_DepLvalMap_11);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_DepLvalMap_11));
}

static void MR_CALL 
ll_backend__reassign__record_known_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_DepLvalMap_11;

  ll_backend__reassign__make_not_dependent_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_DepLvalMap_11);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_DepLvalMap_11));
}

static void MR_CALL 
ll_backend__reassign__record_known_6_p_0(
  MR_Word TargetLval_7,
  MR_Word SourceRval_8,
  MR_Word STATE_VARIABLE_KnownContentsMap_0_13,
  MR_Word * STATE_VARIABLE_KnownContentsMap_14,
  MR_Word STATE_VARIABLE_DepLvalMap_0_15,
  MR_Word * STATE_VARIABLE_DepLvalMap_16)
{
  MR_bool succeeded;
  MR_Word SourceSubLvals_11;

  SourceSubLvals_11 = ll_backend__code_util__lvals_in_rval_1_f_0(SourceRval_8);
  succeeded = mercury__list__member_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (TargetLval_7)), SourceSubLvals_11);
  if (succeeded)
  {
    *STATE_VARIABLE_DepLvalMap_16 = STATE_VARIABLE_DepLvalMap_0_15;
    *STATE_VARIABLE_KnownContentsMap_14 = STATE_VARIABLE_KnownContentsMap_0_13;
  }
  else
  {
    MR_Word STATE_VARIABLE_KnownContentsMap_17_17;
    MR_Word STATE_VARIABLE_DepLvalMap_18_18;
    MR_Word TargetSubLvals_23;
    MR_Word SourceSubLvals_24;
    MR_Word AllSubLvals_25;
    MR_Word STATE_VARIABLE_DepLvalMap_21_27;
    MR_Word Var_28;
    MR_Word OldRval_21;
    MR_Box conv0_OldRval_21;
    MR_Box conv4_STATE_VARIABLE_DepLvalMap_18_18;
    MR_Word SourceLval_12;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), STATE_VARIABLE_KnownContentsMap_0_13, ((MR_Box) (TargetLval_7)), &conv0_OldRval_21);
    if (succeeded)
    {
      OldRval_21 = ((MR_Word) (conv0_OldRval_21));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word OldSubLvals_22;
      MR_Word Var_26;
      MR_Box conv2_STATE_VARIABLE_DepLvalMap_21_27;

      OldSubLvals_22 = ll_backend__code_util__lvals_in_rval_1_f_0(OldRval_21);
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_26, 0) = ((MR_Box) (&ll_backend__reassign_scalar_common_4[0]));
        MR_hl_field(0, Var_26, 1) = ((MR_Box) (ll_backend__reassign__record_known_6_p_0_1));
        MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_26, 3) = ((MR_Box) (TargetLval_7));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_2[1]), Var_26, OldSubLvals_22, ((MR_Box) (STATE_VARIABLE_DepLvalMap_0_15)), &conv2_STATE_VARIABLE_DepLvalMap_21_27);
      STATE_VARIABLE_DepLvalMap_21_27 = ((MR_Word) (conv2_STATE_VARIABLE_DepLvalMap_21_27));
    }
    else
      STATE_VARIABLE_DepLvalMap_21_27 = STATE_VARIABLE_DepLvalMap_0_15;
    TargetSubLvals_23 = ll_backend__code_util__lvals_in_lval_1_f_0(TargetLval_7);
    SourceSubLvals_24 = ll_backend__code_util__lvals_in_rval_1_f_0(SourceRval_8);
    mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), TargetSubLvals_23, SourceSubLvals_24, &AllSubLvals_25);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (&ll_backend__reassign_scalar_common_4[0]));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) (ll_backend__reassign__record_known_6_p_0_2));
      MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_28, 3) = ((MR_Box) (TargetLval_7));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_2[1]), Var_28, AllSubLvals_25, ((MR_Box) (STATE_VARIABLE_DepLvalMap_21_27)), &conv4_STATE_VARIABLE_DepLvalMap_18_18);
    STATE_VARIABLE_DepLvalMap_18_18 = ((MR_Word) (conv4_STATE_VARIABLE_DepLvalMap_18_18));
    mercury__map__set_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (TargetLval_7)), ((MR_Box) (SourceRval_8)), STATE_VARIABLE_KnownContentsMap_0_13, &STATE_VARIABLE_KnownContentsMap_17_17);
    succeeded = ((MR_tag((MR_Word) SourceRval_8)) == (MR_Integer) 0);
    if (succeeded)
    {
      SourceLval_12 = ((MR_Word) ((MR_hl_field(0, SourceRval_8, (MR_Integer) 0))));
      {
        MR_Word Var_19;
        MR_Word TargetSubLvals_38;
        MR_Word SourceSubLvals_39;
        MR_Word AllSubLvals_40;
        MR_Word STATE_VARIABLE_DepLvalMap_21_42;
        MR_Word Var_43;
        MR_Word OldRval_36;
        MR_Box conv5_OldRval_36;
        MR_Box conv9_STATE_VARIABLE_DepLvalMap_16;

        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_19, 0) = ((MR_Box) (TargetLval_7));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), STATE_VARIABLE_KnownContentsMap_17_17, ((MR_Box) (SourceLval_12)), &conv5_OldRval_36);
        if (succeeded)
        {
          OldRval_36 = ((MR_Word) (conv5_OldRval_36));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word OldSubLvals_37;
          MR_Word Var_41;
          MR_Box conv7_STATE_VARIABLE_DepLvalMap_21_42;

          OldSubLvals_37 = ll_backend__code_util__lvals_in_rval_1_f_0(OldRval_36);
          {
            Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_41, 0) = ((MR_Box) (&ll_backend__reassign_scalar_common_4[0]));
            MR_hl_field(0, Var_41, 1) = ((MR_Box) (ll_backend__reassign__record_known_6_p_0_3));
            MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_41, 3) = ((MR_Box) (SourceLval_12));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_2[1]), Var_41, OldSubLvals_37, ((MR_Box) (STATE_VARIABLE_DepLvalMap_18_18)), &conv7_STATE_VARIABLE_DepLvalMap_21_42);
          STATE_VARIABLE_DepLvalMap_21_42 = ((MR_Word) (conv7_STATE_VARIABLE_DepLvalMap_21_42));
        }
        else
          STATE_VARIABLE_DepLvalMap_21_42 = STATE_VARIABLE_DepLvalMap_18_18;
        TargetSubLvals_38 = ll_backend__code_util__lvals_in_lval_1_f_0(SourceLval_12);
        SourceSubLvals_39 = ll_backend__code_util__lvals_in_rval_1_f_0(Var_19);
        mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), TargetSubLvals_38, SourceSubLvals_39, &AllSubLvals_40);
        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_43, 0) = ((MR_Box) (&ll_backend__reassign_scalar_common_4[0]));
          MR_hl_field(0, Var_43, 1) = ((MR_Box) (ll_backend__reassign__record_known_6_p_0_4));
          MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_43, 3) = ((MR_Box) (SourceLval_12));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_2[1]), Var_43, AllSubLvals_40, ((MR_Box) (STATE_VARIABLE_DepLvalMap_21_42)), &conv9_STATE_VARIABLE_DepLvalMap_16);
        *STATE_VARIABLE_DepLvalMap_16 = ((MR_Word) (conv9_STATE_VARIABLE_DepLvalMap_16));
        mercury__map__set_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (SourceLval_12)), ((MR_Box) (Var_19)), STATE_VARIABLE_KnownContentsMap_17_17, STATE_VARIABLE_KnownContentsMap_14);
      }
    }
    else
    {
      *STATE_VARIABLE_DepLvalMap_16 = STATE_VARIABLE_DepLvalMap_18_18;
      *STATE_VARIABLE_KnownContentsMap_14 = STATE_VARIABLE_KnownContentsMap_17_17;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__reassign__no_implicit_alias_target_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 1:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 2:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
      }
      break;
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__reassign__update_embdedded_frame_5_p_0(
  MR_Word EmbeddedFrame_6,
  MR_Word STATE_VARIABLE_KnownContentsMap_0_12,
  MR_Word * STATE_VARIABLE_KnownContentsMap_13,
  MR_Word STATE_VARIABLE_DepLvalMap_0_14,
  MR_Word * STATE_VARIABLE_DepLvalMap_15)
{
  MR_Word StackId_9 = ((MR_Unsigned) ((MR_hl_field(0, EmbeddedFrame_6, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Integer FirstSlot_10 = ((MR_Integer) ((MR_hl_field(0, EmbeddedFrame_6, (MR_Integer) 1))));
  MR_Integer LastSlot_11 = ((MR_Integer) ((MR_hl_field(0, EmbeddedFrame_6, (MR_Integer) 2))));

  ll_backend__reassign__update_embdedded_frame_2_7_p_0(StackId_9, FirstSlot_10, LastSlot_11, STATE_VARIABLE_KnownContentsMap_0_12, STATE_VARIABLE_KnownContentsMap_13, STATE_VARIABLE_DepLvalMap_0_14, STATE_VARIABLE_DepLvalMap_15);
}

static void MR_CALL 
ll_backend__reassign__update_embdedded_frame_2_7_p_0(
  MR_Word StackId_8,
  MR_Integer CurSlot_9,
  MR_Integer LastSlot_10,
  MR_Word STATE_VARIABLE_KnownContentsMap_0_14,
  MR_Word * STATE_VARIABLE_KnownContentsMap_15,
  MR_Word STATE_VARIABLE_DepLvalMap_0_16,
  MR_Word * STATE_VARIABLE_DepLvalMap_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurSlot_9 <= LastSlot_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word StackVar_13;
      MR_Word STATE_VARIABLE_KnownContentsMap_18_18;
      MR_Word STATE_VARIABLE_DepLvalMap_19_19;
      MR_Word STATE_VARIABLE_KnownContentsMap_20_20;
      MR_Integer Var_21;
      MR_Integer next_value_of_CurSlot_9;
      MR_Word next_value_of_STATE_VARIABLE_KnownContentsMap_0_14;
      MR_Word next_value_of_STATE_VARIABLE_DepLvalMap_0_16;

      StackVar_13 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(StackId_8, CurSlot_9);
      ll_backend__reassign__clobber_dependents_5_p_0(StackVar_13, STATE_VARIABLE_KnownContentsMap_0_14, &STATE_VARIABLE_KnownContentsMap_18_18, STATE_VARIABLE_DepLvalMap_0_16, &STATE_VARIABLE_DepLvalMap_19_19);
      mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (StackVar_13)), STATE_VARIABLE_KnownContentsMap_18_18, &STATE_VARIABLE_KnownContentsMap_20_20);
      Var_21 = (MR_Integer) ((MR_Unsigned) CurSlot_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurSlot_9 = Var_21;
      next_value_of_STATE_VARIABLE_KnownContentsMap_0_14 = STATE_VARIABLE_KnownContentsMap_20_20;
      next_value_of_STATE_VARIABLE_DepLvalMap_0_16 = STATE_VARIABLE_DepLvalMap_19_19;
      CurSlot_9 = next_value_of_CurSlot_9;
      STATE_VARIABLE_KnownContentsMap_0_14 = next_value_of_STATE_VARIABLE_KnownContentsMap_0_14;
      STATE_VARIABLE_DepLvalMap_0_16 = next_value_of_STATE_VARIABLE_DepLvalMap_0_16;
      continue;
    }
    else
    {
      *STATE_VARIABLE_DepLvalMap_17 = STATE_VARIABLE_DepLvalMap_0_16;
      *STATE_VARIABLE_KnownContentsMap_15 = STATE_VARIABLE_KnownContentsMap_0_14;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_KnownContentsMap_7;

  ll_backend__reassign__clobber_dependent_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_KnownContentsMap_7);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_KnownContentsMap_7));
}

static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_2(
  void * env_ptr_arg)
{
  struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s * env_ptr = (struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_4(
  void * env_ptr_arg)
{
  struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s * env_ptr = (struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__SubLval_23 = ((MR_Word) ((env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__conv3_SubLval_23));
  ll_backend__reassign__clobber_dependents_5_p_0_3(env_ptr);
}

static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_3(
  void * env_ptr_arg)
{
  struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s * env_ptr = (struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_12;

    (env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__SubLval_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, (env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__SubLval_23, (MR_Integer) 0)))) == (MR_Integer) 10)));
    if ((env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded)
    {
      Var_12 = ((MR_Word) ((MR_hl_field(3, (env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__SubLval_23, (MR_Integer) 1))));
      ll_backend__reassign__clobber_dependents_5_p_0_2(env_ptr);
    }
  }
}

static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_5(
  void * env_ptr_arg)
{
  struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s * env_ptr = (struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), &(env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__conv3_SubLval_23, (env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__SubLvals_10, ll_backend__reassign__clobber_dependents_5_p_0_4, env_ptr);
      (env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0(
  MR_Word Target_6,
  MR_Word STATE_VARIABLE_KnownContentsMap_0_13,
  MR_Word * STATE_VARIABLE_KnownContentsMap_14,
  MR_Word STATE_VARIABLE_DepLvalMap_0_15,
  MR_Word * STATE_VARIABLE_DepLvalMap_16)
{
  struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s env;

  {
    MR_Word STATE_VARIABLE_KnownContentsMap_18_18;
    MR_Word STATE_VARIABLE_DepLvalMap_19_19;
    MR_Word Var_20;
    MR_Word DepLvals_9;
    MR_Box conv0_DepLvals_9;

    (env).ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]), STATE_VARIABLE_DepLvalMap_0_15, ((MR_Box) (Target_6)), &conv0_DepLvals_9);
    if ((env).ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded)
    {
      DepLvals_9 = ((MR_Word) (conv0_DepLvals_9));
      (env).ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded = MR_TRUE;
    }
    if ((env).ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded)
    {
      MR_Box conv2_STATE_VARIABLE_KnownContentsMap_18_18;

      mercury__set__fold_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_2[0]), (MR_Word) (&ll_backend__reassign_scalar_common_2[2]), DepLvals_9, ((MR_Box) (STATE_VARIABLE_KnownContentsMap_0_13)), &conv2_STATE_VARIABLE_KnownContentsMap_18_18);
      STATE_VARIABLE_KnownContentsMap_18_18 = ((MR_Word) (conv2_STATE_VARIABLE_KnownContentsMap_18_18));
      mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]), ((MR_Box) (Target_6)), STATE_VARIABLE_DepLvalMap_0_15, &STATE_VARIABLE_DepLvalMap_19_19);
    }
    else
    {
      STATE_VARIABLE_DepLvalMap_19_19 = STATE_VARIABLE_DepLvalMap_0_15;
      STATE_VARIABLE_KnownContentsMap_18_18 = STATE_VARIABLE_KnownContentsMap_0_13;
    }
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_20, 0) = ((MR_Box) (Target_6));
    }
    (env).ll_backend__reassign__clobber_dependents_5_p_0_env_0__SubLvals_10 = ll_backend__code_util__lvals_in_rval_1_f_0(Var_20);
    ll_backend__reassign__clobber_dependents_5_p_0_5(&env);
    if ((env).ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded)
    {
      *STATE_VARIABLE_KnownContentsMap_14 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
      *STATE_VARIABLE_DepLvalMap_16 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]));
    }
    else
    {
      *STATE_VARIABLE_DepLvalMap_16 = STATE_VARIABLE_DepLvalMap_19_19;
      *STATE_VARIABLE_KnownContentsMap_14 = STATE_VARIABLE_KnownContentsMap_18_18;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__reassign____Unify____dependent_lval_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__reassign____Unify____dependent_lval_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__reassign____Compare____dependent_lval_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__reassign____Compare____dependent_lval_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__reassign____Unify____known_contents_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__reassign____Unify____known_contents_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__reassign____Compare____known_contents_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__reassign____Compare____known_contents_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__reassign__init(void)
{
}

void mercury__ll_backend__reassign__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__reassign__ll_backend__reassign__type_ctor_info_dependent_lval_map_0);
	MR_register_type_ctor_info(&ll_backend__reassign__ll_backend__reassign__type_ctor_info_known_contents_0);
}

void mercury__ll_backend__reassign__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__reassign__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.reassign.
