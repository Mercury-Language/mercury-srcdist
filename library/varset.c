/*
** Automatically generated from `varset.m'
** by the Mercury compiler,
** version rotd-2024-08-08
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


// :- module varset.
// :- implementation.

/*
INIT mercury__varset__init
ENDINIT
*/

#include "varset.mih"


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
#include "set_ordlist.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_var_supply_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_var_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_term_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__varset__varset__field_types_varset_1_0[3];

static const MR_ConstString mercury__varset__varset__field_names_varset_1_0[3];

static const MR_DuFunctorDesc mercury__varset__varset__du_functor_desc_varset_1_0;

static const MR_DuFunctorDescPtr mercury__varset__varset__du_stag_ordered_varset_1_0[1];

static const MR_DuPtagLayout mercury__varset__varset__du_ptag_ordered_varset_1[1];

static const MR_DuFunctorDescPtr mercury__varset__varset__du_name_ordered_varset_1[1];

static const MR_Integer mercury__varset__varset__functor_number_map_varset_1[1];

static const MR_FA_TypeInfo_Struct1 mercury__varset__varset__ti_varset_1term__type_ctor_info_generic_0;

static void MR_CALL 
mercury__varset__ensure_unique_names_loop_6_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word HeadVar__1_1,
  MR_String Suffix_2,
  MR_Word STATE_VARIABLE_UsedNames_0_3,
  MR_Word OldVarNames_4,
  MR_Word STATE_VARIABLE_VarNames_0_5,
  MR_Word * STATE_VARIABLE_VarNames_6);

static void MR_CALL 
mercury__varset__append_suffix_until_unique_4_p_0(
  MR_String Trial0_5,
  MR_String Suffix_6,
  MR_Word UsedNames_7,
  MR_String * Final_8);

static void MR_CALL 
mercury__varset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_115_116_95_109_101_114_103_101_95_114_101_110_97_109_105_110_103_95_119_105_116_104_111_117_116_95_110_97_109_101_115_95_108_111_111_112_95_95_91_49_93_95_48_6_p_0(
  MR_Integer CurVarNumB_7,
  MR_Integer NumAllocatedB_8,
  MR_Integer STATE_VARIABLE_NumAllocated_0_13,
  MR_Integer * STATE_VARIABLE_NumAllocated_14,
  MR_Word STATE_VARIABLE_RevRenaming_0_15,
  MR_Word * STATE_VARIABLE_RevRenaming_16);

static void MR_CALL 
mercury__varset__simple_merge_renaming_without_names_loop_6_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word STATE_VARIABLE_SupplyB_0_13,
  MR_Word MaxSupplyB_8,
  MR_Word STATE_VARIABLE_Supply_0_14,
  MR_Word * STATE_VARIABLE_Supply_15,
  MR_Word STATE_VARIABLE_Renaming_0_16,
  MR_Word * STATE_VARIABLE_Renaming_17);

static void MR_CALL 
mercury__varset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_115_116_95_109_101_114_103_101_95_114_101_110_97_109_105_110_103_95_108_111_111_112_95_95_91_49_93_95_48_9_p_0(
  MR_Integer CurVarNumB_10,
  MR_Integer NumAllocatedB_11,
  MR_Integer STATE_VARIABLE_NumAllocated_0_22,
  MR_Integer * STATE_VARIABLE_NumAllocated_23,
  MR_Word VarNamesB_13,
  MR_Word STATE_VARIABLE_RevNamesListSuffix_0_24,
  MR_Word * STATE_VARIABLE_RevNamesListSuffix_25,
  MR_Word STATE_VARIABLE_RevRenaming_0_26,
  MR_Word * STATE_VARIABLE_RevRenaming_27);

static void MR_CALL 
mercury__varset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_115_116_95_109_101_114_103_101_95_114_101_110_97_109_105_110_103_95_108_111_111_112_95_108_101_102_116_111_118_101_114_95_95_91_49_93_95_48_6_p_0(
  MR_Integer CurVarNumB_7,
  MR_Integer NumAllocatedB_8,
  MR_Integer STATE_VARIABLE_NumAllocated_0_13,
  MR_Integer * STATE_VARIABLE_NumAllocated_14,
  MR_Word STATE_VARIABLE_RevRenaming_0_15,
  MR_Word * STATE_VARIABLE_RevRenaming_16);

static void MR_CALL 
mercury__varset__simple_merge_renaming_loop_9_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word STATE_VARIABLE_SupplyB_0_19,
  MR_Word MaxSupplyB_11,
  MR_Word NamesB_12,
  MR_Word STATE_VARIABLE_Supply_0_20,
  MR_Word * STATE_VARIABLE_Supply_21,
  MR_Word STATE_VARIABLE_Names_0_22,
  MR_Word * STATE_VARIABLE_Names_23,
  MR_Word STATE_VARIABLE_Renaming_0_24,
  MR_Word * STATE_VARIABLE_Renaming_25);

static MR_bool MR_CALL 
mercury__varset____Unify____varset_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__varset____Compare____varset_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__varset____Unify____varset_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__varset____Compare____varset_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__varset_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__varset_scalar_common_2[2][3];

static /* final */ const MR_Box mercury__varset_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__varset_scalar_common_4[1][5];

static /* final */ const MR_Box mercury__varset_scalar_common_5[1][1];




static /* final */ const MR_Box mercury__varset_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box mercury__varset_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) 0)))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mercury__varset_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__varset_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__varset_scalar_common_4[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__varset_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__varset_scalar_common_5[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
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


static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_var_supply_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_supply_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__varset__term__pti_var_1__pseudo_1),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__varset__term__pti_var_1__pseudo_1),
    (MR_PseudoTypeInfo) (&mercury__varset__term__pti_term_1__pseudo_1)
  }
};

static const MR_PseudoTypeInfo mercury__varset__varset__field_types_varset_1_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__varset__term__pti_var_supply_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__plain_builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1)
};

static const MR_ConstString mercury__varset__varset__field_names_varset_1_0[3] = {
  (MR_String) "var_supply",
  (MR_String) "var_names",
  (MR_String) "var_values"
};

static const MR_DuFunctorDesc mercury__varset__varset__du_functor_desc_varset_1_0 = {
  (MR_String) "varset",
  INT16_C(3),
  UINT16_C(7),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__varset__varset__field_types_varset_1_0,
  mercury__varset__varset__field_names_varset_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__varset__varset__du_stag_ordered_varset_1_0[1] = { &mercury__varset__varset__du_functor_desc_varset_1_0 };

static const MR_DuPtagLayout mercury__varset__varset__du_ptag_ordered_varset_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__varset__varset__du_stag_ordered_varset_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__varset__varset__du_name_ordered_varset_1[1] = { &mercury__varset__varset__du_functor_desc_varset_1_0 };

static const MR_Integer mercury__varset__varset__functor_number_map_varset_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__varset__varset__type_ctor_info_varset_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__varset____Unify____varset_1_0_10001)),
  ((MR_Box) (mercury__varset____Compare____varset_1_0_10001)),
  (MR_String) "varset",
  (MR_String) "varset",
  { mercury__varset__varset__du_name_ordered_varset_1 },
  { mercury__varset__varset__du_ptag_ordered_varset_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__varset__varset__functor_number_map_varset_1,

};

static const MR_FA_TypeInfo_Struct1 mercury__varset__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

const MR_TypeCtorInfo_Struct mercury__varset__varset__type_ctor_info_varset_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__varset____Unify____varset_0_0_10001)),
  ((MR_Box) (mercury__varset____Compare____varset_0_0_10001)),
  (MR_String) "varset",
  (MR_String) "varset",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__varset__varset__ti_varset_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
mercury__varset____Compare____varset_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__varset_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mercury__varset____Unify____varset_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__varset____Unify____varset_1_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__varset____Compare____varset_1_0(
  MR_Word TypeInfo_for_T_14,
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
    MR_Integer Var_28 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_29 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_28 < Var_29);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_28 == Var_29);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 0;
      else
        SubResult1_6 = (MR_Integer) 2;
    }
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Word TypeInfo_18_18;

      {
        TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_14));
      }
      mercury__tree234____Compare____tree234_2_0(TypeInfo_18_18, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &SubResult2_9, (MR_Word) (ArgX2_7), (MR_Word) (ArgY2_8));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word TypeInfo_23_23;
        MR_Word TypeInfo_25_25;

        {
          TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_T_14));
        }
        {
          TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_25_25, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
          MR_hl_field(0, TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_for_T_14));
        }
        mercury__tree234____Compare____tree234_2_0(TypeInfo_23_23, TypeInfo_25_25, HeadVar__1_1, (MR_Word) (ArgX3_10), (MR_Word) (ArgY3_11));
      }
    }
  }
}

MR_bool MR_CALL 
mercury__varset____Unify____varset_1_0(
  MR_Word TypeInfo_for_T_11,
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
    MR_Word TypeCtorInfo_14_14;
    MR_Word TypeCtorInfo_16_16;
    MR_Word TypeInfo_20_20;
    MR_Word TypeCtorInfo_21_21;
    MR_Word TypeInfo_22_22;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer Var_25 = (MR_Integer) (ArgX1_3);
    MR_Integer Var_26 = (MR_Integer) (ArgY1_4);

    succeeded = (Var_25 == Var_26);
    if (succeeded)
    {
      TypeCtorInfo_14_14 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
      TypeCtorInfo_16_16 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
      {
        TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (TypeCtorInfo_14_14));
        MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_11));
      }
      succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_20_20, TypeCtorInfo_16_16, (MR_Word) (ArgX2_5), (MR_Word) (ArgY2_6));
      if (succeeded)
      {
        TypeCtorInfo_21_21 = (MR_Word) (&mercury__term__term__type_ctor_info_term_1);
        {
          TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (TypeCtorInfo_21_21));
          MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_T_11));
        }
        succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_20_20, TypeInfo_22_22, (MR_Word) (ArgX3_7), (MR_Word) (ArgY3_8));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__varset__construct_varset_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Integer N_4,
  MR_Word VarNameMap_5,
  MR_Word * VarSet_6)
{
  MR_Word VarSupply_7 = (MR_Word) (N_4);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *VarSet_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (VarSupply_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarNameMap_5));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

void MR_CALL 
mercury__varset__get_var_names_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word VarSet_3,
  MR_Word * VarNameMap_4)
{
  *VarNameMap_4 = ((MR_Word) ((MR_hl_field(0, VarSet_3, (MR_Integer) 1))));
}

MR_Integer MR_CALL 
mercury__varset__num_allocated_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word HeadVar__1_1)
{
  MR_Integer HeadVar__2_2;
  MR_Word VarSupply_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

  HeadVar__2_2 = (MR_Integer) (VarSupply_3);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__varset__max_var_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word VarSupply_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer Var_7 = (MR_Integer) (VarSupply_3);

  HeadVar__2_2 = (MR_Word) (Var_7);
  return HeadVar__2_2;
}

void MR_CALL 
mercury__varset__coerce_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word TypeInfo_for_U_7,
  MR_Word STATE_VARIABLE_VarSet_0_4,
  MR_Word * STATE_VARIABLE_VarSet_5)
{
  *STATE_VARIABLE_VarSet_5 = STATE_VARIABLE_VarSet_0_4;
}

MR_Word MR_CALL 
mercury__varset__coerce_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word TypeInfo_for_U_7,
  MR_Word STATE_VARIABLE_VarSet_0_4)
{
  MR_Word STATE_VARIABLE_VarSet_5 = STATE_VARIABLE_VarSet_0_4;

  return STATE_VARIABLE_VarSet_5;
}

void MR_CALL 
mercury__varset__squash_4_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word OldVarSet_5,
  MR_Word KeptVars_6,
  MR_Word * NewVarSet_7,
  MR_Word * Subst_8)
{
  MR_Word TypeInfo_10_39;
  MR_Integer NumVars_9;
  MR_Word NewVars0_11;
  MR_Word NewVarSet1_12;
  MR_Word NewVars_13;
  MR_Word VarNames_14;
  MR_Word RevNewVars_28;
  MR_Integer Var_32;
  MR_Word VarNames_35;
  MR_Word Var_42;
  MR_Word conv0_NewVars0_11;
  MR_Word conv1_VarNames_14;
  MR_Word conv2_Var_42;
  MR_Word conv3_Subst_8;

  {
    TypeInfo_10_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_10_39, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_10_39, 1) = ((MR_Box) (TypeInfo_for_T_15));
  }
  mercury__list__length_acc_3_p_0(TypeInfo_10_39, (MR_Word) (KeptVars_6), (MR_Integer) 0, &NumVars_9);
  mercury__varset__new_vars_loop_5_p_0(TypeInfo_for_T_15, NumVars_9, (MR_Word) ((MR_Unsigned) 0U), &RevNewVars_28, (MR_Word) (&mercury__varset_scalar_common_2[1]), &NewVarSet1_12);
  mercury__list__reverse_2_p_0(TypeInfo_10_39, (MR_Word) (RevNewVars_28), &conv0_NewVars0_11);
  NewVars0_11 = (MR_Word) (conv0_NewVars0_11);
  mercury__list__length_acc_3_p_0(TypeInfo_10_39, (MR_Word) (NewVars0_11), (MR_Integer) 0, &Var_32);
  mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_15, TypeInfo_10_39, Var_32, NewVars0_11, &NewVars_13);
  VarNames_35 = ((MR_Word) ((MR_hl_field(0, OldVarSet_5, (MR_Integer) 1))));
  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_10_39, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (VarNames_35), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv1_VarNames_14);
  VarNames_14 = (MR_Word) (conv1_VarNames_14);
  mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_10_39, TypeInfo_10_39, (MR_Word) (KeptVars_6), NewVars_13, &conv2_Var_42);
  Var_42 = (MR_Word) (conv2_Var_42);
  mercury__tree234__assoc_list_to_tree234_acc_3_p_0(TypeInfo_10_39, TypeInfo_10_39, (MR_Word) (Var_42), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv3_Subst_8);
  *Subst_8 = (MR_Word) (conv3_Subst_8);
  mercury__varset__copy_var_names_4_p_0(TypeInfo_for_T_15, VarNames_14, *Subst_8, NewVarSet1_12, NewVarSet_7);
}

void MR_CALL 
mercury__varset__copy_var_names_4_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_NewVarSet_0_3,
  MR_Word * STATE_VARIABLE_NewVarSet_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_NewVarSet_4 = STATE_VARIABLE_NewVarSet_0_3;
    else
    {
      MR_Word OldVar_9;
      MR_String Name_10;
      MR_Word Rest_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_NewVarSet_18_18;
      MR_Word NewVar_14;
      MR_Word TypeInfo_21_21;
      MR_Box conv0_NewVar_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_NewVarSet_0_3;

      OldVar_9 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
      Name_10 = ((MR_String) ((MR_hl_field(0, Var_17, (MR_Integer) 1))));
      {
        TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_21_21, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_19));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_19, TypeInfo_21_21, TypeInfo_21_21, (MR_Word) (HeadVar__2_2), OldVar_9, &conv0_NewVar_14);
      if (succeeded)
      {
        NewVar_14 = ((MR_Word) (conv0_NewVar_14));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        mercury__varset__name_var_4_p_0(TypeInfo_for_T_19, NewVar_14, Name_10, STATE_VARIABLE_NewVarSet_0_3, &STATE_VARIABLE_NewVarSet_18_18);
      else
        STATE_VARIABLE_NewVarSet_18_18 = STATE_VARIABLE_NewVarSet_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Rest_11;
      next_value_of_STATE_VARIABLE_NewVarSet_0_3 = STATE_VARIABLE_NewVarSet_18_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_NewVarSet_0_3 = next_value_of_STATE_VARIABLE_NewVarSet_0_3;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__varset__select_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word STATE_VARIABLE_VarSet_0_6,
  MR_Word Vars_5)
{
  MR_Word STATE_VARIABLE_VarSet_7;

  mercury__varset__select_3_p_0(TypeInfo_for_T_8, Vars_5, STATE_VARIABLE_VarSet_0_6, &STATE_VARIABLE_VarSet_7);
  return STATE_VARIABLE_VarSet_7;
}

void MR_CALL 
mercury__varset__select_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Vars_4,
  MR_Word STATE_VARIABLE_VarSet_0_11,
  MR_Word * STATE_VARIABLE_VarSet_12)
{
  MR_Word TypeInfo_15_15;
  MR_Word TypeInfo_18_18;
  MR_Word Supply_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_11, (MR_Integer) 0))));
  MR_Word VarNameMap0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_11, (MR_Integer) 1))));
  MR_Word Values0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_11, (MR_Integer) 2))));
  MR_Word VarNameMap_9;
  MR_Word Values_10;
  MR_Word Var_19;
  MR_Word Var_22;
  MR_Word Var_24;
  MR_Word Var_27;
  MR_Word conv0_VarNameMap_9;
  MR_Word conv1_Var_27;
  MR_Word conv2_Values_10;

  {
    TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_13));
  }
  Var_19 = (MR_Word) (Vars_4);
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_13, TypeInfo_15_15, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19, VarNameMap0_7, (MR_Word) ((MR_Unsigned) 0U), &Var_22);
  mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_15_15, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (Var_22), &conv0_VarNameMap_9);
  VarNameMap_9 = (MR_Word) (conv0_VarNameMap_9);
  {
    TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
    MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_13));
  }
  Var_24 = (MR_Word) (Vars_4);
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_13, TypeInfo_15_15, TypeInfo_18_18, Var_24, (MR_Word) (Values0_8), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv1_Var_27);
  Var_27 = (MR_Word) (conv1_Var_27);
  mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_15_15, TypeInfo_18_18, (MR_Word) (Var_27), &conv2_Values_10);
  Values_10 = (MR_Word) (conv2_Values_10);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarSet_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Supply_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarNameMap_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Values_10));
  }
}

void MR_CALL 
mercury__varset__undo_default_names_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word VarSet0_3,
  MR_Word * VarSet_4)
{
  MR_Word TypeInfo_14_14;
  MR_Word Supply0_5 = ((MR_Word) ((MR_hl_field(0, VarSet0_3, (MR_Integer) 0))));
  MR_Word Names0_6 = ((MR_Word) ((MR_hl_field(0, VarSet0_3, (MR_Integer) 1))));
  MR_Word Values0_7 = ((MR_Word) ((MR_hl_field(0, VarSet0_3, (MR_Integer) 2))));
  MR_Word NamesList0_8;
  MR_Word RevNamesList_9;
  MR_Word Names_10;
  MR_Word conv0_NamesList0_8;
  MR_Word conv1_Names_10;

  {
    TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_12));
  }
  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_14_14, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (Names0_6), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_NamesList0_8);
  NamesList0_8 = (MR_Word) (conv0_NamesList0_8);
  mercury__varset__undo_default_names_loop_3_p_0(TypeInfo_for_T_12, NamesList0_8, (MR_Word) ((MR_Unsigned) 0U), &RevNamesList_9);
  mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_14_14, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (RevNamesList_9), &conv1_Names_10);
  Names_10 = (MR_Word) (conv1_Names_10);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *VarSet_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Supply0_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (Names_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Values0_7));
  }
}

void MR_CALL 
mercury__varset__undo_default_names_loop_3_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevNamesList_0_2,
  MR_Word * STATE_VARIABLE_RevNamesList_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevNamesList_3 = STATE_VARIABLE_RevNamesList_0_2;
    else
    {
      MR_String Name_8;
      MR_Word VarNames_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_RevNamesList_17_17;
      MR_String NameAfterV_11;
      MR_Integer Var_20;
      MR_Integer _IntAfterV_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevNamesList_0_2;

      Name_8 = ((MR_String) ((MR_hl_field(0, Var_15, (MR_Integer) 1))));
      succeeded = mercury__string__append_3_p_1((MR_String) "V_", &NameAfterV_11, Name_8);
      if (succeeded)
      {
        Var_20 = (MR_Integer) 10;
        succeeded = mercury__string__base_string_to_int_3_p_0(Var_20, NameAfterV_11, &_IntAfterV_12);
      }
      if (succeeded)
        STATE_VARIABLE_RevNamesList_17_17 = STATE_VARIABLE_RevNamesList_0_2;
      else
        {
          STATE_VARIABLE_RevNamesList_17_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevNamesList_17_17, 0) = ((MR_Box) (Var_15));
          MR_hl_field(1, STATE_VARIABLE_RevNamesList_17_17, 1) = ((MR_Box) (STATE_VARIABLE_RevNamesList_0_2));
        }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = VarNames_9;
      next_value_of_STATE_VARIABLE_RevNamesList_0_2 = STATE_VARIABLE_RevNamesList_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevNamesList_0_2 = next_value_of_STATE_VARIABLE_RevNamesList_0_2;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__varset__ensure_unique_names_3_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word AllVars_5,
  MR_String Suffix_6,
  MR_Word STATE_VARIABLE_VarSet_0_8)
{
  MR_Word STATE_VARIABLE_VarSet_9;

  mercury__varset__ensure_unique_names_4_p_0(TypeInfo_for_T_10, AllVars_5, Suffix_6, STATE_VARIABLE_VarSet_0_8, &STATE_VARIABLE_VarSet_9);
  return STATE_VARIABLE_VarSet_9;
}

void MR_CALL 
mercury__varset__ensure_unique_names_4_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word AllVars_5,
  MR_String Suffix_6,
  MR_Word STATE_VARIABLE_VarSet_0_10,
  MR_Word * STATE_VARIABLE_VarSet_11)
{
  MR_bool succeeded = (strcmp(Suffix_6, (MR_String) "") == 0);
  MR_Word VarNames0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1))));

  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140varset.ensure_unique_names\'/4", (MR_String) "Error: the disambiguating suffix is the empty string.");
      return;
    }
  else
  {
    MR_Word VarNames_9;
    MR_Word Var_18;
    MR_Word Var_20;

    mercury__varset__ensure_unique_names_loop_6_p_0(TypeInfo_for_T_21, AllVars_5, Suffix_6, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), VarNames0_8, (MR_Word) ((MR_Unsigned) 0U), &VarNames_9);
    Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0))));
    Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_VarSet_11 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_18));
      MR_hl_field(0, base, 1) = ((MR_Box) (VarNames_9));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_20));
    }
  }
}

static void MR_CALL 
mercury__varset__ensure_unique_names_loop_6_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word HeadVar__1_1,
  MR_String Suffix_2,
  MR_Word STATE_VARIABLE_UsedNames_0_3,
  MR_Word OldVarNames_4,
  MR_Word STATE_VARIABLE_VarNames_0_5,
  MR_Word * STATE_VARIABLE_VarNames_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_VarNames_6 = STATE_VARIABLE_VarNames_0_5;
    else
    {
      MR_Word TypeInfo_42_42;
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_String TrialName_21;
      MR_String FinalName_22;
      MR_Word STATE_VARIABLE_UsedNames_31_31;
      MR_Word STATE_VARIABLE_VarNames_32_32;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_String OldName_19;
      MR_Word TypeInfo_37_37;
      MR_Box conv0_OldName_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_UsedNames_0_3;
      MR_Word next_value_of_STATE_VARIABLE_VarNames_0_5;

      {
        TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_37_37, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_37_37, 1) = ((MR_Box) (TypeInfo_for_T_35));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_35, TypeInfo_37_37, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OldVarNames_4, Var_13, &conv0_OldName_19);
      if (succeeded)
      {
        OldName_19 = ((MR_String) (conv0_OldName_19));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = mercury__set__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (OldName_19)), STATE_VARIABLE_UsedNames_0_3);
        if (succeeded)
        {
          MR_Integer VarNum_20 = (MR_Integer) (Var_13);
          MR_String Var_26;
          MR_String Var_28;

{
#define MR_PROC_LABEL mercury__varset__ensure_unique_names_loop_6_p_0

	MR_Integer I;
	MR_String S;

	I = VarNum_20 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_28  = S;
}
          mercury__string__append_3_p_2((MR_String) "_", Var_28, &Var_26);
          mercury__string__append_3_p_2(OldName_19, Var_26, &TrialName_21);
        }
        else
          TrialName_21 = OldName_19;
      }
      else
      {
        MR_String Var_30;
        MR_Integer VarNum_34 = (MR_Integer) (Var_13);

{
#define MR_PROC_LABEL mercury__varset__ensure_unique_names_loop_6_p_0

	MR_Integer I;
	MR_String S;

	I = VarNum_34 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_30  = S;
}
        mercury__string__append_3_p_2((MR_String) "Var_", Var_30, &TrialName_21);
      }
      mercury__varset__append_suffix_until_unique_4_p_0(TrialName_21, Suffix_2, STATE_VARIABLE_UsedNames_0_3, &FinalName_22);
      Var_44 = (MR_Word) (STATE_VARIABLE_UsedNames_0_3);
      mercury__set_ordlist__insert_loop_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_44, ((MR_Box) (FinalName_22)), &Var_45);
      STATE_VARIABLE_UsedNames_31_31 = (MR_Word) (Var_45);
      {
        TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_42_42, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_42_42, 1) = ((MR_Box) (TypeInfo_for_T_35));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_35, TypeInfo_42_42, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_13, ((MR_Box) (FinalName_22)), STATE_VARIABLE_VarNames_0_5, &STATE_VARIABLE_VarNames_32_32);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_14;
      next_value_of_STATE_VARIABLE_UsedNames_0_3 = STATE_VARIABLE_UsedNames_31_31;
      next_value_of_STATE_VARIABLE_VarNames_0_5 = STATE_VARIABLE_VarNames_32_32;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_UsedNames_0_3 = next_value_of_STATE_VARIABLE_UsedNames_0_3;
      STATE_VARIABLE_VarNames_0_5 = next_value_of_STATE_VARIABLE_VarNames_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__varset__append_suffix_until_unique_4_p_0(
  MR_String Trial0_5,
  MR_String Suffix_6,
  MR_Word UsedNames_7,
  MR_String * Final_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__set__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Trial0_5)), UsedNames_7);
    if (succeeded)
    {
      MR_String Trial1_9;
      MR_String next_value_of_Trial0_5;

      mercury__string__append_3_p_2(Trial0_5, Suffix_6, &Trial1_9);
      // direct tailcall eliminated
      ;
      next_value_of_Trial0_5 = Trial1_9;
      Trial0_5 = next_value_of_Trial0_5;
      continue;
    }
    else
      *Final_8 = Trial0_5;
    break;
  }
}

void MR_CALL 
mercury__varset__var_name_list_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word VarSet_3,
  MR_Word * VarNameList_4)
{
  MR_Word TypeInfo_10_10;
  MR_Word VarNames_5 = ((MR_Word) ((MR_hl_field(0, VarSet_3, (MR_Integer) 1))));
  MR_Word conv0_VarNameList_4;

  {
    TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_10_10, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_8));
  }
  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_10_10, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (VarNames_5), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_VarNameList_4);
  *VarNameList_4 = (MR_Word) (conv0_VarNameList_4);
}

MR_Word MR_CALL 
mercury__varset__var_name_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word VarSet_3)
{
  MR_Word VarNameList_4;
  MR_Word TypeInfo_10_10;
  MR_Word VarNames_6 = ((MR_Word) ((MR_hl_field(0, VarSet_3, (MR_Integer) 1))));
  MR_Word conv0_VarNameList_4;

  {
    TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_10_10, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_10_10, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (VarNames_6), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_VarNameList_4);
  VarNameList_4 = (MR_Word) (conv0_VarNameList_4);
  return VarNameList_4;
}

MR_Word MR_CALL 
mercury__varset__create_name_var_map_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word VarSet_3)
{
  MR_Word NameVars_4;

  mercury__varset__create_name_var_map_2_p_0(TypeInfo_for_T_5, VarSet_3, &NameVars_4);
  return NameVars_4;
}

void MR_CALL 
mercury__varset__create_name_var_map_2_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word VarSet_3,
  MR_Word * NameVars_4)
{
  MR_Word TypeInfo_12_12;
  MR_Word VarNames_5 = ((MR_Word) ((MR_hl_field(0, VarSet_3, (MR_Integer) 1))));
  MR_Word Vars_6;
  MR_Word Names_7;
  MR_Word Var_16;
  MR_Word conv0_Vars_6;

  {
    TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_12_12, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_for_T_10));
  }
  mercury__tree234__keys_acc_3_p_0(TypeInfo_12_12, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (VarNames_5), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_Vars_6);
  Vars_6 = (MR_Word) (conv0_Vars_6);
  mercury__tree234__values_acc_3_p_0(TypeInfo_12_12, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (VarNames_5), (MR_Word) ((MR_Unsigned) 0U), &Names_7);
  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeInfo_12_12, Names_7, Vars_6, &Var_16);
  mercury__tree234__assoc_list_to_tree234_acc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeInfo_12_12, Var_16, (MR_Word) ((MR_Unsigned) 0U), NameVars_4);
}

void MR_CALL 
mercury__varset__merge_without_names_5_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word VarSetA_6,
  MR_Word VarSetB_7,
  MR_Word TermList0_8,
  MR_Word * VarSet_9,
  MR_Word * TermList_10)
{
  MR_Word Renaming_11;

  mercury__varset__merge_renaming_without_names_4_p_0(TypeInfo_for_T_12, VarSetA_6, VarSetB_7, VarSet_9, &Renaming_11);
  mercury__term_subst__apply_renaming_in_terms_3_p_0(TypeInfo_for_T_12, Renaming_11, TermList0_8, TermList_10);
}

void MR_CALL 
mercury__varset__merge_5_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word VarSetA_6,
  MR_Word VarSetB_7,
  MR_Word TermList0_8,
  MR_Word * VarSet_9,
  MR_Word * TermList_10)
{
  MR_Word Renaming_11;

  mercury__varset__merge_renaming_4_p_0(TypeInfo_for_T_12, VarSetA_6, VarSetB_7, VarSet_9, &Renaming_11);
  mercury__term_subst__apply_renaming_in_terms_3_p_0(TypeInfo_for_T_12, Renaming_11, TermList0_8, TermList_10);
}

void MR_CALL 
mercury__varset__merge_renaming_without_names_4_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word VarSetA_5,
  MR_Word VarSetB_6,
  MR_Word * VarSet_7,
  MR_Word * Renaming_8)
{
  MR_bool succeeded;
  MR_Word SupplyA_9 = ((MR_Word) ((MR_hl_field(0, VarSetA_5, (MR_Integer) 0))));
  MR_Word NamesA_10 = ((MR_Word) ((MR_hl_field(0, VarSetA_5, (MR_Integer) 1))));
  MR_Word ValuesA_11 = ((MR_Word) ((MR_hl_field(0, VarSetA_5, (MR_Integer) 2))));
  MR_Word SupplyB_12 = ((MR_Word) ((MR_hl_field(0, VarSetB_6, (MR_Integer) 0))));
  MR_Integer NumAllocatedA_15 = (MR_Integer) (SupplyA_9);
  MR_Integer NumAllocatedB_16 = (MR_Integer) (SupplyB_12);
  MR_Word Supply_19;

  succeeded = (NumAllocatedB_16 <= (MR_Integer) 5);
  if (succeeded)
    mercury__varset__simple_merge_renaming_without_names_loop_6_p_0(TypeInfo_for_T_24, (MR_Word) (((MR_Box) ((MR_Integer) 0))), SupplyB_12, SupplyA_9, &Supply_19, (MR_Word) ((MR_Unsigned) 0U), Renaming_8);
  else
  {
    MR_Word TypeInfo_28_28;
    MR_Integer NumAllocated_20;
    MR_Word RevRenamingList_21;
    MR_Word conv0_Renaming_8;

    mercury__varset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_115_116_95_109_101_114_103_101_95_114_101_110_97_109_105_110_103_95_119_105_116_104_111_117_116_95_110_97_109_101_115_95_108_111_111_112_95_95_91_49_93_95_48_6_p_0((MR_Integer) 1, NumAllocatedB_16, NumAllocatedA_15, &NumAllocated_20, (MR_Word) ((MR_Unsigned) 0U), &RevRenamingList_21);
    Supply_19 = (MR_Word) (NumAllocated_20);
    {
      TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_28_28, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_28_28, 1) = ((MR_Box) (TypeInfo_for_T_24));
    }
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_28_28, TypeInfo_28_28, (MR_Word) (RevRenamingList_21), &conv0_Renaming_8);
    *Renaming_8 = (MR_Word) (conv0_Renaming_8);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *VarSet_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Supply_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (NamesA_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (ValuesA_11));
  }
}

static void MR_CALL 
mercury__varset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_115_116_95_109_101_114_103_101_95_114_101_110_97_109_105_110_103_95_119_105_116_104_111_117_116_95_110_97_109_101_115_95_108_111_111_112_95_95_91_49_93_95_48_6_p_0(
  MR_Integer CurVarNumB_7,
  MR_Integer NumAllocatedB_8,
  MR_Integer STATE_VARIABLE_NumAllocated_0_13,
  MR_Integer * STATE_VARIABLE_NumAllocated_14,
  MR_Word STATE_VARIABLE_RevRenaming_0_15,
  MR_Word * STATE_VARIABLE_RevRenaming_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurVarNumB_7 > NumAllocatedB_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_RevRenaming_16 = STATE_VARIABLE_RevRenaming_0_15;
      *STATE_VARIABLE_NumAllocated_14 = STATE_VARIABLE_NumAllocated_0_13;
    }
    else
    {
      MR_Word Var_11;
      MR_Word VarB_12;
      MR_Integer STATE_VARIABLE_NumAllocated_17_17 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumAllocated_0_13 + (MR_Unsigned) 1);
      MR_Word STATE_VARIABLE_RevRenaming_19_19;
      MR_Word Var_20;
      MR_Integer Var_21;
      MR_Integer next_value_of_CurVarNumB_7;
      MR_Integer next_value_of_STATE_VARIABLE_NumAllocated_0_13;
      MR_Word next_value_of_STATE_VARIABLE_RevRenaming_0_15;

      Var_11 = (MR_Word) (STATE_VARIABLE_NumAllocated_17_17);
      VarB_12 = (MR_Word) (CurVarNumB_7);
      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_20, 0) = ((MR_Box) (VarB_12));
        MR_hl_field(0, Var_20, 1) = ((MR_Box) (Var_11));
      }
      {
        STATE_VARIABLE_RevRenaming_19_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevRenaming_19_19, 0) = ((MR_Box) (Var_20));
        MR_hl_field(1, STATE_VARIABLE_RevRenaming_19_19, 1) = ((MR_Box) (STATE_VARIABLE_RevRenaming_0_15));
      }
      Var_21 = (MR_Integer) ((MR_Unsigned) CurVarNumB_7 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurVarNumB_7 = Var_21;
      next_value_of_STATE_VARIABLE_NumAllocated_0_13 = STATE_VARIABLE_NumAllocated_17_17;
      next_value_of_STATE_VARIABLE_RevRenaming_0_15 = STATE_VARIABLE_RevRenaming_19_19;
      CurVarNumB_7 = next_value_of_CurVarNumB_7;
      STATE_VARIABLE_NumAllocated_0_13 = next_value_of_STATE_VARIABLE_NumAllocated_0_13;
      STATE_VARIABLE_RevRenaming_0_15 = next_value_of_STATE_VARIABLE_RevRenaming_0_15;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__varset__simple_merge_renaming_without_names_loop_6_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word STATE_VARIABLE_SupplyB_0_13,
  MR_Word MaxSupplyB_8,
  MR_Word STATE_VARIABLE_Supply_0_14,
  MR_Word * STATE_VARIABLE_Supply_15,
  MR_Word STATE_VARIABLE_Renaming_0_16,
  MR_Word * STATE_VARIABLE_Renaming_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_26 = (MR_Integer) (STATE_VARIABLE_SupplyB_0_13);
    MR_Integer Var_27 = (MR_Integer) (MaxSupplyB_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (Var_26 == Var_27);
    if (succeeded)
    {
      *STATE_VARIABLE_Renaming_17 = STATE_VARIABLE_Renaming_0_16;
      *STATE_VARIABLE_Supply_15 = STATE_VARIABLE_Supply_0_14;
    }
    else
    {
      MR_Word TypeInfo_23_23;
      MR_Word Var_11;
      MR_Word VarB_12;
      MR_Word STATE_VARIABLE_Supply_18_18;
      MR_Word STATE_VARIABLE_SupplyB_19_19;
      MR_Word STATE_VARIABLE_Renaming_20_20;
      MR_Integer Var_28;
      MR_Integer Var_29 = (MR_Integer) (STATE_VARIABLE_Supply_0_14);
      MR_Integer Var_31;
      MR_Integer Var_32;
      MR_Word conv0_STATE_VARIABLE_Renaming_20_20;
      MR_Word next_value_of_STATE_VARIABLE_SupplyB_0_13;
      MR_Word next_value_of_STATE_VARIABLE_Supply_0_14;
      MR_Word next_value_of_STATE_VARIABLE_Renaming_0_16;

      Var_28 = (MR_Integer) ((MR_Unsigned) Var_29 + (MR_Unsigned) 1);
      Var_11 = (MR_Word) (Var_28);
      STATE_VARIABLE_Supply_18_18 = (MR_Word) (Var_28);
      Var_32 = (MR_Integer) (STATE_VARIABLE_SupplyB_0_13);
      Var_31 = (MR_Integer) ((MR_Unsigned) Var_32 + (MR_Unsigned) 1);
      VarB_12 = (MR_Word) (Var_31);
      STATE_VARIABLE_SupplyB_19_19 = (MR_Word) (Var_31);
      {
        TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_T_21));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_21, TypeInfo_23_23, TypeInfo_23_23, VarB_12, ((MR_Box) (Var_11)), (MR_Word) (STATE_VARIABLE_Renaming_0_16), &conv0_STATE_VARIABLE_Renaming_20_20);
      STATE_VARIABLE_Renaming_20_20 = (MR_Word) (conv0_STATE_VARIABLE_Renaming_20_20);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_SupplyB_0_13 = STATE_VARIABLE_SupplyB_19_19;
      next_value_of_STATE_VARIABLE_Supply_0_14 = STATE_VARIABLE_Supply_18_18;
      next_value_of_STATE_VARIABLE_Renaming_0_16 = STATE_VARIABLE_Renaming_20_20;
      STATE_VARIABLE_SupplyB_0_13 = next_value_of_STATE_VARIABLE_SupplyB_0_13;
      STATE_VARIABLE_Supply_0_14 = next_value_of_STATE_VARIABLE_Supply_0_14;
      STATE_VARIABLE_Renaming_0_16 = next_value_of_STATE_VARIABLE_Renaming_0_16;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__varset__merge_renaming_4_p_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word VarSetA_5,
  MR_Word VarSetB_6,
  MR_Word * VarSet_7,
  MR_Word * Renaming_8)
{
  MR_bool succeeded;
  MR_Word SupplyA_9 = ((MR_Word) ((MR_hl_field(0, VarSetA_5, (MR_Integer) 0))));
  MR_Word NamesA_10 = ((MR_Word) ((MR_hl_field(0, VarSetA_5, (MR_Integer) 1))));
  MR_Word ValuesA_11 = ((MR_Word) ((MR_hl_field(0, VarSetA_5, (MR_Integer) 2))));
  MR_Word SupplyB_12 = ((MR_Word) ((MR_hl_field(0, VarSetB_6, (MR_Integer) 0))));
  MR_Word NamesB_13 = ((MR_Word) ((MR_hl_field(0, VarSetB_6, (MR_Integer) 1))));
  MR_Integer NumAllocatedA_15 = (MR_Integer) (SupplyA_9);
  MR_Integer NumAllocatedB_16 = (MR_Integer) (SupplyB_12);
  MR_Word Supply_19;
  MR_Word Names_20;

  succeeded = (NumAllocatedB_16 <= (MR_Integer) 5);
  if (!(succeeded))
  {
    MR_Integer Var_40 = (MR_Integer) ((MR_Unsigned) NumAllocatedB_16 * (MR_Unsigned) 16);

    succeeded = (NumAllocatedA_15 >= Var_40);
  }
  if (succeeded)
    mercury__varset__simple_merge_renaming_loop_9_p_0(TypeInfo_for_T_31, (MR_Word) (((MR_Box) ((MR_Integer) 0))), SupplyB_12, NamesB_13, SupplyA_9, &Supply_19, NamesA_10, &Names_20, (MR_Word) ((MR_Unsigned) 0U), Renaming_8);
  else
  {
    MR_Word TypeInfo_35_35;
    MR_Word TypeInfo_38_38;
    MR_Word NamesListA_21;
    MR_Word NamesListB_22;
    MR_Integer NumAllocated_23;
    MR_Word RevNamesListSuffix_24;
    MR_Word RevRenamingList_25;
    MR_Word NamesListSuffix_26;
    MR_Word NamesList_27;
    MR_Word conv0_NamesListA_21;
    MR_Word conv1_NamesListB_22;
    MR_Word conv2_NamesListSuffix_26;
    MR_Word conv3_NamesList_27;
    MR_Word conv4_Names_20;
    MR_Word conv5_Renaming_8;

    {
      TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_35_35, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_35_35, 1) = ((MR_Box) (TypeInfo_for_T_31));
    }
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_35_35, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (NamesA_10), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_NamesListA_21);
    NamesListA_21 = (MR_Word) (conv0_NamesListA_21);
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_35_35, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (NamesB_13), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv1_NamesListB_22);
    NamesListB_22 = (MR_Word) (conv1_NamesListB_22);
    mercury__varset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_115_116_95_109_101_114_103_101_95_114_101_110_97_109_105_110_103_95_108_111_111_112_95_95_91_49_93_95_48_9_p_0((MR_Integer) 1, NumAllocatedB_16, NumAllocatedA_15, &NumAllocated_23, NamesListB_22, (MR_Word) ((MR_Unsigned) 0U), &RevNamesListSuffix_24, (MR_Word) ((MR_Unsigned) 0U), &RevRenamingList_25);
    Supply_19 = (MR_Word) (NumAllocated_23);
    {
      TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_38_38, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(0, TypeInfo_38_38, 1) = ((MR_Box) (TypeInfo_35_35));
      MR_hl_field(0, TypeInfo_38_38, 2) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
    }
    mercury__list__reverse_2_p_0(TypeInfo_38_38, (MR_Word) (RevNamesListSuffix_24), &conv2_NamesListSuffix_26);
    NamesListSuffix_26 = (MR_Word) (conv2_NamesListSuffix_26);
    mercury__list__append_3_p_1(TypeInfo_38_38, (MR_Word) (NamesListA_21), (MR_Word) (NamesListSuffix_26), &conv3_NamesList_27);
    NamesList_27 = (MR_Word) (conv3_NamesList_27);
    mercury__tree234__from_sorted_assoc_list_2_p_0(TypeInfo_35_35, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (NamesList_27), &conv4_Names_20);
    Names_20 = (MR_Word) (conv4_Names_20);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_35_35, TypeInfo_35_35, (MR_Word) (RevRenamingList_25), &conv5_Renaming_8);
    *Renaming_8 = (MR_Word) (conv5_Renaming_8);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *VarSet_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Supply_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (Names_20));
    MR_hl_field(0, base, 2) = ((MR_Box) (ValuesA_11));
  }
}

static void MR_CALL 
mercury__varset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_115_116_95_109_101_114_103_101_95_114_101_110_97_109_105_110_103_95_108_111_111_112_95_95_91_49_93_95_48_9_p_0(
  MR_Integer CurVarNumB_10,
  MR_Integer NumAllocatedB_11,
  MR_Integer STATE_VARIABLE_NumAllocated_0_22,
  MR_Integer * STATE_VARIABLE_NumAllocated_23,
  MR_Word VarNamesB_13,
  MR_Word STATE_VARIABLE_RevNamesListSuffix_0_24,
  MR_Word * STATE_VARIABLE_RevNamesListSuffix_25,
  MR_Word STATE_VARIABLE_RevRenaming_0_26,
  MR_Word * STATE_VARIABLE_RevRenaming_27)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((VarNamesB_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__varset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_115_116_95_109_101_114_103_101_95_114_101_110_97_109_105_110_103_95_108_111_111_112_95_108_101_102_116_111_118_101_114_95_95_91_49_93_95_48_6_p_0(CurVarNumB_10, NumAllocatedB_11, STATE_VARIABLE_NumAllocated_0_22, STATE_VARIABLE_NumAllocated_23, STATE_VARIABLE_RevRenaming_0_26, STATE_VARIABLE_RevRenaming_27);
      *STATE_VARIABLE_RevNamesListSuffix_25 = STATE_VARIABLE_RevNamesListSuffix_0_24;
    }
    else
    {
      MR_Word HeadVarB_16;
      MR_String HeadNameB_17;
      MR_Word TailVarNamesB_18 = ((MR_Word) ((MR_hl_field(1, VarNamesB_13, (MR_Integer) 1))));
      MR_Word Var_19;
      MR_Word VarB_20;
      MR_Word NextVarNamesB_21;
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, VarNamesB_13, (MR_Integer) 0))));
      MR_Integer STATE_VARIABLE_NumAllocated_31_31;
      MR_Word STATE_VARIABLE_RevRenaming_33_33;
      MR_Word Var_34;
      MR_Word STATE_VARIABLE_RevNamesListSuffix_35_35;
      MR_Integer Var_37;
      MR_Integer Var_43;
      MR_Integer next_value_of_CurVarNumB_10;
      MR_Integer next_value_of_STATE_VARIABLE_NumAllocated_0_22;
      MR_Word next_value_of_VarNamesB_13;
      MR_Word next_value_of_STATE_VARIABLE_RevNamesListSuffix_0_24;
      MR_Word next_value_of_STATE_VARIABLE_RevRenaming_0_26;

      HeadVarB_16 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 0))));
      HeadNameB_17 = ((MR_String) ((MR_hl_field(0, Var_30, (MR_Integer) 1))));
      STATE_VARIABLE_NumAllocated_31_31 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumAllocated_0_22 + (MR_Unsigned) 1);
      Var_19 = (MR_Word) (STATE_VARIABLE_NumAllocated_31_31);
      VarB_20 = (MR_Word) (CurVarNumB_10);
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_34, 0) = ((MR_Box) (VarB_20));
        MR_hl_field(0, Var_34, 1) = ((MR_Box) (Var_19));
      }
      {
        STATE_VARIABLE_RevRenaming_33_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevRenaming_33_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(1, STATE_VARIABLE_RevRenaming_33_33, 1) = ((MR_Box) (STATE_VARIABLE_RevRenaming_0_26));
      }
      Var_43 = (MR_Integer) (HeadVarB_16);
      succeeded = (CurVarNumB_10 == Var_43);
      if (succeeded)
      {
        MR_Word Var_36;

        {
          Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_36, 0) = ((MR_Box) (Var_19));
          MR_hl_field(0, Var_36, 1) = ((MR_Box) (HeadNameB_17));
        }
        {
          STATE_VARIABLE_RevNamesListSuffix_35_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevNamesListSuffix_35_35, 0) = ((MR_Box) (Var_36));
          MR_hl_field(1, STATE_VARIABLE_RevNamesListSuffix_35_35, 1) = ((MR_Box) (STATE_VARIABLE_RevNamesListSuffix_0_24));
        }
        NextVarNamesB_21 = TailVarNamesB_18;
      }
      else
      {
        NextVarNamesB_21 = VarNamesB_13;
        STATE_VARIABLE_RevNamesListSuffix_35_35 = STATE_VARIABLE_RevNamesListSuffix_0_24;
      }
      Var_37 = (MR_Integer) ((MR_Unsigned) CurVarNumB_10 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurVarNumB_10 = Var_37;
      next_value_of_STATE_VARIABLE_NumAllocated_0_22 = STATE_VARIABLE_NumAllocated_31_31;
      next_value_of_VarNamesB_13 = NextVarNamesB_21;
      next_value_of_STATE_VARIABLE_RevNamesListSuffix_0_24 = STATE_VARIABLE_RevNamesListSuffix_35_35;
      next_value_of_STATE_VARIABLE_RevRenaming_0_26 = STATE_VARIABLE_RevRenaming_33_33;
      CurVarNumB_10 = next_value_of_CurVarNumB_10;
      STATE_VARIABLE_NumAllocated_0_22 = next_value_of_STATE_VARIABLE_NumAllocated_0_22;
      VarNamesB_13 = next_value_of_VarNamesB_13;
      STATE_VARIABLE_RevNamesListSuffix_0_24 = next_value_of_STATE_VARIABLE_RevNamesListSuffix_0_24;
      STATE_VARIABLE_RevRenaming_0_26 = next_value_of_STATE_VARIABLE_RevRenaming_0_26;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__varset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_115_116_95_109_101_114_103_101_95_114_101_110_97_109_105_110_103_95_108_111_111_112_95_108_101_102_116_111_118_101_114_95_95_91_49_93_95_48_6_p_0(
  MR_Integer CurVarNumB_7,
  MR_Integer NumAllocatedB_8,
  MR_Integer STATE_VARIABLE_NumAllocated_0_13,
  MR_Integer * STATE_VARIABLE_NumAllocated_14,
  MR_Word STATE_VARIABLE_RevRenaming_0_15,
  MR_Word * STATE_VARIABLE_RevRenaming_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurVarNumB_7 > NumAllocatedB_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_RevRenaming_16 = STATE_VARIABLE_RevRenaming_0_15;
      *STATE_VARIABLE_NumAllocated_14 = STATE_VARIABLE_NumAllocated_0_13;
    }
    else
    {
      MR_Word Var_11;
      MR_Word VarB_12;
      MR_Integer STATE_VARIABLE_NumAllocated_17_17 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumAllocated_0_13 + (MR_Unsigned) 1);
      MR_Word STATE_VARIABLE_RevRenaming_19_19;
      MR_Word Var_20;
      MR_Integer Var_21;
      MR_Integer next_value_of_CurVarNumB_7;
      MR_Integer next_value_of_STATE_VARIABLE_NumAllocated_0_13;
      MR_Word next_value_of_STATE_VARIABLE_RevRenaming_0_15;

      Var_11 = (MR_Word) (STATE_VARIABLE_NumAllocated_17_17);
      VarB_12 = (MR_Word) (CurVarNumB_7);
      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_20, 0) = ((MR_Box) (VarB_12));
        MR_hl_field(0, Var_20, 1) = ((MR_Box) (Var_11));
      }
      {
        STATE_VARIABLE_RevRenaming_19_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevRenaming_19_19, 0) = ((MR_Box) (Var_20));
        MR_hl_field(1, STATE_VARIABLE_RevRenaming_19_19, 1) = ((MR_Box) (STATE_VARIABLE_RevRenaming_0_15));
      }
      Var_21 = (MR_Integer) ((MR_Unsigned) CurVarNumB_7 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurVarNumB_7 = Var_21;
      next_value_of_STATE_VARIABLE_NumAllocated_0_13 = STATE_VARIABLE_NumAllocated_17_17;
      next_value_of_STATE_VARIABLE_RevRenaming_0_15 = STATE_VARIABLE_RevRenaming_19_19;
      CurVarNumB_7 = next_value_of_CurVarNumB_7;
      STATE_VARIABLE_NumAllocated_0_13 = next_value_of_STATE_VARIABLE_NumAllocated_0_13;
      STATE_VARIABLE_RevRenaming_0_15 = next_value_of_STATE_VARIABLE_RevRenaming_0_15;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__varset__simple_merge_renaming_loop_9_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word STATE_VARIABLE_SupplyB_0_19,
  MR_Word MaxSupplyB_11,
  MR_Word NamesB_12,
  MR_Word STATE_VARIABLE_Supply_0_20,
  MR_Word * STATE_VARIABLE_Supply_21,
  MR_Word STATE_VARIABLE_Names_0_22,
  MR_Word * STATE_VARIABLE_Names_23,
  MR_Word STATE_VARIABLE_Renaming_0_24,
  MR_Word * STATE_VARIABLE_Renaming_25)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_41 = (MR_Integer) (STATE_VARIABLE_SupplyB_0_19);
    MR_Integer Var_42 = (MR_Integer) (MaxSupplyB_11);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (Var_41 == Var_42);
    if (succeeded)
    {
      *STATE_VARIABLE_Renaming_25 = STATE_VARIABLE_Renaming_0_24;
      *STATE_VARIABLE_Names_23 = STATE_VARIABLE_Names_0_22;
      *STATE_VARIABLE_Supply_21 = STATE_VARIABLE_Supply_0_20;
    }
    else
    {
      MR_Word TypeInfo_38_38;
      MR_Word Var_16;
      MR_Word VarB_17;
      MR_Word STATE_VARIABLE_Supply_26_26;
      MR_Word STATE_VARIABLE_SupplyB_27_27;
      MR_Word STATE_VARIABLE_Names_28_28;
      MR_Word STATE_VARIABLE_Renaming_29_29;
      MR_Integer Var_43;
      MR_Integer Var_44 = (MR_Integer) (STATE_VARIABLE_Supply_0_20);
      MR_Integer Var_46;
      MR_Integer Var_47;
      MR_Word TypeInfo_32_32;
      MR_String NameB_18;
      MR_Box conv0_NameB_18;
      MR_Word conv1_STATE_VARIABLE_Renaming_29_29;
      MR_Word next_value_of_STATE_VARIABLE_SupplyB_0_19;
      MR_Word next_value_of_STATE_VARIABLE_Supply_0_20;
      MR_Word next_value_of_STATE_VARIABLE_Names_0_22;
      MR_Word next_value_of_STATE_VARIABLE_Renaming_0_24;

      Var_43 = (MR_Integer) ((MR_Unsigned) Var_44 + (MR_Unsigned) 1);
      Var_16 = (MR_Word) (Var_43);
      STATE_VARIABLE_Supply_26_26 = (MR_Word) (Var_43);
      Var_47 = (MR_Integer) (STATE_VARIABLE_SupplyB_0_19);
      Var_46 = (MR_Integer) ((MR_Unsigned) Var_47 + (MR_Unsigned) 1);
      VarB_17 = (MR_Word) (Var_46);
      STATE_VARIABLE_SupplyB_27_27 = (MR_Word) (Var_46);
      {
        TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_32_32, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_32_32, 1) = ((MR_Box) (TypeInfo_for_T_30));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_30, TypeInfo_32_32, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NamesB_12, VarB_17, &conv0_NameB_18);
      if (succeeded)
      {
        NameB_18 = ((MR_String) (conv0_NameB_18));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_30, TypeInfo_32_32, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_16, ((MR_Box) (NameB_18)), STATE_VARIABLE_Names_0_22, &STATE_VARIABLE_Names_28_28);
      else
        STATE_VARIABLE_Names_28_28 = STATE_VARIABLE_Names_0_22;
      {
        TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_38_38, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_38_38, 1) = ((MR_Box) (TypeInfo_for_T_30));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_30, TypeInfo_38_38, TypeInfo_38_38, VarB_17, ((MR_Box) (Var_16)), (MR_Word) (STATE_VARIABLE_Renaming_0_24), &conv1_STATE_VARIABLE_Renaming_29_29);
      STATE_VARIABLE_Renaming_29_29 = (MR_Word) (conv1_STATE_VARIABLE_Renaming_29_29);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_SupplyB_0_19 = STATE_VARIABLE_SupplyB_27_27;
      next_value_of_STATE_VARIABLE_Supply_0_20 = STATE_VARIABLE_Supply_26_26;
      next_value_of_STATE_VARIABLE_Names_0_22 = STATE_VARIABLE_Names_28_28;
      next_value_of_STATE_VARIABLE_Renaming_0_24 = STATE_VARIABLE_Renaming_29_29;
      STATE_VARIABLE_SupplyB_0_19 = next_value_of_STATE_VARIABLE_SupplyB_0_19;
      STATE_VARIABLE_Supply_0_20 = next_value_of_STATE_VARIABLE_Supply_0_20;
      STATE_VARIABLE_Names_0_22 = next_value_of_STATE_VARIABLE_Names_0_22;
      STATE_VARIABLE_Renaming_0_24 = next_value_of_STATE_VARIABLE_Renaming_0_24;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__varset__set_bindings_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Values_4,
  MR_Word STATE_VARIABLE_VarSet_0_6,
  MR_Word * STATE_VARIABLE_VarSet_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_6, (MR_Integer) 1))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarSet_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Values_4));
  }
}

MR_Word MR_CALL 
mercury__varset__set_bindings_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word STATE_VARIABLE_VarSet_0_6,
  MR_Word Values_5)
{
  MR_Word STATE_VARIABLE_VarSet_7;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_6, (MR_Integer) 0))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_6, (MR_Integer) 1))));

  {
    STATE_VARIABLE_VarSet_7 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_VarSet_7, 0) = ((MR_Box) (Var_9));
    MR_hl_field(0, STATE_VARIABLE_VarSet_7, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, STATE_VARIABLE_VarSet_7, 2) = ((MR_Box) (Values_5));
  }
  return STATE_VARIABLE_VarSet_7;
}

void MR_CALL 
mercury__varset__get_bindings_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word VarSet_3,
  MR_Word * Values_4)
{
  *Values_4 = ((MR_Word) ((MR_hl_field(0, VarSet_3, (MR_Integer) 2))));
}

MR_Word MR_CALL 
mercury__varset__get_bindings_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word VarSet_3)
{
  MR_Word Values_4 = ((MR_Word) ((MR_hl_field(0, VarSet_3, (MR_Integer) 2))));

  return Values_4;
}

void MR_CALL 
mercury__varset__lookup_vars_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word VarSet_3,
  MR_Word * Values_4)
{
  *Values_4 = ((MR_Word) ((MR_hl_field(0, VarSet_3, (MR_Integer) 2))));
}

MR_Word MR_CALL 
mercury__varset__lookup_vars_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word VarSet_3)
{
  MR_Word Values_4 = ((MR_Word) ((MR_hl_field(0, VarSet_3, (MR_Integer) 2))));

  return Values_4;
}

MR_bool MR_CALL 
mercury__varset__search_var_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word VarSet_4,
  MR_Word Var_5,
  MR_Word * Value_6)
{
  MR_bool succeeded;
  MR_Word TypeInfo_12_12;
  MR_Word TypeInfo_14_14;
  MR_Word Values_7 = ((MR_Word) ((MR_hl_field(0, VarSet_4, (MR_Integer) 2))));
  MR_Box conv0_Value_6;

  {
    TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_12_12, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_for_T_10));
  }
  {
    TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
    MR_hl_field(0, TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_10));
  }
  succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_10, TypeInfo_12_12, TypeInfo_14_14, (MR_Word) (Values_7), Var_5, &conv0_Value_6);
  if (succeeded)
  {
    *Value_6 = ((MR_Word) (conv0_Value_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__varset__bind_vars_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_VarSet_0_7,
  MR_Word * STATE_VARIABLE_VarSet_8)
{
  MR_Word TypeInfo_11_11;
  MR_Word TypeInfo_13_13;
  MR_Word VarsValues_6;
  MR_Word conv0_VarsValues_6;

  {
    TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_for_T_9));
  }
  {
    TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
    MR_hl_field(0, TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_T_9));
  }
  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_11_11, TypeInfo_13_13, (MR_Word) (Subst_4), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_VarsValues_6);
  VarsValues_6 = (MR_Word) (conv0_VarsValues_6);
  mercury__varset__bind_vars_loop_3_p_0(TypeInfo_for_T_9, VarsValues_6, STATE_VARIABLE_VarSet_0_7, STATE_VARIABLE_VarSet_8);
}

MR_Word MR_CALL 
mercury__varset__bind_vars_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word STATE_VARIABLE_VarSet_0_6,
  MR_Word Subst_5)
{
  MR_Word STATE_VARIABLE_VarSet_7;
  MR_Word TypeInfo_11_11;
  MR_Word TypeInfo_13_13;
  MR_Word VarsValues_9;
  MR_Word conv0_VarsValues_9;

  {
    TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_for_T_8));
  }
  {
    TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
    MR_hl_field(0, TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_T_8));
  }
  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_11_11, TypeInfo_13_13, (MR_Word) (Subst_5), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_VarsValues_9);
  VarsValues_9 = (MR_Word) (conv0_VarsValues_9);
  mercury__varset__bind_vars_loop_3_p_0(TypeInfo_for_T_8, VarsValues_9, STATE_VARIABLE_VarSet_0_6, &STATE_VARIABLE_VarSet_7);
  return STATE_VARIABLE_VarSet_7;
}

void MR_CALL 
mercury__varset__bind_vars_loop_3_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_VarSet_0_2,
  MR_Word * STATE_VARIABLE_VarSet_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_VarSet_3 = STATE_VARIABLE_VarSet_0_2;
    else
    {
      MR_Word Var_7;
      MR_Word Value_8;
      MR_Word VarsValues_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_VarSet_14_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_VarSet_0_2;

      Var_7 = ((MR_Word) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
      Value_8 = ((MR_Word) ((MR_hl_field(0, Var_13, (MR_Integer) 1))));
      mercury__varset__bind_var_4_p_0(TypeInfo_for_T_15, Var_7, Value_8, STATE_VARIABLE_VarSet_0_2, &STATE_VARIABLE_VarSet_14_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = VarsValues_9;
      next_value_of_STATE_VARIABLE_VarSet_0_2 = STATE_VARIABLE_VarSet_14_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VarSet_0_2 = next_value_of_STATE_VARIABLE_VarSet_0_2;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__varset__bind_var_3_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word STATE_VARIABLE_VarSet_0_8,
  MR_Word Var_6,
  MR_Word Value_7)
{
  MR_Word STATE_VARIABLE_VarSet_9;

  mercury__varset__bind_var_4_p_0(TypeInfo_for_T_10, Var_6, Value_7, STATE_VARIABLE_VarSet_0_8, &STATE_VARIABLE_VarSet_9);
  return STATE_VARIABLE_VarSet_9;
}

void MR_CALL 
mercury__varset__bind_var_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word Var_5,
  MR_Word Value_6,
  MR_Word STATE_VARIABLE_VarSet_0_10,
  MR_Word * STATE_VARIABLE_VarSet_11)
{
  MR_Word TypeInfo_19_19;
  MR_Word TypeInfo_21_21;
  MR_Word Values0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2))));
  MR_Word Values_9;
  MR_Word conv0_Values_9;
  MR_Word Var_14;
  MR_Word Var_15;

  {
    TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_19_19, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_T_17));
  }
  {
    TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_21_21, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
    MR_hl_field(0, TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_17));
  }
  mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_17, TypeInfo_19_19, TypeInfo_21_21, Var_5, ((MR_Box) (Value_6)), (MR_Word) (Values0_8), &conv0_Values_9);
  Values_9 = (MR_Word) (conv0_Values_9);
  Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0))));
  Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarSet_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 2) = ((MR_Box) (Values_9));
  }
}

MR_bool MR_CALL 
mercury__varset__search_name_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word VarSet_4,
  MR_Word Var_5,
  MR_String * Name_6)
{
  MR_bool succeeded;
  MR_Word TypeInfo_12_12;
  MR_Word Names_8 = ((MR_Word) ((MR_hl_field(0, VarSet_4, (MR_Integer) 1))));
  MR_Box conv0_Name_6;

  {
    TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_12_12, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_for_T_10));
  }
  succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_10, TypeInfo_12_12, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Names_8, Var_5, &conv0_Name_6);
  if (succeeded)
  {
    *Name_6 = ((MR_String) (conv0_Name_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__varset__lookup_name_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word VarSet_5,
  MR_Word Id_6,
  MR_String Prefix_7,
  MR_String * Name_8)
{
  mercury__varset__lookup_name_default_prefix_4_p_0(TypeInfo_for_T_9, VarSet_5, Id_6, Prefix_7, Name_8);
}

MR_String MR_CALL 
mercury__varset__lookup_name_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word VarSet_5,
  MR_Word Id_6,
  MR_String Prefix_7)
{
  MR_String Name_8;

  mercury__varset__lookup_name_default_prefix_4_p_0(TypeInfo_for_T_9, VarSet_5, Id_6, Prefix_7, &Name_8);
  return Name_8;
}

MR_String MR_CALL 
mercury__varset__lookup_name_default_prefix_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word VarSet_5,
  MR_Word Id_6,
  MR_String Prefix_7)
{
  MR_String Name_8;

  mercury__varset__lookup_name_default_prefix_4_p_0(TypeInfo_for_T_9, VarSet_5, Id_6, Prefix_7, &Name_8);
  return Name_8;
}

void MR_CALL 
mercury__varset__lookup_name_default_prefix_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word VarSet_5,
  MR_Word Id_6,
  MR_String Prefix_7,
  MR_String * Name_8)
{
  MR_bool succeeded;
  MR_String NamePrime_9;
  MR_Word TypeInfo_12_17;
  MR_Word Names_14 = ((MR_Word) ((MR_hl_field(0, VarSet_5, (MR_Integer) 1))));
  MR_Box conv0_NamePrime_9;

  {
    TypeInfo_12_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_12_17, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_12_17, 1) = ((MR_Box) (TypeInfo_for_T_12));
  }
  succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_12, TypeInfo_12_17, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Names_14, Id_6, &conv0_NamePrime_9);
  if (succeeded)
  {
    NamePrime_9 = ((MR_String) (conv0_NamePrime_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *Name_8 = NamePrime_9;
  else
  {
    MR_Integer VarNum_10 = (MR_Integer) (Id_6);
    MR_String Var_11;

{
#define MR_PROC_LABEL mercury__varset__lookup_name_default_prefix_4_p_0

	MR_Integer I;
	MR_String S;

	I = VarNum_10 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_11  = S;
}
    mercury__string__append_3_p_2(Prefix_7, Var_11, Name_8);
  }
}

MR_String MR_CALL 
mercury__varset__lookup_name_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word VarSet_4,
  MR_Word Var_5)
{
  MR_String Name_6;

  mercury__varset__lookup_name_3_p_0(TypeInfo_for_T_7, VarSet_4, Var_5, &Name_6);
  return Name_6;
}

void MR_CALL 
mercury__varset__lookup_name_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word VarSet_4,
  MR_Word Var_5,
  MR_String * Name_6)
{
  MR_bool succeeded;
  MR_String NamePrime_7;
  MR_Word TypeInfo_12_16;
  MR_Word Names_13 = ((MR_Word) ((MR_hl_field(0, VarSet_4, (MR_Integer) 1))));
  MR_Box conv0_NamePrime_7;

  {
    TypeInfo_12_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_12_16, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_12_16, 1) = ((MR_Box) (TypeInfo_for_T_11));
  }
  succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_11, TypeInfo_12_16, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Names_13, Var_5, &conv0_NamePrime_7);
  if (succeeded)
  {
    NamePrime_7 = ((MR_String) (conv0_NamePrime_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *Name_6 = NamePrime_7;
  else
  {
    MR_Integer VarNum_8 = (MR_Integer) (Var_5);
    MR_String Var_10;

{
#define MR_PROC_LABEL mercury__varset__lookup_name_3_p_0

	MR_Integer I;
	MR_String S;

	I = VarNum_8 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_10  = S;
}
    mercury__string__append_3_p_2((MR_String) "V_", Var_10, Name_6);
  }
}

MR_Word MR_CALL 
mercury__varset__unname_var_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word STATE_VARIABLE_VarSet_0_6,
  MR_Word Var_5)
{
  MR_Word STATE_VARIABLE_VarSet_7;

  mercury__varset__unname_var_3_p_0(TypeInfo_for_T_8, Var_5, STATE_VARIABLE_VarSet_0_6, &STATE_VARIABLE_VarSet_7);
  return STATE_VARIABLE_VarSet_7;
}

void MR_CALL 
mercury__varset__unname_var_3_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word Var_4,
  MR_Word STATE_VARIABLE_VarSet_0_8,
  MR_Word * STATE_VARIABLE_VarSet_9)
{
  MR_Word TypeInfo_17_17;
  MR_Word Names0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_8, (MR_Integer) 1))));
  MR_Word Names_7;
  MR_Word Var_19;
  MR_Word conv0_Names_7;
  MR_Word Var_12;
  MR_Word Var_14;

  {
    TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_T_15));
  }
  mercury__tree234__delete_2_4_p_0(TypeInfo_17_17, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (Names0_6), ((MR_Box) (Var_4)), &conv0_Names_7, &Var_19);
  Names_7 = (MR_Word) (conv0_Names_7);
  Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_8, (MR_Integer) 0))));
  Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_8, (MR_Integer) 2))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarSet_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (Names_7));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_14));
  }
}

MR_Word MR_CALL 
mercury__varset__name_var_3_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word STATE_VARIABLE_VarSet_0_8,
  MR_Word Var_6,
  MR_String Name_7)
{
  MR_Word STATE_VARIABLE_VarSet_9;

  mercury__varset__name_var_4_p_0(TypeInfo_for_T_10, Var_6, Name_7, STATE_VARIABLE_VarSet_0_8, &STATE_VARIABLE_VarSet_9);
  return STATE_VARIABLE_VarSet_9;
}

void MR_CALL 
mercury__varset__name_var_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word Var_5,
  MR_String Name_6,
  MR_Word STATE_VARIABLE_VarSet_0_10,
  MR_Word * STATE_VARIABLE_VarSet_11)
{
  MR_Word TypeInfo_19_19;
  MR_Word Names0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1))));
  MR_Word Names_9;
  MR_Word Var_14;
  MR_Word Var_16;

  {
    TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_19_19, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_T_17));
  }
  mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_17, TypeInfo_19_19, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_5, ((MR_Box) (Name_6)), Names0_8, &Names_9);
  Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarSet_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 1) = ((MR_Box) (Names_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_16));
  }
}

void MR_CALL 
mercury__varset__vars_2_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word VarSet_3,
  MR_Word * Vars_4)
{
  MR_Word TypeInfo_13_13;
  MR_Word MaxId_5 = ((MR_Word) ((MR_hl_field(0, VarSet_3, (MR_Integer) 0))));
  MR_Word RevVars_7;
  MR_Word conv0_Vars_4;

  mercury__varset__vars_loop_4_p_0(TypeInfo_for_T_11, (MR_Word) (((MR_Box) ((MR_Integer) 0))), MaxId_5, (MR_Word) ((MR_Unsigned) 0U), &RevVars_7);
  {
    TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_T_11));
  }
  mercury__list__reverse_2_p_0(TypeInfo_13_13, (MR_Word) (RevVars_7), &conv0_Vars_4);
  *Vars_4 = (MR_Word) (conv0_Vars_4);
}

MR_Word MR_CALL 
mercury__varset__vars_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word VarSet_3)
{
  MR_Word Vars_4;
  MR_Word TypeInfo_13_13;
  MR_Word MaxId_6 = ((MR_Word) ((MR_hl_field(0, VarSet_3, (MR_Integer) 0))));
  MR_Word RevVars_8;
  MR_Word conv0_Vars_4;

  mercury__varset__vars_loop_4_p_0(TypeInfo_for_T_5, (MR_Word) (((MR_Box) ((MR_Integer) 0))), MaxId_6, (MR_Word) ((MR_Unsigned) 0U), &RevVars_8);
  {
    TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  mercury__list__reverse_2_p_0(TypeInfo_13_13, (MR_Word) (RevVars_8), &conv0_Vars_4);
  Vars_4 = (MR_Word) (conv0_Vars_4);
  return Vars_4;
}

void MR_CALL 
mercury__varset__vars_loop_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Cur_5,
  MR_Word Max_6,
  MR_Word STATE_VARIABLE_RevVars_0_10,
  MR_Word * STATE_VARIABLE_RevVars_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_16 = (MR_Integer) (Cur_5);
    MR_Integer Var_17 = (MR_Integer) (Max_6);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (Var_16 == Var_17);
    if (succeeded)
      *STATE_VARIABLE_RevVars_11 = STATE_VARIABLE_RevVars_0_10;
    else
    {
      MR_Word Var_8;
      MR_Word Next_9;
      MR_Word STATE_VARIABLE_RevVars_12_12;
      MR_Integer Var_18;
      MR_Integer Var_19 = (MR_Integer) (Cur_5);
      MR_Word next_value_of_Cur_5;
      MR_Word next_value_of_STATE_VARIABLE_RevVars_0_10;

      Var_18 = (MR_Integer) ((MR_Unsigned) Var_19 + (MR_Unsigned) 1);
      Var_8 = (MR_Word) (Var_18);
      Next_9 = (MR_Word) (Var_18);
      {
        STATE_VARIABLE_RevVars_12_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevVars_12_12, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, STATE_VARIABLE_RevVars_12_12, 1) = ((MR_Box) (STATE_VARIABLE_RevVars_0_10));
      }
      // direct tailcall eliminated
      ;
      next_value_of_Cur_5 = Next_9;
      next_value_of_STATE_VARIABLE_RevVars_0_10 = STATE_VARIABLE_RevVars_12_12;
      Cur_5 = next_value_of_Cur_5;
      STATE_VARIABLE_RevVars_0_10 = next_value_of_STATE_VARIABLE_RevVars_0_10;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__varset__delete_sorted_vars_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word STATE_VARIABLE_VarSet_0_6,
  MR_Word DeleteVars_5)
{
  MR_Word STATE_VARIABLE_VarSet_7;

  mercury__varset__delete_sorted_vars_3_p_0(TypeInfo_for_T_8, DeleteVars_5, STATE_VARIABLE_VarSet_0_6, &STATE_VARIABLE_VarSet_7);
  return STATE_VARIABLE_VarSet_7;
}

void MR_CALL 
mercury__varset__delete_sorted_vars_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word DeleteVars_4,
  MR_Word STATE_VARIABLE_VarSet_0_11,
  MR_Word * STATE_VARIABLE_VarSet_12)
{
  MR_Word TypeInfo_15_15;
  MR_Word TypeInfo_18_18;
  MR_Word MaxId_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_11, (MR_Integer) 0))));
  MR_Word Names0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_11, (MR_Integer) 1))));
  MR_Word Values0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_11, (MR_Integer) 2))));
  MR_Word Names_9;
  MR_Word Values_10;
  MR_Word conv0_Names_9;
  MR_Word conv1_Values_10;

  {
    TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_13));
  }
  mercury__map__delete_sorted_list_3_p_0(TypeInfo_15_15, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (DeleteVars_4), (MR_Word) (Names0_7), &conv0_Names_9);
  Names_9 = (MR_Word) (conv0_Names_9);
  {
    TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
    MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_13));
  }
  mercury__map__delete_sorted_list_3_p_0(TypeInfo_15_15, TypeInfo_18_18, (MR_Word) (DeleteVars_4), (MR_Word) (Values0_8), &conv1_Values_10);
  Values_10 = (MR_Word) (conv1_Values_10);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarSet_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MaxId_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (Names_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Values_10));
  }
}

MR_Word MR_CALL 
mercury__varset__delete_vars_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word STATE_VARIABLE_VarSet_0_6,
  MR_Word DeleteVars_5)
{
  MR_Word STATE_VARIABLE_VarSet_7;

  mercury__varset__delete_vars_3_p_0(TypeInfo_for_T_8, DeleteVars_5, STATE_VARIABLE_VarSet_0_6, &STATE_VARIABLE_VarSet_7);
  return STATE_VARIABLE_VarSet_7;
}

void MR_CALL 
mercury__varset__delete_vars_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word DeleteVars_4,
  MR_Word STATE_VARIABLE_VarSet_0_11,
  MR_Word * STATE_VARIABLE_VarSet_12)
{
  MR_Word TypeInfo_15_15;
  MR_Word TypeInfo_18_18;
  MR_Word MaxId_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_11, (MR_Integer) 0))));
  MR_Word Names0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_11, (MR_Integer) 1))));
  MR_Word Values0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_11, (MR_Integer) 2))));
  MR_Word Names_9;
  MR_Word Values_10;
  MR_Word conv0_Names_9;
  MR_Word conv1_Values_10;

  {
    TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_13));
  }
  mercury__map__delete_list_3_p_0(TypeInfo_15_15, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (DeleteVars_4), (MR_Word) (Names0_7), &conv0_Names_9);
  Names_9 = (MR_Word) (conv0_Names_9);
  {
    TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
    MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_13));
  }
  mercury__map__delete_list_3_p_0(TypeInfo_15_15, TypeInfo_18_18, (MR_Word) (DeleteVars_4), (MR_Word) (Values0_8), &conv1_Values_10);
  Values_10 = (MR_Word) (conv1_Values_10);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarSet_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MaxId_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (Names_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Values_10));
  }
}

MR_Word MR_CALL 
mercury__varset__delete_var_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word STATE_VARIABLE_VarSet_0_6,
  MR_Word DeleteVar_5)
{
  MR_Word STATE_VARIABLE_VarSet_7;

  mercury__varset__delete_var_3_p_0(TypeInfo_for_T_8, DeleteVar_5, STATE_VARIABLE_VarSet_0_6, &STATE_VARIABLE_VarSet_7);
  return STATE_VARIABLE_VarSet_7;
}

void MR_CALL 
mercury__varset__delete_var_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word DeleteVar_4,
  MR_Word STATE_VARIABLE_VarSet_0_11,
  MR_Word * STATE_VARIABLE_VarSet_12)
{
  MR_Word TypeInfo_15_15;
  MR_Word TypeInfo_18_18;
  MR_Word MaxId_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_11, (MR_Integer) 0))));
  MR_Word Names0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_11, (MR_Integer) 1))));
  MR_Word Values0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_11, (MR_Integer) 2))));
  MR_Word Names_9;
  MR_Word Values_10;
  MR_Word Var_19;
  MR_Word conv0_Names_9;
  MR_Word Var_20;
  MR_Word conv1_Values_10;

  {
    TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_13));
  }
  mercury__tree234__delete_2_4_p_0(TypeInfo_15_15, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (Names0_7), ((MR_Box) (DeleteVar_4)), &conv0_Names_9, &Var_19);
  Names_9 = (MR_Word) (conv0_Names_9);
  {
    TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
    MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_13));
  }
  mercury__tree234__delete_2_4_p_0(TypeInfo_15_15, TypeInfo_18_18, (MR_Word) (Values0_8), ((MR_Box) (DeleteVar_4)), &conv1_Values_10, &Var_20);
  Values_10 = (MR_Word) (conv1_Values_10);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarSet_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MaxId_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (Names_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Values_10));
  }
}

void MR_CALL 
mercury__varset__new_vars_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Integer NumVars_5,
  MR_Word * NewVars_6,
  MR_Word STATE_VARIABLE_VarSet_0_9,
  MR_Word * STATE_VARIABLE_VarSet_10)
{
  MR_Word TypeInfo_14_14;
  MR_Word RevNewVars_8;
  MR_Word conv0_NewVars_6;

  mercury__varset__new_vars_loop_5_p_0(TypeInfo_for_T_12, NumVars_5, (MR_Word) ((MR_Unsigned) 0U), &RevNewVars_8, STATE_VARIABLE_VarSet_0_9, STATE_VARIABLE_VarSet_10);
  {
    TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_12));
  }
  mercury__list__reverse_2_p_0(TypeInfo_14_14, (MR_Word) (RevNewVars_8), &conv0_NewVars_6);
  *NewVars_6 = (MR_Word) (conv0_NewVars_6);
}

void MR_CALL 
mercury__varset__new_vars_loop_5_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Integer NumVars_6,
  MR_Word STATE_VARIABLE_RevNewVars_0_10,
  MR_Word * STATE_VARIABLE_RevNewVars_11,
  MR_Word STATE_VARIABLE_VarSet_0_12,
  MR_Word * STATE_VARIABLE_VarSet_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (NumVars_6 > (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word Var_9;
      MR_Word STATE_VARIABLE_VarSet_15_15;
      MR_Word STATE_VARIABLE_RevNewVars_16_16;
      MR_Integer Var_17;
      MR_Word MaxId0_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_12, (MR_Integer) 0))));
      MR_Word MaxId_25;
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_12, (MR_Integer) 1))));
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_12, (MR_Integer) 2))));
      MR_Integer Var_31;
      MR_Integer Var_32 = (MR_Integer) (MaxId0_24);
      MR_Integer next_value_of_NumVars_6;
      MR_Word next_value_of_STATE_VARIABLE_RevNewVars_0_10;
      MR_Word next_value_of_STATE_VARIABLE_VarSet_0_12;

      Var_31 = (MR_Integer) ((MR_Unsigned) Var_32 + (MR_Unsigned) 1);
      Var_9 = (MR_Word) (Var_31);
      MaxId_25 = (MR_Word) (Var_31);
      {
        STATE_VARIABLE_VarSet_15_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_VarSet_15_15, 0) = ((MR_Box) (MaxId_25));
        MR_hl_field(0, STATE_VARIABLE_VarSet_15_15, 1) = ((MR_Box) (Var_26));
        MR_hl_field(0, STATE_VARIABLE_VarSet_15_15, 2) = ((MR_Box) (Var_27));
      }
      {
        STATE_VARIABLE_RevNewVars_16_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevNewVars_16_16, 0) = ((MR_Box) (Var_9));
        MR_hl_field(1, STATE_VARIABLE_RevNewVars_16_16, 1) = ((MR_Box) (STATE_VARIABLE_RevNewVars_0_10));
      }
      Var_17 = (MR_Integer) ((MR_Unsigned) NumVars_6 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_NumVars_6 = Var_17;
      next_value_of_STATE_VARIABLE_RevNewVars_0_10 = STATE_VARIABLE_RevNewVars_16_16;
      next_value_of_STATE_VARIABLE_VarSet_0_12 = STATE_VARIABLE_VarSet_15_15;
      NumVars_6 = next_value_of_NumVars_6;
      STATE_VARIABLE_RevNewVars_0_10 = next_value_of_STATE_VARIABLE_RevNewVars_0_10;
      STATE_VARIABLE_VarSet_0_12 = next_value_of_STATE_VARIABLE_VarSet_0_12;
      continue;
    }
    else
    {
      succeeded = (NumVars_6 == (MR_Integer) 0);
      if (!(succeeded))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140varset.new_vars_loop\'/5", (MR_String) "invalid call");
          return;
        }
      *STATE_VARIABLE_VarSet_13 = STATE_VARIABLE_VarSet_0_12;
      *STATE_VARIABLE_RevNewVars_11 = STATE_VARIABLE_RevNewVars_0_10;
    }
    break;
  }
}

void MR_CALL 
mercury__varset__new_maybe_named_var_4_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word MaybeName_5,
  MR_Word * Var_6,
  MR_Word STATE_VARIABLE_VarSet_0_14,
  MR_Word * STATE_VARIABLE_VarSet_15)
{
  MR_Word MaxId0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_14, (MR_Integer) 0))));
  MR_Word Names0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_14, (MR_Integer) 1))));
  MR_Word Values_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_14, (MR_Integer) 2))));
  MR_Word MaxId_11;
  MR_Word Names_12;
  MR_Integer Var_20;
  MR_Integer Var_21 = (MR_Integer) (MaxId0_8);

  Var_20 = (MR_Integer) ((MR_Unsigned) Var_21 + (MR_Unsigned) 1);
  *Var_6 = (MR_Word) (Var_20);
  MaxId_11 = (MR_Word) (Var_20);
  if ((MaybeName_5 == (MR_Word) ((MR_Unsigned) 0U)))
    Names_12 = Names0_9;
  else
  {
    MR_Word TypeInfo_18_18;
    MR_String Name_13 = ((MR_String) ((MR_hl_field(1, MaybeName_5, (MR_Integer) 0))));

    {
      TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_16));
    }
    mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_16, TypeInfo_18_18, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), *Var_6, ((MR_Box) (Name_13)), Names0_9, &Names_12);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarSet_15 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MaxId_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Names_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Values_10));
  }
}

void MR_CALL 
mercury__varset__new_uniquely_named_var_4_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_String Name_5,
  MR_Word * Var_6,
  MR_Word STATE_VARIABLE_VarSet_0_14,
  MR_Word * STATE_VARIABLE_VarSet_15)
{
  MR_Word TypeInfo_25_25;
  MR_Word MaxId0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_14, (MR_Integer) 0))));
  MR_Word Names0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_14, (MR_Integer) 1))));
  MR_Word Values_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_14, (MR_Integer) 2))));
  MR_Word MaxId_11;
  MR_Integer N_12;
  MR_Word Names_13;
  MR_String Var_16;
  MR_String Var_27;
  MR_String Var_35;
  MR_Integer Var_37 = (MR_Integer) (MaxId0_8);

  N_12 = (MR_Integer) ((MR_Unsigned) Var_37 + (MR_Unsigned) 1);
  *Var_6 = (MR_Word) (N_12);
  MaxId_11 = (MR_Word) (N_12);
  mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__varset_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), N_12, &Var_27);
  mercury__string__append_3_p_2((MR_String) "_", Var_27, &Var_35);
  mercury__string__append_3_p_2(Name_5, Var_35, &Var_16);
  {
    TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_25_25, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_for_T_23));
  }
  mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_23, TypeInfo_25_25, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), *Var_6, ((MR_Box) (Var_16)), Names0_9, &Names_13);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarSet_15 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MaxId_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Names_13));
    MR_hl_field(0, base, 2) = ((MR_Box) (Values_10));
  }
}

void MR_CALL 
mercury__varset__new_named_var_4_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_String Name_5,
  MR_Word * Var_6,
  MR_Word STATE_VARIABLE_VarSet_0_13,
  MR_Word * STATE_VARIABLE_VarSet_14)
{
  MR_Word TypeInfo_17_17;
  MR_Word MaxId0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_13, (MR_Integer) 0))));
  MR_Word Names0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_13, (MR_Integer) 1))));
  MR_Word Values_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_13, (MR_Integer) 2))));
  MR_Word MaxId_11;
  MR_Word Names_12;
  MR_Integer Var_19;
  MR_Integer Var_20 = (MR_Integer) (MaxId0_8);

  Var_19 = (MR_Integer) ((MR_Unsigned) Var_20 + (MR_Unsigned) 1);
  *Var_6 = (MR_Word) (Var_19);
  MaxId_11 = (MR_Word) (Var_19);
  {
    TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_T_15));
  }
  mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_15, TypeInfo_17_17, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), *Var_6, ((MR_Box) (Name_5)), Names0_9, &Names_12);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarSet_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MaxId_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Names_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Values_10));
  }
}

void MR_CALL 
mercury__varset__new_var_3_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word * Var_4,
  MR_Word STATE_VARIABLE_VarSet_0_8,
  MR_Word * STATE_VARIABLE_VarSet_9)
{
  MR_Word MaxId0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_8, (MR_Integer) 0))));
  MR_Word MaxId_7;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_8, (MR_Integer) 1))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_8, (MR_Integer) 2))));
  MR_Integer Var_16;
  MR_Integer Var_17 = (MR_Integer) (MaxId0_6);

  Var_16 = (MR_Integer) ((MR_Unsigned) Var_17 + (MR_Unsigned) 1);
  *Var_4 = (MR_Word) (Var_16);
  MaxId_7 = (MR_Word) (Var_16);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarSet_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MaxId_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_11));
  }
}

MR_bool MR_CALL 
mercury__varset__is_empty_1_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word VarSupply_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer Var_6 = (MR_Integer) (VarSupply_2);

  succeeded = (Var_6 == (MR_Integer) 0);
  return succeeded;
}

void MR_CALL 
mercury__varset__init_1_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * VarSet_2)
{
  *VarSet_2 = (MR_Word) (&mercury__varset_scalar_common_2[1]);
}

MR_Word MR_CALL 
mercury__varset__init_0_f_0(
  MR_Word TypeInfo_for_T_3)
{
  return (MR_Word) (&mercury__varset_scalar_common_2[1]);
}

static MR_bool MR_CALL 
mercury__varset____Unify____varset_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__varset____Unify____varset_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__varset____Compare____varset_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__varset____Compare____varset_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__varset____Unify____varset_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__varset____Unify____varset_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__varset____Compare____varset_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__varset____Compare____varset_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__varset__init(void)
{
}

void mercury__varset__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__varset__varset__type_ctor_info_varset_1);
	MR_register_type_ctor_info(&mercury__varset__varset__type_ctor_info_varset_0);
}

void mercury__varset__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__varset__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module varset.
