/*
** Automatically generated from `propagate.m'
** by the Mercury compiler,
** version 2018-10-09
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


// :- module propagate.
// :- implementation.

/*
INIT mercury__propagate__init
ENDINIT
*/

#include "propagate.mih"


#include "prof_info.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "float.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 propagate__digraph__pti_digraph_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 propagate__digraph__pti_digraph_key_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 propagate__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 propagate__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_prof_info__type_ctor_info_prof_node_0;

static const MR_FA_TypeInfo_Struct2 propagate__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 propagate__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 propagate__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo propagate__propagate__field_types_cycle_info_0_0[2];

static const MR_ConstString propagate__propagate__field_names_cycle_info_0_0[2];

static const MR_DuFunctorDesc propagate__propagate__du_functor_desc_cycle_info_0_0;

static const MR_DuFunctorDescPtr propagate__propagate__du_stag_ordered_cycle_info_0_0[1];

static const MR_DuPtagLayout propagate__propagate__du_ptag_ordered_cycle_info_0[1];

static const MR_DuFunctorDescPtr propagate__propagate__du_name_ordered_cycle_info_0[1];

static const MR_Integer propagate__propagate__functor_number_map_cycle_info_0[1];

static void MR_CALL 
propagate__IntroducedFrom__pred__identify_cycles_2__107__1_3_p_0(
  MR_Word InvG_3,
  MR_Word HeadVar__2_60,
  MR_String * HeadVar__3_61);

static void MR_CALL 
propagate____Compare____pred_to_cycle_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
propagate____Unify____pred_to_cycle_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
propagate____Compare____cycle_to_preds_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
propagate____Unify____cycle_to_preds_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
propagate____Compare____cycle_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
propagate____Unify____cycle_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
propagate__accumulate_propagated_counts_5_p_0(
  MR_Word ADMap_6,
  MR_Word PNMap_7,
  MR_String Pred_8,
  MR_Float STATE_VARIABLE_Sum_0_12,
  MR_Float * STATE_VARIABLE_Sum_13);

static void MR_CALL 
propagate__accumulate_self_counts_5_p_0(
  MR_Word ADMap_6,
  MR_Word PNMap_7,
  MR_String Pred_8,
  MR_Integer STATE_VARIABLE_Sum_0_12,
  MR_Integer * STATE_VARIABLE_Sum_13);

static void MR_CALL 
propagate__propagate_counts_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CycleInfo_2,
  MR_Word AddrDeclMap_3,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_4,
  MR_Word * STATE_VARIABLE_ProfNodeMap_5);

static void MR_CALL 
propagate__process_cycle_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
propagate__process_cycle_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
propagate__process_cycle_5_p_0(
  MR_Word Preds_6,
  MR_Integer Cycle_7,
  MR_Word AddrMap_8,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_21,
  MR_Word * STATE_VARIABLE_ProfNodeMap_22);

static void MR_CALL 
propagate__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_121_99_108_101_95_108_105_115_116_95_95_91_50_44_32_51_93_95_48_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__4_4);

static MR_Word MR_CALL 
propagate__assoc_list_to_pred_info_list_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
propagate__build_parent_map_2_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CliqueList_2,
  MR_Word AddrMap_3,
  MR_Word ProfNodeMap_4,
  MR_Integer STATE_VARIABLE_TotalCalls_0_5,
  MR_Integer * STATE_VARIABLE_TotalCalls_6,
  MR_Integer STATE_VARIABLE_SelfCalls_0_7,
  MR_Integer * STATE_VARIABLE_SelfCalls_8,
  MR_Word STATE_VARIABLE_ParentMap_0_9,
  MR_Word * STATE_VARIABLE_ParentMap_10);

static void MR_CALL 
propagate__add_to_parent_map_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CliqueList_2,
  MR_Integer STATE_VARIABLE_TotalCalls_0_3,
  MR_Integer * STATE_VARIABLE_TotalCalls_4,
  MR_Integer STATE_VARIABLE_SelfCalls_0_5,
  MR_Integer * STATE_VARIABLE_SelfCalls_6,
  MR_Word STATE_VARIABLE_ParentMap_0_7,
  MR_Word * STATE_VARIABLE_ParentMap_8);

static void MR_CALL 
propagate__propagate_counts_3_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Float TotalCounts_2,
  MR_Float TotalCalls_3,
  MR_Word AddrMap_4,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_5,
  MR_Word * STATE_VARIABLE_ProfNodeMap_6);

static void MR_CALL 
propagate__update_cycles_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word AddrDecl_2,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_3,
  MR_Word * STATE_VARIABLE_ProfNodeMap_4);

static void MR_CALL 
propagate__update_cycles_3_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CycleNum_2,
  MR_Word AddrDecl_3,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_4,
  MR_Word * STATE_VARIABLE_ProfNodeMap_5);

static void MR_CALL 
propagate__identify_cycles_2_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
propagate__identify_cycles_2_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CycleNum0_2,
  MR_Word InvG_3,
  MR_Word Visit0_4,
  MR_Word STATE_VARIABLE_ATSort_0_5,
  MR_Word * STATE_VARIABLE_ATSort_6,
  MR_Word STATE_VARIABLE_PredToCycleMap_0_7,
  MR_Word * STATE_VARIABLE_PredToCycleMap_8,
  MR_Word STATE_VARIABLE_CycleToPredsMap_0_9,
  MR_Word * STATE_VARIABLE_CycleToPredsMap_10);

static void MR_CALL 
propagate__add_to_cycle_map_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Cycle_2,
  MR_Word STATE_VARIABLE_PredToCycleMap_0_3,
  MR_Word * STATE_VARIABLE_PredToCycleMap_4,
  MR_Word STATE_VARIABLE_CycleToPredsMap_0_5,
  MR_Word * STATE_VARIABLE_CycleToPredsMap_6);

static MR_bool MR_CALL 
propagate____Unify____cycle_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
propagate____Compare____cycle_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
propagate____Unify____cycle_to_preds_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
propagate____Compare____cycle_to_preds_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
propagate____Unify____pred_to_cycle_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
propagate____Compare____pred_to_cycle_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box propagate_scalar_common_1[2][2];

static /* final */ const MR_Box propagate_scalar_common_2[2][3];

static /* final */ const MR_Box propagate_scalar_common_3[1][6];

static /* final */ const MR_Box propagate_scalar_common_4[1][1];

static /* final */ const MR_Box propagate_scalar_common_5[2][8];




static /* final */ const MR_Box propagate_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box propagate_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&propagate_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box propagate_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&propagate__digraph__pti_digraph_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&propagate__digraph__pti_digraph_key_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box propagate_scalar_common_4[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box propagate_scalar_common_5[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&propagate__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&propagate__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_prof_info__type_ctor_info_prof_node_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&propagate__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&propagate__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_prof_info__type_ctor_info_prof_node_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 propagate__digraph__pti_digraph_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 propagate__digraph__pti_digraph_key_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 propagate__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 propagate__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_prof_info__type_ctor_info_prof_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&prof_info__prof_info__type_ctor_info_prof_node_0)
  }
};

static const MR_FA_TypeInfo_Struct2 propagate__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 propagate__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 propagate__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&propagate__list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo propagate__propagate__field_types_cycle_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&propagate__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&propagate__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString propagate__propagate__field_names_cycle_info_0_0[2] = {
  (MR_String) "pred_to_cycle_map",
  (MR_String) "cycle_to_preds_map"
};

static const MR_DuFunctorDesc propagate__propagate__du_functor_desc_cycle_info_0_0 = {
  (MR_String) "cycle_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  propagate__propagate__field_types_cycle_info_0_0,
  propagate__propagate__field_names_cycle_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr propagate__propagate__du_stag_ordered_cycle_info_0_0[1] = {
  &propagate__propagate__du_functor_desc_cycle_info_0_0
};

static const MR_DuPtagLayout propagate__propagate__du_ptag_ordered_cycle_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    propagate__propagate__du_stag_ordered_cycle_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr propagate__propagate__du_name_ordered_cycle_info_0[1] = {
  &propagate__propagate__du_functor_desc_cycle_info_0_0
};

static const MR_Integer propagate__propagate__functor_number_map_cycle_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct propagate__propagate__type_ctor_info_cycle_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (propagate____Unify____cycle_info_0_0_10001)),
  ((MR_Box) (propagate____Compare____cycle_info_0_0_10001)),
  (MR_String) "propagate",
  (MR_String) "cycle_info",
  {     propagate__propagate__du_name_ordered_cycle_info_0 },
  {     propagate__propagate__du_ptag_ordered_cycle_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  propagate__propagate__functor_number_map_cycle_info_0
};

const MR_TypeCtorInfo_Struct propagate__propagate__type_ctor_info_cycle_to_preds_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (propagate____Unify____cycle_to_preds_map_0_0_10001)),
  ((MR_Box) (propagate____Compare____cycle_to_preds_map_0_0_10001)),
  (MR_String) "propagate",
  (MR_String) "cycle_to_preds_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&propagate__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct propagate__propagate__type_ctor_info_pred_to_cycle_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (propagate____Unify____pred_to_cycle_map_0_0_10001)),
  ((MR_Box) (propagate____Compare____pred_to_cycle_map_0_0_10001)),
  (MR_String) "propagate",
  (MR_String) "pred_to_cycle_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&propagate__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static void MR_CALL 
propagate__IntroducedFrom__pred__identify_cycles_2__107__1_3_p_0(
  MR_Word InvG_3,
  MR_Word HeadVar__2_60,
  MR_String * HeadVar__3_61)
{
  {
    MR_Box conv0_HeadVar__3_61;

    mercury__digraph__lookup_vertex_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InvG_3, HeadVar__2_60, &conv0_HeadVar__3_61);
    *HeadVar__3_61 = ((MR_String) (conv0_HeadVar__3_61));
  }
}

static void MR_CALL 
propagate____Compare____pred_to_cycle_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&propagate_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
propagate____Unify____pred_to_cycle_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&propagate_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
propagate____Compare____cycle_to_preds_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&propagate_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
propagate____Unify____cycle_to_preds_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&propagate_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
propagate____Compare____cycle_info_0_0(
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

      mercury__builtin__compare_3_p_0((MR_Word) (&propagate_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) (&propagate_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
}

static MR_bool MR_CALL 
propagate____Unify____cycle_info_0_0(
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&propagate_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&propagate_scalar_common_2[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
propagate__accumulate_propagated_counts_5_p_0(
  MR_Word ADMap_6,
  MR_Word PNMap_7,
  MR_String Pred_8,
  MR_Float STATE_VARIABLE_Sum_0_12,
  MR_Float * STATE_VARIABLE_Sum_13)
{
  {
    MR_Word ProfNode_10;
    MR_Float PropCount_11;

    prof_info__get_prof_node_4_p_0(Pred_8, ADMap_6, PNMap_7, &ProfNode_10);
    prof_info__prof_node_get_propagated_counts_2_p_0(ProfNode_10, &PropCount_11);
    *STATE_VARIABLE_Sum_13 = (STATE_VARIABLE_Sum_0_12 + PropCount_11);
  }
}

static void MR_CALL 
propagate__accumulate_self_counts_5_p_0(
  MR_Word ADMap_6,
  MR_Word PNMap_7,
  MR_String Pred_8,
  MR_Integer STATE_VARIABLE_Sum_0_12,
  MR_Integer * STATE_VARIABLE_Sum_13)
{
  {
    MR_Word ProfNode_10;
    MR_Integer InitCount_11;

    prof_info__get_prof_node_4_p_0(Pred_8, ADMap_6, PNMap_7, &ProfNode_10);
    prof_info__prof_node_get_initial_counts_2_p_0(ProfNode_10, &InitCount_11);
    *STATE_VARIABLE_Sum_13 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Sum_0_12 + (MR_Unsigned) InitCount_11);
  }
}

void MR_CALL 
propagate__propagate_counts_5_p_0(
  MR_Word CallGraph_6,
  MR_Word STATE_VARIABLE_Prof_0_15,
  MR_Word * STATE_VARIABLE_Prof_16)
{
  {
    MR_Word AddrDeclMap_9;
    MR_Word ProfNodeMap0_10;
    MR_Word ATSort_11;
    MR_Word CycleInfo_12;
    MR_Word ProfNodeMap1_13;
    MR_Word ProfNodeMap_14;
    MR_Word Var_19;
    MR_Word STATE_VARIABLE_Prof_20_20;
    MR_Word PredToCycleMap_25;
    MR_Word CycleToPredsMap_26;
    MR_Word DfsRev_27;
    MR_Word InvG_28;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word AssocList_42;

    prof_info__prof_get_addrdeclmap_2_p_0(STATE_VARIABLE_Prof_0_15, &AddrDeclMap_9);
    prof_info__prof_get_profnodemap_2_p_0(STATE_VARIABLE_Prof_0_15, &ProfNodeMap0_10);
    mercury__digraph__dfsrev_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CallGraph_6, &DfsRev_27);
    mercury__digraph__inverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CallGraph_6, &InvG_28);
    Var_30 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&propagate_scalar_common_1[0]));
    Var_32 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
    Var_33 = mercury__multi_map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    propagate__identify_cycles_2_10_p_0(DfsRev_27, (MR_Integer) 1, InvG_28, Var_30, (MR_Word) ((MR_Unsigned) 0U), &ATSort_11, Var_32, &PredToCycleMap_25, Var_33, &CycleToPredsMap_26);
    {
      CycleInfo_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CycleInfo_12, 0) = ((MR_Box) (PredToCycleMap_25));
      MR_hl_field(MR_mktag(0), CycleInfo_12, 1) = ((MR_Box) (CycleToPredsMap_26));
    }
    AssocList_42 = mercury__multi_map__to_assoc_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CycleToPredsMap_26);
    propagate__update_cycles_2_4_p_0(AssocList_42, AddrDeclMap_9, ProfNodeMap0_10, &ProfNodeMap1_13);
    propagate__propagate_counts_2_5_p_0(ATSort_11, CycleInfo_12, AddrDeclMap_9, ProfNodeMap1_13, &ProfNodeMap_14);
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CycleInfo_12, (MR_Integer) 0))));
    prof_info__prof_set_cyclemap_3_p_0(Var_19, STATE_VARIABLE_Prof_0_15, &STATE_VARIABLE_Prof_20_20);
    prof_info__prof_set_profnodemap_3_p_0(ProfNodeMap_14, STATE_VARIABLE_Prof_20_20, STATE_VARIABLE_Prof_16);
  }
}

static void MR_CALL 
propagate__propagate_counts_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CycleInfo_2,
  MR_Word AddrDeclMap_3,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_4,
  MR_Word * STATE_VARIABLE_ProfNodeMap_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ProfNodeMap_5 = STATE_VARIABLE_ProfNodeMap_0_4;
    else
    {
      MR_String Pred_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Preds_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer Cycle_16;
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CycleInfo_2, (MR_Integer) 0))));
      MR_Box conv0_Cycle_16;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_28, ((MR_Box) (Pred_11)), &conv0_Cycle_16);
      if (succeeded)
      {
        Cycle_16 = ((MR_Integer) (conv0_Cycle_16));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word CyclePreds_17;
        MR_Integer Length_18;
        MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CycleInfo_2, (MR_Integer) 1))));
        MR_Word NewPreds_19;
        MR_Integer Var_30;

        mercury__multi_map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_29, ((MR_Box) (Cycle_16)), &CyclePreds_17);
        mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CyclePreds_17, &Length_18);
        Var_30 = (MR_Integer) ((MR_Unsigned) Length_18 - (MR_Unsigned) (MR_Integer) 1);
        succeeded = mercury__list__drop_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_30, Preds_12, &NewPreds_19);
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_ProfNodeMap_32_32;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_STATE_VARIABLE_ProfNodeMap_0_4;

          propagate__process_cycle_5_p_0(CyclePreds_17, Cycle_16, AddrDeclMap_3, STATE_VARIABLE_ProfNodeMap_0_4, &STATE_VARIABLE_ProfNodeMap_32_32);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = NewPreds_19;
          next_value_of_STATE_VARIABLE_ProfNodeMap_0_4 = STATE_VARIABLE_ProfNodeMap_32_32;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_ProfNodeMap_0_4 = next_value_of_STATE_VARIABLE_ProfNodeMap_0_4;
          continue;
        }
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "propagate", (MR_String) "predicate \140propagate.propagate_counts_2\'/5", (MR_String) "list_drop failed\n");
            return;
          }
        }
      }
      else
      {
        MR_Word ProfNode_20;
        MR_Integer InitCounts_21;
        MR_Float PropCounts_22;
        MR_Word ParentList_23;
        MR_Integer TotalCalls_24;
        MR_Float TotalCounts_25;
        MR_Float Var_37;
        MR_Float Var_38;
        MR_Word STATE_VARIABLE_ProfNodeMap_39_39;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_STATE_VARIABLE_ProfNodeMap_0_4;

        prof_info__get_prof_node_4_p_0(Pred_11, AddrDeclMap_3, STATE_VARIABLE_ProfNodeMap_0_4, &ProfNode_20);
        prof_info__prof_node_get_initial_counts_2_p_0(ProfNode_20, &InitCounts_21);
        prof_info__prof_node_get_propagated_counts_2_p_0(ProfNode_20, &PropCounts_22);
        prof_info__prof_node_get_parent_list_2_p_0(ProfNode_20, &ParentList_23);
        prof_info__prof_node_get_total_calls_2_p_0(ProfNode_20, &TotalCalls_24);
        Var_37 = mercury__float__float_1_f_0(InitCounts_21);
        TotalCounts_25 = (Var_37 + PropCounts_22);
        Var_38 = mercury__float__float_1_f_0(TotalCalls_24);
        propagate__propagate_counts_3_6_p_0(ParentList_23, TotalCounts_25, Var_38, AddrDeclMap_3, STATE_VARIABLE_ProfNodeMap_0_4, &STATE_VARIABLE_ProfNodeMap_39_39);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Preds_12;
        next_value_of_STATE_VARIABLE_ProfNodeMap_0_4 = STATE_VARIABLE_ProfNodeMap_39_39;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_ProfNodeMap_0_4 = next_value_of_STATE_VARIABLE_ProfNodeMap_0_4;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
propagate__process_cycle_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Float conv2_STATE_VARIABLE_Sum_13;

    propagate__accumulate_propagated_counts_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), MR_unbox_float(wrapper_arg_2), &conv2_STATE_VARIABLE_Sum_13);
    *wrapper_arg_3 = MR_box_float(conv2_STATE_VARIABLE_Sum_13);
  }
}

static void MR_CALL 
propagate__process_cycle_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_Sum_13;

    propagate__accumulate_self_counts_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Sum_13);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Sum_13));
  }
}

static void MR_CALL 
propagate__process_cycle_5_p_0(
  MR_Word Preds_6,
  MR_Integer Cycle_7,
  MR_Word AddrMap_8,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_21,
  MR_Word * STATE_VARIABLE_ProfNodeMap_22)
{
  {
    MR_Integer Total_10;
    MR_Integer Recursive_11;
    MR_Word ParentList_12;
    MR_String NameStr_13;
    MR_Integer SelfCounts_14;
    MR_Float PropCounts_15;
    MR_Word CycleList_16;
    MR_Word ProfNode_17;
    MR_Integer Address_18;
    MR_Float TotalCalls_19;
    MR_Float TotalCounts_20;
    MR_Word STATE_VARIABLE_ProfNodeMap_28_28;
    MR_Float Var_29;
    MR_String Var_34;
    MR_String Var_41;
    MR_Word ParentMap_49;
    MR_Word ParentAssocList_50;
    MR_Word Var_74;
    MR_Word Var_85;
    MR_String P_132;
    MR_Word Ps_133;
    MR_Word CycleList0_137;
    MR_Word PredInfo_138;
    MR_Box conv1_SelfCounts_14;
    MR_Box conv3_PropCounts_15;

    if ((Preds_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "propagate", (MR_String) "predicate \140propagate.build_parent_map\'/6", (MR_String) "empty cycle list\n");
        return;
      }
    }
    else
    {
      MR_Word Var_64;
      MR_String C_104;
      MR_Word Cs_105;
      MR_Word ProfNode_112;
      MR_Word ParentList_113;
      MR_Integer TotalCalls1_114;
      MR_Integer SelfCalls1_115;
      MR_Word STATE_VARIABLE_ParentMap_43_124;
      MR_Integer STATE_VARIABLE_TotalCalls_44_125;
      MR_Integer STATE_VARIABLE_SelfCalls_45_126;

      Var_64 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
      C_104 = ((MR_String) ((MR_hl_field(MR_mktag(1), Preds_6, (MR_Integer) 0))));
      Cs_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Preds_6, (MR_Integer) 1))));
      prof_info__get_prof_node_4_p_0(C_104, AddrMap_8, STATE_VARIABLE_ProfNodeMap_0_21, &ProfNode_112);
      prof_info__prof_node_get_parent_list_2_p_0(ProfNode_112, &ParentList_113);
      propagate__add_to_parent_map_8_p_0(ParentList_113, Preds_6, (MR_Integer) 0, &TotalCalls1_114, (MR_Integer) 0, &SelfCalls1_115, Var_64, &STATE_VARIABLE_ParentMap_43_124);
      STATE_VARIABLE_TotalCalls_44_125 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 0 + (MR_Unsigned) TotalCalls1_114);
      STATE_VARIABLE_SelfCalls_45_126 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 0 + (MR_Unsigned) SelfCalls1_115);
      propagate__build_parent_map_2_10_p_0(Cs_105, Preds_6, AddrMap_8, STATE_VARIABLE_ProfNodeMap_0_21, STATE_VARIABLE_TotalCalls_44_125, &Total_10, STATE_VARIABLE_SelfCalls_45_126, &Recursive_11, STATE_VARIABLE_ParentMap_43_124, &ParentMap_49);
    }
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ParentMap_49, &ParentAssocList_50);
    ParentList_12 = propagate__assoc_list_to_pred_info_list_1_f_0(ParentAssocList_50);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&propagate_scalar_common_4[0]), Cycle_7, &Var_34);
    Var_41 = mercury__string__f_43_43_2_f_0(Var_34, (MR_String) " as a whole >");
    NameStr_13 = mercury__string__f_43_43_2_f_0((MR_String) "< cycle ", Var_41);
    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&propagate_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (propagate__process_cycle_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (AddrMap_8));
      MR_hl_field(MR_mktag(0), Var_74, 4) = ((MR_Box) (STATE_VARIABLE_ProfNodeMap_0_21));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_74, Preds_6, ((MR_Box) ((MR_Integer) 0)), &conv1_SelfCounts_14);
    SelfCounts_14 = ((MR_Integer) (conv1_SelfCounts_14));
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&propagate_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (propagate__process_cycle_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (AddrMap_8));
      MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) (STATE_VARIABLE_ProfNodeMap_0_21));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), Var_85, Preds_6, MR_box_float((MR_Float) 0.0000000000000000), &conv3_PropCounts_15);
    PropCounts_15 = MR_unbox_float(conv3_PropCounts_15);
    P_132 = ((MR_String) ((MR_hl_field(MR_mktag(1), Preds_6, (MR_Integer) 0))));
    Ps_133 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Preds_6, (MR_Integer) 1))));
    propagate__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_121_99_108_101_95_108_105_115_116_95_95_91_50_44_32_51_93_95_48_4_p_0(Ps_133, &CycleList0_137);
    prof_info__pred_info_init_3_p_0(P_132, (MR_Integer) 0, &PredInfo_138);
    {
      CycleList_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CycleList_16, 0) = ((MR_Box) (PredInfo_138));
      MR_hl_field(MR_mktag(1), CycleList_16, 1) = ((MR_Box) (CycleList0_137));
    }
    ProfNode_17 = prof_info__prof_node_init_cycle_7_f_0(NameStr_13, (MR_Integer) 0, SelfCounts_14, PropCounts_15, CycleList_16, Total_10, Recursive_11);
    Address_18 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 0 - (MR_Unsigned) Cycle_7);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), Address_18, ((MR_Box) (ProfNode_17)), STATE_VARIABLE_ProfNodeMap_0_21, &STATE_VARIABLE_ProfNodeMap_28_28);
    TotalCalls_19 = mercury__float__float_1_f_0(Total_10);
    Var_29 = mercury__float__float_1_f_0(SelfCounts_14);
    TotalCounts_20 = (Var_29 + PropCounts_15);
    propagate__propagate_counts_3_6_p_0(ParentList_12, TotalCounts_20, TotalCalls_19, AddrMap_8, STATE_VARIABLE_ProfNodeMap_28_28, STATE_VARIABLE_ProfNodeMap_22);
  }
}

static void MR_CALL 
propagate__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_121_99_108_101_95_108_105_115_116_95_95_91_50_44_32_51_93_95_48_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String P_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Ps_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word CycleList0_12;
    MR_Word PredInfo_13;

    propagate__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_121_99_108_101_95_108_105_115_116_95_95_91_50_44_32_51_93_95_48_4_p_0(Ps_8, &CycleList0_12);
    prof_info__pred_info_init_3_p_0(P_7, (MR_Integer) 0, &PredInfo_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredInfo_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CycleList0_12));
    }
  }
}

static MR_Word MR_CALL 
propagate__assoc_list_to_pred_info_list_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String S_3;
      MR_Integer I_4;
      MR_Word Xs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word List0_7;
      MR_Word PredInfo_8;
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      S_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
      I_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
      List0_7 = propagate__assoc_list_to_pred_info_list_1_f_0(Xs_5);
      prof_info__pred_info_init_3_p_0(S_3, I_4, &PredInfo_8);
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (PredInfo_8));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (List0_7));
      }
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
propagate__build_parent_map_2_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CliqueList_2,
  MR_Word AddrMap_3,
  MR_Word ProfNodeMap_4,
  MR_Integer STATE_VARIABLE_TotalCalls_0_5,
  MR_Integer * STATE_VARIABLE_TotalCalls_6,
  MR_Integer STATE_VARIABLE_SelfCalls_0_7,
  MR_Integer * STATE_VARIABLE_SelfCalls_8,
  MR_Word STATE_VARIABLE_ParentMap_0_9,
  MR_Word * STATE_VARIABLE_ParentMap_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ParentMap_10 = STATE_VARIABLE_ParentMap_0_9;
      *STATE_VARIABLE_SelfCalls_8 = STATE_VARIABLE_SelfCalls_0_7;
      *STATE_VARIABLE_TotalCalls_6 = STATE_VARIABLE_TotalCalls_0_5;
    }
    else
    {
      MR_String C_23 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cs_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ProfNode_31;
      MR_Word ParentList_32;
      MR_Integer TotalCalls1_33;
      MR_Integer SelfCalls1_34;
      MR_Word STATE_VARIABLE_ParentMap_43_43;
      MR_Integer STATE_VARIABLE_TotalCalls_44_44;
      MR_Integer STATE_VARIABLE_SelfCalls_45_45;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_TotalCalls_0_5;
      MR_Integer next_value_of_STATE_VARIABLE_SelfCalls_0_7;
      MR_Word next_value_of_STATE_VARIABLE_ParentMap_0_9;

      prof_info__get_prof_node_4_p_0(C_23, AddrMap_3, ProfNodeMap_4, &ProfNode_31);
      prof_info__prof_node_get_parent_list_2_p_0(ProfNode_31, &ParentList_32);
      propagate__add_to_parent_map_8_p_0(ParentList_32, CliqueList_2, (MR_Integer) 0, &TotalCalls1_33, (MR_Integer) 0, &SelfCalls1_34, STATE_VARIABLE_ParentMap_0_9, &STATE_VARIABLE_ParentMap_43_43);
      STATE_VARIABLE_TotalCalls_44_44 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TotalCalls_0_5 + (MR_Unsigned) TotalCalls1_33);
      STATE_VARIABLE_SelfCalls_45_45 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SelfCalls_0_7 + (MR_Unsigned) SelfCalls1_34);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cs_24;
      next_value_of_STATE_VARIABLE_TotalCalls_0_5 = STATE_VARIABLE_TotalCalls_44_44;
      next_value_of_STATE_VARIABLE_SelfCalls_0_7 = STATE_VARIABLE_SelfCalls_45_45;
      next_value_of_STATE_VARIABLE_ParentMap_0_9 = STATE_VARIABLE_ParentMap_43_43;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TotalCalls_0_5 = next_value_of_STATE_VARIABLE_TotalCalls_0_5;
      STATE_VARIABLE_SelfCalls_0_7 = next_value_of_STATE_VARIABLE_SelfCalls_0_7;
      STATE_VARIABLE_ParentMap_0_9 = next_value_of_STATE_VARIABLE_ParentMap_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
propagate__add_to_parent_map_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CliqueList_2,
  MR_Integer STATE_VARIABLE_TotalCalls_0_3,
  MR_Integer * STATE_VARIABLE_TotalCalls_4,
  MR_Integer STATE_VARIABLE_SelfCalls_0_5,
  MR_Integer * STATE_VARIABLE_SelfCalls_6,
  MR_Word STATE_VARIABLE_ParentMap_0_7,
  MR_Word * STATE_VARIABLE_ParentMap_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ParentMap_8 = STATE_VARIABLE_ParentMap_0_7;
      *STATE_VARIABLE_SelfCalls_6 = STATE_VARIABLE_SelfCalls_0_5;
      *STATE_VARIABLE_TotalCalls_4 = STATE_VARIABLE_TotalCalls_0_3;
    }
    else
    {
      MR_Word Pred_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Preds_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String PredName_25;
      MR_Integer Counts_26;

      prof_info__pred_info_get_pred_name_2_p_0(Pred_19, &PredName_25);
      prof_info__pred_info_get_counts_2_p_0(Pred_19, &Counts_26);
      succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (PredName_25)), CliqueList_2);
      if (!(succeeded))
        succeeded = (Counts_26 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Integer STATE_VARIABLE_SelfCalls_35_35 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SelfCalls_0_5 + (MR_Unsigned) Counts_26);
        MR_Word next_value_of_HeadVar__1_1 = Preds_20;
        MR_Integer next_value_of_STATE_VARIABLE_SelfCalls_0_5 = STATE_VARIABLE_SelfCalls_35_35;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_SelfCalls_0_5 = next_value_of_STATE_VARIABLE_SelfCalls_0_5;
        continue;
      }
      else
      {
        MR_Word STATE_VARIABLE_ParentMap_39_39;
        MR_Integer STATE_VARIABLE_TotalCalls_41_41;
        MR_Integer CurrCount0_27;
        MR_Box conv0_CurrCount0_27;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Integer next_value_of_STATE_VARIABLE_TotalCalls_0_3;
        MR_Word next_value_of_STATE_VARIABLE_ParentMap_0_7;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_ParentMap_0_7, ((MR_Box) (PredName_25)), &conv0_CurrCount0_27);
        if (succeeded)
        {
          CurrCount0_27 = ((MR_Integer) (conv0_CurrCount0_27));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Integer CurrCount_28 = (MR_Integer) ((MR_Unsigned) CurrCount0_27 + (MR_Unsigned) Counts_26);

          mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (PredName_25)), ((MR_Box) (CurrCount_28)), STATE_VARIABLE_ParentMap_0_7, &STATE_VARIABLE_ParentMap_39_39);
        }
        else
        {
          mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (PredName_25)), ((MR_Box) (Counts_26)), STATE_VARIABLE_ParentMap_0_7, &STATE_VARIABLE_ParentMap_39_39);
        }
        STATE_VARIABLE_TotalCalls_41_41 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TotalCalls_0_3 + (MR_Unsigned) Counts_26);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Preds_20;
        next_value_of_STATE_VARIABLE_TotalCalls_0_3 = STATE_VARIABLE_TotalCalls_41_41;
        next_value_of_STATE_VARIABLE_ParentMap_0_7 = STATE_VARIABLE_ParentMap_39_39;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_TotalCalls_0_3 = next_value_of_STATE_VARIABLE_TotalCalls_0_3;
        STATE_VARIABLE_ParentMap_0_7 = next_value_of_STATE_VARIABLE_ParentMap_0_7;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
propagate__propagate_counts_3_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Float TotalCounts_2,
  MR_Float TotalCalls_3,
  MR_Word AddrMap_4,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_5,
  MR_Word * STATE_VARIABLE_ProfNodeMap_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ProfNodeMap_6 = STATE_VARIABLE_ProfNodeMap_0_5;
    else
    {
      MR_Word P_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ps_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String Pred_19;
      MR_Integer Calls_20;
      MR_Float ToPropagateCounts_21;
      MR_Word ProfNode0_22;
      MR_Float PropCount0_23;
      MR_Float PropCount_24;
      MR_Word ProfNode_25;
      MR_Float Var_28;
      MR_Float Var_29;
      MR_Word STATE_VARIABLE_ProfNodeMap_30_30;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ProfNodeMap_0_5;

      prof_info__pred_info_get_entire_3_p_0(P_13, &Pred_19, &Calls_20);
      Var_29 = mercury__float__float_1_f_0(Calls_20);
      Var_28 = mercury__float__f_slash_2_f_0(Var_29, TotalCalls_3);
      ToPropagateCounts_21 = (Var_28 * TotalCounts_2);
      prof_info__get_prof_node_4_p_0(Pred_19, AddrMap_4, STATE_VARIABLE_ProfNodeMap_0_5, &ProfNode0_22);
      prof_info__prof_node_get_propagated_counts_2_p_0(ProfNode0_22, &PropCount0_23);
      PropCount_24 = (PropCount0_23 + ToPropagateCounts_21);
      prof_info__prof_node_set_propagated_counts_3_p_0(PropCount_24, ProfNode0_22, &ProfNode_25);
      prof_info__update_prof_node_5_p_0(Pred_19, ProfNode_25, AddrMap_4, STATE_VARIABLE_ProfNodeMap_0_5, &STATE_VARIABLE_ProfNodeMap_30_30);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Ps_14;
      next_value_of_STATE_VARIABLE_ProfNodeMap_0_5 = STATE_VARIABLE_ProfNodeMap_30_30;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ProfNodeMap_0_5 = next_value_of_STATE_VARIABLE_ProfNodeMap_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
propagate__update_cycles_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word AddrDecl_2,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_3,
  MR_Word * STATE_VARIABLE_ProfNodeMap_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ProfNodeMap_4 = STATE_VARIABLE_ProfNodeMap_0_3;
    else
    {
      MR_Integer Num_9;
      MR_Word Preds_10;
      MR_Word Rest_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_ProfNodeMap_17_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ProfNodeMap_0_3;

      Num_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
      Preds_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1))));
      propagate__update_cycles_3_5_p_0(Preds_10, Num_9, AddrDecl_2, STATE_VARIABLE_ProfNodeMap_0_3, &STATE_VARIABLE_ProfNodeMap_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Rest_11;
      next_value_of_STATE_VARIABLE_ProfNodeMap_0_3 = STATE_VARIABLE_ProfNodeMap_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ProfNodeMap_0_3 = next_value_of_STATE_VARIABLE_ProfNodeMap_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
propagate__update_cycles_3_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CycleNum_2,
  MR_Word AddrDecl_3,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_4,
  MR_Word * STATE_VARIABLE_ProfNodeMap_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ProfNodeMap_5 = STATE_VARIABLE_ProfNodeMap_0_4;
    else
    {
      MR_String P_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ps_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ProfNode0_16;
      MR_Word ProfNode_17;
      MR_Word STATE_VARIABLE_ProfNodeMap_20_20;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ProfNodeMap_0_4;

      prof_info__get_prof_node_4_p_0(P_11, AddrDecl_3, STATE_VARIABLE_ProfNodeMap_0_4, &ProfNode0_16);
      prof_info__prof_node_set_cycle_num_3_p_0(CycleNum_2, ProfNode0_16, &ProfNode_17);
      prof_info__update_prof_node_5_p_0(P_11, ProfNode_17, AddrDecl_3, STATE_VARIABLE_ProfNodeMap_0_4, &STATE_VARIABLE_ProfNodeMap_20_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Ps_12;
      next_value_of_STATE_VARIABLE_ProfNodeMap_0_4 = STATE_VARIABLE_ProfNodeMap_20_20;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ProfNodeMap_0_4 = next_value_of_STATE_VARIABLE_ProfNodeMap_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
propagate__identify_cycles_2_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_61;

    propagate__IntroducedFrom__pred__identify_cycles_2__107__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_61);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_61));
  }
}

static void MR_CALL 
propagate__identify_cycles_2_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CycleNum0_2,
  MR_Word InvG_3,
  MR_Word Visit0_4,
  MR_Word STATE_VARIABLE_ATSort_0_5,
  MR_Word * STATE_VARIABLE_ATSort_6,
  MR_Word STATE_VARIABLE_PredToCycleMap_0_7,
  MR_Word * STATE_VARIABLE_PredToCycleMap_8,
  MR_Word STATE_VARIABLE_CycleToPredsMap_0_9,
  MR_Word * STATE_VARIABLE_CycleToPredsMap_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CycleToPredsMap_10 = STATE_VARIABLE_CycleToPredsMap_0_9;
      *STATE_VARIABLE_PredToCycleMap_8 = STATE_VARIABLE_PredToCycleMap_0_7;
      *STATE_VARIABLE_ATSort_6 = STATE_VARIABLE_ATSort_0_5;
    }
    else
    {
      MR_Word Key_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Keys0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Visit_31;
      MR_Word DfsRev0_32;
      MR_Word DfsRev_33;
      MR_Integer CycleNum_35;
      MR_Word Keys_39;
      MR_Word Var_46;
      MR_Word STATE_VARIABLE_PredToCycleMap_49_49;
      MR_Word STATE_VARIABLE_CycleToPredsMap_50_50;
      MR_Word STATE_VARIABLE_ATSort_55_55;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_CycleNum0_2;
      MR_Word next_value_of_Visit0_4;
      MR_Word next_value_of_STATE_VARIABLE_ATSort_0_5;
      MR_Word next_value_of_STATE_VARIABLE_PredToCycleMap_0_7;
      MR_Word next_value_of_STATE_VARIABLE_CycleToPredsMap_0_9;

      mercury__digraph__dfsrev_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InvG_3, Key_23, Visit0_4, &Visit_31, &DfsRev0_32);
      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&propagate_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (propagate__identify_cycles_2_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (InvG_3));
      }
      mercury__list__map_3_p_0((MR_Word) (&propagate_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_46, DfsRev0_32, &DfsRev_33);
      if ((DfsRev_33 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "propagate", (MR_String) "predicate \140propagate.identify_cycles_2\'/10", (MR_String) "empty list\n");
          return;
        }
      }
      else
      {
        MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DfsRev_33, (MR_Integer) 1))));
        MR_String Var_65 = ((MR_String) ((MR_hl_field(MR_mktag(1), DfsRev_33, (MR_Integer) 0))));

        if ((Var_64 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          CycleNum_35 = CycleNum0_2;
          STATE_VARIABLE_PredToCycleMap_49_49 = STATE_VARIABLE_PredToCycleMap_0_7;
          STATE_VARIABLE_CycleToPredsMap_50_50 = STATE_VARIABLE_CycleToPredsMap_0_9;
        }
        else
        {
          MR_Word STATE_VARIABLE_PredToCycleMap_23_82;
          MR_Word STATE_VARIABLE_CycleToPredsMap_24_83;

          CycleNum_35 = (MR_Integer) ((MR_Unsigned) CycleNum0_2 + (MR_Unsigned) (MR_Integer) 1);
          mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_65)), ((MR_Box) (CycleNum_35)), STATE_VARIABLE_PredToCycleMap_0_7, &STATE_VARIABLE_PredToCycleMap_23_82);
          mercury__multi_map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (CycleNum_35)), ((MR_Box) (Var_65)), STATE_VARIABLE_CycleToPredsMap_0_9, &STATE_VARIABLE_CycleToPredsMap_24_83);
          propagate__add_to_cycle_map_6_p_0(Var_64, CycleNum_35, STATE_VARIABLE_PredToCycleMap_23_82, &STATE_VARIABLE_PredToCycleMap_49_49, STATE_VARIABLE_CycleToPredsMap_24_83, &STATE_VARIABLE_CycleToPredsMap_50_50);
        }
      }
      mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DfsRev_33, STATE_VARIABLE_ATSort_0_5, &STATE_VARIABLE_ATSort_55_55);
      mercury__list__delete_elems_3_p_0((MR_Word) (&propagate_scalar_common_1[0]), Keys0_24, DfsRev0_32, &Keys_39);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Keys_39;
      next_value_of_CycleNum0_2 = CycleNum_35;
      next_value_of_Visit0_4 = Visit_31;
      next_value_of_STATE_VARIABLE_ATSort_0_5 = STATE_VARIABLE_ATSort_55_55;
      next_value_of_STATE_VARIABLE_PredToCycleMap_0_7 = STATE_VARIABLE_PredToCycleMap_49_49;
      next_value_of_STATE_VARIABLE_CycleToPredsMap_0_9 = STATE_VARIABLE_CycleToPredsMap_50_50;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      CycleNum0_2 = next_value_of_CycleNum0_2;
      Visit0_4 = next_value_of_Visit0_4;
      STATE_VARIABLE_ATSort_0_5 = next_value_of_STATE_VARIABLE_ATSort_0_5;
      STATE_VARIABLE_PredToCycleMap_0_7 = next_value_of_STATE_VARIABLE_PredToCycleMap_0_7;
      STATE_VARIABLE_CycleToPredsMap_0_9 = next_value_of_STATE_VARIABLE_CycleToPredsMap_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
propagate__add_to_cycle_map_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Cycle_2,
  MR_Word STATE_VARIABLE_PredToCycleMap_0_3,
  MR_Word * STATE_VARIABLE_PredToCycleMap_4,
  MR_Word STATE_VARIABLE_CycleToPredsMap_0_5,
  MR_Word * STATE_VARIABLE_CycleToPredsMap_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CycleToPredsMap_6 = STATE_VARIABLE_CycleToPredsMap_0_5;
      *STATE_VARIABLE_PredToCycleMap_4 = STATE_VARIABLE_PredToCycleMap_0_3;
    }
    else
    {
      MR_String Pred_14 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Preds_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_PredToCycleMap_23_23;
      MR_Word STATE_VARIABLE_CycleToPredsMap_24_24;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_PredToCycleMap_0_3;
      MR_Word next_value_of_STATE_VARIABLE_CycleToPredsMap_0_5;

      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Pred_14)), ((MR_Box) (Cycle_2)), STATE_VARIABLE_PredToCycleMap_0_3, &STATE_VARIABLE_PredToCycleMap_23_23);
      mercury__multi_map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Cycle_2)), ((MR_Box) (Pred_14)), STATE_VARIABLE_CycleToPredsMap_0_5, &STATE_VARIABLE_CycleToPredsMap_24_24);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Preds_15;
      next_value_of_STATE_VARIABLE_PredToCycleMap_0_3 = STATE_VARIABLE_PredToCycleMap_23_23;
      next_value_of_STATE_VARIABLE_CycleToPredsMap_0_5 = STATE_VARIABLE_CycleToPredsMap_24_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_PredToCycleMap_0_3 = next_value_of_STATE_VARIABLE_PredToCycleMap_0_3;
      STATE_VARIABLE_CycleToPredsMap_0_5 = next_value_of_STATE_VARIABLE_CycleToPredsMap_0_5;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
propagate____Unify____cycle_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = propagate____Unify____cycle_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
propagate____Compare____cycle_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    propagate____Compare____cycle_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
propagate____Unify____cycle_to_preds_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = propagate____Unify____cycle_to_preds_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
propagate____Compare____cycle_to_preds_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    propagate____Compare____cycle_to_preds_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
propagate____Unify____pred_to_cycle_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = propagate____Unify____pred_to_cycle_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
propagate____Compare____pred_to_cycle_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    propagate____Compare____pred_to_cycle_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__propagate__init(void)
{
}

void mercury__propagate__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&propagate__propagate__type_ctor_info_cycle_info_0);
	MR_register_type_ctor_info(&propagate__propagate__type_ctor_info_cycle_to_preds_map_0);
	MR_register_type_ctor_info(&propagate__propagate__type_ctor_info_pred_to_cycle_map_0);
}

void mercury__propagate__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__propagate__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module propagate.
