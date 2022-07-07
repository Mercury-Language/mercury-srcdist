/*
** Automatically generated from `livemap.m'
** by the Mercury compiler,
** version rotd-2022-07-07
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


// :- module ll_backend.livemap.
// :- implementation.

/*
INIT mercury__ll_backend__livemap__init
ENDINIT
*/

#include "ll_backend.livemap.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "string.mih"
#include "term.mih"
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




static const MR_FA_TypeInfo_Struct1 ll_backend__livemap__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__livemap__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__livemap__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__livemap__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__livemap__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static void MR_CALL 
ll_backend__livemap__livemap_insert_maybe_label_livevals_4_p_0(
  MR_Word Livemap_5,
  MR_Word MaybeLabel_6,
  MR_Word STATE_VARIABLE_Livevals_0_9,
  MR_Word * STATE_VARIABLE_Livevals_10);

static void MR_CALL 
ll_backend__livemap__build_livemap_fixpoint_4_p_0(
  MR_Word BackInstrs_5,
  MR_Word Livemap0_6,
  MR_Integer CurIteration_7,
  MR_Word * MaybeLivemap_8);

static void MR_CALL 
ll_backend__livemap__livemap_do_build_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Livevals0_2,
  MR_Word STATE_VARIABLE_ContainsBadUserCode_0_3,
  MR_Word * STATE_VARIABLE_ContainsBadUserCode_4,
  MR_Word STATE_VARIABLE_Livemap_0_5,
  MR_Word * STATE_VARIABLE_Livemap_6);

static void MR_CALL 
ll_backend__livemap__livemap_do_build_instr_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__livemap__livemap_do_build_instr_9_p_0(
  MR_Word Instr0_10,
  MR_Word STATE_VARIABLE_Instrs_0_100,
  MR_Word * STATE_VARIABLE_Instrs_101,
  MR_Word STATE_VARIABLE_Livevals_0_102,
  MR_Word * STATE_VARIABLE_Livevals_103,
  MR_Word STATE_VARIABLE_ContainsBadUserCode_0_104,
  MR_Word * STATE_VARIABLE_ContainsBadUserCode_105,
  MR_Word STATE_VARIABLE_Livemap_0_106,
  MR_Word * STATE_VARIABLE_Livemap_107);

static void MR_CALL 
ll_backend__livemap__livemap_insert_label_livevals_4_p_0(
  MR_Word Livemap_5,
  MR_Word Label_6,
  MR_Word STATE_VARIABLE_Livevals_0_10,
  MR_Word * STATE_VARIABLE_Livevals_11);

static void MR_CALL 
ll_backend__livemap__make_live_in_rval_3_p_0(
  MR_Word Rval_4,
  MR_Word STATE_VARIABLE_Live_0_22,
  MR_Word * STATE_VARIABLE_Live_23);

static void MR_CALL 
ll_backend__livemap__make_live_in_rvals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Live_0_2,
  MR_Word * STATE_VARIABLE_Live_3);

static void MR_CALL 
ll_backend__livemap__livemap_special_code_addr_2_p_0(
  MR_Word CodeAddr_3,
  MR_Word * MaybeSpecial_4);

static void MR_CALL 
ll_backend__livemap__look_for_livevals_7_p_0(
  MR_Word Instrs0_8,
  MR_Word * Instrs_9,
  MR_Word STATE_VARIABLE_Livevals_0_18,
  MR_Word * STATE_VARIABLE_Livevals_19,
  MR_String Site_11,
  MR_Word Compulsory_12,
  MR_Word * Found_13);

static void MR_CALL 
ll_backend__livemap__build_live_lval_info_7_p_0(
  MR_Word AffectsLiveness_8,
  MR_Word LiveLvalInfo_9,
  MR_String Code_10,
  MR_Word STATE_VARIABLE_Livevals_0_15,
  MR_Word * STATE_VARIABLE_Livevals_16,
  MR_Word STATE_VARIABLE_ContainsBadUserCode_0_17,
  MR_Word * STATE_VARIABLE_ContainsBadUserCode_18);

static void MR_CALL 
ll_backend__livemap__build_livemap_foreign_proc_components_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Livevals_0_2,
  MR_Word * STATE_VARIABLE_Livevals_3,
  MR_Word STATE_VARIABLE_ContainsBadUserCode_0_4,
  MR_Word * STATE_VARIABLE_ContainsBadUserCode_5);

static void MR_CALL 
ll_backend__livemap__livemap_insert_proper_livevals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Livevals_0_2,
  MR_Word * STATE_VARIABLE_Livevals_3);

static void MR_CALL 
ll_backend__livemap__build_livemap_foreign_proc_inputs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Livevals_0_2,
  MR_Word * STATE_VARIABLE_Livevals_3);

static MR_bool MR_CALL 
ll_backend__livemap__equal_livemaps_keys_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__livemap____Unify____livemap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__livemap____Compare____livemap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__livemap____Unify____lvalset_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__livemap____Compare____lvalset_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__livemap_scalar_common_1[5][2];

static /* final */ const MR_Box ll_backend__livemap_scalar_common_2[1][3];

static /* final */ const MR_Box ll_backend__livemap_scalar_common_3[5][1];

static /* final */ const MR_Box ll_backend__livemap_scalar_common_4[1][7];




static /* final */ const MR_Box ll_backend__livemap_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) (&ll_backend__livemap_scalar_common_3[1]))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) (&ll_backend__livemap_scalar_common_3[3]))
  },
};

static /* final */ const MR_Box ll_backend__livemap_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__livemap_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box ll_backend__livemap_scalar_common_3[5][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__livemap_scalar_common_1[3])))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__livemap_scalar_common_1[4])))
  },
};

static /* final */ const MR_Box ll_backend__livemap_scalar_common_4[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__livemap__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__livemap__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__livemap__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__livemap__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
};



#include "array.mh"



static const MR_FA_TypeInfo_Struct1 ll_backend__livemap__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__livemap__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_PseudoTypeInfo) (&ll_backend__livemap__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__livemap__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__livemap__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__livemap__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_TypeInfo) (&ll_backend__livemap__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)
  }
};

const MR_TypeCtorInfo_Struct ll_backend__livemap__ll_backend__livemap__type_ctor_info_livemap_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__livemap____Unify____livemap_0_0_10001)),
  ((MR_Box) (ll_backend__livemap____Compare____livemap_0_0_10001)),
  (MR_String) "ll_backend.livemap",
  (MR_String) "livemap",
  { NULL },
  { (MR_PseudoTypeInfo) (&ll_backend__livemap__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct ll_backend__livemap__ll_backend__livemap__type_ctor_info_lvalset_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__livemap____Unify____lvalset_0_0_10001)),
  ((MR_Box) (ll_backend__livemap____Compare____lvalset_0_0_10001)),
  (MR_String) "ll_backend.livemap",
  (MR_String) "lvalset",
  { NULL },
  { (MR_PseudoTypeInfo) (&ll_backend__livemap__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
ll_backend__livemap____Compare____lvalset_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__livemap_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
ll_backend__livemap____Unify____lvalset_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__livemap_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
ll_backend__livemap____Compare____livemap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__livemap_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
ll_backend__livemap____Unify____livemap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__livemap_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
ll_backend__livemap__livemap_insert_maybe_label_livevals_4_p_0(
  MR_Word Livemap_5,
  MR_Word MaybeLabel_6,
  MR_Word STATE_VARIABLE_Livevals_0_9,
  MR_Word * STATE_VARIABLE_Livevals_10)
{
  MR_bool succeeded;

  if ((MaybeLabel_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Livevals_10 = STATE_VARIABLE_Livevals_0_9;
  else
  {
    MR_Word Label_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLabel_6, (MR_Integer) 0))));
    MR_Word LabelLivevals_16;
    MR_Box conv0_LabelLivevals_16;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__livemap_scalar_common_1[0]), Livemap_5, ((MR_Box) (Label_8)), &conv0_LabelLivevals_16);
    if (succeeded)
    {
      LabelLivevals_16 = ((MR_Word) (conv0_LabelLivevals_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Livelist_17;

      mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LabelLivevals_16, &Livelist_17);
      ll_backend__livemap__livemap_insert_proper_livevals_3_p_0(Livelist_17, STATE_VARIABLE_Livevals_0_9, STATE_VARIABLE_Livevals_10);
    }
    else
      *STATE_VARIABLE_Livevals_10 = STATE_VARIABLE_Livevals_0_9;
  }
}

void MR_CALL 
ll_backend__livemap__build_livemap_2_p_0(
  MR_Word Instrs_3,
  MR_Word * MaybeLivemap_4)
{
  MR_Word Livemap0_5;
  MR_Word BackInstrs_6;

  mercury__map__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__livemap_scalar_common_1[0]), &Livemap0_5);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Instrs_3, &BackInstrs_6);
  ll_backend__livemap__build_livemap_fixpoint_4_p_0(BackInstrs_6, Livemap0_5, (MR_Integer) 0, MaybeLivemap_4);
}

static void MR_CALL 
ll_backend__livemap__build_livemap_fixpoint_4_p_0(
  MR_Word BackInstrs_5,
  MR_Word Livemap0_6,
  MR_Integer CurIteration_7,
  MR_Word * MaybeLivemap_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Livevals0_9;
    MR_Word ContainsBadUserCode_10;
    MR_Word Livemap1_11;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__set__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), &Livevals0_9);
    ll_backend__livemap__livemap_do_build_6_p_0(BackInstrs_5, Livevals0_9, (MR_Integer) 0, &ContainsBadUserCode_10, Livemap0_6, &Livemap1_11);
    switch (ContainsBadUserCode_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Labels_19;
          MR_Word Var_22;

          mercury__map__keys_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__livemap_scalar_common_1[0]), Livemap0_6, &Labels_19);
          mercury__map__keys_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__livemap_scalar_common_1[0]), Livemap1_11, &Var_22);
          succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__livemap_scalar_common_1[2]), ((MR_Box) (Labels_19)), ((MR_Box) (Var_22)));
          if (succeeded)
            succeeded = ll_backend__livemap__equal_livemaps_keys_3_p_0(Labels_19, Livemap0_6, Livemap1_11);
          if (succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLivemap_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Livemap1_11));
            }
          else
          {
            succeeded = (CurIteration_7 < (MR_Integer) 5);
            if (succeeded)
            {
              MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) CurIteration_7 + (MR_Unsigned) 1);
              MR_Word next_value_of_Livemap0_6 = Livemap1_11;
              MR_Integer next_value_of_CurIteration_7 = Var_14;

              // direct tailcall eliminated
              ;
              Livemap0_6 = next_value_of_Livemap0_6;
              CurIteration_7 = next_value_of_CurIteration_7;
              continue;
            }
            else
              *MaybeLivemap_8 = (MR_Word) ((MR_Unsigned) 0U);
          }
        }
        break;
      case (MR_Integer) 1:
        *MaybeLivemap_8 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__livemap__livemap_do_build_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Livevals0_2,
  MR_Word STATE_VARIABLE_ContainsBadUserCode_0_3,
  MR_Word * STATE_VARIABLE_ContainsBadUserCode_4,
  MR_Word STATE_VARIABLE_Livemap_0_5,
  MR_Word * STATE_VARIABLE_Livemap_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Livemap_6 = STATE_VARIABLE_Livemap_0_5;
      *STATE_VARIABLE_ContainsBadUserCode_4 = STATE_VARIABLE_ContainsBadUserCode_0_3;
    }
    else
    {
      MR_Word Instr0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Instrs1_19;
      MR_Word Livevals1_20;
      MR_Word STATE_VARIABLE_ContainsBadUserCode_25_25;
      MR_Word STATE_VARIABLE_Livemap_26_26;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_Livevals0_2;
      MR_Word next_value_of_STATE_VARIABLE_ContainsBadUserCode_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Livemap_0_5;

      ll_backend__livemap__livemap_do_build_instr_9_p_0(Instr0_14, Instrs0_15, &Instrs1_19, Livevals0_2, &Livevals1_20, STATE_VARIABLE_ContainsBadUserCode_0_3, &STATE_VARIABLE_ContainsBadUserCode_25_25, STATE_VARIABLE_Livemap_0_5, &STATE_VARIABLE_Livemap_26_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Instrs1_19;
      next_value_of_Livevals0_2 = Livevals1_20;
      next_value_of_STATE_VARIABLE_ContainsBadUserCode_0_3 = STATE_VARIABLE_ContainsBadUserCode_25_25;
      next_value_of_STATE_VARIABLE_Livemap_0_5 = STATE_VARIABLE_Livemap_26_26;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      Livevals0_2 = next_value_of_Livevals0_2;
      STATE_VARIABLE_ContainsBadUserCode_0_3 = next_value_of_STATE_VARIABLE_ContainsBadUserCode_0_3;
      STATE_VARIABLE_Livemap_0_5 = next_value_of_STATE_VARIABLE_Livemap_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__livemap__livemap_do_build_instr_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Livevals_10;

  ll_backend__livemap__livemap_insert_maybe_label_livevals_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Livevals_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Livevals_10));
}

static void MR_CALL 
ll_backend__livemap__livemap_do_build_instr_9_p_0(
  MR_Word Instr0_10,
  MR_Word STATE_VARIABLE_Instrs_0_100,
  MR_Word * STATE_VARIABLE_Instrs_101,
  MR_Word STATE_VARIABLE_Livevals_0_102,
  MR_Word * STATE_VARIABLE_Livevals_103,
  MR_Word STATE_VARIABLE_ContainsBadUserCode_0_104,
  MR_Word * STATE_VARIABLE_ContainsBadUserCode_105,
  MR_Word STATE_VARIABLE_Livemap_0_106,
  MR_Word * STATE_VARIABLE_Livemap_107)
{
  MR_bool succeeded;
  MR_Word Uinstr0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_10, (MR_Integer) 0))));

  switch (MR_tag((MR_Word) Uinstr0_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Uinstr0_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_Livevals_103 = STATE_VARIABLE_Livevals_0_102;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_Livevals_103 = STATE_VARIABLE_Livevals_0_102;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
        *STATE_VARIABLE_Livevals_103 = STATE_VARIABLE_Livevals_0_102;
        *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
        *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.livemap.livemap_do_build_instr\'/9", (MR_String) "livevals found in backward scan in build_livemap");
        return;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.livemap.livemap_do_build_instr\'/9", (MR_String) "block found in backward scan");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 1))));
            MR_Word Rval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 2))));
            MR_Word Rvals_24;
            MR_Word STATE_VARIABLE_Livevals_112_112;
            MR_Word Var_113;

            mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_22)), STATE_VARIABLE_Livevals_0_102, &STATE_VARIABLE_Livevals_112_112);
            ll_backend__opt_util__lval_access_rvals_2_p_0(Lval_22, &Rvals_24);
            {
              Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Rval_23));
              MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Rvals_24));
            }
            ll_backend__livemap__make_live_in_rvals_3_p_0(Var_113, STATE_VARIABLE_Livevals_112_112, STATE_VARIABLE_Livevals_103);
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_258 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 1))));
            MR_Word Rval_259 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 2))));
            MR_Word Rvals_260;
            MR_Word STATE_VARIABLE_Livevals_112_261;
            MR_Word Var_262;

            mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_258)), STATE_VARIABLE_Livevals_0_102, &STATE_VARIABLE_Livevals_112_261);
            ll_backend__opt_util__lval_access_rvals_2_p_0(Lval_258, &Rvals_260);
            {
              Var_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_262, 0) = ((MR_Box) (Rval_259));
              MR_hl_field(MR_mktag(1), Var_262, 1) = ((MR_Box) (Rvals_260));
            }
            ll_backend__livemap__make_live_in_rvals_3_p_0(Var_262, STATE_VARIABLE_Livevals_112_261, STATE_VARIABLE_Livevals_103);
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_38;

            ll_backend__livemap__look_for_livevals_7_p_0(STATE_VARIABLE_Instrs_0_100, STATE_VARIABLE_Instrs_101, STATE_VARIABLE_Livevals_0_102, STATE_VARIABLE_Livevals_103, (MR_String) "call", (MR_Integer) 1, &Var_38);
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 4:
          {
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_Livevals_103 = STATE_VARIABLE_Livevals_0_102;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Label_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 1))));

            mercury__map__set_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__livemap_scalar_common_1[0]), ((MR_Box) (Label_41)), ((MR_Box) (STATE_VARIABLE_Livevals_0_102)), STATE_VARIABLE_Livemap_0_106, STATE_VARIABLE_Livemap_107);
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_Livevals_103 = STATE_VARIABLE_Livevals_0_102;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word CodeAddr_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 1))));
            MR_Word LivevalsNeeded_43;
            MR_Word Found_44;
            MR_Word MaybeSpecial_49;
            MR_Word STATE_VARIABLE_Livevals_135_135;
            MR_Word STATE_VARIABLE_Livevals_138_138;

            LivevalsNeeded_43 = ll_backend__opt_util__livevals_addr_1_f_0(CodeAddr_42);
            ll_backend__livemap__look_for_livevals_7_p_0(STATE_VARIABLE_Instrs_0_100, STATE_VARIABLE_Instrs_101, STATE_VARIABLE_Livevals_0_102, &STATE_VARIABLE_Livevals_135_135, (MR_String) "goto", LivevalsNeeded_43, &Found_44);
            switch (Found_44) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_tag((MR_Word) CodeAddr_42)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(CodeAddr_42)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 3:
                      case (MR_Integer) 4:
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.livemap.livemap_do_build_instr\'/9", (MR_String) "unknown code_addr type");
                          return;
                        }
                        break;
                      case (MR_Integer) 1:
                        STATE_VARIABLE_Livevals_138_138 = STATE_VARIABLE_Livevals_135_135;
                        break;
                      case (MR_Integer) 2:
                        STATE_VARIABLE_Livevals_138_138 = STATE_VARIABLE_Livevals_135_135;
                        break;
                      case (MR_Integer) 5:
                        STATE_VARIABLE_Livevals_138_138 = STATE_VARIABLE_Livevals_135_135;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_137;
                      MR_Word Label_199 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeAddr_42, (MR_Integer) 0))));

                      Var_137 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
                      ll_backend__livemap__livemap_insert_label_livevals_4_p_0(STATE_VARIABLE_Livemap_0_106, Label_199, Var_137, &STATE_VARIABLE_Livevals_138_138);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.livemap.livemap_do_build_instr\'/9", (MR_String) "unknown code_addr type");
                      return;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.livemap.livemap_do_build_instr\'/9", (MR_String) "unknown code_addr type");
                      return;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_Livevals_138_138 = STATE_VARIABLE_Livevals_135_135;
                break;
            }
            ll_backend__livemap__livemap_special_code_addr_2_p_0(CodeAddr_42, &MaybeSpecial_49);
            if ((MaybeSpecial_49 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_Livevals_103 = STATE_VARIABLE_Livevals_138_138;
            else
            {
              MR_Word Special_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSpecial_49, (MR_Integer) 0))));

              mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Special_50)), STATE_VARIABLE_Livevals_138_138, STATE_VARIABLE_Livevals_103);
            }
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word MaybeLabels_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 2))));
            MR_Word Var_142;
            MR_Word Var_143;
            MR_Word STATE_VARIABLE_Livevals_144_144;
            MR_Word Var_146;
            MR_Word Rval_204 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 1))));
            MR_Box conv1_STATE_VARIABLE_Livevals_103;

            {
              Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (Rval_204));
              MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_143 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
            ll_backend__livemap__make_live_in_rvals_3_p_0(Var_142, Var_143, &STATE_VARIABLE_Livevals_144_144);
            {
              Var_146 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_146, 0) = ((MR_Box) (&ll_backend__livemap_scalar_common_4[0]));
              MR_hl_field(MR_mktag(0), Var_146, 1) = ((MR_Box) (ll_backend__livemap__livemap_do_build_instr_9_p_0_1));
              MR_hl_field(MR_mktag(0), Var_146, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_146, 3) = ((MR_Box) (STATE_VARIABLE_Livemap_0_106));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__livemap_scalar_common_1[1]), (MR_Word) (&ll_backend__livemap_scalar_common_1[0]), Var_146, MaybeLabels_51, ((MR_Box) (STATE_VARIABLE_Livevals_144_144)), &conv1_STATE_VARIABLE_Livevals_103);
            *STATE_VARIABLE_Livevals_103 = ((MR_Word) (conv1_STATE_VARIABLE_Livevals_103));
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word AffectsLiveness_87 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_Word LiveLvalInfo_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 2))));
            MR_String Code_89 = ((MR_String) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 3))));

            ll_backend__livemap__build_live_lval_info_7_p_0(AffectsLiveness_87, LiveLvalInfo_88, Code_89, STATE_VARIABLE_Livevals_0_102, STATE_VARIABLE_Livevals_103, STATE_VARIABLE_ContainsBadUserCode_0_104, STATE_VARIABLE_ContainsBadUserCode_105);
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word STATE_VARIABLE_Livevals_149_149;
            MR_Word STATE_VARIABLE_Livevals_152_152;
            MR_Word Rval_210 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 1))));
            MR_Word CodeAddr_212 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 2))));
            MR_Word Found_213;
            MR_Word MaybeSpecial_214;

            ll_backend__livemap__look_for_livevals_7_p_0(STATE_VARIABLE_Instrs_0_100, STATE_VARIABLE_Instrs_101, STATE_VARIABLE_Livevals_0_102, &STATE_VARIABLE_Livevals_149_149, (MR_String) "if_val", (MR_Integer) 0, &Found_213);
            switch (Found_213) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_153;
                  MR_Word STATE_VARIABLE_Livevals_154_154;
                  MR_Word Label_205;

                  {
                    Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) (Rval_210));
                    MR_hl_field(MR_mktag(1), Var_153, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  ll_backend__livemap__make_live_in_rvals_3_p_0(Var_153, STATE_VARIABLE_Livevals_149_149, &STATE_VARIABLE_Livevals_154_154);
                  succeeded = ((MR_tag((MR_Word) CodeAddr_212)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Label_205 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeAddr_212, (MR_Integer) 0))));
                    ll_backend__livemap__livemap_insert_label_livevals_4_p_0(STATE_VARIABLE_Livemap_0_106, Label_205, STATE_VARIABLE_Livevals_154_154, &STATE_VARIABLE_Livevals_152_152);
                  }
                  else
                    STATE_VARIABLE_Livevals_152_152 = STATE_VARIABLE_Livevals_154_154;
                }
                break;
              case (MR_Integer) 1:
                mercury__set__union_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), STATE_VARIABLE_Livevals_0_102, STATE_VARIABLE_Livevals_149_149, &STATE_VARIABLE_Livevals_152_152);
                break;
            }
            ll_backend__livemap__livemap_special_code_addr_2_p_0(CodeAddr_212, &MaybeSpecial_214);
            if ((MaybeSpecial_214 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_Livevals_103 = STATE_VARIABLE_Livevals_152_152;
            else
            {
              MR_Word Special_208 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSpecial_214, (MR_Integer) 0))));

              mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Special_208)), STATE_VARIABLE_Livevals_152_152, STATE_VARIABLE_Livevals_103);
            }
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word STATE_VARIABLE_Livevals_158_158;
            MR_Word Lval_216 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 1))));
            MR_Word Rvals_217;

            mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_216)), STATE_VARIABLE_Livevals_0_102, &STATE_VARIABLE_Livevals_158_158);
            ll_backend__opt_util__lval_access_rvals_2_p_0(Lval_216, &Rvals_217);
            ll_backend__livemap__make_live_in_rvals_3_p_0(Rvals_217, STATE_VARIABLE_Livevals_158_158, STATE_VARIABLE_Livevals_103);
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word Var_160;
            MR_Word Lval_218 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 1))));

            {
              Var_160 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_160, 0) = ((MR_Box) (Lval_218));
            }
            ll_backend__livemap__make_live_in_rval_3_p_0(Var_160, STATE_VARIABLE_Livevals_0_102, STATE_VARIABLE_Livevals_103);
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word SizeRval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 4))));
            MR_Word MaybeRegionRval_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 7))));
            MR_Word MaybeReuse_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 8))));
            MR_Word STATE_VARIABLE_Livevals_162_162;
            MR_Word STATE_VARIABLE_Livevals_163_163;
            MR_Word STATE_VARIABLE_Livevals_164_164;
            MR_Word STATE_VARIABLE_Livevals_165_165;
            MR_Word Lval_219 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 1))));
            MR_Word Rvals_220;

            mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_219)), STATE_VARIABLE_Livevals_0_102, &STATE_VARIABLE_Livevals_162_162);
            ll_backend__opt_util__lval_access_rvals_2_p_0(Lval_219, &Rvals_220);
            ll_backend__livemap__make_live_in_rvals_3_p_0(Rvals_220, STATE_VARIABLE_Livevals_162_162, &STATE_VARIABLE_Livevals_163_163);
            ll_backend__livemap__make_live_in_rval_3_p_0(SizeRval_55, STATE_VARIABLE_Livevals_163_163, &STATE_VARIABLE_Livevals_164_164);
            if ((MaybeRegionRval_58 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_Livevals_165_165 = STATE_VARIABLE_Livevals_164_164;
            else
            {
              MR_Word RegionRval_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRegionRval_58, (MR_Integer) 0))));

              ll_backend__livemap__make_live_in_rval_3_p_0(RegionRval_60, STATE_VARIABLE_Livevals_164_164, &STATE_VARIABLE_Livevals_165_165);
            }
            if ((MaybeReuse_59 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_Livevals_103 = STATE_VARIABLE_Livevals_165_165;
            else
            {
              MR_Word ReuseRval_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuse_59, (MR_Integer) 0))));
              MR_Word MaybeFlagLval_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuse_59, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_Livevals_166_166;

              ll_backend__livemap__make_live_in_rval_3_p_0(ReuseRval_61, STATE_VARIABLE_Livevals_165_165, &STATE_VARIABLE_Livevals_166_166);
              if ((MaybeFlagLval_62 == (MR_Word) ((MR_Unsigned) 0U)))
                *STATE_VARIABLE_Livevals_103 = STATE_VARIABLE_Livevals_166_166;
              else
              {
                MR_Word FlagLval_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFlagLval_62, (MR_Integer) 0))));
                MR_Word FlagRvals_64;
                MR_Word STATE_VARIABLE_Livevals_167_167;

                mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (FlagLval_63)), STATE_VARIABLE_Livevals_166_166, &STATE_VARIABLE_Livevals_167_167);
                ll_backend__opt_util__lval_access_rvals_2_p_0(FlagLval_63, &FlagRvals_64);
                ll_backend__livemap__make_live_in_rvals_3_p_0(FlagRvals_64, STATE_VARIABLE_Livevals_167_167, STATE_VARIABLE_Livevals_103);
              }
            }
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word STATE_VARIABLE_Livevals_169_169;
            MR_Word Lval_221 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 1))));
            MR_Word Rvals_222;

            mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_221)), STATE_VARIABLE_Livevals_0_102, &STATE_VARIABLE_Livevals_169_169);
            ll_backend__opt_util__lval_access_rvals_2_p_0(Lval_221, &Rvals_222);
            ll_backend__livemap__make_live_in_rvals_3_p_0(Rvals_222, STATE_VARIABLE_Livevals_169_169, STATE_VARIABLE_Livevals_103);
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Var_171;
            MR_Word Rval_223 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 1))));

            {
              Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_171, 0) = ((MR_Box) (Rval_223));
              MR_hl_field(MR_mktag(1), Var_171, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            ll_backend__livemap__make_live_in_rvals_3_p_0(Var_171, STATE_VARIABLE_Livevals_0_102, STATE_VARIABLE_Livevals_103);
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Var_174;
            MR_Word Rval_224 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 1))));

            {
              Var_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_174, 0) = ((MR_Box) (Rval_224));
              MR_hl_field(MR_mktag(1), Var_174, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            ll_backend__livemap__make_live_in_rvals_3_p_0(Var_174, STATE_VARIABLE_Livevals_0_102, STATE_VARIABLE_Livevals_103);
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 16:
          {
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_Livevals_103 = STATE_VARIABLE_Livevals_0_102;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Word IdRval_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 3))));
            MR_Word NumLval_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 4))));
            MR_Word AddrLval_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 5))));
            MR_Word STATE_VARIABLE_Livevals_177_177;
            MR_Word Var_178;
            MR_Word STATE_VARIABLE_Livevals_179_179;
            MR_Word Var_180;

            ll_backend__livemap__make_live_in_rval_3_p_0(IdRval_68, STATE_VARIABLE_Livevals_0_102, &STATE_VARIABLE_Livevals_177_177);
            {
              Var_178 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_178, 0) = ((MR_Box) (NumLval_69));
            }
            ll_backend__livemap__make_live_in_rval_3_p_0(Var_178, STATE_VARIABLE_Livevals_177_177, &STATE_VARIABLE_Livevals_179_179);
            {
              Var_180 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_180, 0) = ((MR_Box) (AddrLval_70));
            }
            ll_backend__livemap__make_live_in_rval_3_p_0(Var_180, STATE_VARIABLE_Livevals_179_179, STATE_VARIABLE_Livevals_103);
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word ValueRval_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 3))));

            ll_backend__livemap__make_live_in_rval_3_p_0(ValueRval_72, STATE_VARIABLE_Livevals_0_102, STATE_VARIABLE_Livevals_103);
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 19:
          {
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_Livevals_103 = STATE_VARIABLE_Livevals_0_102;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Word STATE_VARIABLE_Livevals_183_183;
            MR_Word Lval_231 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 1))));
            MR_Word Rvals_232;

            mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_231)), STATE_VARIABLE_Livevals_0_102, &STATE_VARIABLE_Livevals_183_183);
            ll_backend__opt_util__lval_access_rvals_2_p_0(Lval_231, &Rvals_232);
            ll_backend__livemap__make_live_in_rvals_3_p_0(Rvals_232, STATE_VARIABLE_Livevals_183_183, STATE_VARIABLE_Livevals_103);
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Word Rval_233 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 1))));

            ll_backend__livemap__make_live_in_rval_3_p_0(Rval_233, STATE_VARIABLE_Livevals_0_102, STATE_VARIABLE_Livevals_103);
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word STATE_VARIABLE_Livevals_186_186;
            MR_Word Lval_234 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 1))));
            MR_Word Rvals_235;

            mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_234)), STATE_VARIABLE_Livevals_0_102, &STATE_VARIABLE_Livevals_186_186);
            ll_backend__opt_util__lval_access_rvals_2_p_0(Lval_234, &Rvals_235);
            ll_backend__livemap__make_live_in_rvals_3_p_0(Rvals_235, STATE_VARIABLE_Livevals_186_186, STATE_VARIABLE_Livevals_103);
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word Rval_236 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 1))));

            ll_backend__livemap__make_live_in_rval_3_p_0(Rval_236, STATE_VARIABLE_Livevals_0_102, STATE_VARIABLE_Livevals_103);
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 24:
          {
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_Livevals_103 = STATE_VARIABLE_Livevals_0_102;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 25:
          {
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_Livevals_103 = STATE_VARIABLE_Livevals_0_102;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 26:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.livemap.livemap_do_build_instr\'/9", (MR_String) "decr_sp_and_return");
            return;
          }
          break;
        case (MR_Integer) 27:
          {
            MR_Word Components_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 2))));

            ll_backend__livemap__build_livemap_foreign_proc_components_5_p_0(Components_91, STATE_VARIABLE_Livevals_0_102, STATE_VARIABLE_Livevals_103, STATE_VARIABLE_ContainsBadUserCode_0_104, STATE_VARIABLE_ContainsBadUserCode_105);
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 28:
          {
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_Livevals_103 = STATE_VARIABLE_Livevals_0_102;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 29:
          {
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_Livevals_103 = STATE_VARIABLE_Livevals_0_102;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 30:
          {
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_Livevals_103 = STATE_VARIABLE_Livevals_0_102;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 31:
          {
            MR_Word Lval_195 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 2))));

            mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_195)), STATE_VARIABLE_Livevals_0_102, STATE_VARIABLE_Livevals_103);
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 32:
          {
            MR_Word LCRval_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 1))));
            MR_Word LCSLval_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 2))));
            MR_Word LCSAccessRvals_29;
            MR_Word STATE_VARIABLE_Livevals_116_116;
            MR_Word Var_117;

            mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (LCSLval_27)), STATE_VARIABLE_Livevals_0_102, &STATE_VARIABLE_Livevals_116_116);
            ll_backend__opt_util__lval_access_rvals_2_p_0(LCSLval_27, &LCSAccessRvals_29);
            {
              Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (LCRval_26));
              MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (LCSAccessRvals_29));
            }
            ll_backend__livemap__make_live_in_rvals_3_p_0(Var_117, STATE_VARIABLE_Livevals_116_116, STATE_VARIABLE_Livevals_103);
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 33:
          {
            MR_Word LCSRval_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 2))));
            MR_Word Child_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 3))));
            MR_Word Var_119;
            MR_Word STATE_VARIABLE_Livevals_120_120;
            MR_Word Var_121;
            MR_Word LCRval_196 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 1))));

            {
              Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (LCSRval_30));
              MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (LCRval_196));
              MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (Var_121));
            }
            ll_backend__livemap__make_live_in_rvals_3_p_0(Var_119, STATE_VARIABLE_Livevals_0_102, &STATE_VARIABLE_Livevals_120_120);
            ll_backend__livemap__livemap_insert_label_livevals_4_p_0(STATE_VARIABLE_Livemap_0_106, Child_31, STATE_VARIABLE_Livevals_120_120, STATE_VARIABLE_Livevals_103);
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
        case (MR_Integer) 34:
          {
            MR_Word Var_124;
            MR_Word Var_125;
            MR_Word Var_127;
            MR_Word LCRval_197 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 1))));
            MR_Word LCSRval_198 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_15, (MR_Integer) 2))));

            {
              Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (LCSRval_198));
              MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (LCRval_197));
              MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_127));
            }
            Var_125 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
            ll_backend__livemap__make_live_in_rvals_3_p_0(Var_124, Var_125, STATE_VARIABLE_Livevals_103);
            *STATE_VARIABLE_Instrs_101 = STATE_VARIABLE_Instrs_0_100;
            *STATE_VARIABLE_ContainsBadUserCode_105 = STATE_VARIABLE_ContainsBadUserCode_0_104;
            *STATE_VARIABLE_Livemap_107 = STATE_VARIABLE_Livemap_0_106;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__livemap__livemap_insert_label_livevals_4_p_0(
  MR_Word Livemap_5,
  MR_Word Label_6,
  MR_Word STATE_VARIABLE_Livevals_0_10,
  MR_Word * STATE_VARIABLE_Livevals_11)
{
  MR_bool succeeded;
  MR_Word LabelLivevals_8;
  MR_Box conv0_LabelLivevals_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__livemap_scalar_common_1[0]), Livemap_5, ((MR_Box) (Label_6)), &conv0_LabelLivevals_8);
  if (succeeded)
  {
    LabelLivevals_8 = ((MR_Word) (conv0_LabelLivevals_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Livelist_9;

    mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LabelLivevals_8, &Livelist_9);
    ll_backend__livemap__livemap_insert_proper_livevals_3_p_0(Livelist_9, STATE_VARIABLE_Livevals_0_10, STATE_VARIABLE_Livevals_11);
  }
  else
    *STATE_VARIABLE_Livevals_11 = STATE_VARIABLE_Livevals_0_10;
}

static void MR_CALL 
ll_backend__livemap__make_live_in_rval_3_p_0(
  MR_Word Rval_4,
  MR_Word STATE_VARIABLE_Live_0_22,
  MR_Word * STATE_VARIABLE_Live_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Rval_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Lval_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Rval_4, (MR_Integer) 0))));
          MR_Word AccessRvals_10;
          MR_Word STATE_VARIABLE_Live_24_24;

          succeeded = ((((MR_tag((MR_Word) Lval_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0)))) == (MR_Integer) 9)));
          if (succeeded)
            STATE_VARIABLE_Live_24_24 = STATE_VARIABLE_Live_0_22;
          else
            mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_6)), STATE_VARIABLE_Live_0_22, &STATE_VARIABLE_Live_24_24);
          ll_backend__opt_util__lval_access_rvals_2_p_0(Lval_6, &AccessRvals_10);
          ll_backend__livemap__make_live_in_rvals_3_p_0(AccessRvals_10, STATE_VARIABLE_Live_24_24, STATE_VARIABLE_Live_23);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.livemap.make_live_in_rval\'/3", (MR_String) "var rval should not propagate to the optimizer");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubRval_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_4, (MR_Integer) 1))));
          MR_Word next_value_of_Rval_4 = SubRval_32;

          // direct tailcall eliminated
          ;
          Rval_4 = next_value_of_Rval_4;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Live_23 = STATE_VARIABLE_Live_0_22;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Live_23 = STATE_VARIABLE_Live_0_22;
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubRval_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_4 = SubRval_14;

              // direct tailcall eliminated
              ;
              Rval_4 = next_value_of_Rval_4;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubRval_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_4 = SubRval_33;

              // direct tailcall eliminated
              ;
              Rval_4 = next_value_of_Rval_4;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SubRvalA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
              MR_Word SubRvalB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_Live_27_27;
              MR_Word next_value_of_Rval_4;
              MR_Word next_value_of_STATE_VARIABLE_Live_0_22;

              ll_backend__livemap__make_live_in_rval_3_p_0(SubRvalA_18, STATE_VARIABLE_Live_0_22, &STATE_VARIABLE_Live_27_27);
              // direct tailcall eliminated
              ;
              next_value_of_Rval_4 = SubRvalB_19;
              next_value_of_STATE_VARIABLE_Live_0_22 = STATE_VARIABLE_Live_27_27;
              Rval_4 = next_value_of_Rval_4;
              STATE_VARIABLE_Live_0_22 = next_value_of_STATE_VARIABLE_Live_0_22;
              continue;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MemRef_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) MemRef_21)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Rval_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MemRef_21, (MR_Integer) 0))));
                    MR_Word next_value_of_Rval_4 = Rval_38;

                    // direct tailcall eliminated
                    ;
                    Rval_4 = next_value_of_Rval_4;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Rval_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MemRef_21, (MR_Integer) 0))));
                    MR_Word next_value_of_Rval_4 = Rval_46;

                    // direct tailcall eliminated
                    ;
                    Rval_4 = next_value_of_Rval_4;
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word CellPtrRval_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_21, (MR_Integer) 0))));
                    MR_Word FieldNumRval_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_21, (MR_Integer) 2))));
                    MR_Word STATE_VARIABLE_Live_14_44;
                    MR_Word next_value_of_Rval_4;
                    MR_Word next_value_of_STATE_VARIABLE_Live_0_22;

                    ll_backend__livemap__make_live_in_rval_3_p_0(CellPtrRval_39, STATE_VARIABLE_Live_0_22, &STATE_VARIABLE_Live_14_44);
                    // direct tailcall eliminated
                    ;
                    next_value_of_Rval_4 = FieldNumRval_41;
                    next_value_of_STATE_VARIABLE_Live_0_22 = STATE_VARIABLE_Live_14_44;
                    Rval_4 = next_value_of_Rval_4;
                    STATE_VARIABLE_Live_0_22 = next_value_of_STATE_VARIABLE_Live_0_22;
                    continue;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__livemap__make_live_in_rvals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Live_0_2,
  MR_Word * STATE_VARIABLE_Live_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Live_3 = STATE_VARIABLE_Live_0_2;
    else
    {
      MR_Word Rval_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Rvals_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Live_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Live_0_2;

      ll_backend__livemap__make_live_in_rval_3_p_0(Rval_7, STATE_VARIABLE_Live_0_2, &STATE_VARIABLE_Live_12_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Rvals_8;
      next_value_of_STATE_VARIABLE_Live_0_2 = STATE_VARIABLE_Live_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Live_0_2 = next_value_of_STATE_VARIABLE_Live_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__livemap__livemap_special_code_addr_2_p_0(
  MR_Word CodeAddr_3,
  MR_Word * MaybeSpecial_4)
{
  switch (MR_tag((MR_Word) CodeAddr_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(CodeAddr_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *MaybeSpecial_4 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__livemap_scalar_common_3[0]));
          break;
        case (MR_Integer) 1:
          *MaybeSpecial_4 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__livemap_scalar_common_3[2]));
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
          *MaybeSpecial_4 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *MaybeSpecial_4 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CodeAddr_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *MaybeSpecial_4 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__livemap_scalar_common_3[4]));
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          *MaybeSpecial_4 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__livemap__look_for_livevals_7_p_0(
  MR_Word Instrs0_8,
  MR_Word * Instrs_9,
  MR_Word STATE_VARIABLE_Livevals_0_18,
  MR_Word * STATE_VARIABLE_Livevals_19,
  MR_String Site_11,
  MR_Word Compulsory_12,
  MR_Word * Found_13)
{
  MR_bool succeeded;
  MR_Word Instrs1_14;
  MR_Word Livevals1_15;
  MR_Word Instrs2_17;
  MR_Word Var_20;
  MR_Word Var_21;

  ll_backend__opt_util__skip_comments_2_p_0(Instrs0_8, &Instrs1_14);
  succeeded = (Instrs1_14 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_14, (MR_Integer) 0))));
    Instrs2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_14, (MR_Integer) 1))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 2);
    if (succeeded)
      Livevals1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_21, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word Livelist_28;
    MR_Word Livevals1_29;

    mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Livevals1_15, &Livelist_28);
    mercury__set__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), &Livevals1_29);
    ll_backend__livemap__livemap_insert_proper_livevals_3_p_0(Livelist_28, Livevals1_29, STATE_VARIABLE_Livevals_19);
    *Instrs_9 = Instrs2_17;
    *Found_13 = (MR_Integer) 1;
  }
  else
  {
    switch (Compulsory_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Instrs_9 = Instrs1_14;
          *Found_13 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_24;

          Var_24 = mercury__string__f_43_43_2_f_0(Site_11, (MR_String) " not preceded by livevals");
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.livemap.look_for_livevals\'/7", Var_24);
            return;
          }
        }
        break;
    }
    *STATE_VARIABLE_Livevals_19 = STATE_VARIABLE_Livevals_0_18;
  }
}

static void MR_CALL 
ll_backend__livemap__build_live_lval_info_7_p_0(
  MR_Word AffectsLiveness_8,
  MR_Word LiveLvalInfo_9,
  MR_String Code_10,
  MR_Word STATE_VARIABLE_Livevals_0_15,
  MR_Word * STATE_VARIABLE_Livevals_16,
  MR_Word STATE_VARIABLE_ContainsBadUserCode_0_17,
  MR_Word * STATE_VARIABLE_ContainsBadUserCode_18)
{
  MR_bool succeeded;

  switch (AffectsLiveness_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_ContainsBadUserCode_18 = (MR_Integer) 1;
        *STATE_VARIABLE_Livevals_16 = STATE_VARIABLE_Livevals_0_15;
      }
      break;
    case (MR_Integer) 2:
      {
        succeeded = (strcmp(Code_10, (MR_String) "") == 0);
        if (succeeded)
          *STATE_VARIABLE_ContainsBadUserCode_18 = STATE_VARIABLE_ContainsBadUserCode_0_17;
        else
          *STATE_VARIABLE_ContainsBadUserCode_18 = (MR_Integer) 1;
        *STATE_VARIABLE_Livevals_16 = STATE_VARIABLE_Livevals_0_15;
      }
      break;
    case (MR_Integer) 1:
      if ((LiveLvalInfo_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_ContainsBadUserCode_18 = (MR_Integer) 1;
        *STATE_VARIABLE_Livevals_16 = STATE_VARIABLE_Livevals_0_15;
      }
      else
      {
        MR_Word LiveLvalSet_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LiveLvalInfo_9, (MR_Integer) 0))));
        MR_Word LiveLvals_14;

        mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LiveLvalSet_13, &LiveLvals_14);
        ll_backend__livemap__livemap_insert_proper_livevals_3_p_0(LiveLvals_14, STATE_VARIABLE_Livevals_0_15, STATE_VARIABLE_Livevals_16);
        *STATE_VARIABLE_ContainsBadUserCode_18 = STATE_VARIABLE_ContainsBadUserCode_0_17;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__livemap__build_livemap_foreign_proc_components_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Livevals_0_2,
  MR_Word * STATE_VARIABLE_Livevals_3,
  MR_Word STATE_VARIABLE_ContainsBadUserCode_0_4,
  MR_Word * STATE_VARIABLE_ContainsBadUserCode_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ContainsBadUserCode_5 = STATE_VARIABLE_ContainsBadUserCode_0_4;
      *STATE_VARIABLE_Livevals_3 = STATE_VARIABLE_Livevals_0_2;
    }
    else
    {
      MR_Word Component_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Components_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Livevals_29_29;
      MR_Word STATE_VARIABLE_ContainsBadUserCode_30_30;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Livevals_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ContainsBadUserCode_0_4;

      switch (MR_tag((MR_Word) Component_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_Livevals_29_29 = STATE_VARIABLE_Livevals_0_2;
            STATE_VARIABLE_ContainsBadUserCode_30_30 = STATE_VARIABLE_ContainsBadUserCode_0_4;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Inputs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Component_12, (MR_Integer) 0))));

            ll_backend__livemap__build_livemap_foreign_proc_inputs_3_p_0(Inputs_16, STATE_VARIABLE_Livevals_0_2, &STATE_VARIABLE_Livevals_29_29);
            STATE_VARIABLE_ContainsBadUserCode_30_30 = STATE_VARIABLE_ContainsBadUserCode_0_4;
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_Livevals_29_29 = STATE_VARIABLE_Livevals_0_2;
            STATE_VARIABLE_ContainsBadUserCode_30_30 = STATE_VARIABLE_ContainsBadUserCode_0_4;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Component_12, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word AffectsLiveness_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Component_12, (MR_Integer) 2))) & (MR_Integer) 3);
                MR_String Code_20 = ((MR_String) ((MR_hl_field(MR_mktag(3), Component_12, (MR_Integer) 3))));

                switch (AffectsLiveness_19) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_ContainsBadUserCode_30_30 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    {
                      succeeded = (strcmp(Code_20, (MR_String) "") == 0);
                      if (succeeded)
                        STATE_VARIABLE_ContainsBadUserCode_30_30 = STATE_VARIABLE_ContainsBadUserCode_0_4;
                      else
                        STATE_VARIABLE_ContainsBadUserCode_30_30 = (MR_Integer) 1;
                    }
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_ContainsBadUserCode_30_30 = STATE_VARIABLE_ContainsBadUserCode_0_4;
                    break;
                }
                STATE_VARIABLE_Livevals_29_29 = STATE_VARIABLE_Livevals_0_2;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word LiveLvalInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Component_12, (MR_Integer) 2))));
                MR_Word AffectsLiveness_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Component_12, (MR_Integer) 1))) & (MR_Integer) 3);
                MR_String Code_37 = ((MR_String) ((MR_hl_field(MR_mktag(3), Component_12, (MR_Integer) 3))));

                switch (AffectsLiveness_36) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      STATE_VARIABLE_ContainsBadUserCode_30_30 = (MR_Integer) 1;
                      STATE_VARIABLE_Livevals_29_29 = STATE_VARIABLE_Livevals_0_2;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      succeeded = (strcmp(Code_37, (MR_String) "") == 0);
                      if (succeeded)
                        STATE_VARIABLE_ContainsBadUserCode_30_30 = STATE_VARIABLE_ContainsBadUserCode_0_4;
                      else
                        STATE_VARIABLE_ContainsBadUserCode_30_30 = (MR_Integer) 1;
                      STATE_VARIABLE_Livevals_29_29 = STATE_VARIABLE_Livevals_0_2;
                    }
                    break;
                  case (MR_Integer) 1:
                    if ((LiveLvalInfo_22 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      STATE_VARIABLE_ContainsBadUserCode_30_30 = (MR_Integer) 1;
                      STATE_VARIABLE_Livevals_29_29 = STATE_VARIABLE_Livevals_0_2;
                    }
                    else
                    {
                      MR_Word LiveLvalSet_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LiveLvalInfo_22, (MR_Integer) 0))));
                      MR_Word LiveLvals_48;

                      mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LiveLvalSet_47, &LiveLvals_48);
                      ll_backend__livemap__livemap_insert_proper_livevals_3_p_0(LiveLvals_48, STATE_VARIABLE_Livevals_0_2, &STATE_VARIABLE_Livevals_29_29);
                      STATE_VARIABLE_ContainsBadUserCode_30_30 = STATE_VARIABLE_ContainsBadUserCode_0_4;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_Livevals_29_29 = STATE_VARIABLE_Livevals_0_2;
                STATE_VARIABLE_ContainsBadUserCode_30_30 = STATE_VARIABLE_ContainsBadUserCode_0_4;
              }
              break;
            case (MR_Integer) 3:
              {
                STATE_VARIABLE_Livevals_29_29 = STATE_VARIABLE_Livevals_0_2;
                STATE_VARIABLE_ContainsBadUserCode_30_30 = STATE_VARIABLE_ContainsBadUserCode_0_4;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Components_13;
      next_value_of_STATE_VARIABLE_Livevals_0_2 = STATE_VARIABLE_Livevals_29_29;
      next_value_of_STATE_VARIABLE_ContainsBadUserCode_0_4 = STATE_VARIABLE_ContainsBadUserCode_30_30;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Livevals_0_2 = next_value_of_STATE_VARIABLE_Livevals_0_2;
      STATE_VARIABLE_ContainsBadUserCode_0_4 = next_value_of_STATE_VARIABLE_ContainsBadUserCode_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__livemap__livemap_insert_proper_livevals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Livevals_0_2,
  MR_Word * STATE_VARIABLE_Livevals_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Livevals_3 = STATE_VARIABLE_Livevals_0_2;
    else
    {
      MR_Word Live_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Livelist_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Livevals_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Livevals_0_2;

      succeeded = ((((MR_tag((MR_Word) Live_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Live_7, (MR_Integer) 0)))) == (MR_Integer) 9)));
      if (succeeded)
        STATE_VARIABLE_Livevals_12_12 = STATE_VARIABLE_Livevals_0_2;
      else
        mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Live_7)), STATE_VARIABLE_Livevals_0_2, &STATE_VARIABLE_Livevals_12_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Livelist_8;
      next_value_of_STATE_VARIABLE_Livevals_0_2 = STATE_VARIABLE_Livevals_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Livevals_0_2 = next_value_of_STATE_VARIABLE_Livevals_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__livemap__build_livemap_foreign_proc_inputs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Livevals_0_2,
  MR_Word * STATE_VARIABLE_Livevals_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Livevals_3 = STATE_VARIABLE_Livevals_0_2;
    else
    {
      MR_Word Input_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Inputs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Rval_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Input_7, (MR_Integer) 4))));
      MR_Word STATE_VARIABLE_Livevals_20_20;
      MR_Word Lval_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Livevals_0_2;

      succeeded = ((MR_tag((MR_Word) Rval_14)) == (MR_Integer) 0);
      if (succeeded)
      {
        Lval_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Rval_14, (MR_Integer) 0))));
        succeeded = ((((MR_tag((MR_Word) Lval_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_17, (MR_Integer) 0)))) == (MR_Integer) 9)));
        if (succeeded)
          STATE_VARIABLE_Livevals_20_20 = STATE_VARIABLE_Livevals_0_2;
        else
          mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_17)), STATE_VARIABLE_Livevals_0_2, &STATE_VARIABLE_Livevals_20_20);
      }
      else
        STATE_VARIABLE_Livevals_20_20 = STATE_VARIABLE_Livevals_0_2;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Inputs_8;
      next_value_of_STATE_VARIABLE_Livevals_0_2 = STATE_VARIABLE_Livevals_20_20;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Livevals_0_2 = next_value_of_STATE_VARIABLE_Livevals_0_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__livemap__equal_livemaps_keys_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Label_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Labels_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Liveset1_10;
      MR_Word Liveset2_11;
      MR_Box conv0_Liveset1_10;
      MR_Box conv1_Liveset2_11;
      MR_Word next_value_of_HeadVar__1_1;

      mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__livemap_scalar_common_1[0]), HeadVar__2_2, ((MR_Box) (Label_6)), &conv0_Liveset1_10);
      Liveset1_10 = ((MR_Word) (conv0_Liveset1_10));
      mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__livemap_scalar_common_1[0]), HeadVar__3_3, ((MR_Box) (Label_6)), &conv1_Liveset2_11);
      Liveset2_11 = ((MR_Word) (conv1_Liveset2_11));
      succeeded = mercury__set__equal_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Liveset1_10, Liveset2_11);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Labels_7;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__livemap____Unify____livemap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__livemap____Unify____livemap_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__livemap____Compare____livemap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__livemap____Compare____livemap_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__livemap____Unify____lvalset_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__livemap____Unify____lvalset_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__livemap____Compare____lvalset_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__livemap____Compare____lvalset_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__livemap__init(void)
{
}

void mercury__ll_backend__livemap__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__livemap__ll_backend__livemap__type_ctor_info_livemap_0);
	MR_register_type_ctor_info(&ll_backend__livemap__ll_backend__livemap__type_ctor_info_lvalset_0);
}

void mercury__ll_backend__livemap__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__livemap__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.livemap.
