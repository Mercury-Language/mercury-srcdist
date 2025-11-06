/*
** Automatically generated from `prog_rename.m'
** by the Mercury compiler,
** version rotd-2025-11-06
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


// :- module parse_tree.prog_rename.
// :- implementation.

/*
INIT mercury__parse_tree__prog_rename__init
ENDINIT
*/

#include "parse_tree.prog_rename.mih"


#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "integer.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_EnumFunctorDesc parse_tree__prog_rename__parse_tree__prog_rename__enum_functor_desc_must_rename_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_rename__parse_tree__prog_rename__enum_functor_desc_must_rename_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_rename__parse_tree__prog_rename__enum_ordinal_ordered_must_rename_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_rename__parse_tree__prog_rename__enum_name_ordered_must_rename_0[2];

static const MR_Integer parse_tree__prog_rename__parse_tree__prog_rename__functor_number_map_must_rename_0[2];

static MR_bool MR_CALL 
parse_tree__prog_rename____Unify____must_rename_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_rename____Compare____must_rename_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_rename_scalar_common_1[1][1];




static /* final */ const MR_Box parse_tree__prog_rename_scalar_common_1[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};





static const MR_EnumFunctorDesc parse_tree__prog_rename__parse_tree__prog_rename__enum_functor_desc_must_rename_0_0 = {
  (MR_String) "must_rename",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_rename__parse_tree__prog_rename__enum_functor_desc_must_rename_0_1 = {
  (MR_String) "need_not_rename",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_rename__parse_tree__prog_rename__enum_ordinal_ordered_must_rename_0[2] = {
  &parse_tree__prog_rename__parse_tree__prog_rename__enum_functor_desc_must_rename_0_0,
  &parse_tree__prog_rename__parse_tree__prog_rename__enum_functor_desc_must_rename_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_rename__parse_tree__prog_rename__enum_name_ordered_must_rename_0[2] = {
  &parse_tree__prog_rename__parse_tree__prog_rename__enum_functor_desc_must_rename_0_0,
  &parse_tree__prog_rename__parse_tree__prog_rename__enum_functor_desc_must_rename_0_1
};

static const MR_Integer parse_tree__prog_rename__parse_tree__prog_rename__functor_number_map_must_rename_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_rename__parse_tree__prog_rename__type_ctor_info_must_rename_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_rename____Unify____must_rename_0_0_10001)),
  ((MR_Box) (parse_tree__prog_rename____Compare____must_rename_0_0_10001)),
  (MR_String) "parse_tree.prog_rename",
  (MR_String) "must_rename",
  { parse_tree__prog_rename__parse_tree__prog_rename__enum_name_ordered_must_rename_0 },
  { parse_tree__prog_rename__parse_tree__prog_rename__enum_ordinal_ordered_must_rename_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__prog_rename__parse_tree__prog_rename__functor_number_map_must_rename_0,

};

void MR_CALL 
parse_tree__prog_rename____Compare____must_rename_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
parse_tree__prog_rename____Unify____must_rename_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__prog_rename__rename_var_4_p_1(
  MR_Word TypeInfo_for_V_17,
  MR_Word Must_5,
  MR_Word Renaming_6,
  MR_Word Var0_7,
  MR_Word * Var_8)
{
  parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_V_17, Renaming_6, Var0_7, Var_8);
}

void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_95_91_50_93_95_49_4_p_1(
  MR_Word TypeInfo_for_V_17,
  MR_Word Renaming_6,
  MR_Word Var0_7,
  MR_Word * Var_8)
{
  MR_bool succeeded;
  MR_Word VarPrime_9;
  MR_Word TypeInfo_19_19;
  MR_Box conv0_VarPrime_9;

  {
    TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_19_19, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_V_17));
  }
  succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_V_17, TypeInfo_19_19, TypeInfo_19_19, (MR_Word) (Renaming_6), Var0_7, &conv0_VarPrime_9);
  if (succeeded)
  {
    VarPrime_9 = ((MR_Word) (conv0_VarPrime_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *Var_8 = VarPrime_9;
  else
    *Var_8 = Var0_7;
}

void MR_CALL 
parse_tree__prog_rename__rename_var_4_p_0(
  MR_Word TypeInfo_for_V_17,
  MR_Word Must_5,
  MR_Word Renaming_6,
  MR_Word Var0_7,
  MR_Word * Var_8)
{
  parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_V_17, Renaming_6, Var0_7, Var_8);
}

void MR_CALL 
parse_tree__prog_rename__rename_var_list_4_p_1(
  MR_Word TypeInfo_for_V_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_V_13, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__prog_rename__rename_var_list_4_p_0(
  MR_Word TypeInfo_for_V_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_V_13, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(
  MR_Word TypeInfo_for_V_11,
  MR_Word Must_5,
  MR_Word Renaming_6,
  MR_Word Vars0_7,
  MR_Word * Vars_8)
{
  MR_Word VarsList0_9;
  MR_Word VarsList_10;

  parse_tree__set_of_var__to_sorted_list_2_p_0(TypeInfo_for_V_11, Vars0_7, &VarsList0_9);
  parse_tree__prog_rename__rename_var_list_4_p_2(TypeInfo_for_V_11, Must_5, Renaming_6, VarsList0_9, &VarsList_10);
  parse_tree__set_of_var__list_to_set_2_p_0(TypeInfo_for_V_11, VarsList_10, Vars_8);
}

void MR_CALL 
parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_1(
  MR_Word TypeInfo_for_V_11,
  MR_Word Must_5,
  MR_Word Renaming_6,
  MR_Word Vars0_7,
  MR_Word * Vars_8)
{
  parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_115_101_116_95_111_102_95_118_97_114_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_V_11, Renaming_6, Vars0_7, Vars_8);
}

void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_115_101_116_95_111_102_95_118_97_114_95_95_91_50_93_95_49_4_p_1(
  MR_Word TypeInfo_for_V_11,
  MR_Word Renaming_6,
  MR_Word Vars0_7,
  MR_Word * Vars_8)
{
  MR_Word VarsList0_9;
  MR_Word VarsList_10;

  parse_tree__set_of_var__to_sorted_list_2_p_0(TypeInfo_for_V_11, Vars0_7, &VarsList0_9);
  parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_V_11, Renaming_6, VarsList0_9, &VarsList_10);
  parse_tree__set_of_var__list_to_set_2_p_0(TypeInfo_for_V_11, VarsList_10, Vars_8);
}

void MR_CALL 
parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_0(
  MR_Word TypeInfo_for_V_11,
  MR_Word Must_5,
  MR_Word Renaming_6,
  MR_Word Vars0_7,
  MR_Word * Vars_8)
{
  parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_115_101_116_95_111_102_95_118_97_114_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_V_11, Renaming_6, Vars0_7, Vars_8);
}

void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_115_101_116_95_111_102_95_118_97_114_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeInfo_for_V_11,
  MR_Word Renaming_6,
  MR_Word Vars0_7,
  MR_Word * Vars_8)
{
  MR_Word VarsList0_9;
  MR_Word VarsList_10;

  parse_tree__set_of_var__to_sorted_list_2_p_0(TypeInfo_for_V_11, Vars0_7, &VarsList0_9);
  parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_V_11, Renaming_6, VarsList0_9, &VarsList_10);
  parse_tree__set_of_var__list_to_set_2_p_0(TypeInfo_for_V_11, VarsList_10, Vars_8);
}

void MR_CALL 
parse_tree__prog_rename__rename_vars_in_var_set_4_p_2(
  MR_Word TypeInfo_for_V_11,
  MR_Word Must_5,
  MR_Word Renaming_6,
  MR_Word Vars0_7,
  MR_Word * Vars_8)
{
  MR_Word TypeInfo_13_13;
  MR_Word VarsList0_9;
  MR_Word VarsList_10;
  MR_Word conv0_VarsList0_9;

  {
    TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_V_11));
  }
  mercury__set__to_sorted_list_2_p_0(TypeInfo_13_13, (MR_Word) (Vars0_7), &conv0_VarsList0_9);
  VarsList0_9 = (MR_Word) (conv0_VarsList0_9);
  parse_tree__prog_rename__rename_var_list_4_p_2(TypeInfo_for_V_11, Must_5, Renaming_6, VarsList0_9, &VarsList_10);
  mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_V_11, TypeInfo_13_13, VarsList_10, Vars_8);
}

void MR_CALL 
parse_tree__prog_rename__rename_var_list_4_p_2(
  MR_Word TypeInfo_for_V_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Vars0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Var_11;
    MR_Word Vars_12;

    parse_tree__prog_rename__rename_var_4_p_2(TypeInfo_for_V_13, HeadVar__1_1, HeadVar__2_2, Var0_9, &Var_11);
    parse_tree__prog_rename__rename_var_list_4_p_2(TypeInfo_for_V_13, HeadVar__1_1, HeadVar__2_2, Vars0_10, &Vars_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Vars_12));
    }
  }
}

void MR_CALL 
parse_tree__prog_rename__rename_vars_in_var_set_4_p_1(
  MR_Word TypeInfo_for_V_11,
  MR_Word Must_5,
  MR_Word Renaming_6,
  MR_Word Vars0_7,
  MR_Word * Vars_8)
{
  parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_118_97_114_95_115_101_116_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_V_11, Renaming_6, Vars0_7, Vars_8);
}

void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_118_97_114_95_115_101_116_95_95_91_50_93_95_49_4_p_1(
  MR_Word TypeInfo_for_V_11,
  MR_Word Renaming_6,
  MR_Word Vars0_7,
  MR_Word * Vars_8)
{
  MR_Word TypeInfo_13_13;
  MR_Word VarsList0_9;
  MR_Word VarsList_10;
  MR_Word conv0_VarsList0_9;

  {
    TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_V_11));
  }
  mercury__set__to_sorted_list_2_p_0(TypeInfo_13_13, (MR_Word) (Vars0_7), &conv0_VarsList0_9);
  VarsList0_9 = (MR_Word) (conv0_VarsList0_9);
  parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_V_11, Renaming_6, VarsList0_9, &VarsList_10);
  mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_V_11, TypeInfo_13_13, VarsList_10, Vars_8);
}

void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(
  MR_Word TypeInfo_for_V_13,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Vars0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Var_11;
    MR_Word Vars_12;
    MR_Word VarPrime_14;
    MR_Word TypeInfo_19_23;
    MR_Box conv0_VarPrime_14;

    {
      TypeInfo_19_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_19_23, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_19_23, 1) = ((MR_Box) (TypeInfo_for_V_13));
    }
    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_V_13, TypeInfo_19_23, TypeInfo_19_23, (MR_Word) (HeadVar__2_2), Var0_9, &conv0_VarPrime_14);
    if (succeeded)
    {
      VarPrime_14 = ((MR_Word) (conv0_VarPrime_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      Var_11 = VarPrime_14;
    else
      Var_11 = Var0_9;
    parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_V_13, HeadVar__2_2, Vars0_10, &Vars_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Vars_12));
    }
  }
}

void MR_CALL 
parse_tree__prog_rename__rename_vars_in_var_set_4_p_0(
  MR_Word TypeInfo_for_V_11,
  MR_Word Must_5,
  MR_Word Renaming_6,
  MR_Word Vars0_7,
  MR_Word * Vars_8)
{
  parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_118_97_114_95_115_101_116_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_V_11, Renaming_6, Vars0_7, Vars_8);
}

void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_118_97_114_95_115_101_116_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeInfo_for_V_11,
  MR_Word Renaming_6,
  MR_Word Vars0_7,
  MR_Word * Vars_8)
{
  MR_Word TypeInfo_13_13;
  MR_Word VarsList0_9;
  MR_Word VarsList_10;
  MR_Word conv0_VarsList0_9;

  {
    TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_V_11));
  }
  mercury__set__to_sorted_list_2_p_0(TypeInfo_13_13, (MR_Word) (Vars0_7), &conv0_VarsList0_9);
  VarsList0_9 = (MR_Word) (conv0_VarsList0_9);
  parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_V_11, Renaming_6, VarsList0_9, &VarsList_10);
  mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_V_11, TypeInfo_13_13, VarsList_10, Vars_8);
}

void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeInfo_for_V_13,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Vars0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Var_11;
    MR_Word Vars_12;

    parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_V_13, HeadVar__2_2, Var0_9, &Var_11);
    parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_V_13, HeadVar__2_2, Vars0_10, &Vars_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Vars_12));
    }
  }
}

void MR_CALL 
parse_tree__prog_rename__rename_vars_in_term_list_4_p_1(
  MR_Word TypeInfo_for_V_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_V_13, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__prog_rename__rename_vars_in_term_list_4_p_0(
  MR_Word TypeInfo_for_V_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_V_13, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
parse_tree__prog_rename__rename_vars_in_term_list_4_p_2(
  MR_Word TypeInfo_for_V_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Term0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Terms0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Term_11;
    MR_Word Terms_12;

    parse_tree__prog_rename__rename_vars_in_term_4_p_2(TypeInfo_for_V_13, HeadVar__1_1, HeadVar__2_2, Term0_9, &Term_11);
    parse_tree__prog_rename__rename_vars_in_term_list_4_p_2(TypeInfo_for_V_13, HeadVar__1_1, HeadVar__2_2, Terms0_10, &Terms_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Term_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Terms_12));
    }
  }
}

void MR_CALL 
parse_tree__prog_rename__rename_vars_in_term_4_p_2(
  MR_Word TypeInfo_for_V_40,
  MR_Word Must_5,
  MR_Word Renaming_6,
  MR_Word Term0_7,
  MR_Word * Term_8)
{
  if (((MR_tag((MR_Word) Term0_7)) == (MR_Integer) 0))
  {
    MR_Word ConsId_12 = ((MR_Word) ((MR_hl_field(0, Term0_7, 0))));
    MR_Word Args0_13 = ((MR_Word) ((MR_hl_field(0, Term0_7, 1))));
    MR_Word Args_14;
    MR_Word Context_39 = ((MR_Word) ((MR_hl_field(0, Term0_7, 2))));

    if ((Args0_13 == (MR_Word) ((MR_Unsigned) 0U)))
      Args_14 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(1, Args0_13, 1))));
      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(1, Args0_13, 0))));

      if ((Var_41 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Arg1Term_16;

        parse_tree__prog_rename__rename_vars_in_term_4_p_2(TypeInfo_for_V_40, Must_5, Renaming_6, Var_42, &Arg1Term_16);
        {
          Args_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Args_14, 0) = ((MR_Box) (Arg1Term_16));
          MR_hl_field(1, Args_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word Var_43 = ((MR_Word) ((MR_hl_field(1, Var_41, 1))));
        MR_Word Var_44 = ((MR_Word) ((MR_hl_field(1, Var_41, 0))));

        if ((Var_43 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Arg2Term_18;
          MR_Word Var_27;
          MR_Word Arg1Term_34;

          parse_tree__prog_rename__rename_vars_in_term_4_p_2(TypeInfo_for_V_40, Must_5, Renaming_6, Var_42, &Arg1Term_34);
          parse_tree__prog_rename__rename_vars_in_term_4_p_2(TypeInfo_for_V_40, Must_5, Renaming_6, Var_44, &Arg2Term_18);
          {
            Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_27, 0) = ((MR_Box) (Arg2Term_18));
            MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Args_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Args_14, 0) = ((MR_Box) (Arg1Term_34));
            MR_hl_field(1, Args_14, 1) = ((MR_Box) (Var_27));
          }
        }
        else
        {
          MR_Word Arg3Term0_19 = ((MR_Word) ((MR_hl_field(1, Var_43, 0))));
          MR_Word OtherArgTerms0_20 = ((MR_Word) ((MR_hl_field(1, Var_43, 1))));
          MR_Word Arg3Term_21;
          MR_Word OtherArgTerms_22;
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word Arg1Term_36;
          MR_Word Arg2Term_38;

          parse_tree__prog_rename__rename_vars_in_term_4_p_2(TypeInfo_for_V_40, Must_5, Renaming_6, Var_42, &Arg1Term_36);
          parse_tree__prog_rename__rename_vars_in_term_4_p_2(TypeInfo_for_V_40, Must_5, Renaming_6, Var_44, &Arg2Term_38);
          parse_tree__prog_rename__rename_vars_in_term_4_p_2(TypeInfo_for_V_40, Must_5, Renaming_6, Arg3Term0_19, &Arg3Term_21);
          parse_tree__prog_rename__rename_vars_in_term_list_4_p_2(TypeInfo_for_V_40, Must_5, Renaming_6, OtherArgTerms0_20, &OtherArgTerms_22);
          {
            Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_32, 0) = ((MR_Box) (Arg3Term_21));
            MR_hl_field(1, Var_32, 1) = ((MR_Box) (OtherArgTerms_22));
          }
          {
            Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_31, 0) = ((MR_Box) (Arg2Term_38));
            MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_32));
          }
          {
            Args_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Args_14, 0) = ((MR_Box) (Arg1Term_36));
            MR_hl_field(1, Args_14, 1) = ((MR_Box) (Var_31));
          }
        }
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Term_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (ConsId_12));
      MR_hl_field(0, base, 1) = ((MR_Box) (Args_14));
      MR_hl_field(0, base, 2) = ((MR_Box) (Context_39));
    }
  }
  else
  {
    MR_Word Var0_9 = ((MR_Word) ((MR_hl_field(1, Term0_7, 0))));
    MR_Word Context_10 = ((MR_Word) ((MR_hl_field(1, Term0_7, 1))));
    MR_Word Var_11;

    parse_tree__prog_rename__rename_var_4_p_2(TypeInfo_for_V_40, Must_5, Renaming_6, Var0_9, &Var_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Term_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Context_10));
    }
  }
}

void MR_CALL 
parse_tree__prog_rename__rename_var_4_p_2(
  MR_Word TypeInfo_for_V_17,
  MR_Word Must_5,
  MR_Word Renaming_6,
  MR_Word Var0_7,
  MR_Word * Var_8)
{
  MR_bool succeeded;
  MR_Word VarPrime_9;
  MR_Word TypeInfo_19_19;
  MR_Box conv0_VarPrime_9;

  {
    TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_19_19, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_V_17));
  }
  succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_V_17, TypeInfo_19_19, TypeInfo_19_19, (MR_Word) (Renaming_6), Var0_7, &conv0_VarPrime_9);
  if (succeeded)
  {
    VarPrime_9 = ((MR_Word) (conv0_VarPrime_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *Var_8 = VarPrime_9;
  else
    switch (Must_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer Var0Int_10;
          MR_String Msg_11;
          MR_String Var_20;

          mercury__term__var_to_int_2_p_0(TypeInfo_for_V_17, Var0_7, &Var0Int_10);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__prog_rename_scalar_common_1[0]), Var0Int_10, &Var_20);
          Msg_11 = mercury__string__f_43_43_2_f_0((MR_String) "rename_var: no substitute for var ", Var_20);
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_rename.rename_var\'/4", Msg_11);
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        *Var_8 = Var0_7;
        break;
    }
}

void MR_CALL 
parse_tree__prog_rename__rename_vars_in_term_4_p_1(
  MR_Word TypeInfo_for_V_40,
  MR_Word Must_5,
  MR_Word Renaming_6,
  MR_Word Term0_7,
  MR_Word * Term_8)
{
  parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_V_40, Renaming_6, Term0_7, Term_8);
}

void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(
  MR_Word TypeInfo_for_V_13,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Term0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Terms0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Term_11;
    MR_Word Terms_12;

    parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_V_13, HeadVar__2_2, Term0_9, &Term_11);
    parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_V_13, HeadVar__2_2, Terms0_10, &Terms_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Term_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Terms_12));
    }
  }
}

void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(
  MR_Word TypeInfo_for_V_40,
  MR_Word Renaming_6,
  MR_Word Term0_7,
  MR_Word * Term_8)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Term0_7)) == (MR_Integer) 0))
  {
    MR_Word ConsId_12 = ((MR_Word) ((MR_hl_field(0, Term0_7, 0))));
    MR_Word Args0_13 = ((MR_Word) ((MR_hl_field(0, Term0_7, 1))));
    MR_Word Args_14;
    MR_Word Context_39 = ((MR_Word) ((MR_hl_field(0, Term0_7, 2))));

    if ((Args0_13 == (MR_Word) ((MR_Unsigned) 0U)))
      Args_14 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(1, Args0_13, 1))));
      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(1, Args0_13, 0))));

      if ((Var_41 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Arg1Term_16;

        parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_V_40, Renaming_6, Var_42, &Arg1Term_16);
        {
          Args_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Args_14, 0) = ((MR_Box) (Arg1Term_16));
          MR_hl_field(1, Args_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word Var_43 = ((MR_Word) ((MR_hl_field(1, Var_41, 1))));
        MR_Word Var_44 = ((MR_Word) ((MR_hl_field(1, Var_41, 0))));

        if ((Var_43 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Arg2Term_18;
          MR_Word Var_27;
          MR_Word Arg1Term_34;

          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_V_40, Renaming_6, Var_42, &Arg1Term_34);
          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_V_40, Renaming_6, Var_44, &Arg2Term_18);
          {
            Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_27, 0) = ((MR_Box) (Arg2Term_18));
            MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Args_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Args_14, 0) = ((MR_Box) (Arg1Term_34));
            MR_hl_field(1, Args_14, 1) = ((MR_Box) (Var_27));
          }
        }
        else
        {
          MR_Word Arg3Term0_19 = ((MR_Word) ((MR_hl_field(1, Var_43, 0))));
          MR_Word OtherArgTerms0_20 = ((MR_Word) ((MR_hl_field(1, Var_43, 1))));
          MR_Word Arg3Term_21;
          MR_Word OtherArgTerms_22;
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word Arg1Term_36;
          MR_Word Arg2Term_38;

          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_V_40, Renaming_6, Var_42, &Arg1Term_36);
          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_V_40, Renaming_6, Var_44, &Arg2Term_38);
          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_V_40, Renaming_6, Arg3Term0_19, &Arg3Term_21);
          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_V_40, Renaming_6, OtherArgTerms0_20, &OtherArgTerms_22);
          {
            Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_32, 0) = ((MR_Box) (Arg3Term_21));
            MR_hl_field(1, Var_32, 1) = ((MR_Box) (OtherArgTerms_22));
          }
          {
            Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_31, 0) = ((MR_Box) (Arg2Term_38));
            MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_32));
          }
          {
            Args_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Args_14, 0) = ((MR_Box) (Arg1Term_36));
            MR_hl_field(1, Args_14, 1) = ((MR_Box) (Var_31));
          }
        }
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Term_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (ConsId_12));
      MR_hl_field(0, base, 1) = ((MR_Box) (Args_14));
      MR_hl_field(0, base, 2) = ((MR_Box) (Context_39));
    }
  }
  else
  {
    MR_Word Var0_9 = ((MR_Word) ((MR_hl_field(1, Term0_7, 0))));
    MR_Word Context_10 = ((MR_Word) ((MR_hl_field(1, Term0_7, 1))));
    MR_Word Var_11;
    MR_Word VarPrime_45;
    MR_Word TypeInfo_19_54;
    MR_Box conv0_VarPrime_45;

    {
      TypeInfo_19_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_19_54, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_19_54, 1) = ((MR_Box) (TypeInfo_for_V_40));
    }
    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_V_40, TypeInfo_19_54, TypeInfo_19_54, (MR_Word) (Renaming_6), Var0_9, &conv0_VarPrime_45);
    if (succeeded)
    {
      VarPrime_45 = ((MR_Word) (conv0_VarPrime_45));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      Var_11 = VarPrime_45;
    else
      Var_11 = Var0_9;
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Term_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Context_10));
    }
  }
}

void MR_CALL 
parse_tree__prog_rename__rename_vars_in_term_4_p_0(
  MR_Word TypeInfo_for_V_40,
  MR_Word Must_5,
  MR_Word Renaming_6,
  MR_Word Term0_7,
  MR_Word * Term_8)
{
  parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_V_40, Renaming_6, Term0_7, Term_8);
}

void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeInfo_for_V_13,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Term0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Terms0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Term_11;
    MR_Word Terms_12;

    parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_V_13, HeadVar__2_2, Term0_9, &Term_11);
    parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_V_13, HeadVar__2_2, Terms0_10, &Terms_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Term_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Terms_12));
    }
  }
}

void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeInfo_for_V_40,
  MR_Word Renaming_6,
  MR_Word Term0_7,
  MR_Word * Term_8)
{
  if (((MR_tag((MR_Word) Term0_7)) == (MR_Integer) 0))
  {
    MR_Word ConsId_12 = ((MR_Word) ((MR_hl_field(0, Term0_7, 0))));
    MR_Word Args0_13 = ((MR_Word) ((MR_hl_field(0, Term0_7, 1))));
    MR_Word Args_14;
    MR_Word Context_39 = ((MR_Word) ((MR_hl_field(0, Term0_7, 2))));

    if ((Args0_13 == (MR_Word) ((MR_Unsigned) 0U)))
      Args_14 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(1, Args0_13, 1))));
      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(1, Args0_13, 0))));

      if ((Var_41 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Arg1Term_16;

        parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_V_40, Renaming_6, Var_42, &Arg1Term_16);
        {
          Args_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Args_14, 0) = ((MR_Box) (Arg1Term_16));
          MR_hl_field(1, Args_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word Var_43 = ((MR_Word) ((MR_hl_field(1, Var_41, 1))));
        MR_Word Var_44 = ((MR_Word) ((MR_hl_field(1, Var_41, 0))));

        if ((Var_43 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Arg2Term_18;
          MR_Word Var_27;
          MR_Word Arg1Term_34;

          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_V_40, Renaming_6, Var_42, &Arg1Term_34);
          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_V_40, Renaming_6, Var_44, &Arg2Term_18);
          {
            Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_27, 0) = ((MR_Box) (Arg2Term_18));
            MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Args_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Args_14, 0) = ((MR_Box) (Arg1Term_34));
            MR_hl_field(1, Args_14, 1) = ((MR_Box) (Var_27));
          }
        }
        else
        {
          MR_Word Arg3Term0_19 = ((MR_Word) ((MR_hl_field(1, Var_43, 0))));
          MR_Word OtherArgTerms0_20 = ((MR_Word) ((MR_hl_field(1, Var_43, 1))));
          MR_Word Arg3Term_21;
          MR_Word OtherArgTerms_22;
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word Arg1Term_36;
          MR_Word Arg2Term_38;

          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_V_40, Renaming_6, Var_42, &Arg1Term_36);
          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_V_40, Renaming_6, Var_44, &Arg2Term_38);
          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_V_40, Renaming_6, Arg3Term0_19, &Arg3Term_21);
          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_V_40, Renaming_6, OtherArgTerms0_20, &OtherArgTerms_22);
          {
            Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_32, 0) = ((MR_Box) (Arg3Term_21));
            MR_hl_field(1, Var_32, 1) = ((MR_Box) (OtherArgTerms_22));
          }
          {
            Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_31, 0) = ((MR_Box) (Arg2Term_38));
            MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_32));
          }
          {
            Args_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Args_14, 0) = ((MR_Box) (Arg1Term_36));
            MR_hl_field(1, Args_14, 1) = ((MR_Box) (Var_31));
          }
        }
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Term_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (ConsId_12));
      MR_hl_field(0, base, 1) = ((MR_Box) (Args_14));
      MR_hl_field(0, base, 2) = ((MR_Box) (Context_39));
    }
  }
  else
  {
    MR_Word Var0_9 = ((MR_Word) ((MR_hl_field(1, Term0_7, 0))));
    MR_Word Context_10 = ((MR_Word) ((MR_hl_field(1, Term0_7, 1))));
    MR_Word Var_11;

    parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_V_40, Renaming_6, Var0_9, &Var_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Term_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Context_10));
    }
  }
}

void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeInfo_for_V_17,
  MR_Word Renaming_6,
  MR_Word Var0_7,
  MR_Word * Var_8)
{
  MR_bool succeeded;
  MR_Word VarPrime_9;
  MR_Word TypeInfo_19_19;
  MR_Box conv0_VarPrime_9;

  {
    TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_19_19, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_V_17));
  }
  succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_V_17, TypeInfo_19_19, TypeInfo_19_19, (MR_Word) (Renaming_6), Var0_7, &conv0_VarPrime_9);
  if (succeeded)
  {
    VarPrime_9 = ((MR_Word) (conv0_VarPrime_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *Var_8 = VarPrime_9;
  else
  {
    MR_Integer Var0Int_10;
    MR_String Msg_11;
    MR_String Var_20;

    mercury__term__var_to_int_2_p_0(TypeInfo_for_V_17, Var0_7, &Var0Int_10);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__prog_rename_scalar_common_1[0]), Var0Int_10, &Var_20);
    Msg_11 = mercury__string__f_43_43_2_f_0((MR_String) "rename_var: no substitute for var ", Var_20);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_rename.rename_var\'/4", Msg_11);
      return;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_rename____Unify____must_rename_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_rename____Unify____must_rename_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_rename____Compare____must_rename_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_rename____Compare____must_rename_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__prog_rename__init(void)
{
}

void mercury__parse_tree__prog_rename__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__prog_rename__parse_tree__prog_rename__type_ctor_info_must_rename_0);
}

void mercury__parse_tree__prog_rename__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_rename__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.prog_rename.
