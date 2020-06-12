/*
** Automatically generated from `kv_list.m'
** by the Mercury compiler,
** version rotd-2020-06-12
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


// :- module kv_list.
// :- implementation.

/*
INIT mercury__kv_list__init
ENDINIT
*/

#include "kv_list.mih"


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



struct mercury__kv_list__foldl3_values_8_p_7_env_0_s {
  MR_Word mercury__kv_list__foldl3_values_8_p_7_env_0__TypeInfo_for_V_38;
  MR_Word mercury__kv_list__foldl3_values_8_p_7_env_0__TypeInfo_for_A_39;
  MR_Word mercury__kv_list__foldl3_values_8_p_7_env_0__TypeInfo_for_B_40;
  MR_Word mercury__kv_list__foldl3_values_8_p_7_env_0__TypeInfo_for_C_41;
  MR_Word mercury__kv_list__foldl3_values_8_p_7_env_0__TypeInfo_for_K_42;
  MR_Word mercury__kv_list__foldl3_values_8_p_7_env_0__HeadVar__1_1;
  MR_Box * mercury__kv_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_4;
  MR_Box * mercury__kv_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_6;
  MR_Box * mercury__kv_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_8;
  MR_Cont mercury__kv_list__foldl3_values_8_p_7_env_0__cont;
  void * mercury__kv_list__foldl3_values_8_p_7_env_0__cont_env_ptr;
  MR_Word mercury__kv_list__foldl3_values_8_p_7_env_0__KVs_22;
  MR_Box mercury__kv_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_32_32;
  MR_Box mercury__kv_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_33_33;
  MR_Box mercury__kv_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_34_34;
};

struct mercury__kv_list__foldl3_values_8_p_6_env_0_s {
  MR_Word mercury__kv_list__foldl3_values_8_p_6_env_0__TypeInfo_for_V_38;
  MR_Word mercury__kv_list__foldl3_values_8_p_6_env_0__TypeInfo_for_A_39;
  MR_Word mercury__kv_list__foldl3_values_8_p_6_env_0__TypeInfo_for_B_40;
  MR_Word mercury__kv_list__foldl3_values_8_p_6_env_0__TypeInfo_for_C_41;
  MR_Word mercury__kv_list__foldl3_values_8_p_6_env_0__TypeInfo_for_K_42;
  MR_Word mercury__kv_list__foldl3_values_8_p_6_env_0__HeadVar__1_1;
  MR_Box * mercury__kv_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_4;
  MR_Box * mercury__kv_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_6;
  MR_Box * mercury__kv_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_8;
  MR_Cont mercury__kv_list__foldl3_values_8_p_6_env_0__cont;
  void * mercury__kv_list__foldl3_values_8_p_6_env_0__cont_env_ptr;
  MR_Word mercury__kv_list__foldl3_values_8_p_6_env_0__KVs_22;
  MR_Box mercury__kv_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_32_32;
  MR_Box mercury__kv_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_33_33;
  MR_Box mercury__kv_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_34_34;
};

struct mercury__kv_list__foldl3_8_p_6_env_0_s {
  MR_Word mercury__kv_list__foldl3_8_p_6_env_0__TypeInfo_for_K_38;
  MR_Word mercury__kv_list__foldl3_8_p_6_env_0__TypeInfo_for_V_39;
  MR_Word mercury__kv_list__foldl3_8_p_6_env_0__TypeInfo_for_A_40;
  MR_Word mercury__kv_list__foldl3_8_p_6_env_0__TypeInfo_for_B_41;
  MR_Word mercury__kv_list__foldl3_8_p_6_env_0__TypeInfo_for_C_42;
  MR_Word mercury__kv_list__foldl3_8_p_6_env_0__HeadVar__1_1;
  MR_Box * mercury__kv_list__foldl3_8_p_6_env_0__STATE_VARIABLE_A_4;
  MR_Box * mercury__kv_list__foldl3_8_p_6_env_0__STATE_VARIABLE_B_6;
  MR_Box * mercury__kv_list__foldl3_8_p_6_env_0__STATE_VARIABLE_C_8;
  MR_Cont mercury__kv_list__foldl3_8_p_6_env_0__cont;
  void * mercury__kv_list__foldl3_8_p_6_env_0__cont_env_ptr;
  MR_Word mercury__kv_list__foldl3_8_p_6_env_0__TailKVs_22;
  MR_Box mercury__kv_list__foldl3_8_p_6_env_0__STATE_VARIABLE_A_32_32;
  MR_Box mercury__kv_list__foldl3_8_p_6_env_0__STATE_VARIABLE_B_33_33;
  MR_Box mercury__kv_list__foldl3_8_p_6_env_0__STATE_VARIABLE_C_34_34;
};

struct mercury__kv_list__foldl2_values_6_p_7_env_0_s {
  MR_Word mercury__kv_list__foldl2_values_6_p_7_env_0__TypeInfo_for_V_28;
  MR_Word mercury__kv_list__foldl2_values_6_p_7_env_0__TypeInfo_for_A_29;
  MR_Word mercury__kv_list__foldl2_values_6_p_7_env_0__TypeInfo_for_B_30;
  MR_Word mercury__kv_list__foldl2_values_6_p_7_env_0__TypeInfo_for_K_31;
  MR_Word mercury__kv_list__foldl2_values_6_p_7_env_0__HeadVar__1_1;
  MR_Box * mercury__kv_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_4;
  MR_Box * mercury__kv_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_6;
  MR_Cont mercury__kv_list__foldl2_values_6_p_7_env_0__cont;
  void * mercury__kv_list__foldl2_values_6_p_7_env_0__cont_env_ptr;
  MR_Word mercury__kv_list__foldl2_values_6_p_7_env_0__KVs_17;
  MR_Box mercury__kv_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_24_24;
  MR_Box mercury__kv_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_25_25;
};

struct mercury__kv_list__foldl2_values_6_p_6_env_0_s {
  MR_Word mercury__kv_list__foldl2_values_6_p_6_env_0__TypeInfo_for_V_28;
  MR_Word mercury__kv_list__foldl2_values_6_p_6_env_0__TypeInfo_for_A_29;
  MR_Word mercury__kv_list__foldl2_values_6_p_6_env_0__TypeInfo_for_B_30;
  MR_Word mercury__kv_list__foldl2_values_6_p_6_env_0__TypeInfo_for_K_31;
  MR_Word mercury__kv_list__foldl2_values_6_p_6_env_0__HeadVar__1_1;
  MR_Box * mercury__kv_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_4;
  MR_Box * mercury__kv_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_6;
  MR_Cont mercury__kv_list__foldl2_values_6_p_6_env_0__cont;
  void * mercury__kv_list__foldl2_values_6_p_6_env_0__cont_env_ptr;
  MR_Word mercury__kv_list__foldl2_values_6_p_6_env_0__KVs_17;
  MR_Box mercury__kv_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_24_24;
  MR_Box mercury__kv_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_25_25;
};

struct mercury__kv_list__foldl2_6_p_6_env_0_s {
  MR_Word mercury__kv_list__foldl2_6_p_6_env_0__TypeInfo_for_K_28;
  MR_Word mercury__kv_list__foldl2_6_p_6_env_0__TypeInfo_for_V_29;
  MR_Word mercury__kv_list__foldl2_6_p_6_env_0__TypeInfo_for_A_30;
  MR_Word mercury__kv_list__foldl2_6_p_6_env_0__TypeInfo_for_B_31;
  MR_Word mercury__kv_list__foldl2_6_p_6_env_0__HeadVar__1_1;
  MR_Box * mercury__kv_list__foldl2_6_p_6_env_0__STATE_VARIABLE_A_4;
  MR_Box * mercury__kv_list__foldl2_6_p_6_env_0__STATE_VARIABLE_B_6;
  MR_Cont mercury__kv_list__foldl2_6_p_6_env_0__cont;
  void * mercury__kv_list__foldl2_6_p_6_env_0__cont_env_ptr;
  MR_Word mercury__kv_list__foldl2_6_p_6_env_0__TailKVs_17;
  MR_Box mercury__kv_list__foldl2_6_p_6_env_0__STATE_VARIABLE_A_24_24;
  MR_Box mercury__kv_list__foldl2_6_p_6_env_0__STATE_VARIABLE_B_25_25;
};

struct mercury__kv_list__foldl_values_4_p_7_env_0_s {
  MR_Word mercury__kv_list__foldl_values_4_p_7_env_0__TypeInfo_for_V_18;
  MR_Word mercury__kv_list__foldl_values_4_p_7_env_0__TypeInfo_for_A_19;
  MR_Word mercury__kv_list__foldl_values_4_p_7_env_0__TypeInfo_for_K_20;
  MR_Word mercury__kv_list__foldl_values_4_p_7_env_0__HeadVar__1_1;
  MR_Box * mercury__kv_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_4;
  MR_Cont mercury__kv_list__foldl_values_4_p_7_env_0__cont;
  void * mercury__kv_list__foldl_values_4_p_7_env_0__cont_env_ptr;
  MR_Word mercury__kv_list__foldl_values_4_p_7_env_0__KVs_12;
  MR_Box mercury__kv_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_16_16;
};

struct mercury__kv_list__foldl_values_4_p_6_env_0_s {
  MR_Word mercury__kv_list__foldl_values_4_p_6_env_0__TypeInfo_for_V_18;
  MR_Word mercury__kv_list__foldl_values_4_p_6_env_0__TypeInfo_for_A_19;
  MR_Word mercury__kv_list__foldl_values_4_p_6_env_0__TypeInfo_for_K_20;
  MR_Word mercury__kv_list__foldl_values_4_p_6_env_0__HeadVar__1_1;
  MR_Box * mercury__kv_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_4;
  MR_Cont mercury__kv_list__foldl_values_4_p_6_env_0__cont;
  void * mercury__kv_list__foldl_values_4_p_6_env_0__cont_env_ptr;
  MR_Word mercury__kv_list__foldl_values_4_p_6_env_0__KVs_12;
  MR_Box mercury__kv_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_16_16;
};

struct mercury__kv_list__foldl_keys_4_p_7_env_0_s {
  MR_Word mercury__kv_list__foldl_keys_4_p_7_env_0__TypeInfo_for_K_18;
  MR_Word mercury__kv_list__foldl_keys_4_p_7_env_0__TypeInfo_for_A_19;
  MR_Word mercury__kv_list__foldl_keys_4_p_7_env_0__TypeInfo_for_V_20;
  MR_Word mercury__kv_list__foldl_keys_4_p_7_env_0__HeadVar__1_1;
  MR_Box * mercury__kv_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_4;
  MR_Cont mercury__kv_list__foldl_keys_4_p_7_env_0__cont;
  void * mercury__kv_list__foldl_keys_4_p_7_env_0__cont_env_ptr;
  MR_Word mercury__kv_list__foldl_keys_4_p_7_env_0__KVs_12;
  MR_Box mercury__kv_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_16_16;
};

struct mercury__kv_list__foldl_keys_4_p_6_env_0_s {
  MR_Word mercury__kv_list__foldl_keys_4_p_6_env_0__TypeInfo_for_K_18;
  MR_Word mercury__kv_list__foldl_keys_4_p_6_env_0__TypeInfo_for_A_19;
  MR_Word mercury__kv_list__foldl_keys_4_p_6_env_0__TypeInfo_for_V_20;
  MR_Word mercury__kv_list__foldl_keys_4_p_6_env_0__HeadVar__1_1;
  MR_Box * mercury__kv_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_4;
  MR_Cont mercury__kv_list__foldl_keys_4_p_6_env_0__cont;
  void * mercury__kv_list__foldl_keys_4_p_6_env_0__cont_env_ptr;
  MR_Word mercury__kv_list__foldl_keys_4_p_6_env_0__KVs_12;
  MR_Box mercury__kv_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_16_16;
};

struct mercury__kv_list__foldl_4_p_6_env_0_s {
  MR_Word mercury__kv_list__foldl_4_p_6_env_0__TypeInfo_for_K_18;
  MR_Word mercury__kv_list__foldl_4_p_6_env_0__TypeInfo_for_V_19;
  MR_Word mercury__kv_list__foldl_4_p_6_env_0__TypeInfo_for_A_20;
  MR_Word mercury__kv_list__foldl_4_p_6_env_0__HeadVar__1_1;
  MR_Box * mercury__kv_list__foldl_4_p_6_env_0__STATE_VARIABLE_Acc_4;
  MR_Cont mercury__kv_list__foldl_4_p_6_env_0__cont;
  void * mercury__kv_list__foldl_4_p_6_env_0__cont_env_ptr;
  MR_Word mercury__kv_list__foldl_4_p_6_env_0__TailKVs_12;
  MR_Box mercury__kv_list__foldl_4_p_6_env_0__STATE_VARIABLE_Acc_16_16;
};


static const MR_DuFunctorDesc mercury__kv_list__kv_list__du_functor_desc_kv_list_2_0;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__kv_list__kv_list__pti_kv_list_2__pseudo_1__pseudo_2;

static const MR_PseudoTypeInfo mercury__kv_list__kv_list__field_types_kv_list_2_1[3];

static const MR_DuFunctorDesc mercury__kv_list__kv_list__du_functor_desc_kv_list_2_1;

static const MR_DuFunctorDescPtr mercury__kv_list__kv_list__du_stag_ordered_kv_list_2_0[1];

static const MR_DuFunctorDescPtr mercury__kv_list__kv_list__du_stag_ordered_kv_list_2_1[1];

static const MR_DuPtagLayout mercury__kv_list__kv_list__du_ptag_ordered_kv_list_2[2];

static const MR_DuFunctorDescPtr mercury__kv_list__kv_list__du_name_ordered_kv_list_2[2];

static const MR_Integer mercury__kv_list__kv_list__functor_number_map_kv_list_2[2];

static MR_Integer MR_CALL 
mercury__kv_list__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__kv_list__foldl3_values_8_p_7_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__kv_list__foldl3_values_8_p_6_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__kv_list__foldl3_8_p_6_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__kv_list__foldl2_values_6_p_7_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__kv_list__foldl2_values_6_p_6_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__kv_list__foldl2_6_p_6_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__kv_list__foldl_values_4_p_7_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__kv_list__foldl_values_4_p_6_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__kv_list__foldl_keys_4_p_7_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__kv_list__foldl_keys_4_p_6_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__kv_list__foldl_4_p_6_1(
  void * env_ptr_arg);

static MR_bool MR_CALL 
mercury__kv_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
mercury__kv_list____Unify____kv_list_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__kv_list____Compare____kv_list_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);


static /* final */ const MR_Box mercury__kv_list_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__kv_list_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__kv_list_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__kv_list_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__kv_list_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__kv_list_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__kv_list_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__kv_list_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__kv_list_scalar_common_2[0])),
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



static const MR_DuFunctorDesc mercury__kv_list__kv_list__du_functor_desc_kv_list_2_0 = {
  (MR_String) "kv_nil",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__kv_list__kv_list__pti_kv_list_2__pseudo_1__pseudo_2 = {
  &mercury__kv_list__kv_list__type_ctor_info_kv_list_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_PseudoTypeInfo mercury__kv_list__kv_list__field_types_kv_list_2_1[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2),
  (MR_PseudoTypeInfo) (&mercury__kv_list__kv_list__pti_kv_list_2__pseudo_1__pseudo_2)
};

static const MR_DuFunctorDesc mercury__kv_list__kv_list__du_functor_desc_kv_list_2_1 = {
  (MR_String) "kv_cons",
  INT16_C(3),
  UINT16_C(7),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__kv_list__kv_list__field_types_kv_list_2_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__kv_list__kv_list__du_stag_ordered_kv_list_2_0[1] = {
  &mercury__kv_list__kv_list__du_functor_desc_kv_list_2_0
};

static const MR_DuFunctorDescPtr mercury__kv_list__kv_list__du_stag_ordered_kv_list_2_1[1] = {
  &mercury__kv_list__kv_list__du_functor_desc_kv_list_2_1
};

static const MR_DuPtagLayout mercury__kv_list__kv_list__du_ptag_ordered_kv_list_2[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__kv_list__kv_list__du_stag_ordered_kv_list_2_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__kv_list__kv_list__du_stag_ordered_kv_list_2_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__kv_list__kv_list__du_name_ordered_kv_list_2[2] = {
  &mercury__kv_list__kv_list__du_functor_desc_kv_list_2_1,
  &mercury__kv_list__kv_list__du_functor_desc_kv_list_2_0
};

static const MR_Integer mercury__kv_list__kv_list__functor_number_map_kv_list_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__kv_list__kv_list__type_ctor_info_kv_list_2 = {
  (MR_Integer) 2,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__kv_list____Unify____kv_list_2_0_10001)),
  ((MR_Box) (mercury__kv_list____Compare____kv_list_2_0_10001)),
  (MR_String) "kv_list",
  (MR_String) "kv_list",
  {     mercury__kv_list__kv_list__du_name_ordered_kv_list_2 },
  {     mercury__kv_list__kv_list__du_ptag_ordered_kv_list_2 },
  (MR_Integer) 2,
  UINT16_C(4),
  mercury__kv_list__kv_list__functor_number_map_kv_list_2
};

static MR_Integer MR_CALL 
mercury__kv_list__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

void MR_CALL 
mercury__kv_list____Compare____kv_list_2_0(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box Var_25 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Box Var_26 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Box ArgY1_11 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
        MR_Box ArgY2_14 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
        MR_Word ArgY3_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
        MR_Word SubResult1_12;

        mercury__builtin__compare_3_p_0(TypeInfo_for_K_20, &SubResult1_12, Var_26, ArgY1_11);
        succeeded = (SubResult1_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_12;
        else
        {
          MR_Word SubResult2_15;

          mercury__builtin__compare_3_p_0(TypeInfo_for_V_21, &SubResult2_15, Var_25, ArgY2_14);
          succeeded = (SubResult2_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_15;
          else
          {
            MR_Word next_value_of_HeadVar__2_2 = Var_24;
            MR_Word next_value_of_HeadVar__3_3 = ArgY3_17;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            continue;
          }
        }
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__kv_list____Unify____kv_list_2_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_6;
      MR_Box ArgX2_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
      MR_Box ArgY2_8;
      MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        ArgY2_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
        ArgY3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_13, ArgX1_5, ArgY1_6);
        if (succeeded)
        {
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V_14, ArgX2_7, ArgY2_8);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = ArgX3_9;
            next_value_of_HeadVar__2_2 = ArgY3_10;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
mercury__kv_list__foldl3_values_8_p_7_1(
  void * env_ptr_arg)
{
  {
    struct mercury__kv_list__foldl3_values_8_p_7_env_0_s * env_ptr = (struct mercury__kv_list__foldl3_values_8_p_7_env_0_s *) (env_ptr_arg);

    mercury__kv_list__foldl3_values_8_p_7((env_ptr)->mercury__kv_list__foldl3_values_8_p_7_env_0__TypeInfo_for_V_38, (env_ptr)->mercury__kv_list__foldl3_values_8_p_7_env_0__TypeInfo_for_A_39, (env_ptr)->mercury__kv_list__foldl3_values_8_p_7_env_0__TypeInfo_for_B_40, (env_ptr)->mercury__kv_list__foldl3_values_8_p_7_env_0__TypeInfo_for_C_41, (env_ptr)->mercury__kv_list__foldl3_values_8_p_7_env_0__TypeInfo_for_K_42, (env_ptr)->mercury__kv_list__foldl3_values_8_p_7_env_0__HeadVar__1_1, (env_ptr)->mercury__kv_list__foldl3_values_8_p_7_env_0__KVs_22, (env_ptr)->mercury__kv_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_32_32, (env_ptr)->mercury__kv_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_4, (env_ptr)->mercury__kv_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_33_33, (env_ptr)->mercury__kv_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_6, (env_ptr)->mercury__kv_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_34_34, (env_ptr)->mercury__kv_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_8, (env_ptr)->mercury__kv_list__foldl3_values_8_p_7_env_0__cont, (env_ptr)->mercury__kv_list__foldl3_values_8_p_7_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__kv_list__foldl3_values_8_p_7(
  MR_Word TypeInfo_for_V_38,
  MR_Word TypeInfo_for_A_39,
  MR_Word TypeInfo_for_B_40,
  MR_Word TypeInfo_for_C_41,
  MR_Word TypeInfo_for_K_42,
  MR_Word HeadVar__1_1,
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
    struct mercury__kv_list__foldl3_values_8_p_7_env_0_s env;

    (env).mercury__kv_list__foldl3_values_8_p_7_env_0__TypeInfo_for_V_38 = TypeInfo_for_V_38;
    (env).mercury__kv_list__foldl3_values_8_p_7_env_0__TypeInfo_for_A_39 = TypeInfo_for_A_39;
    (env).mercury__kv_list__foldl3_values_8_p_7_env_0__TypeInfo_for_B_40 = TypeInfo_for_B_40;
    (env).mercury__kv_list__foldl3_values_8_p_7_env_0__TypeInfo_for_C_41 = TypeInfo_for_C_41;
    (env).mercury__kv_list__foldl3_values_8_p_7_env_0__TypeInfo_for_K_42 = TypeInfo_for_K_42;
    (env).mercury__kv_list__foldl3_values_8_p_7_env_0__HeadVar__1_1 = HeadVar__1_1;
    (env).mercury__kv_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_4;
    (env).mercury__kv_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_6;
    (env).mercury__kv_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_8 = STATE_VARIABLE_Acc3_8;
    (env).mercury__kv_list__foldl3_values_8_p_7_env_0__cont = cont;
    (env).mercury__kv_list__foldl3_values_8_p_7_env_0__cont_env_ptr = cont_env_ptr;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *((env).mercury__kv_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_8) = STATE_VARIABLE_Acc3_0_7;
      *((env).mercury__kv_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_6) = STATE_VARIABLE_Acc2_0_5;
      *((env).mercury__kv_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_4) = STATE_VARIABLE_Acc1_0_3;
      ((env).mercury__kv_list__foldl3_values_8_p_7_env_0__cont)((env).mercury__kv_list__foldl3_values_8_p_7_env_0__cont_env_ptr);
    }
    else
    {
      MR_Box V_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Box _K_20 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

      (env).mercury__kv_list__foldl3_values_8_p_7_env_0__KVs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__kv_list__foldl3_values_8_p_7_env_0__HeadVar__1_1, (MR_Integer) 1))));
      func_0(((MR_Box) ((env).mercury__kv_list__foldl3_values_8_p_7_env_0__HeadVar__1_1)), V_21, STATE_VARIABLE_Acc1_0_3, &(env).mercury__kv_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_32_32, STATE_VARIABLE_Acc2_0_5, &(env).mercury__kv_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_33_33, STATE_VARIABLE_Acc3_0_7, &(env).mercury__kv_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_34_34, mercury__kv_list__foldl3_values_8_p_7_1, &env);
    }
  }
}

static void MR_CALL 
mercury__kv_list__foldl3_values_8_p_6_1(
  void * env_ptr_arg)
{
  {
    struct mercury__kv_list__foldl3_values_8_p_6_env_0_s * env_ptr = (struct mercury__kv_list__foldl3_values_8_p_6_env_0_s *) (env_ptr_arg);

    mercury__kv_list__foldl3_values_8_p_6((env_ptr)->mercury__kv_list__foldl3_values_8_p_6_env_0__TypeInfo_for_V_38, (env_ptr)->mercury__kv_list__foldl3_values_8_p_6_env_0__TypeInfo_for_A_39, (env_ptr)->mercury__kv_list__foldl3_values_8_p_6_env_0__TypeInfo_for_B_40, (env_ptr)->mercury__kv_list__foldl3_values_8_p_6_env_0__TypeInfo_for_C_41, (env_ptr)->mercury__kv_list__foldl3_values_8_p_6_env_0__TypeInfo_for_K_42, (env_ptr)->mercury__kv_list__foldl3_values_8_p_6_env_0__HeadVar__1_1, (env_ptr)->mercury__kv_list__foldl3_values_8_p_6_env_0__KVs_22, (env_ptr)->mercury__kv_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_32_32, (env_ptr)->mercury__kv_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_4, (env_ptr)->mercury__kv_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_33_33, (env_ptr)->mercury__kv_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_6, (env_ptr)->mercury__kv_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_34_34, (env_ptr)->mercury__kv_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_8, (env_ptr)->mercury__kv_list__foldl3_values_8_p_6_env_0__cont, (env_ptr)->mercury__kv_list__foldl3_values_8_p_6_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__kv_list__foldl3_values_8_p_6(
  MR_Word TypeInfo_for_V_38,
  MR_Word TypeInfo_for_A_39,
  MR_Word TypeInfo_for_B_40,
  MR_Word TypeInfo_for_C_41,
  MR_Word TypeInfo_for_K_42,
  MR_Word HeadVar__1_1,
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
    struct mercury__kv_list__foldl3_values_8_p_6_env_0_s env;

    (env).mercury__kv_list__foldl3_values_8_p_6_env_0__TypeInfo_for_V_38 = TypeInfo_for_V_38;
    (env).mercury__kv_list__foldl3_values_8_p_6_env_0__TypeInfo_for_A_39 = TypeInfo_for_A_39;
    (env).mercury__kv_list__foldl3_values_8_p_6_env_0__TypeInfo_for_B_40 = TypeInfo_for_B_40;
    (env).mercury__kv_list__foldl3_values_8_p_6_env_0__TypeInfo_for_C_41 = TypeInfo_for_C_41;
    (env).mercury__kv_list__foldl3_values_8_p_6_env_0__TypeInfo_for_K_42 = TypeInfo_for_K_42;
    (env).mercury__kv_list__foldl3_values_8_p_6_env_0__HeadVar__1_1 = HeadVar__1_1;
    (env).mercury__kv_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_4;
    (env).mercury__kv_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_6;
    (env).mercury__kv_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_8 = STATE_VARIABLE_Acc3_8;
    (env).mercury__kv_list__foldl3_values_8_p_6_env_0__cont = cont;
    (env).mercury__kv_list__foldl3_values_8_p_6_env_0__cont_env_ptr = cont_env_ptr;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *((env).mercury__kv_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_8) = STATE_VARIABLE_Acc3_0_7;
      *((env).mercury__kv_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_6) = STATE_VARIABLE_Acc2_0_5;
      *((env).mercury__kv_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_4) = STATE_VARIABLE_Acc1_0_3;
      ((env).mercury__kv_list__foldl3_values_8_p_6_env_0__cont)((env).mercury__kv_list__foldl3_values_8_p_6_env_0__cont_env_ptr);
    }
    else
    {
      MR_Box V_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Box _K_20 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

      (env).mercury__kv_list__foldl3_values_8_p_6_env_0__KVs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__kv_list__foldl3_values_8_p_6_env_0__HeadVar__1_1, (MR_Integer) 1))));
      func_0(((MR_Box) ((env).mercury__kv_list__foldl3_values_8_p_6_env_0__HeadVar__1_1)), V_21, STATE_VARIABLE_Acc1_0_3, &(env).mercury__kv_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_32_32, STATE_VARIABLE_Acc2_0_5, &(env).mercury__kv_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_33_33, STATE_VARIABLE_Acc3_0_7, &(env).mercury__kv_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_34_34, mercury__kv_list__foldl3_values_8_p_6_1, &env);
    }
  }
}

MR_bool MR_CALL 
mercury__kv_list__foldl3_values_8_p_5(
  MR_Word TypeInfo_for_V_38,
  MR_Word TypeInfo_for_A_39,
  MR_Word TypeInfo_for_B_40,
  MR_Word TypeInfo_for_C_41,
  MR_Word TypeInfo_for_K_42,
  MR_Word HeadVar__1_1,
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
      MR_Box V_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word KVs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc1_32_32;
      MR_Box STATE_VARIABLE_Acc2_33_33;
      MR_Box STATE_VARIABLE_Acc3_34_34;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_7;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), V_21, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_32_32, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_33_33, STATE_VARIABLE_Acc3_0_7, &STATE_VARIABLE_Acc3_34_34);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_22;
        next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_32_32;
        next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_33_33;
        next_value_of_STATE_VARIABLE_Acc3_0_7 = STATE_VARIABLE_Acc3_34_34;
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
mercury__kv_list__foldl3_values_8_p_4(
  MR_Word TypeInfo_for_V_38,
  MR_Word TypeInfo_for_A_39,
  MR_Word TypeInfo_for_B_40,
  MR_Word TypeInfo_for_C_41,
  MR_Word TypeInfo_for_K_42,
  MR_Word HeadVar__1_1,
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
      MR_Box V_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word KVs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc1_32_32;
      MR_Box STATE_VARIABLE_Acc2_33_33;
      MR_Box STATE_VARIABLE_Acc3_34_34;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_7;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), V_21, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_32_32, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_33_33, STATE_VARIABLE_Acc3_0_7, &STATE_VARIABLE_Acc3_34_34);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_22;
        next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_32_32;
        next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_33_33;
        next_value_of_STATE_VARIABLE_Acc3_0_7 = STATE_VARIABLE_Acc3_34_34;
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
mercury__kv_list__foldl3_values_8_p_3(
  MR_Word TypeInfo_for_V_38,
  MR_Word TypeInfo_for_A_39,
  MR_Word TypeInfo_for_B_40,
  MR_Word TypeInfo_for_C_41,
  MR_Word TypeInfo_for_K_42,
  MR_Word HeadVar__1_1,
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
      MR_Box V_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word KVs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc1_32_32;
      MR_Box STATE_VARIABLE_Acc2_33_33;
      MR_Box STATE_VARIABLE_Acc3_34_34;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_7;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), V_21, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_32_32, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_33_33, STATE_VARIABLE_Acc3_0_7, &STATE_VARIABLE_Acc3_34_34);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_22;
        next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_32_32;
        next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_33_33;
        next_value_of_STATE_VARIABLE_Acc3_0_7 = STATE_VARIABLE_Acc3_34_34;
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
mercury__kv_list__foldl3_values_8_p_2(
  MR_Word TypeInfo_for_V_38,
  MR_Word TypeInfo_for_A_39,
  MR_Word TypeInfo_for_B_40,
  MR_Word TypeInfo_for_C_41,
  MR_Word TypeInfo_for_K_42,
  MR_Word HeadVar__1_1,
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
      MR_Box V_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word KVs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc1_32_32;
      MR_Box STATE_VARIABLE_Acc2_33_33;
      MR_Box STATE_VARIABLE_Acc3_34_34;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_7;

      func_0(((MR_Box) (HeadVar__1_1)), V_21, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_32_32, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_33_33, STATE_VARIABLE_Acc3_0_7, &STATE_VARIABLE_Acc3_34_34);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_22;
      next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_32_32;
      next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_33_33;
      next_value_of_STATE_VARIABLE_Acc3_0_7 = STATE_VARIABLE_Acc3_34_34;
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
mercury__kv_list__foldl3_values_8_p_1(
  MR_Word TypeInfo_for_V_38,
  MR_Word TypeInfo_for_A_39,
  MR_Word TypeInfo_for_B_40,
  MR_Word TypeInfo_for_C_41,
  MR_Word TypeInfo_for_K_42,
  MR_Word HeadVar__1_1,
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
      MR_Box V_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word KVs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc1_32_32;
      MR_Box STATE_VARIABLE_Acc2_33_33;
      MR_Box STATE_VARIABLE_Acc3_34_34;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_7;

      func_0(((MR_Box) (HeadVar__1_1)), V_21, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_32_32, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_33_33, STATE_VARIABLE_Acc3_0_7, &STATE_VARIABLE_Acc3_34_34);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_22;
      next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_32_32;
      next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_33_33;
      next_value_of_STATE_VARIABLE_Acc3_0_7 = STATE_VARIABLE_Acc3_34_34;
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
mercury__kv_list__foldl3_values_8_p_0(
  MR_Word TypeInfo_for_V_38,
  MR_Word TypeInfo_for_A_39,
  MR_Word TypeInfo_for_B_40,
  MR_Word TypeInfo_for_C_41,
  MR_Word TypeInfo_for_K_42,
  MR_Word HeadVar__1_1,
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
      MR_Box V_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word KVs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc1_32_32;
      MR_Box STATE_VARIABLE_Acc2_33_33;
      MR_Box STATE_VARIABLE_Acc3_34_34;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_7;

      func_0(((MR_Box) (HeadVar__1_1)), V_21, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_32_32, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_33_33, STATE_VARIABLE_Acc3_0_7, &STATE_VARIABLE_Acc3_34_34);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_22;
      next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_32_32;
      next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_33_33;
      next_value_of_STATE_VARIABLE_Acc3_0_7 = STATE_VARIABLE_Acc3_34_34;
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
mercury__kv_list__foldl3_8_p_6_1(
  void * env_ptr_arg)
{
  {
    struct mercury__kv_list__foldl3_8_p_6_env_0_s * env_ptr = (struct mercury__kv_list__foldl3_8_p_6_env_0_s *) (env_ptr_arg);

    mercury__kv_list__foldl3_8_p_6((env_ptr)->mercury__kv_list__foldl3_8_p_6_env_0__TypeInfo_for_K_38, (env_ptr)->mercury__kv_list__foldl3_8_p_6_env_0__TypeInfo_for_V_39, (env_ptr)->mercury__kv_list__foldl3_8_p_6_env_0__TypeInfo_for_A_40, (env_ptr)->mercury__kv_list__foldl3_8_p_6_env_0__TypeInfo_for_B_41, (env_ptr)->mercury__kv_list__foldl3_8_p_6_env_0__TypeInfo_for_C_42, (env_ptr)->mercury__kv_list__foldl3_8_p_6_env_0__HeadVar__1_1, (env_ptr)->mercury__kv_list__foldl3_8_p_6_env_0__TailKVs_22, (env_ptr)->mercury__kv_list__foldl3_8_p_6_env_0__STATE_VARIABLE_A_32_32, (env_ptr)->mercury__kv_list__foldl3_8_p_6_env_0__STATE_VARIABLE_A_4, (env_ptr)->mercury__kv_list__foldl3_8_p_6_env_0__STATE_VARIABLE_B_33_33, (env_ptr)->mercury__kv_list__foldl3_8_p_6_env_0__STATE_VARIABLE_B_6, (env_ptr)->mercury__kv_list__foldl3_8_p_6_env_0__STATE_VARIABLE_C_34_34, (env_ptr)->mercury__kv_list__foldl3_8_p_6_env_0__STATE_VARIABLE_C_8, (env_ptr)->mercury__kv_list__foldl3_8_p_6_env_0__cont, (env_ptr)->mercury__kv_list__foldl3_8_p_6_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__kv_list__foldl3_8_p_6(
  MR_Word TypeInfo_for_K_38,
  MR_Word TypeInfo_for_V_39,
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6,
  MR_Box STATE_VARIABLE_C_0_7,
  MR_Box * STATE_VARIABLE_C_8,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__kv_list__foldl3_8_p_6_env_0_s env;

    (env).mercury__kv_list__foldl3_8_p_6_env_0__TypeInfo_for_K_38 = TypeInfo_for_K_38;
    (env).mercury__kv_list__foldl3_8_p_6_env_0__TypeInfo_for_V_39 = TypeInfo_for_V_39;
    (env).mercury__kv_list__foldl3_8_p_6_env_0__TypeInfo_for_A_40 = TypeInfo_for_A_40;
    (env).mercury__kv_list__foldl3_8_p_6_env_0__TypeInfo_for_B_41 = TypeInfo_for_B_41;
    (env).mercury__kv_list__foldl3_8_p_6_env_0__TypeInfo_for_C_42 = TypeInfo_for_C_42;
    (env).mercury__kv_list__foldl3_8_p_6_env_0__HeadVar__1_1 = HeadVar__1_1;
    (env).mercury__kv_list__foldl3_8_p_6_env_0__STATE_VARIABLE_A_4 = STATE_VARIABLE_A_4;
    (env).mercury__kv_list__foldl3_8_p_6_env_0__STATE_VARIABLE_B_6 = STATE_VARIABLE_B_6;
    (env).mercury__kv_list__foldl3_8_p_6_env_0__STATE_VARIABLE_C_8 = STATE_VARIABLE_C_8;
    (env).mercury__kv_list__foldl3_8_p_6_env_0__cont = cont;
    (env).mercury__kv_list__foldl3_8_p_6_env_0__cont_env_ptr = cont_env_ptr;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *((env).mercury__kv_list__foldl3_8_p_6_env_0__STATE_VARIABLE_C_8) = STATE_VARIABLE_C_0_7;
      *((env).mercury__kv_list__foldl3_8_p_6_env_0__STATE_VARIABLE_B_6) = STATE_VARIABLE_B_0_5;
      *((env).mercury__kv_list__foldl3_8_p_6_env_0__STATE_VARIABLE_A_4) = STATE_VARIABLE_A_0_3;
      ((env).mercury__kv_list__foldl3_8_p_6_env_0__cont)((env).mercury__kv_list__foldl3_8_p_6_env_0__cont_env_ptr);
    }
    else
    {
      MR_Box K_20 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box V_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

      (env).mercury__kv_list__foldl3_8_p_6_env_0__TailKVs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__kv_list__foldl3_8_p_6_env_0__HeadVar__1_1, (MR_Integer) 1))));
      func_0(((MR_Box) ((env).mercury__kv_list__foldl3_8_p_6_env_0__HeadVar__1_1)), K_20, V_21, STATE_VARIABLE_A_0_3, &(env).mercury__kv_list__foldl3_8_p_6_env_0__STATE_VARIABLE_A_32_32, STATE_VARIABLE_B_0_5, &(env).mercury__kv_list__foldl3_8_p_6_env_0__STATE_VARIABLE_B_33_33, STATE_VARIABLE_C_0_7, &(env).mercury__kv_list__foldl3_8_p_6_env_0__STATE_VARIABLE_C_34_34, mercury__kv_list__foldl3_8_p_6_1, &env);
    }
  }
}

MR_bool MR_CALL 
mercury__kv_list__foldl3_8_p_5(
  MR_Word TypeInfo_for_K_38,
  MR_Word TypeInfo_for_V_39,
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6,
  MR_Box STATE_VARIABLE_C_0_7,
  MR_Box * STATE_VARIABLE_C_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_C_8 = STATE_VARIABLE_C_0_7;
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box K_20 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box V_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word TailKVs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_32_32;
      MR_Box STATE_VARIABLE_B_33_33;
      MR_Box STATE_VARIABLE_C_34_34;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;
      MR_Box next_value_of_STATE_VARIABLE_C_0_7;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_20, V_21, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_32_32, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_33_33, STATE_VARIABLE_C_0_7, &STATE_VARIABLE_C_34_34);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = TailKVs_22;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_32_32;
        next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_33_33;
        next_value_of_STATE_VARIABLE_C_0_7 = STATE_VARIABLE_C_34_34;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
        STATE_VARIABLE_C_0_7 = next_value_of_STATE_VARIABLE_C_0_7;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__kv_list__foldl3_8_p_4(
  MR_Word TypeInfo_for_K_38,
  MR_Word TypeInfo_for_V_39,
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6,
  MR_Box STATE_VARIABLE_C_0_7,
  MR_Box * STATE_VARIABLE_C_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_C_8 = STATE_VARIABLE_C_0_7;
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box K_20 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box V_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word TailKVs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_32_32;
      MR_Box STATE_VARIABLE_B_33_33;
      MR_Box STATE_VARIABLE_C_34_34;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;
      MR_Box next_value_of_STATE_VARIABLE_C_0_7;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_20, V_21, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_32_32, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_33_33, STATE_VARIABLE_C_0_7, &STATE_VARIABLE_C_34_34);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = TailKVs_22;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_32_32;
        next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_33_33;
        next_value_of_STATE_VARIABLE_C_0_7 = STATE_VARIABLE_C_34_34;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
        STATE_VARIABLE_C_0_7 = next_value_of_STATE_VARIABLE_C_0_7;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__kv_list__foldl3_8_p_3(
  MR_Word TypeInfo_for_K_38,
  MR_Word TypeInfo_for_V_39,
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6,
  MR_Box STATE_VARIABLE_C_0_7,
  MR_Box * STATE_VARIABLE_C_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_C_8 = STATE_VARIABLE_C_0_7;
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box K_20 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box V_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word TailKVs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_32_32;
      MR_Box STATE_VARIABLE_B_33_33;
      MR_Box STATE_VARIABLE_C_34_34;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;
      MR_Box next_value_of_STATE_VARIABLE_C_0_7;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_20, V_21, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_32_32, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_33_33, STATE_VARIABLE_C_0_7, &STATE_VARIABLE_C_34_34);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = TailKVs_22;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_32_32;
        next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_33_33;
        next_value_of_STATE_VARIABLE_C_0_7 = STATE_VARIABLE_C_34_34;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
        STATE_VARIABLE_C_0_7 = next_value_of_STATE_VARIABLE_C_0_7;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__kv_list__foldl3_8_p_2(
  MR_Word TypeInfo_for_K_38,
  MR_Word TypeInfo_for_V_39,
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6,
  MR_Box STATE_VARIABLE_C_0_7,
  MR_Box * STATE_VARIABLE_C_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_C_8 = STATE_VARIABLE_C_0_7;
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    }
    else
    {
      MR_Box K_20 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box V_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word TailKVs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_32_32;
      MR_Box STATE_VARIABLE_B_33_33;
      MR_Box STATE_VARIABLE_C_34_34;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;
      MR_Box next_value_of_STATE_VARIABLE_C_0_7;

      func_0(((MR_Box) (HeadVar__1_1)), K_20, V_21, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_32_32, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_33_33, STATE_VARIABLE_C_0_7, &STATE_VARIABLE_C_34_34);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TailKVs_22;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_32_32;
      next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_33_33;
      next_value_of_STATE_VARIABLE_C_0_7 = STATE_VARIABLE_C_34_34;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
      STATE_VARIABLE_C_0_7 = next_value_of_STATE_VARIABLE_C_0_7;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__kv_list__foldl3_8_p_1(
  MR_Word TypeInfo_for_K_38,
  MR_Word TypeInfo_for_V_39,
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6,
  MR_Box STATE_VARIABLE_C_0_7,
  MR_Box * STATE_VARIABLE_C_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_C_8 = STATE_VARIABLE_C_0_7;
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    }
    else
    {
      MR_Box K_20 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box V_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word TailKVs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_32_32;
      MR_Box STATE_VARIABLE_B_33_33;
      MR_Box STATE_VARIABLE_C_34_34;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;
      MR_Box next_value_of_STATE_VARIABLE_C_0_7;

      func_0(((MR_Box) (HeadVar__1_1)), K_20, V_21, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_32_32, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_33_33, STATE_VARIABLE_C_0_7, &STATE_VARIABLE_C_34_34);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TailKVs_22;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_32_32;
      next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_33_33;
      next_value_of_STATE_VARIABLE_C_0_7 = STATE_VARIABLE_C_34_34;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
      STATE_VARIABLE_C_0_7 = next_value_of_STATE_VARIABLE_C_0_7;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__kv_list__foldl3_8_p_0(
  MR_Word TypeInfo_for_K_38,
  MR_Word TypeInfo_for_V_39,
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6,
  MR_Box STATE_VARIABLE_C_0_7,
  MR_Box * STATE_VARIABLE_C_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_C_8 = STATE_VARIABLE_C_0_7;
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    }
    else
    {
      MR_Box K_20 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box V_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word TailKVs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_32_32;
      MR_Box STATE_VARIABLE_B_33_33;
      MR_Box STATE_VARIABLE_C_34_34;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;
      MR_Box next_value_of_STATE_VARIABLE_C_0_7;

      func_0(((MR_Box) (HeadVar__1_1)), K_20, V_21, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_32_32, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_33_33, STATE_VARIABLE_C_0_7, &STATE_VARIABLE_C_34_34);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TailKVs_22;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_32_32;
      next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_33_33;
      next_value_of_STATE_VARIABLE_C_0_7 = STATE_VARIABLE_C_34_34;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
      STATE_VARIABLE_C_0_7 = next_value_of_STATE_VARIABLE_C_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__kv_list__foldl2_values_6_p_7_1(
  void * env_ptr_arg)
{
  {
    struct mercury__kv_list__foldl2_values_6_p_7_env_0_s * env_ptr = (struct mercury__kv_list__foldl2_values_6_p_7_env_0_s *) (env_ptr_arg);

    mercury__kv_list__foldl2_values_6_p_7((env_ptr)->mercury__kv_list__foldl2_values_6_p_7_env_0__TypeInfo_for_V_28, (env_ptr)->mercury__kv_list__foldl2_values_6_p_7_env_0__TypeInfo_for_A_29, (env_ptr)->mercury__kv_list__foldl2_values_6_p_7_env_0__TypeInfo_for_B_30, (env_ptr)->mercury__kv_list__foldl2_values_6_p_7_env_0__TypeInfo_for_K_31, (env_ptr)->mercury__kv_list__foldl2_values_6_p_7_env_0__HeadVar__1_1, (env_ptr)->mercury__kv_list__foldl2_values_6_p_7_env_0__KVs_17, (env_ptr)->mercury__kv_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_24_24, (env_ptr)->mercury__kv_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_4, (env_ptr)->mercury__kv_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_25_25, (env_ptr)->mercury__kv_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_6, (env_ptr)->mercury__kv_list__foldl2_values_6_p_7_env_0__cont, (env_ptr)->mercury__kv_list__foldl2_values_6_p_7_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__kv_list__foldl2_values_6_p_7(
  MR_Word TypeInfo_for_V_28,
  MR_Word TypeInfo_for_A_29,
  MR_Word TypeInfo_for_B_30,
  MR_Word TypeInfo_for_K_31,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__kv_list__foldl2_values_6_p_7_env_0_s env;

    (env).mercury__kv_list__foldl2_values_6_p_7_env_0__TypeInfo_for_V_28 = TypeInfo_for_V_28;
    (env).mercury__kv_list__foldl2_values_6_p_7_env_0__TypeInfo_for_A_29 = TypeInfo_for_A_29;
    (env).mercury__kv_list__foldl2_values_6_p_7_env_0__TypeInfo_for_B_30 = TypeInfo_for_B_30;
    (env).mercury__kv_list__foldl2_values_6_p_7_env_0__TypeInfo_for_K_31 = TypeInfo_for_K_31;
    (env).mercury__kv_list__foldl2_values_6_p_7_env_0__HeadVar__1_1 = HeadVar__1_1;
    (env).mercury__kv_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_4;
    (env).mercury__kv_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_6;
    (env).mercury__kv_list__foldl2_values_6_p_7_env_0__cont = cont;
    (env).mercury__kv_list__foldl2_values_6_p_7_env_0__cont_env_ptr = cont_env_ptr;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *((env).mercury__kv_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_6) = STATE_VARIABLE_Acc2_0_5;
      *((env).mercury__kv_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_4) = STATE_VARIABLE_Acc1_0_3;
      ((env).mercury__kv_list__foldl2_values_6_p_7_env_0__cont)((env).mercury__kv_list__foldl2_values_6_p_7_env_0__cont_env_ptr);
    }
    else
    {
      MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Box _K_15 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

      (env).mercury__kv_list__foldl2_values_6_p_7_env_0__KVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__kv_list__foldl2_values_6_p_7_env_0__HeadVar__1_1, (MR_Integer) 1))));
      func_0(((MR_Box) ((env).mercury__kv_list__foldl2_values_6_p_7_env_0__HeadVar__1_1)), V_16, STATE_VARIABLE_Acc1_0_3, &(env).mercury__kv_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_24_24, STATE_VARIABLE_Acc2_0_5, &(env).mercury__kv_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_25_25, mercury__kv_list__foldl2_values_6_p_7_1, &env);
    }
  }
}

static void MR_CALL 
mercury__kv_list__foldl2_values_6_p_6_1(
  void * env_ptr_arg)
{
  {
    struct mercury__kv_list__foldl2_values_6_p_6_env_0_s * env_ptr = (struct mercury__kv_list__foldl2_values_6_p_6_env_0_s *) (env_ptr_arg);

    mercury__kv_list__foldl2_values_6_p_6((env_ptr)->mercury__kv_list__foldl2_values_6_p_6_env_0__TypeInfo_for_V_28, (env_ptr)->mercury__kv_list__foldl2_values_6_p_6_env_0__TypeInfo_for_A_29, (env_ptr)->mercury__kv_list__foldl2_values_6_p_6_env_0__TypeInfo_for_B_30, (env_ptr)->mercury__kv_list__foldl2_values_6_p_6_env_0__TypeInfo_for_K_31, (env_ptr)->mercury__kv_list__foldl2_values_6_p_6_env_0__HeadVar__1_1, (env_ptr)->mercury__kv_list__foldl2_values_6_p_6_env_0__KVs_17, (env_ptr)->mercury__kv_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_24_24, (env_ptr)->mercury__kv_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_4, (env_ptr)->mercury__kv_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_25_25, (env_ptr)->mercury__kv_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_6, (env_ptr)->mercury__kv_list__foldl2_values_6_p_6_env_0__cont, (env_ptr)->mercury__kv_list__foldl2_values_6_p_6_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__kv_list__foldl2_values_6_p_6(
  MR_Word TypeInfo_for_V_28,
  MR_Word TypeInfo_for_A_29,
  MR_Word TypeInfo_for_B_30,
  MR_Word TypeInfo_for_K_31,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__kv_list__foldl2_values_6_p_6_env_0_s env;

    (env).mercury__kv_list__foldl2_values_6_p_6_env_0__TypeInfo_for_V_28 = TypeInfo_for_V_28;
    (env).mercury__kv_list__foldl2_values_6_p_6_env_0__TypeInfo_for_A_29 = TypeInfo_for_A_29;
    (env).mercury__kv_list__foldl2_values_6_p_6_env_0__TypeInfo_for_B_30 = TypeInfo_for_B_30;
    (env).mercury__kv_list__foldl2_values_6_p_6_env_0__TypeInfo_for_K_31 = TypeInfo_for_K_31;
    (env).mercury__kv_list__foldl2_values_6_p_6_env_0__HeadVar__1_1 = HeadVar__1_1;
    (env).mercury__kv_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_4;
    (env).mercury__kv_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_6;
    (env).mercury__kv_list__foldl2_values_6_p_6_env_0__cont = cont;
    (env).mercury__kv_list__foldl2_values_6_p_6_env_0__cont_env_ptr = cont_env_ptr;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *((env).mercury__kv_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_6) = STATE_VARIABLE_Acc2_0_5;
      *((env).mercury__kv_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_4) = STATE_VARIABLE_Acc1_0_3;
      ((env).mercury__kv_list__foldl2_values_6_p_6_env_0__cont)((env).mercury__kv_list__foldl2_values_6_p_6_env_0__cont_env_ptr);
    }
    else
    {
      MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Box _K_15 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

      (env).mercury__kv_list__foldl2_values_6_p_6_env_0__KVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__kv_list__foldl2_values_6_p_6_env_0__HeadVar__1_1, (MR_Integer) 1))));
      func_0(((MR_Box) ((env).mercury__kv_list__foldl2_values_6_p_6_env_0__HeadVar__1_1)), V_16, STATE_VARIABLE_Acc1_0_3, &(env).mercury__kv_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_24_24, STATE_VARIABLE_Acc2_0_5, &(env).mercury__kv_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_25_25, mercury__kv_list__foldl2_values_6_p_6_1, &env);
    }
  }
}

MR_bool MR_CALL 
mercury__kv_list__foldl2_values_6_p_5(
  MR_Word TypeInfo_for_V_28,
  MR_Word TypeInfo_for_A_29,
  MR_Word TypeInfo_for_B_30,
  MR_Word TypeInfo_for_K_31,
  MR_Word HeadVar__1_1,
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
      MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word KVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc1_24_24;
      MR_Box STATE_VARIABLE_Acc2_25_25;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), V_16, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_24_24, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_25_25);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_17;
        next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_24_24;
        next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_25_25;
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
mercury__kv_list__foldl2_values_6_p_4(
  MR_Word TypeInfo_for_V_28,
  MR_Word TypeInfo_for_A_29,
  MR_Word TypeInfo_for_B_30,
  MR_Word TypeInfo_for_K_31,
  MR_Word HeadVar__1_1,
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
      MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word KVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc1_24_24;
      MR_Box STATE_VARIABLE_Acc2_25_25;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), V_16, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_24_24, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_25_25);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_17;
        next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_24_24;
        next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_25_25;
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
mercury__kv_list__foldl2_values_6_p_3(
  MR_Word TypeInfo_for_V_28,
  MR_Word TypeInfo_for_A_29,
  MR_Word TypeInfo_for_B_30,
  MR_Word TypeInfo_for_K_31,
  MR_Word HeadVar__1_1,
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
      MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word KVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc1_24_24;
      MR_Box STATE_VARIABLE_Acc2_25_25;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), V_16, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_24_24, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_25_25);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_17;
        next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_24_24;
        next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_25_25;
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
mercury__kv_list__foldl2_values_6_p_2(
  MR_Word TypeInfo_for_V_28,
  MR_Word TypeInfo_for_A_29,
  MR_Word TypeInfo_for_B_30,
  MR_Word TypeInfo_for_K_31,
  MR_Word HeadVar__1_1,
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
      MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word KVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc1_24_24;
      MR_Box STATE_VARIABLE_Acc2_25_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

      func_0(((MR_Box) (HeadVar__1_1)), V_16, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_24_24, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_25_25);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_17;
      next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_24_24;
      next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_25_25;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
      STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__kv_list__foldl2_values_6_p_1(
  MR_Word TypeInfo_for_V_28,
  MR_Word TypeInfo_for_A_29,
  MR_Word TypeInfo_for_B_30,
  MR_Word TypeInfo_for_K_31,
  MR_Word HeadVar__1_1,
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
      MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word KVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc1_24_24;
      MR_Box STATE_VARIABLE_Acc2_25_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

      func_0(((MR_Box) (HeadVar__1_1)), V_16, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_24_24, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_25_25);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_17;
      next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_24_24;
      next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_25_25;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
      STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__kv_list__foldl2_values_6_p_0(
  MR_Word TypeInfo_for_V_28,
  MR_Word TypeInfo_for_A_29,
  MR_Word TypeInfo_for_B_30,
  MR_Word TypeInfo_for_K_31,
  MR_Word HeadVar__1_1,
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
      MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word KVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc1_24_24;
      MR_Box STATE_VARIABLE_Acc2_25_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

      func_0(((MR_Box) (HeadVar__1_1)), V_16, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_24_24, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_25_25);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_17;
      next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_24_24;
      next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_25_25;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
      STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__kv_list__foldl2_6_p_6_1(
  void * env_ptr_arg)
{
  {
    struct mercury__kv_list__foldl2_6_p_6_env_0_s * env_ptr = (struct mercury__kv_list__foldl2_6_p_6_env_0_s *) (env_ptr_arg);

    mercury__kv_list__foldl2_6_p_6((env_ptr)->mercury__kv_list__foldl2_6_p_6_env_0__TypeInfo_for_K_28, (env_ptr)->mercury__kv_list__foldl2_6_p_6_env_0__TypeInfo_for_V_29, (env_ptr)->mercury__kv_list__foldl2_6_p_6_env_0__TypeInfo_for_A_30, (env_ptr)->mercury__kv_list__foldl2_6_p_6_env_0__TypeInfo_for_B_31, (env_ptr)->mercury__kv_list__foldl2_6_p_6_env_0__HeadVar__1_1, (env_ptr)->mercury__kv_list__foldl2_6_p_6_env_0__TailKVs_17, (env_ptr)->mercury__kv_list__foldl2_6_p_6_env_0__STATE_VARIABLE_A_24_24, (env_ptr)->mercury__kv_list__foldl2_6_p_6_env_0__STATE_VARIABLE_A_4, (env_ptr)->mercury__kv_list__foldl2_6_p_6_env_0__STATE_VARIABLE_B_25_25, (env_ptr)->mercury__kv_list__foldl2_6_p_6_env_0__STATE_VARIABLE_B_6, (env_ptr)->mercury__kv_list__foldl2_6_p_6_env_0__cont, (env_ptr)->mercury__kv_list__foldl2_6_p_6_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__kv_list__foldl2_6_p_6(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__kv_list__foldl2_6_p_6_env_0_s env;

    (env).mercury__kv_list__foldl2_6_p_6_env_0__TypeInfo_for_K_28 = TypeInfo_for_K_28;
    (env).mercury__kv_list__foldl2_6_p_6_env_0__TypeInfo_for_V_29 = TypeInfo_for_V_29;
    (env).mercury__kv_list__foldl2_6_p_6_env_0__TypeInfo_for_A_30 = TypeInfo_for_A_30;
    (env).mercury__kv_list__foldl2_6_p_6_env_0__TypeInfo_for_B_31 = TypeInfo_for_B_31;
    (env).mercury__kv_list__foldl2_6_p_6_env_0__HeadVar__1_1 = HeadVar__1_1;
    (env).mercury__kv_list__foldl2_6_p_6_env_0__STATE_VARIABLE_A_4 = STATE_VARIABLE_A_4;
    (env).mercury__kv_list__foldl2_6_p_6_env_0__STATE_VARIABLE_B_6 = STATE_VARIABLE_B_6;
    (env).mercury__kv_list__foldl2_6_p_6_env_0__cont = cont;
    (env).mercury__kv_list__foldl2_6_p_6_env_0__cont_env_ptr = cont_env_ptr;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *((env).mercury__kv_list__foldl2_6_p_6_env_0__STATE_VARIABLE_B_6) = STATE_VARIABLE_B_0_5;
      *((env).mercury__kv_list__foldl2_6_p_6_env_0__STATE_VARIABLE_A_4) = STATE_VARIABLE_A_0_3;
      ((env).mercury__kv_list__foldl2_6_p_6_env_0__cont)((env).mercury__kv_list__foldl2_6_p_6_env_0__cont_env_ptr);
    }
    else
    {
      MR_Box K_15 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

      (env).mercury__kv_list__foldl2_6_p_6_env_0__TailKVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__kv_list__foldl2_6_p_6_env_0__HeadVar__1_1, (MR_Integer) 1))));
      func_0(((MR_Box) ((env).mercury__kv_list__foldl2_6_p_6_env_0__HeadVar__1_1)), K_15, V_16, STATE_VARIABLE_A_0_3, &(env).mercury__kv_list__foldl2_6_p_6_env_0__STATE_VARIABLE_A_24_24, STATE_VARIABLE_B_0_5, &(env).mercury__kv_list__foldl2_6_p_6_env_0__STATE_VARIABLE_B_25_25, mercury__kv_list__foldl2_6_p_6_1, &env);
    }
  }
}

MR_bool MR_CALL 
mercury__kv_list__foldl2_6_p_5(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box K_15 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word TailKVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_24_24;
      MR_Box STATE_VARIABLE_B_25_25;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_15, V_16, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_24_24, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_25_25);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = TailKVs_17;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_24_24;
        next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_25_25;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__kv_list__foldl2_6_p_4(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box K_15 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word TailKVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_24_24;
      MR_Box STATE_VARIABLE_B_25_25;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_15, V_16, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_24_24, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_25_25);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = TailKVs_17;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_24_24;
        next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_25_25;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__kv_list__foldl2_6_p_3(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box K_15 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word TailKVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_24_24;
      MR_Box STATE_VARIABLE_B_25_25;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_15, V_16, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_24_24, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_25_25);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = TailKVs_17;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_24_24;
        next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_25_25;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__kv_list__foldl2_6_p_2(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    }
    else
    {
      MR_Box K_15 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word TailKVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_24_24;
      MR_Box STATE_VARIABLE_B_25_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;

      func_0(((MR_Box) (HeadVar__1_1)), K_15, V_16, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_24_24, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_25_25);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TailKVs_17;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_24_24;
      next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_25_25;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__kv_list__foldl2_6_p_1(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    }
    else
    {
      MR_Box K_15 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word TailKVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_24_24;
      MR_Box STATE_VARIABLE_B_25_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;

      func_0(((MR_Box) (HeadVar__1_1)), K_15, V_16, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_24_24, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_25_25);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TailKVs_17;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_24_24;
      next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_25_25;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__kv_list__foldl2_6_p_0(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    }
    else
    {
      MR_Box K_15 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word TailKVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_24_24;
      MR_Box STATE_VARIABLE_B_25_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;

      func_0(((MR_Box) (HeadVar__1_1)), K_15, V_16, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_24_24, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_25_25);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TailKVs_17;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_24_24;
      next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_25_25;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__kv_list__foldl_values_4_p_7_1(
  void * env_ptr_arg)
{
  {
    struct mercury__kv_list__foldl_values_4_p_7_env_0_s * env_ptr = (struct mercury__kv_list__foldl_values_4_p_7_env_0_s *) (env_ptr_arg);

    mercury__kv_list__foldl_values_4_p_7((env_ptr)->mercury__kv_list__foldl_values_4_p_7_env_0__TypeInfo_for_V_18, (env_ptr)->mercury__kv_list__foldl_values_4_p_7_env_0__TypeInfo_for_A_19, (env_ptr)->mercury__kv_list__foldl_values_4_p_7_env_0__TypeInfo_for_K_20, (env_ptr)->mercury__kv_list__foldl_values_4_p_7_env_0__HeadVar__1_1, (env_ptr)->mercury__kv_list__foldl_values_4_p_7_env_0__KVs_12, (env_ptr)->mercury__kv_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_16_16, (env_ptr)->mercury__kv_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_4, (env_ptr)->mercury__kv_list__foldl_values_4_p_7_env_0__cont, (env_ptr)->mercury__kv_list__foldl_values_4_p_7_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__kv_list__foldl_values_4_p_7(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__kv_list__foldl_values_4_p_7_env_0_s env;

    (env).mercury__kv_list__foldl_values_4_p_7_env_0__TypeInfo_for_V_18 = TypeInfo_for_V_18;
    (env).mercury__kv_list__foldl_values_4_p_7_env_0__TypeInfo_for_A_19 = TypeInfo_for_A_19;
    (env).mercury__kv_list__foldl_values_4_p_7_env_0__TypeInfo_for_K_20 = TypeInfo_for_K_20;
    (env).mercury__kv_list__foldl_values_4_p_7_env_0__HeadVar__1_1 = HeadVar__1_1;
    (env).mercury__kv_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_4;
    (env).mercury__kv_list__foldl_values_4_p_7_env_0__cont = cont;
    (env).mercury__kv_list__foldl_values_4_p_7_env_0__cont_env_ptr = cont_env_ptr;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *((env).mercury__kv_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_4) = STATE_VARIABLE_Acc_0_3;
      ((env).mercury__kv_list__foldl_values_4_p_7_env_0__cont)((env).mercury__kv_list__foldl_values_4_p_7_env_0__cont_env_ptr);
    }
    else
    {
      MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Box _K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

      (env).mercury__kv_list__foldl_values_4_p_7_env_0__KVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__kv_list__foldl_values_4_p_7_env_0__HeadVar__1_1, (MR_Integer) 1))));
      func_0(((MR_Box) ((env).mercury__kv_list__foldl_values_4_p_7_env_0__HeadVar__1_1)), V_11, STATE_VARIABLE_Acc_0_3, &(env).mercury__kv_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_16_16, mercury__kv_list__foldl_values_4_p_7_1, &env);
    }
  }
}

static void MR_CALL 
mercury__kv_list__foldl_values_4_p_6_1(
  void * env_ptr_arg)
{
  {
    struct mercury__kv_list__foldl_values_4_p_6_env_0_s * env_ptr = (struct mercury__kv_list__foldl_values_4_p_6_env_0_s *) (env_ptr_arg);

    mercury__kv_list__foldl_values_4_p_6((env_ptr)->mercury__kv_list__foldl_values_4_p_6_env_0__TypeInfo_for_V_18, (env_ptr)->mercury__kv_list__foldl_values_4_p_6_env_0__TypeInfo_for_A_19, (env_ptr)->mercury__kv_list__foldl_values_4_p_6_env_0__TypeInfo_for_K_20, (env_ptr)->mercury__kv_list__foldl_values_4_p_6_env_0__HeadVar__1_1, (env_ptr)->mercury__kv_list__foldl_values_4_p_6_env_0__KVs_12, (env_ptr)->mercury__kv_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_16_16, (env_ptr)->mercury__kv_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_4, (env_ptr)->mercury__kv_list__foldl_values_4_p_6_env_0__cont, (env_ptr)->mercury__kv_list__foldl_values_4_p_6_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__kv_list__foldl_values_4_p_6(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__kv_list__foldl_values_4_p_6_env_0_s env;

    (env).mercury__kv_list__foldl_values_4_p_6_env_0__TypeInfo_for_V_18 = TypeInfo_for_V_18;
    (env).mercury__kv_list__foldl_values_4_p_6_env_0__TypeInfo_for_A_19 = TypeInfo_for_A_19;
    (env).mercury__kv_list__foldl_values_4_p_6_env_0__TypeInfo_for_K_20 = TypeInfo_for_K_20;
    (env).mercury__kv_list__foldl_values_4_p_6_env_0__HeadVar__1_1 = HeadVar__1_1;
    (env).mercury__kv_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_4;
    (env).mercury__kv_list__foldl_values_4_p_6_env_0__cont = cont;
    (env).mercury__kv_list__foldl_values_4_p_6_env_0__cont_env_ptr = cont_env_ptr;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *((env).mercury__kv_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_4) = STATE_VARIABLE_Acc_0_3;
      ((env).mercury__kv_list__foldl_values_4_p_6_env_0__cont)((env).mercury__kv_list__foldl_values_4_p_6_env_0__cont_env_ptr);
    }
    else
    {
      MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Box _K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

      (env).mercury__kv_list__foldl_values_4_p_6_env_0__KVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__kv_list__foldl_values_4_p_6_env_0__HeadVar__1_1, (MR_Integer) 1))));
      func_0(((MR_Box) ((env).mercury__kv_list__foldl_values_4_p_6_env_0__HeadVar__1_1)), V_11, STATE_VARIABLE_Acc_0_3, &(env).mercury__kv_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_16_16, mercury__kv_list__foldl_values_4_p_6_1, &env);
    }
  }
}

MR_bool MR_CALL 
mercury__kv_list__foldl_values_4_p_5(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word HeadVar__1_1,
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
      MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word KVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), V_11, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_16_16);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_12;
        next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_16_16;
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
mercury__kv_list__foldl_values_4_p_4(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word HeadVar__1_1,
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
      MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word KVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), V_11, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_16_16);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_12;
        next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_16_16;
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
mercury__kv_list__foldl_values_4_p_3(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word HeadVar__1_1,
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
      MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word KVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), V_11, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_16_16);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_12;
        next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_16_16;
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
mercury__kv_list__foldl_values_4_p_2(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word HeadVar__1_1,
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
      MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word KVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc_16_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      func_0(((MR_Box) (HeadVar__1_1)), V_11, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_12;
      next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_16_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__kv_list__foldl_values_4_p_1(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word HeadVar__1_1,
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
      MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word KVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc_16_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      func_0(((MR_Box) (HeadVar__1_1)), V_11, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_12;
      next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_16_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__kv_list__foldl_values_4_p_0(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word HeadVar__1_1,
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
      MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word KVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc_16_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      func_0(((MR_Box) (HeadVar__1_1)), V_11, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_12;
      next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_16_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
      continue;
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__kv_list__foldl_values_3_f_0(
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_K_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_Box HeadVar__4_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Box V_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word KVs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc_14_14;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

      STATE_VARIABLE_Acc_14_14 = func_0(((MR_Box) (HeadVar__1_1)), V_9, HeadVar__3_3);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_10;
      next_value_of_HeadVar__3_3 = STATE_VARIABLE_Acc_14_14;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    return HeadVar__4_4;
    break;
  }
}

static void MR_CALL 
mercury__kv_list__foldl_keys_4_p_7_1(
  void * env_ptr_arg)
{
  {
    struct mercury__kv_list__foldl_keys_4_p_7_env_0_s * env_ptr = (struct mercury__kv_list__foldl_keys_4_p_7_env_0_s *) (env_ptr_arg);

    mercury__kv_list__foldl_keys_4_p_7((env_ptr)->mercury__kv_list__foldl_keys_4_p_7_env_0__TypeInfo_for_K_18, (env_ptr)->mercury__kv_list__foldl_keys_4_p_7_env_0__TypeInfo_for_A_19, (env_ptr)->mercury__kv_list__foldl_keys_4_p_7_env_0__TypeInfo_for_V_20, (env_ptr)->mercury__kv_list__foldl_keys_4_p_7_env_0__HeadVar__1_1, (env_ptr)->mercury__kv_list__foldl_keys_4_p_7_env_0__KVs_12, (env_ptr)->mercury__kv_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_16_16, (env_ptr)->mercury__kv_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_4, (env_ptr)->mercury__kv_list__foldl_keys_4_p_7_env_0__cont, (env_ptr)->mercury__kv_list__foldl_keys_4_p_7_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__kv_list__foldl_keys_4_p_7(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__kv_list__foldl_keys_4_p_7_env_0_s env;

    (env).mercury__kv_list__foldl_keys_4_p_7_env_0__TypeInfo_for_K_18 = TypeInfo_for_K_18;
    (env).mercury__kv_list__foldl_keys_4_p_7_env_0__TypeInfo_for_A_19 = TypeInfo_for_A_19;
    (env).mercury__kv_list__foldl_keys_4_p_7_env_0__TypeInfo_for_V_20 = TypeInfo_for_V_20;
    (env).mercury__kv_list__foldl_keys_4_p_7_env_0__HeadVar__1_1 = HeadVar__1_1;
    (env).mercury__kv_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_4;
    (env).mercury__kv_list__foldl_keys_4_p_7_env_0__cont = cont;
    (env).mercury__kv_list__foldl_keys_4_p_7_env_0__cont_env_ptr = cont_env_ptr;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *((env).mercury__kv_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_4) = STATE_VARIABLE_Acc_0_3;
      ((env).mercury__kv_list__foldl_keys_4_p_7_env_0__cont)((env).mercury__kv_list__foldl_keys_4_p_7_env_0__cont_env_ptr);
    }
    else
    {
      MR_Box K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box _V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

      (env).mercury__kv_list__foldl_keys_4_p_7_env_0__KVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__kv_list__foldl_keys_4_p_7_env_0__HeadVar__1_1, (MR_Integer) 1))));
      func_0(((MR_Box) ((env).mercury__kv_list__foldl_keys_4_p_7_env_0__HeadVar__1_1)), K_10, STATE_VARIABLE_Acc_0_3, &(env).mercury__kv_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_16_16, mercury__kv_list__foldl_keys_4_p_7_1, &env);
    }
  }
}

static void MR_CALL 
mercury__kv_list__foldl_keys_4_p_6_1(
  void * env_ptr_arg)
{
  {
    struct mercury__kv_list__foldl_keys_4_p_6_env_0_s * env_ptr = (struct mercury__kv_list__foldl_keys_4_p_6_env_0_s *) (env_ptr_arg);

    mercury__kv_list__foldl_keys_4_p_6((env_ptr)->mercury__kv_list__foldl_keys_4_p_6_env_0__TypeInfo_for_K_18, (env_ptr)->mercury__kv_list__foldl_keys_4_p_6_env_0__TypeInfo_for_A_19, (env_ptr)->mercury__kv_list__foldl_keys_4_p_6_env_0__TypeInfo_for_V_20, (env_ptr)->mercury__kv_list__foldl_keys_4_p_6_env_0__HeadVar__1_1, (env_ptr)->mercury__kv_list__foldl_keys_4_p_6_env_0__KVs_12, (env_ptr)->mercury__kv_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_16_16, (env_ptr)->mercury__kv_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_4, (env_ptr)->mercury__kv_list__foldl_keys_4_p_6_env_0__cont, (env_ptr)->mercury__kv_list__foldl_keys_4_p_6_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__kv_list__foldl_keys_4_p_6(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__kv_list__foldl_keys_4_p_6_env_0_s env;

    (env).mercury__kv_list__foldl_keys_4_p_6_env_0__TypeInfo_for_K_18 = TypeInfo_for_K_18;
    (env).mercury__kv_list__foldl_keys_4_p_6_env_0__TypeInfo_for_A_19 = TypeInfo_for_A_19;
    (env).mercury__kv_list__foldl_keys_4_p_6_env_0__TypeInfo_for_V_20 = TypeInfo_for_V_20;
    (env).mercury__kv_list__foldl_keys_4_p_6_env_0__HeadVar__1_1 = HeadVar__1_1;
    (env).mercury__kv_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_4;
    (env).mercury__kv_list__foldl_keys_4_p_6_env_0__cont = cont;
    (env).mercury__kv_list__foldl_keys_4_p_6_env_0__cont_env_ptr = cont_env_ptr;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *((env).mercury__kv_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_4) = STATE_VARIABLE_Acc_0_3;
      ((env).mercury__kv_list__foldl_keys_4_p_6_env_0__cont)((env).mercury__kv_list__foldl_keys_4_p_6_env_0__cont_env_ptr);
    }
    else
    {
      MR_Box K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box _V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

      (env).mercury__kv_list__foldl_keys_4_p_6_env_0__KVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__kv_list__foldl_keys_4_p_6_env_0__HeadVar__1_1, (MR_Integer) 1))));
      func_0(((MR_Box) ((env).mercury__kv_list__foldl_keys_4_p_6_env_0__HeadVar__1_1)), K_10, STATE_VARIABLE_Acc_0_3, &(env).mercury__kv_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_16_16, mercury__kv_list__foldl_keys_4_p_6_1, &env);
    }
  }
}

MR_bool MR_CALL 
mercury__kv_list__foldl_keys_4_p_5(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word HeadVar__1_1,
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
      MR_Box K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word KVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_10, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_16_16);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_12;
        next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_16_16;
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
mercury__kv_list__foldl_keys_4_p_4(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word HeadVar__1_1,
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
      MR_Box K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word KVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_10, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_16_16);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_12;
        next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_16_16;
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
mercury__kv_list__foldl_keys_4_p_3(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word HeadVar__1_1,
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
      MR_Box K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word KVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_10, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_16_16);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_12;
        next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_16_16;
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
mercury__kv_list__foldl_keys_4_p_2(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word HeadVar__1_1,
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
      MR_Box K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word KVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc_16_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      func_0(((MR_Box) (HeadVar__1_1)), K_10, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_12;
      next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_16_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__kv_list__foldl_keys_4_p_1(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word HeadVar__1_1,
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
      MR_Box K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word KVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc_16_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      func_0(((MR_Box) (HeadVar__1_1)), K_10, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_12;
      next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_16_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__kv_list__foldl_keys_4_p_0(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word HeadVar__1_1,
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
      MR_Box K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word KVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc_16_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      func_0(((MR_Box) (HeadVar__1_1)), K_10, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_12;
      next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_16_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
      continue;
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__kv_list__foldl_keys_3_f_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_Box HeadVar__4_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Box K_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word KVs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc_14_14;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

      STATE_VARIABLE_Acc_14_14 = func_0(((MR_Box) (HeadVar__1_1)), K_8, HeadVar__3_3);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_10;
      next_value_of_HeadVar__3_3 = STATE_VARIABLE_Acc_14_14;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    return HeadVar__4_4;
    break;
  }
}

static void MR_CALL 
mercury__kv_list__foldl_4_p_6_1(
  void * env_ptr_arg)
{
  {
    struct mercury__kv_list__foldl_4_p_6_env_0_s * env_ptr = (struct mercury__kv_list__foldl_4_p_6_env_0_s *) (env_ptr_arg);

    mercury__kv_list__foldl_4_p_6((env_ptr)->mercury__kv_list__foldl_4_p_6_env_0__TypeInfo_for_K_18, (env_ptr)->mercury__kv_list__foldl_4_p_6_env_0__TypeInfo_for_V_19, (env_ptr)->mercury__kv_list__foldl_4_p_6_env_0__TypeInfo_for_A_20, (env_ptr)->mercury__kv_list__foldl_4_p_6_env_0__HeadVar__1_1, (env_ptr)->mercury__kv_list__foldl_4_p_6_env_0__TailKVs_12, (env_ptr)->mercury__kv_list__foldl_4_p_6_env_0__STATE_VARIABLE_Acc_16_16, (env_ptr)->mercury__kv_list__foldl_4_p_6_env_0__STATE_VARIABLE_Acc_4, (env_ptr)->mercury__kv_list__foldl_4_p_6_env_0__cont, (env_ptr)->mercury__kv_list__foldl_4_p_6_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__kv_list__foldl_4_p_6(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__kv_list__foldl_4_p_6_env_0_s env;

    (env).mercury__kv_list__foldl_4_p_6_env_0__TypeInfo_for_K_18 = TypeInfo_for_K_18;
    (env).mercury__kv_list__foldl_4_p_6_env_0__TypeInfo_for_V_19 = TypeInfo_for_V_19;
    (env).mercury__kv_list__foldl_4_p_6_env_0__TypeInfo_for_A_20 = TypeInfo_for_A_20;
    (env).mercury__kv_list__foldl_4_p_6_env_0__HeadVar__1_1 = HeadVar__1_1;
    (env).mercury__kv_list__foldl_4_p_6_env_0__STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_4;
    (env).mercury__kv_list__foldl_4_p_6_env_0__cont = cont;
    (env).mercury__kv_list__foldl_4_p_6_env_0__cont_env_ptr = cont_env_ptr;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *((env).mercury__kv_list__foldl_4_p_6_env_0__STATE_VARIABLE_Acc_4) = STATE_VARIABLE_Acc_0_3;
      ((env).mercury__kv_list__foldl_4_p_6_env_0__cont)((env).mercury__kv_list__foldl_4_p_6_env_0__cont_env_ptr);
    }
    else
    {
      MR_Box K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

      (env).mercury__kv_list__foldl_4_p_6_env_0__TailKVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__kv_list__foldl_4_p_6_env_0__HeadVar__1_1, (MR_Integer) 1))));
      func_0(((MR_Box) ((env).mercury__kv_list__foldl_4_p_6_env_0__HeadVar__1_1)), K_10, V_11, STATE_VARIABLE_Acc_0_3, &(env).mercury__kv_list__foldl_4_p_6_env_0__STATE_VARIABLE_Acc_16_16, mercury__kv_list__foldl_4_p_6_1, &env);
    }
  }
}

MR_bool MR_CALL 
mercury__kv_list__foldl_4_p_5(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word HeadVar__1_1,
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
      MR_Box K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word TailKVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_10, V_11, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_16_16);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = TailKVs_12;
        next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_16_16;
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
mercury__kv_list__foldl_4_p_4(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word HeadVar__1_1,
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
      MR_Box K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word TailKVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_10, V_11, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_16_16);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = TailKVs_12;
        next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_16_16;
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
mercury__kv_list__foldl_4_p_3(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word HeadVar__1_1,
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
      MR_Box K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word TailKVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_10, V_11, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_16_16);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = TailKVs_12;
        next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_16_16;
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
mercury__kv_list__foldl_4_p_2(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word HeadVar__1_1,
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
      MR_Box K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word TailKVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc_16_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      func_0(((MR_Box) (HeadVar__1_1)), K_10, V_11, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TailKVs_12;
      next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_16_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__kv_list__foldl_4_p_1(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word HeadVar__1_1,
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
      MR_Box K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word TailKVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc_16_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      func_0(((MR_Box) (HeadVar__1_1)), K_10, V_11, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TailKVs_12;
      next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_16_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__kv_list__foldl_4_p_0(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word HeadVar__1_1,
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
      MR_Box K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word TailKVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc_16_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      func_0(((MR_Box) (HeadVar__1_1)), K_10, V_11, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TailKVs_12;
      next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_16_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
      continue;
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__kv_list__foldl_3_f_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_Box HeadVar__4_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Box K_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box V_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word TailKVs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_Acc_14_14;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

      STATE_VARIABLE_Acc_14_14 = func_0(((MR_Box) (HeadVar__1_1)), K_8, V_9, HeadVar__3_3);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TailKVs_10;
      next_value_of_HeadVar__3_3 = STATE_VARIABLE_Acc_14_14;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    return HeadVar__4_4;
    break;
  }
}

MR_Word MR_CALL 
mercury__kv_list__merge_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word As_4,
  MR_Word Bs_5)
{
  {
    MR_Word ABs_6;

    mercury__kv_list__merge_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, As_4, Bs_5, &ABs_6);
    return ABs_6;
  }
}

void MR_CALL 
mercury__kv_list__merge_3_p_0(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = HeadVar__2_2;
    else
    {
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      MR_Box Var_25 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
      MR_Box Var_26 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__3_3 = HeadVar__1_1;
      else
      {
        MR_Box BK_14 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Box BV_15 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
        MR_Word BKVs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        MR_Word Var_23;

        mercury__builtin__compare_3_p_0(TypeInfo_for_K_21, &Var_23, Var_26, BK_14);
        succeeded = ((MR_Integer) 2 == Var_23);
        if (succeeded)
        {
          MR_Word CKVs_18;

          mercury__kv_list__merge_3_p_0(TypeInfo_for_K_21, TypeInfo_for_V_22, HeadVar__1_1, BKVs_16, &CKVs_18);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = BK_14;
            MR_hl_field(MR_mktag(1), base, 1) = BV_15;
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (CKVs_18));
          }
        }
        else
        {
          MR_Word CKVs_20;

          mercury__kv_list__merge_3_p_0(TypeInfo_for_K_21, TypeInfo_for_V_22, Var_24, HeadVar__2_2, &CKVs_20);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = Var_26;
            MR_hl_field(MR_mktag(1), base, 1) = Var_25;
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (CKVs_20));
          }
        }
      }
    }
  }
}

void MR_CALL 
mercury__kv_list__filter_4_p_0(
  MR_Word TypeInfo_for_K_14,
  MR_Word TypeInfo_for_V_15,
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
      MR_Box HeadK_7 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box HeadV_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word TailKVs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (P_1)), HeadK_7);
      if (succeeded)
      {
        MR_Word TailTrueKVs_12;

        mercury__kv_list__filter_4_p_0(TypeInfo_for_K_14, TypeInfo_for_V_15, P_1, TailKVs_9, &TailTrueKVs_12, HeadVar__4_4);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = HeadK_7;
          MR_hl_field(MR_mktag(1), base, 1) = HeadV_8;
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (TailTrueKVs_12));
        }
      }
      else
      {
        MR_Word TailFalseKVs_13;

        mercury__kv_list__filter_4_p_0(TypeInfo_for_K_14, TypeInfo_for_V_15, P_1, TailKVs_9, HeadVar__3_3, &TailFalseKVs_13);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = HeadK_7;
          MR_hl_field(MR_mktag(1), base, 1) = HeadV_8;
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (TailFalseKVs_13));
        }
      }
    }
  }
}

MR_Word MR_CALL 
mercury__kv_list__negated_filter_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word P_4,
  MR_Word List_5)
{
  {
    MR_Word Falses_6;

    mercury__kv_list__negated_filter_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, P_4, List_5, &Falses_6);
    return Falses_6;
  }
}

void MR_CALL 
mercury__kv_list__negated_filter_3_p_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
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
      MR_Box HeadK_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box HeadV_7 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word TailKVs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (P_1)), HeadK_6);
      if (succeeded)
      {
        MR_Word next_value_of_HeadVar__2_2 = TailKVs_8;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
      else
      {
        MR_Word TailFalseKVs_10;

        mercury__kv_list__negated_filter_3_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, P_1, TailKVs_8, &TailFalseKVs_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = HeadK_6;
          MR_hl_field(MR_mktag(1), base, 1) = HeadV_7;
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (TailFalseKVs_10));
        }
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__kv_list__filter_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word P_4,
  MR_Word List_5)
{
  {
    MR_Word Trues_6;

    mercury__kv_list__filter_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, P_4, List_5, &Trues_6);
    return Trues_6;
  }
}

void MR_CALL 
mercury__kv_list__filter_3_p_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
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
      MR_Box HeadK_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box HeadV_7 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word TailKVs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (P_1)), HeadK_6);
      if (succeeded)
      {
        MR_Word TailTrueKVs_10;

        mercury__kv_list__filter_3_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, P_1, TailKVs_8, &TailTrueKVs_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = HeadK_6;
          MR_hl_field(MR_mktag(1), base, 1) = HeadV_7;
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (TailTrueKVs_10));
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = TailKVs_8;

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
mercury__kv_list__map_values_3_p_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word TypeInfo_for_W_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box HeadK_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    MR_Box HeadV0_7 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
    MR_Word TailKVs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
    MR_Box HeadV_9;
    MR_Word TailKVs_10;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    func_0(((MR_Box) (HeadVar__1_1)), HeadK_6, HeadV0_7, &HeadV_9);
    mercury__kv_list__map_values_3_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, TypeInfo_for_W_13, HeadVar__1_1, TailKVs0_8, &TailKVs_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = HeadK_6;
      MR_hl_field(MR_mktag(1), base, 1) = HeadV_9;
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (TailKVs_10));
    }
  }
}

MR_Word MR_CALL 
mercury__kv_list__map_values_2_f_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word TypeInfo_for_W_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box HeadK_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box HeadV0_7 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word TailKVs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box HeadV_9;
      MR_Word TailKVs_10;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

      HeadV_9 = func_0(((MR_Box) (HeadVar__1_1)), HeadK_6, HeadV0_7);
      TailKVs_10 = mercury__kv_list__map_values_2_f_0(TypeInfo_for_K_11, TypeInfo_for_V_12, TypeInfo_for_W_13, HeadVar__1_1, TailKVs0_8);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = HeadK_6;
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = HeadV_9;
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 2) = ((MR_Box) (TailKVs_10));
      }
    }
    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__kv_list__map_values_only_3_p_0(
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_W_12,
  MR_Word TypeInfo_for_K_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box HeadK_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    MR_Box HeadV0_7 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
    MR_Word TailKVs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
    MR_Box HeadV_9;
    MR_Word TailKVs_10;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    func_0(((MR_Box) (HeadVar__1_1)), HeadV0_7, &HeadV_9);
    mercury__kv_list__map_values_only_3_p_0(TypeInfo_for_V_11, TypeInfo_for_W_12, TypeInfo_for_K_13, HeadVar__1_1, TailKVs0_8, &TailKVs_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = HeadK_6;
      MR_hl_field(MR_mktag(1), base, 1) = HeadV_9;
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (TailKVs_10));
    }
  }
}

MR_Word MR_CALL 
mercury__kv_list__map_values_only_2_f_0(
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_W_12,
  MR_Word TypeInfo_for_K_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box HeadK_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box HeadV0_7 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word TailKVs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box HeadV_9;
      MR_Word TailKVs_10;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

      HeadV_9 = func_0(((MR_Box) (HeadVar__1_1)), HeadV0_7);
      TailKVs_10 = mercury__kv_list__map_values_only_2_f_0(TypeInfo_for_V_11, TypeInfo_for_W_12, TypeInfo_for_K_13, HeadVar__1_1, TailKVs0_8);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = HeadK_6;
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = HeadV_9;
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 2) = ((MR_Box) (TailKVs_10));
      }
    }
    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__kv_list__map_keys_only_3_p_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_L_12,
  MR_Word TypeInfo_for_V_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box HeadK0_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    MR_Box HeadV_7 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
    MR_Word TailKVs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
    MR_Box HeadK_9;
    MR_Word TailKVs_10;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    func_0(((MR_Box) (HeadVar__1_1)), HeadK0_6, &HeadK_9);
    mercury__kv_list__map_keys_only_3_p_0(TypeInfo_for_K_11, TypeInfo_for_L_12, TypeInfo_for_V_13, HeadVar__1_1, TailKVs0_8, &TailKVs_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = HeadK_9;
      MR_hl_field(MR_mktag(1), base, 1) = HeadV_7;
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (TailKVs_10));
    }
  }
}

MR_Word MR_CALL 
mercury__kv_list__map_keys_only_2_f_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_L_12,
  MR_Word TypeInfo_for_V_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box HeadK0_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box HeadV_7 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word TailKVs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box HeadK_9;
      MR_Word TailKVs_10;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

      HeadK_9 = func_0(((MR_Box) (HeadVar__1_1)), HeadK0_6);
      TailKVs_10 = mercury__kv_list__map_keys_only_2_f_0(TypeInfo_for_K_11, TypeInfo_for_L_12, TypeInfo_for_V_13, HeadVar__1_1, TailKVs0_8);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = HeadK_9;
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = HeadV_7;
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 2) = ((MR_Box) (TailKVs_10));
      }
    }
    return HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__kv_list__svremove_4_p_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Box Key_5,
  MR_Box * Value_6,
  MR_Word STATE_VARIABLE_KVs_0_8,
  MR_Word * STATE_VARIABLE_KVs_9)
{
  {
    MR_bool succeeded;

    succeeded = mercury__kv_list__remove_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, STATE_VARIABLE_KVs_0_8, Key_5, Value_6, STATE_VARIABLE_KVs_9);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__kv_list__remove_4_p_0(
  MR_Word TypeInfo_for_K_12,
  MR_Word TypeInfo_for_V_13,
  MR_Word HeadVar__1_1,
  MR_Box Key_8,
  MR_Box * Value_9,
  MR_Word * FilteredKVs_10)
{
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box HeadK_5;
    MR_Box HeadV_6;
    MR_Word TailKVs_7;

    if (succeeded)
    {
      HeadK_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      HeadV_6 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
      TailKVs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_12, HeadK_5, Key_8);
      if (succeeded)
      {
        *Value_9 = HeadV_6;
        *FilteredKVs_10 = TailKVs_7;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word FilteredTailKVs_11;

        succeeded = mercury__kv_list__remove_4_p_0(TypeInfo_for_K_12, TypeInfo_for_V_13, TailKVs_7, Key_8, Value_9, &FilteredTailKVs_11);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *FilteredKVs_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = HeadK_5;
            MR_hl_field(MR_mktag(1), base, 1) = HeadV_6;
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (FilteredTailKVs_11));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__kv_list__update_4_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Box Key_5,
  MR_Box Value_6,
  MR_Word KVs0_7,
  MR_Word * KVs_8)
{
  {
    MR_bool succeeded = (KVs0_7 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box K_9;
    MR_Box V_10;
    MR_Word TailKVs0_11;

    if (succeeded)
    {
      K_9 = (MR_hl_field(MR_mktag(1), KVs0_7, (MR_Integer) 0));
      V_10 = (MR_hl_field(MR_mktag(1), KVs0_7, (MR_Integer) 1));
      TailKVs0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), KVs0_7, (MR_Integer) 2))));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_13, Key_5, K_9);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *KVs_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = K_9;
          MR_hl_field(MR_mktag(1), base, 1) = Value_6;
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (TailKVs0_11));
        }
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word TailKVs_12;

        succeeded = mercury__kv_list__update_4_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, Key_5, Value_6, TailKVs0_11, &TailKVs_12);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *KVs_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = K_9;
            MR_hl_field(MR_mktag(1), base, 1) = V_10;
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (TailKVs_12));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

MR_Box MR_CALL 
mercury__kv_list__det_elem_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Box K_5,
  MR_Word KVs_4)
{
  {
    MR_bool succeeded;
    MR_Box V_6;
    MR_Box VPrime_12;

    succeeded = mercury__kv_list__search_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, KVs_4, K_5, &VPrime_12);
    if (succeeded)
      V_6 = VPrime_12;
    else
      mercury__require__report_lookup_error_2_p_0(TypeInfo_for_K_7, (MR_String) "kv_list.lookup: key not found", K_5);
    return V_6;
  }
}

MR_bool MR_CALL 
mercury__kv_list__elem_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Box K_5,
  MR_Word KVs_4,
  MR_Box * V_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__kv_list__search_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, KVs_4, K_5, V_6);
    return succeeded;
  }
}

void MR_CALL 
mercury__kv_list__lookup_3_p_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word KVs_4,
  MR_Box K_5,
  MR_Box * V_6)
{
  {
    MR_bool succeeded;
    MR_Box VPrime_7;

    succeeded = mercury__kv_list__search_3_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, KVs_4, K_5, &VPrime_7);
    if (succeeded)
      *V_6 = VPrime_7;
    else
      {
        mercury__require__report_lookup_error_2_p_0(TypeInfo_for_K_9, (MR_String) "kv_list.lookup: key not found", K_5);
        return;
      }
  }
}

MR_bool MR_CALL 
mercury__kv_list__search_3_p_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
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

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      K_4 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      V_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
      KVs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_9, K_4, Key_7);
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
mercury__kv_list__keys_and_values_3_p_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
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
    MR_Box K_4 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
    MR_Box V_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
    MR_Word KVs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word Ks_7;
    MR_Word Vs_8;

    mercury__kv_list__keys_and_values_3_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, KVs_6, &Ks_7, &Vs_8);
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
mercury__kv_list__values_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word AL_3)
{
  {
    MR_Word Vs_4;

    mercury__kv_list__values_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, AL_3, &Vs_4);
    return Vs_4;
  }
}

void MR_CALL 
mercury__kv_list__values_2_p_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box V_4 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
    MR_Word KVs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word Vs_6;

    mercury__kv_list__values_2_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, KVs_5, &Vs_6);
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
mercury__kv_list__keys_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word KVs_3)
{
  {
    MR_Word Ks_4;

    mercury__kv_list__keys_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, KVs_3, &Ks_4);
    return Ks_4;
  }
}

void MR_CALL 
mercury__kv_list__keys_2_p_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box K_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
    MR_Word KVs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word Ks_6;

    mercury__kv_list__keys_2_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, KVs_5, &Ks_6);
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
mercury__kv_list__reverse_members_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word KVs_3)
{
  {
    MR_Word VKs_4;

    mercury__kv_list__reverse_members_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, KVs_3, &VKs_4);
    return VKs_4;
  }
}

void MR_CALL 
mercury__kv_list__reverse_members_2_p_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box K_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
    MR_Box V_4 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
    MR_Word KVs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word VKs_6;

    mercury__kv_list__reverse_members_2_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, KVs_5, &VKs_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = V_4;
      MR_hl_field(MR_mktag(1), base, 1) = K_3;
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (VKs_6));
    }
  }
}

MR_Word MR_CALL 
mercury__kv_list__kv_list_to_assoc_list_1_f_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box K_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Box V_4 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
      MR_Word KVs0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word KVs_6;
      MR_Word Var_7;

      {
        Var_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_7, 0) = K_3;
        MR_hl_field(MR_mktag(0), Var_7, 1) = V_4;
      }
      KVs_6 = mercury__kv_list__kv_list_to_assoc_list_1_f_0(TypeInfo_for_K_8, TypeInfo_for_V_9, KVs0_5);
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_7));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (KVs_6));
      }
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__kv_list__assoc_list_to_kv_list_1_f_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box K_3;
      MR_Box V_4;
      MR_Word KVs0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word KVs_6;
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      K_3 = (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0));
      V_4 = (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 1));
      KVs_6 = mercury__kv_list__assoc_list_to_kv_list_1_f_0(TypeInfo_for_K_8, TypeInfo_for_V_9, KVs0_5);
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = K_3;
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = V_4;
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 2) = ((MR_Box) (KVs_6));
      }
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__kv_list__from_corresponding_lists_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word Ks_4,
  MR_Word Vs_5)
{
  {
    MR_Word KVs_6;

    mercury__kv_list__from_corresponding_lists_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Ks_4, Vs_5, &KVs_6);
    return KVs_6;
  }
}

void MR_CALL 
mercury__kv_list__from_corresponding_lists_3_p_0(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Word Ks_4,
  MR_Word Vs_5,
  MR_Word * KVs_6)
{
  {
    MR_bool succeeded;
    MR_Word KVsPrime_7;

    succeeded = mercury__kv_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_3_p_0(Ks_4, Vs_5, &KVsPrime_7);
    if (succeeded)
      *KVs_6 = KVsPrime_7;
    else
    {
      MR_Word TypeInfo_33_33;
      MR_Word TypeInfo_34_34;
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
        TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_33_33, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
        MR_hl_field(MR_mktag(0), TypeInfo_33_33, 1) = ((MR_Box) (TypeInfo_for_K_30));
      }
{
#define MR_PROC_LABEL mercury__kv_list__from_corresponding_lists_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_33_33 ;
	TypeInfo_In_1 = TypeInfo_for_T;
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
      mercury__list__length_acc_3_p_0(TypeInfo_for_K_30, Ks_4, (MR_Integer) 0, &KeyLength_9);
      mercury__string__int_to_base_string_3_p_0(KeyLength_9, (MR_Integer) 10, &KeyLengthString_10);
      {
        TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_34_34, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
        MR_hl_field(MR_mktag(0), TypeInfo_34_34, 1) = ((MR_Box) (TypeInfo_for_V_31));
      }
{
#define MR_PROC_LABEL mercury__kv_list__from_corresponding_lists_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_34_34 ;
	TypeInfo_In_1 = TypeInfo_for_T;
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
      mercury__list__length_acc_3_p_0(TypeInfo_for_V_31, Vs_5, (MR_Integer) 0, &ValueLength_12);
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140kv_list.from_corresponding_lists\'/3", ErrorString_14);
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
mercury__kv_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_3_p_0(
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
      MR_Box K_4 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word Ks_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Box V_6;
      MR_Word Vs_7;
      MR_Word KVs_8;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        V_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        Vs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = mercury__kv_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_3_p_0(Ks_5, Vs_7, &KVs_8);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = K_4;
            MR_hl_field(MR_mktag(1), base, 1) = V_6;
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (KVs_8));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__kv_list____Unify____kv_list_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__kv_list____Unify____kv_list_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__kv_list____Compare____kv_list_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__kv_list____Compare____kv_list_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__kv_list__init(void)
{
}

void mercury__kv_list__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__kv_list__kv_list__type_ctor_info_kv_list_2);
}

void mercury__kv_list__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__kv_list__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module kv_list.
