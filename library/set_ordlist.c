/*
** Automatically generated from `set_ordlist.m'
** by the Mercury compiler,
** version rotd-2024-06-30
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


// :- module set_ordlist.
// :- implementation.

/*
INIT mercury__set_ordlist__init
ENDINIT
*/

#include "set_ordlist.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "term_vars.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_Integer mercury__set_ordlist__set_ordlist__functor_number_map_set_ordlist_1[1];

static const MR_FA_PseudoTypeInfo_Struct1 mercury__set_ordlist__list__pti_list_1__pseudo_1;

static const MR_NotagFunctorDesc mercury__set_ordlist__set_ordlist__notag_functor_desc_set_ordlist_1;

static void MR_CALL 
mercury__set_ordlist__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__set_ordlist__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_95_95_49_3_p_0(
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_17);

static void MR_CALL 
mercury__set_ordlist__divide_by_set_loop_6_p_0(
  MR_Word TypeInfo_for_T1_51,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevTrue_0_3,
  MR_Word * STATE_VARIABLE_RevTrue_4,
  MR_Word STATE_VARIABLE_RevFalse_0_5,
  MR_Word * STATE_VARIABLE_RevFalse_6);

static void MR_CALL 
mercury__set_ordlist__intersection_and_differences_loop_8_p_0(
  MR_Word TypeInfo_for_T_42,
  MR_Word As_9,
  MR_Word Bs_10,
  MR_Word STATE_VARIABLE_InAandB_0_23,
  MR_Word * STATE_VARIABLE_InAandB_24,
  MR_Word STATE_VARIABLE_OnlyInA_0_25,
  MR_Word * STATE_VARIABLE_OnlyInA_26,
  MR_Word STATE_VARIABLE_OnlyInB_0_27,
  MR_Word * STATE_VARIABLE_OnlyInB_28);

static MR_bool MR_CALL 
mercury__set_ordlist____Unify____set_ordlist_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__set_ordlist____Compare____set_ordlist_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__set_ordlist_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__set_ordlist_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__set_ordlist_scalar_common_3[1][5];




static /* final */ const MR_Box mercury__set_ordlist_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__set_ordlist_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__set_ordlist_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__set_ordlist_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__set_ordlist_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"


static const MR_Integer mercury__set_ordlist__set_ordlist__functor_number_map_set_ordlist_1[1] = { (MR_Integer) 0 };

static const MR_FA_PseudoTypeInfo_Struct1 mercury__set_ordlist__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_NotagFunctorDesc mercury__set_ordlist__set_ordlist__notag_functor_desc_set_ordlist_1 = {
  (MR_String) "sol",
  (MR_PseudoTypeInfo) (&mercury__set_ordlist__list__pti_list_1__pseudo_1),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__set_ordlist____Unify____set_ordlist_1_0_10001)),
  ((MR_Box) (mercury__set_ordlist____Compare____set_ordlist_1_0_10001)),
  (MR_String) "set_ordlist",
  (MR_String) "set_ordlist",
  { &mercury__set_ordlist__set_ordlist__notag_functor_desc_set_ordlist_1 },
  { &mercury__set_ordlist__set_ordlist__notag_functor_desc_set_ordlist_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__set_ordlist__set_ordlist__functor_number_map_set_ordlist_1,

};

void MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(
  MR_Word Var_7,
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3,
  MR_Word * HeadVar__2_2)
{
  MR_Word SortedList_4;
  MR_Integer Var_8;

  mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, (MR_Word) (List_3), (MR_Integer) 0, &Var_8);
  mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(Var_7, TypeInfo_for_T_5, Var_8, List_3, &SortedList_4);
  *HeadVar__2_2 = (MR_Word) (SortedList_4);
}

MR_bool MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(
  MR_Word Var_11,
  MR_Word TypeInfo_for_T_8,
  MR_Word E_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Var_9;
  MR_Word L_12 = (MR_Word) (HeadVar__2_2);

  mercury__set_ordlist__is_member_loop_3_p_0(TypeInfo_for_T_8, ((MR_Box) (E_1)), (MR_Word) (L_12), &Var_9);
  succeeded = ((MR_Integer) 1 == Var_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(
  MR_Word Var_7,
  MR_Word TypeInfo_for_T_5,
  MR_Word S_3,
  MR_Word E_4)
{
  MR_bool succeeded;
  MR_Word Var_13;
  MR_Word L_15 = (MR_Word) (S_3);

  mercury__set_ordlist__is_member_loop_3_p_0(TypeInfo_for_T_5, ((MR_Box) (E_4)), (MR_Word) (L_15), &Var_13);
  succeeded = ((MR_Integer) 1 == Var_13);
  return succeeded;
}

void MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word NewItem_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_Word List0_5 = (MR_Word) (HeadVar__2_2);
  MR_Word List_6;
  MR_Word conv0_List_6;

  mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_T_7, (MR_Word) (List0_5), ((MR_Box) (NewItem_4)), &conv0_List_6);
  List_6 = (MR_Word) (conv0_List_6);
  *HeadVar__3_3 = (MR_Word) (List_6);
}

void MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(
  MR_Word Var_12,
  MR_Word TypeInfo_for_T_10,
  MR_Word List0_4,
  MR_Word STATE_VARIABLE_Set_0_7,
  MR_Word * STATE_VARIABLE_Set_8)
{
  MR_Integer Var_13;
  MR_Word Set0_16;
  MR_Word Set1_17;
  MR_Word Set_18;

  mercury__list__length_acc_3_p_0(TypeInfo_for_T_10, (MR_Word) (List0_4), (MR_Integer) 0, &Var_13);
  mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(Var_12, TypeInfo_for_T_10, Var_13, List0_4, &Set0_16);
  Set1_17 = (MR_Word) (STATE_VARIABLE_Set_0_7);
  mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(Var_12, TypeInfo_for_T_10, Set0_16, Set1_17, &Set_18);
  *STATE_VARIABLE_Set_8 = (MR_Word) (Set_18);
}

void MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(
  MR_Word Var_14,
  MR_Word TypeInfo_for_T_12,
  MR_Word Elem_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  MR_Word Xs_15;
  MR_Word Ys_16;
  MR_Word Diff_17;
  MR_Word conv0_Diff_17;

  {
    Ys_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Ys_16, 0) = ((MR_Box) (Elem_4));
    MR_hl_field(1, Ys_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Xs_15 = (MR_Word) (STATE_VARIABLE_Set_0_6);
  mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_12, (MR_Word) (Xs_15), (MR_Word) (Ys_16), &conv0_Diff_17);
  Diff_17 = (MR_Word) (conv0_Diff_17);
  *STATE_VARIABLE_Set_7 = (MR_Word) (Diff_17);
}

void MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_108_105_115_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(
  MR_Word Var_12,
  MR_Word TypeInfo_for_T_10,
  MR_Word D_4,
  MR_Word STATE_VARIABLE_Set_0_7,
  MR_Word * STATE_VARIABLE_Set_8)
{
  MR_Integer Var_13;
  MR_Word Xs_16;
  MR_Word Ys_17;
  MR_Word Diff_18;
  MR_Word conv0_Diff_18;

  mercury__list__length_acc_3_p_0(TypeInfo_for_T_10, (MR_Word) (D_4), (MR_Integer) 0, &Var_13);
  mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(Var_12, TypeInfo_for_T_10, Var_13, D_4, &Ys_17);
  Xs_16 = (MR_Word) (STATE_VARIABLE_Set_0_7);
  mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_10, (MR_Word) (Xs_16), (MR_Word) (Ys_17), &conv0_Diff_18);
  Diff_18 = (MR_Word) (conv0_Diff_18);
  *STATE_VARIABLE_Set_8 = (MR_Word) (Diff_18);
}

MR_bool MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word Elem_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word Set0_5 = (MR_Word) (HeadVar__2_2);
  MR_Word Set_6;
  MR_Word conv0_Set_6;

  succeeded = mercury__list__delete_first_3_p_0(TypeInfo_for_T_7, (MR_Word) (Set0_5), ((MR_Box) (Elem_4)), &conv0_Set_6);
  if (succeeded)
  {
    Set_6 = (MR_Word) (conv0_Set_6);
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *HeadVar__3_3 = (MR_Word) (Set_6);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(
  MR_Word Var_11,
  MR_Word TypeInfo_for_T_9,
  MR_Word Elems_4,
  MR_Word STATE_VARIABLE_Set_0_7,
  MR_Word * STATE_VARIABLE_Set_8)
{
  MR_bool succeeded;
  MR_Word ElemSet_6;
  MR_Integer Var_15;
  MR_Word Xs_18;
  MR_Word Intersection_20;
  MR_Word Xs_21;
  MR_Word Ys_22;
  MR_Word Diff_23;
  MR_Word conv0_Intersection_20;
  MR_Word conv1_Diff_23;

  mercury__list__length_acc_3_p_0(TypeInfo_for_T_9, (MR_Word) (Elems_4), (MR_Integer) 0, &Var_15);
  mercury__list__merge_sort_3_p_0(TypeInfo_for_T_9, Var_15, (MR_Word) (Elems_4), &conv0_Intersection_20);
  Intersection_20 = (MR_Word) (conv0_Intersection_20);
  ElemSet_6 = (MR_Word) (Intersection_20);
  if ((Intersection_20 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  {
    MR_Word Elem_13 = ((MR_Word) ((MR_hl_field(1, Intersection_20, (MR_Integer) 0))));
    MR_Word Elems_14 = ((MR_Word) ((MR_hl_field(1, Intersection_20, (MR_Integer) 1))));

    succeeded = mercury__set_ordlist__no_dups_2_p_0(TypeInfo_for_T_9, ((MR_Box) (Elem_13)), (MR_Word) (Elems_14));
  }
  if (succeeded)
  {
    Xs_18 = (MR_Word) (STATE_VARIABLE_Set_0_7);
    succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_for_T_9, (MR_Word) (Xs_18), (MR_Word) (Intersection_20), (MR_Word) (Intersection_20));
    if (succeeded)
    {
      Xs_21 = (MR_Word) (STATE_VARIABLE_Set_0_7);
      Ys_22 = (MR_Word) (ElemSet_6);
      mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_9, (MR_Word) (Xs_21), (MR_Word) (Ys_22), &conv1_Diff_23);
      Diff_23 = (MR_Word) (conv1_Diff_23);
      *STATE_VARIABLE_Set_8 = (MR_Word) (Diff_23);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_110_105_111_110_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_Word Set0_4 = (MR_Word) (HeadVar__1_1);
  MR_Word Set1_5 = (MR_Word) (HeadVar__2_2);
  MR_Word Set_6;

  mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(Var_9, TypeInfo_for_T_7, Set0_4, Set1_5, &Set_6);
  *HeadVar__3_3 = (MR_Word) (Set_6);
}

void MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_105_115_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(
  MR_Word Var_7,
  MR_Word TypeInfo_for_T_5,
  MR_Word ListofSets_3,
  MR_Word * Set_4)
{
  MR_Word conv0_Set_4;

  mercury__set_ordlist__union_list_loop_3_p_0(TypeInfo_for_T_5, (MR_Word) (ListofSets_3), (MR_Word) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))), &conv0_Set_4);
  *Set_4 = (MR_Word) (conv0_Set_4);
}

void MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_Word Xs_4 = (MR_Word) (HeadVar__1_1);
  MR_Word Ys_5 = (MR_Word) (HeadVar__2_2);
  MR_Word Intersection_6;
  MR_Word conv0_Intersection_6;

  mercury__set_ordlist__intersect_loop_3_p_0(TypeInfo_for_T_7, (MR_Word) (Xs_4), (MR_Word) (Ys_5), &conv0_Intersection_6);
  Intersection_6 = (MR_Word) (conv0_Intersection_6);
  *HeadVar__3_3 = (MR_Word) (Intersection_6);
}

MR_bool MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_49_95_49_3_p_1(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word Xs_4 = (MR_Word) (HeadVar__1_1);
  MR_Word Ys_5 = (MR_Word) (HeadVar__2_2);
  MR_Word Intersection_6 = (MR_Word) (HeadVar__3_3);

  succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_for_T_7, (MR_Word) (Xs_4), (MR_Word) (Ys_5), (MR_Word) (Intersection_6));
  return succeeded;
}

void MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_105_115_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(
  MR_Word Var_7,
  MR_Word TypeInfo_for_T_5,
  MR_Word ListofSets_3,
  MR_Word * Set_4)
{
  MR_Word conv0_Set_4;

  conv0_Set_4 = mercury__set_ordlist__intersect_list_1_f_0(TypeInfo_for_T_5, (MR_Word) (ListofSets_3));
  *Set_4 = (MR_Word) (conv0_Set_4);
}

void MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_Word Xs_4 = (MR_Word) (HeadVar__1_1);
  MR_Word Ys_5 = (MR_Word) (HeadVar__2_2);
  MR_Word Diff_6;
  MR_Word conv0_Diff_6;

  mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_7, (MR_Word) (Xs_4), (MR_Word) (Ys_5), &conv0_Diff_6);
  Diff_6 = (MR_Word) (conv0_Diff_6);
  *HeadVar__3_3 = (MR_Word) (Diff_6);
}

void MR_CALL 
mercury__set_ordlist____Compare____set_ordlist_1_0(
  MR_Word TypeInfo_for_T_8,
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
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__list____Compare____list_1_0(TypeInfo_for_T_8, HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__sort_no_dups_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word List_3,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Set_4;
  MR_Integer Var_8;

  mercury__list__length_acc_3_p_0(TypeInfo_for_T_7, List_3, (MR_Integer) 0, &Var_8);
  mercury__list__merge_sort_3_p_0(TypeInfo_for_T_7, Var_8, List_3, &Set_4);
  *HeadVar__2_2 = (MR_Word) (Set_4);
  if ((Set_4 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  {
    MR_Box Elem_5 = (MR_hl_field(1, Set_4, (MR_Integer) 0));
    MR_Word Elems_6 = ((MR_Word) ((MR_hl_field(1, Set_4, (MR_Integer) 1))));

    succeeded = mercury__set_ordlist__no_dups_2_p_0(TypeInfo_for_T_7, Elem_5, Elems_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl6_14_p_5(
  MR_Word TypeInfo_for_T_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word TypeInfo_for_F_42,
  MR_Word P_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  MR_bool succeeded;
  MR_Word Var_35 = (MR_Word) (S_16);

  succeeded = mercury__list__foldl6_14_p_7(TypeInfo_for_T_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, TypeInfo_for_F_42, P_15, Var_35, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl6_14_p_4(
  MR_Word TypeInfo_for_T_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word TypeInfo_for_F_42,
  MR_Word P_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  MR_bool succeeded;
  MR_Word Var_35 = (MR_Word) (S_16);

  succeeded = mercury__list__foldl6_14_p_6(TypeInfo_for_T_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, TypeInfo_for_F_42, P_15, Var_35, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl6_14_p_3(
  MR_Word TypeInfo_for_T_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word TypeInfo_for_F_42,
  MR_Word P_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  MR_bool succeeded;
  MR_Word Var_35 = (MR_Word) (S_16);

  succeeded = mercury__list__foldl6_14_p_5(TypeInfo_for_T_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, TypeInfo_for_F_42, P_15, Var_35, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
  return succeeded;
}

void MR_CALL 
mercury__set_ordlist__foldl6_14_p_2(
  MR_Word TypeInfo_for_T_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word TypeInfo_for_F_42,
  MR_Word P_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  MR_Word Var_35 = (MR_Word) (S_16);

  mercury__list__foldl6_14_p_2(TypeInfo_for_T_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, TypeInfo_for_F_42, P_15, Var_35, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
}

void MR_CALL 
mercury__set_ordlist__foldl6_14_p_1(
  MR_Word TypeInfo_for_T_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word TypeInfo_for_F_42,
  MR_Word P_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  MR_Word Var_35 = (MR_Word) (S_16);

  mercury__list__foldl6_14_p_1(TypeInfo_for_T_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, TypeInfo_for_F_42, P_15, Var_35, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
}

void MR_CALL 
mercury__set_ordlist__foldl6_14_p_0(
  MR_Word TypeInfo_for_T_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word TypeInfo_for_F_42,
  MR_Word P_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  MR_Word Var_35 = (MR_Word) (S_16);

  mercury__list__foldl6_14_p_0(TypeInfo_for_T_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, TypeInfo_for_F_42, P_15, Var_35, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
}

MR_bool MR_CALL 
mercury__set_ordlist__fold6_14_p_5(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word TypeInfo_for_F_41,
  MR_Word P_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  MR_bool succeeded;
  MR_Word Var_42 = (MR_Word) (S_16);

  succeeded = mercury__list__foldl6_14_p_7(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, TypeInfo_for_F_41, P_15, Var_42, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__fold6_14_p_4(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word TypeInfo_for_F_41,
  MR_Word P_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  MR_bool succeeded;
  MR_Word Var_42 = (MR_Word) (S_16);

  succeeded = mercury__list__foldl6_14_p_6(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, TypeInfo_for_F_41, P_15, Var_42, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__fold6_14_p_3(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word TypeInfo_for_F_41,
  MR_Word P_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  MR_bool succeeded;
  MR_Word Var_42 = (MR_Word) (S_16);

  succeeded = mercury__list__foldl6_14_p_5(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, TypeInfo_for_F_41, P_15, Var_42, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
  return succeeded;
}

void MR_CALL 
mercury__set_ordlist__fold6_14_p_2(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word TypeInfo_for_F_41,
  MR_Word P_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  MR_Word Var_42 = (MR_Word) (S_16);

  mercury__list__foldl6_14_p_2(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, TypeInfo_for_F_41, P_15, Var_42, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
}

void MR_CALL 
mercury__set_ordlist__fold6_14_p_1(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word TypeInfo_for_F_41,
  MR_Word P_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  MR_Word Var_42 = (MR_Word) (S_16);

  mercury__list__foldl6_14_p_1(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, TypeInfo_for_F_41, P_15, Var_42, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
}

void MR_CALL 
mercury__set_ordlist__fold6_14_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word TypeInfo_for_F_41,
  MR_Word P_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  MR_Word Var_42 = (MR_Word) (S_16);

  mercury__list__foldl6_14_p_0(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, TypeInfo_for_F_41, P_15, Var_42, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl5_12_p_5(
  MR_Word TypeInfo_for_T1_31,
  MR_Word TypeInfo_for_T2_32,
  MR_Word TypeInfo_for_T3_33,
  MR_Word TypeInfo_for_T4_34,
  MR_Word TypeInfo_for_T5_35,
  MR_Word TypeInfo_for_T6_36,
  MR_Word P_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  MR_bool succeeded;
  MR_Word Var_30 = (MR_Word) (S_14);

  succeeded = mercury__list__foldl5_12_p_5(TypeInfo_for_T1_31, TypeInfo_for_T2_32, TypeInfo_for_T3_33, TypeInfo_for_T4_34, TypeInfo_for_T5_35, TypeInfo_for_T6_36, P_13, Var_30, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl5_12_p_4(
  MR_Word TypeInfo_for_T1_31,
  MR_Word TypeInfo_for_T2_32,
  MR_Word TypeInfo_for_T3_33,
  MR_Word TypeInfo_for_T4_34,
  MR_Word TypeInfo_for_T5_35,
  MR_Word TypeInfo_for_T6_36,
  MR_Word P_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  MR_bool succeeded;
  MR_Word Var_30 = (MR_Word) (S_14);

  succeeded = mercury__list__foldl5_12_p_4(TypeInfo_for_T1_31, TypeInfo_for_T2_32, TypeInfo_for_T3_33, TypeInfo_for_T4_34, TypeInfo_for_T5_35, TypeInfo_for_T6_36, P_13, Var_30, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl5_12_p_3(
  MR_Word TypeInfo_for_T1_31,
  MR_Word TypeInfo_for_T2_32,
  MR_Word TypeInfo_for_T3_33,
  MR_Word TypeInfo_for_T4_34,
  MR_Word TypeInfo_for_T5_35,
  MR_Word TypeInfo_for_T6_36,
  MR_Word P_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  MR_bool succeeded;
  MR_Word Var_30 = (MR_Word) (S_14);

  succeeded = mercury__list__foldl5_12_p_3(TypeInfo_for_T1_31, TypeInfo_for_T2_32, TypeInfo_for_T3_33, TypeInfo_for_T4_34, TypeInfo_for_T5_35, TypeInfo_for_T6_36, P_13, Var_30, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  return succeeded;
}

void MR_CALL 
mercury__set_ordlist__foldl5_12_p_2(
  MR_Word TypeInfo_for_T1_31,
  MR_Word TypeInfo_for_T2_32,
  MR_Word TypeInfo_for_T3_33,
  MR_Word TypeInfo_for_T4_34,
  MR_Word TypeInfo_for_T5_35,
  MR_Word TypeInfo_for_T6_36,
  MR_Word P_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  MR_Word Var_30 = (MR_Word) (S_14);

  mercury__list__foldl5_12_p_2(TypeInfo_for_T1_31, TypeInfo_for_T2_32, TypeInfo_for_T3_33, TypeInfo_for_T4_34, TypeInfo_for_T5_35, TypeInfo_for_T6_36, P_13, Var_30, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

void MR_CALL 
mercury__set_ordlist__foldl5_12_p_1(
  MR_Word TypeInfo_for_T1_31,
  MR_Word TypeInfo_for_T2_32,
  MR_Word TypeInfo_for_T3_33,
  MR_Word TypeInfo_for_T4_34,
  MR_Word TypeInfo_for_T5_35,
  MR_Word TypeInfo_for_T6_36,
  MR_Word P_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  MR_Word Var_30 = (MR_Word) (S_14);

  mercury__list__foldl5_12_p_1(TypeInfo_for_T1_31, TypeInfo_for_T2_32, TypeInfo_for_T3_33, TypeInfo_for_T4_34, TypeInfo_for_T5_35, TypeInfo_for_T6_36, P_13, Var_30, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

void MR_CALL 
mercury__set_ordlist__foldl5_12_p_0(
  MR_Word TypeInfo_for_T1_31,
  MR_Word TypeInfo_for_T2_32,
  MR_Word TypeInfo_for_T3_33,
  MR_Word TypeInfo_for_T4_34,
  MR_Word TypeInfo_for_T5_35,
  MR_Word TypeInfo_for_T6_36,
  MR_Word P_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  MR_Word Var_30 = (MR_Word) (S_14);

  mercury__list__foldl5_12_p_0(TypeInfo_for_T1_31, TypeInfo_for_T2_32, TypeInfo_for_T3_33, TypeInfo_for_T4_34, TypeInfo_for_T5_35, TypeInfo_for_T6_36, P_13, Var_30, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

MR_bool MR_CALL 
mercury__set_ordlist__fold5_12_p_5(
  MR_Word TypeInfo_for_T1_30,
  MR_Word TypeInfo_for_T2_31,
  MR_Word TypeInfo_for_T3_32,
  MR_Word TypeInfo_for_T4_33,
  MR_Word TypeInfo_for_T5_34,
  MR_Word TypeInfo_for_T6_35,
  MR_Word P_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  MR_bool succeeded;
  MR_Word Var_36 = (MR_Word) (S_14);

  succeeded = mercury__list__foldl5_12_p_5(TypeInfo_for_T1_30, TypeInfo_for_T2_31, TypeInfo_for_T3_32, TypeInfo_for_T4_33, TypeInfo_for_T5_34, TypeInfo_for_T6_35, P_13, Var_36, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__fold5_12_p_4(
  MR_Word TypeInfo_for_T1_30,
  MR_Word TypeInfo_for_T2_31,
  MR_Word TypeInfo_for_T3_32,
  MR_Word TypeInfo_for_T4_33,
  MR_Word TypeInfo_for_T5_34,
  MR_Word TypeInfo_for_T6_35,
  MR_Word P_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  MR_bool succeeded;
  MR_Word Var_36 = (MR_Word) (S_14);

  succeeded = mercury__list__foldl5_12_p_4(TypeInfo_for_T1_30, TypeInfo_for_T2_31, TypeInfo_for_T3_32, TypeInfo_for_T4_33, TypeInfo_for_T5_34, TypeInfo_for_T6_35, P_13, Var_36, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__fold5_12_p_3(
  MR_Word TypeInfo_for_T1_30,
  MR_Word TypeInfo_for_T2_31,
  MR_Word TypeInfo_for_T3_32,
  MR_Word TypeInfo_for_T4_33,
  MR_Word TypeInfo_for_T5_34,
  MR_Word TypeInfo_for_T6_35,
  MR_Word P_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  MR_bool succeeded;
  MR_Word Var_36 = (MR_Word) (S_14);

  succeeded = mercury__list__foldl5_12_p_3(TypeInfo_for_T1_30, TypeInfo_for_T2_31, TypeInfo_for_T3_32, TypeInfo_for_T4_33, TypeInfo_for_T5_34, TypeInfo_for_T6_35, P_13, Var_36, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  return succeeded;
}

void MR_CALL 
mercury__set_ordlist__fold5_12_p_2(
  MR_Word TypeInfo_for_T1_30,
  MR_Word TypeInfo_for_T2_31,
  MR_Word TypeInfo_for_T3_32,
  MR_Word TypeInfo_for_T4_33,
  MR_Word TypeInfo_for_T5_34,
  MR_Word TypeInfo_for_T6_35,
  MR_Word P_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  MR_Word Var_36 = (MR_Word) (S_14);

  mercury__list__foldl5_12_p_2(TypeInfo_for_T1_30, TypeInfo_for_T2_31, TypeInfo_for_T3_32, TypeInfo_for_T4_33, TypeInfo_for_T5_34, TypeInfo_for_T6_35, P_13, Var_36, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

void MR_CALL 
mercury__set_ordlist__fold5_12_p_1(
  MR_Word TypeInfo_for_T1_30,
  MR_Word TypeInfo_for_T2_31,
  MR_Word TypeInfo_for_T3_32,
  MR_Word TypeInfo_for_T4_33,
  MR_Word TypeInfo_for_T5_34,
  MR_Word TypeInfo_for_T6_35,
  MR_Word P_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  MR_Word Var_36 = (MR_Word) (S_14);

  mercury__list__foldl5_12_p_1(TypeInfo_for_T1_30, TypeInfo_for_T2_31, TypeInfo_for_T3_32, TypeInfo_for_T4_33, TypeInfo_for_T5_34, TypeInfo_for_T6_35, P_13, Var_36, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

void MR_CALL 
mercury__set_ordlist__fold5_12_p_0(
  MR_Word TypeInfo_for_T1_30,
  MR_Word TypeInfo_for_T2_31,
  MR_Word TypeInfo_for_T3_32,
  MR_Word TypeInfo_for_T4_33,
  MR_Word TypeInfo_for_T5_34,
  MR_Word TypeInfo_for_T6_35,
  MR_Word P_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  MR_Word Var_36 = (MR_Word) (S_14);

  mercury__list__foldl5_12_p_0(TypeInfo_for_T1_30, TypeInfo_for_T2_31, TypeInfo_for_T3_32, TypeInfo_for_T4_33, TypeInfo_for_T5_34, TypeInfo_for_T6_35, P_13, Var_36, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl4_10_p_5(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word TypeInfo_for_T4_29,
  MR_Word TypeInfo_for_T5_30,
  MR_Word P_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  MR_bool succeeded;
  MR_Word Var_25 = (MR_Word) (S_12);

  succeeded = mercury__list__foldl4_10_p_7(TypeInfo_for_T1_26, TypeInfo_for_T2_27, TypeInfo_for_T3_28, TypeInfo_for_T4_29, TypeInfo_for_T5_30, P_11, Var_25, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl4_10_p_4(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word TypeInfo_for_T4_29,
  MR_Word TypeInfo_for_T5_30,
  MR_Word P_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  MR_bool succeeded;
  MR_Word Var_25 = (MR_Word) (S_12);

  succeeded = mercury__list__foldl4_10_p_6(TypeInfo_for_T1_26, TypeInfo_for_T2_27, TypeInfo_for_T3_28, TypeInfo_for_T4_29, TypeInfo_for_T5_30, P_11, Var_25, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl4_10_p_3(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word TypeInfo_for_T4_29,
  MR_Word TypeInfo_for_T5_30,
  MR_Word P_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  MR_bool succeeded;
  MR_Word Var_25 = (MR_Word) (S_12);

  succeeded = mercury__list__foldl4_10_p_5(TypeInfo_for_T1_26, TypeInfo_for_T2_27, TypeInfo_for_T3_28, TypeInfo_for_T4_29, TypeInfo_for_T5_30, P_11, Var_25, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  return succeeded;
}

void MR_CALL 
mercury__set_ordlist__foldl4_10_p_2(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word TypeInfo_for_T4_29,
  MR_Word TypeInfo_for_T5_30,
  MR_Word P_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  MR_Word Var_25 = (MR_Word) (S_12);

  mercury__list__foldl4_10_p_2(TypeInfo_for_T1_26, TypeInfo_for_T2_27, TypeInfo_for_T3_28, TypeInfo_for_T4_29, TypeInfo_for_T5_30, P_11, Var_25, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__set_ordlist__foldl4_10_p_1(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word TypeInfo_for_T4_29,
  MR_Word TypeInfo_for_T5_30,
  MR_Word P_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  MR_Word Var_25 = (MR_Word) (S_12);

  mercury__list__foldl4_10_p_1(TypeInfo_for_T1_26, TypeInfo_for_T2_27, TypeInfo_for_T3_28, TypeInfo_for_T4_29, TypeInfo_for_T5_30, P_11, Var_25, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__set_ordlist__foldl4_10_p_0(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word TypeInfo_for_T4_29,
  MR_Word TypeInfo_for_T5_30,
  MR_Word P_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  MR_Word Var_25 = (MR_Word) (S_12);

  mercury__list__foldl4_10_p_0(TypeInfo_for_T1_26, TypeInfo_for_T2_27, TypeInfo_for_T3_28, TypeInfo_for_T4_29, TypeInfo_for_T5_30, P_11, Var_25, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

MR_bool MR_CALL 
mercury__set_ordlist__fold4_10_p_5(
  MR_Word TypeInfo_for_T1_25,
  MR_Word TypeInfo_for_T2_26,
  MR_Word TypeInfo_for_T3_27,
  MR_Word TypeInfo_for_T4_28,
  MR_Word TypeInfo_for_T5_29,
  MR_Word P_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  MR_bool succeeded;
  MR_Word Var_30 = (MR_Word) (S_12);

  succeeded = mercury__list__foldl4_10_p_7(TypeInfo_for_T1_25, TypeInfo_for_T2_26, TypeInfo_for_T3_27, TypeInfo_for_T4_28, TypeInfo_for_T5_29, P_11, Var_30, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__fold4_10_p_4(
  MR_Word TypeInfo_for_T1_25,
  MR_Word TypeInfo_for_T2_26,
  MR_Word TypeInfo_for_T3_27,
  MR_Word TypeInfo_for_T4_28,
  MR_Word TypeInfo_for_T5_29,
  MR_Word P_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  MR_bool succeeded;
  MR_Word Var_30 = (MR_Word) (S_12);

  succeeded = mercury__list__foldl4_10_p_6(TypeInfo_for_T1_25, TypeInfo_for_T2_26, TypeInfo_for_T3_27, TypeInfo_for_T4_28, TypeInfo_for_T5_29, P_11, Var_30, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__fold4_10_p_3(
  MR_Word TypeInfo_for_T1_25,
  MR_Word TypeInfo_for_T2_26,
  MR_Word TypeInfo_for_T3_27,
  MR_Word TypeInfo_for_T4_28,
  MR_Word TypeInfo_for_T5_29,
  MR_Word P_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  MR_bool succeeded;
  MR_Word Var_30 = (MR_Word) (S_12);

  succeeded = mercury__list__foldl4_10_p_5(TypeInfo_for_T1_25, TypeInfo_for_T2_26, TypeInfo_for_T3_27, TypeInfo_for_T4_28, TypeInfo_for_T5_29, P_11, Var_30, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  return succeeded;
}

void MR_CALL 
mercury__set_ordlist__fold4_10_p_2(
  MR_Word TypeInfo_for_T1_25,
  MR_Word TypeInfo_for_T2_26,
  MR_Word TypeInfo_for_T3_27,
  MR_Word TypeInfo_for_T4_28,
  MR_Word TypeInfo_for_T5_29,
  MR_Word P_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  MR_Word Var_30 = (MR_Word) (S_12);

  mercury__list__foldl4_10_p_2(TypeInfo_for_T1_25, TypeInfo_for_T2_26, TypeInfo_for_T3_27, TypeInfo_for_T4_28, TypeInfo_for_T5_29, P_11, Var_30, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__set_ordlist__fold4_10_p_1(
  MR_Word TypeInfo_for_T1_25,
  MR_Word TypeInfo_for_T2_26,
  MR_Word TypeInfo_for_T3_27,
  MR_Word TypeInfo_for_T4_28,
  MR_Word TypeInfo_for_T5_29,
  MR_Word P_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  MR_Word Var_30 = (MR_Word) (S_12);

  mercury__list__foldl4_10_p_1(TypeInfo_for_T1_25, TypeInfo_for_T2_26, TypeInfo_for_T3_27, TypeInfo_for_T4_28, TypeInfo_for_T5_29, P_11, Var_30, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__set_ordlist__fold4_10_p_0(
  MR_Word TypeInfo_for_T1_25,
  MR_Word TypeInfo_for_T2_26,
  MR_Word TypeInfo_for_T3_27,
  MR_Word TypeInfo_for_T4_28,
  MR_Word TypeInfo_for_T5_29,
  MR_Word P_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  MR_Word Var_30 = (MR_Word) (S_12);

  mercury__list__foldl4_10_p_0(TypeInfo_for_T1_25, TypeInfo_for_T2_26, TypeInfo_for_T3_27, TypeInfo_for_T4_28, TypeInfo_for_T5_29, P_11, Var_30, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl3_8_p_5(
  MR_Word TypeInfo_for_T1_21,
  MR_Word TypeInfo_for_T2_22,
  MR_Word TypeInfo_for_T3_23,
  MR_Word TypeInfo_for_T4_24,
  MR_Word P_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_bool succeeded;
  MR_Word Var_20 = (MR_Word) (S_10);

  succeeded = mercury__list__foldl3_8_p_5(TypeInfo_for_T1_21, TypeInfo_for_T2_22, TypeInfo_for_T3_23, TypeInfo_for_T4_24, P_9, Var_20, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl3_8_p_4(
  MR_Word TypeInfo_for_T1_21,
  MR_Word TypeInfo_for_T2_22,
  MR_Word TypeInfo_for_T3_23,
  MR_Word TypeInfo_for_T4_24,
  MR_Word P_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_bool succeeded;
  MR_Word Var_20 = (MR_Word) (S_10);

  succeeded = mercury__list__foldl3_8_p_4(TypeInfo_for_T1_21, TypeInfo_for_T2_22, TypeInfo_for_T3_23, TypeInfo_for_T4_24, P_9, Var_20, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl3_8_p_3(
  MR_Word TypeInfo_for_T1_21,
  MR_Word TypeInfo_for_T2_22,
  MR_Word TypeInfo_for_T3_23,
  MR_Word TypeInfo_for_T4_24,
  MR_Word P_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_bool succeeded;
  MR_Word Var_20 = (MR_Word) (S_10);

  succeeded = mercury__list__foldl3_8_p_3(TypeInfo_for_T1_21, TypeInfo_for_T2_22, TypeInfo_for_T3_23, TypeInfo_for_T4_24, P_9, Var_20, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  return succeeded;
}

void MR_CALL 
mercury__set_ordlist__foldl3_8_p_2(
  MR_Word TypeInfo_for_T1_21,
  MR_Word TypeInfo_for_T2_22,
  MR_Word TypeInfo_for_T3_23,
  MR_Word TypeInfo_for_T4_24,
  MR_Word P_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_Word Var_20 = (MR_Word) (S_10);

  mercury__list__foldl3_8_p_2(TypeInfo_for_T1_21, TypeInfo_for_T2_22, TypeInfo_for_T3_23, TypeInfo_for_T4_24, P_9, Var_20, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__set_ordlist__foldl3_8_p_1(
  MR_Word TypeInfo_for_T1_21,
  MR_Word TypeInfo_for_T2_22,
  MR_Word TypeInfo_for_T3_23,
  MR_Word TypeInfo_for_T4_24,
  MR_Word P_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_Word Var_20 = (MR_Word) (S_10);

  mercury__list__foldl3_8_p_1(TypeInfo_for_T1_21, TypeInfo_for_T2_22, TypeInfo_for_T3_23, TypeInfo_for_T4_24, P_9, Var_20, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__set_ordlist__foldl3_8_p_0(
  MR_Word TypeInfo_for_T1_21,
  MR_Word TypeInfo_for_T2_22,
  MR_Word TypeInfo_for_T3_23,
  MR_Word TypeInfo_for_T4_24,
  MR_Word P_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_Word Var_20 = (MR_Word) (S_10);

  mercury__list__foldl3_8_p_0(TypeInfo_for_T1_21, TypeInfo_for_T2_22, TypeInfo_for_T3_23, TypeInfo_for_T4_24, P_9, Var_20, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

MR_bool MR_CALL 
mercury__set_ordlist__fold3_8_p_5(
  MR_Word TypeInfo_for_T1_20,
  MR_Word TypeInfo_for_T2_21,
  MR_Word TypeInfo_for_T3_22,
  MR_Word TypeInfo_for_T4_23,
  MR_Word P_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_bool succeeded;
  MR_Word Var_24 = (MR_Word) (S_10);

  succeeded = mercury__list__foldl3_8_p_5(TypeInfo_for_T1_20, TypeInfo_for_T2_21, TypeInfo_for_T3_22, TypeInfo_for_T4_23, P_9, Var_24, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__fold3_8_p_4(
  MR_Word TypeInfo_for_T1_20,
  MR_Word TypeInfo_for_T2_21,
  MR_Word TypeInfo_for_T3_22,
  MR_Word TypeInfo_for_T4_23,
  MR_Word P_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_bool succeeded;
  MR_Word Var_24 = (MR_Word) (S_10);

  succeeded = mercury__list__foldl3_8_p_4(TypeInfo_for_T1_20, TypeInfo_for_T2_21, TypeInfo_for_T3_22, TypeInfo_for_T4_23, P_9, Var_24, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__fold3_8_p_3(
  MR_Word TypeInfo_for_T1_20,
  MR_Word TypeInfo_for_T2_21,
  MR_Word TypeInfo_for_T3_22,
  MR_Word TypeInfo_for_T4_23,
  MR_Word P_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_bool succeeded;
  MR_Word Var_24 = (MR_Word) (S_10);

  succeeded = mercury__list__foldl3_8_p_3(TypeInfo_for_T1_20, TypeInfo_for_T2_21, TypeInfo_for_T3_22, TypeInfo_for_T4_23, P_9, Var_24, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  return succeeded;
}

void MR_CALL 
mercury__set_ordlist__fold3_8_p_2(
  MR_Word TypeInfo_for_T1_20,
  MR_Word TypeInfo_for_T2_21,
  MR_Word TypeInfo_for_T3_22,
  MR_Word TypeInfo_for_T4_23,
  MR_Word P_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_Word Var_24 = (MR_Word) (S_10);

  mercury__list__foldl3_8_p_2(TypeInfo_for_T1_20, TypeInfo_for_T2_21, TypeInfo_for_T3_22, TypeInfo_for_T4_23, P_9, Var_24, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__set_ordlist__fold3_8_p_1(
  MR_Word TypeInfo_for_T1_20,
  MR_Word TypeInfo_for_T2_21,
  MR_Word TypeInfo_for_T3_22,
  MR_Word TypeInfo_for_T4_23,
  MR_Word P_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_Word Var_24 = (MR_Word) (S_10);

  mercury__list__foldl3_8_p_1(TypeInfo_for_T1_20, TypeInfo_for_T2_21, TypeInfo_for_T3_22, TypeInfo_for_T4_23, P_9, Var_24, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__set_ordlist__fold3_8_p_0(
  MR_Word TypeInfo_for_T1_20,
  MR_Word TypeInfo_for_T2_21,
  MR_Word TypeInfo_for_T3_22,
  MR_Word TypeInfo_for_T4_23,
  MR_Word P_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_Word Var_24 = (MR_Word) (S_10);

  mercury__list__foldl3_8_p_0(TypeInfo_for_T1_20, TypeInfo_for_T2_21, TypeInfo_for_T3_22, TypeInfo_for_T4_23, P_9, Var_24, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl2_6_p_5(
  MR_Word TypeInfo_for_T1_16,
  MR_Word TypeInfo_for_T2_17,
  MR_Word TypeInfo_for_T3_18,
  MR_Word P_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_bool succeeded;
  MR_Word Var_15 = (MR_Word) (S_8);

  succeeded = mercury__list__foldl2_6_p_6(TypeInfo_for_T1_16, TypeInfo_for_T2_17, TypeInfo_for_T3_18, P_7, Var_15, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl2_6_p_4(
  MR_Word TypeInfo_for_T1_16,
  MR_Word TypeInfo_for_T2_17,
  MR_Word TypeInfo_for_T3_18,
  MR_Word P_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_bool succeeded;
  MR_Word Var_15 = (MR_Word) (S_8);

  succeeded = mercury__list__foldl2_6_p_5(TypeInfo_for_T1_16, TypeInfo_for_T2_17, TypeInfo_for_T3_18, P_7, Var_15, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl2_6_p_3(
  MR_Word TypeInfo_for_T1_16,
  MR_Word TypeInfo_for_T2_17,
  MR_Word TypeInfo_for_T3_18,
  MR_Word P_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_bool succeeded;
  MR_Word Var_15 = (MR_Word) (S_8);

  succeeded = mercury__list__foldl2_6_p_4(TypeInfo_for_T1_16, TypeInfo_for_T2_17, TypeInfo_for_T3_18, P_7, Var_15, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  return succeeded;
}

void MR_CALL 
mercury__set_ordlist__foldl2_6_p_2(
  MR_Word TypeInfo_for_T1_16,
  MR_Word TypeInfo_for_T2_17,
  MR_Word TypeInfo_for_T3_18,
  MR_Word P_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_Word Var_15 = (MR_Word) (S_8);

  mercury__list__foldl2_6_p_2(TypeInfo_for_T1_16, TypeInfo_for_T2_17, TypeInfo_for_T3_18, P_7, Var_15, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__set_ordlist__foldl2_6_p_1(
  MR_Word TypeInfo_for_T1_16,
  MR_Word TypeInfo_for_T2_17,
  MR_Word TypeInfo_for_T3_18,
  MR_Word P_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_Word Var_15 = (MR_Word) (S_8);

  mercury__list__foldl2_6_p_1(TypeInfo_for_T1_16, TypeInfo_for_T2_17, TypeInfo_for_T3_18, P_7, Var_15, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__set_ordlist__foldl2_6_p_0(
  MR_Word TypeInfo_for_T1_16,
  MR_Word TypeInfo_for_T2_17,
  MR_Word TypeInfo_for_T3_18,
  MR_Word P_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_Word Var_15 = (MR_Word) (S_8);

  mercury__list__foldl2_6_p_0(TypeInfo_for_T1_16, TypeInfo_for_T2_17, TypeInfo_for_T3_18, P_7, Var_15, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

MR_bool MR_CALL 
mercury__set_ordlist__fold2_6_p_5(
  MR_Word TypeInfo_for_T1_15,
  MR_Word TypeInfo_for_T2_16,
  MR_Word TypeInfo_for_T3_17,
  MR_Word P_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_bool succeeded;
  MR_Word Var_18 = (MR_Word) (S_8);

  succeeded = mercury__list__foldl2_6_p_6(TypeInfo_for_T1_15, TypeInfo_for_T2_16, TypeInfo_for_T3_17, P_7, Var_18, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__fold2_6_p_4(
  MR_Word TypeInfo_for_T1_15,
  MR_Word TypeInfo_for_T2_16,
  MR_Word TypeInfo_for_T3_17,
  MR_Word P_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_bool succeeded;
  MR_Word Var_18 = (MR_Word) (S_8);

  succeeded = mercury__list__foldl2_6_p_5(TypeInfo_for_T1_15, TypeInfo_for_T2_16, TypeInfo_for_T3_17, P_7, Var_18, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__fold2_6_p_3(
  MR_Word TypeInfo_for_T1_15,
  MR_Word TypeInfo_for_T2_16,
  MR_Word TypeInfo_for_T3_17,
  MR_Word P_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_bool succeeded;
  MR_Word Var_18 = (MR_Word) (S_8);

  succeeded = mercury__list__foldl2_6_p_4(TypeInfo_for_T1_15, TypeInfo_for_T2_16, TypeInfo_for_T3_17, P_7, Var_18, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  return succeeded;
}

void MR_CALL 
mercury__set_ordlist__fold2_6_p_2(
  MR_Word TypeInfo_for_T1_15,
  MR_Word TypeInfo_for_T2_16,
  MR_Word TypeInfo_for_T3_17,
  MR_Word P_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_Word Var_18 = (MR_Word) (S_8);

  mercury__list__foldl2_6_p_2(TypeInfo_for_T1_15, TypeInfo_for_T2_16, TypeInfo_for_T3_17, P_7, Var_18, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__set_ordlist__fold2_6_p_1(
  MR_Word TypeInfo_for_T1_15,
  MR_Word TypeInfo_for_T2_16,
  MR_Word TypeInfo_for_T3_17,
  MR_Word P_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_Word Var_18 = (MR_Word) (S_8);

  mercury__list__foldl2_6_p_1(TypeInfo_for_T1_15, TypeInfo_for_T2_16, TypeInfo_for_T3_17, P_7, Var_18, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__set_ordlist__fold2_6_p_0(
  MR_Word TypeInfo_for_T1_15,
  MR_Word TypeInfo_for_T2_16,
  MR_Word TypeInfo_for_T3_17,
  MR_Word P_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_Word Var_18 = (MR_Word) (S_8);

  mercury__list__foldl2_6_p_0(TypeInfo_for_T1_15, TypeInfo_for_T2_16, TypeInfo_for_T3_17, P_7, Var_18, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl_4_p_5(
  MR_Word TypeInfo_for_T1_11,
  MR_Word TypeInfo_for_T2_12,
  MR_Word P_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_bool succeeded;
  MR_Word Var_10 = (MR_Word) (S_6);

  succeeded = mercury__list__foldl_4_p_5(TypeInfo_for_T1_11, TypeInfo_for_T2_12, P_5, Var_10, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl_4_p_4(
  MR_Word TypeInfo_for_T1_11,
  MR_Word TypeInfo_for_T2_12,
  MR_Word P_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_bool succeeded;
  MR_Word Var_10 = (MR_Word) (S_6);

  succeeded = mercury__list__foldl_4_p_4(TypeInfo_for_T1_11, TypeInfo_for_T2_12, P_5, Var_10, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl_4_p_3(
  MR_Word TypeInfo_for_T1_11,
  MR_Word TypeInfo_for_T2_12,
  MR_Word P_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_bool succeeded;
  MR_Word Var_10 = (MR_Word) (S_6);

  succeeded = mercury__list__foldl_4_p_3(TypeInfo_for_T1_11, TypeInfo_for_T2_12, P_5, Var_10, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  return succeeded;
}

void MR_CALL 
mercury__set_ordlist__foldl_4_p_2(
  MR_Word TypeInfo_for_T1_11,
  MR_Word TypeInfo_for_T2_12,
  MR_Word P_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_Word Var_10 = (MR_Word) (S_6);

  mercury__list__foldl_4_p_2(TypeInfo_for_T1_11, TypeInfo_for_T2_12, P_5, Var_10, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__set_ordlist__foldl_4_p_1(
  MR_Word TypeInfo_for_T1_11,
  MR_Word TypeInfo_for_T2_12,
  MR_Word P_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_Word Var_10 = (MR_Word) (S_6);

  mercury__list__foldl_4_p_1(TypeInfo_for_T1_11, TypeInfo_for_T2_12, P_5, Var_10, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__set_ordlist__foldl_4_p_0(
  MR_Word TypeInfo_for_T1_11,
  MR_Word TypeInfo_for_T2_12,
  MR_Word P_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_Word Var_10 = (MR_Word) (S_6);

  mercury__list__foldl_4_p_0(TypeInfo_for_T1_11, TypeInfo_for_T2_12, P_5, Var_10, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

MR_Box MR_CALL 
mercury__set_ordlist__foldl_3_f_0(
  MR_Word TypeInfo_for_T1_10,
  MR_Word TypeInfo_for_T2_11,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box A_7)
{
  MR_Box B_8;
  MR_Word Var_9 = (MR_Word) (S_6);

  B_8 = mercury__list__foldl_3_f_0(TypeInfo_for_T1_10, TypeInfo_for_T2_11, F_5, Var_9, A_7);
  return B_8;
}

MR_bool MR_CALL 
mercury__set_ordlist__fold_4_p_5(
  MR_Word TypeInfo_for_T1_10,
  MR_Word TypeInfo_for_T2_11,
  MR_Word P_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_bool succeeded;
  MR_Word Var_12 = (MR_Word) (S_6);

  succeeded = mercury__list__foldl_4_p_5(TypeInfo_for_T1_10, TypeInfo_for_T2_11, P_5, Var_12, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__fold_4_p_4(
  MR_Word TypeInfo_for_T1_10,
  MR_Word TypeInfo_for_T2_11,
  MR_Word P_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_bool succeeded;
  MR_Word Var_12 = (MR_Word) (S_6);

  succeeded = mercury__list__foldl_4_p_4(TypeInfo_for_T1_10, TypeInfo_for_T2_11, P_5, Var_12, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__fold_4_p_3(
  MR_Word TypeInfo_for_T1_10,
  MR_Word TypeInfo_for_T2_11,
  MR_Word P_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_bool succeeded;
  MR_Word Var_12 = (MR_Word) (S_6);

  succeeded = mercury__list__foldl_4_p_3(TypeInfo_for_T1_10, TypeInfo_for_T2_11, P_5, Var_12, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  return succeeded;
}

void MR_CALL 
mercury__set_ordlist__fold_4_p_2(
  MR_Word TypeInfo_for_T1_10,
  MR_Word TypeInfo_for_T2_11,
  MR_Word P_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_Word Var_12 = (MR_Word) (S_6);

  mercury__list__foldl_4_p_2(TypeInfo_for_T1_10, TypeInfo_for_T2_11, P_5, Var_12, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__set_ordlist__fold_4_p_1(
  MR_Word TypeInfo_for_T1_10,
  MR_Word TypeInfo_for_T2_11,
  MR_Word P_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_Word Var_12 = (MR_Word) (S_6);

  mercury__list__foldl_4_p_1(TypeInfo_for_T1_10, TypeInfo_for_T2_11, P_5, Var_12, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__set_ordlist__fold_4_p_0(
  MR_Word TypeInfo_for_T1_10,
  MR_Word TypeInfo_for_T2_11,
  MR_Word P_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_Word Var_12 = (MR_Word) (S_6);

  mercury__list__foldl_4_p_0(TypeInfo_for_T1_10, TypeInfo_for_T2_11, P_5, Var_12, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

MR_Box MR_CALL 
mercury__set_ordlist__fold_3_f_0(
  MR_Word TypeInfo_for_T1_8,
  MR_Word TypeInfo_for_T2_9,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box A_7)
{
  MR_Box HeadVar__4_4;
  MR_Word Var_10 = (MR_Word) (S_6);

  HeadVar__4_4 = mercury__list__foldl_3_f_0(TypeInfo_for_T1_8, TypeInfo_for_T2_9, F_5, Var_10, A_7);
  return HeadVar__4_4;
}

MR_Word MR_CALL 
mercury__set_ordlist__map_2_f_0(
  MR_Word TypeInfo_for_T1_9,
  MR_Word TypeInfo_for_T2_10,
  MR_Word F_4,
  MR_Word Set_5)
{
  MR_Word TransformedSet_6;
  MR_Word List_7 = (MR_Word) (Set_5);
  MR_Word TransformedList_8;
  MR_Word SortedList_11;
  MR_Integer Var_12;

  TransformedList_8 = mercury__list__map_2_f_0(TypeInfo_for_T1_9, TypeInfo_for_T2_10, F_4, List_7);
  mercury__list__length_acc_3_p_0(TypeInfo_for_T2_10, TransformedList_8, (MR_Integer) 0, &Var_12);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_10, Var_12, TransformedList_8, &SortedList_11);
  TransformedSet_6 = (MR_Word) (SortedList_11);
  return TransformedSet_6;
}

void MR_CALL 
mercury__set_ordlist__filter_map_3_p_0(
  MR_Word TypeInfo_for_T1_9,
  MR_Word TypeInfo_for_T2_10,
  MR_Word PF_4,
  MR_Word Set_5,
  MR_Word * TransformedTrueSet_6)
{
  MR_Word List_7 = (MR_Word) (Set_5);
  MR_Word TransformedTrueList_8;
  MR_Word SortedList_11;
  MR_Integer Var_12;

  mercury__list__filter_map_3_p_0(TypeInfo_for_T1_9, TypeInfo_for_T2_10, PF_4, List_7, &TransformedTrueList_8);
  mercury__list__length_acc_3_p_0(TypeInfo_for_T2_10, TransformedTrueList_8, (MR_Integer) 0, &Var_12);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_10, Var_12, TransformedTrueList_8, &SortedList_11);
  *TransformedTrueSet_6 = (MR_Word) (SortedList_11);
}

MR_Word MR_CALL 
mercury__set_ordlist__filter_map_2_f_0(
  MR_Word TypeInfo_for_T1_9,
  MR_Word TypeInfo_for_T2_10,
  MR_Word PF_4,
  MR_Word Set_5)
{
  MR_Word TransformedTrueSet_6;
  MR_Word List_7 = (MR_Word) (Set_5);
  MR_Word TransformedTrueList_8;
  MR_Word SortedList_12;
  MR_Integer Var_13;

  mercury__set_ordlist__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(PF_4, List_7, &TransformedTrueList_8);
  mercury__list__length_acc_3_p_0(TypeInfo_for_T2_10, TransformedTrueList_8, (MR_Integer) 0, &Var_13);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_10, Var_13, TransformedTrueList_8, &SortedList_12);
  TransformedTrueSet_6 = (MR_Word) (SortedList_12);
  return TransformedTrueSet_6;
}

static void MR_CALL 
mercury__set_ordlist__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Var_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_9;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Var_15, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (Var_15)), Var_6, &Var_9);
      if (succeeded)
      {
        MR_Word * AddrSCCcallarg_10_16;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = Var_9;
          MR_hl_field(1, base, 1) = NULL;
        }
        AddrSCCcallarg_10_16 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, (MR_Integer) 1)));
        mercury__set_ordlist__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_95_95_49_3_p_0(Var_15, Var_7, AddrSCCcallarg_10_16);
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Var_7;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__set_ordlist__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_95_95_49_3_p_0(
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_17 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Var_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_9;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Var_15, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (Var_15)), Var_6, &Var_9);
      if (succeeded)
      {
        MR_Word * AddrSCCcallarg_10_16;
        MR_Word HeadVar__3_18;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word * next_value_of_AddrOfHeadVar__3_17;

        {
          HeadVar__3_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__3_18, 0) = Var_9;
          MR_hl_field(1, HeadVar__3_18, 1) = NULL;
        }
        AddrSCCcallarg_10_16 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_18, (MR_Integer) 1)));
        *AddrOfHeadVar__3_17 = HeadVar__3_18;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_7;
        next_value_of_AddrOfHeadVar__3_17 = AddrSCCcallarg_10_16;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        AddrOfHeadVar__3_17 = next_value_of_AddrOfHeadVar__3_17;
        continue;
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Var_7;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__set_ordlist__filter_4_p_0(
  MR_Word TypeInfo_for_T1_12,
  MR_Word P_5,
  MR_Word Set_6,
  MR_Word * TrueSet_7,
  MR_Word * FalseSet_8)
{
  MR_Word List_9 = (MR_Word) (Set_6);
  MR_Word TrueList_10;
  MR_Word FalseList_11;
  MR_Word SortedList_13;
  MR_Word SortedList_17;

  mercury__list__filter_4_p_0(TypeInfo_for_T1_12, P_5, List_9, &TrueList_10, &FalseList_11);
  if ((TrueList_10 == (MR_Word) ((MR_Unsigned) 0U)))
    SortedList_13 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_14 = (MR_hl_field(1, TrueList_10, (MR_Integer) 0));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(1, TrueList_10, (MR_Integer) 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T1_12, Var_14, Var_15, &SortedList_13);
  }
  *TrueSet_7 = (MR_Word) (SortedList_13);
  if ((FalseList_11 == (MR_Word) ((MR_Unsigned) 0U)))
    SortedList_17 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_18 = (MR_hl_field(1, FalseList_11, (MR_Integer) 0));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(1, FalseList_11, (MR_Integer) 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T1_12, Var_18, Var_19, &SortedList_17);
  }
  *FalseSet_8 = (MR_Word) (SortedList_17);
}

void MR_CALL 
mercury__set_ordlist__filter_3_p_0(
  MR_Word TypeInfo_for_T1_7,
  MR_Word P_4,
  MR_Word Set_5,
  MR_Word * TrueSet_6)
{
  MR_Word List_8 = (MR_Word) (Set_5);
  MR_Word TrueList_9;
  MR_Word SortedList_10;

  mercury__list__filter_3_p_0(TypeInfo_for_T1_7, P_4, List_8, &TrueList_9);
  if ((TrueList_9 == (MR_Word) ((MR_Unsigned) 0U)))
    SortedList_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_11 = (MR_hl_field(1, TrueList_9, (MR_Integer) 0));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, TrueList_9, (MR_Integer) 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T1_7, Var_11, Var_12, &SortedList_10);
  }
  *TrueSet_6 = (MR_Word) (SortedList_10);
}

MR_Word MR_CALL 
mercury__set_ordlist__filter_2_f_0(
  MR_Word TypeInfo_for_T1_9,
  MR_Word P_4,
  MR_Word Set_5)
{
  MR_Word TrueSet_6;
  MR_Word List_7 = (MR_Word) (Set_5);
  MR_Word TrueList_8;
  MR_Word SortedList_10;

  mercury__list__filter_3_p_0(TypeInfo_for_T1_9, P_4, List_7, &TrueList_8);
  if ((TrueList_8 == (MR_Word) ((MR_Unsigned) 0U)))
    SortedList_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_11 = (MR_hl_field(1, TrueList_8, (MR_Integer) 0));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, TrueList_8, (MR_Integer) 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T1_9, Var_11, Var_12, &SortedList_10);
  }
  TrueSet_6 = (MR_Word) (SortedList_10);
  return TrueSet_6;
}

MR_bool MR_CALL 
mercury__set_ordlist__all_true_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word P_3,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word L_4 = (MR_Word) (HeadVar__2_2);

  succeeded = mercury__list__all_true_2_p_0(TypeInfo_for_T_5, P_3, L_4);
  return succeeded;
}

void MR_CALL 
mercury__set_ordlist__count_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Integer * Count_4)
{
  MR_Word Set_3 = (MR_Word) (HeadVar__1_1);

  mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, Set_3, (MR_Integer) 0, Count_4);
}

MR_Integer MR_CALL 
mercury__set_ordlist__count_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word S_3)
{
  MR_Integer N_4;
  MR_Word Set_6 = (MR_Word) (S_3);

  mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, Set_6, (MR_Integer) 0, &N_4);
  return N_4;
}

void MR_CALL 
mercury__set_ordlist__to_sorted_list_2_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1,
  MR_Word * List_3)
{
  *List_3 = (MR_Word) (HeadVar__1_1);
}

MR_Word MR_CALL 
mercury__set_ordlist__to_sorted_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word S_3)
{
  MR_Word Xs_4 = (MR_Word) (S_3);

  return Xs_4;
}

void MR_CALL 
mercury__set_ordlist__rev_sorted_list_to_set_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word RevSortedList_3,
  MR_Word * HeadVar__2_2)
{
  MR_Word SortedList_4;

  mercury__list__reverse_2_p_0(TypeInfo_for_T_5, RevSortedList_3, &SortedList_4);
  *HeadVar__2_2 = (MR_Word) (SortedList_4);
}

MR_Word MR_CALL 
mercury__set_ordlist__rev_sorted_list_to_set_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word RevSortedList_3)
{
  MR_Word Set_4;
  MR_Word SortedList_6;

  mercury__list__reverse_2_p_0(TypeInfo_for_T_5, RevSortedList_3, &SortedList_6);
  Set_4 = (MR_Word) (SortedList_6);
  return Set_4;
}

MR_Word MR_CALL 
mercury__set_ordlist__from_sorted_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3)
{
  MR_Word Set_4;
  MR_Word SortedList_6;

  if ((List_3 == (MR_Word) ((MR_Unsigned) 0U)))
    SortedList_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_7 = (MR_hl_field(1, List_3, (MR_Integer) 0));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(1, List_3, (MR_Integer) 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T_5, Var_7, Var_8, &SortedList_6);
  }
  Set_4 = (MR_Word) (SortedList_6);
  return Set_4;
}

void MR_CALL 
mercury__set_ordlist__sorted_list_to_set_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word SortedList0_3,
  MR_Word * HeadVar__2_2)
{
  MR_Word SortedList_4;

  if ((SortedList0_3 == (MR_Word) ((MR_Unsigned) 0U)))
    SortedList_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_6 = (MR_hl_field(1, SortedList0_3, (MR_Integer) 0));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, SortedList0_3, (MR_Integer) 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T_5, Var_6, Var_7, &SortedList_4);
  }
  *HeadVar__2_2 = (MR_Word) (SortedList_4);
}

MR_Word MR_CALL 
mercury__set_ordlist__sorted_list_to_set_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3)
{
  MR_Word Set_4;
  MR_Word SortedList_6;

  if ((List_3 == (MR_Word) ((MR_Unsigned) 0U)))
    SortedList_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_7 = (MR_hl_field(1, List_3, (MR_Integer) 0));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(1, List_3, (MR_Integer) 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T_5, Var_7, Var_8, &SortedList_6);
  }
  Set_4 = (MR_Word) (SortedList_6);
  return Set_4;
}

MR_Word MR_CALL 
mercury__set_ordlist__from_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3)
{
  MR_Word Set_4;
  MR_Word SortedList_6;
  MR_Integer Var_7;

  mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, List_3, (MR_Integer) 0, &Var_7);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_5, Var_7, List_3, &SortedList_6);
  Set_4 = (MR_Word) (SortedList_6);
  return Set_4;
}

void MR_CALL 
mercury__set_ordlist__list_to_set_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3,
  MR_Word * HeadVar__2_2)
{
  MR_Word SortedList_4;
  MR_Integer Var_6;

  mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, List_3, (MR_Integer) 0, &Var_6);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_5, Var_6, List_3, &SortedList_4);
  *HeadVar__2_2 = (MR_Word) (SortedList_4);
}

MR_Word MR_CALL 
mercury__set_ordlist__list_to_set_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3)
{
  MR_Word Set_4;
  MR_Word SortedList_6;
  MR_Integer Var_7;

  mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, List_3, (MR_Integer) 0, &Var_7);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_5, Var_7, List_3, &SortedList_6);
  Set_4 = (MR_Word) (SortedList_6);
  return Set_4;
}

void MR_CALL 
mercury__set_ordlist__divide_by_set_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_Word DivideBySet_5 = (MR_Word) (HeadVar__1_1);
  MR_Word Set_6 = (MR_Word) (HeadVar__2_2);
  MR_Word TruePart_7;
  MR_Word FalsePart_8;
  MR_Word RevTruePart_9;
  MR_Word RevFalsePart_10;

  mercury__set_ordlist__divide_by_set_loop_6_p_0(TypeInfo_for_T_13, DivideBySet_5, Set_6, (MR_Word) ((MR_Unsigned) 0U), &RevTruePart_9, (MR_Word) ((MR_Unsigned) 0U), &RevFalsePart_10);
  mercury__list__reverse_2_p_0(TypeInfo_for_T_13, RevTruePart_9, &TruePart_7);
  *HeadVar__3_3 = (MR_Word) (TruePart_7);
  mercury__list__reverse_2_p_0(TypeInfo_for_T_13, RevFalsePart_10, &FalsePart_8);
  *HeadVar__4_4 = (MR_Word) (FalsePart_8);
}

static void MR_CALL 
mercury__set_ordlist__divide_by_set_loop_6_p_0(
  MR_Word TypeInfo_for_T1_51,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevTrue_0_3,
  MR_Word * STATE_VARIABLE_RevTrue_4,
  MR_Word STATE_VARIABLE_RevFalse_0_5,
  MR_Word * STATE_VARIABLE_RevFalse_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_RevFalse_6 = STATE_VARIABLE_RevFalse_0_5;
        *STATE_VARIABLE_RevTrue_4 = STATE_VARIABLE_RevTrue_0_3;
      }
      else
      {
        MR_Word Var_21;

        mercury__list__reverse_2_p_0(TypeInfo_for_T1_51, HeadVar__2_2, &Var_21);
        mercury__list__append_3_p_1(TypeInfo_for_T1_51, Var_21, STATE_VARIABLE_RevFalse_0_5, STATE_VARIABLE_RevFalse_6);
        *STATE_VARIABLE_RevTrue_4 = STATE_VARIABLE_RevTrue_0_3;
      }
    else
    {
      MR_Word Var_52 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Box Var_53 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_RevFalse_6 = STATE_VARIABLE_RevFalse_0_5;
        *STATE_VARIABLE_RevTrue_4 = STATE_VARIABLE_RevTrue_0_3;
      }
      else
      {
        MR_Box H_34 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
        MR_Word T_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        MR_Word R_38;

        mercury__builtin__compare_3_p_0(TypeInfo_for_T1_51, &R_38, Var_53, H_34);
        switch (R_38) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_HeadVar__1_1 = Var_52;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word STATE_VARIABLE_RevTrue_43_43;
              MR_Word next_value_of_HeadVar__1_1;
              MR_Word next_value_of_HeadVar__2_2;
              MR_Word next_value_of_STATE_VARIABLE_RevTrue_0_3;

              {
                STATE_VARIABLE_RevTrue_43_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevTrue_43_43, 0) = H_34;
                MR_hl_field(1, STATE_VARIABLE_RevTrue_43_43, 1) = ((MR_Box) (STATE_VARIABLE_RevTrue_0_3));
              }
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = Var_52;
              next_value_of_HeadVar__2_2 = T_35;
              next_value_of_STATE_VARIABLE_RevTrue_0_3 = STATE_VARIABLE_RevTrue_43_43;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_RevTrue_0_3 = next_value_of_STATE_VARIABLE_RevTrue_0_3;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_RevFalse_49_49;
              MR_Word next_value_of_HeadVar__2_2;
              MR_Word next_value_of_STATE_VARIABLE_RevFalse_0_5;

              {
                STATE_VARIABLE_RevFalse_49_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevFalse_49_49, 0) = H_34;
                MR_hl_field(1, STATE_VARIABLE_RevFalse_49_49, 1) = ((MR_Box) (STATE_VARIABLE_RevFalse_0_5));
              }
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = T_35;
              next_value_of_STATE_VARIABLE_RevFalse_0_5 = STATE_VARIABLE_RevFalse_49_49;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_RevFalse_0_5 = next_value_of_STATE_VARIABLE_RevFalse_0_5;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__set_ordlist__divide_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_Word Set_6 = (MR_Word) (HeadVar__2_2);
  MR_Word TruePart_7;
  MR_Word FalsePart_8;
  MR_Word RevTruePart_9;
  MR_Word RevFalsePart_10;

  mercury__set_ordlist__divide_loop_6_p_0(TypeInfo_for_T_13, Pred_5, Set_6, (MR_Word) ((MR_Unsigned) 0U), &RevTruePart_9, (MR_Word) ((MR_Unsigned) 0U), &RevFalsePart_10);
  mercury__list__reverse_2_p_0(TypeInfo_for_T_13, RevTruePart_9, &TruePart_7);
  *HeadVar__3_3 = (MR_Word) (TruePart_7);
  mercury__list__reverse_2_p_0(TypeInfo_for_T_13, RevFalsePart_10, &FalsePart_8);
  *HeadVar__4_4 = (MR_Word) (FalsePart_8);
}

void MR_CALL 
mercury__set_ordlist__divide_loop_6_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * RevTrue_4,
  MR_Word HeadVar__5_5,
  MR_Word * RevFalse_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *RevTrue_4 = HeadVar__3_3;
      *RevFalse_6 = HeadVar__5_5;
    }
    else
    {
      MR_Box H_11 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      MR_Word T_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word RevTrue1_17;
      MR_Word RevFalse1_18;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__5_5;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), H_11);
      if (succeeded)
      {
        {
          RevTrue1_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RevTrue1_17, 0) = H_11;
          MR_hl_field(1, RevTrue1_17, 1) = ((MR_Box) (HeadVar__3_3));
        }
        RevFalse1_18 = HeadVar__5_5;
      }
      else
      {
        RevTrue1_17 = HeadVar__3_3;
        {
          RevFalse1_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RevFalse1_18, 0) = H_11;
          MR_hl_field(1, RevFalse1_18, 1) = ((MR_Box) (HeadVar__5_5));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = T_12;
      next_value_of_HeadVar__3_3 = RevTrue1_17;
      next_value_of_HeadVar__5_5 = RevFalse1_18;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__set_ordlist__intersection_and_differences_5_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word SetA_6,
  MR_Word SetB_7,
  MR_Word * InAandB_8,
  MR_Word * OnlyInA_9,
  MR_Word * OnlyInB_10)
{
  MR_Word ListA_11 = (MR_Word) (SetA_6);
  MR_Word ListB_12 = (MR_Word) (SetB_7);
  MR_Word CordInAandB_13;
  MR_Word CordOnlyInA_14;
  MR_Word CordOnlyInB_15;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;

  mercury__set_ordlist__intersection_and_differences_loop_8_p_0(TypeInfo_for_T_22, ListA_11, ListB_12, (MR_Word) ((MR_Unsigned) 0U), &CordInAandB_13, (MR_Word) ((MR_Unsigned) 0U), &CordOnlyInA_14, (MR_Word) ((MR_Unsigned) 0U), &CordOnlyInB_15);
  Var_19 = mercury__cord__to_list_1_f_0(TypeInfo_for_T_22, CordInAandB_13);
  *InAandB_8 = (MR_Word) (Var_19);
  Var_20 = mercury__cord__to_list_1_f_0(TypeInfo_for_T_22, CordOnlyInA_14);
  *OnlyInA_9 = (MR_Word) (Var_20);
  Var_21 = mercury__cord__to_list_1_f_0(TypeInfo_for_T_22, CordOnlyInB_15);
  *OnlyInB_10 = (MR_Word) (Var_21);
}

static void MR_CALL 
mercury__set_ordlist__intersection_and_differences_loop_8_p_0(
  MR_Word TypeInfo_for_T_42,
  MR_Word As_9,
  MR_Word Bs_10,
  MR_Word STATE_VARIABLE_InAandB_0_23,
  MR_Word * STATE_VARIABLE_InAandB_24,
  MR_Word STATE_VARIABLE_OnlyInA_0_25,
  MR_Word * STATE_VARIABLE_OnlyInA_26,
  MR_Word STATE_VARIABLE_OnlyInB_0_27,
  MR_Word * STATE_VARIABLE_OnlyInB_28)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((As_9 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((Bs_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_InAandB_24 = STATE_VARIABLE_InAandB_0_23;
        *STATE_VARIABLE_OnlyInA_26 = STATE_VARIABLE_OnlyInA_0_25;
        *STATE_VARIABLE_OnlyInB_28 = STATE_VARIABLE_OnlyInB_0_27;
      }
      else
      {
        MR_Word Var_30;

        Var_30 = mercury__cord__from_list_1_f_0(TypeInfo_for_T_42, Bs_10);
        *STATE_VARIABLE_OnlyInB_28 = mercury__cord__f_43_43_2_f_0(TypeInfo_for_T_42, STATE_VARIABLE_OnlyInB_0_27, Var_30);
        *STATE_VARIABLE_InAandB_24 = STATE_VARIABLE_InAandB_0_23;
        *STATE_VARIABLE_OnlyInA_26 = STATE_VARIABLE_OnlyInA_0_25;
      }
    else
    {
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(1, As_9, (MR_Integer) 1))));
      MR_Box Var_44 = (MR_hl_field(1, As_9, (MR_Integer) 0));

      if ((Bs_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_32;

        Var_32 = mercury__cord__from_list_1_f_0(TypeInfo_for_T_42, As_9);
        *STATE_VARIABLE_OnlyInA_26 = mercury__cord__f_43_43_2_f_0(TypeInfo_for_T_42, STATE_VARIABLE_OnlyInA_0_25, Var_32);
        *STATE_VARIABLE_InAandB_24 = STATE_VARIABLE_InAandB_0_23;
        *STATE_VARIABLE_OnlyInB_28 = STATE_VARIABLE_OnlyInB_0_27;
      }
      else
      {
        MR_Box HeadB_20 = (MR_hl_field(1, Bs_10, (MR_Integer) 0));
        MR_Word TailBs_21 = ((MR_Word) ((MR_hl_field(1, Bs_10, (MR_Integer) 1))));
        MR_Word Cmp_22;

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_42, &Cmp_22, Var_44, HeadB_20);
        switch (Cmp_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_OnlyInA_37_37;
              MR_Word next_value_of_As_9;
              MR_Word next_value_of_STATE_VARIABLE_OnlyInA_0_25;

              STATE_VARIABLE_OnlyInA_37_37 = mercury__cord__snoc_2_f_0(TypeInfo_for_T_42, STATE_VARIABLE_OnlyInA_0_25, Var_44);
              // direct tailcall eliminated
              ;
              next_value_of_As_9 = Var_43;
              next_value_of_STATE_VARIABLE_OnlyInA_0_25 = STATE_VARIABLE_OnlyInA_37_37;
              As_9 = next_value_of_As_9;
              STATE_VARIABLE_OnlyInA_0_25 = next_value_of_STATE_VARIABLE_OnlyInA_0_25;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word STATE_VARIABLE_InAandB_33_33;
              MR_Word next_value_of_As_9;
              MR_Word next_value_of_Bs_10;
              MR_Word next_value_of_STATE_VARIABLE_InAandB_0_23;

              STATE_VARIABLE_InAandB_33_33 = mercury__cord__snoc_2_f_0(TypeInfo_for_T_42, STATE_VARIABLE_InAandB_0_23, Var_44);
              // direct tailcall eliminated
              ;
              next_value_of_As_9 = Var_43;
              next_value_of_Bs_10 = TailBs_21;
              next_value_of_STATE_VARIABLE_InAandB_0_23 = STATE_VARIABLE_InAandB_33_33;
              As_9 = next_value_of_As_9;
              Bs_10 = next_value_of_Bs_10;
              STATE_VARIABLE_InAandB_0_23 = next_value_of_STATE_VARIABLE_InAandB_0_23;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_OnlyInB_41_41;
              MR_Word next_value_of_Bs_10;
              MR_Word next_value_of_STATE_VARIABLE_OnlyInB_0_27;

              STATE_VARIABLE_OnlyInB_41_41 = mercury__cord__snoc_2_f_0(TypeInfo_for_T_42, STATE_VARIABLE_OnlyInB_0_27, HeadB_20);
              // direct tailcall eliminated
              ;
              next_value_of_Bs_10 = TailBs_21;
              next_value_of_STATE_VARIABLE_OnlyInB_0_27 = STATE_VARIABLE_OnlyInB_41_41;
              Bs_10 = next_value_of_Bs_10;
              STATE_VARIABLE_OnlyInB_0_27 = next_value_of_STATE_VARIABLE_OnlyInB_0_27;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__set_ordlist__difference_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_Word Xs_4 = (MR_Word) (HeadVar__1_1);
  MR_Word Ys_5 = (MR_Word) (HeadVar__2_2);
  MR_Word Diff_6;

  mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_7, Xs_4, Ys_5, &Diff_6);
  *HeadVar__3_3 = (MR_Word) (Diff_6);
}

MR_Word MR_CALL 
mercury__set_ordlist__difference_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Xs_4,
  MR_Word Ys_5)
{
  MR_Word Diff_6;
  MR_Word Xs_8 = (MR_Word) (Xs_4);
  MR_Word Ys_9 = (MR_Word) (Ys_5);
  MR_Word Diff_10;

  mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_7, Xs_8, Ys_9, &Diff_10);
  Diff_6 = (MR_Word) (Diff_10);
  return Diff_6;
}

void MR_CALL 
mercury__set_ordlist__power_intersect_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word * S_4)
{
  MR_Word S0_3 = (MR_Word) (HeadVar__1_1);

  *S_4 = mercury__set_ordlist__intersect_list_1_f_0(TypeInfo_for_T_5, S0_3);
}

MR_Word MR_CALL 
mercury__set_ordlist__power_intersect_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word SS_3)
{
  MR_Word S_4;
  MR_Word S0_6 = (MR_Word) (SS_3);

  S_4 = mercury__set_ordlist__intersect_list_1_f_0(TypeInfo_for_T_5, S0_6);
  return S_4;
}

void MR_CALL 
mercury__set_ordlist__intersect_list_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word ListofSets_3,
  MR_Word * Set_4)
{
  *Set_4 = mercury__set_ordlist__intersect_list_1_f_0(TypeInfo_for_T_5, ListofSets_3);
}

MR_Word MR_CALL 
mercury__set_ordlist__intersect_list_1_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word S0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Ss_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

    if ((Ss_5 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = S0_4;
    else
    {
      MR_Word S1_9;
      MR_Word Xs_11;
      MR_Word Ys_12;
      MR_Word Intersection_13;

      S1_9 = mercury__set_ordlist__intersect_list_1_f_0(TypeInfo_for_T_10, Ss_5);
      Xs_11 = (MR_Word) (S1_9);
      Ys_12 = (MR_Word) (S0_4);
      mercury__set_ordlist__intersect_loop_3_p_0(TypeInfo_for_T_10, Xs_11, Ys_12, &Intersection_13);
      HeadVar__2_2 = (MR_Word) (Intersection_13);
    }
  }
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__set_ordlist__intersect_3_p_1(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word Xs_4 = (MR_Word) (HeadVar__1_1);
  MR_Word Ys_5 = (MR_Word) (HeadVar__2_2);
  MR_Word Intersection_6 = (MR_Word) (HeadVar__3_3);

  succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_for_T_7, Xs_4, Ys_5, Intersection_6);
  return succeeded;
}

void MR_CALL 
mercury__set_ordlist__intersect_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_Word Xs_4 = (MR_Word) (HeadVar__1_1);
  MR_Word Ys_5 = (MR_Word) (HeadVar__2_2);
  MR_Word Intersection_6;

  mercury__set_ordlist__intersect_loop_3_p_0(TypeInfo_for_T_7, Xs_4, Ys_5, &Intersection_6);
  *HeadVar__3_3 = (MR_Word) (Intersection_6);
}

MR_Word MR_CALL 
mercury__set_ordlist__intersect_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Xs_4,
  MR_Word Ys_5)
{
  MR_Word Intersection_6;
  MR_Word Xs_8 = (MR_Word) (Xs_4);
  MR_Word Ys_9 = (MR_Word) (Ys_5);
  MR_Word Intersection_10;

  mercury__set_ordlist__intersect_loop_3_p_0(TypeInfo_for_T_7, Xs_8, Ys_9, &Intersection_10);
  Intersection_6 = (MR_Word) (Intersection_10);
  return Intersection_6;
}

void MR_CALL 
mercury__set_ordlist__power_union_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word * Set_4)
{
  MR_Word ListofSets_3 = (MR_Word) (HeadVar__1_1);

  mercury__set_ordlist__union_list_loop_3_p_0(TypeInfo_for_T_5, ListofSets_3, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), Set_4);
}

MR_Word MR_CALL 
mercury__set_ordlist__power_union_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word SS_3)
{
  MR_Word S_4;
  MR_Word ListofSets_6 = (MR_Word) (SS_3);

  mercury__set_ordlist__union_list_loop_3_p_0(TypeInfo_for_T_5, ListofSets_6, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &S_4);
  return S_4;
}

void MR_CALL 
mercury__set_ordlist__union_list_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word ListofSets_3,
  MR_Word * Set_4)
{
  mercury__set_ordlist__union_list_loop_3_p_0(TypeInfo_for_T_5, ListofSets_3, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), Set_4);
}

MR_Word MR_CALL 
mercury__set_ordlist__union_list_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word ListofSets_3)
{
  MR_Word Set_4;

  mercury__set_ordlist__union_list_loop_3_p_0(TypeInfo_for_T_6, ListofSets_3, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Set_4);
  return Set_4;
}

void MR_CALL 
mercury__set_ordlist__union_list_loop_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UnionSet_0_2,
  MR_Word * STATE_VARIABLE_UnionSet_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_UnionSet_3 = STATE_VARIABLE_UnionSet_0_2;
    else
    {
      MR_Word Set_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Sets_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_UnionSet_12_12;
      MR_Word Set0_14 = (MR_Word) (Set_7);
      MR_Word Set1_15 = (MR_Word) (STATE_VARIABLE_UnionSet_0_2);
      MR_Word Set_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_UnionSet_0_2;

      mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_for_T_13, Set0_14, Set1_15, &Set_16);
      STATE_VARIABLE_UnionSet_12_12 = (MR_Word) (Set_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Sets_8;
      next_value_of_STATE_VARIABLE_UnionSet_0_2 = STATE_VARIABLE_UnionSet_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_UnionSet_0_2 = next_value_of_STATE_VARIABLE_UnionSet_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__set_ordlist__union_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_Word Set0_4 = (MR_Word) (HeadVar__1_1);
  MR_Word Set1_5 = (MR_Word) (HeadVar__2_2);
  MR_Word Set_6;

  mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_for_T_7, Set0_4, Set1_5, &Set_6);
  *HeadVar__3_3 = (MR_Word) (Set_6);
}

MR_Word MR_CALL 
mercury__set_ordlist__union_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word S2_5)
{
  MR_Word S3_6;
  MR_Word Set0_8 = (MR_Word) (S1_4);
  MR_Word Set1_9 = (MR_Word) (S2_5);
  MR_Word Set_10;

  mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_for_T_7, Set0_8, Set1_9, &Set_10);
  S3_6 = (MR_Word) (Set_10);
  return S3_6;
}

MR_bool MR_CALL 
mercury__set_ordlist__superset_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Superset_3,
  MR_Word Set_4)
{
  MR_bool succeeded;
  MR_Word Xs_7 = (MR_Word) (Superset_3);
  MR_Word Intersection_9 = (MR_Word) (Set_4);

  succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_for_T_5, Xs_7, Intersection_9, Intersection_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__subset_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word Subset_3,
  MR_Word Set_4)
{
  MR_bool succeeded;
  MR_Word Xs_7 = (MR_Word) (Set_4);
  MR_Word Intersection_9 = (MR_Word) (Subset_3);

  succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_for_T_6, Xs_7, Intersection_9, Intersection_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__equal_2_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word Set_3,
  MR_Word Set_2)
{
  MR_bool succeeded;

  succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(TypeInfo_for_T_4, Set_2, Set_3);
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist____Unify____set_ordlist_1_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_7, ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__remove_least_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Box * Elem_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word Set_5;
  MR_Word Var_6 = (MR_Word) (HeadVar__2_2);

  succeeded = (Var_6 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    *Elem_4 = (MR_hl_field(1, Var_6, (MR_Integer) 0));
    Set_5 = ((MR_Word) ((MR_hl_field(1, Var_6, (MR_Integer) 1))));
    *HeadVar__3_3 = (MR_Word) (Set_5);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__set_ordlist__det_remove_list_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word List_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Set_8_8;

  succeeded = mercury__set_ordlist__remove_list_3_p_0(TypeInfo_for_T_11, List_4, STATE_VARIABLE_Set_0_6, &STATE_VARIABLE_Set_8_8);
  if (succeeded)
    *STATE_VARIABLE_Set_7 = STATE_VARIABLE_Set_8_8;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140set_ordlist.det_remove_list\'/3", (MR_String) "remove_list failed");
      return;
    }
}

MR_bool MR_CALL 
mercury__set_ordlist__remove_list_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Elems_4,
  MR_Word STATE_VARIABLE_Set_0_7,
  MR_Word * STATE_VARIABLE_Set_8)
{
  MR_bool succeeded;
  MR_Word ElemSet_6;
  MR_Integer Var_13;
  MR_Word Xs_16;
  MR_Word Intersection_18;
  MR_Word Xs_19;
  MR_Word Ys_20;
  MR_Word Diff_21;

  mercury__list__length_acc_3_p_0(TypeInfo_for_T_9, Elems_4, (MR_Integer) 0, &Var_13);
  mercury__list__merge_sort_3_p_0(TypeInfo_for_T_9, Var_13, Elems_4, &Intersection_18);
  ElemSet_6 = (MR_Word) (Intersection_18);
  if ((Intersection_18 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  {
    MR_Box Elem_11 = (MR_hl_field(1, Intersection_18, (MR_Integer) 0));
    MR_Word Elems_12 = ((MR_Word) ((MR_hl_field(1, Intersection_18, (MR_Integer) 1))));

    succeeded = mercury__set_ordlist__no_dups_2_p_0(TypeInfo_for_T_9, Elem_11, Elems_12);
  }
  if (succeeded)
  {
    Xs_16 = (MR_Word) (STATE_VARIABLE_Set_0_7);
    succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_for_T_9, Xs_16, Intersection_18, Intersection_18);
    if (succeeded)
    {
      Xs_19 = (MR_Word) (STATE_VARIABLE_Set_0_7);
      Ys_20 = (MR_Word) (ElemSet_6);
      mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_9, Xs_19, Ys_20, &Diff_21);
      *STATE_VARIABLE_Set_8 = (MR_Word) (Diff_21);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__intersect_loop_3_p_1(
  MR_Word TypeInfo_for_T_16,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
    else
    {
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Box Var_20 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
      else
      {
        MR_Box Y_9 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
        MR_Word Ys_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        MR_Word R_12;

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_16, &R_12, Var_20, Y_9);
        switch (R_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_HeadVar__1_1 = Var_19;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Intersection0_13;
              MR_Box Var_17;
              MR_Word Var_18;

              mercury__set_ordlist__intersect_loop_3_p_0(TypeInfo_for_T_16, Var_19, Ys_10, &Intersection0_13);
              succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_17 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));
                Var_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_16, Var_20, Var_17);
                if (succeeded)
                  succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_16, Intersection0_13, Var_18);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_HeadVar__2_2 = Ys_10;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
            }
            break;
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__set_ordlist__intersect_loop_3_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Box Var_18 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Box Y_9 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
        MR_Word Ys_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        MR_Word R_12;

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_16, &R_12, Var_18, Y_9);
        switch (R_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_HeadVar__1_1 = Var_17;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word * AddrIntersection0_19;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(1, base, 0) = Var_18;
                MR_hl_field(1, base, 1) = NULL;
              }
              AddrIntersection0_19 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, (MR_Integer) 1)));
              mercury__set_ordlist__LCMC__pred__intersect_loop__1_3_p_0(TypeInfo_for_T_16, Var_17, Ys_10, AddrIntersection0_19);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_HeadVar__2_2 = Ys_10;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__set_ordlist__LCMC__pred__intersect_loop__1_3_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_20)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_20 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Box Var_18 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *AddrOfHeadVar__3_20 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Box Y_9 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
        MR_Word Ys_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        MR_Word R_12;

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_16, &R_12, Var_18, Y_9);
        switch (R_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_HeadVar__1_1 = Var_17;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word * AddrIntersection0_19;
              MR_Word HeadVar__3_22;
              MR_Word next_value_of_HeadVar__1_1;
              MR_Word next_value_of_HeadVar__2_2;
              MR_Word * next_value_of_AddrOfHeadVar__3_20;

              {
                HeadVar__3_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, HeadVar__3_22, 0) = Var_18;
                MR_hl_field(1, HeadVar__3_22, 1) = NULL;
              }
              AddrIntersection0_19 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_22, (MR_Integer) 1)));
              *AddrOfHeadVar__3_20 = HeadVar__3_22;
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = Var_17;
              next_value_of_HeadVar__2_2 = Ys_10;
              next_value_of_AddrOfHeadVar__3_20 = AddrIntersection0_19;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              AddrOfHeadVar__3_20 = next_value_of_AddrOfHeadVar__3_20;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_HeadVar__2_2 = Ys_10;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__no_dups_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Box Elem_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Box Elem0_5 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      MR_Word Elems_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Box next_value_of_Elem_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_7, Elem_1, Elem0_5);
      succeeded = !(succeeded);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_Elem_1 = Elem0_5;
        next_value_of_HeadVar__2_2 = Elems_6;
        Elem_1 = next_value_of_Elem_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__set_ordlist__det_remove_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Set_8_8;
  MR_Word Set0_12 = (MR_Word) (STATE_VARIABLE_Set_0_6);
  MR_Word Set_13;

  succeeded = mercury__list__delete_first_3_p_0(TypeInfo_for_T_11, Set0_12, X_4, &Set_13);
  if (succeeded)
  {
    STATE_VARIABLE_Set_8_8 = (MR_Word) (Set_13);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *STATE_VARIABLE_Set_7 = STATE_VARIABLE_Set_8_8;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140set_ordlist.det_remove\'/3", (MR_String) "remove failed");
      return;
    }
}

MR_bool MR_CALL 
mercury__set_ordlist__remove_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Box Elem_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word Set0_5 = (MR_Word) (HeadVar__2_2);
  MR_Word Set_6;

  succeeded = mercury__list__delete_first_3_p_0(TypeInfo_for_T_7, Set0_5, Elem_4, &Set_6);
  if (succeeded)
  {
    *HeadVar__3_3 = (MR_Word) (Set_6);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_Word MR_CALL 
mercury__set_ordlist__delete_list_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word STATE_VARIABLE_S_0_6,
  MR_Word Xs_5)
{
  MR_Word STATE_VARIABLE_S_7;

  mercury__set_ordlist__delete_list_3_p_0(TypeInfo_for_T_8, Xs_5, STATE_VARIABLE_S_0_6, &STATE_VARIABLE_S_7);
  return STATE_VARIABLE_S_7;
}

void MR_CALL 
mercury__set_ordlist__delete_list_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word D_4,
  MR_Word STATE_VARIABLE_Set_0_7,
  MR_Word * STATE_VARIABLE_Set_8)
{
  MR_Integer Var_11;
  MR_Word Xs_13;
  MR_Word Ys_14;
  MR_Word Diff_15;

  mercury__list__length_acc_3_p_0(TypeInfo_for_T_10, D_4, (MR_Integer) 0, &Var_11);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_10, Var_11, D_4, &Ys_14);
  Xs_13 = (MR_Word) (STATE_VARIABLE_Set_0_7);
  mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_10, Xs_13, Ys_14, &Diff_15);
  *STATE_VARIABLE_Set_8 = (MR_Word) (Diff_15);
}

void MR_CALL 
mercury__set_ordlist__delete_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Box Elem_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  MR_Word Xs_13;
  MR_Word Ys_14;
  MR_Word Diff_15;

  {
    Ys_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Ys_14, 0) = Elem_4;
    MR_hl_field(1, Ys_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Xs_13 = (MR_Word) (STATE_VARIABLE_Set_0_6);
  mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_12, Xs_13, Ys_14, &Diff_15);
  *STATE_VARIABLE_Set_7 = (MR_Word) (Diff_15);
}

MR_Word MR_CALL 
mercury__set_ordlist__delete_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word STATE_VARIABLE_S_0_6,
  MR_Box T_5)
{
  MR_Word STATE_VARIABLE_S_7;
  MR_Word Xs_12;
  MR_Word Ys_13;
  MR_Word Diff_14;

  {
    Ys_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Ys_13, 0) = T_5;
    MR_hl_field(1, Ys_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Xs_12 = (MR_Word) (STATE_VARIABLE_S_0_6);
  mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_8, Xs_12, Ys_13, &Diff_14);
  STATE_VARIABLE_S_7 = (MR_Word) (Diff_14);
  return STATE_VARIABLE_S_7;
}

void MR_CALL 
mercury__set_ordlist__difference_loop_3_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Box Var_18 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__3_3 = HeadVar__1_1;
      else
      {
        MR_Box Y_9 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
        MR_Word Ys_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        MR_Word R_12;

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_16, &R_12, Var_18, Y_9);
        switch (R_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word * AddrDiff0_19;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(1, base, 0) = Var_18;
                MR_hl_field(1, base, 1) = NULL;
              }
              AddrDiff0_19 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, (MR_Integer) 1)));
              mercury__set_ordlist__LCMC__pred__difference_loop__1_3_p_0(TypeInfo_for_T_16, Var_17, HeadVar__2_2, AddrDiff0_19);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word next_value_of_HeadVar__1_1 = Var_17;
              MR_Word next_value_of_HeadVar__2_2 = Ys_10;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_HeadVar__2_2 = Ys_10;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__set_ordlist__LCMC__pred__difference_loop__1_3_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_20)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_20 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Box Var_18 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *AddrOfHeadVar__3_20 = HeadVar__1_1;
      else
      {
        MR_Box Y_9 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
        MR_Word Ys_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        MR_Word R_12;

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_16, &R_12, Var_18, Y_9);
        switch (R_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word * AddrDiff0_19;
              MR_Word HeadVar__3_22;
              MR_Word next_value_of_HeadVar__1_1;
              MR_Word * next_value_of_AddrOfHeadVar__3_20;

              {
                HeadVar__3_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, HeadVar__3_22, 0) = Var_18;
                MR_hl_field(1, HeadVar__3_22, 1) = NULL;
              }
              AddrDiff0_19 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_22, (MR_Integer) 1)));
              *AddrOfHeadVar__3_20 = HeadVar__3_22;
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = Var_17;
              next_value_of_AddrOfHeadVar__3_20 = AddrDiff0_19;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              AddrOfHeadVar__3_20 = next_value_of_AddrOfHeadVar__3_20;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word next_value_of_HeadVar__1_1 = Var_17;
              MR_Word next_value_of_HeadVar__2_2 = Ys_10;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_HeadVar__2_2 = Ys_10;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__set_ordlist__insert_list_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word STATE_VARIABLE_S_0_6,
  MR_Word Xs_5)
{
  MR_Word STATE_VARIABLE_S_7;

  mercury__set_ordlist__insert_list_3_p_0(TypeInfo_for_T_8, Xs_5, STATE_VARIABLE_S_0_6, &STATE_VARIABLE_S_7);
  return STATE_VARIABLE_S_7;
}

void MR_CALL 
mercury__set_ordlist__insert_list_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word List0_4,
  MR_Word STATE_VARIABLE_Set_0_7,
  MR_Word * STATE_VARIABLE_Set_8)
{
  MR_Integer Var_11;
  MR_Word Set0_13;
  MR_Word Set1_14;
  MR_Word Set_15;

  mercury__list__length_acc_3_p_0(TypeInfo_for_T_10, List0_4, (MR_Integer) 0, &Var_11);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_10, Var_11, List0_4, &Set0_13);
  Set1_14 = (MR_Word) (STATE_VARIABLE_Set_0_7);
  mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_for_T_10, Set0_13, Set1_14, &Set_15);
  *STATE_VARIABLE_Set_8 = (MR_Word) (Set_15);
}

MR_bool MR_CALL 
mercury__set_ordlist__insert_new_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Box NewItem_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word List0_5 = (MR_Word) (HeadVar__2_2);
  MR_Word List_6;

  succeeded = mercury__set_ordlist__insert_new_loop_3_p_0(TypeInfo_for_T_7, List0_5, NewItem_4, &List_6);
  if (succeeded)
  {
    *HeadVar__3_3 = (MR_Word) (List_6);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__insert_new_loop_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Box NewItem_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = NewItem_2;
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Box Head_6 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
    MR_Word Tail_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word R_10;

    mercury__builtin__compare_3_p_0(TypeInfo_for_T_13, &R_10, Head_6, NewItem_2);
    switch (R_10) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          MR_Word * AddrUpdatedTail_14;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(1, base, 0) = Head_6;
            MR_hl_field(1, base, 1) = NULL;
          }
          AddrUpdatedTail_14 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, (MR_Integer) 1)));
          succeeded = mercury__set_ordlist__LCMC__pred__insert_new_loop__1_3_p_0(TypeInfo_for_T_13, Tail_7, NewItem_2, AddrUpdatedTail_14);
        }
        break;
      case (MR_Integer) 2:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(1, base, 0) = NewItem_2;
            MR_hl_field(1, base, 1) = ((MR_Box) (HeadVar__1_1));
          }
          succeeded = MR_TRUE;
        }
        break;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__LCMC__pred__insert_new_loop__1_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Box NewItem_2,
  MR_Word * AddrOfHeadVar__3_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word HeadVar__3_3;

      {
        HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_3, 0) = NewItem_2;
        MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *AddrOfHeadVar__3_15 = HeadVar__3_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Head_6 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
      MR_Word Tail_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word R_10;

      mercury__builtin__compare_3_p_0(TypeInfo_for_T_13, &R_10, Head_6, NewItem_2);
      switch (R_10) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            MR_Word * AddrUpdatedTail_14;
            MR_Word HeadVar__3_16;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word * next_value_of_AddrOfHeadVar__3_15;

            {
              HeadVar__3_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HeadVar__3_16, 0) = Head_6;
              MR_hl_field(1, HeadVar__3_16, 1) = NULL;
            }
            AddrUpdatedTail_14 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_16, (MR_Integer) 1)));
            *AddrOfHeadVar__3_15 = HeadVar__3_16;
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Tail_7;
            next_value_of_AddrOfHeadVar__3_15 = AddrUpdatedTail_14;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            AddrOfHeadVar__3_15 = next_value_of_AddrOfHeadVar__3_15;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word HeadVar__3_19;

            {
              HeadVar__3_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HeadVar__3_19, 0) = NewItem_2;
              MR_hl_field(1, HeadVar__3_19, 1) = ((MR_Box) (HeadVar__1_1));
            }
            *AddrOfHeadVar__3_15 = HeadVar__3_19;
            succeeded = MR_TRUE;
          }
          break;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__set_ordlist__insert_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Box NewItem_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_Word List0_5 = (MR_Word) (HeadVar__2_2);
  MR_Word List_6;

  mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_T_7, List0_5, NewItem_4, &List_6);
  *HeadVar__3_3 = (MR_Word) (List_6);
}

MR_Word MR_CALL 
mercury__set_ordlist__insert_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word STATE_VARIABLE_S_0_6,
  MR_Box T_5)
{
  MR_Word STATE_VARIABLE_S_7;
  MR_Word List0_9 = (MR_Word) (STATE_VARIABLE_S_0_6);
  MR_Word List_10;

  mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_T_8, List0_9, T_5, &List_10);
  STATE_VARIABLE_S_7 = (MR_Word) (List_10);
  return STATE_VARIABLE_S_7;
}

void MR_CALL 
mercury__set_ordlist__insert_loop_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Box NewItem_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = NewItem_2;
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  else
  {
    MR_Box Head_6 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
    MR_Word Tail_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word R_10;

    mercury__builtin__compare_3_p_0(TypeInfo_for_T_13, &R_10, Head_6, NewItem_2);
    switch (R_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word * AddrUpdatedTail_14;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(1, base, 0) = Head_6;
            MR_hl_field(1, base, 1) = NULL;
          }
          AddrUpdatedTail_14 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, (MR_Integer) 1)));
          mercury__set_ordlist__LCMC__pred__insert_loop__1_3_p_0(TypeInfo_for_T_13, Tail_7, NewItem_2, AddrUpdatedTail_14);
        }
        break;
      case (MR_Integer) 0:
        *HeadVar__3_3 = HeadVar__1_1;
        break;
      case (MR_Integer) 2:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = NewItem_2;
          MR_hl_field(1, base, 1) = ((MR_Box) (HeadVar__1_1));
        }
        break;
    }
  }
}

void MR_CALL 
mercury__set_ordlist__LCMC__pred__insert_loop__1_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Box NewItem_2,
  MR_Word * AddrOfHeadVar__3_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word HeadVar__3_3;

      {
        HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_3, 0) = NewItem_2;
        MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *AddrOfHeadVar__3_15 = HeadVar__3_3;
    }
    else
    {
      MR_Box Head_6 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
      MR_Word Tail_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word R_10;

      mercury__builtin__compare_3_p_0(TypeInfo_for_T_13, &R_10, Head_6, NewItem_2);
      switch (R_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word * AddrUpdatedTail_14;
            MR_Word HeadVar__3_16;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word * next_value_of_AddrOfHeadVar__3_15;

            {
              HeadVar__3_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HeadVar__3_16, 0) = Head_6;
              MR_hl_field(1, HeadVar__3_16, 1) = NULL;
            }
            AddrUpdatedTail_14 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_16, (MR_Integer) 1)));
            *AddrOfHeadVar__3_15 = HeadVar__3_16;
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Tail_7;
            next_value_of_AddrOfHeadVar__3_15 = AddrUpdatedTail_14;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            AddrOfHeadVar__3_15 = next_value_of_AddrOfHeadVar__3_15;
            continue;
          }
          break;
        case (MR_Integer) 0:
          *AddrOfHeadVar__3_15 = HeadVar__1_1;
          break;
        case (MR_Integer) 2:
          {
            MR_Word HeadVar__3_20;

            {
              HeadVar__3_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HeadVar__3_20, 0) = NewItem_2;
              MR_hl_field(1, HeadVar__3_20, 1) = ((MR_Box) (HeadVar__1_1));
            }
            *AddrOfHeadVar__3_15 = HeadVar__3_20;
          }
          break;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__contains_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word S_3,
  MR_Box E_4)
{
  MR_bool succeeded;
  MR_Word Var_11;
  MR_Word L_12 = (MR_Word) (S_3);

  mercury__set_ordlist__is_member_loop_3_p_0(TypeInfo_for_T_5, E_4, L_12, &Var_11);
  succeeded = ((MR_Integer) 1 == Var_11);
  return succeeded;
}

void MR_CALL 
mercury__set_ordlist__is_member_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Box E_4,
  MR_Word HeadVar__2_2,
  MR_Word * R_6)
{
  MR_Word L_5 = (MR_Word) (HeadVar__2_2);

  mercury__set_ordlist__is_member_loop_3_p_0(TypeInfo_for_T_7, E_4, L_5, R_6);
}

void MR_CALL 
mercury__set_ordlist__member_2_p_1(
  MR_Word TypeInfo_for_T_8,
  MR_Box * E_1,
  MR_Word HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Word S_4 = (MR_Word) (HeadVar__2_2);

  mercury__list__member_2_p_1(TypeInfo_for_T_8, E_1, S_4, cont, cont_env_ptr);
}

MR_bool MR_CALL 
mercury__set_ordlist__member_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Box E_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Var_9;
  MR_Word L_10 = (MR_Word) (HeadVar__2_2);

  mercury__set_ordlist__is_member_loop_3_p_0(TypeInfo_for_T_8, E_1, L_10, &Var_9);
  succeeded = ((MR_Integer) 1 == Var_9);
  return succeeded;
}

void MR_CALL 
mercury__set_ordlist__is_member_loop_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Box H_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      MR_Word T_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Res_9;

      mercury__builtin__compare_3_p_0(TypeInfo_for_T_10, &Res_9, H_6, HeadVar__1_1);
      switch (Res_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__2_2 = T_7;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 0:
          *HeadVar__3_3 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          *HeadVar__3_3 = (MR_Integer) 0;
          break;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__is_singleton_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word HeadVar__1_1,
  MR_Box * X_3)
{
  MR_bool succeeded;
  MR_Word Var_4 = (MR_Word) (HeadVar__1_1);
  MR_Word Var_5;

  succeeded = (Var_4 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    *X_3 = (MR_hl_field(1, Var_4, (MR_Integer) 0));
    Var_5 = ((MR_Word) ((MR_hl_field(1, Var_4, (MR_Integer) 1))));
    succeeded = (Var_5 == (MR_Word) ((MR_Unsigned) 0U));
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__is_non_empty_1_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word Var_4 = (MR_Word) (HeadVar__1_1);

  succeeded = (Var_4 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__set_ordlist__is_empty_1_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word Var_2 = (MR_Word) (HeadVar__1_1);

  succeeded = (Var_2 == (MR_Word) ((MR_Unsigned) 0U));
  return succeeded;
}

MR_Word MR_CALL 
mercury__set_ordlist__make_singleton_set_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box T_3)
{
  MR_Word S_4;
  MR_Word Var_6;

  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = T_3;
    MR_hl_field(1, Var_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  S_4 = (MR_Word) (Var_6);
  return S_4;
}

MR_bool MR_CALL 
mercury__set_ordlist__singleton_set_2_p_1(
  MR_Word TypeInfo_for_T_6,
  MR_Box * X_3,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Var_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Var_5;

  succeeded = (Var_4 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    *X_3 = (MR_hl_field(1, Var_4, (MR_Integer) 0));
    Var_5 = ((MR_Word) ((MR_hl_field(1, Var_4, (MR_Integer) 1))));
    succeeded = (Var_5 == (MR_Word) ((MR_Unsigned) 0U));
  }
  return succeeded;
}

void MR_CALL 
mercury__set_ordlist__singleton_set_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box X_3,
  MR_Word * HeadVar__2_2)
{
  MR_Word Var_4;

  {
    Var_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_4, 0) = X_3;
    MR_hl_field(1, Var_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  *HeadVar__2_2 = (MR_Word) (Var_4);
}

void MR_CALL 
mercury__set_ordlist__init_1_p_0(
  MR_Word TypeInfo_for__T_3,
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
}

MR_Word MR_CALL 
mercury__set_ordlist__init_0_f_0(
  MR_Word TypeInfo_for_T_3)
{
  return (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
}

static MR_bool MR_CALL 
mercury__set_ordlist____Unify____set_ordlist_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__set_ordlist____Compare____set_ordlist_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__set_ordlist____Compare____set_ordlist_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__set_ordlist__init(void)
{
}

void mercury__set_ordlist__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1);
}

void mercury__set_ordlist__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__set_ordlist__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module set_ordlist.
