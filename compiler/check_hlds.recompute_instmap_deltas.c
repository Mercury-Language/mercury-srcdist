/*
** Automatically generated from `recompute_instmap_deltas.m'
** by the Mercury compiler,
** version 22.01.5-beta-2022-12-27
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


// :- module check_hlds.recompute_instmap_deltas.
// :- implementation.

/*
INIT mercury__check_hlds__recompute_instmap_deltas__init
ENDINIT
*/

#include "check_hlds.recompute_instmap_deltas.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "integer.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
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
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "term.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.inst_abstract_unify.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__recompute_instmap_deltas__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__enum_functor_desc_recompute_atomic_instmap_deltas_0_0;

static const MR_EnumFunctorDesc check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__enum_functor_desc_recompute_atomic_instmap_deltas_0_1;

static const MR_EnumFunctorDescPtr check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__enum_ordinal_ordered_recompute_atomic_instmap_deltas_0[2];

static const MR_EnumFunctorDescPtr check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__enum_name_ordered_recompute_atomic_instmap_deltas_0[2];

static const MR_Integer check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__functor_number_map_recompute_atomic_instmap_deltas_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__recompute_instmap_deltas__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_PseudoTypeInfo check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__field_types_recompute_info_0_0[2];

static const MR_ConstString check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__field_names_recompute_info_0_0[2];

static const MR_DuFunctorDesc check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__du_functor_desc_recompute_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__du_stag_ordered_recompute_info_0_0[1];

static const MR_DuPtagLayout check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__du_ptag_ordered_recompute_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__du_name_ordered_recompute_info_0[1];

static const MR_Integer check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__functor_number_map_recompute_info_0[1];

static void MR_CALL 
check_hlds__recompute_instmap_deltas____Compare____recompute_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__recompute_instmap_deltas____Unify____recompute_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__recompute_instmap_deltas__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_95_91_55_93_95_48_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_RI_0_9,
  MR_Word * STATE_VARIABLE_RI_10);

static void MR_CALL 
check_hlds__recompute_instmap_deltas__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_117_110_99_116_115_95_95_91_54_93_95_48_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_RI_0_8,
  MR_Word * STATE_VARIABLE_RI_9);

static void MR_CALL 
check_hlds__recompute_instmap_deltas__recompute_instmap_delta_switch_10_p_0(
  MR_Word RecomputeAtomic_11,
  MR_Word Var_12,
  MR_Word Cases0_13,
  MR_Word * Cases_14,
  MR_Word VarTypes_15,
  MR_Word InstMap0_16,
  MR_Word NonLocals_17,
  MR_Word * InstMapDelta_18,
  MR_Word STATE_VARIABLE_RI_0_25,
  MR_Word * STATE_VARIABLE_RI_26);

static void MR_CALL 
check_hlds__recompute_instmap_deltas__recompute_instmap_delta_disj_9_p_0(
  MR_Word RecomputeAtomic_10,
  MR_Word Goals0_11,
  MR_Word * Goals_12,
  MR_Word VarTypes_13,
  MR_Word InstMap_14,
  MR_Word NonLocals_15,
  MR_Word * InstMapDelta_16,
  MR_Word STATE_VARIABLE_RI_0_23,
  MR_Word * STATE_VARIABLE_RI_24);

static void MR_CALL 
check_hlds__recompute_instmap_deltas__recompute_instmap_delta_conj_8_p_0(
  MR_Word RecomputeAtomic_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word VarTypes_4,
  MR_Word InstMap0_5,
  MR_Word * InstMapDelta_6,
  MR_Word STATE_VARIABLE_RI_0_7,
  MR_Word * STATE_VARIABLE_RI_8);

static MR_Box MR_CALL 
check_hlds__recompute_instmap_deltas__recompute_instmap_delta_1_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__recompute_instmap_deltas__recompute_instmap_delta_1_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__recompute_instmap_deltas__recompute_instmap_delta_1_8_p_0(
  MR_Word RecomputeAtomic_9,
  MR_Word Goal0_10,
  MR_Word * Goal_11,
  MR_Word VarTypes_12,
  MR_Word InstMap0_13,
  MR_Word * InstMapDelta_14,
  MR_Word STATE_VARIABLE_RI_0_112,
  MR_Word * STATE_VARIABLE_RI_113);

static void MR_CALL 
check_hlds__recompute_instmap_deltas__recompute_instmap_delta_unify_8_p_0(
  MR_Word Unification_9,
  MR_Word UniMode0_10,
  MR_Word * UniMode_11,
  MR_Word GoalInfo_12,
  MR_Word InstMap_13,
  MR_Word * InstMapDelta_14,
  MR_Word STATE_VARIABLE_RI_0_52,
  MR_Word * STATE_VARIABLE_RI_53);

static MR_Word MR_CALL 
check_hlds__recompute_instmap_deltas__cons_id_to_shared_inst_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word ConsId_6,
  MR_Integer NumArgs_7);

static void MR_CALL 
check_hlds__recompute_instmap_deltas__pair_arg_vars_with_rhs_insts_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__recompute_instmap_deltas__recompute_instmap_delta_call_8_p_0(
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word Args_11,
  MR_Word VarTypes_12,
  MR_Word InstMap_13,
  MR_Word * InstMapDelta_14,
  MR_Word STATE_VARIABLE_RI_0_34,
  MR_Word * STATE_VARIABLE_RI_35);

static void MR_CALL 
check_hlds__recompute_instmap_deltas__recompute_instmap_delta_call_args_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6);

static void MR_CALL 
check_hlds__recompute_instmap_deltas__compute_inst_var_sub_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarTypes_2,
  MR_Word InstMap_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Sub_0_5,
  MR_Word * STATE_VARIABLE_Sub_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8);

static MR_bool MR_CALL 
check_hlds__recompute_instmap_deltas____Unify____recompute_atomic_instmap_deltas_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__recompute_instmap_deltas____Compare____recompute_atomic_instmap_deltas_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__recompute_instmap_deltas____Unify____recompute_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__recompute_instmap_deltas____Compare____recompute_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__recompute_instmap_deltas_scalar_common_1[4][2];

static /* final */ const MR_Box check_hlds__recompute_instmap_deltas_scalar_common_2[3][3];

static /* final */ const MR_Box check_hlds__recompute_instmap_deltas_scalar_common_3[1][1];

static /* final */ const MR_Box check_hlds__recompute_instmap_deltas_scalar_common_4[1][5];




static /* final */ const MR_Box check_hlds__recompute_instmap_deltas_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 4U))
  },
};

static /* final */ const MR_Box check_hlds__recompute_instmap_deltas_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__recompute_instmap_deltas_scalar_common_4[0])),
    ((MR_Box) (check_hlds__recompute_instmap_deltas__recompute_instmap_delta_1_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__recompute_instmap_deltas_scalar_common_4[0])),
    ((MR_Box) (check_hlds__recompute_instmap_deltas__recompute_instmap_delta_1_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__recompute_instmap_deltas_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__recompute_instmap_deltas_scalar_common_2[0])))
  },
};

static /* final */ const MR_Box check_hlds__recompute_instmap_deltas_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__recompute_instmap_deltas__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__recompute_instmap_deltas__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_EnumFunctorDesc check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__enum_functor_desc_recompute_atomic_instmap_deltas_0_0 = {
  (MR_String) "recompute_atomic_instmap_deltas",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__enum_functor_desc_recompute_atomic_instmap_deltas_0_1 = {
  (MR_String) "do_not_recompute_atomic_instmap_deltas",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__enum_ordinal_ordered_recompute_atomic_instmap_deltas_0[2] = {
  &check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__enum_functor_desc_recompute_atomic_instmap_deltas_0_0,
  &check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__enum_functor_desc_recompute_atomic_instmap_deltas_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__enum_name_ordered_recompute_atomic_instmap_deltas_0[2] = {
  &check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__enum_functor_desc_recompute_atomic_instmap_deltas_0_1,
  &check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__enum_functor_desc_recompute_atomic_instmap_deltas_0_0
};

static const MR_Integer check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__functor_number_map_recompute_atomic_instmap_deltas_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__type_ctor_info_recompute_atomic_instmap_deltas_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__recompute_instmap_deltas____Unify____recompute_atomic_instmap_deltas_0_0_10001)),
  ((MR_Box) (check_hlds__recompute_instmap_deltas____Compare____recompute_atomic_instmap_deltas_0_0_10001)),
  (MR_String) "check_hlds.recompute_instmap_deltas",
  (MR_String) "recompute_atomic_instmap_deltas",
  {     check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__enum_name_ordered_recompute_atomic_instmap_deltas_0 },
  {     check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__enum_ordinal_ordered_recompute_atomic_instmap_deltas_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__functor_number_map_recompute_atomic_instmap_deltas_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__recompute_instmap_deltas__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__field_types_recompute_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__recompute_instmap_deltas__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)
};

static const MR_ConstString check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__field_names_recompute_info_0_0[2] = {
  (MR_String) "ri_module_info",
  (MR_String) "ri_inst_varset"
};

static const MR_DuFunctorDesc check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__du_functor_desc_recompute_info_0_0 = {
  (MR_String) "recompute_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__field_types_recompute_info_0_0,
  check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__field_names_recompute_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__du_stag_ordered_recompute_info_0_0[1] = {
  &check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__du_functor_desc_recompute_info_0_0
};

static const MR_DuPtagLayout check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__du_ptag_ordered_recompute_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__du_stag_ordered_recompute_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__du_name_ordered_recompute_info_0[1] = {
  &check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__du_functor_desc_recompute_info_0_0
};

static const MR_Integer check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__functor_number_map_recompute_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__type_ctor_info_recompute_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__recompute_instmap_deltas____Unify____recompute_info_0_0_10001)),
  ((MR_Box) (check_hlds__recompute_instmap_deltas____Compare____recompute_info_0_0_10001)),
  (MR_String) "check_hlds.recompute_instmap_deltas",
  (MR_String) "recompute_info",
  {     check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__du_name_ordered_recompute_info_0 },
  {     check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__du_ptag_ordered_recompute_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__functor_number_map_recompute_info_0,

};

static void MR_CALL 
check_hlds__recompute_instmap_deltas____Compare____recompute_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__recompute_instmap_deltas_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__recompute_instmap_deltas____Unify____recompute_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&check_hlds__recompute_instmap_deltas_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__recompute_instmap_deltas____Compare____recompute_atomic_instmap_deltas_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
check_hlds__recompute_instmap_deltas____Unify____recompute_atomic_instmap_deltas_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__recompute_instmap_deltas__recompute_instmap_delta_8_p_0(
  MR_Word RecomputeAtomic_9,
  MR_Word Goal0_10,
  MR_Word * Goal_11,
  MR_Word VarTypes_12,
  MR_Word InstVarSet_13,
  MR_Word InstMap0_14,
  MR_Word ModuleInfo0_15,
  MR_Word * ModuleInfo_16)
{
  {
    MR_Word RI0_17;
    MR_Word RI_19;
    MR_Word Var_18;

    {
      RI0_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RI0_17, 0) = ((MR_Box) (ModuleInfo0_15));
      MR_hl_field(MR_mktag(0), RI0_17, 1) = ((MR_Box) (InstVarSet_13));
    }
    check_hlds__recompute_instmap_deltas__recompute_instmap_delta_1_8_p_0(RecomputeAtomic_9, Goal0_10, Goal_11, VarTypes_12, InstMap0_14, &Var_18, RI0_17, &RI_19);
    *ModuleInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RI_19, (MR_Integer) 0))));
  }
}

void MR_CALL 
check_hlds__recompute_instmap_deltas__recompute_instmap_delta_proc_5_p_0(
  MR_Word RecomputeAtomic_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_14,
  MR_Word * STATE_VARIABLE_ProcInfo_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17)
{
  {
    MR_Word InstMap0_9;
    MR_Word VarTypes_10;
    MR_Word Goal0_11;
    MR_Word InstVarSet_12;
    MR_Word Goal_13;
    MR_Word RI0_28;
    MR_Word RI_30;
    MR_Word Var_29;

    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ProcInfo_0_14, &InstMap0_9);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &VarTypes_10);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &Goal0_11);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &InstVarSet_12);
    {
      RI0_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RI0_28, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_16));
      MR_hl_field(MR_mktag(0), RI0_28, 1) = ((MR_Box) (InstVarSet_12));
    }
    check_hlds__recompute_instmap_deltas__recompute_instmap_delta_1_8_p_0(RecomputeAtomic_6, Goal0_11, &Goal_13, VarTypes_10, InstMap0_9, &Var_29, RI0_28, &RI_30);
    *STATE_VARIABLE_ModuleInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RI_30, (MR_Integer) 0))));
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_13, STATE_VARIABLE_ProcInfo_0_14, STATE_VARIABLE_ProcInfo_15);
  }
}

static void MR_CALL 
check_hlds__recompute_instmap_deltas__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_95_91_55_93_95_48_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_RI_0_9,
  MR_Word * STATE_VARIABLE_RI_10)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_RI_10 = STATE_VARIABLE_RI_0_9;
  }
  else
  {
    MR_Word Case0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Cases0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Case_23;
    MR_Word Cases_24;
    MR_Word InstMapDelta_28;
    MR_Word InstMapDeltas_29;
    MR_Word MainConsId_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_21, (MR_Integer) 0))));
    MR_Word OtherConsIds_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_21, (MR_Integer) 1))));
    MR_Word Goal0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_21, (MR_Integer) 2))));
    MR_Word Type_34;
    MR_Word ModuleInfo0_35;
    MR_Word InstMap1_36;
    MR_Word ModuleInfo1_37;
    MR_Word Goal_38;
    MR_Word InstMapDelta0_39;
    MR_Word ModuleInfo2_40;
    MR_Word ModuleInfo3_41;
    MR_Word STATE_VARIABLE_RI_44_44;
    MR_Word STATE_VARIABLE_RI_45_45;
    MR_Word STATE_VARIABLE_RI_46_46;
    MR_Word Var_50;
    MR_Word Var_53;

    hlds__vartypes__lookup_var_type_3_p_0(HeadVar__5_5, HeadVar__2_2, &Type_34);
    ModuleInfo0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_9, (MR_Integer) 0))));
    hlds__instmap__bind_var_to_functors_8_p_0(HeadVar__2_2, Type_34, MainConsId_31, OtherConsIds_32, HeadVar__6_6, &InstMap1_36, ModuleInfo0_35, &ModuleInfo1_37);
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_9, (MR_Integer) 1))));
    {
      STATE_VARIABLE_RI_44_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_44_44, 0) = ((MR_Box) (ModuleInfo1_37));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_44_44, 1) = ((MR_Box) (Var_50));
    }
    check_hlds__recompute_instmap_deltas__recompute_instmap_delta_1_8_p_0(HeadVar__1_1, Goal0_33, &Goal_38, HeadVar__5_5, InstMap1_36, &InstMapDelta0_39, STATE_VARIABLE_RI_44_44, &STATE_VARIABLE_RI_45_45);
    ModuleInfo2_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_45_45, (MR_Integer) 0))));
    hlds__instmap__instmap_delta_bind_var_to_functors_9_p_0(HeadVar__2_2, Type_34, MainConsId_31, OtherConsIds_32, HeadVar__6_6, InstMapDelta0_39, &InstMapDelta_28, ModuleInfo2_40, &ModuleInfo3_41);
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_45_45, (MR_Integer) 1))));
    {
      STATE_VARIABLE_RI_46_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_46_46, 0) = ((MR_Box) (ModuleInfo3_41));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_46_46, 1) = ((MR_Box) (Var_53));
    }
    {
      Case_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_23, 0) = ((MR_Box) (MainConsId_31));
      MR_hl_field(MR_mktag(0), Case_23, 1) = ((MR_Box) (OtherConsIds_32));
      MR_hl_field(MR_mktag(0), Case_23, 2) = ((MR_Box) (Goal_38));
    }
    check_hlds__recompute_instmap_deltas__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_95_91_55_93_95_48_10_p_0(HeadVar__1_1, HeadVar__2_2, Cases0_22, &Cases_24, HeadVar__5_5, HeadVar__6_6, &InstMapDeltas_29, STATE_VARIABLE_RI_46_46, STATE_VARIABLE_RI_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_23));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__8_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMapDelta_28));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InstMapDeltas_29));
    }
  }
}

static void MR_CALL 
check_hlds__recompute_instmap_deltas__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_117_110_99_116_115_95_95_91_54_93_95_48_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_RI_0_8,
  MR_Word * STATE_VARIABLE_RI_9)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_RI_9 = STATE_VARIABLE_RI_0_8;
  }
  else
  {
    MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_20;
    MR_Word Goals_21;
    MR_Word InstMapDelta_25;
    MR_Word InstMapDeltas_26;
    MR_Word STATE_VARIABLE_RI_30_30;

    check_hlds__recompute_instmap_deltas__recompute_instmap_delta_1_8_p_0(HeadVar__1_1, Goal0_18, &Goal_20, HeadVar__4_4, HeadVar__5_5, &InstMapDelta_25, STATE_VARIABLE_RI_0_8, &STATE_VARIABLE_RI_30_30);
    check_hlds__recompute_instmap_deltas__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_117_110_99_116_115_95_95_91_54_93_95_48_9_p_0(HeadVar__1_1, Goals0_19, &Goals_21, HeadVar__4_4, HeadVar__5_5, &InstMapDeltas_26, STATE_VARIABLE_RI_30_30, STATE_VARIABLE_RI_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_20));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_21));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMapDelta_25));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InstMapDeltas_26));
    }
  }
}

static void MR_CALL 
check_hlds__recompute_instmap_deltas__recompute_instmap_delta_switch_10_p_0(
  MR_Word RecomputeAtomic_11,
  MR_Word Var_12,
  MR_Word Cases0_13,
  MR_Word * Cases_14,
  MR_Word VarTypes_15,
  MR_Word InstMap0_16,
  MR_Word NonLocals_17,
  MR_Word * InstMapDelta_18,
  MR_Word STATE_VARIABLE_RI_0_25,
  MR_Word * STATE_VARIABLE_RI_26)
{
  {
    MR_Word InstMapDeltas_20;
    MR_Word STATE_VARIABLE_RI_27_27;

    check_hlds__recompute_instmap_deltas__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_95_91_55_93_95_48_10_p_0(RecomputeAtomic_11, Var_12, Cases0_13, Cases_14, VarTypes_15, InstMap0_16, &InstMapDeltas_20, STATE_VARIABLE_RI_0_25, &STATE_VARIABLE_RI_27_27);
    if ((InstMapDeltas_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(InstMapDelta_18);
      *STATE_VARIABLE_RI_26 = STATE_VARIABLE_RI_27_27;
    }
    else
    {
      MR_Word ModuleInfo0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_27_27, (MR_Integer) 0))));
      MR_Word ModuleInfo_24;
      MR_Word Var_31;

      hlds__instmap__merge_instmap_deltas_7_p_0(InstMap0_16, NonLocals_17, VarTypes_15, InstMapDeltas_20, InstMapDelta_18, ModuleInfo0_23, &ModuleInfo_24);
      Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_27_27, (MR_Integer) 1))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_RI_26 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_24));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_31));
      }
    }
  }
}

static void MR_CALL 
check_hlds__recompute_instmap_deltas__recompute_instmap_delta_disj_9_p_0(
  MR_Word RecomputeAtomic_10,
  MR_Word Goals0_11,
  MR_Word * Goals_12,
  MR_Word VarTypes_13,
  MR_Word InstMap_14,
  MR_Word NonLocals_15,
  MR_Word * InstMapDelta_16,
  MR_Word STATE_VARIABLE_RI_0_23,
  MR_Word * STATE_VARIABLE_RI_24)
{
  {
    MR_Word InstMapDeltas_18;
    MR_Word STATE_VARIABLE_RI_25_25;

    check_hlds__recompute_instmap_deltas__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_117_110_99_116_115_95_95_91_54_93_95_48_9_p_0(RecomputeAtomic_10, Goals0_11, Goals_12, VarTypes_13, InstMap_14, &InstMapDeltas_18, STATE_VARIABLE_RI_0_23, &STATE_VARIABLE_RI_25_25);
    if ((InstMapDeltas_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(InstMapDelta_16);
      *STATE_VARIABLE_RI_24 = STATE_VARIABLE_RI_25_25;
    }
    else
    {
      MR_Word ModuleInfo0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_25_25, (MR_Integer) 0))));
      MR_Word ModuleInfo_22;
      MR_Word Var_29;

      hlds__instmap__merge_instmap_deltas_7_p_0(InstMap_14, NonLocals_15, VarTypes_13, InstMapDeltas_18, InstMapDelta_16, ModuleInfo0_21, &ModuleInfo_22);
      Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_25_25, (MR_Integer) 1))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_RI_24 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_22));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_29));
      }
    }
  }
}

static void MR_CALL 
check_hlds__recompute_instmap_deltas__recompute_instmap_delta_conj_8_p_0(
  MR_Word RecomputeAtomic_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word VarTypes_4,
  MR_Word InstMap0_5,
  MR_Word * InstMapDelta_6,
  MR_Word STATE_VARIABLE_RI_0_7,
  MR_Word * STATE_VARIABLE_RI_8)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    hlds__instmap__instmap_delta_init_reachable_1_p_0(InstMapDelta_6);
    *STATE_VARIABLE_RI_8 = STATE_VARIABLE_RI_0_7;
  }
  else
  {
    MR_Word Goal0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_19;
    MR_Word Goals_20;
    MR_Word InstMapDelta0_25;
    MR_Word InstMap1_26;
    MR_Word InstMapDelta1_27;
    MR_Word STATE_VARIABLE_RI_30_30;

    check_hlds__recompute_instmap_deltas__recompute_instmap_delta_1_8_p_0(RecomputeAtomic_1, Goal0_17, &Goal_19, VarTypes_4, InstMap0_5, &InstMapDelta0_25, STATE_VARIABLE_RI_0_7, &STATE_VARIABLE_RI_30_30);
    hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta0_25, InstMap0_5, &InstMap1_26);
    check_hlds__recompute_instmap_deltas__recompute_instmap_delta_conj_8_p_0(RecomputeAtomic_1, Goals0_18, &Goals_20, VarTypes_4, InstMap1_26, &InstMapDelta1_27, STATE_VARIABLE_RI_30_30, STATE_VARIABLE_RI_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_20));
    }
    hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(InstMapDelta0_25, InstMapDelta1_27, (MR_Integer) 1, InstMapDelta_6);
  }
}

static MR_Box MR_CALL 
check_hlds__recompute_instmap_deltas__recompute_instmap_delta_1_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__recompute_instmap_deltas__recompute_instmap_delta_1_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__recompute_instmap_deltas__recompute_instmap_delta_1_8_p_0(
  MR_Word RecomputeAtomic_9,
  MR_Word Goal0_10,
  MR_Word * Goal_11,
  MR_Word VarTypes_12,
  MR_Word InstMap0_13,
  MR_Word * InstMapDelta_14,
  MR_Word STATE_VARIABLE_RI_0_112,
  MR_Word * STATE_VARIABLE_RI_113)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 0))));
    MR_Word GoalInfo0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 1))));
    MR_Word InstMapDelta1_22;
    MR_Word GoalExpr_24;
    MR_Word GoalInfo_111;

    switch (MR_tag((MR_Word) GoalExpr0_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_30 = (MR_Word) ((MR_Word) (GoalExpr0_16));
          MR_Word InstMapDelta0_31;
          MR_Word SubGoal_32;
          MR_Word Var_33;

          InstMapDelta0_31 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_17);
          succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta0_31);
          if (succeeded)
            hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstMapDelta1_22);
          else
            hlds__instmap__instmap_delta_init_unreachable_1_p_0(&InstMapDelta1_22);
          check_hlds__recompute_instmap_deltas__recompute_instmap_delta_1_8_p_0(RecomputeAtomic_9, SubGoal0_30, &SubGoal_32, VarTypes_12, InstMap0_13, &Var_33, STATE_VARIABLE_RI_0_112, STATE_VARIABLE_RI_113);
          GoalExpr_24 = (MR_Word) ((MR_Word) (SubGoal_32));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_16, (MR_Integer) 0))));
          MR_Word RHS0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_16, (MR_Integer) 1))));
          MR_Word UniMode0_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_16, (MR_Integer) 2))));
          MR_Word Uni_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_16, (MR_Integer) 3))));
          MR_Word Context_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_16, (MR_Integer) 4))));
          MR_Word RHS_77;
          MR_Word UniMode_82;
          MR_Word STATE_VARIABLE_RI_125_125;

          switch (MR_tag((MR_Word) RHS0_65)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                RHS_77 = RHS0_65;
                STATE_VARIABLE_RI_125_125 = STATE_VARIABLE_RI_0_112;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word LambdaNonLocals_73 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_65, (MR_Integer) 2))));
                MR_Word ArgVarsModes_74 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_65, (MR_Integer) 3))));
                MR_Word InstMap_75;
                MR_Word Det_156 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_65, (MR_Integer) 4))) & (MR_Integer) 7);
                MR_Word SubGoal0_157 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_65, (MR_Integer) 5))));
                MR_Word SubGoal_158;
                MR_Word ModuleInfo0_159 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_112, (MR_Integer) 0))));
                MR_Unsigned packed_word_6 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_65, (MR_Integer) 0)));
                MR_Word Var_76;

                hlds__instmap__pre_lambda_update_4_p_0(ModuleInfo0_159, ArgVarsModes_74, InstMap0_13, &InstMap_75);
                check_hlds__recompute_instmap_deltas__recompute_instmap_delta_1_8_p_0(RecomputeAtomic_9, SubGoal0_157, &SubGoal_158, VarTypes_12, InstMap_75, &Var_76, STATE_VARIABLE_RI_0_112, &STATE_VARIABLE_RI_125_125);
                {
                  RHS_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), RHS_77, 0) = (MR_Box) (packed_word_6);
                  MR_hl_field(MR_mktag(2), RHS_77, 1) = NULL;
                  MR_hl_field(MR_mktag(2), RHS_77, 2) = ((MR_Box) (LambdaNonLocals_73));
                  MR_hl_field(MR_mktag(2), RHS_77, 3) = ((MR_Box) (ArgVarsModes_74));
                  MR_hl_field(MR_mktag(2), RHS_77, 4) = (MR_Box) ((MR_Unsigned) (Det_156));
                  MR_hl_field(MR_mktag(2), RHS_77, 5) = ((MR_Box) (SubGoal_158));
                }
              }
              break;
          }
          switch (RecomputeAtomic_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                UniMode_82 = UniMode0_66;
                InstMapDelta1_22 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_17);
                *STATE_VARIABLE_RI_113 = STATE_VARIABLE_RI_125_125;
              }
              break;
            case (MR_Integer) 0:
              check_hlds__recompute_instmap_deltas__recompute_instmap_delta_unify_8_p_0(Uni_67, UniMode0_66, &UniMode_82, GoalInfo0_17, InstMap0_13, &InstMapDelta1_22, STATE_VARIABLE_RI_125_125, STATE_VARIABLE_RI_113);
              break;
          }
          {
            GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), GoalExpr_24, 0) = ((MR_Box) (LHS_64));
            MR_hl_field(MR_mktag(1), GoalExpr_24, 1) = ((MR_Box) (RHS_77));
            MR_hl_field(MR_mktag(1), GoalExpr_24, 2) = ((MR_Box) (UniMode_82));
            MR_hl_field(MR_mktag(1), GoalExpr_24, 3) = ((MR_Box) (Uni_67));
            MR_hl_field(MR_mktag(1), GoalExpr_24, 4) = ((MR_Box) (Context_68));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_58 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 0))));
          MR_Integer ProcId_59 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 1))));
          MR_Word Args_60 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 2))));

          switch (RecomputeAtomic_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                InstMapDelta1_22 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_17);
                *STATE_VARIABLE_RI_113 = STATE_VARIABLE_RI_0_112;
              }
              break;
            case (MR_Integer) 0:
              check_hlds__recompute_instmap_deltas__recompute_instmap_delta_call_8_p_0(PredId_58, ProcId_59, Args_60, VarTypes_12, InstMap0_13, &InstMapDelta1_22, STATE_VARIABLE_RI_0_112, STATE_VARIABLE_RI_113);
              break;
          }
          GoalExpr_24 = GoalExpr0_16;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Modes_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 3))));
              MR_Word Detism_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 5))) & (MR_Integer) 7);
              MR_Word Vars_154 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 2))));

              switch (RecomputeAtomic_9) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  InstMapDelta1_22 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_17);
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Var_195;
                    MR_Word Var_57;

                    parse_tree__prog_data__determinism_components_3_p_0(Detism_56, &Var_57, &Var_195);
                    succeeded = ((MR_Integer) 0 == Var_195);
                    if (succeeded)
                      hlds__instmap__instmap_delta_init_unreachable_1_p_0(&InstMapDelta1_22);
                    else
                    {
                      MR_Word ModuleInfo_150 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_112, (MR_Integer) 0))));

                      hlds__instmap__instmap_delta_from_mode_list_4_p_0(ModuleInfo_150, Vars_154, Modes_54, &InstMapDelta1_22);
                    }
                  }
                  break;
              }
              GoalExpr_24 = GoalExpr0_16;
              *STATE_VARIABLE_RI_113 = STATE_VARIABLE_RI_0_112;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ExtraArgs_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 5))));
              MR_Word PredId_171 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 2))));
              MR_Integer ProcId_172 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 3))));
              MR_Word Args_173 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 4))));

              switch (RecomputeAtomic_9) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    InstMapDelta1_22 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_17);
                    *STATE_VARIABLE_RI_113 = STATE_VARIABLE_RI_0_112;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word ArgVars_87;
                    MR_Word InstMapDelta0_168;

                    ArgVars_87 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__recompute_instmap_deltas_scalar_common_1[0]), (MR_Word) (&check_hlds__recompute_instmap_deltas_scalar_common_2[1]), Args_173);
                    check_hlds__recompute_instmap_deltas__recompute_instmap_delta_call_8_p_0(PredId_171, ProcId_172, ArgVars_87, VarTypes_12, InstMap0_13, &InstMapDelta0_168, STATE_VARIABLE_RI_0_112, STATE_VARIABLE_RI_113);
                    if ((ExtraArgs_84 == (MR_Word) ((MR_Unsigned) 0U)))
                      InstMapDelta1_22 = InstMapDelta0_168;
                    else
                    {
                      MR_Word OldInstMapDelta_90;
                      MR_Word ExtraArgVars_91;
                      MR_Word ExtraArgsInstMapDelta_92;
                      MR_Word Var_123;

                      OldInstMapDelta_90 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_17);
                      ExtraArgVars_91 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__recompute_instmap_deltas_scalar_common_1[0]), (MR_Word) (&check_hlds__recompute_instmap_deltas_scalar_common_2[2]), ExtraArgs_84);
                      Var_123 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExtraArgVars_91);
                      hlds__instmap__instmap_delta_restrict_3_p_0(Var_123, OldInstMapDelta_90, &ExtraArgsInstMapDelta_92);
                      hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(InstMapDelta0_168, ExtraArgsInstMapDelta_92, (MR_Integer) 0, &InstMapDelta1_22);
                    }
                  }
                  break;
              }
              GoalExpr_24 = GoalExpr0_16;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Conjuncts0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 2))));
              MR_Word Conjuncts_27;

              check_hlds__recompute_instmap_deltas__recompute_instmap_delta_conj_8_p_0(RecomputeAtomic_9, Conjuncts0_26, &Conjuncts_27, VarTypes_12, InstMap0_13, &InstMapDelta1_22, STATE_VARIABLE_RI_0_112, STATE_VARIABLE_RI_113);
              {
                GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_24, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_24, 1) = (MR_Box) ((MR_Unsigned) (ConjType_25));
                MR_hl_field(MR_mktag(3), GoalExpr_24, 2) = ((MR_Box) (Conjuncts_27));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 1))));
              MR_Word Disjuncts_29;

              succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_17, (MR_Integer) 17);
              if (succeeded)
              {
                Disjuncts_29 = Disjuncts0_28;
                InstMapDelta1_22 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_17);
                *STATE_VARIABLE_RI_113 = STATE_VARIABLE_RI_0_112;
              }
              else
              {
                MR_Word NonLocals0_144;

                NonLocals0_144 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_17);
                check_hlds__recompute_instmap_deltas__recompute_instmap_delta_disj_9_p_0(RecomputeAtomic_9, Disjuncts0_28, &Disjuncts_29, VarTypes_12, InstMap0_13, NonLocals0_144, &InstMapDelta1_22, STATE_VARIABLE_RI_0_112, STATE_VARIABLE_RI_113);
              }
              {
                GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_24, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_24, 1) = ((MR_Box) (Disjuncts_29));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 1))));
              MR_Word Det_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 3))));
              MR_Word Cases_21;

              succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_17, (MR_Integer) 17);
              if (succeeded)
              {
                Cases_21 = Cases0_20;
                InstMapDelta1_22 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_17);
                *STATE_VARIABLE_RI_113 = STATE_VARIABLE_RI_0_112;
              }
              else
              {
                MR_Word NonLocals0_23;

                NonLocals0_23 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_17);
                check_hlds__recompute_instmap_deltas__recompute_instmap_delta_switch_10_p_0(RecomputeAtomic_9, Var_18, Cases0_20, &Cases_21, VarTypes_12, InstMap0_13, NonLocals0_23, &InstMapDelta1_22, STATE_VARIABLE_RI_0_112, STATE_VARIABLE_RI_113);
              }
              {
                GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_24, 1) = ((MR_Box) (Var_18));
                MR_hl_field(MR_mktag(3), GoalExpr_24, 2) = (MR_Box) ((MR_Unsigned) (Det_19));
                MR_hl_field(MR_mktag(3), GoalExpr_24, 3) = ((MR_Box) (Cases_21));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 1))));
              MR_Word SubGoal0_148 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 2))));
              MR_Word SubGoal_149;
              MR_Word FGT_50;

              succeeded = ((((MR_tag((MR_Word) Reason_48)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_48, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_48, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_50) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      MR_Word SubGoalInfo_52;

                      SubGoal_149 = SubGoal0_148;
                      SubGoalInfo_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal_149, (MR_Integer) 1))));
                      InstMapDelta1_22 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(SubGoalInfo_52);
                      *STATE_VARIABLE_RI_113 = STATE_VARIABLE_RI_0_112;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.recompute_instmap_deltas.recompute_instmap_delta_1\'/8", (MR_String) "from_ground_term_initial");
                      return;
                    }
                    break;
                  case (MR_Integer) 3:
                    check_hlds__recompute_instmap_deltas__recompute_instmap_delta_1_8_p_0(RecomputeAtomic_9, SubGoal0_148, &SubGoal_149, VarTypes_12, InstMap0_13, &InstMapDelta1_22, STATE_VARIABLE_RI_0_112, STATE_VARIABLE_RI_113);
                    break;
                }
              }
              else
                check_hlds__recompute_instmap_deltas__recompute_instmap_delta_1_8_p_0(RecomputeAtomic_9, SubGoal0_148, &SubGoal_149, VarTypes_12, InstMap0_13, &InstMapDelta1_22, STATE_VARIABLE_RI_0_112, STATE_VARIABLE_RI_113);
              {
                GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_24, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_24, 1) = ((MR_Box) (Reason_48));
                MR_hl_field(MR_mktag(3), GoalExpr_24, 2) = ((MR_Box) (SubGoal_149));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 1))));
              MR_Word Cond0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 2))));
              MR_Word Then0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 3))));
              MR_Word Else0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 4))));
              MR_Word Cond_38;
              MR_Word InstMapDeltaCond_39;
              MR_Word InstMapCond_40;
              MR_Word Then_41;
              MR_Word InstMapDeltaThen_42;
              MR_Word Else_43;
              MR_Word InstMapDeltaElse_44;
              MR_Word InstMapDeltaCondThen_45;
              MR_Word ModuleInfo0_46;
              MR_Word ModuleInfo_47;
              MR_Word STATE_VARIABLE_RI_133_133;
              MR_Word STATE_VARIABLE_RI_134_134;
              MR_Word STATE_VARIABLE_RI_135_135;
              MR_Word NonLocals0_147;
              MR_Word Var_185;

              check_hlds__recompute_instmap_deltas__recompute_instmap_delta_1_8_p_0(RecomputeAtomic_9, Cond0_35, &Cond_38, VarTypes_12, InstMap0_13, &InstMapDeltaCond_39, STATE_VARIABLE_RI_0_112, &STATE_VARIABLE_RI_133_133);
              hlds__instmap__apply_instmap_delta_3_p_0(InstMapDeltaCond_39, InstMap0_13, &InstMapCond_40);
              check_hlds__recompute_instmap_deltas__recompute_instmap_delta_1_8_p_0(RecomputeAtomic_9, Then0_36, &Then_41, VarTypes_12, InstMapCond_40, &InstMapDeltaThen_42, STATE_VARIABLE_RI_133_133, &STATE_VARIABLE_RI_134_134);
              check_hlds__recompute_instmap_deltas__recompute_instmap_delta_1_8_p_0(RecomputeAtomic_9, Else0_37, &Else_43, VarTypes_12, InstMap0_13, &InstMapDeltaElse_44, STATE_VARIABLE_RI_134_134, &STATE_VARIABLE_RI_135_135);
              hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(InstMapDeltaCond_39, InstMapDeltaThen_42, (MR_Integer) 2, &InstMapDeltaCondThen_45);
              NonLocals0_147 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_17);
              ModuleInfo0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_135_135, (MR_Integer) 0))));
              hlds__instmap__merge_instmap_delta_8_p_0(InstMap0_13, NonLocals0_147, VarTypes_12, InstMapDeltaElse_44, InstMapDeltaCondThen_45, &InstMapDelta1_22, ModuleInfo0_46, &ModuleInfo_47);
              Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_135_135, (MR_Integer) 1))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_RI_113 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_47));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_185));
              }
              {
                GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_24, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_24, 1) = ((MR_Box) (Vars_34));
                MR_hl_field(MR_mktag(3), GoalExpr_24, 2) = ((MR_Box) (Cond_38));
                MR_hl_field(MR_mktag(3), GoalExpr_24, 3) = ((MR_Box) (Then_41));
                MR_hl_field(MR_mktag(3), GoalExpr_24, 4) = ((MR_Box) (Else_43));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_16, (MR_Integer) 1))));
              MR_Word ShortHand_105;

              switch (MR_tag((MR_Word) ShortHand0_93)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.recompute_instmap_deltas.recompute_instmap_delta_1\'/8", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_94 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_93, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word Outer_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_93, (MR_Integer) 1))));
                    MR_Word Inner_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_93, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_93, (MR_Integer) 3))));
                    MR_Word MainGoal0_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_93, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_93, (MR_Integer) 5))));
                    MR_Word OrElseInners_100 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_93, (MR_Integer) 6))));
                    MR_Word Goals0_101;
                    MR_Word Goals_102;
                    MR_Word MainGoal_103;
                    MR_Word OrElseGoals_104;
                    MR_Word NonLocals0_174;

                    {
                      Goals0_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Goals0_101, 0) = ((MR_Box) (MainGoal0_98));
                      MR_hl_field(MR_mktag(1), Goals0_101, 1) = ((MR_Box) (OrElseGoals0_99));
                    }
                    NonLocals0_174 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_17);
                    check_hlds__recompute_instmap_deltas__recompute_instmap_delta_disj_9_p_0(RecomputeAtomic_9, Goals0_101, &Goals_102, VarTypes_12, InstMap0_13, NonLocals0_174, &InstMapDelta1_22, STATE_VARIABLE_RI_0_112, STATE_VARIABLE_RI_113);
                    if ((Goals_102 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.recompute_instmap_deltas.recompute_instmap_delta_1\'/8", (MR_String) "Goals = []");
                        return;
                      }
                    else
                    {
                      MainGoal_103 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_102, (MR_Integer) 0))));
                      OrElseGoals_104 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_102, (MR_Integer) 1))));
                    }
                    {
                      ShortHand_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ShortHand_105, 0) = (MR_Box) ((MR_Unsigned) (GoalType_94));
                      MR_hl_field(MR_mktag(1), ShortHand_105, 1) = ((MR_Box) (Outer_95));
                      MR_hl_field(MR_mktag(1), ShortHand_105, 2) = ((MR_Box) (Inner_96));
                      MR_hl_field(MR_mktag(1), ShortHand_105, 3) = ((MR_Box) (MaybeOutputVars_97));
                      MR_hl_field(MR_mktag(1), ShortHand_105, 4) = ((MR_Box) (MainGoal_103));
                      MR_hl_field(MR_mktag(1), ShortHand_105, 5) = ((MR_Box) (OrElseGoals_104));
                      MR_hl_field(MR_mktag(1), ShortHand_105, 6) = ((MR_Box) (OrElseInners_100));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_106 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_93, (MR_Integer) 0))));
                    MR_Word ResultVar_107 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_93, (MR_Integer) 1))));
                    MR_Word SubGoal0_175 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_93, (MR_Integer) 2))));
                    MR_Word SubGoal_176;

                    check_hlds__recompute_instmap_deltas__recompute_instmap_delta_1_8_p_0(RecomputeAtomic_9, SubGoal0_175, &SubGoal_176, VarTypes_12, InstMap0_13, &InstMapDelta1_22, STATE_VARIABLE_RI_0_112, STATE_VARIABLE_RI_113);
                    {
                      ShortHand_105 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ShortHand_105, 0) = ((MR_Box) (MaybeIO_106));
                      MR_hl_field(MR_mktag(2), ShortHand_105, 1) = ((MR_Box) (ResultVar_107));
                      MR_hl_field(MR_mktag(2), ShortHand_105, 2) = ((MR_Box) (SubGoal_176));
                    }
                  }
                  break;
              }
              {
                GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_24, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), GoalExpr_24, 1) = ((MR_Box) (ShortHand_105));
              }
            }
            break;
        }
        break;
    }
    succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(InstMap0_13);
    if (succeeded)
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(InstMapDelta_14);
    else
    {
      MR_Word NonLocals_110;

      NonLocals_110 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_17);
      hlds__instmap__instmap_delta_restrict_3_p_0(NonLocals_110, InstMapDelta1_22, InstMapDelta_14);
    }
    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(*InstMapDelta_14, GoalInfo0_17, &GoalInfo_111);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_111));
    }
  }
}

static void MR_CALL 
check_hlds__recompute_instmap_deltas__recompute_instmap_delta_unify_8_p_0(
  MR_Word Unification_9,
  MR_Word UniMode0_10,
  MR_Word * UniMode_11,
  MR_Word GoalInfo_12,
  MR_Word InstMap_13,
  MR_Word * InstMapDelta_14,
  MR_Word STATE_VARIABLE_RI_0_52,
  MR_Word * STATE_VARIABLE_RI_53)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_52, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) Unification_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_9, (MR_Integer) 0))));
          MR_Word ConsId_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_9, (MR_Integer) 1))));
          MR_Word Args_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_9, (MR_Integer) 2))));
          MR_Word Inst_43;
          MR_Word TypeInfo_68_68;
          MR_Word NonLocals_40;
          MR_Word MaybeInst_42;
          MR_Integer Var_54;
          MR_Word OldInstMapDelta_61;
          MR_Word Var_41;

          NonLocals_40 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_12);
          succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_40, Var_33);
          if (succeeded)
          {
            OldInstMapDelta_61 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_12);
            succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(OldInstMapDelta_61, Var_33, &Var_41);
            succeeded = !(succeeded);
            if (succeeded)
            {
              TypeInfo_68_68 = (MR_Word) (&check_hlds__recompute_instmap_deltas_scalar_common_1[0]);
              Var_54 = mercury__list__length_1_f_0(TypeInfo_68_68, Args_35);
              MaybeInst_42 = check_hlds__recompute_instmap_deltas__cons_id_to_shared_inst_3_f_0(ModuleInfo0_16, ConsId_34, Var_54);
              succeeded = (MaybeInst_42 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                Inst_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInst_42, (MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word InstMapDelta0_44;

            *UniMode_11 = UniMode0_10;
            hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstMapDelta0_44);
            hlds__instmap__instmap_delta_set_var_4_p_0(Var_33, Inst_43, InstMapDelta0_44, InstMapDelta_14);
          }
          else
          {
            *InstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_12);
            *UniMode_11 = UniMode0_10;
          }
          *STATE_VARIABLE_RI_53 = STATE_VARIABLE_RI_0_52;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHSVar_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_9, (MR_Integer) 0))));
          MR_Word RHSVars_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_9, (MR_Integer) 2))));
          MR_Word ArgModes_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_9, (MR_Integer) 3))));
          MR_Word OldInstMapDelta_23;
          MR_Word LHSInitialInst_24;
          MR_Word LHSFinalInst_29;
          MR_Word ModuleInfo_30;
          MR_Word LHSTuple_31;
          MR_Word RHSTuples_32;
          MR_Word Var_60;
          MR_Word DeltaInst_25;

          OldInstMapDelta_23 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_12);
          hlds__instmap__instmap_lookup_var_3_p_0(InstMap_13, LHSVar_17, &LHSInitialInst_24);
          succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(OldInstMapDelta_23, LHSVar_17, &DeltaInst_25);
          if (succeeded)
          {
            MR_Word LHSFinalInstPrime_26;
            MR_Word ModuleInfo1_28;
            MR_Word _Detism_27;

            succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_8_p_0((MR_Integer) 1, LHSInitialInst_24, DeltaInst_25, (MR_Integer) 1, &LHSFinalInstPrime_26, &_Detism_27, ModuleInfo0_16, &ModuleInfo1_28);
            if (succeeded)
            {
              MR_Word Var_66;

              LHSFinalInst_29 = LHSFinalInstPrime_26;
              ModuleInfo_30 = ModuleInfo1_28;
              Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_52, (MR_Integer) 1))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_RI_53 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo1_28));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_66));
              }
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.recompute_instmap_deltas.recompute_instmap_delta_unify\'/8", (MR_String) "abstractly_unify_inst failed");
                return;
              }
          }
          else
          {
            LHSFinalInst_29 = LHSInitialInst_24;
            ModuleInfo_30 = ModuleInfo0_16;
            *STATE_VARIABLE_RI_53 = STATE_VARIABLE_RI_0_52;
          }
          {
            LHSTuple_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), LHSTuple_31, 0) = ((MR_Box) (LHSVar_17));
            MR_hl_field(MR_mktag(0), LHSTuple_31, 1) = ((MR_Box) (LHSInitialInst_24));
            MR_hl_field(MR_mktag(0), LHSTuple_31, 2) = ((MR_Box) (LHSFinalInst_29));
          }
          check_hlds__recompute_instmap_deltas__pair_arg_vars_with_rhs_insts_3_p_0(RHSVars_19, ArgModes_20, &RHSTuples_32);
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (LHSTuple_31));
            MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (RHSTuples_32));
          }
          hlds__instmap__instmap_delta_from_var_init_final_insts_3_p_0(ModuleInfo_30, Var_60, InstMapDelta_14);
          *UniMode_11 = UniMode0_10;
        }
        break;
      case (MR_Integer) 2:
        {
          *InstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_12);
          *UniMode_11 = UniMode0_10;
          *STATE_VARIABLE_RI_53 = STATE_VARIABLE_RI_0_52;
        }
        break;
      case (MR_Integer) 3:
        {
          *InstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_12);
          *UniMode_11 = UniMode0_10;
          *STATE_VARIABLE_RI_53 = STATE_VARIABLE_RI_0_52;
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
check_hlds__recompute_instmap_deltas__cons_id_to_shared_inst_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word ConsId_6,
  MR_Integer NumArgs_7)
{
  {
    MR_Word MaybeInst_8;

    switch (MR_tag((MR_Word) ConsId_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeInst_8 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__recompute_instmap_deltas_scalar_common_3[0]));
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        MaybeInst_8 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__recompute_instmap_deltas_scalar_common_3[0]));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 14:
            MaybeInst_8 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__recompute_instmap_deltas_scalar_common_3[0]));
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            MaybeInst_8 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 4:
            {
              MR_Word PredProcId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 1))));
              MR_Word PredInfo_20;
              MR_Word ProcInfo_21;
              MR_Word PorF_22;
              MR_Word Det_23;
              MR_Word ProcArgModes_24;
              MR_Word Modes_25;
              MR_Word Inst_26;
              MR_Word Var_45;
              MR_Word Var_47;
              MR_Word Var_48;

              Var_45 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(PredProcId_18);
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_5, Var_45, &PredInfo_20, &ProcInfo_21);
              PorF_22 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_20);
              hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_21, &Det_23);
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_21, &ProcArgModes_24);
              mercury__list__det_drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumArgs_7, ProcArgModes_24, &Modes_25);
              {
                Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_48, 0) = (MR_Box) ((MR_Unsigned) (PorF_22));
                MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (Modes_25));
                MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Var_48, 3) = (MR_Box) ((MR_Unsigned) (Det_23));
              }
              Var_47 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_48)));
              {
                Inst_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Inst_26, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Inst_26, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Inst_26, 2) = ((MR_Box) (Var_47));
              }
              {
                MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeInst_8, 0) = ((MR_Box) (Inst_26));
              }
            }
            break;
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            {
              MR_Word Var_52;
              MR_Word Var_55;
              MR_Word Var_56;

              {
                Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (ConsId_6));
                MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
                MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_52, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_52, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), Var_52, 3) = ((MR_Box) (Var_55));
              }
              {
                MaybeInst_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeInst_8, 0) = ((MR_Box) (Var_52));
              }
            }
            break;
          case (MR_Integer) 9:
            mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.recompute_instmap_deltas.cons_id_to_shared_inst\'/3", (MR_String) "impl_defined_const");
            break;
        }
        break;
    }
    return MaybeInst_8;
  }
}

static void MR_CALL 
check_hlds__recompute_instmap_deltas__pair_arg_vars_with_rhs_insts_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.recompute_instmap_deltas.pair_arg_vars_with_rhs_insts\'/3", (MR_String) "mismatched list lengths");
        return;
      }
  else
  {
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.recompute_instmap_deltas.pair_arg_vars_with_rhs_insts\'/3", (MR_String) "mismatched list lengths");
        return;
      }
    else
    {
      MR_Word UnifyMode_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word UnifyModes_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Tuple_18;
      MR_Word Tuples_19;
      MR_Word InitRHS_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_16, (MR_Integer) 2))));
      MR_Word FinalRHS_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_16, (MR_Integer) 3))));

      {
        Tuple_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Tuple_18, 0) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(0), Tuple_18, 1) = ((MR_Box) (InitRHS_22));
        MR_hl_field(MR_mktag(0), Tuple_18, 2) = ((MR_Box) (FinalRHS_23));
      }
      check_hlds__recompute_instmap_deltas__pair_arg_vars_with_rhs_insts_3_p_0(Var_24, UnifyModes_17, &Tuples_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Tuple_18));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Tuples_19));
      }
    }
  }
}

static void MR_CALL 
check_hlds__recompute_instmap_deltas__recompute_instmap_delta_call_8_p_0(
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word Args_11,
  MR_Word VarTypes_12,
  MR_Word InstMap_13,
  MR_Word * InstMapDelta_14,
  MR_Word STATE_VARIABLE_RI_0_34,
  MR_Word * STATE_VARIABLE_RI_35)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_34, (MR_Integer) 0))));
    MR_Word ProcInfo_18;
    MR_Word Detism_19;
    MR_Word Var_17;
    MR_Word Var_52;
    MR_Word Var_20;

    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo0_16, PredId_9, ProcId_10, &Var_17, &ProcInfo_18);
    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_18, &Detism_19);
    parse_tree__prog_data__determinism_components_3_p_0(Detism_19, &Var_20, &Var_52);
    succeeded = ((MR_Integer) 0 == Var_52);
    if (succeeded)
    {
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(InstMapDelta_14);
      *STATE_VARIABLE_RI_35 = STATE_VARIABLE_RI_0_34;
    }
    else
    {
      MR_Word ArgModes0_21;
      MR_Word ProcInstVarSet_22;
      MR_Word InstVarSet0_23;
      MR_Word InstVarSet_24;
      MR_Word ArgModes1_25;
      MR_Word InitialInsts_26;
      MR_Word ArgModes_31;
      MR_Word ModuleInfo_32;
      MR_Word STATE_VARIABLE_RI_37_37;
      MR_Word Var_44;

      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_18, &ArgModes0_21);
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_18, &ProcInstVarSet_22);
      InstVarSet0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_34, (MR_Integer) 1))));
      parse_tree__prog_mode__rename_apart_inst_vars_5_p_0(InstVarSet0_23, ProcInstVarSet_22, &InstVarSet_24, ArgModes0_21, &ArgModes1_25);
      Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_0_34, (MR_Integer) 0))));
      {
        STATE_VARIABLE_RI_37_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_37_37, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_37_37, 1) = ((MR_Box) (InstVarSet_24));
      }
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo0_16, ArgModes1_25, &InitialInsts_26);
      succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap_13);
      if (succeeded)
      {
        MR_Word InstVarSub0_27;
        MR_Word InstVarSub_28;
        MR_Word ModuleInfo1_29;
        MR_Word ArgModes2_30;
        MR_Word Var_47;

        mercury__map__init_1_p_0((MR_Word) (&check_hlds__recompute_instmap_deltas_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &InstVarSub0_27);
        check_hlds__recompute_instmap_deltas__compute_inst_var_sub_8_p_0(Args_11, VarTypes_12, InstMap_13, InitialInsts_26, InstVarSub0_27, &InstVarSub_28, ModuleInfo0_16, &ModuleInfo1_29);
        parse_tree__prog_mode__mode_list_apply_substitution_3_p_0(InstVarSub_28, ArgModes1_25, &ArgModes2_30);
        check_hlds__recompute_instmap_deltas__recompute_instmap_delta_call_args_6_p_0(Args_11, InstMap_13, ArgModes2_30, &ArgModes_31, ModuleInfo1_29, &ModuleInfo_32);
        Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RI_37_37, (MR_Integer) 1))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_RI_35 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_32));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_47));
        }
      }
      else
      {
        MR_Integer NumArgs_33;

        mercury__list__length_2_p_0((MR_Word) (&check_hlds__recompute_instmap_deltas_scalar_common_1[0]), Args_11, &NumArgs_33);
        mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumArgs_33, ((MR_Box) (&check_hlds__recompute_instmap_deltas_scalar_common_1[3])), &ArgModes_31);
        ModuleInfo_32 = ModuleInfo0_16;
        *STATE_VARIABLE_RI_35 = STATE_VARIABLE_RI_37_37;
      }
      hlds__instmap__instmap_delta_from_mode_list_4_p_0(ModuleInfo_32, Args_11, ArgModes_31, InstMapDelta_14);
    }
  }
}

static void MR_CALL 
check_hlds__recompute_instmap_deltas__recompute_instmap_delta_call_args_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_ModuleInfo_6 = STATE_VARIABLE_ModuleInfo_0_5;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.recompute_instmap_deltas.recompute_instmap_delta_call_args\'/6", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.recompute_instmap_deltas.recompute_instmap_delta_call_args\'/6", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word Mode0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Modes0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word Mode_34;
        MR_Word Modes_35;
        MR_Word ArgInst0_37;
        MR_Word FinalInst_39;
        MR_Word STATE_VARIABLE_ModuleInfo_49_49;
        MR_Word Var_38;
        MR_Word UnifyInst_40;
        MR_Word STATE_VARIABLE_ModuleInfo_46_46;
        MR_Word Var_41;

        hlds__instmap__instmap_lookup_var_3_p_0(InstMap_2, Var_52, &ArgInst0_37);
        check_hlds__mode_util__mode_get_insts_4_p_0(STATE_VARIABLE_ModuleInfo_0_5, Mode0_32, &Var_38, &FinalInst_39);
        succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_8_p_0((MR_Integer) 1, ArgInst0_37, FinalInst_39, (MR_Integer) 1, &UnifyInst_40, &Var_41, STATE_VARIABLE_ModuleInfo_0_5, &STATE_VARIABLE_ModuleInfo_46_46);
        if (succeeded)
        {
          STATE_VARIABLE_ModuleInfo_49_49 = STATE_VARIABLE_ModuleInfo_46_46;
          {
            Mode_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Mode_34, 0) = ((MR_Box) (ArgInst0_37));
            MR_hl_field(MR_mktag(0), Mode_34, 1) = ((MR_Box) (UnifyInst_40));
          }
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.recompute_instmap_deltas.recompute_instmap_delta_call_args\'/6", (MR_String) "unify_inst failed");
            return;
          }
        check_hlds__recompute_instmap_deltas__recompute_instmap_delta_call_args_6_p_0(Var_51, InstMap_2, Modes0_33, &Modes_35, STATE_VARIABLE_ModuleInfo_49_49, STATE_VARIABLE_ModuleInfo_6);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Mode_34));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Modes_35));
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__recompute_instmap_deltas__compute_inst_var_sub_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarTypes_2,
  MR_Word InstMap_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Sub_0_5,
  MR_Word * STATE_VARIABLE_Sub_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
        *STATE_VARIABLE_Sub_6 = STATE_VARIABLE_Sub_0_5;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.recompute_instmap_deltas.compute_inst_var_sub\'/8", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.recompute_instmap_deltas.compute_inst_var_sub\'/8", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word Inst_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
        MR_Word Insts_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
        MR_Word ArgInst_51;
        MR_Word Type_52;
        MR_Word STATE_VARIABLE_ModuleInfo_59_59;
        MR_Word STATE_VARIABLE_Sub_60_60;
        MR_Word STATE_VARIABLE_ModuleInfo_57_57;
        MR_Word STATE_VARIABLE_Sub_58_58;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_Sub_0_5;
        MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_7;

        hlds__instmap__instmap_lookup_var_3_p_0(InstMap_3, Var_64, &ArgInst_51);
        hlds__vartypes__lookup_var_type_3_p_0(VarTypes_2, Var_64, &Type_52);
        succeeded = check_hlds__inst_match__inst_matches_initial_sub_7_p_0(Type_52, ArgInst_51, Inst_45, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_57_57, STATE_VARIABLE_Sub_0_5, &STATE_VARIABLE_Sub_58_58);
        if (succeeded)
        {
          STATE_VARIABLE_ModuleInfo_59_59 = STATE_VARIABLE_ModuleInfo_57_57;
          STATE_VARIABLE_Sub_60_60 = STATE_VARIABLE_Sub_58_58;
        }
        else
        {
          STATE_VARIABLE_ModuleInfo_59_59 = STATE_VARIABLE_ModuleInfo_0_7;
          STATE_VARIABLE_Sub_60_60 = STATE_VARIABLE_Sub_0_5;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_63;
        next_value_of_HeadVar__4_4 = Insts_46;
        next_value_of_STATE_VARIABLE_Sub_0_5 = STATE_VARIABLE_Sub_60_60;
        next_value_of_STATE_VARIABLE_ModuleInfo_0_7 = STATE_VARIABLE_ModuleInfo_59_59;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Sub_0_5 = next_value_of_STATE_VARIABLE_Sub_0_5;
        STATE_VARIABLE_ModuleInfo_0_7 = next_value_of_STATE_VARIABLE_ModuleInfo_0_7;
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__recompute_instmap_deltas____Unify____recompute_atomic_instmap_deltas_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__recompute_instmap_deltas____Unify____recompute_atomic_instmap_deltas_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__recompute_instmap_deltas____Compare____recompute_atomic_instmap_deltas_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__recompute_instmap_deltas____Compare____recompute_atomic_instmap_deltas_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__recompute_instmap_deltas____Unify____recompute_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__recompute_instmap_deltas____Unify____recompute_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__recompute_instmap_deltas____Compare____recompute_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__recompute_instmap_deltas____Compare____recompute_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__recompute_instmap_deltas__init(void)
{
}

void mercury__check_hlds__recompute_instmap_deltas__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__type_ctor_info_recompute_atomic_instmap_deltas_0);
	MR_register_type_ctor_info(&check_hlds__recompute_instmap_deltas__check_hlds__recompute_instmap_deltas__type_ctor_info_recompute_info_0);
}

void mercury__check_hlds__recompute_instmap_deltas__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__recompute_instmap_deltas__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.recompute_instmap_deltas.
