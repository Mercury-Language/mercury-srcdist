/*
** Automatically generated from `basic_block.m'
** by the Mercury compiler,
** version rotd-2022-04-04
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


// :- module ll_backend.basic_block.
// :- implementation.

/*
INIT mercury__ll_backend__basic_block__init
ENDINIT
*/

#include "ll_backend.basic_block.mih"


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




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__basic_block__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__basic_block__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__basic_block__list__ti_list_1ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__basic_block__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0;

static const MR_PseudoTypeInfo ll_backend__basic_block__ll_backend__basic_block__field_types_block_info_0_0[7];

static const MR_ConstString ll_backend__basic_block__ll_backend__basic_block__field_names_block_info_0_0[7];

static const MR_DuArgLocn ll_backend__basic_block__ll_backend__basic_block__field_locns_block_info_0_0[7];

static const MR_DuFunctorDesc ll_backend__basic_block__ll_backend__basic_block__du_functor_desc_block_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__basic_block__ll_backend__basic_block__du_stag_ordered_block_info_0_0[1];

static const MR_DuPtagLayout ll_backend__basic_block__ll_backend__basic_block__du_ptag_ordered_block_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__basic_block__ll_backend__basic_block__du_name_ordered_block_info_0[1];

static const MR_Integer ll_backend__basic_block__ll_backend__basic_block__functor_number_map_block_info_0[1];

static const MR_FA_TypeInfo_Struct2 ll_backend__basic_block__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__basic_block__type_ctor_info_block_info_0;

static MR_bool MR_CALL 
ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__228__1_2_p_0(
  MR_Word NextBlockFallInto_30,
  MR_Word HeadVar__2_50);

static MR_bool MR_CALL 
ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__226__1_2_p_0(
  MR_Word BlockMaybeFallThrough_25,
  MR_Word HeadVar__2_46);

static MR_bool MR_CALL 
ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__224__1_2_p_0(
  MR_Word NextLabel_15,
  MR_Word NextBlockLabel_26);

static MR_bool MR_CALL 
ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__223__1_2_p_0(
  MR_Word Label_10,
  MR_Word BlockLabel_19);

static MR_bool MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__basic_block__build_block_map_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word ProcLabel_3,
  MR_Word FallInto_4,
  MR_Word STATE_VARIABLE_BlockMap_0_5,
  MR_Word * STATE_VARIABLE_BlockMap_6,
  MR_Word STATE_VARIABLE_NewLabels_0_7,
  MR_Word * STATE_VARIABLE_NewLabels_8,
  MR_Word STATE_VARIABLE_C_0_9,
  MR_Word * STATE_VARIABLE_C_10);

static void MR_CALL 
ll_backend__basic_block__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_110_100_95_99_111_117_110_116_95_108_105_115_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_List_0_2,
  MR_Word * STATE_VARIABLE_List_3,
  MR_Integer STATE_VARIABLE_N_0_4,
  MR_Integer * STATE_VARIABLE_N_5);

static void MR_CALL 
ll_backend__basic_block__take_until_end_of_block_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevBlockInstrs_0_2,
  MR_Word * STATE_VARIABLE_RevBlockInstrs_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
ll_backend__basic_block____Unify____block_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__basic_block____Compare____block_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__basic_block____Unify____block_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__basic_block____Compare____block_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__basic_block_scalar_common_1[3][2];

static /* final */ const MR_Box ll_backend__basic_block_scalar_common_2[1][3];

static /* final */ const MR_Box ll_backend__basic_block_scalar_common_3[3][5];




static /* final */ const MR_Box ll_backend__basic_block_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
};

static /* final */ const MR_Box ll_backend__basic_block_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0))
  },
};

static /* final */ const MR_Box ll_backend__basic_block_scalar_common_3[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__basic_block__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__basic_block__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};



#include "array.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__basic_block__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__basic_block__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__basic_block__list__ti_list_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__basic_block__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__basic_block__ll_backend__basic_block__field_types_block_info_0_0[7] = {
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0),
  (MR_PseudoTypeInfo) (&ll_backend__basic_block__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&ll_backend__basic_block__list__ti_list_1ll_backend__llds__type_ctor_info_label_0),
  (MR_PseudoTypeInfo) (&ll_backend__basic_block__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0)
};

static const MR_ConstString ll_backend__basic_block__ll_backend__basic_block__field_names_block_info_0_0[7] = {
  (MR_String) "bi_starting_label",
  (MR_String) "bi_label_instr",
  (MR_String) "bi_later_instrs",
  (MR_String) "bi_num_later_instrs",
  (MR_String) "bi_fallen_into",
  (MR_String) "bi_jump_dests",
  (MR_String) "bi_fall_dest"
};

static const MR_DuArgLocn ll_backend__basic_block__ll_backend__basic_block__field_locns_block_info_0_0[7] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ll_backend__basic_block__ll_backend__basic_block__du_functor_desc_block_info_0_0 = {
  (MR_String) "block_info",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__basic_block__ll_backend__basic_block__field_types_block_info_0_0,
  ll_backend__basic_block__ll_backend__basic_block__field_names_block_info_0_0,
  ll_backend__basic_block__ll_backend__basic_block__field_locns_block_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__basic_block__ll_backend__basic_block__du_stag_ordered_block_info_0_0[1] = {
  &ll_backend__basic_block__ll_backend__basic_block__du_functor_desc_block_info_0_0
};

static const MR_DuPtagLayout ll_backend__basic_block__ll_backend__basic_block__du_ptag_ordered_block_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__basic_block__ll_backend__basic_block__du_stag_ordered_block_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__basic_block__ll_backend__basic_block__du_name_ordered_block_info_0[1] = {
  &ll_backend__basic_block__ll_backend__basic_block__du_functor_desc_block_info_0_0
};

static const MR_Integer ll_backend__basic_block__ll_backend__basic_block__functor_number_map_block_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__basic_block____Unify____block_info_0_0_10001)),
  ((MR_Box) (ll_backend__basic_block____Compare____block_info_0_0_10001)),
  (MR_String) "ll_backend.basic_block",
  (MR_String) "block_info",
  { ll_backend__basic_block__ll_backend__basic_block__du_name_ordered_block_info_0 },
  { ll_backend__basic_block__ll_backend__basic_block__du_ptag_ordered_block_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__basic_block__ll_backend__basic_block__functor_number_map_block_info_0,

};

static const MR_FA_TypeInfo_Struct2 ll_backend__basic_block__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__basic_block__type_ctor_info_block_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_TypeInfo) (&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0)
  }
};

const MR_TypeCtorInfo_Struct ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__basic_block____Unify____block_map_0_0_10001)),
  ((MR_Box) (ll_backend__basic_block____Compare____block_map_0_0_10001)),
  (MR_String) "ll_backend.basic_block",
  (MR_String) "block_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&ll_backend__basic_block__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__basic_block__type_ctor_info_block_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__228__1_2_p_0(
  MR_Word NextBlockFallInto_30,
  MR_Word HeadVar__2_50)
{
  MR_bool succeeded = (NextBlockFallInto_30 == HeadVar__2_50);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__226__1_2_p_0(
  MR_Word BlockMaybeFallThrough_25,
  MR_Word HeadVar__2_46)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__basic_block_scalar_common_1[0]), ((MR_Box) (BlockMaybeFallThrough_25)), ((MR_Box) (HeadVar__2_46)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__224__1_2_p_0(
  MR_Word NextLabel_15,
  MR_Word NextBlockLabel_26)
{
  MR_bool succeeded;

  succeeded = ll_backend__llds____Unify____label_0_0(NextBlockLabel_26, NextLabel_15);
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__223__1_2_p_0(
  MR_Word Label_10,
  MR_Word BlockLabel_19)
{
  MR_bool succeeded;

  succeeded = ll_backend__llds____Unify____label_0_0(BlockLabel_19, Label_10);
  return succeeded;
}

void MR_CALL 
ll_backend__basic_block____Compare____block_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__basic_block_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
ll_backend__basic_block____Unify____block_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__basic_block_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
ll_backend__basic_block____Compare____block_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
    MR_Word SubResult1_6;

    ll_backend__llds____Compare____label_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      ll_backend__llds____Compare____instruction_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__basic_block_scalar_common_1[1]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;
            MR_Integer Var_33 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_34 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_33 < Var_34);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_33 > Var_34);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__basic_block_scalar_common_1[2]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__basic_block_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__basic_block____Unify____block_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_21_21;
    MR_Word TypeInfo_22_22;
    MR_Word TypeInfo_23_23;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));

    succeeded = ll_backend__llds____Unify____label_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = ll_backend__llds____Unify____instruction_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_21_21 = (MR_Word) (&ll_backend__basic_block_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
            {
              TypeInfo_22_22 = (MR_Word) (&ll_backend__basic_block_scalar_common_1[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_23_23 = (MR_Word) (&ll_backend__basic_block_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
ll_backend__basic_block__flatten_basic_blocks_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word BlockMap_2,
  MR_Word * HeadVar__3_3,
  MR_Integer * HeadVar__4_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Integer) 0;
  }
  else
  {
    MR_Word Label_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Labels_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word RestInstrs_11;
    MR_Integer RestNumInstrs_12;
    MR_Word BlockInfo_13;
    MR_Word BlockLabelInstr_15;
    MR_Word BlockInstrs_16;
    MR_Integer NumBlockInstrs_17;
    MR_Word Var_21;
    MR_Box conv0_BlockInfo_13;

    ll_backend__basic_block__flatten_basic_blocks_4_p_0(Labels_7, BlockMap_2, &RestInstrs_11, &RestNumInstrs_12);
    mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0), BlockMap_2, ((MR_Box) (Label_6)), &conv0_BlockInfo_13);
    BlockInfo_13 = ((MR_Word) (conv0_BlockInfo_13));
    BlockLabelInstr_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_13, (MR_Integer) 1))));
    BlockInstrs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_13, (MR_Integer) 2))));
    NumBlockInstrs_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), BlockInfo_13, (MR_Integer) 3))));
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (BlockLabelInstr_15));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (BlockInstrs_16));
    }
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_21, RestInstrs_11);
    *HeadVar__4_4 = (MR_Integer) ((MR_Unsigned) NumBlockInstrs_17 + (MR_Unsigned) RestNumInstrs_12);
  }
}

static MR_bool MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__228__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__226__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__224__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__223__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_BlockMap_0_3,
  MR_Word * STATE_VARIABLE_BlockMap_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_BlockMap_4 = STATE_VARIABLE_BlockMap_0_3;
    }
    else
    {
      MR_Word Label_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Labels_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word NextLabel_15;
      MR_Word RestLabels_16;
      MR_Word TypeCtorInfo_59_59;

      succeeded = (Labels_11 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        NextLabel_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Labels_11, (MR_Integer) 0))));
        RestLabels_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Labels_11, (MR_Integer) 1))));
        TypeCtorInfo_59_59 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0);
        succeeded = mercury__set__member_2_p_0(TypeCtorInfo_59_59, ((MR_Box) (NextLabel_15)), HeadVar__5_5);
      }
      if (succeeded)
      {
        MR_Word BlockInfo_17;
        MR_Word NextBlockInfo_18;
        MR_Word BlockLabel_19;
        MR_Word BlockLabelInstr_20;
        MR_Word BlockInstrs_21;
        MR_Integer NumBlockInstrs_22;
        MR_Word BlockFallInto_23;
        MR_Word BlockSideLabels_24;
        MR_Word BlockMaybeFallThrough_25;
        MR_Word NextBlockLabel_26;
        MR_Word NextBlockInstrs_28;
        MR_Integer NumNextBlockInstrs_29;
        MR_Word NextBlockFallInto_30;
        MR_Word NextBlockSideLabels_31;
        MR_Word NextBlockMaybeFallThrough_32;
        MR_Word NewBlockInfo_33;
        MR_Word Var_37;
        MR_Word Var_40;
        MR_Word Var_43;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_51;
        MR_Integer Var_52;
        MR_Word Var_53;
        MR_Word STATE_VARIABLE_BlockMap_54_54;
        MR_Word STATE_VARIABLE_BlockMap_55_55;
        MR_Word Var_56;
        MR_Box conv0_BlockInfo_17;
        MR_Box conv1_NextBlockInfo_18;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_STATE_VARIABLE_BlockMap_0_3;

        mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0), STATE_VARIABLE_BlockMap_0_3, ((MR_Box) (Label_10)), &conv0_BlockInfo_17);
        BlockInfo_17 = ((MR_Word) (conv0_BlockInfo_17));
        mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0), STATE_VARIABLE_BlockMap_0_3, ((MR_Box) (NextLabel_15)), &conv1_NextBlockInfo_18);
        NextBlockInfo_18 = ((MR_Word) (conv1_NextBlockInfo_18));
        BlockLabel_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_17, (MR_Integer) 0))));
        BlockLabelInstr_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_17, (MR_Integer) 1))));
        BlockInstrs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_17, (MR_Integer) 2))));
        NumBlockInstrs_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), BlockInfo_17, (MR_Integer) 3))));
        BlockFallInto_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), BlockInfo_17, (MR_Integer) 4))) & (MR_Integer) 1);
        BlockSideLabels_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_17, (MR_Integer) 5))));
        BlockMaybeFallThrough_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_17, (MR_Integer) 6))));
        NextBlockLabel_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NextBlockInfo_18, (MR_Integer) 0))));
        NextBlockInstrs_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NextBlockInfo_18, (MR_Integer) 2))));
        NumNextBlockInstrs_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), NextBlockInfo_18, (MR_Integer) 3))));
        NextBlockFallInto_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), NextBlockInfo_18, (MR_Integer) 4))) & (MR_Integer) 1);
        NextBlockSideLabels_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NextBlockInfo_18, (MR_Integer) 5))));
        NextBlockMaybeFallThrough_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NextBlockInfo_18, (MR_Integer) 6))));
        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&ll_backend__basic_block_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (ll_backend__basic_block__extend_basic_blocks_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (Label_10));
          MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) (BlockLabel_19));
        }
        mercury__require__expect_3_p_0(Var_37, (MR_String) "predicate \140ll_backend.basic_block.extend_basic_blocks\'/5", (MR_String) "block label mismatch");
        {
          Var_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&ll_backend__basic_block_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (ll_backend__basic_block__extend_basic_blocks_5_p_0_2));
          MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (NextLabel_15));
          MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) (NextBlockLabel_26));
        }
        mercury__require__expect_3_p_0(Var_40, (MR_String) "predicate \140ll_backend.basic_block.extend_basic_blocks\'/5", (MR_String) "next block label mismatch");
        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (NextLabel_15));
        }
        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&ll_backend__basic_block_scalar_common_3[1]));
          MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (ll_backend__basic_block__extend_basic_blocks_5_p_0_3));
          MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (BlockMaybeFallThrough_25));
          MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) (Var_46));
        }
        mercury__require__expect_3_p_0(Var_43, (MR_String) "predicate \140ll_backend.basic_block.extend_basic_blocks\'/5", (MR_String) "fall through mismatch");
        {
          Var_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&ll_backend__basic_block_scalar_common_3[2]));
          MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (ll_backend__basic_block__extend_basic_blocks_5_p_0_4));
          MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (NextBlockFallInto_30));
          MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        mercury__require__expect_3_p_0(Var_47, (MR_String) "predicate \140ll_backend.basic_block.extend_basic_blocks\'/5", (MR_String) "fall into mismatch");
        Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BlockInstrs_21, NextBlockInstrs_28);
        Var_52 = (MR_Integer) ((MR_Unsigned) NumBlockInstrs_22 + (MR_Unsigned) NumNextBlockInstrs_29);
        Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), BlockSideLabels_24, NextBlockSideLabels_31);
        {
          NewBlockInfo_33 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NewBlockInfo_33, 0) = ((MR_Box) (BlockLabel_19));
          MR_hl_field(MR_mktag(0), NewBlockInfo_33, 1) = ((MR_Box) (BlockLabelInstr_20));
          MR_hl_field(MR_mktag(0), NewBlockInfo_33, 2) = ((MR_Box) (Var_51));
          MR_hl_field(MR_mktag(0), NewBlockInfo_33, 3) = ((MR_Box) (Var_52));
          MR_hl_field(MR_mktag(0), NewBlockInfo_33, 4) = (MR_Box) ((MR_Unsigned) (BlockFallInto_23));
          MR_hl_field(MR_mktag(0), NewBlockInfo_33, 5) = ((MR_Box) (Var_53));
          MR_hl_field(MR_mktag(0), NewBlockInfo_33, 6) = ((MR_Box) (NextBlockMaybeFallThrough_32));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0), ((MR_Box) (Label_10)), ((MR_Box) (NewBlockInfo_33)), STATE_VARIABLE_BlockMap_0_3, &STATE_VARIABLE_BlockMap_54_54);
        mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0), ((MR_Box) (NextLabel_15)), STATE_VARIABLE_BlockMap_54_54, &STATE_VARIABLE_BlockMap_55_55);
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Label_10));
          MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (RestLabels_16));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_56;
        next_value_of_STATE_VARIABLE_BlockMap_0_3 = STATE_VARIABLE_BlockMap_55_55;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_BlockMap_0_3 = next_value_of_STATE_VARIABLE_BlockMap_0_3;
        continue;
      }
      else
      {
        MR_Word LabelSeqTail_34;

        ll_backend__basic_block__extend_basic_blocks_5_p_0(Labels_11, &LabelSeqTail_34, STATE_VARIABLE_BlockMap_0_3, STATE_VARIABLE_BlockMap_4, HeadVar__5_5);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Label_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LabelSeqTail_34));
        }
      }
    }
    break;
  }
}

void MR_CALL 
ll_backend__basic_block__create_basic_blocks_8_p_0(
  MR_Word Instrs0_9,
  MR_Word * Comments_10,
  MR_Word ProcLabel_11,
  MR_Word STATE_VARIABLE_C_0_19,
  MR_Word * STATE_VARIABLE_C_20,
  MR_Word * NewLabels_13,
  MR_Word * LabelSeq_14,
  MR_Word * BlockMap_15)
{
  MR_Word LabelInstr_16;
  MR_Word AfterLabelInstrs_17;
  MR_Word Instrs1_18;
  MR_Word Var_22;
  MR_Word Var_23;

  ll_backend__opt_util__get_prologue_4_p_0(Instrs0_9, &LabelInstr_16, Comments_10, &AfterLabelInstrs_17);
  {
    Instrs1_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Instrs1_18, 0) = ((MR_Box) (LabelInstr_16));
    MR_hl_field(MR_mktag(1), Instrs1_18, 1) = ((MR_Box) (AfterLabelInstrs_17));
  }
  Var_22 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0));
  Var_23 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
  ll_backend__basic_block__build_block_map_10_p_0(Instrs1_18, LabelSeq_14, ProcLabel_11, (MR_Integer) 0, Var_22, BlockMap_15, Var_23, NewLabels_13, STATE_VARIABLE_C_0_19, STATE_VARIABLE_C_20);
}

static void MR_CALL 
ll_backend__basic_block__build_block_map_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word ProcLabel_3,
  MR_Word FallInto_4,
  MR_Word STATE_VARIABLE_BlockMap_0_5,
  MR_Word * STATE_VARIABLE_BlockMap_6,
  MR_Word STATE_VARIABLE_NewLabels_0_7,
  MR_Word * STATE_VARIABLE_NewLabels_8,
  MR_Word STATE_VARIABLE_C_0_9,
  MR_Word * STATE_VARIABLE_C_10)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_C_10 = STATE_VARIABLE_C_0_9;
    *STATE_VARIABLE_NewLabels_8 = STATE_VARIABLE_NewLabels_0_7;
    *STATE_VARIABLE_BlockMap_6 = STATE_VARIABLE_BlockMap_0_5;
  }
  else
  {
    MR_Word OrigInstr0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word OrigInstrs0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Label_32;
    MR_Word LabelInstr_33;
    MR_Word RestInstrs_34;
    MR_Word RevBlockInstrs_36;
    MR_Word Instrs1_37;
    MR_Word LabelSeq1_38;
    MR_Word NextFallInto_39;
    MR_Word BlockInstrs_42;
    MR_Integer NumBlockInstrs_43;
    MR_Word SideLabels_46;
    MR_Word MaybeFallThrough_48;
    MR_Word BlockInfo_49;
    MR_Word STATE_VARIABLE_C_57_57;
    MR_Word STATE_VARIABLE_NewLabels_58_58;
    MR_Word STATE_VARIABLE_BlockMap_62_62;
    MR_Word OrigLabel_30;
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigInstr0_22, (MR_Integer) 0))));

    succeeded = ((((MR_tag((MR_Word) Var_56)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_56, (MR_Integer) 0)))) == (MR_Integer) 5)));
    if (succeeded)
    {
      OrigLabel_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_56, (MR_Integer) 1))));
      Label_32 = OrigLabel_30;
      LabelInstr_33 = OrigInstr0_22;
      RestInstrs_34 = OrigInstrs0_23;
      STATE_VARIABLE_C_57_57 = STATE_VARIABLE_C_0_9;
      STATE_VARIABLE_NewLabels_58_58 = STATE_VARIABLE_NewLabels_0_7;
    }
    else
    {
      MR_Integer N_35;
      MR_Word Var_59;

      mercury__counter__allocate_3_p_0(&N_35, STATE_VARIABLE_C_0_9, &STATE_VARIABLE_C_57_57);
      {
        Label_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Label_32, 0) = ((MR_Box) (N_35));
        MR_hl_field(MR_mktag(0), Label_32, 1) = ((MR_Box) (ProcLabel_3));
      }
      mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (Label_32)), STATE_VARIABLE_NewLabels_0_7, &STATE_VARIABLE_NewLabels_58_58);
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (Label_32));
      }
      {
        LabelInstr_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), LabelInstr_33, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(0), LabelInstr_33, 1) = ((MR_Box) ((MR_String) ""));
      }
      RestInstrs_34 = HeadVar__1_1;
    }
    ll_backend__basic_block__take_until_end_of_block_4_p_0(RestInstrs_34, (MR_Word) ((MR_Unsigned) 0U), &RevBlockInstrs_36, &Instrs1_37);
    if ((RevBlockInstrs_36 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      BlockInstrs_42 = (MR_Word) ((MR_Unsigned) 0U);
      NumBlockInstrs_43 = (MR_Integer) 0;
      SideLabels_46 = (MR_Word) ((MR_Unsigned) 0U);
      NextFallInto_39 = (MR_Integer) 1;
    }
    else
    {
      MR_Word LastUinstr_44;
      MR_Word X_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevBlockInstrs_36, (MR_Integer) 0))));
      MR_Word Xs_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevBlockInstrs_36, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_List_20_90;
      MR_Word _SideCodeAddrs_47;

      {
        STATE_VARIABLE_List_20_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_List_20_90, 0) = ((MR_Box) (X_82));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_List_20_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ll_backend__basic_block__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_110_100_95_99_111_117_110_116_95_108_105_115_116_95_95_91_49_93_95_48_5_p_0(Xs_83, STATE_VARIABLE_List_20_90, &BlockInstrs_42, (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1), &NumBlockInstrs_43);
      LastUinstr_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_82, (MR_Integer) 0))));
      ll_backend__opt_util__possible_targets_3_p_0(LastUinstr_44, &SideLabels_46, &_SideCodeAddrs_47);
      NextFallInto_39 = ll_backend__opt_util__can_instr_fall_through_1_f_0(LastUinstr_44);
    }
    ll_backend__basic_block__build_block_map_10_p_0(Instrs1_37, &LabelSeq1_38, ProcLabel_3, NextFallInto_39, STATE_VARIABLE_BlockMap_0_5, &STATE_VARIABLE_BlockMap_62_62, STATE_VARIABLE_NewLabels_58_58, STATE_VARIABLE_NewLabels_8, STATE_VARIABLE_C_57_57, STATE_VARIABLE_C_10);
    switch (NextFallInto_39) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeFallThrough_48 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        if ((LabelSeq1_38 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeFallThrough_48 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word NextLabel_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LabelSeq1_38, (MR_Integer) 0))));

          {
            MaybeFallThrough_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeFallThrough_48, 0) = ((MR_Box) (NextLabel_74));
          }
        }
        break;
    }
    {
      BlockInfo_49 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), BlockInfo_49, 0) = ((MR_Box) (Label_32));
      MR_hl_field(MR_mktag(0), BlockInfo_49, 1) = ((MR_Box) (LabelInstr_33));
      MR_hl_field(MR_mktag(0), BlockInfo_49, 2) = ((MR_Box) (BlockInstrs_42));
      MR_hl_field(MR_mktag(0), BlockInfo_49, 3) = ((MR_Box) (NumBlockInstrs_43));
      MR_hl_field(MR_mktag(0), BlockInfo_49, 4) = (MR_Box) ((MR_Unsigned) (FallInto_4));
      MR_hl_field(MR_mktag(0), BlockInfo_49, 5) = ((MR_Box) (SideLabels_46));
      MR_hl_field(MR_mktag(0), BlockInfo_49, 6) = ((MR_Box) (MaybeFallThrough_48));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0), ((MR_Box) (Label_32)), ((MR_Box) (BlockInfo_49)), STATE_VARIABLE_BlockMap_62_62, STATE_VARIABLE_BlockMap_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Label_32));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LabelSeq1_38));
    }
  }
}

static void MR_CALL 
ll_backend__basic_block__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_110_100_95_99_111_117_110_116_95_108_105_115_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_List_0_2,
  MR_Word * STATE_VARIABLE_List_3,
  MR_Integer STATE_VARIABLE_N_0_4,
  MR_Integer * STATE_VARIABLE_N_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_N_5 = STATE_VARIABLE_N_0_4;
      *STATE_VARIABLE_List_3 = STATE_VARIABLE_List_0_2;
    }
    else
    {
      MR_Box X_12 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word Xs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_List_20_20;
      MR_Integer STATE_VARIABLE_N_21_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_List_0_2;
      MR_Integer next_value_of_STATE_VARIABLE_N_0_4;

      {
        STATE_VARIABLE_List_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_List_20_20, 0) = X_12;
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_List_20_20, 1) = ((MR_Box) (STATE_VARIABLE_List_0_2));
      }
      STATE_VARIABLE_N_21_21 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_4 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Xs_13;
      next_value_of_STATE_VARIABLE_List_0_2 = STATE_VARIABLE_List_20_20;
      next_value_of_STATE_VARIABLE_N_0_4 = STATE_VARIABLE_N_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_List_0_2 = next_value_of_STATE_VARIABLE_List_0_2;
      STATE_VARIABLE_N_0_4 = next_value_of_STATE_VARIABLE_N_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__basic_block__take_until_end_of_block_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevBlockInstrs_0_2,
  MR_Word * STATE_VARIABLE_RevBlockInstrs_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RevBlockInstrs_3 = STATE_VARIABLE_RevBlockInstrs_0_2;
    }
    else
    {
      MR_Word Instr0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Uinstr0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_8, (MR_Integer) 0))));

      succeeded = ((((MR_tag((MR_Word) Uinstr0_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr0_12, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        *HeadVar__4_4 = HeadVar__1_1;
        *STATE_VARIABLE_RevBlockInstrs_3 = STATE_VARIABLE_RevBlockInstrs_0_2;
      }
      else
      {
        MR_Word Var_17;

        Var_17 = ll_backend__opt_util__can_instr_branch_away_1_f_0(Uinstr0_12);
        succeeded = (Var_17 == (MR_Integer) 1);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_RevBlockInstrs_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_8));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevBlockInstrs_0_2));
          }
          *HeadVar__4_4 = Instrs0_9;
        }
        else
        {
          MR_Word STATE_VARIABLE_RevBlockInstrs_19_19;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_STATE_VARIABLE_RevBlockInstrs_0_2;

          {
            STATE_VARIABLE_RevBlockInstrs_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevBlockInstrs_19_19, 0) = ((MR_Box) (Instr0_8));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevBlockInstrs_19_19, 1) = ((MR_Box) (STATE_VARIABLE_RevBlockInstrs_0_2));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Instrs0_9;
          next_value_of_STATE_VARIABLE_RevBlockInstrs_0_2 = STATE_VARIABLE_RevBlockInstrs_19_19;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_RevBlockInstrs_0_2 = next_value_of_STATE_VARIABLE_RevBlockInstrs_0_2;
          continue;
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__basic_block____Unify____block_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__basic_block____Unify____block_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__basic_block____Compare____block_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__basic_block____Compare____block_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__basic_block____Unify____block_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__basic_block____Unify____block_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__basic_block____Compare____block_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__basic_block____Compare____block_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__basic_block__init(void)
{
}

void mercury__ll_backend__basic_block__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0);
	MR_register_type_ctor_info(&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_map_0);
}

void mercury__ll_backend__basic_block__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__basic_block__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.basic_block.
