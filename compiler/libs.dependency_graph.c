/*
** Automatically generated from `dependency_graph.m'
** by the Mercury compiler,
** version 22.01.9-beta-2026-05-31
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


// :- module libs.dependency_graph.
// :- implementation.

/*
INIT mercury__libs__dependency_graph__init
ENDINIT
*/

#include "libs.dependency_graph.mih"


#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "digraph.mih"
#include "enum.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "term.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_FA_PseudoTypeInfo_Struct1 libs__dependency_graph__set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 libs__dependency_graph__list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 libs__dependency_graph__tree234__pti_tree234_2__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 libs__dependency_graph__list__pti_list_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 libs__dependency_graph__digraph__pti_digraph_key_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 libs__dependency_graph__pair__pti_pair_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 libs__dependency_graph__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 libs__dependency_graph__digraph__pti_digraph_1__pseudo_1;

static const MR_PseudoTypeInfo libs__dependency_graph__libs__dependency_graph__field_types_dependency_info_1_0[3];

static const MR_ConstString libs__dependency_graph__libs__dependency_graph__field_names_dependency_info_1_0[3];

static const MR_DuFunctorDesc libs__dependency_graph__libs__dependency_graph__du_functor_desc_dependency_info_1_0;

static const MR_DuFunctorDescPtr libs__dependency_graph__libs__dependency_graph__du_stag_ordered_dependency_info_1_0[1];

static const MR_DuPtagLayout libs__dependency_graph__libs__dependency_graph__du_ptag_ordered_dependency_info_1[1];

static const MR_DuFunctorDescPtr libs__dependency_graph__libs__dependency_graph__du_name_ordered_dependency_info_1[1];

static const MR_Integer libs__dependency_graph__libs__dependency_graph__functor_number_map_dependency_info_1[1];

static void MR_CALL 
libs__dependency_graph__add_scc_entry_to_scc_map_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word SCC_5,
  MR_Box Node_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9);

static void MR_CALL 
libs__dependency_graph__add_scc_entries_to_scc_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__dependency_graph__add_scc_entries_to_scc_map_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word SCC_4,
  MR_Word STATE_VARIABLE_Map_0_6,
  MR_Word * STATE_VARIABLE_Map_7);

static void MR_CALL 
libs__dependency_graph__dependency_info_make_scc_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__dependency_graph__dependency_info_get_condensed_bottom_up_sccs_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
libs__dependency_graph____Unify____bottom_up_dependency_sccs_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
libs__dependency_graph____Compare____bottom_up_dependency_sccs_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
libs__dependency_graph____Unify____dependency_arcs_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
libs__dependency_graph____Compare____dependency_arcs_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
libs__dependency_graph____Unify____dependency_graph_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
libs__dependency_graph____Compare____dependency_graph_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
libs__dependency_graph____Unify____dependency_graph_key_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
libs__dependency_graph____Compare____dependency_graph_key_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
libs__dependency_graph____Unify____dependency_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
libs__dependency_graph____Compare____dependency_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
libs__dependency_graph____Unify____scc_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
libs__dependency_graph____Compare____scc_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Integer libs__dependency_graph_scalar_common_1[1][2];

static /* final */ const MR_Box libs__dependency_graph_scalar_common_2[1][6];

static /* final */ const MR_Box libs__dependency_graph_scalar_common_3[1][7];

static /* final */ const MR_Box libs__dependency_graph_scalar_common_4[1][8];




static /* final */ const MR_Integer libs__dependency_graph_scalar_common_1[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box libs__dependency_graph_scalar_common_2[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&libs__dependency_graph_scalar_common_1[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&libs__dependency_graph__set_ordlist__pti_set_ordlist_1__pseudo_1)),
    ((MR_Box) (&libs__dependency_graph__list__pti_list_1__pseudo_1))
  },
};

static /* final */ const MR_Box libs__dependency_graph_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&libs__dependency_graph_scalar_common_1[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&libs__dependency_graph__set_ordlist__pti_set_ordlist_1__pseudo_1)),
    ((MR_Box) (&libs__dependency_graph__tree234__pti_tree234_2__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1)),
    ((MR_Box) (&libs__dependency_graph__tree234__pti_tree234_2__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1))
  },
};

static /* final */ const MR_Box libs__dependency_graph_scalar_common_4[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&libs__dependency_graph_scalar_common_1[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&libs__dependency_graph__set_ordlist__pti_set_ordlist_1__pseudo_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&libs__dependency_graph__tree234__pti_tree234_2__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1)),
    ((MR_Box) (&libs__dependency_graph__tree234__pti_tree234_2__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1))
  },
};






static const MR_FA_PseudoTypeInfo_Struct1 libs__dependency_graph__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__dependency_graph__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 libs__dependency_graph__tree234__pti_tree234_2__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&libs__dependency_graph__set_ordlist__pti_set_ordlist_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__dependency_graph__list__pti_list_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&libs__dependency_graph__set_ordlist__pti_set_ordlist_1__pseudo_1)
  }
};

const MR_TypeCtorInfo_Struct libs__dependency_graph__libs__dependency_graph__type_ctor_info_bottom_up_dependency_sccs_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (libs__dependency_graph____Unify____bottom_up_dependency_sccs_1_0_10001)),
  ((MR_Box) (libs__dependency_graph____Compare____bottom_up_dependency_sccs_1_0_10001)),
  (MR_String) "libs.dependency_graph",
  (MR_String) "bottom_up_dependency_sccs",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&libs__dependency_graph__list__pti_list_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_PseudoTypeInfo_Struct1 libs__dependency_graph__digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 libs__dependency_graph__pair__pti_pair_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&libs__dependency_graph__digraph__pti_digraph_key_1__pseudo_1),
    (MR_PseudoTypeInfo) (&libs__dependency_graph__digraph__pti_digraph_key_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__dependency_graph__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&libs__dependency_graph__pair__pti_pair_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1)
  }
};

const MR_TypeCtorInfo_Struct libs__dependency_graph__libs__dependency_graph__type_ctor_info_dependency_arcs_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (libs__dependency_graph____Unify____dependency_arcs_1_0_10001)),
  ((MR_Box) (libs__dependency_graph____Compare____dependency_arcs_1_0_10001)),
  (MR_String) "libs.dependency_graph",
  (MR_String) "dependency_arcs",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&libs__dependency_graph__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_PseudoTypeInfo_Struct1 libs__dependency_graph__digraph__pti_digraph_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

const MR_TypeCtorInfo_Struct libs__dependency_graph__libs__dependency_graph__type_ctor_info_dependency_graph_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (libs__dependency_graph____Unify____dependency_graph_1_0_10001)),
  ((MR_Box) (libs__dependency_graph____Compare____dependency_graph_1_0_10001)),
  (MR_String) "libs.dependency_graph",
  (MR_String) "dependency_graph",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&libs__dependency_graph__digraph__pti_digraph_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct libs__dependency_graph__libs__dependency_graph__type_ctor_info_dependency_graph_key_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (libs__dependency_graph____Unify____dependency_graph_key_1_0_10001)),
  ((MR_Box) (libs__dependency_graph____Compare____dependency_graph_key_1_0_10001)),
  (MR_String) "libs.dependency_graph",
  (MR_String) "dependency_graph_key",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&libs__dependency_graph__digraph__pti_digraph_key_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo libs__dependency_graph__libs__dependency_graph__field_types_dependency_info_1_0[3] = {
  (MR_PseudoTypeInfo) (&libs__dependency_graph__digraph__pti_digraph_1__pseudo_1),
  (MR_PseudoTypeInfo) (&libs__dependency_graph__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1),
  (MR_PseudoTypeInfo) (&libs__dependency_graph__list__pti_list_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1)
};

static const MR_ConstString libs__dependency_graph__libs__dependency_graph__field_names_dependency_info_1_0[3] = {
  (MR_String) "dep_graph",
  (MR_String) "dep_arcs",
  (MR_String) "dep_bottom_up_sccs"
};

static const MR_DuFunctorDesc libs__dependency_graph__libs__dependency_graph__du_functor_desc_dependency_info_1_0 = {
  (MR_String) "dependency_info",
  INT16_C(3),
  UINT16_C(7),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__dependency_graph__libs__dependency_graph__field_types_dependency_info_1_0,
  libs__dependency_graph__libs__dependency_graph__field_names_dependency_info_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__dependency_graph__libs__dependency_graph__du_stag_ordered_dependency_info_1_0[1] = {
  &libs__dependency_graph__libs__dependency_graph__du_functor_desc_dependency_info_1_0
};

static const MR_DuPtagLayout libs__dependency_graph__libs__dependency_graph__du_ptag_ordered_dependency_info_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__dependency_graph__libs__dependency_graph__du_stag_ordered_dependency_info_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__dependency_graph__libs__dependency_graph__du_name_ordered_dependency_info_1[1] = {
  &libs__dependency_graph__libs__dependency_graph__du_functor_desc_dependency_info_1_0
};

static const MR_Integer libs__dependency_graph__libs__dependency_graph__functor_number_map_dependency_info_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__dependency_graph__libs__dependency_graph__type_ctor_info_dependency_info_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__dependency_graph____Unify____dependency_info_1_0_10001)),
  ((MR_Box) (libs__dependency_graph____Compare____dependency_info_1_0_10001)),
  (MR_String) "libs.dependency_graph",
  (MR_String) "dependency_info",
  {     libs__dependency_graph__libs__dependency_graph__du_name_ordered_dependency_info_1 },
  {     libs__dependency_graph__libs__dependency_graph__du_ptag_ordered_dependency_info_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  libs__dependency_graph__libs__dependency_graph__functor_number_map_dependency_info_1,

};

const MR_TypeCtorInfo_Struct libs__dependency_graph__libs__dependency_graph__type_ctor_info_scc_map_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (libs__dependency_graph____Unify____scc_map_1_0_10001)),
  ((MR_Box) (libs__dependency_graph____Compare____scc_map_1_0_10001)),
  (MR_String) "libs.dependency_graph",
  (MR_String) "scc_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&libs__dependency_graph__tree234__pti_tree234_2__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
libs__dependency_graph____Compare____scc_map_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_8_8;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    mercury__tree234____Compare____tree234_2_0(TypeInfo_for_T_6, TypeInfo_8_8, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
libs__dependency_graph____Unify____scc_map_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_7_7;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_T_5, TypeInfo_7_7, Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
libs__dependency_graph____Compare____dependency_info_1_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
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
      MR_Word SubResult1_6;

      mercury__digraph____Compare____digraph_1_0(TypeInfo_for_T_14, &SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;
        MR_Word TypeInfo_18_18;
        MR_Word TypeInfo_20_20;

        {
          TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_18_18, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
          MR_hl_field(MR_mktag(0), TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_14));
        }
        {
          TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_20_20, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
          MR_hl_field(MR_mktag(0), TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_18_18));
          MR_hl_field(MR_mktag(0), TypeInfo_20_20, 2) = ((MR_Box) (TypeInfo_18_18));
        }
        mercury__list____Compare____list_1_0(TypeInfo_20_20, &SubResult2_9, (MR_Word) (ArgX2_7), (MR_Word) (ArgY2_8));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word TypeInfo_24_24;

          {
            TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_24_24, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
            MR_hl_field(MR_mktag(0), TypeInfo_24_24, 1) = ((MR_Box) (TypeInfo_for_T_14));
          }
          mercury__list____Compare____list_1_0(TypeInfo_24_24, HeadVar__1_1, (MR_Word) (ArgX3_10), (MR_Word) (ArgY3_11));
        }
      }
    }
  }
}

MR_bool MR_CALL 
libs__dependency_graph____Unify____dependency_info_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_14_14;
      MR_Word TypeInfo_15_15;
      MR_Word TypeCtorInfo_16_16;
      MR_Word TypeInfo_17_17;
      MR_Word TypeCtorInfo_20_20;
      MR_Word TypeInfo_21_21;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__digraph____Unify____digraph_1_0(TypeInfo_for_T_11, ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeCtorInfo_16_16 = (MR_Word) (&mercury__pair__pair__type_ctor_info_pair_2);
        TypeCtorInfo_14_14 = (MR_Word) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1);
        {
          TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (TypeCtorInfo_14_14));
          MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_11));
        }
        {
          TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_17_17, 0) = ((MR_Box) (TypeCtorInfo_16_16));
          MR_hl_field(MR_mktag(0), TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_15_15));
          MR_hl_field(MR_mktag(0), TypeInfo_17_17, 2) = ((MR_Box) (TypeInfo_15_15));
        }
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_17_17, (MR_Word) (ArgX2_5), (MR_Word) (ArgY2_6));
        if (succeeded)
        {
          TypeCtorInfo_20_20 = (MR_Word) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1);
          {
            TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_21_21, 0) = ((MR_Box) (TypeCtorInfo_20_20));
            MR_hl_field(MR_mktag(0), TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_11));
          }
          succeeded = mercury__list____Unify____list_1_0(TypeInfo_21_21, (MR_Word) (ArgX3_7), (MR_Word) (ArgY3_8));
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
libs__dependency_graph____Compare____dependency_graph_key_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__digraph____Compare____digraph_key_1_0(TypeInfo_for_T_6, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
libs__dependency_graph____Unify____dependency_graph_key_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__digraph____Unify____digraph_key_1_0(TypeInfo_for_T_5, Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
libs__dependency_graph____Compare____dependency_graph_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__digraph____Compare____digraph_1_0(TypeInfo_for_T_6, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
libs__dependency_graph____Unify____dependency_graph_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__digraph____Unify____digraph_1_0(TypeInfo_for_T_5, Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
libs__dependency_graph____Compare____dependency_arcs_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_8_8;
    MR_Word TypeInfo_10_10;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_8_8));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 2) = ((MR_Box) (TypeInfo_8_8));
    }
    mercury__list____Compare____list_1_0(TypeInfo_10_10, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
libs__dependency_graph____Unify____dependency_arcs_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_7_7;
    MR_Word TypeInfo_9_9;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_7_7));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 2) = ((MR_Box) (TypeInfo_7_7));
    }
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_9_9, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
libs__dependency_graph____Compare____bottom_up_dependency_sccs_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_8_8;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    mercury__list____Compare____list_1_0(TypeInfo_8_8, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
libs__dependency_graph____Unify____bottom_up_dependency_sccs_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_7_7;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_7_7, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

static void MR_CALL 
libs__dependency_graph__add_scc_entry_to_scc_map_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word SCC_5,
  MR_Box Node_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9)
{
  {
    MR_Word TypeInfo_13_13;

    {
      TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_T_11));
    }
    mercury__map__det_insert_4_p_0(TypeInfo_for_T_11, TypeInfo_13_13, Node_6, ((MR_Box) (SCC_5)), STATE_VARIABLE_Map_0_8, STATE_VARIABLE_Map_9);
  }
}

static void MR_CALL 
libs__dependency_graph__add_scc_entries_to_scc_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Map_9;

    libs__dependency_graph__add_scc_entry_to_scc_map_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), wrapper_arg_1, ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Map_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Map_9));
  }
}

static void MR_CALL 
libs__dependency_graph__add_scc_entries_to_scc_map_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word SCC_4,
  MR_Word STATE_VARIABLE_Map_0_6,
  MR_Word * STATE_VARIABLE_Map_7)
{
  {
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_17_17;
    MR_Word Var_8;
    MR_Box conv1_STATE_VARIABLE_Map_7;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&libs__dependency_graph_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (libs__dependency_graph__add_scc_entries_to_scc_map_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (TypeInfo_for_T_10));
      MR_hl_field(MR_mktag(0), Var_8, 4) = ((MR_Box) (SCC_4));
    }
    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_10));
    }
    {
      TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_T_10));
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 2) = ((MR_Box) (TypeInfo_15_15));
    }
    mercury__set__fold_4_p_0(TypeInfo_for_T_10, TypeInfo_17_17, Var_8, SCC_4, ((MR_Box) (STATE_VARIABLE_Map_0_6)), &conv1_STATE_VARIABLE_Map_7);
    *STATE_VARIABLE_Map_7 = ((MR_Word) (conv1_STATE_VARIABLE_Map_7));
  }
}

static void MR_CALL 
libs__dependency_graph__dependency_info_make_scc_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Map_7;

    libs__dependency_graph__add_scc_entries_to_scc_map_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Map_7);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Map_7));
  }
}

MR_Word MR_CALL 
libs__dependency_graph__dependency_info_make_scc_map_1_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word DepInfo_3)
{
  {
    MR_Word SCCMap_4;
    MR_Word TypeInfo_13_13;
    MR_Word TypeInfo_15_15;
    MR_Word SCCs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DepInfo_3, (MR_Integer) 2))));
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Box conv1_SCCMap_4;

    {
      Var_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (&libs__dependency_graph_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_6, 1) = ((MR_Box) (libs__dependency_graph__dependency_info_make_scc_map_1_f_0_1));
      MR_hl_field(MR_mktag(0), Var_6, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_6, 3) = ((MR_Box) (TypeInfo_for_T_8));
    }
    {
      TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_T_8));
    }
    Var_7 = mercury__map__init_0_f_0(TypeInfo_for_T_8, TypeInfo_13_13);
    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_8));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 2) = ((MR_Box) (TypeInfo_13_13));
    }
    mercury__list__foldl_4_p_0(TypeInfo_13_13, TypeInfo_15_15, (MR_Word) (Var_6), (MR_Word) (SCCs_5), ((MR_Box) (Var_7)), &conv1_SCCMap_4);
    SCCMap_4 = ((MR_Word) (conv1_SCCMap_4));
    return SCCMap_4;
  }
}

static void MR_CALL 
libs__dependency_graph__dependency_info_get_condensed_bottom_up_sccs_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    mercury__set__to_sorted_list_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

MR_Word MR_CALL 
libs__dependency_graph__dependency_info_get_condensed_bottom_up_sccs_1_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word DepInfo_3)
{
  {
    MR_Word CondensedOrder_4;
    MR_Word TypeInfo_12_12;
    MR_Word TypeInfo_14_14;
    MR_Word ListOfSets_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DepInfo_3, (MR_Integer) 2))));
    MR_Word ListOfLists_6;
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&libs__dependency_graph_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (libs__dependency_graph__dependency_info_get_condensed_bottom_up_sccs_1_f_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (TypeInfo_for_T_8));
    }
    {
      TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_for_T_8));
    }
    {
      TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_8));
    }
    mercury__list__map_3_p_0(TypeInfo_12_12, TypeInfo_14_14, (MR_Word) (Var_7), (MR_Word) (ListOfSets_5), &ListOfLists_6);
    mercury__list__condense_2_p_0(TypeInfo_for_T_8, ListOfLists_6, &CondensedOrder_4);
    return CondensedOrder_4;
  }
}

MR_Word MR_CALL 
libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word DepInfo_3)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DepInfo_3, (MR_Integer) 2))));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__dependency_graph__dependency_info_get_arcs_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word DepInfo_3)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DepInfo_3, (MR_Integer) 1))));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__dependency_graph__dependency_info_get_graph_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word DepInfo_3)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DepInfo_3, (MR_Integer) 0))));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__dependency_graph__make_dependency_info_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Graph_4,
  MR_Word Arcs_5)
{
  {
    MR_Word DepInfo_6;
    MR_Word TypeInfo_11_11;
    MR_Word TopDownOrdering_7;
    MR_Word BottomUpOrdering_8;
    MR_Word conv0_BottomUpOrdering_8;

    mercury__digraph__atsort_2_p_0(TypeInfo_for_T_9, Graph_4, &TopDownOrdering_7);
    {
      TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_for_T_9));
    }
    mercury__list__reverse_2_p_0(TypeInfo_11_11, (MR_Word) (TopDownOrdering_7), &conv0_BottomUpOrdering_8);
    BottomUpOrdering_8 = (MR_Word) (conv0_BottomUpOrdering_8);
    {
      DepInfo_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DepInfo_6, 0) = ((MR_Box) (Graph_4));
      MR_hl_field(MR_mktag(0), DepInfo_6, 1) = ((MR_Box) (Arcs_5));
      MR_hl_field(MR_mktag(0), DepInfo_6, 2) = ((MR_Box) (BottomUpOrdering_8));
    }
    return DepInfo_6;
  }
}

static MR_bool MR_CALL 
libs__dependency_graph____Unify____bottom_up_dependency_sccs_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = libs__dependency_graph____Unify____bottom_up_dependency_sccs_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
libs__dependency_graph____Compare____bottom_up_dependency_sccs_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__dependency_graph____Compare____bottom_up_dependency_sccs_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__dependency_graph____Unify____dependency_arcs_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = libs__dependency_graph____Unify____dependency_arcs_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
libs__dependency_graph____Compare____dependency_arcs_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__dependency_graph____Compare____dependency_arcs_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__dependency_graph____Unify____dependency_graph_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = libs__dependency_graph____Unify____dependency_graph_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
libs__dependency_graph____Compare____dependency_graph_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__dependency_graph____Compare____dependency_graph_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__dependency_graph____Unify____dependency_graph_key_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = libs__dependency_graph____Unify____dependency_graph_key_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
libs__dependency_graph____Compare____dependency_graph_key_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__dependency_graph____Compare____dependency_graph_key_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__dependency_graph____Unify____dependency_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = libs__dependency_graph____Unify____dependency_info_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
libs__dependency_graph____Compare____dependency_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__dependency_graph____Compare____dependency_info_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__dependency_graph____Unify____scc_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = libs__dependency_graph____Unify____scc_map_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
libs__dependency_graph____Compare____scc_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__dependency_graph____Compare____scc_map_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__libs__dependency_graph__init(void)
{
}

void mercury__libs__dependency_graph__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__dependency_graph__libs__dependency_graph__type_ctor_info_bottom_up_dependency_sccs_1);
	MR_register_type_ctor_info(&libs__dependency_graph__libs__dependency_graph__type_ctor_info_dependency_arcs_1);
	MR_register_type_ctor_info(&libs__dependency_graph__libs__dependency_graph__type_ctor_info_dependency_graph_1);
	MR_register_type_ctor_info(&libs__dependency_graph__libs__dependency_graph__type_ctor_info_dependency_graph_key_1);
	MR_register_type_ctor_info(&libs__dependency_graph__libs__dependency_graph__type_ctor_info_dependency_info_1);
	MR_register_type_ctor_info(&libs__dependency_graph__libs__dependency_graph__type_ctor_info_scc_map_1);
}

void mercury__libs__dependency_graph__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__dependency_graph__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module libs.dependency_graph.
