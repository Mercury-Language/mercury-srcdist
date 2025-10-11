/*
** Automatically generated from `inst_user.m'
** by the Mercury compiler,
** version rotd-2025-10-11
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


// :- module check_hlds.inst_user.
// :- implementation.

/*
INIT mercury__check_hlds__inst_user__init
ENDINIT
*/

#include "check_hlds.inst_user.mih"


#include "analysis.mih"
#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.inst_mode_type_prop.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.record_uses.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct2 check_hlds__inst_user__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_ctor_0check_hlds__inst_user__type_ctor_info_maybe_user_inst_0;

static const MR_DuFunctorDesc check_hlds__inst_user__check_hlds__inst_user__du_functor_desc_maybe_user_inst_0_0;

static const MR_PseudoTypeInfo check_hlds__inst_user__check_hlds__inst_user__field_types_maybe_user_inst_0_1[1];

static const MR_DuFunctorDesc check_hlds__inst_user__check_hlds__inst_user__du_functor_desc_maybe_user_inst_0_1;

static const MR_DuFunctorDescPtr check_hlds__inst_user__check_hlds__inst_user__du_stag_ordered_maybe_user_inst_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__inst_user__check_hlds__inst_user__du_stag_ordered_maybe_user_inst_0_1[1];

static const MR_DuPtagLayout check_hlds__inst_user__check_hlds__inst_user__du_ptag_ordered_maybe_user_inst_0[2];

static const MR_DuFunctorDescPtr check_hlds__inst_user__check_hlds__inst_user__du_name_ordered_maybe_user_inst_0[2];

static const MR_Integer check_hlds__inst_user__check_hlds__inst_user__functor_number_map_maybe_user_inst_0[2];

static void MR_CALL 
check_hlds__inst_user____Compare____maybe_user_inst_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_user_inst_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_user____Compare____maybe_inst_defns_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_inst_defns_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_117_115_101_114_95_105_110_115_116_95_100_101_102_110_115_95_95_91_52_93_95_48_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_MaybeInstDefnsMap_0_5,
  MR_Word * STATE_VARIABLE_MaybeInstDefnsMap_6);

static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_102_117_110_99_116_111_114_95_97_114_103_115_95_95_91_51_93_95_48_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Groundness_0_4,
  MR_Word * STATE_VARIABLE_Groundness_5,
  MR_Word STATE_VARIABLE_ContainsAny_0_6,
  MR_Word * STATE_VARIABLE_ContainsAny_7,
  MR_Word STATE_VARIABLE_ContainsInstNames_0_8,
  MR_Word * STATE_VARIABLE_ContainsInstNames_9,
  MR_Word STATE_VARIABLE_ContainsInstVars_0_10,
  MR_Word * STATE_VARIABLE_ContainsInstVars_11,
  MR_Word STATE_VARIABLE_ContainsTypes_0_12,
  MR_Word * STATE_VARIABLE_ContainsTypes_13,
  MR_Word STATE_VARIABLE_MaybeInstDefnsMap_0_14,
  MR_Word * STATE_VARIABLE_MaybeInstDefnsMap_15);

static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_102_117_110_99_116_111_114_115_95_95_91_51_93_95_48_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Groundness_0_4,
  MR_Word * STATE_VARIABLE_Groundness_5,
  MR_Word STATE_VARIABLE_ContainsAny_0_6,
  MR_Word * STATE_VARIABLE_ContainsAny_7,
  MR_Word STATE_VARIABLE_ContainsInstNames_0_8,
  MR_Word * STATE_VARIABLE_ContainsInstNames_9,
  MR_Word STATE_VARIABLE_ContainsInstVars_0_10,
  MR_Word * STATE_VARIABLE_ContainsInstVars_11,
  MR_Word STATE_VARIABLE_ContainsTypes_0_12,
  MR_Word * STATE_VARIABLE_ContainsTypes_13,
  MR_Word STATE_VARIABLE_MaybeInstDefnsMap_0_14,
  MR_Word * STATE_VARIABLE_MaybeInstDefnsMap_15);

static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_105_110_115_116_95_95_91_51_93_95_48_10_p_0(
  MR_Word Inst0_11,
  MR_Word * Inst_12,
  MR_Word * Groundness_14,
  MR_Word * ContainsAny_15,
  MR_Word * ContainsInstNames_16,
  MR_Word * ContainsInstVars_17,
  MR_Word * ContainsTypes_18,
  MR_Word STATE_VARIABLE_MaybeInstDefnsMap_0_33,
  MR_Word * STATE_VARIABLE_MaybeInstDefnsMap_34);

static void MR_CALL 
check_hlds__inst_user__record_user_inst_results_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_inst_defns_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_user____Compare____maybe_inst_defns_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_user_inst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_user____Compare____maybe_user_inst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__inst_user_scalar_common_1[1][2];

static /* final */ const MR_Box check_hlds__inst_user_scalar_common_2[1][3];




static /* final */ const MR_Box check_hlds__inst_user_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__inst_user_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0))
  },
};





static const MR_FA_TypeInfo_Struct2 check_hlds__inst_user__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_ctor_0check_hlds__inst_user__type_ctor_info_maybe_user_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0),
    (MR_TypeInfo) (&check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_inst_defns_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__inst_user____Unify____maybe_inst_defns_map_0_0_10001)),
  ((MR_Box) (check_hlds__inst_user____Compare____maybe_inst_defns_map_0_0_10001)),
  (MR_String) "check_hlds.inst_user",
  (MR_String) "maybe_inst_defns_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__inst_user__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_ctor_0check_hlds__inst_user__type_ctor_info_maybe_user_inst_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc check_hlds__inst_user__check_hlds__inst_user__du_functor_desc_maybe_user_inst_0_0 = {
  (MR_String) "user_inst_being_processed",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__inst_user__check_hlds__inst_user__field_types_maybe_user_inst_0_1[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0) };

static const MR_DuFunctorDesc check_hlds__inst_user__check_hlds__inst_user__du_functor_desc_maybe_user_inst_0_1 = {
  (MR_String) "processed_user_inst",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__inst_user__check_hlds__inst_user__field_types_maybe_user_inst_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__inst_user__check_hlds__inst_user__du_stag_ordered_maybe_user_inst_0_0[1] = { &check_hlds__inst_user__check_hlds__inst_user__du_functor_desc_maybe_user_inst_0_0 };

static const MR_DuFunctorDescPtr check_hlds__inst_user__check_hlds__inst_user__du_stag_ordered_maybe_user_inst_0_1[1] = { &check_hlds__inst_user__check_hlds__inst_user__du_functor_desc_maybe_user_inst_0_1 };

static const MR_DuPtagLayout check_hlds__inst_user__check_hlds__inst_user__du_ptag_ordered_maybe_user_inst_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__inst_user__check_hlds__inst_user__du_stag_ordered_maybe_user_inst_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__inst_user__check_hlds__inst_user__du_stag_ordered_maybe_user_inst_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__inst_user__check_hlds__inst_user__du_name_ordered_maybe_user_inst_0[2] = {
  &check_hlds__inst_user__check_hlds__inst_user__du_functor_desc_maybe_user_inst_0_1,
  &check_hlds__inst_user__check_hlds__inst_user__du_functor_desc_maybe_user_inst_0_0
};

static const MR_Integer check_hlds__inst_user__check_hlds__inst_user__functor_number_map_maybe_user_inst_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_user____Unify____maybe_user_inst_0_0_10001)),
  ((MR_Box) (check_hlds__inst_user____Compare____maybe_user_inst_0_0_10001)),
  (MR_String) "check_hlds.inst_user",
  (MR_String) "maybe_user_inst",
  { check_hlds__inst_user__check_hlds__inst_user__du_name_ordered_maybe_user_inst_0 },
  { check_hlds__inst_user__check_hlds__inst_user__du_ptag_ordered_maybe_user_inst_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__inst_user__check_hlds__inst_user__functor_number_map_maybe_user_inst_0,

};

static void MR_CALL 
check_hlds__inst_user____Compare____maybe_user_inst_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
    MR_Word ArgY1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

    hlds__hlds_inst_mode____Compare____hlds_inst_defn_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_user_inst_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
      succeeded = hlds__hlds_inst_mode____Unify____hlds_inst_defn_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_user____Compare____maybe_inst_defns_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__inst_user_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_inst_defns_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__inst_user_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__inst_user__pretest_user_inst_table_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13)
{
  MR_Word InstTable0_4;
  MR_Word UserInstTable0_5;
  MR_Word UserInstDefns0_6;
  MR_Word MaybeInstDefnsMap_7;
  MR_Word MaybeInstDefns_8;
  MR_Word UserInstDefns_9;
  MR_Word UserInstTable_10;
  MR_Word InstTable_11;
  MR_Word Var_15;

  hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, &InstTable0_4);
  hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable0_4, &UserInstTable0_5);
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable0_5, &UserInstDefns0_6);
  Var_15 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0));
  check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_117_115_101_114_95_105_110_115_116_95_100_101_102_110_115_95_95_91_52_93_95_48_6_p_0(STATE_VARIABLE_ModuleInfo_0_12, UserInstDefns0_6, (MR_Word) ((MR_Unsigned) 0U), Var_15, &MaybeInstDefnsMap_7);
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0), MaybeInstDefnsMap_7, &MaybeInstDefns_8);
  check_hlds__inst_user__record_user_inst_results_2_p_0(MaybeInstDefns_8, &UserInstDefns_9);
  mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstDefns_9, &UserInstTable_10);
  hlds__hlds_inst_mode__inst_table_set_user_insts_3_p_0(UserInstTable_10, InstTable0_4, &InstTable_11);
  hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable_11, STATE_VARIABLE_ModuleInfo_0_12, STATE_VARIABLE_ModuleInfo_13);
}

static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_117_115_101_114_95_105_110_115_116_95_100_101_102_110_115_95_95_91_52_93_95_48_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_MaybeInstDefnsMap_0_5,
  MR_Word * STATE_VARIABLE_MaybeInstDefnsMap_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_MaybeInstDefnsMap_6 = STATE_VARIABLE_MaybeInstDefnsMap_0_5;
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = HeadVar__3_3;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
        continue;
      }
    else
    {
      MR_Word InstDefnPair_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word InstDefnPairs_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word InstCtor_23 = ((MR_Word) ((MR_hl_field(0, InstDefnPair_18, 0))));
      MR_Word InstDefn_24 = ((MR_Word) ((MR_hl_field(0, InstDefnPair_18, 1))));
      MR_Word STATE_VARIABLE_DelayedInstDefnPairs_1_30;
      MR_Word STATE_VARIABLE_MaybeInstDefnsMap_1_31;
      MR_Word MaybeUserInst_25;
      MR_Box conv0_MaybeUserInst_25;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_MaybeInstDefnsMap_0_5;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0), STATE_VARIABLE_MaybeInstDefnsMap_0_5, ((MR_Box) (InstCtor_23)), &conv0_MaybeUserInst_25);
      if (succeeded)
      {
        MaybeUserInst_25 = ((MR_Word) (conv0_MaybeUserInst_25));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        if ((MaybeUserInst_25 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            STATE_VARIABLE_DelayedInstDefnPairs_1_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_DelayedInstDefnPairs_1_30, 0) = ((MR_Box) (InstDefnPair_18));
            MR_hl_field(1, STATE_VARIABLE_DelayedInstDefnPairs_1_30, 1) = ((MR_Box) (HeadVar__3_3));
          }
        else
          STATE_VARIABLE_DelayedInstDefnPairs_1_30 = HeadVar__3_3;
        STATE_VARIABLE_MaybeInstDefnsMap_1_31 = STATE_VARIABLE_MaybeInstDefnsMap_0_5;
      }
      else
      {
        MR_Word InstVarSet_34 = ((MR_Word) ((MR_hl_field(0, InstDefn_24, 0))));
        MR_Word InstParams_35 = ((MR_Word) ((MR_hl_field(0, InstDefn_24, 1))));
        MR_Word InstBody0_36 = ((MR_Word) ((MR_hl_field(0, InstDefn_24, 2))));
        MR_Word IFTC_37 = ((MR_Word) ((MR_hl_field(0, InstDefn_24, 3))));
        MR_Word Context_38 = ((MR_Word) ((MR_hl_field(0, InstDefn_24, 4))));
        MR_Word Status_39 = ((MR_Word) ((MR_hl_field(0, InstDefn_24, 5))));
        MR_Word Inst0_40 = (MR_Word) (InstBody0_36);

        if ((InstParams_35 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Inst1_43;
          MR_Word Inst_56;
          MR_Word InstBody_57;
          MR_Word InstDefn_58;
          MR_Word STATE_VARIABLE_MaybeInstDefnsMap_2_61;
          MR_Word STATE_VARIABLE_MaybeInstDefnsMap_3_62;
          MR_Word Var_67;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word TypeCtorSymName_53;
          MR_Word InstTypeCtor_52;
          MR_Integer TypeCtorArity_54;

          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0), ((MR_Box) (InstCtor_23)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_MaybeInstDefnsMap_0_5, &STATE_VARIABLE_MaybeInstDefnsMap_2_61);
          check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_105_110_115_116_95_95_91_51_93_95_48_10_p_0(Inst0_40, &Inst1_43, &Var_44, &Var_45, &Var_46, &Var_47, &Var_48, STATE_VARIABLE_MaybeInstDefnsMap_2_61, &STATE_VARIABLE_MaybeInstDefnsMap_3_62);
          succeeded = ((MR_tag((MR_Word) Inst1_43)) == (MR_Integer) 2);
          if (succeeded)
          {
            if (((MR_tag((MR_Word) IFTC_37)) == (MR_Integer) 1))
            {
              InstTypeCtor_52 = ((MR_Word) ((MR_hl_field(1, IFTC_37, 0))));
              succeeded = MR_TRUE;
            }
            else
            if (((MR_tag((MR_Word) IFTC_37)) == (MR_Integer) 2))
            {
              MR_Word Var_63 = ((MR_Word) ((MR_hl_field(2, IFTC_37, 0))));
              MR_Word Var_64;

              succeeded = (Var_63 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                InstTypeCtor_52 = ((MR_Word) ((MR_hl_field(1, Var_63, 0))));
                Var_64 = ((MR_Word) ((MR_hl_field(1, Var_63, 1))));
                succeeded = (Var_64 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            else
              succeeded = MR_FALSE;
            if (succeeded)
            {
              TypeCtorSymName_53 = ((MR_Word) ((MR_hl_field(0, InstTypeCtor_52, 0))));
              TypeCtorArity_54 = ((MR_Integer) ((MR_hl_field(0, InstTypeCtor_52, 1))));
              succeeded = (TypeCtorArity_54 == (MR_Integer) 0);
            }
          }
          if (succeeded)
          {
            MR_Word Type_55;

            {
              Type_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Type_55, 0) = ((MR_Box) (TypeCtorSymName_53));
              MR_hl_field(1, Type_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Type_55, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            hlds__inst_mode_type_prop__propagate_unchecked_type_into_bound_functor_4_p_0(ModuleInfo_1, Type_55, Inst1_43, &Inst_56);
          }
          else
            Inst_56 = Inst1_43;
          InstBody_57 = (MR_Word) (Inst_56);
          {
            InstDefn_58 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, InstDefn_58, 0) = ((MR_Box) (InstVarSet_34));
            MR_hl_field(0, InstDefn_58, 1) = ((MR_Box) (InstParams_35));
            MR_hl_field(0, InstDefn_58, 2) = ((MR_Box) (InstBody_57));
            MR_hl_field(0, InstDefn_58, 3) = ((MR_Box) (IFTC_37));
            MR_hl_field(0, InstDefn_58, 4) = ((MR_Box) (Context_38));
            MR_hl_field(0, InstDefn_58, 5) = ((MR_Box) (Status_39));
          }
          Var_67 = (MR_Word) (MR_mkword(1, (MR_Word) (InstDefn_58)));
          mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0), ((MR_Box) (InstCtor_23)), ((MR_Box) (Var_67)), STATE_VARIABLE_MaybeInstDefnsMap_3_62, &STATE_VARIABLE_MaybeInstDefnsMap_1_31);
        }
        else
        {
          MR_Word Var_59 = (MR_Word) (MR_mkword(1, (MR_Word) (InstDefn_24)));

          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0), ((MR_Box) (InstCtor_23)), ((MR_Box) (Var_59)), STATE_VARIABLE_MaybeInstDefnsMap_0_5, &STATE_VARIABLE_MaybeInstDefnsMap_1_31);
        }
        STATE_VARIABLE_DelayedInstDefnPairs_1_30 = HeadVar__3_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = InstDefnPairs_19;
      next_value_of_HeadVar__3_3 = STATE_VARIABLE_DelayedInstDefnPairs_1_30;
      next_value_of_STATE_VARIABLE_MaybeInstDefnsMap_0_5 = STATE_VARIABLE_MaybeInstDefnsMap_1_31;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_MaybeInstDefnsMap_0_5 = next_value_of_STATE_VARIABLE_MaybeInstDefnsMap_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_102_117_110_99_116_111_114_95_97_114_103_115_95_95_91_51_93_95_48_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Groundness_0_4,
  MR_Word * STATE_VARIABLE_Groundness_5,
  MR_Word STATE_VARIABLE_ContainsAny_0_6,
  MR_Word * STATE_VARIABLE_ContainsAny_7,
  MR_Word STATE_VARIABLE_ContainsInstNames_0_8,
  MR_Word * STATE_VARIABLE_ContainsInstNames_9,
  MR_Word STATE_VARIABLE_ContainsInstVars_0_10,
  MR_Word * STATE_VARIABLE_ContainsInstVars_11,
  MR_Word STATE_VARIABLE_ContainsTypes_0_12,
  MR_Word * STATE_VARIABLE_ContainsTypes_13,
  MR_Word STATE_VARIABLE_MaybeInstDefnsMap_0_14,
  MR_Word * STATE_VARIABLE_MaybeInstDefnsMap_15)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_MaybeInstDefnsMap_15 = STATE_VARIABLE_MaybeInstDefnsMap_0_14;
    *STATE_VARIABLE_ContainsTypes_13 = STATE_VARIABLE_ContainsTypes_0_12;
    *STATE_VARIABLE_ContainsInstVars_11 = STATE_VARIABLE_ContainsInstVars_0_10;
    *STATE_VARIABLE_ContainsInstNames_9 = STATE_VARIABLE_ContainsInstNames_0_8;
    *STATE_VARIABLE_ContainsAny_7 = STATE_VARIABLE_ContainsAny_0_6;
    *STATE_VARIABLE_Groundness_5 = STATE_VARIABLE_Groundness_0_4;
  }
  else
  {
    MR_Word ArgInst0_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgInsts0_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgInst_37;
    MR_Word ArgInsts_38;
    MR_Word ArgGroundness_46;
    MR_Word ArgContainsAny_47;
    MR_Word ArgContainsInstNames_48;
    MR_Word ArgContainsInstVars_49;
    MR_Word ArgContainsTypes_50;
    MR_Word STATE_VARIABLE_MaybeInstDefnsMap_1_63;
    MR_Word STATE_VARIABLE_Groundness_1_64;
    MR_Word STATE_VARIABLE_ContainsAny_1_65;
    MR_Word STATE_VARIABLE_ContainsInstNames_1_66;
    MR_Word STATE_VARIABLE_ContainsInstVars_1_67;
    MR_Word STATE_VARIABLE_ContainsTypes_1_68;

    check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_105_110_115_116_95_95_91_51_93_95_48_10_p_0(ArgInst0_35, &ArgInst_37, &ArgGroundness_46, &ArgContainsAny_47, &ArgContainsInstNames_48, &ArgContainsInstVars_49, &ArgContainsTypes_50, STATE_VARIABLE_MaybeInstDefnsMap_0_14, &STATE_VARIABLE_MaybeInstDefnsMap_1_63);
    switch (ArgGroundness_46) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        switch (STATE_VARIABLE_Groundness_0_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            STATE_VARIABLE_Groundness_1_64 = (MR_Integer) 2;
            break;
          case (MR_Integer) 0:
            STATE_VARIABLE_Groundness_1_64 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Groundness_1_64 = STATE_VARIABLE_Groundness_0_4;
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_Groundness_1_64 = (MR_Integer) 0;
        break;
    }
    switch (ArgContainsAny_47) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        switch (STATE_VARIABLE_ContainsAny_0_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
          case (MR_Integer) 0:
            STATE_VARIABLE_ContainsAny_1_65 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_ContainsAny_1_65 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_ContainsAny_1_65 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_ContainsAny_1_65 = STATE_VARIABLE_ContainsAny_0_6;
        break;
    }
    if ((ArgContainsInstNames_48 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_ContainsInstNames_1_66 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word InstNamesA_69 = ((MR_Word) ((MR_hl_field(1, ArgContainsInstNames_48, 0))));

      if ((STATE_VARIABLE_ContainsInstNames_0_8 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_ContainsInstNames_1_66 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word InstNamesB_70 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_ContainsInstNames_0_8, 0))));
        MR_Word InstNames_71;

        mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), InstNamesA_69, InstNamesB_70, &InstNames_71);
        {
          STATE_VARIABLE_ContainsInstNames_1_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_ContainsInstNames_1_66, 0) = ((MR_Box) (InstNames_71));
        }
      }
    }
    if ((ArgContainsInstVars_49 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_ContainsInstVars_1_67 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word InstVarsA_73 = ((MR_Word) ((MR_hl_field(1, ArgContainsInstVars_49, 0))));

      if ((STATE_VARIABLE_ContainsInstVars_0_10 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_ContainsInstVars_1_67 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word InstVarsB_74 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_ContainsInstVars_0_10, 0))));
        MR_Word InstVars_75;

        mercury__set__union_3_p_0((MR_Word) (&check_hlds__inst_user_scalar_common_1[0]), InstVarsA_73, InstVarsB_74, &InstVars_75);
        {
          STATE_VARIABLE_ContainsInstVars_1_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_ContainsInstVars_1_67, 0) = ((MR_Box) (InstVars_75));
        }
      }
    }
    if ((ArgContainsTypes_50 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_ContainsTypes_1_68 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TypesA_77 = ((MR_Word) ((MR_hl_field(1, ArgContainsTypes_50, 0))));

      if ((STATE_VARIABLE_ContainsTypes_0_12 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_ContainsTypes_1_68 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word TypesB_78 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_ContainsTypes_0_12, 0))));
        MR_Word Types_79;

        mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), TypesA_77, TypesB_78, &Types_79);
        {
          STATE_VARIABLE_ContainsTypes_1_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_ContainsTypes_1_68, 0) = ((MR_Box) (Types_79));
        }
      }
    }
    check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_102_117_110_99_116_111_114_95_97_114_103_115_95_95_91_51_93_95_48_15_p_0(ArgInsts0_36, &ArgInsts_38, STATE_VARIABLE_Groundness_1_64, STATE_VARIABLE_Groundness_5, STATE_VARIABLE_ContainsAny_1_65, STATE_VARIABLE_ContainsAny_7, STATE_VARIABLE_ContainsInstNames_1_66, STATE_VARIABLE_ContainsInstNames_9, STATE_VARIABLE_ContainsInstVars_1_67, STATE_VARIABLE_ContainsInstVars_11, STATE_VARIABLE_ContainsTypes_1_68, STATE_VARIABLE_ContainsTypes_13, STATE_VARIABLE_MaybeInstDefnsMap_1_63, STATE_VARIABLE_MaybeInstDefnsMap_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ArgInst_37));
      MR_hl_field(1, base, 1) = ((MR_Box) (ArgInsts_38));
    }
  }
}

static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_102_117_110_99_116_111_114_115_95_95_91_51_93_95_48_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Groundness_0_4,
  MR_Word * STATE_VARIABLE_Groundness_5,
  MR_Word STATE_VARIABLE_ContainsAny_0_6,
  MR_Word * STATE_VARIABLE_ContainsAny_7,
  MR_Word STATE_VARIABLE_ContainsInstNames_0_8,
  MR_Word * STATE_VARIABLE_ContainsInstNames_9,
  MR_Word STATE_VARIABLE_ContainsInstVars_0_10,
  MR_Word * STATE_VARIABLE_ContainsInstVars_11,
  MR_Word STATE_VARIABLE_ContainsTypes_0_12,
  MR_Word * STATE_VARIABLE_ContainsTypes_13,
  MR_Word STATE_VARIABLE_MaybeInstDefnsMap_0_14,
  MR_Word * STATE_VARIABLE_MaybeInstDefnsMap_15)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_MaybeInstDefnsMap_15 = STATE_VARIABLE_MaybeInstDefnsMap_0_14;
    *STATE_VARIABLE_ContainsTypes_13 = STATE_VARIABLE_ContainsTypes_0_12;
    *STATE_VARIABLE_ContainsInstVars_11 = STATE_VARIABLE_ContainsInstVars_0_10;
    *STATE_VARIABLE_ContainsInstNames_9 = STATE_VARIABLE_ContainsInstNames_0_8;
    *STATE_VARIABLE_ContainsAny_7 = STATE_VARIABLE_ContainsAny_0_6;
    *STATE_VARIABLE_Groundness_5 = STATE_VARIABLE_Groundness_0_4;
  }
  else
  {
    MR_Word BoundFunctor0_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word BoundFunctors0_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word BoundFunctor_37;
    MR_Word BoundFunctors_38;
    MR_Word ConsId_46 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_35, 0))));
    MR_Word ArgInsts0_47 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_35, 1))));
    MR_Word ArgInsts_48;
    MR_Word STATE_VARIABLE_Groundness_1_61;
    MR_Word STATE_VARIABLE_ContainsAny_1_62;
    MR_Word STATE_VARIABLE_ContainsInstNames_1_63;
    MR_Word STATE_VARIABLE_ContainsInstVars_1_64;
    MR_Word STATE_VARIABLE_ContainsTypes_1_65;
    MR_Word STATE_VARIABLE_MaybeInstDefnsMap_1_66;

    check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_102_117_110_99_116_111_114_95_97_114_103_115_95_95_91_51_93_95_48_15_p_0(ArgInsts0_47, &ArgInsts_48, STATE_VARIABLE_Groundness_0_4, &STATE_VARIABLE_Groundness_1_61, STATE_VARIABLE_ContainsAny_0_6, &STATE_VARIABLE_ContainsAny_1_62, STATE_VARIABLE_ContainsInstNames_0_8, &STATE_VARIABLE_ContainsInstNames_1_63, STATE_VARIABLE_ContainsInstVars_0_10, &STATE_VARIABLE_ContainsInstVars_1_64, STATE_VARIABLE_ContainsTypes_0_12, &STATE_VARIABLE_ContainsTypes_1_65, STATE_VARIABLE_MaybeInstDefnsMap_0_14, &STATE_VARIABLE_MaybeInstDefnsMap_1_66);
    {
      BoundFunctor_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, BoundFunctor_37, 0) = ((MR_Box) (ConsId_46));
      MR_hl_field(0, BoundFunctor_37, 1) = ((MR_Box) (ArgInsts_48));
    }
    check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_102_117_110_99_116_111_114_115_95_95_91_51_93_95_48_15_p_0(BoundFunctors0_36, &BoundFunctors_38, STATE_VARIABLE_Groundness_1_61, STATE_VARIABLE_Groundness_5, STATE_VARIABLE_ContainsAny_1_62, STATE_VARIABLE_ContainsAny_7, STATE_VARIABLE_ContainsInstNames_1_63, STATE_VARIABLE_ContainsInstNames_9, STATE_VARIABLE_ContainsInstVars_1_64, STATE_VARIABLE_ContainsInstVars_11, STATE_VARIABLE_ContainsTypes_1_65, STATE_VARIABLE_ContainsTypes_13, STATE_VARIABLE_MaybeInstDefnsMap_1_66, STATE_VARIABLE_MaybeInstDefnsMap_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (BoundFunctor_37));
      MR_hl_field(1, base, 1) = ((MR_Box) (BoundFunctors_38));
    }
  }
}

static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_105_110_115_116_95_95_91_51_93_95_48_10_p_0(
  MR_Word Inst0_11,
  MR_Word * Inst_12,
  MR_Word * Groundness_14,
  MR_Word * ContainsAny_15,
  MR_Word * ContainsInstNames_16,
  MR_Word * ContainsInstVars_17,
  MR_Word * ContainsTypes_18,
  MR_Word STATE_VARIABLE_MaybeInstDefnsMap_0_33,
  MR_Word * STATE_VARIABLE_MaybeInstDefnsMap_34)
{
  switch (MR_tag((MR_Word) Inst0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Inst0_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_35;
            MR_Word Var_36;
            MR_Word Var_37;

            *Groundness_14 = (MR_Integer) 0;
            *ContainsAny_15 = (MR_Integer) 0;
            Var_35 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *ContainsInstNames_16 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_35));
            }
            Var_36 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__inst_user_scalar_common_1[0]));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *ContainsInstVars_17 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_36));
            }
            Var_37 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *ContainsTypes_18 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_37));
            }
            *Inst_12 = Inst0_11;
            *STATE_VARIABLE_MaybeInstDefnsMap_34 = STATE_VARIABLE_MaybeInstDefnsMap_0_33;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_user.pretest_inst\'/10", (MR_String) "Inst0 = not_reached");
            return;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_40;

        *Groundness_14 = (MR_Integer) 1;
        *ContainsAny_15 = (MR_Integer) 0;
        Var_38 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *ContainsInstNames_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_38));
        }
        Var_39 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__inst_user_scalar_common_1[0]));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *ContainsInstVars_17 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_39));
        }
        Var_40 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *ContainsTypes_18 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_40));
        }
        *Inst_12 = Inst0_11;
        *STATE_VARIABLE_MaybeInstDefnsMap_34 = STATE_VARIABLE_MaybeInstDefnsMap_0_33;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Uniq_28 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_11, 0))) & (MR_Integer) 7);
        MR_Word BoundFunctors0_30 = ((MR_Word) ((MR_hl_field(2, Inst0_11, 2))));
        MR_Word BoundFunctors_31;
        MR_Word TestResults_32;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_59;

        Var_57 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_57));
        }
        Var_58 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__inst_user_scalar_common_1[0]));
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_58));
        }
        Var_59 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
        {
          Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_59));
        }
        check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_102_117_110_99_116_111_114_115_95_95_91_51_93_95_48_15_p_0(BoundFunctors0_30, &BoundFunctors_31, (MR_Integer) 1, Groundness_14, (MR_Integer) 0, ContainsAny_15, Var_53, ContainsInstNames_16, Var_54, ContainsInstVars_17, Var_55, ContainsTypes_18, STATE_VARIABLE_MaybeInstDefnsMap_0_33, STATE_VARIABLE_MaybeInstDefnsMap_34);
        {
          TestResults_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, TestResults_32, 0) = (MR_Box) (((((MR_Unsigned) (*Groundness_14) << 2)) | (MR_Unsigned) (*ContainsAny_15)));
          MR_hl_field(1, TestResults_32, 1) = ((MR_Box) (*ContainsInstNames_16));
          MR_hl_field(1, TestResults_32, 2) = ((MR_Box) (*ContainsInstVars_17));
          MR_hl_field(1, TestResults_32, 3) = ((MR_Box) (*ContainsTypes_18));
          MR_hl_field(1, TestResults_32, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Inst_12 = base;
          MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_28));
          MR_hl_field(2, base, 1) = ((MR_Box) (TestResults_32));
          MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_31));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst0_11, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_50;

            *Groundness_14 = (MR_Integer) 2;
            *ContainsAny_15 = (MR_Integer) 2;
            *ContainsInstNames_16 = (MR_Word) ((MR_Unsigned) 0U);
            Var_50 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__inst_user_scalar_common_1[0]));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *ContainsInstVars_17 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_50));
            }
            *ContainsTypes_18 = (MR_Word) ((MR_Unsigned) 0U);
            *Inst_12 = Inst0_11;
            *STATE_VARIABLE_MaybeInstDefnsMap_34 = STATE_VARIABLE_MaybeInstDefnsMap_0_33;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word SubInst0_24 = ((MR_Word) ((MR_hl_field(3, Inst0_11, 2))));
            MR_Word SubInst_25;
            MR_Word ContainsInstVars0_26;
            MR_Word InstVarsA_76 = ((MR_Word) ((MR_hl_field(3, Inst0_11, 1))));

            check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_105_110_115_116_95_95_91_51_93_95_48_10_p_0(SubInst0_24, &SubInst_25, Groundness_14, ContainsAny_15, ContainsInstNames_16, &ContainsInstVars0_26, ContainsTypes_18, STATE_VARIABLE_MaybeInstDefnsMap_0_33, STATE_VARIABLE_MaybeInstDefnsMap_34);
            if ((ContainsInstVars0_26 == (MR_Word) ((MR_Unsigned) 0U)))
              *ContainsInstVars_17 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word InstVarsB_77 = ((MR_Word) ((MR_hl_field(1, ContainsInstVars0_26, 0))));
              MR_Word InstVars_78;

              mercury__set__union_3_p_0((MR_Word) (&check_hlds__inst_user_scalar_common_1[0]), InstVarsA_76, InstVarsB_77, &InstVars_78);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *ContainsInstVars_17 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (InstVars_78));
              }
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (InstVarsA_76));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubInst_25));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_41;
            MR_Word Var_42;
            MR_Word Var_43;

            *Groundness_14 = (MR_Integer) 0;
            *ContainsAny_15 = (MR_Integer) 1;
            Var_41 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *ContainsInstNames_16 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_41));
            }
            Var_42 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__inst_user_scalar_common_1[0]));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *ContainsInstVars_17 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_42));
            }
            Var_43 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *ContainsTypes_18 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_43));
            }
            *Inst_12 = Inst0_11;
            *STATE_VARIABLE_MaybeInstDefnsMap_34 = STATE_VARIABLE_MaybeInstDefnsMap_0_33;
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_user.pretest_inst\'/10", (MR_String) "Inst0 = inst_var");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__inst_user__record_user_inst_results_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word MaybeInstPair_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word MaybeInstPairs_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word InstDefnPair_5;
    MR_Word InstDefnPairs_6;
    MR_Word InstCtor_7 = ((MR_Word) ((MR_hl_field(0, MaybeInstPair_3, 0))));
    MR_Word MaybeUserInst_8 = ((MR_Word) ((MR_hl_field(0, MaybeInstPair_3, 1))));
    MR_Word UserInstDefn_9;

    if ((MaybeUserInst_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_user.record_user_inst_results\'/2", (MR_String) "MaybeUserInst = user_inst_being_processed");
        return;
      }
    else
      UserInstDefn_9 = (MR_Word) (MR_body((MR_Word) (MaybeUserInst_8), (MR_Integer) 1));
    {
      InstDefnPair_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, InstDefnPair_5, 0) = ((MR_Box) (InstCtor_7));
      MR_hl_field(0, InstDefnPair_5, 1) = ((MR_Box) (UserInstDefn_9));
    }
    check_hlds__inst_user__record_user_inst_results_2_p_0(MaybeInstPairs_4, &InstDefnPairs_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (InstDefnPair_5));
      MR_hl_field(1, base, 1) = ((MR_Box) (InstDefnPairs_6));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_inst_defns_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_user____Unify____maybe_inst_defns_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_user____Compare____maybe_inst_defns_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_user____Compare____maybe_inst_defns_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_user_inst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_user____Unify____maybe_user_inst_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_user____Compare____maybe_user_inst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_user____Compare____maybe_user_inst_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__inst_user__init(void)
{
}

void mercury__check_hlds__inst_user__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_inst_defns_map_0);
  MR_register_type_ctor_info(&check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0);
}

void mercury__check_hlds__inst_user__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__inst_user__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.inst_user.
