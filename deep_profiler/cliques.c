/*
** Automatically generated from `cliques.m'
** by the Mercury compiler,
** version rotd-2024-02-08
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


// :- module cliques.
// :- implementation.

/*
INIT mercury__cliques__init
ENDINIT
*/

#include "cliques.mih"


#include "array.mih"
#include "array_util.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "dense_bitset.mih"
#include "enum.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 cliques__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 cliques__array__ti_array_1set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo cliques__cliques__field_types_graph_0_0[2];

static const MR_DuFunctorDesc cliques__cliques__du_functor_desc_graph_0_0;

static const MR_DuFunctorDescPtr cliques__cliques__du_stag_ordered_graph_0_0[1];

static const MR_DuPtagLayout cliques__cliques__du_ptag_ordered_graph_0[1];

static const MR_DuFunctorDescPtr cliques__cliques__du_name_ordered_graph_0[1];

static const MR_Integer cliques__cliques__functor_number_map_graph_0[1];

static const MR_FA_TypeInfo_Struct1 cliques__array__ti_array_1builtin__type_ctor_info_int_0;

static void MR_CALL 
cliques____Compare____visit_0_0(
  MR_Word * HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2,
  MR_ArrayPtr HeadVar__3_3);

static MR_bool MR_CALL 
cliques____Unify____visit_0_0(
  MR_ArrayPtr HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2);

static void MR_CALL 
cliques__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * L_3);

static void MR_CALL 
cliques__inverse_2_4_p_0(
  MR_Integer To_5,
  MR_Word Graph_6,
  MR_Word InvGraph0_7,
  MR_Word * InvGraph_8);

static void MR_CALL 
cliques__add_arcs_to_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer To_2,
  MR_Word HeadVar__3_3,
  MR_Word * Graph_4);

static void MR_CALL 
cliques__dfs_graph_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_ArrayPtr HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * Dfs_5);

static void MR_CALL 
cliques__tsort_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_ArrayPtr HeadVar__3_3,
  MR_Word STATE_VARIABLE_Cliques_0_4,
  MR_Word * STATE_VARIABLE_Cliques_5);

static void MR_CALL 
cliques__dfs_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_ArrayPtr HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_ArrayPtr * Visit_5,
  MR_Word * Dfs_6);

static void MR_CALL 
cliques__mklist_3_p_0(
  MR_Integer N_4,
  MR_Word Acc0_5,
  MR_Word * Acc_6);

static MR_bool MR_CALL 
cliques____Unify____graph_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
cliques____Compare____graph_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
cliques____Unify____visit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
cliques____Compare____visit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box cliques_scalar_common_1[3][2];




static /* final */ const MR_Box cliques_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&cliques_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 cliques__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_TypeInfo_Struct1 cliques__array__ti_array_1set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_TypeInfo) (&cliques__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0) }
};

static const MR_PseudoTypeInfo cliques__cliques__field_types_graph_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&cliques__array__ti_array_1set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc cliques__cliques__du_functor_desc_graph_0_0 = {
  (MR_String) "graph",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  cliques__cliques__field_types_graph_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr cliques__cliques__du_stag_ordered_graph_0_0[1] = { &cliques__cliques__du_functor_desc_graph_0_0 };

static const MR_DuPtagLayout cliques__cliques__du_ptag_ordered_graph_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    cliques__cliques__du_stag_ordered_graph_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr cliques__cliques__du_name_ordered_graph_0[1] = { &cliques__cliques__du_functor_desc_graph_0_0 };

static const MR_Integer cliques__cliques__functor_number_map_graph_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct cliques__cliques__type_ctor_info_graph_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (cliques____Unify____graph_0_0_10001)),
  ((MR_Box) (cliques____Compare____graph_0_0_10001)),
  (MR_String) "cliques",
  (MR_String) "graph",
  { cliques__cliques__du_name_ordered_graph_0 },
  { cliques__cliques__du_ptag_ordered_graph_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  cliques__cliques__functor_number_map_graph_0,

};

static const MR_FA_TypeInfo_Struct1 cliques__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

const MR_TypeCtorInfo_Struct cliques__cliques__type_ctor_info_visit_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (cliques____Unify____visit_0_0_10001)),
  ((MR_Box) (cliques____Compare____visit_0_0_10001)),
  (MR_String) "cliques",
  (MR_String) "visit",
  { NULL },
  { (MR_PseudoTypeInfo) (&cliques__array__ti_array_1builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
cliques____Compare____visit_0_0(
  MR_Word * HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2,
  MR_ArrayPtr HeadVar__3_3)
{
  MR_ArrayPtr Cast_HeadVar1_4 = HeadVar__2_2;
  MR_ArrayPtr Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&cliques_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
cliques____Unify____visit_0_0(
  MR_ArrayPtr HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2)
{
  MR_bool succeeded;
  MR_ArrayPtr Cast_HeadVar1_3 = HeadVar__1_1;
  MR_ArrayPtr Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__array____Unify____array_1_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_ArrayPtr) (Cast_HeadVar1_3), (MR_ArrayPtr) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
cliques____Compare____graph_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_ArrayPtr ArgX2_7 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_ArrayPtr ArgY2_8 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&cliques_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
cliques____Unify____graph_0_0(
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
  {
    MR_Word TypeInfo_9_9;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_ArrayPtr ArgX2_5 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_ArrayPtr ArgY2_6 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&cliques_scalar_common_1[0]);
      succeeded = mercury__array____Unify____array_1_0(TypeInfo_9_9, (MR_ArrayPtr) (ArgX2_5), (MR_ArrayPtr) (ArgY2_6));
    }
  }
  return succeeded;
}

void MR_CALL 
cliques__topological_sort_2_p_0(
  MR_Word Graph_3,
  MR_Word * Cliques_4)
{
  MR_Word Dfs_7;
  MR_Word InvGraph_8;
  MR_ArrayPtr Visit_9;
  MR_Word Cliques0_10;
  MR_Integer Size_42 = ((MR_Integer) ((MR_hl_field(0, Graph_3, (MR_Integer) 0))));
  MR_Word NodeList_44;
  MR_ArrayPtr Visit_45;
  MR_Word InvGraph0_48;
  MR_Integer Size_49;
  MR_ArrayPtr Array_51;
  MR_Word Var_54;
  MR_ArrayPtr conv0_Array_51;

  cliques__mklist_3_p_0(Size_42, (MR_Word) ((MR_Unsigned) 0U), &NodeList_44);
  Visit_45 = dense_bitset__init_0_f_0();
  cliques__dfs_graph_2_5_p_0(NodeList_44, Graph_3, Visit_45, (MR_Word) ((MR_Unsigned) 0U), &Dfs_7);
  Var_54 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  mercury__array__init_3_p_0((MR_Word) (&cliques_scalar_common_1[0]), (MR_Integer) 16, ((MR_Box) (Var_54)), &conv0_Array_51);
  Array_51 = (MR_ArrayPtr) (conv0_Array_51);
  {
    InvGraph0_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InvGraph0_48, 0) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, InvGraph0_48, 1) = ((MR_Box) (Array_51));
  }
  Size_49 = ((MR_Integer) ((MR_hl_field(0, Graph_3, (MR_Integer) 0))));
  cliques__inverse_2_4_p_0(Size_49, Graph_3, InvGraph0_48, &InvGraph_8);
  Visit_9 = dense_bitset__init_0_f_0();
  cliques__tsort_5_p_0(Dfs_7, InvGraph_8, Visit_9, (MR_Word) ((MR_Unsigned) 0U), &Cliques0_10);
  cliques__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_3_p_0(Cliques0_10, (MR_Word) ((MR_Unsigned) 0U), Cliques_4);
}

static void MR_CALL 
cliques__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * L_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *L_3 = HeadVar__2_2;
    else
    {
      MR_Box X_5 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
      MR_Word Xs_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_9;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      {
        Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_9, 0) = X_5;
        MR_hl_field(1, Var_9, 1) = ((MR_Box) (HeadVar__2_2));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Xs_6;
      next_value_of_HeadVar__2_2 = Var_9;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
cliques__inverse_2_4_p_0(
  MR_Integer To_5,
  MR_Word Graph_6,
  MR_Word InvGraph0_7,
  MR_Word * InvGraph_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (To_5 >= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word Froms_9;
      MR_Word FromList_10;
      MR_Word InvGraph1_11;
      MR_Integer Var_13;
      MR_ArrayPtr Array_17 = ((MR_ArrayPtr) ((MR_hl_field(0, Graph_6, (MR_Integer) 1))));
      MR_Integer next_value_of_To_5;
      MR_Word next_value_of_InvGraph0_7;

      succeeded = mercury__array__in_bounds_2_p_0((MR_Word) (&cliques_scalar_common_1[0]), (MR_ArrayPtr) (Array_17), To_5);
      if (succeeded)
      {
        MR_Box conv0_Froms_9;

        mercury__array__lookup_3_p_0((MR_Word) (&cliques_scalar_common_1[0]), (MR_ArrayPtr) (Array_17), To_5, &conv0_Froms_9);
        Froms_9 = ((MR_Word) (conv0_Froms_9));
      }
      else
        Froms_9 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Froms_9, &FromList_10);
      cliques__add_arcs_to_4_p_0(FromList_10, To_5, InvGraph0_7, &InvGraph1_11);
      Var_13 = (MR_Integer) ((MR_Unsigned) To_5 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_To_5 = Var_13;
      next_value_of_InvGraph0_7 = InvGraph1_11;
      To_5 = next_value_of_To_5;
      InvGraph0_7 = next_value_of_InvGraph0_7;
      continue;
    }
    else
      *InvGraph_8 = InvGraph0_7;
    break;
  }
}

static void MR_CALL 
cliques__add_arcs_to_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer To_2,
  MR_Word HeadVar__3_3,
  MR_Word * Graph_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *Graph_4 = HeadVar__3_3;
    else
    {
      MR_Integer From_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word FromList_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Graph1_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__3_3;

      cliques__add_arc_4_p_0(HeadVar__3_3, From_7, To_2, &Graph1_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = FromList_8;
      next_value_of_HeadVar__3_3 = Graph1_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
cliques__dfs_graph_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_ArrayPtr HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * Dfs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *Dfs_5 = HeadVar__4_4;
    else
    {
      MR_Integer Node_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Nodes_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_ArrayPtr Visit_15;
      MR_Word Dfs1_16;
      MR_Word Var_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_ArrayPtr next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;

      {
        Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_17, 0) = ((MR_Box) (Node_9));
        MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      cliques__dfs_6_p_0(Var_17, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, &Visit_15, &Dfs1_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Nodes_10;
      next_value_of_HeadVar__3_3 = Visit_15;
      next_value_of_HeadVar__4_4 = Dfs1_16;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
cliques__tsort_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_ArrayPtr HeadVar__3_3,
  MR_Word STATE_VARIABLE_Cliques_0_4,
  MR_Word * STATE_VARIABLE_Cliques_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Cliques_5 = STATE_VARIABLE_Cliques_0_4;
    else
    {
      MR_Integer Node_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Nodes_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_ArrayPtr STATE_VARIABLE_Visited_46_46;
      MR_Word STATE_VARIABLE_Cliques_56_56;
      MR_Word next_value_of_HeadVar__1_1;
      MR_ArrayPtr next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Cliques_0_4;

      succeeded = dense_bitset__member_2_p_0(Node_11, HeadVar__3_3);
      if (succeeded)
      {
        STATE_VARIABLE_Cliques_56_56 = STATE_VARIABLE_Cliques_0_4;
        STATE_VARIABLE_Visited_46_46 = HeadVar__3_3;
      }
      else
      {
        MR_Word CliqueList_18;
        MR_Word Clique_19;
        MR_Word Var_44;

        {
          Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_44, 0) = ((MR_Box) (Node_11));
          MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        cliques__dfs_6_p_0(Var_44, HeadVar__2_2, HeadVar__3_3, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Visited_46_46, &CliqueList_18);
        mercury__set__list_to_set_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), CliqueList_18, &Clique_19);
        {
          STATE_VARIABLE_Cliques_56_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Cliques_56_56, 0) = ((MR_Box) (Clique_19));
          MR_hl_field(1, STATE_VARIABLE_Cliques_56_56, 1) = ((MR_Box) (STATE_VARIABLE_Cliques_0_4));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Nodes_12;
      next_value_of_HeadVar__3_3 = STATE_VARIABLE_Visited_46_46;
      next_value_of_STATE_VARIABLE_Cliques_0_4 = STATE_VARIABLE_Cliques_56_56;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Cliques_0_4 = next_value_of_STATE_VARIABLE_Cliques_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
cliques__dfs_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_ArrayPtr HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_ArrayPtr * Visit_5,
  MR_Word * Dfs_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Visit_5 = HeadVar__3_3;
      *Dfs_6 = HeadVar__4_4;
    }
    else
    {
      MR_Integer Node_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Nodes_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

      succeeded = dense_bitset__member_2_p_0(Node_10, HeadVar__3_3);
      if (succeeded)
      {
        MR_Word next_value_of_HeadVar__1_1 = Nodes_11;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
      {
        MR_ArrayPtr Visit1_19;
        MR_Word Succ_20;
        MR_Word SuccList_21;
        MR_ArrayPtr Visit2_22;
        MR_Word Dfs1_23;
        MR_Word Dfs2_24;
        MR_ArrayPtr Array_65;
        MR_Word next_value_of_HeadVar__1_1;
        MR_ArrayPtr next_value_of_HeadVar__3_3;
        MR_Word next_value_of_HeadVar__4_4;

        dense_bitset__insert_3_p_0(Node_10, HeadVar__3_3, &Visit1_19);
        Array_65 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
        succeeded = mercury__array__in_bounds_2_p_0((MR_Word) (&cliques_scalar_common_1[0]), (MR_ArrayPtr) (Array_65), Node_10);
        if (succeeded)
        {
          MR_Box conv0_Succ_20;

          mercury__array__lookup_3_p_0((MR_Word) (&cliques_scalar_common_1[0]), (MR_ArrayPtr) (Array_65), Node_10, &conv0_Succ_20);
          Succ_20 = ((MR_Word) (conv0_Succ_20));
        }
        else
          Succ_20 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Succ_20, &SuccList_21);
        cliques__dfs_6_p_0(SuccList_21, HeadVar__2_2, Visit1_19, HeadVar__4_4, &Visit2_22, &Dfs1_23);
        {
          Dfs2_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Dfs2_24, 0) = ((MR_Box) (Node_10));
          MR_hl_field(1, Dfs2_24, 1) = ((MR_Box) (Dfs1_23));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Nodes_11;
        next_value_of_HeadVar__3_3 = Visit2_22;
        next_value_of_HeadVar__4_4 = Dfs2_24;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
cliques__mklist_3_p_0(
  MR_Integer N_4,
  MR_Word Acc0_5,
  MR_Word * Acc_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_4 < (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *Acc_6 = Acc0_5;
    else
    {
      MR_Word Acc1_7;
      MR_Integer Var_9;
      MR_Integer next_value_of_N_4;
      MR_Word next_value_of_Acc0_5;

      {
        Acc1_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Acc1_7, 0) = ((MR_Box) (N_4));
        MR_hl_field(1, Acc1_7, 1) = ((MR_Box) (Acc0_5));
      }
      Var_9 = (MR_Integer) ((MR_Unsigned) N_4 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_N_4 = Var_9;
      next_value_of_Acc0_5 = Acc1_7;
      N_4 = next_value_of_N_4;
      Acc0_5 = next_value_of_Acc0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
cliques__add_arc_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer From_7,
  MR_Integer To_8,
  MR_Word * Graph_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Size0_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_ArrayPtr Array0_6 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__array__in_bounds_2_p_0((MR_Word) (&cliques_scalar_common_1[0]), (MR_ArrayPtr) (Array0_6), From_7);
    if (succeeded)
    {
      MR_Word Tos0_10;
      MR_Word Tos_11;
      MR_ArrayPtr Array_12;
      MR_Integer Size_13;
      MR_ArrayPtr Var_15;
      MR_Integer Var_16;
      MR_Box conv0_Tos0_10;
      MR_Box conv1_Var_15;
      MR_ArrayPtr conv2_Array_12;

      mercury__array__lookup_3_p_0((MR_Word) (&cliques_scalar_common_1[0]), (MR_ArrayPtr) (Array0_6), From_7, &conv0_Tos0_10);
      Tos0_10 = ((MR_Word) (conv0_Tos0_10));
      mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (To_8)), Tos0_10, &Tos_11);
      conv1_Var_15 = array_util__u_1_f_0((MR_Word) (&cliques_scalar_common_1[1]), ((MR_Box) (Array0_6)));
      Var_15 = ((MR_ArrayPtr) (conv1_Var_15));
      mercury__array__set_4_p_0((MR_Word) (&cliques_scalar_common_1[0]), From_7, ((MR_Box) (Tos_11)), (MR_ArrayPtr) (Var_15), &conv2_Array_12);
      Array_12 = (MR_ArrayPtr) (conv2_Array_12);
      Var_16 = mercury__int__max_2_f_0(From_7, To_8);
      Size_13 = mercury__int__max_2_f_0(Var_16, Size0_5);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Graph_9 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Size_13));
        MR_hl_field(0, base, 1) = ((MR_Box) (Array_12));
      }
    }
    else
    {
      MR_ArrayPtr Array1_14;
      MR_Integer Var_17;
      MR_Word Var_18;
      MR_ArrayPtr Var_19;
      MR_Word Var_21;
      MR_Integer Size_22;
      MR_Box conv3_Var_19;
      MR_ArrayPtr conv4_Array1_14;
      MR_Word next_value_of_HeadVar__1_1;

      mercury__array__size_2_p_0((MR_Word) (&cliques_scalar_common_1[0]), (MR_ArrayPtr) (Array0_6), &Size_22);
      Var_17 = (MR_Integer) ((MR_Unsigned) Size_22 * (MR_Unsigned) 2);
      Var_18 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
      conv3_Var_19 = array_util__u_1_f_0((MR_Word) (&cliques_scalar_common_1[1]), ((MR_Box) (Array0_6)));
      Var_19 = ((MR_ArrayPtr) (conv3_Var_19));
      mercury__array__resize_4_p_0((MR_Word) (&cliques_scalar_common_1[0]), Var_17, ((MR_Box) (Var_18)), (MR_ArrayPtr) (Var_19), &conv4_Array1_14);
      Array1_14 = (MR_ArrayPtr) (conv4_Array1_14);
      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_21, 0) = ((MR_Box) (Size0_5));
        MR_hl_field(0, Var_21, 1) = ((MR_Box) (Array1_14));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Var_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

void MR_CALL 
cliques__init_1_p_0(
  MR_Word * HeadVar__1_1)
{
  MR_ArrayPtr Array_2;
  MR_Word Var_5;
  MR_ArrayPtr conv0_Array_2;

  Var_5 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  mercury__array__init_3_p_0((MR_Word) (&cliques_scalar_common_1[0]), (MR_Integer) 16, ((MR_Box) (Var_5)), &conv0_Array_2);
  Array_2 = (MR_ArrayPtr) (conv0_Array_2);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__1_1 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, base, 1) = ((MR_Box) (Array_2));
  }
}

static MR_bool MR_CALL 
cliques____Unify____graph_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = cliques____Unify____graph_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
cliques____Compare____graph_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  cliques____Compare____graph_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
cliques____Unify____visit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = cliques____Unify____visit_0_0(((MR_ArrayPtr) (wrapper_arg_1)), ((MR_ArrayPtr) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
cliques____Compare____visit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  cliques____Compare____visit_0_0(&conv0_HeadVar__1_1, ((MR_ArrayPtr) (wrapper_arg_2)), ((MR_ArrayPtr) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__cliques__init(void)
{
}

void mercury__cliques__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&cliques__cliques__type_ctor_info_graph_0);
	MR_register_type_ctor_info(&cliques__cliques__type_ctor_info_visit_0);
}

void mercury__cliques__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__cliques__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module cliques.
