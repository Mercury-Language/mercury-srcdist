/*
** Automatically generated from `eqvclass.m'
** by the Mercury compiler,
** version rotd-2018-02-02
** configured for x86_64-pc-linux-gnu.
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
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "std_util.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_conversion.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
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

static MR_Integer MR_CALL 
mercury__eqvclass__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

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
mercury__eqvclass__make_partition_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word STATE_VARIABLE_ElementMap_0_3,
  MR_Word * STATE_VARIABLE_ElementMap_4);

static MR_bool MR_CALL 
mercury__eqvclass__same_eqvclass_list_2_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word ElementMap_1,
  MR_Word HeadVar__2_2,
  MR_Integer Id_3);

static void MR_CALL 
mercury__eqvclass__add_equivalence_4_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Integer IdA_5,
  MR_Integer IdB_6,
  MR_Word EqvClass0_7,
  MR_Word * EqvClass_8);

static void MR_CALL 
mercury__eqvclass__change_partition_4_p_0(
  MR_Word TypeInfo_for_T_17,
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

static /* final */ const MR_Box mercury__eqvclass_scalar_common_3[2][5];

static /* final */ const MR_Integer mercury__eqvclass_scalar_common_4[1][3];

static /* final */ const MR_Box mercury__eqvclass_scalar_common_5[1][14];




static /* final */ const MR_Box mercury__eqvclass_scalar_common_1[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__eqvclass_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__eqvclass_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__eqvclass_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__eqvclass_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__eqvclass_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer mercury__eqvclass_scalar_common_4[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};

static /* final */ const MR_Box mercury__eqvclass_scalar_common_5[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mercury__eqvclass_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
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
#include "int8.mh"
#include "io.mh"
#include "math.mh"
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
#include "uint8.mh"
#include "version_array.mh"



static const MR_VA_PseudoTypeInfo_Struct2 mercury__eqvclass____vpti_func_2__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__eqvclass__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__eqvclass__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__eqvclass__set_ordlist__pti_set_ordlist_1__pseudo_1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__eqvclass__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo mercury__eqvclass__eqvclass__field_types_eqvclass_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__eqvclass__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__eqvclass__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0
};

static const MR_ConstString mercury__eqvclass__eqvclass__field_names_eqvclass_1_0[3] = {
  (MR_String) "next_id",
  (MR_String) "partitions",
  (MR_String) "keys"
};

static const MR_DuFunctorDesc mercury__eqvclass__eqvclass__du_functor_desc_eqvclass_1_0 = {
  (MR_String) "eqvclass",
  (MR_Integer) 3,
  (MR_Integer) 6,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__eqvclass__eqvclass__field_types_eqvclass_1_0,
  mercury__eqvclass__eqvclass__field_names_eqvclass_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__eqvclass__eqvclass__du_stag_ordered_eqvclass_1_0[1] = {
  &mercury__eqvclass__eqvclass__du_functor_desc_eqvclass_1_0
};

static const MR_DuPtagLayout mercury__eqvclass__eqvclass__du_ptag_ordered_eqvclass_1[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__eqvclass__eqvclass__du_stag_ordered_eqvclass_1_0
  }
};

static const MR_DuFunctorDescPtr mercury__eqvclass__eqvclass__du_name_ordered_eqvclass_1[1] = {
  &mercury__eqvclass__eqvclass__du_functor_desc_eqvclass_1_0
};

static const MR_Integer mercury__eqvclass__eqvclass__functor_number_map_eqvclass_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__eqvclass____Unify____eqvclass_1_0_10001)),
  ((MR_Box) (mercury__eqvclass____Compare____eqvclass_1_0_10001)),
  (MR_String) "eqvclass",
  (MR_String) "eqvclass",
  {     mercury__eqvclass__eqvclass__du_name_ordered_eqvclass_1 },
  {     mercury__eqvclass__eqvclass__du_ptag_ordered_eqvclass_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__eqvclass__eqvclass__functor_number_map_eqvclass_1
};

const MR_TypeCtorInfo_Struct mercury__eqvclass__eqvclass__type_ctor_info_partition_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__eqvclass____Unify____partition_id_0_0_10001)),
  ((MR_Box) (mercury__eqvclass____Compare____partition_id_0_0_10001)),
  (MR_String) "eqvclass",
  (MR_String) "partition_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_Integer MR_CALL 
mercury__eqvclass__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__eqvclass____Compare____partition_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
mercury__eqvclass____Unify____partition_id_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__eqvclass____Compare____eqvclass_1_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;
      MR_Integer Var_24 = (MR_Integer) ArgX1_4;
      MR_Integer Var_25 = (MR_Integer) ArgY1_5;

      succeeded = (Var_24 < Var_25);
      if (succeeded)
        Var_10 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_24 == Var_25);
        if (succeeded)
          Var_10 = (MR_Integer) 0;
        else
          Var_10 = (MR_Integer) 2;
      }
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;
        MR_Word TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Word TypeCtorInfo_17_17 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
        MR_Word TypeInfo_18_18;

        {
          TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_18_18, 0) = ((MR_Box) (TypeCtorInfo_17_17));
          MR_hl_field(MR_mktag(0), TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_14));
        }
        mercury__tree234____Compare____tree234_2_0(TypeCtorInfo_16_16, TypeInfo_18_18, &Var_11, ArgX2_6, ArgY2_7);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          MR_Word TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

          mercury__tree234____Compare____tree234_2_0(TypeInfo_for_T_14, TypeCtorInfo_21_21, HeadVar__1_1, ArgX3_8, ArgY3_9);
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__eqvclass____Unify____eqvclass_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_13_13;
      MR_Word TypeCtorInfo_14_14;
      MR_Word TypeInfo_15_15;
      MR_Word TypeCtorInfo_18_18;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer Var_21 = (MR_Integer) ArgX1_3;
      MR_Integer Var_22 = (MR_Integer) ArgY1_4;

      succeeded = (Var_21 == Var_22);
      if (succeeded)
      {
        TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        TypeCtorInfo_14_14 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
        {
          TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (TypeCtorInfo_14_14));
          MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_11));
        }
        succeeded = mercury__tree234____Unify____tree234_2_0(TypeCtorInfo_13_13, TypeInfo_15_15, ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_T_11, TypeCtorInfo_18_18, ArgX3_7, ArgY3_8);
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__eqvclass__divide_equivalence_classes_2_9_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeInfo_for_U_36,
  MR_Word F_10,
  MR_Integer Id_11,
  MR_Word ItemSet_12,
  MR_Word STATE_VARIABLE_Counter_0_23,
  MR_Word * STATE_VARIABLE_Counter_24,
  MR_Word STATE_VARIABLE_Partitions_0_25,
  MR_Word * STATE_VARIABLE_Partitions_26,
  MR_Word STATE_VARIABLE_Keys_0_27,
  MR_Word * STATE_VARIABLE_Keys_28)
{
  {
    MR_Word ItemList_16 = (MR_Word) ItemSet_12;

    if ((ItemList_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140eqvclass.divide_equivalence_classes_2\'/9", (MR_String) "empty partition");
        return;
      }
    }
    else
    {
      MR_Word TypeCtorInfo_37_37;
      MR_Box Item_17 = (MR_hl_field(MR_mktag(1), ItemList_16, (MR_Integer) 0));
      MR_Word Items_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ItemList_16, (MR_Integer) 1)));
      MR_Box MainValue_19;
      MR_Word Map0_20;
      MR_Word Map1_21;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), F_10, (MR_Integer) 1)));
      MR_Word _Map_22;

      MainValue_19 = func_0(((MR_Box) F_10), Item_17);
      TypeCtorInfo_37_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      Map0_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      mercury__map__det_insert_4_p_0(TypeInfo_for_U_36, TypeCtorInfo_37_37, MainValue_19, ((MR_Box) (Id_11)), Map0_20, &Map1_21);
      mercury__eqvclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__list_0(TypeInfo_for_T_35, TypeInfo_for_U_36, F_10, Id_11, Items_18, Map1_21, &_Map_22, STATE_VARIABLE_Counter_0_23, STATE_VARIABLE_Counter_24, STATE_VARIABLE_Partitions_0_25, STATE_VARIABLE_Partitions_26, STATE_VARIABLE_Keys_0_27, STATE_VARIABLE_Keys_28);
    }
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
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__10_10 = HeadVar__9_9;
      *HeadVar__8_8 = HeadVar__7_7;
      *HeadVar__6_6 = HeadVar__5_5;
      *HeadVar__4_4 = HeadVar__3_3;
    }
    else
    {
      MR_Box V_25_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word V_26_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word V_39_31;
      MR_Word V_40_32;
      MR_Word V_41_33;
      MR_Word V_42_34;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_HeadVar__7_7;
      MR_Word next_value_of_HeadVar__9_9;

      mercury__eqvclass__divide_equivalence_classes_3_11_p_0(Var_51, Var_52, Var_53, Var_54, V_25_21, HeadVar__3_3, &V_39_31, HeadVar__5_5, &V_40_32, HeadVar__7_7, &V_41_33, HeadVar__9_9, &V_42_34);
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = V_26_22;
      next_value_of_HeadVar__3_3 = V_39_31;
      next_value_of_HeadVar__5_5 = V_40_32;
      next_value_of_HeadVar__7_7 = V_41_33;
      next_value_of_HeadVar__9_9 = V_42_34;
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
  MR_Word F_12,
  MR_Integer MainId_13,
  MR_Box Item_14,
  MR_Word STATE_VARIABLE_Map_0_26,
  MR_Word * STATE_VARIABLE_Map_27,
  MR_Word STATE_VARIABLE_Counter_0_28,
  MR_Word * STATE_VARIABLE_Counter_29,
  MR_Word STATE_VARIABLE_Partitions_0_30,
  MR_Word * STATE_VARIABLE_Partitions_31,
  MR_Word STATE_VARIABLE_Keys_0_32,
  MR_Word * STATE_VARIABLE_Keys_33)
{
  {
    MR_bool succeeded;
    MR_Box Value_19;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), F_12, (MR_Integer) 1)));
    MR_Integer Id_20;
    MR_Word TypeCtorInfo_47_47;
    MR_Box conv1_Id_20;

    Value_19 = func_0(((MR_Box) F_12), Item_14);
    TypeCtorInfo_47_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_U_46, TypeCtorInfo_47_47, STATE_VARIABLE_Map_0_26, Value_19, &conv1_Id_20);
    if (succeeded)
    {
      Id_20 = ((MR_Integer) conv1_Id_20);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (Id_20 == MainId_13);
      if (succeeded)
      {
        *STATE_VARIABLE_Keys_33 = STATE_VARIABLE_Keys_0_32;
        *STATE_VARIABLE_Partitions_31 = STATE_VARIABLE_Partitions_0_30;
      }
      else
      {
        MR_Word TypeCtorInfo_48_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Word TypeCtorInfo_49_49 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
        MR_Word TypeInfo_50_50;
        MR_Word MainSet0_21;
        MR_Word MainSet_22;
        MR_Word Set0_23;
        MR_Word Set_24;
        MR_Word STATE_VARIABLE_Partitions_34_34;
        MR_Word V_11_66;
        MR_Word V_4_67;
        MR_Word V_5_68;
        MR_Word V_6_69;
        MR_Word V_5_74;
        MR_Word V_6_75;
        MR_Box conv2_MainSet0_21;
        MR_Word conv3_STATE_VARIABLE_Partitions_34_34;
        MR_Box conv4_Set0_23;
        MR_Word conv5_STATE_VARIABLE_Partitions_31;

        {
          TypeInfo_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_50_50, 0) = ((MR_Box) (TypeCtorInfo_49_49));
          MR_hl_field(MR_mktag(0), TypeInfo_50_50, 1) = ((MR_Box) (TypeInfo_for_T_45));
        }
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_50_50, (MR_Word) STATE_VARIABLE_Partitions_0_30, MainId_13, &conv2_MainSet0_21);
        MainSet0_21 = ((MR_Word) conv2_MainSet0_21);
        V_11_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          V_5_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), V_5_68, 0) = Item_14;
          MR_hl_field(MR_mktag(1), V_5_68, 1) = ((MR_Box) (V_11_66));
        }
        V_4_67 = (MR_Word) MainSet0_21;
        mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_45, V_4_67, V_5_68, &V_6_69);
        MainSet_22 = (MR_Word) V_6_69;
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_50_50, MainId_13, ((MR_Box) (MainSet_22)), (MR_Word) STATE_VARIABLE_Partitions_0_30, &conv3_STATE_VARIABLE_Partitions_34_34);
        STATE_VARIABLE_Partitions_34_34 = (MR_Word) conv3_STATE_VARIABLE_Partitions_34_34;
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_50_50, (MR_Word) STATE_VARIABLE_Partitions_34_34, Id_20, &conv4_Set0_23);
        Set0_23 = ((MR_Word) conv4_Set0_23);
        V_5_74 = (MR_Word) Set0_23;
        mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_T_45, V_5_74, Item_14, &V_6_75);
        Set_24 = (MR_Word) V_6_75;
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_50_50, Id_20, ((MR_Box) (Set_24)), (MR_Word) STATE_VARIABLE_Partitions_34_34, &conv5_STATE_VARIABLE_Partitions_31);
        *STATE_VARIABLE_Partitions_31 = (MR_Word) conv5_STATE_VARIABLE_Partitions_31;
        mercury__map__det_update_4_p_0(TypeInfo_for_T_45, TypeCtorInfo_48_48, Item_14, ((MR_Box) (Id_20)), STATE_VARIABLE_Keys_0_32, STATE_VARIABLE_Keys_33);
      }
      *STATE_VARIABLE_Counter_29 = STATE_VARIABLE_Counter_0_28;
      *STATE_VARIABLE_Map_27 = STATE_VARIABLE_Map_0_26;
    }
    else
    {
      MR_Word TypeCtorInfo_51_51;
      MR_Word TypeCtorInfo_52_52;
      MR_Word TypeInfo_53_53;
      MR_Integer NewId_25 = (MR_Integer) STATE_VARIABLE_Counter_0_28;
      MR_Word STATE_VARIABLE_Partitions_39_39;
      MR_Word MainSet0_42;
      MR_Word MainSet_43;
      MR_Word Set_44;
      MR_Integer V_5_77 = (NewId_25 + (MR_Integer) 1);
      MR_Word V_11_88;
      MR_Word V_4_89;
      MR_Word V_5_90;
      MR_Word V_6_91;
      MR_Box conv6_MainSet0_42;
      MR_Word conv7_STATE_VARIABLE_Partitions_39_39;
      MR_Word conv8_STATE_VARIABLE_Partitions_31;

      *STATE_VARIABLE_Counter_29 = (MR_Word) V_5_77;
      TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      mercury__map__det_insert_4_p_0(TypeInfo_for_U_46, TypeCtorInfo_51_51, Value_19, ((MR_Box) (NewId_25)), STATE_VARIABLE_Map_0_26, STATE_VARIABLE_Map_27);
      TypeCtorInfo_52_52 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
      {
        TypeInfo_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_53_53, 0) = ((MR_Box) (TypeCtorInfo_52_52));
        MR_hl_field(MR_mktag(0), TypeInfo_53_53, 1) = ((MR_Box) (TypeInfo_for_T_45));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_53_53, (MR_Word) STATE_VARIABLE_Partitions_0_30, MainId_13, &conv6_MainSet0_42);
      MainSet0_42 = ((MR_Word) conv6_MainSet0_42);
      V_11_88 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        V_5_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), V_5_90, 0) = Item_14;
        MR_hl_field(MR_mktag(1), V_5_90, 1) = ((MR_Box) (V_11_88));
      }
      V_4_89 = (MR_Word) MainSet0_42;
      mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_45, V_4_89, V_5_90, &V_6_91);
      MainSet_43 = (MR_Word) V_6_91;
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_53_53, MainId_13, ((MR_Box) (MainSet_43)), (MR_Word) STATE_VARIABLE_Partitions_0_30, &conv7_STATE_VARIABLE_Partitions_39_39);
      STATE_VARIABLE_Partitions_39_39 = (MR_Word) conv7_STATE_VARIABLE_Partitions_39_39;
      Set_44 = mercury__set__make_singleton_set_1_f_0(TypeInfo_for_T_45, Item_14);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_53_53, NewId_25, ((MR_Box) (Set_44)), (MR_Word) STATE_VARIABLE_Partitions_39_39, &conv8_STATE_VARIABLE_Partitions_31);
      *STATE_VARIABLE_Partitions_31 = (MR_Word) conv8_STATE_VARIABLE_Partitions_31;
      mercury__map__det_update_4_p_0(TypeInfo_for_T_45, TypeCtorInfo_51_51, Item_14, ((MR_Box) (NewId_25)), STATE_VARIABLE_Keys_0_32, STATE_VARIABLE_Keys_33);
    }
  }
}

void MR_CALL 
mercury__eqvclass__partition_ids_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word EqvClass0_3,
  MR_Word * Ids_4)
{
  {
    MR_Word TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word TypeCtorInfo_10_10 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
    MR_Word TypeInfo_11_11;
    MR_Word PartitionMap0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_3, (MR_Integer) 1)));
    MR_Word V_5_16;
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_3, (MR_Integer) 2)));

    {
      TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 0) = ((MR_Box) (TypeCtorInfo_10_10));
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_for_T_8));
    }
    V_5_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__tree234__keys_acc_3_p_0(TypeCtorInfo_9_9, TypeInfo_11_11, PartitionMap0_5, V_5_16, Ids_4);
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Counter_24;
    MR_Word conv1_STATE_VARIABLE_Partitions_26;
    MR_Word conv0_STATE_VARIABLE_Keys_28;

    mercury__eqvclass__divide_equivalence_classes_2_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv2_STATE_VARIABLE_Counter_24, ((MR_Word) wrapper_arg_5), &conv1_STATE_VARIABLE_Partitions_26, ((MR_Word) wrapper_arg_7), &conv0_STATE_VARIABLE_Keys_28);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Counter_24));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_Partitions_26));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Keys_28));
  }
}

MR_Word MR_CALL 
mercury__eqvclass__divide_equivalence_classes_2_f_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_U_16,
  MR_Word F_4,
  MR_Word E0_5)
{
  {
    MR_Word E_6;
    MR_Word TypeCtorInfo_25_25;
    MR_Word TypeCtorInfo_26_26;
    MR_Word TypeInfo_27_27;
    MR_Word TypeCtorInfo_29_29;
    MR_Word TypeInfo_30_30;
    MR_Word TypeInfo_31_31;
    MR_Word TypeInfo_for_K_40;
    MR_Word TypeInfo_for_A_41;
    MR_Word Counter0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), E0_5, (MR_Integer) 0)));
    MR_Word Partitions0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), E0_5, (MR_Integer) 1)));
    MR_Word Keys0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), E0_5, (MR_Integer) 2)));
    MR_Word Counter_10;
    MR_Word Partitions_11;
    MR_Word Keys_12;
    MR_Word Var_13;
    MR_Box conv5_Counter_10;
    MR_Box conv4_Partitions_11;
    MR_Box conv3_Keys_12;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&mercury__eqvclass_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (mercury__eqvclass__divide_equivalence_classes_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (TypeInfo_for_T_15));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (TypeInfo_for_U_16));
      MR_hl_field(MR_mktag(0), Var_13, 5) = ((MR_Box) (F_4));
    }
    TypeCtorInfo_25_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    TypeCtorInfo_26_26 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
    {
      TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_27_27, 0) = ((MR_Box) (TypeCtorInfo_26_26));
      MR_hl_field(MR_mktag(0), TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_T_15));
    }
    TypeCtorInfo_29_29 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
    {
      TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_30_30, 0) = ((MR_Box) (TypeCtorInfo_29_29));
      MR_hl_field(MR_mktag(0), TypeInfo_30_30, 1) = ((MR_Box) (TypeCtorInfo_25_25));
      MR_hl_field(MR_mktag(0), TypeInfo_30_30, 2) = ((MR_Box) (TypeInfo_27_27));
    }
    {
      TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_31_31, 0) = ((MR_Box) (TypeCtorInfo_29_29));
      MR_hl_field(MR_mktag(0), TypeInfo_31_31, 1) = ((MR_Box) (TypeInfo_for_T_15));
      MR_hl_field(MR_mktag(0), TypeInfo_31_31, 2) = ((MR_Box) (TypeCtorInfo_25_25));
    }
    TypeInfo_for_K_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    TypeInfo_for_A_41 = (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0;
    mercury__tree234__foldl3_8_p_0(TypeInfo_for_K_40, TypeInfo_27_27, TypeInfo_for_A_41, TypeInfo_30_30, TypeInfo_31_31, Var_13, Partitions0_8, ((MR_Box) (Counter0_7)), &conv5_Counter_10, ((MR_Box) (Partitions0_8)), &conv4_Partitions_11, ((MR_Box) (Keys0_9)), &conv3_Keys_12);
    Counter_10 = ((MR_Word) conv5_Counter_10);
    Partitions_11 = ((MR_Word) conv4_Partitions_11);
    Keys_12 = ((MR_Word) conv3_Keys_12);
    {
      E_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), E_6, 0) = ((MR_Box) (Counter_10));
      MR_hl_field(MR_mktag(0), E_6, 1) = ((MR_Box) (Partitions_11));
      MR_hl_field(MR_mktag(0), E_6, 2) = ((MR_Box) (Keys_12));
    }
    return E_6;
  }
}

MR_Word MR_CALL 
mercury__eqvclass__remove_equivalent_elements_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word EqvClass0_4,
  MR_Box X_5)
{
  {
    MR_Word EqvClass_6;

    mercury__eqvclass__remove_equivalent_elements_3_p_0(TypeInfo_for_T_7, X_5, EqvClass0_4, &EqvClass_6);
    return EqvClass_6;
  }
}

void MR_CALL 
mercury__eqvclass__remove_equivalent_elements_3_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_EqvClass_0_13,
  MR_Word * STATE_VARIABLE_EqvClass_14)
{
  {
    MR_bool succeeded;
    MR_Word Id_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_EqvClass_0_13, (MR_Integer) 0)));
    MR_Word P0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_EqvClass_0_13, (MR_Integer) 1)));
    MR_Word E0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_EqvClass_0_13, (MR_Integer) 2)));
    MR_Integer Partition_9;
    MR_Word TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Box conv0_Partition_9;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_17, TypeCtorInfo_18_18, E0_8, X_4, &conv0_Partition_9);
    if (succeeded)
    {
      Partition_9 = ((MR_Integer) conv0_Partition_9);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      MR_Word TypeCtorInfo_20_20 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
      MR_Word TypeInfo_21_21;
      MR_Word Eq_10;
      MR_Word P_11;
      MR_Word E_12;
      MR_Word Var_15;
      MR_Box conv1_Eq_10;

      {
        TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_21_21, 0) = ((MR_Box) (TypeCtorInfo_20_20));
        MR_hl_field(MR_mktag(0), TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_17));
      }
      mercury__map__det_remove_4_p_0(TypeCtorInfo_19_19, TypeInfo_21_21, ((MR_Box) (Partition_9)), &conv1_Eq_10, P0_7, &P_11);
      Eq_10 = ((MR_Word) conv1_Eq_10);
      Var_15 = (MR_Word) Eq_10;
      mercury__map__delete_list_3_p_0(TypeInfo_for_T_17, TypeCtorInfo_19_19, Var_15, E0_8, &E_12);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_EqvClass_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Id_6));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (P_11));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (E_12));
      }
    }
    else
      *STATE_VARIABLE_EqvClass_14 = STATE_VARIABLE_EqvClass_0_13;
  }
}

MR_Box MR_CALL 
mercury__eqvclass__get_minimum_element_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word EqvClass_4,
  MR_Box X_5)
{
  {
    MR_Box HeadVar__3_3;
    MR_Word Var_6;
    MR_Word Var_7;

    Var_7 = mercury__eqvclass__get_equivalent_elements_2_f_0(TypeInfo_for_T_8, EqvClass_4, X_5);
    Var_6 = (MR_Word) Var_7;
    HeadVar__3_3 = mercury__list__det_head_1_f_0(TypeInfo_for_T_8, Var_6);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__eqvclass__get_equivalent_elements_2_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1,
  MR_Box X_7)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;
    MR_Word PartitionMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ElementMap_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Eqv_8;
    MR_Word TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word TypeCtorInfo_12_12 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
    MR_Word TypeInfo_13_13;
    MR_Integer Var_9;
    MR_Box conv0_Var_9;
    MR_Box conv1_Eqv_8;

    {
      TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 0) = ((MR_Box) (TypeCtorInfo_12_12));
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_T_10));
    }
    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_10, TypeCtorInfo_11_11, ElementMap_6, X_7, &conv0_Var_9);
    if (succeeded)
    {
      Var_9 = ((MR_Integer) conv0_Var_9);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_13_13, (MR_Word) PartitionMap_5, Var_9, &conv1_Eqv_8);
      if (succeeded)
      {
        Eqv_8 = ((MR_Word) conv1_Eqv_8);
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      HeadVar__3_3 = Eqv_8;
    else
    {
      MR_Word V_4_33;
      MR_Word V_5_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

      {
        V_4_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), V_4_33, 0) = X_7;
        MR_hl_field(MR_mktag(1), V_4_33, 1) = ((MR_Box) (V_5_34));
      }
      HeadVar__3_3 = (MR_Word) V_4_33;
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__eqvclass__partition_list_to_eqvclass_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Xs_3)
{
  {
    MR_Word EqvClass_4;

    mercury__eqvclass__partition_list_to_eqvclass_2_p_0(TypeInfo_for_T_5, Xs_3, &EqvClass_4);
    return EqvClass_4;
  }
}

void MR_CALL 
mercury__eqvclass__partition_set_to_eqvclass_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word SetSet_3,
  MR_Word * EqvClass_4)
{
  {
    MR_Word ListSet_5 = (MR_Word) SetSet_3;

    mercury__eqvclass__partition_list_to_eqvclass_2_p_0(TypeInfo_for_T_6, ListSet_5, EqvClass_4);
  }
}

MR_Word MR_CALL 
mercury__eqvclass__partition_set_to_eqvclass_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3)
{
  {
    MR_Word EqvClass_4;
    MR_Word ListSet_8 = (MR_Word) Set_3;

    mercury__eqvclass__partition_list_to_eqvclass_2_p_0(TypeInfo_for_T_5, ListSet_8, &EqvClass_4);
    return EqvClass_4;
  }
}

void MR_CALL 
mercury__eqvclass__partition_list_to_eqvclass_2_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word HeadVar__1_1,
  MR_Word * EqvClass_2)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    MR_Word PartitionMap_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word ElementMap_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word Var_25 = (MR_Word) ((MR_Box) ((MR_Integer) 0));

    *EqvClass_2 = (MR_Word) &mercury__eqvclass_scalar_common_1[1];
  }
  else
  {
    MR_Word Partition_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Ps_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word EqvClass0_7;
    MR_Word Counter0_8;
    MR_Word PartitionMap0_9;
    MR_Word ElementMap0_10;
    MR_Word Elements_11;
    MR_Word Counter_12;
    MR_Word ElementMap_13;
    MR_Word PartitionMap_14;

    mercury__eqvclass__partition_list_to_eqvclass_2_p_0(TypeInfo_for_T_18, Ps_5, &EqvClass0_7);
    Counter0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 0)));
    PartitionMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 1)));
    ElementMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 2)));
    Elements_11 = (MR_Word) Partition_4;
    if ((Elements_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      Counter_12 = Counter0_8;
      ElementMap_13 = ElementMap0_10;
      PartitionMap_14 = PartitionMap0_9;
    }
    else
    {
      MR_Word TypeCtorInfo_20_20;
      MR_Word TypeInfo_21_21;
      MR_Integer Id_17 = (MR_Integer) Counter0_8;
      MR_Integer V_5_37 = (Id_17 + (MR_Integer) 1);
      MR_Word conv0_PartitionMap_14;

      Counter_12 = (MR_Word) V_5_37;
      mercury__eqvclass__make_partition_4_p_0(TypeInfo_for_T_18, Elements_11, Id_17, ElementMap0_10, &ElementMap_13);
      TypeCtorInfo_20_20 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
      {
        TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_21_21, 0) = ((MR_Box) (TypeCtorInfo_20_20));
        MR_hl_field(MR_mktag(0), TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_18));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_21_21, Id_17, ((MR_Box) (Partition_4)), (MR_Word) PartitionMap0_9, &conv0_PartitionMap_14);
      PartitionMap_14 = (MR_Word) conv0_PartitionMap_14;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *EqvClass_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Counter_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PartitionMap_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ElementMap_13));
    }
  }
}

static void MR_CALL 
mercury__eqvclass__make_partition_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word STATE_VARIABLE_ElementMap_0_3,
  MR_Word * STATE_VARIABLE_ElementMap_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_ElementMap_4 = STATE_VARIABLE_ElementMap_0_3;
    else
    {
      MR_Word TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      MR_Box Element_9 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word Elements_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_ElementMap_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ElementMap_0_3;

      mercury__map__det_insert_4_p_0(TypeInfo_for_T_17, TypeCtorInfo_18_18, Element_9, ((MR_Box) (HeadVar__2_2)), STATE_VARIABLE_ElementMap_0_3, &STATE_VARIABLE_ElementMap_15_15);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Elements_10;
      next_value_of_STATE_VARIABLE_ElementMap_0_3 = STATE_VARIABLE_ElementMap_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
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
  {
    MR_Word TypeCtorInfo_9_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word TypeCtorInfo_10_13 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
    MR_Word TypeInfo_11_14;
    MR_Word Ids_5;
    MR_Word PartitionMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass_3, (MR_Integer) 1)));
    MR_Word V_5_19;
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass_3, (MR_Integer) 0)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass_3, (MR_Integer) 2)));

    {
      TypeInfo_11_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_11_14, 0) = ((MR_Box) (TypeCtorInfo_10_13));
      MR_hl_field(MR_mktag(0), TypeInfo_11_14, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    V_5_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__tree234__keys_acc_3_p_0(TypeCtorInfo_9_12, TypeInfo_11_14, PartitionMap0_9, V_5_19, &Ids_5);
    mercury__eqvclass__partitions_3_p_0(TypeInfo_for_T_6, EqvClass_3, Ids_5, PartitionList_4);
  }
}

MR_Word MR_CALL 
mercury__eqvclass__partition_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word EqvClass_3)
{
  {
    MR_Word Xs_4;
    MR_Word TypeCtorInfo_9_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word TypeCtorInfo_10_15 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
    MR_Word TypeInfo_11_16;
    MR_Word Ids_8;
    MR_Word PartitionMap0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass_3, (MR_Integer) 1)));
    MR_Word V_5_21;
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass_3, (MR_Integer) 0)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass_3, (MR_Integer) 2)));

    {
      TypeInfo_11_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_11_16, 0) = ((MR_Box) (TypeCtorInfo_10_15));
      MR_hl_field(MR_mktag(0), TypeInfo_11_16, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    V_5_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__tree234__keys_acc_3_p_0(TypeCtorInfo_9_14, TypeInfo_11_16, PartitionMap0_11, V_5_21, &Ids_8);
    mercury__eqvclass__partitions_3_p_0(TypeInfo_for_T_5, EqvClass_3, Ids_8, &Xs_4);
    return Xs_4;
  }
}

MR_Word MR_CALL 
mercury__eqvclass__partition_set_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word EqvClass_3)
{
  {
    MR_Word S_4;

    mercury__eqvclass__partition_set_2_p_0(TypeInfo_for_T_5, EqvClass_3, &S_4);
    return S_4;
  }
}

void MR_CALL 
mercury__eqvclass__partition_set_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word EqvClass0_3,
  MR_Word * PartitionSet_4)
{
  {
    MR_Word TypeInfo_9_9;
    MR_Word TypeCtorInfo_9_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word TypeCtorInfo_10_16 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
    MR_Word Ids_5;
    MR_Word PartitionList_6;
    MR_Word PartitionMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_3, (MR_Integer) 1)));
    MR_Word V_5_22;
    MR_Word V_4_27;
    MR_Integer V_5_30;
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_3, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_3, (MR_Integer) 2)));
    MR_Word conv0_V_4_27;

    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (TypeCtorInfo_10_16));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_7));
    }
    V_5_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__tree234__keys_acc_3_p_0(TypeCtorInfo_9_15, TypeInfo_9_9, PartitionMap0_12, V_5_22, &Ids_5);
    mercury__eqvclass__partitions_3_p_0(TypeInfo_for_T_7, EqvClass0_3, Ids_5, &PartitionList_6);
    mercury__list__length_acc_3_p_0(TypeInfo_9_9, (MR_Word) PartitionList_6, (MR_Integer) 0, &V_5_30);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_9_9, V_5_30, (MR_Word) PartitionList_6, &conv0_V_4_27);
    V_4_27 = (MR_Word) conv0_V_4_27;
    *PartitionSet_4 = (MR_Word) V_4_27;
  }
}

void MR_CALL 
mercury__eqvclass__partitions_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Integer Id_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Ids_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Partition_8;
      MR_Word Partitions_9;
      MR_Word PartitionMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word PartitionPrime_15;
      MR_Word TypeCtorInfo_15_21 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
      MR_Word TypeInfo_16_22;
      MR_Box conv0_PartitionPrime_15;

      {
        TypeInfo_16_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_16_22, 0) = ((MR_Box) (TypeCtorInfo_15_21));
        MR_hl_field(MR_mktag(0), TypeInfo_16_22, 1) = ((MR_Box) (TypeInfo_for_T_10));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_16_22, (MR_Word) PartitionMap0_14, Id_6, &conv0_PartitionPrime_15);
      if (succeeded)
      {
        PartitionPrime_15 = ((MR_Word) conv0_PartitionPrime_15);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        Partition_8 = PartitionPrime_15;
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140eqvclass.id_to_partition\'/3", (MR_String) "partition id not known to equivalence class");
          return;
        }
      }
      mercury__eqvclass__partitions_3_p_0(TypeInfo_for_T_10, HeadVar__1_1, Ids_7, &Partitions_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Partition_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Partitions_9));
      }
    }
  }
}

MR_bool MR_CALL 
mercury__eqvclass__same_eqvclass_list_2_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word EqvClass_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      MR_Box Element_5 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word Elements_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ElementMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass_1, (MR_Integer) 2)));
      MR_Integer Id_8;
      MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass_1, (MR_Integer) 0)));
      MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass_1, (MR_Integer) 1)));
      MR_Box conv0_Id_8;

      succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_11, TypeCtorInfo_12_12, ElementMap_7, Element_5, &conv0_Id_8);
      if (succeeded)
      {
        Id_8 = ((MR_Integer) conv0_Id_8);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        succeeded = mercury__eqvclass__same_eqvclass_list_2_3_p_0(TypeInfo_for_T_11, ElementMap_7, Elements_6, Id_8);
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__eqvclass__same_eqvclass_list_2_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word ElementMap_1,
  MR_Word HeadVar__2_2,
  MR_Integer Id_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      MR_Box Element_7 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word Elements_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer Var_12;
      MR_Box conv0_Var_12;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_10, TypeCtorInfo_11_11, ElementMap_1, Element_7, &conv0_Var_12);
      if (succeeded)
      {
        Var_12 = ((MR_Integer) conv0_Var_12);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = (Id_3 == Var_12);
        if (succeeded)
        {
          // direct tailcall eliminated
          next_value_of_HeadVar__2_2 = Elements_8;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
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
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word ElementMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_4, (MR_Integer) 2)));
    MR_Integer Id1_8;
    MR_Integer Id2_9;
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_4, (MR_Integer) 0)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_4, (MR_Integer) 1)));
    MR_Box conv0_Id1_8;
    MR_Box conv1_Id2_9;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_12, TypeCtorInfo_13_13, ElementMap0_7, Element1_5, &conv0_Id1_8);
    if (succeeded)
    {
      Id1_8 = ((MR_Integer) conv0_Id1_8);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_12, TypeCtorInfo_13_13, ElementMap0_7, Element2_6, &conv1_Id2_9);
      if (succeeded)
      {
        Id2_9 = ((MR_Integer) conv1_Id2_9);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        succeeded = (Id1_8 == Id2_9);
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__eqvclass__new_equivalence_3_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word STATE_VARIABLE_EqvClass_0_8,
  MR_Box X_6,
  MR_Box Y_7)
{
  {
    MR_Word STATE_VARIABLE_EqvClass_9;

    mercury__eqvclass__new_equivalence_4_p_0(TypeInfo_for_T_11, X_6, Y_7, STATE_VARIABLE_EqvClass_0_8, &STATE_VARIABLE_EqvClass_9);
    return STATE_VARIABLE_EqvClass_9;
  }
}

void MR_CALL 
mercury__eqvclass__new_equivalence_4_p_0(
  MR_Word TypeInfo_for_T_57,
  MR_Box ElementA_5,
  MR_Box ElementB_6,
  MR_Word EqvClass0_7,
  MR_Word * EqvClass_8)
{
  {
    MR_bool succeeded;
    MR_Word ElementMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 2)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 0)));
    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 1)));
    MR_Integer IdA_10;
    MR_Word TypeCtorInfo_58_58 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Box conv0_IdA_10;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_57, TypeCtorInfo_58_58, ElementMap0_9, ElementA_5, &conv0_IdA_10);
    if (succeeded)
    {
      IdA_10 = ((MR_Integer) conv0_IdA_10);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Integer IdB_11;
      MR_Word TypeCtorInfo_59_59 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      MR_Box conv1_IdB_11;

      succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_57, TypeCtorInfo_59_59, ElementMap0_9, ElementB_6, &conv1_IdB_11);
      if (succeeded)
      {
        IdB_11 = ((MR_Integer) conv1_IdB_11);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = (IdA_10 == IdB_11);
        if (succeeded)
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140eqvclass.new_equivalence\'/4", (MR_String) "the two elements are already equivalent");
            return;
          }
        }
        else
          mercury__eqvclass__add_equivalence_4_p_0(TypeInfo_for_T_57, IdA_10, IdB_11, EqvClass0_7, EqvClass_8);
      }
      else
      {
        MR_Word TypeCtorInfo_60_60 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Word TypeCtorInfo_61_61 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
        MR_Word TypeInfo_62_62;
        MR_Word PartitionMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 1)));
        MR_Word PartitionA_13;
        MR_Word Partition_14;
        MR_Word PartitionMap_15;
        MR_Word ElementMap_16;
        MR_Word NextId0_17;
        MR_Word V_5_83;
        MR_Word V_6_84;
        MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 0)));
        MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 2)));
        MR_Box conv2_PartitionA_13;
        MR_Word conv3_PartitionMap_15;
        MR_Word Var_47;
        MR_Word Var_48;

        {
          TypeInfo_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_62_62, 0) = ((MR_Box) (TypeCtorInfo_61_61));
          MR_hl_field(MR_mktag(0), TypeInfo_62_62, 1) = ((MR_Box) (TypeInfo_for_T_57));
        }
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_62_62, (MR_Word) PartitionMap0_12, IdA_10, &conv2_PartitionA_13);
        PartitionA_13 = ((MR_Word) conv2_PartitionA_13);
        V_5_83 = (MR_Word) PartitionA_13;
        mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_T_57, V_5_83, ElementB_6, &V_6_84);
        Partition_14 = (MR_Word) V_6_84;
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_62_62, IdA_10, ((MR_Box) (Partition_14)), (MR_Word) PartitionMap0_12, &conv3_PartitionMap_15);
        PartitionMap_15 = (MR_Word) conv3_PartitionMap_15;
        mercury__map__det_insert_4_p_0(TypeInfo_for_T_57, TypeCtorInfo_60_60, ElementB_6, ((MR_Box) (IdA_10)), ElementMap0_9, &ElementMap_16);
        NextId0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 0)));
        Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 1)));
        Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 2)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *EqvClass_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NextId0_17));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PartitionMap_15));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ElementMap_16));
        }
      }
    }
    else
    {
      MR_Word Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 1)));
      MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 0)));
      MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 2)));
      MR_Integer IdB_37;
      MR_Word TypeCtorInfo_63_63 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      MR_Box conv4_IdB_37;

      succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_57, TypeCtorInfo_63_63, ElementMap0_9, ElementB_6, &conv4_IdB_37);
      if (succeeded)
      {
        IdB_37 = ((MR_Integer) conv4_IdB_37);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word TypeCtorInfo_64_64 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Word TypeCtorInfo_65_65 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
        MR_Word TypeInfo_66_66;
        MR_Word PartitionB_18;
        MR_Word Partition_28;
        MR_Word PartitionMap_29;
        MR_Word ElementMap_30;
        MR_Word NextId0_31;
        MR_Word V_5_92;
        MR_Word V_6_93;
        MR_Box conv5_PartitionB_18;
        MR_Word conv6_PartitionMap_29;
        MR_Word Var_51;
        MR_Word Var_52;

        {
          TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_66_66, 0) = ((MR_Box) (TypeCtorInfo_65_65));
          MR_hl_field(MR_mktag(0), TypeInfo_66_66, 1) = ((MR_Box) (TypeInfo_for_T_57));
        }
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_66_66, (MR_Word) Var_71, IdB_37, &conv5_PartitionB_18);
        PartitionB_18 = ((MR_Word) conv5_PartitionB_18);
        V_5_92 = (MR_Word) PartitionB_18;
        mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_T_57, V_5_92, ElementA_5, &V_6_93);
        Partition_28 = (MR_Word) V_6_93;
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_66_66, IdB_37, ((MR_Box) (Partition_28)), (MR_Word) Var_71, &conv6_PartitionMap_29);
        PartitionMap_29 = (MR_Word) conv6_PartitionMap_29;
        mercury__map__det_insert_4_p_0(TypeInfo_for_T_57, TypeCtorInfo_64_64, ElementA_5, ((MR_Box) (IdB_37)), ElementMap0_9, &ElementMap_30);
        NextId0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 0)));
        Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 1)));
        Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 2)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *EqvClass_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NextId0_31));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PartitionMap_29));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ElementMap_30));
        }
      }
      else
      {
        MR_Word TypeCtorInfo_67_67;
        MR_Word TypeCtorInfo_68_68;
        MR_Word TypeInfo_69_69;
        MR_Integer Id_19 = (MR_Integer) Var_72;
        MR_Word NextId_20;
        MR_Word ElementMap1_21;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Word Var_26;
        MR_Word PartitionMap0_32;
        MR_Word Partition_33;
        MR_Word PartitionMap_34;
        MR_Word ElementMap_35;
        MR_Integer V_5_95 = (Id_19 + (MR_Integer) 1);
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word conv7_PartitionMap_34;

        NextId_20 = (MR_Word) V_5_95;
        TypeCtorInfo_67_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        mercury__map__det_insert_4_p_0(TypeInfo_for_T_57, TypeCtorInfo_67_67, ElementA_5, ((MR_Box) (Id_19)), ElementMap0_9, &ElementMap1_21);
        mercury__map__det_insert_4_p_0(TypeInfo_for_T_57, TypeCtorInfo_67_67, ElementB_6, ((MR_Box) (Id_19)), ElementMap1_21, &ElementMap_35);
        Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 0)));
        PartitionMap0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 1)));
        Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 2)));
        Var_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ElementB_6;
          MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_26));
        }
        {
          Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_24, 0) = ElementA_5;
          MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_25));
        }
        mercury__set__list_to_set_2_p_0(TypeInfo_for_T_57, Var_24, &Partition_33);
        TypeCtorInfo_68_68 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
        {
          TypeInfo_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_69_69, 0) = ((MR_Box) (TypeCtorInfo_68_68));
          MR_hl_field(MR_mktag(0), TypeInfo_69_69, 1) = ((MR_Box) (TypeInfo_for_T_57));
        }
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_69_69, Id_19, ((MR_Box) (Partition_33)), (MR_Word) PartitionMap0_32, &conv7_PartitionMap_34);
        PartitionMap_34 = (MR_Word) conv7_PartitionMap_34;
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *EqvClass_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NextId_20));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PartitionMap_34));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ElementMap_35));
        }
      }
    }
  }
}

MR_Word MR_CALL 
mercury__eqvclass__ensure_corresponding_equivalences_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word L1_5,
  MR_Word L2_6,
  MR_Word EqvClass0_7)
{
  {
    MR_Word EqvClass_8;

    mercury__eqvclass__ensure_corresponding_equivalences_4_p_0(TypeInfo_for_T_9, L1_5, L2_6, EqvClass0_7, &EqvClass_8);
    return EqvClass_8;
  }
}

void MR_CALL 
mercury__eqvclass__ensure_corresponding_equivalences_4_p_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_EqvClass_0_3,
  MR_Word * STATE_VARIABLE_EqvClass_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *STATE_VARIABLE_EqvClass_4 = STATE_VARIABLE_EqvClass_0_3;
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140eqvclass.ensure_corresponding_equivalences\'/4", (MR_String) "list length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Box Var_33 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));

      if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140eqvclass.ensure_corresponding_equivalences\'/4", (MR_String) "list length mismatch");
          return;
        }
      }
      else
      {
        MR_Box H2_24 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Word T2_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        MR_Word STATE_VARIABLE_EqvClass_29_29;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_EqvClass_0_3;

        mercury__eqvclass__ensure_equivalence_4_p_0(TypeInfo_for_T_31, Var_33, H2_24, STATE_VARIABLE_EqvClass_0_3, &STATE_VARIABLE_EqvClass_29_29);
        // direct tailcall eliminated
        next_value_of_HeadVar__1_1 = Var_32;
        next_value_of_HeadVar__2_2 = T2_25;
        next_value_of_STATE_VARIABLE_EqvClass_0_3 = STATE_VARIABLE_EqvClass_29_29;
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
  MR_Word TypeInfo_for_T_11,
  MR_Word STATE_VARIABLE_EqvClass_0_8,
  MR_Box X_6,
  MR_Box Y_7)
{
  {
    MR_Word STATE_VARIABLE_EqvClass_9;

    mercury__eqvclass__ensure_equivalence_4_p_0(TypeInfo_for_T_11, X_6, Y_7, STATE_VARIABLE_EqvClass_0_8, &STATE_VARIABLE_EqvClass_9);
    return STATE_VARIABLE_EqvClass_9;
  }
}

void MR_CALL 
mercury__eqvclass__ensure_equivalence_4_p_0(
  MR_Word TypeInfo_for_T_55,
  MR_Box ElementA_5,
  MR_Box ElementB_6,
  MR_Word EqvClass0_7,
  MR_Word * EqvClass_8)
{
  {
    MR_bool succeeded;
    MR_Word ElementMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 2)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 0)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 1)));
    MR_Integer IdA_10;
    MR_Word TypeCtorInfo_56_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Box conv0_IdA_10;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_55, TypeCtorInfo_56_56, ElementMap0_9, ElementA_5, &conv0_IdA_10);
    if (succeeded)
    {
      IdA_10 = ((MR_Integer) conv0_IdA_10);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Integer IdB_11;
      MR_Word TypeCtorInfo_57_57 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      MR_Box conv1_IdB_11;

      succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_55, TypeCtorInfo_57_57, ElementMap0_9, ElementB_6, &conv1_IdB_11);
      if (succeeded)
      {
        IdB_11 = ((MR_Integer) conv1_IdB_11);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = (IdA_10 == IdB_11);
        if (succeeded)
          *EqvClass_8 = EqvClass0_7;
        else
          mercury__eqvclass__add_equivalence_4_p_0(TypeInfo_for_T_55, IdA_10, IdB_11, EqvClass0_7, EqvClass_8);
      }
      else
      {
        MR_Word TypeCtorInfo_58_58 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Word TypeCtorInfo_59_59 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
        MR_Word TypeInfo_60_60;
        MR_Word PartitionMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 1)));
        MR_Word PartitionA_13;
        MR_Word Partition_14;
        MR_Word PartitionMap_15;
        MR_Word ElementMap_16;
        MR_Word NextId0_17;
        MR_Word V_5_81;
        MR_Word V_6_82;
        MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 0)));
        MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 2)));
        MR_Box conv2_PartitionA_13;
        MR_Word conv3_PartitionMap_15;
        MR_Word Var_45;
        MR_Word Var_46;

        {
          TypeInfo_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_60_60, 0) = ((MR_Box) (TypeCtorInfo_59_59));
          MR_hl_field(MR_mktag(0), TypeInfo_60_60, 1) = ((MR_Box) (TypeInfo_for_T_55));
        }
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_60_60, (MR_Word) PartitionMap0_12, IdA_10, &conv2_PartitionA_13);
        PartitionA_13 = ((MR_Word) conv2_PartitionA_13);
        V_5_81 = (MR_Word) PartitionA_13;
        mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_T_55, V_5_81, ElementB_6, &V_6_82);
        Partition_14 = (MR_Word) V_6_82;
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_60_60, IdA_10, ((MR_Box) (Partition_14)), (MR_Word) PartitionMap0_12, &conv3_PartitionMap_15);
        PartitionMap_15 = (MR_Word) conv3_PartitionMap_15;
        mercury__map__det_insert_4_p_0(TypeInfo_for_T_55, TypeCtorInfo_58_58, ElementB_6, ((MR_Box) (IdA_10)), ElementMap0_9, &ElementMap_16);
        NextId0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 0)));
        Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 1)));
        Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 2)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *EqvClass_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NextId0_17));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PartitionMap_15));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ElementMap_16));
        }
      }
    }
    else
    {
      MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 1)));
      MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 0)));
      MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 2)));
      MR_Integer IdB_35;
      MR_Word TypeCtorInfo_61_61 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      MR_Box conv4_IdB_35;

      succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_55, TypeCtorInfo_61_61, ElementMap0_9, ElementB_6, &conv4_IdB_35);
      if (succeeded)
      {
        IdB_35 = ((MR_Integer) conv4_IdB_35);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word TypeCtorInfo_62_62 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Word TypeCtorInfo_63_63 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
        MR_Word TypeInfo_64_64;
        MR_Word PartitionB_18;
        MR_Word Partition_26;
        MR_Word PartitionMap_27;
        MR_Word ElementMap_28;
        MR_Word NextId0_29;
        MR_Word V_5_90;
        MR_Word V_6_91;
        MR_Box conv5_PartitionB_18;
        MR_Word conv6_PartitionMap_27;
        MR_Word Var_49;
        MR_Word Var_50;

        {
          TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_64_64, 0) = ((MR_Box) (TypeCtorInfo_63_63));
          MR_hl_field(MR_mktag(0), TypeInfo_64_64, 1) = ((MR_Box) (TypeInfo_for_T_55));
        }
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_64_64, (MR_Word) Var_69, IdB_35, &conv5_PartitionB_18);
        PartitionB_18 = ((MR_Word) conv5_PartitionB_18);
        V_5_90 = (MR_Word) PartitionB_18;
        mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_T_55, V_5_90, ElementA_5, &V_6_91);
        Partition_26 = (MR_Word) V_6_91;
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_64_64, IdB_35, ((MR_Box) (Partition_26)), (MR_Word) Var_69, &conv6_PartitionMap_27);
        PartitionMap_27 = (MR_Word) conv6_PartitionMap_27;
        mercury__map__det_insert_4_p_0(TypeInfo_for_T_55, TypeCtorInfo_62_62, ElementA_5, ((MR_Box) (IdB_35)), ElementMap0_9, &ElementMap_28);
        NextId0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 0)));
        Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 1)));
        Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 2)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *EqvClass_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NextId0_29));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PartitionMap_27));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ElementMap_28));
        }
      }
      else
      {
        MR_Word TypeCtorInfo_65_65;
        MR_Word TypeCtorInfo_66_66;
        MR_Word TypeInfo_67_67;
        MR_Integer Id_19 = (MR_Integer) Var_70;
        MR_Word NextId_20;
        MR_Word ElementMap1_21;
        MR_Word Var_22;
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Word PartitionMap0_30;
        MR_Word Partition_31;
        MR_Word PartitionMap_32;
        MR_Word ElementMap_33;
        MR_Integer V_5_93 = (Id_19 + (MR_Integer) 1);
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word conv7_PartitionMap_32;

        NextId_20 = (MR_Word) V_5_93;
        TypeCtorInfo_65_65 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        mercury__map__det_insert_4_p_0(TypeInfo_for_T_55, TypeCtorInfo_65_65, ElementA_5, ((MR_Box) (Id_19)), ElementMap0_9, &ElementMap1_21);
        mercury__map__set_4_p_0(TypeInfo_for_T_55, TypeCtorInfo_65_65, ElementB_6, ((MR_Box) (Id_19)), ElementMap1_21, &ElementMap_33);
        Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 0)));
        PartitionMap0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 1)));
        Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 2)));
        Var_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_23, 0) = ElementB_6;
          MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_24));
        }
        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_22, 0) = ElementA_5;
          MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_23));
        }
        mercury__set__list_to_set_2_p_0(TypeInfo_for_T_55, Var_22, &Partition_31);
        TypeCtorInfo_66_66 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
        {
          TypeInfo_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_67_67, 0) = ((MR_Box) (TypeCtorInfo_66_66));
          MR_hl_field(MR_mktag(0), TypeInfo_67_67, 1) = ((MR_Box) (TypeInfo_for_T_55));
        }
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_67_67, Id_19, ((MR_Box) (Partition_31)), (MR_Word) PartitionMap0_30, &conv7_PartitionMap_32);
        PartitionMap_32 = (MR_Word) conv7_PartitionMap_32;
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *EqvClass_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NextId_20));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PartitionMap_32));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ElementMap_33));
        }
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
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_25_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word TypeCtorInfo_26_26 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
    MR_Word TypeInfo_27_27;
    MR_Word NextId0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 0)));
    MR_Word PartitionMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 1)));
    MR_Word ElementMap0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass0_7, (MR_Integer) 2)));
    MR_Word PartitionA_12;
    MR_Word PartitionB_13;
    MR_Word PartitionMap_16;
    MR_Word ElementMap_18;
    MR_Box conv0_PartitionA_12;
    MR_Box conv1_PartitionB_13;
    MR_Integer Var_20;
    MR_Integer Var_21;
    MR_Word V_3_33;
    MR_Word V_3_42;

    {
      TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_27_27, 0) = ((MR_Box) (TypeCtorInfo_26_26));
      MR_hl_field(MR_mktag(0), TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_T_24));
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_27_27, (MR_Word) PartitionMap0_10, IdA_5, &conv0_PartitionA_12);
    PartitionA_12 = ((MR_Word) conv0_PartitionA_12);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_27_27, (MR_Word) PartitionMap0_10, IdB_6, &conv1_PartitionB_13);
    PartitionB_13 = ((MR_Word) conv1_PartitionB_13);
    V_3_33 = (MR_Word) PartitionA_12;
    mercury__list__length_acc_3_p_0(TypeInfo_for_T_24, V_3_33, (MR_Integer) 0, &Var_20);
    V_3_42 = (MR_Word) PartitionB_13;
    mercury__list__length_acc_3_p_0(TypeInfo_for_T_24, V_3_42, (MR_Integer) 0, &Var_21);
    succeeded = (Var_20 < Var_21);
    if (succeeded)
    {
      MR_Word TypeInfo_for_K_63;
      MR_Word PartitionMap1_14;
      MR_Word Partition_15;
      MR_Word ElementsA_17;
      MR_Word V_4_56;
      MR_Word V_5_57;
      MR_Word V_6_58;
      MR_Word V_7_52;

      mercury__tree234__delete_2_4_p_0(TypeCtorInfo_25_25, TypeInfo_27_27, PartitionMap0_10, ((MR_Box) (IdA_5)), &PartitionMap1_14, &V_7_52);
      V_4_56 = (MR_Word) PartitionB_13;
      V_5_57 = (MR_Word) PartitionA_12;
      mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_for_T_24, V_4_56, V_5_57, &V_6_58);
      Partition_15 = (MR_Word) V_6_58;
      TypeInfo_for_K_63 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      mercury__tree234__set_4_p_0(TypeInfo_for_K_63, TypeInfo_27_27, ((MR_Box) (IdB_6)), ((MR_Box) (Partition_15)), PartitionMap1_14, &PartitionMap_16);
      ElementsA_17 = (MR_Word) PartitionA_12;
      mercury__eqvclass__change_partition_4_p_0(TypeInfo_for_T_24, ElementsA_17, IdB_6, ElementMap0_11, &ElementMap_18);
    }
    else
    {
      MR_Word TypeInfo_for_K_84;
      MR_Word ElementsB_19;
      MR_Word PartitionMap1_22;
      MR_Word Partition_23;
      MR_Word V_4_77;
      MR_Word V_5_78;
      MR_Word V_6_79;
      MR_Word V_7_73;

      mercury__tree234__delete_2_4_p_0(TypeCtorInfo_25_25, TypeInfo_27_27, PartitionMap0_10, ((MR_Box) (IdB_6)), &PartitionMap1_22, &V_7_73);
      V_4_77 = (MR_Word) PartitionA_12;
      V_5_78 = (MR_Word) PartitionB_13;
      mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_for_T_24, V_4_77, V_5_78, &V_6_79);
      Partition_23 = (MR_Word) V_6_79;
      TypeInfo_for_K_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      mercury__tree234__set_4_p_0(TypeInfo_for_K_84, TypeInfo_27_27, ((MR_Box) (IdA_5)), ((MR_Box) (Partition_23)), PartitionMap1_22, &PartitionMap_16);
      ElementsB_19 = (MR_Word) PartitionB_13;
      mercury__eqvclass__change_partition_4_p_0(TypeInfo_for_T_24, ElementsB_19, IdA_5, ElementMap0_11, &ElementMap_18);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *EqvClass_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NextId0_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PartitionMap_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ElementMap_18));
    }
  }
}

static void MR_CALL 
mercury__eqvclass__change_partition_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word STATE_VARIABLE_ElementMap_0_3,
  MR_Word * STATE_VARIABLE_ElementMap_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_ElementMap_4 = STATE_VARIABLE_ElementMap_0_3;
    else
    {
      MR_Word TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      MR_Box Element_9 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word Elements_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_ElementMap_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ElementMap_0_3;

      mercury__tree234__set_4_p_0(TypeInfo_for_T_17, TypeCtorInfo_18_18, Element_9, ((MR_Box) (HeadVar__2_2)), STATE_VARIABLE_ElementMap_0_3, &STATE_VARIABLE_ElementMap_15_15);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Elements_10;
      next_value_of_STATE_VARIABLE_ElementMap_0_3 = STATE_VARIABLE_ElementMap_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ElementMap_0_3 = next_value_of_STATE_VARIABLE_ElementMap_0_3;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__eqvclass__new_element_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word STATE_VARIABLE_EqvClass_0_6,
  MR_Box X_5)
{
  {
    MR_Word STATE_VARIABLE_EqvClass_7;

    mercury__eqvclass__new_element_3_p_0(TypeInfo_for_T_9, X_5, STATE_VARIABLE_EqvClass_0_6, &STATE_VARIABLE_EqvClass_7);
    return STATE_VARIABLE_EqvClass_7;
  }
}

void MR_CALL 
mercury__eqvclass__new_element_3_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Box Element_4,
  MR_Word STATE_VARIABLE_EqvClass_0_9,
  MR_Word * STATE_VARIABLE_EqvClass_10)
{
  {
    MR_bool succeeded;
    MR_Word ElementMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_EqvClass_0_9, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_EqvClass_0_9, (MR_Integer) 0)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_EqvClass_0_9, (MR_Integer) 1)));
    MR_Word TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Integer _OldId_7;
    MR_Box conv0__OldId_7;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_16, TypeCtorInfo_17_17, ElementMap0_6, Element_4, &conv0__OldId_7);
    if (succeeded)
    {
      _OldId_7 = ((MR_Integer) conv0__OldId_7);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140eqvclass.new_element\'/3", (MR_String) "new element is already in equivalence class");
        return;
      }
    }
    else
    {
      MR_Integer Var_8;

      mercury__eqvclass__add_element_4_p_0(TypeInfo_for_T_16, Element_4, &Var_8, STATE_VARIABLE_EqvClass_0_9, STATE_VARIABLE_EqvClass_10);
    }
  }
}

void MR_CALL 
mercury__eqvclass__ensure_element_partition_id_4_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Box Element_5,
  MR_Integer * Id_6,
  MR_Word STATE_VARIABLE_EqvClass_0_10,
  MR_Word * STATE_VARIABLE_EqvClass_11)
{
  {
    MR_bool succeeded;
    MR_Word ElementMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_EqvClass_0_10, (MR_Integer) 2)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_EqvClass_0_10, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_EqvClass_0_10, (MR_Integer) 1)));
    MR_Integer OldId_9;
    MR_Word TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Box conv0_OldId_9;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_15, TypeCtorInfo_16_16, ElementMap_8, Element_5, &conv0_OldId_9);
    if (succeeded)
    {
      OldId_9 = ((MR_Integer) conv0_OldId_9);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *Id_6 = OldId_9;
      *STATE_VARIABLE_EqvClass_11 = STATE_VARIABLE_EqvClass_0_10;
    }
    else
      mercury__eqvclass__add_element_4_p_0(TypeInfo_for_T_15, Element_5, Id_6, STATE_VARIABLE_EqvClass_0_10, STATE_VARIABLE_EqvClass_11);
  }
}

void MR_CALL 
mercury__eqvclass__ensure_element_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box Element_4,
  MR_Word STATE_VARIABLE_EqvClass_0_7,
  MR_Word * STATE_VARIABLE_EqvClass_8)
{
  {
    MR_bool succeeded;
    MR_Word ElementMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_EqvClass_0_7, (MR_Integer) 2)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_EqvClass_0_7, (MR_Integer) 0)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_EqvClass_0_7, (MR_Integer) 1)));
    MR_Word TypeCtorInfo_16_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Integer OldId_17;
    MR_Box conv0_OldId_17;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_10, TypeCtorInfo_16_21, ElementMap_16, Element_4, &conv0_OldId_17);
    if (succeeded)
    {
      OldId_17 = ((MR_Integer) conv0_OldId_17);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *STATE_VARIABLE_EqvClass_8 = STATE_VARIABLE_EqvClass_0_7;
    else
    {
      MR_Integer Var_25;

      mercury__eqvclass__add_element_4_p_0(TypeInfo_for_T_10, Element_4, &Var_25, STATE_VARIABLE_EqvClass_0_7, STATE_VARIABLE_EqvClass_8);
    }
  }
}

MR_Word MR_CALL 
mercury__eqvclass__ensure_element_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word STATE_VARIABLE_EqvClass_0_6,
  MR_Box X_5)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_EqvClass_7;
    MR_Word ElementMap_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_EqvClass_0_6, (MR_Integer) 2)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_EqvClass_0_6, (MR_Integer) 0)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_EqvClass_0_6, (MR_Integer) 1)));
    MR_Word TypeCtorInfo_16_26 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Integer OldId_22;
    MR_Box conv0_OldId_22;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_9, TypeCtorInfo_16_26, ElementMap_21, X_5, &conv0_OldId_22);
    if (succeeded)
    {
      OldId_22 = ((MR_Integer) conv0_OldId_22);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      STATE_VARIABLE_EqvClass_7 = STATE_VARIABLE_EqvClass_0_6;
    else
    {
      MR_Integer Var_30;

      mercury__eqvclass__add_element_4_p_0(TypeInfo_for_T_9, X_5, &Var_30, STATE_VARIABLE_EqvClass_0_6, &STATE_VARIABLE_EqvClass_7);
    }
    return STATE_VARIABLE_EqvClass_7;
  }
}

void MR_CALL 
mercury__eqvclass__add_element_4_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Box Element_5,
  MR_Integer * Id_6,
  MR_Word STATE_VARIABLE_EqvClass_0_15,
  MR_Word * STATE_VARIABLE_EqvClass_16)
{
  {
    MR_Word TypeCtorInfo_19_19;
    MR_Word TypeCtorInfo_20_20;
    MR_Word TypeInfo_21_21;
    MR_Word Counter0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_EqvClass_0_15, (MR_Integer) 0)));
    MR_Word PartitionMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_EqvClass_0_15, (MR_Integer) 1)));
    MR_Word ElementMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_EqvClass_0_15, (MR_Integer) 2)));
    MR_Word Counter_11;
    MR_Word ElementMap_12;
    MR_Word Partition_13;
    MR_Word PartitionMap_14;
    MR_Integer V_5_23;
    MR_Word V_4_30;
    MR_Word V_5_31;
    MR_Word conv0_PartitionMap_14;

    *Id_6 = (MR_Integer) Counter0_8;
    V_5_23 = (*Id_6 + (MR_Integer) 1);
    Counter_11 = (MR_Word) V_5_23;
    TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    mercury__map__det_insert_4_p_0(TypeInfo_for_T_18, TypeCtorInfo_19_19, Element_5, ((MR_Box) (*Id_6)), ElementMap0_10, &ElementMap_12);
    V_5_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      V_4_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), V_4_30, 0) = Element_5;
      MR_hl_field(MR_mktag(1), V_4_30, 1) = ((MR_Box) (V_5_31));
    }
    Partition_13 = (MR_Word) V_4_30;
    TypeCtorInfo_20_20 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
    {
      TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 0) = ((MR_Box) (TypeCtorInfo_20_20));
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_18));
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_21_21, *Id_6, ((MR_Box) (Partition_13)), (MR_Word) PartitionMap0_9, &conv0_PartitionMap_14);
    PartitionMap_14 = (MR_Word) conv0_PartitionMap_14;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_EqvClass_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Counter_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PartitionMap_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ElementMap_12));
    }
  }
}

MR_bool MR_CALL 
mercury__eqvclass__partition_id_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word EqvClass_4,
  MR_Box Element_5,
  MR_Integer * PartitionId_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word ElementMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass_4, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass_4, (MR_Integer) 0)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass_4, (MR_Integer) 1)));
    MR_Box conv0_PartitionId_6;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_10, TypeCtorInfo_11_11, ElementMap_7, Element_5, &conv0_PartitionId_6);
    if (succeeded)
    {
      *PartitionId_6 = ((MR_Integer) conv0_PartitionId_6);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__eqvclass__is_member_2_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word EqvClass_3,
  MR_Box Element_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word ElementMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass_3, (MR_Integer) 2)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass_3, (MR_Integer) 0)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvClass_3, (MR_Integer) 1)));
    MR_Integer Var_6;
    MR_Box conv0_Var_6;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_9, TypeCtorInfo_10_10, ElementMap_5, Element_4, &conv0_Var_6);
    if (succeeded)
    {
      Var_6 = ((MR_Integer) conv0_Var_6);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__eqvclass__init_1_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word * EqvClass_2)
{
  {
    MR_Word PartitionMap_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word ElementMap_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word Var_5 = (MR_Word) ((MR_Box) ((MR_Integer) 0));

    *EqvClass_2 = (MR_Word) &mercury__eqvclass_scalar_common_1[1];
  }
}

MR_Word MR_CALL 
mercury__eqvclass__init_0_f_0(
  MR_Word TypeInfo_for_T_3)
{
  {
    MR_Word EqvClass_2 = (MR_Word) &mercury__eqvclass_scalar_common_1[1];
    MR_Word PartitionMap_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word ElementMap_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word Var_7 = (MR_Word) ((MR_Box) ((MR_Integer) 0));

    return EqvClass_2;
  }
}

static MR_bool MR_CALL 
mercury__eqvclass____Unify____eqvclass_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__eqvclass____Unify____eqvclass_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__eqvclass____Compare____eqvclass_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__eqvclass____Compare____eqvclass_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__eqvclass____Unify____partition_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__eqvclass____Unify____partition_id_0_0(((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__eqvclass____Compare____partition_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__eqvclass____Compare____partition_id_0_0(&conv0_HeadVar__1_1, ((MR_Integer) wrapper_arg_2), ((MR_Integer) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
