/*
** Automatically generated from `eqvclass.m'
** by the Mercury compiler,
** version rotd-2017-06-12
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


/* :- module eqvclass. */
/* :- implementation. */

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

static MR_bool MR_CALL 
mercury__eqvclass____Unify____eqvclass_1_0_10001(
  MR_Box mercury__eqvclass__wrapper_arg_1,
  MR_Box mercury__eqvclass__wrapper_arg_2,
  MR_Box mercury__eqvclass__wrapper_arg_3);

static void MR_CALL 
mercury__eqvclass____Compare____eqvclass_1_0_10001(
  MR_Box mercury__eqvclass__wrapper_arg_1,
  MR_Box * mercury__eqvclass__wrapper_arg_2,
  MR_Box mercury__eqvclass__wrapper_arg_3,
  MR_Box mercury__eqvclass__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__eqvclass____Unify____partition_id_0_0_10001(
  MR_Box mercury__eqvclass__wrapper_arg_1,
  MR_Box mercury__eqvclass__wrapper_arg_2);

static void MR_CALL 
mercury__eqvclass____Compare____partition_id_0_0_10001(
  MR_Box * mercury__eqvclass__wrapper_arg_1,
  MR_Box mercury__eqvclass__wrapper_arg_2,
  MR_Box mercury__eqvclass__wrapper_arg_3);

static void MR_CALL 
mercury__eqvclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__list_0(
  MR_Word mercury__eqvclass__Var_51,
  MR_Word mercury__eqvclass__Var_52,
  MR_Word mercury__eqvclass__Var_53,
  MR_Integer mercury__eqvclass__Var_54,
  MR_Word mercury__eqvclass__HeadVar__2_2,
  MR_Word mercury__eqvclass__HeadVar__3_3,
  MR_Word * mercury__eqvclass__HeadVar__4_4,
  MR_Word mercury__eqvclass__HeadVar__5_5,
  MR_Word * mercury__eqvclass__HeadVar__6_6,
  MR_Word mercury__eqvclass__HeadVar__7_7,
  MR_Word * mercury__eqvclass__HeadVar__8_8,
  MR_Word mercury__eqvclass__HeadVar__9_9,
  MR_Word * mercury__eqvclass__HeadVar__10_10);

static MR_Integer MR_CALL 
mercury__eqvclass__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__eqvclass__make_partition_4_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_17,
  MR_Word mercury__eqvclass__HeadVar__1_1,
  MR_Integer mercury__eqvclass__HeadVar__2_2,
  MR_Word mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3,
  MR_Word * mercury__eqvclass__STATE_VARIABLE_ElementMap_4);

static MR_bool MR_CALL 
mercury__eqvclass__same_eqvclass_list_2_3_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_10,
  MR_Word mercury__eqvclass__ElementMap_1,
  MR_Word mercury__eqvclass__HeadVar__2_2,
  MR_Integer mercury__eqvclass__Id_3);

static void MR_CALL 
mercury__eqvclass__change_partition_4_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_17,
  MR_Word mercury__eqvclass__HeadVar__1_1,
  MR_Integer mercury__eqvclass__HeadVar__2_2,
  MR_Word mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3,
  MR_Word * mercury__eqvclass__STATE_VARIABLE_ElementMap_4);

static void MR_CALL 
mercury__eqvclass__add_equivalence_4_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_24,
  MR_Integer mercury__eqvclass__IdA_5,
  MR_Integer mercury__eqvclass__IdB_6,
  MR_Word mercury__eqvclass__EqvClass0_7,
  MR_Word * mercury__eqvclass__EqvClass_8);

static void MR_CALL 
mercury__eqvclass__divide_equivalence_classes_2_f_0_1(
  MR_Box mercury__eqvclass__closure_arg,
  MR_Box mercury__eqvclass__wrapper_arg_1,
  MR_Box mercury__eqvclass__wrapper_arg_2,
  MR_Box mercury__eqvclass__wrapper_arg_3,
  MR_Box * mercury__eqvclass__wrapper_arg_4,
  MR_Box mercury__eqvclass__wrapper_arg_5,
  MR_Box * mercury__eqvclass__wrapper_arg_6,
  MR_Box mercury__eqvclass__wrapper_arg_7,
  MR_Box * mercury__eqvclass__wrapper_arg_8);


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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__eqvclass__eqvclass__field_types_eqvclass_1_0,
  mercury__eqvclass__eqvclass__field_names_eqvclass_1_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__eqvclass__eqvclass__du_stag_ordered_eqvclass_1_0[1] = {
  &mercury__eqvclass__eqvclass__du_functor_desc_eqvclass_1_0
};

static const MR_DuPtagLayout mercury__eqvclass__eqvclass__du_ptag_ordered_eqvclass_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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

static MR_bool MR_CALL 
mercury__eqvclass____Unify____eqvclass_1_0_10001(
  MR_Box mercury__eqvclass__wrapper_arg_1,
  MR_Box mercury__eqvclass__wrapper_arg_2,
  MR_Box mercury__eqvclass__wrapper_arg_3)
{
  {
    MR_bool mercury__eqvclass__succeeded;

    {
      mercury__eqvclass__succeeded = mercury__eqvclass____Unify____eqvclass_1_0(((MR_Word) mercury__eqvclass__wrapper_arg_1), ((MR_Word) mercury__eqvclass__wrapper_arg_2), ((MR_Word) mercury__eqvclass__wrapper_arg_3));
    }
    return mercury__eqvclass__succeeded;
  }
}

static void MR_CALL 
mercury__eqvclass____Compare____eqvclass_1_0_10001(
  MR_Box mercury__eqvclass__wrapper_arg_1,
  MR_Box * mercury__eqvclass__wrapper_arg_2,
  MR_Box mercury__eqvclass__wrapper_arg_3,
  MR_Box mercury__eqvclass__wrapper_arg_4)
{
  {
    MR_Word mercury__eqvclass__conv0_HeadVar__1_1;

    {
      mercury__eqvclass____Compare____eqvclass_1_0(((MR_Word) mercury__eqvclass__wrapper_arg_1), &mercury__eqvclass__conv0_HeadVar__1_1, ((MR_Word) mercury__eqvclass__wrapper_arg_3), ((MR_Word) mercury__eqvclass__wrapper_arg_4));
    }
    *mercury__eqvclass__wrapper_arg_2 = ((MR_Box) (mercury__eqvclass__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__eqvclass____Unify____partition_id_0_0_10001(
  MR_Box mercury__eqvclass__wrapper_arg_1,
  MR_Box mercury__eqvclass__wrapper_arg_2)
{
  {
    MR_bool mercury__eqvclass__succeeded;

    {
      mercury__eqvclass__succeeded = mercury__eqvclass____Unify____partition_id_0_0(((MR_Integer) mercury__eqvclass__wrapper_arg_1), ((MR_Integer) mercury__eqvclass__wrapper_arg_2));
    }
    return mercury__eqvclass__succeeded;
  }
}

static void MR_CALL 
mercury__eqvclass____Compare____partition_id_0_0_10001(
  MR_Box * mercury__eqvclass__wrapper_arg_1,
  MR_Box mercury__eqvclass__wrapper_arg_2,
  MR_Box mercury__eqvclass__wrapper_arg_3)
{
  {
    MR_Word mercury__eqvclass__conv0_HeadVar__1_1;

    {
      mercury__eqvclass____Compare____partition_id_0_0(&mercury__eqvclass__conv0_HeadVar__1_1, ((MR_Integer) mercury__eqvclass__wrapper_arg_2), ((MR_Integer) mercury__eqvclass__wrapper_arg_3));
    }
    *mercury__eqvclass__wrapper_arg_1 = ((MR_Box) (mercury__eqvclass__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
mercury__eqvclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__list_0(
  MR_Word mercury__eqvclass__Var_51,
  MR_Word mercury__eqvclass__Var_52,
  MR_Word mercury__eqvclass__Var_53,
  MR_Integer mercury__eqvclass__Var_54,
  MR_Word mercury__eqvclass__HeadVar__2_2,
  MR_Word mercury__eqvclass__HeadVar__3_3,
  MR_Word * mercury__eqvclass__HeadVar__4_4,
  MR_Word mercury__eqvclass__HeadVar__5_5,
  MR_Word * mercury__eqvclass__HeadVar__6_6,
  MR_Word mercury__eqvclass__HeadVar__7_7,
  MR_Word * mercury__eqvclass__HeadVar__8_8,
  MR_Word mercury__eqvclass__HeadVar__9_9,
  MR_Word * mercury__eqvclass__HeadVar__10_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__eqvclass__succeeded;

        if ((mercury__eqvclass__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__eqvclass__HeadVar__10_10 = mercury__eqvclass__HeadVar__9_9;
            *mercury__eqvclass__HeadVar__8_8 = mercury__eqvclass__HeadVar__7_7;
            *mercury__eqvclass__HeadVar__6_6 = mercury__eqvclass__HeadVar__5_5;
            *mercury__eqvclass__HeadVar__4_4 = mercury__eqvclass__HeadVar__3_3;
          }
        else
          {
            MR_Box mercury__eqvclass__V_25_21 = (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 0));
            MR_Word mercury__eqvclass__V_26_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__eqvclass__V_39_31;
            MR_Word mercury__eqvclass__V_40_32;
            MR_Word mercury__eqvclass__V_41_33;
            MR_Word mercury__eqvclass__V_42_34;

            {
              mercury__eqvclass__divide_equivalence_classes_3_11_p_0(mercury__eqvclass__Var_51, mercury__eqvclass__Var_52, mercury__eqvclass__Var_53, mercury__eqvclass__Var_54, mercury__eqvclass__V_25_21, mercury__eqvclass__HeadVar__3_3, &mercury__eqvclass__V_39_31, mercury__eqvclass__HeadVar__5_5, &mercury__eqvclass__V_40_32, mercury__eqvclass__HeadVar__7_7, &mercury__eqvclass__V_41_33, mercury__eqvclass__HeadVar__9_9, &mercury__eqvclass__V_42_34);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__eqvclass__next_value_of_HeadVar__2_2 = mercury__eqvclass__V_26_22;
              MR_Word mercury__eqvclass__next_value_of_HeadVar__3_3 = mercury__eqvclass__V_39_31;
              MR_Word mercury__eqvclass__next_value_of_HeadVar__5_5 = mercury__eqvclass__V_40_32;
              MR_Word mercury__eqvclass__next_value_of_HeadVar__7_7 = mercury__eqvclass__V_41_33;
              MR_Word mercury__eqvclass__next_value_of_HeadVar__9_9 = mercury__eqvclass__V_42_34;

              mercury__eqvclass__HeadVar__9_9 = mercury__eqvclass__next_value_of_HeadVar__9_9;
              mercury__eqvclass__HeadVar__7_7 = mercury__eqvclass__next_value_of_HeadVar__7_7;
              mercury__eqvclass__HeadVar__5_5 = mercury__eqvclass__next_value_of_HeadVar__5_5;
              mercury__eqvclass__HeadVar__3_3 = mercury__eqvclass__next_value_of_HeadVar__3_3;
              mercury__eqvclass__HeadVar__2_2 = mercury__eqvclass__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Integer MR_CALL 
mercury__eqvclass__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__eqvclass__succeeded;

    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__eqvclass____Compare____partition_id_0_0(
  MR_Word * mercury__eqvclass__HeadVar__1_1,
  MR_Integer mercury__eqvclass__HeadVar__2_2,
  MR_Integer mercury__eqvclass__HeadVar__3_3)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Integer mercury__eqvclass__Cast_HeadVar1_4 = mercury__eqvclass__HeadVar__2_2;
    MR_Integer mercury__eqvclass__Cast_HeadVar2_5 = mercury__eqvclass__HeadVar__3_3;

    mercury__eqvclass__succeeded = (mercury__eqvclass__Cast_HeadVar1_4 < mercury__eqvclass__Cast_HeadVar2_5);
    if (mercury__eqvclass__succeeded)
      *mercury__eqvclass__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__eqvclass__succeeded = (mercury__eqvclass__Cast_HeadVar1_4 == mercury__eqvclass__Cast_HeadVar2_5);
        if (mercury__eqvclass__succeeded)
          *mercury__eqvclass__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__eqvclass__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__eqvclass____Unify____partition_id_0_0(
  MR_Integer mercury__eqvclass__HeadVar__1_1,
  MR_Integer mercury__eqvclass__HeadVar__2_2)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Integer mercury__eqvclass__Cast_HeadVar1_3 = mercury__eqvclass__HeadVar__1_1;
    MR_Integer mercury__eqvclass__Cast_HeadVar2_4 = mercury__eqvclass__HeadVar__2_2;

    mercury__eqvclass__succeeded = (mercury__eqvclass__Cast_HeadVar1_3 == mercury__eqvclass__Cast_HeadVar2_4);
    return mercury__eqvclass__succeeded;
  }
}

void MR_CALL 
mercury__eqvclass____Compare____eqvclass_1_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_14,
  MR_Word * mercury__eqvclass__HeadVar__1_1,
  MR_Word mercury__eqvclass__HeadVar__2_2,
  MR_Word mercury__eqvclass__HeadVar__3_3)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Integer mercury__eqvclass__CastX_12 = (MR_Integer) mercury__eqvclass__HeadVar__2_2;
    MR_Integer mercury__eqvclass__CastY_13 = (MR_Integer) mercury__eqvclass__HeadVar__3_3;

    mercury__eqvclass__succeeded = (mercury__eqvclass__CastX_12 == mercury__eqvclass__CastY_13);
    if (mercury__eqvclass__succeeded)
      *mercury__eqvclass__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mercury__eqvclass__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__eqvclass__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__eqvclass__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mercury__eqvclass__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mercury__eqvclass__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__eqvclass__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mercury__eqvclass__Var_10;
        MR_Integer mercury__eqvclass__Var_24 = (MR_Integer) mercury__eqvclass__Var_4;
        MR_Integer mercury__eqvclass__Var_25 = (MR_Integer) mercury__eqvclass__Var_7;

        mercury__eqvclass__succeeded = (mercury__eqvclass__Var_24 < mercury__eqvclass__Var_25);
        if (mercury__eqvclass__succeeded)
          mercury__eqvclass__Var_10 = (MR_Integer) 1;
        else
          {
            mercury__eqvclass__succeeded = (mercury__eqvclass__Var_24 == mercury__eqvclass__Var_25);
            if (mercury__eqvclass__succeeded)
              mercury__eqvclass__Var_10 = (MR_Integer) 0;
            else
              mercury__eqvclass__Var_10 = (MR_Integer) 2;
          }
        mercury__eqvclass__succeeded = (mercury__eqvclass__Var_10 == (MR_Integer) 0);
        mercury__eqvclass__succeeded = !(mercury__eqvclass__succeeded);
        if (mercury__eqvclass__succeeded)
          *mercury__eqvclass__HeadVar__1_1 = mercury__eqvclass__Var_10;
        else
          {
            MR_Word mercury__eqvclass__Var_11;
            MR_Word mercury__eqvclass__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            MR_Word mercury__eqvclass__TypeCtorInfo_17_17 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
            MR_Word mercury__eqvclass__TypeInfo_18_18;

            {
              mercury__eqvclass__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_18_18, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_17_17));
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_18_18, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_14));
            }
            {
              mercury__tree234____Compare____tree234_2_0(mercury__eqvclass__TypeCtorInfo_16_16, mercury__eqvclass__TypeInfo_18_18, &mercury__eqvclass__Var_11, mercury__eqvclass__Var_5, mercury__eqvclass__Var_8);
            }
            mercury__eqvclass__succeeded = (mercury__eqvclass__Var_11 == (MR_Integer) 0);
            mercury__eqvclass__succeeded = !(mercury__eqvclass__succeeded);
            if (mercury__eqvclass__succeeded)
              *mercury__eqvclass__HeadVar__1_1 = mercury__eqvclass__Var_11;
            else
              {
                MR_Word mercury__eqvclass__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

                {
                  mercury__tree234____Compare____tree234_2_0(mercury__eqvclass__TypeInfo_for_T_14, mercury__eqvclass__TypeCtorInfo_21_21, mercury__eqvclass__HeadVar__1_1, mercury__eqvclass__Var_6, mercury__eqvclass__Var_9);
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__eqvclass____Unify____eqvclass_1_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_11,
  MR_Word mercury__eqvclass__HeadVar__1_1,
  MR_Word mercury__eqvclass__HeadVar__2_2)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Integer mercury__eqvclass__CastX_9 = (MR_Integer) mercury__eqvclass__HeadVar__1_1;
    MR_Integer mercury__eqvclass__CastY_10 = (MR_Integer) mercury__eqvclass__HeadVar__2_2;

    mercury__eqvclass__succeeded = (mercury__eqvclass__CastX_9 == mercury__eqvclass__CastY_10);
    if (mercury__eqvclass__succeeded)
      mercury__eqvclass__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__eqvclass__TypeCtorInfo_13_13;
        MR_Word mercury__eqvclass__TypeCtorInfo_14_14;
        MR_Word mercury__eqvclass__TypeInfo_15_15;
        MR_Word mercury__eqvclass__TypeCtorInfo_18_18;
        MR_Word mercury__eqvclass__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__eqvclass__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__eqvclass__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mercury__eqvclass__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__eqvclass__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__eqvclass__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer mercury__eqvclass__Var_21 = (MR_Integer) mercury__eqvclass__Var_3;
        MR_Integer mercury__eqvclass__Var_22 = (MR_Integer) mercury__eqvclass__Var_6;

        mercury__eqvclass__succeeded = (mercury__eqvclass__Var_21 == mercury__eqvclass__Var_22);
        if (mercury__eqvclass__succeeded)
          {
            mercury__eqvclass__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            mercury__eqvclass__TypeCtorInfo_14_14 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
            {
              mercury__eqvclass__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_15_15, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_14_14));
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_15_15, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_11));
            }
            {
              mercury__eqvclass__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__eqvclass__TypeCtorInfo_13_13, mercury__eqvclass__TypeInfo_15_15, mercury__eqvclass__Var_4, mercury__eqvclass__Var_7);
            }
            if (mercury__eqvclass__succeeded)
              {
                mercury__eqvclass__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                {
                  mercury__eqvclass__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__eqvclass__TypeInfo_for_T_11, mercury__eqvclass__TypeCtorInfo_18_18, mercury__eqvclass__Var_5, mercury__eqvclass__Var_8);
                }
              }
          }
      }
    return mercury__eqvclass__succeeded;
  }
}

void MR_CALL 
mercury__eqvclass__divide_equivalence_classes_3_11_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_45,
  MR_Word mercury__eqvclass__TypeInfo_for_U_46,
  MR_Word mercury__eqvclass__F_12,
  MR_Integer mercury__eqvclass__MainId_13,
  MR_Box mercury__eqvclass__Item_14,
  MR_Word mercury__eqvclass__STATE_VARIABLE_Map_0_26,
  MR_Word * mercury__eqvclass__STATE_VARIABLE_Map_27,
  MR_Word mercury__eqvclass__STATE_VARIABLE_Counter_0_28,
  MR_Word * mercury__eqvclass__STATE_VARIABLE_Counter_29,
  MR_Word mercury__eqvclass__STATE_VARIABLE_Partitions_0_30,
  MR_Word * mercury__eqvclass__STATE_VARIABLE_Partitions_31,
  MR_Word mercury__eqvclass__STATE_VARIABLE_Keys_0_32,
  MR_Word * mercury__eqvclass__STATE_VARIABLE_Keys_33)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Box mercury__eqvclass__Value_19;
    MR_Box MR_CALL (* mercury__eqvclass__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__eqvclass__F_12, (MR_Integer) 1)));
    MR_Integer mercury__eqvclass__Id_20;
    MR_Word mercury__eqvclass__TypeCtorInfo_47_47;
    MR_Box mercury__eqvclass__conv1_Id_20;

    {
      mercury__eqvclass__Value_19 = mercury__eqvclass__func_0(((MR_Box) mercury__eqvclass__F_12), mercury__eqvclass__Item_14);
    }
    mercury__eqvclass__TypeCtorInfo_47_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_U_46, mercury__eqvclass__TypeCtorInfo_47_47, mercury__eqvclass__STATE_VARIABLE_Map_0_26, mercury__eqvclass__Value_19, &mercury__eqvclass__conv1_Id_20);
    }
    if (mercury__eqvclass__succeeded)
      {
        mercury__eqvclass__Id_20 = ((MR_Integer) mercury__eqvclass__conv1_Id_20);
        mercury__eqvclass__succeeded = MR_TRUE;
      }
    if (mercury__eqvclass__succeeded)
      {
        mercury__eqvclass__succeeded = (mercury__eqvclass__Id_20 == mercury__eqvclass__MainId_13);
        if (mercury__eqvclass__succeeded)
          {
            *mercury__eqvclass__STATE_VARIABLE_Keys_33 = mercury__eqvclass__STATE_VARIABLE_Keys_0_32;
            *mercury__eqvclass__STATE_VARIABLE_Partitions_31 = mercury__eqvclass__STATE_VARIABLE_Partitions_0_30;
          }
        else
          {
            MR_Word mercury__eqvclass__TypeCtorInfo_48_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            MR_Word mercury__eqvclass__TypeCtorInfo_49_49 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
            MR_Word mercury__eqvclass__TypeInfo_50_50;
            MR_Word mercury__eqvclass__MainSet0_21;
            MR_Word mercury__eqvclass__MainSet_22;
            MR_Word mercury__eqvclass__Set0_23;
            MR_Word mercury__eqvclass__Set_24;
            MR_Word mercury__eqvclass__STATE_VARIABLE_Partitions_34_34;
            MR_Word mercury__eqvclass__V_11_66;
            MR_Word mercury__eqvclass__V_4_67;
            MR_Word mercury__eqvclass__V_5_68;
            MR_Word mercury__eqvclass__V_6_69;
            MR_Word mercury__eqvclass__V_5_74;
            MR_Word mercury__eqvclass__V_6_75;
            MR_Box mercury__eqvclass__conv2_MainSet0_21;
            MR_Word mercury__eqvclass__conv3_STATE_VARIABLE_Partitions_34_34;
            MR_Box mercury__eqvclass__conv4_Set0_23;
            MR_Word mercury__eqvclass__conv5_STATE_VARIABLE_Partitions_31;

            {
              mercury__eqvclass__TypeInfo_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_50_50, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_49_49));
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_50_50, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_45));
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_50_50, (MR_Word) mercury__eqvclass__STATE_VARIABLE_Partitions_0_30, mercury__eqvclass__MainId_13, &mercury__eqvclass__conv2_MainSet0_21);
            }
            mercury__eqvclass__MainSet0_21 = ((MR_Word) mercury__eqvclass__conv2_MainSet0_21);
            mercury__eqvclass__V_11_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__eqvclass__V_5_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__eqvclass__V_5_68, 0) = mercury__eqvclass__Item_14;
              MR_hl_field(MR_mktag(1), mercury__eqvclass__V_5_68, 1) = ((MR_Box) (mercury__eqvclass__V_11_66));
            }
            mercury__eqvclass__V_4_67 = (MR_Word) mercury__eqvclass__MainSet0_21;
            {
              mercury__set_ordlist__difference_loop_3_p_0(mercury__eqvclass__TypeInfo_for_T_45, mercury__eqvclass__V_4_67, mercury__eqvclass__V_5_68, &mercury__eqvclass__V_6_69);
            }
            mercury__eqvclass__MainSet_22 = (MR_Word) mercury__eqvclass__V_6_69;
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_50_50, mercury__eqvclass__MainId_13, ((MR_Box) (mercury__eqvclass__MainSet_22)), (MR_Word) mercury__eqvclass__STATE_VARIABLE_Partitions_0_30, &mercury__eqvclass__conv3_STATE_VARIABLE_Partitions_34_34);
            }
            mercury__eqvclass__STATE_VARIABLE_Partitions_34_34 = (MR_Word) mercury__eqvclass__conv3_STATE_VARIABLE_Partitions_34_34;
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_50_50, (MR_Word) mercury__eqvclass__STATE_VARIABLE_Partitions_34_34, mercury__eqvclass__Id_20, &mercury__eqvclass__conv4_Set0_23);
            }
            mercury__eqvclass__Set0_23 = ((MR_Word) mercury__eqvclass__conv4_Set0_23);
            mercury__eqvclass__V_5_74 = (MR_Word) mercury__eqvclass__Set0_23;
            {
              mercury__set_ordlist__insert_loop_3_p_0(mercury__eqvclass__TypeInfo_for_T_45, mercury__eqvclass__V_5_74, mercury__eqvclass__Item_14, &mercury__eqvclass__V_6_75);
            }
            mercury__eqvclass__Set_24 = (MR_Word) mercury__eqvclass__V_6_75;
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_50_50, mercury__eqvclass__Id_20, ((MR_Box) (mercury__eqvclass__Set_24)), (MR_Word) mercury__eqvclass__STATE_VARIABLE_Partitions_34_34, &mercury__eqvclass__conv5_STATE_VARIABLE_Partitions_31);
            }
            *mercury__eqvclass__STATE_VARIABLE_Partitions_31 = (MR_Word) mercury__eqvclass__conv5_STATE_VARIABLE_Partitions_31;
            {
              mercury__map__det_update_4_p_0(mercury__eqvclass__TypeInfo_for_T_45, mercury__eqvclass__TypeCtorInfo_48_48, mercury__eqvclass__Item_14, ((MR_Box) (mercury__eqvclass__Id_20)), mercury__eqvclass__STATE_VARIABLE_Keys_0_32, mercury__eqvclass__STATE_VARIABLE_Keys_33);
            }
          }
        *mercury__eqvclass__STATE_VARIABLE_Counter_29 = mercury__eqvclass__STATE_VARIABLE_Counter_0_28;
        *mercury__eqvclass__STATE_VARIABLE_Map_27 = mercury__eqvclass__STATE_VARIABLE_Map_0_26;
      }
    else
      {
        MR_Word mercury__eqvclass__TypeCtorInfo_51_51;
        MR_Word mercury__eqvclass__TypeCtorInfo_52_52;
        MR_Word mercury__eqvclass__TypeInfo_53_53;
        MR_Integer mercury__eqvclass__NewId_25 = (MR_Integer) mercury__eqvclass__STATE_VARIABLE_Counter_0_28;
        MR_Word mercury__eqvclass__STATE_VARIABLE_Partitions_39_39;
        MR_Word mercury__eqvclass__MainSet0_42;
        MR_Word mercury__eqvclass__MainSet_43;
        MR_Word mercury__eqvclass__Set_44;
        MR_Integer mercury__eqvclass__V_5_77 = (mercury__eqvclass__NewId_25 + (MR_Integer) 1);
        MR_Word mercury__eqvclass__V_11_88;
        MR_Word mercury__eqvclass__V_4_89;
        MR_Word mercury__eqvclass__V_5_90;
        MR_Word mercury__eqvclass__V_6_91;
        MR_Box mercury__eqvclass__conv6_MainSet0_42;
        MR_Word mercury__eqvclass__conv7_STATE_VARIABLE_Partitions_39_39;
        MR_Word mercury__eqvclass__conv8_STATE_VARIABLE_Partitions_31;

        *mercury__eqvclass__STATE_VARIABLE_Counter_29 = (MR_Word) mercury__eqvclass__V_5_77;
        mercury__eqvclass__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        {
          mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_U_46, mercury__eqvclass__TypeCtorInfo_51_51, mercury__eqvclass__Value_19, ((MR_Box) (mercury__eqvclass__NewId_25)), mercury__eqvclass__STATE_VARIABLE_Map_0_26, mercury__eqvclass__STATE_VARIABLE_Map_27);
        }
        mercury__eqvclass__TypeCtorInfo_52_52 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
        {
          mercury__eqvclass__TypeInfo_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_53_53, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_52_52));
          MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_53_53, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_45));
        }
        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_53_53, (MR_Word) mercury__eqvclass__STATE_VARIABLE_Partitions_0_30, mercury__eqvclass__MainId_13, &mercury__eqvclass__conv6_MainSet0_42);
        }
        mercury__eqvclass__MainSet0_42 = ((MR_Word) mercury__eqvclass__conv6_MainSet0_42);
        mercury__eqvclass__V_11_88 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__eqvclass__V_5_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__eqvclass__V_5_90, 0) = mercury__eqvclass__Item_14;
          MR_hl_field(MR_mktag(1), mercury__eqvclass__V_5_90, 1) = ((MR_Box) (mercury__eqvclass__V_11_88));
        }
        mercury__eqvclass__V_4_89 = (MR_Word) mercury__eqvclass__MainSet0_42;
        {
          mercury__set_ordlist__difference_loop_3_p_0(mercury__eqvclass__TypeInfo_for_T_45, mercury__eqvclass__V_4_89, mercury__eqvclass__V_5_90, &mercury__eqvclass__V_6_91);
        }
        mercury__eqvclass__MainSet_43 = (MR_Word) mercury__eqvclass__V_6_91;
        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_53_53, mercury__eqvclass__MainId_13, ((MR_Box) (mercury__eqvclass__MainSet_43)), (MR_Word) mercury__eqvclass__STATE_VARIABLE_Partitions_0_30, &mercury__eqvclass__conv7_STATE_VARIABLE_Partitions_39_39);
        }
        mercury__eqvclass__STATE_VARIABLE_Partitions_39_39 = (MR_Word) mercury__eqvclass__conv7_STATE_VARIABLE_Partitions_39_39;
        {
          mercury__eqvclass__Set_44 = mercury__set__make_singleton_set_1_f_0(mercury__eqvclass__TypeInfo_for_T_45, mercury__eqvclass__Item_14);
        }
        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_53_53, mercury__eqvclass__NewId_25, ((MR_Box) (mercury__eqvclass__Set_44)), (MR_Word) mercury__eqvclass__STATE_VARIABLE_Partitions_39_39, &mercury__eqvclass__conv8_STATE_VARIABLE_Partitions_31);
        }
        *mercury__eqvclass__STATE_VARIABLE_Partitions_31 = (MR_Word) mercury__eqvclass__conv8_STATE_VARIABLE_Partitions_31;
        {
          mercury__map__det_update_4_p_0(mercury__eqvclass__TypeInfo_for_T_45, mercury__eqvclass__TypeCtorInfo_51_51, mercury__eqvclass__Item_14, ((MR_Box) (mercury__eqvclass__NewId_25)), mercury__eqvclass__STATE_VARIABLE_Keys_0_32, mercury__eqvclass__STATE_VARIABLE_Keys_33);
        }
      }
  }
}

void MR_CALL 
mercury__eqvclass__divide_equivalence_classes_2_9_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_35,
  MR_Word mercury__eqvclass__TypeInfo_for_U_36,
  MR_Word mercury__eqvclass__F_10,
  MR_Integer mercury__eqvclass__Id_11,
  MR_Word mercury__eqvclass__ItemSet_12,
  MR_Word mercury__eqvclass__STATE_VARIABLE_Counter_0_23,
  MR_Word * mercury__eqvclass__STATE_VARIABLE_Counter_24,
  MR_Word mercury__eqvclass__STATE_VARIABLE_Partitions_0_25,
  MR_Word * mercury__eqvclass__STATE_VARIABLE_Partitions_26,
  MR_Word mercury__eqvclass__STATE_VARIABLE_Keys_0_27,
  MR_Word * mercury__eqvclass__STATE_VARIABLE_Keys_28)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__ItemList_16 = (MR_Word) mercury__eqvclass__ItemSet_12;

    if ((mercury__eqvclass__ItemList_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140eqvclass.divide_equivalence_classes_2\'/9", (MR_String) "empty partition");
          return;
        }
      }
    else
      {
        MR_Word mercury__eqvclass__TypeCtorInfo_37_37;
        MR_Box mercury__eqvclass__Item_17 = (MR_hl_field(MR_mktag(1), mercury__eqvclass__ItemList_16, (MR_Integer) 0));
        MR_Word mercury__eqvclass__Items_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__ItemList_16, (MR_Integer) 1)));
        MR_Box mercury__eqvclass__MainValue_19;
        MR_Word mercury__eqvclass__Map0_20;
        MR_Word mercury__eqvclass__Map1_21;
        MR_Box MR_CALL (* mercury__eqvclass__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__eqvclass__F_10, (MR_Integer) 1)));
        MR_Word mercury__eqvclass___Map_22;

        {
          mercury__eqvclass__MainValue_19 = mercury__eqvclass__func_0(((MR_Box) mercury__eqvclass__F_10), mercury__eqvclass__Item_17);
        }
        mercury__eqvclass__TypeCtorInfo_37_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        mercury__eqvclass__Map0_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_U_36, mercury__eqvclass__TypeCtorInfo_37_37, mercury__eqvclass__MainValue_19, ((MR_Box) (mercury__eqvclass__Id_11)), mercury__eqvclass__Map0_20, &mercury__eqvclass__Map1_21);
        }
        {
          mercury__eqvclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__list_0(mercury__eqvclass__TypeInfo_for_T_35, mercury__eqvclass__TypeInfo_for_U_36, mercury__eqvclass__F_10, mercury__eqvclass__Id_11, mercury__eqvclass__Items_18, mercury__eqvclass__Map1_21, &mercury__eqvclass___Map_22, mercury__eqvclass__STATE_VARIABLE_Counter_0_23, mercury__eqvclass__STATE_VARIABLE_Counter_24, mercury__eqvclass__STATE_VARIABLE_Partitions_0_25, mercury__eqvclass__STATE_VARIABLE_Partitions_26, mercury__eqvclass__STATE_VARIABLE_Keys_0_27, mercury__eqvclass__STATE_VARIABLE_Keys_28);
        }
      }
  }
}

static void MR_CALL 
mercury__eqvclass__make_partition_4_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_17,
  MR_Word mercury__eqvclass__HeadVar__1_1,
  MR_Integer mercury__eqvclass__HeadVar__2_2,
  MR_Word mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3,
  MR_Word * mercury__eqvclass__STATE_VARIABLE_ElementMap_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__eqvclass__succeeded;

        if ((mercury__eqvclass__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__eqvclass__STATE_VARIABLE_ElementMap_4 = mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3;
        else
          {
            MR_Word mercury__eqvclass__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            MR_Box mercury__eqvclass__Element_9 = (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 0));
            MR_Word mercury__eqvclass__Elements_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__eqvclass__STATE_VARIABLE_ElementMap_15_15;

            {
              mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_17, mercury__eqvclass__TypeCtorInfo_18_18, mercury__eqvclass__Element_9, ((MR_Box) (mercury__eqvclass__HeadVar__2_2)), mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3, &mercury__eqvclass__STATE_VARIABLE_ElementMap_15_15);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__eqvclass__next_value_of_HeadVar__1_1 = mercury__eqvclass__Elements_10;
              MR_Word mercury__eqvclass__next_value_of_STATE_VARIABLE_ElementMap_0_3 = mercury__eqvclass__STATE_VARIABLE_ElementMap_15_15;

              mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3 = mercury__eqvclass__next_value_of_STATE_VARIABLE_ElementMap_0_3;
              mercury__eqvclass__HeadVar__1_1 = mercury__eqvclass__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__eqvclass__partition_ids_2_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_8,
  MR_Word mercury__eqvclass__EqvClass0_3,
  MR_Word * mercury__eqvclass__Ids_4)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__eqvclass__TypeCtorInfo_10_10 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
    MR_Word mercury__eqvclass__TypeInfo_11_11;
    MR_Word mercury__eqvclass__PartitionMap0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_3, (MR_Integer) 1)));
    MR_Word mercury__eqvclass__V_5_16;
    MR_Word mercury__eqvclass__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_3, (MR_Integer) 0)));
    MR_Word mercury__eqvclass__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_3, (MR_Integer) 2)));

    {
      mercury__eqvclass__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_11_11, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_10_10));
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_11_11, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_8));
    }
    mercury__eqvclass__V_5_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__keys_acc_3_p_0(mercury__eqvclass__TypeCtorInfo_9_9, mercury__eqvclass__TypeInfo_11_11, mercury__eqvclass__PartitionMap0_5, mercury__eqvclass__V_5_16, mercury__eqvclass__Ids_4);
    }
  }
}

void MR_CALL 
mercury__eqvclass__partitions_3_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_10,
  MR_Word mercury__eqvclass__HeadVar__1_1,
  MR_Word mercury__eqvclass__HeadVar__2_2,
  MR_Word * mercury__eqvclass__HeadVar__3_3)
{
  {
    MR_bool mercury__eqvclass__succeeded;

    if ((mercury__eqvclass__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__eqvclass__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Integer mercury__eqvclass__Id_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__eqvclass__Ids_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__eqvclass__Partition_8;
        MR_Word mercury__eqvclass__Partitions_9;
        MR_Word mercury__eqvclass__PartitionMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__eqvclass__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__eqvclass__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mercury__eqvclass__PartitionPrime_15;
        MR_Word mercury__eqvclass__TypeCtorInfo_15_21 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
        MR_Word mercury__eqvclass__TypeInfo_16_22;
        MR_Box mercury__eqvclass__conv0_PartitionPrime_15;

        {
          mercury__eqvclass__TypeInfo_16_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_16_22, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_15_21));
          MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_16_22, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_10));
        }
        {
          mercury__eqvclass__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_16_22, (MR_Word) mercury__eqvclass__PartitionMap0_14, mercury__eqvclass__Id_6, &mercury__eqvclass__conv0_PartitionPrime_15);
        }
        if (mercury__eqvclass__succeeded)
          {
            mercury__eqvclass__PartitionPrime_15 = ((MR_Word) mercury__eqvclass__conv0_PartitionPrime_15);
            mercury__eqvclass__succeeded = MR_TRUE;
          }
        if (mercury__eqvclass__succeeded)
          mercury__eqvclass__Partition_8 = mercury__eqvclass__PartitionPrime_15;
        else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140eqvclass.id_to_partition\'/3", (MR_String) "partition id not known to equivalence class");
              return;
            }
          }
        {
          mercury__eqvclass__partitions_3_p_0(mercury__eqvclass__TypeInfo_for_T_10, mercury__eqvclass__HeadVar__1_1, mercury__eqvclass__Ids_7, &mercury__eqvclass__Partitions_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__eqvclass__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__eqvclass__Partition_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__eqvclass__Partitions_9));
        }
      }
  }
}

static MR_bool MR_CALL 
mercury__eqvclass__same_eqvclass_list_2_3_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_10,
  MR_Word mercury__eqvclass__ElementMap_1,
  MR_Word mercury__eqvclass__HeadVar__2_2,
  MR_Integer mercury__eqvclass__Id_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__eqvclass__succeeded;

        if ((mercury__eqvclass__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__eqvclass__succeeded = MR_TRUE;
        else
          {
            MR_Word mercury__eqvclass__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            MR_Box mercury__eqvclass__Element_7 = (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 0));
            MR_Word mercury__eqvclass__Elements_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__eqvclass__Var_12;
            MR_Box mercury__eqvclass__conv0_Var_12;

            {
              mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_10, mercury__eqvclass__TypeCtorInfo_11_11, mercury__eqvclass__ElementMap_1, mercury__eqvclass__Element_7, &mercury__eqvclass__conv0_Var_12);
            }
            if (mercury__eqvclass__succeeded)
              {
                mercury__eqvclass__Var_12 = ((MR_Integer) mercury__eqvclass__conv0_Var_12);
                mercury__eqvclass__succeeded = MR_TRUE;
              }
            if (mercury__eqvclass__succeeded)
              {
                mercury__eqvclass__succeeded = (mercury__eqvclass__Id_3 == mercury__eqvclass__Var_12);
                if (mercury__eqvclass__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word mercury__eqvclass__next_value_of_HeadVar__2_2 = mercury__eqvclass__Elements_8;

                      mercury__eqvclass__HeadVar__2_2 = mercury__eqvclass__next_value_of_HeadVar__2_2;
                    }
                    continue;
                  }
              }
          }
        return mercury__eqvclass__succeeded;
      }
      break;
    }
}

static void MR_CALL 
mercury__eqvclass__change_partition_4_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_17,
  MR_Word mercury__eqvclass__HeadVar__1_1,
  MR_Integer mercury__eqvclass__HeadVar__2_2,
  MR_Word mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3,
  MR_Word * mercury__eqvclass__STATE_VARIABLE_ElementMap_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__eqvclass__succeeded;

        if ((mercury__eqvclass__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__eqvclass__STATE_VARIABLE_ElementMap_4 = mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3;
        else
          {
            MR_Word mercury__eqvclass__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            MR_Box mercury__eqvclass__Element_9 = (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 0));
            MR_Word mercury__eqvclass__Elements_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__eqvclass__STATE_VARIABLE_ElementMap_15_15;

            {
              mercury__tree234__set_4_p_0(mercury__eqvclass__TypeInfo_for_T_17, mercury__eqvclass__TypeCtorInfo_18_18, mercury__eqvclass__Element_9, ((MR_Box) (mercury__eqvclass__HeadVar__2_2)), mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3, &mercury__eqvclass__STATE_VARIABLE_ElementMap_15_15);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__eqvclass__next_value_of_HeadVar__1_1 = mercury__eqvclass__Elements_10;
              MR_Word mercury__eqvclass__next_value_of_STATE_VARIABLE_ElementMap_0_3 = mercury__eqvclass__STATE_VARIABLE_ElementMap_15_15;

              mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3 = mercury__eqvclass__next_value_of_STATE_VARIABLE_ElementMap_0_3;
              mercury__eqvclass__HeadVar__1_1 = mercury__eqvclass__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__eqvclass__add_equivalence_4_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_24,
  MR_Integer mercury__eqvclass__IdA_5,
  MR_Integer mercury__eqvclass__IdB_6,
  MR_Word mercury__eqvclass__EqvClass0_7,
  MR_Word * mercury__eqvclass__EqvClass_8)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__TypeCtorInfo_25_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__eqvclass__TypeCtorInfo_26_26 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
    MR_Word mercury__eqvclass__TypeInfo_27_27;
    MR_Word mercury__eqvclass__NextId0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
    MR_Word mercury__eqvclass__PartitionMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
    MR_Word mercury__eqvclass__ElementMap0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
    MR_Word mercury__eqvclass__PartitionA_12;
    MR_Word mercury__eqvclass__PartitionB_13;
    MR_Word mercury__eqvclass__PartitionMap_16;
    MR_Word mercury__eqvclass__ElementMap_18;
    MR_Box mercury__eqvclass__conv0_PartitionA_12;
    MR_Box mercury__eqvclass__conv1_PartitionB_13;
    MR_Integer mercury__eqvclass__Var_20;
    MR_Integer mercury__eqvclass__Var_21;
    MR_Word mercury__eqvclass__V_3_33;
    MR_Word mercury__eqvclass__V_3_42;

    {
      mercury__eqvclass__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_27_27, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_26_26));
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_27_27, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_24));
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_27_27, (MR_Word) mercury__eqvclass__PartitionMap0_10, mercury__eqvclass__IdA_5, &mercury__eqvclass__conv0_PartitionA_12);
    }
    mercury__eqvclass__PartitionA_12 = ((MR_Word) mercury__eqvclass__conv0_PartitionA_12);
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_27_27, (MR_Word) mercury__eqvclass__PartitionMap0_10, mercury__eqvclass__IdB_6, &mercury__eqvclass__conv1_PartitionB_13);
    }
    mercury__eqvclass__PartitionB_13 = ((MR_Word) mercury__eqvclass__conv1_PartitionB_13);
    mercury__eqvclass__V_3_33 = (MR_Word) mercury__eqvclass__PartitionA_12;
    {
      mercury__list__length_acc_3_p_0(mercury__eqvclass__TypeInfo_for_T_24, mercury__eqvclass__V_3_33, (MR_Integer) 0, &mercury__eqvclass__Var_20);
    }
    mercury__eqvclass__V_3_42 = (MR_Word) mercury__eqvclass__PartitionB_13;
    {
      mercury__list__length_acc_3_p_0(mercury__eqvclass__TypeInfo_for_T_24, mercury__eqvclass__V_3_42, (MR_Integer) 0, &mercury__eqvclass__Var_21);
    }
    mercury__eqvclass__succeeded = (mercury__eqvclass__Var_20 < mercury__eqvclass__Var_21);
    if (mercury__eqvclass__succeeded)
      {
        MR_Word mercury__eqvclass__TypeInfo_for_K_63;
        MR_Word mercury__eqvclass__PartitionMap1_14;
        MR_Word mercury__eqvclass__Partition_15;
        MR_Word mercury__eqvclass__ElementsA_17;
        MR_Word mercury__eqvclass__V_4_56;
        MR_Word mercury__eqvclass__V_5_57;
        MR_Word mercury__eqvclass__V_6_58;
        MR_Word mercury__eqvclass__V_7_52;

        {
          mercury__tree234__delete_2_4_p_0(mercury__eqvclass__TypeCtorInfo_25_25, mercury__eqvclass__TypeInfo_27_27, mercury__eqvclass__PartitionMap0_10, ((MR_Box) (mercury__eqvclass__IdA_5)), &mercury__eqvclass__PartitionMap1_14, &mercury__eqvclass__V_7_52);
        }
        mercury__eqvclass__V_4_56 = (MR_Word) mercury__eqvclass__PartitionB_13;
        mercury__eqvclass__V_5_57 = (MR_Word) mercury__eqvclass__PartitionA_12;
        {
          mercury__list__merge_and_remove_dups_3_p_0(mercury__eqvclass__TypeInfo_for_T_24, mercury__eqvclass__V_4_56, mercury__eqvclass__V_5_57, &mercury__eqvclass__V_6_58);
        }
        mercury__eqvclass__Partition_15 = (MR_Word) mercury__eqvclass__V_6_58;
        mercury__eqvclass__TypeInfo_for_K_63 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        {
          mercury__tree234__set_4_p_0(mercury__eqvclass__TypeInfo_for_K_63, mercury__eqvclass__TypeInfo_27_27, ((MR_Box) (mercury__eqvclass__IdB_6)), ((MR_Box) (mercury__eqvclass__Partition_15)), mercury__eqvclass__PartitionMap1_14, &mercury__eqvclass__PartitionMap_16);
        }
        mercury__eqvclass__ElementsA_17 = (MR_Word) mercury__eqvclass__PartitionA_12;
        {
          mercury__eqvclass__change_partition_4_p_0(mercury__eqvclass__TypeInfo_for_T_24, mercury__eqvclass__ElementsA_17, mercury__eqvclass__IdB_6, mercury__eqvclass__ElementMap0_11, &mercury__eqvclass__ElementMap_18);
        }
      }
    else
      {
        MR_Word mercury__eqvclass__TypeInfo_for_K_84;
        MR_Word mercury__eqvclass__ElementsB_19;
        MR_Word mercury__eqvclass__PartitionMap1_22;
        MR_Word mercury__eqvclass__Partition_23;
        MR_Word mercury__eqvclass__V_4_77;
        MR_Word mercury__eqvclass__V_5_78;
        MR_Word mercury__eqvclass__V_6_79;
        MR_Word mercury__eqvclass__V_7_73;

        {
          mercury__tree234__delete_2_4_p_0(mercury__eqvclass__TypeCtorInfo_25_25, mercury__eqvclass__TypeInfo_27_27, mercury__eqvclass__PartitionMap0_10, ((MR_Box) (mercury__eqvclass__IdB_6)), &mercury__eqvclass__PartitionMap1_22, &mercury__eqvclass__V_7_73);
        }
        mercury__eqvclass__V_4_77 = (MR_Word) mercury__eqvclass__PartitionA_12;
        mercury__eqvclass__V_5_78 = (MR_Word) mercury__eqvclass__PartitionB_13;
        {
          mercury__list__merge_and_remove_dups_3_p_0(mercury__eqvclass__TypeInfo_for_T_24, mercury__eqvclass__V_4_77, mercury__eqvclass__V_5_78, &mercury__eqvclass__V_6_79);
        }
        mercury__eqvclass__Partition_23 = (MR_Word) mercury__eqvclass__V_6_79;
        mercury__eqvclass__TypeInfo_for_K_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        {
          mercury__tree234__set_4_p_0(mercury__eqvclass__TypeInfo_for_K_84, mercury__eqvclass__TypeInfo_27_27, ((MR_Box) (mercury__eqvclass__IdA_5)), ((MR_Box) (mercury__eqvclass__Partition_23)), mercury__eqvclass__PartitionMap1_22, &mercury__eqvclass__PartitionMap_16);
        }
        mercury__eqvclass__ElementsB_19 = (MR_Word) mercury__eqvclass__PartitionB_13;
        {
          mercury__eqvclass__change_partition_4_p_0(mercury__eqvclass__TypeInfo_for_T_24, mercury__eqvclass__ElementsB_19, mercury__eqvclass__IdA_5, mercury__eqvclass__ElementMap0_11, &mercury__eqvclass__ElementMap_18);
        }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mercury__eqvclass__EqvClass_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__NextId0_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_18));
    }
  }
}

void MR_CALL 
mercury__eqvclass__add_element_4_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_18,
  MR_Box mercury__eqvclass__Element_5,
  MR_Integer * mercury__eqvclass__Id_6,
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_15,
  MR_Word * mercury__eqvclass__STATE_VARIABLE_EqvClass_16)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__TypeCtorInfo_19_19;
    MR_Word mercury__eqvclass__TypeCtorInfo_20_20;
    MR_Word mercury__eqvclass__TypeInfo_21_21;
    MR_Word mercury__eqvclass__Counter0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_15, (MR_Integer) 0)));
    MR_Word mercury__eqvclass__PartitionMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_15, (MR_Integer) 1)));
    MR_Word mercury__eqvclass__ElementMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_15, (MR_Integer) 2)));
    MR_Word mercury__eqvclass__Counter_11;
    MR_Word mercury__eqvclass__ElementMap_12;
    MR_Word mercury__eqvclass__Partition_13;
    MR_Word mercury__eqvclass__PartitionMap_14;
    MR_Integer mercury__eqvclass__V_5_23;
    MR_Word mercury__eqvclass__V_4_30;
    MR_Word mercury__eqvclass__V_5_31;
    MR_Word mercury__eqvclass__conv0_PartitionMap_14;

    *mercury__eqvclass__Id_6 = (MR_Integer) mercury__eqvclass__Counter0_8;
    mercury__eqvclass__V_5_23 = (*mercury__eqvclass__Id_6 + (MR_Integer) 1);
    mercury__eqvclass__Counter_11 = (MR_Word) mercury__eqvclass__V_5_23;
    mercury__eqvclass__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_18, mercury__eqvclass__TypeCtorInfo_19_19, mercury__eqvclass__Element_5, ((MR_Box) (*mercury__eqvclass__Id_6)), mercury__eqvclass__ElementMap0_10, &mercury__eqvclass__ElementMap_12);
    }
    mercury__eqvclass__V_5_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__eqvclass__V_4_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__eqvclass__V_4_30, 0) = mercury__eqvclass__Element_5;
      MR_hl_field(MR_mktag(1), mercury__eqvclass__V_4_30, 1) = ((MR_Box) (mercury__eqvclass__V_5_31));
    }
    mercury__eqvclass__Partition_13 = (MR_Word) mercury__eqvclass__V_4_30;
    mercury__eqvclass__TypeCtorInfo_20_20 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
    {
      mercury__eqvclass__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_21_21, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_20_20));
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_21_21, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_18));
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_21_21, *mercury__eqvclass__Id_6, ((MR_Box) (mercury__eqvclass__Partition_13)), (MR_Word) mercury__eqvclass__PartitionMap0_9, &mercury__eqvclass__conv0_PartitionMap_14);
    }
    mercury__eqvclass__PartitionMap_14 = (MR_Word) mercury__eqvclass__conv0_PartitionMap_14;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mercury__eqvclass__STATE_VARIABLE_EqvClass_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__Counter_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_12));
    }
  }
}

static void MR_CALL 
mercury__eqvclass__divide_equivalence_classes_2_f_0_1(
  MR_Box mercury__eqvclass__closure_arg,
  MR_Box mercury__eqvclass__wrapper_arg_1,
  MR_Box mercury__eqvclass__wrapper_arg_2,
  MR_Box mercury__eqvclass__wrapper_arg_3,
  MR_Box * mercury__eqvclass__wrapper_arg_4,
  MR_Box mercury__eqvclass__wrapper_arg_5,
  MR_Box * mercury__eqvclass__wrapper_arg_6,
  MR_Box mercury__eqvclass__wrapper_arg_7,
  MR_Box * mercury__eqvclass__wrapper_arg_8)
{
  {
    MR_Box mercury__eqvclass__closure = mercury__eqvclass__closure_arg;
    MR_Word mercury__eqvclass__conv2_STATE_VARIABLE_Counter_24;
    MR_Word mercury__eqvclass__conv1_STATE_VARIABLE_Partitions_26;
    MR_Word mercury__eqvclass__conv0_STATE_VARIABLE_Keys_28;

    {
      mercury__eqvclass__divide_equivalence_classes_2_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__closure, (MR_Integer) 5))), ((MR_Integer) mercury__eqvclass__wrapper_arg_1), ((MR_Word) mercury__eqvclass__wrapper_arg_2), ((MR_Word) mercury__eqvclass__wrapper_arg_3), &mercury__eqvclass__conv2_STATE_VARIABLE_Counter_24, ((MR_Word) mercury__eqvclass__wrapper_arg_5), &mercury__eqvclass__conv1_STATE_VARIABLE_Partitions_26, ((MR_Word) mercury__eqvclass__wrapper_arg_7), &mercury__eqvclass__conv0_STATE_VARIABLE_Keys_28);
    }
    *mercury__eqvclass__wrapper_arg_4 = ((MR_Box) (mercury__eqvclass__conv2_STATE_VARIABLE_Counter_24));
    *mercury__eqvclass__wrapper_arg_6 = ((MR_Box) (mercury__eqvclass__conv1_STATE_VARIABLE_Partitions_26));
    *mercury__eqvclass__wrapper_arg_8 = ((MR_Box) (mercury__eqvclass__conv0_STATE_VARIABLE_Keys_28));
  }
}

MR_Word MR_CALL 
mercury__eqvclass__divide_equivalence_classes_2_f_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_15,
  MR_Word mercury__eqvclass__TypeInfo_for_U_16,
  MR_Word mercury__eqvclass__F_4,
  MR_Word mercury__eqvclass__E0_5)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__E_6;
    MR_Word mercury__eqvclass__TypeCtorInfo_25_25;
    MR_Word mercury__eqvclass__TypeCtorInfo_26_26;
    MR_Word mercury__eqvclass__TypeInfo_27_27;
    MR_Word mercury__eqvclass__TypeCtorInfo_29_29;
    MR_Word mercury__eqvclass__TypeInfo_30_30;
    MR_Word mercury__eqvclass__TypeInfo_31_31;
    MR_Word mercury__eqvclass__TypeInfo_for_K_40;
    MR_Word mercury__eqvclass__TypeInfo_for_A_41;
    MR_Word mercury__eqvclass__Counter0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__E0_5, (MR_Integer) 0)));
    MR_Word mercury__eqvclass__Partitions0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__E0_5, (MR_Integer) 1)));
    MR_Word mercury__eqvclass__Keys0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__E0_5, (MR_Integer) 2)));
    MR_Word mercury__eqvclass__Counter_10;
    MR_Word mercury__eqvclass__Partitions_11;
    MR_Word mercury__eqvclass__Keys_12;
    MR_Word mercury__eqvclass__Var_13;
    MR_Box mercury__eqvclass__conv5_Counter_10;
    MR_Box mercury__eqvclass__conv4_Partitions_11;
    MR_Box mercury__eqvclass__conv3_Keys_12;

    {
      mercury__eqvclass__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__eqvclass__Var_13, 0) = ((MR_Box) (&mercury__eqvclass_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), mercury__eqvclass__Var_13, 1) = ((MR_Box) (mercury__eqvclass__divide_equivalence_classes_2_f_0_1));
      MR_hl_field(MR_mktag(0), mercury__eqvclass__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), mercury__eqvclass__Var_13, 3) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_15));
      MR_hl_field(MR_mktag(0), mercury__eqvclass__Var_13, 4) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_U_16));
      MR_hl_field(MR_mktag(0), mercury__eqvclass__Var_13, 5) = ((MR_Box) (mercury__eqvclass__F_4));
    }
    mercury__eqvclass__TypeCtorInfo_25_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    mercury__eqvclass__TypeCtorInfo_26_26 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
    {
      mercury__eqvclass__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_27_27, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_26_26));
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_27_27, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_15));
    }
    mercury__eqvclass__TypeCtorInfo_29_29 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
    {
      mercury__eqvclass__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_30_30, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_29_29));
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_30_30, 1) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_25_25));
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_30_30, 2) = ((MR_Box) (mercury__eqvclass__TypeInfo_27_27));
    }
    {
      mercury__eqvclass__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_31_31, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_29_29));
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_31_31, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_15));
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_31_31, 2) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_25_25));
    }
    mercury__eqvclass__TypeInfo_for_K_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    mercury__eqvclass__TypeInfo_for_A_41 = (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0;
    {
      mercury__tree234__foldl3_8_p_0(mercury__eqvclass__TypeInfo_for_K_40, mercury__eqvclass__TypeInfo_27_27, mercury__eqvclass__TypeInfo_for_A_41, mercury__eqvclass__TypeInfo_30_30, mercury__eqvclass__TypeInfo_31_31, mercury__eqvclass__Var_13, mercury__eqvclass__Partitions0_8, ((MR_Box) (mercury__eqvclass__Counter0_7)), &mercury__eqvclass__conv5_Counter_10, ((MR_Box) (mercury__eqvclass__Partitions0_8)), &mercury__eqvclass__conv4_Partitions_11, ((MR_Box) (mercury__eqvclass__Keys0_9)), &mercury__eqvclass__conv3_Keys_12);
    }
    mercury__eqvclass__Counter_10 = ((MR_Word) mercury__eqvclass__conv5_Counter_10);
    mercury__eqvclass__Partitions_11 = ((MR_Word) mercury__eqvclass__conv4_Partitions_11);
    mercury__eqvclass__Keys_12 = ((MR_Word) mercury__eqvclass__conv3_Keys_12);
    {
      mercury__eqvclass__E_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__eqvclass__E_6, 0) = ((MR_Box) (mercury__eqvclass__Counter_10));
      MR_hl_field(MR_mktag(0), mercury__eqvclass__E_6, 1) = ((MR_Box) (mercury__eqvclass__Partitions_11));
      MR_hl_field(MR_mktag(0), mercury__eqvclass__E_6, 2) = ((MR_Box) (mercury__eqvclass__Keys_12));
    }
    return mercury__eqvclass__E_6;
  }
}

void MR_CALL 
mercury__eqvclass__remove_equivalent_elements_3_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_17,
  MR_Box mercury__eqvclass__X_4,
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_13,
  MR_Word * mercury__eqvclass__STATE_VARIABLE_EqvClass_14)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__Id_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_13, (MR_Integer) 0)));
    MR_Word mercury__eqvclass__P0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_13, (MR_Integer) 1)));
    MR_Word mercury__eqvclass__E0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_13, (MR_Integer) 2)));
    MR_Integer mercury__eqvclass__Partition_9;
    MR_Word mercury__eqvclass__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Box mercury__eqvclass__conv0_Partition_9;

    {
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_17, mercury__eqvclass__TypeCtorInfo_18_18, mercury__eqvclass__E0_8, mercury__eqvclass__X_4, &mercury__eqvclass__conv0_Partition_9);
    }
    if (mercury__eqvclass__succeeded)
      {
        mercury__eqvclass__Partition_9 = ((MR_Integer) mercury__eqvclass__conv0_Partition_9);
        mercury__eqvclass__succeeded = MR_TRUE;
      }
    if (mercury__eqvclass__succeeded)
      {
        MR_Word mercury__eqvclass__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Word mercury__eqvclass__TypeCtorInfo_20_20 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
        MR_Word mercury__eqvclass__TypeInfo_21_21;
        MR_Word mercury__eqvclass__Eq_10;
        MR_Word mercury__eqvclass__P_11;
        MR_Word mercury__eqvclass__E_12;
        MR_Word mercury__eqvclass__Var_15;
        MR_Box mercury__eqvclass__conv1_Eq_10;

        {
          mercury__eqvclass__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_21_21, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_20_20));
          MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_21_21, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_17));
        }
        {
          mercury__map__det_remove_4_p_0(mercury__eqvclass__TypeCtorInfo_19_19, mercury__eqvclass__TypeInfo_21_21, ((MR_Box) (mercury__eqvclass__Partition_9)), &mercury__eqvclass__conv1_Eq_10, mercury__eqvclass__P0_7, &mercury__eqvclass__P_11);
        }
        mercury__eqvclass__Eq_10 = ((MR_Word) mercury__eqvclass__conv1_Eq_10);
        mercury__eqvclass__Var_15 = (MR_Word) mercury__eqvclass__Eq_10;
        {
          mercury__map__delete_list_3_p_0(mercury__eqvclass__TypeInfo_for_T_17, mercury__eqvclass__TypeCtorInfo_19_19, mercury__eqvclass__Var_15, mercury__eqvclass__E0_8, &mercury__eqvclass__E_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *mercury__eqvclass__STATE_VARIABLE_EqvClass_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__Id_6));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__P_11));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__E_12));
        }
      }
    else
      *mercury__eqvclass__STATE_VARIABLE_EqvClass_14 = mercury__eqvclass__STATE_VARIABLE_EqvClass_0_13;
  }
}

MR_Word MR_CALL 
mercury__eqvclass__remove_equivalent_elements_2_f_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_7,
  MR_Word mercury__eqvclass__EqvClass0_4,
  MR_Box mercury__eqvclass__X_5)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__EqvClass_6;

    {
      mercury__eqvclass__remove_equivalent_elements_3_p_0(mercury__eqvclass__TypeInfo_for_T_7, mercury__eqvclass__X_5, mercury__eqvclass__EqvClass0_4, &mercury__eqvclass__EqvClass_6);
    }
    return mercury__eqvclass__EqvClass_6;
  }
}

MR_Box MR_CALL 
mercury__eqvclass__get_minimum_element_2_f_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_8,
  MR_Word mercury__eqvclass__EqvClass_4,
  MR_Box mercury__eqvclass__X_5)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Box mercury__eqvclass__HeadVar__3_3;
    MR_Word mercury__eqvclass__Var_6;
    MR_Word mercury__eqvclass__Var_7;

    {
      mercury__eqvclass__Var_7 = mercury__eqvclass__get_equivalent_elements_2_f_0(mercury__eqvclass__TypeInfo_for_T_8, mercury__eqvclass__EqvClass_4, mercury__eqvclass__X_5);
    }
    mercury__eqvclass__Var_6 = (MR_Word) mercury__eqvclass__Var_7;
    {
      mercury__eqvclass__HeadVar__3_3 = mercury__list__det_head_1_f_0(mercury__eqvclass__TypeInfo_for_T_8, mercury__eqvclass__Var_6);
    }
    return mercury__eqvclass__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__eqvclass__get_equivalent_elements_2_f_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_10,
  MR_Word mercury__eqvclass__HeadVar__1_1,
  MR_Box mercury__eqvclass__X_7)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__HeadVar__3_3;
    MR_Word mercury__eqvclass__PartitionMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__eqvclass__ElementMap_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word mercury__eqvclass__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__eqvclass__Eqv_8;
    MR_Word mercury__eqvclass__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__eqvclass__TypeCtorInfo_12_12 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
    MR_Word mercury__eqvclass__TypeInfo_13_13;
    MR_Integer mercury__eqvclass__Var_9;
    MR_Box mercury__eqvclass__conv0_Var_9;
    MR_Box mercury__eqvclass__conv1_Eqv_8;

    {
      mercury__eqvclass__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_13_13, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_12_12));
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_13_13, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_10));
    }
    {
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_10, mercury__eqvclass__TypeCtorInfo_11_11, mercury__eqvclass__ElementMap_6, mercury__eqvclass__X_7, &mercury__eqvclass__conv0_Var_9);
    }
    if (mercury__eqvclass__succeeded)
      {
        mercury__eqvclass__Var_9 = ((MR_Integer) mercury__eqvclass__conv0_Var_9);
        mercury__eqvclass__succeeded = MR_TRUE;
      }
    if (mercury__eqvclass__succeeded)
      {
        {
          mercury__eqvclass__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_13_13, (MR_Word) mercury__eqvclass__PartitionMap_5, mercury__eqvclass__Var_9, &mercury__eqvclass__conv1_Eqv_8);
        }
        if (mercury__eqvclass__succeeded)
          {
            mercury__eqvclass__Eqv_8 = ((MR_Word) mercury__eqvclass__conv1_Eqv_8);
            mercury__eqvclass__succeeded = MR_TRUE;
          }
      }
    if (mercury__eqvclass__succeeded)
      mercury__eqvclass__HeadVar__3_3 = mercury__eqvclass__Eqv_8;
    else
      {
        MR_Word mercury__eqvclass__V_4_33;
        MR_Word mercury__eqvclass__V_5_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__eqvclass__V_4_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__eqvclass__V_4_33, 0) = mercury__eqvclass__X_7;
          MR_hl_field(MR_mktag(1), mercury__eqvclass__V_4_33, 1) = ((MR_Box) (mercury__eqvclass__V_5_34));
        }
        mercury__eqvclass__HeadVar__3_3 = (MR_Word) mercury__eqvclass__V_4_33;
      }
    return mercury__eqvclass__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__eqvclass__partition_list_to_eqvclass_2_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_18,
  MR_Word mercury__eqvclass__HeadVar__1_1,
  MR_Word * mercury__eqvclass__EqvClass_2)
{
  {
    MR_bool mercury__eqvclass__succeeded;

    if ((mercury__eqvclass__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__eqvclass__PartitionMap_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__eqvclass__ElementMap_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__eqvclass__Var_25 = (MR_Word) ((MR_Box) ((MR_Integer) 0));

        *mercury__eqvclass__EqvClass_2 = (MR_Word) &mercury__eqvclass_scalar_common_1[1];
      }
    else
      {
        MR_Word mercury__eqvclass__Partition_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__eqvclass__Ps_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__eqvclass__EqvClass0_7;
        MR_Word mercury__eqvclass__Counter0_8;
        MR_Word mercury__eqvclass__PartitionMap0_9;
        MR_Word mercury__eqvclass__ElementMap0_10;
        MR_Word mercury__eqvclass__Elements_11;
        MR_Word mercury__eqvclass__Counter_12;
        MR_Word mercury__eqvclass__ElementMap_13;
        MR_Word mercury__eqvclass__PartitionMap_14;

        {
          mercury__eqvclass__partition_list_to_eqvclass_2_p_0(mercury__eqvclass__TypeInfo_for_T_18, mercury__eqvclass__Ps_5, &mercury__eqvclass__EqvClass0_7);
        }
        mercury__eqvclass__Counter0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
        mercury__eqvclass__PartitionMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
        mercury__eqvclass__ElementMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
        mercury__eqvclass__Elements_11 = (MR_Word) mercury__eqvclass__Partition_4;
        if ((mercury__eqvclass__Elements_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            mercury__eqvclass__Counter_12 = mercury__eqvclass__Counter0_8;
            mercury__eqvclass__ElementMap_13 = mercury__eqvclass__ElementMap0_10;
            mercury__eqvclass__PartitionMap_14 = mercury__eqvclass__PartitionMap0_9;
          }
        else
          {
            MR_Word mercury__eqvclass__TypeCtorInfo_20_20;
            MR_Word mercury__eqvclass__TypeInfo_21_21;
            MR_Integer mercury__eqvclass__Id_17 = (MR_Integer) mercury__eqvclass__Counter0_8;
            MR_Integer mercury__eqvclass__V_5_37 = (mercury__eqvclass__Id_17 + (MR_Integer) 1);
            MR_Word mercury__eqvclass__conv0_PartitionMap_14;

            mercury__eqvclass__Counter_12 = (MR_Word) mercury__eqvclass__V_5_37;
            {
              mercury__eqvclass__make_partition_4_p_0(mercury__eqvclass__TypeInfo_for_T_18, mercury__eqvclass__Elements_11, mercury__eqvclass__Id_17, mercury__eqvclass__ElementMap0_10, &mercury__eqvclass__ElementMap_13);
            }
            mercury__eqvclass__TypeCtorInfo_20_20 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
            {
              mercury__eqvclass__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_21_21, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_20_20));
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_21_21, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_18));
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_21_21, mercury__eqvclass__Id_17, ((MR_Box) (mercury__eqvclass__Partition_4)), (MR_Word) mercury__eqvclass__PartitionMap0_9, &mercury__eqvclass__conv0_PartitionMap_14);
            }
            mercury__eqvclass__PartitionMap_14 = (MR_Word) mercury__eqvclass__conv0_PartitionMap_14;
          }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *mercury__eqvclass__EqvClass_2 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__Counter_12));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_14));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_13));
        }
      }
  }
}

MR_Word MR_CALL 
mercury__eqvclass__partition_list_to_eqvclass_1_f_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_5,
  MR_Word mercury__eqvclass__Xs_3)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__EqvClass_4;

    {
      mercury__eqvclass__partition_list_to_eqvclass_2_p_0(mercury__eqvclass__TypeInfo_for_T_5, mercury__eqvclass__Xs_3, &mercury__eqvclass__EqvClass_4);
    }
    return mercury__eqvclass__EqvClass_4;
  }
}

void MR_CALL 
mercury__eqvclass__partition_set_to_eqvclass_2_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_6,
  MR_Word mercury__eqvclass__SetSet_3,
  MR_Word * mercury__eqvclass__EqvClass_4)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__ListSet_5 = (MR_Word) mercury__eqvclass__SetSet_3;

    {
      mercury__eqvclass__partition_list_to_eqvclass_2_p_0(mercury__eqvclass__TypeInfo_for_T_6, mercury__eqvclass__ListSet_5, mercury__eqvclass__EqvClass_4);
    }
  }
}

MR_Word MR_CALL 
mercury__eqvclass__partition_set_to_eqvclass_1_f_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_5,
  MR_Word mercury__eqvclass__Set_3)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__EqvClass_4;
    MR_Word mercury__eqvclass__ListSet_8 = (MR_Word) mercury__eqvclass__Set_3;

    {
      mercury__eqvclass__partition_list_to_eqvclass_2_p_0(mercury__eqvclass__TypeInfo_for_T_5, mercury__eqvclass__ListSet_8, &mercury__eqvclass__EqvClass_4);
    }
    return mercury__eqvclass__EqvClass_4;
  }
}

void MR_CALL 
mercury__eqvclass__partition_list_2_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_6,
  MR_Word mercury__eqvclass__EqvClass_3,
  MR_Word * mercury__eqvclass__PartitionList_4)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__TypeCtorInfo_9_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__eqvclass__TypeCtorInfo_10_13 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
    MR_Word mercury__eqvclass__TypeInfo_11_14;
    MR_Word mercury__eqvclass__Ids_5;
    MR_Word mercury__eqvclass__PartitionMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 1)));
    MR_Word mercury__eqvclass__V_5_19;
    MR_Word mercury__eqvclass__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 0)));
    MR_Word mercury__eqvclass__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 2)));

    {
      mercury__eqvclass__TypeInfo_11_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_11_14, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_10_13));
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_11_14, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_6));
    }
    mercury__eqvclass__V_5_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__keys_acc_3_p_0(mercury__eqvclass__TypeCtorInfo_9_12, mercury__eqvclass__TypeInfo_11_14, mercury__eqvclass__PartitionMap0_9, mercury__eqvclass__V_5_19, &mercury__eqvclass__Ids_5);
    }
    {
      mercury__eqvclass__partitions_3_p_0(mercury__eqvclass__TypeInfo_for_T_6, mercury__eqvclass__EqvClass_3, mercury__eqvclass__Ids_5, mercury__eqvclass__PartitionList_4);
    }
  }
}

MR_Word MR_CALL 
mercury__eqvclass__partition_list_1_f_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_5,
  MR_Word mercury__eqvclass__EqvClass_3)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__Xs_4;
    MR_Word mercury__eqvclass__TypeCtorInfo_9_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__eqvclass__TypeCtorInfo_10_15 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
    MR_Word mercury__eqvclass__TypeInfo_11_16;
    MR_Word mercury__eqvclass__Ids_8;
    MR_Word mercury__eqvclass__PartitionMap0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 1)));
    MR_Word mercury__eqvclass__V_5_21;
    MR_Word mercury__eqvclass__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 0)));
    MR_Word mercury__eqvclass__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 2)));

    {
      mercury__eqvclass__TypeInfo_11_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_11_16, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_10_15));
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_11_16, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_5));
    }
    mercury__eqvclass__V_5_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__keys_acc_3_p_0(mercury__eqvclass__TypeCtorInfo_9_14, mercury__eqvclass__TypeInfo_11_16, mercury__eqvclass__PartitionMap0_11, mercury__eqvclass__V_5_21, &mercury__eqvclass__Ids_8);
    }
    {
      mercury__eqvclass__partitions_3_p_0(mercury__eqvclass__TypeInfo_for_T_5, mercury__eqvclass__EqvClass_3, mercury__eqvclass__Ids_8, &mercury__eqvclass__Xs_4);
    }
    return mercury__eqvclass__Xs_4;
  }
}

void MR_CALL 
mercury__eqvclass__partition_set_2_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_7,
  MR_Word mercury__eqvclass__EqvClass0_3,
  MR_Word * mercury__eqvclass__PartitionSet_4)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__TypeInfo_9_9;
    MR_Word mercury__eqvclass__TypeCtorInfo_9_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__eqvclass__TypeCtorInfo_10_16 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
    MR_Word mercury__eqvclass__Ids_5;
    MR_Word mercury__eqvclass__PartitionList_6;
    MR_Word mercury__eqvclass__PartitionMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_3, (MR_Integer) 1)));
    MR_Word mercury__eqvclass__V_5_22;
    MR_Word mercury__eqvclass__V_4_27;
    MR_Integer mercury__eqvclass__V_5_30;
    MR_Word mercury__eqvclass__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_3, (MR_Integer) 0)));
    MR_Word mercury__eqvclass__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_3, (MR_Integer) 2)));
    MR_Word mercury__eqvclass__conv0_V_4_27;

    {
      mercury__eqvclass__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_9_9, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_10_16));
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_9_9, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_7));
    }
    mercury__eqvclass__V_5_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__keys_acc_3_p_0(mercury__eqvclass__TypeCtorInfo_9_15, mercury__eqvclass__TypeInfo_9_9, mercury__eqvclass__PartitionMap0_12, mercury__eqvclass__V_5_22, &mercury__eqvclass__Ids_5);
    }
    {
      mercury__eqvclass__partitions_3_p_0(mercury__eqvclass__TypeInfo_for_T_7, mercury__eqvclass__EqvClass0_3, mercury__eqvclass__Ids_5, &mercury__eqvclass__PartitionList_6);
    }
    {
      mercury__list__length_acc_3_p_0(mercury__eqvclass__TypeInfo_9_9, (MR_Word) mercury__eqvclass__PartitionList_6, (MR_Integer) 0, &mercury__eqvclass__V_5_30);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__eqvclass__TypeInfo_9_9, mercury__eqvclass__V_5_30, (MR_Word) mercury__eqvclass__PartitionList_6, &mercury__eqvclass__conv0_V_4_27);
    }
    mercury__eqvclass__V_4_27 = (MR_Word) mercury__eqvclass__conv0_V_4_27;
    *mercury__eqvclass__PartitionSet_4 = (MR_Word) mercury__eqvclass__V_4_27;
  }
}

MR_Word MR_CALL 
mercury__eqvclass__partition_set_1_f_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_5,
  MR_Word mercury__eqvclass__EqvClass_3)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__S_4;

    {
      mercury__eqvclass__partition_set_2_p_0(mercury__eqvclass__TypeInfo_for_T_5, mercury__eqvclass__EqvClass_3, &mercury__eqvclass__S_4);
    }
    return mercury__eqvclass__S_4;
  }
}

MR_bool MR_CALL 
mercury__eqvclass__same_eqvclass_list_2_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_11,
  MR_Word mercury__eqvclass__EqvClass_1,
  MR_Word mercury__eqvclass__HeadVar__2_2)
{
  {
    MR_bool mercury__eqvclass__succeeded;

    if ((mercury__eqvclass__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__eqvclass__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__eqvclass__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Box mercury__eqvclass__Element_5 = (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 0));
        MR_Word mercury__eqvclass__Elements_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__eqvclass__ElementMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_1, (MR_Integer) 2)));
        MR_Integer mercury__eqvclass__Id_8;
        MR_Word mercury__eqvclass__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_1, (MR_Integer) 0)));
        MR_Word mercury__eqvclass__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_1, (MR_Integer) 1)));
        MR_Box mercury__eqvclass__conv0_Id_8;

        {
          mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_11, mercury__eqvclass__TypeCtorInfo_12_12, mercury__eqvclass__ElementMap_7, mercury__eqvclass__Element_5, &mercury__eqvclass__conv0_Id_8);
        }
        if (mercury__eqvclass__succeeded)
          {
            mercury__eqvclass__Id_8 = ((MR_Integer) mercury__eqvclass__conv0_Id_8);
            mercury__eqvclass__succeeded = MR_TRUE;
          }
        if (mercury__eqvclass__succeeded)
          {
            mercury__eqvclass__succeeded = mercury__eqvclass__same_eqvclass_list_2_3_p_0(mercury__eqvclass__TypeInfo_for_T_11, mercury__eqvclass__ElementMap_7, mercury__eqvclass__Elements_6, mercury__eqvclass__Id_8);
          }
      }
    return mercury__eqvclass__succeeded;
  }
}

MR_bool MR_CALL 
mercury__eqvclass__same_eqvclass_3_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_12,
  MR_Word mercury__eqvclass__EqvClass0_4,
  MR_Box mercury__eqvclass__Element1_5,
  MR_Box mercury__eqvclass__Element2_6)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__eqvclass__ElementMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_4, (MR_Integer) 2)));
    MR_Integer mercury__eqvclass__Id1_8;
    MR_Integer mercury__eqvclass__Id2_9;
    MR_Word mercury__eqvclass__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_4, (MR_Integer) 0)));
    MR_Word mercury__eqvclass__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_4, (MR_Integer) 1)));
    MR_Box mercury__eqvclass__conv0_Id1_8;
    MR_Box mercury__eqvclass__conv1_Id2_9;

    {
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_12, mercury__eqvclass__TypeCtorInfo_13_13, mercury__eqvclass__ElementMap0_7, mercury__eqvclass__Element1_5, &mercury__eqvclass__conv0_Id1_8);
    }
    if (mercury__eqvclass__succeeded)
      {
        mercury__eqvclass__Id1_8 = ((MR_Integer) mercury__eqvclass__conv0_Id1_8);
        mercury__eqvclass__succeeded = MR_TRUE;
      }
    if (mercury__eqvclass__succeeded)
      {
        {
          mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_12, mercury__eqvclass__TypeCtorInfo_13_13, mercury__eqvclass__ElementMap0_7, mercury__eqvclass__Element2_6, &mercury__eqvclass__conv1_Id2_9);
        }
        if (mercury__eqvclass__succeeded)
          {
            mercury__eqvclass__Id2_9 = ((MR_Integer) mercury__eqvclass__conv1_Id2_9);
            mercury__eqvclass__succeeded = MR_TRUE;
          }
        if (mercury__eqvclass__succeeded)
          mercury__eqvclass__succeeded = (mercury__eqvclass__Id1_8 == mercury__eqvclass__Id2_9);
      }
    return mercury__eqvclass__succeeded;
  }
}

void MR_CALL 
mercury__eqvclass__new_equivalence_4_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_57,
  MR_Box mercury__eqvclass__ElementA_5,
  MR_Box mercury__eqvclass__ElementB_6,
  MR_Word mercury__eqvclass__EqvClass0_7,
  MR_Word * mercury__eqvclass__EqvClass_8)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__ElementMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
    MR_Word mercury__eqvclass__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
    MR_Word mercury__eqvclass__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
    MR_Integer mercury__eqvclass__IdA_10;
    MR_Word mercury__eqvclass__TypeCtorInfo_58_58 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Box mercury__eqvclass__conv0_IdA_10;

    {
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_57, mercury__eqvclass__TypeCtorInfo_58_58, mercury__eqvclass__ElementMap0_9, mercury__eqvclass__ElementA_5, &mercury__eqvclass__conv0_IdA_10);
    }
    if (mercury__eqvclass__succeeded)
      {
        mercury__eqvclass__IdA_10 = ((MR_Integer) mercury__eqvclass__conv0_IdA_10);
        mercury__eqvclass__succeeded = MR_TRUE;
      }
    if (mercury__eqvclass__succeeded)
      {
        MR_Integer mercury__eqvclass__IdB_11;
        MR_Word mercury__eqvclass__TypeCtorInfo_59_59 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Box mercury__eqvclass__conv1_IdB_11;

        {
          mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_57, mercury__eqvclass__TypeCtorInfo_59_59, mercury__eqvclass__ElementMap0_9, mercury__eqvclass__ElementB_6, &mercury__eqvclass__conv1_IdB_11);
        }
        if (mercury__eqvclass__succeeded)
          {
            mercury__eqvclass__IdB_11 = ((MR_Integer) mercury__eqvclass__conv1_IdB_11);
            mercury__eqvclass__succeeded = MR_TRUE;
          }
        if (mercury__eqvclass__succeeded)
          {
            mercury__eqvclass__succeeded = (mercury__eqvclass__IdA_10 == mercury__eqvclass__IdB_11);
            if (mercury__eqvclass__succeeded)
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140eqvclass.new_equivalence\'/4", (MR_String) "the two elements are already equivalent");
                  return;
                }
              }
            else
              {
                mercury__eqvclass__add_equivalence_4_p_0(mercury__eqvclass__TypeInfo_for_T_57, mercury__eqvclass__IdA_10, mercury__eqvclass__IdB_11, mercury__eqvclass__EqvClass0_7, mercury__eqvclass__EqvClass_8);
              }
          }
        else
          {
            MR_Word mercury__eqvclass__TypeCtorInfo_60_60 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            MR_Word mercury__eqvclass__TypeCtorInfo_61_61 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
            MR_Word mercury__eqvclass__TypeInfo_62_62;
            MR_Word mercury__eqvclass__PartitionMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
            MR_Word mercury__eqvclass__PartitionA_13;
            MR_Word mercury__eqvclass__Partition_14;
            MR_Word mercury__eqvclass__PartitionMap_15;
            MR_Word mercury__eqvclass__ElementMap_16;
            MR_Word mercury__eqvclass__NextId0_17;
            MR_Word mercury__eqvclass__V_5_83;
            MR_Word mercury__eqvclass__V_6_84;
            MR_Word mercury__eqvclass__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
            MR_Word mercury__eqvclass__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
            MR_Box mercury__eqvclass__conv2_PartitionA_13;
            MR_Word mercury__eqvclass__conv3_PartitionMap_15;
            MR_Word mercury__eqvclass__Var_47;
            MR_Word mercury__eqvclass__Var_48;

            {
              mercury__eqvclass__TypeInfo_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_62_62, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_61_61));
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_62_62, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_57));
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_62_62, (MR_Word) mercury__eqvclass__PartitionMap0_12, mercury__eqvclass__IdA_10, &mercury__eqvclass__conv2_PartitionA_13);
            }
            mercury__eqvclass__PartitionA_13 = ((MR_Word) mercury__eqvclass__conv2_PartitionA_13);
            mercury__eqvclass__V_5_83 = (MR_Word) mercury__eqvclass__PartitionA_13;
            {
              mercury__set_ordlist__insert_loop_3_p_0(mercury__eqvclass__TypeInfo_for_T_57, mercury__eqvclass__V_5_83, mercury__eqvclass__ElementB_6, &mercury__eqvclass__V_6_84);
            }
            mercury__eqvclass__Partition_14 = (MR_Word) mercury__eqvclass__V_6_84;
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_62_62, mercury__eqvclass__IdA_10, ((MR_Box) (mercury__eqvclass__Partition_14)), (MR_Word) mercury__eqvclass__PartitionMap0_12, &mercury__eqvclass__conv3_PartitionMap_15);
            }
            mercury__eqvclass__PartitionMap_15 = (MR_Word) mercury__eqvclass__conv3_PartitionMap_15;
            {
              mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_57, mercury__eqvclass__TypeCtorInfo_60_60, mercury__eqvclass__ElementB_6, ((MR_Box) (mercury__eqvclass__IdA_10)), mercury__eqvclass__ElementMap0_9, &mercury__eqvclass__ElementMap_16);
            }
            mercury__eqvclass__NextId0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
            mercury__eqvclass__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
            mercury__eqvclass__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              *mercury__eqvclass__EqvClass_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__NextId0_17));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_15));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_16));
            }
          }
      }
    else
      {
        MR_Word mercury__eqvclass__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
        MR_Word mercury__eqvclass__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
        MR_Word mercury__eqvclass__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
        MR_Integer mercury__eqvclass__IdB_37;
        MR_Word mercury__eqvclass__TypeCtorInfo_63_63 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Box mercury__eqvclass__conv4_IdB_37;

        {
          mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_57, mercury__eqvclass__TypeCtorInfo_63_63, mercury__eqvclass__ElementMap0_9, mercury__eqvclass__ElementB_6, &mercury__eqvclass__conv4_IdB_37);
        }
        if (mercury__eqvclass__succeeded)
          {
            mercury__eqvclass__IdB_37 = ((MR_Integer) mercury__eqvclass__conv4_IdB_37);
            mercury__eqvclass__succeeded = MR_TRUE;
          }
        if (mercury__eqvclass__succeeded)
          {
            MR_Word mercury__eqvclass__TypeCtorInfo_64_64 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            MR_Word mercury__eqvclass__TypeCtorInfo_65_65 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
            MR_Word mercury__eqvclass__TypeInfo_66_66;
            MR_Word mercury__eqvclass__PartitionB_18;
            MR_Word mercury__eqvclass__Partition_28;
            MR_Word mercury__eqvclass__PartitionMap_29;
            MR_Word mercury__eqvclass__ElementMap_30;
            MR_Word mercury__eqvclass__NextId0_31;
            MR_Word mercury__eqvclass__V_5_92;
            MR_Word mercury__eqvclass__V_6_93;
            MR_Box mercury__eqvclass__conv5_PartitionB_18;
            MR_Word mercury__eqvclass__conv6_PartitionMap_29;
            MR_Word mercury__eqvclass__Var_51;
            MR_Word mercury__eqvclass__Var_52;

            {
              mercury__eqvclass__TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_66_66, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_65_65));
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_66_66, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_57));
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_66_66, (MR_Word) mercury__eqvclass__Var_71, mercury__eqvclass__IdB_37, &mercury__eqvclass__conv5_PartitionB_18);
            }
            mercury__eqvclass__PartitionB_18 = ((MR_Word) mercury__eqvclass__conv5_PartitionB_18);
            mercury__eqvclass__V_5_92 = (MR_Word) mercury__eqvclass__PartitionB_18;
            {
              mercury__set_ordlist__insert_loop_3_p_0(mercury__eqvclass__TypeInfo_for_T_57, mercury__eqvclass__V_5_92, mercury__eqvclass__ElementA_5, &mercury__eqvclass__V_6_93);
            }
            mercury__eqvclass__Partition_28 = (MR_Word) mercury__eqvclass__V_6_93;
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_66_66, mercury__eqvclass__IdB_37, ((MR_Box) (mercury__eqvclass__Partition_28)), (MR_Word) mercury__eqvclass__Var_71, &mercury__eqvclass__conv6_PartitionMap_29);
            }
            mercury__eqvclass__PartitionMap_29 = (MR_Word) mercury__eqvclass__conv6_PartitionMap_29;
            {
              mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_57, mercury__eqvclass__TypeCtorInfo_64_64, mercury__eqvclass__ElementA_5, ((MR_Box) (mercury__eqvclass__IdB_37)), mercury__eqvclass__ElementMap0_9, &mercury__eqvclass__ElementMap_30);
            }
            mercury__eqvclass__NextId0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
            mercury__eqvclass__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
            mercury__eqvclass__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              *mercury__eqvclass__EqvClass_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__NextId0_31));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_29));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_30));
            }
          }
        else
          {
            MR_Word mercury__eqvclass__TypeCtorInfo_67_67;
            MR_Word mercury__eqvclass__TypeCtorInfo_68_68;
            MR_Word mercury__eqvclass__TypeInfo_69_69;
            MR_Integer mercury__eqvclass__Id_19 = (MR_Integer) mercury__eqvclass__Var_72;
            MR_Word mercury__eqvclass__NextId_20;
            MR_Word mercury__eqvclass__ElementMap1_21;
            MR_Word mercury__eqvclass__Var_24;
            MR_Word mercury__eqvclass__Var_25;
            MR_Word mercury__eqvclass__Var_26;
            MR_Word mercury__eqvclass__PartitionMap0_32;
            MR_Word mercury__eqvclass__Partition_33;
            MR_Word mercury__eqvclass__PartitionMap_34;
            MR_Word mercury__eqvclass__ElementMap_35;
            MR_Integer mercury__eqvclass__V_5_95 = (mercury__eqvclass__Id_19 + (MR_Integer) 1);
            MR_Word mercury__eqvclass__Var_55;
            MR_Word mercury__eqvclass__Var_56;
            MR_Word mercury__eqvclass__conv7_PartitionMap_34;

            mercury__eqvclass__NextId_20 = (MR_Word) mercury__eqvclass__V_5_95;
            mercury__eqvclass__TypeCtorInfo_67_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            {
              mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_57, mercury__eqvclass__TypeCtorInfo_67_67, mercury__eqvclass__ElementA_5, ((MR_Box) (mercury__eqvclass__Id_19)), mercury__eqvclass__ElementMap0_9, &mercury__eqvclass__ElementMap1_21);
            }
            {
              mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_57, mercury__eqvclass__TypeCtorInfo_67_67, mercury__eqvclass__ElementB_6, ((MR_Box) (mercury__eqvclass__Id_19)), mercury__eqvclass__ElementMap1_21, &mercury__eqvclass__ElementMap_35);
            }
            mercury__eqvclass__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
            mercury__eqvclass__PartitionMap0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
            mercury__eqvclass__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
            mercury__eqvclass__Var_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__eqvclass__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__eqvclass__Var_25, 0) = mercury__eqvclass__ElementB_6;
              MR_hl_field(MR_mktag(1), mercury__eqvclass__Var_25, 1) = ((MR_Box) (mercury__eqvclass__Var_26));
            }
            {
              mercury__eqvclass__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__eqvclass__Var_24, 0) = mercury__eqvclass__ElementA_5;
              MR_hl_field(MR_mktag(1), mercury__eqvclass__Var_24, 1) = ((MR_Box) (mercury__eqvclass__Var_25));
            }
            {
              mercury__set__list_to_set_2_p_0(mercury__eqvclass__TypeInfo_for_T_57, mercury__eqvclass__Var_24, &mercury__eqvclass__Partition_33);
            }
            mercury__eqvclass__TypeCtorInfo_68_68 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
            {
              mercury__eqvclass__TypeInfo_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_69_69, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_68_68));
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_69_69, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_57));
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_69_69, mercury__eqvclass__Id_19, ((MR_Box) (mercury__eqvclass__Partition_33)), (MR_Word) mercury__eqvclass__PartitionMap0_32, &mercury__eqvclass__conv7_PartitionMap_34);
            }
            mercury__eqvclass__PartitionMap_34 = (MR_Word) mercury__eqvclass__conv7_PartitionMap_34;
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              *mercury__eqvclass__EqvClass_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__NextId_20));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_34));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_35));
            }
          }
      }
  }
}

MR_Word MR_CALL 
mercury__eqvclass__new_equivalence_3_f_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_11,
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_8,
  MR_Box mercury__eqvclass__X_6,
  MR_Box mercury__eqvclass__Y_7)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_9;

    {
      mercury__eqvclass__new_equivalence_4_p_0(mercury__eqvclass__TypeInfo_for_T_11, mercury__eqvclass__X_6, mercury__eqvclass__Y_7, mercury__eqvclass__STATE_VARIABLE_EqvClass_0_8, &mercury__eqvclass__STATE_VARIABLE_EqvClass_9);
    }
    return mercury__eqvclass__STATE_VARIABLE_EqvClass_9;
  }
}

void MR_CALL 
mercury__eqvclass__ensure_corresponding_equivalences_4_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_31,
  MR_Word mercury__eqvclass__HeadVar__1_1,
  MR_Word mercury__eqvclass__HeadVar__2_2,
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_3,
  MR_Word * mercury__eqvclass__STATE_VARIABLE_EqvClass_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__eqvclass__succeeded;

        if ((mercury__eqvclass__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((mercury__eqvclass__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *mercury__eqvclass__STATE_VARIABLE_EqvClass_4 = mercury__eqvclass__STATE_VARIABLE_EqvClass_0_3;
          else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140eqvclass.ensure_corresponding_equivalences\'/4", (MR_String) "list length mismatch");
                return;
              }
            }
        else
          {
            MR_Word mercury__eqvclass__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 1)));
            MR_Box mercury__eqvclass__Var_33 = (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 0));

            if ((mercury__eqvclass__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140eqvclass.ensure_corresponding_equivalences\'/4", (MR_String) "list length mismatch");
                  return;
                }
              }
            else
              {
                MR_Box mercury__eqvclass__H2_24 = (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 0));
                MR_Word mercury__eqvclass__T2_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_29_29;

                {
                  mercury__eqvclass__ensure_equivalence_4_p_0(mercury__eqvclass__TypeInfo_for_T_31, mercury__eqvclass__Var_33, mercury__eqvclass__H2_24, mercury__eqvclass__STATE_VARIABLE_EqvClass_0_3, &mercury__eqvclass__STATE_VARIABLE_EqvClass_29_29);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__eqvclass__next_value_of_HeadVar__1_1 = mercury__eqvclass__Var_32;
                  MR_Word mercury__eqvclass__next_value_of_HeadVar__2_2 = mercury__eqvclass__T2_25;
                  MR_Word mercury__eqvclass__next_value_of_STATE_VARIABLE_EqvClass_0_3 = mercury__eqvclass__STATE_VARIABLE_EqvClass_29_29;

                  mercury__eqvclass__STATE_VARIABLE_EqvClass_0_3 = mercury__eqvclass__next_value_of_STATE_VARIABLE_EqvClass_0_3;
                  mercury__eqvclass__HeadVar__2_2 = mercury__eqvclass__next_value_of_HeadVar__2_2;
                  mercury__eqvclass__HeadVar__1_1 = mercury__eqvclass__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__eqvclass__ensure_corresponding_equivalences_3_f_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_9,
  MR_Word mercury__eqvclass__L1_5,
  MR_Word mercury__eqvclass__L2_6,
  MR_Word mercury__eqvclass__EqvClass0_7)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__EqvClass_8;

    {
      mercury__eqvclass__ensure_corresponding_equivalences_4_p_0(mercury__eqvclass__TypeInfo_for_T_9, mercury__eqvclass__L1_5, mercury__eqvclass__L2_6, mercury__eqvclass__EqvClass0_7, &mercury__eqvclass__EqvClass_8);
    }
    return mercury__eqvclass__EqvClass_8;
  }
}

void MR_CALL 
mercury__eqvclass__ensure_equivalence_4_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_55,
  MR_Box mercury__eqvclass__ElementA_5,
  MR_Box mercury__eqvclass__ElementB_6,
  MR_Word mercury__eqvclass__EqvClass0_7,
  MR_Word * mercury__eqvclass__EqvClass_8)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__ElementMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
    MR_Word mercury__eqvclass__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
    MR_Word mercury__eqvclass__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
    MR_Integer mercury__eqvclass__IdA_10;
    MR_Word mercury__eqvclass__TypeCtorInfo_56_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Box mercury__eqvclass__conv0_IdA_10;

    {
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__TypeCtorInfo_56_56, mercury__eqvclass__ElementMap0_9, mercury__eqvclass__ElementA_5, &mercury__eqvclass__conv0_IdA_10);
    }
    if (mercury__eqvclass__succeeded)
      {
        mercury__eqvclass__IdA_10 = ((MR_Integer) mercury__eqvclass__conv0_IdA_10);
        mercury__eqvclass__succeeded = MR_TRUE;
      }
    if (mercury__eqvclass__succeeded)
      {
        MR_Integer mercury__eqvclass__IdB_11;
        MR_Word mercury__eqvclass__TypeCtorInfo_57_57 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Box mercury__eqvclass__conv1_IdB_11;

        {
          mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__TypeCtorInfo_57_57, mercury__eqvclass__ElementMap0_9, mercury__eqvclass__ElementB_6, &mercury__eqvclass__conv1_IdB_11);
        }
        if (mercury__eqvclass__succeeded)
          {
            mercury__eqvclass__IdB_11 = ((MR_Integer) mercury__eqvclass__conv1_IdB_11);
            mercury__eqvclass__succeeded = MR_TRUE;
          }
        if (mercury__eqvclass__succeeded)
          {
            mercury__eqvclass__succeeded = (mercury__eqvclass__IdA_10 == mercury__eqvclass__IdB_11);
            if (mercury__eqvclass__succeeded)
              *mercury__eqvclass__EqvClass_8 = mercury__eqvclass__EqvClass0_7;
            else
              {
                mercury__eqvclass__add_equivalence_4_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__IdA_10, mercury__eqvclass__IdB_11, mercury__eqvclass__EqvClass0_7, mercury__eqvclass__EqvClass_8);
              }
          }
        else
          {
            MR_Word mercury__eqvclass__TypeCtorInfo_58_58 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            MR_Word mercury__eqvclass__TypeCtorInfo_59_59 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
            MR_Word mercury__eqvclass__TypeInfo_60_60;
            MR_Word mercury__eqvclass__PartitionMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
            MR_Word mercury__eqvclass__PartitionA_13;
            MR_Word mercury__eqvclass__Partition_14;
            MR_Word mercury__eqvclass__PartitionMap_15;
            MR_Word mercury__eqvclass__ElementMap_16;
            MR_Word mercury__eqvclass__NextId0_17;
            MR_Word mercury__eqvclass__V_5_81;
            MR_Word mercury__eqvclass__V_6_82;
            MR_Word mercury__eqvclass__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
            MR_Word mercury__eqvclass__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
            MR_Box mercury__eqvclass__conv2_PartitionA_13;
            MR_Word mercury__eqvclass__conv3_PartitionMap_15;
            MR_Word mercury__eqvclass__Var_45;
            MR_Word mercury__eqvclass__Var_46;

            {
              mercury__eqvclass__TypeInfo_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_60_60, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_59_59));
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_60_60, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_55));
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_60_60, (MR_Word) mercury__eqvclass__PartitionMap0_12, mercury__eqvclass__IdA_10, &mercury__eqvclass__conv2_PartitionA_13);
            }
            mercury__eqvclass__PartitionA_13 = ((MR_Word) mercury__eqvclass__conv2_PartitionA_13);
            mercury__eqvclass__V_5_81 = (MR_Word) mercury__eqvclass__PartitionA_13;
            {
              mercury__set_ordlist__insert_loop_3_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__V_5_81, mercury__eqvclass__ElementB_6, &mercury__eqvclass__V_6_82);
            }
            mercury__eqvclass__Partition_14 = (MR_Word) mercury__eqvclass__V_6_82;
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_60_60, mercury__eqvclass__IdA_10, ((MR_Box) (mercury__eqvclass__Partition_14)), (MR_Word) mercury__eqvclass__PartitionMap0_12, &mercury__eqvclass__conv3_PartitionMap_15);
            }
            mercury__eqvclass__PartitionMap_15 = (MR_Word) mercury__eqvclass__conv3_PartitionMap_15;
            {
              mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__TypeCtorInfo_58_58, mercury__eqvclass__ElementB_6, ((MR_Box) (mercury__eqvclass__IdA_10)), mercury__eqvclass__ElementMap0_9, &mercury__eqvclass__ElementMap_16);
            }
            mercury__eqvclass__NextId0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
            mercury__eqvclass__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
            mercury__eqvclass__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              *mercury__eqvclass__EqvClass_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__NextId0_17));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_15));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_16));
            }
          }
      }
    else
      {
        MR_Word mercury__eqvclass__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
        MR_Word mercury__eqvclass__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
        MR_Word mercury__eqvclass__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
        MR_Integer mercury__eqvclass__IdB_35;
        MR_Word mercury__eqvclass__TypeCtorInfo_61_61 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Box mercury__eqvclass__conv4_IdB_35;

        {
          mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__TypeCtorInfo_61_61, mercury__eqvclass__ElementMap0_9, mercury__eqvclass__ElementB_6, &mercury__eqvclass__conv4_IdB_35);
        }
        if (mercury__eqvclass__succeeded)
          {
            mercury__eqvclass__IdB_35 = ((MR_Integer) mercury__eqvclass__conv4_IdB_35);
            mercury__eqvclass__succeeded = MR_TRUE;
          }
        if (mercury__eqvclass__succeeded)
          {
            MR_Word mercury__eqvclass__TypeCtorInfo_62_62 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            MR_Word mercury__eqvclass__TypeCtorInfo_63_63 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
            MR_Word mercury__eqvclass__TypeInfo_64_64;
            MR_Word mercury__eqvclass__PartitionB_18;
            MR_Word mercury__eqvclass__Partition_26;
            MR_Word mercury__eqvclass__PartitionMap_27;
            MR_Word mercury__eqvclass__ElementMap_28;
            MR_Word mercury__eqvclass__NextId0_29;
            MR_Word mercury__eqvclass__V_5_90;
            MR_Word mercury__eqvclass__V_6_91;
            MR_Box mercury__eqvclass__conv5_PartitionB_18;
            MR_Word mercury__eqvclass__conv6_PartitionMap_27;
            MR_Word mercury__eqvclass__Var_49;
            MR_Word mercury__eqvclass__Var_50;

            {
              mercury__eqvclass__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_64_64, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_63_63));
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_64_64, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_55));
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_64_64, (MR_Word) mercury__eqvclass__Var_69, mercury__eqvclass__IdB_35, &mercury__eqvclass__conv5_PartitionB_18);
            }
            mercury__eqvclass__PartitionB_18 = ((MR_Word) mercury__eqvclass__conv5_PartitionB_18);
            mercury__eqvclass__V_5_90 = (MR_Word) mercury__eqvclass__PartitionB_18;
            {
              mercury__set_ordlist__insert_loop_3_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__V_5_90, mercury__eqvclass__ElementA_5, &mercury__eqvclass__V_6_91);
            }
            mercury__eqvclass__Partition_26 = (MR_Word) mercury__eqvclass__V_6_91;
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_64_64, mercury__eqvclass__IdB_35, ((MR_Box) (mercury__eqvclass__Partition_26)), (MR_Word) mercury__eqvclass__Var_69, &mercury__eqvclass__conv6_PartitionMap_27);
            }
            mercury__eqvclass__PartitionMap_27 = (MR_Word) mercury__eqvclass__conv6_PartitionMap_27;
            {
              mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__TypeCtorInfo_62_62, mercury__eqvclass__ElementA_5, ((MR_Box) (mercury__eqvclass__IdB_35)), mercury__eqvclass__ElementMap0_9, &mercury__eqvclass__ElementMap_28);
            }
            mercury__eqvclass__NextId0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
            mercury__eqvclass__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
            mercury__eqvclass__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              *mercury__eqvclass__EqvClass_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__NextId0_29));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_27));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_28));
            }
          }
        else
          {
            MR_Word mercury__eqvclass__TypeCtorInfo_65_65;
            MR_Word mercury__eqvclass__TypeCtorInfo_66_66;
            MR_Word mercury__eqvclass__TypeInfo_67_67;
            MR_Integer mercury__eqvclass__Id_19 = (MR_Integer) mercury__eqvclass__Var_70;
            MR_Word mercury__eqvclass__NextId_20;
            MR_Word mercury__eqvclass__ElementMap1_21;
            MR_Word mercury__eqvclass__Var_22;
            MR_Word mercury__eqvclass__Var_23;
            MR_Word mercury__eqvclass__Var_24;
            MR_Word mercury__eqvclass__PartitionMap0_30;
            MR_Word mercury__eqvclass__Partition_31;
            MR_Word mercury__eqvclass__PartitionMap_32;
            MR_Word mercury__eqvclass__ElementMap_33;
            MR_Integer mercury__eqvclass__V_5_93 = (mercury__eqvclass__Id_19 + (MR_Integer) 1);
            MR_Word mercury__eqvclass__Var_53;
            MR_Word mercury__eqvclass__Var_54;
            MR_Word mercury__eqvclass__conv7_PartitionMap_32;

            mercury__eqvclass__NextId_20 = (MR_Word) mercury__eqvclass__V_5_93;
            mercury__eqvclass__TypeCtorInfo_65_65 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            {
              mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__TypeCtorInfo_65_65, mercury__eqvclass__ElementA_5, ((MR_Box) (mercury__eqvclass__Id_19)), mercury__eqvclass__ElementMap0_9, &mercury__eqvclass__ElementMap1_21);
            }
            {
              mercury__map__set_4_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__TypeCtorInfo_65_65, mercury__eqvclass__ElementB_6, ((MR_Box) (mercury__eqvclass__Id_19)), mercury__eqvclass__ElementMap1_21, &mercury__eqvclass__ElementMap_33);
            }
            mercury__eqvclass__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
            mercury__eqvclass__PartitionMap0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
            mercury__eqvclass__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
            mercury__eqvclass__Var_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__eqvclass__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__eqvclass__Var_23, 0) = mercury__eqvclass__ElementB_6;
              MR_hl_field(MR_mktag(1), mercury__eqvclass__Var_23, 1) = ((MR_Box) (mercury__eqvclass__Var_24));
            }
            {
              mercury__eqvclass__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__eqvclass__Var_22, 0) = mercury__eqvclass__ElementA_5;
              MR_hl_field(MR_mktag(1), mercury__eqvclass__Var_22, 1) = ((MR_Box) (mercury__eqvclass__Var_23));
            }
            {
              mercury__set__list_to_set_2_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__Var_22, &mercury__eqvclass__Partition_31);
            }
            mercury__eqvclass__TypeCtorInfo_66_66 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
            {
              mercury__eqvclass__TypeInfo_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_67_67, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_66_66));
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_67_67, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_55));
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_67_67, mercury__eqvclass__Id_19, ((MR_Box) (mercury__eqvclass__Partition_31)), (MR_Word) mercury__eqvclass__PartitionMap0_30, &mercury__eqvclass__conv7_PartitionMap_32);
            }
            mercury__eqvclass__PartitionMap_32 = (MR_Word) mercury__eqvclass__conv7_PartitionMap_32;
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              *mercury__eqvclass__EqvClass_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__NextId_20));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_32));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_33));
            }
          }
      }
  }
}

MR_Word MR_CALL 
mercury__eqvclass__ensure_equivalence_3_f_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_11,
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_8,
  MR_Box mercury__eqvclass__X_6,
  MR_Box mercury__eqvclass__Y_7)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_9;

    {
      mercury__eqvclass__ensure_equivalence_4_p_0(mercury__eqvclass__TypeInfo_for_T_11, mercury__eqvclass__X_6, mercury__eqvclass__Y_7, mercury__eqvclass__STATE_VARIABLE_EqvClass_0_8, &mercury__eqvclass__STATE_VARIABLE_EqvClass_9);
    }
    return mercury__eqvclass__STATE_VARIABLE_EqvClass_9;
  }
}

void MR_CALL 
mercury__eqvclass__new_element_3_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_16,
  MR_Box mercury__eqvclass__Element_4,
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_9,
  MR_Word * mercury__eqvclass__STATE_VARIABLE_EqvClass_10)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__ElementMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_9, (MR_Integer) 2)));
    MR_Word mercury__eqvclass__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_9, (MR_Integer) 0)));
    MR_Word mercury__eqvclass__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_9, (MR_Integer) 1)));
    MR_Word mercury__eqvclass__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Integer mercury__eqvclass___OldId_7;
    MR_Box mercury__eqvclass__conv0__OldId_7;

    {
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_16, mercury__eqvclass__TypeCtorInfo_17_17, mercury__eqvclass__ElementMap0_6, mercury__eqvclass__Element_4, &mercury__eqvclass__conv0__OldId_7);
    }
    if (mercury__eqvclass__succeeded)
      {
        mercury__eqvclass___OldId_7 = ((MR_Integer) mercury__eqvclass__conv0__OldId_7);
        mercury__eqvclass__succeeded = MR_TRUE;
      }
    if (mercury__eqvclass__succeeded)
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140eqvclass.new_element\'/3", (MR_String) "new element is already in equivalence class");
          return;
        }
      }
    else
      {
        MR_Integer mercury__eqvclass__Var_8;

        {
          mercury__eqvclass__add_element_4_p_0(mercury__eqvclass__TypeInfo_for_T_16, mercury__eqvclass__Element_4, &mercury__eqvclass__Var_8, mercury__eqvclass__STATE_VARIABLE_EqvClass_0_9, mercury__eqvclass__STATE_VARIABLE_EqvClass_10);
        }
      }
  }
}

MR_Word MR_CALL 
mercury__eqvclass__new_element_2_f_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_9,
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6,
  MR_Box mercury__eqvclass__X_5)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_7;

    {
      mercury__eqvclass__new_element_3_p_0(mercury__eqvclass__TypeInfo_for_T_9, mercury__eqvclass__X_5, mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6, &mercury__eqvclass__STATE_VARIABLE_EqvClass_7);
    }
    return mercury__eqvclass__STATE_VARIABLE_EqvClass_7;
  }
}

void MR_CALL 
mercury__eqvclass__ensure_element_partition_id_4_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_15,
  MR_Box mercury__eqvclass__Element_5,
  MR_Integer * mercury__eqvclass__Id_6,
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_10,
  MR_Word * mercury__eqvclass__STATE_VARIABLE_EqvClass_11)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__ElementMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_10, (MR_Integer) 2)));
    MR_Word mercury__eqvclass__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_10, (MR_Integer) 0)));
    MR_Word mercury__eqvclass__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_10, (MR_Integer) 1)));
    MR_Integer mercury__eqvclass__OldId_9;
    MR_Word mercury__eqvclass__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Box mercury__eqvclass__conv0_OldId_9;

    {
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_15, mercury__eqvclass__TypeCtorInfo_16_16, mercury__eqvclass__ElementMap_8, mercury__eqvclass__Element_5, &mercury__eqvclass__conv0_OldId_9);
    }
    if (mercury__eqvclass__succeeded)
      {
        mercury__eqvclass__OldId_9 = ((MR_Integer) mercury__eqvclass__conv0_OldId_9);
        mercury__eqvclass__succeeded = MR_TRUE;
      }
    if (mercury__eqvclass__succeeded)
      {
        *mercury__eqvclass__Id_6 = mercury__eqvclass__OldId_9;
        *mercury__eqvclass__STATE_VARIABLE_EqvClass_11 = mercury__eqvclass__STATE_VARIABLE_EqvClass_0_10;
      }
    else
      {
        mercury__eqvclass__add_element_4_p_0(mercury__eqvclass__TypeInfo_for_T_15, mercury__eqvclass__Element_5, mercury__eqvclass__Id_6, mercury__eqvclass__STATE_VARIABLE_EqvClass_0_10, mercury__eqvclass__STATE_VARIABLE_EqvClass_11);
      }
  }
}

void MR_CALL 
mercury__eqvclass__ensure_element_3_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_10,
  MR_Box mercury__eqvclass__Element_4,
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_7,
  MR_Word * mercury__eqvclass__STATE_VARIABLE_EqvClass_8)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__ElementMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_7, (MR_Integer) 2)));
    MR_Word mercury__eqvclass__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_7, (MR_Integer) 0)));
    MR_Word mercury__eqvclass__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_7, (MR_Integer) 1)));
    MR_Word mercury__eqvclass__TypeCtorInfo_16_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Integer mercury__eqvclass__OldId_17;
    MR_Box mercury__eqvclass__conv0_OldId_17;

    {
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_10, mercury__eqvclass__TypeCtorInfo_16_21, mercury__eqvclass__ElementMap_16, mercury__eqvclass__Element_4, &mercury__eqvclass__conv0_OldId_17);
    }
    if (mercury__eqvclass__succeeded)
      {
        mercury__eqvclass__OldId_17 = ((MR_Integer) mercury__eqvclass__conv0_OldId_17);
        mercury__eqvclass__succeeded = MR_TRUE;
      }
    if (mercury__eqvclass__succeeded)
      *mercury__eqvclass__STATE_VARIABLE_EqvClass_8 = mercury__eqvclass__STATE_VARIABLE_EqvClass_0_7;
    else
      {
        MR_Integer mercury__eqvclass__Var_25;

        {
          mercury__eqvclass__add_element_4_p_0(mercury__eqvclass__TypeInfo_for_T_10, mercury__eqvclass__Element_4, &mercury__eqvclass__Var_25, mercury__eqvclass__STATE_VARIABLE_EqvClass_0_7, mercury__eqvclass__STATE_VARIABLE_EqvClass_8);
        }
      }
  }
}

MR_Word MR_CALL 
mercury__eqvclass__ensure_element_2_f_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_9,
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6,
  MR_Box mercury__eqvclass__X_5)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_7;
    MR_Word mercury__eqvclass__ElementMap_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6, (MR_Integer) 2)));
    MR_Word mercury__eqvclass__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6, (MR_Integer) 0)));
    MR_Word mercury__eqvclass__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6, (MR_Integer) 1)));
    MR_Word mercury__eqvclass__TypeCtorInfo_16_26 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Integer mercury__eqvclass__OldId_22;
    MR_Box mercury__eqvclass__conv0_OldId_22;

    {
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_9, mercury__eqvclass__TypeCtorInfo_16_26, mercury__eqvclass__ElementMap_21, mercury__eqvclass__X_5, &mercury__eqvclass__conv0_OldId_22);
    }
    if (mercury__eqvclass__succeeded)
      {
        mercury__eqvclass__OldId_22 = ((MR_Integer) mercury__eqvclass__conv0_OldId_22);
        mercury__eqvclass__succeeded = MR_TRUE;
      }
    if (mercury__eqvclass__succeeded)
      mercury__eqvclass__STATE_VARIABLE_EqvClass_7 = mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6;
    else
      {
        MR_Integer mercury__eqvclass__Var_30;

        {
          mercury__eqvclass__add_element_4_p_0(mercury__eqvclass__TypeInfo_for_T_9, mercury__eqvclass__X_5, &mercury__eqvclass__Var_30, mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6, &mercury__eqvclass__STATE_VARIABLE_EqvClass_7);
        }
      }
    return mercury__eqvclass__STATE_VARIABLE_EqvClass_7;
  }
}

MR_bool MR_CALL 
mercury__eqvclass__partition_id_3_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_10,
  MR_Word mercury__eqvclass__EqvClass_4,
  MR_Box mercury__eqvclass__Element_5,
  MR_Integer * mercury__eqvclass__PartitionId_6)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__eqvclass__ElementMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_4, (MR_Integer) 2)));
    MR_Word mercury__eqvclass__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_4, (MR_Integer) 0)));
    MR_Word mercury__eqvclass__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_4, (MR_Integer) 1)));
    MR_Box mercury__eqvclass__conv0_PartitionId_6;

    {
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_10, mercury__eqvclass__TypeCtorInfo_11_11, mercury__eqvclass__ElementMap_7, mercury__eqvclass__Element_5, &mercury__eqvclass__conv0_PartitionId_6);
    }
    if (mercury__eqvclass__succeeded)
      {
        *mercury__eqvclass__PartitionId_6 = ((MR_Integer) mercury__eqvclass__conv0_PartitionId_6);
        mercury__eqvclass__succeeded = MR_TRUE;
      }
    return mercury__eqvclass__succeeded;
  }
}

MR_bool MR_CALL 
mercury__eqvclass__is_member_2_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_9,
  MR_Word mercury__eqvclass__EqvClass_3,
  MR_Box mercury__eqvclass__Element_4)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__eqvclass__ElementMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 2)));
    MR_Word mercury__eqvclass__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 0)));
    MR_Word mercury__eqvclass__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 1)));
    MR_Integer mercury__eqvclass__Var_6;
    MR_Box mercury__eqvclass__conv0_Var_6;

    {
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_9, mercury__eqvclass__TypeCtorInfo_10_10, mercury__eqvclass__ElementMap_5, mercury__eqvclass__Element_4, &mercury__eqvclass__conv0_Var_6);
    }
    if (mercury__eqvclass__succeeded)
      {
        mercury__eqvclass__Var_6 = ((MR_Integer) mercury__eqvclass__conv0_Var_6);
        mercury__eqvclass__succeeded = MR_TRUE;
      }
    return mercury__eqvclass__succeeded;
  }
}

void MR_CALL 
mercury__eqvclass__init_1_p_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_7,
  MR_Word * mercury__eqvclass__EqvClass_2)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__PartitionMap_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__eqvclass__ElementMap_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__eqvclass__Var_5 = (MR_Word) ((MR_Box) ((MR_Integer) 0));

    *mercury__eqvclass__EqvClass_2 = (MR_Word) &mercury__eqvclass_scalar_common_1[1];
  }
}

MR_Word MR_CALL 
mercury__eqvclass__init_0_f_0(
  MR_Word mercury__eqvclass__TypeInfo_for_T_3)
{
  {
    MR_bool mercury__eqvclass__succeeded;
    MR_Word mercury__eqvclass__EqvClass_2 = (MR_Word) &mercury__eqvclass_scalar_common_1[1];
    MR_Word mercury__eqvclass__PartitionMap_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__eqvclass__ElementMap_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__eqvclass__Var_7 = (MR_Word) ((MR_Box) ((MR_Integer) 0));

    return mercury__eqvclass__EqvClass_2;
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

/* :- end_module eqvclass. */
