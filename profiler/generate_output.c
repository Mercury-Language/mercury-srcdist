/*
** Automatically generated from `generate_output.m'
** by the Mercury compiler,
** version rotd-2018-07-18
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


// :- module generate_output.
// :- implementation.

/*
INIT mercury__generate_output__init
ENDINIT
*/

#include "generate_output.mih"


#include "globals.mih"
#include "options.mih"
#include "output_prof_info.mih"
#include "prof_info.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "float.mih"
#include "getopt.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rbtree.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_PseudoTypeInfo generate_output__generate_output__field_types_flat_key_0_0[2];

static const MR_DuFunctorDesc generate_output__generate_output__du_functor_desc_flat_key_0_0;

static const MR_DuFunctorDescPtr generate_output__generate_output__du_stag_ordered_flat_key_0_0[1];

static const MR_DuPtagLayout generate_output__generate_output__du_ptag_ordered_flat_key_0[1];

static const MR_DuFunctorDescPtr generate_output__generate_output__du_name_ordered_flat_key_0[1];

static const MR_Integer generate_output__generate_output__functor_number_map_flat_key_0[1];

static const MR_FA_TypeInfo_Struct2 generate_output__tree234__ti_tree234_2builtin__type_ctor_info_string_0output_prof_info__type_ctor_info_output_prof_0;

static const MR_FA_TypeInfo_Struct2 generate_output__rbtree__ti_rbtree_2builtin__type_ctor_info_float_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 generate_output__rbtree__ti_rbtree_2generate_output__type_ctor_info_flat_key_0builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo generate_output__generate_output__field_types_profiling_0_0[3];

static const MR_DuFunctorDesc generate_output__generate_output__du_functor_desc_profiling_0_0;

static const MR_DuFunctorDescPtr generate_output__generate_output__du_stag_ordered_profiling_0_0[1];

static const MR_DuPtagLayout generate_output__generate_output__du_ptag_ordered_profiling_0[1];

static const MR_DuFunctorDescPtr generate_output__generate_output__du_name_ordered_profiling_0[1];

static const MR_Integer generate_output__generate_output__functor_number_map_profiling_0[1];

static void MR_CALL 
generate_output____Compare____profiling_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
generate_output____Unify____profiling_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
generate_output____Compare____flat_key_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
generate_output____Unify____flat_key_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
generate_output__assign_index_numbers_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer N_2,
  MR_Word STATE_VARIABLE_IndexMap_0_3,
  MR_Word * STATE_VARIABLE_IndexMap_4);

static void MR_CALL 
generate_output__process_prof_node_list_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Prof_2,
  MR_Word VeryVerbose_3,
  MR_Word STATE_VARIABLE_OutputProf_0_4,
  MR_Word * STATE_VARIABLE_OutputProf_5);

static void MR_CALL 
generate_output__process_prof_node_4_p_0(
  MR_Word ProfNode_5,
  MR_Word Prof_6,
  MR_Word STATE_VARIABLE_OutputProf_0_9,
  MR_Word * STATE_VARIABLE_OutputProf_10);

static void MR_CALL 
generate_output__process_prof_node_children_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CycleNum_2,
  MR_Word CycleMap_3,
  MR_Word Prof_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
generate_output__process_prof_node_children_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Prof_2,
  MR_Word STATE_VARIABLE_Output_0_3,
  MR_Word * STATE_VARIABLE_Output_4);

static void MR_CALL 
generate_output__remove_child_cycle_members_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CycleNum_2,
  MR_Word CycleMap_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
generate_output__process_prof_node_parents_3_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Float SelfTime_2,
  MR_Float DescTime_3,
  MR_Float TotalCalls_4,
  MR_Word CycleMap_5,
  MR_Word STATE_VARIABLE_Output_0_6,
  MR_Word * STATE_VARIABLE_Output_7);

static void MR_CALL 
generate_output__remove_cycle_members_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CycleNum_2,
  MR_Word CycleMap_3,
  MR_Integer STATE_VARIABLE_TotalCalls_0_4,
  MR_Integer * STATE_VARIABLE_TotalCalls_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static MR_String MR_CALL 
generate_output__construct_name_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
generate_output____Unify____flat_key_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
generate_output____Compare____flat_key_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
generate_output____Unify____profiling_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
generate_output____Compare____profiling_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box generate_output_scalar_common_1[3][3];




static /* final */ const MR_Box generate_output_scalar_common_1[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&output_prof_info__output_prof_info__type_ctor_info_output_prof_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__rbtree__rbtree__type_ctor_info_rbtree_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__rbtree__rbtree__type_ctor_info_rbtree_2)),
    ((MR_Box) (&generate_output__generate_output__type_ctor_info_flat_key_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_PseudoTypeInfo generate_output__generate_output__field_types_flat_key_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc generate_output__generate_output__du_functor_desc_flat_key_0_0 = {
  (MR_String) "flat_key",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  generate_output__generate_output__field_types_flat_key_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr generate_output__generate_output__du_stag_ordered_flat_key_0_0[1] = {
  &generate_output__generate_output__du_functor_desc_flat_key_0_0
};

static const MR_DuPtagLayout generate_output__generate_output__du_ptag_ordered_flat_key_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    generate_output__generate_output__du_stag_ordered_flat_key_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr generate_output__generate_output__du_name_ordered_flat_key_0[1] = {
  &generate_output__generate_output__du_functor_desc_flat_key_0_0
};

static const MR_Integer generate_output__generate_output__functor_number_map_flat_key_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct generate_output__generate_output__type_ctor_info_flat_key_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (generate_output____Unify____flat_key_0_0_10001)),
  ((MR_Box) (generate_output____Compare____flat_key_0_0_10001)),
  (MR_String) "generate_output",
  (MR_String) "flat_key",
  {     generate_output__generate_output__du_name_ordered_flat_key_0 },
  {     generate_output__generate_output__du_ptag_ordered_flat_key_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  generate_output__generate_output__functor_number_map_flat_key_0
};

static const MR_FA_TypeInfo_Struct2 generate_output__tree234__ti_tree234_2builtin__type_ctor_info_string_0output_prof_info__type_ctor_info_output_prof_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&output_prof_info__output_prof_info__type_ctor_info_output_prof_0)
  }
};

static const MR_FA_TypeInfo_Struct2 generate_output__rbtree__ti_rbtree_2builtin__type_ctor_info_float_0builtin__type_ctor_info_string_0 = {
  &mercury__rbtree__rbtree__type_ctor_info_rbtree_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 generate_output__rbtree__ti_rbtree_2generate_output__type_ctor_info_flat_key_0builtin__type_ctor_info_string_0 = {
  &mercury__rbtree__rbtree__type_ctor_info_rbtree_2,
  {
    (MR_TypeInfo) (&generate_output__generate_output__type_ctor_info_flat_key_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo generate_output__generate_output__field_types_profiling_0_0[3] = {
  (MR_PseudoTypeInfo) (&generate_output__tree234__ti_tree234_2builtin__type_ctor_info_string_0output_prof_info__type_ctor_info_output_prof_0),
  (MR_PseudoTypeInfo) (&generate_output__rbtree__ti_rbtree_2builtin__type_ctor_info_float_0builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&generate_output__rbtree__ti_rbtree_2generate_output__type_ctor_info_flat_key_0builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc generate_output__generate_output__du_functor_desc_profiling_0_0 = {
  (MR_String) "profiling",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  generate_output__generate_output__field_types_profiling_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr generate_output__generate_output__du_stag_ordered_profiling_0_0[1] = {
  &generate_output__generate_output__du_functor_desc_profiling_0_0
};

static const MR_DuPtagLayout generate_output__generate_output__du_ptag_ordered_profiling_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    generate_output__generate_output__du_stag_ordered_profiling_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr generate_output__generate_output__du_name_ordered_profiling_0[1] = {
  &generate_output__generate_output__du_functor_desc_profiling_0_0
};

static const MR_Integer generate_output__generate_output__functor_number_map_profiling_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct generate_output__generate_output__type_ctor_info_profiling_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (generate_output____Unify____profiling_0_0_10001)),
  ((MR_Box) (generate_output____Compare____profiling_0_0_10001)),
  (MR_String) "generate_output",
  (MR_String) "profiling",
  {     generate_output__generate_output__du_name_ordered_profiling_0 },
  {     generate_output__generate_output__du_ptag_ordered_profiling_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  generate_output__generate_output__functor_number_map_profiling_0
};

static void MR_CALL 
generate_output____Compare____profiling_0_0(
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
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word Var_10;

      mercury__builtin__compare_3_p_0((MR_Word) (&generate_output_scalar_common_1[0]), &Var_10, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) (&generate_output_scalar_common_1[1]), &Var_11, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&generate_output_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
generate_output____Unify____profiling_0_0(
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
      MR_Word TypeInfo_12_12;
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&generate_output_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&generate_output_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&generate_output_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
generate_output____Compare____flat_key_0_0(
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
      MR_Float ArgX1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Float ArgY1_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer ArgX2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_8;

      mercury__private_builtin__builtin_compare_float_3_p_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
    }
  }
}

static MR_bool MR_CALL 
generate_output____Unify____flat_key_0_0(
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
      MR_Float ArgX1_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Float ArgY1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

MR_Float MR_CALL 
generate_output__checked_float_divide_2_f_0(
  MR_Float A_4,
  MR_Float B_5)
{
  {
    MR_bool succeeded = (B_5 == ((MR_Float) 0.0000000000000000));
    MR_Float HeadVar__3_3;

    if (succeeded)
      HeadVar__3_3 = (MR_Float) 0.0000000000000000;
    else
      HeadVar__3_3 = mercury__float__f_slash_2_f_0(A_4, B_5);
    return HeadVar__3_3;
  }
}

void MR_CALL 
generate_output__generate_prof_output_5_p_0(
  MR_Word Prof_6,
  MR_Word * IndexMap_7,
  MR_Word * Output_8)
{
  {
    MR_Word VeryVerbose_10;
    MR_Word ProfNodeMap_15;
    MR_Word ProfNodeList_17;
    MR_Word OutputProf0_18;
    MR_Word OutputProf_19;
    MR_Word InfoMap_20;
    MR_Word CallTree_21;
    MR_Word FlatTree_22;
    MR_Word CallList0_23;
    MR_Word FlatList0_24;
    MR_Word CallList_25;
    MR_Word FlatList_26;
    MR_Word InfoMap_38;
    MR_Word CallTree_39;
    MR_Word FlatTree_40;
    MR_Word Var_49;
    MR_Float Var_11;
    MR_String Var_12;
    MR_Integer _IntTotalCounts_13;
    MR_Word Var_14;
    MR_Word Var_16;

    globals__io_lookup_bool_option_4_p_0((MR_Integer) 1, &VeryVerbose_10);
    prof_info__prof_get_entire_7_p_0(Prof_6, &Var_11, &Var_12, &_IntTotalCounts_13, &Var_14, &ProfNodeMap_15, &Var_16);
    ProfNodeList_17 = mercury__map__values_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), ProfNodeMap_15);
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_output_prof_0), &InfoMap_38);
    mercury__rbtree__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &CallTree_39);
    mercury__rbtree__init_1_p_0((MR_Word) (&generate_output__generate_output__type_ctor_info_flat_key_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &FlatTree_40);
    {
      OutputProf0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OutputProf0_18, 0) = ((MR_Box) (InfoMap_38));
      MR_hl_field(MR_mktag(0), OutputProf0_18, 1) = ((MR_Box) (CallTree_39));
      MR_hl_field(MR_mktag(0), OutputProf0_18, 2) = ((MR_Box) (FlatTree_40));
    }
    generate_output__process_prof_node_list_7_p_0(ProfNodeList_17, Prof_6, VeryVerbose_10, OutputProf0_18, &OutputProf_19);
    InfoMap_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutputProf_19, (MR_Integer) 0))));
    CallTree_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutputProf_19, (MR_Integer) 1))));
    FlatTree_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutputProf_19, (MR_Integer) 2))));
    CallList0_23 = mercury__rbtree__values_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CallTree_21);
    FlatList0_24 = mercury__rbtree__values_1_f_0((MR_Word) (&generate_output__generate_output__type_ctor_info_flat_key_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FlatTree_22);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CallList0_23, &CallList_25);
    Var_49 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
    generate_output__assign_index_numbers_2_4_p_0(CallList_25, (MR_Integer) 1, Var_49, IndexMap_7);
    FlatList_26 = mercury__list__reverse_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FlatList0_24);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *Output_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InfoMap_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CallList_25));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (FlatList_26));
    }
  }
}

static void MR_CALL 
generate_output__assign_index_numbers_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer N_2,
  MR_Word STATE_VARIABLE_IndexMap_0_3,
  MR_Word * STATE_VARIABLE_IndexMap_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_IndexMap_4 = STATE_VARIABLE_IndexMap_0_3;
    else
    {
      MR_String X0_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Xs0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_IndexMap_15_15;
      MR_Integer Var_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_N_2;
      MR_Word next_value_of_STATE_VARIABLE_IndexMap_0_3;

      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (X0_9)), ((MR_Box) (N_2)), STATE_VARIABLE_IndexMap_0_3, &STATE_VARIABLE_IndexMap_15_15);
      Var_16 = (MR_Integer) ((MR_Unsigned) N_2 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Xs0_10;
      next_value_of_N_2 = Var_16;
      next_value_of_STATE_VARIABLE_IndexMap_0_3 = STATE_VARIABLE_IndexMap_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      N_2 = next_value_of_N_2;
      STATE_VARIABLE_IndexMap_0_3 = next_value_of_STATE_VARIABLE_IndexMap_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
generate_output__process_prof_node_list_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Prof_2,
  MR_Word VeryVerbose_3,
  MR_Word STATE_VARIABLE_OutputProf_0_4,
  MR_Word * STATE_VARIABLE_OutputProf_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_OutputProf_5 = STATE_VARIABLE_OutputProf_0_4;
    else
    {
      MR_Word PN_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PNs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_OutputProf_30_30;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_OutputProf_0_4;

      switch (VeryVerbose_3) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String LabelName_22;
            MR_String Var_27;

            prof_info__prof_node_get_pred_name_2_p_0(PN_16, &LabelName_22);
            Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "\n\t% Processing ", LabelName_22);
            mercury__io__write_string_3_p_0(Var_27);
          }
          break;
      }
      generate_output__process_prof_node_4_p_0(PN_16, Prof_2, STATE_VARIABLE_OutputProf_0_4, &STATE_VARIABLE_OutputProf_30_30);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PNs_17;
      next_value_of_STATE_VARIABLE_OutputProf_0_4 = STATE_VARIABLE_OutputProf_30_30;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_OutputProf_0_4 = next_value_of_STATE_VARIABLE_OutputProf_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
generate_output__process_prof_node_4_p_0(
  MR_Word ProfNode_5,
  MR_Word Prof_6,
  MR_Word STATE_VARIABLE_OutputProf_0_9,
  MR_Word * STATE_VARIABLE_OutputProf_10)
{
  {
    MR_bool succeeded;
    MR_Word ProfNodeType_8;

    prof_info__prof_node_type_2_p_0(ProfNode_5, &ProfNodeType_8);
    succeeded = (ProfNodeType_8 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Float Scale_17;
      MR_Integer IntTotalCounts_19;
      MR_Word CycleMap_22;
      MR_Float TotalCounts_23;
      MR_String LabelName_24;
      MR_Integer CycleNum_25;
      MR_Integer Initial_26;
      MR_Float Prop_27;
      MR_Word ParentList_28;
      MR_Word ChildList_29;
      MR_Integer TotalCalls_30;
      MR_Integer SelfCalls_31;
      MR_Word NameList_32;
      MR_String _Units_18;
      MR_Word Var_20;
      MR_Word Var_21;

      prof_info__prof_get_entire_7_p_0(Prof_6, &Scale_17, &_Units_18, &IntTotalCounts_19, &Var_20, &Var_21, &CycleMap_22);
      TotalCounts_23 = mercury__float__float_1_f_0(IntTotalCounts_19);
      prof_info__prof_node_get_entire_pred_10_p_0(ProfNode_5, &LabelName_24, &CycleNum_25, &Initial_26, &Prop_27, &ParentList_28, &ChildList_29, &TotalCalls_30, &SelfCalls_31, &NameList_32);
      succeeded = (ParentList_28 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (ChildList_29 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        *STATE_VARIABLE_OutputProf_10 = STATE_VARIABLE_OutputProf_0_9;
      else
      {
        MR_Word InfoMap0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OutputProf_0_9, (MR_Integer) 0))));
        MR_Word CallTree0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OutputProf_0_9, (MR_Integer) 1))));
        MR_Word FlatTree0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OutputProf_0_9, (MR_Integer) 2))));
        MR_String Name_36;
        MR_Float InitialFloat_37;
        MR_Float DescPercentage_38;
        MR_Float FlatPercentage_39;
        MR_Float SelfTime_40;
        MR_Float DescTime_41;
        MR_Word OutputParentList_42;
        MR_Word OutputCycleParentList_43;
        MR_Word OutputChildList_44;
        MR_Word OutputCycleChildList_45;
        MR_Word OutputProfNode_46;
        MR_Word InfoMap_47;
        MR_Word CallTree_48;
        MR_Word FlatTree_49;
        MR_String Var_50;
        MR_Float Var_56;
        MR_Word Var_57;
        MR_Integer TotalCalls_71;
        MR_Word Parents_72;
        MR_Float FltTotalCalls_73;

        Var_50 = generate_output__construct_name_1_f_0(NameList_32);
        Name_36 = mercury__string__f_43_43_2_f_0(LabelName_24, Var_50);
        InitialFloat_37 = mercury__float__float_1_f_0(Initial_26);
        succeeded = (TotalCounts_23 == ((MR_Float) 0.0000000000000000));
        if (succeeded)
        {
          DescPercentage_38 = (MR_Float) 0.0000000000000000;
          FlatPercentage_39 = (MR_Float) 0.0000000000000000;
        }
        else
        {
          MR_Float Var_51;
          MR_Float Var_52 = (InitialFloat_37 + Prop_27);
          MR_Float Var_54;

          Var_51 = mercury__float__f_slash_2_f_0(Var_52, TotalCounts_23);
          DescPercentage_38 = (Var_51 * ((MR_Float) 100.00000000000000));
          Var_54 = mercury__float__f_slash_2_f_0(InitialFloat_37, TotalCounts_23);
          FlatPercentage_39 = (Var_54 * ((MR_Float) 100.00000000000000));
        }
        SelfTime_40 = (InitialFloat_37 * Scale_17);
        Var_56 = (InitialFloat_37 + Prop_27);
        DescTime_41 = (Var_56 * Scale_17);
        generate_output__remove_cycle_members_7_p_0(ParentList_28, CycleNum_25, CycleMap_22, TotalCalls_30, &TotalCalls_71, &Parents_72, &OutputCycleParentList_43);
        FltTotalCalls_73 = mercury__float__float_1_f_0(TotalCalls_71);
        if ((Parents_72 == (MR_Word) ((MR_Unsigned) 0U)))
          OutputParentList_42 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word Output0_85;
          MR_Word Output_86;

          mercury__rbtree__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_parent_0), &Output0_85);
          generate_output__process_prof_node_parents_3_7_p_0(Parents_72, SelfTime_40, DescTime_41, FltTotalCalls_73, CycleMap_22, Output0_85, &Output_86);
          mercury__rbtree__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_parent_0), Output_86, &OutputParentList_42);
        }
        generate_output__process_prof_node_children_6_p_0(ChildList_29, CycleNum_25, CycleMap_22, Prof_6, &OutputChildList_44, &OutputCycleChildList_45);
        {
          OutputProfNode_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), OutputProfNode_46, 0) = ((MR_Box) (Name_36));
          MR_hl_field(MR_mktag(0), OutputProfNode_46, 1) = ((MR_Box) (CycleNum_25));
          MR_hl_field(MR_mktag(0), OutputProfNode_46, 2) = MR_box_float(DescPercentage_38);
          MR_hl_field(MR_mktag(0), OutputProfNode_46, 3) = MR_box_float(FlatPercentage_39);
          MR_hl_field(MR_mktag(0), OutputProfNode_46, 4) = MR_box_float(SelfTime_40);
          MR_hl_field(MR_mktag(0), OutputProfNode_46, 5) = MR_box_float(DescTime_41);
          MR_hl_field(MR_mktag(0), OutputProfNode_46, 6) = ((MR_Box) (TotalCalls_30));
          MR_hl_field(MR_mktag(0), OutputProfNode_46, 7) = ((MR_Box) (SelfCalls_31));
          MR_hl_field(MR_mktag(0), OutputProfNode_46, 8) = ((MR_Box) (OutputParentList_42));
          MR_hl_field(MR_mktag(0), OutputProfNode_46, 9) = ((MR_Box) (OutputChildList_44));
          MR_hl_field(MR_mktag(0), OutputProfNode_46, 10) = ((MR_Box) (OutputCycleParentList_43));
          MR_hl_field(MR_mktag(0), OutputProfNode_46, 11) = ((MR_Box) (OutputCycleChildList_45));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_output_prof_0), ((MR_Box) (LabelName_24)), ((MR_Box) (OutputProfNode_46)), InfoMap0_33, &InfoMap_47);
        mercury__rbtree__insert_duplicate_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MR_box_float(DescPercentage_38), ((MR_Box) (LabelName_24)), CallTree0_34, &CallTree_48);
        {
          Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_57, 0) = MR_box_float(FlatPercentage_39);
          MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (TotalCalls_30));
        }
        mercury__rbtree__insert_duplicate_4_p_0((MR_Word) (&generate_output__generate_output__type_ctor_info_flat_key_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_57)), ((MR_Box) (LabelName_24)), FlatTree0_35, &FlatTree_49);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_OutputProf_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InfoMap_47));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CallTree_48));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (FlatTree_49));
        }
      }
    }
    else
      *STATE_VARIABLE_OutputProf_10 = STATE_VARIABLE_OutputProf_0_9;
  }
}

static void MR_CALL 
generate_output__process_prof_node_children_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CycleNum_2,
  MR_Word CycleMap_3,
  MR_Word Prof_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Children_17;
    MR_Word Output0_18;
    MR_Word Output_19;

    generate_output__remove_child_cycle_members_5_p_0(HeadVar__1_1, CycleNum_2, CycleMap_3, &Children_17, HeadVar__6_6);
    mercury__rbtree__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_child_0), &Output0_18);
    generate_output__process_prof_node_children_2_4_p_0(Children_17, Prof_4, Output0_18, &Output_19);
    mercury__rbtree__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_child_0), Output_19, HeadVar__5_5);
  }
}

static void MR_CALL 
generate_output__process_prof_node_children_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Prof_2,
  MR_Word STATE_VARIABLE_Output_0_3,
  MR_Word * STATE_VARIABLE_Output_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Output_4 = STATE_VARIABLE_Output_0_3;
    else
    {
      MR_Word PN_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PNs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String LabelName_13;
      MR_Integer Calls_14;
      MR_Float Scale_15;
      MR_Word AddrMap_18;
      MR_Word ProfNodeMap_19;
      MR_Word CycleMap_20;
      MR_Integer CycleNum_22;
      MR_Word ProfNode_23;
      MR_Integer Initial_24;
      MR_Float Prop_25;
      MR_Integer TotalCalls_26;
      MR_Float CurrentCount_27;
      MR_Float Proportion_28;
      MR_Float SelfTime_29;
      MR_Float DescTime_30;
      MR_Float PropSelfTime_31;
      MR_Float PropDescTime_32;
      MR_Word Child_33;
      MR_Float Var_36;
      MR_Float Var_37;
      MR_Float Var_38;
      MR_Float Var_39;
      MR_Word STATE_VARIABLE_Output_40_40;
      MR_String _Units_16;
      MR_Integer Var_17;
      MR_Integer CycleNum0_21;
      MR_Box conv0_CycleNum0_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Output_0_3;

      prof_info__pred_info_get_entire_3_p_0(PN_9, &LabelName_13, &Calls_14);
      prof_info__prof_get_entire_7_p_0(Prof_2, &Scale_15, &_Units_16, &Var_17, &AddrMap_18, &ProfNodeMap_19, &CycleMap_20);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), CycleMap_20, ((MR_Box) (LabelName_13)), &conv0_CycleNum0_21);
      if (succeeded)
      {
        CycleNum0_21 = ((MR_Integer) (conv0_CycleNum0_21));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        CycleNum_22 = CycleNum0_21;
      else
        CycleNum_22 = (MR_Integer) 0;
      prof_info__get_prof_node_4_p_0(LabelName_13, AddrMap_18, ProfNodeMap_19, &ProfNode_23);
      prof_info__prof_node_get_initial_counts_2_p_0(ProfNode_23, &Initial_24);
      prof_info__prof_node_get_propagated_counts_2_p_0(ProfNode_23, &Prop_25);
      prof_info__prof_node_get_total_calls_2_p_0(ProfNode_23, &TotalCalls_26);
      Var_36 = mercury__float__float_1_f_0(Initial_24);
      CurrentCount_27 = (Var_36 + Prop_25);
      Var_37 = mercury__float__float_1_f_0(Calls_14);
      Var_38 = mercury__float__float_1_f_0(TotalCalls_26);
      succeeded = (Var_38 == ((MR_Float) 0.0000000000000000));
      if (succeeded)
        Proportion_28 = (MR_Float) 0.0000000000000000;
      else
        Proportion_28 = mercury__float__f_slash_2_f_0(Var_37, Var_38);
      Var_39 = mercury__float__float_1_f_0(Initial_24);
      SelfTime_29 = (Var_39 * Scale_15);
      DescTime_30 = (CurrentCount_27 * Scale_15);
      PropSelfTime_31 = (SelfTime_29 * Proportion_28);
      PropDescTime_32 = (DescTime_30 * Proportion_28);
      {
        Child_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Child_33, 0) = ((MR_Box) (LabelName_13));
        MR_hl_field(MR_mktag(0), Child_33, 1) = ((MR_Box) (CycleNum_22));
        MR_hl_field(MR_mktag(0), Child_33, 2) = MR_box_float(PropSelfTime_31);
        MR_hl_field(MR_mktag(0), Child_33, 3) = MR_box_float(PropDescTime_32);
        MR_hl_field(MR_mktag(0), Child_33, 4) = ((MR_Box) (Calls_14));
        MR_hl_field(MR_mktag(0), Child_33, 5) = ((MR_Box) (TotalCalls_26));
      }
      mercury__rbtree__insert_duplicate_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_child_0), ((MR_Box) (Calls_14)), ((MR_Box) (Child_33)), STATE_VARIABLE_Output_0_3, &STATE_VARIABLE_Output_40_40);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PNs_10;
      next_value_of_STATE_VARIABLE_Output_0_3 = STATE_VARIABLE_Output_40_40;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Output_0_3 = next_value_of_STATE_VARIABLE_Output_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
generate_output__remove_child_cycle_members_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CycleNum_2,
  MR_Word CycleMap_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word PN_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PNs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String LabelName_14;
      MR_Integer Calls_15;
      MR_Integer ChildCycleNum_16;
      MR_Box conv0_ChildCycleNum_16;

      prof_info__pred_info_get_entire_3_p_0(PN_8, &LabelName_14, &Calls_15);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), CycleMap_3, ((MR_Box) (LabelName_14)), &conv0_ChildCycleNum_16);
      if (succeeded)
      {
        ChildCycleNum_16 = ((MR_Integer) (conv0_ChildCycleNum_16));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = (ChildCycleNum_16 == CycleNum_2);
        if (succeeded)
        {
          MR_Word OC0_17;
          MR_Word Child_18;

          generate_output__remove_child_cycle_members_5_p_0(PNs_9, CycleNum_2, CycleMap_3, HeadVar__4_4, &OC0_17);
          {
            Child_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Child_18, 0) = ((MR_Box) (LabelName_14));
            MR_hl_field(MR_mktag(0), Child_18, 1) = ((MR_Box) (CycleNum_2));
            MR_hl_field(MR_mktag(0), Child_18, 2) = MR_box_float((MR_Float) 0.0000000000000000);
            MR_hl_field(MR_mktag(0), Child_18, 3) = MR_box_float((MR_Float) 0.0000000000000000);
            MR_hl_field(MR_mktag(0), Child_18, 4) = ((MR_Box) (Calls_15));
            MR_hl_field(MR_mktag(0), Child_18, 5) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__5_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Child_18));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OC0_17));
          }
        }
        else
        {
          MR_Word List0_19;

          generate_output__remove_child_cycle_members_5_p_0(PNs_9, CycleNum_2, CycleMap_3, &List0_19, HeadVar__5_5);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PN_8));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (List0_19));
          }
        }
      }
      else
      {
        MR_Word List0_24;

        generate_output__remove_child_cycle_members_5_p_0(PNs_9, CycleNum_2, CycleMap_3, &List0_24, HeadVar__5_5);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PN_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (List0_24));
        }
      }
    }
  }
}

static void MR_CALL 
generate_output__process_prof_node_parents_3_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Float SelfTime_2,
  MR_Float DescTime_3,
  MR_Float TotalCalls_4,
  MR_Word CycleMap_5,
  MR_Word STATE_VARIABLE_Output_0_6,
  MR_Word * STATE_VARIABLE_Output_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Output_7 = STATE_VARIABLE_Output_0_6;
    else
    {
      MR_Word PN_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PNs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String LabelName_22;
      MR_Integer Calls_23;
      MR_Integer ParentCycleNum_25;
      MR_Float Proportion_26;
      MR_Float PropSelfTime_27;
      MR_Float PropDescTime_28;
      MR_Word Parent_29;
      MR_Float Var_32;
      MR_Word STATE_VARIABLE_Output_33_33;
      MR_Integer ParentCycleNum0_24;
      MR_Box conv0_ParentCycleNum0_24;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Output_0_6;

      prof_info__pred_info_get_entire_3_p_0(PN_15, &LabelName_22, &Calls_23);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), CycleMap_5, ((MR_Box) (LabelName_22)), &conv0_ParentCycleNum0_24);
      if (succeeded)
      {
        ParentCycleNum0_24 = ((MR_Integer) (conv0_ParentCycleNum0_24));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        ParentCycleNum_25 = ParentCycleNum0_24;
      else
        ParentCycleNum_25 = (MR_Integer) 0;
      Var_32 = mercury__float__float_1_f_0(Calls_23);
      succeeded = (TotalCalls_4 == ((MR_Float) 0.0000000000000000));
      if (succeeded)
        Proportion_26 = (MR_Float) 0.0000000000000000;
      else
        Proportion_26 = mercury__float__f_slash_2_f_0(Var_32, TotalCalls_4);
      PropSelfTime_27 = (SelfTime_2 * Proportion_26);
      PropDescTime_28 = (DescTime_3 * Proportion_26);
      {
        Parent_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Parent_29, 0) = ((MR_Box) (LabelName_22));
        MR_hl_field(MR_mktag(0), Parent_29, 1) = ((MR_Box) (ParentCycleNum_25));
        MR_hl_field(MR_mktag(0), Parent_29, 2) = MR_box_float(PropSelfTime_27);
        MR_hl_field(MR_mktag(0), Parent_29, 3) = MR_box_float(PropDescTime_28);
        MR_hl_field(MR_mktag(0), Parent_29, 4) = ((MR_Box) (Calls_23));
      }
      mercury__rbtree__insert_duplicate_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_parent_0), ((MR_Box) (Calls_23)), ((MR_Box) (Parent_29)), STATE_VARIABLE_Output_0_6, &STATE_VARIABLE_Output_33_33);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PNs_16;
      next_value_of_STATE_VARIABLE_Output_0_6 = STATE_VARIABLE_Output_33_33;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Output_0_6 = next_value_of_STATE_VARIABLE_Output_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
generate_output__remove_cycle_members_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CycleNum_2,
  MR_Word CycleMap_3,
  MR_Integer STATE_VARIABLE_TotalCalls_0_4,
  MR_Integer * STATE_VARIABLE_TotalCalls_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_TotalCalls_5 = STATE_VARIABLE_TotalCalls_0_4;
    }
    else
    {
      MR_Word PN_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PNs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String LabelName_20;
      MR_Integer Calls_21;
      MR_Integer ParentCycleNum_22;
      MR_Box conv0_ParentCycleNum_22;

      prof_info__pred_info_get_entire_3_p_0(PN_13, &LabelName_20, &Calls_21);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), CycleMap_3, ((MR_Box) (LabelName_20)), &conv0_ParentCycleNum_22);
      if (succeeded)
      {
        ParentCycleNum_22 = ((MR_Integer) (conv0_ParentCycleNum_22));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = (ParentCycleNum_22 == CycleNum_2);
        if (succeeded)
        {
          MR_Word OC0_23;
          MR_Word Parent_24;
          MR_Integer STATE_VARIABLE_TotalCalls_28_28 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TotalCalls_0_4 - (MR_Unsigned) Calls_21);

          generate_output__remove_cycle_members_7_p_0(PNs_14, CycleNum_2, CycleMap_3, STATE_VARIABLE_TotalCalls_28_28, STATE_VARIABLE_TotalCalls_5, HeadVar__6_6, &OC0_23);
          {
            Parent_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Parent_24, 0) = ((MR_Box) (LabelName_20));
            MR_hl_field(MR_mktag(0), Parent_24, 1) = ((MR_Box) (CycleNum_2));
            MR_hl_field(MR_mktag(0), Parent_24, 2) = MR_box_float((MR_Float) 0.0000000000000000);
            MR_hl_field(MR_mktag(0), Parent_24, 3) = MR_box_float((MR_Float) 0.0000000000000000);
            MR_hl_field(MR_mktag(0), Parent_24, 4) = ((MR_Box) (Calls_21));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__7_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Parent_24));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OC0_23));
          }
        }
        else
        {
          MR_Word List0_25;

          generate_output__remove_cycle_members_7_p_0(PNs_14, CycleNum_2, CycleMap_3, STATE_VARIABLE_TotalCalls_0_4, STATE_VARIABLE_TotalCalls_5, &List0_25, HeadVar__7_7);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__6_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PN_13));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (List0_25));
          }
        }
      }
      else
      {
        MR_Word List0_35;

        generate_output__remove_cycle_members_7_p_0(PNs_14, CycleNum_2, CycleMap_3, STATE_VARIABLE_TotalCalls_0_4, STATE_VARIABLE_TotalCalls_5, &List0_35, HeadVar__7_7);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PN_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (List0_35));
        }
      }
    }
  }
}

static MR_String MR_CALL 
generate_output__construct_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_String) "";
    else
    {
      MR_String Name_3 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Names_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String NameStr0_6;
      MR_String NameStr1_7;

      NameStr0_6 = generate_output__construct_name_1_f_0(Names_4);
      mercury__string__append_3_p_2((MR_String) " or ", Name_3, &NameStr1_7);
      mercury__string__append_3_p_2(NameStr1_7, NameStr0_6, &HeadVar__2_2);
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
generate_output____Unify____flat_key_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = generate_output____Unify____flat_key_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
generate_output____Compare____flat_key_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    generate_output____Compare____flat_key_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
generate_output____Unify____profiling_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = generate_output____Unify____profiling_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
generate_output____Compare____profiling_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    generate_output____Compare____profiling_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__generate_output__init(void)
{
}

void mercury__generate_output__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&generate_output__generate_output__type_ctor_info_flat_key_0);
	MR_register_type_ctor_info(&generate_output__generate_output__type_ctor_info_profiling_0);
}

void mercury__generate_output__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__generate_output__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module generate_output.
