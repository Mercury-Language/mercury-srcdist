/*
** Automatically generated from `livemap.m'
** by the Mercury compiler,
** version rotd-2026-03-07
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
#include "sparse_bitset.mih"
#include "string.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.trace_params.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.opt_util.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
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
  MR_Word STATE_VARIABLE_Instrs_0_101,
  MR_Word * STATE_VARIABLE_Instrs_102,
  MR_Word STATE_VARIABLE_Livevals_0_103,
  MR_Word * STATE_VARIABLE_Livevals_104,
  MR_Word STATE_VARIABLE_ContainsBadUserCode_0_105,
  MR_Word * STATE_VARIABLE_ContainsBadUserCode_106,
  MR_Word STATE_VARIABLE_Livemap_0_107,
  MR_Word * STATE_VARIABLE_Livemap_108);

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
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
  /* row   2 */
  { ((MR_Box) (MR_mkword(3, &ll_backend__livemap_scalar_common_1[3]))) },
  /* row   3 */
  { ((MR_Box) ((MR_Unsigned) 8U)) },
  /* row   4 */
  { ((MR_Box) (MR_mkword(3, &ll_backend__livemap_scalar_common_1[4]))) },
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
  { (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0) }
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
  { (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__livemap__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0) }
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
    MR_Word Label_8 = ((MR_Word) ((MR_hl_field(1, MaybeLabel_6, 0))));
    MR_Word LabelLivevals_11;
    MR_Box conv0_LabelLivevals_11;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__livemap_scalar_common_1[0]), Livemap_5, ((MR_Box) (Label_8)), &conv0_LabelLivevals_11);
    if (succeeded)
    {
      LabelLivevals_11 = ((MR_Word) (conv0_LabelLivevals_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Livelist_12;

      mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LabelLivevals_11, &Livelist_12);
      ll_backend__livemap__livemap_insert_proper_livevals_3_p_0(Livelist_12, STATE_VARIABLE_Livevals_0_9, STATE_VARIABLE_Livevals_10);
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
          MR_Word Labels_17;
          MR_Word Var_20;

          mercury__map__keys_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__livemap_scalar_common_1[0]), Livemap0_6, &Labels_17);
          mercury__map__keys_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__livemap_scalar_common_1[0]), Livemap1_11, &Var_20);
          succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__livemap_scalar_common_1[2]), ((MR_Box) (Labels_17)), ((MR_Box) (Var_20)));
          if (succeeded)
            succeeded = ll_backend__livemap__equal_livemaps_keys_3_p_0(Labels_17, Livemap0_6, Livemap1_11);
          if (succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLivemap_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Livemap1_11));
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
      MR_Word Instr0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Instrs0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Instrs1_19;
      MR_Word Livevals1_20;
      MR_Word STATE_VARIABLE_ContainsBadUserCode_1_25;
      MR_Word STATE_VARIABLE_Livemap_1_26;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_Livevals0_2;
      MR_Word next_value_of_STATE_VARIABLE_ContainsBadUserCode_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Livemap_0_5;

      ll_backend__livemap__livemap_do_build_instr_9_p_0(Instr0_14, Instrs0_15, &Instrs1_19, Livevals0_2, &Livevals1_20, STATE_VARIABLE_ContainsBadUserCode_0_3, &STATE_VARIABLE_ContainsBadUserCode_1_25, STATE_VARIABLE_Livemap_0_5, &STATE_VARIABLE_Livemap_1_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Instrs1_19;
      next_value_of_Livevals0_2 = Livevals1_20;
      next_value_of_STATE_VARIABLE_ContainsBadUserCode_0_3 = STATE_VARIABLE_ContainsBadUserCode_1_25;
      next_value_of_STATE_VARIABLE_Livemap_0_5 = STATE_VARIABLE_Livemap_1_26;
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

  ll_backend__livemap__livemap_insert_maybe_label_livevals_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Livevals_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Livevals_10));
}

static void MR_CALL 
ll_backend__livemap__livemap_do_build_instr_9_p_0(
  MR_Word Instr0_10,
  MR_Word STATE_VARIABLE_Instrs_0_101,
  MR_Word * STATE_VARIABLE_Instrs_102,
  MR_Word STATE_VARIABLE_Livevals_0_103,
  MR_Word * STATE_VARIABLE_Livevals_104,
  MR_Word STATE_VARIABLE_ContainsBadUserCode_0_105,
  MR_Word * STATE_VARIABLE_ContainsBadUserCode_106,
  MR_Word STATE_VARIABLE_Livemap_0_107,
  MR_Word * STATE_VARIABLE_Livemap_108)
{
  MR_bool succeeded;
  MR_Word Uinstr0_15 = ((MR_Word) ((MR_hl_field(0, Instr0_10, 0))));

  switch (MR_tag((MR_Word) Uinstr0_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Uinstr0_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_Livevals_104 = STATE_VARIABLE_Livevals_0_103;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_Livevals_104 = STATE_VARIABLE_Livevals_0_103;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
        *STATE_VARIABLE_Livevals_104 = STATE_VARIABLE_Livevals_0_103;
        *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
        *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.livemap.livemap_do_build_instr\'/9", (MR_String) "livevals found in backward scan in build_livemap");
        return;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Uinstr0_15, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.livemap.livemap_do_build_instr\'/9", (MR_String) "block found in backward scan");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_22 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 1))));
            MR_Word STATE_VARIABLE_Livevals_1_113;
            MR_Word Rval_267 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 2))));
            MR_Word Rvals_268;
            MR_Word STATE_VARIABLE_Live_1_271;

            mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_22)), STATE_VARIABLE_Livevals_0_103, &STATE_VARIABLE_Livevals_1_113);
            ll_backend__opt_util__lval_access_rvals_2_p_0(Lval_22, &Rvals_268);
            ll_backend__livemap__make_live_in_rval_3_p_0(Rval_267, STATE_VARIABLE_Livevals_1_113, &STATE_VARIABLE_Live_1_271);
            ll_backend__livemap__make_live_in_rvals_3_p_0(Rvals_268, STATE_VARIABLE_Live_1_271, STATE_VARIABLE_Livevals_104);
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_259 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 1))));
            MR_Word STATE_VARIABLE_Livevals_1_262;
            MR_Word Rval_274 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 2))));
            MR_Word Rvals_275;
            MR_Word STATE_VARIABLE_Live_1_278;

            mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_259)), STATE_VARIABLE_Livevals_0_103, &STATE_VARIABLE_Livevals_1_262);
            ll_backend__opt_util__lval_access_rvals_2_p_0(Lval_259, &Rvals_275);
            ll_backend__livemap__make_live_in_rval_3_p_0(Rval_274, STATE_VARIABLE_Livevals_1_262, &STATE_VARIABLE_Live_1_278);
            ll_backend__livemap__make_live_in_rvals_3_p_0(Rvals_275, STATE_VARIABLE_Live_1_278, STATE_VARIABLE_Livevals_104);
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_38;

            ll_backend__livemap__look_for_livevals_7_p_0(STATE_VARIABLE_Instrs_0_101, STATE_VARIABLE_Instrs_102, STATE_VARIABLE_Livevals_0_103, STATE_VARIABLE_Livevals_104, (MR_String) "call", (MR_Integer) 1, &Var_38);
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 4:
          {
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_Livevals_104 = STATE_VARIABLE_Livevals_0_103;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Label_41 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 1))));

            mercury__map__set_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__livemap_scalar_common_1[0]), ((MR_Box) (Label_41)), ((MR_Box) (STATE_VARIABLE_Livevals_0_103)), STATE_VARIABLE_Livemap_0_107, STATE_VARIABLE_Livemap_108);
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_Livevals_104 = STATE_VARIABLE_Livevals_0_103;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word CodeAddr_42 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 1))));
            MR_Word LivevalsNeeded_43;
            MR_Word Found_44;
            MR_Word MaybeSpecial_49;
            MR_Word STATE_VARIABLE_Livevals_10_136;
            MR_Word STATE_VARIABLE_Livevals_11_139;

            LivevalsNeeded_43 = ll_backend__opt_util__livevals_addr_1_f_0(CodeAddr_42);
            ll_backend__livemap__look_for_livevals_7_p_0(STATE_VARIABLE_Instrs_0_101, STATE_VARIABLE_Instrs_102, STATE_VARIABLE_Livevals_0_103, &STATE_VARIABLE_Livevals_10_136, (MR_String) "goto", LivevalsNeeded_43, &Found_44);
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
                        STATE_VARIABLE_Livevals_11_139 = STATE_VARIABLE_Livevals_10_136;
                        break;
                      case (MR_Integer) 2:
                        STATE_VARIABLE_Livevals_11_139 = STATE_VARIABLE_Livevals_10_136;
                        break;
                      case (MR_Integer) 5:
                        STATE_VARIABLE_Livevals_11_139 = STATE_VARIABLE_Livevals_10_136;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_138;
                      MR_Word Label_200 = ((MR_Word) ((MR_hl_field(1, CodeAddr_42, 0))));

                      Var_138 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
                      ll_backend__livemap__livemap_insert_label_livevals_4_p_0(STATE_VARIABLE_Livemap_0_107, Label_200, Var_138, &STATE_VARIABLE_Livevals_11_139);
                    }
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.livemap.livemap_do_build_instr\'/9", (MR_String) "unknown code_addr type");
                      return;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_Livevals_11_139 = STATE_VARIABLE_Livevals_10_136;
                break;
            }
            ll_backend__livemap__livemap_special_code_addr_2_p_0(CodeAddr_42, &MaybeSpecial_49);
            if ((MaybeSpecial_49 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_Livevals_104 = STATE_VARIABLE_Livevals_11_139;
            else
            {
              MR_Word Special_50 = ((MR_Word) ((MR_hl_field(1, MaybeSpecial_49, 0))));

              mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Special_50)), STATE_VARIABLE_Livevals_11_139, STATE_VARIABLE_Livevals_104);
            }
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word MaybeLabels_52 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 3))));
            MR_Word Var_143;
            MR_Word Var_144;
            MR_Word STATE_VARIABLE_Livevals_13_145;
            MR_Word Var_147;
            MR_Word Rval_205 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 1))));
            MR_Word Rval_281;
            MR_Box conv1_STATE_VARIABLE_Livevals_104;

            {
              Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_143, 0) = ((MR_Box) (Rval_205));
              MR_hl_field(1, Var_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_144 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
            Rval_281 = ((MR_Word) ((MR_hl_field(1, Var_143, 0))));
            ll_backend__livemap__make_live_in_rval_3_p_0(Rval_281, Var_144, &STATE_VARIABLE_Livevals_13_145);
            {
              Var_147 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_147, 0) = ((MR_Box) (&ll_backend__livemap_scalar_common_4[0]));
              MR_hl_field(0, Var_147, 1) = ((MR_Box) (ll_backend__livemap__livemap_do_build_instr_9_p_0_1));
              MR_hl_field(0, Var_147, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_147, 3) = ((MR_Box) (STATE_VARIABLE_Livemap_0_107));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__livemap_scalar_common_1[1]), (MR_Word) (&ll_backend__livemap_scalar_common_1[0]), Var_147, MaybeLabels_52, ((MR_Box) (STATE_VARIABLE_Livevals_13_145)), &conv1_STATE_VARIABLE_Livevals_104);
            *STATE_VARIABLE_Livevals_104 = ((MR_Word) (conv1_STATE_VARIABLE_Livevals_104));
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word AffectsLiveness_88 = ((MR_Unsigned) ((MR_hl_field(3, Uinstr0_15, 1))) & (MR_Integer) 3);
            MR_Word LiveLvalInfo_89 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 2))));
            MR_String Code_90 = ((MR_String) ((MR_hl_field(3, Uinstr0_15, 3))));

            ll_backend__livemap__build_live_lval_info_7_p_0(AffectsLiveness_88, LiveLvalInfo_89, Code_90, STATE_VARIABLE_Livevals_0_103, STATE_VARIABLE_Livevals_104, STATE_VARIABLE_ContainsBadUserCode_0_105, STATE_VARIABLE_ContainsBadUserCode_106);
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word STATE_VARIABLE_Livevals_15_150;
            MR_Word STATE_VARIABLE_Livevals_16_153;
            MR_Word Rval_211 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 1))));
            MR_Word CodeAddr_213 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 2))));
            MR_Word Found_214;
            MR_Word MaybeSpecial_215;

            ll_backend__livemap__look_for_livevals_7_p_0(STATE_VARIABLE_Instrs_0_101, STATE_VARIABLE_Instrs_102, STATE_VARIABLE_Livevals_0_103, &STATE_VARIABLE_Livevals_15_150, (MR_String) "if_val", (MR_Integer) 0, &Found_214);
            switch (Found_214) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_154;
                  MR_Word STATE_VARIABLE_Livevals_17_155;
                  MR_Word Label_206;

                  {
                    Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_154, 0) = ((MR_Box) (Rval_211));
                    MR_hl_field(1, Var_154, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  ll_backend__livemap__make_live_in_rvals_3_p_0(Var_154, STATE_VARIABLE_Livevals_15_150, &STATE_VARIABLE_Livevals_17_155);
                  succeeded = ((MR_tag((MR_Word) CodeAddr_213)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Label_206 = ((MR_Word) ((MR_hl_field(1, CodeAddr_213, 0))));
                    ll_backend__livemap__livemap_insert_label_livevals_4_p_0(STATE_VARIABLE_Livemap_0_107, Label_206, STATE_VARIABLE_Livevals_17_155, &STATE_VARIABLE_Livevals_16_153);
                  }
                  else
                    STATE_VARIABLE_Livevals_16_153 = STATE_VARIABLE_Livevals_17_155;
                }
                break;
              case (MR_Integer) 1:
                mercury__set__union_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), STATE_VARIABLE_Livevals_0_103, STATE_VARIABLE_Livevals_15_150, &STATE_VARIABLE_Livevals_16_153);
                break;
            }
            ll_backend__livemap__livemap_special_code_addr_2_p_0(CodeAddr_213, &MaybeSpecial_215);
            if ((MaybeSpecial_215 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_Livevals_104 = STATE_VARIABLE_Livevals_16_153;
            else
            {
              MR_Word Special_209 = ((MR_Word) ((MR_hl_field(1, MaybeSpecial_215, 0))));

              mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Special_209)), STATE_VARIABLE_Livevals_16_153, STATE_VARIABLE_Livevals_104);
            }
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word STATE_VARIABLE_Livevals_20_159;
            MR_Word Lval_217 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 1))));
            MR_Word Rvals_218;

            mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_217)), STATE_VARIABLE_Livevals_0_103, &STATE_VARIABLE_Livevals_20_159);
            ll_backend__opt_util__lval_access_rvals_2_p_0(Lval_217, &Rvals_218);
            ll_backend__livemap__make_live_in_rvals_3_p_0(Rvals_218, STATE_VARIABLE_Livevals_20_159, STATE_VARIABLE_Livevals_104);
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word Var_161;
            MR_Word Lval_219 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 1))));

            {
              Var_161 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_161, 0) = ((MR_Box) (Lval_219));
            }
            ll_backend__livemap__make_live_in_rval_3_p_0(Var_161, STATE_VARIABLE_Livevals_0_103, STATE_VARIABLE_Livevals_104);
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word SizeRval_56 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 4))));
            MR_Word MaybeRegionRval_59 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 7))));
            MR_Word MaybeReuse_60 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 8))));
            MR_Word STATE_VARIABLE_Livevals_23_163;
            MR_Word STATE_VARIABLE_Livevals_24_164;
            MR_Word STATE_VARIABLE_Livevals_25_165;
            MR_Word STATE_VARIABLE_Livevals_26_166;
            MR_Word Lval_220 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 1))));
            MR_Word Rvals_221;

            mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_220)), STATE_VARIABLE_Livevals_0_103, &STATE_VARIABLE_Livevals_23_163);
            ll_backend__opt_util__lval_access_rvals_2_p_0(Lval_220, &Rvals_221);
            ll_backend__livemap__make_live_in_rvals_3_p_0(Rvals_221, STATE_VARIABLE_Livevals_23_163, &STATE_VARIABLE_Livevals_24_164);
            ll_backend__livemap__make_live_in_rval_3_p_0(SizeRval_56, STATE_VARIABLE_Livevals_24_164, &STATE_VARIABLE_Livevals_25_165);
            if ((MaybeRegionRval_59 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_Livevals_26_166 = STATE_VARIABLE_Livevals_25_165;
            else
            {
              MR_Word RegionRval_61 = ((MR_Word) ((MR_hl_field(1, MaybeRegionRval_59, 0))));

              ll_backend__livemap__make_live_in_rval_3_p_0(RegionRval_61, STATE_VARIABLE_Livevals_25_165, &STATE_VARIABLE_Livevals_26_166);
            }
            if ((MaybeReuse_60 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_Livevals_104 = STATE_VARIABLE_Livevals_26_166;
            else
            {
              MR_Word ReuseRval_62 = ((MR_Word) ((MR_hl_field(1, MaybeReuse_60, 0))));
              MR_Word MaybeFlagLval_63 = ((MR_Word) ((MR_hl_field(1, MaybeReuse_60, 1))));
              MR_Word STATE_VARIABLE_Livevals_27_167;

              ll_backend__livemap__make_live_in_rval_3_p_0(ReuseRval_62, STATE_VARIABLE_Livevals_26_166, &STATE_VARIABLE_Livevals_27_167);
              if ((MaybeFlagLval_63 == (MR_Word) ((MR_Unsigned) 0U)))
                *STATE_VARIABLE_Livevals_104 = STATE_VARIABLE_Livevals_27_167;
              else
              {
                MR_Word FlagLval_64 = ((MR_Word) ((MR_hl_field(1, MaybeFlagLval_63, 0))));
                MR_Word FlagRvals_65;
                MR_Word STATE_VARIABLE_Livevals_28_168;

                mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (FlagLval_64)), STATE_VARIABLE_Livevals_27_167, &STATE_VARIABLE_Livevals_28_168);
                ll_backend__opt_util__lval_access_rvals_2_p_0(FlagLval_64, &FlagRvals_65);
                ll_backend__livemap__make_live_in_rvals_3_p_0(FlagRvals_65, STATE_VARIABLE_Livevals_28_168, STATE_VARIABLE_Livevals_104);
              }
            }
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word STATE_VARIABLE_Livevals_30_170;
            MR_Word Lval_222 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 1))));
            MR_Word Rvals_223;

            mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_222)), STATE_VARIABLE_Livevals_0_103, &STATE_VARIABLE_Livevals_30_170);
            ll_backend__opt_util__lval_access_rvals_2_p_0(Lval_222, &Rvals_223);
            ll_backend__livemap__make_live_in_rvals_3_p_0(Rvals_223, STATE_VARIABLE_Livevals_30_170, STATE_VARIABLE_Livevals_104);
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Var_172;
            MR_Word Rval_224 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 1))));

            {
              Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_172, 0) = ((MR_Box) (Rval_224));
              MR_hl_field(1, Var_172, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            ll_backend__livemap__make_live_in_rvals_3_p_0(Var_172, STATE_VARIABLE_Livevals_0_103, STATE_VARIABLE_Livevals_104);
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Var_175;
            MR_Word Rval_225 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 1))));

            {
              Var_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_175, 0) = ((MR_Box) (Rval_225));
              MR_hl_field(1, Var_175, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            ll_backend__livemap__make_live_in_rvals_3_p_0(Var_175, STATE_VARIABLE_Livevals_0_103, STATE_VARIABLE_Livevals_104);
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 16:
          {
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_Livevals_104 = STATE_VARIABLE_Livevals_0_103;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Word IdRval_69 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 3))));
            MR_Word NumLval_70 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 4))));
            MR_Word AddrLval_71 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 5))));
            MR_Word STATE_VARIABLE_Livevals_34_178;
            MR_Word Var_179;
            MR_Word STATE_VARIABLE_Livevals_35_180;
            MR_Word Var_181;

            ll_backend__livemap__make_live_in_rval_3_p_0(IdRval_69, STATE_VARIABLE_Livevals_0_103, &STATE_VARIABLE_Livevals_34_178);
            {
              Var_179 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_179, 0) = ((MR_Box) (NumLval_70));
            }
            ll_backend__livemap__make_live_in_rval_3_p_0(Var_179, STATE_VARIABLE_Livevals_34_178, &STATE_VARIABLE_Livevals_35_180);
            {
              Var_181 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_181, 0) = ((MR_Box) (AddrLval_71));
            }
            ll_backend__livemap__make_live_in_rval_3_p_0(Var_181, STATE_VARIABLE_Livevals_35_180, STATE_VARIABLE_Livevals_104);
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word ValueRval_73 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 3))));

            ll_backend__livemap__make_live_in_rval_3_p_0(ValueRval_73, STATE_VARIABLE_Livevals_0_103, STATE_VARIABLE_Livevals_104);
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 19:
          {
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_Livevals_104 = STATE_VARIABLE_Livevals_0_103;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Word STATE_VARIABLE_Livevals_38_184;
            MR_Word Lval_232 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 1))));
            MR_Word Rvals_233;

            mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_232)), STATE_VARIABLE_Livevals_0_103, &STATE_VARIABLE_Livevals_38_184);
            ll_backend__opt_util__lval_access_rvals_2_p_0(Lval_232, &Rvals_233);
            ll_backend__livemap__make_live_in_rvals_3_p_0(Rvals_233, STATE_VARIABLE_Livevals_38_184, STATE_VARIABLE_Livevals_104);
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Word Rval_234 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 1))));

            ll_backend__livemap__make_live_in_rval_3_p_0(Rval_234, STATE_VARIABLE_Livevals_0_103, STATE_VARIABLE_Livevals_104);
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word STATE_VARIABLE_Livevals_41_187;
            MR_Word Lval_235 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 1))));
            MR_Word Rvals_236;

            mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_235)), STATE_VARIABLE_Livevals_0_103, &STATE_VARIABLE_Livevals_41_187);
            ll_backend__opt_util__lval_access_rvals_2_p_0(Lval_235, &Rvals_236);
            ll_backend__livemap__make_live_in_rvals_3_p_0(Rvals_236, STATE_VARIABLE_Livevals_41_187, STATE_VARIABLE_Livevals_104);
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word Rval_237 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 1))));

            ll_backend__livemap__make_live_in_rval_3_p_0(Rval_237, STATE_VARIABLE_Livevals_0_103, STATE_VARIABLE_Livevals_104);
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 24:
          {
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_Livevals_104 = STATE_VARIABLE_Livevals_0_103;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 25:
          {
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_Livevals_104 = STATE_VARIABLE_Livevals_0_103;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
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
            MR_Word Components_92 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 2))));

            ll_backend__livemap__build_livemap_foreign_proc_components_5_p_0(Components_92, STATE_VARIABLE_Livevals_0_103, STATE_VARIABLE_Livevals_104, STATE_VARIABLE_ContainsBadUserCode_0_105, STATE_VARIABLE_ContainsBadUserCode_106);
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 28:
          {
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_Livevals_104 = STATE_VARIABLE_Livevals_0_103;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 29:
          {
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_Livevals_104 = STATE_VARIABLE_Livevals_0_103;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 30:
          {
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_Livevals_104 = STATE_VARIABLE_Livevals_0_103;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 31:
          {
            MR_Word Lval_196 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 2))));

            mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_196)), STATE_VARIABLE_Livevals_0_103, STATE_VARIABLE_Livevals_104);
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 32:
          {
            MR_Word LCRval_26 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 1))));
            MR_Word LCSLval_27 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 2))));
            MR_Word LCSAccessRvals_29;
            MR_Word STATE_VARIABLE_Livevals_4_117;
            MR_Word Var_118;

            mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (LCSLval_27)), STATE_VARIABLE_Livevals_0_103, &STATE_VARIABLE_Livevals_4_117);
            ll_backend__opt_util__lval_access_rvals_2_p_0(LCSLval_27, &LCSAccessRvals_29);
            {
              Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_118, 0) = ((MR_Box) (LCRval_26));
              MR_hl_field(1, Var_118, 1) = ((MR_Box) (LCSAccessRvals_29));
            }
            ll_backend__livemap__make_live_in_rvals_3_p_0(Var_118, STATE_VARIABLE_Livevals_4_117, STATE_VARIABLE_Livevals_104);
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 33:
          {
            MR_Word LCSRval_30 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 2))));
            MR_Word Child_31 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 3))));
            MR_Word Var_120;
            MR_Word STATE_VARIABLE_Livevals_6_121;
            MR_Word Var_122;
            MR_Word LCRval_197 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 1))));

            {
              Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_122, 0) = ((MR_Box) (LCSRval_30));
              MR_hl_field(1, Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_120, 0) = ((MR_Box) (LCRval_197));
              MR_hl_field(1, Var_120, 1) = ((MR_Box) (Var_122));
            }
            ll_backend__livemap__make_live_in_rvals_3_p_0(Var_120, STATE_VARIABLE_Livevals_0_103, &STATE_VARIABLE_Livevals_6_121);
            ll_backend__livemap__livemap_insert_label_livevals_4_p_0(STATE_VARIABLE_Livemap_0_107, Child_31, STATE_VARIABLE_Livevals_6_121, STATE_VARIABLE_Livevals_104);
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
          }
          break;
        case (MR_Integer) 34:
          {
            MR_Word Var_125;
            MR_Word Var_126;
            MR_Word Var_128;
            MR_Word LCRval_198 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 1))));
            MR_Word LCSRval_199 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, 2))));

            {
              Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_128, 0) = ((MR_Box) (LCSRval_199));
              MR_hl_field(1, Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_125, 0) = ((MR_Box) (LCRval_198));
              MR_hl_field(1, Var_125, 1) = ((MR_Box) (Var_128));
            }
            Var_126 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
            ll_backend__livemap__make_live_in_rvals_3_p_0(Var_125, Var_126, STATE_VARIABLE_Livevals_104);
            *STATE_VARIABLE_Instrs_102 = STATE_VARIABLE_Instrs_0_101;
            *STATE_VARIABLE_ContainsBadUserCode_106 = STATE_VARIABLE_ContainsBadUserCode_0_105;
            *STATE_VARIABLE_Livemap_108 = STATE_VARIABLE_Livemap_0_107;
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
          MR_Word Lval_6 = ((MR_Word) ((MR_hl_field(0, Rval_4, 0))));
          MR_Word AccessRvals_10;
          MR_Word STATE_VARIABLE_Live_1_24;

          succeeded = ((((MR_tag((MR_Word) Lval_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval_6, 0)))) == (MR_Integer) 9)));
          if (succeeded)
            STATE_VARIABLE_Live_1_24 = STATE_VARIABLE_Live_0_22;
          else
            mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_6)), STATE_VARIABLE_Live_0_22, &STATE_VARIABLE_Live_1_24);
          ll_backend__opt_util__lval_access_rvals_2_p_0(Lval_6, &AccessRvals_10);
          ll_backend__livemap__make_live_in_rvals_3_p_0(AccessRvals_10, STATE_VARIABLE_Live_1_24, STATE_VARIABLE_Live_23);
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
          MR_Word SubRval_32 = ((MR_Word) ((MR_hl_field(2, Rval_4, 1))));
          MR_Word next_value_of_Rval_4 = SubRval_32;

          // direct tailcall eliminated
          ;
          Rval_4 = next_value_of_Rval_4;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_4, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Live_23 = STATE_VARIABLE_Live_0_22;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Live_23 = STATE_VARIABLE_Live_0_22;
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubRval_14 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word next_value_of_Rval_4 = SubRval_14;

              // direct tailcall eliminated
              ;
              Rval_4 = next_value_of_Rval_4;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubRval_33 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word next_value_of_Rval_4 = SubRval_33;

              // direct tailcall eliminated
              ;
              Rval_4 = next_value_of_Rval_4;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SubRvalA_18 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word SubRvalB_19 = ((MR_Word) ((MR_hl_field(3, Rval_4, 3))));
              MR_Word STATE_VARIABLE_Live_4_27;
              MR_Word next_value_of_Rval_4;
              MR_Word next_value_of_STATE_VARIABLE_Live_0_22;

              ll_backend__livemap__make_live_in_rval_3_p_0(SubRvalA_18, STATE_VARIABLE_Live_0_22, &STATE_VARIABLE_Live_4_27);
              // direct tailcall eliminated
              ;
              next_value_of_Rval_4 = SubRvalB_19;
              next_value_of_STATE_VARIABLE_Live_0_22 = STATE_VARIABLE_Live_4_27;
              Rval_4 = next_value_of_Rval_4;
              STATE_VARIABLE_Live_0_22 = next_value_of_STATE_VARIABLE_Live_0_22;
              continue;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MemRef_21 = ((MR_Word) ((MR_hl_field(3, Rval_4, 1))));

              switch (MR_tag((MR_Word) MemRef_21)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Rval_34 = ((MR_Word) ((MR_hl_field(0, MemRef_21, 0))));
                    MR_Word next_value_of_Rval_4 = Rval_34;

                    // direct tailcall eliminated
                    ;
                    Rval_4 = next_value_of_Rval_4;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Rval_39 = ((MR_Word) ((MR_hl_field(1, MemRef_21, 0))));
                    MR_Word next_value_of_Rval_4 = Rval_39;

                    // direct tailcall eliminated
                    ;
                    Rval_4 = next_value_of_Rval_4;
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word CellPtrRval_35 = ((MR_Word) ((MR_hl_field(2, MemRef_21, 0))));
                    MR_Word FieldNumRval_37 = ((MR_Word) ((MR_hl_field(2, MemRef_21, 2))));
                    MR_Word STATE_VARIABLE_Live_3_38;
                    MR_Word next_value_of_Rval_4;
                    MR_Word next_value_of_STATE_VARIABLE_Live_0_22;

                    ll_backend__livemap__make_live_in_rval_3_p_0(CellPtrRval_35, STATE_VARIABLE_Live_0_22, &STATE_VARIABLE_Live_3_38);
                    // direct tailcall eliminated
                    ;
                    next_value_of_Rval_4 = FieldNumRval_37;
                    next_value_of_STATE_VARIABLE_Live_0_22 = STATE_VARIABLE_Live_3_38;
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
      MR_Word Rval_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Rvals_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_Live_1_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Live_0_2;

      ll_backend__livemap__make_live_in_rval_3_p_0(Rval_7, STATE_VARIABLE_Live_0_2, &STATE_VARIABLE_Live_1_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Rvals_8;
      next_value_of_STATE_VARIABLE_Live_0_2 = STATE_VARIABLE_Live_1_12;
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
          *MaybeSpecial_4 = (MR_Word) (MR_mkword(1, &ll_backend__livemap_scalar_common_3[0]));
          break;
        case (MR_Integer) 1:
          *MaybeSpecial_4 = (MR_Word) (MR_mkword(1, &ll_backend__livemap_scalar_common_3[2]));
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
      switch (((MR_Integer) ((MR_hl_field(3, CodeAddr_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *MaybeSpecial_4 = (MR_Word) (MR_mkword(1, &ll_backend__livemap_scalar_common_3[4]));
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
    Var_20 = ((MR_Word) ((MR_hl_field(1, Instrs1_14, 0))));
    Instrs2_17 = ((MR_Word) ((MR_hl_field(1, Instrs1_14, 1))));
    Var_21 = ((MR_Word) ((MR_hl_field(0, Var_20, 0))));
    succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 2);
    if (succeeded)
      Livevals1_15 = ((MR_Word) ((MR_hl_field(2, Var_21, 0))));
  }
  if (succeeded)
  {
    MR_Word Livelist_26;
    MR_Word Livevals1_27;

    mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Livevals1_15, &Livelist_26);
    mercury__set__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), &Livevals1_27);
    ll_backend__livemap__livemap_insert_proper_livevals_3_p_0(Livelist_26, Livevals1_27, STATE_VARIABLE_Livevals_19);
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
        MR_Word LiveLvalSet_13 = ((MR_Word) ((MR_hl_field(1, LiveLvalInfo_9, 0))));
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
      MR_Word Component_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Components_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_Livevals_1_29;
      MR_Word STATE_VARIABLE_ContainsBadUserCode_1_30;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Livevals_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ContainsBadUserCode_0_4;

      switch (MR_tag((MR_Word) Component_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_Livevals_1_29 = STATE_VARIABLE_Livevals_0_2;
            STATE_VARIABLE_ContainsBadUserCode_1_30 = STATE_VARIABLE_ContainsBadUserCode_0_4;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Inputs_16 = ((MR_Word) ((MR_hl_field(1, Component_12, 0))));

            ll_backend__livemap__build_livemap_foreign_proc_inputs_3_p_0(Inputs_16, STATE_VARIABLE_Livevals_0_2, &STATE_VARIABLE_Livevals_1_29);
            STATE_VARIABLE_ContainsBadUserCode_1_30 = STATE_VARIABLE_ContainsBadUserCode_0_4;
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_Livevals_1_29 = STATE_VARIABLE_Livevals_0_2;
            STATE_VARIABLE_ContainsBadUserCode_1_30 = STATE_VARIABLE_ContainsBadUserCode_0_4;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Component_12, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word AffectsLiveness_19 = ((MR_Unsigned) ((MR_hl_field(3, Component_12, 2))) & (MR_Integer) 3);
                MR_String Code_20 = ((MR_String) ((MR_hl_field(3, Component_12, 3))));

                switch (AffectsLiveness_19) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_ContainsBadUserCode_1_30 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    {
                      succeeded = (strcmp(Code_20, (MR_String) "") == 0);
                      if (succeeded)
                        STATE_VARIABLE_ContainsBadUserCode_1_30 = STATE_VARIABLE_ContainsBadUserCode_0_4;
                      else
                        STATE_VARIABLE_ContainsBadUserCode_1_30 = (MR_Integer) 1;
                    }
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_ContainsBadUserCode_1_30 = STATE_VARIABLE_ContainsBadUserCode_0_4;
                    break;
                }
                STATE_VARIABLE_Livevals_1_29 = STATE_VARIABLE_Livevals_0_2;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word LiveLvalInfo_22 = ((MR_Word) ((MR_hl_field(3, Component_12, 2))));
                MR_Word AffectsLiveness_36 = ((MR_Unsigned) ((MR_hl_field(3, Component_12, 1))) & (MR_Integer) 3);
                MR_String Code_37 = ((MR_String) ((MR_hl_field(3, Component_12, 3))));

                switch (AffectsLiveness_36) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      STATE_VARIABLE_ContainsBadUserCode_1_30 = (MR_Integer) 1;
                      STATE_VARIABLE_Livevals_1_29 = STATE_VARIABLE_Livevals_0_2;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      succeeded = (strcmp(Code_37, (MR_String) "") == 0);
                      if (succeeded)
                        STATE_VARIABLE_ContainsBadUserCode_1_30 = STATE_VARIABLE_ContainsBadUserCode_0_4;
                      else
                        STATE_VARIABLE_ContainsBadUserCode_1_30 = (MR_Integer) 1;
                      STATE_VARIABLE_Livevals_1_29 = STATE_VARIABLE_Livevals_0_2;
                    }
                    break;
                  case (MR_Integer) 1:
                    if ((LiveLvalInfo_22 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      STATE_VARIABLE_ContainsBadUserCode_1_30 = (MR_Integer) 1;
                      STATE_VARIABLE_Livevals_1_29 = STATE_VARIABLE_Livevals_0_2;
                    }
                    else
                    {
                      MR_Word LiveLvalSet_38 = ((MR_Word) ((MR_hl_field(1, LiveLvalInfo_22, 0))));
                      MR_Word LiveLvals_39;

                      mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LiveLvalSet_38, &LiveLvals_39);
                      ll_backend__livemap__livemap_insert_proper_livevals_3_p_0(LiveLvals_39, STATE_VARIABLE_Livevals_0_2, &STATE_VARIABLE_Livevals_1_29);
                      STATE_VARIABLE_ContainsBadUserCode_1_30 = STATE_VARIABLE_ContainsBadUserCode_0_4;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_Livevals_1_29 = STATE_VARIABLE_Livevals_0_2;
                STATE_VARIABLE_ContainsBadUserCode_1_30 = STATE_VARIABLE_ContainsBadUserCode_0_4;
              }
              break;
            case (MR_Integer) 3:
              {
                STATE_VARIABLE_Livevals_1_29 = STATE_VARIABLE_Livevals_0_2;
                STATE_VARIABLE_ContainsBadUserCode_1_30 = STATE_VARIABLE_ContainsBadUserCode_0_4;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Components_13;
      next_value_of_STATE_VARIABLE_Livevals_0_2 = STATE_VARIABLE_Livevals_1_29;
      next_value_of_STATE_VARIABLE_ContainsBadUserCode_0_4 = STATE_VARIABLE_ContainsBadUserCode_1_30;
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
      MR_Word Live_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Livelist_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_Livevals_1_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Livevals_0_2;

      succeeded = ((((MR_tag((MR_Word) Live_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Live_7, 0)))) == (MR_Integer) 9)));
      if (succeeded)
        STATE_VARIABLE_Livevals_1_12 = STATE_VARIABLE_Livevals_0_2;
      else
        mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Live_7)), STATE_VARIABLE_Livevals_0_2, &STATE_VARIABLE_Livevals_1_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Livelist_8;
      next_value_of_STATE_VARIABLE_Livevals_0_2 = STATE_VARIABLE_Livevals_1_12;
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
      MR_Word Input_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Inputs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Rval_14 = ((MR_Word) ((MR_hl_field(0, Input_7, 4))));
      MR_Word STATE_VARIABLE_Livevals_1_20;
      MR_Word Lval_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Livevals_0_2;

      succeeded = ((MR_tag((MR_Word) Rval_14)) == (MR_Integer) 0);
      if (succeeded)
      {
        Lval_17 = ((MR_Word) ((MR_hl_field(0, Rval_14, 0))));
        succeeded = ((((MR_tag((MR_Word) Lval_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval_17, 0)))) == (MR_Integer) 9)));
        if (succeeded)
          STATE_VARIABLE_Livevals_1_20 = STATE_VARIABLE_Livevals_0_2;
        else
          mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_17)), STATE_VARIABLE_Livevals_0_2, &STATE_VARIABLE_Livevals_1_20);
      }
      else
        STATE_VARIABLE_Livevals_1_20 = STATE_VARIABLE_Livevals_0_2;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Inputs_8;
      next_value_of_STATE_VARIABLE_Livevals_0_2 = STATE_VARIABLE_Livevals_1_20;
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
      MR_Word Label_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Labels_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
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
