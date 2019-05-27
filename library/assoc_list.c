/*
** Automatically generated from `assoc_list.m'
** by the Mercury compiler,
** version rotd-2019-05-27
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


// :- module assoc_list.
// :- implementation.

/*
INIT mercury__assoc_list__init
ENDINIT
*/

#include "assoc_list.mih"


#include "array.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
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
#include "uint64.mih"
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



struct mercury__assoc_list__foldl3_values_8_p_7_env_0_s {
  MR_Word mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_V_39;
  MR_Word mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_A_40;
  MR_Word mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_B_41;
  MR_Word mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_C_42;
  MR_Word mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_K_43;
  MR_Word mercury__assoc_list__foldl3_values_8_p_7_env_0__P_1;
  MR_Box * mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_4;
  MR_Box * mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_6;
  MR_Box * mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_8;
  MR_Cont mercury__assoc_list__foldl3_values_8_p_7_env_0__cont;
  void * mercury__assoc_list__foldl3_values_8_p_7_env_0__cont_env_ptr;
  MR_Word mercury__assoc_list__foldl3_values_8_p_7_env_0__KVs_21;
  MR_Box mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_33_33;
  MR_Box mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_34_34;
  MR_Box mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_35_35;
};

struct mercury__assoc_list__foldl3_values_8_p_6_env_0_s {
  MR_Word mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_V_39;
  MR_Word mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_A_40;
  MR_Word mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_B_41;
  MR_Word mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_C_42;
  MR_Word mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_K_43;
  MR_Word mercury__assoc_list__foldl3_values_8_p_6_env_0__P_1;
  MR_Box * mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_4;
  MR_Box * mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_6;
  MR_Box * mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_8;
  MR_Cont mercury__assoc_list__foldl3_values_8_p_6_env_0__cont;
  void * mercury__assoc_list__foldl3_values_8_p_6_env_0__cont_env_ptr;
  MR_Word mercury__assoc_list__foldl3_values_8_p_6_env_0__KVs_21;
  MR_Box mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_33_33;
  MR_Box mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_34_34;
  MR_Box mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_35_35;
};

struct mercury__assoc_list__foldl2_values_6_p_7_env_0_s {
  MR_Word mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_V_29;
  MR_Word mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_A_30;
  MR_Word mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_B_31;
  MR_Word mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_K_32;
  MR_Word mercury__assoc_list__foldl2_values_6_p_7_env_0__P_1;
  MR_Box * mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_4;
  MR_Box * mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_6;
  MR_Cont mercury__assoc_list__foldl2_values_6_p_7_env_0__cont;
  void * mercury__assoc_list__foldl2_values_6_p_7_env_0__cont_env_ptr;
  MR_Word mercury__assoc_list__foldl2_values_6_p_7_env_0__KVs_16;
  MR_Box mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_25_25;
  MR_Box mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_26_26;
};

struct mercury__assoc_list__foldl2_values_6_p_6_env_0_s {
  MR_Word mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_V_29;
  MR_Word mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_A_30;
  MR_Word mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_B_31;
  MR_Word mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_K_32;
  MR_Word mercury__assoc_list__foldl2_values_6_p_6_env_0__P_1;
  MR_Box * mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_4;
  MR_Box * mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_6;
  MR_Cont mercury__assoc_list__foldl2_values_6_p_6_env_0__cont;
  void * mercury__assoc_list__foldl2_values_6_p_6_env_0__cont_env_ptr;
  MR_Word mercury__assoc_list__foldl2_values_6_p_6_env_0__KVs_16;
  MR_Box mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_25_25;
  MR_Box mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_26_26;
};

struct mercury__assoc_list__foldl_values_4_p_7_env_0_s {
  MR_Word mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_V_19;
  MR_Word mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_A_20;
  MR_Word mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_K_21;
  MR_Word mercury__assoc_list__foldl_values_4_p_7_env_0__P_1;
  MR_Box * mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_4;
  MR_Cont mercury__assoc_list__foldl_values_4_p_7_env_0__cont;
  void * mercury__assoc_list__foldl_values_4_p_7_env_0__cont_env_ptr;
  MR_Word mercury__assoc_list__foldl_values_4_p_7_env_0__KVs_11;
  MR_Box mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_17_17;
};

struct mercury__assoc_list__foldl_values_4_p_6_env_0_s {
  MR_Word mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_V_19;
  MR_Word mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_A_20;
  MR_Word mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_K_21;
  MR_Word mercury__assoc_list__foldl_values_4_p_6_env_0__P_1;
  MR_Box * mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_4;
  MR_Cont mercury__assoc_list__foldl_values_4_p_6_env_0__cont;
  void * mercury__assoc_list__foldl_values_4_p_6_env_0__cont_env_ptr;
  MR_Word mercury__assoc_list__foldl_values_4_p_6_env_0__KVs_11;
  MR_Box mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_17_17;
};

struct mercury__assoc_list__foldl_keys_4_p_7_env_0_s {
  MR_Word mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_K_19;
  MR_Word mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_A_20;
  MR_Word mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_V_21;
  MR_Word mercury__assoc_list__foldl_keys_4_p_7_env_0__P_1;
  MR_Box * mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_4;
  MR_Cont mercury__assoc_list__foldl_keys_4_p_7_env_0__cont;
  void * mercury__assoc_list__foldl_keys_4_p_7_env_0__cont_env_ptr;
  MR_Word mercury__assoc_list__foldl_keys_4_p_7_env_0__KVs_11;
  MR_Box mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_17_17;
};

struct mercury__assoc_list__foldl_keys_4_p_6_env_0_s {
  MR_Word mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_K_19;
  MR_Word mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_A_20;
  MR_Word mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_V_21;
  MR_Word mercury__assoc_list__foldl_keys_4_p_6_env_0__P_1;
  MR_Box * mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_4;
  MR_Cont mercury__assoc_list__foldl_keys_4_p_6_env_0__cont;
  void * mercury__assoc_list__foldl_keys_4_p_6_env_0__cont_env_ptr;
  MR_Word mercury__assoc_list__foldl_keys_4_p_6_env_0__KVs_11;
  MR_Box mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_17_17;
};


static const MR_FA_PseudoTypeInfo_Struct2 mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__assoc_list__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__assoc_list__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_1;

static MR_Integer MR_CALL 
mercury__assoc_list__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_7_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_6_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_7_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_6_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__assoc_list__foldl_values_4_p_7_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__assoc_list__foldl_values_4_p_6_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_7_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_6_1(
  void * env_ptr_arg);

static MR_bool MR_CALL 
mercury__assoc_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__assoc_list____Compare____assoc_list_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__assoc_list____Compare____assoc_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__assoc_list_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__assoc_list_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__assoc_list_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__assoc_list_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__assoc_list_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__assoc_list_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__assoc_list_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__assoc_list_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__assoc_list_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
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
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"



static const MR_FA_PseudoTypeInfo_Struct2 mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_2 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__assoc_list__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_2)
  }
};

const MR_TypeCtorInfo_Struct mercury__assoc_list__assoc_list__type_ctor_info_assoc_list_2 = {
  (MR_Integer) 2,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__assoc_list____Unify____assoc_list_2_0_10001)),
  ((MR_Box) (mercury__assoc_list____Compare____assoc_list_2_0_10001)),
  (MR_String) "assoc_list",
  (MR_String) "assoc_list",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__assoc_list__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_2) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__assoc_list__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_1)
  }
};

const MR_TypeCtorInfo_Struct mercury__assoc_list__assoc_list__type_ctor_info_assoc_list_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__assoc_list____Unify____assoc_list_1_0_10001)),
  ((MR_Box) (mercury__assoc_list____Compare____assoc_list_1_0_10001)),
  (MR_String) "assoc_list",
  (MR_String) "assoc_list",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__assoc_list__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_Integer MR_CALL 
mercury__assoc_list__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__assoc_list____Compare____assoc_list_2_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_9_9;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_K_6));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 2) = ((MR_Box) (TypeInfo_for_V_7));
    }
    mercury__list____Compare____list_1_0(TypeInfo_9_9, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_2_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_8_8;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_K_5));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 2) = ((MR_Box) (TypeInfo_for_V_6));
    }
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_8_8, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
mercury__assoc_list____Compare____assoc_list_1_0(
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
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 2) = ((MR_Box) (TypeInfo_for_T_6));
    }
    mercury__list____Compare____list_1_0(TypeInfo_8_8, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_1_0(
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
      TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 2) = ((MR_Box) (TypeInfo_for_T_5));
    }
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_7_7, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

static void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_7_1(
  void * env_ptr_arg)
{
  {
    struct mercury__assoc_list__foldl3_values_8_p_7_env_0_s * env_ptr = (struct mercury__assoc_list__foldl3_values_8_p_7_env_0_s *) (env_ptr_arg);

    mercury__assoc_list__foldl3_values_8_p_7((env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_V_39, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_A_40, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_B_41, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_C_42, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_K_43, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__P_1, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__KVs_21, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_33_33, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_4, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_34_34, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_6, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_35_35, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_8, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__cont, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_7(
  MR_Word TypeInfo_for_V_39,
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word TypeInfo_for_K_43,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6,
  MR_Box STATE_VARIABLE_Acc3_0_7,
  MR_Box * STATE_VARIABLE_Acc3_8,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__assoc_list__foldl3_values_8_p_7_env_0_s env;

    (env).mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_V_39 = TypeInfo_for_V_39;
    (env).mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_A_40 = TypeInfo_for_A_40;
    (env).mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_B_41 = TypeInfo_for_B_41;
    (env).mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_C_42 = TypeInfo_for_C_42;
    (env).mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_K_43 = TypeInfo_for_K_43;
    (env).mercury__assoc_list__foldl3_values_8_p_7_env_0__P_1 = P_1;
    (env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_4;
    (env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_6;
    (env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_8 = STATE_VARIABLE_Acc3_8;
    (env).mercury__assoc_list__foldl3_values_8_p_7_env_0__cont = cont;
    (env).mercury__assoc_list__foldl3_values_8_p_7_env_0__cont_env_ptr = cont_env_ptr;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *((env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_8) = STATE_VARIABLE_Acc3_0_7;
      *((env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_6) = STATE_VARIABLE_Acc2_0_5;
      *((env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_4) = STATE_VARIABLE_Acc1_0_3;
      ((env).mercury__assoc_list__foldl3_values_8_p_7_env_0__cont)((env).mercury__assoc_list__foldl3_values_8_p_7_env_0__cont_env_ptr);
    }
    else
    {
      MR_Word KV_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box V_26;
      MR_Box _K_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

      (env).mercury__assoc_list__foldl3_values_8_p_7_env_0__KVs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      _K_25 = (MR_hl_field(MR_mktag(0), KV_20, (MR_Integer) 0));
      V_26 = (MR_hl_field(MR_mktag(0), KV_20, (MR_Integer) 1));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__assoc_list__foldl3_values_8_p_7_env_0__P_1, (MR_Integer) 1))));
      func_0(((MR_Box) ((env).mercury__assoc_list__foldl3_values_8_p_7_env_0__P_1)), V_26, STATE_VARIABLE_Acc1_0_3, &(env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_33_33, STATE_VARIABLE_Acc2_0_5, &(env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_34_34, STATE_VARIABLE_Acc3_0_7, &(env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_35_35, mercury__assoc_list__foldl3_values_8_p_7_1, &env);
    }
  }
}

static void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_6_1(
  void * env_ptr_arg)
{
  {
    struct mercury__assoc_list__foldl3_values_8_p_6_env_0_s * env_ptr = (struct mercury__assoc_list__foldl3_values_8_p_6_env_0_s *) (env_ptr_arg);

    mercury__assoc_list__foldl3_values_8_p_6((env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_V_39, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_A_40, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_B_41, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_C_42, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_K_43, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__P_1, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__KVs_21, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_33_33, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_4, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_34_34, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_6, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_35_35, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_8, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__cont, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_6(
  MR_Word TypeInfo_for_V_39,
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word TypeInfo_for_K_43,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6,
  MR_Box STATE_VARIABLE_Acc3_0_7,
  MR_Box * STATE_VARIABLE_Acc3_8,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__assoc_list__foldl3_values_8_p_6_env_0_s env;

    (env).mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_V_39 = TypeInfo_for_V_39;
    (env).mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_A_40 = TypeInfo_for_A_40;
    (env).mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_B_41 = TypeInfo_for_B_41;
    (env).mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_C_42 = TypeInfo_for_C_42;
    (env).mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_K_43 = TypeInfo_for_K_43;
    (env).mercury__assoc_list__foldl3_values_8_p_6_env_0__P_1 = P_1;
    (env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_4;
    (env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_6;
    (env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_8 = STATE_VARIABLE_Acc3_8;
    (env).mercury__assoc_list__foldl3_values_8_p_6_env_0__cont = cont;
    (env).mercury__assoc_list__foldl3_values_8_p_6_env_0__cont_env_ptr = cont_env_ptr;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *((env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_8) = STATE_VARIABLE_Acc3_0_7;
      *((env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_6) = STATE_VARIABLE_Acc2_0_5;
      *((env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_4) = STATE_VARIABLE_Acc1_0_3;
      ((env).mercury__assoc_list__foldl3_values_8_p_6_env_0__cont)((env).mercury__assoc_list__foldl3_values_8_p_6_env_0__cont_env_ptr);
    }
    else
    {
      MR_Word KV_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box V_26;
      MR_Box _K_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

      (env).mercury__assoc_list__foldl3_values_8_p_6_env_0__KVs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      _K_25 = (MR_hl_field(MR_mktag(0), KV_20, (MR_Integer) 0));
      V_26 = (MR_hl_field(MR_mktag(0), KV_20, (MR_Integer) 1));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__assoc_list__foldl3_values_8_p_6_env_0__P_1, (MR_Integer) 1))));
      func_0(((MR_Box) ((env).mercury__assoc_list__foldl3_values_8_p_6_env_0__P_1)), V_26, STATE_VARIABLE_Acc1_0_3, &(env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_33_33, STATE_VARIABLE_Acc2_0_5, &(env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_34_34, STATE_VARIABLE_Acc3_0_7, &(env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_35_35, mercury__assoc_list__foldl3_values_8_p_6_1, &env);
    }
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl3_values_8_p_5(
  MR_Word TypeInfo_for_V_39,
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word TypeInfo_for_K_43,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6,
  MR_Box STATE_VARIABLE_Acc3_0_7,
  MR_Box * STATE_VARIABLE_Acc3_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc3_8 = STATE_VARIABLE_Acc3_0_7;
      *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
      *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word KV_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_26 = (MR_hl_field(MR_mktag(0), KV_20, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_Acc1_33_33;
      MR_Box STATE_VARIABLE_Acc2_34_34;
      MR_Box STATE_VARIABLE_Acc3_35_35;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_7;

      succeeded = func_0(((MR_Box) (P_1)), V_26, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_33_33, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_34_34, STATE_VARIABLE_Acc3_0_7, &STATE_VARIABLE_Acc3_35_35);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_21;
        next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_33_33;
        next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_34_34;
        next_value_of_STATE_VARIABLE_Acc3_0_7 = STATE_VARIABLE_Acc3_35_35;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
        STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
        STATE_VARIABLE_Acc3_0_7 = next_value_of_STATE_VARIABLE_Acc3_0_7;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl3_values_8_p_4(
  MR_Word TypeInfo_for_V_39,
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word TypeInfo_for_K_43,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6,
  MR_Box STATE_VARIABLE_Acc3_0_7,
  MR_Box * STATE_VARIABLE_Acc3_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc3_8 = STATE_VARIABLE_Acc3_0_7;
      *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
      *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word KV_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_26 = (MR_hl_field(MR_mktag(0), KV_20, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_Acc1_33_33;
      MR_Box STATE_VARIABLE_Acc2_34_34;
      MR_Box STATE_VARIABLE_Acc3_35_35;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_7;

      succeeded = func_0(((MR_Box) (P_1)), V_26, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_33_33, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_34_34, STATE_VARIABLE_Acc3_0_7, &STATE_VARIABLE_Acc3_35_35);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_21;
        next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_33_33;
        next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_34_34;
        next_value_of_STATE_VARIABLE_Acc3_0_7 = STATE_VARIABLE_Acc3_35_35;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
        STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
        STATE_VARIABLE_Acc3_0_7 = next_value_of_STATE_VARIABLE_Acc3_0_7;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl3_values_8_p_3(
  MR_Word TypeInfo_for_V_39,
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word TypeInfo_for_K_43,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6,
  MR_Box STATE_VARIABLE_Acc3_0_7,
  MR_Box * STATE_VARIABLE_Acc3_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc3_8 = STATE_VARIABLE_Acc3_0_7;
      *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
      *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word KV_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_26 = (MR_hl_field(MR_mktag(0), KV_20, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_Acc1_33_33;
      MR_Box STATE_VARIABLE_Acc2_34_34;
      MR_Box STATE_VARIABLE_Acc3_35_35;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_7;

      succeeded = func_0(((MR_Box) (P_1)), V_26, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_33_33, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_34_34, STATE_VARIABLE_Acc3_0_7, &STATE_VARIABLE_Acc3_35_35);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_21;
        next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_33_33;
        next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_34_34;
        next_value_of_STATE_VARIABLE_Acc3_0_7 = STATE_VARIABLE_Acc3_35_35;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
        STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
        STATE_VARIABLE_Acc3_0_7 = next_value_of_STATE_VARIABLE_Acc3_0_7;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_2(
  MR_Word TypeInfo_for_V_39,
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word TypeInfo_for_K_43,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6,
  MR_Box STATE_VARIABLE_Acc3_0_7,
  MR_Box * STATE_VARIABLE_Acc3_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc3_8 = STATE_VARIABLE_Acc3_0_7;
      *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
      *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
    }
    else
    {
      MR_Word KV_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_26 = (MR_hl_field(MR_mktag(0), KV_20, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_Acc1_33_33;
      MR_Box STATE_VARIABLE_Acc2_34_34;
      MR_Box STATE_VARIABLE_Acc3_35_35;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_7;

      func_0(((MR_Box) (P_1)), V_26, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_33_33, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_34_34, STATE_VARIABLE_Acc3_0_7, &STATE_VARIABLE_Acc3_35_35);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_21;
      next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_33_33;
      next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_34_34;
      next_value_of_STATE_VARIABLE_Acc3_0_7 = STATE_VARIABLE_Acc3_35_35;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
      STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
      STATE_VARIABLE_Acc3_0_7 = next_value_of_STATE_VARIABLE_Acc3_0_7;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_1(
  MR_Word TypeInfo_for_V_39,
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word TypeInfo_for_K_43,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6,
  MR_Box STATE_VARIABLE_Acc3_0_7,
  MR_Box * STATE_VARIABLE_Acc3_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc3_8 = STATE_VARIABLE_Acc3_0_7;
      *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
      *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
    }
    else
    {
      MR_Word KV_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_26 = (MR_hl_field(MR_mktag(0), KV_20, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_Acc1_33_33;
      MR_Box STATE_VARIABLE_Acc2_34_34;
      MR_Box STATE_VARIABLE_Acc3_35_35;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_7;

      func_0(((MR_Box) (P_1)), V_26, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_33_33, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_34_34, STATE_VARIABLE_Acc3_0_7, &STATE_VARIABLE_Acc3_35_35);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_21;
      next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_33_33;
      next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_34_34;
      next_value_of_STATE_VARIABLE_Acc3_0_7 = STATE_VARIABLE_Acc3_35_35;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
      STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
      STATE_VARIABLE_Acc3_0_7 = next_value_of_STATE_VARIABLE_Acc3_0_7;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_0(
  MR_Word TypeInfo_for_V_39,
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word TypeInfo_for_K_43,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6,
  MR_Box STATE_VARIABLE_Acc3_0_7,
  MR_Box * STATE_VARIABLE_Acc3_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc3_8 = STATE_VARIABLE_Acc3_0_7;
      *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
      *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
    }
    else
    {
      MR_Word KV_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_26 = (MR_hl_field(MR_mktag(0), KV_20, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_Acc1_33_33;
      MR_Box STATE_VARIABLE_Acc2_34_34;
      MR_Box STATE_VARIABLE_Acc3_35_35;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_7;

      func_0(((MR_Box) (P_1)), V_26, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_33_33, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_34_34, STATE_VARIABLE_Acc3_0_7, &STATE_VARIABLE_Acc3_35_35);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_21;
      next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_33_33;
      next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_34_34;
      next_value_of_STATE_VARIABLE_Acc3_0_7 = STATE_VARIABLE_Acc3_35_35;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
      STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
      STATE_VARIABLE_Acc3_0_7 = next_value_of_STATE_VARIABLE_Acc3_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_7_1(
  void * env_ptr_arg)
{
  {
    struct mercury__assoc_list__foldl2_values_6_p_7_env_0_s * env_ptr = (struct mercury__assoc_list__foldl2_values_6_p_7_env_0_s *) (env_ptr_arg);

    mercury__assoc_list__foldl2_values_6_p_7((env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_V_29, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_A_30, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_B_31, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_K_32, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__P_1, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__KVs_16, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_25_25, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_4, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_26_26, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_6, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__cont, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_7(
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_K_32,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__assoc_list__foldl2_values_6_p_7_env_0_s env;

    (env).mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_V_29 = TypeInfo_for_V_29;
    (env).mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_A_30 = TypeInfo_for_A_30;
    (env).mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_B_31 = TypeInfo_for_B_31;
    (env).mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_K_32 = TypeInfo_for_K_32;
    (env).mercury__assoc_list__foldl2_values_6_p_7_env_0__P_1 = P_1;
    (env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_4;
    (env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_6;
    (env).mercury__assoc_list__foldl2_values_6_p_7_env_0__cont = cont;
    (env).mercury__assoc_list__foldl2_values_6_p_7_env_0__cont_env_ptr = cont_env_ptr;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *((env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_6) = STATE_VARIABLE_Acc2_0_5;
      *((env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_4) = STATE_VARIABLE_Acc1_0_3;
      ((env).mercury__assoc_list__foldl2_values_6_p_7_env_0__cont)((env).mercury__assoc_list__foldl2_values_6_p_7_env_0__cont_env_ptr);
    }
    else
    {
      MR_Word KV_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box V_20;
      MR_Box _K_19;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

      (env).mercury__assoc_list__foldl2_values_6_p_7_env_0__KVs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      _K_19 = (MR_hl_field(MR_mktag(0), KV_15, (MR_Integer) 0));
      V_20 = (MR_hl_field(MR_mktag(0), KV_15, (MR_Integer) 1));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__assoc_list__foldl2_values_6_p_7_env_0__P_1, (MR_Integer) 1))));
      func_0(((MR_Box) ((env).mercury__assoc_list__foldl2_values_6_p_7_env_0__P_1)), V_20, STATE_VARIABLE_Acc1_0_3, &(env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_5, &(env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_26_26, mercury__assoc_list__foldl2_values_6_p_7_1, &env);
    }
  }
}

static void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_6_1(
  void * env_ptr_arg)
{
  {
    struct mercury__assoc_list__foldl2_values_6_p_6_env_0_s * env_ptr = (struct mercury__assoc_list__foldl2_values_6_p_6_env_0_s *) (env_ptr_arg);

    mercury__assoc_list__foldl2_values_6_p_6((env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_V_29, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_A_30, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_B_31, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_K_32, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__P_1, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__KVs_16, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_25_25, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_4, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_26_26, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_6, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__cont, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_6(
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_K_32,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__assoc_list__foldl2_values_6_p_6_env_0_s env;

    (env).mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_V_29 = TypeInfo_for_V_29;
    (env).mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_A_30 = TypeInfo_for_A_30;
    (env).mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_B_31 = TypeInfo_for_B_31;
    (env).mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_K_32 = TypeInfo_for_K_32;
    (env).mercury__assoc_list__foldl2_values_6_p_6_env_0__P_1 = P_1;
    (env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_4;
    (env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_6;
    (env).mercury__assoc_list__foldl2_values_6_p_6_env_0__cont = cont;
    (env).mercury__assoc_list__foldl2_values_6_p_6_env_0__cont_env_ptr = cont_env_ptr;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *((env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_6) = STATE_VARIABLE_Acc2_0_5;
      *((env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_4) = STATE_VARIABLE_Acc1_0_3;
      ((env).mercury__assoc_list__foldl2_values_6_p_6_env_0__cont)((env).mercury__assoc_list__foldl2_values_6_p_6_env_0__cont_env_ptr);
    }
    else
    {
      MR_Word KV_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box V_20;
      MR_Box _K_19;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

      (env).mercury__assoc_list__foldl2_values_6_p_6_env_0__KVs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      _K_19 = (MR_hl_field(MR_mktag(0), KV_15, (MR_Integer) 0));
      V_20 = (MR_hl_field(MR_mktag(0), KV_15, (MR_Integer) 1));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__assoc_list__foldl2_values_6_p_6_env_0__P_1, (MR_Integer) 1))));
      func_0(((MR_Box) ((env).mercury__assoc_list__foldl2_values_6_p_6_env_0__P_1)), V_20, STATE_VARIABLE_Acc1_0_3, &(env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_5, &(env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_26_26, mercury__assoc_list__foldl2_values_6_p_6_1, &env);
    }
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl2_values_6_p_5(
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_K_32,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
      *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word KV_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_20 = (MR_hl_field(MR_mktag(0), KV_15, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_Acc1_25_25;
      MR_Box STATE_VARIABLE_Acc2_26_26;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

      succeeded = func_0(((MR_Box) (P_1)), V_20, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_26_26);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_16;
        next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_25_25;
        next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_26_26;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
        STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl2_values_6_p_4(
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_K_32,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
      *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word KV_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_20 = (MR_hl_field(MR_mktag(0), KV_15, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_Acc1_25_25;
      MR_Box STATE_VARIABLE_Acc2_26_26;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

      succeeded = func_0(((MR_Box) (P_1)), V_20, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_26_26);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_16;
        next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_25_25;
        next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_26_26;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
        STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl2_values_6_p_3(
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_K_32,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
      *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word KV_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_20 = (MR_hl_field(MR_mktag(0), KV_15, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_Acc1_25_25;
      MR_Box STATE_VARIABLE_Acc2_26_26;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

      succeeded = func_0(((MR_Box) (P_1)), V_20, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_26_26);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_16;
        next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_25_25;
        next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_26_26;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
        STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_2(
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_K_32,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
      *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
    }
    else
    {
      MR_Word KV_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_20 = (MR_hl_field(MR_mktag(0), KV_15, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_Acc1_25_25;
      MR_Box STATE_VARIABLE_Acc2_26_26;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

      func_0(((MR_Box) (P_1)), V_20, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_26_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_16;
      next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_25_25;
      next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_26_26;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
      STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_1(
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_K_32,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
      *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
    }
    else
    {
      MR_Word KV_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_20 = (MR_hl_field(MR_mktag(0), KV_15, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_Acc1_25_25;
      MR_Box STATE_VARIABLE_Acc2_26_26;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

      func_0(((MR_Box) (P_1)), V_20, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_26_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_16;
      next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_25_25;
      next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_26_26;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
      STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_0(
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_K_32,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
      *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
    }
    else
    {
      MR_Word KV_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_20 = (MR_hl_field(MR_mktag(0), KV_15, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_Acc1_25_25;
      MR_Box STATE_VARIABLE_Acc2_26_26;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

      func_0(((MR_Box) (P_1)), V_20, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_26_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_16;
      next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_25_25;
      next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_26_26;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
      STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__assoc_list__foldl_values_4_p_7_1(
  void * env_ptr_arg)
{
  {
    struct mercury__assoc_list__foldl_values_4_p_7_env_0_s * env_ptr = (struct mercury__assoc_list__foldl_values_4_p_7_env_0_s *) (env_ptr_arg);

    mercury__assoc_list__foldl_values_4_p_7((env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_V_19, (env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_A_20, (env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_K_21, (env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__P_1, (env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__KVs_11, (env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_17_17, (env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_4, (env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__cont, (env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__assoc_list__foldl_values_4_p_7(
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_K_21,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__assoc_list__foldl_values_4_p_7_env_0_s env;

    (env).mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_V_19 = TypeInfo_for_V_19;
    (env).mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_A_20 = TypeInfo_for_A_20;
    (env).mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_K_21 = TypeInfo_for_K_21;
    (env).mercury__assoc_list__foldl_values_4_p_7_env_0__P_1 = P_1;
    (env).mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_4;
    (env).mercury__assoc_list__foldl_values_4_p_7_env_0__cont = cont;
    (env).mercury__assoc_list__foldl_values_4_p_7_env_0__cont_env_ptr = cont_env_ptr;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *((env).mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_4) = STATE_VARIABLE_Acc_0_3;
      ((env).mercury__assoc_list__foldl_values_4_p_7_env_0__cont)((env).mercury__assoc_list__foldl_values_4_p_7_env_0__cont_env_ptr);
    }
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box V_14;
      MR_Box _K_13;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

      (env).mercury__assoc_list__foldl_values_4_p_7_env_0__KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      _K_13 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 0));
      V_14 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 1));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__assoc_list__foldl_values_4_p_7_env_0__P_1, (MR_Integer) 1))));
      func_0(((MR_Box) ((env).mercury__assoc_list__foldl_values_4_p_7_env_0__P_1)), V_14, STATE_VARIABLE_Acc_0_3, &(env).mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_17_17, mercury__assoc_list__foldl_values_4_p_7_1, &env);
    }
  }
}

static void MR_CALL 
mercury__assoc_list__foldl_values_4_p_6_1(
  void * env_ptr_arg)
{
  {
    struct mercury__assoc_list__foldl_values_4_p_6_env_0_s * env_ptr = (struct mercury__assoc_list__foldl_values_4_p_6_env_0_s *) (env_ptr_arg);

    mercury__assoc_list__foldl_values_4_p_6((env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_V_19, (env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_A_20, (env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_K_21, (env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__P_1, (env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__KVs_11, (env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_17_17, (env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_4, (env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__cont, (env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__assoc_list__foldl_values_4_p_6(
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_K_21,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__assoc_list__foldl_values_4_p_6_env_0_s env;

    (env).mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_V_19 = TypeInfo_for_V_19;
    (env).mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_A_20 = TypeInfo_for_A_20;
    (env).mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_K_21 = TypeInfo_for_K_21;
    (env).mercury__assoc_list__foldl_values_4_p_6_env_0__P_1 = P_1;
    (env).mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_4;
    (env).mercury__assoc_list__foldl_values_4_p_6_env_0__cont = cont;
    (env).mercury__assoc_list__foldl_values_4_p_6_env_0__cont_env_ptr = cont_env_ptr;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *((env).mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_4) = STATE_VARIABLE_Acc_0_3;
      ((env).mercury__assoc_list__foldl_values_4_p_6_env_0__cont)((env).mercury__assoc_list__foldl_values_4_p_6_env_0__cont_env_ptr);
    }
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box V_14;
      MR_Box _K_13;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

      (env).mercury__assoc_list__foldl_values_4_p_6_env_0__KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      _K_13 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 0));
      V_14 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 1));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__assoc_list__foldl_values_4_p_6_env_0__P_1, (MR_Integer) 1))));
      func_0(((MR_Box) ((env).mercury__assoc_list__foldl_values_4_p_6_env_0__P_1)), V_14, STATE_VARIABLE_Acc_0_3, &(env).mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_17_17, mercury__assoc_list__foldl_values_4_p_6_1, &env);
    }
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl_values_4_p_5(
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_K_21,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_14 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_Acc_17_17;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      succeeded = func_0(((MR_Box) (P_1)), V_14, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_17_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_11;
        next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_17_17;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl_values_4_p_4(
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_K_21,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_14 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_Acc_17_17;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      succeeded = func_0(((MR_Box) (P_1)), V_14, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_17_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_11;
        next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_17_17;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl_values_4_p_3(
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_K_21,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_14 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_Acc_17_17;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      succeeded = func_0(((MR_Box) (P_1)), V_14, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_17_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_11;
        next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_17_17;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl_values_4_p_2(
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_K_21,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_14 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_Acc_17_17;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      func_0(((MR_Box) (P_1)), V_14, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_11;
      next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_17_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl_values_4_p_1(
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_K_21,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_14 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_Acc_17_17;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      func_0(((MR_Box) (P_1)), V_14, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_11;
      next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_17_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl_values_4_p_0(
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_K_21,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_14 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_Acc_17_17;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      func_0(((MR_Box) (P_1)), V_14, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_11;
      next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_17_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_7_1(
  void * env_ptr_arg)
{
  {
    struct mercury__assoc_list__foldl_keys_4_p_7_env_0_s * env_ptr = (struct mercury__assoc_list__foldl_keys_4_p_7_env_0_s *) (env_ptr_arg);

    mercury__assoc_list__foldl_keys_4_p_7((env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_K_19, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_A_20, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_V_21, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__P_1, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__KVs_11, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_17_17, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_4, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__cont, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_7(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__assoc_list__foldl_keys_4_p_7_env_0_s env;

    (env).mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_K_19 = TypeInfo_for_K_19;
    (env).mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_A_20 = TypeInfo_for_A_20;
    (env).mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_V_21 = TypeInfo_for_V_21;
    (env).mercury__assoc_list__foldl_keys_4_p_7_env_0__P_1 = P_1;
    (env).mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_4;
    (env).mercury__assoc_list__foldl_keys_4_p_7_env_0__cont = cont;
    (env).mercury__assoc_list__foldl_keys_4_p_7_env_0__cont_env_ptr = cont_env_ptr;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *((env).mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_4) = STATE_VARIABLE_Acc_0_3;
      ((env).mercury__assoc_list__foldl_keys_4_p_7_env_0__cont)((env).mercury__assoc_list__foldl_keys_4_p_7_env_0__cont_env_ptr);
    }
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box K_13;
      MR_Box _V_14;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

      (env).mercury__assoc_list__foldl_keys_4_p_7_env_0__KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      K_13 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 0));
      _V_14 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 1));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__assoc_list__foldl_keys_4_p_7_env_0__P_1, (MR_Integer) 1))));
      func_0(((MR_Box) ((env).mercury__assoc_list__foldl_keys_4_p_7_env_0__P_1)), K_13, STATE_VARIABLE_Acc_0_3, &(env).mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_17_17, mercury__assoc_list__foldl_keys_4_p_7_1, &env);
    }
  }
}

static void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_6_1(
  void * env_ptr_arg)
{
  {
    struct mercury__assoc_list__foldl_keys_4_p_6_env_0_s * env_ptr = (struct mercury__assoc_list__foldl_keys_4_p_6_env_0_s *) (env_ptr_arg);

    mercury__assoc_list__foldl_keys_4_p_6((env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_K_19, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_A_20, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_V_21, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__P_1, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__KVs_11, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_17_17, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_4, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__cont, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_6(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__assoc_list__foldl_keys_4_p_6_env_0_s env;

    (env).mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_K_19 = TypeInfo_for_K_19;
    (env).mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_A_20 = TypeInfo_for_A_20;
    (env).mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_V_21 = TypeInfo_for_V_21;
    (env).mercury__assoc_list__foldl_keys_4_p_6_env_0__P_1 = P_1;
    (env).mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_4;
    (env).mercury__assoc_list__foldl_keys_4_p_6_env_0__cont = cont;
    (env).mercury__assoc_list__foldl_keys_4_p_6_env_0__cont_env_ptr = cont_env_ptr;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *((env).mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_4) = STATE_VARIABLE_Acc_0_3;
      ((env).mercury__assoc_list__foldl_keys_4_p_6_env_0__cont)((env).mercury__assoc_list__foldl_keys_4_p_6_env_0__cont_env_ptr);
    }
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box K_13;
      MR_Box _V_14;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

      (env).mercury__assoc_list__foldl_keys_4_p_6_env_0__KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      K_13 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 0));
      _V_14 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 1));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__assoc_list__foldl_keys_4_p_6_env_0__P_1, (MR_Integer) 1))));
      func_0(((MR_Box) ((env).mercury__assoc_list__foldl_keys_4_p_6_env_0__P_1)), K_13, STATE_VARIABLE_Acc_0_3, &(env).mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_17_17, mercury__assoc_list__foldl_keys_4_p_6_1, &env);
    }
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl_keys_4_p_5(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box K_13 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 0));
      MR_Box STATE_VARIABLE_Acc_17_17;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      succeeded = func_0(((MR_Box) (P_1)), K_13, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_17_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_11;
        next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_17_17;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl_keys_4_p_4(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box K_13 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 0));
      MR_Box STATE_VARIABLE_Acc_17_17;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      succeeded = func_0(((MR_Box) (P_1)), K_13, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_17_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_11;
        next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_17_17;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl_keys_4_p_3(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box K_13 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 0));
      MR_Box STATE_VARIABLE_Acc_17_17;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      succeeded = func_0(((MR_Box) (P_1)), K_13, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_17_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_11;
        next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_17_17;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_2(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box K_13 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 0));
      MR_Box STATE_VARIABLE_Acc_17_17;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      func_0(((MR_Box) (P_1)), K_13, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_11;
      next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_17_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_1(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box K_13 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 0));
      MR_Box STATE_VARIABLE_Acc_17_17;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      func_0(((MR_Box) (P_1)), K_13, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_11;
      next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_17_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_0(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box K_13 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 0));
      MR_Box STATE_VARIABLE_Acc_17_17;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      func_0(((MR_Box) (P_1)), K_13, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_11;
      next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_17_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__assoc_list__merge_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word As_4,
  MR_Word Bs_5)
{
  {
    MR_Word ABs_6;

    mercury__assoc_list__merge_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, As_4, Bs_5, &ABs_6);
    return ABs_6;
  }
}

void MR_CALL 
mercury__assoc_list__merge_3_p_0(
  MR_Word TypeInfo_for_K_22,
  MR_Word TypeInfo_for_V_23,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      else
        *HeadVar__3_3 = HeadVar__2_2;
    else
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__3_3 = HeadVar__1_1;
      else
      {
        MR_Word B_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Bs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Box AK_13 = (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0));
        MR_Box BK_15 = (MR_hl_field(MR_mktag(0), B_10, (MR_Integer) 0));
        MR_Word Var_24;

        mercury__builtin__compare_3_p_0(TypeInfo_for_K_22, &Var_24, AK_13, BK_15);
        succeeded = ((MR_Integer) 2 == Var_24);
        if (succeeded)
        {
          MR_Word Cs0_17;

          mercury__assoc_list__merge_3_p_0(TypeInfo_for_K_22, TypeInfo_for_V_23, HeadVar__1_1, Bs_11, &Cs0_17);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (B_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cs0_17));
          }
        }
        else
        {
          MR_Word Cs0_21;

          mercury__assoc_list__merge_3_p_0(TypeInfo_for_K_22, TypeInfo_for_V_23, Var_25, HeadVar__2_2, &Cs0_21);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_26));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cs0_21));
          }
        }
      }
    }
  }
}

void MR_CALL 
mercury__assoc_list__filter_4_p_0(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Box HK_7;
      MR_Word T_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box);

      HK_7 = (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_1)), HK_7);
      if (succeeded)
      {
        MR_Word TrueTail_12;

        mercury__assoc_list__filter_4_p_0(TypeInfo_for_K_17, TypeInfo_for_V_18, P_1, T_9, &TrueTail_12, HeadVar__4_4);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TrueTail_12));
        }
      }
      else
      {
        MR_Word FalseTail_13;

        mercury__assoc_list__filter_4_p_0(TypeInfo_for_K_17, TypeInfo_for_V_18, P_1, T_9, HeadVar__3_3, &FalseTail_13);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FalseTail_13));
        }
      }
    }
  }
}

MR_Word MR_CALL 
mercury__assoc_list__negated_filter_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word P_4,
  MR_Word List_5)
{
  {
    MR_Word Falses_6;

    mercury__assoc_list__negated_filter_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, P_4, List_5, &Falses_6);
    return Falses_6;
  }
}

void MR_CALL 
mercury__assoc_list__negated_filter_3_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word P_1,
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
      MR_Box HK_6;
      MR_Word T_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box);

      HK_6 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_1)), HK_6);
      if (succeeded)
      {
        MR_Word next_value_of_HeadVar__2_2 = T_8;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
      else
      {
        MR_Word FalseTail_10;

        mercury__assoc_list__negated_filter_3_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, P_1, T_8, &FalseTail_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FalseTail_10));
        }
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__assoc_list__filter_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word P_4,
  MR_Word List_5)
{
  {
    MR_Word Trues_6;

    mercury__assoc_list__filter_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, P_4, List_5, &Trues_6);
    return Trues_6;
  }
}

void MR_CALL 
mercury__assoc_list__filter_3_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word P_1,
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
      MR_Box HK_6;
      MR_Word T_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box);

      HK_6 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_1)), HK_6);
      if (succeeded)
      {
        MR_Word TrueTail_10;

        mercury__assoc_list__filter_3_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, P_1, T_8, &TrueTail_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TrueTail_10));
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = T_8;

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
mercury__assoc_list__map_values_3_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word TypeInfo_for_W_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box K_6;
    MR_Box V0_7;
    MR_Word KVs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Box V_9;
    MR_Word KVs_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_12;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

    K_6 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0));
    V0_7 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1));
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    func_0(((MR_Box) (HeadVar__1_1)), K_6, V0_7, &V_9);
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = K_6;
      MR_hl_field(MR_mktag(0), Var_12, 1) = V_9;
    }
    mercury__assoc_list__map_values_3_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, TypeInfo_for_W_15, HeadVar__1_1, KVs0_8, &KVs_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (KVs_10));
    }
  }
}

MR_Word MR_CALL 
mercury__assoc_list__map_values_2_f_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word TypeInfo_for_W_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box K_6;
      MR_Box V0_7;
      MR_Word KVs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_9;
      MR_Word KVs_10;
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_12;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

      K_6 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0));
      V0_7 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1));
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      V_9 = func_0(((MR_Box) (HeadVar__1_1)), K_6, V0_7);
      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = K_6;
        MR_hl_field(MR_mktag(0), Var_12, 1) = V_9;
      }
      KVs_10 = mercury__assoc_list__map_values_2_f_0(TypeInfo_for_K_13, TypeInfo_for_V_14, TypeInfo_for_W_15, HeadVar__1_1, KVs0_8);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Var_12));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (KVs_10));
      }
    }
    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__assoc_list__map_values_only_3_p_0(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_W_14,
  MR_Word TypeInfo_for_K_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box K_6;
    MR_Box V0_7;
    MR_Word KVs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Box V_9;
    MR_Word KVs_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_12;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);

    K_6 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0));
    V0_7 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1));
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    func_0(((MR_Box) (HeadVar__1_1)), V0_7, &V_9);
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = K_6;
      MR_hl_field(MR_mktag(0), Var_12, 1) = V_9;
    }
    mercury__assoc_list__map_values_only_3_p_0(TypeInfo_for_V_13, TypeInfo_for_W_14, TypeInfo_for_K_15, HeadVar__1_1, KVs0_8, &KVs_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (KVs_10));
    }
  }
}

MR_Word MR_CALL 
mercury__assoc_list__map_values_only_2_f_0(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_W_14,
  MR_Word TypeInfo_for_K_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box K_6;
      MR_Box V0_7;
      MR_Word KVs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_9;
      MR_Word KVs_10;
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_12;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);

      K_6 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0));
      V0_7 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1));
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      V_9 = func_0(((MR_Box) (HeadVar__1_1)), V0_7);
      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = K_6;
        MR_hl_field(MR_mktag(0), Var_12, 1) = V_9;
      }
      KVs_10 = mercury__assoc_list__map_values_only_2_f_0(TypeInfo_for_V_13, TypeInfo_for_W_14, TypeInfo_for_K_15, HeadVar__1_1, KVs0_8);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Var_12));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (KVs_10));
      }
    }
    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__assoc_list__map_keys_only_3_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_L_14,
  MR_Word TypeInfo_for_V_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box K0_6;
    MR_Box V_7;
    MR_Word KVs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Box K_9;
    MR_Word KVs_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_12;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);

    K0_6 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0));
    V_7 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1));
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    func_0(((MR_Box) (HeadVar__1_1)), K0_6, &K_9);
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = K_9;
      MR_hl_field(MR_mktag(0), Var_12, 1) = V_7;
    }
    mercury__assoc_list__map_keys_only_3_p_0(TypeInfo_for_K_13, TypeInfo_for_L_14, TypeInfo_for_V_15, HeadVar__1_1, KVs0_8, &KVs_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (KVs_10));
    }
  }
}

MR_Word MR_CALL 
mercury__assoc_list__map_keys_only_2_f_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_L_14,
  MR_Word TypeInfo_for_V_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box K0_6;
      MR_Box V_7;
      MR_Word KVs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box K_9;
      MR_Word KVs_10;
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_12;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);

      K0_6 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0));
      V_7 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1));
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      K_9 = func_0(((MR_Box) (HeadVar__1_1)), K0_6);
      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = K_9;
        MR_hl_field(MR_mktag(0), Var_12, 1) = V_7;
      }
      KVs_10 = mercury__assoc_list__map_keys_only_2_f_0(TypeInfo_for_K_13, TypeInfo_for_L_14, TypeInfo_for_V_15, HeadVar__1_1, KVs0_8);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Var_12));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (KVs_10));
      }
    }
    return HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__svremove_4_p_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Box Key_5,
  MR_Box * Value_6,
  MR_Word STATE_VARIABLE_AL_0_8,
  MR_Word * STATE_VARIABLE_AL_9)
{
  {
    MR_bool succeeded;

    succeeded = mercury__assoc_list__remove_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, STATE_VARIABLE_AL_0_8, Key_5, Value_6, STATE_VARIABLE_AL_9);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__remove_4_p_0(
  MR_Word TypeInfo_for_K_14,
  MR_Word TypeInfo_for_V_15,
  MR_Word HeadVar__1_1,
  MR_Box Key_8,
  MR_Box * Value_9,
  MR_Word * Filtered_10)
{
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box K_5;
    MR_Box V_6;
    MR_Word KVs_7;
    MR_Word Var_12;

    if (succeeded)
    {
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      KVs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      K_5 = (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0));
      V_6 = (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 1));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_14, K_5, Key_8);
      if (succeeded)
      {
        *Value_9 = V_6;
        *Filtered_10 = KVs_7;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word FilteredTail_11;

        succeeded = mercury__assoc_list__remove_4_p_0(TypeInfo_for_K_14, TypeInfo_for_V_15, KVs_7, Key_8, Value_9, &FilteredTail_11);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Filtered_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_12));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FilteredTail_11));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

MR_Box MR_CALL 
mercury__assoc_list__det_elem_2_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Box K_5,
  MR_Word AL_4)
{
  {
    MR_bool succeeded;
    MR_Box V_6;
    MR_Box VPrime_7;

    succeeded = mercury__assoc_list__search_3_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, AL_4, K_5, &VPrime_7);
    if (succeeded)
      V_6 = VPrime_7;
    else
    {
      mercury__require__report_lookup_error_2_p_0(TypeInfo_for_K_9, (MR_String) "assoc_list.det_elem: key not found", K_5);
    }
    return V_6;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__elem_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Box K_5,
  MR_Word AL_4,
  MR_Box * V_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__assoc_list__search_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, AL_4, K_5, V_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__search_3_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word HeadVar__1_1,
  MR_Box Key_7,
  MR_Box * Value_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box K_4;
    MR_Box V_5;
    MR_Word KVs_6;
    MR_Word Var_9;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      KVs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      K_4 = (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0));
      V_5 = (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_10, K_4, Key_7);
      if (succeeded)
      {
        *Value_8 = V_5;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = KVs_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__assoc_list__keys_and_values_3_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Box K_4;
    MR_Box V_5;
    MR_Word KVs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Ks_7;
    MR_Word Vs_8;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    K_4 = (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0));
    V_5 = (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1));
    mercury__assoc_list__keys_and_values_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, KVs_6, &Ks_7, &Vs_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = K_4;
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Ks_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = V_5;
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vs_8));
    }
  }
}

MR_Word MR_CALL 
mercury__assoc_list__values_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word AL_3)
{
  {
    MR_Word Vs_4;

    mercury__assoc_list__values_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, AL_3, &Vs_4);
    return Vs_4;
  }
}

void MR_CALL 
mercury__assoc_list__values_2_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box V_4;
    MR_Word KVs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Vs_6;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    V_4 = (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 1));
    mercury__assoc_list__values_2_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, KVs_5, &Vs_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = V_4;
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vs_6));
    }
  }
}

MR_Word MR_CALL 
mercury__assoc_list__keys_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word AL_3)
{
  {
    MR_Word Ks_4;

    mercury__assoc_list__keys_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, AL_3, &Ks_4);
    return Ks_4;
  }
}

void MR_CALL 
mercury__assoc_list__keys_2_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box K_3;
    MR_Word KVs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Ks_6;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    K_3 = (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0));
    mercury__assoc_list__keys_2_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, KVs_5, &Ks_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = K_3;
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Ks_6));
    }
  }
}

MR_Word MR_CALL 
mercury__assoc_list__from_corresponding_lists_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word Ks_4,
  MR_Word Vs_5)
{
  {
    MR_Word AL_6;

    mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Ks_4, Vs_5, &AL_6);
    return AL_6;
  }
}

void MR_CALL 
mercury__assoc_list__from_corresponding_lists_3_p_0(
  MR_Word TypeInfo_for_K_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word Ks_4,
  MR_Word Vs_5,
  MR_Word * KVs_6)
{
  {
    MR_bool succeeded;
    MR_Word KVsPrime_7;

    succeeded = mercury__assoc_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(Ks_4, Vs_5, &KVsPrime_7);
    if (succeeded)
      *KVs_6 = KVsPrime_7;
    else
    {
      MR_Word TypeInfo_34_34;
      MR_Word TypeInfo_35_35;
      MR_String KeyType_8;
      MR_Integer KeyLength_9;
      MR_String KeyLengthString_10;
      MR_String ValueType_11;
      MR_Integer ValueLength_12;
      MR_String ValueLengthString_13;
      MR_String ErrorString_14;
      MR_Word Var_15;
      MR_Word Var_16;
      MR_String Var_18;
      MR_String Var_20;
      MR_String Var_21;
      MR_String Var_23;
      MR_String Var_24;
      MR_String Var_26;
      MR_String Var_27;

      {
        TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_34_34, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
        MR_hl_field(MR_mktag(0), TypeInfo_34_34, 1) = ((MR_Box) (TypeInfo_for_K_31));
      }
{
#define MR_PROC_LABEL mercury__assoc_list__from_corresponding_lists_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_34_34 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 Var_15  = TypeInfo;
}
      KeyType_8 = mercury__type_desc__type_name_1_f_0(Var_15);
      mercury__list__length_acc_3_p_0(TypeInfo_for_K_31, Ks_4, (MR_Integer) 0, &KeyLength_9);
      mercury__string__int_to_base_string_3_p_0(KeyLength_9, (MR_Integer) 10, &KeyLengthString_10);
      {
        TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_35_35, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
        MR_hl_field(MR_mktag(0), TypeInfo_35_35, 1) = ((MR_Box) (TypeInfo_for_V_32));
      }
{
#define MR_PROC_LABEL mercury__assoc_list__from_corresponding_lists_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_35_35 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 Var_16  = TypeInfo;
}
      ValueType_11 = mercury__type_desc__type_name_1_f_0(Var_16);
      mercury__list__length_acc_3_p_0(TypeInfo_for_V_32, Vs_5, (MR_Integer) 0, &ValueLength_12);
      mercury__string__int_to_base_string_3_p_0(ValueLength_12, (MR_Integer) 10, &ValueLengthString_13);
      mercury__string__append_3_p_2((MR_String) "\n\tValue list length: ", ValueLengthString_13, &Var_27);
      mercury__string__append_3_p_2(ValueType_11, Var_27, &Var_26);
      mercury__string__append_3_p_2((MR_String) "\n\tValue list type: ", Var_26, &Var_24);
      mercury__string__append_3_p_2(KeyLengthString_10, Var_24, &Var_23);
      mercury__string__append_3_p_2((MR_String) "\n\tKey list length: ", Var_23, &Var_21);
      mercury__string__append_3_p_2(KeyType_8, Var_21, &Var_20);
      mercury__string__append_3_p_2((MR_String) "\tKey list type: ", Var_20, &Var_18);
      mercury__string__append_3_p_2((MR_String) "Lists have different lengths.\n", Var_18, &ErrorString_14);
      {
        mercury__require__unexpected_3_p_0((MR_String) "assoc_list", (MR_String) "predicate \140assoc_list.from_corresponding_lists\'/3", ErrorString_14);
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
mercury__assoc_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Box A_4 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word As_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Box B_6;
      MR_Word Bs_7;
      MR_Word ABs_8;
      MR_Word Var_9;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        B_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        Bs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        {
          Var_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_9, 0) = A_4;
          MR_hl_field(MR_mktag(0), Var_9, 1) = B_6;
        }
        succeeded = mercury__assoc_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(As_5, Bs_7, &ABs_8);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_9));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ABs_8));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__assoc_list__reverse_members_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word AL1_3)
{
  {
    MR_Word AL2_4;

    mercury__assoc_list__reverse_members_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, AL1_3, &AL2_4);
    return AL2_4;
  }
}

void MR_CALL 
mercury__assoc_list__reverse_members_2_p_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box K_3;
    MR_Box V_4;
    MR_Word KVs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word VKs_6;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_8;

    K_3 = (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0));
    V_4 = (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 1));
    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = V_4;
      MR_hl_field(MR_mktag(0), Var_8, 1) = K_3;
    }
    mercury__assoc_list__reverse_members_2_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, KVs_5, &VKs_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (VKs_6));
    }
  }
}

static MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__assoc_list____Unify____assoc_list_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__assoc_list____Compare____assoc_list_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__assoc_list____Compare____assoc_list_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__assoc_list____Unify____assoc_list_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__assoc_list____Compare____assoc_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__assoc_list____Compare____assoc_list_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__assoc_list__init(void)
{
}

void mercury__assoc_list__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__assoc_list__assoc_list__type_ctor_info_assoc_list_2);
	MR_register_type_ctor_info(&mercury__assoc_list__assoc_list__type_ctor_info_assoc_list_1);
}

void mercury__assoc_list__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__assoc_list__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module assoc_list.
