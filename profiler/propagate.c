/*
** Automatically generated from `propagate.m'
** by the Mercury compiler,
** version rotd-2017-08-07
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module propagate. */
/* :- implementation. */

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
  MR_Word propagate__InvG_3,
  MR_Word propagate__HeadVar__2_60,
  MR_String * propagate__HeadVar__3_61);

static void MR_CALL 
propagate____Compare____pred_to_cycle_map_0_0(
  MR_Word * propagate__HeadVar__1_1,
  MR_Word propagate__HeadVar__2_2,
  MR_Word propagate__HeadVar__3_3);

static MR_bool MR_CALL 
propagate____Unify____pred_to_cycle_map_0_0(
  MR_Word propagate__HeadVar__1_1,
  MR_Word propagate__HeadVar__2_2);

static void MR_CALL 
propagate____Compare____cycle_to_preds_map_0_0(
  MR_Word * propagate__HeadVar__1_1,
  MR_Word propagate__HeadVar__2_2,
  MR_Word propagate__HeadVar__3_3);

static MR_bool MR_CALL 
propagate____Unify____cycle_to_preds_map_0_0(
  MR_Word propagate__HeadVar__1_1,
  MR_Word propagate__HeadVar__2_2);

static void MR_CALL 
propagate____Compare____cycle_info_0_0(
  MR_Word * propagate__HeadVar__1_1,
  MR_Word propagate__HeadVar__2_2,
  MR_Word propagate__HeadVar__3_3);

static MR_bool MR_CALL 
propagate____Unify____cycle_info_0_0(
  MR_Word propagate__HeadVar__1_1,
  MR_Word propagate__HeadVar__2_2);

static void MR_CALL 
propagate__accumulate_propagated_counts_5_p_0(
  MR_Word propagate__ADMap_6,
  MR_Word propagate__PNMap_7,
  MR_String propagate__Pred_8,
  MR_Float propagate__STATE_VARIABLE_Sum_0_12,
  MR_Float * propagate__STATE_VARIABLE_Sum_13);

static void MR_CALL 
propagate__accumulate_self_counts_5_p_0(
  MR_Word propagate__ADMap_6,
  MR_Word propagate__PNMap_7,
  MR_String propagate__Pred_8,
  MR_Integer propagate__STATE_VARIABLE_Sum_0_12,
  MR_Integer * propagate__STATE_VARIABLE_Sum_13);

static void MR_CALL 
propagate__propagate_counts_2_5_p_0(
  MR_Word propagate__HeadVar__1_1,
  MR_Word propagate__CycleInfo_2,
  MR_Word propagate__AddrDeclMap_3,
  MR_Word propagate__STATE_VARIABLE_ProfNodeMap_0_4,
  MR_Word * propagate__STATE_VARIABLE_ProfNodeMap_5);

static void MR_CALL 
propagate__process_cycle_5_p_0_2(
  MR_Box propagate__closure_arg,
  MR_Box propagate__wrapper_arg_1,
  MR_Box propagate__wrapper_arg_2,
  MR_Box * propagate__wrapper_arg_3);

static void MR_CALL 
propagate__process_cycle_5_p_0_1(
  MR_Box propagate__closure_arg,
  MR_Box propagate__wrapper_arg_1,
  MR_Box propagate__wrapper_arg_2,
  MR_Box * propagate__wrapper_arg_3);

static void MR_CALL 
propagate__process_cycle_5_p_0(
  MR_Word propagate__Preds_6,
  MR_Integer propagate__Cycle_7,
  MR_Word propagate__AddrMap_8,
  MR_Word propagate__STATE_VARIABLE_ProfNodeMap_0_21,
  MR_Word * propagate__STATE_VARIABLE_ProfNodeMap_22);

static void MR_CALL 
propagate__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_121_99_108_101_95_108_105_115_116_95_95_91_50_44_32_51_93_95_48_4_p_0(
  MR_Word propagate__HeadVar__1_1,
  MR_Word * propagate__HeadVar__4_4);

static MR_Word MR_CALL 
propagate__assoc_list_to_pred_info_list_1_f_0(
  MR_Word propagate__HeadVar__1_1);

static void MR_CALL 
propagate__build_parent_map_2_10_p_0(
  MR_Word propagate__HeadVar__1_1,
  MR_Word propagate__CliqueList_2,
  MR_Word propagate__AddrMap_3,
  MR_Word propagate__ProfNodeMap_4,
  MR_Integer propagate__STATE_VARIABLE_TotalCalls_0_5,
  MR_Integer * propagate__STATE_VARIABLE_TotalCalls_6,
  MR_Integer propagate__STATE_VARIABLE_SelfCalls_0_7,
  MR_Integer * propagate__STATE_VARIABLE_SelfCalls_8,
  MR_Word propagate__STATE_VARIABLE_ParentMap_0_9,
  MR_Word * propagate__STATE_VARIABLE_ParentMap_10);

static void MR_CALL 
propagate__add_to_parent_map_8_p_0(
  MR_Word propagate__HeadVar__1_1,
  MR_Word propagate__CliqueList_2,
  MR_Integer propagate__STATE_VARIABLE_TotalCalls_0_3,
  MR_Integer * propagate__STATE_VARIABLE_TotalCalls_4,
  MR_Integer propagate__STATE_VARIABLE_SelfCalls_0_5,
  MR_Integer * propagate__STATE_VARIABLE_SelfCalls_6,
  MR_Word propagate__STATE_VARIABLE_ParentMap_0_7,
  MR_Word * propagate__STATE_VARIABLE_ParentMap_8);

static void MR_CALL 
propagate__propagate_counts_3_6_p_0(
  MR_Word propagate__HeadVar__1_1,
  MR_Float propagate__TotalCounts_2,
  MR_Float propagate__TotalCalls_3,
  MR_Word propagate__AddrMap_4,
  MR_Word propagate__STATE_VARIABLE_ProfNodeMap_0_5,
  MR_Word * propagate__STATE_VARIABLE_ProfNodeMap_6);

static void MR_CALL 
propagate__update_cycles_2_4_p_0(
  MR_Word propagate__HeadVar__1_1,
  MR_Word propagate__AddrDecl_2,
  MR_Word propagate__STATE_VARIABLE_ProfNodeMap_0_3,
  MR_Word * propagate__STATE_VARIABLE_ProfNodeMap_4);

static void MR_CALL 
propagate__update_cycles_3_5_p_0(
  MR_Word propagate__HeadVar__1_1,
  MR_Integer propagate__CycleNum_2,
  MR_Word propagate__AddrDecl_3,
  MR_Word propagate__STATE_VARIABLE_ProfNodeMap_0_4,
  MR_Word * propagate__STATE_VARIABLE_ProfNodeMap_5);

static void MR_CALL 
propagate__identify_cycles_2_10_p_0_1(
  MR_Box propagate__closure_arg,
  MR_Box propagate__wrapper_arg_1,
  MR_Box * propagate__wrapper_arg_2);

static void MR_CALL 
propagate__identify_cycles_2_10_p_0(
  MR_Word propagate__HeadVar__1_1,
  MR_Integer propagate__CycleNum0_2,
  MR_Word propagate__InvG_3,
  MR_Word propagate__Visit0_4,
  MR_Word propagate__STATE_VARIABLE_ATSort_0_5,
  MR_Word * propagate__STATE_VARIABLE_ATSort_6,
  MR_Word propagate__STATE_VARIABLE_PredToCycleMap_0_7,
  MR_Word * propagate__STATE_VARIABLE_PredToCycleMap_8,
  MR_Word propagate__STATE_VARIABLE_CycleToPredsMap_0_9,
  MR_Word * propagate__STATE_VARIABLE_CycleToPredsMap_10);

static void MR_CALL 
propagate__add_to_cycle_map_6_p_0(
  MR_Word propagate__HeadVar__1_1,
  MR_Integer propagate__Cycle_2,
  MR_Word propagate__STATE_VARIABLE_PredToCycleMap_0_3,
  MR_Word * propagate__STATE_VARIABLE_PredToCycleMap_4,
  MR_Word propagate__STATE_VARIABLE_CycleToPredsMap_0_5,
  MR_Word * propagate__STATE_VARIABLE_CycleToPredsMap_6);

static MR_bool MR_CALL 
propagate____Unify____cycle_info_0_0_10001(
  MR_Box propagate__wrapper_arg_1,
  MR_Box propagate__wrapper_arg_2);

static void MR_CALL 
propagate____Compare____cycle_info_0_0_10001(
  MR_Box * propagate__wrapper_arg_1,
  MR_Box propagate__wrapper_arg_2,
  MR_Box propagate__wrapper_arg_3);

static MR_bool MR_CALL 
propagate____Unify____cycle_to_preds_map_0_0_10001(
  MR_Box propagate__wrapper_arg_1,
  MR_Box propagate__wrapper_arg_2);

static void MR_CALL 
propagate____Compare____cycle_to_preds_map_0_0_10001(
  MR_Box * propagate__wrapper_arg_1,
  MR_Box propagate__wrapper_arg_2,
  MR_Box propagate__wrapper_arg_3);

static MR_bool MR_CALL 
propagate____Unify____pred_to_cycle_map_0_0_10001(
  MR_Box propagate__wrapper_arg_1,
  MR_Box propagate__wrapper_arg_2);

static void MR_CALL 
propagate____Compare____pred_to_cycle_map_0_0_10001(
  MR_Box * propagate__wrapper_arg_1,
  MR_Box propagate__wrapper_arg_2,
  MR_Box propagate__wrapper_arg_3);


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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&propagate__digraph__pti_digraph_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&propagate__digraph__pti_digraph_key_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box propagate_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box propagate_scalar_common_5[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 propagate__digraph__pti_digraph_key_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 propagate__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 propagate__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_prof_info__type_ctor_info_prof_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &prof_info__prof_info__type_ctor_info_prof_node_0
  }
};

static const MR_FA_TypeInfo_Struct2 propagate__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 propagate__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct2 propagate__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &propagate__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo propagate__propagate__field_types_cycle_info_0_0[2] = {
  (MR_PseudoTypeInfo) &propagate__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &propagate__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_string_0
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
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr propagate__propagate__du_stag_ordered_cycle_info_0_0[1] = {
  &propagate__propagate__du_functor_desc_cycle_info_0_0
};

static const MR_DuPtagLayout propagate__propagate__du_ptag_ordered_cycle_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    propagate__propagate__du_stag_ordered_cycle_info_0_0
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
  {     (MR_PseudoTypeInfo) &propagate__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_string_0 },
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
  {     (MR_PseudoTypeInfo) &propagate__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static void MR_CALL 
propagate__IntroducedFrom__pred__identify_cycles_2__107__1_3_p_0(
  MR_Word propagate__InvG_3,
  MR_Word propagate__HeadVar__2_60,
  MR_String * propagate__HeadVar__3_61)
{
  {
    MR_Box propagate__conv0_HeadVar__3_61;

    mercury__digraph__lookup_vertex_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, propagate__InvG_3, propagate__HeadVar__2_60, &propagate__conv0_HeadVar__3_61);
    *propagate__HeadVar__3_61 = ((MR_String) propagate__conv0_HeadVar__3_61);
  }
}

static void MR_CALL 
propagate____Compare____pred_to_cycle_map_0_0(
  MR_Word * propagate__HeadVar__1_1,
  MR_Word propagate__HeadVar__2_2,
  MR_Word propagate__HeadVar__3_3)
{
  {
    MR_Word propagate__Cast_HeadVar1_4 = propagate__HeadVar__2_2;
    MR_Word propagate__Cast_HeadVar2_5 = propagate__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &propagate_scalar_common_2[0], propagate__HeadVar__1_1, ((MR_Box) (propagate__Cast_HeadVar1_4)), ((MR_Box) (propagate__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
propagate____Unify____pred_to_cycle_map_0_0(
  MR_Word propagate__HeadVar__1_1,
  MR_Word propagate__HeadVar__2_2)
{
  {
    MR_bool propagate__succeeded;
    MR_Word propagate__Cast_HeadVar1_3 = propagate__HeadVar__1_1;
    MR_Word propagate__Cast_HeadVar2_4 = propagate__HeadVar__2_2;

    propagate__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &propagate_scalar_common_2[0], ((MR_Box) (propagate__Cast_HeadVar1_3)), ((MR_Box) (propagate__Cast_HeadVar2_4)));
    return propagate__succeeded;
  }
}

static void MR_CALL 
propagate____Compare____cycle_to_preds_map_0_0(
  MR_Word * propagate__HeadVar__1_1,
  MR_Word propagate__HeadVar__2_2,
  MR_Word propagate__HeadVar__3_3)
{
  {
    MR_Word propagate__Cast_HeadVar1_4 = propagate__HeadVar__2_2;
    MR_Word propagate__Cast_HeadVar2_5 = propagate__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &propagate_scalar_common_2[1], propagate__HeadVar__1_1, ((MR_Box) (propagate__Cast_HeadVar1_4)), ((MR_Box) (propagate__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
propagate____Unify____cycle_to_preds_map_0_0(
  MR_Word propagate__HeadVar__1_1,
  MR_Word propagate__HeadVar__2_2)
{
  {
    MR_bool propagate__succeeded;
    MR_Word propagate__Cast_HeadVar1_3 = propagate__HeadVar__1_1;
    MR_Word propagate__Cast_HeadVar2_4 = propagate__HeadVar__2_2;

    propagate__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &propagate_scalar_common_2[1], ((MR_Box) (propagate__Cast_HeadVar1_3)), ((MR_Box) (propagate__Cast_HeadVar2_4)));
    return propagate__succeeded;
  }
}

static void MR_CALL 
propagate____Compare____cycle_info_0_0(
  MR_Word * propagate__HeadVar__1_1,
  MR_Word propagate__HeadVar__2_2,
  MR_Word propagate__HeadVar__3_3)
{
  {
    MR_bool propagate__succeeded;
    MR_Integer propagate__CastX_9 = (MR_Integer) propagate__HeadVar__2_2;
    MR_Integer propagate__CastY_10 = (MR_Integer) propagate__HeadVar__3_3;

    propagate__succeeded = (propagate__CastX_9 == propagate__CastY_10);
    if (propagate__succeeded)
      *propagate__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word propagate__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word propagate__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word propagate__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word propagate__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word propagate__Var_8;

      mercury__builtin__compare_3_p_0((MR_Word) &propagate_scalar_common_2[0], &propagate__Var_8, ((MR_Box) (propagate__ArgX1_4)), ((MR_Box) (propagate__ArgY1_5)));
      propagate__succeeded = (propagate__Var_8 == (MR_Integer) 0);
      propagate__succeeded = !(propagate__succeeded);
      if (propagate__succeeded)
        *propagate__HeadVar__1_1 = propagate__Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &propagate_scalar_common_2[1], propagate__HeadVar__1_1, ((MR_Box) (propagate__ArgX2_6)), ((MR_Box) (propagate__ArgY2_7)));
      }
    }
  }
}

static MR_bool MR_CALL 
propagate____Unify____cycle_info_0_0(
  MR_Word propagate__HeadVar__1_1,
  MR_Word propagate__HeadVar__2_2)
{
  {
    MR_bool propagate__succeeded;
    MR_Integer propagate__CastX_7 = (MR_Integer) propagate__HeadVar__1_1;
    MR_Integer propagate__CastY_8 = (MR_Integer) propagate__HeadVar__2_2;

    propagate__succeeded = (propagate__CastX_7 == propagate__CastY_8);
    if (propagate__succeeded)
      propagate__succeeded = MR_TRUE;
    else
    {
      MR_Word propagate__TypeInfo_10_10;
      MR_Word propagate__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word propagate__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word propagate__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word propagate__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__HeadVar__2_2, (MR_Integer) 1)));

      propagate__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &propagate_scalar_common_2[0], ((MR_Box) (propagate__ArgX1_3)), ((MR_Box) (propagate__ArgY1_4)));
      if (propagate__succeeded)
      {
        propagate__TypeInfo_10_10 = (MR_Word) &propagate_scalar_common_2[1];
        propagate__succeeded = mercury__builtin__unify_2_p_0(propagate__TypeInfo_10_10, ((MR_Box) (propagate__ArgX2_5)), ((MR_Box) (propagate__ArgY2_6)));
      }
    }
    return propagate__succeeded;
  }
}

static void MR_CALL 
propagate__accumulate_propagated_counts_5_p_0(
  MR_Word propagate__ADMap_6,
  MR_Word propagate__PNMap_7,
  MR_String propagate__Pred_8,
  MR_Float propagate__STATE_VARIABLE_Sum_0_12,
  MR_Float * propagate__STATE_VARIABLE_Sum_13)
{
  {
    MR_Word propagate__ProfNode_10;
    MR_Float propagate__PropCount_11;

    prof_info__get_prof_node_4_p_0(propagate__Pred_8, propagate__ADMap_6, propagate__PNMap_7, &propagate__ProfNode_10);
    prof_info__prof_node_get_propagated_counts_2_p_0(propagate__ProfNode_10, &propagate__PropCount_11);
    *propagate__STATE_VARIABLE_Sum_13 = (propagate__STATE_VARIABLE_Sum_0_12 + propagate__PropCount_11);
  }
}

static void MR_CALL 
propagate__accumulate_self_counts_5_p_0(
  MR_Word propagate__ADMap_6,
  MR_Word propagate__PNMap_7,
  MR_String propagate__Pred_8,
  MR_Integer propagate__STATE_VARIABLE_Sum_0_12,
  MR_Integer * propagate__STATE_VARIABLE_Sum_13)
{
  {
    MR_Word propagate__ProfNode_10;
    MR_Integer propagate__InitCount_11;

    prof_info__get_prof_node_4_p_0(propagate__Pred_8, propagate__ADMap_6, propagate__PNMap_7, &propagate__ProfNode_10);
    prof_info__prof_node_get_initial_counts_2_p_0(propagate__ProfNode_10, &propagate__InitCount_11);
    *propagate__STATE_VARIABLE_Sum_13 = (propagate__STATE_VARIABLE_Sum_0_12 + propagate__InitCount_11);
  }
}

void MR_CALL 
propagate__propagate_counts_5_p_0(
  MR_Word propagate__CallGraph_6,
  MR_Word propagate__STATE_VARIABLE_Prof_0_15,
  MR_Word * propagate__STATE_VARIABLE_Prof_16)
{
  {
    MR_Word propagate__TypeCtorInfo_15_34;
    MR_Word propagate__TypeCtorInfo_17_36;
    MR_Word propagate__AddrDeclMap_9;
    MR_Word propagate__ProfNodeMap0_10;
    MR_Word propagate__ATSort_11;
    MR_Word propagate__CycleInfo_12;
    MR_Word propagate__ProfNodeMap1_13;
    MR_Word propagate__ProfNodeMap_14;
    MR_Word propagate__Var_19;
    MR_Word propagate__STATE_VARIABLE_Prof_20_20;
    MR_Word propagate__PredToCycleMap_25;
    MR_Word propagate__CycleToPredsMap_26;
    MR_Word propagate__DfsRev_27;
    MR_Word propagate__InvG_28;
    MR_Word propagate__Var_30;
    MR_Word propagate__Var_32;
    MR_Word propagate__Var_33;
    MR_Word propagate__AssocList_42;
    MR_Word propagate__Var_22;

    prof_info__prof_get_addrdeclmap_2_p_0(propagate__STATE_VARIABLE_Prof_0_15, &propagate__AddrDeclMap_9);
    prof_info__prof_get_profnodemap_2_p_0(propagate__STATE_VARIABLE_Prof_0_15, &propagate__ProfNodeMap0_10);
    propagate__TypeCtorInfo_15_34 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__digraph__dfsrev_2_p_0(propagate__TypeCtorInfo_15_34, propagate__CallGraph_6, &propagate__DfsRev_27);
    mercury__digraph__inverse_2_p_0(propagate__TypeCtorInfo_15_34, propagate__CallGraph_6, &propagate__InvG_28);
    propagate__Var_30 = mercury__sparse_bitset__init_0_f_0((MR_Word) &propagate_scalar_common_1[0]);
    propagate__TypeCtorInfo_17_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    propagate__Var_32 = mercury__map__init_0_f_0(propagate__TypeCtorInfo_15_34, propagate__TypeCtorInfo_17_36);
    propagate__Var_33 = mercury__multi_map__init_0_f_0(propagate__TypeCtorInfo_17_36, propagate__TypeCtorInfo_15_34);
    propagate__identify_cycles_2_10_p_0(propagate__DfsRev_27, (MR_Integer) 1, propagate__InvG_28, propagate__Var_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &propagate__ATSort_11, propagate__Var_32, &propagate__PredToCycleMap_25, propagate__Var_33, &propagate__CycleToPredsMap_26);
    {
      propagate__CycleInfo_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), propagate__CycleInfo_12, 0) = ((MR_Box) (propagate__PredToCycleMap_25));
      MR_hl_field(MR_mktag(0), propagate__CycleInfo_12, 1) = ((MR_Box) (propagate__CycleToPredsMap_26));
    }
    propagate__AssocList_42 = mercury__multi_map__to_assoc_list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, propagate__CycleToPredsMap_26);
    propagate__update_cycles_2_4_p_0(propagate__AssocList_42, propagate__AddrDeclMap_9, propagate__ProfNodeMap0_10, &propagate__ProfNodeMap1_13);
    propagate__propagate_counts_2_5_p_0(propagate__ATSort_11, propagate__CycleInfo_12, propagate__AddrDeclMap_9, propagate__ProfNodeMap1_13, &propagate__ProfNodeMap_14);
    propagate__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__CycleInfo_12, (MR_Integer) 0)));
    propagate__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__CycleInfo_12, (MR_Integer) 1)));
    prof_info__prof_set_cyclemap_3_p_0(propagate__Var_19, propagate__STATE_VARIABLE_Prof_0_15, &propagate__STATE_VARIABLE_Prof_20_20);
    prof_info__prof_set_profnodemap_3_p_0(propagate__ProfNodeMap_14, propagate__STATE_VARIABLE_Prof_20_20, propagate__STATE_VARIABLE_Prof_16);
  }
}

static void MR_CALL 
propagate__propagate_counts_2_5_p_0(
  MR_Word propagate__HeadVar__1_1,
  MR_Word propagate__CycleInfo_2,
  MR_Word propagate__AddrDeclMap_3,
  MR_Word propagate__STATE_VARIABLE_ProfNodeMap_0_4,
  MR_Word * propagate__STATE_VARIABLE_ProfNodeMap_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool propagate__succeeded;

      if ((propagate__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *propagate__STATE_VARIABLE_ProfNodeMap_5 = propagate__STATE_VARIABLE_ProfNodeMap_0_4;
      else
      {
        MR_String propagate__Pred_11 = ((MR_String) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word propagate__Preds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer propagate__Cycle_16;
        MR_Word propagate__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__CycleInfo_2, (MR_Integer) 0)));
        MR_Word propagate__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__CycleInfo_2, (MR_Integer) 1)));
        MR_Box propagate__conv0_Cycle_16;

        propagate__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, propagate__Var_28, ((MR_Box) (propagate__Pred_11)), &propagate__conv0_Cycle_16);
        if (propagate__succeeded)
        {
          propagate__Cycle_16 = ((MR_Integer) propagate__conv0_Cycle_16);
          propagate__succeeded = MR_TRUE;
        }
        if (propagate__succeeded)
        {
          MR_Word propagate__TypeCtorInfo_46_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          MR_Word propagate__CyclePreds_17;
          MR_Integer propagate__Length_18;
          MR_Word propagate__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__CycleInfo_2, (MR_Integer) 1)));
          MR_Word propagate__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__CycleInfo_2, (MR_Integer) 0)));
          MR_Word propagate__NewPreds_19;
          MR_Integer propagate__Var_30;

          mercury__multi_map__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, propagate__TypeCtorInfo_46_46, propagate__Var_29, ((MR_Box) (propagate__Cycle_16)), &propagate__CyclePreds_17);
          mercury__list__length_2_p_0(propagate__TypeCtorInfo_46_46, propagate__CyclePreds_17, &propagate__Length_18);
          propagate__Var_30 = (propagate__Length_18 - (MR_Integer) 1);
          propagate__succeeded = mercury__list__drop_3_p_0(propagate__TypeCtorInfo_46_46, propagate__Var_30, propagate__Preds_12, &propagate__NewPreds_19);
          if (propagate__succeeded)
          {
            MR_Word propagate__STATE_VARIABLE_ProfNodeMap_32_32;

            propagate__process_cycle_5_p_0(propagate__CyclePreds_17, propagate__Cycle_16, propagate__AddrDeclMap_3, propagate__STATE_VARIABLE_ProfNodeMap_0_4, &propagate__STATE_VARIABLE_ProfNodeMap_32_32);
            /* direct tailcall eliminated */
            {
              MR_Word propagate__next_value_of_HeadVar__1_1 = propagate__NewPreds_19;
              MR_Word propagate__next_value_of_STATE_VARIABLE_ProfNodeMap_0_4 = propagate__STATE_VARIABLE_ProfNodeMap_32_32;

              propagate__HeadVar__1_1 = propagate__next_value_of_HeadVar__1_1;
              propagate__STATE_VARIABLE_ProfNodeMap_0_4 = propagate__next_value_of_STATE_VARIABLE_ProfNodeMap_0_4;
            }
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
          MR_Word propagate__ProfNode_20;
          MR_Integer propagate__InitCounts_21;
          MR_Float propagate__PropCounts_22;
          MR_Word propagate__ParentList_23;
          MR_Integer propagate__TotalCalls_24;
          MR_Float propagate__TotalCounts_25;
          MR_Float propagate__Var_37;
          MR_Float propagate__Var_38;
          MR_Word propagate__STATE_VARIABLE_ProfNodeMap_39_39;

          prof_info__get_prof_node_4_p_0(propagate__Pred_11, propagate__AddrDeclMap_3, propagate__STATE_VARIABLE_ProfNodeMap_0_4, &propagate__ProfNode_20);
          prof_info__prof_node_get_initial_counts_2_p_0(propagate__ProfNode_20, &propagate__InitCounts_21);
          prof_info__prof_node_get_propagated_counts_2_p_0(propagate__ProfNode_20, &propagate__PropCounts_22);
          prof_info__prof_node_get_parent_list_2_p_0(propagate__ProfNode_20, &propagate__ParentList_23);
          prof_info__prof_node_get_total_calls_2_p_0(propagate__ProfNode_20, &propagate__TotalCalls_24);
          propagate__Var_37 = mercury__float__float_1_f_0(propagate__InitCounts_21);
          propagate__TotalCounts_25 = (propagate__Var_37 + propagate__PropCounts_22);
          propagate__Var_38 = mercury__float__float_1_f_0(propagate__TotalCalls_24);
          propagate__propagate_counts_3_6_p_0(propagate__ParentList_23, propagate__TotalCounts_25, propagate__Var_38, propagate__AddrDeclMap_3, propagate__STATE_VARIABLE_ProfNodeMap_0_4, &propagate__STATE_VARIABLE_ProfNodeMap_39_39);
          /* direct tailcall eliminated */
          {
            MR_Word propagate__next_value_of_HeadVar__1_1 = propagate__Preds_12;
            MR_Word propagate__next_value_of_STATE_VARIABLE_ProfNodeMap_0_4 = propagate__STATE_VARIABLE_ProfNodeMap_39_39;

            propagate__HeadVar__1_1 = propagate__next_value_of_HeadVar__1_1;
            propagate__STATE_VARIABLE_ProfNodeMap_0_4 = propagate__next_value_of_STATE_VARIABLE_ProfNodeMap_0_4;
          }
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
propagate__process_cycle_5_p_0_2(
  MR_Box propagate__closure_arg,
  MR_Box propagate__wrapper_arg_1,
  MR_Box propagate__wrapper_arg_2,
  MR_Box * propagate__wrapper_arg_3)
{
  {
    MR_Box propagate__closure = propagate__closure_arg;
    MR_Float propagate__conv2_STATE_VARIABLE_Sum_13;

    propagate__accumulate_propagated_counts_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), propagate__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__closure, (MR_Integer) 4))), ((MR_String) propagate__wrapper_arg_1), MR_unbox_float(propagate__wrapper_arg_2), &propagate__conv2_STATE_VARIABLE_Sum_13);
    *propagate__wrapper_arg_3 = MR_box_float(propagate__conv2_STATE_VARIABLE_Sum_13);
  }
}

static void MR_CALL 
propagate__process_cycle_5_p_0_1(
  MR_Box propagate__closure_arg,
  MR_Box propagate__wrapper_arg_1,
  MR_Box propagate__wrapper_arg_2,
  MR_Box * propagate__wrapper_arg_3)
{
  {
    MR_Box propagate__closure = propagate__closure_arg;
    MR_Integer propagate__conv0_STATE_VARIABLE_Sum_13;

    propagate__accumulate_self_counts_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), propagate__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__closure, (MR_Integer) 4))), ((MR_String) propagate__wrapper_arg_1), ((MR_Integer) propagate__wrapper_arg_2), &propagate__conv0_STATE_VARIABLE_Sum_13);
    *propagate__wrapper_arg_3 = ((MR_Box) (propagate__conv0_STATE_VARIABLE_Sum_13));
  }
}

static void MR_CALL 
propagate__process_cycle_5_p_0(
  MR_Word propagate__Preds_6,
  MR_Integer propagate__Cycle_7,
  MR_Word propagate__AddrMap_8,
  MR_Word propagate__STATE_VARIABLE_ProfNodeMap_0_21,
  MR_Word * propagate__STATE_VARIABLE_ProfNodeMap_22)
{
  {
    MR_Integer propagate__Total_10;
    MR_Integer propagate__Recursive_11;
    MR_Word propagate__ParentList_12;
    MR_String propagate__NameStr_13;
    MR_Integer propagate__SelfCounts_14;
    MR_Float propagate__PropCounts_15;
    MR_Word propagate__CycleList_16;
    MR_Word propagate__ProfNode_17;
    MR_Integer propagate__Address_18;
    MR_Float propagate__TotalCalls_19;
    MR_Float propagate__TotalCounts_20;
    MR_Word propagate__STATE_VARIABLE_ProfNodeMap_28_28;
    MR_Float propagate__Var_29;
    MR_String propagate__Var_34;
    MR_String propagate__Var_41;
    MR_Word propagate__ParentMap_49;
    MR_Word propagate__ParentAssocList_50;
    MR_Word propagate__Var_74;
    MR_Word propagate__Var_85;
    MR_String propagate__P_132;
    MR_Word propagate__Ps_133;
    MR_Word propagate__CycleList0_137;
    MR_Word propagate__PredInfo_138;
    MR_Box propagate__conv1_SelfCounts_14;
    MR_Box propagate__conv3_PropCounts_15;

    if ((propagate__Preds_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "propagate", (MR_String) "predicate \140propagate.build_parent_map\'/6", (MR_String) "empty cycle list\n");
        return;
      }
    }
    else
    {
      MR_Word propagate__Var_64;
      MR_String propagate__C_104;
      MR_Word propagate__Cs_105;
      MR_Word propagate__ProfNode_112;
      MR_Word propagate__ParentList_113;
      MR_Integer propagate__TotalCalls1_114;
      MR_Integer propagate__SelfCalls1_115;
      MR_Word propagate__STATE_VARIABLE_ParentMap_43_124;
      MR_Integer propagate__STATE_VARIABLE_TotalCalls_44_125;
      MR_Integer propagate__STATE_VARIABLE_SelfCalls_45_126;

      propagate__Var_64 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
      propagate__C_104 = ((MR_String) (MR_hl_field(MR_mktag(1), propagate__Preds_6, (MR_Integer) 0)));
      propagate__Cs_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__Preds_6, (MR_Integer) 1)));
      prof_info__get_prof_node_4_p_0(propagate__C_104, propagate__AddrMap_8, propagate__STATE_VARIABLE_ProfNodeMap_0_21, &propagate__ProfNode_112);
      prof_info__prof_node_get_parent_list_2_p_0(propagate__ProfNode_112, &propagate__ParentList_113);
      propagate__add_to_parent_map_8_p_0(propagate__ParentList_113, propagate__Preds_6, (MR_Integer) 0, &propagate__TotalCalls1_114, (MR_Integer) 0, &propagate__SelfCalls1_115, propagate__Var_64, &propagate__STATE_VARIABLE_ParentMap_43_124);
      propagate__STATE_VARIABLE_TotalCalls_44_125 = ((MR_Integer) 0 + propagate__TotalCalls1_114);
      propagate__STATE_VARIABLE_SelfCalls_45_126 = ((MR_Integer) 0 + propagate__SelfCalls1_115);
      propagate__build_parent_map_2_10_p_0(propagate__Cs_105, propagate__Preds_6, propagate__AddrMap_8, propagate__STATE_VARIABLE_ProfNodeMap_0_21, propagate__STATE_VARIABLE_TotalCalls_44_125, &propagate__Total_10, propagate__STATE_VARIABLE_SelfCalls_45_126, &propagate__Recursive_11, propagate__STATE_VARIABLE_ParentMap_43_124, &propagate__ParentMap_49);
    }
    mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, propagate__ParentMap_49, &propagate__ParentAssocList_50);
    propagate__ParentList_12 = propagate__assoc_list_to_pred_info_list_1_f_0(propagate__ParentAssocList_50);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &propagate_scalar_common_4[0], propagate__Cycle_7, &propagate__Var_34);
    propagate__Var_41 = mercury__string__f_43_43_2_f_0(propagate__Var_34, (MR_String) " as a whole >");
    propagate__NameStr_13 = mercury__string__f_43_43_2_f_0((MR_String) "< cycle ", propagate__Var_41);
    {
      propagate__Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), propagate__Var_74, 0) = ((MR_Box) (&propagate_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), propagate__Var_74, 1) = ((MR_Box) (propagate__process_cycle_5_p_0_1));
      MR_hl_field(MR_mktag(0), propagate__Var_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), propagate__Var_74, 3) = ((MR_Box) (propagate__AddrMap_8));
      MR_hl_field(MR_mktag(0), propagate__Var_74, 4) = ((MR_Box) (propagate__STATE_VARIABLE_ProfNodeMap_0_21));
    }
    mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, propagate__Var_74, propagate__Preds_6, ((MR_Box) ((MR_Integer) 0)), &propagate__conv1_SelfCounts_14);
    propagate__SelfCounts_14 = ((MR_Integer) propagate__conv1_SelfCounts_14);
    {
      propagate__Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), propagate__Var_85, 0) = ((MR_Box) (&propagate_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), propagate__Var_85, 1) = ((MR_Box) (propagate__process_cycle_5_p_0_2));
      MR_hl_field(MR_mktag(0), propagate__Var_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), propagate__Var_85, 3) = ((MR_Box) (propagate__AddrMap_8));
      MR_hl_field(MR_mktag(0), propagate__Var_85, 4) = ((MR_Box) (propagate__STATE_VARIABLE_ProfNodeMap_0_21));
    }
    mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, propagate__Var_85, propagate__Preds_6, MR_box_float((MR_Float) 0.0000000000000000), &propagate__conv3_PropCounts_15);
    propagate__PropCounts_15 = MR_unbox_float(propagate__conv3_PropCounts_15);
    propagate__P_132 = ((MR_String) (MR_hl_field(MR_mktag(1), propagate__Preds_6, (MR_Integer) 0)));
    propagate__Ps_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__Preds_6, (MR_Integer) 1)));
    propagate__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_121_99_108_101_95_108_105_115_116_95_95_91_50_44_32_51_93_95_48_4_p_0(propagate__Ps_133, &propagate__CycleList0_137);
    prof_info__pred_info_init_3_p_0(propagate__P_132, (MR_Integer) 0, &propagate__PredInfo_138);
    {
      propagate__CycleList_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), propagate__CycleList_16, 0) = ((MR_Box) (propagate__PredInfo_138));
      MR_hl_field(MR_mktag(1), propagate__CycleList_16, 1) = ((MR_Box) (propagate__CycleList0_137));
    }
    propagate__ProfNode_17 = prof_info__prof_node_init_cycle_7_f_0(propagate__NameStr_13, (MR_Integer) 0, propagate__SelfCounts_14, propagate__PropCounts_15, propagate__CycleList_16, propagate__Total_10, propagate__Recursive_11);
    propagate__Address_18 = ((MR_Integer) 0 - propagate__Cycle_7);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, propagate__Address_18, ((MR_Box) (propagate__ProfNode_17)), propagate__STATE_VARIABLE_ProfNodeMap_0_21, &propagate__STATE_VARIABLE_ProfNodeMap_28_28);
    propagate__TotalCalls_19 = mercury__float__float_1_f_0(propagate__Total_10);
    propagate__Var_29 = mercury__float__float_1_f_0(propagate__SelfCounts_14);
    propagate__TotalCounts_20 = (propagate__Var_29 + propagate__PropCounts_15);
    propagate__propagate_counts_3_6_p_0(propagate__ParentList_12, propagate__TotalCounts_20, propagate__TotalCalls_19, propagate__AddrMap_8, propagate__STATE_VARIABLE_ProfNodeMap_28_28, propagate__STATE_VARIABLE_ProfNodeMap_22);
  }
}

static void MR_CALL 
propagate__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_121_99_108_101_95_108_105_115_116_95_95_91_50_44_32_51_93_95_48_4_p_0(
  MR_Word propagate__HeadVar__1_1,
  MR_Word * propagate__HeadVar__4_4)
{
  if ((propagate__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *propagate__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_String propagate__P_7 = ((MR_String) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word propagate__Ps_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word propagate__CycleList0_12;
    MR_Word propagate__PredInfo_13;

    propagate__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_121_99_108_101_95_108_105_115_116_95_95_91_50_44_32_51_93_95_48_4_p_0(propagate__Ps_8, &propagate__CycleList0_12);
    prof_info__pred_info_init_3_p_0(propagate__P_7, (MR_Integer) 0, &propagate__PredInfo_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *propagate__HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (propagate__PredInfo_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (propagate__CycleList0_12));
    }
  }
}

static MR_Word MR_CALL 
propagate__assoc_list_to_pred_info_list_1_f_0(
  MR_Word propagate__HeadVar__1_1)
{
  {
    MR_Word propagate__HeadVar__2_2;

    if ((propagate__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      propagate__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_String propagate__S_3;
      MR_Integer propagate__I_4;
      MR_Word propagate__Xs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word propagate__List0_7;
      MR_Word propagate__PredInfo_8;
      MR_Word propagate__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 0)));

      propagate__S_3 = ((MR_String) (MR_hl_field(MR_mktag(0), propagate__Var_9, (MR_Integer) 0)));
      propagate__I_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), propagate__Var_9, (MR_Integer) 1)));
      propagate__List0_7 = propagate__assoc_list_to_pred_info_list_1_f_0(propagate__Xs_5);
      prof_info__pred_info_init_3_p_0(propagate__S_3, propagate__I_4, &propagate__PredInfo_8);
      {
        propagate__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), propagate__HeadVar__2_2, 0) = ((MR_Box) (propagate__PredInfo_8));
        MR_hl_field(MR_mktag(1), propagate__HeadVar__2_2, 1) = ((MR_Box) (propagate__List0_7));
      }
    }
    return propagate__HeadVar__2_2;
  }
}

static void MR_CALL 
propagate__build_parent_map_2_10_p_0(
  MR_Word propagate__HeadVar__1_1,
  MR_Word propagate__CliqueList_2,
  MR_Word propagate__AddrMap_3,
  MR_Word propagate__ProfNodeMap_4,
  MR_Integer propagate__STATE_VARIABLE_TotalCalls_0_5,
  MR_Integer * propagate__STATE_VARIABLE_TotalCalls_6,
  MR_Integer propagate__STATE_VARIABLE_SelfCalls_0_7,
  MR_Integer * propagate__STATE_VARIABLE_SelfCalls_8,
  MR_Word propagate__STATE_VARIABLE_ParentMap_0_9,
  MR_Word * propagate__STATE_VARIABLE_ParentMap_10)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((propagate__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *propagate__STATE_VARIABLE_ParentMap_10 = propagate__STATE_VARIABLE_ParentMap_0_9;
      *propagate__STATE_VARIABLE_SelfCalls_8 = propagate__STATE_VARIABLE_SelfCalls_0_7;
      *propagate__STATE_VARIABLE_TotalCalls_6 = propagate__STATE_VARIABLE_TotalCalls_0_5;
    }
    else
    {
      MR_String propagate__C_23 = ((MR_String) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word propagate__Cs_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word propagate__ProfNode_31;
      MR_Word propagate__ParentList_32;
      MR_Integer propagate__TotalCalls1_33;
      MR_Integer propagate__SelfCalls1_34;
      MR_Word propagate__STATE_VARIABLE_ParentMap_43_43;
      MR_Integer propagate__STATE_VARIABLE_TotalCalls_44_44;
      MR_Integer propagate__STATE_VARIABLE_SelfCalls_45_45;

      prof_info__get_prof_node_4_p_0(propagate__C_23, propagate__AddrMap_3, propagate__ProfNodeMap_4, &propagate__ProfNode_31);
      prof_info__prof_node_get_parent_list_2_p_0(propagate__ProfNode_31, &propagate__ParentList_32);
      propagate__add_to_parent_map_8_p_0(propagate__ParentList_32, propagate__CliqueList_2, (MR_Integer) 0, &propagate__TotalCalls1_33, (MR_Integer) 0, &propagate__SelfCalls1_34, propagate__STATE_VARIABLE_ParentMap_0_9, &propagate__STATE_VARIABLE_ParentMap_43_43);
      propagate__STATE_VARIABLE_TotalCalls_44_44 = (propagate__STATE_VARIABLE_TotalCalls_0_5 + propagate__TotalCalls1_33);
      propagate__STATE_VARIABLE_SelfCalls_45_45 = (propagate__STATE_VARIABLE_SelfCalls_0_7 + propagate__SelfCalls1_34);
      /* direct tailcall eliminated */
      {
        MR_Word propagate__next_value_of_HeadVar__1_1 = propagate__Cs_24;
        MR_Integer propagate__next_value_of_STATE_VARIABLE_TotalCalls_0_5 = propagate__STATE_VARIABLE_TotalCalls_44_44;
        MR_Integer propagate__next_value_of_STATE_VARIABLE_SelfCalls_0_7 = propagate__STATE_VARIABLE_SelfCalls_45_45;
        MR_Word propagate__next_value_of_STATE_VARIABLE_ParentMap_0_9 = propagate__STATE_VARIABLE_ParentMap_43_43;

        propagate__HeadVar__1_1 = propagate__next_value_of_HeadVar__1_1;
        propagate__STATE_VARIABLE_TotalCalls_0_5 = propagate__next_value_of_STATE_VARIABLE_TotalCalls_0_5;
        propagate__STATE_VARIABLE_SelfCalls_0_7 = propagate__next_value_of_STATE_VARIABLE_SelfCalls_0_7;
        propagate__STATE_VARIABLE_ParentMap_0_9 = propagate__next_value_of_STATE_VARIABLE_ParentMap_0_9;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
propagate__add_to_parent_map_8_p_0(
  MR_Word propagate__HeadVar__1_1,
  MR_Word propagate__CliqueList_2,
  MR_Integer propagate__STATE_VARIABLE_TotalCalls_0_3,
  MR_Integer * propagate__STATE_VARIABLE_TotalCalls_4,
  MR_Integer propagate__STATE_VARIABLE_SelfCalls_0_5,
  MR_Integer * propagate__STATE_VARIABLE_SelfCalls_6,
  MR_Word propagate__STATE_VARIABLE_ParentMap_0_7,
  MR_Word * propagate__STATE_VARIABLE_ParentMap_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool propagate__succeeded;

      if ((propagate__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *propagate__STATE_VARIABLE_ParentMap_8 = propagate__STATE_VARIABLE_ParentMap_0_7;
        *propagate__STATE_VARIABLE_SelfCalls_6 = propagate__STATE_VARIABLE_SelfCalls_0_5;
        *propagate__STATE_VARIABLE_TotalCalls_4 = propagate__STATE_VARIABLE_TotalCalls_0_3;
      }
      else
      {
        MR_Word propagate__Pred_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word propagate__Preds_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 1)));
        MR_String propagate__PredName_25;
        MR_Integer propagate__Counts_26;

        prof_info__pred_info_get_pred_name_2_p_0(propagate__Pred_19, &propagate__PredName_25);
        prof_info__pred_info_get_counts_2_p_0(propagate__Pred_19, &propagate__Counts_26);
        propagate__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (propagate__PredName_25)), propagate__CliqueList_2);
        if (!(propagate__succeeded))
          propagate__succeeded = (propagate__Counts_26 == (MR_Integer) 0);
        if (propagate__succeeded)
        {
          MR_Integer propagate__STATE_VARIABLE_SelfCalls_35_35 = (propagate__STATE_VARIABLE_SelfCalls_0_5 + propagate__Counts_26);

          /* direct tailcall eliminated */
          {
            MR_Word propagate__next_value_of_HeadVar__1_1 = propagate__Preds_20;
            MR_Integer propagate__next_value_of_STATE_VARIABLE_SelfCalls_0_5 = propagate__STATE_VARIABLE_SelfCalls_35_35;

            propagate__HeadVar__1_1 = propagate__next_value_of_HeadVar__1_1;
            propagate__STATE_VARIABLE_SelfCalls_0_5 = propagate__next_value_of_STATE_VARIABLE_SelfCalls_0_5;
          }
          continue;
        }
        else
        {
          MR_Word propagate__STATE_VARIABLE_ParentMap_39_39;
          MR_Integer propagate__STATE_VARIABLE_TotalCalls_41_41;
          MR_Integer propagate__CurrCount0_27;
          MR_Box propagate__conv0_CurrCount0_27;

          propagate__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, propagate__STATE_VARIABLE_ParentMap_0_7, ((MR_Box) (propagate__PredName_25)), &propagate__conv0_CurrCount0_27);
          if (propagate__succeeded)
          {
            propagate__CurrCount0_27 = ((MR_Integer) propagate__conv0_CurrCount0_27);
            propagate__succeeded = MR_TRUE;
          }
          if (propagate__succeeded)
          {
            MR_Integer propagate__CurrCount_28 = (propagate__CurrCount0_27 + propagate__Counts_26);

            mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (propagate__PredName_25)), ((MR_Box) (propagate__CurrCount_28)), propagate__STATE_VARIABLE_ParentMap_0_7, &propagate__STATE_VARIABLE_ParentMap_39_39);
          }
          else
          {
            mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (propagate__PredName_25)), ((MR_Box) (propagate__Counts_26)), propagate__STATE_VARIABLE_ParentMap_0_7, &propagate__STATE_VARIABLE_ParentMap_39_39);
          }
          propagate__STATE_VARIABLE_TotalCalls_41_41 = (propagate__STATE_VARIABLE_TotalCalls_0_3 + propagate__Counts_26);
          /* direct tailcall eliminated */
          {
            MR_Word propagate__next_value_of_HeadVar__1_1 = propagate__Preds_20;
            MR_Integer propagate__next_value_of_STATE_VARIABLE_TotalCalls_0_3 = propagate__STATE_VARIABLE_TotalCalls_41_41;
            MR_Word propagate__next_value_of_STATE_VARIABLE_ParentMap_0_7 = propagate__STATE_VARIABLE_ParentMap_39_39;

            propagate__HeadVar__1_1 = propagate__next_value_of_HeadVar__1_1;
            propagate__STATE_VARIABLE_TotalCalls_0_3 = propagate__next_value_of_STATE_VARIABLE_TotalCalls_0_3;
            propagate__STATE_VARIABLE_ParentMap_0_7 = propagate__next_value_of_STATE_VARIABLE_ParentMap_0_7;
          }
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
propagate__propagate_counts_3_6_p_0(
  MR_Word propagate__HeadVar__1_1,
  MR_Float propagate__TotalCounts_2,
  MR_Float propagate__TotalCalls_3,
  MR_Word propagate__AddrMap_4,
  MR_Word propagate__STATE_VARIABLE_ProfNodeMap_0_5,
  MR_Word * propagate__STATE_VARIABLE_ProfNodeMap_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((propagate__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *propagate__STATE_VARIABLE_ProfNodeMap_6 = propagate__STATE_VARIABLE_ProfNodeMap_0_5;
    else
    {
      MR_Word propagate__P_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word propagate__Ps_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 1)));
      MR_String propagate__Pred_19;
      MR_Integer propagate__Calls_20;
      MR_Float propagate__ToPropagateCounts_21;
      MR_Word propagate__ProfNode0_22;
      MR_Float propagate__PropCount0_23;
      MR_Float propagate__PropCount_24;
      MR_Word propagate__ProfNode_25;
      MR_Float propagate__Var_28;
      MR_Float propagate__Var_29;
      MR_Word propagate__STATE_VARIABLE_ProfNodeMap_30_30;

      prof_info__pred_info_get_entire_3_p_0(propagate__P_13, &propagate__Pred_19, &propagate__Calls_20);
      propagate__Var_29 = mercury__float__float_1_f_0(propagate__Calls_20);
      propagate__Var_28 = mercury__float__f_slash_2_f_0(propagate__Var_29, propagate__TotalCalls_3);
      propagate__ToPropagateCounts_21 = (propagate__Var_28 * propagate__TotalCounts_2);
      prof_info__get_prof_node_4_p_0(propagate__Pred_19, propagate__AddrMap_4, propagate__STATE_VARIABLE_ProfNodeMap_0_5, &propagate__ProfNode0_22);
      prof_info__prof_node_get_propagated_counts_2_p_0(propagate__ProfNode0_22, &propagate__PropCount0_23);
      propagate__PropCount_24 = (propagate__PropCount0_23 + propagate__ToPropagateCounts_21);
      prof_info__prof_node_set_propagated_counts_3_p_0(propagate__PropCount_24, propagate__ProfNode0_22, &propagate__ProfNode_25);
      prof_info__update_prof_node_5_p_0(propagate__Pred_19, propagate__ProfNode_25, propagate__AddrMap_4, propagate__STATE_VARIABLE_ProfNodeMap_0_5, &propagate__STATE_VARIABLE_ProfNodeMap_30_30);
      /* direct tailcall eliminated */
      {
        MR_Word propagate__next_value_of_HeadVar__1_1 = propagate__Ps_14;
        MR_Word propagate__next_value_of_STATE_VARIABLE_ProfNodeMap_0_5 = propagate__STATE_VARIABLE_ProfNodeMap_30_30;

        propagate__HeadVar__1_1 = propagate__next_value_of_HeadVar__1_1;
        propagate__STATE_VARIABLE_ProfNodeMap_0_5 = propagate__next_value_of_STATE_VARIABLE_ProfNodeMap_0_5;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
propagate__update_cycles_2_4_p_0(
  MR_Word propagate__HeadVar__1_1,
  MR_Word propagate__AddrDecl_2,
  MR_Word propagate__STATE_VARIABLE_ProfNodeMap_0_3,
  MR_Word * propagate__STATE_VARIABLE_ProfNodeMap_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((propagate__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *propagate__STATE_VARIABLE_ProfNodeMap_4 = propagate__STATE_VARIABLE_ProfNodeMap_0_3;
    else
    {
      MR_Integer propagate__Num_9;
      MR_Word propagate__Preds_10;
      MR_Word propagate__Rest_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word propagate__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word propagate__STATE_VARIABLE_ProfNodeMap_17_17;

      propagate__Num_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), propagate__Var_16, (MR_Integer) 0)));
      propagate__Preds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__Var_16, (MR_Integer) 1)));
      propagate__update_cycles_3_5_p_0(propagate__Preds_10, propagate__Num_9, propagate__AddrDecl_2, propagate__STATE_VARIABLE_ProfNodeMap_0_3, &propagate__STATE_VARIABLE_ProfNodeMap_17_17);
      /* direct tailcall eliminated */
      {
        MR_Word propagate__next_value_of_HeadVar__1_1 = propagate__Rest_11;
        MR_Word propagate__next_value_of_STATE_VARIABLE_ProfNodeMap_0_3 = propagate__STATE_VARIABLE_ProfNodeMap_17_17;

        propagate__HeadVar__1_1 = propagate__next_value_of_HeadVar__1_1;
        propagate__STATE_VARIABLE_ProfNodeMap_0_3 = propagate__next_value_of_STATE_VARIABLE_ProfNodeMap_0_3;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
propagate__update_cycles_3_5_p_0(
  MR_Word propagate__HeadVar__1_1,
  MR_Integer propagate__CycleNum_2,
  MR_Word propagate__AddrDecl_3,
  MR_Word propagate__STATE_VARIABLE_ProfNodeMap_0_4,
  MR_Word * propagate__STATE_VARIABLE_ProfNodeMap_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((propagate__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *propagate__STATE_VARIABLE_ProfNodeMap_5 = propagate__STATE_VARIABLE_ProfNodeMap_0_4;
    else
    {
      MR_String propagate__P_11 = ((MR_String) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word propagate__Ps_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word propagate__ProfNode0_16;
      MR_Word propagate__ProfNode_17;
      MR_Word propagate__STATE_VARIABLE_ProfNodeMap_20_20;

      prof_info__get_prof_node_4_p_0(propagate__P_11, propagate__AddrDecl_3, propagate__STATE_VARIABLE_ProfNodeMap_0_4, &propagate__ProfNode0_16);
      prof_info__prof_node_set_cycle_num_3_p_0(propagate__CycleNum_2, propagate__ProfNode0_16, &propagate__ProfNode_17);
      prof_info__update_prof_node_5_p_0(propagate__P_11, propagate__ProfNode_17, propagate__AddrDecl_3, propagate__STATE_VARIABLE_ProfNodeMap_0_4, &propagate__STATE_VARIABLE_ProfNodeMap_20_20);
      /* direct tailcall eliminated */
      {
        MR_Word propagate__next_value_of_HeadVar__1_1 = propagate__Ps_12;
        MR_Word propagate__next_value_of_STATE_VARIABLE_ProfNodeMap_0_4 = propagate__STATE_VARIABLE_ProfNodeMap_20_20;

        propagate__HeadVar__1_1 = propagate__next_value_of_HeadVar__1_1;
        propagate__STATE_VARIABLE_ProfNodeMap_0_4 = propagate__next_value_of_STATE_VARIABLE_ProfNodeMap_0_4;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
propagate__identify_cycles_2_10_p_0_1(
  MR_Box propagate__closure_arg,
  MR_Box propagate__wrapper_arg_1,
  MR_Box * propagate__wrapper_arg_2)
{
  {
    MR_Box propagate__closure = propagate__closure_arg;
    MR_String propagate__conv0_HeadVar__3_61;

    propagate__IntroducedFrom__pred__identify_cycles_2__107__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), propagate__closure, (MR_Integer) 3))), ((MR_Word) propagate__wrapper_arg_1), &propagate__conv0_HeadVar__3_61);
    *propagate__wrapper_arg_2 = ((MR_Box) (propagate__conv0_HeadVar__3_61));
  }
}

static void MR_CALL 
propagate__identify_cycles_2_10_p_0(
  MR_Word propagate__HeadVar__1_1,
  MR_Integer propagate__CycleNum0_2,
  MR_Word propagate__InvG_3,
  MR_Word propagate__Visit0_4,
  MR_Word propagate__STATE_VARIABLE_ATSort_0_5,
  MR_Word * propagate__STATE_VARIABLE_ATSort_6,
  MR_Word propagate__STATE_VARIABLE_PredToCycleMap_0_7,
  MR_Word * propagate__STATE_VARIABLE_PredToCycleMap_8,
  MR_Word propagate__STATE_VARIABLE_CycleToPredsMap_0_9,
  MR_Word * propagate__STATE_VARIABLE_CycleToPredsMap_10)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((propagate__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *propagate__STATE_VARIABLE_CycleToPredsMap_10 = propagate__STATE_VARIABLE_CycleToPredsMap_0_9;
      *propagate__STATE_VARIABLE_PredToCycleMap_8 = propagate__STATE_VARIABLE_PredToCycleMap_0_7;
      *propagate__STATE_VARIABLE_ATSort_6 = propagate__STATE_VARIABLE_ATSort_0_5;
    }
    else
    {
      MR_Word propagate__TypeCtorInfo_59_59 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      MR_Word propagate__TypeInfo_63_63;
      MR_Word propagate__Key_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word propagate__Keys0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word propagate__Visit_31;
      MR_Word propagate__DfsRev0_32;
      MR_Word propagate__DfsRev_33;
      MR_Integer propagate__CycleNum_35;
      MR_Word propagate__Keys_39;
      MR_Word propagate__Var_46;
      MR_Word propagate__STATE_VARIABLE_PredToCycleMap_49_49;
      MR_Word propagate__STATE_VARIABLE_CycleToPredsMap_50_50;
      MR_Word propagate__STATE_VARIABLE_ATSort_55_55;

      mercury__digraph__dfsrev_5_p_0(propagate__TypeCtorInfo_59_59, propagate__InvG_3, propagate__Key_23, propagate__Visit0_4, &propagate__Visit_31, &propagate__DfsRev0_32);
      {
        propagate__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), propagate__Var_46, 0) = ((MR_Box) (&propagate_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), propagate__Var_46, 1) = ((MR_Box) (propagate__identify_cycles_2_10_p_0_1));
        MR_hl_field(MR_mktag(0), propagate__Var_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), propagate__Var_46, 3) = ((MR_Box) (propagate__InvG_3));
      }
      propagate__TypeInfo_63_63 = (MR_Word) &propagate_scalar_common_1[0];
      mercury__list__map_3_p_0(propagate__TypeInfo_63_63, propagate__TypeCtorInfo_59_59, propagate__Var_46, propagate__DfsRev0_32, &propagate__DfsRev_33);
      if ((propagate__DfsRev_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "propagate", (MR_String) "predicate \140propagate.identify_cycles_2\'/10", (MR_String) "empty list\n");
          return;
        }
      }
      else
      {
        MR_Word propagate__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__DfsRev_33, (MR_Integer) 1)));
        MR_String propagate__Var_65 = ((MR_String) (MR_hl_field(MR_mktag(1), propagate__DfsRev_33, (MR_Integer) 0)));

        if ((propagate__Var_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          propagate__CycleNum_35 = propagate__CycleNum0_2;
          propagate__STATE_VARIABLE_PredToCycleMap_49_49 = propagate__STATE_VARIABLE_PredToCycleMap_0_7;
          propagate__STATE_VARIABLE_CycleToPredsMap_50_50 = propagate__STATE_VARIABLE_CycleToPredsMap_0_9;
        }
        else
        {
          MR_Word propagate__TypeCtorInfo_27_86;
          MR_Word propagate__TypeCtorInfo_28_87;
          MR_Word propagate__STATE_VARIABLE_PredToCycleMap_23_82;
          MR_Word propagate__STATE_VARIABLE_CycleToPredsMap_24_83;

          propagate__CycleNum_35 = (propagate__CycleNum0_2 + (MR_Integer) 1);
          propagate__TypeCtorInfo_27_86 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          propagate__TypeCtorInfo_28_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          mercury__map__det_insert_4_p_0(propagate__TypeCtorInfo_27_86, propagate__TypeCtorInfo_28_87, ((MR_Box) (propagate__Var_65)), ((MR_Box) (propagate__CycleNum_35)), propagate__STATE_VARIABLE_PredToCycleMap_0_7, &propagate__STATE_VARIABLE_PredToCycleMap_23_82);
          mercury__multi_map__set_4_p_0(propagate__TypeCtorInfo_28_87, propagate__TypeCtorInfo_27_86, ((MR_Box) (propagate__CycleNum_35)), ((MR_Box) (propagate__Var_65)), propagate__STATE_VARIABLE_CycleToPredsMap_0_9, &propagate__STATE_VARIABLE_CycleToPredsMap_24_83);
          propagate__add_to_cycle_map_6_p_0(propagate__Var_64, propagate__CycleNum_35, propagate__STATE_VARIABLE_PredToCycleMap_23_82, &propagate__STATE_VARIABLE_PredToCycleMap_49_49, propagate__STATE_VARIABLE_CycleToPredsMap_24_83, &propagate__STATE_VARIABLE_CycleToPredsMap_50_50);
        }
      }
      mercury__list__append_3_p_1(propagate__TypeCtorInfo_59_59, propagate__DfsRev_33, propagate__STATE_VARIABLE_ATSort_0_5, &propagate__STATE_VARIABLE_ATSort_55_55);
      mercury__list__delete_elems_3_p_0(propagate__TypeInfo_63_63, propagate__Keys0_24, propagate__DfsRev0_32, &propagate__Keys_39);
      /* direct tailcall eliminated */
      {
        MR_Word propagate__next_value_of_HeadVar__1_1 = propagate__Keys_39;
        MR_Integer propagate__next_value_of_CycleNum0_2 = propagate__CycleNum_35;
        MR_Word propagate__next_value_of_Visit0_4 = propagate__Visit_31;
        MR_Word propagate__next_value_of_STATE_VARIABLE_ATSort_0_5 = propagate__STATE_VARIABLE_ATSort_55_55;
        MR_Word propagate__next_value_of_STATE_VARIABLE_PredToCycleMap_0_7 = propagate__STATE_VARIABLE_PredToCycleMap_49_49;
        MR_Word propagate__next_value_of_STATE_VARIABLE_CycleToPredsMap_0_9 = propagate__STATE_VARIABLE_CycleToPredsMap_50_50;

        propagate__HeadVar__1_1 = propagate__next_value_of_HeadVar__1_1;
        propagate__CycleNum0_2 = propagate__next_value_of_CycleNum0_2;
        propagate__Visit0_4 = propagate__next_value_of_Visit0_4;
        propagate__STATE_VARIABLE_ATSort_0_5 = propagate__next_value_of_STATE_VARIABLE_ATSort_0_5;
        propagate__STATE_VARIABLE_PredToCycleMap_0_7 = propagate__next_value_of_STATE_VARIABLE_PredToCycleMap_0_7;
        propagate__STATE_VARIABLE_CycleToPredsMap_0_9 = propagate__next_value_of_STATE_VARIABLE_CycleToPredsMap_0_9;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
propagate__add_to_cycle_map_6_p_0(
  MR_Word propagate__HeadVar__1_1,
  MR_Integer propagate__Cycle_2,
  MR_Word propagate__STATE_VARIABLE_PredToCycleMap_0_3,
  MR_Word * propagate__STATE_VARIABLE_PredToCycleMap_4,
  MR_Word propagate__STATE_VARIABLE_CycleToPredsMap_0_5,
  MR_Word * propagate__STATE_VARIABLE_CycleToPredsMap_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((propagate__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *propagate__STATE_VARIABLE_CycleToPredsMap_6 = propagate__STATE_VARIABLE_CycleToPredsMap_0_5;
      *propagate__STATE_VARIABLE_PredToCycleMap_4 = propagate__STATE_VARIABLE_PredToCycleMap_0_3;
    }
    else
    {
      MR_Word propagate__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      MR_Word propagate__TypeCtorInfo_28_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      MR_String propagate__Pred_14 = ((MR_String) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word propagate__Preds_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word propagate__STATE_VARIABLE_PredToCycleMap_23_23;
      MR_Word propagate__STATE_VARIABLE_CycleToPredsMap_24_24;

      mercury__map__det_insert_4_p_0(propagate__TypeCtorInfo_27_27, propagate__TypeCtorInfo_28_28, ((MR_Box) (propagate__Pred_14)), ((MR_Box) (propagate__Cycle_2)), propagate__STATE_VARIABLE_PredToCycleMap_0_3, &propagate__STATE_VARIABLE_PredToCycleMap_23_23);
      mercury__multi_map__set_4_p_0(propagate__TypeCtorInfo_28_28, propagate__TypeCtorInfo_27_27, ((MR_Box) (propagate__Cycle_2)), ((MR_Box) (propagate__Pred_14)), propagate__STATE_VARIABLE_CycleToPredsMap_0_5, &propagate__STATE_VARIABLE_CycleToPredsMap_24_24);
      /* direct tailcall eliminated */
      {
        MR_Word propagate__next_value_of_HeadVar__1_1 = propagate__Preds_15;
        MR_Word propagate__next_value_of_STATE_VARIABLE_PredToCycleMap_0_3 = propagate__STATE_VARIABLE_PredToCycleMap_23_23;
        MR_Word propagate__next_value_of_STATE_VARIABLE_CycleToPredsMap_0_5 = propagate__STATE_VARIABLE_CycleToPredsMap_24_24;

        propagate__HeadVar__1_1 = propagate__next_value_of_HeadVar__1_1;
        propagate__STATE_VARIABLE_PredToCycleMap_0_3 = propagate__next_value_of_STATE_VARIABLE_PredToCycleMap_0_3;
        propagate__STATE_VARIABLE_CycleToPredsMap_0_5 = propagate__next_value_of_STATE_VARIABLE_CycleToPredsMap_0_5;
      }
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
propagate____Unify____cycle_info_0_0_10001(
  MR_Box propagate__wrapper_arg_1,
  MR_Box propagate__wrapper_arg_2)
{
  {
    MR_bool propagate__succeeded;

    propagate__succeeded = propagate____Unify____cycle_info_0_0(((MR_Word) propagate__wrapper_arg_1), ((MR_Word) propagate__wrapper_arg_2));
    return propagate__succeeded;
  }
}

static void MR_CALL 
propagate____Compare____cycle_info_0_0_10001(
  MR_Box * propagate__wrapper_arg_1,
  MR_Box propagate__wrapper_arg_2,
  MR_Box propagate__wrapper_arg_3)
{
  {
    MR_Word propagate__conv0_HeadVar__1_1;

    propagate____Compare____cycle_info_0_0(&propagate__conv0_HeadVar__1_1, ((MR_Word) propagate__wrapper_arg_2), ((MR_Word) propagate__wrapper_arg_3));
    *propagate__wrapper_arg_1 = ((MR_Box) (propagate__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
propagate____Unify____cycle_to_preds_map_0_0_10001(
  MR_Box propagate__wrapper_arg_1,
  MR_Box propagate__wrapper_arg_2)
{
  {
    MR_bool propagate__succeeded;

    propagate__succeeded = propagate____Unify____cycle_to_preds_map_0_0(((MR_Word) propagate__wrapper_arg_1), ((MR_Word) propagate__wrapper_arg_2));
    return propagate__succeeded;
  }
}

static void MR_CALL 
propagate____Compare____cycle_to_preds_map_0_0_10001(
  MR_Box * propagate__wrapper_arg_1,
  MR_Box propagate__wrapper_arg_2,
  MR_Box propagate__wrapper_arg_3)
{
  {
    MR_Word propagate__conv0_HeadVar__1_1;

    propagate____Compare____cycle_to_preds_map_0_0(&propagate__conv0_HeadVar__1_1, ((MR_Word) propagate__wrapper_arg_2), ((MR_Word) propagate__wrapper_arg_3));
    *propagate__wrapper_arg_1 = ((MR_Box) (propagate__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
propagate____Unify____pred_to_cycle_map_0_0_10001(
  MR_Box propagate__wrapper_arg_1,
  MR_Box propagate__wrapper_arg_2)
{
  {
    MR_bool propagate__succeeded;

    propagate__succeeded = propagate____Unify____pred_to_cycle_map_0_0(((MR_Word) propagate__wrapper_arg_1), ((MR_Word) propagate__wrapper_arg_2));
    return propagate__succeeded;
  }
}

static void MR_CALL 
propagate____Compare____pred_to_cycle_map_0_0_10001(
  MR_Box * propagate__wrapper_arg_1,
  MR_Box propagate__wrapper_arg_2,
  MR_Box propagate__wrapper_arg_3)
{
  {
    MR_Word propagate__conv0_HeadVar__1_1;

    propagate____Compare____pred_to_cycle_map_0_0(&propagate__conv0_HeadVar__1_1, ((MR_Word) propagate__wrapper_arg_2), ((MR_Word) propagate__wrapper_arg_3));
    *propagate__wrapper_arg_1 = ((MR_Box) (propagate__conv0_HeadVar__1_1));
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

/* :- end_module propagate. */
