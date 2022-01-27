/*
** Automatically generated from `propagate.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "prof_info.mih"
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




#line 71 "propagate.c"
static const MR_FA_PseudoTypeInfo_Struct1 propagate__digraph__pti_digraph_1__plain_builtin__type_ctor_info_string_0;

#line 74 "propagate.c"
static const MR_FA_PseudoTypeInfo_Struct1 propagate__digraph__pti_digraph_key_1__plain_builtin__type_ctor_info_string_0;

#line 77 "propagate.c"
static const MR_FA_PseudoTypeInfo_Struct2 propagate__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0;

#line 80 "propagate.c"
static const MR_FA_PseudoTypeInfo_Struct2 propagate__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_prof_info__type_ctor_info_prof_node_0;

#line 83 "propagate.c"
static const MR_FA_TypeInfo_Struct2 propagate__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 86 "propagate.c"
static const MR_FA_TypeInfo_Struct1 propagate__list__ti_list_1builtin__type_ctor_info_string_0;

#line 89 "propagate.c"
static const MR_FA_TypeInfo_Struct2 propagate__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 92 "propagate.c"
static const MR_PseudoTypeInfo propagate__propagate__field_types_cycle_info_0_0[2];

#line 95 "propagate.c"
static const MR_ConstString propagate__propagate__field_names_cycle_info_0_0[2];

#line 98 "propagate.c"
static const MR_DuFunctorDesc propagate__propagate__du_functor_desc_cycle_info_0_0;

#line 101 "propagate.c"
static const MR_DuFunctorDescPtr propagate__propagate__du_stag_ordered_cycle_info_0_0[1];

#line 104 "propagate.c"
static const MR_DuPtagLayout propagate__propagate__du_ptag_ordered_cycle_info_0[1];

#line 107 "propagate.c"
static const MR_DuFunctorDescPtr propagate__propagate__du_name_ordered_cycle_info_0[1];

#line 110 "propagate.c"
static const MR_Integer propagate__propagate__functor_number_map_cycle_info_0[1];

#line 113 "propagate.c"
static MR_bool MR_CALL 
propagate____Unify____cycle_info_0_0_10001(
#line 116 "propagate.c"
  MR_Box propagate__wrapper_arg_1,
#line 118 "propagate.c"
  MR_Box propagate__wrapper_arg_2);

#line 121 "propagate.c"
static void MR_CALL 
propagate____Compare____cycle_info_0_0_10001(
#line 124 "propagate.c"
  MR_Box * propagate__wrapper_arg_1,
#line 126 "propagate.c"
  MR_Box propagate__wrapper_arg_2,
#line 128 "propagate.c"
  MR_Box propagate__wrapper_arg_3);

#line 131 "propagate.c"
static MR_bool MR_CALL 
propagate____Unify____cycle_to_preds_map_0_0_10001(
#line 134 "propagate.c"
  MR_Box propagate__wrapper_arg_1,
#line 136 "propagate.c"
  MR_Box propagate__wrapper_arg_2);

#line 139 "propagate.c"
static void MR_CALL 
propagate____Compare____cycle_to_preds_map_0_0_10001(
#line 142 "propagate.c"
  MR_Box * propagate__wrapper_arg_1,
#line 144 "propagate.c"
  MR_Box propagate__wrapper_arg_2,
#line 146 "propagate.c"
  MR_Box propagate__wrapper_arg_3);

#line 149 "propagate.c"
static MR_bool MR_CALL 
propagate____Unify____pred_to_cycle_map_0_0_10001(
#line 152 "propagate.c"
  MR_Box propagate__wrapper_arg_1,
#line 154 "propagate.c"
  MR_Box propagate__wrapper_arg_2);

#line 157 "propagate.c"
static void MR_CALL 
propagate____Compare____pred_to_cycle_map_0_0_10001(
#line 160 "propagate.c"
  MR_Box * propagate__wrapper_arg_1,
#line 162 "propagate.c"
  MR_Box propagate__wrapper_arg_2,
#line 164 "propagate.c"
  MR_Box propagate__wrapper_arg_3);

#line 284 "propagate.m"
static void MR_CALL 
propagate__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_121_99_108_101_95_108_105_115_116_95_95_91_50_44_32_51_93_95_48_4_p_0(
#line 284 "propagate.m"
  MR_Word propagate__HeadVar__1_1,
#line 284 "propagate.m"
  MR_Word * propagate__HeadVar__4_4);

#line 107 "propagate.m"
static void MR_CALL 
propagate__IntroducedFrom__pred__identify_cycles_2__107__1_3_p_0(
#line 107 "propagate.m"
  MR_Word propagate__InvG_3,
#line 107 "propagate.m"
  MR_Word propagate__HeadVar__2_58,
#line 107 "propagate.m"
  MR_String * propagate__HeadVar__3_59);

#line 54 "propagate.m"
static void MR_CALL 
propagate____Compare____pred_to_cycle_map_0_0(
#line 54 "propagate.m"
  MR_Word * propagate__HeadVar__1_1,
#line 54 "propagate.m"
  MR_Word propagate__HeadVar__2_2,
#line 54 "propagate.m"
  MR_Word propagate__HeadVar__3_3);

#line 54 "propagate.m"
static MR_bool MR_CALL 
propagate____Unify____pred_to_cycle_map_0_0(
#line 54 "propagate.m"
  MR_Word propagate__HeadVar__1_1,
#line 54 "propagate.m"
  MR_Word propagate__HeadVar__2_2);

#line 55 "propagate.m"
static void MR_CALL 
propagate____Compare____cycle_to_preds_map_0_0(
#line 55 "propagate.m"
  MR_Word * propagate__HeadVar__1_1,
#line 55 "propagate.m"
  MR_Word propagate__HeadVar__2_2,
#line 55 "propagate.m"
  MR_Word propagate__HeadVar__3_3);

#line 55 "propagate.m"
static MR_bool MR_CALL 
propagate____Unify____cycle_to_preds_map_0_0(
#line 55 "propagate.m"
  MR_Word propagate__HeadVar__1_1,
#line 55 "propagate.m"
  MR_Word propagate__HeadVar__2_2);

#line 57 "propagate.m"
static void MR_CALL 
propagate____Compare____cycle_info_0_0(
#line 57 "propagate.m"
  MR_Word * propagate__HeadVar__1_1,
#line 57 "propagate.m"
  MR_Word propagate__HeadVar__2_2,
#line 57 "propagate.m"
  MR_Word propagate__HeadVar__3_3);

#line 57 "propagate.m"
static MR_bool MR_CALL 
propagate____Unify____cycle_info_0_0(
#line 57 "propagate.m"
  MR_Word propagate__HeadVar__1_1,
#line 57 "propagate.m"
  MR_Word propagate__HeadVar__2_2);

#line 407 "propagate.m"
static MR_Word MR_CALL 
propagate__assoc_list_to_pred_info_list_1_f_0(
#line 407 "propagate.m"
  MR_Word propagate__HeadVar__1_1);

#line 376 "propagate.m"
static void MR_CALL 
propagate__add_to_parent_map_8_p_0(
#line 376 "propagate.m"
  MR_Word propagate__HeadVar__1_1,
#line 376 "propagate.m"
  MR_Word propagate__CliqueList_2,
#line 376 "propagate.m"
  MR_Integer propagate__STATE_VARIABLE_TotalCalls_0_3,
#line 376 "propagate.m"
  MR_Integer * propagate__STATE_VARIABLE_TotalCalls_4,
#line 376 "propagate.m"
  MR_Integer propagate__STATE_VARIABLE_SelfCalls_0_5,
#line 376 "propagate.m"
  MR_Integer * propagate__STATE_VARIABLE_SelfCalls_6,
#line 376 "propagate.m"
  MR_Word propagate__STATE_VARIABLE_ParentMap_0_7,
#line 376 "propagate.m"
  MR_Word * propagate__STATE_VARIABLE_ParentMap_8);

#line 352 "propagate.m"
static void MR_CALL 
propagate__build_parent_map_2_10_p_0(
#line 352 "propagate.m"
  MR_Word propagate__HeadVar__1_1,
#line 352 "propagate.m"
  MR_Word propagate__CliqueList_2,
#line 352 "propagate.m"
  MR_Word propagate__AddrMap_3,
#line 352 "propagate.m"
  MR_Word propagate__ProfNodeMap_4,
#line 352 "propagate.m"
  MR_Integer propagate__STATE_VARIABLE_TotalCalls_0_5,
#line 352 "propagate.m"
  MR_Integer * propagate__STATE_VARIABLE_TotalCalls_6,
#line 352 "propagate.m"
  MR_Integer propagate__STATE_VARIABLE_SelfCalls_0_7,
#line 352 "propagate.m"
  MR_Integer * propagate__STATE_VARIABLE_SelfCalls_8,
#line 352 "propagate.m"
  MR_Word propagate__STATE_VARIABLE_ParentMap_0_9,
#line 352 "propagate.m"
  MR_Word * propagate__STATE_VARIABLE_ParentMap_10);

#line 293 "propagate.m"
static void MR_CALL 
propagate__propagate_counts_3_6_p_0(
#line 293 "propagate.m"
  MR_Word propagate__HeadVar__1_1,
#line 293 "propagate.m"
  MR_Float propagate__TotalCounts_2,
#line 293 "propagate.m"
  MR_Float propagate__TotalCalls_3,
#line 293 "propagate.m"
  MR_Word propagate__AddrMap_4,
#line 293 "propagate.m"
  MR_Word propagate__STATE_VARIABLE_ProfNodeMap_0_5,
#line 293 "propagate.m"
  MR_Word * propagate__STATE_VARIABLE_ProfNodeMap_6);

#line 270 "propagate.m"
static void MR_CALL 
propagate__accumulate_propagated_counts_5_p_0(
#line 270 "propagate.m"
  MR_Word propagate__ADMap_6,
#line 270 "propagate.m"
  MR_Word propagate__PNMap_7,
#line 270 "propagate.m"
  MR_String propagate__Pred_8,
#line 270 "propagate.m"
  MR_Float propagate__STATE_VARIABLE_Sum_0_12,
#line 270 "propagate.m"
  MR_Float * propagate__STATE_VARIABLE_Sum_13);

#line 253 "propagate.m"
static void MR_CALL 
propagate__accumulate_self_counts_5_p_0(
#line 253 "propagate.m"
  MR_Word propagate__ADMap_6,
#line 253 "propagate.m"
  MR_Word propagate__PNMap_7,
#line 253 "propagate.m"
  MR_String propagate__Pred_8,
#line 253 "propagate.m"
  MR_Integer propagate__STATE_VARIABLE_Sum_0_12,
#line 253 "propagate.m"
  MR_Integer * propagate__STATE_VARIABLE_Sum_13);

#line 268 "propagate.m"
static void MR_CALL 
propagate__process_cycle_5_p_0_2(
#line 268 "propagate.m"
  MR_Box propagate__closure_arg,
#line 268 "propagate.m"
  MR_Box propagate__wrapper_arg_1,
#line 268 "propagate.m"
  MR_Box propagate__wrapper_arg_2,
#line 268 "propagate.m"
  MR_Box * propagate__wrapper_arg_3);

#line 251 "propagate.m"
static void MR_CALL 
propagate__process_cycle_5_p_0_1(
#line 251 "propagate.m"
  MR_Box propagate__closure_arg,
#line 251 "propagate.m"
  MR_Box propagate__wrapper_arg_1,
#line 251 "propagate.m"
  MR_Box propagate__wrapper_arg_2,
#line 251 "propagate.m"
  MR_Box * propagate__wrapper_arg_3);

#line 212 "propagate.m"
static void MR_CALL 
propagate__process_cycle_5_p_0(
#line 212 "propagate.m"
  MR_Word propagate__Preds_6,
#line 212 "propagate.m"
  MR_Integer propagate__Cycle_7,
#line 212 "propagate.m"
  MR_Word propagate__AddrMap_8,
#line 212 "propagate.m"
  MR_Word propagate__STATE_VARIABLE_ProfNodeMap_0_21,
#line 212 "propagate.m"
  MR_Word * propagate__STATE_VARIABLE_ProfNodeMap_22);

#line 176 "propagate.m"
static void MR_CALL 
propagate__propagate_counts_2_5_p_0(
#line 176 "propagate.m"
  MR_Word propagate__HeadVar__1_1,
#line 176 "propagate.m"
  MR_Word propagate__CycleInfo_2,
#line 176 "propagate.m"
  MR_Word propagate__AddrDeclMap_3,
#line 176 "propagate.m"
  MR_Word propagate__STATE_VARIABLE_ProfNodeMap_0_4,
#line 176 "propagate.m"
  MR_Word * propagate__STATE_VARIABLE_ProfNodeMap_5);

#line 160 "propagate.m"
static void MR_CALL 
propagate__update_cycles_3_5_p_0(
#line 160 "propagate.m"
  MR_Word propagate__HeadVar__1_1,
#line 160 "propagate.m"
  MR_Integer propagate__CycleNum_2,
#line 160 "propagate.m"
  MR_Word propagate__AddrDecl_3,
#line 160 "propagate.m"
  MR_Word propagate__STATE_VARIABLE_ProfNodeMap_0_4,
#line 160 "propagate.m"
  MR_Word * propagate__STATE_VARIABLE_ProfNodeMap_5);

#line 152 "propagate.m"
static void MR_CALL 
propagate__update_cycles_2_4_p_0(
#line 152 "propagate.m"
  MR_Word propagate__HeadVar__1_1,
#line 152 "propagate.m"
  MR_Word propagate__AddrDecl_2,
#line 152 "propagate.m"
  MR_Word propagate__STATE_VARIABLE_ProfNodeMap_0_3,
#line 152 "propagate.m"
  MR_Word * propagate__STATE_VARIABLE_ProfNodeMap_4);

#line 133 "propagate.m"
static void MR_CALL 
propagate__add_to_cycle_map_6_p_0(
#line 133 "propagate.m"
  MR_Word propagate__HeadVar__1_1,
#line 133 "propagate.m"
  MR_Integer propagate__Cycle_2,
#line 133 "propagate.m"
  MR_Word propagate__STATE_VARIABLE_PredToCycleMap_0_3,
#line 133 "propagate.m"
  MR_Word * propagate__STATE_VARIABLE_PredToCycleMap_4,
#line 133 "propagate.m"
  MR_Word propagate__STATE_VARIABLE_CycleToPredsMap_0_5,
#line 133 "propagate.m"
  MR_Word * propagate__STATE_VARIABLE_CycleToPredsMap_6);

#line 107 "propagate.m"
static void MR_CALL 
propagate__identify_cycles_2_10_p_0_1(
#line 107 "propagate.m"
  MR_Box propagate__closure_arg,
#line 107 "propagate.m"
  MR_Box propagate__wrapper_arg_1,
#line 107 "propagate.m"
  MR_Box * propagate__wrapper_arg_2);

#line 94 "propagate.m"
static void MR_CALL 
propagate__identify_cycles_2_10_p_0(
#line 94 "propagate.m"
  MR_Word propagate__HeadVar__1_1,
#line 94 "propagate.m"
  MR_Integer propagate__CycleNum0_2,
#line 94 "propagate.m"
  MR_Word propagate__InvG_3,
#line 94 "propagate.m"
  MR_Word propagate__Visit0_4,
#line 94 "propagate.m"
  MR_Word propagate__STATE_VARIABLE_ATSort_0_5,
#line 94 "propagate.m"
  MR_Word * propagate__STATE_VARIABLE_ATSort_6,
#line 94 "propagate.m"
  MR_Word propagate__STATE_VARIABLE_PredToCycleMap_0_7,
#line 94 "propagate.m"
  MR_Word * propagate__STATE_VARIABLE_PredToCycleMap_8,
#line 94 "propagate.m"
  MR_Word propagate__STATE_VARIABLE_CycleToPredsMap_0_9,
#line 94 "propagate.m"
  MR_Word * propagate__STATE_VARIABLE_CycleToPredsMap_10);


static /* final */ const MR_Box propagate_scalar_common_1[2][2];

static /* final */ const MR_Box propagate_scalar_common_2[2][3];

static /* final */ const MR_Box propagate_scalar_common_3[1][6];

static /* final */ const MR_Box propagate_scalar_common_4[2][8];




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

static /* final */ const MR_Box propagate_scalar_common_4[2][8] = {
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"



#line 553 "propagate.c"
static const MR_FA_PseudoTypeInfo_Struct1 propagate__digraph__pti_digraph_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 561 "propagate.c"
static const MR_FA_PseudoTypeInfo_Struct1 propagate__digraph__pti_digraph_key_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 569 "propagate.c"
static const MR_FA_PseudoTypeInfo_Struct2 propagate__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 578 "propagate.c"
static const MR_FA_PseudoTypeInfo_Struct2 propagate__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_prof_info__type_ctor_info_prof_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &prof_info__prof_info__type_ctor_info_prof_node_0
  }
};

#line 587 "propagate.c"
static const MR_FA_TypeInfo_Struct2 propagate__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 596 "propagate.c"
static const MR_FA_TypeInfo_Struct1 propagate__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 604 "propagate.c"
static const MR_FA_TypeInfo_Struct2 propagate__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &propagate__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 613 "propagate.c"
static const MR_PseudoTypeInfo propagate__propagate__field_types_cycle_info_0_0[2] = {
  (MR_PseudoTypeInfo) &propagate__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &propagate__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_string_0
};

#line 619 "propagate.c"
static const MR_ConstString propagate__propagate__field_names_cycle_info_0_0[2] = {
  (MR_String) "pred_to_cycle_map",
  (MR_String) "cycle_to_preds_map"
};

#line 625 "propagate.c"
static const MR_DuFunctorDesc propagate__propagate__du_functor_desc_cycle_info_0_0 = {
  (MR_String) "cycle_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  propagate__propagate__field_types_cycle_info_0_0,
  propagate__propagate__field_names_cycle_info_0_0,
  NULL,
  NULL
};

#line 640 "propagate.c"
static const MR_DuFunctorDescPtr propagate__propagate__du_stag_ordered_cycle_info_0_0[1] = {
  &propagate__propagate__du_functor_desc_cycle_info_0_0
};

#line 645 "propagate.c"
static const MR_DuPtagLayout propagate__propagate__du_ptag_ordered_cycle_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    propagate__propagate__du_stag_ordered_cycle_info_0_0
  }
};

#line 654 "propagate.c"
static const MR_DuFunctorDescPtr propagate__propagate__du_name_ordered_cycle_info_0[1] = {
  &propagate__propagate__du_functor_desc_cycle_info_0_0
};

#line 659 "propagate.c"
static const MR_Integer propagate__propagate__functor_number_map_cycle_info_0[1] = {
  (MR_Integer) 0
};

#line 664 "propagate.c"
const MR_TypeCtorInfo_Struct propagate__propagate__type_ctor_info_cycle_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (propagate____Unify____cycle_info_0_0_10001)),
  ((MR_Box) (propagate____Compare____cycle_info_0_0_10001)),
  (MR_String) "propagate",
  (MR_String) "cycle_info",
  {
    propagate__propagate__du_name_ordered_cycle_info_0
  },
  {
    propagate__propagate__du_ptag_ordered_cycle_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  propagate__propagate__functor_number_map_cycle_info_0
};

#line 685 "propagate.c"
const MR_TypeCtorInfo_Struct propagate__propagate__type_ctor_info_cycle_to_preds_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (propagate____Unify____cycle_to_preds_map_0_0_10001)),
  ((MR_Box) (propagate____Compare____cycle_to_preds_map_0_0_10001)),
  (MR_String) "propagate",
  (MR_String) "cycle_to_preds_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &propagate__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 706 "propagate.c"
const MR_TypeCtorInfo_Struct propagate__propagate__type_ctor_info_pred_to_cycle_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (propagate____Unify____pred_to_cycle_map_0_0_10001)),
  ((MR_Box) (propagate____Compare____pred_to_cycle_map_0_0_10001)),
  (MR_String) "propagate",
  (MR_String) "pred_to_cycle_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &propagate__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 727 "propagate.c"
static MR_bool MR_CALL 
propagate____Unify____cycle_info_0_0_10001(
#line 730 "propagate.c"
  MR_Box propagate__wrapper_arg_1,
#line 732 "propagate.c"
  MR_Box propagate__wrapper_arg_2)
#line 734 "propagate.c"
{
#line 736 "propagate.c"
  {
#line 738 "propagate.c"
    MR_bool propagate__succeeded;

#line 741 "propagate.c"
    {
#line 743 "propagate.c"
      propagate__succeeded = propagate____Unify____cycle_info_0_0(((MR_Word) propagate__wrapper_arg_1), ((MR_Word) propagate__wrapper_arg_2));
    }
#line 746 "propagate.c"
    return propagate__succeeded;
#line 748 "propagate.c"
  }
#line 750 "propagate.c"
}

#line 753 "propagate.c"
static void MR_CALL 
propagate____Compare____cycle_info_0_0_10001(
#line 756 "propagate.c"
  MR_Box * propagate__wrapper_arg_1,
#line 758 "propagate.c"
  MR_Box propagate__wrapper_arg_2,
#line 760 "propagate.c"
  MR_Box propagate__wrapper_arg_3)
#line 762 "propagate.c"
{
#line 764 "propagate.c"
  {
#line 766 "propagate.c"
    MR_Word propagate__conv0_HeadVar__1_1;

#line 769 "propagate.c"
    {
#line 771 "propagate.c"
      propagate____Compare____cycle_info_0_0(&propagate__conv0_HeadVar__1_1, ((MR_Word) propagate__wrapper_arg_2), ((MR_Word) propagate__wrapper_arg_3));
    }
#line 774 "propagate.c"
    *propagate__wrapper_arg_1 = ((MR_Box) (propagate__conv0_HeadVar__1_1));
#line 776 "propagate.c"
  }
#line 778 "propagate.c"
}

#line 781 "propagate.c"
static MR_bool MR_CALL 
propagate____Unify____cycle_to_preds_map_0_0_10001(
#line 784 "propagate.c"
  MR_Box propagate__wrapper_arg_1,
#line 786 "propagate.c"
  MR_Box propagate__wrapper_arg_2)
#line 788 "propagate.c"
{
#line 790 "propagate.c"
  {
#line 792 "propagate.c"
    MR_bool propagate__succeeded;

#line 795 "propagate.c"
    {
#line 797 "propagate.c"
      propagate__succeeded = propagate____Unify____cycle_to_preds_map_0_0(((MR_Word) propagate__wrapper_arg_1), ((MR_Word) propagate__wrapper_arg_2));
    }
#line 800 "propagate.c"
    return propagate__succeeded;
#line 802 "propagate.c"
  }
#line 804 "propagate.c"
}

#line 807 "propagate.c"
static void MR_CALL 
propagate____Compare____cycle_to_preds_map_0_0_10001(
#line 810 "propagate.c"
  MR_Box * propagate__wrapper_arg_1,
#line 812 "propagate.c"
  MR_Box propagate__wrapper_arg_2,
#line 814 "propagate.c"
  MR_Box propagate__wrapper_arg_3)
#line 816 "propagate.c"
{
#line 818 "propagate.c"
  {
#line 820 "propagate.c"
    MR_Word propagate__conv0_HeadVar__1_1;

#line 823 "propagate.c"
    {
#line 825 "propagate.c"
      propagate____Compare____cycle_to_preds_map_0_0(&propagate__conv0_HeadVar__1_1, ((MR_Word) propagate__wrapper_arg_2), ((MR_Word) propagate__wrapper_arg_3));
    }
#line 828 "propagate.c"
    *propagate__wrapper_arg_1 = ((MR_Box) (propagate__conv0_HeadVar__1_1));
#line 830 "propagate.c"
  }
#line 832 "propagate.c"
}

#line 835 "propagate.c"
static MR_bool MR_CALL 
propagate____Unify____pred_to_cycle_map_0_0_10001(
#line 838 "propagate.c"
  MR_Box propagate__wrapper_arg_1,
#line 840 "propagate.c"
  MR_Box propagate__wrapper_arg_2)
#line 842 "propagate.c"
{
#line 844 "propagate.c"
  {
#line 846 "propagate.c"
    MR_bool propagate__succeeded;

#line 849 "propagate.c"
    {
#line 851 "propagate.c"
      propagate__succeeded = propagate____Unify____pred_to_cycle_map_0_0(((MR_Word) propagate__wrapper_arg_1), ((MR_Word) propagate__wrapper_arg_2));
    }
#line 854 "propagate.c"
    return propagate__succeeded;
#line 856 "propagate.c"
  }
#line 858 "propagate.c"
}

#line 861 "propagate.c"
static void MR_CALL 
propagate____Compare____pred_to_cycle_map_0_0_10001(
#line 864 "propagate.c"
  MR_Box * propagate__wrapper_arg_1,
#line 866 "propagate.c"
  MR_Box propagate__wrapper_arg_2,
#line 868 "propagate.c"
  MR_Box propagate__wrapper_arg_3)
#line 870 "propagate.c"
{
#line 872 "propagate.c"
  {
#line 874 "propagate.c"
    MR_Word propagate__conv0_HeadVar__1_1;

#line 877 "propagate.c"
    {
#line 879 "propagate.c"
      propagate____Compare____pred_to_cycle_map_0_0(&propagate__conv0_HeadVar__1_1, ((MR_Word) propagate__wrapper_arg_2), ((MR_Word) propagate__wrapper_arg_3));
    }
#line 882 "propagate.c"
    *propagate__wrapper_arg_1 = ((MR_Box) (propagate__conv0_HeadVar__1_1));
#line 884 "propagate.c"
  }
#line 886 "propagate.c"
}

#line 284 "propagate.m"
static void MR_CALL 
propagate__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_121_99_108_101_95_108_105_115_116_95_95_91_50_44_32_51_93_95_48_4_p_0(
#line 284 "propagate.m"
  MR_Word propagate__HeadVar__1_1,
#line 284 "propagate.m"
  MR_Word * propagate__HeadVar__4_4)
#line 284 "propagate.m"
{
#line 287 "propagate.m"
  {
#line 287 "propagate.m"
    MR_bool propagate__succeeded;

#line 287 "propagate.m"
    if ((propagate__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 287 "propagate.m"
      *propagate__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 287 "propagate.m"
    else
#line 288 "propagate.m"
      {
#line 288 "propagate.m"
        MR_String propagate__P_7 = ((MR_String) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 0)));
#line 288 "propagate.m"
        MR_Word propagate__Ps_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 1)));
#line 288 "propagate.m"
        MR_Word propagate__CycleList0_12;
#line 288 "propagate.m"
        MR_Word propagate__PredInfo_13;

#line 289 "propagate.m"
        {
#line 289 "propagate.m"
          propagate__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_121_99_108_101_95_108_105_115_116_95_95_91_50_44_32_51_93_95_48_4_p_0(propagate__Ps_8, &propagate__CycleList0_12);
        }
#line 290 "propagate.m"
        {
#line 290 "propagate.m"
          prof_info__pred_info_init_3_p_0(propagate__P_7, (MR_Integer) 0, &propagate__PredInfo_13);
        }
#line 291 "propagate.m"
        {
#line 291 "propagate.m"
          MR_Word base;
#line 291 "propagate.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "propagate.m"
          *propagate__HeadVar__4_4 = base;
#line 291 "propagate.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (propagate__PredInfo_13));
#line 291 "propagate.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (propagate__CycleList0_12));
#line 291 "propagate.m"
        }
#line 288 "propagate.m"
      }
#line 287 "propagate.m"
  }
#line 284 "propagate.m"
}

#line 107 "propagate.m"
static void MR_CALL 
propagate__IntroducedFrom__pred__identify_cycles_2__107__1_3_p_0(
#line 107 "propagate.m"
  MR_Word propagate__InvG_3,
#line 107 "propagate.m"
  MR_Word propagate__HeadVar__2_58,
#line 107 "propagate.m"
  MR_String * propagate__HeadVar__3_59)
#line 107 "propagate.m"
{
#line 107 "propagate.m"
  {
#line 107 "propagate.m"
    MR_bool propagate__succeeded;
#line 107 "propagate.m"
    MR_Box propagate__conv0_HeadVar__3_59;

#line 107 "propagate.m"
    {
#line 107 "propagate.m"
      mercury__digraph__lookup_vertex_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, propagate__InvG_3, propagate__HeadVar__2_58, &propagate__conv0_HeadVar__3_59);
    }
#line 107 "propagate.m"
    *propagate__HeadVar__3_59 = ((MR_String) propagate__conv0_HeadVar__3_59);
#line 107 "propagate.m"
  }
#line 107 "propagate.m"
}

#line 54 "propagate.m"
static void MR_CALL 
propagate____Compare____pred_to_cycle_map_0_0(
#line 54 "propagate.m"
  MR_Word * propagate__HeadVar__1_1,
#line 54 "propagate.m"
  MR_Word propagate__HeadVar__2_2,
#line 54 "propagate.m"
  MR_Word propagate__HeadVar__3_3)
#line 54 "propagate.m"
{
#line 54 "propagate.m"
  {
#line 54 "propagate.m"
    MR_bool propagate__succeeded;
#line 54 "propagate.m"
    MR_Word propagate__Cast_HeadVar1_4 = propagate__HeadVar__2_2;
#line 54 "propagate.m"
    MR_Word propagate__Cast_HeadVar2_5 = propagate__HeadVar__3_3;

#line 54 "propagate.m"
    {
#line 54 "propagate.m"
      mercury__builtin__compare_3_p_0((MR_Word) &propagate_scalar_common_2[0], propagate__HeadVar__1_1, ((MR_Box) (propagate__Cast_HeadVar1_4)), ((MR_Box) (propagate__Cast_HeadVar2_5)));
#line 54 "propagate.m"
      return;
    }
#line 54 "propagate.m"
  }
#line 54 "propagate.m"
}

#line 54 "propagate.m"
static MR_bool MR_CALL 
propagate____Unify____pred_to_cycle_map_0_0(
#line 54 "propagate.m"
  MR_Word propagate__HeadVar__1_1,
#line 54 "propagate.m"
  MR_Word propagate__HeadVar__2_2)
#line 54 "propagate.m"
{
#line 54 "propagate.m"
  {
#line 54 "propagate.m"
    MR_bool propagate__succeeded;
#line 54 "propagate.m"
    MR_Word propagate__Cast_HeadVar1_3 = propagate__HeadVar__1_1;
#line 54 "propagate.m"
    MR_Word propagate__Cast_HeadVar2_4 = propagate__HeadVar__2_2;

#line 54 "propagate.m"
    {
#line 54 "propagate.m"
      return propagate__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &propagate_scalar_common_2[0], ((MR_Box) (propagate__Cast_HeadVar1_3)), ((MR_Box) (propagate__Cast_HeadVar2_4)));
    }
#line 54 "propagate.m"
    return propagate__succeeded;
#line 54 "propagate.m"
  }
#line 54 "propagate.m"
}

#line 55 "propagate.m"
static void MR_CALL 
propagate____Compare____cycle_to_preds_map_0_0(
#line 55 "propagate.m"
  MR_Word * propagate__HeadVar__1_1,
#line 55 "propagate.m"
  MR_Word propagate__HeadVar__2_2,
#line 55 "propagate.m"
  MR_Word propagate__HeadVar__3_3)
#line 55 "propagate.m"
{
#line 55 "propagate.m"
  {
#line 55 "propagate.m"
    MR_bool propagate__succeeded;
#line 55 "propagate.m"
    MR_Word propagate__Cast_HeadVar1_4 = propagate__HeadVar__2_2;
#line 55 "propagate.m"
    MR_Word propagate__Cast_HeadVar2_5 = propagate__HeadVar__3_3;

#line 55 "propagate.m"
    {
#line 55 "propagate.m"
      mercury__builtin__compare_3_p_0((MR_Word) &propagate_scalar_common_2[1], propagate__HeadVar__1_1, ((MR_Box) (propagate__Cast_HeadVar1_4)), ((MR_Box) (propagate__Cast_HeadVar2_5)));
#line 55 "propagate.m"
      return;
    }
#line 55 "propagate.m"
  }
#line 55 "propagate.m"
}

#line 55 "propagate.m"
static MR_bool MR_CALL 
propagate____Unify____cycle_to_preds_map_0_0(
#line 55 "propagate.m"
  MR_Word propagate__HeadVar__1_1,
#line 55 "propagate.m"
  MR_Word propagate__HeadVar__2_2)
#line 55 "propagate.m"
{
#line 55 "propagate.m"
  {
#line 55 "propagate.m"
    MR_bool propagate__succeeded;
#line 55 "propagate.m"
    MR_Word propagate__Cast_HeadVar1_3 = propagate__HeadVar__1_1;
#line 55 "propagate.m"
    MR_Word propagate__Cast_HeadVar2_4 = propagate__HeadVar__2_2;

#line 55 "propagate.m"
    {
#line 55 "propagate.m"
      return propagate__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &propagate_scalar_common_2[1], ((MR_Box) (propagate__Cast_HeadVar1_3)), ((MR_Box) (propagate__Cast_HeadVar2_4)));
    }
#line 55 "propagate.m"
    return propagate__succeeded;
#line 55 "propagate.m"
  }
#line 55 "propagate.m"
}

#line 57 "propagate.m"
static void MR_CALL 
propagate____Compare____cycle_info_0_0(
#line 57 "propagate.m"
  MR_Word * propagate__HeadVar__1_1,
#line 57 "propagate.m"
  MR_Word propagate__HeadVar__2_2,
#line 57 "propagate.m"
  MR_Word propagate__HeadVar__3_3)
#line 57 "propagate.m"
{
#line 57 "propagate.m"
  {
#line 57 "propagate.m"
    MR_bool propagate__succeeded;
#line 57 "propagate.m"
    MR_Integer propagate__CastX_9 = (MR_Integer) propagate__HeadVar__2_2;
#line 57 "propagate.m"
    MR_Integer propagate__CastY_10 = (MR_Integer) propagate__HeadVar__3_3;

#line 57 "propagate.m"
    propagate__succeeded = (propagate__CastX_9 == propagate__CastY_10);
#line 57 "propagate.m"
    if (propagate__succeeded)
#line 1129 "propagate.c"
      *propagate__HeadVar__1_1 = (MR_Integer) 0;
#line 57 "propagate.m"
    else
#line 57 "propagate.m"
      {
#line 57 "propagate.m"
        MR_Word propagate__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__HeadVar__2_2, (MR_Integer) 0)));
#line 57 "propagate.m"
        MR_Word propagate__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__HeadVar__2_2, (MR_Integer) 1)));
#line 57 "propagate.m"
        MR_Word propagate__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__HeadVar__3_3, (MR_Integer) 0)));
#line 57 "propagate.m"
        MR_Word propagate__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__HeadVar__3_3, (MR_Integer) 1)));
#line 57 "propagate.m"
        MR_Word propagate__V_8_8;

#line 57 "propagate.m"
        {
#line 57 "propagate.m"
          mercury__builtin__compare_3_p_0((MR_Word) &propagate_scalar_common_2[0], &propagate__V_8_8, ((MR_Box) (propagate__V_4_4)), ((MR_Box) (propagate__V_6_6)));
        }
#line 1151 "propagate.c"
        propagate__succeeded = (propagate__V_8_8 == (MR_Integer) 0);
#line 57 "propagate.m"
        propagate__succeeded = !(propagate__succeeded);
#line 57 "propagate.m"
        if (propagate__succeeded)
#line 57 "propagate.m"
          *propagate__HeadVar__1_1 = propagate__V_8_8;
#line 57 "propagate.m"
        else
#line 57 "propagate.m"
          {
#line 57 "propagate.m"
            {
#line 57 "propagate.m"
              mercury__builtin__compare_3_p_0((MR_Word) &propagate_scalar_common_2[1], propagate__HeadVar__1_1, ((MR_Box) (propagate__V_5_5)), ((MR_Box) (propagate__V_7_7)));
#line 57 "propagate.m"
              return;
            }
#line 57 "propagate.m"
          }
#line 57 "propagate.m"
      }
#line 57 "propagate.m"
  }
#line 57 "propagate.m"
}

#line 57 "propagate.m"
static MR_bool MR_CALL 
propagate____Unify____cycle_info_0_0(
#line 57 "propagate.m"
  MR_Word propagate__HeadVar__1_1,
#line 57 "propagate.m"
  MR_Word propagate__HeadVar__2_2)
#line 57 "propagate.m"
{
#line 57 "propagate.m"
  {
#line 57 "propagate.m"
    MR_bool propagate__succeeded;
#line 57 "propagate.m"
    MR_Integer propagate__CastX_7 = (MR_Integer) propagate__HeadVar__1_1;
#line 57 "propagate.m"
    MR_Integer propagate__CastY_8 = (MR_Integer) propagate__HeadVar__2_2;

#line 57 "propagate.m"
    propagate__succeeded = (propagate__CastX_7 == propagate__CastY_8);
#line 57 "propagate.m"
    if (propagate__succeeded)
#line 57 "propagate.m"
      propagate__succeeded = MR_TRUE;
#line 57 "propagate.m"
    else
#line 57 "propagate.m"
      {
#line 57 "propagate.m"
        MR_Word propagate__TypeInfo_10_10;
#line 57 "propagate.m"
        MR_Word propagate__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__HeadVar__1_1, (MR_Integer) 0)));
#line 57 "propagate.m"
        MR_Word propagate__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__HeadVar__1_1, (MR_Integer) 1)));
#line 57 "propagate.m"
        MR_Word propagate__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__HeadVar__2_2, (MR_Integer) 0)));
#line 57 "propagate.m"
        MR_Word propagate__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__HeadVar__2_2, (MR_Integer) 1)));

#line 1218 "propagate.c"
        {
#line 1220 "propagate.c"
          propagate__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &propagate_scalar_common_2[0], ((MR_Box) (propagate__V_3_3)), ((MR_Box) (propagate__V_5_5)));
        }
#line 57 "propagate.m"
        if (propagate__succeeded)
#line 57 "propagate.m"
          {
#line 1227 "propagate.c"
            propagate__TypeInfo_10_10 = (MR_Word) &propagate_scalar_common_2[1];
#line 1229 "propagate.c"
            {
#line 1231 "propagate.c"
              return propagate__succeeded = mercury__builtin__unify_2_p_0(propagate__TypeInfo_10_10, ((MR_Box) (propagate__V_4_4)), ((MR_Box) (propagate__V_6_6)));
            }
#line 57 "propagate.m"
          }
#line 57 "propagate.m"
      }
#line 57 "propagate.m"
    return propagate__succeeded;
#line 57 "propagate.m"
  }
#line 57 "propagate.m"
}

#line 407 "propagate.m"
static MR_Word MR_CALL 
propagate__assoc_list_to_pred_info_list_1_f_0(
#line 407 "propagate.m"
  MR_Word propagate__HeadVar__1_1)
#line 407 "propagate.m"
{
#line 410 "propagate.m"
  {
#line 410 "propagate.m"
    MR_bool propagate__succeeded;
#line 410 "propagate.m"
    MR_Word propagate__HeadVar__2_2;

#line 410 "propagate.m"
    if ((propagate__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 410 "propagate.m"
      propagate__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 410 "propagate.m"
    else
#line 411 "propagate.m"
      {
#line 411 "propagate.m"
        MR_String propagate__S_3;
#line 411 "propagate.m"
        MR_Integer propagate__I_4;
#line 411 "propagate.m"
        MR_Word propagate__Xs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 1)));
#line 411 "propagate.m"
        MR_Word propagate__List0_7;
#line 411 "propagate.m"
        MR_Word propagate__PredInfo_8;
#line 411 "propagate.m"
        MR_Word propagate__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 0)));

#line 411 "propagate.m"
        propagate__S_3 = ((MR_String) (MR_hl_field(MR_mktag(0), propagate__V_9_9, (MR_Integer) 0)));
#line 411 "propagate.m"
        propagate__I_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), propagate__V_9_9, (MR_Integer) 1)));
#line 412 "propagate.m"
        {
#line 412 "propagate.m"
          propagate__List0_7 = propagate__assoc_list_to_pred_info_list_1_f_0(propagate__Xs_5);
        }
#line 413 "propagate.m"
        {
#line 413 "propagate.m"
          prof_info__pred_info_init_3_p_0(propagate__S_3, propagate__I_4, &propagate__PredInfo_8);
        }
#line 414 "propagate.m"
        {
#line 414 "propagate.m"
          propagate__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "propagate.m"
          MR_hl_field(MR_mktag(1), propagate__HeadVar__2_2, 0) = ((MR_Box) (propagate__PredInfo_8));
#line 414 "propagate.m"
          MR_hl_field(MR_mktag(1), propagate__HeadVar__2_2, 1) = ((MR_Box) (propagate__List0_7));
#line 414 "propagate.m"
        }
#line 411 "propagate.m"
      }
#line 410 "propagate.m"
    return propagate__HeadVar__2_2;
#line 410 "propagate.m"
  }
#line 407 "propagate.m"
}

#line 376 "propagate.m"
static void MR_CALL 
propagate__add_to_parent_map_8_p_0(
#line 376 "propagate.m"
  MR_Word propagate__HeadVar__1_1,
#line 376 "propagate.m"
  MR_Word propagate__CliqueList_2,
#line 376 "propagate.m"
  MR_Integer propagate__STATE_VARIABLE_TotalCalls_0_3,
#line 376 "propagate.m"
  MR_Integer * propagate__STATE_VARIABLE_TotalCalls_4,
#line 376 "propagate.m"
  MR_Integer propagate__STATE_VARIABLE_SelfCalls_0_5,
#line 376 "propagate.m"
  MR_Integer * propagate__STATE_VARIABLE_SelfCalls_6,
#line 376 "propagate.m"
  MR_Word propagate__STATE_VARIABLE_ParentMap_0_7,
#line 376 "propagate.m"
  MR_Word * propagate__STATE_VARIABLE_ParentMap_8)
#line 376 "propagate.m"
{
#line 380 "propagate.m"
  while (MR_TRUE)
#line 380 "propagate.m"
    {
#line 380 "propagate.m"
      /* tailcall optimized into a loop */
#line 380 "propagate.m"
      {
#line 380 "propagate.m"
        MR_bool propagate__succeeded;

#line 380 "propagate.m"
        if ((propagate__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "propagate.m"
          {
#line 380 "propagate.m"
            *propagate__STATE_VARIABLE_ParentMap_8 = propagate__STATE_VARIABLE_ParentMap_0_7;
#line 380 "propagate.m"
            *propagate__STATE_VARIABLE_SelfCalls_6 = propagate__STATE_VARIABLE_SelfCalls_0_5;
#line 380 "propagate.m"
            *propagate__STATE_VARIABLE_TotalCalls_4 = propagate__STATE_VARIABLE_TotalCalls_0_3;
#line 380 "propagate.m"
          }
#line 380 "propagate.m"
        else
#line 382 "propagate.m"
          {
#line 382 "propagate.m"
            MR_Word propagate__Pred_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 0)));
#line 382 "propagate.m"
            MR_Word propagate__Preds_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 1)));
#line 382 "propagate.m"
            MR_String propagate__PredName_25;
#line 382 "propagate.m"
            MR_Integer propagate__Counts_26;

#line 383 "propagate.m"
            {
#line 383 "propagate.m"
              prof_info__pred_info_get_pred_name_2_p_0(propagate__Pred_19, &propagate__PredName_25);
            }
#line 384 "propagate.m"
            {
#line 384 "propagate.m"
              prof_info__pred_info_get_counts_2_p_0(propagate__Pred_19, &propagate__Counts_26);
            }
#line 387 "propagate.m"
            {
#line 387 "propagate.m"
              propagate__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (propagate__PredName_25)), propagate__CliqueList_2);
            }
#line 388 "propagate.m"
            if (!(propagate__succeeded))
#line 389 "propagate.m"
              propagate__succeeded = (propagate__Counts_26 == (MR_Integer) 0);
#line 395 "propagate.m"
            if (propagate__succeeded)
#line 392 "propagate.m"
              {
#line 392 "propagate.m"
                MR_Integer propagate__STATE_VARIABLE_SelfCalls_35_35 = (propagate__STATE_VARIABLE_SelfCalls_0_5 + propagate__Counts_26);

#line 393 "propagate.m"
                /* direct tailcall eliminated */
#line 393 "propagate.m"
                {
#line 393 "propagate.m"
                  MR_Word propagate__HeadVar__1__tmp_copy_1 = propagate__Preds_20;
#line 393 "propagate.m"
                  MR_Integer propagate__STATE_VARIABLE_SelfCalls_0__tmp_copy_5 = propagate__STATE_VARIABLE_SelfCalls_35_35;

#line 393 "propagate.m"
                  propagate__STATE_VARIABLE_SelfCalls_0_5 = propagate__STATE_VARIABLE_SelfCalls_0__tmp_copy_5;
#line 393 "propagate.m"
                  propagate__HeadVar__1_1 = propagate__HeadVar__1__tmp_copy_1;
#line 393 "propagate.m"
                }
#line 393 "propagate.m"
                continue;
#line 392 "propagate.m"
              }
#line 395 "propagate.m"
            else
#line 401 "propagate.m"
              {
#line 401 "propagate.m"
                MR_Word propagate__STATE_VARIABLE_ParentMap_39_39;
#line 401 "propagate.m"
                MR_Integer propagate__STATE_VARIABLE_TotalCalls_41_41;
#line 399 "propagate.m"
                MR_Integer propagate__CurrCount0_27;
#line 396 "propagate.m"
                MR_Box propagate__conv0_CurrCount0_27;

#line 396 "propagate.m"
                {
#line 396 "propagate.m"
                  propagate__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, propagate__STATE_VARIABLE_ParentMap_0_7, ((MR_Box) (propagate__PredName_25)), &propagate__conv0_CurrCount0_27);
                }
#line 396 "propagate.m"
                if (propagate__succeeded)
#line 396 "propagate.m"
                  {
#line 396 "propagate.m"
                    propagate__CurrCount0_27 = ((MR_Integer) propagate__conv0_CurrCount0_27);
#line 396 "propagate.m"
                    propagate__succeeded = MR_TRUE;
#line 396 "propagate.m"
                  }
#line 399 "propagate.m"
                if (propagate__succeeded)
#line 397 "propagate.m"
                  {
#line 397 "propagate.m"
                    MR_Integer propagate__CurrCount_28 = (propagate__CurrCount0_27 + propagate__Counts_26);

#line 398 "propagate.m"
                    {
#line 398 "propagate.m"
                      mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (propagate__PredName_25)), ((MR_Box) (propagate__CurrCount_28)), propagate__STATE_VARIABLE_ParentMap_0_7, &propagate__STATE_VARIABLE_ParentMap_39_39);
                    }
#line 397 "propagate.m"
                  }
#line 399 "propagate.m"
                else
#line 400 "propagate.m"
                  {
#line 400 "propagate.m"
                    {
#line 400 "propagate.m"
                      mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (propagate__PredName_25)), ((MR_Box) (propagate__Counts_26)), propagate__STATE_VARIABLE_ParentMap_0_7, &propagate__STATE_VARIABLE_ParentMap_39_39);
                    }
#line 400 "propagate.m"
                  }
#line 402 "propagate.m"
                propagate__STATE_VARIABLE_TotalCalls_41_41 = (propagate__STATE_VARIABLE_TotalCalls_0_3 + propagate__Counts_26);
#line 403 "propagate.m"
                /* direct tailcall eliminated */
#line 403 "propagate.m"
                {
#line 403 "propagate.m"
                  MR_Word propagate__HeadVar__1__tmp_copy_1 = propagate__Preds_20;
#line 403 "propagate.m"
                  MR_Integer propagate__STATE_VARIABLE_TotalCalls_0__tmp_copy_3 = propagate__STATE_VARIABLE_TotalCalls_41_41;
#line 403 "propagate.m"
                  MR_Word propagate__STATE_VARIABLE_ParentMap_0__tmp_copy_7 = propagate__STATE_VARIABLE_ParentMap_39_39;

#line 403 "propagate.m"
                  propagate__STATE_VARIABLE_ParentMap_0_7 = propagate__STATE_VARIABLE_ParentMap_0__tmp_copy_7;
#line 403 "propagate.m"
                  propagate__STATE_VARIABLE_TotalCalls_0_3 = propagate__STATE_VARIABLE_TotalCalls_0__tmp_copy_3;
#line 403 "propagate.m"
                  propagate__HeadVar__1_1 = propagate__HeadVar__1__tmp_copy_1;
#line 403 "propagate.m"
                }
#line 403 "propagate.m"
                continue;
#line 401 "propagate.m"
              }
#line 382 "propagate.m"
          }
#line 380 "propagate.m"
      }
#line 380 "propagate.m"
      break;
#line 380 "propagate.m"
    }
#line 376 "propagate.m"
}

#line 352 "propagate.m"
static void MR_CALL 
propagate__build_parent_map_2_10_p_0(
#line 352 "propagate.m"
  MR_Word propagate__HeadVar__1_1,
#line 352 "propagate.m"
  MR_Word propagate__CliqueList_2,
#line 352 "propagate.m"
  MR_Word propagate__AddrMap_3,
#line 352 "propagate.m"
  MR_Word propagate__ProfNodeMap_4,
#line 352 "propagate.m"
  MR_Integer propagate__STATE_VARIABLE_TotalCalls_0_5,
#line 352 "propagate.m"
  MR_Integer * propagate__STATE_VARIABLE_TotalCalls_6,
#line 352 "propagate.m"
  MR_Integer propagate__STATE_VARIABLE_SelfCalls_0_7,
#line 352 "propagate.m"
  MR_Integer * propagate__STATE_VARIABLE_SelfCalls_8,
#line 352 "propagate.m"
  MR_Word propagate__STATE_VARIABLE_ParentMap_0_9,
#line 352 "propagate.m"
  MR_Word * propagate__STATE_VARIABLE_ParentMap_10)
#line 352 "propagate.m"
{
#line 356 "propagate.m"
  while (MR_TRUE)
#line 356 "propagate.m"
    {
#line 356 "propagate.m"
      /* tailcall optimized into a loop */
#line 356 "propagate.m"
      {
#line 356 "propagate.m"
        MR_bool propagate__succeeded;

#line 356 "propagate.m"
        if ((propagate__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 356 "propagate.m"
          {
#line 356 "propagate.m"
            *propagate__STATE_VARIABLE_ParentMap_10 = propagate__STATE_VARIABLE_ParentMap_0_9;
#line 356 "propagate.m"
            *propagate__STATE_VARIABLE_SelfCalls_8 = propagate__STATE_VARIABLE_SelfCalls_0_7;
#line 356 "propagate.m"
            *propagate__STATE_VARIABLE_TotalCalls_6 = propagate__STATE_VARIABLE_TotalCalls_0_5;
#line 356 "propagate.m"
          }
#line 356 "propagate.m"
        else
#line 358 "propagate.m"
          {
#line 358 "propagate.m"
            MR_String propagate__C_23 = ((MR_String) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 0)));
#line 358 "propagate.m"
            MR_Word propagate__Cs_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 1)));
#line 358 "propagate.m"
            MR_Word propagate__ProfNode_31;
#line 358 "propagate.m"
            MR_Word propagate__ParentList_32;
#line 358 "propagate.m"
            MR_Integer propagate__TotalCalls1_33;
#line 358 "propagate.m"
            MR_Integer propagate__SelfCalls1_34;
#line 358 "propagate.m"
            MR_Word propagate__STATE_VARIABLE_ParentMap_43_43;
#line 358 "propagate.m"
            MR_Integer propagate__STATE_VARIABLE_TotalCalls_44_44;
#line 358 "propagate.m"
            MR_Integer propagate__STATE_VARIABLE_SelfCalls_45_45;

#line 359 "propagate.m"
            {
#line 359 "propagate.m"
              prof_info__get_prof_node_4_p_0(propagate__C_23, propagate__AddrMap_3, propagate__ProfNodeMap_4, &propagate__ProfNode_31);
            }
#line 360 "propagate.m"
            {
#line 360 "propagate.m"
              prof_info__prof_node_get_parent_list_2_p_0(propagate__ProfNode_31, &propagate__ParentList_32);
            }
#line 361 "propagate.m"
            {
#line 361 "propagate.m"
              propagate__add_to_parent_map_8_p_0(propagate__ParentList_32, propagate__CliqueList_2, (MR_Integer) 0, &propagate__TotalCalls1_33, (MR_Integer) 0, &propagate__SelfCalls1_34, propagate__STATE_VARIABLE_ParentMap_0_9, &propagate__STATE_VARIABLE_ParentMap_43_43);
            }
#line 364 "propagate.m"
            propagate__STATE_VARIABLE_TotalCalls_44_44 = (propagate__STATE_VARIABLE_TotalCalls_0_5 + propagate__TotalCalls1_33);
#line 365 "propagate.m"
            propagate__STATE_VARIABLE_SelfCalls_45_45 = (propagate__STATE_VARIABLE_SelfCalls_0_7 + propagate__SelfCalls1_34);
#line 366 "propagate.m"
            /* direct tailcall eliminated */
#line 366 "propagate.m"
            {
#line 366 "propagate.m"
              MR_Word propagate__HeadVar__1__tmp_copy_1 = propagate__Cs_24;
#line 366 "propagate.m"
              MR_Integer propagate__STATE_VARIABLE_TotalCalls_0__tmp_copy_5 = propagate__STATE_VARIABLE_TotalCalls_44_44;
#line 366 "propagate.m"
              MR_Integer propagate__STATE_VARIABLE_SelfCalls_0__tmp_copy_7 = propagate__STATE_VARIABLE_SelfCalls_45_45;
#line 366 "propagate.m"
              MR_Word propagate__STATE_VARIABLE_ParentMap_0__tmp_copy_9 = propagate__STATE_VARIABLE_ParentMap_43_43;

#line 366 "propagate.m"
              propagate__STATE_VARIABLE_ParentMap_0_9 = propagate__STATE_VARIABLE_ParentMap_0__tmp_copy_9;
#line 366 "propagate.m"
              propagate__STATE_VARIABLE_SelfCalls_0_7 = propagate__STATE_VARIABLE_SelfCalls_0__tmp_copy_7;
#line 366 "propagate.m"
              propagate__STATE_VARIABLE_TotalCalls_0_5 = propagate__STATE_VARIABLE_TotalCalls_0__tmp_copy_5;
#line 366 "propagate.m"
              propagate__HeadVar__1_1 = propagate__HeadVar__1__tmp_copy_1;
#line 366 "propagate.m"
            }
#line 366 "propagate.m"
            continue;
#line 358 "propagate.m"
          }
#line 356 "propagate.m"
      }
#line 356 "propagate.m"
      break;
#line 356 "propagate.m"
    }
#line 352 "propagate.m"
}

#line 293 "propagate.m"
static void MR_CALL 
propagate__propagate_counts_3_6_p_0(
#line 293 "propagate.m"
  MR_Word propagate__HeadVar__1_1,
#line 293 "propagate.m"
  MR_Float propagate__TotalCounts_2,
#line 293 "propagate.m"
  MR_Float propagate__TotalCalls_3,
#line 293 "propagate.m"
  MR_Word propagate__AddrMap_4,
#line 293 "propagate.m"
  MR_Word propagate__STATE_VARIABLE_ProfNodeMap_0_5,
#line 293 "propagate.m"
  MR_Word * propagate__STATE_VARIABLE_ProfNodeMap_6)
#line 293 "propagate.m"
{
#line 296 "propagate.m"
  while (MR_TRUE)
#line 296 "propagate.m"
    {
#line 296 "propagate.m"
      /* tailcall optimized into a loop */
#line 296 "propagate.m"
      {
#line 296 "propagate.m"
        MR_bool propagate__succeeded;

#line 296 "propagate.m"
        if ((propagate__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 296 "propagate.m"
          *propagate__STATE_VARIABLE_ProfNodeMap_6 = propagate__STATE_VARIABLE_ProfNodeMap_0_5;
#line 296 "propagate.m"
        else
#line 297 "propagate.m"
          {
#line 297 "propagate.m"
            MR_Word propagate__P_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 0)));
#line 297 "propagate.m"
            MR_Word propagate__Ps_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 1)));
#line 297 "propagate.m"
            MR_String propagate__Pred_19;
#line 297 "propagate.m"
            MR_Integer propagate__Calls_20;
#line 297 "propagate.m"
            MR_Float propagate__ToPropagateCounts_21;
#line 297 "propagate.m"
            MR_Word propagate__ProfNode0_22;
#line 297 "propagate.m"
            MR_Float propagate__PropCount0_23;
#line 297 "propagate.m"
            MR_Float propagate__PropCount_24;
#line 297 "propagate.m"
            MR_Word propagate__ProfNode_25;
#line 297 "propagate.m"
            MR_Float propagate__V_28_28;
#line 297 "propagate.m"
            MR_Float propagate__V_29_29;
#line 297 "propagate.m"
            MR_Word propagate__STATE_VARIABLE_ProfNodeMap_30_30;

#line 298 "propagate.m"
            {
#line 298 "propagate.m"
              prof_info__pred_info_get_entire_3_p_0(propagate__P_13, &propagate__Pred_19, &propagate__Calls_20);
            }
#line 302 "propagate.m"
            {
#line 302 "propagate.m"
              propagate__V_29_29 = mercury__float__float_1_f_0(propagate__Calls_20);
            }
#line 302 "propagate.m"
            {
#line 302 "propagate.m"
              propagate__V_28_28 = mercury__float__f_slash_2_f_0(propagate__V_29_29, propagate__TotalCalls_3);
            }
#line 302 "propagate.m"
            propagate__ToPropagateCounts_21 = (propagate__V_28_28 * propagate__TotalCounts_2);
#line 305 "propagate.m"
            {
#line 305 "propagate.m"
              prof_info__get_prof_node_4_p_0(propagate__Pred_19, propagate__AddrMap_4, propagate__STATE_VARIABLE_ProfNodeMap_0_5, &propagate__ProfNode0_22);
            }
#line 306 "propagate.m"
            {
#line 306 "propagate.m"
              prof_info__prof_node_get_propagated_counts_2_p_0(propagate__ProfNode0_22, &propagate__PropCount0_23);
            }
#line 307 "propagate.m"
            propagate__PropCount_24 = (propagate__PropCount0_23 + propagate__ToPropagateCounts_21);
#line 308 "propagate.m"
            {
#line 308 "propagate.m"
              prof_info__prof_node_set_propagated_counts_3_p_0(propagate__PropCount_24, propagate__ProfNode0_22, &propagate__ProfNode_25);
            }
#line 309 "propagate.m"
            {
#line 309 "propagate.m"
              prof_info__update_prof_node_5_p_0(propagate__Pred_19, propagate__ProfNode_25, propagate__AddrMap_4, propagate__STATE_VARIABLE_ProfNodeMap_0_5, &propagate__STATE_VARIABLE_ProfNodeMap_30_30);
            }
#line 310 "propagate.m"
            /* direct tailcall eliminated */
#line 310 "propagate.m"
            {
#line 310 "propagate.m"
              MR_Word propagate__HeadVar__1__tmp_copy_1 = propagate__Ps_14;
#line 310 "propagate.m"
              MR_Word propagate__STATE_VARIABLE_ProfNodeMap_0__tmp_copy_5 = propagate__STATE_VARIABLE_ProfNodeMap_30_30;

#line 310 "propagate.m"
              propagate__STATE_VARIABLE_ProfNodeMap_0_5 = propagate__STATE_VARIABLE_ProfNodeMap_0__tmp_copy_5;
#line 310 "propagate.m"
              propagate__HeadVar__1_1 = propagate__HeadVar__1__tmp_copy_1;
#line 310 "propagate.m"
            }
#line 310 "propagate.m"
            continue;
#line 297 "propagate.m"
          }
#line 296 "propagate.m"
      }
#line 296 "propagate.m"
      break;
#line 296 "propagate.m"
    }
#line 293 "propagate.m"
}

#line 270 "propagate.m"
static void MR_CALL 
propagate__accumulate_propagated_counts_5_p_0(
#line 270 "propagate.m"
  MR_Word propagate__ADMap_6,
#line 270 "propagate.m"
  MR_Word propagate__PNMap_7,
#line 270 "propagate.m"
  MR_String propagate__Pred_8,
#line 270 "propagate.m"
  MR_Float propagate__STATE_VARIABLE_Sum_0_12,
#line 270 "propagate.m"
  MR_Float * propagate__STATE_VARIABLE_Sum_13)
#line 270 "propagate.m"
{
#line 273 "propagate.m"
  {
#line 273 "propagate.m"
    MR_bool propagate__succeeded;
#line 273 "propagate.m"
    MR_Word propagate__ProfNode_10;
#line 273 "propagate.m"
    MR_Float propagate__PropCount_11;

#line 274 "propagate.m"
    {
#line 274 "propagate.m"
      prof_info__get_prof_node_4_p_0(propagate__Pred_8, propagate__ADMap_6, propagate__PNMap_7, &propagate__ProfNode_10);
    }
#line 275 "propagate.m"
    {
#line 275 "propagate.m"
      prof_info__prof_node_get_propagated_counts_2_p_0(propagate__ProfNode_10, &propagate__PropCount_11);
    }
#line 276 "propagate.m"
    *propagate__STATE_VARIABLE_Sum_13 = (propagate__STATE_VARIABLE_Sum_0_12 + propagate__PropCount_11);
#line 273 "propagate.m"
  }
#line 270 "propagate.m"
}

#line 253 "propagate.m"
static void MR_CALL 
propagate__accumulate_self_counts_5_p_0(
#line 253 "propagate.m"
  MR_Word propagate__ADMap_6,
#line 253 "propagate.m"
  MR_Word propagate__PNMap_7,
#line 253 "propagate.m"
  MR_String propagate__Pred_8,
#line 253 "propagate.m"
  MR_Integer propagate__STATE_VARIABLE_Sum_0_12,
#line 253 "propagate.m"
  MR_Integer * propagate__STATE_VARIABLE_Sum_13)
#line 253 "propagate.m"
{
#line 256 "propagate.m"
  {
#line 256 "propagate.m"
    MR_bool propagate__succeeded;
#line 256 "propagate.m"
    MR_Word propagate__ProfNode_10;
#line 256 "propagate.m"
    MR_Integer propagate__InitCount_11;

#line 257 "propagate.m"
    {
#line 257 "propagate.m"
      prof_info__get_prof_node_4_p_0(propagate__Pred_8, propagate__ADMap_6, propagate__PNMap_7, &propagate__ProfNode_10);
    }
#line 258 "propagate.m"
    {
#line 258 "propagate.m"
      prof_info__prof_node_get_initial_counts_2_p_0(propagate__ProfNode_10, &propagate__InitCount_11);
    }
#line 259 "propagate.m"
    *propagate__STATE_VARIABLE_Sum_13 = (propagate__STATE_VARIABLE_Sum_0_12 + propagate__InitCount_11);
#line 256 "propagate.m"
  }
#line 253 "propagate.m"
}

#line 268 "propagate.m"
static void MR_CALL 
propagate__process_cycle_5_p_0_2(
#line 268 "propagate.m"
  MR_Box propagate__closure_arg,
#line 268 "propagate.m"
  MR_Box propagate__wrapper_arg_1,
#line 268 "propagate.m"
  MR_Box propagate__wrapper_arg_2,
#line 268 "propagate.m"
  MR_Box * propagate__wrapper_arg_3)
#line 268 "propagate.m"
{
#line 268 "propagate.m"
  {
#line 268 "propagate.m"
    MR_Box propagate__closure = propagate__closure_arg;
#line 268 "propagate.m"
    MR_Float propagate__conv2_STATE_VARIABLE_Sum_13;

#line 268 "propagate.m"
    {
#line 268 "propagate.m"
      propagate__accumulate_propagated_counts_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), propagate__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__closure, (MR_Integer) 4))), ((MR_String) propagate__wrapper_arg_1), MR_unbox_float(propagate__wrapper_arg_2), &propagate__conv2_STATE_VARIABLE_Sum_13);
    }
#line 268 "propagate.m"
    *propagate__wrapper_arg_3 = MR_box_float(propagate__conv2_STATE_VARIABLE_Sum_13);
#line 268 "propagate.m"
  }
#line 268 "propagate.m"
}

#line 251 "propagate.m"
static void MR_CALL 
propagate__process_cycle_5_p_0_1(
#line 251 "propagate.m"
  MR_Box propagate__closure_arg,
#line 251 "propagate.m"
  MR_Box propagate__wrapper_arg_1,
#line 251 "propagate.m"
  MR_Box propagate__wrapper_arg_2,
#line 251 "propagate.m"
  MR_Box * propagate__wrapper_arg_3)
#line 251 "propagate.m"
{
#line 251 "propagate.m"
  {
#line 251 "propagate.m"
    MR_Box propagate__closure = propagate__closure_arg;
#line 251 "propagate.m"
    MR_Integer propagate__conv0_STATE_VARIABLE_Sum_13;

#line 251 "propagate.m"
    {
#line 251 "propagate.m"
      propagate__accumulate_self_counts_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), propagate__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__closure, (MR_Integer) 4))), ((MR_String) propagate__wrapper_arg_1), ((MR_Integer) propagate__wrapper_arg_2), &propagate__conv0_STATE_VARIABLE_Sum_13);
    }
#line 251 "propagate.m"
    *propagate__wrapper_arg_3 = ((MR_Box) (propagate__conv0_STATE_VARIABLE_Sum_13));
#line 251 "propagate.m"
  }
#line 251 "propagate.m"
}

#line 212 "propagate.m"
static void MR_CALL 
propagate__process_cycle_5_p_0(
#line 212 "propagate.m"
  MR_Word propagate__Preds_6,
#line 212 "propagate.m"
  MR_Integer propagate__Cycle_7,
#line 212 "propagate.m"
  MR_Word propagate__AddrMap_8,
#line 212 "propagate.m"
  MR_Word propagate__STATE_VARIABLE_ProfNodeMap_0_21,
#line 212 "propagate.m"
  MR_Word * propagate__STATE_VARIABLE_ProfNodeMap_22)
#line 212 "propagate.m"
{
#line 215 "propagate.m"
  {
#line 215 "propagate.m"
    MR_bool propagate__succeeded;
#line 215 "propagate.m"
    MR_Integer propagate__Total_10;
#line 215 "propagate.m"
    MR_Integer propagate__Recursive_11;
#line 215 "propagate.m"
    MR_Word propagate__ParentList_12;
#line 215 "propagate.m"
    MR_String propagate__NameStr_13;
#line 215 "propagate.m"
    MR_Integer propagate__SelfCounts_14;
#line 215 "propagate.m"
    MR_Float propagate__PropCounts_15;
#line 215 "propagate.m"
    MR_Word propagate__CycleList_16;
#line 215 "propagate.m"
    MR_Word propagate__ProfNode_17;
#line 215 "propagate.m"
    MR_Integer propagate__Address_18;
#line 215 "propagate.m"
    MR_Float propagate__TotalCalls_19;
#line 215 "propagate.m"
    MR_Float propagate__TotalCounts_20;
#line 215 "propagate.m"
    MR_Word propagate__STATE_VARIABLE_ProfNodeMap_28_28;
#line 215 "propagate.m"
    MR_Float propagate__V_29_29;
#line 215 "propagate.m"
    MR_String propagate__V_34_34;
#line 215 "propagate.m"
    MR_String propagate__V_35_35;
#line 215 "propagate.m"
    MR_Word propagate__ParentMap_43;
#line 215 "propagate.m"
    MR_Word propagate__ParentAssocList_44;
#line 215 "propagate.m"
    MR_Word propagate__V_66_66;
#line 215 "propagate.m"
    MR_Word propagate__V_77_77;
#line 215 "propagate.m"
    MR_String propagate__P_124;
#line 215 "propagate.m"
    MR_Word propagate__Ps_125;
#line 215 "propagate.m"
    MR_Word propagate__CycleList0_129;
#line 215 "propagate.m"
    MR_Word propagate__PredInfo_130;
#line 251 "propagate.m"
    MR_Box propagate__conv1_SelfCounts_14;
#line 268 "propagate.m"
    MR_Box propagate__conv3_PropCounts_15;

#line 344 "propagate.m"
    if ((propagate__Preds_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 344 "propagate.m"
      {
#line 345 "propagate.m"
        {
#line 345 "propagate.m"
          mercury__require__error_1_p_0((MR_String) "build_parent_map: empty cycle list\n");
#line 345 "propagate.m"
          return;
        }
#line 344 "propagate.m"
      }
#line 344 "propagate.m"
    else
#line 347 "propagate.m"
      {
#line 347 "propagate.m"
        MR_Word propagate__V_58_58;
#line 347 "propagate.m"
        MR_String propagate__C_96;
#line 347 "propagate.m"
        MR_Word propagate__Cs_97;
#line 347 "propagate.m"
        MR_Word propagate__ProfNode_104;
#line 347 "propagate.m"
        MR_Word propagate__ParentList_105;
#line 347 "propagate.m"
        MR_Integer propagate__TotalCalls1_106;
#line 347 "propagate.m"
        MR_Integer propagate__SelfCalls1_107;
#line 347 "propagate.m"
        MR_Word propagate__STATE_VARIABLE_ParentMap_43_116;
#line 347 "propagate.m"
        MR_Integer propagate__STATE_VARIABLE_TotalCalls_44_117;
#line 347 "propagate.m"
        MR_Integer propagate__STATE_VARIABLE_SelfCalls_45_118;

#line 349 "propagate.m"
        {
#line 349 "propagate.m"
          propagate__V_58_58 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
        }
#line 357 "propagate.m"
        propagate__C_96 = ((MR_String) (MR_hl_field(MR_mktag(1), propagate__Preds_6, (MR_Integer) 0)));
#line 357 "propagate.m"
        propagate__Cs_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__Preds_6, (MR_Integer) 1)));
#line 359 "propagate.m"
        {
#line 359 "propagate.m"
          prof_info__get_prof_node_4_p_0(propagate__C_96, propagate__AddrMap_8, propagate__STATE_VARIABLE_ProfNodeMap_0_21, &propagate__ProfNode_104);
        }
#line 360 "propagate.m"
        {
#line 360 "propagate.m"
          prof_info__prof_node_get_parent_list_2_p_0(propagate__ProfNode_104, &propagate__ParentList_105);
        }
#line 361 "propagate.m"
        {
#line 361 "propagate.m"
          propagate__add_to_parent_map_8_p_0(propagate__ParentList_105, propagate__Preds_6, (MR_Integer) 0, &propagate__TotalCalls1_106, (MR_Integer) 0, &propagate__SelfCalls1_107, propagate__V_58_58, &propagate__STATE_VARIABLE_ParentMap_43_116);
        }
#line 364 "propagate.m"
        propagate__STATE_VARIABLE_TotalCalls_44_117 = ((MR_Integer) 0 + propagate__TotalCalls1_106);
#line 365 "propagate.m"
        propagate__STATE_VARIABLE_SelfCalls_45_118 = ((MR_Integer) 0 + propagate__SelfCalls1_107);
#line 366 "propagate.m"
        {
#line 366 "propagate.m"
          propagate__build_parent_map_2_10_p_0(propagate__Cs_97, propagate__Preds_6, propagate__AddrMap_8, propagate__STATE_VARIABLE_ProfNodeMap_0_21, propagate__STATE_VARIABLE_TotalCalls_44_117, &propagate__Total_10, propagate__STATE_VARIABLE_SelfCalls_45_118, &propagate__Recursive_11, propagate__STATE_VARIABLE_ParentMap_43_116, &propagate__ParentMap_43);
        }
#line 347 "propagate.m"
      }
#line 326 "propagate.m"
    {
#line 326 "propagate.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, propagate__ParentMap_43, &propagate__ParentAssocList_44);
    }
#line 327 "propagate.m"
    {
#line 327 "propagate.m"
      propagate__ParentList_12 = propagate__assoc_list_to_pred_info_list_1_f_0(propagate__ParentAssocList_44);
    }
#line 2057 "propagate.c"
    {
#line 2059 "propagate.c"
      propagate__V_34_34 = mercury__string__int_to_string_1_f_0(propagate__Cycle_7);
    }
#line 2062 "propagate.c"
    {
#line 2064 "propagate.c"
      propagate__V_35_35 = mercury__string__f_43_43_2_f_0(propagate__V_34_34, (MR_String) " as a whole >");
    }
#line 2067 "propagate.c"
    {
#line 2069 "propagate.c"
      propagate__NameStr_13 = mercury__string__f_43_43_2_f_0((MR_String) "< cycle ", propagate__V_35_35);
    }
#line 251 "propagate.m"
    {
#line 251 "propagate.m"
      propagate__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 251 "propagate.m"
      MR_hl_field(MR_mktag(0), propagate__V_66_66, 0) = ((MR_Box) (&propagate_scalar_common_4[0]));
#line 251 "propagate.m"
      MR_hl_field(MR_mktag(0), propagate__V_66_66, 1) = ((MR_Box) (propagate__process_cycle_5_p_0_1));
#line 251 "propagate.m"
      MR_hl_field(MR_mktag(0), propagate__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 251 "propagate.m"
      MR_hl_field(MR_mktag(0), propagate__V_66_66, 3) = ((MR_Box) (propagate__AddrMap_8));
#line 251 "propagate.m"
      MR_hl_field(MR_mktag(0), propagate__V_66_66, 4) = ((MR_Box) (propagate__STATE_VARIABLE_ProfNodeMap_0_21));
#line 251 "propagate.m"
    }
#line 251 "propagate.m"
    {
#line 251 "propagate.m"
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, propagate__V_66_66, propagate__Preds_6, ((MR_Box) ((MR_Integer) 0)), &propagate__conv1_SelfCounts_14);
    }
#line 251 "propagate.m"
    propagate__SelfCounts_14 = ((MR_Integer) propagate__conv1_SelfCounts_14);
#line 268 "propagate.m"
    {
#line 268 "propagate.m"
      propagate__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 268 "propagate.m"
      MR_hl_field(MR_mktag(0), propagate__V_77_77, 0) = ((MR_Box) (&propagate_scalar_common_4[1]));
#line 268 "propagate.m"
      MR_hl_field(MR_mktag(0), propagate__V_77_77, 1) = ((MR_Box) (propagate__process_cycle_5_p_0_2));
#line 268 "propagate.m"
      MR_hl_field(MR_mktag(0), propagate__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 268 "propagate.m"
      MR_hl_field(MR_mktag(0), propagate__V_77_77, 3) = ((MR_Box) (propagate__AddrMap_8));
#line 268 "propagate.m"
      MR_hl_field(MR_mktag(0), propagate__V_77_77, 4) = ((MR_Box) (propagate__STATE_VARIABLE_ProfNodeMap_0_21));
#line 268 "propagate.m"
    }
#line 268 "propagate.m"
    {
#line 268 "propagate.m"
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, propagate__V_77_77, propagate__Preds_6, MR_box_float((MR_Float) 0.0000000000000000), &propagate__conv3_PropCounts_15);
    }
#line 268 "propagate.m"
    propagate__PropCounts_15 = MR_unbox_float(propagate__conv3_PropCounts_15);
#line 288 "propagate.m"
    propagate__P_124 = ((MR_String) (MR_hl_field(MR_mktag(1), propagate__Preds_6, (MR_Integer) 0)));
#line 288 "propagate.m"
    propagate__Ps_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__Preds_6, (MR_Integer) 1)));
#line 289 "propagate.m"
    {
#line 289 "propagate.m"
      propagate__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_121_99_108_101_95_108_105_115_116_95_95_91_50_44_32_51_93_95_48_4_p_0(propagate__Ps_125, &propagate__CycleList0_129);
    }
#line 290 "propagate.m"
    {
#line 290 "propagate.m"
      prof_info__pred_info_init_3_p_0(propagate__P_124, (MR_Integer) 0, &propagate__PredInfo_130);
    }
#line 291 "propagate.m"
    {
#line 291 "propagate.m"
      propagate__CycleList_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "propagate.m"
      MR_hl_field(MR_mktag(1), propagate__CycleList_16, 0) = ((MR_Box) (propagate__PredInfo_130));
#line 291 "propagate.m"
      MR_hl_field(MR_mktag(1), propagate__CycleList_16, 1) = ((MR_Box) (propagate__CycleList0_129));
#line 291 "propagate.m"
    }
#line 230 "propagate.m"
    {
#line 230 "propagate.m"
      propagate__ProfNode_17 = prof_info__prof_node_init_cycle_7_f_0(propagate__NameStr_13, (MR_Integer) 0, propagate__SelfCounts_14, propagate__PropCounts_15, propagate__CycleList_16, propagate__Total_10, propagate__Recursive_11);
    }
#line 235 "propagate.m"
    propagate__Address_18 = ((MR_Integer) 0 - propagate__Cycle_7);
#line 236 "propagate.m"
    {
#line 236 "propagate.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, propagate__Address_18, ((MR_Box) (propagate__ProfNode_17)), propagate__STATE_VARIABLE_ProfNodeMap_0_21, &propagate__STATE_VARIABLE_ProfNodeMap_28_28);
    }
#line 239 "propagate.m"
    {
#line 239 "propagate.m"
      propagate__TotalCalls_19 = mercury__float__float_1_f_0(propagate__Total_10);
    }
#line 240 "propagate.m"
    {
#line 240 "propagate.m"
      propagate__V_29_29 = mercury__float__float_1_f_0(propagate__SelfCounts_14);
    }
#line 240 "propagate.m"
    propagate__TotalCounts_20 = (propagate__V_29_29 + propagate__PropCounts_15);
#line 241 "propagate.m"
    {
#line 241 "propagate.m"
      propagate__propagate_counts_3_6_p_0(propagate__ParentList_12, propagate__TotalCounts_20, propagate__TotalCalls_19, propagate__AddrMap_8, propagate__STATE_VARIABLE_ProfNodeMap_28_28, propagate__STATE_VARIABLE_ProfNodeMap_22);
#line 241 "propagate.m"
      return;
    }
#line 215 "propagate.m"
  }
#line 212 "propagate.m"
}

#line 176 "propagate.m"
static void MR_CALL 
propagate__propagate_counts_2_5_p_0(
#line 176 "propagate.m"
  MR_Word propagate__HeadVar__1_1,
#line 176 "propagate.m"
  MR_Word propagate__CycleInfo_2,
#line 176 "propagate.m"
  MR_Word propagate__AddrDeclMap_3,
#line 176 "propagate.m"
  MR_Word propagate__STATE_VARIABLE_ProfNodeMap_0_4,
#line 176 "propagate.m"
  MR_Word * propagate__STATE_VARIABLE_ProfNodeMap_5)
#line 176 "propagate.m"
{
#line 179 "propagate.m"
  while (MR_TRUE)
#line 179 "propagate.m"
    {
#line 179 "propagate.m"
      /* tailcall optimized into a loop */
#line 179 "propagate.m"
      {
#line 179 "propagate.m"
        MR_bool propagate__succeeded;

#line 179 "propagate.m"
        if ((propagate__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 179 "propagate.m"
          *propagate__STATE_VARIABLE_ProfNodeMap_5 = propagate__STATE_VARIABLE_ProfNodeMap_0_4;
#line 179 "propagate.m"
        else
#line 180 "propagate.m"
          {
#line 180 "propagate.m"
            MR_String propagate__Pred_11 = ((MR_String) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 0)));
#line 180 "propagate.m"
            MR_Word propagate__Preds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 1)));
#line 193 "propagate.m"
            MR_Integer propagate__Cycle_16;
#line 181 "propagate.m"
            MR_Word propagate__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__CycleInfo_2, (MR_Integer) 0)));
#line 181 "propagate.m"
            MR_Word propagate__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__CycleInfo_2, (MR_Integer) 1)));
#line 181 "propagate.m"
            MR_Box propagate__conv0_Cycle_16;

#line 181 "propagate.m"
            {
#line 181 "propagate.m"
              propagate__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, propagate__V_28_28, ((MR_Box) (propagate__Pred_11)), &propagate__conv0_Cycle_16);
            }
#line 181 "propagate.m"
            if (propagate__succeeded)
#line 181 "propagate.m"
              {
#line 181 "propagate.m"
                propagate__Cycle_16 = ((MR_Integer) propagate__conv0_Cycle_16);
#line 181 "propagate.m"
                propagate__succeeded = MR_TRUE;
#line 181 "propagate.m"
              }
#line 193 "propagate.m"
            if (propagate__succeeded)
#line 182 "propagate.m"
              {
#line 182 "propagate.m"
                MR_Word propagate__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 182 "propagate.m"
                MR_Word propagate__CyclePreds_17;
#line 182 "propagate.m"
                MR_Integer propagate__Length_18;
#line 182 "propagate.m"
                MR_Word propagate__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__CycleInfo_2, (MR_Integer) 1)));
#line 182 "propagate.m"
                MR_Word propagate__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__CycleInfo_2, (MR_Integer) 0)));
#line 190 "propagate.m"
                MR_Word propagate__NewPreds_19;
#line 187 "propagate.m"
                MR_Integer propagate__V_30_30;

#line 182 "propagate.m"
                {
#line 182 "propagate.m"
                  mercury__multi_map__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, propagate__TypeCtorInfo_44_44, propagate__V_29_29, ((MR_Box) (propagate__Cycle_16)), &propagate__CyclePreds_17);
                }
#line 183 "propagate.m"
                {
#line 183 "propagate.m"
                  mercury__list__length_2_p_0(propagate__TypeCtorInfo_44_44, propagate__CyclePreds_17, &propagate__Length_18);
                }
#line 187 "propagate.m"
                propagate__V_30_30 = (propagate__Length_18 - (MR_Integer) 1);
#line 187 "propagate.m"
                {
#line 187 "propagate.m"
                  propagate__succeeded = mercury__list__drop_3_p_0(propagate__TypeCtorInfo_44_44, propagate__V_30_30, propagate__Preds_12, &propagate__NewPreds_19);
                }
#line 190 "propagate.m"
                if (propagate__succeeded)
#line 188 "propagate.m"
                  {
#line 188 "propagate.m"
                    MR_Word propagate__STATE_VARIABLE_ProfNodeMap_32_32;

#line 188 "propagate.m"
                    {
#line 188 "propagate.m"
                      propagate__process_cycle_5_p_0(propagate__CyclePreds_17, propagate__Cycle_16, propagate__AddrDeclMap_3, propagate__STATE_VARIABLE_ProfNodeMap_0_4, &propagate__STATE_VARIABLE_ProfNodeMap_32_32);
                    }
#line 189 "propagate.m"
                    /* direct tailcall eliminated */
#line 189 "propagate.m"
                    {
#line 189 "propagate.m"
                      MR_Word propagate__HeadVar__1__tmp_copy_1 = propagate__NewPreds_19;
#line 189 "propagate.m"
                      MR_Word propagate__STATE_VARIABLE_ProfNodeMap_0__tmp_copy_4 = propagate__STATE_VARIABLE_ProfNodeMap_32_32;

#line 189 "propagate.m"
                      propagate__STATE_VARIABLE_ProfNodeMap_0_4 = propagate__STATE_VARIABLE_ProfNodeMap_0__tmp_copy_4;
#line 189 "propagate.m"
                      propagate__HeadVar__1_1 = propagate__HeadVar__1__tmp_copy_1;
#line 189 "propagate.m"
                    }
#line 189 "propagate.m"
                    continue;
#line 188 "propagate.m"
                  }
#line 190 "propagate.m"
                else
#line 191 "propagate.m"
                  {
#line 191 "propagate.m"
                    {
#line 191 "propagate.m"
                      mercury__require__error_1_p_0((MR_String) "propagate_counts_2: list_drop failed\n");
#line 191 "propagate.m"
                      return;
                    }
#line 191 "propagate.m"
                  }
#line 182 "propagate.m"
              }
#line 193 "propagate.m"
            else
#line 194 "propagate.m"
              {
#line 194 "propagate.m"
                MR_Word propagate__ProfNode_20;
#line 194 "propagate.m"
                MR_Integer propagate__InitCounts_21;
#line 194 "propagate.m"
                MR_Float propagate__PropCounts_22;
#line 194 "propagate.m"
                MR_Word propagate__ParentList_23;
#line 194 "propagate.m"
                MR_Integer propagate__TotalCalls_24;
#line 194 "propagate.m"
                MR_Float propagate__TotalCounts_25;
#line 194 "propagate.m"
                MR_Float propagate__V_35_35;
#line 194 "propagate.m"
                MR_Float propagate__V_36_36;
#line 194 "propagate.m"
                MR_Word propagate__STATE_VARIABLE_ProfNodeMap_37_37;

#line 194 "propagate.m"
                {
#line 194 "propagate.m"
                  prof_info__get_prof_node_4_p_0(propagate__Pred_11, propagate__AddrDeclMap_3, propagate__STATE_VARIABLE_ProfNodeMap_0_4, &propagate__ProfNode_20);
                }
#line 195 "propagate.m"
                {
#line 195 "propagate.m"
                  prof_info__prof_node_get_initial_counts_2_p_0(propagate__ProfNode_20, &propagate__InitCounts_21);
                }
#line 196 "propagate.m"
                {
#line 196 "propagate.m"
                  prof_info__prof_node_get_propagated_counts_2_p_0(propagate__ProfNode_20, &propagate__PropCounts_22);
                }
#line 197 "propagate.m"
                {
#line 197 "propagate.m"
                  prof_info__prof_node_get_parent_list_2_p_0(propagate__ProfNode_20, &propagate__ParentList_23);
                }
#line 198 "propagate.m"
                {
#line 198 "propagate.m"
                  prof_info__prof_node_get_total_calls_2_p_0(propagate__ProfNode_20, &propagate__TotalCalls_24);
                }
#line 200 "propagate.m"
                {
#line 200 "propagate.m"
                  propagate__V_35_35 = mercury__float__float_1_f_0(propagate__InitCounts_21);
                }
#line 200 "propagate.m"
                propagate__TotalCounts_25 = (propagate__V_35_35 + propagate__PropCounts_22);
#line 202 "propagate.m"
                {
#line 202 "propagate.m"
                  propagate__V_36_36 = mercury__float__float_1_f_0(propagate__TotalCalls_24);
                }
#line 202 "propagate.m"
                {
#line 202 "propagate.m"
                  propagate__propagate_counts_3_6_p_0(propagate__ParentList_23, propagate__TotalCounts_25, propagate__V_36_36, propagate__AddrDeclMap_3, propagate__STATE_VARIABLE_ProfNodeMap_0_4, &propagate__STATE_VARIABLE_ProfNodeMap_37_37);
                }
#line 204 "propagate.m"
                /* direct tailcall eliminated */
#line 204 "propagate.m"
                {
#line 204 "propagate.m"
                  MR_Word propagate__HeadVar__1__tmp_copy_1 = propagate__Preds_12;
#line 204 "propagate.m"
                  MR_Word propagate__STATE_VARIABLE_ProfNodeMap_0__tmp_copy_4 = propagate__STATE_VARIABLE_ProfNodeMap_37_37;

#line 204 "propagate.m"
                  propagate__STATE_VARIABLE_ProfNodeMap_0_4 = propagate__STATE_VARIABLE_ProfNodeMap_0__tmp_copy_4;
#line 204 "propagate.m"
                  propagate__HeadVar__1_1 = propagate__HeadVar__1__tmp_copy_1;
#line 204 "propagate.m"
                }
#line 204 "propagate.m"
                continue;
#line 194 "propagate.m"
              }
#line 180 "propagate.m"
          }
#line 179 "propagate.m"
      }
#line 179 "propagate.m"
      break;
#line 179 "propagate.m"
    }
#line 176 "propagate.m"
}

#line 160 "propagate.m"
static void MR_CALL 
propagate__update_cycles_3_5_p_0(
#line 160 "propagate.m"
  MR_Word propagate__HeadVar__1_1,
#line 160 "propagate.m"
  MR_Integer propagate__CycleNum_2,
#line 160 "propagate.m"
  MR_Word propagate__AddrDecl_3,
#line 160 "propagate.m"
  MR_Word propagate__STATE_VARIABLE_ProfNodeMap_0_4,
#line 160 "propagate.m"
  MR_Word * propagate__STATE_VARIABLE_ProfNodeMap_5)
#line 160 "propagate.m"
{
#line 163 "propagate.m"
  while (MR_TRUE)
#line 163 "propagate.m"
    {
#line 163 "propagate.m"
      /* tailcall optimized into a loop */
#line 163 "propagate.m"
      {
#line 163 "propagate.m"
        MR_bool propagate__succeeded;

#line 163 "propagate.m"
        if ((propagate__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "propagate.m"
          *propagate__STATE_VARIABLE_ProfNodeMap_5 = propagate__STATE_VARIABLE_ProfNodeMap_0_4;
#line 163 "propagate.m"
        else
#line 164 "propagate.m"
          {
#line 164 "propagate.m"
            MR_String propagate__P_11 = ((MR_String) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 0)));
#line 164 "propagate.m"
            MR_Word propagate__Ps_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 1)));
#line 164 "propagate.m"
            MR_Word propagate__ProfNode0_16;
#line 164 "propagate.m"
            MR_Word propagate__ProfNode_17;
#line 164 "propagate.m"
            MR_Word propagate__STATE_VARIABLE_ProfNodeMap_20_20;

#line 165 "propagate.m"
            {
#line 165 "propagate.m"
              prof_info__get_prof_node_4_p_0(propagate__P_11, propagate__AddrDecl_3, propagate__STATE_VARIABLE_ProfNodeMap_0_4, &propagate__ProfNode0_16);
            }
#line 166 "propagate.m"
            {
#line 166 "propagate.m"
              prof_info__prof_node_set_cycle_num_3_p_0(propagate__CycleNum_2, propagate__ProfNode0_16, &propagate__ProfNode_17);
            }
#line 167 "propagate.m"
            {
#line 167 "propagate.m"
              prof_info__update_prof_node_5_p_0(propagate__P_11, propagate__ProfNode_17, propagate__AddrDecl_3, propagate__STATE_VARIABLE_ProfNodeMap_0_4, &propagate__STATE_VARIABLE_ProfNodeMap_20_20);
            }
#line 168 "propagate.m"
            /* direct tailcall eliminated */
#line 168 "propagate.m"
            {
#line 168 "propagate.m"
              MR_Word propagate__HeadVar__1__tmp_copy_1 = propagate__Ps_12;
#line 168 "propagate.m"
              MR_Word propagate__STATE_VARIABLE_ProfNodeMap_0__tmp_copy_4 = propagate__STATE_VARIABLE_ProfNodeMap_20_20;

#line 168 "propagate.m"
              propagate__STATE_VARIABLE_ProfNodeMap_0_4 = propagate__STATE_VARIABLE_ProfNodeMap_0__tmp_copy_4;
#line 168 "propagate.m"
              propagate__HeadVar__1_1 = propagate__HeadVar__1__tmp_copy_1;
#line 168 "propagate.m"
            }
#line 168 "propagate.m"
            continue;
#line 164 "propagate.m"
          }
#line 163 "propagate.m"
      }
#line 163 "propagate.m"
      break;
#line 163 "propagate.m"
    }
#line 160 "propagate.m"
}

#line 152 "propagate.m"
static void MR_CALL 
propagate__update_cycles_2_4_p_0(
#line 152 "propagate.m"
  MR_Word propagate__HeadVar__1_1,
#line 152 "propagate.m"
  MR_Word propagate__AddrDecl_2,
#line 152 "propagate.m"
  MR_Word propagate__STATE_VARIABLE_ProfNodeMap_0_3,
#line 152 "propagate.m"
  MR_Word * propagate__STATE_VARIABLE_ProfNodeMap_4)
#line 152 "propagate.m"
{
#line 155 "propagate.m"
  while (MR_TRUE)
#line 155 "propagate.m"
    {
#line 155 "propagate.m"
      /* tailcall optimized into a loop */
#line 155 "propagate.m"
      {
#line 155 "propagate.m"
        MR_bool propagate__succeeded;

#line 155 "propagate.m"
        if ((propagate__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 155 "propagate.m"
          *propagate__STATE_VARIABLE_ProfNodeMap_4 = propagate__STATE_VARIABLE_ProfNodeMap_0_3;
#line 155 "propagate.m"
        else
#line 156 "propagate.m"
          {
#line 156 "propagate.m"
            MR_Integer propagate__Num_9;
#line 156 "propagate.m"
            MR_Word propagate__Preds_10;
#line 156 "propagate.m"
            MR_Word propagate__Rest_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 1)));
#line 156 "propagate.m"
            MR_Word propagate__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 0)));
#line 156 "propagate.m"
            MR_Word propagate__STATE_VARIABLE_ProfNodeMap_17_17;

#line 156 "propagate.m"
            propagate__Num_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), propagate__V_16_16, (MR_Integer) 0)));
#line 156 "propagate.m"
            propagate__Preds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__V_16_16, (MR_Integer) 1)));
#line 157 "propagate.m"
            {
#line 157 "propagate.m"
              propagate__update_cycles_3_5_p_0(propagate__Preds_10, propagate__Num_9, propagate__AddrDecl_2, propagate__STATE_VARIABLE_ProfNodeMap_0_3, &propagate__STATE_VARIABLE_ProfNodeMap_17_17);
            }
#line 158 "propagate.m"
            /* direct tailcall eliminated */
#line 158 "propagate.m"
            {
#line 158 "propagate.m"
              MR_Word propagate__HeadVar__1__tmp_copy_1 = propagate__Rest_11;
#line 158 "propagate.m"
              MR_Word propagate__STATE_VARIABLE_ProfNodeMap_0__tmp_copy_3 = propagate__STATE_VARIABLE_ProfNodeMap_17_17;

#line 158 "propagate.m"
              propagate__STATE_VARIABLE_ProfNodeMap_0_3 = propagate__STATE_VARIABLE_ProfNodeMap_0__tmp_copy_3;
#line 158 "propagate.m"
              propagate__HeadVar__1_1 = propagate__HeadVar__1__tmp_copy_1;
#line 158 "propagate.m"
            }
#line 158 "propagate.m"
            continue;
#line 156 "propagate.m"
          }
#line 155 "propagate.m"
      }
#line 155 "propagate.m"
      break;
#line 155 "propagate.m"
    }
#line 152 "propagate.m"
}

#line 133 "propagate.m"
static void MR_CALL 
propagate__add_to_cycle_map_6_p_0(
#line 133 "propagate.m"
  MR_Word propagate__HeadVar__1_1,
#line 133 "propagate.m"
  MR_Integer propagate__Cycle_2,
#line 133 "propagate.m"
  MR_Word propagate__STATE_VARIABLE_PredToCycleMap_0_3,
#line 133 "propagate.m"
  MR_Word * propagate__STATE_VARIABLE_PredToCycleMap_4,
#line 133 "propagate.m"
  MR_Word propagate__STATE_VARIABLE_CycleToPredsMap_0_5,
#line 133 "propagate.m"
  MR_Word * propagate__STATE_VARIABLE_CycleToPredsMap_6)
#line 133 "propagate.m"
{
#line 137 "propagate.m"
  while (MR_TRUE)
#line 137 "propagate.m"
    {
#line 137 "propagate.m"
      /* tailcall optimized into a loop */
#line 137 "propagate.m"
      {
#line 137 "propagate.m"
        MR_bool propagate__succeeded;

#line 137 "propagate.m"
        if ((propagate__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 137 "propagate.m"
          {
#line 137 "propagate.m"
            *propagate__STATE_VARIABLE_CycleToPredsMap_6 = propagate__STATE_VARIABLE_CycleToPredsMap_0_5;
#line 137 "propagate.m"
            *propagate__STATE_VARIABLE_PredToCycleMap_4 = propagate__STATE_VARIABLE_PredToCycleMap_0_3;
#line 137 "propagate.m"
          }
#line 137 "propagate.m"
        else
#line 138 "propagate.m"
          {
#line 138 "propagate.m"
            MR_Word propagate__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 138 "propagate.m"
            MR_Word propagate__TypeCtorInfo_28_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 138 "propagate.m"
            MR_String propagate__Pred_14 = ((MR_String) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 0)));
#line 138 "propagate.m"
            MR_Word propagate__Preds_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 1)));
#line 138 "propagate.m"
            MR_Word propagate__STATE_VARIABLE_PredToCycleMap_23_23;
#line 138 "propagate.m"
            MR_Word propagate__STATE_VARIABLE_CycleToPredsMap_24_24;

#line 139 "propagate.m"
            {
#line 139 "propagate.m"
              mercury__map__det_insert_4_p_0(propagate__TypeCtorInfo_27_27, propagate__TypeCtorInfo_28_28, ((MR_Box) (propagate__Pred_14)), ((MR_Box) (propagate__Cycle_2)), propagate__STATE_VARIABLE_PredToCycleMap_0_3, &propagate__STATE_VARIABLE_PredToCycleMap_23_23);
            }
#line 140 "propagate.m"
            {
#line 140 "propagate.m"
              mercury__multi_map__set_4_p_0(propagate__TypeCtorInfo_28_28, propagate__TypeCtorInfo_27_27, ((MR_Box) (propagate__Cycle_2)), ((MR_Box) (propagate__Pred_14)), propagate__STATE_VARIABLE_CycleToPredsMap_0_5, &propagate__STATE_VARIABLE_CycleToPredsMap_24_24);
            }
#line 141 "propagate.m"
            /* direct tailcall eliminated */
#line 141 "propagate.m"
            {
#line 141 "propagate.m"
              MR_Word propagate__HeadVar__1__tmp_copy_1 = propagate__Preds_15;
#line 141 "propagate.m"
              MR_Word propagate__STATE_VARIABLE_PredToCycleMap_0__tmp_copy_3 = propagate__STATE_VARIABLE_PredToCycleMap_23_23;
#line 141 "propagate.m"
              MR_Word propagate__STATE_VARIABLE_CycleToPredsMap_0__tmp_copy_5 = propagate__STATE_VARIABLE_CycleToPredsMap_24_24;

#line 141 "propagate.m"
              propagate__STATE_VARIABLE_CycleToPredsMap_0_5 = propagate__STATE_VARIABLE_CycleToPredsMap_0__tmp_copy_5;
#line 141 "propagate.m"
              propagate__STATE_VARIABLE_PredToCycleMap_0_3 = propagate__STATE_VARIABLE_PredToCycleMap_0__tmp_copy_3;
#line 141 "propagate.m"
              propagate__HeadVar__1_1 = propagate__HeadVar__1__tmp_copy_1;
#line 141 "propagate.m"
            }
#line 141 "propagate.m"
            continue;
#line 138 "propagate.m"
          }
#line 137 "propagate.m"
      }
#line 137 "propagate.m"
      break;
#line 137 "propagate.m"
    }
#line 133 "propagate.m"
}

#line 107 "propagate.m"
static void MR_CALL 
propagate__identify_cycles_2_10_p_0_1(
#line 107 "propagate.m"
  MR_Box propagate__closure_arg,
#line 107 "propagate.m"
  MR_Box propagate__wrapper_arg_1,
#line 107 "propagate.m"
  MR_Box * propagate__wrapper_arg_2)
#line 107 "propagate.m"
{
#line 107 "propagate.m"
  {
#line 107 "propagate.m"
    MR_Box propagate__closure = propagate__closure_arg;
#line 107 "propagate.m"
    MR_String propagate__conv0_HeadVar__3_59;

#line 107 "propagate.m"
    {
#line 107 "propagate.m"
      propagate__IntroducedFrom__pred__identify_cycles_2__107__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), propagate__closure, (MR_Integer) 3))), ((MR_Word) propagate__wrapper_arg_1), &propagate__conv0_HeadVar__3_59);
    }
#line 107 "propagate.m"
    *propagate__wrapper_arg_2 = ((MR_Box) (propagate__conv0_HeadVar__3_59));
#line 107 "propagate.m"
  }
#line 107 "propagate.m"
}

#line 94 "propagate.m"
static void MR_CALL 
propagate__identify_cycles_2_10_p_0(
#line 94 "propagate.m"
  MR_Word propagate__HeadVar__1_1,
#line 94 "propagate.m"
  MR_Integer propagate__CycleNum0_2,
#line 94 "propagate.m"
  MR_Word propagate__InvG_3,
#line 94 "propagate.m"
  MR_Word propagate__Visit0_4,
#line 94 "propagate.m"
  MR_Word propagate__STATE_VARIABLE_ATSort_0_5,
#line 94 "propagate.m"
  MR_Word * propagate__STATE_VARIABLE_ATSort_6,
#line 94 "propagate.m"
  MR_Word propagate__STATE_VARIABLE_PredToCycleMap_0_7,
#line 94 "propagate.m"
  MR_Word * propagate__STATE_VARIABLE_PredToCycleMap_8,
#line 94 "propagate.m"
  MR_Word propagate__STATE_VARIABLE_CycleToPredsMap_0_9,
#line 94 "propagate.m"
  MR_Word * propagate__STATE_VARIABLE_CycleToPredsMap_10)
#line 94 "propagate.m"
{
#line 100 "propagate.m"
  while (MR_TRUE)
#line 100 "propagate.m"
    {
#line 100 "propagate.m"
      /* tailcall optimized into a loop */
#line 100 "propagate.m"
      {
#line 100 "propagate.m"
        MR_bool propagate__succeeded;

#line 100 "propagate.m"
        if ((propagate__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 100 "propagate.m"
          {
#line 100 "propagate.m"
            *propagate__STATE_VARIABLE_CycleToPredsMap_10 = propagate__STATE_VARIABLE_CycleToPredsMap_0_9;
#line 100 "propagate.m"
            *propagate__STATE_VARIABLE_PredToCycleMap_8 = propagate__STATE_VARIABLE_PredToCycleMap_0_7;
#line 100 "propagate.m"
            *propagate__STATE_VARIABLE_ATSort_6 = propagate__STATE_VARIABLE_ATSort_0_5;
#line 100 "propagate.m"
          }
#line 100 "propagate.m"
        else
#line 102 "propagate.m"
          {
#line 102 "propagate.m"
            MR_Word propagate__TypeCtorInfo_57_57 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 102 "propagate.m"
            MR_Word propagate__TypeInfo_61_61;
#line 102 "propagate.m"
            MR_Word propagate__Key_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 0)));
#line 102 "propagate.m"
            MR_Word propagate__Keys0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__HeadVar__1_1, (MR_Integer) 1)));
#line 102 "propagate.m"
            MR_Word propagate__Visit_31;
#line 102 "propagate.m"
            MR_Word propagate__DfsRev0_32;
#line 102 "propagate.m"
            MR_Word propagate__DfsRev_33;
#line 102 "propagate.m"
            MR_Integer propagate__CycleNum_35;
#line 102 "propagate.m"
            MR_Word propagate__Keys_39;
#line 102 "propagate.m"
            MR_Word propagate__V_46_46;
#line 102 "propagate.m"
            MR_Word propagate__STATE_VARIABLE_PredToCycleMap_49_49;
#line 102 "propagate.m"
            MR_Word propagate__STATE_VARIABLE_CycleToPredsMap_50_50;
#line 102 "propagate.m"
            MR_Word propagate__STATE_VARIABLE_ATSort_53_53;

#line 106 "propagate.m"
            {
#line 106 "propagate.m"
              mercury__digraph__dfsrev_5_p_0(propagate__TypeCtorInfo_57_57, propagate__InvG_3, propagate__Key_23, propagate__Visit0_4, &propagate__Visit_31, &propagate__DfsRev0_32);
            }
#line 107 "propagate.m"
            {
#line 107 "propagate.m"
              propagate__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 107 "propagate.m"
              MR_hl_field(MR_mktag(0), propagate__V_46_46, 0) = ((MR_Box) (&propagate_scalar_common_3[0]));
#line 107 "propagate.m"
              MR_hl_field(MR_mktag(0), propagate__V_46_46, 1) = ((MR_Box) (propagate__identify_cycles_2_10_p_0_1));
#line 107 "propagate.m"
              MR_hl_field(MR_mktag(0), propagate__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "propagate.m"
              MR_hl_field(MR_mktag(0), propagate__V_46_46, 3) = ((MR_Box) (propagate__InvG_3));
#line 107 "propagate.m"
            }
#line 2810 "propagate.c"
            propagate__TypeInfo_61_61 = (MR_Word) &propagate_scalar_common_1[0];
#line 107 "propagate.m"
            {
#line 107 "propagate.m"
              mercury__list__map_3_p_0(propagate__TypeInfo_61_61, propagate__TypeCtorInfo_57_57, propagate__V_46_46, propagate__DfsRev0_32, &propagate__DfsRev_33);
            }
#line 112 "propagate.m"
            if ((propagate__DfsRev_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 110 "propagate.m"
              {
#line 111 "propagate.m"
                {
#line 111 "propagate.m"
                  mercury__require__error_1_p_0((MR_String) "identify_cycles_2: empty list\n");
#line 111 "propagate.m"
                  return;
                }
#line 110 "propagate.m"
              }
#line 112 "propagate.m"
            else
#line 112 "propagate.m"
              {
#line 112 "propagate.m"
                MR_Word propagate__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), propagate__DfsRev_33, (MR_Integer) 1)));
#line 112 "propagate.m"
                MR_String propagate__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(1), propagate__DfsRev_33, (MR_Integer) 0)));

#line 112 "propagate.m"
                if ((propagate__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 113 "propagate.m"
                  {
#line 114 "propagate.m"
                    propagate__CycleNum_35 = propagate__CycleNum0_2;
#line 114 "propagate.m"
                    propagate__STATE_VARIABLE_PredToCycleMap_49_49 = propagate__STATE_VARIABLE_PredToCycleMap_0_7;
#line 114 "propagate.m"
                    propagate__STATE_VARIABLE_CycleToPredsMap_50_50 = propagate__STATE_VARIABLE_CycleToPredsMap_0_9;
#line 113 "propagate.m"
                  }
#line 112 "propagate.m"
                else
#line 116 "propagate.m"
                  {
#line 116 "propagate.m"
                    MR_Word propagate__TypeCtorInfo_27_84;
#line 116 "propagate.m"
                    MR_Word propagate__TypeCtorInfo_28_85;
#line 116 "propagate.m"
                    MR_Word propagate__STATE_VARIABLE_PredToCycleMap_23_80;
#line 116 "propagate.m"
                    MR_Word propagate__STATE_VARIABLE_CycleToPredsMap_24_81;

#line 117 "propagate.m"
                    propagate__CycleNum_35 = (propagate__CycleNum0_2 + (MR_Integer) 1);
#line 2866 "propagate.c"
                    propagate__TypeCtorInfo_27_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2868 "propagate.c"
                    propagate__TypeCtorInfo_28_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 139 "propagate.m"
                    {
#line 139 "propagate.m"
                      mercury__map__det_insert_4_p_0(propagate__TypeCtorInfo_27_84, propagate__TypeCtorInfo_28_85, ((MR_Box) (propagate__V_63_63)), ((MR_Box) (propagate__CycleNum_35)), propagate__STATE_VARIABLE_PredToCycleMap_0_7, &propagate__STATE_VARIABLE_PredToCycleMap_23_80);
                    }
#line 140 "propagate.m"
                    {
#line 140 "propagate.m"
                      mercury__multi_map__set_4_p_0(propagate__TypeCtorInfo_28_85, propagate__TypeCtorInfo_27_84, ((MR_Box) (propagate__CycleNum_35)), ((MR_Box) (propagate__V_63_63)), propagate__STATE_VARIABLE_CycleToPredsMap_0_9, &propagate__STATE_VARIABLE_CycleToPredsMap_24_81);
                    }
#line 141 "propagate.m"
                    {
#line 141 "propagate.m"
                      propagate__add_to_cycle_map_6_p_0(propagate__V_62_62, propagate__CycleNum_35, propagate__STATE_VARIABLE_PredToCycleMap_23_80, &propagate__STATE_VARIABLE_PredToCycleMap_49_49, propagate__STATE_VARIABLE_CycleToPredsMap_24_81, &propagate__STATE_VARIABLE_CycleToPredsMap_50_50);
                    }
#line 116 "propagate.m"
                  }
#line 112 "propagate.m"
              }
#line 121 "propagate.m"
            {
#line 121 "propagate.m"
              mercury__list__append_3_p_1(propagate__TypeCtorInfo_57_57, propagate__DfsRev_33, propagate__STATE_VARIABLE_ATSort_0_5, &propagate__STATE_VARIABLE_ATSort_53_53);
            }
#line 125 "propagate.m"
            {
#line 125 "propagate.m"
              mercury__list__delete_elems_3_p_0(propagate__TypeInfo_61_61, propagate__Keys0_24, propagate__DfsRev0_32, &propagate__Keys_39);
            }
#line 126 "propagate.m"
            /* direct tailcall eliminated */
#line 126 "propagate.m"
            {
#line 126 "propagate.m"
              MR_Word propagate__HeadVar__1__tmp_copy_1 = propagate__Keys_39;
#line 126 "propagate.m"
              MR_Integer propagate__CycleNum0__tmp_copy_2 = propagate__CycleNum_35;
#line 126 "propagate.m"
              MR_Word propagate__Visit0__tmp_copy_4 = propagate__Visit_31;
#line 126 "propagate.m"
              MR_Word propagate__STATE_VARIABLE_ATSort_0__tmp_copy_5 = propagate__STATE_VARIABLE_ATSort_53_53;
#line 126 "propagate.m"
              MR_Word propagate__STATE_VARIABLE_PredToCycleMap_0__tmp_copy_7 = propagate__STATE_VARIABLE_PredToCycleMap_49_49;
#line 126 "propagate.m"
              MR_Word propagate__STATE_VARIABLE_CycleToPredsMap_0__tmp_copy_9 = propagate__STATE_VARIABLE_CycleToPredsMap_50_50;

#line 126 "propagate.m"
              propagate__STATE_VARIABLE_CycleToPredsMap_0_9 = propagate__STATE_VARIABLE_CycleToPredsMap_0__tmp_copy_9;
#line 126 "propagate.m"
              propagate__STATE_VARIABLE_PredToCycleMap_0_7 = propagate__STATE_VARIABLE_PredToCycleMap_0__tmp_copy_7;
#line 126 "propagate.m"
              propagate__STATE_VARIABLE_ATSort_0_5 = propagate__STATE_VARIABLE_ATSort_0__tmp_copy_5;
#line 126 "propagate.m"
              propagate__Visit0_4 = propagate__Visit0__tmp_copy_4;
#line 126 "propagate.m"
              propagate__CycleNum0_2 = propagate__CycleNum0__tmp_copy_2;
#line 126 "propagate.m"
              propagate__HeadVar__1_1 = propagate__HeadVar__1__tmp_copy_1;
#line 126 "propagate.m"
            }
#line 126 "propagate.m"
            continue;
#line 102 "propagate.m"
          }
#line 100 "propagate.m"
      }
#line 100 "propagate.m"
      break;
#line 100 "propagate.m"
    }
#line 94 "propagate.m"
}

#line 33 "propagate.m"
void MR_CALL 
propagate__propagate_counts_5_p_0(
#line 33 "propagate.m"
  MR_Word propagate__CallGraph_6,
#line 33 "propagate.m"
  MR_Word propagate__STATE_VARIABLE_Prof_0_15,
#line 33 "propagate.m"
  MR_Word * propagate__STATE_VARIABLE_Prof_16)
#line 33 "propagate.m"
{
#line 63 "propagate.m"
  {
#line 63 "propagate.m"
    MR_bool propagate__succeeded;
#line 63 "propagate.m"
    MR_Word propagate__TypeCtorInfo_15_34;
#line 63 "propagate.m"
    MR_Word propagate__TypeCtorInfo_17_36;
#line 63 "propagate.m"
    MR_Word propagate__AddrDeclMap_9;
#line 63 "propagate.m"
    MR_Word propagate__ProfNodeMap0_10;
#line 63 "propagate.m"
    MR_Word propagate__ATSort_11;
#line 63 "propagate.m"
    MR_Word propagate__CycleInfo_12;
#line 63 "propagate.m"
    MR_Word propagate__ProfNodeMap1_13;
#line 63 "propagate.m"
    MR_Word propagate__ProfNodeMap_14;
#line 63 "propagate.m"
    MR_Word propagate__V_19_19;
#line 63 "propagate.m"
    MR_Word propagate__STATE_VARIABLE_Prof_20_20;
#line 63 "propagate.m"
    MR_Word propagate__PredToCycleMap_25;
#line 63 "propagate.m"
    MR_Word propagate__CycleToPredsMap_26;
#line 63 "propagate.m"
    MR_Word propagate__DfsRev_27;
#line 63 "propagate.m"
    MR_Word propagate__InvG_28;
#line 63 "propagate.m"
    MR_Word propagate__V_30_30;
#line 63 "propagate.m"
    MR_Word propagate__V_32_32;
#line 63 "propagate.m"
    MR_Word propagate__V_33_33;
#line 63 "propagate.m"
    MR_Word propagate__AssocList_42;
#line 73 "propagate.m"
    MR_Word propagate__V_22_22;

#line 64 "propagate.m"
    {
#line 64 "propagate.m"
      prof_info__prof_get_addrdeclmap_2_p_0(propagate__STATE_VARIABLE_Prof_0_15, &propagate__AddrDeclMap_9);
    }
#line 65 "propagate.m"
    {
#line 65 "propagate.m"
      prof_info__prof_get_profnodemap_2_p_0(propagate__STATE_VARIABLE_Prof_0_15, &propagate__ProfNodeMap0_10);
    }
#line 3007 "propagate.c"
    propagate__TypeCtorInfo_15_34 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 89 "propagate.m"
    {
#line 89 "propagate.m"
      mercury__digraph__dfsrev_2_p_0(propagate__TypeCtorInfo_15_34, propagate__CallGraph_6, &propagate__DfsRev_27);
    }
#line 90 "propagate.m"
    {
#line 90 "propagate.m"
      mercury__digraph__inverse_2_p_0(propagate__TypeCtorInfo_15_34, propagate__CallGraph_6, &propagate__InvG_28);
    }
#line 91 "propagate.m"
    {
#line 91 "propagate.m"
      propagate__V_30_30 = mercury__sparse_bitset__init_0_f_0((MR_Word) &propagate_scalar_common_1[0]);
    }
#line 3024 "propagate.c"
    propagate__TypeCtorInfo_17_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 92 "propagate.m"
    {
#line 92 "propagate.m"
      propagate__V_32_32 = mercury__map__init_0_f_0(propagate__TypeCtorInfo_15_34, propagate__TypeCtorInfo_17_36);
    }
#line 92 "propagate.m"
    {
#line 92 "propagate.m"
      propagate__V_33_33 = mercury__multi_map__init_0_f_0(propagate__TypeCtorInfo_17_36, propagate__TypeCtorInfo_15_34);
    }
#line 91 "propagate.m"
    {
#line 91 "propagate.m"
      propagate__identify_cycles_2_10_p_0(propagate__DfsRev_27, (MR_Integer) 1, propagate__InvG_28, propagate__V_30_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &propagate__ATSort_11, propagate__V_32_32, &propagate__PredToCycleMap_25, propagate__V_33_33, &propagate__CycleToPredsMap_26);
    }
#line 88 "propagate.m"
    {
#line 88 "propagate.m"
      propagate__CycleInfo_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 88 "propagate.m"
      MR_hl_field(MR_mktag(0), propagate__CycleInfo_12, 0) = ((MR_Box) (propagate__PredToCycleMap_25));
#line 88 "propagate.m"
      MR_hl_field(MR_mktag(0), propagate__CycleInfo_12, 1) = ((MR_Box) (propagate__CycleToPredsMap_26));
#line 88 "propagate.m"
    }
#line 149 "propagate.m"
    {
#line 149 "propagate.m"
      propagate__AssocList_42 = mercury__multi_map__to_assoc_list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, propagate__CycleToPredsMap_26);
    }
#line 150 "propagate.m"
    {
#line 150 "propagate.m"
      propagate__update_cycles_2_4_p_0(propagate__AssocList_42, propagate__AddrDeclMap_9, propagate__ProfNodeMap0_10, &propagate__ProfNodeMap1_13);
    }
#line 70 "propagate.m"
    {
#line 70 "propagate.m"
      propagate__propagate_counts_2_5_p_0(propagate__ATSort_11, propagate__CycleInfo_12, propagate__AddrDeclMap_9, propagate__ProfNodeMap1_13, &propagate__ProfNodeMap_14);
    }
#line 73 "propagate.m"
    propagate__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__CycleInfo_12, (MR_Integer) 0)));
#line 73 "propagate.m"
    propagate__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), propagate__CycleInfo_12, (MR_Integer) 1)));
#line 73 "propagate.m"
    {
#line 73 "propagate.m"
      prof_info__prof_set_cyclemap_3_p_0(propagate__V_19_19, propagate__STATE_VARIABLE_Prof_0_15, &propagate__STATE_VARIABLE_Prof_20_20);
    }
#line 74 "propagate.m"
    {
#line 74 "propagate.m"
      prof_info__prof_set_profnodemap_3_p_0(propagate__ProfNodeMap_14, propagate__STATE_VARIABLE_Prof_20_20, propagate__STATE_VARIABLE_Prof_16);
#line 74 "propagate.m"
      return;
    }
#line 63 "propagate.m"
  }
#line 33 "propagate.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module propagate. */
