/*
** Automatically generated from `generate_output.m'
** by the Mercury compiler,
** version rotd-2024-12-30
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
#include "globals.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "options.mih"
#include "output_prof_info.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "prof_info.mih"
#include "rbtree.mih"
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
generate_output__generate_output_for_cycle_4_p_0(
  MR_Word ProfNode_5,
  MR_Word Prof_6,
  MR_Word STATE_VARIABLE_OutputProf_0_32,
  MR_Word * STATE_VARIABLE_OutputProf_33);

static void MR_CALL 
generate_output__assign_index_numbers_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer N_2,
  MR_Word STATE_VARIABLE_IndexMap_0_3,
  MR_Word * STATE_VARIABLE_IndexMap_4);

static void MR_CALL 
generate_output__process_prof_node_list_8_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word Prof_3,
  MR_Word VeryVerbose_4,
  MR_Word STATE_VARIABLE_OutputProf_0_5,
  MR_Word * STATE_VARIABLE_OutputProf_6);

static void MR_CALL 
generate_output__process_prof_node_4_p_0(
  MR_Word ProfNode_5,
  MR_Word Prof_6,
  MR_Word STATE_VARIABLE_OutputProf_0_9,
  MR_Word * STATE_VARIABLE_OutputProf_10);

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
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&output_prof_info__output_prof_info__type_ctor_info_output_prof_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__rbtree__rbtree__type_ctor_info_rbtree_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__rbtree__rbtree__type_ctor_info_rbtree_2)),
    ((MR_Box) (&generate_output__generate_output__type_ctor_info_flat_key_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_PseudoTypeInfo generate_output__generate_output__field_types_flat_key_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc generate_output__generate_output__du_functor_desc_flat_key_0_0 = {
  (MR_String) "flat_key",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  generate_output__generate_output__field_types_flat_key_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr generate_output__generate_output__du_stag_ordered_flat_key_0_0[1] = { &generate_output__generate_output__du_functor_desc_flat_key_0_0 };

static const MR_DuPtagLayout generate_output__generate_output__du_ptag_ordered_flat_key_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    generate_output__generate_output__du_stag_ordered_flat_key_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr generate_output__generate_output__du_name_ordered_flat_key_0[1] = { &generate_output__generate_output__du_functor_desc_flat_key_0_0 };

static const MR_Integer generate_output__generate_output__functor_number_map_flat_key_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct generate_output__generate_output__type_ctor_info_flat_key_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (generate_output____Unify____flat_key_0_0_10001)),
  ((MR_Box) (generate_output____Compare____flat_key_0_0_10001)),
  (MR_String) "generate_output",
  (MR_String) "flat_key",
  { generate_output__generate_output__du_name_ordered_flat_key_0 },
  { generate_output__generate_output__du_ptag_ordered_flat_key_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  generate_output__generate_output__functor_number_map_flat_key_0,

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
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  generate_output__generate_output__field_types_profiling_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr generate_output__generate_output__du_stag_ordered_profiling_0_0[1] = { &generate_output__generate_output__du_functor_desc_profiling_0_0 };

static const MR_DuPtagLayout generate_output__generate_output__du_ptag_ordered_profiling_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    generate_output__generate_output__du_stag_ordered_profiling_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr generate_output__generate_output__du_name_ordered_profiling_0[1] = { &generate_output__generate_output__du_functor_desc_profiling_0_0 };

static const MR_Integer generate_output__generate_output__functor_number_map_profiling_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct generate_output__generate_output__type_ctor_info_profiling_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (generate_output____Unify____profiling_0_0_10001)),
  ((MR_Box) (generate_output____Compare____profiling_0_0_10001)),
  (MR_String) "generate_output",
  (MR_String) "profiling",
  { generate_output__generate_output__du_name_ordered_profiling_0 },
  { generate_output__generate_output__du_ptag_ordered_profiling_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  generate_output__generate_output__functor_number_map_profiling_0,

};

static void MR_CALL 
generate_output____Compare____profiling_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&generate_output_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&generate_output_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&generate_output_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
generate_output____Unify____profiling_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

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

static void MR_CALL 
generate_output____Compare____flat_key_0_0(
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
    MR_Float ArgX1_4 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0)));
    MR_Float ArgY1_5 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0)));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

static MR_bool MR_CALL 
generate_output____Unify____flat_key_0_0(
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
    MR_Float ArgX1_3 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0)));
    MR_Float ArgY1_4 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0)));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
generate_output__generate_output_for_cycle_4_p_0(
  MR_Word ProfNode_5,
  MR_Word Prof_6,
  MR_Word STATE_VARIABLE_OutputProf_0_32,
  MR_Word * STATE_VARIABLE_OutputProf_33)
{
  MR_bool succeeded;
  MR_Float Scale_8;
  MR_Integer IntTotalCounts_10;
  MR_Float TotalCounts_14;
  MR_String Name_15;
  MR_Integer CycleNum_16;
  MR_Integer Initial_17;
  MR_Float Prop_18;
  MR_Integer TotalCalls_20;
  MR_Integer SelfCalls_21;
  MR_Word InfoMap0_22;
  MR_Word CallTree0_23;
  MR_Word FreeTree_24;
  MR_Float InitialFloat_25;
  MR_Float DescPercentage_26;
  MR_Float SelfTime_27;
  MR_Float DescTime_28;
  MR_Word OutputProfNode_29;
  MR_Word InfoMap_30;
  MR_Word CallTree_31;
  MR_Float Var_37;
  MR_String _Units_9;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word _CycleMap_13;
  MR_Word _CycleMembers_19;

  prof_info__prof_get_entire_7_p_0(Prof_6, &Scale_8, &_Units_9, &IntTotalCounts_10, &Var_11, &Var_12, &_CycleMap_13);
  TotalCounts_14 = mercury__float__float_1_f_0(IntTotalCounts_10);
  prof_info__prof_node_get_entire_cycle_8_p_0(ProfNode_5, &Name_15, &CycleNum_16, &Initial_17, &Prop_18, &_CycleMembers_19, &TotalCalls_20, &SelfCalls_21);
  InfoMap0_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_OutputProf_0_32, (MR_Integer) 0))));
  CallTree0_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_OutputProf_0_32, (MR_Integer) 1))));
  FreeTree_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_OutputProf_0_32, (MR_Integer) 2))));
  InitialFloat_25 = mercury__float__float_1_f_0(Initial_17);
  succeeded = (TotalCounts_14 == ((MR_Float) 0.0000000000000000));
  if (succeeded)
    DescPercentage_26 = (MR_Float) 0.0000000000000000;
  else
  {
    MR_Float Var_34;
    MR_Float Var_35 = (InitialFloat_25 + Prop_18);

    Var_34 = mercury__float__f_slash_2_f_0(Var_35, TotalCounts_14);
    DescPercentage_26 = (Var_34 * ((MR_Float) 100.00000000000000));
  }
  SelfTime_27 = (InitialFloat_25 * Scale_8);
  Var_37 = (InitialFloat_25 + Prop_18);
  DescTime_28 = (Var_37 * Scale_8);
  {
    OutputProfNode_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, OutputProfNode_29, 0) = ((MR_Box) (Name_15));
    MR_hl_field(1, OutputProfNode_29, 1) = ((MR_Box) (CycleNum_16));
    MR_hl_field(1, OutputProfNode_29, 2) = MR_box_float(SelfTime_27);
    MR_hl_field(1, OutputProfNode_29, 3) = MR_box_float(DescPercentage_26);
    MR_hl_field(1, OutputProfNode_29, 4) = MR_box_float(DescTime_28);
    MR_hl_field(1, OutputProfNode_29, 5) = ((MR_Box) (TotalCalls_20));
    MR_hl_field(1, OutputProfNode_29, 6) = ((MR_Box) (SelfCalls_21));
    MR_hl_field(1, OutputProfNode_29, 7) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, OutputProfNode_29, 8) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_output_prof_0), ((MR_Box) (Name_15)), ((MR_Box) (OutputProfNode_29)), InfoMap0_22, &InfoMap_30);
  mercury__rbtree__insert_duplicate_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MR_box_float(DescPercentage_26), ((MR_Box) (Name_15)), CallTree0_23, &CallTree_31);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_OutputProf_33 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (InfoMap_30));
    MR_hl_field(0, base, 1) = ((MR_Box) (CallTree_31));
    MR_hl_field(0, base, 2) = ((MR_Box) (FreeTree_24));
  }
}

MR_Float MR_CALL 
generate_output__checked_float_divide_2_f_0(
  MR_Float A_4,
  MR_Float B_5)
{
  MR_bool succeeded = (B_5 == ((MR_Float) 0.0000000000000000));
  MR_Float HeadVar__3_3;

  if (succeeded)
    HeadVar__3_3 = (MR_Float) 0.0000000000000000;
  else
    HeadVar__3_3 = mercury__float__f_slash_2_f_0(A_4, B_5);
  return HeadVar__3_3;
}

void MR_CALL 
generate_output__generate_prof_output_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Prof_8,
  MR_Word * IndexMap_9,
  MR_Word * Output_10)
{
  MR_Word VeryVerbose_12;
  MR_Word ProfNodeMap_17;
  MR_Word ProfNodeList_19;
  MR_Word OutputProf0_20;
  MR_Word OutputProf_21;
  MR_Word InfoMap_22;
  MR_Word CallTree_23;
  MR_Word FlatTree_24;
  MR_Word CallList0_25;
  MR_Word FlatList0_26;
  MR_Word CallList_27;
  MR_Word FlatList_28;
  MR_Word InfoMap_38;
  MR_Word CallTree_39;
  MR_Word FlatTree_40;
  MR_Word Var_46;
  MR_Float Var_13;
  MR_String Var_14;
  MR_Integer _IntTotalCounts_15;
  MR_Word Var_16;
  MR_Word Var_18;

  globals__io_lookup_bool_option_4_p_0((MR_Integer) 1, &VeryVerbose_12);
  prof_info__prof_get_entire_7_p_0(Prof_8, &Var_13, &Var_14, &_IntTotalCounts_15, &Var_16, &ProfNodeMap_17, &Var_18);
  ProfNodeList_19 = mercury__map__values_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), ProfNodeMap_17);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_output_prof_0), &InfoMap_38);
  mercury__rbtree__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &CallTree_39);
  mercury__rbtree__init_1_p_0((MR_Word) (&generate_output__generate_output__type_ctor_info_flat_key_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &FlatTree_40);
  {
    OutputProf0_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, OutputProf0_20, 0) = ((MR_Box) (InfoMap_38));
    MR_hl_field(0, OutputProf0_20, 1) = ((MR_Box) (CallTree_39));
    MR_hl_field(0, OutputProf0_20, 2) = ((MR_Box) (FlatTree_40));
  }
  generate_output__process_prof_node_list_8_p_0(ProgressStream_7, ProfNodeList_19, Prof_8, VeryVerbose_12, OutputProf0_20, &OutputProf_21);
  InfoMap_22 = ((MR_Word) ((MR_hl_field(0, OutputProf_21, (MR_Integer) 0))));
  CallTree_23 = ((MR_Word) ((MR_hl_field(0, OutputProf_21, (MR_Integer) 1))));
  FlatTree_24 = ((MR_Word) ((MR_hl_field(0, OutputProf_21, (MR_Integer) 2))));
  CallList0_25 = mercury__rbtree__values_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CallTree_23);
  FlatList0_26 = mercury__rbtree__values_1_f_0((MR_Word) (&generate_output__generate_output__type_ctor_info_flat_key_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FlatTree_24);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CallList0_25, &CallList_27);
  Var_46 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  generate_output__assign_index_numbers_2_4_p_0(CallList_27, (MR_Integer) 1, Var_46, IndexMap_9);
  FlatList_28 = mercury__list__reverse_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FlatList0_26);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Output_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (InfoMap_22));
    MR_hl_field(0, base, 1) = ((MR_Box) (CallList_27));
    MR_hl_field(0, base, 2) = ((MR_Box) (FlatList_28));
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
      MR_String X0_9 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Xs0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_IndexMap_15_15;
      MR_Integer Var_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_N_2;
      MR_Word next_value_of_STATE_VARIABLE_IndexMap_0_3;

      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (X0_9)), ((MR_Box) (N_2)), STATE_VARIABLE_IndexMap_0_3, &STATE_VARIABLE_IndexMap_15_15);
      Var_16 = (MR_Integer) ((MR_Unsigned) N_2 + (MR_Unsigned) 1);
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
generate_output__process_prof_node_list_8_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word Prof_3,
  MR_Word VeryVerbose_4,
  MR_Word STATE_VARIABLE_OutputProf_0_5,
  MR_Word * STATE_VARIABLE_OutputProf_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_OutputProf_6 = STATE_VARIABLE_OutputProf_0_5;
    else
    {
      MR_Word PN_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PNs_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_OutputProf_33_33;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_OutputProf_0_5;

      switch (VeryVerbose_4) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String LabelName_25;
            MR_String Var_30;

            prof_info__prof_node_get_pred_name_2_p_0(PN_19, &LabelName_25);
            Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "\n\t% Processing ", LabelName_25);
            mercury__io__write_string_4_p_0(ProgressStream_1, Var_30);
          }
          break;
      }
      generate_output__process_prof_node_4_p_0(PN_19, Prof_3, STATE_VARIABLE_OutputProf_0_5, &STATE_VARIABLE_OutputProf_33_33);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PNs_20;
      next_value_of_STATE_VARIABLE_OutputProf_0_5 = STATE_VARIABLE_OutputProf_33_33;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_OutputProf_0_5 = next_value_of_STATE_VARIABLE_OutputProf_0_5;
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
  MR_bool succeeded;
  MR_Word ProfNodeType_8;

  prof_info__prof_node_type_2_p_0(ProfNode_5, &ProfNodeType_8);
  succeeded = (ProfNodeType_8 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Float Scale_11;
    MR_Integer IntTotalCounts_13;
    MR_Word CycleMap_16;
    MR_Float TotalCounts_17;
    MR_String LabelName_18;
    MR_Integer CycleNum_19;
    MR_Integer Initial_20;
    MR_Float Prop_21;
    MR_Word ParentList_22;
    MR_Word ChildList_23;
    MR_Integer TotalCalls_24;
    MR_Integer SelfCalls_25;
    MR_Word NameList_26;
    MR_String _Units_12;
    MR_Word Var_14;
    MR_Word Var_15;

    prof_info__prof_get_entire_7_p_0(Prof_6, &Scale_11, &_Units_12, &IntTotalCounts_13, &Var_14, &Var_15, &CycleMap_16);
    TotalCounts_17 = mercury__float__float_1_f_0(IntTotalCounts_13);
    prof_info__prof_node_get_entire_pred_10_p_0(ProfNode_5, &LabelName_18, &CycleNum_19, &Initial_20, &Prop_21, &ParentList_22, &ChildList_23, &TotalCalls_24, &SelfCalls_25, &NameList_26);
    succeeded = (ParentList_22 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (ChildList_23 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      *STATE_VARIABLE_OutputProf_10 = STATE_VARIABLE_OutputProf_0_9;
    else
    {
      MR_Word InfoMap0_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_OutputProf_0_9, (MR_Integer) 0))));
      MR_Word CallTree0_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_OutputProf_0_9, (MR_Integer) 1))));
      MR_Word FlatTree0_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_OutputProf_0_9, (MR_Integer) 2))));
      MR_String Name_30;
      MR_Float InitialFloat_31;
      MR_Float DescPercentage_32;
      MR_Float FlatPercentage_33;
      MR_Float SelfTime_34;
      MR_Float DescTime_35;
      MR_Word OutputParentList_36;
      MR_Word OutputCycleParentList_37;
      MR_Word OutputChildList_38;
      MR_Word OutputCycleChildList_39;
      MR_Word OutputProfNode_40;
      MR_Word InfoMap_41;
      MR_Word CallTree_42;
      MR_Word FlatTree_43;
      MR_String Var_44;
      MR_Float Var_50;
      MR_Word Var_51;
      MR_Integer TotalCalls_56;
      MR_Word Parents_57;
      MR_Float FltTotalCalls_58;

      Var_44 = generate_output__construct_name_1_f_0(NameList_26);
      Name_30 = mercury__string__f_43_43_2_f_0(LabelName_18, Var_44);
      InitialFloat_31 = mercury__float__float_1_f_0(Initial_20);
      succeeded = (TotalCounts_17 == ((MR_Float) 0.0000000000000000));
      if (succeeded)
      {
        DescPercentage_32 = (MR_Float) 0.0000000000000000;
        FlatPercentage_33 = (MR_Float) 0.0000000000000000;
      }
      else
      {
        MR_Float Var_45;
        MR_Float Var_46 = (InitialFloat_31 + Prop_21);
        MR_Float Var_48;

        Var_45 = mercury__float__f_slash_2_f_0(Var_46, TotalCounts_17);
        DescPercentage_32 = (Var_45 * ((MR_Float) 100.00000000000000));
        Var_48 = mercury__float__f_slash_2_f_0(InitialFloat_31, TotalCounts_17);
        FlatPercentage_33 = (Var_48 * ((MR_Float) 100.00000000000000));
      }
      SelfTime_34 = (InitialFloat_31 * Scale_11);
      Var_50 = (InitialFloat_31 + Prop_21);
      DescTime_35 = (Var_50 * Scale_11);
      generate_output__remove_cycle_members_7_p_0(ParentList_22, CycleNum_19, CycleMap_16, TotalCalls_24, &TotalCalls_56, &Parents_57, &OutputCycleParentList_37);
      FltTotalCalls_58 = mercury__float__float_1_f_0(TotalCalls_56);
      if ((Parents_57 == (MR_Word) ((MR_Unsigned) 0U)))
        OutputParentList_36 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Output0_70;
        MR_Word Output_71;

        mercury__rbtree__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_parent_0), &Output0_70);
        generate_output__process_prof_node_parents_3_7_p_0(Parents_57, SelfTime_34, DescTime_35, FltTotalCalls_58, CycleMap_16, Output0_70, &Output_71);
        mercury__rbtree__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_parent_0), Output_71, &OutputParentList_36);
      }
      if ((ChildList_23 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        OutputChildList_38 = (MR_Word) ((MR_Unsigned) 0U);
        OutputCycleChildList_39 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word Children_85;
        MR_Word Output0_86;
        MR_Word Output_87;

        generate_output__remove_child_cycle_members_5_p_0(ChildList_23, CycleNum_19, CycleMap_16, &Children_85, &OutputCycleChildList_39);
        mercury__rbtree__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_child_0), &Output0_86);
        generate_output__process_prof_node_children_2_4_p_0(Children_85, Prof_6, Output0_86, &Output_87);
        mercury__rbtree__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_child_0), Output_87, &OutputChildList_38);
      }
      {
        OutputProfNode_40 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, OutputProfNode_40, 0) = ((MR_Box) (Name_30));
        MR_hl_field(0, OutputProfNode_40, 1) = ((MR_Box) (CycleNum_19));
        MR_hl_field(0, OutputProfNode_40, 2) = MR_box_float(DescPercentage_32);
        MR_hl_field(0, OutputProfNode_40, 3) = MR_box_float(FlatPercentage_33);
        MR_hl_field(0, OutputProfNode_40, 4) = MR_box_float(SelfTime_34);
        MR_hl_field(0, OutputProfNode_40, 5) = MR_box_float(DescTime_35);
        MR_hl_field(0, OutputProfNode_40, 6) = ((MR_Box) (TotalCalls_24));
        MR_hl_field(0, OutputProfNode_40, 7) = ((MR_Box) (SelfCalls_25));
        MR_hl_field(0, OutputProfNode_40, 8) = ((MR_Box) (OutputParentList_36));
        MR_hl_field(0, OutputProfNode_40, 9) = ((MR_Box) (OutputChildList_38));
        MR_hl_field(0, OutputProfNode_40, 10) = ((MR_Box) (OutputCycleParentList_37));
        MR_hl_field(0, OutputProfNode_40, 11) = ((MR_Box) (OutputCycleChildList_39));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&output_prof_info__output_prof_info__type_ctor_info_output_prof_0), ((MR_Box) (LabelName_18)), ((MR_Box) (OutputProfNode_40)), InfoMap0_27, &InfoMap_41);
      mercury__rbtree__insert_duplicate_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MR_box_float(DescPercentage_32), ((MR_Box) (LabelName_18)), CallTree0_28, &CallTree_42);
      {
        Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_51, 0) = MR_box_float(FlatPercentage_33);
        MR_hl_field(0, Var_51, 1) = ((MR_Box) (TotalCalls_24));
      }
      mercury__rbtree__insert_duplicate_4_p_0((MR_Word) (&generate_output__generate_output__type_ctor_info_flat_key_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_51)), ((MR_Box) (LabelName_18)), FlatTree0_29, &FlatTree_43);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_OutputProf_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (InfoMap_41));
        MR_hl_field(0, base, 1) = ((MR_Box) (CallTree_42));
        MR_hl_field(0, base, 2) = ((MR_Box) (FlatTree_43));
      }
    }
  }
  else
    *STATE_VARIABLE_OutputProf_10 = STATE_VARIABLE_OutputProf_0_9;
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
      MR_Word PN_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PNs_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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
        Child_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Child_33, 0) = ((MR_Box) (LabelName_13));
        MR_hl_field(0, Child_33, 1) = ((MR_Box) (CycleNum_22));
        MR_hl_field(0, Child_33, 2) = MR_box_float(PropSelfTime_31);
        MR_hl_field(0, Child_33, 3) = MR_box_float(PropDescTime_32);
        MR_hl_field(0, Child_33, 4) = ((MR_Box) (Calls_14));
        MR_hl_field(0, Child_33, 5) = ((MR_Box) (TotalCalls_26));
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
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word PN_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word PNs_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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
          Child_18 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Child_18, 0) = ((MR_Box) (LabelName_14));
          MR_hl_field(0, Child_18, 1) = ((MR_Box) (CycleNum_2));
          MR_hl_field(0, Child_18, 2) = MR_box_float((MR_Float) 0.0000000000000000);
          MR_hl_field(0, Child_18, 3) = MR_box_float((MR_Float) 0.0000000000000000);
          MR_hl_field(0, Child_18, 4) = ((MR_Box) (Calls_15));
          MR_hl_field(0, Child_18, 5) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Child_18));
          MR_hl_field(1, base, 1) = ((MR_Box) (OC0_17));
        }
      }
      else
      {
        MR_Word List0_19;

        generate_output__remove_child_cycle_members_5_p_0(PNs_9, CycleNum_2, CycleMap_3, &List0_19, HeadVar__5_5);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (PN_8));
          MR_hl_field(1, base, 1) = ((MR_Box) (List0_19));
        }
      }
    }
    else
    {
      MR_Word List0_24;

      generate_output__remove_child_cycle_members_5_p_0(PNs_9, CycleNum_2, CycleMap_3, &List0_24, HeadVar__5_5);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (PN_8));
        MR_hl_field(1, base, 1) = ((MR_Box) (List0_24));
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
      MR_Word PN_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PNs_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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
        Parent_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Parent_29, 0) = ((MR_Box) (LabelName_22));
        MR_hl_field(0, Parent_29, 1) = ((MR_Box) (ParentCycleNum_25));
        MR_hl_field(0, Parent_29, 2) = MR_box_float(PropSelfTime_27);
        MR_hl_field(0, Parent_29, 3) = MR_box_float(PropDescTime_28);
        MR_hl_field(0, Parent_29, 4) = ((MR_Box) (Calls_23));
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
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_TotalCalls_5 = STATE_VARIABLE_TotalCalls_0_4;
  }
  else
  {
    MR_Word PN_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word PNs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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
          Parent_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Parent_24, 0) = ((MR_Box) (LabelName_20));
          MR_hl_field(0, Parent_24, 1) = ((MR_Box) (CycleNum_2));
          MR_hl_field(0, Parent_24, 2) = MR_box_float((MR_Float) 0.0000000000000000);
          MR_hl_field(0, Parent_24, 3) = MR_box_float((MR_Float) 0.0000000000000000);
          MR_hl_field(0, Parent_24, 4) = ((MR_Box) (Calls_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__7_7 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Parent_24));
          MR_hl_field(1, base, 1) = ((MR_Box) (OC0_23));
        }
      }
      else
      {
        MR_Word List0_25;

        generate_output__remove_cycle_members_7_p_0(PNs_14, CycleNum_2, CycleMap_3, STATE_VARIABLE_TotalCalls_0_4, STATE_VARIABLE_TotalCalls_5, &List0_25, HeadVar__7_7);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (PN_13));
          MR_hl_field(1, base, 1) = ((MR_Box) (List0_25));
        }
      }
    }
    else
    {
      MR_Word List0_35;

      generate_output__remove_cycle_members_7_p_0(PNs_14, CycleNum_2, CycleMap_3, STATE_VARIABLE_TotalCalls_0_4, STATE_VARIABLE_TotalCalls_5, &List0_35, HeadVar__7_7);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (PN_13));
        MR_hl_field(1, base, 1) = ((MR_Box) (List0_35));
      }
    }
  }
}

static MR_String MR_CALL 
generate_output__construct_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_String) "";
  else
  {
    MR_String Name_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Names_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_String NameStr0_6;
    MR_String NameStr1_7;

    NameStr0_6 = generate_output__construct_name_1_f_0(Names_4);
    mercury__string__append_3_p_2((MR_String) " or ", Name_3, &NameStr1_7);
    mercury__string__append_3_p_2(NameStr1_7, NameStr0_6, &HeadVar__2_2);
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
generate_output____Unify____flat_key_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = generate_output____Unify____flat_key_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
generate_output____Compare____flat_key_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  generate_output____Compare____flat_key_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
generate_output____Unify____profiling_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = generate_output____Unify____profiling_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
generate_output____Compare____profiling_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  generate_output____Compare____profiling_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
