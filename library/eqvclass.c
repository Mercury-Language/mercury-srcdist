/*
** Automatically generated from `eqvclass.m'
** by the Mercury compiler,
** version rotd-2026-08-15
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


// :- module eqvclass.
// :- implementation.

/*
INIT mercury__eqvclass__init
ENDINIT
*/

#include "eqvclass.mih"


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
#include "fat_sparse_bitset.mih"
#include "fatter_sparse_bitset.mih"
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
#include "sparse_bitset.mih"
#include "stack.mih"
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
#include "tree_bitset.mih"
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




static const MR_VA_PseudoTypeInfo_Struct2 mercury__eqvclass____vpti_func_2__pseudo_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__eqvclass__set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__eqvclass__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__eqvclass__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo mercury__eqvclass__eqvclass__field_types_eqvclass_1_0[3];

static const MR_ConstString mercury__eqvclass__eqvclass__field_names_eqvclass_1_0[3];

static const MR_DuFunctorDesc mercury__eqvclass__eqvclass__du_functor_desc_eqvclass_1_0;

static const MR_DuFunctorDescPtr mercury__eqvclass__eqvclass__du_stag_ordered_eqvclass_1_0[1];

static const MR_DuPtagLayout mercury__eqvclass__eqvclass__du_ptag_ordered_eqvclass_1[1];

static const MR_DuFunctorDescPtr mercury__eqvclass__eqvclass__du_name_ordered_eqvclass_1[1];

static const MR_Integer mercury__eqvclass__eqvclass__functor_number_map_eqvclass_1[1];

static void MR_CALL 
mercury__eqvclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__list_0(
  MR_Word Var_51,
  MR_Word Var_52,
  MR_Word Var_53,
  MR_Integer Var_54,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10);

static void MR_CALL 
mercury__eqvclass__divide_equivalence_classes_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
mercury__eqvclass__record_partition_for_elements_4_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ElementMap_0_3,
  MR_Word * STATE_VARIABLE_ElementMap_4);

static MR_bool MR_CALL 
mercury__eqvclass__all_elements_are_in_given_partition_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word ElementMap_1,
  MR_Integer Id_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
mercury__eqvclass__add_equivalence_4_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Integer IdA_5,
  MR_Integer IdB_6,
  MR_Word EqvClass0_7,
  MR_Word * EqvClass_8);

static void MR_CALL 
mercury__eqvclass__change_partition_4_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word STATE_VARIABLE_ElementMap_0_3,
  MR_Word * STATE_VARIABLE_ElementMap_4);

static MR_bool MR_CALL 
mercury__eqvclass____Unify____eqvclass_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__eqvclass____Compare____eqvclass_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__eqvclass____Unify____partition_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__eqvclass____Compare____partition_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__eqvclass_scalar_common_1[2][3];

static /* final */ const MR_Box mercury__eqvclass_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__eqvclass_scalar_common_3[1][5];

static /* final */ const MR_Integer mercury__eqvclass_scalar_common_4[1][3];

static /* final */ const MR_Box mercury__eqvclass_scalar_common_5[1][14];




static /* final */ const MR_Box mercury__eqvclass_scalar_common_1[2][3] = {
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

static /* final */ const MR_Box mercury__eqvclass_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__eqvclass_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__eqvclass_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__eqvclass_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer mercury__eqvclass_scalar_common_4[1][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};

static /* final */ const MR_Box mercury__eqvclass_scalar_common_5[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mercury__eqvclass_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__eqvclass____vpti_func_2__pseudo_1__pseudo_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__eqvclass__set_ordlist__pti_set_ordlist_1__pseudo_1)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__eqvclass__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1)),
    ((MR_Box) (&mercury__eqvclass__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1)),
    ((MR_Box) (&mercury__eqvclass__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__eqvclass__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0))
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


static const MR_VA_PseudoTypeInfo_Struct2 mercury__eqvclass____vpti_func_2__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__eqvclass__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__eqvclass__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__eqvclass__set_ordlist__pti_set_ordlist_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__eqvclass__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo mercury__eqvclass__eqvclass__field_types_eqvclass_1_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&mercury__eqvclass__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__eqvclass__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0)
};

static const MR_ConstString mercury__eqvclass__eqvclass__field_names_eqvclass_1_0[3] = {
  (MR_String) "next_id_counter",
  (MR_String) "partition_map",
  (MR_String) "element_map"
};

static const MR_DuFunctorDesc mercury__eqvclass__eqvclass__du_functor_desc_eqvclass_1_0 = {
  (MR_String) "eqvclass",
  INT16_C(3),
  UINT16_C(6),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__eqvclass__eqvclass__field_types_eqvclass_1_0,
  mercury__eqvclass__eqvclass__field_names_eqvclass_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__eqvclass__eqvclass__du_stag_ordered_eqvclass_1_0[1] = { &mercury__eqvclass__eqvclass__du_functor_desc_eqvclass_1_0 };

static const MR_DuPtagLayout mercury__eqvclass__eqvclass__du_ptag_ordered_eqvclass_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__eqvclass__eqvclass__du_stag_ordered_eqvclass_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__eqvclass__eqvclass__du_name_ordered_eqvclass_1[1] = { &mercury__eqvclass__eqvclass__du_functor_desc_eqvclass_1_0 };

static const MR_Integer mercury__eqvclass__eqvclass__functor_number_map_eqvclass_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__eqvclass____Unify____eqvclass_1_0_10001)),
  ((MR_Box) (mercury__eqvclass____Compare____eqvclass_1_0_10001)),
  (MR_String) "eqvclass",
  (MR_String) "eqvclass",
  { mercury__eqvclass__eqvclass__du_name_ordered_eqvclass_1 },
  { mercury__eqvclass__eqvclass__du_ptag_ordered_eqvclass_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__eqvclass__eqvclass__functor_number_map_eqvclass_1,

};

const MR_TypeCtorInfo_Struct mercury__eqvclass__eqvclass__type_ctor_info_partition_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__eqvclass____Unify____partition_id_0_0_10001)),
  ((MR_Box) (mercury__eqvclass____Compare____partition_id_0_0_10001)),
  (MR_String) "eqvclass",
  (MR_String) "partition_id",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
mercury__eqvclass____Compare____partition_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
}

MR_bool MR_CALL 
mercury__eqvclass____Unify____partition_id_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__eqvclass____Compare____eqvclass_1_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;
    MR_Integer Var_24 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_25 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_24 < Var_25);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_24 == Var_25);
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
        MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
        MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_14));
      }
      mercury__tree234____Compare____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_18_18, &SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__tree234____Compare____tree234_2_0(TypeInfo_for_T_14, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
mercury__eqvclass____Unify____eqvclass_1_0(
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
    MR_Word TypeCtorInfo_13_13;
    MR_Word TypeCtorInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word TypeCtorInfo_18_18;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer Var_21 = (MR_Integer) (ArgX1_3);
    MR_Integer Var_22 = (MR_Integer) (ArgY1_4);

    succeeded = (Var_21 == Var_22);
    if (succeeded)
    {
      TypeCtorInfo_13_13 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
      TypeCtorInfo_14_14 = (MR_Word) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1);
      {
        TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (TypeCtorInfo_14_14));
        MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_11));
      }
      succeeded = mercury__tree234____Unify____tree234_2_0(TypeCtorInfo_13_13, TypeInfo_15_15, ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeCtorInfo_18_18 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
        succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_T_11, TypeCtorInfo_18_18, ArgX3_7, ArgY3_8);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__eqvclass__divide_equivalence_classes_2_9_p_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word TypeInfo_for_U_32,
  MR_Word DivideFunc_10,
  MR_Integer Id_11,
  MR_Word ItemSet_12,
  MR_Word STATE_VARIABLE_Counter_0_22,
  MR_Word * STATE_VARIABLE_Counter_23,
  MR_Word STATE_VARIABLE_PartitionMap_0_24,
  MR_Word * STATE_VARIABLE_PartitionMap_25,
  MR_Word STATE_VARIABLE_ElementMap_0_26,
  MR_Word * STATE_VARIABLE_ElementMap_27)
{
  MR_Word ItemList_16 = (MR_Word) (ItemSet_12);

  if ((ItemList_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140eqvclass.divide_equivalence_classes_2\'/9", (MR_String) "empty partition");
      return;
    }
  else
  {
    MR_Box Item_17 = (MR_hl_field(1, ItemList_16, 0));
    MR_Word Items_18 = ((MR_Word) ((MR_hl_field(1, ItemList_16, 1))));
    MR_Box MainValue_19;
    MR_Word DivValueMap1_20;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, DivideFunc_10, 1))));
    MR_Word _DivValueMap_21;

    MainValue_19 = func_0(((MR_Box) (DivideFunc_10)), Item_17);
    {
      DivValueMap1_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, DivValueMap1_20, 0) = MainValue_19;
      MR_hl_field(1, DivValueMap1_20, 1) = ((MR_Box) (Id_11));
      MR_hl_field(1, DivValueMap1_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, DivValueMap1_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__eqvclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__list_0(TypeInfo_for_T_31, TypeInfo_for_U_32, DivideFunc_10, Id_11, Items_18, DivValueMap1_20, &_DivValueMap_21, STATE_VARIABLE_Counter_0_22, STATE_VARIABLE_Counter_23, STATE_VARIABLE_PartitionMap_0_24, STATE_VARIABLE_PartitionMap_25, STATE_VARIABLE_ElementMap_0_26, STATE_VARIABLE_ElementMap_27);
  }
}

static void MR_CALL 
mercury__eqvclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__list_0(
  MR_Word Var_51,
  MR_Word Var_52,
  MR_Word Var_53,
  MR_Integer Var_54,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__10_10 = HeadVar__9_9;
      *HeadVar__8_8 = HeadVar__7_7;
      *HeadVar__6_6 = HeadVar__5_5;
      *HeadVar__4_4 = HeadVar__3_3;
    }
    else
    {
      MR_Box Var_21 = (MR_hl_field(1, HeadVar__2_2, 0));
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_HeadVar__7_7;
      MR_Word next_value_of_HeadVar__9_9;

      mercury__eqvclass__divide_equivalence_classes_3_11_p_0(Var_51, Var_52, Var_53, Var_54, Var_21, HeadVar__3_3, &Var_31, HeadVar__5_5, &Var_32, HeadVar__7_7, &Var_33, HeadVar__9_9, &Var_34);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_22;
      next_value_of_HeadVar__3_3 = Var_31;
      next_value_of_HeadVar__5_5 = Var_32;
      next_value_of_HeadVar__7_7 = Var_33;
      next_value_of_HeadVar__9_9 = Var_34;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      HeadVar__7_7 = next_value_of_HeadVar__7_7;
      HeadVar__9_9 = next_value_of_HeadVar__9_9;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__eqvclass__divide_equivalence_classes_3_11_p_0(
  MR_Word TypeInfo_for_T_45,
  MR_Word TypeInfo_for_U_46,
  MR_Word DivideFunc_12,
  MR_Integer MainId_13,
  MR_Box Item_14,
  MR_Word STATE_VARIABLE_DivValueMap_0_26,
  MR_Word * STATE_VARIABLE_DivValueMap_27,
  MR_Word STATE_VARIABLE_Counter_0_28,
  MR_Word * STATE_VARIABLE_Counter_29,
  MR_Word STATE_VARIABLE_PartitionMap_0_30,
  MR_Word * STATE_VARIABLE_PartitionMap_31,
  MR_Word STATE_VARIABLE_ElementMap_0_32,
  MR_Word * STATE_VARIABLE_ElementMap_33)
{
  MR_bool succeeded;
  MR_Box Value_19;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, DivideFunc_12, 1))));
  MR_Integer Id_20;
  MR_Box conv1_Id_20;

  Value_19 = func_0(((MR_Box) (DivideFunc_12)), Item_14);
  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_U_46, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_DivValueMap_0_26, Value_19, &conv1_Id_20);
  if (succeeded)
  {
    Id_20 = ((MR_Integer) (conv1_Id_20));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = (Id_20 == MainId_13);
    if (succeeded)
    {
      *STATE_VARIABLE_ElementMap_33 = STATE_VARIABLE_ElementMap_0_32;
      *STATE_VARIABLE_PartitionMap_31 = STATE_VARIABLE_PartitionMap_0_30;
    }
    else
    {
      MR_Word TypeInfo_50_50;
      MR_Word MainSet0_21;
      MR_Word MainSet_22;
      MR_Word Set0_23;
      MR_Word Set_24;
      MR_Word STATE_VARIABLE_PartitionMap_1_34;
      MR_Word Var_55;
      MR_Word Var_57;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Box conv2_MainSet0_21;
      MR_Word conv3_STATE_VARIABLE_PartitionMap_1_34;
      MR_Box conv4_Set0_23;
      MR_Word conv5_STATE_VARIABLE_PartitionMap_31;

      {
        TypeInfo_50_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_50_50, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
        MR_hl_field(0, TypeInfo_50_50, 1) = ((MR_Box) (TypeInfo_for_T_45));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_50_50, (MR_Word) (STATE_VARIABLE_PartitionMap_0_30), MainId_13, &conv2_MainSet0_21);
      MainSet0_21 = ((MR_Word) (conv2_MainSet0_21));
      {
        Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_55, 0) = Item_14;
        MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_57 = (MR_Word) (MainSet0_21);
      mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_45, Var_57, Var_55, &Var_59);
      MainSet_22 = (MR_Word) (Var_59);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_50_50, MainId_13, ((MR_Box) (MainSet_22)), (MR_Word) (STATE_VARIABLE_PartitionMap_0_30), &conv3_STATE_VARIABLE_PartitionMap_1_34);
      STATE_VARIABLE_PartitionMap_1_34 = (MR_Word) (conv3_STATE_VARIABLE_PartitionMap_1_34);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_50_50, (MR_Word) (STATE_VARIABLE_PartitionMap_1_34), Id_20, &conv4_Set0_23);
      Set0_23 = ((MR_Word) (conv4_Set0_23));
      Var_60 = (MR_Word) (Set0_23);
      mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_T_45, Var_60, Item_14, &Var_61);
      Set_24 = (MR_Word) (Var_61);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_50_50, Id_20, ((MR_Box) (Set_24)), (MR_Word) (STATE_VARIABLE_PartitionMap_1_34), &conv5_STATE_VARIABLE_PartitionMap_31);
      *STATE_VARIABLE_PartitionMap_31 = (MR_Word) (conv5_STATE_VARIABLE_PartitionMap_31);
      mercury__map__det_update_4_p_0(TypeInfo_for_T_45, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Item_14, ((MR_Box) (Id_20)), STATE_VARIABLE_ElementMap_0_32, STATE_VARIABLE_ElementMap_33);
    }
    *STATE_VARIABLE_Counter_29 = STATE_VARIABLE_Counter_0_28;
    *STATE_VARIABLE_DivValueMap_27 = STATE_VARIABLE_DivValueMap_0_26;
  }
  else
  {
    MR_Word TypeInfo_53_53;
    MR_Integer NewId_25 = (MR_Integer) (STATE_VARIABLE_Counter_0_28);
    MR_Word STATE_VARIABLE_PartitionMap_3_39;
    MR_Word MainSet0_42;
    MR_Word MainSet_43;
    MR_Word Set_44;
    MR_Integer Var_62 = (MR_Integer) ((MR_Unsigned) NewId_25 + (MR_Unsigned) 1);
    MR_Word Var_65;
    MR_Word Var_67;
    MR_Word Var_69;
    MR_Box conv6_MainSet0_42;
    MR_Word conv7_STATE_VARIABLE_PartitionMap_3_39;
    MR_Word conv8_STATE_VARIABLE_PartitionMap_31;

    *STATE_VARIABLE_Counter_29 = (MR_Word) (Var_62);
    mercury__map__det_insert_4_p_0(TypeInfo_for_U_46, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Value_19, ((MR_Box) (NewId_25)), STATE_VARIABLE_DivValueMap_0_26, STATE_VARIABLE_DivValueMap_27);
    {
      TypeInfo_53_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_53_53, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
      MR_hl_field(0, TypeInfo_53_53, 1) = ((MR_Box) (TypeInfo_for_T_45));
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_53_53, (MR_Word) (STATE_VARIABLE_PartitionMap_0_30), MainId_13, &conv6_MainSet0_42);
    MainSet0_42 = ((MR_Word) (conv6_MainSet0_42));
    {
      Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_65, 0) = Item_14;
      MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Set_44 = (MR_Word) (Var_65);
    Var_67 = (MR_Word) (MainSet0_42);
    mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_45, Var_67, Var_65, &Var_69);
    MainSet_43 = (MR_Word) (Var_69);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_53_53, MainId_13, ((MR_Box) (MainSet_43)), (MR_Word) (STATE_VARIABLE_PartitionMap_0_30), &conv7_STATE_VARIABLE_PartitionMap_3_39);
    STATE_VARIABLE_PartitionMap_3_39 = (MR_Word) (conv7_STATE_VARIABLE_PartitionMap_3_39);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_53_53, NewId_25, ((MR_Box) (Set_44)), (MR_Word) (STATE_VARIABLE_PartitionMap_3_39), &conv8_STATE_VARIABLE_PartitionMap_31);
    *STATE_VARIABLE_PartitionMap_31 = (MR_Word) (conv8_STATE_VARIABLE_PartitionMap_31);
    mercury__map__det_update_4_p_0(TypeInfo_for_T_45, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Item_14, ((MR_Box) (NewId_25)), STATE_VARIABLE_ElementMap_0_32, STATE_VARIABLE_ElementMap_33);
  }
}

void MR_CALL 
mercury__eqvclass__partition_ids_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word EqvClass0_3,
  MR_Word * Ids_4)
{
  MR_Word TypeInfo_11_11;
  MR_Word PartitionMap0_5 = ((MR_Word) ((MR_hl_field(0, EqvClass0_3, 1))));

  {
    TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_11_11, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
    MR_hl_field(0, TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_for_T_8));
  }
  mercury__tree234__keys_acc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_11_11, PartitionMap0_5, (MR_Word) ((MR_Unsigned) 0U), Ids_4);
}

static void MR_CALL 
mercury__eqvclass__divide_equivalence_classes_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Counter_23;
  MR_Word conv1_STATE_VARIABLE_PartitionMap_25;
  MR_Word conv0_STATE_VARIABLE_ElementMap_27;

  mercury__eqvclass__divide_equivalence_classes_2_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Counter_23, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_PartitionMap_25, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_ElementMap_27);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Counter_23));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_PartitionMap_25));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_ElementMap_27));
}

MR_Word MR_CALL 
mercury__eqvclass__divide_equivalence_classes_2_f_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_U_16,
  MR_Word DivideFunc_4,
  MR_Word EqvClass0_5)
{
  MR_Word EqvClass_6;
  MR_Word TypeInfo_27_27;
  MR_Word TypeInfo_30_30;
  MR_Word TypeInfo_31_31;
  MR_Word Counter0_7 = ((MR_Word) ((MR_hl_field(0, EqvClass0_5, 0))));
  MR_Word PartitionMap0_8 = ((MR_Word) ((MR_hl_field(0, EqvClass0_5, 1))));
  MR_Word ElementMap0_9 = ((MR_Word) ((MR_hl_field(0, EqvClass0_5, 2))));
  MR_Word Counter_10;
  MR_Word PartitionMap_11;
  MR_Word ElementMap_12;
  MR_Word Var_13;
  MR_Box conv5_Counter_10;
  MR_Box conv4_PartitionMap_11;
  MR_Box conv3_ElementMap_12;

  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&mercury__eqvclass_scalar_common_5[0]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (mercury__eqvclass__divide_equivalence_classes_2_f_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (TypeInfo_for_T_15));
    MR_hl_field(0, Var_13, 4) = ((MR_Box) (TypeInfo_for_U_16));
    MR_hl_field(0, Var_13, 5) = ((MR_Box) (DivideFunc_4));
  }
  {
    TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_27_27, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
    MR_hl_field(0, TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_T_15));
  }
  {
    TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_30_30, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
    MR_hl_field(0, TypeInfo_30_30, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
    MR_hl_field(0, TypeInfo_30_30, 2) = ((MR_Box) (TypeInfo_27_27));
  }
  {
    TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_31_31, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
    MR_hl_field(0, TypeInfo_31_31, 1) = ((MR_Box) (TypeInfo_for_T_15));
    MR_hl_field(0, TypeInfo_31_31, 2) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
  }
  mercury__tree234__foldl3_8_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_27_27, (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), TypeInfo_30_30, TypeInfo_31_31, Var_13, PartitionMap0_8, ((MR_Box) (Counter0_7)), &conv5_Counter_10, ((MR_Box) (PartitionMap0_8)), &conv4_PartitionMap_11, ((MR_Box) (ElementMap0_9)), &conv3_ElementMap_12);
  Counter_10 = ((MR_Word) (conv5_Counter_10));
  PartitionMap_11 = ((MR_Word) (conv4_PartitionMap_11));
  ElementMap_12 = ((MR_Word) (conv3_ElementMap_12));
  {
    EqvClass_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, EqvClass_6, 0) = ((MR_Box) (Counter_10));
    MR_hl_field(0, EqvClass_6, 1) = ((MR_Box) (PartitionMap_11));
    MR_hl_field(0, EqvClass_6, 2) = ((MR_Box) (ElementMap_12));
  }
  return EqvClass_6;
}

MR_Word MR_CALL 
mercury__eqvclass__remove_equivalent_elements_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word EqvClass0_4,
  MR_Box X_5)
{
  MR_Word EqvClass_6;

  mercury__eqvclass__remove_equivalent_elements_3_p_0(TypeInfo_for_T_7, X_5, EqvClass0_4, &EqvClass_6);
  return EqvClass_6;
}

void MR_CALL 
mercury__eqvclass__remove_equivalent_elements_3_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_EqvClass_0_13,
  MR_Word * STATE_VARIABLE_EqvClass_14)
{
  MR_bool succeeded;
  MR_Word Counter_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_EqvClass_0_13, 0))));
  MR_Word PartitionMap0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_EqvClass_0_13, 1))));
  MR_Word ElementMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_EqvClass_0_13, 2))));
  MR_Integer PartitionOfX_9;
  MR_Box conv0_PartitionOfX_9;

  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_16, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ElementMap0_8, X_4, &conv0_PartitionOfX_9);
  if (succeeded)
  {
    PartitionOfX_9 = ((MR_Integer) (conv0_PartitionOfX_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word TypeInfo_20_20;
    MR_Word EqvsOfX_10;
    MR_Word PartitionMap_11;
    MR_Word ElementMap_12;
    MR_Word Var_15;
    MR_Box conv1_EqvsOfX_10;

    {
      TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
      MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_16));
    }
    mercury__map__det_remove_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_20_20, ((MR_Box) (PartitionOfX_9)), &conv1_EqvsOfX_10, PartitionMap0_7, &PartitionMap_11);
    EqvsOfX_10 = ((MR_Word) (conv1_EqvsOfX_10));
    Var_15 = (MR_Word) (EqvsOfX_10);
    mercury__map__delete_list_3_p_0(TypeInfo_for_T_16, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_15, ElementMap0_8, &ElementMap_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_EqvClass_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Counter_6));
      MR_hl_field(0, base, 1) = ((MR_Box) (PartitionMap_11));
      MR_hl_field(0, base, 2) = ((MR_Box) (ElementMap_12));
    }
  }
  else
    *STATE_VARIABLE_EqvClass_14 = STATE_VARIABLE_EqvClass_0_13;
}

MR_Box MR_CALL 
mercury__eqvclass__get_minimum_element_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word EqvClass_4,
  MR_Box X_5)
{
  MR_Box MinElement_6;
  MR_Word EqvElements_7;
  MR_Word Var_8;

  EqvElements_7 = mercury__eqvclass__get_equivalent_elements_2_f_0(TypeInfo_for_T_9, EqvClass_4, X_5);
  Var_8 = (MR_Word) (EqvElements_7);
  MinElement_6 = mercury__list__det_head_1_f_0(TypeInfo_for_T_9, Var_8);
  return MinElement_6;
}

MR_Word MR_CALL 
mercury__eqvclass__get_equivalent_elements_2_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word EqvClass_4,
  MR_Box X_5)
{
  MR_bool succeeded;
  MR_Word EqvElements_6;
  MR_Word PartitionMap_8 = ((MR_Word) ((MR_hl_field(0, EqvClass_4, 1))));
  MR_Word ElementMap_9 = ((MR_Word) ((MR_hl_field(0, EqvClass_4, 2))));
  MR_Word ElementsInPartitionOfX_11;
  MR_Word TypeCtorInfo_14_14;
  MR_Word TypeInfo_15_15;
  MR_Integer PartitionOfX_10;
  MR_Box conv0_PartitionOfX_10;
  MR_Box conv1_ElementsInPartitionOfX_11;

  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_12, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ElementMap_9, X_5, &conv0_PartitionOfX_10);
  if (succeeded)
  {
    PartitionOfX_10 = ((MR_Integer) (conv0_PartitionOfX_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeCtorInfo_14_14 = (MR_Word) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1);
    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (TypeCtorInfo_14_14));
      MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_12));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_15_15, (MR_Word) (PartitionMap_8), PartitionOfX_10, &conv1_ElementsInPartitionOfX_11);
    if (succeeded)
    {
      ElementsInPartitionOfX_11 = ((MR_Word) (conv1_ElementsInPartitionOfX_11));
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
    EqvElements_6 = ElementsInPartitionOfX_11;
  else
  {
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_17, 0) = X_5;
      MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    EqvElements_6 = (MR_Word) (Var_17);
  }
  return EqvElements_6;
}

MR_Word MR_CALL 
mercury__eqvclass__partition_list_to_eqvclass_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Xs_3)
{
  MR_Word EqvClass_4;

  mercury__eqvclass__partition_list_to_eqvclass_2_p_0(TypeInfo_for_T_5, Xs_3, &EqvClass_4);
  return EqvClass_4;
}

void MR_CALL 
mercury__eqvclass__partition_set_to_eqvclass_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word SetSet_3,
  MR_Word * EqvClass_4)
{
  MR_Word ListSet_5 = (MR_Word) (SetSet_3);

  mercury__eqvclass__partition_list_to_eqvclass_2_p_0(TypeInfo_for_T_6, ListSet_5, EqvClass_4);
}

MR_Word MR_CALL 
mercury__eqvclass__partition_set_to_eqvclass_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3)
{
  MR_Word EqvClass_4;
  MR_Word ListSet_6 = (MR_Word) (Set_3);

  mercury__eqvclass__partition_list_to_eqvclass_2_p_0(TypeInfo_for_T_5, ListSet_6, &EqvClass_4);
  return EqvClass_4;
}

void MR_CALL 
mercury__eqvclass__partition_list_to_eqvclass_2_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word HeadVar__1_1,
  MR_Word * EqvClass_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *EqvClass_2 = (MR_Word) (&mercury__eqvclass_scalar_common_1[1]);
  else
  {
    MR_Word Partition_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Partitions_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word EqvClass0_7;
    MR_Word Counter0_8;
    MR_Word PartitionMap0_9;
    MR_Word ElementMap0_10;
    MR_Word Elements_11;

    mercury__eqvclass__partition_list_to_eqvclass_2_p_0(TypeInfo_for_T_18, Partitions_5, &EqvClass0_7);
    Counter0_8 = ((MR_Word) ((MR_hl_field(0, EqvClass0_7, 0))));
    PartitionMap0_9 = ((MR_Word) ((MR_hl_field(0, EqvClass0_7, 1))));
    ElementMap0_10 = ((MR_Word) ((MR_hl_field(0, EqvClass0_7, 2))));
    Elements_11 = (MR_Word) (Partition_4);
    if ((Elements_11 == (MR_Word) ((MR_Unsigned) 0U)))
      *EqvClass_2 = EqvClass0_7;
    else
    {
      MR_Word TypeInfo_21_21;
      MR_Integer Id_14 = (MR_Integer) (Counter0_8);
      MR_Word Counter_15;
      MR_Word ElementMap_16;
      MR_Word PartitionMap_17;
      MR_Integer Var_29 = (MR_Integer) ((MR_Unsigned) Id_14 + (MR_Unsigned) 1);
      MR_Word conv0_PartitionMap_17;

      Counter_15 = (MR_Word) (Var_29);
      mercury__eqvclass__record_partition_for_elements_4_p_0(TypeInfo_for_T_18, Id_14, Elements_11, ElementMap0_10, &ElementMap_16);
      {
        TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_21_21, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
        MR_hl_field(0, TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_18));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_21_21, Id_14, ((MR_Box) (Partition_4)), (MR_Word) (PartitionMap0_9), &conv0_PartitionMap_17);
      PartitionMap_17 = (MR_Word) (conv0_PartitionMap_17);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *EqvClass_2 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Counter_15));
        MR_hl_field(0, base, 1) = ((MR_Box) (PartitionMap_17));
        MR_hl_field(0, base, 2) = ((MR_Box) (ElementMap_16));
      }
    }
  }
}

static void MR_CALL 
mercury__eqvclass__record_partition_for_elements_4_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ElementMap_0_3,
  MR_Word * STATE_VARIABLE_ElementMap_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ElementMap_4 = STATE_VARIABLE_ElementMap_0_3;
    else
    {
      MR_Box Element_10 = (MR_hl_field(1, HeadVar__2_2, 0));
      MR_Word Elements_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word STATE_VARIABLE_ElementMap_1_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ElementMap_0_3;

      mercury__map__det_insert_4_p_0(TypeInfo_for_T_16, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Element_10, ((MR_Box) (HeadVar__1_1)), STATE_VARIABLE_ElementMap_0_3, &STATE_VARIABLE_ElementMap_1_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Elements_11;
      next_value_of_STATE_VARIABLE_ElementMap_0_3 = STATE_VARIABLE_ElementMap_1_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ElementMap_0_3 = next_value_of_STATE_VARIABLE_ElementMap_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__eqvclass__partition_list_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word EqvClass_3,
  MR_Word * PartitionList_4)
{
  MR_Word TypeInfo_11_12;
  MR_Word Ids_5;
  MR_Word PartitionMap0_7 = ((MR_Word) ((MR_hl_field(0, EqvClass_3, 1))));

  {
    TypeInfo_11_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_11_12, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
    MR_hl_field(0, TypeInfo_11_12, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__tree234__keys_acc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_11_12, PartitionMap0_7, (MR_Word) ((MR_Unsigned) 0U), &Ids_5);
  mercury__eqvclass__partitions_3_p_0(TypeInfo_for_T_6, EqvClass_3, Ids_5, PartitionList_4);
}

MR_Word MR_CALL 
mercury__eqvclass__partition_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word EqvClass_3)
{
  MR_Word PartitionList_4;
  MR_Word TypeInfo_11_12;
  MR_Word Ids_6;
  MR_Word PartitionMap0_7 = ((MR_Word) ((MR_hl_field(0, EqvClass_3, 1))));

  {
    TypeInfo_11_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_11_12, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
    MR_hl_field(0, TypeInfo_11_12, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  mercury__tree234__keys_acc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_11_12, PartitionMap0_7, (MR_Word) ((MR_Unsigned) 0U), &Ids_6);
  mercury__eqvclass__partitions_3_p_0(TypeInfo_for_T_5, EqvClass_3, Ids_6, &PartitionList_4);
  return PartitionList_4;
}

MR_Word MR_CALL 
mercury__eqvclass__partition_set_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word EqvClass_3)
{
  MR_Word PartitionSet_4;

  mercury__eqvclass__partition_set_2_p_0(TypeInfo_for_T_5, EqvClass_3, &PartitionSet_4);
  return PartitionSet_4;
}

void MR_CALL 
mercury__eqvclass__partition_set_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word EqvClass_3,
  MR_Word * PartitionSet_4)
{
  MR_Word TypeInfo_9_9;
  MR_Word Ids_5;
  MR_Word PartitionList_6;
  MR_Word PartitionMap0_10 = ((MR_Word) ((MR_hl_field(0, EqvClass_3, 1))));
  MR_Word Var_17;
  MR_Integer Var_18;
  MR_Unsigned Var_19;
  MR_Word conv0_Var_17;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_9_9, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
    MR_hl_field(0, TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_7));
  }
  mercury__tree234__keys_acc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_9_9, PartitionMap0_10, (MR_Word) ((MR_Unsigned) 0U), &Ids_5);
  mercury__eqvclass__partitions_3_p_0(TypeInfo_for_T_7, EqvClass_3, Ids_5, &PartitionList_6);
  mercury__list__ulength_acc_3_p_0(TypeInfo_9_9, (MR_Word) (PartitionList_6), (MR_Unsigned) 0U, &Var_19);
{
#define MR_PROC_LABEL mercury__eqvclass__partition_set_2_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_19 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_18  = I;
}
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_9_9, Var_18, (MR_Word) (PartitionList_6), &conv0_Var_17);
  Var_17 = (MR_Word) (conv0_Var_17);
  *PartitionSet_4 = (MR_Word) (Var_17);
}

void MR_CALL 
mercury__eqvclass__partitions_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer Id_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Ids_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Partition_8;
    MR_Word PartitionMap0_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word PartitionPrime_12;
    MR_Word TypeInfo_16_19;
    MR_Box conv0_PartitionPrime_12;
    MR_Word * AddrPartitions_21;

    {
      TypeInfo_16_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_16_19, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
      MR_hl_field(0, TypeInfo_16_19, 1) = ((MR_Box) (TypeInfo_for_T_10));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_16_19, (MR_Word) (PartitionMap0_11), Id_6, &conv0_PartitionPrime_12);
    if (succeeded)
    {
      PartitionPrime_12 = ((MR_Word) (conv0_PartitionPrime_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      Partition_8 = PartitionPrime_12;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140eqvclass.id_to_partition\'/3", (MR_String) "partition id not known to equivalence class");
        return;
      }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Partition_8));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrPartitions_21 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, 1)));
    mercury__eqvclass__LCMC__pred__partitions__1_3_p_0(TypeInfo_for_T_10, HeadVar__1_1, Ids_7, AddrPartitions_21);
  }
}

void MR_CALL 
mercury__eqvclass__LCMC__pred__partitions__1_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_22 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer Id_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Ids_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Partition_8;
      MR_Word PartitionMap0_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
      MR_Word PartitionPrime_12;
      MR_Word TypeInfo_16_19;
      MR_Box conv0_PartitionPrime_12;
      MR_Word * AddrPartitions_21;
      MR_Word HeadVar__3_23;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_22;

      {
        TypeInfo_16_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_16_19, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
        MR_hl_field(0, TypeInfo_16_19, 1) = ((MR_Box) (TypeInfo_for_T_10));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_16_19, (MR_Word) (PartitionMap0_11), Id_6, &conv0_PartitionPrime_12);
      if (succeeded)
      {
        PartitionPrime_12 = ((MR_Word) (conv0_PartitionPrime_12));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        Partition_8 = PartitionPrime_12;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140eqvclass.id_to_partition\'/3", (MR_String) "partition id not known to equivalence class");
          return;
        }
      {
        HeadVar__3_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_23, 0) = ((MR_Box) (Partition_8));
        MR_hl_field(1, HeadVar__3_23, 1) = NULL;
      }
      AddrPartitions_21 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_23, 1)));
      *AddrOfHeadVar__3_22 = HeadVar__3_23;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Ids_7;
      next_value_of_AddrOfHeadVar__3_22 = AddrPartitions_21;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_22 = next_value_of_AddrOfHeadVar__3_22;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__eqvclass__same_eqvclass_list_2_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word EqvClass_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  {
    MR_Box Element_5 = (MR_hl_field(1, HeadVar__2_2, 0));
    MR_Word Elements_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ElementMap_7 = ((MR_Word) ((MR_hl_field(0, EqvClass_1, 2))));
    MR_Integer Id_8;
    MR_Box conv0_Id_8;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_11, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ElementMap_7, Element_5, &conv0_Id_8);
    if (succeeded)
    {
      Id_8 = ((MR_Integer) (conv0_Id_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      succeeded = mercury__eqvclass__all_elements_are_in_given_partition_3_p_0(TypeInfo_for_T_11, ElementMap_7, Id_8, Elements_6);
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__eqvclass__all_elements_are_in_given_partition_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word ElementMap_1,
  MR_Integer Id_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Box Element_8 = (MR_hl_field(1, HeadVar__3_3, 0));
      MR_Word Elements_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Integer ElementId_10;
      MR_Box conv0_ElementId_10;
      MR_Word next_value_of_HeadVar__3_3;

      succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_11, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ElementMap_1, Element_8, &conv0_ElementId_10);
      if (succeeded)
      {
        ElementId_10 = ((MR_Integer) (conv0_ElementId_10));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = (ElementId_10 == Id_2);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = Elements_9;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__eqvclass__same_eqvclass_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word EqvClass0_4,
  MR_Box Element1_5,
  MR_Box Element2_6)
{
  MR_bool succeeded;
  MR_Word ElementMap0_7 = ((MR_Word) ((MR_hl_field(0, EqvClass0_4, 2))));
  MR_Integer Id1_8;
  MR_Integer Id2_9;
  MR_Box conv0_Id1_8;
  MR_Box conv1_Id2_9;

  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_12, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ElementMap0_7, Element1_5, &conv0_Id1_8);
  if (succeeded)
  {
    Id1_8 = ((MR_Integer) (conv0_Id1_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_12, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ElementMap0_7, Element2_6, &conv1_Id2_9);
    if (succeeded)
    {
      Id2_9 = ((MR_Integer) (conv1_Id2_9));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      succeeded = (Id1_8 == Id2_9);
  }
  return succeeded;
}

MR_Word MR_CALL 
mercury__eqvclass__new_equivalence_3_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word STATE_VARIABLE_EqvClass_0_8,
  MR_Box X_6,
  MR_Box Y_7)
{
  MR_Word STATE_VARIABLE_EqvClass_9;

  mercury__eqvclass__new_equivalence_4_p_0(TypeInfo_for_T_10, X_6, Y_7, STATE_VARIABLE_EqvClass_0_8, &STATE_VARIABLE_EqvClass_9);
  return STATE_VARIABLE_EqvClass_9;
}

void MR_CALL 
mercury__eqvclass__new_equivalence_4_p_0(
  MR_Word TypeInfo_for_T_52,
  MR_Box ElementA_5,
  MR_Box ElementB_6,
  MR_Word EqvClass0_7,
  MR_Word * EqvClass_8)
{
  MR_bool succeeded;
  MR_Word ElementMap0_9 = ((MR_Word) ((MR_hl_field(0, EqvClass0_7, 2))));
  MR_Integer IdA_10;
  MR_Box conv0_IdA_10;

  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_52, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ElementMap0_9, ElementA_5, &conv0_IdA_10);
  if (succeeded)
  {
    IdA_10 = ((MR_Integer) (conv0_IdA_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer IdB_11;
    MR_Box conv1_IdB_11;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_52, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ElementMap0_9, ElementB_6, &conv1_IdB_11);
    if (succeeded)
    {
      IdB_11 = ((MR_Integer) (conv1_IdB_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (IdA_10 == IdB_11);
      if (succeeded)
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140eqvclass.new_equivalence\'/4", (MR_String) "the two elements are already equivalent");
          return;
        }
      else
        mercury__eqvclass__add_equivalence_4_p_0(TypeInfo_for_T_52, IdA_10, IdB_11, EqvClass0_7, EqvClass_8);
    }
    else
    {
      MR_Word TypeInfo_57_57;
      MR_Word PartitionMap0_12 = ((MR_Word) ((MR_hl_field(0, EqvClass0_7, 1))));
      MR_Word PartitionA_13;
      MR_Word Partition_14;
      MR_Word PartitionMap_15;
      MR_Word ElementMap_16;
      MR_Word Counter0_17;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Box conv2_PartitionA_13;
      MR_Word conv3_PartitionMap_15;

      {
        TypeInfo_57_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_57_57, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
        MR_hl_field(0, TypeInfo_57_57, 1) = ((MR_Box) (TypeInfo_for_T_52));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_57_57, (MR_Word) (PartitionMap0_12), IdA_10, &conv2_PartitionA_13);
      PartitionA_13 = ((MR_Word) (conv2_PartitionA_13));
      Var_68 = (MR_Word) (PartitionA_13);
      mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_T_52, Var_68, ElementB_6, &Var_69);
      Partition_14 = (MR_Word) (Var_69);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_57_57, IdA_10, ((MR_Box) (Partition_14)), (MR_Word) (PartitionMap0_12), &conv3_PartitionMap_15);
      PartitionMap_15 = (MR_Word) (conv3_PartitionMap_15);
      mercury__map__det_insert_4_p_0(TypeInfo_for_T_52, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ElementB_6, ((MR_Box) (IdA_10)), ElementMap0_9, &ElementMap_16);
      Counter0_17 = ((MR_Word) ((MR_hl_field(0, EqvClass0_7, 0))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *EqvClass_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Counter0_17));
        MR_hl_field(0, base, 1) = ((MR_Box) (PartitionMap_15));
        MR_hl_field(0, base, 2) = ((MR_Box) (ElementMap_16));
      }
    }
  }
  else
  {
    MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, EqvClass0_7, 1))));
    MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, EqvClass0_7, 0))));
    MR_Integer IdB_37;
    MR_Box conv4_IdB_37;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_52, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ElementMap0_9, ElementB_6, &conv4_IdB_37);
    if (succeeded)
    {
      IdB_37 = ((MR_Integer) (conv4_IdB_37));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeInfo_61_61;
      MR_Word PartitionB_18;
      MR_Word Partition_28;
      MR_Word PartitionMap_29;
      MR_Word ElementMap_30;
      MR_Word Counter0_31;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Box conv5_PartitionB_18;
      MR_Word conv6_PartitionMap_29;

      {
        TypeInfo_61_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_61_61, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
        MR_hl_field(0, TypeInfo_61_61, 1) = ((MR_Box) (TypeInfo_for_T_52));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_61_61, (MR_Word) (Var_66), IdB_37, &conv5_PartitionB_18);
      PartitionB_18 = ((MR_Word) (conv5_PartitionB_18));
      Var_70 = (MR_Word) (PartitionB_18);
      mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_T_52, Var_70, ElementA_5, &Var_71);
      Partition_28 = (MR_Word) (Var_71);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_61_61, IdB_37, ((MR_Box) (Partition_28)), (MR_Word) (Var_66), &conv6_PartitionMap_29);
      PartitionMap_29 = (MR_Word) (conv6_PartitionMap_29);
      mercury__map__det_insert_4_p_0(TypeInfo_for_T_52, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ElementA_5, ((MR_Box) (IdB_37)), ElementMap0_9, &ElementMap_30);
      Counter0_31 = ((MR_Word) ((MR_hl_field(0, EqvClass0_7, 0))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *EqvClass_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Counter0_31));
        MR_hl_field(0, base, 1) = ((MR_Box) (PartitionMap_29));
        MR_hl_field(0, base, 2) = ((MR_Box) (ElementMap_30));
      }
    }
    else
    {
      MR_Word TypeInfo_64_64;
      MR_Integer Id_19 = (MR_Integer) (Var_67);
      MR_Word Counter_20;
      MR_Word ElementMap1_21;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word PartitionMap0_32;
      MR_Word Partition_33;
      MR_Word PartitionMap_34;
      MR_Word ElementMap_35;
      MR_Integer Var_72 = (MR_Integer) ((MR_Unsigned) Id_19 + (MR_Unsigned) 1);
      MR_Word Var_74;
      MR_Integer Var_75;
      MR_Unsigned Var_76;
      MR_Word conv7_PartitionMap_34;

      Counter_20 = (MR_Word) (Var_72);
      mercury__map__det_insert_4_p_0(TypeInfo_for_T_52, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ElementA_5, ((MR_Box) (Id_19)), ElementMap0_9, &ElementMap1_21);
      mercury__map__det_insert_4_p_0(TypeInfo_for_T_52, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ElementB_6, ((MR_Box) (Id_19)), ElementMap1_21, &ElementMap_35);
      PartitionMap0_32 = ((MR_Word) ((MR_hl_field(0, EqvClass0_7, 1))));
      {
        Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_25, 0) = ElementB_6;
        MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_24, 0) = ElementA_5;
        MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_25));
      }
      mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_52, Var_24, (MR_Unsigned) 0U, &Var_76);
{
#define MR_PROC_LABEL mercury__eqvclass__new_equivalence_4_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_76 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_75  = I;
}
      mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_52, Var_75, Var_24, &Var_74);
      Partition_33 = (MR_Word) (Var_74);
      {
        TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_64_64, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
        MR_hl_field(0, TypeInfo_64_64, 1) = ((MR_Box) (TypeInfo_for_T_52));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_64_64, Id_19, ((MR_Box) (Partition_33)), (MR_Word) (PartitionMap0_32), &conv7_PartitionMap_34);
      PartitionMap_34 = (MR_Word) (conv7_PartitionMap_34);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *EqvClass_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Counter_20));
        MR_hl_field(0, base, 1) = ((MR_Box) (PartitionMap_34));
        MR_hl_field(0, base, 2) = ((MR_Box) (ElementMap_35));
      }
    }
  }
}

static void MR_CALL 
mercury__eqvclass__add_equivalence_4_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Integer IdA_5,
  MR_Integer IdB_6,
  MR_Word EqvClass0_7,
  MR_Word * EqvClass_8)
{
  MR_bool succeeded;
  MR_Word TypeInfo_27_27;
  MR_Word Counter0_9 = ((MR_Word) ((MR_hl_field(0, EqvClass0_7, 0))));
  MR_Word PartitionMap0_10 = ((MR_Word) ((MR_hl_field(0, EqvClass0_7, 1))));
  MR_Word ElementMap0_11 = ((MR_Word) ((MR_hl_field(0, EqvClass0_7, 2))));
  MR_Word PartitionA_12;
  MR_Word PartitionB_13;
  MR_Word PartitionMap_16;
  MR_Word ElementMap_18;
  MR_Box conv0_PartitionA_12;
  MR_Box conv1_PartitionB_13;
  MR_Integer Var_20;
  MR_Integer Var_21;
  MR_Word Var_28;
  MR_Unsigned Var_29;
  MR_Word Var_31;
  MR_Unsigned Var_32;

  {
    TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_27_27, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
    MR_hl_field(0, TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_T_24));
  }
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_27_27, (MR_Word) (PartitionMap0_10), IdA_5, &conv0_PartitionA_12);
  PartitionA_12 = ((MR_Word) (conv0_PartitionA_12));
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_27_27, (MR_Word) (PartitionMap0_10), IdB_6, &conv1_PartitionB_13);
  PartitionB_13 = ((MR_Word) (conv1_PartitionB_13));
  Var_28 = (MR_Word) (PartitionA_12);
  mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_24, Var_28, (MR_Unsigned) 0U, &Var_29);
{
#define MR_PROC_LABEL mercury__eqvclass__add_equivalence_4_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_29 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_20  = I;
}
  Var_31 = (MR_Word) (PartitionB_13);
  mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_24, Var_31, (MR_Unsigned) 0U, &Var_32);
{
#define MR_PROC_LABEL mercury__eqvclass__add_equivalence_4_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_32 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_21  = I;
}
  succeeded = (Var_20 < Var_21);
  if (succeeded)
  {
    MR_Word PartitionMap1_14;
    MR_Word Partition_15;
    MR_Word ElementsA_17;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_34;

    mercury__tree234__delete_2_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_27_27, PartitionMap0_10, ((MR_Box) (IdA_5)), &PartitionMap1_14, &Var_34);
    Var_35 = (MR_Word) (PartitionB_13);
    Var_36 = (MR_Word) (PartitionA_12);
    mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_for_T_24, Var_35, Var_36, &Var_37);
    Partition_15 = (MR_Word) (Var_37);
    mercury__tree234__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_27_27, ((MR_Box) (IdB_6)), ((MR_Box) (Partition_15)), PartitionMap1_14, &PartitionMap_16);
    ElementsA_17 = (MR_Word) (PartitionA_12);
    mercury__eqvclass__change_partition_4_p_0(TypeInfo_for_T_24, ElementsA_17, IdB_6, ElementMap0_11, &ElementMap_18);
  }
  else
  {
    MR_Word ElementsB_19;
    MR_Word PartitionMap1_22;
    MR_Word Partition_23;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_39;

    mercury__tree234__delete_2_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_27_27, PartitionMap0_10, ((MR_Box) (IdB_6)), &PartitionMap1_22, &Var_39);
    Var_40 = (MR_Word) (PartitionA_12);
    Var_41 = (MR_Word) (PartitionB_13);
    mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_for_T_24, Var_40, Var_41, &Var_42);
    Partition_23 = (MR_Word) (Var_42);
    mercury__tree234__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_27_27, ((MR_Box) (IdA_5)), ((MR_Box) (Partition_23)), PartitionMap1_22, &PartitionMap_16);
    ElementsB_19 = (MR_Word) (PartitionB_13);
    mercury__eqvclass__change_partition_4_p_0(TypeInfo_for_T_24, ElementsB_19, IdA_5, ElementMap0_11, &ElementMap_18);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *EqvClass_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter0_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (PartitionMap_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (ElementMap_18));
  }
}

MR_Word MR_CALL 
mercury__eqvclass__ensure_corresponding_equivalences_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word L1_5,
  MR_Word L2_6,
  MR_Word EqvClass0_7)
{
  MR_Word EqvClass_8;

  mercury__eqvclass__ensure_corresponding_equivalences_4_p_0(TypeInfo_for_T_9, L1_5, L2_6, EqvClass0_7, &EqvClass_8);
  return EqvClass_8;
}

void MR_CALL 
mercury__eqvclass__ensure_corresponding_equivalences_4_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_EqvClass_0_3,
  MR_Word * STATE_VARIABLE_EqvClass_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_EqvClass_4 = STATE_VARIABLE_EqvClass_0_3;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140eqvclass.ensure_corresponding_equivalences\'/4", (MR_String) "list length mismatch");
          return;
        }
    else
    {
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Box Var_32 = (MR_hl_field(1, HeadVar__1_1, 0));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140eqvclass.ensure_corresponding_equivalences\'/4", (MR_String) "list length mismatch");
          return;
        }
      else
      {
        MR_Box H2_24 = (MR_hl_field(1, HeadVar__2_2, 0));
        MR_Word T2_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MR_Word STATE_VARIABLE_EqvClass_1_29;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_EqvClass_0_3;

        mercury__eqvclass__ensure_equivalence_4_p_0(TypeInfo_for_T_30, Var_32, H2_24, STATE_VARIABLE_EqvClass_0_3, &STATE_VARIABLE_EqvClass_1_29);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_31;
        next_value_of_HeadVar__2_2 = T2_25;
        next_value_of_STATE_VARIABLE_EqvClass_0_3 = STATE_VARIABLE_EqvClass_1_29;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_EqvClass_0_3 = next_value_of_STATE_VARIABLE_EqvClass_0_3;
        continue;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__eqvclass__ensure_equivalence_3_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word STATE_VARIABLE_EqvClass_0_8,
  MR_Box X_6,
  MR_Box Y_7)
{
  MR_Word STATE_VARIABLE_EqvClass_9;

  mercury__eqvclass__ensure_equivalence_4_p_0(TypeInfo_for_T_10, X_6, Y_7, STATE_VARIABLE_EqvClass_0_8, &STATE_VARIABLE_EqvClass_9);
  return STATE_VARIABLE_EqvClass_9;
}

void MR_CALL 
mercury__eqvclass__ensure_equivalence_4_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Box ElementA_5,
  MR_Box ElementB_6,
  MR_Word EqvClass0_7,
  MR_Word * EqvClass_8)
{
  MR_bool succeeded;
  MR_Word ElementMap0_9 = ((MR_Word) ((MR_hl_field(0, EqvClass0_7, 2))));
  MR_Integer IdA_10;
  MR_Box conv0_IdA_10;

  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_50, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ElementMap0_9, ElementA_5, &conv0_IdA_10);
  if (succeeded)
  {
    IdA_10 = ((MR_Integer) (conv0_IdA_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer IdB_11;
    MR_Box conv1_IdB_11;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_50, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ElementMap0_9, ElementB_6, &conv1_IdB_11);
    if (succeeded)
    {
      IdB_11 = ((MR_Integer) (conv1_IdB_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (IdA_10 == IdB_11);
      if (succeeded)
        *EqvClass_8 = EqvClass0_7;
      else
      {
        MR_Word TypeInfo_27_83;
        MR_Word Counter0_66 = ((MR_Word) ((MR_hl_field(0, EqvClass0_7, 0))));
        MR_Word PartitionMap0_67 = ((MR_Word) ((MR_hl_field(0, EqvClass0_7, 1))));
        MR_Word ElementMap0_68 = ((MR_Word) ((MR_hl_field(0, EqvClass0_7, 2))));
        MR_Word PartitionA_69;
        MR_Word PartitionB_70;
        MR_Word PartitionMap_73;
        MR_Word ElementMap_75;
        MR_Box conv2_PartitionA_69;
        MR_Box conv3_PartitionB_70;
        MR_Integer Var_77;
        MR_Integer Var_78;
        MR_Word Var_84;
        MR_Unsigned Var_85;
        MR_Word Var_87;
        MR_Unsigned Var_88;

        {
          TypeInfo_27_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_27_83, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
          MR_hl_field(0, TypeInfo_27_83, 1) = ((MR_Box) (TypeInfo_for_T_50));
        }
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_27_83, (MR_Word) (PartitionMap0_67), IdA_10, &conv2_PartitionA_69);
        PartitionA_69 = ((MR_Word) (conv2_PartitionA_69));
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_27_83, (MR_Word) (PartitionMap0_67), IdB_11, &conv3_PartitionB_70);
        PartitionB_70 = ((MR_Word) (conv3_PartitionB_70));
        Var_84 = (MR_Word) (PartitionA_69);
        mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_50, Var_84, (MR_Unsigned) 0U, &Var_85);
{
#define MR_PROC_LABEL mercury__eqvclass__ensure_equivalence_4_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_85 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_77  = I;
}
        Var_87 = (MR_Word) (PartitionB_70);
        mercury__list__ulength_acc_3_p_0(TypeInfo_for_T_50, Var_87, (MR_Unsigned) 0U, &Var_88);
{
#define MR_PROC_LABEL mercury__eqvclass__ensure_equivalence_4_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_88 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_78  = I;
}
        succeeded = (Var_77 < Var_78);
        if (succeeded)
        {
          MR_Word PartitionMap1_71;
          MR_Word Partition_72;
          MR_Word ElementsA_74;
          MR_Word Var_91;
          MR_Word Var_92;
          MR_Word Var_93;
          MR_Word Var_90;

          mercury__tree234__delete_2_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_27_83, PartitionMap0_67, ((MR_Box) (IdA_10)), &PartitionMap1_71, &Var_90);
          Var_91 = (MR_Word) (PartitionB_70);
          Var_92 = (MR_Word) (PartitionA_69);
          mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_for_T_50, Var_91, Var_92, &Var_93);
          Partition_72 = (MR_Word) (Var_93);
          mercury__tree234__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_27_83, ((MR_Box) (IdB_11)), ((MR_Box) (Partition_72)), PartitionMap1_71, &PartitionMap_73);
          ElementsA_74 = (MR_Word) (PartitionA_69);
          mercury__eqvclass__change_partition_4_p_0(TypeInfo_for_T_50, ElementsA_74, IdB_11, ElementMap0_68, &ElementMap_75);
        }
        else
        {
          MR_Word ElementsB_76;
          MR_Word PartitionMap1_79;
          MR_Word Partition_80;
          MR_Word Var_96;
          MR_Word Var_97;
          MR_Word Var_98;
          MR_Word Var_95;

          mercury__tree234__delete_2_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_27_83, PartitionMap0_67, ((MR_Box) (IdB_11)), &PartitionMap1_79, &Var_95);
          Var_96 = (MR_Word) (PartitionA_69);
          Var_97 = (MR_Word) (PartitionB_70);
          mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_for_T_50, Var_96, Var_97, &Var_98);
          Partition_80 = (MR_Word) (Var_98);
          mercury__tree234__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_27_83, ((MR_Box) (IdA_10)), ((MR_Box) (Partition_80)), PartitionMap1_79, &PartitionMap_73);
          ElementsB_76 = (MR_Word) (PartitionB_70);
          mercury__eqvclass__change_partition_4_p_0(TypeInfo_for_T_50, ElementsB_76, IdA_10, ElementMap0_68, &ElementMap_75);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *EqvClass_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Counter0_66));
          MR_hl_field(0, base, 1) = ((MR_Box) (PartitionMap_73));
          MR_hl_field(0, base, 2) = ((MR_Box) (ElementMap_75));
        }
      }
    }
    else
    {
      MR_Word TypeInfo_55_55;
      MR_Word PartitionMap0_12 = ((MR_Word) ((MR_hl_field(0, EqvClass0_7, 1))));
      MR_Word PartitionA_13;
      MR_Word Partition_14;
      MR_Word PartitionMap_15;
      MR_Word ElementMap_16;
      MR_Word Counter0_17;
      MR_Box conv4_PartitionA_13;
      MR_Word conv5_PartitionMap_15;

      {
        TypeInfo_55_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_55_55, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
        MR_hl_field(0, TypeInfo_55_55, 1) = ((MR_Box) (TypeInfo_for_T_50));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_55_55, (MR_Word) (PartitionMap0_12), IdA_10, &conv4_PartitionA_13);
      PartitionA_13 = ((MR_Word) (conv4_PartitionA_13));
      mercury__set__insert_3_p_0(TypeInfo_for_T_50, ElementB_6, PartitionA_13, &Partition_14);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_55_55, IdA_10, ((MR_Box) (Partition_14)), (MR_Word) (PartitionMap0_12), &conv5_PartitionMap_15);
      PartitionMap_15 = (MR_Word) (conv5_PartitionMap_15);
      mercury__map__det_insert_4_p_0(TypeInfo_for_T_50, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ElementB_6, ((MR_Box) (IdA_10)), ElementMap0_9, &ElementMap_16);
      Counter0_17 = ((MR_Word) ((MR_hl_field(0, EqvClass0_7, 0))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *EqvClass_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Counter0_17));
        MR_hl_field(0, base, 1) = ((MR_Box) (PartitionMap_15));
        MR_hl_field(0, base, 2) = ((MR_Box) (ElementMap_16));
      }
    }
  }
  else
  {
    MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, EqvClass0_7, 1))));
    MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, EqvClass0_7, 0))));
    MR_Integer IdB_35;
    MR_Box conv6_IdB_35;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_50, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ElementMap0_9, ElementB_6, &conv6_IdB_35);
    if (succeeded)
    {
      IdB_35 = ((MR_Integer) (conv6_IdB_35));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeInfo_59_59;
      MR_Word PartitionB_18;
      MR_Word Partition_26;
      MR_Word PartitionMap_27;
      MR_Word ElementMap_28;
      MR_Word Counter0_29;
      MR_Box conv7_PartitionB_18;
      MR_Word conv8_PartitionMap_27;

      {
        TypeInfo_59_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_59_59, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
        MR_hl_field(0, TypeInfo_59_59, 1) = ((MR_Box) (TypeInfo_for_T_50));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_59_59, (MR_Word) (Var_64), IdB_35, &conv7_PartitionB_18);
      PartitionB_18 = ((MR_Word) (conv7_PartitionB_18));
      mercury__set__insert_3_p_0(TypeInfo_for_T_50, ElementA_5, PartitionB_18, &Partition_26);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_59_59, IdB_35, ((MR_Box) (Partition_26)), (MR_Word) (Var_64), &conv8_PartitionMap_27);
      PartitionMap_27 = (MR_Word) (conv8_PartitionMap_27);
      mercury__map__det_insert_4_p_0(TypeInfo_for_T_50, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ElementA_5, ((MR_Box) (IdB_35)), ElementMap0_9, &ElementMap_28);
      Counter0_29 = ((MR_Word) ((MR_hl_field(0, EqvClass0_7, 0))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *EqvClass_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Counter0_29));
        MR_hl_field(0, base, 1) = ((MR_Box) (PartitionMap_27));
        MR_hl_field(0, base, 2) = ((MR_Box) (ElementMap_28));
      }
    }
    else
    {
      MR_Word TypeInfo_62_62;
      MR_Integer Id_19 = (MR_Integer) (Var_65);
      MR_Word Counter_20;
      MR_Word ElementMap1_21;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word PartitionMap0_30;
      MR_Word Partition_31;
      MR_Word PartitionMap_32;
      MR_Word ElementMap_33;
      MR_Integer Var_100 = (MR_Integer) ((MR_Unsigned) Id_19 + (MR_Unsigned) 1);
      MR_Word conv9_PartitionMap_32;

      Counter_20 = (MR_Word) (Var_100);
      mercury__map__det_insert_4_p_0(TypeInfo_for_T_50, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ElementA_5, ((MR_Box) (Id_19)), ElementMap0_9, &ElementMap1_21);
      mercury__map__set_4_p_0(TypeInfo_for_T_50, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ElementB_6, ((MR_Box) (Id_19)), ElementMap1_21, &ElementMap_33);
      PartitionMap0_30 = ((MR_Word) ((MR_hl_field(0, EqvClass0_7, 1))));
      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = ElementB_6;
        MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_22, 0) = ElementA_5;
        MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_23));
      }
      mercury__set__list_to_set_2_p_0(TypeInfo_for_T_50, Var_22, &Partition_31);
      {
        TypeInfo_62_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_62_62, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
        MR_hl_field(0, TypeInfo_62_62, 1) = ((MR_Box) (TypeInfo_for_T_50));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_62_62, Id_19, ((MR_Box) (Partition_31)), (MR_Word) (PartitionMap0_30), &conv9_PartitionMap_32);
      PartitionMap_32 = (MR_Word) (conv9_PartitionMap_32);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *EqvClass_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Counter_20));
        MR_hl_field(0, base, 1) = ((MR_Box) (PartitionMap_32));
        MR_hl_field(0, base, 2) = ((MR_Box) (ElementMap_33));
      }
    }
  }
}

static void MR_CALL 
mercury__eqvclass__change_partition_4_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word STATE_VARIABLE_ElementMap_0_3,
  MR_Word * STATE_VARIABLE_ElementMap_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ElementMap_4 = STATE_VARIABLE_ElementMap_0_3;
    else
    {
      MR_Box Element_9 = (MR_hl_field(1, HeadVar__1_1, 0));
      MR_Word Elements_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_ElementMap_1_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ElementMap_0_3;

      mercury__tree234__set_4_p_0(TypeInfo_for_T_16, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Element_9, ((MR_Box) (HeadVar__2_2)), STATE_VARIABLE_ElementMap_0_3, &STATE_VARIABLE_ElementMap_1_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Elements_10;
      next_value_of_STATE_VARIABLE_ElementMap_0_3 = STATE_VARIABLE_ElementMap_1_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ElementMap_0_3 = next_value_of_STATE_VARIABLE_ElementMap_0_3;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__eqvclass__new_element_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word STATE_VARIABLE_EqvClass_0_6,
  MR_Box X_5)
{
  MR_Word STATE_VARIABLE_EqvClass_7;

  mercury__eqvclass__new_element_3_p_0(TypeInfo_for_T_8, X_5, STATE_VARIABLE_EqvClass_0_6, &STATE_VARIABLE_EqvClass_7);
  return STATE_VARIABLE_EqvClass_7;
}

void MR_CALL 
mercury__eqvclass__new_element_3_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Box Element_4,
  MR_Word STATE_VARIABLE_EqvClass_0_9,
  MR_Word * STATE_VARIABLE_EqvClass_10)
{
  MR_bool succeeded;
  MR_Word ElementMap0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_EqvClass_0_9, 2))));
  MR_Box conv0__OldId_7;

  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_15, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ElementMap0_6, Element_4, &conv0__OldId_7);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140eqvclass.new_element\'/3", (MR_String) "new element is already in equivalence class");
      return;
    }
  else
  {
    MR_Integer Var_8;

    mercury__eqvclass__add_element_4_p_0(TypeInfo_for_T_15, Element_4, &Var_8, STATE_VARIABLE_EqvClass_0_9, STATE_VARIABLE_EqvClass_10);
  }
}

void MR_CALL 
mercury__eqvclass__ensure_element_partition_id_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Box Element_5,
  MR_Integer * Id_6,
  MR_Word STATE_VARIABLE_EqvClass_0_10,
  MR_Word * STATE_VARIABLE_EqvClass_11)
{
  MR_bool succeeded;
  MR_Word ElementMap_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_EqvClass_0_10, 2))));
  MR_Integer OldId_9;
  MR_Box conv0_OldId_9;

  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ElementMap_8, Element_5, &conv0_OldId_9);
  if (succeeded)
  {
    OldId_9 = ((MR_Integer) (conv0_OldId_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *Id_6 = OldId_9;
    *STATE_VARIABLE_EqvClass_11 = STATE_VARIABLE_EqvClass_0_10;
  }
  else
    mercury__eqvclass__add_element_4_p_0(TypeInfo_for_T_14, Element_5, Id_6, STATE_VARIABLE_EqvClass_0_10, STATE_VARIABLE_EqvClass_11);
}

void MR_CALL 
mercury__eqvclass__ensure_element_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Box Element_4,
  MR_Word STATE_VARIABLE_EqvClass_0_7,
  MR_Word * STATE_VARIABLE_EqvClass_8)
{
  MR_bool succeeded;
  MR_Word ElementMap_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_EqvClass_0_7, 2))));
  MR_Box conv0_OldId_11;

  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_9, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ElementMap_10, Element_4, &conv0_OldId_11);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
    *STATE_VARIABLE_EqvClass_8 = STATE_VARIABLE_EqvClass_0_7;
  else
  {
    MR_Integer Var_15;

    mercury__eqvclass__add_element_4_p_0(TypeInfo_for_T_9, Element_4, &Var_15, STATE_VARIABLE_EqvClass_0_7, STATE_VARIABLE_EqvClass_8);
  }
}

MR_Word MR_CALL 
mercury__eqvclass__ensure_element_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word STATE_VARIABLE_EqvClass_0_6,
  MR_Box X_5)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_EqvClass_7;
  MR_Word ElementMap_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_EqvClass_0_6, 2))));
  MR_Box conv0_OldId_11;

  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_8, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ElementMap_10, X_5, &conv0_OldId_11);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
    STATE_VARIABLE_EqvClass_7 = STATE_VARIABLE_EqvClass_0_6;
  else
  {
    MR_Integer Var_15;

    mercury__eqvclass__add_element_4_p_0(TypeInfo_for_T_8, X_5, &Var_15, STATE_VARIABLE_EqvClass_0_6, &STATE_VARIABLE_EqvClass_7);
  }
  return STATE_VARIABLE_EqvClass_7;
}

void MR_CALL 
mercury__eqvclass__add_element_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Box Element_5,
  MR_Integer * Id_6,
  MR_Word STATE_VARIABLE_EqvClass_0_15,
  MR_Word * STATE_VARIABLE_EqvClass_16)
{
  MR_Word TypeInfo_20_20;
  MR_Word Counter0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_EqvClass_0_15, 0))));
  MR_Word PartitionMap0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_EqvClass_0_15, 1))));
  MR_Word ElementMap0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_EqvClass_0_15, 2))));
  MR_Word Counter_11;
  MR_Word ElementMap_12;
  MR_Word Partition_13;
  MR_Word PartitionMap_14;
  MR_Integer Var_21;
  MR_Word Var_23;
  MR_Word conv0_PartitionMap_14;

  *Id_6 = (MR_Integer) (Counter0_8);
  Var_21 = (MR_Integer) ((MR_Unsigned) *Id_6 + (MR_Unsigned) 1);
  Counter_11 = (MR_Word) (Var_21);
  mercury__map__det_insert_4_p_0(TypeInfo_for_T_17, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Element_5, ((MR_Box) (*Id_6)), ElementMap0_10, &ElementMap_12);
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = Element_5;
    MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Partition_13 = (MR_Word) (Var_23);
  {
    TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
    MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_17));
  }
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_20_20, *Id_6, ((MR_Box) (Partition_13)), (MR_Word) (PartitionMap0_9), &conv0_PartitionMap_14);
  PartitionMap_14 = (MR_Word) (conv0_PartitionMap_14);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_EqvClass_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (PartitionMap_14));
    MR_hl_field(0, base, 2) = ((MR_Box) (ElementMap_12));
  }
}

MR_bool MR_CALL 
mercury__eqvclass__partition_id_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word EqvClass_4,
  MR_Box Element_5,
  MR_Integer * PartitionId_6)
{
  MR_bool succeeded;
  MR_Word ElementMap_7 = ((MR_Word) ((MR_hl_field(0, EqvClass_4, 2))));
  MR_Box conv0_PartitionId_6;

  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_10, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ElementMap_7, Element_5, &conv0_PartitionId_6);
  if (succeeded)
  {
    *PartitionId_6 = ((MR_Integer) (conv0_PartitionId_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__eqvclass__is_member_2_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word EqvClass_3,
  MR_Box Element_4)
{
  MR_bool succeeded;
  MR_Word ElementMap_5 = ((MR_Word) ((MR_hl_field(0, EqvClass_3, 2))));
  MR_Box conv0_Var_6;

  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_9, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ElementMap_5, Element_4, &conv0_Var_6);
  if (succeeded)
    succeeded = MR_TRUE;
  return succeeded;
}

void MR_CALL 
mercury__eqvclass__init_1_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word * EqvClass_2)
{
  *EqvClass_2 = (MR_Word) (&mercury__eqvclass_scalar_common_1[1]);
}

MR_Word MR_CALL 
mercury__eqvclass__init_0_f_0(
  MR_Word TypeInfo_for_T_3)
{
  return (MR_Word) (&mercury__eqvclass_scalar_common_1[1]);
}

static MR_bool MR_CALL 
mercury__eqvclass____Unify____eqvclass_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__eqvclass____Unify____eqvclass_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__eqvclass____Compare____eqvclass_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__eqvclass____Compare____eqvclass_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__eqvclass____Unify____partition_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__eqvclass____Unify____partition_id_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__eqvclass____Compare____partition_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__eqvclass____Compare____partition_id_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__eqvclass__init(void)
{
}

void mercury__eqvclass__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1);
  MR_register_type_ctor_info(&mercury__eqvclass__eqvclass__type_ctor_info_partition_id_0);
}

void mercury__eqvclass__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__eqvclass__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module eqvclass.
