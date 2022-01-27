/*
** Automatically generated from `assoc_list.m'
** by the Mercury compiler,
** version rotd-2016-03-21
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


/* :- module assoc_list. */
/* :- implementation. */

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

static MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_2_0_10001(
  MR_Box mercury__assoc_list__wrapper_arg_1,
  MR_Box mercury__assoc_list__wrapper_arg_2,
  MR_Box mercury__assoc_list__wrapper_arg_3,
  MR_Box mercury__assoc_list__wrapper_arg_4);

static void MR_CALL 
mercury__assoc_list____Compare____assoc_list_2_0_10001(
  MR_Box mercury__assoc_list__wrapper_arg_1,
  MR_Box mercury__assoc_list__wrapper_arg_2,
  MR_Box * mercury__assoc_list__wrapper_arg_3,
  MR_Box mercury__assoc_list__wrapper_arg_4,
  MR_Box mercury__assoc_list__wrapper_arg_5);

static MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_1_0_10001(
  MR_Box mercury__assoc_list__wrapper_arg_1,
  MR_Box mercury__assoc_list__wrapper_arg_2,
  MR_Box mercury__assoc_list__wrapper_arg_3);

static void MR_CALL 
mercury__assoc_list____Compare____assoc_list_1_0_10001(
  MR_Box mercury__assoc_list__wrapper_arg_1,
  MR_Box * mercury__assoc_list__wrapper_arg_2,
  MR_Box mercury__assoc_list__wrapper_arg_3,
  MR_Box mercury__assoc_list__wrapper_arg_4);

static MR_Integer MR_CALL 
mercury__assoc_list__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_bool MR_CALL 
mercury__assoc_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(
  MR_Word mercury__assoc_list__HeadVar__1_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Word * mercury__assoc_list__HeadVar__3_3);

static void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_7_1(
  void * mercury__assoc_list__env_ptr_arg);

static void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_6_1(
  void * mercury__assoc_list__env_ptr_arg);

static void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_7_1(
  void * mercury__assoc_list__env_ptr_arg);

static void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_6_1(
  void * mercury__assoc_list__env_ptr_arg);

static void MR_CALL 
mercury__assoc_list__foldl_values_4_p_7_1(
  void * mercury__assoc_list__env_ptr_arg);

static void MR_CALL 
mercury__assoc_list__foldl_values_4_p_6_1(
  void * mercury__assoc_list__env_ptr_arg);

static void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_7_1(
  void * mercury__assoc_list__env_ptr_arg);

static void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_6_1(
  void * mercury__assoc_list__env_ptr_arg);


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
#include "version_array.mh"



static const MR_FA_PseudoTypeInfo_Struct2 mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_2 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__assoc_list__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_2
  }
};

const MR_TypeCtorInfo_Struct mercury__assoc_list__assoc_list__type_ctor_info_assoc_list_2 = {
  (MR_Integer) 2,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__assoc_list____Unify____assoc_list_2_0_10001)),
  ((MR_Box) (mercury__assoc_list____Compare____assoc_list_2_0_10001)),
  (MR_String) "assoc_list",
  (MR_String) "assoc_list",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__assoc_list__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_2 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__assoc_list__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_1
  }
};

const MR_TypeCtorInfo_Struct mercury__assoc_list__assoc_list__type_ctor_info_assoc_list_1 = {
  (MR_Integer) 1,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__assoc_list____Unify____assoc_list_1_0_10001)),
  ((MR_Box) (mercury__assoc_list____Compare____assoc_list_1_0_10001)),
  (MR_String) "assoc_list",
  (MR_String) "assoc_list",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__assoc_list__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_2_0_10001(
  MR_Box mercury__assoc_list__wrapper_arg_1,
  MR_Box mercury__assoc_list__wrapper_arg_2,
  MR_Box mercury__assoc_list__wrapper_arg_3,
  MR_Box mercury__assoc_list__wrapper_arg_4)
{
  {
    MR_bool mercury__assoc_list__succeeded;

    {
      mercury__assoc_list__succeeded = mercury__assoc_list____Unify____assoc_list_2_0(((MR_Word) mercury__assoc_list__wrapper_arg_1), ((MR_Word) mercury__assoc_list__wrapper_arg_2), ((MR_Word) mercury__assoc_list__wrapper_arg_3), ((MR_Word) mercury__assoc_list__wrapper_arg_4));
    }
    return mercury__assoc_list__succeeded;
  }
}

static void MR_CALL 
mercury__assoc_list____Compare____assoc_list_2_0_10001(
  MR_Box mercury__assoc_list__wrapper_arg_1,
  MR_Box mercury__assoc_list__wrapper_arg_2,
  MR_Box * mercury__assoc_list__wrapper_arg_3,
  MR_Box mercury__assoc_list__wrapper_arg_4,
  MR_Box mercury__assoc_list__wrapper_arg_5)
{
  {
    MR_Word mercury__assoc_list__conv0_HeadVar__1_1;

    {
      mercury__assoc_list____Compare____assoc_list_2_0(((MR_Word) mercury__assoc_list__wrapper_arg_1), ((MR_Word) mercury__assoc_list__wrapper_arg_2), &mercury__assoc_list__conv0_HeadVar__1_1, ((MR_Word) mercury__assoc_list__wrapper_arg_4), ((MR_Word) mercury__assoc_list__wrapper_arg_5));
    }
    *mercury__assoc_list__wrapper_arg_3 = ((MR_Box) (mercury__assoc_list__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_1_0_10001(
  MR_Box mercury__assoc_list__wrapper_arg_1,
  MR_Box mercury__assoc_list__wrapper_arg_2,
  MR_Box mercury__assoc_list__wrapper_arg_3)
{
  {
    MR_bool mercury__assoc_list__succeeded;

    {
      mercury__assoc_list__succeeded = mercury__assoc_list____Unify____assoc_list_1_0(((MR_Word) mercury__assoc_list__wrapper_arg_1), ((MR_Word) mercury__assoc_list__wrapper_arg_2), ((MR_Word) mercury__assoc_list__wrapper_arg_3));
    }
    return mercury__assoc_list__succeeded;
  }
}

static void MR_CALL 
mercury__assoc_list____Compare____assoc_list_1_0_10001(
  MR_Box mercury__assoc_list__wrapper_arg_1,
  MR_Box * mercury__assoc_list__wrapper_arg_2,
  MR_Box mercury__assoc_list__wrapper_arg_3,
  MR_Box mercury__assoc_list__wrapper_arg_4)
{
  {
    MR_Word mercury__assoc_list__conv0_HeadVar__1_1;

    {
      mercury__assoc_list____Compare____assoc_list_1_0(((MR_Word) mercury__assoc_list__wrapper_arg_1), &mercury__assoc_list__conv0_HeadVar__1_1, ((MR_Word) mercury__assoc_list__wrapper_arg_3), ((MR_Word) mercury__assoc_list__wrapper_arg_4));
    }
    *mercury__assoc_list__wrapper_arg_2 = ((MR_Box) (mercury__assoc_list__conv0_HeadVar__1_1));
  }
}

static MR_Integer MR_CALL 
mercury__assoc_list__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__assoc_list__succeeded;

    return (MR_Integer) 1200;
  }
}

static MR_bool MR_CALL 
mercury__assoc_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(
  MR_Word mercury__assoc_list__HeadVar__1_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Word * mercury__assoc_list__HeadVar__3_3)
{
  {
    MR_bool mercury__assoc_list__succeeded;

    if ((mercury__assoc_list__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__assoc_list__succeeded = (mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (mercury__assoc_list__succeeded)
          {
            *mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__assoc_list__succeeded = MR_TRUE;
          }
      }
    else
      {
        MR_Box mercury__assoc_list__A_4 = (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 0));
        MR_Word mercury__assoc_list__As_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
        MR_Box mercury__assoc_list__B_6;
        MR_Word mercury__assoc_list__Bs_7;
        MR_Word mercury__assoc_list__ABs_8;
        MR_Word mercury__assoc_list__V_9_9;

        mercury__assoc_list__succeeded = ((MR_tag((MR_Word) mercury__assoc_list__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__assoc_list__succeeded)
          {
            mercury__assoc_list__B_6 = (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0));
            mercury__assoc_list__Bs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            {
              mercury__assoc_list__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__assoc_list__V_9_9, 0) = mercury__assoc_list__A_4;
              MR_hl_field(MR_mktag(0), mercury__assoc_list__V_9_9, 1) = mercury__assoc_list__B_6;
            }
            {
              mercury__assoc_list__succeeded = mercury__assoc_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__assoc_list__As_5, mercury__assoc_list__Bs_7, &mercury__assoc_list__ABs_8);
            }
            if (mercury__assoc_list__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__assoc_list__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_9_9));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__ABs_8));
                }
                mercury__assoc_list__succeeded = MR_TRUE;
              }
          }
      }
    return mercury__assoc_list__succeeded;
  }
}

void MR_CALL 
mercury__assoc_list____Compare____assoc_list_2_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_6,
  MR_Word mercury__assoc_list__TypeInfo_for_V_7,
  MR_Word * mercury__assoc_list__HeadVar__1_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Word mercury__assoc_list__HeadVar__3_3)
{
  {
    MR_bool mercury__assoc_list__succeeded;
    MR_Word mercury__assoc_list__TypeCtorInfo_8_8 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
    MR_Word mercury__assoc_list__TypeInfo_9_9;
    MR_Word mercury__assoc_list__Cast_HeadVar1_4 = mercury__assoc_list__HeadVar__2_2;
    MR_Word mercury__assoc_list__Cast_HeadVar2_5 = mercury__assoc_list__HeadVar__3_3;

    {
      mercury__assoc_list__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_9_9, 0) = ((MR_Box) (mercury__assoc_list__TypeCtorInfo_8_8));
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_9_9, 1) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_K_6));
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_9_9, 2) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_V_7));
    }
    {
      mercury__list____Compare____list_1_0(mercury__assoc_list__TypeInfo_9_9, mercury__assoc_list__HeadVar__1_1, (MR_Word) mercury__assoc_list__Cast_HeadVar1_4, (MR_Word) mercury__assoc_list__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_2_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_5,
  MR_Word mercury__assoc_list__TypeInfo_for_V_6,
  MR_Word mercury__assoc_list__HeadVar__1_1,
  MR_Word mercury__assoc_list__HeadVar__2_2)
{
  {
    MR_bool mercury__assoc_list__succeeded;
    MR_Word mercury__assoc_list__TypeCtorInfo_7_7 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
    MR_Word mercury__assoc_list__TypeInfo_8_8;
    MR_Word mercury__assoc_list__Cast_HeadVar1_3 = mercury__assoc_list__HeadVar__1_1;
    MR_Word mercury__assoc_list__Cast_HeadVar2_4 = mercury__assoc_list__HeadVar__2_2;

    {
      mercury__assoc_list__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_8_8, 0) = ((MR_Box) (mercury__assoc_list__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_8_8, 1) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_K_5));
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_8_8, 2) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_V_6));
    }
    {
      mercury__assoc_list__succeeded = mercury__list____Unify____list_1_0(mercury__assoc_list__TypeInfo_8_8, (MR_Word) mercury__assoc_list__Cast_HeadVar1_3, (MR_Word) mercury__assoc_list__Cast_HeadVar2_4);
    }
    return mercury__assoc_list__succeeded;
  }
}

void MR_CALL 
mercury__assoc_list____Compare____assoc_list_1_0(
  MR_Word mercury__assoc_list__TypeInfo_for_T_6,
  MR_Word * mercury__assoc_list__HeadVar__1_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Word mercury__assoc_list__HeadVar__3_3)
{
  {
    MR_bool mercury__assoc_list__succeeded;
    MR_Word mercury__assoc_list__TypeCtorInfo_7_7 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
    MR_Word mercury__assoc_list__TypeInfo_8_8;
    MR_Word mercury__assoc_list__Cast_HeadVar1_4 = mercury__assoc_list__HeadVar__2_2;
    MR_Word mercury__assoc_list__Cast_HeadVar2_5 = mercury__assoc_list__HeadVar__3_3;

    {
      mercury__assoc_list__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_8_8, 0) = ((MR_Box) (mercury__assoc_list__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_8_8, 1) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_T_6));
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_8_8, 2) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_T_6));
    }
    {
      mercury__list____Compare____list_1_0(mercury__assoc_list__TypeInfo_8_8, mercury__assoc_list__HeadVar__1_1, (MR_Word) mercury__assoc_list__Cast_HeadVar1_4, (MR_Word) mercury__assoc_list__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_1_0(
  MR_Word mercury__assoc_list__TypeInfo_for_T_5,
  MR_Word mercury__assoc_list__HeadVar__1_1,
  MR_Word mercury__assoc_list__HeadVar__2_2)
{
  {
    MR_bool mercury__assoc_list__succeeded;
    MR_Word mercury__assoc_list__TypeCtorInfo_6_6 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
    MR_Word mercury__assoc_list__TypeInfo_7_7;
    MR_Word mercury__assoc_list__Cast_HeadVar1_3 = mercury__assoc_list__HeadVar__1_1;
    MR_Word mercury__assoc_list__Cast_HeadVar2_4 = mercury__assoc_list__HeadVar__2_2;

    {
      mercury__assoc_list__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_7_7, 0) = ((MR_Box) (mercury__assoc_list__TypeCtorInfo_6_6));
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_7_7, 1) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_T_5));
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_7_7, 2) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_T_5));
    }
    {
      mercury__assoc_list__succeeded = mercury__list____Unify____list_1_0(mercury__assoc_list__TypeInfo_7_7, (MR_Word) mercury__assoc_list__Cast_HeadVar1_3, (MR_Word) mercury__assoc_list__Cast_HeadVar2_4);
    }
    return mercury__assoc_list__succeeded;
  }
}

static void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_7_1(
  void * mercury__assoc_list__env_ptr_arg)
{
  {
    struct mercury__assoc_list__foldl3_values_8_p_7_env_0_s * mercury__assoc_list__env_ptr = (struct mercury__assoc_list__foldl3_values_8_p_7_env_0_s *) mercury__assoc_list__env_ptr_arg;

    {
      mercury__assoc_list__foldl3_values_8_p_7((mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_V_39, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_A_40, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_B_41, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_C_42, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_K_43, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__P_1, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__KVs_21, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_33_33, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_4, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_34_34, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_6, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_35_35, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_8, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__cont, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_7(
  MR_Word mercury__assoc_list__TypeInfo_for_V_39,
  MR_Word mercury__assoc_list__TypeInfo_for_A_40,
  MR_Word mercury__assoc_list__TypeInfo_for_B_41,
  MR_Word mercury__assoc_list__TypeInfo_for_C_42,
  MR_Word mercury__assoc_list__TypeInfo_for_K_43,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0_7,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc3_8,
  MR_Cont mercury__assoc_list__cont,
  void * mercury__assoc_list__cont_env_ptr)
{
  {
    struct mercury__assoc_list__foldl3_values_8_p_7_env_0_s mercury__assoc_list__env;

    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_V_39 = mercury__assoc_list__TypeInfo_for_V_39;
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_A_40 = mercury__assoc_list__TypeInfo_for_A_40;
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_B_41 = mercury__assoc_list__TypeInfo_for_B_41;
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_C_42 = mercury__assoc_list__TypeInfo_for_C_42;
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_K_43 = mercury__assoc_list__TypeInfo_for_K_43;
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__P_1 = mercury__assoc_list__P_1;
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_4;
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_6;
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_8 = mercury__assoc_list__STATE_VARIABLE_Acc3_8;
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__cont = mercury__assoc_list__cont;
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__cont_env_ptr = mercury__assoc_list__cont_env_ptr;
    {
      MR_bool mercury__assoc_list__succeeded;

      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_8) = mercury__assoc_list__STATE_VARIABLE_Acc3_0_7;
          *((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_6) = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
          *((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_4) = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
          {
            ((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__cont)((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__cont_env_ptr);
          }
        }
      else
        {
          MR_Word mercury__assoc_list__KV_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
          MR_Box mercury__assoc_list__V_26;
          MR_Box mercury__assoc_list___K_25;
          void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

          (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__KVs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
          mercury__assoc_list___K_25 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 0));
          mercury__assoc_list__V_26 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 1));
          mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__P_1, (MR_Integer) 1)));
          {
            mercury__assoc_list__func_0(((MR_Box) (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__P_1), mercury__assoc_list__V_26, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &(mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_33_33, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &(mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_34_34, mercury__assoc_list__STATE_VARIABLE_Acc3_0_7, &(mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_35_35, mercury__assoc_list__foldl3_values_8_p_7_1, &mercury__assoc_list__env);
          }
        }
    }
  }
}

static void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_6_1(
  void * mercury__assoc_list__env_ptr_arg)
{
  {
    struct mercury__assoc_list__foldl3_values_8_p_6_env_0_s * mercury__assoc_list__env_ptr = (struct mercury__assoc_list__foldl3_values_8_p_6_env_0_s *) mercury__assoc_list__env_ptr_arg;

    {
      mercury__assoc_list__foldl3_values_8_p_6((mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_V_39, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_A_40, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_B_41, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_C_42, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_K_43, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__P_1, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__KVs_21, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_33_33, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_4, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_34_34, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_6, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_35_35, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_8, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__cont, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_6(
  MR_Word mercury__assoc_list__TypeInfo_for_V_39,
  MR_Word mercury__assoc_list__TypeInfo_for_A_40,
  MR_Word mercury__assoc_list__TypeInfo_for_B_41,
  MR_Word mercury__assoc_list__TypeInfo_for_C_42,
  MR_Word mercury__assoc_list__TypeInfo_for_K_43,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0_7,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc3_8,
  MR_Cont mercury__assoc_list__cont,
  void * mercury__assoc_list__cont_env_ptr)
{
  {
    struct mercury__assoc_list__foldl3_values_8_p_6_env_0_s mercury__assoc_list__env;

    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_V_39 = mercury__assoc_list__TypeInfo_for_V_39;
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_A_40 = mercury__assoc_list__TypeInfo_for_A_40;
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_B_41 = mercury__assoc_list__TypeInfo_for_B_41;
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_C_42 = mercury__assoc_list__TypeInfo_for_C_42;
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_K_43 = mercury__assoc_list__TypeInfo_for_K_43;
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__P_1 = mercury__assoc_list__P_1;
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_4;
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_6;
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_8 = mercury__assoc_list__STATE_VARIABLE_Acc3_8;
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__cont = mercury__assoc_list__cont;
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__cont_env_ptr = mercury__assoc_list__cont_env_ptr;
    {
      MR_bool mercury__assoc_list__succeeded;

      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_8) = mercury__assoc_list__STATE_VARIABLE_Acc3_0_7;
          *((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_6) = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
          *((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_4) = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
          {
            ((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__cont)((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__cont_env_ptr);
          }
        }
      else
        {
          MR_Word mercury__assoc_list__KV_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
          MR_Box mercury__assoc_list__V_26;
          MR_Box mercury__assoc_list___K_25;
          void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

          (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__KVs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
          mercury__assoc_list___K_25 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 0));
          mercury__assoc_list__V_26 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 1));
          mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__P_1, (MR_Integer) 1)));
          {
            mercury__assoc_list__func_0(((MR_Box) (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__P_1), mercury__assoc_list__V_26, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &(mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_33_33, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &(mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_34_34, mercury__assoc_list__STATE_VARIABLE_Acc3_0_7, &(mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_35_35, mercury__assoc_list__foldl3_values_8_p_6_1, &mercury__assoc_list__env);
          }
        }
    }
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl3_values_8_p_5(
  MR_Word mercury__assoc_list__TypeInfo_for_V_39,
  MR_Word mercury__assoc_list__TypeInfo_for_A_40,
  MR_Word mercury__assoc_list__TypeInfo_for_B_41,
  MR_Word mercury__assoc_list__TypeInfo_for_C_42,
  MR_Word mercury__assoc_list__TypeInfo_for_K_43,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0_7,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc3_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded;

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__assoc_list__STATE_VARIABLE_Acc3_8 = mercury__assoc_list__STATE_VARIABLE_Acc3_0_7;
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
            mercury__assoc_list__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__assoc_list__KV_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__assoc_list__KVs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__assoc_list__V_26 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 1));
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;
            MR_Box mercury__assoc_list___K_25 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 0));
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

            {
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_26, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_33_33, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_34_34, mercury__assoc_list__STATE_VARIABLE_Acc3_0_7, &mercury__assoc_list__STATE_VARIABLE_Acc3_35_35);
            }
            if (mercury__assoc_list__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_21;
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;

                  mercury__assoc_list__STATE_VARIABLE_Acc3_0_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7;
                  mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                  mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
        return mercury__assoc_list__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl3_values_8_p_4(
  MR_Word mercury__assoc_list__TypeInfo_for_V_39,
  MR_Word mercury__assoc_list__TypeInfo_for_A_40,
  MR_Word mercury__assoc_list__TypeInfo_for_B_41,
  MR_Word mercury__assoc_list__TypeInfo_for_C_42,
  MR_Word mercury__assoc_list__TypeInfo_for_K_43,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0_7,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc3_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded;

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__assoc_list__STATE_VARIABLE_Acc3_8 = mercury__assoc_list__STATE_VARIABLE_Acc3_0_7;
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
            mercury__assoc_list__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__assoc_list__KV_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__assoc_list__KVs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__assoc_list__V_26 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 1));
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;
            MR_Box mercury__assoc_list___K_25 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 0));
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

            {
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_26, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_33_33, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_34_34, mercury__assoc_list__STATE_VARIABLE_Acc3_0_7, &mercury__assoc_list__STATE_VARIABLE_Acc3_35_35);
            }
            if (mercury__assoc_list__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_21;
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;

                  mercury__assoc_list__STATE_VARIABLE_Acc3_0_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7;
                  mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                  mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
        return mercury__assoc_list__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl3_values_8_p_3(
  MR_Word mercury__assoc_list__TypeInfo_for_V_39,
  MR_Word mercury__assoc_list__TypeInfo_for_A_40,
  MR_Word mercury__assoc_list__TypeInfo_for_B_41,
  MR_Word mercury__assoc_list__TypeInfo_for_C_42,
  MR_Word mercury__assoc_list__TypeInfo_for_K_43,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0_7,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc3_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded;

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__assoc_list__STATE_VARIABLE_Acc3_8 = mercury__assoc_list__STATE_VARIABLE_Acc3_0_7;
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
            mercury__assoc_list__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__assoc_list__KV_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__assoc_list__KVs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__assoc_list__V_26 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 1));
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;
            MR_Box mercury__assoc_list___K_25 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 0));
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

            {
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_26, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_33_33, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_34_34, mercury__assoc_list__STATE_VARIABLE_Acc3_0_7, &mercury__assoc_list__STATE_VARIABLE_Acc3_35_35);
            }
            if (mercury__assoc_list__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_21;
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;

                  mercury__assoc_list__STATE_VARIABLE_Acc3_0_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7;
                  mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                  mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
        return mercury__assoc_list__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_2(
  MR_Word mercury__assoc_list__TypeInfo_for_V_39,
  MR_Word mercury__assoc_list__TypeInfo_for_A_40,
  MR_Word mercury__assoc_list__TypeInfo_for_B_41,
  MR_Word mercury__assoc_list__TypeInfo_for_C_42,
  MR_Word mercury__assoc_list__TypeInfo_for_K_43,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0_7,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc3_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded;

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__assoc_list__STATE_VARIABLE_Acc3_8 = mercury__assoc_list__STATE_VARIABLE_Acc3_0_7;
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
          }
        else
          {
            MR_Word mercury__assoc_list__KV_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__assoc_list__KVs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__assoc_list__V_26 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 1));
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;
            MR_Box mercury__assoc_list___K_25 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 0));
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

            {
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_26, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_33_33, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_34_34, mercury__assoc_list__STATE_VARIABLE_Acc3_0_7, &mercury__assoc_list__STATE_VARIABLE_Acc3_35_35);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_21;
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;

              mercury__assoc_list__STATE_VARIABLE_Acc3_0_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7;
              mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
              mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_1(
  MR_Word mercury__assoc_list__TypeInfo_for_V_39,
  MR_Word mercury__assoc_list__TypeInfo_for_A_40,
  MR_Word mercury__assoc_list__TypeInfo_for_B_41,
  MR_Word mercury__assoc_list__TypeInfo_for_C_42,
  MR_Word mercury__assoc_list__TypeInfo_for_K_43,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0_7,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc3_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded;

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__assoc_list__STATE_VARIABLE_Acc3_8 = mercury__assoc_list__STATE_VARIABLE_Acc3_0_7;
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
          }
        else
          {
            MR_Word mercury__assoc_list__KV_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__assoc_list__KVs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__assoc_list__V_26 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 1));
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;
            MR_Box mercury__assoc_list___K_25 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 0));
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

            {
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_26, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_33_33, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_34_34, mercury__assoc_list__STATE_VARIABLE_Acc3_0_7, &mercury__assoc_list__STATE_VARIABLE_Acc3_35_35);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_21;
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;

              mercury__assoc_list__STATE_VARIABLE_Acc3_0_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7;
              mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
              mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_0(
  MR_Word mercury__assoc_list__TypeInfo_for_V_39,
  MR_Word mercury__assoc_list__TypeInfo_for_A_40,
  MR_Word mercury__assoc_list__TypeInfo_for_B_41,
  MR_Word mercury__assoc_list__TypeInfo_for_C_42,
  MR_Word mercury__assoc_list__TypeInfo_for_K_43,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0_7,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc3_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded;

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__assoc_list__STATE_VARIABLE_Acc3_8 = mercury__assoc_list__STATE_VARIABLE_Acc3_0_7;
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
          }
        else
          {
            MR_Word mercury__assoc_list__KV_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__assoc_list__KVs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__assoc_list__V_26 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 1));
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;
            MR_Box mercury__assoc_list___K_25 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 0));
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

            {
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_26, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_33_33, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_34_34, mercury__assoc_list__STATE_VARIABLE_Acc3_0_7, &mercury__assoc_list__STATE_VARIABLE_Acc3_35_35);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_21;
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;

              mercury__assoc_list__STATE_VARIABLE_Acc3_0_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7;
              mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
              mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_7_1(
  void * mercury__assoc_list__env_ptr_arg)
{
  {
    struct mercury__assoc_list__foldl2_values_6_p_7_env_0_s * mercury__assoc_list__env_ptr = (struct mercury__assoc_list__foldl2_values_6_p_7_env_0_s *) mercury__assoc_list__env_ptr_arg;

    {
      mercury__assoc_list__foldl2_values_6_p_7((mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_V_29, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_A_30, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_B_31, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_K_32, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__P_1, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__KVs_16, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_25_25, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_4, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_26_26, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_6, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__cont, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_7(
  MR_Word mercury__assoc_list__TypeInfo_for_V_29,
  MR_Word mercury__assoc_list__TypeInfo_for_A_30,
  MR_Word mercury__assoc_list__TypeInfo_for_B_31,
  MR_Word mercury__assoc_list__TypeInfo_for_K_32,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6,
  MR_Cont mercury__assoc_list__cont,
  void * mercury__assoc_list__cont_env_ptr)
{
  {
    struct mercury__assoc_list__foldl2_values_6_p_7_env_0_s mercury__assoc_list__env;

    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_V_29 = mercury__assoc_list__TypeInfo_for_V_29;
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_A_30 = mercury__assoc_list__TypeInfo_for_A_30;
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_B_31 = mercury__assoc_list__TypeInfo_for_B_31;
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_K_32 = mercury__assoc_list__TypeInfo_for_K_32;
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__P_1 = mercury__assoc_list__P_1;
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_4;
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_6;
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__cont = mercury__assoc_list__cont;
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__cont_env_ptr = mercury__assoc_list__cont_env_ptr;
    {
      MR_bool mercury__assoc_list__succeeded;

      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *((mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_6) = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
          *((mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_4) = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
          {
            ((mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__cont)((mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__cont_env_ptr);
          }
        }
      else
        {
          MR_Word mercury__assoc_list__KV_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
          MR_Box mercury__assoc_list__V_20;
          MR_Box mercury__assoc_list___K_19;
          void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

          (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
          mercury__assoc_list___K_19 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 0));
          mercury__assoc_list__V_20 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 1));
          mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__P_1, (MR_Integer) 1)));
          {
            mercury__assoc_list__func_0(((MR_Box) (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__P_1), mercury__assoc_list__V_20, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &(mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_25_25, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &(mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_26_26, mercury__assoc_list__foldl2_values_6_p_7_1, &mercury__assoc_list__env);
          }
        }
    }
  }
}

static void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_6_1(
  void * mercury__assoc_list__env_ptr_arg)
{
  {
    struct mercury__assoc_list__foldl2_values_6_p_6_env_0_s * mercury__assoc_list__env_ptr = (struct mercury__assoc_list__foldl2_values_6_p_6_env_0_s *) mercury__assoc_list__env_ptr_arg;

    {
      mercury__assoc_list__foldl2_values_6_p_6((mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_V_29, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_A_30, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_B_31, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_K_32, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__P_1, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__KVs_16, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_25_25, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_4, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_26_26, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_6, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__cont, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_6(
  MR_Word mercury__assoc_list__TypeInfo_for_V_29,
  MR_Word mercury__assoc_list__TypeInfo_for_A_30,
  MR_Word mercury__assoc_list__TypeInfo_for_B_31,
  MR_Word mercury__assoc_list__TypeInfo_for_K_32,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6,
  MR_Cont mercury__assoc_list__cont,
  void * mercury__assoc_list__cont_env_ptr)
{
  {
    struct mercury__assoc_list__foldl2_values_6_p_6_env_0_s mercury__assoc_list__env;

    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_V_29 = mercury__assoc_list__TypeInfo_for_V_29;
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_A_30 = mercury__assoc_list__TypeInfo_for_A_30;
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_B_31 = mercury__assoc_list__TypeInfo_for_B_31;
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_K_32 = mercury__assoc_list__TypeInfo_for_K_32;
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__P_1 = mercury__assoc_list__P_1;
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_4;
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_6;
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__cont = mercury__assoc_list__cont;
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__cont_env_ptr = mercury__assoc_list__cont_env_ptr;
    {
      MR_bool mercury__assoc_list__succeeded;

      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *((mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_6) = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
          *((mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_4) = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
          {
            ((mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__cont)((mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__cont_env_ptr);
          }
        }
      else
        {
          MR_Word mercury__assoc_list__KV_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
          MR_Box mercury__assoc_list__V_20;
          MR_Box mercury__assoc_list___K_19;
          void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

          (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
          mercury__assoc_list___K_19 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 0));
          mercury__assoc_list__V_20 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 1));
          mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__P_1, (MR_Integer) 1)));
          {
            mercury__assoc_list__func_0(((MR_Box) (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__P_1), mercury__assoc_list__V_20, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &(mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_25_25, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &(mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_26_26, mercury__assoc_list__foldl2_values_6_p_6_1, &mercury__assoc_list__env);
          }
        }
    }
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl2_values_6_p_5(
  MR_Word mercury__assoc_list__TypeInfo_for_V_29,
  MR_Word mercury__assoc_list__TypeInfo_for_A_30,
  MR_Word mercury__assoc_list__TypeInfo_for_B_31,
  MR_Word mercury__assoc_list__TypeInfo_for_K_32,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded;

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
            mercury__assoc_list__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__assoc_list__KV_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__assoc_list__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__assoc_list__V_20 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 1));
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;
            MR_Box mercury__assoc_list___K_19 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 0));
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

            {
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_20, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_25_25, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_26_26);
            }
            if (mercury__assoc_list__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_16;
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;

                  mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                  mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
        return mercury__assoc_list__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl2_values_6_p_4(
  MR_Word mercury__assoc_list__TypeInfo_for_V_29,
  MR_Word mercury__assoc_list__TypeInfo_for_A_30,
  MR_Word mercury__assoc_list__TypeInfo_for_B_31,
  MR_Word mercury__assoc_list__TypeInfo_for_K_32,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded;

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
            mercury__assoc_list__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__assoc_list__KV_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__assoc_list__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__assoc_list__V_20 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 1));
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;
            MR_Box mercury__assoc_list___K_19 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 0));
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

            {
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_20, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_25_25, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_26_26);
            }
            if (mercury__assoc_list__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_16;
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;

                  mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                  mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
        return mercury__assoc_list__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl2_values_6_p_3(
  MR_Word mercury__assoc_list__TypeInfo_for_V_29,
  MR_Word mercury__assoc_list__TypeInfo_for_A_30,
  MR_Word mercury__assoc_list__TypeInfo_for_B_31,
  MR_Word mercury__assoc_list__TypeInfo_for_K_32,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded;

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
            mercury__assoc_list__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__assoc_list__KV_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__assoc_list__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__assoc_list__V_20 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 1));
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;
            MR_Box mercury__assoc_list___K_19 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 0));
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

            {
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_20, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_25_25, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_26_26);
            }
            if (mercury__assoc_list__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_16;
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;

                  mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                  mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
        return mercury__assoc_list__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_2(
  MR_Word mercury__assoc_list__TypeInfo_for_V_29,
  MR_Word mercury__assoc_list__TypeInfo_for_A_30,
  MR_Word mercury__assoc_list__TypeInfo_for_B_31,
  MR_Word mercury__assoc_list__TypeInfo_for_K_32,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded;

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
          }
        else
          {
            MR_Word mercury__assoc_list__KV_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__assoc_list__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__assoc_list__V_20 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 1));
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;
            MR_Box mercury__assoc_list___K_19 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 0));
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

            {
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_20, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_25_25, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_26_26);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_16;
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;

              mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
              mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_1(
  MR_Word mercury__assoc_list__TypeInfo_for_V_29,
  MR_Word mercury__assoc_list__TypeInfo_for_A_30,
  MR_Word mercury__assoc_list__TypeInfo_for_B_31,
  MR_Word mercury__assoc_list__TypeInfo_for_K_32,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded;

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
          }
        else
          {
            MR_Word mercury__assoc_list__KV_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__assoc_list__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__assoc_list__V_20 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 1));
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;
            MR_Box mercury__assoc_list___K_19 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 0));
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

            {
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_20, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_25_25, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_26_26);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_16;
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;

              mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
              mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_0(
  MR_Word mercury__assoc_list__TypeInfo_for_V_29,
  MR_Word mercury__assoc_list__TypeInfo_for_A_30,
  MR_Word mercury__assoc_list__TypeInfo_for_B_31,
  MR_Word mercury__assoc_list__TypeInfo_for_K_32,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded;

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
          }
        else
          {
            MR_Word mercury__assoc_list__KV_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__assoc_list__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__assoc_list__V_20 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 1));
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;
            MR_Box mercury__assoc_list___K_19 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 0));
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

            {
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_20, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_25_25, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_26_26);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_16;
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;

              mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
              mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__assoc_list__foldl_values_4_p_7_1(
  void * mercury__assoc_list__env_ptr_arg)
{
  {
    struct mercury__assoc_list__foldl_values_4_p_7_env_0_s * mercury__assoc_list__env_ptr = (struct mercury__assoc_list__foldl_values_4_p_7_env_0_s *) mercury__assoc_list__env_ptr_arg;

    {
      mercury__assoc_list__foldl_values_4_p_7((mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_V_19, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_A_20, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_K_21, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__P_1, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__KVs_11, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_17_17, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_4, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__cont, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__assoc_list__foldl_values_4_p_7(
  MR_Word mercury__assoc_list__TypeInfo_for_V_19,
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
  MR_Word mercury__assoc_list__TypeInfo_for_K_21,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4,
  MR_Cont mercury__assoc_list__cont,
  void * mercury__assoc_list__cont_env_ptr)
{
  {
    struct mercury__assoc_list__foldl_values_4_p_7_env_0_s mercury__assoc_list__env;

    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_V_19 = mercury__assoc_list__TypeInfo_for_V_19;
    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_A_20 = mercury__assoc_list__TypeInfo_for_A_20;
    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_K_21 = mercury__assoc_list__TypeInfo_for_K_21;
    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__P_1 = mercury__assoc_list__P_1;
    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_4;
    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__cont = mercury__assoc_list__cont;
    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__cont_env_ptr = mercury__assoc_list__cont_env_ptr;
    {
      MR_bool mercury__assoc_list__succeeded;

      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *((mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_4) = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
          {
            ((mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__cont)((mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__cont_env_ptr);
          }
        }
      else
        {
          MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
          MR_Box mercury__assoc_list__V_14;
          MR_Box mercury__assoc_list___K_13;
          void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

          (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
          mercury__assoc_list___K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
          mercury__assoc_list__V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
          mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__P_1, (MR_Integer) 1)));
          {
            mercury__assoc_list__func_0(((MR_Box) (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__P_1), mercury__assoc_list__V_14, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &(mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_17_17, mercury__assoc_list__foldl_values_4_p_7_1, &mercury__assoc_list__env);
          }
        }
    }
  }
}

static void MR_CALL 
mercury__assoc_list__foldl_values_4_p_6_1(
  void * mercury__assoc_list__env_ptr_arg)
{
  {
    struct mercury__assoc_list__foldl_values_4_p_6_env_0_s * mercury__assoc_list__env_ptr = (struct mercury__assoc_list__foldl_values_4_p_6_env_0_s *) mercury__assoc_list__env_ptr_arg;

    {
      mercury__assoc_list__foldl_values_4_p_6((mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_V_19, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_A_20, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_K_21, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__P_1, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__KVs_11, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_17_17, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_4, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__cont, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__assoc_list__foldl_values_4_p_6(
  MR_Word mercury__assoc_list__TypeInfo_for_V_19,
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
  MR_Word mercury__assoc_list__TypeInfo_for_K_21,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4,
  MR_Cont mercury__assoc_list__cont,
  void * mercury__assoc_list__cont_env_ptr)
{
  {
    struct mercury__assoc_list__foldl_values_4_p_6_env_0_s mercury__assoc_list__env;

    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_V_19 = mercury__assoc_list__TypeInfo_for_V_19;
    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_A_20 = mercury__assoc_list__TypeInfo_for_A_20;
    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_K_21 = mercury__assoc_list__TypeInfo_for_K_21;
    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__P_1 = mercury__assoc_list__P_1;
    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_4;
    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__cont = mercury__assoc_list__cont;
    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__cont_env_ptr = mercury__assoc_list__cont_env_ptr;
    {
      MR_bool mercury__assoc_list__succeeded;

      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *((mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_4) = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
          {
            ((mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__cont)((mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__cont_env_ptr);
          }
        }
      else
        {
          MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
          MR_Box mercury__assoc_list__V_14;
          MR_Box mercury__assoc_list___K_13;
          void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

          (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
          mercury__assoc_list___K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
          mercury__assoc_list__V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
          mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__P_1, (MR_Integer) 1)));
          {
            mercury__assoc_list__func_0(((MR_Box) (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__P_1), mercury__assoc_list__V_14, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &(mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_17_17, mercury__assoc_list__foldl_values_4_p_6_1, &mercury__assoc_list__env);
          }
        }
    }
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl_values_4_p_5(
  MR_Word mercury__assoc_list__TypeInfo_for_V_19,
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
  MR_Word mercury__assoc_list__TypeInfo_for_K_21,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded;

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
            mercury__assoc_list__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__assoc_list__V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
            MR_Box mercury__assoc_list___K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

            {
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_14, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
            if (mercury__assoc_list__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

                  mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
        return mercury__assoc_list__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl_values_4_p_4(
  MR_Word mercury__assoc_list__TypeInfo_for_V_19,
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
  MR_Word mercury__assoc_list__TypeInfo_for_K_21,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded;

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
            mercury__assoc_list__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__assoc_list__V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
            MR_Box mercury__assoc_list___K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

            {
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_14, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
            if (mercury__assoc_list__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

                  mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
        return mercury__assoc_list__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl_values_4_p_3(
  MR_Word mercury__assoc_list__TypeInfo_for_V_19,
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
  MR_Word mercury__assoc_list__TypeInfo_for_K_21,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded;

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
            mercury__assoc_list__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__assoc_list__V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
            MR_Box mercury__assoc_list___K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

            {
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_14, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
            if (mercury__assoc_list__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

                  mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
        return mercury__assoc_list__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__assoc_list__foldl_values_4_p_2(
  MR_Word mercury__assoc_list__TypeInfo_for_V_19,
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
  MR_Word mercury__assoc_list__TypeInfo_for_K_21,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded;

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
        else
          {
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__assoc_list__V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
            MR_Box mercury__assoc_list___K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

            {
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_14, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

              mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__assoc_list__foldl_values_4_p_1(
  MR_Word mercury__assoc_list__TypeInfo_for_V_19,
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
  MR_Word mercury__assoc_list__TypeInfo_for_K_21,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded;

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
        else
          {
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__assoc_list__V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
            MR_Box mercury__assoc_list___K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

            {
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_14, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

              mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__assoc_list__foldl_values_4_p_0(
  MR_Word mercury__assoc_list__TypeInfo_for_V_19,
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
  MR_Word mercury__assoc_list__TypeInfo_for_K_21,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded;

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
        else
          {
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__assoc_list__V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
            MR_Box mercury__assoc_list___K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

            {
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_14, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

              mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_7_1(
  void * mercury__assoc_list__env_ptr_arg)
{
  {
    struct mercury__assoc_list__foldl_keys_4_p_7_env_0_s * mercury__assoc_list__env_ptr = (struct mercury__assoc_list__foldl_keys_4_p_7_env_0_s *) mercury__assoc_list__env_ptr_arg;

    {
      mercury__assoc_list__foldl_keys_4_p_7((mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_K_19, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_A_20, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_V_21, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__P_1, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__KVs_11, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_17_17, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_4, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__cont, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_7(
  MR_Word mercury__assoc_list__TypeInfo_for_K_19,
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
  MR_Word mercury__assoc_list__TypeInfo_for_V_21,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4,
  MR_Cont mercury__assoc_list__cont,
  void * mercury__assoc_list__cont_env_ptr)
{
  {
    struct mercury__assoc_list__foldl_keys_4_p_7_env_0_s mercury__assoc_list__env;

    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_K_19 = mercury__assoc_list__TypeInfo_for_K_19;
    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_A_20 = mercury__assoc_list__TypeInfo_for_A_20;
    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_V_21 = mercury__assoc_list__TypeInfo_for_V_21;
    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__P_1 = mercury__assoc_list__P_1;
    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_4;
    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__cont = mercury__assoc_list__cont;
    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__cont_env_ptr = mercury__assoc_list__cont_env_ptr;
    {
      MR_bool mercury__assoc_list__succeeded;

      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *((mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_4) = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
          {
            ((mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__cont)((mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__cont_env_ptr);
          }
        }
      else
        {
          MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
          MR_Box mercury__assoc_list__K_13;
          MR_Box mercury__assoc_list___V_14;
          void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

          (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
          mercury__assoc_list__K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
          mercury__assoc_list___V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
          mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__P_1, (MR_Integer) 1)));
          {
            mercury__assoc_list__func_0(((MR_Box) (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__P_1), mercury__assoc_list__K_13, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &(mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_17_17, mercury__assoc_list__foldl_keys_4_p_7_1, &mercury__assoc_list__env);
          }
        }
    }
  }
}

static void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_6_1(
  void * mercury__assoc_list__env_ptr_arg)
{
  {
    struct mercury__assoc_list__foldl_keys_4_p_6_env_0_s * mercury__assoc_list__env_ptr = (struct mercury__assoc_list__foldl_keys_4_p_6_env_0_s *) mercury__assoc_list__env_ptr_arg;

    {
      mercury__assoc_list__foldl_keys_4_p_6((mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_K_19, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_A_20, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_V_21, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__P_1, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__KVs_11, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_17_17, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_4, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__cont, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_6(
  MR_Word mercury__assoc_list__TypeInfo_for_K_19,
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
  MR_Word mercury__assoc_list__TypeInfo_for_V_21,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4,
  MR_Cont mercury__assoc_list__cont,
  void * mercury__assoc_list__cont_env_ptr)
{
  {
    struct mercury__assoc_list__foldl_keys_4_p_6_env_0_s mercury__assoc_list__env;

    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_K_19 = mercury__assoc_list__TypeInfo_for_K_19;
    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_A_20 = mercury__assoc_list__TypeInfo_for_A_20;
    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_V_21 = mercury__assoc_list__TypeInfo_for_V_21;
    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__P_1 = mercury__assoc_list__P_1;
    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_4;
    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__cont = mercury__assoc_list__cont;
    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__cont_env_ptr = mercury__assoc_list__cont_env_ptr;
    {
      MR_bool mercury__assoc_list__succeeded;

      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *((mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_4) = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
          {
            ((mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__cont)((mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__cont_env_ptr);
          }
        }
      else
        {
          MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
          MR_Box mercury__assoc_list__K_13;
          MR_Box mercury__assoc_list___V_14;
          void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

          (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
          mercury__assoc_list__K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
          mercury__assoc_list___V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
          mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__P_1, (MR_Integer) 1)));
          {
            mercury__assoc_list__func_0(((MR_Box) (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__P_1), mercury__assoc_list__K_13, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &(mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_17_17, mercury__assoc_list__foldl_keys_4_p_6_1, &mercury__assoc_list__env);
          }
        }
    }
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl_keys_4_p_5(
  MR_Word mercury__assoc_list__TypeInfo_for_K_19,
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
  MR_Word mercury__assoc_list__TypeInfo_for_V_21,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded;

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
            mercury__assoc_list__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__assoc_list__K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
            MR_Box mercury__assoc_list___V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

            {
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__K_13, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
            if (mercury__assoc_list__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

                  mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
        return mercury__assoc_list__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl_keys_4_p_4(
  MR_Word mercury__assoc_list__TypeInfo_for_K_19,
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
  MR_Word mercury__assoc_list__TypeInfo_for_V_21,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded;

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
            mercury__assoc_list__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__assoc_list__K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
            MR_Box mercury__assoc_list___V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

            {
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__K_13, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
            if (mercury__assoc_list__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

                  mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
        return mercury__assoc_list__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl_keys_4_p_3(
  MR_Word mercury__assoc_list__TypeInfo_for_K_19,
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
  MR_Word mercury__assoc_list__TypeInfo_for_V_21,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded;

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
            mercury__assoc_list__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__assoc_list__K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
            MR_Box mercury__assoc_list___V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

            {
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__K_13, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
            if (mercury__assoc_list__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

                  mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
        return mercury__assoc_list__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_2(
  MR_Word mercury__assoc_list__TypeInfo_for_K_19,
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
  MR_Word mercury__assoc_list__TypeInfo_for_V_21,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded;

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
        else
          {
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__assoc_list__K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
            MR_Box mercury__assoc_list___V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

            {
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__K_13, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

              mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_1(
  MR_Word mercury__assoc_list__TypeInfo_for_K_19,
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
  MR_Word mercury__assoc_list__TypeInfo_for_V_21,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded;

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
        else
          {
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__assoc_list__K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
            MR_Box mercury__assoc_list___V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

            {
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__K_13, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

              mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_19,
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
  MR_Word mercury__assoc_list__TypeInfo_for_V_21,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded;

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
        else
          {
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__assoc_list__K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
            MR_Box mercury__assoc_list___V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

            {
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__K_13, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

              mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__assoc_list__merge_2_f_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_7,
  MR_Word mercury__assoc_list__TypeInfo_for_V_8,
  MR_Word mercury__assoc_list__As_4,
  MR_Word mercury__assoc_list__Bs_5)
{
  {
    MR_bool mercury__assoc_list__succeeded;
    MR_Word mercury__assoc_list__ABs_6;

    {
      mercury__assoc_list__merge_3_p_0(mercury__assoc_list__TypeInfo_for_K_7, mercury__assoc_list__TypeInfo_for_V_8, mercury__assoc_list__As_4, mercury__assoc_list__Bs_5, &mercury__assoc_list__ABs_6);
    }
    return mercury__assoc_list__ABs_6;
  }
}

void MR_CALL 
mercury__assoc_list__merge_3_p_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_22,
  MR_Word mercury__assoc_list__TypeInfo_for_V_23,
  MR_Word mercury__assoc_list__HeadVar__1_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Word * mercury__assoc_list__HeadVar__3_3)
{
  {
    MR_bool mercury__assoc_list__succeeded;

    if ((mercury__assoc_list__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        *mercury__assoc_list__HeadVar__3_3 = mercury__assoc_list__HeadVar__2_2;
    else
      {
        MR_Word mercury__assoc_list__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__assoc_list__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 0)));

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__assoc_list__HeadVar__3_3 = mercury__assoc_list__HeadVar__1_1;
        else
          {
            MR_Word mercury__assoc_list__B_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__assoc_list__Bs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__assoc_list__AK_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_26_26, (MR_Integer) 0));
            MR_Box mercury__assoc_list__BK_15 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__B_10, (MR_Integer) 0));
            MR_Word mercury__assoc_list__V_24_24;
            MR_Box mercury__assoc_list___AV_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_26_26, (MR_Integer) 1));
            MR_Box mercury__assoc_list___BV_16 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__B_10, (MR_Integer) 1));

            {
              mercury__builtin__compare_3_p_0(mercury__assoc_list__TypeInfo_for_K_22, &mercury__assoc_list__V_24_24, mercury__assoc_list__AK_13, mercury__assoc_list__BK_15);
            }
            mercury__assoc_list__succeeded = ((MR_Integer) 2 == mercury__assoc_list__V_24_24);
            if (mercury__assoc_list__succeeded)
              {
                MR_Word mercury__assoc_list__Cs0_17;

                {
                  mercury__assoc_list__merge_3_p_0(mercury__assoc_list__TypeInfo_for_K_22, mercury__assoc_list__TypeInfo_for_V_23, mercury__assoc_list__HeadVar__1_1, mercury__assoc_list__Bs_11, &mercury__assoc_list__Cs0_17);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__assoc_list__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__B_10));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__Cs0_17));
                }
              }
            else
              {
                MR_Word mercury__assoc_list__Cs0_21;

                {
                  mercury__assoc_list__merge_3_p_0(mercury__assoc_list__TypeInfo_for_K_22, mercury__assoc_list__TypeInfo_for_V_23, mercury__assoc_list__V_25_25, mercury__assoc_list__HeadVar__2_2, &mercury__assoc_list__Cs0_21);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__assoc_list__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_26_26));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__Cs0_21));
                }
              }
          }
      }
  }
}

void MR_CALL 
mercury__assoc_list__filter_4_p_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_17,
  MR_Word mercury__assoc_list__TypeInfo_for_V_18,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Word * mercury__assoc_list__HeadVar__3_3,
  MR_Word * mercury__assoc_list__HeadVar__4_4)
{
  {
    MR_bool mercury__assoc_list__succeeded;

    if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__assoc_list__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Box mercury__assoc_list__HK_7;
        MR_Word mercury__assoc_list__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__assoc_list__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
        MR_Box mercury__assoc_list__HV_8;
        MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box);

        mercury__assoc_list__HK_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_14_14, (MR_Integer) 0));
        mercury__assoc_list__HV_8 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_14_14, (MR_Integer) 1));
        mercury__assoc_list__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));
        {
          mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__HK_7);
        }
        if (mercury__assoc_list__succeeded)
          {
            MR_Word mercury__assoc_list__TrueTail_12;

            {
              mercury__assoc_list__filter_4_p_0(mercury__assoc_list__TypeInfo_for_K_17, mercury__assoc_list__TypeInfo_for_V_18, mercury__assoc_list__P_1, mercury__assoc_list__T_9, &mercury__assoc_list__TrueTail_12, mercury__assoc_list__HeadVar__4_4);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__assoc_list__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_14_14));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__TrueTail_12));
            }
          }
        else
          {
            MR_Word mercury__assoc_list__FalseTail_13;

            {
              mercury__assoc_list__filter_4_p_0(mercury__assoc_list__TypeInfo_for_K_17, mercury__assoc_list__TypeInfo_for_V_18, mercury__assoc_list__P_1, mercury__assoc_list__T_9, mercury__assoc_list__HeadVar__3_3, &mercury__assoc_list__FalseTail_13);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__assoc_list__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_14_14));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__FalseTail_13));
            }
          }
      }
  }
}

MR_Word MR_CALL 
mercury__assoc_list__negated_filter_2_f_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_7,
  MR_Word mercury__assoc_list__TypeInfo_for_V_8,
  MR_Word mercury__assoc_list__P_4,
  MR_Word mercury__assoc_list__List_5)
{
  {
    MR_bool mercury__assoc_list__succeeded;
    MR_Word mercury__assoc_list__Falses_6;

    {
      mercury__assoc_list__negated_filter_3_p_0(mercury__assoc_list__TypeInfo_for_K_7, mercury__assoc_list__TypeInfo_for_V_8, mercury__assoc_list__P_4, mercury__assoc_list__List_5, &mercury__assoc_list__Falses_6);
    }
    return mercury__assoc_list__Falses_6;
  }
}

void MR_CALL 
mercury__assoc_list__negated_filter_3_p_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_13,
  MR_Word mercury__assoc_list__TypeInfo_for_V_14,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Word * mercury__assoc_list__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded;

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Box mercury__assoc_list__HK_6;
            MR_Word mercury__assoc_list__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__assoc_list__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Box mercury__assoc_list__HV_7;
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box);

            mercury__assoc_list__HK_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 0));
            mercury__assoc_list__HV_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 1));
            mercury__assoc_list__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));
            {
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__HK_6);
            }
            if (mercury__assoc_list__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__T_8;

                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
            else
              {
                MR_Word mercury__assoc_list__FalseTail_10;

                {
                  mercury__assoc_list__negated_filter_3_p_0(mercury__assoc_list__TypeInfo_for_K_13, mercury__assoc_list__TypeInfo_for_V_14, mercury__assoc_list__P_1, mercury__assoc_list__T_8, &mercury__assoc_list__FalseTail_10);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__assoc_list__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_11_11));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__FalseTail_10));
                }
              }
          }
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__assoc_list__filter_2_f_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_7,
  MR_Word mercury__assoc_list__TypeInfo_for_V_8,
  MR_Word mercury__assoc_list__P_4,
  MR_Word mercury__assoc_list__List_5)
{
  {
    MR_bool mercury__assoc_list__succeeded;
    MR_Word mercury__assoc_list__Trues_6;

    {
      mercury__assoc_list__filter_3_p_0(mercury__assoc_list__TypeInfo_for_K_7, mercury__assoc_list__TypeInfo_for_V_8, mercury__assoc_list__P_4, mercury__assoc_list__List_5, &mercury__assoc_list__Trues_6);
    }
    return mercury__assoc_list__Trues_6;
  }
}

void MR_CALL 
mercury__assoc_list__filter_3_p_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_13,
  MR_Word mercury__assoc_list__TypeInfo_for_V_14,
  MR_Word mercury__assoc_list__P_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Word * mercury__assoc_list__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded;

        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Box mercury__assoc_list__HK_6;
            MR_Word mercury__assoc_list__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__assoc_list__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
            MR_Box mercury__assoc_list__HV_7;
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box);

            mercury__assoc_list__HK_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 0));
            mercury__assoc_list__HV_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 1));
            mercury__assoc_list__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));
            {
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__HK_6);
            }
            if (mercury__assoc_list__succeeded)
              {
                MR_Word mercury__assoc_list__TrueTail_10;

                {
                  mercury__assoc_list__filter_3_p_0(mercury__assoc_list__TypeInfo_for_K_13, mercury__assoc_list__TypeInfo_for_V_14, mercury__assoc_list__P_1, mercury__assoc_list__T_8, &mercury__assoc_list__TrueTail_10);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__assoc_list__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_11_11));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__TrueTail_10));
                }
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__T_8;

                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
      }
      break;
    }
}

void MR_CALL 
mercury__assoc_list__map_values_3_p_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_13,
  MR_Word mercury__assoc_list__TypeInfo_for_V_14,
  MR_Word mercury__assoc_list__TypeInfo_for_W_15,
  MR_Word mercury__assoc_list__HeadVar__1_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Word * mercury__assoc_list__HeadVar__3_3)
{
  {
    MR_bool mercury__assoc_list__succeeded;

    if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__assoc_list__K_6;
        MR_Box mercury__assoc_list__V0_7;
        MR_Word mercury__assoc_list__KVs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
        MR_Box mercury__assoc_list__V_9;
        MR_Word mercury__assoc_list__KVs_10;
        MR_Word mercury__assoc_list__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__assoc_list__V_12_12;
        void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

        mercury__assoc_list__K_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 0));
        mercury__assoc_list__V0_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 1));
        mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
        {
          mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__HeadVar__1_1), mercury__assoc_list__K_6, mercury__assoc_list__V0_7, &mercury__assoc_list__V_9);
        }
        {
          mercury__assoc_list__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 0) = mercury__assoc_list__K_6;
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 1) = mercury__assoc_list__V_9;
        }
        {
          mercury__assoc_list__map_values_3_p_0(mercury__assoc_list__TypeInfo_for_K_13, mercury__assoc_list__TypeInfo_for_V_14, mercury__assoc_list__TypeInfo_for_W_15, mercury__assoc_list__HeadVar__1_1, mercury__assoc_list__KVs0_8, &mercury__assoc_list__KVs_10);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__assoc_list__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_12_12));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__KVs_10));
        }
      }
  }
}

MR_Word MR_CALL 
mercury__assoc_list__map_values_2_f_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_13,
  MR_Word mercury__assoc_list__TypeInfo_for_V_14,
  MR_Word mercury__assoc_list__TypeInfo_for_W_15,
  MR_Word mercury__assoc_list__HeadVar__1_1,
  MR_Word mercury__assoc_list__HeadVar__2_2)
{
  {
    MR_bool mercury__assoc_list__succeeded;
    MR_Word mercury__assoc_list__HeadVar__3_3;

    if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__assoc_list__K_6;
        MR_Box mercury__assoc_list__V0_7;
        MR_Word mercury__assoc_list__KVs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
        MR_Box mercury__assoc_list__V_9;
        MR_Word mercury__assoc_list__KVs_10;
        MR_Word mercury__assoc_list__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__assoc_list__V_12_12;
        MR_Box MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box);

        mercury__assoc_list__K_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 0));
        mercury__assoc_list__V0_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 1));
        mercury__assoc_list__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
        {
          mercury__assoc_list__V_9 = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__HeadVar__1_1), mercury__assoc_list__K_6, mercury__assoc_list__V0_7);
        }
        {
          mercury__assoc_list__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 0) = mercury__assoc_list__K_6;
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 1) = mercury__assoc_list__V_9;
        }
        {
          mercury__assoc_list__KVs_10 = mercury__assoc_list__map_values_2_f_0(mercury__assoc_list__TypeInfo_for_K_13, mercury__assoc_list__TypeInfo_for_V_14, mercury__assoc_list__TypeInfo_for_W_15, mercury__assoc_list__HeadVar__1_1, mercury__assoc_list__KVs0_8);
        }
        {
          mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__3_3, 0) = ((MR_Box) (mercury__assoc_list__V_12_12));
          MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__3_3, 1) = ((MR_Box) (mercury__assoc_list__KVs_10));
        }
      }
    return mercury__assoc_list__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__assoc_list__map_values_only_3_p_0(
  MR_Word mercury__assoc_list__TypeInfo_for_V_13,
  MR_Word mercury__assoc_list__TypeInfo_for_W_14,
  MR_Word mercury__assoc_list__TypeInfo_for_K_15,
  MR_Word mercury__assoc_list__HeadVar__1_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Word * mercury__assoc_list__HeadVar__3_3)
{
  {
    MR_bool mercury__assoc_list__succeeded;

    if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__assoc_list__K_6;
        MR_Box mercury__assoc_list__V0_7;
        MR_Word mercury__assoc_list__KVs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
        MR_Box mercury__assoc_list__V_9;
        MR_Word mercury__assoc_list__KVs_10;
        MR_Word mercury__assoc_list__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__assoc_list__V_12_12;
        void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box *);

        mercury__assoc_list__K_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 0));
        mercury__assoc_list__V0_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 1));
        mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
        {
          mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__HeadVar__1_1), mercury__assoc_list__V0_7, &mercury__assoc_list__V_9);
        }
        {
          mercury__assoc_list__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 0) = mercury__assoc_list__K_6;
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 1) = mercury__assoc_list__V_9;
        }
        {
          mercury__assoc_list__map_values_only_3_p_0(mercury__assoc_list__TypeInfo_for_V_13, mercury__assoc_list__TypeInfo_for_W_14, mercury__assoc_list__TypeInfo_for_K_15, mercury__assoc_list__HeadVar__1_1, mercury__assoc_list__KVs0_8, &mercury__assoc_list__KVs_10);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__assoc_list__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_12_12));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__KVs_10));
        }
      }
  }
}

MR_Word MR_CALL 
mercury__assoc_list__map_values_only_2_f_0(
  MR_Word mercury__assoc_list__TypeInfo_for_V_13,
  MR_Word mercury__assoc_list__TypeInfo_for_W_14,
  MR_Word mercury__assoc_list__TypeInfo_for_K_15,
  MR_Word mercury__assoc_list__HeadVar__1_1,
  MR_Word mercury__assoc_list__HeadVar__2_2)
{
  {
    MR_bool mercury__assoc_list__succeeded;
    MR_Word mercury__assoc_list__HeadVar__3_3;

    if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__assoc_list__K_6;
        MR_Box mercury__assoc_list__V0_7;
        MR_Word mercury__assoc_list__KVs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
        MR_Box mercury__assoc_list__V_9;
        MR_Word mercury__assoc_list__KVs_10;
        MR_Word mercury__assoc_list__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__assoc_list__V_12_12;
        MR_Box MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box);

        mercury__assoc_list__K_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 0));
        mercury__assoc_list__V0_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 1));
        mercury__assoc_list__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
        {
          mercury__assoc_list__V_9 = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__HeadVar__1_1), mercury__assoc_list__V0_7);
        }
        {
          mercury__assoc_list__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 0) = mercury__assoc_list__K_6;
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 1) = mercury__assoc_list__V_9;
        }
        {
          mercury__assoc_list__KVs_10 = mercury__assoc_list__map_values_only_2_f_0(mercury__assoc_list__TypeInfo_for_V_13, mercury__assoc_list__TypeInfo_for_W_14, mercury__assoc_list__TypeInfo_for_K_15, mercury__assoc_list__HeadVar__1_1, mercury__assoc_list__KVs0_8);
        }
        {
          mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__3_3, 0) = ((MR_Box) (mercury__assoc_list__V_12_12));
          MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__3_3, 1) = ((MR_Box) (mercury__assoc_list__KVs_10));
        }
      }
    return mercury__assoc_list__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__assoc_list__map_keys_only_3_p_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_13,
  MR_Word mercury__assoc_list__TypeInfo_for_L_14,
  MR_Word mercury__assoc_list__TypeInfo_for_V_15,
  MR_Word mercury__assoc_list__HeadVar__1_1,
  MR_Word mercury__assoc_list__HeadVar__2_2,
  MR_Word * mercury__assoc_list__HeadVar__3_3)
{
  {
    MR_bool mercury__assoc_list__succeeded;

    if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__assoc_list__K0_6;
        MR_Box mercury__assoc_list__V_7;
        MR_Word mercury__assoc_list__KVs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
        MR_Box mercury__assoc_list__K_9;
        MR_Word mercury__assoc_list__KVs_10;
        MR_Word mercury__assoc_list__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__assoc_list__V_12_12;
        void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box *);

        mercury__assoc_list__K0_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 0));
        mercury__assoc_list__V_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 1));
        mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
        {
          mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__HeadVar__1_1), mercury__assoc_list__K0_6, &mercury__assoc_list__K_9);
        }
        {
          mercury__assoc_list__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 0) = mercury__assoc_list__K_9;
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 1) = mercury__assoc_list__V_7;
        }
        {
          mercury__assoc_list__map_keys_only_3_p_0(mercury__assoc_list__TypeInfo_for_K_13, mercury__assoc_list__TypeInfo_for_L_14, mercury__assoc_list__TypeInfo_for_V_15, mercury__assoc_list__HeadVar__1_1, mercury__assoc_list__KVs0_8, &mercury__assoc_list__KVs_10);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__assoc_list__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_12_12));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__KVs_10));
        }
      }
  }
}

MR_Word MR_CALL 
mercury__assoc_list__map_keys_only_2_f_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_13,
  MR_Word mercury__assoc_list__TypeInfo_for_L_14,
  MR_Word mercury__assoc_list__TypeInfo_for_V_15,
  MR_Word mercury__assoc_list__HeadVar__1_1,
  MR_Word mercury__assoc_list__HeadVar__2_2)
{
  {
    MR_bool mercury__assoc_list__succeeded;
    MR_Word mercury__assoc_list__HeadVar__3_3;

    if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__assoc_list__K0_6;
        MR_Box mercury__assoc_list__V_7;
        MR_Word mercury__assoc_list__KVs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
        MR_Box mercury__assoc_list__K_9;
        MR_Word mercury__assoc_list__KVs_10;
        MR_Word mercury__assoc_list__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__assoc_list__V_12_12;
        MR_Box MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box);

        mercury__assoc_list__K0_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 0));
        mercury__assoc_list__V_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 1));
        mercury__assoc_list__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
        {
          mercury__assoc_list__K_9 = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__HeadVar__1_1), mercury__assoc_list__K0_6);
        }
        {
          mercury__assoc_list__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 0) = mercury__assoc_list__K_9;
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 1) = mercury__assoc_list__V_7;
        }
        {
          mercury__assoc_list__KVs_10 = mercury__assoc_list__map_keys_only_2_f_0(mercury__assoc_list__TypeInfo_for_K_13, mercury__assoc_list__TypeInfo_for_L_14, mercury__assoc_list__TypeInfo_for_V_15, mercury__assoc_list__HeadVar__1_1, mercury__assoc_list__KVs0_8);
        }
        {
          mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__3_3, 0) = ((MR_Box) (mercury__assoc_list__V_12_12));
          MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__3_3, 1) = ((MR_Box) (mercury__assoc_list__KVs_10));
        }
      }
    return mercury__assoc_list__HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__remove_4_p_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_14,
  MR_Word mercury__assoc_list__TypeInfo_for_V_15,
  MR_Word mercury__assoc_list__HeadVar__1_1,
  MR_Box mercury__assoc_list__Key_8,
  MR_Box * mercury__assoc_list__Value_9,
  MR_Word * mercury__assoc_list__Filtered_10)
{
  {
    MR_bool mercury__assoc_list__succeeded = ((MR_tag((MR_Word) mercury__assoc_list__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Box mercury__assoc_list__K_5;
    MR_Box mercury__assoc_list__V_6;
    MR_Word mercury__assoc_list__KVs_7;
    MR_Word mercury__assoc_list__V_12_12;

    if (mercury__assoc_list__succeeded)
      {
        mercury__assoc_list__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 0)));
        mercury__assoc_list__KVs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
        mercury__assoc_list__K_5 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, (MR_Integer) 0));
        mercury__assoc_list__V_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, (MR_Integer) 1));
        {
          mercury__assoc_list__succeeded = mercury__builtin__unify_2_p_0(mercury__assoc_list__TypeInfo_for_K_14, mercury__assoc_list__K_5, mercury__assoc_list__Key_8);
        }
        if (mercury__assoc_list__succeeded)
          {
            *mercury__assoc_list__Value_9 = mercury__assoc_list__V_6;
            *mercury__assoc_list__Filtered_10 = mercury__assoc_list__KVs_7;
            mercury__assoc_list__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__assoc_list__FilteredTail_11;

            {
              mercury__assoc_list__succeeded = mercury__assoc_list__remove_4_p_0(mercury__assoc_list__TypeInfo_for_K_14, mercury__assoc_list__TypeInfo_for_V_15, mercury__assoc_list__KVs_7, mercury__assoc_list__Key_8, mercury__assoc_list__Value_9, &mercury__assoc_list__FilteredTail_11);
            }
            if (mercury__assoc_list__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__assoc_list__Filtered_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_12_12));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__FilteredTail_11));
                }
                mercury__assoc_list__succeeded = MR_TRUE;
              }
          }
      }
    return mercury__assoc_list__succeeded;
  }
}

MR_Box MR_CALL 
mercury__assoc_list__det_elem_2_f_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_9,
  MR_Word mercury__assoc_list__TypeInfo_for_V_10,
  MR_Box mercury__assoc_list__K_5,
  MR_Word mercury__assoc_list__AL_4)
{
  {
    MR_bool mercury__assoc_list__succeeded;
    MR_Box mercury__assoc_list__V_6;
    MR_Box mercury__assoc_list__VPrime_7;

    {
      mercury__assoc_list__succeeded = mercury__assoc_list__search_3_p_0(mercury__assoc_list__TypeInfo_for_K_9, mercury__assoc_list__TypeInfo_for_V_10, mercury__assoc_list__AL_4, mercury__assoc_list__K_5, &mercury__assoc_list__VPrime_7);
    }
    if (mercury__assoc_list__succeeded)
      mercury__assoc_list__V_6 = mercury__assoc_list__VPrime_7;
    else
      {
        {
          mercury__require__report_lookup_error_2_p_0(mercury__assoc_list__TypeInfo_for_K_9, (MR_String) "assoc_list.det_elem: key not found", mercury__assoc_list__K_5);
        }
      }
    return mercury__assoc_list__V_6;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__elem_2_f_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_7,
  MR_Word mercury__assoc_list__TypeInfo_for_V_8,
  MR_Box mercury__assoc_list__K_5,
  MR_Word mercury__assoc_list__AL_4,
  MR_Box * mercury__assoc_list__V_6)
{
  {
    MR_bool mercury__assoc_list__succeeded;

    {
      mercury__assoc_list__succeeded = mercury__assoc_list__search_3_p_0(mercury__assoc_list__TypeInfo_for_K_7, mercury__assoc_list__TypeInfo_for_V_8, mercury__assoc_list__AL_4, mercury__assoc_list__K_5, mercury__assoc_list__V_6);
    }
    return mercury__assoc_list__succeeded;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__search_3_p_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_10,
  MR_Word mercury__assoc_list__TypeInfo_for_V_11,
  MR_Word mercury__assoc_list__HeadVar__1_1,
  MR_Box mercury__assoc_list__Key_7,
  MR_Box * mercury__assoc_list__Value_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__assoc_list__succeeded = ((MR_tag((MR_Word) mercury__assoc_list__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Box mercury__assoc_list__K_4;
        MR_Box mercury__assoc_list__V_5;
        MR_Word mercury__assoc_list__KVs_6;
        MR_Word mercury__assoc_list__V_9_9;

        if (mercury__assoc_list__succeeded)
          {
            mercury__assoc_list__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 0)));
            mercury__assoc_list__KVs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
            mercury__assoc_list__K_4 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_9_9, (MR_Integer) 0));
            mercury__assoc_list__V_5 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_9_9, (MR_Integer) 1));
            {
              mercury__assoc_list__succeeded = mercury__builtin__unify_2_p_0(mercury__assoc_list__TypeInfo_for_K_10, mercury__assoc_list__K_4, mercury__assoc_list__Key_7);
            }
            if (mercury__assoc_list__succeeded)
              {
                *mercury__assoc_list__Value_8 = mercury__assoc_list__V_5;
                mercury__assoc_list__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__assoc_list__HeadVar__1__tmp_copy_1 = mercury__assoc_list__KVs_6;

                  mercury__assoc_list__HeadVar__1_1 = mercury__assoc_list__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return mercury__assoc_list__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__assoc_list__keys_and_values_3_p_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_10,
  MR_Word mercury__assoc_list__TypeInfo_for_V_11,
  MR_Word mercury__assoc_list__HeadVar__1_1,
  MR_Word * mercury__assoc_list__HeadVar__2_2,
  MR_Word * mercury__assoc_list__HeadVar__3_3)
{
  {
    MR_bool mercury__assoc_list__succeeded;

    if ((mercury__assoc_list__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__assoc_list__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Box mercury__assoc_list__K_4;
        MR_Box mercury__assoc_list__V_5;
        MR_Word mercury__assoc_list__KVs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__assoc_list__Ks_7;
        MR_Word mercury__assoc_list__Vs_8;
        MR_Word mercury__assoc_list__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 0)));

        mercury__assoc_list__K_4 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_9_9, (MR_Integer) 0));
        mercury__assoc_list__V_5 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_9_9, (MR_Integer) 1));
        {
          mercury__assoc_list__keys_and_values_3_p_0(mercury__assoc_list__TypeInfo_for_K_10, mercury__assoc_list__TypeInfo_for_V_11, mercury__assoc_list__KVs_6, &mercury__assoc_list__Ks_7, &mercury__assoc_list__Vs_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__assoc_list__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__assoc_list__K_4;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__Ks_7));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__assoc_list__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__assoc_list__V_5;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__Vs_8));
        }
      }
  }
}

void MR_CALL 
mercury__assoc_list__values_2_p_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_8,
  MR_Word mercury__assoc_list__TypeInfo_for_V_9,
  MR_Word mercury__assoc_list__HeadVar__1_1,
  MR_Word * mercury__assoc_list__HeadVar__2_2)
{
  {
    MR_bool mercury__assoc_list__succeeded;

    if ((mercury__assoc_list__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__assoc_list__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__assoc_list__V_4;
        MR_Word mercury__assoc_list__KVs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__assoc_list__Vs_6;
        MR_Word mercury__assoc_list__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 0)));
        MR_Box mercury__assoc_list__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_7_7, (MR_Integer) 0));

        mercury__assoc_list__V_4 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_7_7, (MR_Integer) 1));
        {
          mercury__assoc_list__values_2_p_0(mercury__assoc_list__TypeInfo_for_K_8, mercury__assoc_list__TypeInfo_for_V_9, mercury__assoc_list__KVs_5, &mercury__assoc_list__Vs_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__assoc_list__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__assoc_list__V_4;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__Vs_6));
        }
      }
  }
}

MR_Word MR_CALL 
mercury__assoc_list__values_1_f_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_5,
  MR_Word mercury__assoc_list__TypeInfo_for_V_6,
  MR_Word mercury__assoc_list__AL_3)
{
  {
    MR_bool mercury__assoc_list__succeeded;
    MR_Word mercury__assoc_list__Vs_4;

    {
      mercury__assoc_list__values_2_p_0(mercury__assoc_list__TypeInfo_for_K_5, mercury__assoc_list__TypeInfo_for_V_6, mercury__assoc_list__AL_3, &mercury__assoc_list__Vs_4);
    }
    return mercury__assoc_list__Vs_4;
  }
}

void MR_CALL 
mercury__assoc_list__keys_2_p_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_8,
  MR_Word mercury__assoc_list__TypeInfo_for_V_9,
  MR_Word mercury__assoc_list__HeadVar__1_1,
  MR_Word * mercury__assoc_list__HeadVar__2_2)
{
  {
    MR_bool mercury__assoc_list__succeeded;

    if ((mercury__assoc_list__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__assoc_list__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__assoc_list__K_3;
        MR_Word mercury__assoc_list__KVs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__assoc_list__Ks_6;
        MR_Word mercury__assoc_list__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 0)));
        MR_Box mercury__assoc_list__V_4_4;

        mercury__assoc_list__K_3 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_7_7, (MR_Integer) 0));
        mercury__assoc_list__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_7_7, (MR_Integer) 1));
        {
          mercury__assoc_list__keys_2_p_0(mercury__assoc_list__TypeInfo_for_K_8, mercury__assoc_list__TypeInfo_for_V_9, mercury__assoc_list__KVs_5, &mercury__assoc_list__Ks_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__assoc_list__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__assoc_list__K_3;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__Ks_6));
        }
      }
  }
}

MR_Word MR_CALL 
mercury__assoc_list__keys_1_f_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_5,
  MR_Word mercury__assoc_list__TypeInfo_for_V_6,
  MR_Word mercury__assoc_list__AL_3)
{
  {
    MR_bool mercury__assoc_list__succeeded;
    MR_Word mercury__assoc_list__Ks_4;

    {
      mercury__assoc_list__keys_2_p_0(mercury__assoc_list__TypeInfo_for_K_5, mercury__assoc_list__TypeInfo_for_V_6, mercury__assoc_list__AL_3, &mercury__assoc_list__Ks_4);
    }
    return mercury__assoc_list__Ks_4;
  }
}

void MR_CALL 
mercury__assoc_list__from_corresponding_lists_3_p_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_31,
  MR_Word mercury__assoc_list__TypeInfo_for_V_32,
  MR_Word mercury__assoc_list__Ks_4,
  MR_Word mercury__assoc_list__Vs_5,
  MR_Word * mercury__assoc_list__KVs_6)
{
  {
    MR_bool mercury__assoc_list__succeeded;
    MR_Word mercury__assoc_list__KVsPrime_7;

    {
      mercury__assoc_list__succeeded = mercury__assoc_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__assoc_list__Ks_4, mercury__assoc_list__Vs_5, &mercury__assoc_list__KVsPrime_7);
    }
    if (mercury__assoc_list__succeeded)
      *mercury__assoc_list__KVs_6 = mercury__assoc_list__KVsPrime_7;
    else
      {
        MR_Word mercury__assoc_list__TypeCtorInfo_33_33 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
        MR_Word mercury__assoc_list__TypeInfo_34_34;
        MR_Word mercury__assoc_list__TypeInfo_35_35;
        MR_String mercury__assoc_list__KeyType_8;
        MR_Integer mercury__assoc_list__KeyLength_9;
        MR_String mercury__assoc_list__KeyLengthString_10;
        MR_String mercury__assoc_list__ValueType_11;
        MR_Integer mercury__assoc_list__ValueLength_12;
        MR_String mercury__assoc_list__ValueLengthString_13;
        MR_String mercury__assoc_list__ErrorString_14;
        MR_Word mercury__assoc_list__V_15_15;
        MR_Word mercury__assoc_list__V_16_16;
        MR_String mercury__assoc_list__V_18_18;
        MR_String mercury__assoc_list__V_20_20;
        MR_String mercury__assoc_list__V_21_21;
        MR_String mercury__assoc_list__V_23_23;
        MR_String mercury__assoc_list__V_24_24;
        MR_String mercury__assoc_list__V_26_26;
        MR_String mercury__assoc_list__V_27_27;
        MR_Word mercury__assoc_list__V_36_36;
        MR_Word mercury__assoc_list__V_37_37;

        {
          mercury__assoc_list__TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_34_34, 0) = ((MR_Box) (mercury__assoc_list__TypeCtorInfo_33_33));
          MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_34_34, 1) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_K_31));
        }
{
#define MR_PROC_LABEL mercury__assoc_list__from_corresponding_lists_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__assoc_list__TypeInfo_34_34 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__assoc_list__V_15_15  = TypeInfo;
}
        {
          mercury__assoc_list__KeyType_8 = mercury__type_desc__type_name_1_f_0(mercury__assoc_list__V_15_15);
        }
        {
          mercury__list__length_acc_3_p_0(mercury__assoc_list__TypeInfo_for_K_31, mercury__assoc_list__Ks_4, (MR_Integer) 0, &mercury__assoc_list__KeyLength_9);
        }
        {
          mercury__string__int_to_base_string_3_p_0(mercury__assoc_list__KeyLength_9, (MR_Integer) 10, &mercury__assoc_list__KeyLengthString_10);
        }
        {
          mercury__assoc_list__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_35_35, 0) = ((MR_Box) (mercury__assoc_list__TypeCtorInfo_33_33));
          MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_35_35, 1) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_V_32));
        }
{
#define MR_PROC_LABEL mercury__assoc_list__from_corresponding_lists_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__assoc_list__TypeInfo_35_35 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__assoc_list__V_16_16  = TypeInfo;
}
        {
          mercury__assoc_list__ValueType_11 = mercury__type_desc__type_name_1_f_0(mercury__assoc_list__V_16_16);
        }
        {
          mercury__list__length_acc_3_p_0(mercury__assoc_list__TypeInfo_for_V_32, mercury__assoc_list__Vs_5, (MR_Integer) 0, &mercury__assoc_list__ValueLength_12);
        }
        {
          mercury__string__int_to_base_string_3_p_0(mercury__assoc_list__ValueLength_12, (MR_Integer) 10, &mercury__assoc_list__ValueLengthString_13);
        }
        {
          mercury__string__append_3_p_2((MR_String) "\n\tValue list length: ", mercury__assoc_list__ValueLengthString_13, &mercury__assoc_list__V_27_27);
        }
        {
          mercury__string__append_3_p_2(mercury__assoc_list__ValueType_11, mercury__assoc_list__V_27_27, &mercury__assoc_list__V_26_26);
        }
        {
          mercury__string__append_3_p_2((MR_String) "\n\tValue list type: ", mercury__assoc_list__V_26_26, &mercury__assoc_list__V_24_24);
        }
        {
          mercury__string__append_3_p_2(mercury__assoc_list__KeyLengthString_10, mercury__assoc_list__V_24_24, &mercury__assoc_list__V_23_23);
        }
        {
          mercury__string__append_3_p_2((MR_String) "\n\tKey list length: ", mercury__assoc_list__V_23_23, &mercury__assoc_list__V_21_21);
        }
        {
          mercury__string__append_3_p_2(mercury__assoc_list__KeyType_8, mercury__assoc_list__V_21_21, &mercury__assoc_list__V_20_20);
        }
        {
          mercury__string__append_3_p_2((MR_String) "\tKey list type: ", mercury__assoc_list__V_20_20, &mercury__assoc_list__V_18_18);
        }
        {
          mercury__string__append_3_p_2((MR_String) "Lists have different lengths.\n", mercury__assoc_list__V_18_18, &mercury__assoc_list__ErrorString_14);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "assoc_list", (MR_String) "predicate \140assoc_list.from_corresponding_lists\'/3", mercury__assoc_list__ErrorString_14);
          return;
        }
      }
  }
}

MR_Word MR_CALL 
mercury__assoc_list__from_corresponding_lists_2_f_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_7,
  MR_Word mercury__assoc_list__TypeInfo_for_V_8,
  MR_Word mercury__assoc_list__Ks_4,
  MR_Word mercury__assoc_list__Vs_5)
{
  {
    MR_bool mercury__assoc_list__succeeded;
    MR_Word mercury__assoc_list__AL_6;

    {
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__assoc_list__TypeInfo_for_K_7, mercury__assoc_list__TypeInfo_for_V_8, mercury__assoc_list__Ks_4, mercury__assoc_list__Vs_5, &mercury__assoc_list__AL_6);
    }
    return mercury__assoc_list__AL_6;
  }
}

void MR_CALL 
mercury__assoc_list__reverse_members_2_p_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_9,
  MR_Word mercury__assoc_list__TypeInfo_for_V_10,
  MR_Word mercury__assoc_list__HeadVar__1_1,
  MR_Word * mercury__assoc_list__HeadVar__2_2)
{
  {
    MR_bool mercury__assoc_list__succeeded;

    if ((mercury__assoc_list__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__assoc_list__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__assoc_list__K_3;
        MR_Box mercury__assoc_list__V_4;
        MR_Word mercury__assoc_list__KVs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__assoc_list__VKs_6;
        MR_Word mercury__assoc_list__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__assoc_list__V_8_8;

        mercury__assoc_list__K_3 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_7_7, (MR_Integer) 0));
        mercury__assoc_list__V_4 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_7_7, (MR_Integer) 1));
        {
          mercury__assoc_list__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_8_8, 0) = mercury__assoc_list__V_4;
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_8_8, 1) = mercury__assoc_list__K_3;
        }
        {
          mercury__assoc_list__reverse_members_2_p_0(mercury__assoc_list__TypeInfo_for_K_9, mercury__assoc_list__TypeInfo_for_V_10, mercury__assoc_list__KVs_5, &mercury__assoc_list__VKs_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__assoc_list__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_8_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__VKs_6));
        }
      }
  }
}

MR_Word MR_CALL 
mercury__assoc_list__reverse_members_1_f_0(
  MR_Word mercury__assoc_list__TypeInfo_for_K_5,
  MR_Word mercury__assoc_list__TypeInfo_for_V_6,
  MR_Word mercury__assoc_list__AL1_3)
{
  {
    MR_bool mercury__assoc_list__succeeded;
    MR_Word mercury__assoc_list__AL2_4;

    {
      mercury__assoc_list__reverse_members_2_p_0(mercury__assoc_list__TypeInfo_for_K_5, mercury__assoc_list__TypeInfo_for_V_6, mercury__assoc_list__AL1_3, &mercury__assoc_list__AL2_4);
    }
    return mercury__assoc_list__AL2_4;
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module assoc_list. */
