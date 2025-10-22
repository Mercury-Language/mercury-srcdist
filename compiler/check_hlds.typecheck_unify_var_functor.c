/*
** Automatically generated from `typecheck_unify_var_functor.m'
** by the Mercury compiler,
** version rotd-2025-10-22
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


// :- module check_hlds.typecheck_unify_var_functor.
// :- implementation.

/*
INIT mercury__check_hlds__typecheck_unify_var_functor__init
ENDINIT
*/

#include "check_hlds.typecheck_unify_var_functor.mih"


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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
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
#include "set_tree234.mih"
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
#include "check_hlds.type_assign.mih"
#include "check_hlds.typecheck_cons_infos.mih"
#include "check_hlds.typecheck_error_undef.mih"
#include "check_hlds.typecheck_error_unify.mih"
#include "check_hlds.typecheck_error_util.mih"
#include "check_hlds.typecheck_info.mih"
#include "check_hlds.typecheck_util.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_unify_var_functor__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_unify_var_functor__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_unify_var_functor__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__field_types_cons_type_assign_0_0[4];

static const MR_DuFunctorDesc check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_functor_desc_cons_type_assign_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_stag_ordered_cons_type_assign_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_ptag_ordered_cons_type_assign_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_name_ordered_cons_type_assign_0[1];

static const MR_Integer check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__functor_number_map_cons_type_assign_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_unify_var_functor__list__ti_list_1check_hlds__typecheck_unify_var_functor__type_ctor_info_cons_type_assign_0;

static void MR_CALL 
check_hlds__typecheck_unify_var_functor____Compare____cons_type_assign_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor____Unify____cons_type_assign_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor____Compare____cons_type_assign_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor____Unify____cons_type_assign_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__type_assign_check_functor_type_builtin_5_p_0(
  MR_Word ConsType_6,
  MR_Word Y_7,
  MR_Word TypeAssign0_8,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_15,
  MR_Word * STATE_VARIABLE_TypeAssignSet_16);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__typecheck_unify_var_functor_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__typecheck_unify_var_functor__typecheck_unify_var_functor_non_builtin_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__typecheck_unify_var_functor_non_builtin_10_p_0(
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word GoalId_13,
  MR_Word LHSVar_14,
  MR_Word ConsId_15,
  MR_Word ArgVars_16,
  MR_Word TypeAssignSet0_17,
  MR_Word * TypeAssignSet_18,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word ArgVars_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_115_95_118_97_114_115_95_104_97_118_101_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgVars_3,
  MR_Word Types_4,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_5,
  MR_Word * STATE_VARIABLE_TypeAssignSet_6);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__typecheck_var_functor_types_4_p_0(
  MR_Word Var_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ArgsTypeAssignSet_0_3,
  MR_Word * STATE_VARIABLE_ArgsTypeAssignSet_4);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__get_cons_type_assigns_for_cons_defns_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeAssigns_2,
  MR_Word STATE_VARIABLE_ConsTypeAssignSet_0_3,
  MR_Word * STATE_VARIABLE_ConsTypeAssignSet_4);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__get_cons_type_assigns_for_cons_defn_4_p_0(
  MR_Word ConsTypeInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ConsTypeAssignSet_0_3,
  MR_Word * STATE_VARIABLE_ConsTypeAssignSet_4);

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor____Unify____cons_type_assign_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor____Compare____cons_type_assign_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor____Unify____cons_type_assign_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor____Compare____cons_type_assign_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__typecheck_unify_var_functor_scalar_common_1[5][2];

static /* final */ const MR_Box check_hlds__typecheck_unify_var_functor_scalar_common_2[1][5];

static /* final */ const MR_Box check_hlds__typecheck_unify_var_functor_scalar_common_3[1][3];

static /* final */ const MR_Box check_hlds__typecheck_unify_var_functor_scalar_common_4[1][8];




static /* final */ const MR_Box check_hlds__typecheck_unify_var_functor_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__type_ctor_info_cons_type_assign_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_unify_var_functor_scalar_common_2[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_unify_var_functor_scalar_common_3[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__typecheck_unify_var_functor_scalar_common_2[0])),
    ((MR_Box) (check_hlds__typecheck_unify_var_functor__typecheck_unify_var_functor_non_builtin_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_unify_var_functor_scalar_common_4[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck_unify_var_functor__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_unify_var_functor__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_unify_var_functor__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_unify_var_functor__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_unify_var_functor__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_unify_var_functor__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__field_types_cons_type_assign_0_0[4] = {
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_unify_var_functor__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_functor_desc_cons_type_assign_0_0 = {
  (MR_String) "cons_type_assign",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__field_types_cons_type_assign_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_stag_ordered_cons_type_assign_0_0[1] = { &check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_functor_desc_cons_type_assign_0_0 };

static const MR_DuPtagLayout check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_ptag_ordered_cons_type_assign_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_stag_ordered_cons_type_assign_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_name_ordered_cons_type_assign_0[1] = { &check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_functor_desc_cons_type_assign_0_0 };

static const MR_Integer check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__functor_number_map_cons_type_assign_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__type_ctor_info_cons_type_assign_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_unify_var_functor____Unify____cons_type_assign_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_unify_var_functor____Compare____cons_type_assign_0_0_10001)),
  (MR_String) "check_hlds.typecheck_unify_var_functor",
  (MR_String) "cons_type_assign",
  { check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_name_ordered_cons_type_assign_0 },
  { check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_ptag_ordered_cons_type_assign_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__functor_number_map_cons_type_assign_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_unify_var_functor__list__ti_list_1check_hlds__typecheck_unify_var_functor__type_ctor_info_cons_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__type_ctor_info_cons_type_assign_0) }
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__type_ctor_info_cons_type_assign_set_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__typecheck_unify_var_functor____Unify____cons_type_assign_set_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_unify_var_functor____Compare____cons_type_assign_set_0_0_10001)),
  (MR_String) "check_hlds.typecheck_unify_var_functor",
  (MR_String) "cons_type_assign_set",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__typecheck_unify_var_functor__list__ti_list_1check_hlds__typecheck_unify_var_functor__type_ctor_info_cons_type_assign_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
check_hlds__typecheck_unify_var_functor____Compare____cons_type_assign_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor____Unify____cons_type_assign_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor____Compare____cons_type_assign_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    check_hlds__type_assign____Compare____type_assign_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      parse_tree__prog_data____Compare____mer_type_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[3]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          check_hlds__type_assign____Compare____cons_type_info_source_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor____Unify____cons_type_assign_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_15_15;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = check_hlds__type_assign____Unify____type_assign_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
          succeeded = check_hlds__type_assign____Unify____cons_type_info_source_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__type_assign_check_functor_type_builtin_5_p_0(
  MR_Word ConsType_6,
  MR_Word Y_7,
  MR_Word TypeAssign0_8,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_15,
  MR_Word * STATE_VARIABLE_TypeAssignSet_16)
{
  MR_bool succeeded;
  MR_Word VarTypes0_10;
  MR_Word MaybeTypeY_11;
  MR_Word VarTypes_12;

  check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign0_8, &VarTypes0_10);
  parse_tree__vartypes__search_insert_var_type_5_p_0(Y_7, ConsType_6, &MaybeTypeY_11, VarTypes0_10, &VarTypes_12);
  if ((MaybeTypeY_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word TypeAssign_19;

    check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_12, TypeAssign0_8, &TypeAssign_19);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_TypeAssignSet_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TypeAssign_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_15));
    }
  }
  else
  {
    MR_Word TypeY_13 = ((MR_Word) ((MR_hl_field(1, MaybeTypeY_11, 0))));
    MR_Word TypeAssign_14;

    succeeded = check_hlds__typecheck_util__type_assign_unify_type_4_p_0(ConsType_6, TypeY_13, TypeAssign0_8, &TypeAssign_14);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_TypeAssignSet_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (TypeAssign_14));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_15));
      }
    else
      *STATE_VARIABLE_TypeAssignSet_16 = STATE_VARIABLE_TypeAssignSet_0_15;
  }
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__typecheck_unify_var_functor_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeAssignSet_16;

  check_hlds__typecheck_unify_var_functor__type_assign_check_functor_type_builtin_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeAssignSet_16);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeAssignSet_16));
}

void MR_CALL 
check_hlds__typecheck_unify_var_functor__typecheck_unify_var_functor_10_p_0(
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word GoalId_13,
  MR_Word LHSVar_14,
  MR_Word ConsId_15,
  MR_Word ArgVars_16,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_21,
  MR_Word * STATE_VARIABLE_TypeAssignSet_22,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_bool succeeded;
  MR_Word BuiltinType_19;
  MR_String BuiltinTypeName_20;

  switch (MR_tag((MR_Word) ConsId_15)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsId_15, 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 5:
          {
            MR_Word IntConst_25 = ((MR_Word) ((MR_hl_field(3, ConsId_15, 1))));
            MR_Word Var_28;

            Var_28 = parse_tree__prog_data__type_of_int_const_1_f_0(IntConst_25);
            {
              BuiltinType_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, BuiltinType_19, 0) = (MR_Box) ((MR_Unsigned) (Var_28));
            }
            BuiltinTypeName_20 = parse_tree__prog_data__type_name_of_int_const_1_f_0(IntConst_25);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 6:
          {
            BuiltinTypeName_20 = (MR_String) "float";
            BuiltinType_19 = (MR_Word) ((MR_Unsigned) 0U);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 8:
          {
            BuiltinTypeName_20 = (MR_String) "string";
            BuiltinType_19 = (MR_Word) ((MR_Unsigned) 4U);
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  if (succeeded)
  {
    MR_Word ConsType_29;
    MR_Word TypeAssignSet1_30;
    MR_Word STATE_VARIABLE_Info_1_35;
    MR_Word Var_36;
    MR_Word Var_34;
    MR_Box conv1_TypeAssignSet1_30;

    succeeded = ((MR_tag((MR_Word) BuiltinType_19)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_34 = ((MR_Unsigned) ((MR_hl_field(1, BuiltinType_19, 0))) & (MR_Integer) 15);
      succeeded = (Var_34 == (MR_Integer) 0);
    }
    if (succeeded)
      check_hlds__typecheck_info__typecheck_info_add_nosuffix_integer_var_3_p_0(LHSVar_14, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_1_35);
    else
      STATE_VARIABLE_Info_1_35 = STATE_VARIABLE_Info_0_23;
    {
      ConsType_29 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, ConsType_29, 0) = ((MR_Box) (BuiltinType_19));
    }
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_36, 0) = ((MR_Box) (&check_hlds__typecheck_unify_var_functor_scalar_common_4[0]));
      MR_hl_field(0, Var_36, 1) = ((MR_Box) (check_hlds__typecheck_unify_var_functor__typecheck_unify_var_functor_10_p_0_1));
      MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_36, 3) = ((MR_Box) (ConsType_29));
      MR_hl_field(0, Var_36, 4) = ((MR_Box) (LHSVar_14));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[0]), Var_36, STATE_VARIABLE_TypeAssignSet_0_21, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_TypeAssignSet1_30);
    TypeAssignSet1_30 = ((MR_Word) (conv1_TypeAssignSet1_30));
    if ((TypeAssignSet1_30 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_TypeAssignSet_22 = STATE_VARIABLE_TypeAssignSet_0_21;
      if ((STATE_VARIABLE_TypeAssignSet_0_21 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_1_35;
      else
      {
        MR_Word ConsTypeVarSet_31;
        MR_Word ConsTypeInfo_32;
        MR_Word ConsIdSpec_33;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_42;

        mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &ConsTypeVarSet_31);
        Var_40 = check_hlds__typecheck_util__empty_hlds_constraint_db_0_f_0();
        {
          Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_41, 0) = ((MR_Box) (BuiltinTypeName_20));
        }
        {
          ConsTypeInfo_32 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ConsTypeInfo_32, 0) = ((MR_Box) (ConsTypeVarSet_31));
          MR_hl_field(0, ConsTypeInfo_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, ConsTypeInfo_32, 2) = ((MR_Box) (ConsType_29));
          MR_hl_field(0, ConsTypeInfo_32, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, ConsTypeInfo_32, 4) = ((MR_Box) (Var_40));
          MR_hl_field(0, ConsTypeInfo_32, 5) = ((MR_Box) (Var_41));
        }
        {
          Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_42, 0) = ((MR_Box) (ConsTypeInfo_32));
          MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ConsIdSpec_33 = check_hlds__typecheck_error_unify__report_error_unify_var_functor_result_8_f_0(STATE_VARIABLE_Info_1_35, UnifyContext_11, Context_12, LHSVar_14, Var_42, ConsId_15, (MR_Integer) 0, STATE_VARIABLE_TypeAssignSet_0_21);
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(ConsIdSpec_33, STATE_VARIABLE_Info_1_35, STATE_VARIABLE_Info_24);
      }
    }
    else
    {
      *STATE_VARIABLE_TypeAssignSet_22 = TypeAssignSet1_30;
      *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_1_35;
    }
  }
  else
    check_hlds__typecheck_unify_var_functor__typecheck_unify_var_functor_non_builtin_10_p_0(UnifyContext_11, Context_12, GoalId_13, LHSVar_14, ConsId_15, ArgVars_16, STATE_VARIABLE_TypeAssignSet_0_21, STATE_VARIABLE_TypeAssignSet_22, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
}

static MR_Box MR_CALL 
check_hlds__typecheck_unify_var_functor__typecheck_unify_var_functor_non_builtin_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = check_hlds__type_assign__project_cons_type_info_source_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__typecheck_unify_var_functor_non_builtin_10_p_0(
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word GoalId_13,
  MR_Word LHSVar_14,
  MR_Word ConsId_15,
  MR_Word ArgVars_16,
  MR_Word TypeAssignSet0_17,
  MR_Word * TypeAssignSet_18,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32)
{
  MR_bool succeeded;
  MR_Integer Arity_20;
  MR_Word ConsInfoResult_21;

  mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[1]), ArgVars_16, &Arity_20);
  check_hlds__typecheck_cons_infos__typecheck_info_construct_all_cons_infos_5_p_0(STATE_VARIABLE_Info_0_31, ConsId_15, Arity_20, GoalId_13, &ConsInfoResult_21);
  switch (MR_tag((MR_Word) ConsInfoResult_21)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ClauseContext_39;
        MR_Word GoalContext_40;
        MR_Word Spec_41;

        *TypeAssignSet_18 = TypeAssignSet0_17;
        check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_31, &ClauseContext_39);
        {
          GoalContext_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, GoalContext_40, 0) = ((MR_Box) (UnifyContext_11));
        }
        Spec_41 = check_hlds__typecheck_error_undef__report_error_undef_non_du_ctor_4_f_0(ClauseContext_39, GoalContext_40, Context_12, ConsId_15);
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_41, STATE_VARIABLE_Info_0_31, STATE_VARIABLE_Info_32);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_33;
        MR_Word ConsTypeAssignSet_68;
        MR_Word ArgsTypeAssignSet_71;
        MR_Word TypeAssignSet1_75;
        MR_Word STATE_VARIABLE_Info_2_83;
        MR_Word ConsTypeInfo_101 = ((MR_Word) ((MR_hl_field(1, ConsInfoResult_21, 0))));

        {
          Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_33, 0) = ((MR_Box) (ConsTypeInfo_101));
          MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        check_hlds__typecheck_unify_var_functor__get_cons_type_assigns_for_cons_defn_4_p_0(ConsTypeInfo_101, TypeAssignSet0_17, (MR_Word) ((MR_Unsigned) 0U), &ConsTypeAssignSet_68);
        succeeded = (ConsTypeAssignSet_68 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (TypeAssignSet0_17 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_unify_var_functor.typecheck_unify_var_functor_cons_infos\'/11", (MR_String) "undefined cons\?");
            return;
          }
        check_hlds__typecheck_unify_var_functor__typecheck_var_functor_types_4_p_0(LHSVar_14, ConsTypeAssignSet_68, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet_71);
        succeeded = (ArgsTypeAssignSet_71 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (ConsTypeAssignSet_68 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MR_Word ConsIdSpec_74;

          ConsIdSpec_74 = check_hlds__typecheck_error_unify__report_error_unify_var_functor_result_8_f_0(STATE_VARIABLE_Info_0_31, UnifyContext_11, Context_12, LHSVar_14, Var_33, ConsId_15, Arity_20, TypeAssignSet0_17);
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(ConsIdSpec_74, STATE_VARIABLE_Info_0_31, &STATE_VARIABLE_Info_2_83);
        }
        else
          STATE_VARIABLE_Info_2_83 = STATE_VARIABLE_Info_0_31;
        check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(ArgVars_16, ArgsTypeAssignSet_71, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_75);
        if ((TypeAssignSet1_75 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *TypeAssignSet_18 = TypeAssignSet0_17;
          if ((ArgsTypeAssignSet_71 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_2_83;
          else
          {
            MR_Word ArgSpec_76;

            ArgSpec_76 = check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0(STATE_VARIABLE_Info_2_83, UnifyContext_11, Context_12, LHSVar_14, Var_33, ConsId_15, ArgVars_16, ArgsTypeAssignSet_71);
            check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(ArgSpec_76, STATE_VARIABLE_Info_2_83, STATE_VARIABLE_Info_32);
          }
        }
        else
        {
          *TypeAssignSet_18 = TypeAssignSet1_75;
          *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_2_83;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word DuCtor_23 = ((MR_Word) ((MR_hl_field(2, ConsInfoResult_21, 0))));
        MR_Word ConsTypeInfos_24 = ((MR_Word) ((MR_hl_field(2, ConsInfoResult_21, 1))));
        MR_Word ConsErrors_25 = ((MR_Word) ((MR_hl_field(2, ConsInfoResult_21, 2))));

        if ((ConsTypeInfos_24 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word ClauseContext_26;
          MR_Word GoalContext_27;
          MR_Word Spec_28;

          *TypeAssignSet_18 = TypeAssignSet0_17;
          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_31, &ClauseContext_26);
          {
            GoalContext_27 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, GoalContext_27, 0) = ((MR_Box) (UnifyContext_11));
          }
          Spec_28 = check_hlds__typecheck_error_undef__report_error_undef_du_ctor_5_f_0(ClauseContext_26, GoalContext_27, Context_12, DuCtor_23, ConsErrors_25);
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_28, STATE_VARIABLE_Info_0_31, STATE_VARIABLE_Info_32);
        }
        else
        {
          MR_Word ConsTypeAssignSet_45;
          MR_Word ArgsTypeAssignSet_48;
          MR_Word TypeAssignSet1_52;
          MR_Word STATE_VARIABLE_Info_1_55;
          MR_Word STATE_VARIABLE_Info_2_60;
          MR_Word ConsTypeInfo_92 = ((MR_Word) ((MR_hl_field(1, ConsTypeInfos_24, 0))));
          MR_Word ConsTypeInfos_93 = ((MR_Word) ((MR_hl_field(1, ConsTypeInfos_24, 1))));
          MR_Word STATE_VARIABLE_ConsTypeAssignSet_1_97;

          if ((ConsTypeInfos_93 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_Info_1_55 = STATE_VARIABLE_Info_0_31;
          else
          {
            MR_Word Sources_43;
            MR_Word Symbol_44;

            Sources_43 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0), (MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_3[0]), ConsTypeInfos_24);
            {
              Symbol_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Symbol_44, 0) = ((MR_Box) (ConsId_15));
              MR_hl_field(1, Symbol_44, 1) = ((MR_Box) (Sources_43));
            }
            check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(Symbol_44, Context_12, STATE_VARIABLE_Info_0_31, &STATE_VARIABLE_Info_1_55);
          }
          check_hlds__typecheck_unify_var_functor__get_cons_type_assigns_for_cons_defn_4_p_0(ConsTypeInfo_92, TypeAssignSet0_17, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_ConsTypeAssignSet_1_97);
          check_hlds__typecheck_unify_var_functor__get_cons_type_assigns_for_cons_defns_4_p_0(ConsTypeInfos_93, TypeAssignSet0_17, STATE_VARIABLE_ConsTypeAssignSet_1_97, &ConsTypeAssignSet_45);
          succeeded = (ConsTypeAssignSet_45 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (TypeAssignSet0_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_unify_var_functor.typecheck_unify_var_functor_cons_infos\'/11", (MR_String) "undefined cons\?");
              return;
            }
          check_hlds__typecheck_unify_var_functor__typecheck_var_functor_types_4_p_0(LHSVar_14, ConsTypeAssignSet_45, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet_48);
          succeeded = (ArgsTypeAssignSet_48 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (ConsTypeAssignSet_45 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MR_Word ConsIdSpec_51;

            ConsIdSpec_51 = check_hlds__typecheck_error_unify__report_error_unify_var_functor_result_8_f_0(STATE_VARIABLE_Info_1_55, UnifyContext_11, Context_12, LHSVar_14, ConsTypeInfos_24, ConsId_15, Arity_20, TypeAssignSet0_17);
            check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(ConsIdSpec_51, STATE_VARIABLE_Info_1_55, &STATE_VARIABLE_Info_2_60);
          }
          else
            STATE_VARIABLE_Info_2_60 = STATE_VARIABLE_Info_1_55;
          check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(ArgVars_16, ArgsTypeAssignSet_48, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_52);
          if ((TypeAssignSet1_52 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *TypeAssignSet_18 = TypeAssignSet0_17;
            if ((ArgsTypeAssignSet_48 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_2_60;
            else
            {
              MR_Word ArgSpec_53;

              ArgSpec_53 = check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0(STATE_VARIABLE_Info_2_60, UnifyContext_11, Context_12, LHSVar_14, ConsTypeInfos_24, ConsId_15, ArgVars_16, ArgsTypeAssignSet_48);
              check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(ArgSpec_53, STATE_VARIABLE_Info_2_60, STATE_VARIABLE_Info_32);
            }
          }
          else
          {
            *TypeAssignSet_18 = TypeAssignSet1_52;
            *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_2_60;
          }
        }
      }
      break;
  }
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word ArgVars_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TypeAssignSet_5 = STATE_VARIABLE_TypeAssignSet_0_4;
    else
    {
      MR_Word ArgsTypeAssign_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word ArgsTypeAssigns_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word TypeAssign_16 = ((MR_Word) ((MR_hl_field(0, ArgsTypeAssign_13, 0))));
      MR_Word ArgTypes_17 = ((MR_Word) ((MR_hl_field(0, ArgsTypeAssign_13, 1))));
      MR_Word STATE_VARIABLE_TypeAssignSet_1_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;

      if ((ArgVars_2 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((ArgTypes_17 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            STATE_VARIABLE_TypeAssignSet_1_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_1_22, 0) = ((MR_Box) (TypeAssign_16));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_1_22, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_4));
          }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_unify_var_functor.type_assign_vars_have_types\'/6", (MR_String) "length mismatch");
            return;
          }
      else
      {
        MR_Word Var_52 = ((MR_Word) ((MR_hl_field(1, ArgVars_2, 1))));
        MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, ArgVars_2, 0))));

        if ((ArgTypes_17 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_unify_var_functor.type_assign_vars_have_types\'/6", (MR_String) "length mismatch");
            return;
          }
        else
        {
          MR_Word Type_46 = ((MR_Word) ((MR_hl_field(1, ArgTypes_17, 0))));
          MR_Word Types_47 = ((MR_Word) ((MR_hl_field(1, ArgTypes_17, 1))));
          MR_Word TypeAssignSet1_50;

          check_hlds__typecheck_util__acc_type_assign_if_var_can_have_type_5_p_0(TypeAssign_16, Var_53, Type_46, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_50);
          check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_115_95_118_97_114_115_95_104_97_118_101_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(TypeAssignSet1_50, Var_52, Types_47, STATE_VARIABLE_TypeAssignSet_0_4, &STATE_VARIABLE_TypeAssignSet_1_22);
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ArgsTypeAssigns_14;
      next_value_of_STATE_VARIABLE_TypeAssignSet_0_4 = STATE_VARIABLE_TypeAssignSet_1_22;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_TypeAssignSet_0_4 = next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_115_95_118_97_114_115_95_104_97_118_101_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgVars_3,
  MR_Word Types_4,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_5,
  MR_Word * STATE_VARIABLE_TypeAssignSet_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TypeAssignSet_6 = STATE_VARIABLE_TypeAssignSet_0_5;
    else
    {
      MR_Word TypeAssign_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word TypeAssigns_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word STATE_VARIABLE_TypeAssignSet_1_21;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_5;

      if ((ArgVars_3 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((Types_4 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            STATE_VARIABLE_TypeAssignSet_1_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_1_21, 0) = ((MR_Box) (TypeAssign_14));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_1_21, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_5));
          }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_unify_var_functor.type_assign_vars_have_types\'/6", (MR_String) "length mismatch");
            return;
          }
      else
      {
        MR_Word Var_51 = ((MR_Word) ((MR_hl_field(1, ArgVars_3, 1))));
        MR_Word Var_52 = ((MR_Word) ((MR_hl_field(1, ArgVars_3, 0))));

        if ((Types_4 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_unify_var_functor.type_assign_vars_have_types\'/6", (MR_String) "length mismatch");
            return;
          }
        else
        {
          MR_Word Type_45 = ((MR_Word) ((MR_hl_field(1, Types_4, 0))));
          MR_Word Types_46 = ((MR_Word) ((MR_hl_field(1, Types_4, 1))));
          MR_Word TypeAssignSet1_49;

          check_hlds__typecheck_util__acc_type_assign_if_var_can_have_type_5_p_0(TypeAssign_14, Var_52, Type_45, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_49);
          check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_115_95_118_97_114_115_95_104_97_118_101_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(TypeAssignSet1_49, Var_51, Types_46, STATE_VARIABLE_TypeAssignSet_0_5, &STATE_VARIABLE_TypeAssignSet_1_21);
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TypeAssigns_15;
      next_value_of_STATE_VARIABLE_TypeAssignSet_0_5 = STATE_VARIABLE_TypeAssignSet_1_21;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_TypeAssignSet_0_5 = next_value_of_STATE_VARIABLE_TypeAssignSet_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__typecheck_var_functor_types_4_p_0(
  MR_Word Var_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ArgsTypeAssignSet_0_3,
  MR_Word * STATE_VARIABLE_ArgsTypeAssignSet_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ArgsTypeAssignSet_4 = STATE_VARIABLE_ArgsTypeAssignSet_0_3;
    else
    {
      MR_Word ConsTypeAssign_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ConsTypeAssigns_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word STATE_VARIABLE_ArgsTypeAssignSet_1_15;
      MR_Word TypeAssign0_16 = ((MR_Word) ((MR_hl_field(0, ConsTypeAssign_10, 0))));
      MR_Word ConsType_17 = ((MR_Word) ((MR_hl_field(0, ConsTypeAssign_10, 1))));
      MR_Word ConsArgTypes_18 = ((MR_Word) ((MR_hl_field(0, ConsTypeAssign_10, 2))));
      MR_Word Source0_19 = ((MR_Word) ((MR_hl_field(0, ConsTypeAssign_10, 3))));
      MR_Word VarTypes0_20;
      MR_Word MaybeOldVarType_21;
      MR_Word VarTypes_22;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_3;

      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign0_16, &VarTypes0_20);
      parse_tree__vartypes__search_insert_var_type_5_p_0(Var_1, ConsType_17, &MaybeOldVarType_21, VarTypes0_20, &VarTypes_22);
      if ((MaybeOldVarType_21 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word TypeAssign_30;
        MR_Word ArgsTypeAssign_31;

        check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_22, TypeAssign0_16, &TypeAssign_30);
        Var_28 = check_hlds__typecheck_util__empty_hlds_constraint_db_0_f_0();
        {
          Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_29, 0) = ((MR_Box) (Source0_19));
        }
        {
          ArgsTypeAssign_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ArgsTypeAssign_31, 0) = ((MR_Box) (TypeAssign_30));
          MR_hl_field(0, ArgsTypeAssign_31, 1) = ((MR_Box) (ConsArgTypes_18));
          MR_hl_field(0, ArgsTypeAssign_31, 2) = ((MR_Box) (Var_28));
          MR_hl_field(0, ArgsTypeAssign_31, 3) = ((MR_Box) (Var_29));
        }
        {
          STATE_VARIABLE_ArgsTypeAssignSet_1_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_ArgsTypeAssignSet_1_15, 0) = ((MR_Box) (ArgsTypeAssign_31));
          MR_hl_field(1, STATE_VARIABLE_ArgsTypeAssignSet_1_15, 1) = ((MR_Box) (STATE_VARIABLE_ArgsTypeAssignSet_0_3));
        }
      }
      else
      {
        MR_Word OldVarType_23 = ((MR_Word) ((MR_hl_field(1, MaybeOldVarType_21, 0))));
        MR_Word TypeAssign_24;

        succeeded = check_hlds__typecheck_util__type_assign_unify_type_4_p_0(ConsType_17, OldVarType_23, TypeAssign0_16, &TypeAssign_24);
        if (succeeded)
        {
          MR_Word ArgsTypeAssign_25;
          MR_Word Var_26;
          MR_Word Var_27;

          Var_26 = check_hlds__typecheck_util__empty_hlds_constraint_db_0_f_0();
          {
            Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_27, 0) = ((MR_Box) (Source0_19));
          }
          {
            ArgsTypeAssign_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ArgsTypeAssign_25, 0) = ((MR_Box) (TypeAssign_24));
            MR_hl_field(0, ArgsTypeAssign_25, 1) = ((MR_Box) (ConsArgTypes_18));
            MR_hl_field(0, ArgsTypeAssign_25, 2) = ((MR_Box) (Var_26));
            MR_hl_field(0, ArgsTypeAssign_25, 3) = ((MR_Box) (Var_27));
          }
          {
            STATE_VARIABLE_ArgsTypeAssignSet_1_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_ArgsTypeAssignSet_1_15, 0) = ((MR_Box) (ArgsTypeAssign_25));
            MR_hl_field(1, STATE_VARIABLE_ArgsTypeAssignSet_1_15, 1) = ((MR_Box) (STATE_VARIABLE_ArgsTypeAssignSet_0_3));
          }
        }
        else
          STATE_VARIABLE_ArgsTypeAssignSet_1_15 = STATE_VARIABLE_ArgsTypeAssignSet_0_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ConsTypeAssigns_11;
      next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_3 = STATE_VARIABLE_ArgsTypeAssignSet_1_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ArgsTypeAssignSet_0_3 = next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__get_cons_type_assigns_for_cons_defns_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeAssigns_2,
  MR_Word STATE_VARIABLE_ConsTypeAssignSet_0_3,
  MR_Word * STATE_VARIABLE_ConsTypeAssignSet_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ConsTypeAssignSet_4 = STATE_VARIABLE_ConsTypeAssignSet_0_3;
    else
    {
      MR_Word ConsTypeInfo_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ConsTypeInfos_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_ConsTypeAssignSet_1_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3;

      check_hlds__typecheck_unify_var_functor__get_cons_type_assigns_for_cons_defn_4_p_0(ConsTypeInfo_9, TypeAssigns_2, STATE_VARIABLE_ConsTypeAssignSet_0_3, &STATE_VARIABLE_ConsTypeAssignSet_1_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ConsTypeInfos_10;
      next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3 = STATE_VARIABLE_ConsTypeAssignSet_1_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ConsTypeAssignSet_0_3 = next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__get_cons_type_assigns_for_cons_defn_4_p_0(
  MR_Word ConsTypeInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ConsTypeAssignSet_0_3,
  MR_Word * STATE_VARIABLE_ConsTypeAssignSet_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ConsTypeAssignSet_4 = STATE_VARIABLE_ConsTypeAssignSet_0_3;
    else
    {
      MR_Word TypeAssign_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word TypeAssigns_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ConsTypeAssign_13;
      MR_Word STATE_VARIABLE_ConsTypeAssignSet_1_16;
      MR_Word ConsTypeVarSet_17 = ((MR_Word) ((MR_hl_field(0, ConsTypeInfo_1, 0))));
      MR_Word ConsExistQVars0_18 = ((MR_Word) ((MR_hl_field(0, ConsTypeInfo_1, 1))));
      MR_Word ConsType0_19 = ((MR_Word) ((MR_hl_field(0, ConsTypeInfo_1, 2))));
      MR_Word ArgTypes0_20 = ((MR_Word) ((MR_hl_field(0, ConsTypeInfo_1, 3))));
      MR_Word ClassConstraintDb0_21 = ((MR_Word) ((MR_hl_field(0, ConsTypeInfo_1, 4))));
      MR_Word Source_22 = ((MR_Word) ((MR_hl_field(0, ConsTypeInfo_1, 5))));
      MR_Word ConsType_23;
      MR_Word ArgTypes_24;
      MR_Word TypeAssign2_25;
      MR_Word ConstraintDbToAdd_26;
      MR_Word OldConstraintDb_32;
      MR_Word ClassConstraintDb_33;
      MR_Word TypeAssign_34;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3;

      succeeded = mercury__varset__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), ConsTypeVarSet_17);
      if (succeeded)
      {
        ConsType_23 = ConsType0_19;
        ArgTypes_24 = ArgTypes0_20;
        TypeAssign2_25 = TypeAssign_10;
        ConstraintDbToAdd_26 = ClassConstraintDb0_21;
      }
      else
      {
        MR_Word TypeAssign1_27;
        MR_Word Renaming_28;
        MR_Word ConsExistQVars_29;
        MR_Word ExistQTVars0_30;
        MR_Word ExistQTVars_31;

        check_hlds__typecheck_util__type_assign_rename_apart_4_p_0(TypeAssign_10, ConsTypeVarSet_17, &TypeAssign1_27, &Renaming_28);
        parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0(Renaming_28, ConsType0_19, &ConsType_23);
        parse_tree__prog_type_subst__apply_renaming_to_types_3_p_0(Renaming_28, ArgTypes0_20, &ArgTypes_24);
        parse_tree__prog_type_subst__apply_renaming_to_tvars_3_p_0(Renaming_28, ConsExistQVars0_18, &ConsExistQVars_29);
        hlds__type_util__apply_renaming_to_constraint_db_3_p_0(Renaming_28, ClassConstraintDb0_21, &ConstraintDbToAdd_26);
        check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign1_27, &ExistQTVars0_30);
        ExistQTVars_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[2]), ConsExistQVars_29, ExistQTVars0_30);
        check_hlds__type_assign__type_assign_set_existq_tvars_3_p_0(ExistQTVars_31, TypeAssign1_27, &TypeAssign2_25);
      }
      check_hlds__type_assign__type_assign_get_constraint_db_2_p_0(TypeAssign2_25, &OldConstraintDb_32);
      hlds__hlds_class__merge_hlds_constraint_dbs_3_p_0(ConstraintDbToAdd_26, OldConstraintDb_32, &ClassConstraintDb_33);
      check_hlds__type_assign__type_assign_set_constraint_db_3_p_0(ClassConstraintDb_33, TypeAssign2_25, &TypeAssign_34);
      {
        ConsTypeAssign_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ConsTypeAssign_13, 0) = ((MR_Box) (TypeAssign_34));
        MR_hl_field(0, ConsTypeAssign_13, 1) = ((MR_Box) (ConsType_23));
        MR_hl_field(0, ConsTypeAssign_13, 2) = ((MR_Box) (ArgTypes_24));
        MR_hl_field(0, ConsTypeAssign_13, 3) = ((MR_Box) (Source_22));
      }
      {
        STATE_VARIABLE_ConsTypeAssignSet_1_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_ConsTypeAssignSet_1_16, 0) = ((MR_Box) (ConsTypeAssign_13));
        MR_hl_field(1, STATE_VARIABLE_ConsTypeAssignSet_1_16, 1) = ((MR_Box) (STATE_VARIABLE_ConsTypeAssignSet_0_3));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TypeAssigns_11;
      next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3 = STATE_VARIABLE_ConsTypeAssignSet_1_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ConsTypeAssignSet_0_3 = next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor____Unify____cons_type_assign_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_unify_var_functor____Unify____cons_type_assign_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor____Compare____cons_type_assign_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_unify_var_functor____Compare____cons_type_assign_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor____Unify____cons_type_assign_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_unify_var_functor____Unify____cons_type_assign_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor____Compare____cons_type_assign_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_unify_var_functor____Compare____cons_type_assign_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__typecheck_unify_var_functor__init(void)
{
}

void mercury__check_hlds__typecheck_unify_var_functor__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__type_ctor_info_cons_type_assign_0);
  MR_register_type_ctor_info(&check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__type_ctor_info_cons_type_assign_set_0);
}

void mercury__check_hlds__typecheck_unify_var_functor__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__typecheck_unify_var_functor__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.typecheck_unify_var_functor.
