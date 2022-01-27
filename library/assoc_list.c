/*
** Automatically generated from `assoc_list.m'
** by the Mercury compiler,
** version rotd-2014-12-12
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
#include "char.mih"
#include "construct.mih"
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



#line 201 "assoc_list.m"
struct mercury__assoc_list__foldl3_values_8_p_7_env_0_s {
#line 201 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_V_39;
#line 201 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_A_40;
#line 201 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_B_41;
#line 201 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_C_42;
#line 201 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_K_43;
#line 201 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl3_values_8_p_7_env_0__P_1;
#line 201 "assoc_list.m"
  MR_Box * mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_4;
#line 201 "assoc_list.m"
  MR_Box * mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_6;
#line 201 "assoc_list.m"
  MR_Box * mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_8;
#line 201 "assoc_list.m"
  MR_Cont mercury__assoc_list__foldl3_values_8_p_7_env_0__cont;
#line 201 "assoc_list.m"
  void * mercury__assoc_list__foldl3_values_8_p_7_env_0__cont_env_ptr;
#line 397 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl3_values_8_p_7_env_0__KVs_21;
#line 397 "assoc_list.m"
  MR_Box mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_33_33;
#line 397 "assoc_list.m"
  MR_Box mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_34_34;
#line 397 "assoc_list.m"
  MR_Box mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_35_35;
#line 201 "assoc_list.m"
};

#line 199 "assoc_list.m"
struct mercury__assoc_list__foldl3_values_8_p_6_env_0_s {
#line 199 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_V_39;
#line 199 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_A_40;
#line 199 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_B_41;
#line 199 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_C_42;
#line 199 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_K_43;
#line 199 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl3_values_8_p_6_env_0__P_1;
#line 199 "assoc_list.m"
  MR_Box * mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_4;
#line 199 "assoc_list.m"
  MR_Box * mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_6;
#line 199 "assoc_list.m"
  MR_Box * mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_8;
#line 199 "assoc_list.m"
  MR_Cont mercury__assoc_list__foldl3_values_8_p_6_env_0__cont;
#line 199 "assoc_list.m"
  void * mercury__assoc_list__foldl3_values_8_p_6_env_0__cont_env_ptr;
#line 397 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl3_values_8_p_6_env_0__KVs_21;
#line 397 "assoc_list.m"
  MR_Box mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_33_33;
#line 397 "assoc_list.m"
  MR_Box mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_34_34;
#line 397 "assoc_list.m"
  MR_Box mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_35_35;
#line 199 "assoc_list.m"
};

#line 180 "assoc_list.m"
struct mercury__assoc_list__foldl2_values_6_p_7_env_0_s {
#line 180 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_V_29;
#line 180 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_A_30;
#line 180 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_B_31;
#line 180 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_K_32;
#line 180 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl2_values_6_p_7_env_0__P_1;
#line 180 "assoc_list.m"
  MR_Box * mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_4;
#line 180 "assoc_list.m"
  MR_Box * mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_6;
#line 180 "assoc_list.m"
  MR_Cont mercury__assoc_list__foldl2_values_6_p_7_env_0__cont;
#line 180 "assoc_list.m"
  void * mercury__assoc_list__foldl2_values_6_p_7_env_0__cont_env_ptr;
#line 391 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl2_values_6_p_7_env_0__KVs_16;
#line 391 "assoc_list.m"
  MR_Box mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_25_25;
#line 391 "assoc_list.m"
  MR_Box mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_26_26;
#line 180 "assoc_list.m"
};

#line 178 "assoc_list.m"
struct mercury__assoc_list__foldl2_values_6_p_6_env_0_s {
#line 178 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_V_29;
#line 178 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_A_30;
#line 178 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_B_31;
#line 178 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_K_32;
#line 178 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl2_values_6_p_6_env_0__P_1;
#line 178 "assoc_list.m"
  MR_Box * mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_4;
#line 178 "assoc_list.m"
  MR_Box * mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_6;
#line 178 "assoc_list.m"
  MR_Cont mercury__assoc_list__foldl2_values_6_p_6_env_0__cont;
#line 178 "assoc_list.m"
  void * mercury__assoc_list__foldl2_values_6_p_6_env_0__cont_env_ptr;
#line 391 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl2_values_6_p_6_env_0__KVs_16;
#line 391 "assoc_list.m"
  MR_Box mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_25_25;
#line 391 "assoc_list.m"
  MR_Box mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_26_26;
#line 178 "assoc_list.m"
};

#line 159 "assoc_list.m"
struct mercury__assoc_list__foldl_values_4_p_7_env_0_s {
#line 159 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_V_19;
#line 159 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_A_20;
#line 159 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_K_21;
#line 159 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl_values_4_p_7_env_0__P_1;
#line 159 "assoc_list.m"
  MR_Box * mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_4;
#line 159 "assoc_list.m"
  MR_Cont mercury__assoc_list__foldl_values_4_p_7_env_0__cont;
#line 159 "assoc_list.m"
  void * mercury__assoc_list__foldl_values_4_p_7_env_0__cont_env_ptr;
#line 385 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl_values_4_p_7_env_0__KVs_11;
#line 385 "assoc_list.m"
  MR_Box mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_17_17;
#line 159 "assoc_list.m"
};

#line 157 "assoc_list.m"
struct mercury__assoc_list__foldl_values_4_p_6_env_0_s {
#line 157 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_V_19;
#line 157 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_A_20;
#line 157 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_K_21;
#line 157 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl_values_4_p_6_env_0__P_1;
#line 157 "assoc_list.m"
  MR_Box * mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_4;
#line 157 "assoc_list.m"
  MR_Cont mercury__assoc_list__foldl_values_4_p_6_env_0__cont;
#line 157 "assoc_list.m"
  void * mercury__assoc_list__foldl_values_4_p_6_env_0__cont_env_ptr;
#line 385 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl_values_4_p_6_env_0__KVs_11;
#line 385 "assoc_list.m"
  MR_Box mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_17_17;
#line 157 "assoc_list.m"
};

#line 138 "assoc_list.m"
struct mercury__assoc_list__foldl_keys_4_p_7_env_0_s {
#line 138 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_K_19;
#line 138 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_A_20;
#line 138 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_V_21;
#line 138 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl_keys_4_p_7_env_0__P_1;
#line 138 "assoc_list.m"
  MR_Box * mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_4;
#line 138 "assoc_list.m"
  MR_Cont mercury__assoc_list__foldl_keys_4_p_7_env_0__cont;
#line 138 "assoc_list.m"
  void * mercury__assoc_list__foldl_keys_4_p_7_env_0__cont_env_ptr;
#line 379 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl_keys_4_p_7_env_0__KVs_11;
#line 379 "assoc_list.m"
  MR_Box mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_17_17;
#line 138 "assoc_list.m"
};

#line 137 "assoc_list.m"
struct mercury__assoc_list__foldl_keys_4_p_6_env_0_s {
#line 137 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_K_19;
#line 137 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_A_20;
#line 137 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_V_21;
#line 137 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl_keys_4_p_6_env_0__P_1;
#line 137 "assoc_list.m"
  MR_Box * mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_4;
#line 137 "assoc_list.m"
  MR_Cont mercury__assoc_list__foldl_keys_4_p_6_env_0__cont;
#line 137 "assoc_list.m"
  void * mercury__assoc_list__foldl_keys_4_p_6_env_0__cont_env_ptr;
#line 379 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl_keys_4_p_6_env_0__KVs_11;
#line 379 "assoc_list.m"
  MR_Box mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_17_17;
#line 137 "assoc_list.m"
};


#line 310 "assoc_list.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_2;

#line 313 "assoc_list.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__assoc_list__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_2;

#line 316 "assoc_list.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_1;

#line 319 "assoc_list.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__assoc_list__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_1;

#line 322 "assoc_list.c"
static MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_2_0_10001(
#line 325 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_1,
#line 327 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_2,
#line 329 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_3,
#line 331 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_4);

#line 334 "assoc_list.c"
static void MR_CALL 
mercury__assoc_list____Compare____assoc_list_2_0_10001(
#line 337 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_1,
#line 339 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_2,
#line 341 "assoc_list.c"
  MR_Box * mercury__assoc_list__wrapper_arg_3,
#line 343 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_4,
#line 345 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_5);

#line 348 "assoc_list.c"
static MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_1_0_10001(
#line 351 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_1,
#line 353 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_2,
#line 355 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_3);

#line 358 "assoc_list.c"
static void MR_CALL 
mercury__assoc_list____Compare____assoc_list_1_0_10001(
#line 361 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_1,
#line 363 "assoc_list.c"
  MR_Box * mercury__assoc_list__wrapper_arg_2,
#line 365 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_3,
#line 367 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__assoc_list__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 244 "assoc_list.m"
static MR_bool MR_CALL 
mercury__assoc_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 244 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__1_1,
#line 244 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 244 "assoc_list.m"
  MR_Word * mercury__assoc_list__HeadVar__3_3);

#line 397 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_7_1(
#line 397 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg);

#line 397 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_6_1(
#line 397 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg);

#line 391 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_7_1(
#line 391 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg);

#line 391 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_6_1(
#line 391 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg);

#line 385 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl_values_4_p_7_1(
#line 385 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg);

#line 385 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl_values_4_p_6_1(
#line 385 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg);

#line 379 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_7_1(
#line 379 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg);

#line 379 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_6_1(
#line 379 "assoc_list.m"
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



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "char.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "construct.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "exception.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "store.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "math.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "version_array.mh"



#line 794 "assoc_list.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_2 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 803 "assoc_list.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__assoc_list__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_2
  }
};

#line 811 "assoc_list.c"
const MR_TypeCtorInfo_Struct mercury__assoc_list__assoc_list__type_ctor_info_assoc_list_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__assoc_list____Unify____assoc_list_2_0_10001)),
  ((MR_Box) (mercury__assoc_list____Compare____assoc_list_2_0_10001)),
  (MR_String) "assoc_list",
  (MR_String) "assoc_list",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__assoc_list__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_2
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 832 "assoc_list.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 841 "assoc_list.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__assoc_list__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_1
  }
};

#line 849 "assoc_list.c"
const MR_TypeCtorInfo_Struct mercury__assoc_list__assoc_list__type_ctor_info_assoc_list_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__assoc_list____Unify____assoc_list_1_0_10001)),
  ((MR_Box) (mercury__assoc_list____Compare____assoc_list_1_0_10001)),
  (MR_String) "assoc_list",
  (MR_String) "assoc_list",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__assoc_list__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 870 "assoc_list.c"
static MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_2_0_10001(
#line 873 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_1,
#line 875 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_2,
#line 877 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_3,
#line 879 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_4)
#line 881 "assoc_list.c"
{
#line 883 "assoc_list.c"
  {
#line 885 "assoc_list.c"
    MR_bool mercury__assoc_list__succeeded;

#line 888 "assoc_list.c"
    {
#line 890 "assoc_list.c"
      mercury__assoc_list__succeeded = mercury__assoc_list____Unify____assoc_list_2_0(((MR_Word) mercury__assoc_list__wrapper_arg_1), ((MR_Word) mercury__assoc_list__wrapper_arg_2), ((MR_Word) mercury__assoc_list__wrapper_arg_3), ((MR_Word) mercury__assoc_list__wrapper_arg_4));
    }
#line 893 "assoc_list.c"
    return mercury__assoc_list__succeeded;
#line 895 "assoc_list.c"
  }
#line 897 "assoc_list.c"
}

#line 900 "assoc_list.c"
static void MR_CALL 
mercury__assoc_list____Compare____assoc_list_2_0_10001(
#line 903 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_1,
#line 905 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_2,
#line 907 "assoc_list.c"
  MR_Box * mercury__assoc_list__wrapper_arg_3,
#line 909 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_4,
#line 911 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_5)
#line 913 "assoc_list.c"
{
#line 915 "assoc_list.c"
  {
#line 917 "assoc_list.c"
    MR_Word mercury__assoc_list__conv0_HeadVar__1_1;

#line 920 "assoc_list.c"
    {
#line 922 "assoc_list.c"
      mercury__assoc_list____Compare____assoc_list_2_0(((MR_Word) mercury__assoc_list__wrapper_arg_1), ((MR_Word) mercury__assoc_list__wrapper_arg_2), &mercury__assoc_list__conv0_HeadVar__1_1, ((MR_Word) mercury__assoc_list__wrapper_arg_4), ((MR_Word) mercury__assoc_list__wrapper_arg_5));
    }
#line 925 "assoc_list.c"
    *mercury__assoc_list__wrapper_arg_3 = ((MR_Box) (mercury__assoc_list__conv0_HeadVar__1_1));
#line 927 "assoc_list.c"
  }
#line 929 "assoc_list.c"
}

#line 932 "assoc_list.c"
static MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_1_0_10001(
#line 935 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_1,
#line 937 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_2,
#line 939 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_3)
#line 941 "assoc_list.c"
{
#line 943 "assoc_list.c"
  {
#line 945 "assoc_list.c"
    MR_bool mercury__assoc_list__succeeded;

#line 948 "assoc_list.c"
    {
#line 950 "assoc_list.c"
      mercury__assoc_list__succeeded = mercury__assoc_list____Unify____assoc_list_1_0(((MR_Word) mercury__assoc_list__wrapper_arg_1), ((MR_Word) mercury__assoc_list__wrapper_arg_2), ((MR_Word) mercury__assoc_list__wrapper_arg_3));
    }
#line 953 "assoc_list.c"
    return mercury__assoc_list__succeeded;
#line 955 "assoc_list.c"
  }
#line 957 "assoc_list.c"
}

#line 960 "assoc_list.c"
static void MR_CALL 
mercury__assoc_list____Compare____assoc_list_1_0_10001(
#line 963 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_1,
#line 965 "assoc_list.c"
  MR_Box * mercury__assoc_list__wrapper_arg_2,
#line 967 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_3,
#line 969 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_4)
#line 971 "assoc_list.c"
{
#line 973 "assoc_list.c"
  {
#line 975 "assoc_list.c"
    MR_Word mercury__assoc_list__conv0_HeadVar__1_1;

#line 978 "assoc_list.c"
    {
#line 980 "assoc_list.c"
      mercury__assoc_list____Compare____assoc_list_1_0(((MR_Word) mercury__assoc_list__wrapper_arg_1), &mercury__assoc_list__conv0_HeadVar__1_1, ((MR_Word) mercury__assoc_list__wrapper_arg_3), ((MR_Word) mercury__assoc_list__wrapper_arg_4));
    }
#line 983 "assoc_list.c"
    *mercury__assoc_list__wrapper_arg_2 = ((MR_Box) (mercury__assoc_list__conv0_HeadVar__1_1));
#line 985 "assoc_list.c"
  }
#line 987 "assoc_list.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__assoc_list__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__assoc_list__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 244 "assoc_list.m"
static MR_bool MR_CALL 
mercury__assoc_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 244 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__1_1,
#line 244 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 244 "assoc_list.m"
  MR_Word * mercury__assoc_list__HeadVar__3_3)
#line 244 "assoc_list.m"
{
#line 247 "assoc_list.m"
  {
#line 247 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;

#line 247 "assoc_list.m"
    if ((mercury__assoc_list__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 247 "assoc_list.m"
      {
#line 247 "assoc_list.m"
        mercury__assoc_list__succeeded = (mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 247 "assoc_list.m"
        if (mercury__assoc_list__succeeded)
#line 247 "assoc_list.m"
          {
#line 247 "assoc_list.m"
            *mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 247 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 247 "assoc_list.m"
          }
#line 247 "assoc_list.m"
      }
#line 247 "assoc_list.m"
    else
#line 248 "assoc_list.m"
      {
#line 248 "assoc_list.m"
        MR_Box mercury__assoc_list__A_4 = (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 0));
#line 248 "assoc_list.m"
        MR_Word mercury__assoc_list__As_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
#line 248 "assoc_list.m"
        MR_Box mercury__assoc_list__B_6;
#line 248 "assoc_list.m"
        MR_Word mercury__assoc_list__Bs_7;
#line 248 "assoc_list.m"
        MR_Word mercury__assoc_list__ABs_8;
#line 248 "assoc_list.m"
        MR_Word mercury__assoc_list__V_9_9;

#line 248 "assoc_list.m"
        mercury__assoc_list__succeeded = ((MR_tag((MR_Word) mercury__assoc_list__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 248 "assoc_list.m"
        if (mercury__assoc_list__succeeded)
#line 248 "assoc_list.m"
          {
#line 248 "assoc_list.m"
            mercury__assoc_list__B_6 = (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0));
#line 248 "assoc_list.m"
            mercury__assoc_list__Bs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 248 "assoc_list.m"
            {
#line 248 "assoc_list.m"
              mercury__assoc_list__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 248 "assoc_list.m"
              MR_hl_field(MR_mktag(0), mercury__assoc_list__V_9_9, 0) = mercury__assoc_list__A_4;
#line 248 "assoc_list.m"
              MR_hl_field(MR_mktag(0), mercury__assoc_list__V_9_9, 1) = mercury__assoc_list__B_6;
#line 248 "assoc_list.m"
            }
#line 249 "assoc_list.m"
            {
#line 249 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__assoc_list__As_5, mercury__assoc_list__Bs_7, &mercury__assoc_list__ABs_8);
            }
#line 248 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 248 "assoc_list.m"
              {
#line 248 "assoc_list.m"
                {
#line 248 "assoc_list.m"
                  MR_Word base;
#line 248 "assoc_list.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "assoc_list.m"
                  *mercury__assoc_list__HeadVar__3_3 = base;
#line 248 "assoc_list.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_9_9));
#line 248 "assoc_list.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__ABs_8));
#line 248 "assoc_list.m"
                }
#line 248 "assoc_list.m"
                mercury__assoc_list__succeeded = MR_TRUE;
#line 248 "assoc_list.m"
              }
#line 248 "assoc_list.m"
          }
#line 248 "assoc_list.m"
      }
#line 247 "assoc_list.m"
    return mercury__assoc_list__succeeded;
#line 247 "assoc_list.m"
  }
#line 244 "assoc_list.m"
}

#line 27 "assoc_list.m"
void MR_CALL 
mercury__assoc_list____Compare____assoc_list_2_0(
#line 27 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_6,
#line 27 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_7,
#line 27 "assoc_list.m"
  MR_Word * mercury__assoc_list__HeadVar__1_1,
#line 27 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 27 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__3_3)
#line 27 "assoc_list.m"
{
#line 27 "assoc_list.m"
  {
#line 27 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;
#line 27 "assoc_list.m"
    MR_Word mercury__assoc_list__TypeCtorInfo_8_8 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 27 "assoc_list.m"
    MR_Word mercury__assoc_list__TypeInfo_9_9;
#line 27 "assoc_list.m"
    MR_Word mercury__assoc_list__Cast_HeadVar1_4 = mercury__assoc_list__HeadVar__2_2;
#line 27 "assoc_list.m"
    MR_Word mercury__assoc_list__Cast_HeadVar2_5 = mercury__assoc_list__HeadVar__3_3;

#line 1144 "assoc_list.c"
    {
#line 1146 "assoc_list.c"
      mercury__assoc_list__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1148 "assoc_list.c"
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_9_9, 0) = ((MR_Box) (mercury__assoc_list__TypeCtorInfo_8_8));
#line 1150 "assoc_list.c"
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_9_9, 1) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_K_6));
#line 1152 "assoc_list.c"
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_9_9, 2) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_V_7));
#line 1154 "assoc_list.c"
    }
#line 27 "assoc_list.m"
    {
#line 27 "assoc_list.m"
      mercury__list____Compare____list_1_0(mercury__assoc_list__TypeInfo_9_9, mercury__assoc_list__HeadVar__1_1, (MR_Word) mercury__assoc_list__Cast_HeadVar1_4, (MR_Word) mercury__assoc_list__Cast_HeadVar2_5);
#line 27 "assoc_list.m"
      return;
    }
#line 27 "assoc_list.m"
  }
#line 27 "assoc_list.m"
}

#line 27 "assoc_list.m"
MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_2_0(
#line 27 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_5,
#line 27 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_6,
#line 27 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__1_1,
#line 27 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2)
#line 27 "assoc_list.m"
{
#line 27 "assoc_list.m"
  {
#line 27 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;
#line 27 "assoc_list.m"
    MR_Word mercury__assoc_list__TypeCtorInfo_7_7 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 27 "assoc_list.m"
    MR_Word mercury__assoc_list__TypeInfo_8_8;
#line 27 "assoc_list.m"
    MR_Word mercury__assoc_list__Cast_HeadVar1_3 = mercury__assoc_list__HeadVar__1_1;
#line 27 "assoc_list.m"
    MR_Word mercury__assoc_list__Cast_HeadVar2_4 = mercury__assoc_list__HeadVar__2_2;

#line 1194 "assoc_list.c"
    {
#line 1196 "assoc_list.c"
      mercury__assoc_list__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1198 "assoc_list.c"
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_8_8, 0) = ((MR_Box) (mercury__assoc_list__TypeCtorInfo_7_7));
#line 1200 "assoc_list.c"
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_8_8, 1) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_K_5));
#line 1202 "assoc_list.c"
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_8_8, 2) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_V_6));
#line 1204 "assoc_list.c"
    }
#line 27 "assoc_list.m"
    {
#line 27 "assoc_list.m"
      return mercury__assoc_list__succeeded = mercury__list____Unify____list_1_0(mercury__assoc_list__TypeInfo_8_8, (MR_Word) mercury__assoc_list__Cast_HeadVar1_3, (MR_Word) mercury__assoc_list__Cast_HeadVar2_4);
    }
#line 27 "assoc_list.m"
    return mercury__assoc_list__succeeded;
#line 27 "assoc_list.m"
  }
#line 27 "assoc_list.m"
}

#line 29 "assoc_list.m"
void MR_CALL 
mercury__assoc_list____Compare____assoc_list_1_0(
#line 29 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_T_6,
#line 29 "assoc_list.m"
  MR_Word * mercury__assoc_list__HeadVar__1_1,
#line 29 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 29 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__3_3)
#line 29 "assoc_list.m"
{
#line 29 "assoc_list.m"
  {
#line 29 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;
#line 29 "assoc_list.m"
    MR_Word mercury__assoc_list__TypeCtorInfo_7_7 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 29 "assoc_list.m"
    MR_Word mercury__assoc_list__TypeInfo_8_8;
#line 29 "assoc_list.m"
    MR_Word mercury__assoc_list__Cast_HeadVar1_4 = mercury__assoc_list__HeadVar__2_2;
#line 29 "assoc_list.m"
    MR_Word mercury__assoc_list__Cast_HeadVar2_5 = mercury__assoc_list__HeadVar__3_3;

#line 1244 "assoc_list.c"
    {
#line 1246 "assoc_list.c"
      mercury__assoc_list__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1248 "assoc_list.c"
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_8_8, 0) = ((MR_Box) (mercury__assoc_list__TypeCtorInfo_7_7));
#line 1250 "assoc_list.c"
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_8_8, 1) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_T_6));
#line 1252 "assoc_list.c"
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_8_8, 2) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_T_6));
#line 1254 "assoc_list.c"
    }
#line 29 "assoc_list.m"
    {
#line 29 "assoc_list.m"
      mercury__list____Compare____list_1_0(mercury__assoc_list__TypeInfo_8_8, mercury__assoc_list__HeadVar__1_1, (MR_Word) mercury__assoc_list__Cast_HeadVar1_4, (MR_Word) mercury__assoc_list__Cast_HeadVar2_5);
#line 29 "assoc_list.m"
      return;
    }
#line 29 "assoc_list.m"
  }
#line 29 "assoc_list.m"
}

#line 29 "assoc_list.m"
MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_1_0(
#line 29 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_T_5,
#line 29 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__1_1,
#line 29 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2)
#line 29 "assoc_list.m"
{
#line 29 "assoc_list.m"
  {
#line 29 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;
#line 29 "assoc_list.m"
    MR_Word mercury__assoc_list__TypeCtorInfo_6_6 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 29 "assoc_list.m"
    MR_Word mercury__assoc_list__TypeInfo_7_7;
#line 29 "assoc_list.m"
    MR_Word mercury__assoc_list__Cast_HeadVar1_3 = mercury__assoc_list__HeadVar__1_1;
#line 29 "assoc_list.m"
    MR_Word mercury__assoc_list__Cast_HeadVar2_4 = mercury__assoc_list__HeadVar__2_2;

#line 1292 "assoc_list.c"
    {
#line 1294 "assoc_list.c"
      mercury__assoc_list__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1296 "assoc_list.c"
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_7_7, 0) = ((MR_Box) (mercury__assoc_list__TypeCtorInfo_6_6));
#line 1298 "assoc_list.c"
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_7_7, 1) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_T_5));
#line 1300 "assoc_list.c"
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_7_7, 2) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_T_5));
#line 1302 "assoc_list.c"
    }
#line 29 "assoc_list.m"
    {
#line 29 "assoc_list.m"
      return mercury__assoc_list__succeeded = mercury__list____Unify____list_1_0(mercury__assoc_list__TypeInfo_7_7, (MR_Word) mercury__assoc_list__Cast_HeadVar1_3, (MR_Word) mercury__assoc_list__Cast_HeadVar2_4);
    }
#line 29 "assoc_list.m"
    return mercury__assoc_list__succeeded;
#line 29 "assoc_list.m"
  }
#line 29 "assoc_list.m"
}

#line 397 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_7_1(
#line 397 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg)
#line 397 "assoc_list.m"
{
#line 397 "assoc_list.m"
  {
#line 397 "assoc_list.m"
    struct mercury__assoc_list__foldl3_values_8_p_7_env_0_s * mercury__assoc_list__env_ptr = (struct mercury__assoc_list__foldl3_values_8_p_7_env_0_s *) mercury__assoc_list__env_ptr_arg;

#line 400 "assoc_list.m"
    {
#line 400 "assoc_list.m"
      mercury__assoc_list__foldl3_values_8_p_7((mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_V_39, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_A_40, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_B_41, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_C_42, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_K_43, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__P_1, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__KVs_21, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_33_33, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_4, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_34_34, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_6, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_35_35, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_8, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__cont, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__cont_env_ptr);
#line 400 "assoc_list.m"
      return;
    }
#line 397 "assoc_list.m"
  }
#line 397 "assoc_list.m"
}

#line 201 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_7(
#line 201 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_39,
#line 201 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_40,
#line 201 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_B_41,
#line 201 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_C_42,
#line 201 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_43,
#line 201 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 201 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 201 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
#line 201 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
#line 201 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
#line 201 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6,
#line 201 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0_7,
#line 201 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc3_8,
#line 201 "assoc_list.m"
  MR_Cont mercury__assoc_list__cont,
#line 201 "assoc_list.m"
  void * mercury__assoc_list__cont_env_ptr)
#line 201 "assoc_list.m"
{
#line 201 "assoc_list.m"
  {
#line 201 "assoc_list.m"
    struct mercury__assoc_list__foldl3_values_8_p_7_env_0_s mercury__assoc_list__env;

#line 201 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_V_39 = mercury__assoc_list__TypeInfo_for_V_39;
#line 201 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_A_40 = mercury__assoc_list__TypeInfo_for_A_40;
#line 201 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_B_41 = mercury__assoc_list__TypeInfo_for_B_41;
#line 201 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_C_42 = mercury__assoc_list__TypeInfo_for_C_42;
#line 201 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_K_43 = mercury__assoc_list__TypeInfo_for_K_43;
#line 201 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__P_1 = mercury__assoc_list__P_1;
#line 201 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_4;
#line 201 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_6;
#line 201 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_8 = mercury__assoc_list__STATE_VARIABLE_Acc3_8;
#line 201 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__cont = mercury__assoc_list__cont;
#line 201 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__cont_env_ptr = mercury__assoc_list__cont_env_ptr;
#line 396 "assoc_list.m"
    {
#line 396 "assoc_list.m"
      MR_bool mercury__assoc_list__succeeded;

#line 396 "assoc_list.m"
      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "assoc_list.m"
        {
#line 396 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_8) = mercury__assoc_list__STATE_VARIABLE_Acc3_0_7;
#line 396 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_6) = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 396 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_4) = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 396 "assoc_list.m"
          {
#line 396 "assoc_list.m"
            ((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__cont)((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__cont_env_ptr);
#line 396 "assoc_list.m"
            return;
          }
#line 396 "assoc_list.m"
        }
#line 396 "assoc_list.m"
      else
#line 397 "assoc_list.m"
        {
#line 397 "assoc_list.m"
          MR_Word mercury__assoc_list__KV_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 397 "assoc_list.m"
          MR_Box mercury__assoc_list__V_26;
#line 398 "assoc_list.m"
          MR_Box mercury__assoc_list___K_25;
#line 399 "assoc_list.m"
          void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

#line 397 "assoc_list.m"
          (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__KVs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "assoc_list.m"
          mercury__assoc_list___K_25 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 0));
#line 398 "assoc_list.m"
          mercury__assoc_list__V_26 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 1));
#line 399 "assoc_list.m"
          mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__P_1, (MR_Integer) 1)));
#line 399 "assoc_list.m"
          {
#line 399 "assoc_list.m"
            mercury__assoc_list__func_0(((MR_Box) (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__P_1), mercury__assoc_list__V_26, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &(mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_33_33, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &(mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_34_34, mercury__assoc_list__STATE_VARIABLE_Acc3_0_7, &(mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_35_35, mercury__assoc_list__foldl3_values_8_p_7_1, &mercury__assoc_list__env);
          }
#line 397 "assoc_list.m"
        }
#line 396 "assoc_list.m"
    }
#line 201 "assoc_list.m"
  }
#line 201 "assoc_list.m"
}

#line 397 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_6_1(
#line 397 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg)
#line 397 "assoc_list.m"
{
#line 397 "assoc_list.m"
  {
#line 397 "assoc_list.m"
    struct mercury__assoc_list__foldl3_values_8_p_6_env_0_s * mercury__assoc_list__env_ptr = (struct mercury__assoc_list__foldl3_values_8_p_6_env_0_s *) mercury__assoc_list__env_ptr_arg;

#line 400 "assoc_list.m"
    {
#line 400 "assoc_list.m"
      mercury__assoc_list__foldl3_values_8_p_6((mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_V_39, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_A_40, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_B_41, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_C_42, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_K_43, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__P_1, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__KVs_21, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_33_33, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_4, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_34_34, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_6, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_35_35, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_8, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__cont, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__cont_env_ptr);
#line 400 "assoc_list.m"
      return;
    }
#line 397 "assoc_list.m"
  }
#line 397 "assoc_list.m"
}

#line 199 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_6(
#line 199 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_39,
#line 199 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_40,
#line 199 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_B_41,
#line 199 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_C_42,
#line 199 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_43,
#line 199 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 199 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 199 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
#line 199 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
#line 199 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
#line 199 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6,
#line 199 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0_7,
#line 199 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc3_8,
#line 199 "assoc_list.m"
  MR_Cont mercury__assoc_list__cont,
#line 199 "assoc_list.m"
  void * mercury__assoc_list__cont_env_ptr)
#line 199 "assoc_list.m"
{
#line 199 "assoc_list.m"
  {
#line 199 "assoc_list.m"
    struct mercury__assoc_list__foldl3_values_8_p_6_env_0_s mercury__assoc_list__env;

#line 199 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_V_39 = mercury__assoc_list__TypeInfo_for_V_39;
#line 199 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_A_40 = mercury__assoc_list__TypeInfo_for_A_40;
#line 199 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_B_41 = mercury__assoc_list__TypeInfo_for_B_41;
#line 199 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_C_42 = mercury__assoc_list__TypeInfo_for_C_42;
#line 199 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_K_43 = mercury__assoc_list__TypeInfo_for_K_43;
#line 199 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__P_1 = mercury__assoc_list__P_1;
#line 199 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_4;
#line 199 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_6;
#line 199 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_8 = mercury__assoc_list__STATE_VARIABLE_Acc3_8;
#line 199 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__cont = mercury__assoc_list__cont;
#line 199 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__cont_env_ptr = mercury__assoc_list__cont_env_ptr;
#line 396 "assoc_list.m"
    {
#line 396 "assoc_list.m"
      MR_bool mercury__assoc_list__succeeded;

#line 396 "assoc_list.m"
      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "assoc_list.m"
        {
#line 396 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_8) = mercury__assoc_list__STATE_VARIABLE_Acc3_0_7;
#line 396 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_6) = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 396 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_4) = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 396 "assoc_list.m"
          {
#line 396 "assoc_list.m"
            ((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__cont)((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__cont_env_ptr);
#line 396 "assoc_list.m"
            return;
          }
#line 396 "assoc_list.m"
        }
#line 396 "assoc_list.m"
      else
#line 397 "assoc_list.m"
        {
#line 397 "assoc_list.m"
          MR_Word mercury__assoc_list__KV_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 397 "assoc_list.m"
          MR_Box mercury__assoc_list__V_26;
#line 398 "assoc_list.m"
          MR_Box mercury__assoc_list___K_25;
#line 399 "assoc_list.m"
          void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

#line 397 "assoc_list.m"
          (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__KVs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "assoc_list.m"
          mercury__assoc_list___K_25 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 0));
#line 398 "assoc_list.m"
          mercury__assoc_list__V_26 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 1));
#line 399 "assoc_list.m"
          mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__P_1, (MR_Integer) 1)));
#line 399 "assoc_list.m"
          {
#line 399 "assoc_list.m"
            mercury__assoc_list__func_0(((MR_Box) (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__P_1), mercury__assoc_list__V_26, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &(mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_33_33, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &(mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_34_34, mercury__assoc_list__STATE_VARIABLE_Acc3_0_7, &(mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_35_35, mercury__assoc_list__foldl3_values_8_p_6_1, &mercury__assoc_list__env);
          }
#line 397 "assoc_list.m"
        }
#line 396 "assoc_list.m"
    }
#line 199 "assoc_list.m"
  }
#line 199 "assoc_list.m"
}

#line 197 "assoc_list.m"
MR_bool MR_CALL 
mercury__assoc_list__foldl3_values_8_p_5(
#line 197 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_39,
#line 197 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_40,
#line 197 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_B_41,
#line 197 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_C_42,
#line 197 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_43,
#line 197 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 197 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 197 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
#line 197 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
#line 197 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
#line 197 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6,
#line 197 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0_7,
#line 197 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc3_8)
#line 197 "assoc_list.m"
{
#line 396 "assoc_list.m"
  while (MR_TRUE)
#line 396 "assoc_list.m"
    {
#line 396 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 396 "assoc_list.m"
      {
#line 396 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 396 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "assoc_list.m"
          {
#line 396 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc3_8 = mercury__assoc_list__STATE_VARIABLE_Acc3_0_7;
#line 396 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 396 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 396 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 396 "assoc_list.m"
          }
#line 396 "assoc_list.m"
        else
#line 397 "assoc_list.m"
          {
#line 397 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 397 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 397 "assoc_list.m"
            MR_Box mercury__assoc_list__V_26 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 1));
#line 397 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
#line 397 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
#line 397 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list___K_25 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 0));
#line 399 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 399 "assoc_list.m"
            {
#line 399 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_26, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_33_33, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_34_34, mercury__assoc_list__STATE_VARIABLE_Acc3_0_7, &mercury__assoc_list__STATE_VARIABLE_Acc3_35_35);
            }
#line 397 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 400 "assoc_list.m"
              {
#line 400 "assoc_list.m"
                /* direct tailcall eliminated */
#line 400 "assoc_list.m"
                {
#line 400 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_21;
#line 400 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
#line 400 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
#line 400 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;

#line 400 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc3_0_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 400 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 400 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 400 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 400 "assoc_list.m"
                }
#line 400 "assoc_list.m"
                continue;
#line 400 "assoc_list.m"
              }
#line 397 "assoc_list.m"
          }
#line 396 "assoc_list.m"
        return mercury__assoc_list__succeeded;
#line 396 "assoc_list.m"
      }
#line 396 "assoc_list.m"
      break;
#line 396 "assoc_list.m"
    }
#line 197 "assoc_list.m"
}

#line 195 "assoc_list.m"
MR_bool MR_CALL 
mercury__assoc_list__foldl3_values_8_p_4(
#line 195 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_39,
#line 195 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_40,
#line 195 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_B_41,
#line 195 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_C_42,
#line 195 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_43,
#line 195 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 195 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 195 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
#line 195 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
#line 195 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
#line 195 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6,
#line 195 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0_7,
#line 195 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc3_8)
#line 195 "assoc_list.m"
{
#line 396 "assoc_list.m"
  while (MR_TRUE)
#line 396 "assoc_list.m"
    {
#line 396 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 396 "assoc_list.m"
      {
#line 396 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 396 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "assoc_list.m"
          {
#line 396 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc3_8 = mercury__assoc_list__STATE_VARIABLE_Acc3_0_7;
#line 396 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 396 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 396 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 396 "assoc_list.m"
          }
#line 396 "assoc_list.m"
        else
#line 397 "assoc_list.m"
          {
#line 397 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 397 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 397 "assoc_list.m"
            MR_Box mercury__assoc_list__V_26 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 1));
#line 397 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
#line 397 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
#line 397 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list___K_25 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 0));
#line 399 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 399 "assoc_list.m"
            {
#line 399 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_26, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_33_33, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_34_34, mercury__assoc_list__STATE_VARIABLE_Acc3_0_7, &mercury__assoc_list__STATE_VARIABLE_Acc3_35_35);
            }
#line 397 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 400 "assoc_list.m"
              {
#line 400 "assoc_list.m"
                /* direct tailcall eliminated */
#line 400 "assoc_list.m"
                {
#line 400 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_21;
#line 400 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
#line 400 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
#line 400 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;

#line 400 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc3_0_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 400 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 400 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 400 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 400 "assoc_list.m"
                }
#line 400 "assoc_list.m"
                continue;
#line 400 "assoc_list.m"
              }
#line 397 "assoc_list.m"
          }
#line 396 "assoc_list.m"
        return mercury__assoc_list__succeeded;
#line 396 "assoc_list.m"
      }
#line 396 "assoc_list.m"
      break;
#line 396 "assoc_list.m"
    }
#line 195 "assoc_list.m"
}

#line 193 "assoc_list.m"
MR_bool MR_CALL 
mercury__assoc_list__foldl3_values_8_p_3(
#line 193 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_39,
#line 193 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_40,
#line 193 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_B_41,
#line 193 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_C_42,
#line 193 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_43,
#line 193 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 193 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 193 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
#line 193 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
#line 193 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
#line 193 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6,
#line 193 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0_7,
#line 193 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc3_8)
#line 193 "assoc_list.m"
{
#line 396 "assoc_list.m"
  while (MR_TRUE)
#line 396 "assoc_list.m"
    {
#line 396 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 396 "assoc_list.m"
      {
#line 396 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 396 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "assoc_list.m"
          {
#line 396 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc3_8 = mercury__assoc_list__STATE_VARIABLE_Acc3_0_7;
#line 396 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 396 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 396 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 396 "assoc_list.m"
          }
#line 396 "assoc_list.m"
        else
#line 397 "assoc_list.m"
          {
#line 397 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 397 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 397 "assoc_list.m"
            MR_Box mercury__assoc_list__V_26 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 1));
#line 397 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
#line 397 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
#line 397 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list___K_25 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 0));
#line 399 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 399 "assoc_list.m"
            {
#line 399 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_26, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_33_33, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_34_34, mercury__assoc_list__STATE_VARIABLE_Acc3_0_7, &mercury__assoc_list__STATE_VARIABLE_Acc3_35_35);
            }
#line 397 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 400 "assoc_list.m"
              {
#line 400 "assoc_list.m"
                /* direct tailcall eliminated */
#line 400 "assoc_list.m"
                {
#line 400 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_21;
#line 400 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
#line 400 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
#line 400 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;

#line 400 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc3_0_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 400 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 400 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 400 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 400 "assoc_list.m"
                }
#line 400 "assoc_list.m"
                continue;
#line 400 "assoc_list.m"
              }
#line 397 "assoc_list.m"
          }
#line 396 "assoc_list.m"
        return mercury__assoc_list__succeeded;
#line 396 "assoc_list.m"
      }
#line 396 "assoc_list.m"
      break;
#line 396 "assoc_list.m"
    }
#line 193 "assoc_list.m"
}

#line 191 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_2(
#line 191 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_39,
#line 191 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_40,
#line 191 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_B_41,
#line 191 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_C_42,
#line 191 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_43,
#line 191 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 191 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 191 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
#line 191 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
#line 191 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
#line 191 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6,
#line 191 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0_7,
#line 191 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc3_8)
#line 191 "assoc_list.m"
{
#line 396 "assoc_list.m"
  while (MR_TRUE)
#line 396 "assoc_list.m"
    {
#line 396 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 396 "assoc_list.m"
      {
#line 396 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 396 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "assoc_list.m"
          {
#line 396 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc3_8 = mercury__assoc_list__STATE_VARIABLE_Acc3_0_7;
#line 396 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 396 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 396 "assoc_list.m"
          }
#line 396 "assoc_list.m"
        else
#line 397 "assoc_list.m"
          {
#line 397 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 397 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 397 "assoc_list.m"
            MR_Box mercury__assoc_list__V_26 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 1));
#line 397 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
#line 397 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
#line 397 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list___K_25 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 0));
#line 399 "assoc_list.m"
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 399 "assoc_list.m"
            {
#line 399 "assoc_list.m"
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_26, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_33_33, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_34_34, mercury__assoc_list__STATE_VARIABLE_Acc3_0_7, &mercury__assoc_list__STATE_VARIABLE_Acc3_35_35);
            }
#line 400 "assoc_list.m"
            /* direct tailcall eliminated */
#line 400 "assoc_list.m"
            {
#line 400 "assoc_list.m"
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_21;
#line 400 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
#line 400 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
#line 400 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;

#line 400 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc3_0_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 400 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 400 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 400 "assoc_list.m"
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 400 "assoc_list.m"
            }
#line 400 "assoc_list.m"
            continue;
#line 397 "assoc_list.m"
          }
#line 396 "assoc_list.m"
      }
#line 396 "assoc_list.m"
      break;
#line 396 "assoc_list.m"
    }
#line 191 "assoc_list.m"
}

#line 189 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_1(
#line 189 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_39,
#line 189 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_40,
#line 189 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_B_41,
#line 189 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_C_42,
#line 189 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_43,
#line 189 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 189 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 189 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
#line 189 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
#line 189 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
#line 189 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6,
#line 189 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0_7,
#line 189 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc3_8)
#line 189 "assoc_list.m"
{
#line 396 "assoc_list.m"
  while (MR_TRUE)
#line 396 "assoc_list.m"
    {
#line 396 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 396 "assoc_list.m"
      {
#line 396 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 396 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "assoc_list.m"
          {
#line 396 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc3_8 = mercury__assoc_list__STATE_VARIABLE_Acc3_0_7;
#line 396 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 396 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 396 "assoc_list.m"
          }
#line 396 "assoc_list.m"
        else
#line 397 "assoc_list.m"
          {
#line 397 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 397 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 397 "assoc_list.m"
            MR_Box mercury__assoc_list__V_26 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 1));
#line 397 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
#line 397 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
#line 397 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list___K_25 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 0));
#line 399 "assoc_list.m"
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 399 "assoc_list.m"
            {
#line 399 "assoc_list.m"
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_26, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_33_33, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_34_34, mercury__assoc_list__STATE_VARIABLE_Acc3_0_7, &mercury__assoc_list__STATE_VARIABLE_Acc3_35_35);
            }
#line 400 "assoc_list.m"
            /* direct tailcall eliminated */
#line 400 "assoc_list.m"
            {
#line 400 "assoc_list.m"
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_21;
#line 400 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
#line 400 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
#line 400 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;

#line 400 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc3_0_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 400 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 400 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 400 "assoc_list.m"
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 400 "assoc_list.m"
            }
#line 400 "assoc_list.m"
            continue;
#line 397 "assoc_list.m"
          }
#line 396 "assoc_list.m"
      }
#line 396 "assoc_list.m"
      break;
#line 396 "assoc_list.m"
    }
#line 189 "assoc_list.m"
}

#line 187 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_0(
#line 187 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_39,
#line 187 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_40,
#line 187 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_B_41,
#line 187 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_C_42,
#line 187 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_43,
#line 187 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 187 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 187 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
#line 187 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
#line 187 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
#line 187 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6,
#line 187 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0_7,
#line 187 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc3_8)
#line 187 "assoc_list.m"
{
#line 396 "assoc_list.m"
  while (MR_TRUE)
#line 396 "assoc_list.m"
    {
#line 396 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 396 "assoc_list.m"
      {
#line 396 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 396 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "assoc_list.m"
          {
#line 396 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc3_8 = mercury__assoc_list__STATE_VARIABLE_Acc3_0_7;
#line 396 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 396 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 396 "assoc_list.m"
          }
#line 396 "assoc_list.m"
        else
#line 397 "assoc_list.m"
          {
#line 397 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 397 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 397 "assoc_list.m"
            MR_Box mercury__assoc_list__V_26 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 1));
#line 397 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
#line 397 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
#line 397 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list___K_25 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 0));
#line 399 "assoc_list.m"
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 399 "assoc_list.m"
            {
#line 399 "assoc_list.m"
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_26, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_33_33, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_34_34, mercury__assoc_list__STATE_VARIABLE_Acc3_0_7, &mercury__assoc_list__STATE_VARIABLE_Acc3_35_35);
            }
#line 400 "assoc_list.m"
            /* direct tailcall eliminated */
#line 400 "assoc_list.m"
            {
#line 400 "assoc_list.m"
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_21;
#line 400 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
#line 400 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
#line 400 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;

#line 400 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc3_0_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 400 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 400 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 400 "assoc_list.m"
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 400 "assoc_list.m"
            }
#line 400 "assoc_list.m"
            continue;
#line 397 "assoc_list.m"
          }
#line 396 "assoc_list.m"
      }
#line 396 "assoc_list.m"
      break;
#line 396 "assoc_list.m"
    }
#line 187 "assoc_list.m"
}

#line 391 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_7_1(
#line 391 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg)
#line 391 "assoc_list.m"
{
#line 391 "assoc_list.m"
  {
#line 391 "assoc_list.m"
    struct mercury__assoc_list__foldl2_values_6_p_7_env_0_s * mercury__assoc_list__env_ptr = (struct mercury__assoc_list__foldl2_values_6_p_7_env_0_s *) mercury__assoc_list__env_ptr_arg;

#line 394 "assoc_list.m"
    {
#line 394 "assoc_list.m"
      mercury__assoc_list__foldl2_values_6_p_7((mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_V_29, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_A_30, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_B_31, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_K_32, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__P_1, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__KVs_16, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_25_25, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_4, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_26_26, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_6, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__cont, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__cont_env_ptr);
#line 394 "assoc_list.m"
      return;
    }
#line 391 "assoc_list.m"
  }
#line 391 "assoc_list.m"
}

#line 180 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_7(
#line 180 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_29,
#line 180 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_30,
#line 180 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_B_31,
#line 180 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_32,
#line 180 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 180 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 180 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
#line 180 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
#line 180 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
#line 180 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6,
#line 180 "assoc_list.m"
  MR_Cont mercury__assoc_list__cont,
#line 180 "assoc_list.m"
  void * mercury__assoc_list__cont_env_ptr)
#line 180 "assoc_list.m"
{
#line 180 "assoc_list.m"
  {
#line 180 "assoc_list.m"
    struct mercury__assoc_list__foldl2_values_6_p_7_env_0_s mercury__assoc_list__env;

#line 180 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_V_29 = mercury__assoc_list__TypeInfo_for_V_29;
#line 180 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_A_30 = mercury__assoc_list__TypeInfo_for_A_30;
#line 180 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_B_31 = mercury__assoc_list__TypeInfo_for_B_31;
#line 180 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_K_32 = mercury__assoc_list__TypeInfo_for_K_32;
#line 180 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__P_1 = mercury__assoc_list__P_1;
#line 180 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_4;
#line 180 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_6;
#line 180 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__cont = mercury__assoc_list__cont;
#line 180 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__cont_env_ptr = mercury__assoc_list__cont_env_ptr;
#line 390 "assoc_list.m"
    {
#line 390 "assoc_list.m"
      MR_bool mercury__assoc_list__succeeded;

#line 390 "assoc_list.m"
      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 390 "assoc_list.m"
        {
#line 390 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_6) = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 390 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_4) = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 390 "assoc_list.m"
          {
#line 390 "assoc_list.m"
            ((mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__cont)((mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__cont_env_ptr);
#line 390 "assoc_list.m"
            return;
          }
#line 390 "assoc_list.m"
        }
#line 390 "assoc_list.m"
      else
#line 391 "assoc_list.m"
        {
#line 391 "assoc_list.m"
          MR_Word mercury__assoc_list__KV_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 391 "assoc_list.m"
          MR_Box mercury__assoc_list__V_20;
#line 392 "assoc_list.m"
          MR_Box mercury__assoc_list___K_19;
#line 393 "assoc_list.m"
          void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

#line 391 "assoc_list.m"
          (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 392 "assoc_list.m"
          mercury__assoc_list___K_19 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 0));
#line 392 "assoc_list.m"
          mercury__assoc_list__V_20 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 1));
#line 393 "assoc_list.m"
          mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__P_1, (MR_Integer) 1)));
#line 393 "assoc_list.m"
          {
#line 393 "assoc_list.m"
            mercury__assoc_list__func_0(((MR_Box) (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__P_1), mercury__assoc_list__V_20, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &(mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_25_25, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &(mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_26_26, mercury__assoc_list__foldl2_values_6_p_7_1, &mercury__assoc_list__env);
          }
#line 391 "assoc_list.m"
        }
#line 390 "assoc_list.m"
    }
#line 180 "assoc_list.m"
  }
#line 180 "assoc_list.m"
}

#line 391 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_6_1(
#line 391 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg)
#line 391 "assoc_list.m"
{
#line 391 "assoc_list.m"
  {
#line 391 "assoc_list.m"
    struct mercury__assoc_list__foldl2_values_6_p_6_env_0_s * mercury__assoc_list__env_ptr = (struct mercury__assoc_list__foldl2_values_6_p_6_env_0_s *) mercury__assoc_list__env_ptr_arg;

#line 394 "assoc_list.m"
    {
#line 394 "assoc_list.m"
      mercury__assoc_list__foldl2_values_6_p_6((mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_V_29, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_A_30, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_B_31, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_K_32, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__P_1, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__KVs_16, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_25_25, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_4, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_26_26, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_6, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__cont, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__cont_env_ptr);
#line 394 "assoc_list.m"
      return;
    }
#line 391 "assoc_list.m"
  }
#line 391 "assoc_list.m"
}

#line 178 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_6(
#line 178 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_29,
#line 178 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_30,
#line 178 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_B_31,
#line 178 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_32,
#line 178 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 178 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 178 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
#line 178 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
#line 178 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
#line 178 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6,
#line 178 "assoc_list.m"
  MR_Cont mercury__assoc_list__cont,
#line 178 "assoc_list.m"
  void * mercury__assoc_list__cont_env_ptr)
#line 178 "assoc_list.m"
{
#line 178 "assoc_list.m"
  {
#line 178 "assoc_list.m"
    struct mercury__assoc_list__foldl2_values_6_p_6_env_0_s mercury__assoc_list__env;

#line 178 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_V_29 = mercury__assoc_list__TypeInfo_for_V_29;
#line 178 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_A_30 = mercury__assoc_list__TypeInfo_for_A_30;
#line 178 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_B_31 = mercury__assoc_list__TypeInfo_for_B_31;
#line 178 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_K_32 = mercury__assoc_list__TypeInfo_for_K_32;
#line 178 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__P_1 = mercury__assoc_list__P_1;
#line 178 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_4;
#line 178 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_6;
#line 178 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__cont = mercury__assoc_list__cont;
#line 178 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__cont_env_ptr = mercury__assoc_list__cont_env_ptr;
#line 390 "assoc_list.m"
    {
#line 390 "assoc_list.m"
      MR_bool mercury__assoc_list__succeeded;

#line 390 "assoc_list.m"
      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 390 "assoc_list.m"
        {
#line 390 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_6) = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 390 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_4) = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 390 "assoc_list.m"
          {
#line 390 "assoc_list.m"
            ((mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__cont)((mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__cont_env_ptr);
#line 390 "assoc_list.m"
            return;
          }
#line 390 "assoc_list.m"
        }
#line 390 "assoc_list.m"
      else
#line 391 "assoc_list.m"
        {
#line 391 "assoc_list.m"
          MR_Word mercury__assoc_list__KV_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 391 "assoc_list.m"
          MR_Box mercury__assoc_list__V_20;
#line 392 "assoc_list.m"
          MR_Box mercury__assoc_list___K_19;
#line 393 "assoc_list.m"
          void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

#line 391 "assoc_list.m"
          (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 392 "assoc_list.m"
          mercury__assoc_list___K_19 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 0));
#line 392 "assoc_list.m"
          mercury__assoc_list__V_20 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 1));
#line 393 "assoc_list.m"
          mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__P_1, (MR_Integer) 1)));
#line 393 "assoc_list.m"
          {
#line 393 "assoc_list.m"
            mercury__assoc_list__func_0(((MR_Box) (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__P_1), mercury__assoc_list__V_20, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &(mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_25_25, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &(mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_26_26, mercury__assoc_list__foldl2_values_6_p_6_1, &mercury__assoc_list__env);
          }
#line 391 "assoc_list.m"
        }
#line 390 "assoc_list.m"
    }
#line 178 "assoc_list.m"
  }
#line 178 "assoc_list.m"
}

#line 176 "assoc_list.m"
MR_bool MR_CALL 
mercury__assoc_list__foldl2_values_6_p_5(
#line 176 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_29,
#line 176 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_30,
#line 176 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_B_31,
#line 176 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_32,
#line 176 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 176 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 176 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
#line 176 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
#line 176 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
#line 176 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6)
#line 176 "assoc_list.m"
{
#line 390 "assoc_list.m"
  while (MR_TRUE)
#line 390 "assoc_list.m"
    {
#line 390 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 390 "assoc_list.m"
      {
#line 390 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 390 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 390 "assoc_list.m"
          {
#line 390 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 390 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 390 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 390 "assoc_list.m"
          }
#line 390 "assoc_list.m"
        else
#line 391 "assoc_list.m"
          {
#line 391 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 391 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 391 "assoc_list.m"
            MR_Box mercury__assoc_list__V_20 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 1));
#line 391 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
#line 391 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;
#line 392 "assoc_list.m"
            MR_Box mercury__assoc_list___K_19 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 0));
#line 393 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 393 "assoc_list.m"
            {
#line 393 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_20, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_25_25, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_26_26);
            }
#line 391 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 394 "assoc_list.m"
              {
#line 394 "assoc_list.m"
                /* direct tailcall eliminated */
#line 394 "assoc_list.m"
                {
#line 394 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_16;
#line 394 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
#line 394 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;

#line 394 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 394 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 394 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 394 "assoc_list.m"
                }
#line 394 "assoc_list.m"
                continue;
#line 394 "assoc_list.m"
              }
#line 391 "assoc_list.m"
          }
#line 390 "assoc_list.m"
        return mercury__assoc_list__succeeded;
#line 390 "assoc_list.m"
      }
#line 390 "assoc_list.m"
      break;
#line 390 "assoc_list.m"
    }
#line 176 "assoc_list.m"
}

#line 174 "assoc_list.m"
MR_bool MR_CALL 
mercury__assoc_list__foldl2_values_6_p_4(
#line 174 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_29,
#line 174 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_30,
#line 174 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_B_31,
#line 174 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_32,
#line 174 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 174 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 174 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
#line 174 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
#line 174 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
#line 174 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6)
#line 174 "assoc_list.m"
{
#line 390 "assoc_list.m"
  while (MR_TRUE)
#line 390 "assoc_list.m"
    {
#line 390 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 390 "assoc_list.m"
      {
#line 390 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 390 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 390 "assoc_list.m"
          {
#line 390 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 390 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 390 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 390 "assoc_list.m"
          }
#line 390 "assoc_list.m"
        else
#line 391 "assoc_list.m"
          {
#line 391 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 391 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 391 "assoc_list.m"
            MR_Box mercury__assoc_list__V_20 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 1));
#line 391 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
#line 391 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;
#line 392 "assoc_list.m"
            MR_Box mercury__assoc_list___K_19 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 0));
#line 393 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 393 "assoc_list.m"
            {
#line 393 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_20, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_25_25, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_26_26);
            }
#line 391 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 394 "assoc_list.m"
              {
#line 394 "assoc_list.m"
                /* direct tailcall eliminated */
#line 394 "assoc_list.m"
                {
#line 394 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_16;
#line 394 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
#line 394 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;

#line 394 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 394 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 394 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 394 "assoc_list.m"
                }
#line 394 "assoc_list.m"
                continue;
#line 394 "assoc_list.m"
              }
#line 391 "assoc_list.m"
          }
#line 390 "assoc_list.m"
        return mercury__assoc_list__succeeded;
#line 390 "assoc_list.m"
      }
#line 390 "assoc_list.m"
      break;
#line 390 "assoc_list.m"
    }
#line 174 "assoc_list.m"
}

#line 172 "assoc_list.m"
MR_bool MR_CALL 
mercury__assoc_list__foldl2_values_6_p_3(
#line 172 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_29,
#line 172 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_30,
#line 172 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_B_31,
#line 172 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_32,
#line 172 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 172 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 172 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
#line 172 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
#line 172 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
#line 172 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6)
#line 172 "assoc_list.m"
{
#line 390 "assoc_list.m"
  while (MR_TRUE)
#line 390 "assoc_list.m"
    {
#line 390 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 390 "assoc_list.m"
      {
#line 390 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 390 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 390 "assoc_list.m"
          {
#line 390 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 390 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 390 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 390 "assoc_list.m"
          }
#line 390 "assoc_list.m"
        else
#line 391 "assoc_list.m"
          {
#line 391 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 391 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 391 "assoc_list.m"
            MR_Box mercury__assoc_list__V_20 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 1));
#line 391 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
#line 391 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;
#line 392 "assoc_list.m"
            MR_Box mercury__assoc_list___K_19 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 0));
#line 393 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 393 "assoc_list.m"
            {
#line 393 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_20, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_25_25, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_26_26);
            }
#line 391 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 394 "assoc_list.m"
              {
#line 394 "assoc_list.m"
                /* direct tailcall eliminated */
#line 394 "assoc_list.m"
                {
#line 394 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_16;
#line 394 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
#line 394 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;

#line 394 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 394 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 394 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 394 "assoc_list.m"
                }
#line 394 "assoc_list.m"
                continue;
#line 394 "assoc_list.m"
              }
#line 391 "assoc_list.m"
          }
#line 390 "assoc_list.m"
        return mercury__assoc_list__succeeded;
#line 390 "assoc_list.m"
      }
#line 390 "assoc_list.m"
      break;
#line 390 "assoc_list.m"
    }
#line 172 "assoc_list.m"
}

#line 170 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_2(
#line 170 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_29,
#line 170 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_30,
#line 170 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_B_31,
#line 170 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_32,
#line 170 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 170 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 170 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
#line 170 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
#line 170 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
#line 170 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6)
#line 170 "assoc_list.m"
{
#line 390 "assoc_list.m"
  while (MR_TRUE)
#line 390 "assoc_list.m"
    {
#line 390 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 390 "assoc_list.m"
      {
#line 390 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 390 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 390 "assoc_list.m"
          {
#line 390 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 390 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 390 "assoc_list.m"
          }
#line 390 "assoc_list.m"
        else
#line 391 "assoc_list.m"
          {
#line 391 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 391 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 391 "assoc_list.m"
            MR_Box mercury__assoc_list__V_20 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 1));
#line 391 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
#line 391 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;
#line 392 "assoc_list.m"
            MR_Box mercury__assoc_list___K_19 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 0));
#line 393 "assoc_list.m"
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 393 "assoc_list.m"
            {
#line 393 "assoc_list.m"
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_20, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_25_25, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_26_26);
            }
#line 394 "assoc_list.m"
            /* direct tailcall eliminated */
#line 394 "assoc_list.m"
            {
#line 394 "assoc_list.m"
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_16;
#line 394 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
#line 394 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;

#line 394 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 394 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 394 "assoc_list.m"
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 394 "assoc_list.m"
            }
#line 394 "assoc_list.m"
            continue;
#line 391 "assoc_list.m"
          }
#line 390 "assoc_list.m"
      }
#line 390 "assoc_list.m"
      break;
#line 390 "assoc_list.m"
    }
#line 170 "assoc_list.m"
}

#line 168 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_1(
#line 168 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_29,
#line 168 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_30,
#line 168 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_B_31,
#line 168 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_32,
#line 168 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 168 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 168 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
#line 168 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
#line 168 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
#line 168 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6)
#line 168 "assoc_list.m"
{
#line 390 "assoc_list.m"
  while (MR_TRUE)
#line 390 "assoc_list.m"
    {
#line 390 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 390 "assoc_list.m"
      {
#line 390 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 390 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 390 "assoc_list.m"
          {
#line 390 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 390 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 390 "assoc_list.m"
          }
#line 390 "assoc_list.m"
        else
#line 391 "assoc_list.m"
          {
#line 391 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 391 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 391 "assoc_list.m"
            MR_Box mercury__assoc_list__V_20 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 1));
#line 391 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
#line 391 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;
#line 392 "assoc_list.m"
            MR_Box mercury__assoc_list___K_19 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 0));
#line 393 "assoc_list.m"
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 393 "assoc_list.m"
            {
#line 393 "assoc_list.m"
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_20, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_25_25, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_26_26);
            }
#line 394 "assoc_list.m"
            /* direct tailcall eliminated */
#line 394 "assoc_list.m"
            {
#line 394 "assoc_list.m"
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_16;
#line 394 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
#line 394 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;

#line 394 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 394 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 394 "assoc_list.m"
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 394 "assoc_list.m"
            }
#line 394 "assoc_list.m"
            continue;
#line 391 "assoc_list.m"
          }
#line 390 "assoc_list.m"
      }
#line 390 "assoc_list.m"
      break;
#line 390 "assoc_list.m"
    }
#line 168 "assoc_list.m"
}

#line 166 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_0(
#line 166 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_29,
#line 166 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_30,
#line 166 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_B_31,
#line 166 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_32,
#line 166 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 166 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 166 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0_3,
#line 166 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc1_4,
#line 166 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0_5,
#line 166 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc2_6)
#line 166 "assoc_list.m"
{
#line 390 "assoc_list.m"
  while (MR_TRUE)
#line 390 "assoc_list.m"
    {
#line 390 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 390 "assoc_list.m"
      {
#line 390 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 390 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 390 "assoc_list.m"
          {
#line 390 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 390 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 390 "assoc_list.m"
          }
#line 390 "assoc_list.m"
        else
#line 391 "assoc_list.m"
          {
#line 391 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 391 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 391 "assoc_list.m"
            MR_Box mercury__assoc_list__V_20 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 1));
#line 391 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
#line 391 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;
#line 392 "assoc_list.m"
            MR_Box mercury__assoc_list___K_19 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 0));
#line 393 "assoc_list.m"
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 393 "assoc_list.m"
            {
#line 393 "assoc_list.m"
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_20, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_25_25, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_26_26);
            }
#line 394 "assoc_list.m"
            /* direct tailcall eliminated */
#line 394 "assoc_list.m"
            {
#line 394 "assoc_list.m"
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_16;
#line 394 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
#line 394 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;

#line 394 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 394 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 394 "assoc_list.m"
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 394 "assoc_list.m"
            }
#line 394 "assoc_list.m"
            continue;
#line 391 "assoc_list.m"
          }
#line 390 "assoc_list.m"
      }
#line 390 "assoc_list.m"
      break;
#line 390 "assoc_list.m"
    }
#line 166 "assoc_list.m"
}

#line 385 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl_values_4_p_7_1(
#line 385 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg)
#line 385 "assoc_list.m"
{
#line 385 "assoc_list.m"
  {
#line 385 "assoc_list.m"
    struct mercury__assoc_list__foldl_values_4_p_7_env_0_s * mercury__assoc_list__env_ptr = (struct mercury__assoc_list__foldl_values_4_p_7_env_0_s *) mercury__assoc_list__env_ptr_arg;

#line 388 "assoc_list.m"
    {
#line 388 "assoc_list.m"
      mercury__assoc_list__foldl_values_4_p_7((mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_V_19, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_A_20, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_K_21, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__P_1, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__KVs_11, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_17_17, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_4, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__cont, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__cont_env_ptr);
#line 388 "assoc_list.m"
      return;
    }
#line 385 "assoc_list.m"
  }
#line 385 "assoc_list.m"
}

#line 159 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__foldl_values_4_p_7(
#line 159 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_19,
#line 159 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
#line 159 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_21,
#line 159 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 159 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 159 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
#line 159 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4,
#line 159 "assoc_list.m"
  MR_Cont mercury__assoc_list__cont,
#line 159 "assoc_list.m"
  void * mercury__assoc_list__cont_env_ptr)
#line 159 "assoc_list.m"
{
#line 159 "assoc_list.m"
  {
#line 159 "assoc_list.m"
    struct mercury__assoc_list__foldl_values_4_p_7_env_0_s mercury__assoc_list__env;

#line 159 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_V_19 = mercury__assoc_list__TypeInfo_for_V_19;
#line 159 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_A_20 = mercury__assoc_list__TypeInfo_for_A_20;
#line 159 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_K_21 = mercury__assoc_list__TypeInfo_for_K_21;
#line 159 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__P_1 = mercury__assoc_list__P_1;
#line 159 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_4;
#line 159 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__cont = mercury__assoc_list__cont;
#line 159 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__cont_env_ptr = mercury__assoc_list__cont_env_ptr;
#line 384 "assoc_list.m"
    {
#line 384 "assoc_list.m"
      MR_bool mercury__assoc_list__succeeded;

#line 384 "assoc_list.m"
      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 384 "assoc_list.m"
        {
#line 384 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_4) = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 384 "assoc_list.m"
          {
#line 384 "assoc_list.m"
            ((mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__cont)((mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__cont_env_ptr);
#line 384 "assoc_list.m"
            return;
          }
#line 384 "assoc_list.m"
        }
#line 384 "assoc_list.m"
      else
#line 385 "assoc_list.m"
        {
#line 385 "assoc_list.m"
          MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 385 "assoc_list.m"
          MR_Box mercury__assoc_list__V_14;
#line 386 "assoc_list.m"
          MR_Box mercury__assoc_list___K_13;
#line 387 "assoc_list.m"
          void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

#line 385 "assoc_list.m"
          (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 386 "assoc_list.m"
          mercury__assoc_list___K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 386 "assoc_list.m"
          mercury__assoc_list__V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 387 "assoc_list.m"
          mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__P_1, (MR_Integer) 1)));
#line 387 "assoc_list.m"
          {
#line 387 "assoc_list.m"
            mercury__assoc_list__func_0(((MR_Box) (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__P_1), mercury__assoc_list__V_14, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &(mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_17_17, mercury__assoc_list__foldl_values_4_p_7_1, &mercury__assoc_list__env);
          }
#line 385 "assoc_list.m"
        }
#line 384 "assoc_list.m"
    }
#line 159 "assoc_list.m"
  }
#line 159 "assoc_list.m"
}

#line 385 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl_values_4_p_6_1(
#line 385 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg)
#line 385 "assoc_list.m"
{
#line 385 "assoc_list.m"
  {
#line 385 "assoc_list.m"
    struct mercury__assoc_list__foldl_values_4_p_6_env_0_s * mercury__assoc_list__env_ptr = (struct mercury__assoc_list__foldl_values_4_p_6_env_0_s *) mercury__assoc_list__env_ptr_arg;

#line 388 "assoc_list.m"
    {
#line 388 "assoc_list.m"
      mercury__assoc_list__foldl_values_4_p_6((mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_V_19, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_A_20, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_K_21, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__P_1, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__KVs_11, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_17_17, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_4, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__cont, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__cont_env_ptr);
#line 388 "assoc_list.m"
      return;
    }
#line 385 "assoc_list.m"
  }
#line 385 "assoc_list.m"
}

#line 157 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__foldl_values_4_p_6(
#line 157 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_19,
#line 157 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
#line 157 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_21,
#line 157 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 157 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 157 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
#line 157 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4,
#line 157 "assoc_list.m"
  MR_Cont mercury__assoc_list__cont,
#line 157 "assoc_list.m"
  void * mercury__assoc_list__cont_env_ptr)
#line 157 "assoc_list.m"
{
#line 157 "assoc_list.m"
  {
#line 157 "assoc_list.m"
    struct mercury__assoc_list__foldl_values_4_p_6_env_0_s mercury__assoc_list__env;

#line 157 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_V_19 = mercury__assoc_list__TypeInfo_for_V_19;
#line 157 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_A_20 = mercury__assoc_list__TypeInfo_for_A_20;
#line 157 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_K_21 = mercury__assoc_list__TypeInfo_for_K_21;
#line 157 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__P_1 = mercury__assoc_list__P_1;
#line 157 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_4;
#line 157 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__cont = mercury__assoc_list__cont;
#line 157 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__cont_env_ptr = mercury__assoc_list__cont_env_ptr;
#line 384 "assoc_list.m"
    {
#line 384 "assoc_list.m"
      MR_bool mercury__assoc_list__succeeded;

#line 384 "assoc_list.m"
      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 384 "assoc_list.m"
        {
#line 384 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_4) = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 384 "assoc_list.m"
          {
#line 384 "assoc_list.m"
            ((mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__cont)((mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__cont_env_ptr);
#line 384 "assoc_list.m"
            return;
          }
#line 384 "assoc_list.m"
        }
#line 384 "assoc_list.m"
      else
#line 385 "assoc_list.m"
        {
#line 385 "assoc_list.m"
          MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 385 "assoc_list.m"
          MR_Box mercury__assoc_list__V_14;
#line 386 "assoc_list.m"
          MR_Box mercury__assoc_list___K_13;
#line 387 "assoc_list.m"
          void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

#line 385 "assoc_list.m"
          (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 386 "assoc_list.m"
          mercury__assoc_list___K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 386 "assoc_list.m"
          mercury__assoc_list__V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 387 "assoc_list.m"
          mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__P_1, (MR_Integer) 1)));
#line 387 "assoc_list.m"
          {
#line 387 "assoc_list.m"
            mercury__assoc_list__func_0(((MR_Box) (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__P_1), mercury__assoc_list__V_14, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &(mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_17_17, mercury__assoc_list__foldl_values_4_p_6_1, &mercury__assoc_list__env);
          }
#line 385 "assoc_list.m"
        }
#line 384 "assoc_list.m"
    }
#line 157 "assoc_list.m"
  }
#line 157 "assoc_list.m"
}

#line 155 "assoc_list.m"
MR_bool MR_CALL 
mercury__assoc_list__foldl_values_4_p_5(
#line 155 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_19,
#line 155 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
#line 155 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_21,
#line 155 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 155 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 155 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
#line 155 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4)
#line 155 "assoc_list.m"
{
#line 384 "assoc_list.m"
  while (MR_TRUE)
#line 384 "assoc_list.m"
    {
#line 384 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 384 "assoc_list.m"
      {
#line 384 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 384 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 384 "assoc_list.m"
          {
#line 384 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 384 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 384 "assoc_list.m"
          }
#line 384 "assoc_list.m"
        else
#line 385 "assoc_list.m"
          {
#line 385 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 385 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 385 "assoc_list.m"
            MR_Box mercury__assoc_list__V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 385 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
#line 386 "assoc_list.m"
            MR_Box mercury__assoc_list___K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 387 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 387 "assoc_list.m"
            {
#line 387 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_14, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
#line 385 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 388 "assoc_list.m"
              {
#line 388 "assoc_list.m"
                /* direct tailcall eliminated */
#line 388 "assoc_list.m"
                {
#line 388 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
#line 388 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

#line 388 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 388 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 388 "assoc_list.m"
                }
#line 388 "assoc_list.m"
                continue;
#line 388 "assoc_list.m"
              }
#line 385 "assoc_list.m"
          }
#line 384 "assoc_list.m"
        return mercury__assoc_list__succeeded;
#line 384 "assoc_list.m"
      }
#line 384 "assoc_list.m"
      break;
#line 384 "assoc_list.m"
    }
#line 155 "assoc_list.m"
}

#line 153 "assoc_list.m"
MR_bool MR_CALL 
mercury__assoc_list__foldl_values_4_p_4(
#line 153 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_19,
#line 153 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
#line 153 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_21,
#line 153 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 153 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 153 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
#line 153 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4)
#line 153 "assoc_list.m"
{
#line 384 "assoc_list.m"
  while (MR_TRUE)
#line 384 "assoc_list.m"
    {
#line 384 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 384 "assoc_list.m"
      {
#line 384 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 384 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 384 "assoc_list.m"
          {
#line 384 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 384 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 384 "assoc_list.m"
          }
#line 384 "assoc_list.m"
        else
#line 385 "assoc_list.m"
          {
#line 385 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 385 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 385 "assoc_list.m"
            MR_Box mercury__assoc_list__V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 385 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
#line 386 "assoc_list.m"
            MR_Box mercury__assoc_list___K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 387 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 387 "assoc_list.m"
            {
#line 387 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_14, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
#line 385 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 388 "assoc_list.m"
              {
#line 388 "assoc_list.m"
                /* direct tailcall eliminated */
#line 388 "assoc_list.m"
                {
#line 388 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
#line 388 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

#line 388 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 388 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 388 "assoc_list.m"
                }
#line 388 "assoc_list.m"
                continue;
#line 388 "assoc_list.m"
              }
#line 385 "assoc_list.m"
          }
#line 384 "assoc_list.m"
        return mercury__assoc_list__succeeded;
#line 384 "assoc_list.m"
      }
#line 384 "assoc_list.m"
      break;
#line 384 "assoc_list.m"
    }
#line 153 "assoc_list.m"
}

#line 151 "assoc_list.m"
MR_bool MR_CALL 
mercury__assoc_list__foldl_values_4_p_3(
#line 151 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_19,
#line 151 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
#line 151 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_21,
#line 151 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 151 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 151 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
#line 151 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4)
#line 151 "assoc_list.m"
{
#line 384 "assoc_list.m"
  while (MR_TRUE)
#line 384 "assoc_list.m"
    {
#line 384 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 384 "assoc_list.m"
      {
#line 384 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 384 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 384 "assoc_list.m"
          {
#line 384 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 384 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 384 "assoc_list.m"
          }
#line 384 "assoc_list.m"
        else
#line 385 "assoc_list.m"
          {
#line 385 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 385 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 385 "assoc_list.m"
            MR_Box mercury__assoc_list__V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 385 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
#line 386 "assoc_list.m"
            MR_Box mercury__assoc_list___K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 387 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 387 "assoc_list.m"
            {
#line 387 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_14, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
#line 385 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 388 "assoc_list.m"
              {
#line 388 "assoc_list.m"
                /* direct tailcall eliminated */
#line 388 "assoc_list.m"
                {
#line 388 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
#line 388 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

#line 388 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 388 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 388 "assoc_list.m"
                }
#line 388 "assoc_list.m"
                continue;
#line 388 "assoc_list.m"
              }
#line 385 "assoc_list.m"
          }
#line 384 "assoc_list.m"
        return mercury__assoc_list__succeeded;
#line 384 "assoc_list.m"
      }
#line 384 "assoc_list.m"
      break;
#line 384 "assoc_list.m"
    }
#line 151 "assoc_list.m"
}

#line 149 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__foldl_values_4_p_2(
#line 149 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_19,
#line 149 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
#line 149 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_21,
#line 149 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 149 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 149 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
#line 149 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4)
#line 149 "assoc_list.m"
{
#line 384 "assoc_list.m"
  while (MR_TRUE)
#line 384 "assoc_list.m"
    {
#line 384 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 384 "assoc_list.m"
      {
#line 384 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 384 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 384 "assoc_list.m"
          *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 384 "assoc_list.m"
        else
#line 385 "assoc_list.m"
          {
#line 385 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 385 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 385 "assoc_list.m"
            MR_Box mercury__assoc_list__V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 385 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
#line 386 "assoc_list.m"
            MR_Box mercury__assoc_list___K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 387 "assoc_list.m"
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 387 "assoc_list.m"
            {
#line 387 "assoc_list.m"
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_14, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
#line 388 "assoc_list.m"
            /* direct tailcall eliminated */
#line 388 "assoc_list.m"
            {
#line 388 "assoc_list.m"
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
#line 388 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

#line 388 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 388 "assoc_list.m"
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 388 "assoc_list.m"
            }
#line 388 "assoc_list.m"
            continue;
#line 385 "assoc_list.m"
          }
#line 384 "assoc_list.m"
      }
#line 384 "assoc_list.m"
      break;
#line 384 "assoc_list.m"
    }
#line 149 "assoc_list.m"
}

#line 147 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__foldl_values_4_p_1(
#line 147 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_19,
#line 147 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
#line 147 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_21,
#line 147 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 147 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 147 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
#line 147 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4)
#line 147 "assoc_list.m"
{
#line 384 "assoc_list.m"
  while (MR_TRUE)
#line 384 "assoc_list.m"
    {
#line 384 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 384 "assoc_list.m"
      {
#line 384 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 384 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 384 "assoc_list.m"
          *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 384 "assoc_list.m"
        else
#line 385 "assoc_list.m"
          {
#line 385 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 385 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 385 "assoc_list.m"
            MR_Box mercury__assoc_list__V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 385 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
#line 386 "assoc_list.m"
            MR_Box mercury__assoc_list___K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 387 "assoc_list.m"
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 387 "assoc_list.m"
            {
#line 387 "assoc_list.m"
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_14, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
#line 388 "assoc_list.m"
            /* direct tailcall eliminated */
#line 388 "assoc_list.m"
            {
#line 388 "assoc_list.m"
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
#line 388 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

#line 388 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 388 "assoc_list.m"
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 388 "assoc_list.m"
            }
#line 388 "assoc_list.m"
            continue;
#line 385 "assoc_list.m"
          }
#line 384 "assoc_list.m"
      }
#line 384 "assoc_list.m"
      break;
#line 384 "assoc_list.m"
    }
#line 147 "assoc_list.m"
}

#line 145 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__foldl_values_4_p_0(
#line 145 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_19,
#line 145 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
#line 145 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_21,
#line 145 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 145 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 145 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
#line 145 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4)
#line 145 "assoc_list.m"
{
#line 384 "assoc_list.m"
  while (MR_TRUE)
#line 384 "assoc_list.m"
    {
#line 384 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 384 "assoc_list.m"
      {
#line 384 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 384 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 384 "assoc_list.m"
          *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 384 "assoc_list.m"
        else
#line 385 "assoc_list.m"
          {
#line 385 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 385 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 385 "assoc_list.m"
            MR_Box mercury__assoc_list__V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 385 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
#line 386 "assoc_list.m"
            MR_Box mercury__assoc_list___K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 387 "assoc_list.m"
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 387 "assoc_list.m"
            {
#line 387 "assoc_list.m"
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_14, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
#line 388 "assoc_list.m"
            /* direct tailcall eliminated */
#line 388 "assoc_list.m"
            {
#line 388 "assoc_list.m"
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
#line 388 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

#line 388 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 388 "assoc_list.m"
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 388 "assoc_list.m"
            }
#line 388 "assoc_list.m"
            continue;
#line 385 "assoc_list.m"
          }
#line 384 "assoc_list.m"
      }
#line 384 "assoc_list.m"
      break;
#line 384 "assoc_list.m"
    }
#line 145 "assoc_list.m"
}

#line 379 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_7_1(
#line 379 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg)
#line 379 "assoc_list.m"
{
#line 379 "assoc_list.m"
  {
#line 379 "assoc_list.m"
    struct mercury__assoc_list__foldl_keys_4_p_7_env_0_s * mercury__assoc_list__env_ptr = (struct mercury__assoc_list__foldl_keys_4_p_7_env_0_s *) mercury__assoc_list__env_ptr_arg;

#line 382 "assoc_list.m"
    {
#line 382 "assoc_list.m"
      mercury__assoc_list__foldl_keys_4_p_7((mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_K_19, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_A_20, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_V_21, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__P_1, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__KVs_11, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_17_17, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_4, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__cont, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__cont_env_ptr);
#line 382 "assoc_list.m"
      return;
    }
#line 379 "assoc_list.m"
  }
#line 379 "assoc_list.m"
}

#line 138 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_7(
#line 138 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_19,
#line 138 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
#line 138 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_21,
#line 138 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 138 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 138 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
#line 138 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4,
#line 138 "assoc_list.m"
  MR_Cont mercury__assoc_list__cont,
#line 138 "assoc_list.m"
  void * mercury__assoc_list__cont_env_ptr)
#line 138 "assoc_list.m"
{
#line 138 "assoc_list.m"
  {
#line 138 "assoc_list.m"
    struct mercury__assoc_list__foldl_keys_4_p_7_env_0_s mercury__assoc_list__env;

#line 138 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_K_19 = mercury__assoc_list__TypeInfo_for_K_19;
#line 138 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_A_20 = mercury__assoc_list__TypeInfo_for_A_20;
#line 138 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_V_21 = mercury__assoc_list__TypeInfo_for_V_21;
#line 138 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__P_1 = mercury__assoc_list__P_1;
#line 138 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_4;
#line 138 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__cont = mercury__assoc_list__cont;
#line 138 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__cont_env_ptr = mercury__assoc_list__cont_env_ptr;
#line 378 "assoc_list.m"
    {
#line 378 "assoc_list.m"
      MR_bool mercury__assoc_list__succeeded;

#line 378 "assoc_list.m"
      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 378 "assoc_list.m"
        {
#line 378 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_4) = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 378 "assoc_list.m"
          {
#line 378 "assoc_list.m"
            ((mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__cont)((mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__cont_env_ptr);
#line 378 "assoc_list.m"
            return;
          }
#line 378 "assoc_list.m"
        }
#line 378 "assoc_list.m"
      else
#line 379 "assoc_list.m"
        {
#line 379 "assoc_list.m"
          MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 379 "assoc_list.m"
          MR_Box mercury__assoc_list__K_13;
#line 380 "assoc_list.m"
          MR_Box mercury__assoc_list___V_14;
#line 381 "assoc_list.m"
          void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

#line 379 "assoc_list.m"
          (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 380 "assoc_list.m"
          mercury__assoc_list__K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 380 "assoc_list.m"
          mercury__assoc_list___V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 381 "assoc_list.m"
          mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__P_1, (MR_Integer) 1)));
#line 381 "assoc_list.m"
          {
#line 381 "assoc_list.m"
            mercury__assoc_list__func_0(((MR_Box) (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__P_1), mercury__assoc_list__K_13, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &(mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_17_17, mercury__assoc_list__foldl_keys_4_p_7_1, &mercury__assoc_list__env);
          }
#line 379 "assoc_list.m"
        }
#line 378 "assoc_list.m"
    }
#line 138 "assoc_list.m"
  }
#line 138 "assoc_list.m"
}

#line 379 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_6_1(
#line 379 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg)
#line 379 "assoc_list.m"
{
#line 379 "assoc_list.m"
  {
#line 379 "assoc_list.m"
    struct mercury__assoc_list__foldl_keys_4_p_6_env_0_s * mercury__assoc_list__env_ptr = (struct mercury__assoc_list__foldl_keys_4_p_6_env_0_s *) mercury__assoc_list__env_ptr_arg;

#line 382 "assoc_list.m"
    {
#line 382 "assoc_list.m"
      mercury__assoc_list__foldl_keys_4_p_6((mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_K_19, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_A_20, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_V_21, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__P_1, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__KVs_11, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_17_17, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_4, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__cont, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__cont_env_ptr);
#line 382 "assoc_list.m"
      return;
    }
#line 379 "assoc_list.m"
  }
#line 379 "assoc_list.m"
}

#line 137 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_6(
#line 137 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_19,
#line 137 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
#line 137 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_21,
#line 137 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 137 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 137 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
#line 137 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4,
#line 137 "assoc_list.m"
  MR_Cont mercury__assoc_list__cont,
#line 137 "assoc_list.m"
  void * mercury__assoc_list__cont_env_ptr)
#line 137 "assoc_list.m"
{
#line 137 "assoc_list.m"
  {
#line 137 "assoc_list.m"
    struct mercury__assoc_list__foldl_keys_4_p_6_env_0_s mercury__assoc_list__env;

#line 137 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_K_19 = mercury__assoc_list__TypeInfo_for_K_19;
#line 137 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_A_20 = mercury__assoc_list__TypeInfo_for_A_20;
#line 137 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_V_21 = mercury__assoc_list__TypeInfo_for_V_21;
#line 137 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__P_1 = mercury__assoc_list__P_1;
#line 137 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_4;
#line 137 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__cont = mercury__assoc_list__cont;
#line 137 "assoc_list.m"
    (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__cont_env_ptr = mercury__assoc_list__cont_env_ptr;
#line 378 "assoc_list.m"
    {
#line 378 "assoc_list.m"
      MR_bool mercury__assoc_list__succeeded;

#line 378 "assoc_list.m"
      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 378 "assoc_list.m"
        {
#line 378 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_4) = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 378 "assoc_list.m"
          {
#line 378 "assoc_list.m"
            ((mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__cont)((mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__cont_env_ptr);
#line 378 "assoc_list.m"
            return;
          }
#line 378 "assoc_list.m"
        }
#line 378 "assoc_list.m"
      else
#line 379 "assoc_list.m"
        {
#line 379 "assoc_list.m"
          MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 379 "assoc_list.m"
          MR_Box mercury__assoc_list__K_13;
#line 380 "assoc_list.m"
          MR_Box mercury__assoc_list___V_14;
#line 381 "assoc_list.m"
          void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

#line 379 "assoc_list.m"
          (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 380 "assoc_list.m"
          mercury__assoc_list__K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 380 "assoc_list.m"
          mercury__assoc_list___V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 381 "assoc_list.m"
          mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__P_1, (MR_Integer) 1)));
#line 381 "assoc_list.m"
          {
#line 381 "assoc_list.m"
            mercury__assoc_list__func_0(((MR_Box) (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__P_1), mercury__assoc_list__K_13, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &(mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_17_17, mercury__assoc_list__foldl_keys_4_p_6_1, &mercury__assoc_list__env);
          }
#line 379 "assoc_list.m"
        }
#line 378 "assoc_list.m"
    }
#line 137 "assoc_list.m"
  }
#line 137 "assoc_list.m"
}

#line 136 "assoc_list.m"
MR_bool MR_CALL 
mercury__assoc_list__foldl_keys_4_p_5(
#line 136 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_19,
#line 136 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
#line 136 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_21,
#line 136 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 136 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 136 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
#line 136 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4)
#line 136 "assoc_list.m"
{
#line 378 "assoc_list.m"
  while (MR_TRUE)
#line 378 "assoc_list.m"
    {
#line 378 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 378 "assoc_list.m"
      {
#line 378 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 378 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 378 "assoc_list.m"
          {
#line 378 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 378 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 378 "assoc_list.m"
          }
#line 378 "assoc_list.m"
        else
#line 379 "assoc_list.m"
          {
#line 379 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 379 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 379 "assoc_list.m"
            MR_Box mercury__assoc_list__K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 379 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
#line 380 "assoc_list.m"
            MR_Box mercury__assoc_list___V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 381 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 381 "assoc_list.m"
            {
#line 381 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__K_13, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
#line 379 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 382 "assoc_list.m"
              {
#line 382 "assoc_list.m"
                /* direct tailcall eliminated */
#line 382 "assoc_list.m"
                {
#line 382 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
#line 382 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

#line 382 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 382 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 382 "assoc_list.m"
                }
#line 382 "assoc_list.m"
                continue;
#line 382 "assoc_list.m"
              }
#line 379 "assoc_list.m"
          }
#line 378 "assoc_list.m"
        return mercury__assoc_list__succeeded;
#line 378 "assoc_list.m"
      }
#line 378 "assoc_list.m"
      break;
#line 378 "assoc_list.m"
    }
#line 136 "assoc_list.m"
}

#line 135 "assoc_list.m"
MR_bool MR_CALL 
mercury__assoc_list__foldl_keys_4_p_4(
#line 135 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_19,
#line 135 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
#line 135 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_21,
#line 135 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 135 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 135 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
#line 135 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4)
#line 135 "assoc_list.m"
{
#line 378 "assoc_list.m"
  while (MR_TRUE)
#line 378 "assoc_list.m"
    {
#line 378 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 378 "assoc_list.m"
      {
#line 378 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 378 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 378 "assoc_list.m"
          {
#line 378 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 378 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 378 "assoc_list.m"
          }
#line 378 "assoc_list.m"
        else
#line 379 "assoc_list.m"
          {
#line 379 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 379 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 379 "assoc_list.m"
            MR_Box mercury__assoc_list__K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 379 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
#line 380 "assoc_list.m"
            MR_Box mercury__assoc_list___V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 381 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 381 "assoc_list.m"
            {
#line 381 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__K_13, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
#line 379 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 382 "assoc_list.m"
              {
#line 382 "assoc_list.m"
                /* direct tailcall eliminated */
#line 382 "assoc_list.m"
                {
#line 382 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
#line 382 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

#line 382 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 382 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 382 "assoc_list.m"
                }
#line 382 "assoc_list.m"
                continue;
#line 382 "assoc_list.m"
              }
#line 379 "assoc_list.m"
          }
#line 378 "assoc_list.m"
        return mercury__assoc_list__succeeded;
#line 378 "assoc_list.m"
      }
#line 378 "assoc_list.m"
      break;
#line 378 "assoc_list.m"
    }
#line 135 "assoc_list.m"
}

#line 134 "assoc_list.m"
MR_bool MR_CALL 
mercury__assoc_list__foldl_keys_4_p_3(
#line 134 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_19,
#line 134 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
#line 134 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_21,
#line 134 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 134 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 134 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
#line 134 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4)
#line 134 "assoc_list.m"
{
#line 378 "assoc_list.m"
  while (MR_TRUE)
#line 378 "assoc_list.m"
    {
#line 378 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 378 "assoc_list.m"
      {
#line 378 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 378 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 378 "assoc_list.m"
          {
#line 378 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 378 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 378 "assoc_list.m"
          }
#line 378 "assoc_list.m"
        else
#line 379 "assoc_list.m"
          {
#line 379 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 379 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 379 "assoc_list.m"
            MR_Box mercury__assoc_list__K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 379 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
#line 380 "assoc_list.m"
            MR_Box mercury__assoc_list___V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 381 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 381 "assoc_list.m"
            {
#line 381 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__K_13, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
#line 379 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 382 "assoc_list.m"
              {
#line 382 "assoc_list.m"
                /* direct tailcall eliminated */
#line 382 "assoc_list.m"
                {
#line 382 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
#line 382 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

#line 382 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 382 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 382 "assoc_list.m"
                }
#line 382 "assoc_list.m"
                continue;
#line 382 "assoc_list.m"
              }
#line 379 "assoc_list.m"
          }
#line 378 "assoc_list.m"
        return mercury__assoc_list__succeeded;
#line 378 "assoc_list.m"
      }
#line 378 "assoc_list.m"
      break;
#line 378 "assoc_list.m"
    }
#line 134 "assoc_list.m"
}

#line 133 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_2(
#line 133 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_19,
#line 133 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
#line 133 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_21,
#line 133 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 133 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 133 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
#line 133 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4)
#line 133 "assoc_list.m"
{
#line 378 "assoc_list.m"
  while (MR_TRUE)
#line 378 "assoc_list.m"
    {
#line 378 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 378 "assoc_list.m"
      {
#line 378 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 378 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 378 "assoc_list.m"
          *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 378 "assoc_list.m"
        else
#line 379 "assoc_list.m"
          {
#line 379 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 379 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 379 "assoc_list.m"
            MR_Box mercury__assoc_list__K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 379 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
#line 380 "assoc_list.m"
            MR_Box mercury__assoc_list___V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 381 "assoc_list.m"
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 381 "assoc_list.m"
            {
#line 381 "assoc_list.m"
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__K_13, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
#line 382 "assoc_list.m"
            /* direct tailcall eliminated */
#line 382 "assoc_list.m"
            {
#line 382 "assoc_list.m"
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
#line 382 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

#line 382 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 382 "assoc_list.m"
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 382 "assoc_list.m"
            }
#line 382 "assoc_list.m"
            continue;
#line 379 "assoc_list.m"
          }
#line 378 "assoc_list.m"
      }
#line 378 "assoc_list.m"
      break;
#line 378 "assoc_list.m"
    }
#line 133 "assoc_list.m"
}

#line 132 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_1(
#line 132 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_19,
#line 132 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
#line 132 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_21,
#line 132 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 132 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 132 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
#line 132 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4)
#line 132 "assoc_list.m"
{
#line 378 "assoc_list.m"
  while (MR_TRUE)
#line 378 "assoc_list.m"
    {
#line 378 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 378 "assoc_list.m"
      {
#line 378 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 378 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 378 "assoc_list.m"
          *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 378 "assoc_list.m"
        else
#line 379 "assoc_list.m"
          {
#line 379 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 379 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 379 "assoc_list.m"
            MR_Box mercury__assoc_list__K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 379 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
#line 380 "assoc_list.m"
            MR_Box mercury__assoc_list___V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 381 "assoc_list.m"
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 381 "assoc_list.m"
            {
#line 381 "assoc_list.m"
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__K_13, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
#line 382 "assoc_list.m"
            /* direct tailcall eliminated */
#line 382 "assoc_list.m"
            {
#line 382 "assoc_list.m"
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
#line 382 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

#line 382 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 382 "assoc_list.m"
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 382 "assoc_list.m"
            }
#line 382 "assoc_list.m"
            continue;
#line 379 "assoc_list.m"
          }
#line 378 "assoc_list.m"
      }
#line 378 "assoc_list.m"
      break;
#line 378 "assoc_list.m"
    }
#line 132 "assoc_list.m"
}

#line 131 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_0(
#line 131 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_19,
#line 131 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_A_20,
#line 131 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_21,
#line 131 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 131 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 131 "assoc_list.m"
  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0_3,
#line 131 "assoc_list.m"
  MR_Box * mercury__assoc_list__STATE_VARIABLE_Acc_4)
#line 131 "assoc_list.m"
{
#line 378 "assoc_list.m"
  while (MR_TRUE)
#line 378 "assoc_list.m"
    {
#line 378 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 378 "assoc_list.m"
      {
#line 378 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 378 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 378 "assoc_list.m"
          *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 378 "assoc_list.m"
        else
#line 379 "assoc_list.m"
          {
#line 379 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 379 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 379 "assoc_list.m"
            MR_Box mercury__assoc_list__K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 379 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
#line 380 "assoc_list.m"
            MR_Box mercury__assoc_list___V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 381 "assoc_list.m"
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 381 "assoc_list.m"
            {
#line 381 "assoc_list.m"
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__K_13, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
#line 382 "assoc_list.m"
            /* direct tailcall eliminated */
#line 382 "assoc_list.m"
            {
#line 382 "assoc_list.m"
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
#line 382 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

#line 382 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 382 "assoc_list.m"
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 382 "assoc_list.m"
            }
#line 382 "assoc_list.m"
            continue;
#line 379 "assoc_list.m"
          }
#line 378 "assoc_list.m"
      }
#line 378 "assoc_list.m"
      break;
#line 378 "assoc_list.m"
    }
#line 131 "assoc_list.m"
}

#line 124 "assoc_list.m"
MR_Word MR_CALL 
mercury__assoc_list__merge_2_f_0(
#line 124 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_7,
#line 124 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_8,
#line 124 "assoc_list.m"
  MR_Word mercury__assoc_list__As_4,
#line 124 "assoc_list.m"
  MR_Word mercury__assoc_list__Bs_5)
#line 124 "assoc_list.m"
{
#line 359 "assoc_list.m"
  {
#line 359 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;
#line 359 "assoc_list.m"
    MR_Word mercury__assoc_list__ABs_6;

#line 359 "assoc_list.m"
    {
#line 359 "assoc_list.m"
      mercury__assoc_list__merge_3_p_0(mercury__assoc_list__TypeInfo_for_K_7, mercury__assoc_list__TypeInfo_for_V_8, mercury__assoc_list__As_4, mercury__assoc_list__Bs_5, &mercury__assoc_list__ABs_6);
    }
#line 359 "assoc_list.m"
    return mercury__assoc_list__ABs_6;
#line 359 "assoc_list.m"
  }
#line 124 "assoc_list.m"
}

#line 122 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__merge_3_p_0(
#line 122 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_22,
#line 122 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_23,
#line 122 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__1_1,
#line 122 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 122 "assoc_list.m"
  MR_Word * mercury__assoc_list__HeadVar__3_3)
#line 122 "assoc_list.m"
{
#line 361 "assoc_list.m"
  {
#line 361 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;

#line 361 "assoc_list.m"
    if ((mercury__assoc_list__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 361 "assoc_list.m"
      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 361 "assoc_list.m"
        *mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 361 "assoc_list.m"
      else
#line 363 "assoc_list.m"
        *mercury__assoc_list__HeadVar__3_3 = mercury__assoc_list__HeadVar__2_2;
#line 361 "assoc_list.m"
    else
#line 361 "assoc_list.m"
      {
#line 361 "assoc_list.m"
        MR_Word mercury__assoc_list__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
#line 361 "assoc_list.m"
        MR_Word mercury__assoc_list__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 0)));

#line 361 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 362 "assoc_list.m"
          *mercury__assoc_list__HeadVar__3_3 = mercury__assoc_list__HeadVar__1_1;
#line 361 "assoc_list.m"
        else
#line 364 "assoc_list.m"
          {
#line 364 "assoc_list.m"
            MR_Word mercury__assoc_list__B_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 364 "assoc_list.m"
            MR_Word mercury__assoc_list__Bs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 366 "assoc_list.m"
            MR_Box mercury__assoc_list__AK_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_26_26, (MR_Integer) 0));
#line 366 "assoc_list.m"
            MR_Box mercury__assoc_list__BK_15 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__B_10, (MR_Integer) 0));
#line 366 "assoc_list.m"
            MR_Word mercury__assoc_list__V_24_24;
#line 366 "assoc_list.m"
            MR_Box mercury__assoc_list___AV_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_26_26, (MR_Integer) 1));
#line 367 "assoc_list.m"
            MR_Box mercury__assoc_list___BV_16 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__B_10, (MR_Integer) 1));

#line 368 "assoc_list.m"
            {
#line 368 "assoc_list.m"
              mercury__builtin__compare_3_p_0(mercury__assoc_list__TypeInfo_for_K_22, &mercury__assoc_list__V_24_24, mercury__assoc_list__AK_13, mercury__assoc_list__BK_15);
            }
#line 368 "assoc_list.m"
            mercury__assoc_list__succeeded = ((MR_Integer) 2 == mercury__assoc_list__V_24_24);
#line 372 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 370 "assoc_list.m"
              {
#line 370 "assoc_list.m"
                MR_Word mercury__assoc_list__Cs0_17;

#line 370 "assoc_list.m"
                {
#line 370 "assoc_list.m"
                  mercury__assoc_list__merge_3_p_0(mercury__assoc_list__TypeInfo_for_K_22, mercury__assoc_list__TypeInfo_for_V_23, mercury__assoc_list__HeadVar__1_1, mercury__assoc_list__Bs_11, &mercury__assoc_list__Cs0_17);
                }
#line 371 "assoc_list.m"
                {
#line 371 "assoc_list.m"
                  MR_Word base;
#line 371 "assoc_list.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "assoc_list.m"
                  *mercury__assoc_list__HeadVar__3_3 = base;
#line 371 "assoc_list.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__B_10));
#line 371 "assoc_list.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__Cs0_17));
#line 371 "assoc_list.m"
                }
#line 370 "assoc_list.m"
              }
#line 372 "assoc_list.m"
            else
#line 374 "assoc_list.m"
              {
#line 374 "assoc_list.m"
                MR_Word mercury__assoc_list__Cs0_21;

#line 374 "assoc_list.m"
                {
#line 374 "assoc_list.m"
                  mercury__assoc_list__merge_3_p_0(mercury__assoc_list__TypeInfo_for_K_22, mercury__assoc_list__TypeInfo_for_V_23, mercury__assoc_list__V_25_25, mercury__assoc_list__HeadVar__2_2, &mercury__assoc_list__Cs0_21);
                }
#line 375 "assoc_list.m"
                {
#line 375 "assoc_list.m"
                  MR_Word base;
#line 375 "assoc_list.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 375 "assoc_list.m"
                  *mercury__assoc_list__HeadVar__3_3 = base;
#line 375 "assoc_list.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_26_26));
#line 375 "assoc_list.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__Cs0_21));
#line 375 "assoc_list.m"
                }
#line 374 "assoc_list.m"
              }
#line 364 "assoc_list.m"
          }
#line 361 "assoc_list.m"
      }
#line 361 "assoc_list.m"
  }
#line 122 "assoc_list.m"
}

#line 114 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__filter_4_p_0(
#line 114 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_17,
#line 114 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_18,
#line 114 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 114 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 114 "assoc_list.m"
  MR_Word * mercury__assoc_list__HeadVar__3_3,
#line 114 "assoc_list.m"
  MR_Word * mercury__assoc_list__HeadVar__4_4)
#line 114 "assoc_list.m"
{
#line 348 "assoc_list.m"
  {
#line 348 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;

#line 348 "assoc_list.m"
    if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 348 "assoc_list.m"
      {
#line 348 "assoc_list.m"
        *mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 348 "assoc_list.m"
        *mercury__assoc_list__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 348 "assoc_list.m"
      }
#line 348 "assoc_list.m"
    else
#line 349 "assoc_list.m"
      {
#line 349 "assoc_list.m"
        MR_Box mercury__assoc_list__HK_7;
#line 349 "assoc_list.m"
        MR_Word mercury__assoc_list__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 349 "assoc_list.m"
        MR_Word mercury__assoc_list__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 349 "assoc_list.m"
        MR_Box mercury__assoc_list__HV_8;
#line 350 "assoc_list.m"
        MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box);

#line 349 "assoc_list.m"
        mercury__assoc_list__HK_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_14_14, (MR_Integer) 0));
#line 349 "assoc_list.m"
        mercury__assoc_list__HV_8 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_14_14, (MR_Integer) 1));
#line 350 "assoc_list.m"
        mercury__assoc_list__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));
#line 350 "assoc_list.m"
        {
#line 350 "assoc_list.m"
          mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__HK_7);
        }
#line 353 "assoc_list.m"
        if (mercury__assoc_list__succeeded)
#line 351 "assoc_list.m"
          {
#line 351 "assoc_list.m"
            MR_Word mercury__assoc_list__TrueTail_12;

#line 351 "assoc_list.m"
            {
#line 351 "assoc_list.m"
              mercury__assoc_list__filter_4_p_0(mercury__assoc_list__TypeInfo_for_K_17, mercury__assoc_list__TypeInfo_for_V_18, mercury__assoc_list__P_1, mercury__assoc_list__T_9, &mercury__assoc_list__TrueTail_12, mercury__assoc_list__HeadVar__4_4);
            }
#line 352 "assoc_list.m"
            {
#line 352 "assoc_list.m"
              MR_Word base;
#line 352 "assoc_list.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "assoc_list.m"
              *mercury__assoc_list__HeadVar__3_3 = base;
#line 352 "assoc_list.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_14_14));
#line 352 "assoc_list.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__TrueTail_12));
#line 352 "assoc_list.m"
            }
#line 351 "assoc_list.m"
          }
#line 353 "assoc_list.m"
        else
#line 354 "assoc_list.m"
          {
#line 354 "assoc_list.m"
            MR_Word mercury__assoc_list__FalseTail_13;

#line 354 "assoc_list.m"
            {
#line 354 "assoc_list.m"
              mercury__assoc_list__filter_4_p_0(mercury__assoc_list__TypeInfo_for_K_17, mercury__assoc_list__TypeInfo_for_V_18, mercury__assoc_list__P_1, mercury__assoc_list__T_9, mercury__assoc_list__HeadVar__3_3, &mercury__assoc_list__FalseTail_13);
            }
#line 355 "assoc_list.m"
            {
#line 355 "assoc_list.m"
              MR_Word base;
#line 355 "assoc_list.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 355 "assoc_list.m"
              *mercury__assoc_list__HeadVar__4_4 = base;
#line 355 "assoc_list.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_14_14));
#line 355 "assoc_list.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__FalseTail_13));
#line 355 "assoc_list.m"
            }
#line 354 "assoc_list.m"
          }
#line 349 "assoc_list.m"
      }
#line 348 "assoc_list.m"
  }
#line 114 "assoc_list.m"
}

#line 106 "assoc_list.m"
MR_Word MR_CALL 
mercury__assoc_list__negated_filter_2_f_0(
#line 106 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_7,
#line 106 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_8,
#line 106 "assoc_list.m"
  MR_Word mercury__assoc_list__P_4,
#line 106 "assoc_list.m"
  MR_Word mercury__assoc_list__List_5)
#line 106 "assoc_list.m"
{
#line 346 "assoc_list.m"
  {
#line 346 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;
#line 346 "assoc_list.m"
    MR_Word mercury__assoc_list__Falses_6;

#line 346 "assoc_list.m"
    {
#line 346 "assoc_list.m"
      mercury__assoc_list__negated_filter_3_p_0(mercury__assoc_list__TypeInfo_for_K_7, mercury__assoc_list__TypeInfo_for_V_8, mercury__assoc_list__P_4, mercury__assoc_list__List_5, &mercury__assoc_list__Falses_6);
    }
#line 346 "assoc_list.m"
    return mercury__assoc_list__Falses_6;
#line 346 "assoc_list.m"
  }
#line 106 "assoc_list.m"
}

#line 104 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__negated_filter_3_p_0(
#line 104 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_13,
#line 104 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_14,
#line 104 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 104 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 104 "assoc_list.m"
  MR_Word * mercury__assoc_list__HeadVar__3_3)
#line 104 "assoc_list.m"
{
#line 336 "assoc_list.m"
  while (MR_TRUE)
#line 336 "assoc_list.m"
    {
#line 336 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 336 "assoc_list.m"
      {
#line 336 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 336 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 336 "assoc_list.m"
          *mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 336 "assoc_list.m"
        else
#line 337 "assoc_list.m"
          {
#line 337 "assoc_list.m"
            MR_Box mercury__assoc_list__HK_6;
#line 337 "assoc_list.m"
            MR_Word mercury__assoc_list__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 337 "assoc_list.m"
            MR_Word mercury__assoc_list__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 337 "assoc_list.m"
            MR_Box mercury__assoc_list__HV_7;
#line 338 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box);

#line 337 "assoc_list.m"
            mercury__assoc_list__HK_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 0));
#line 337 "assoc_list.m"
            mercury__assoc_list__HV_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 1));
#line 338 "assoc_list.m"
            mercury__assoc_list__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));
#line 338 "assoc_list.m"
            {
#line 338 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__HK_6);
            }
#line 340 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 339 "assoc_list.m"
              {
#line 339 "assoc_list.m"
                /* direct tailcall eliminated */
#line 339 "assoc_list.m"
                {
#line 339 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__T_8;

#line 339 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 339 "assoc_list.m"
                }
#line 339 "assoc_list.m"
                continue;
#line 339 "assoc_list.m"
              }
#line 340 "assoc_list.m"
            else
#line 341 "assoc_list.m"
              {
#line 341 "assoc_list.m"
                MR_Word mercury__assoc_list__FalseTail_10;

#line 341 "assoc_list.m"
                {
#line 341 "assoc_list.m"
                  mercury__assoc_list__negated_filter_3_p_0(mercury__assoc_list__TypeInfo_for_K_13, mercury__assoc_list__TypeInfo_for_V_14, mercury__assoc_list__P_1, mercury__assoc_list__T_8, &mercury__assoc_list__FalseTail_10);
                }
#line 342 "assoc_list.m"
                {
#line 342 "assoc_list.m"
                  MR_Word base;
#line 342 "assoc_list.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "assoc_list.m"
                  *mercury__assoc_list__HeadVar__3_3 = base;
#line 342 "assoc_list.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_11_11));
#line 342 "assoc_list.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__FalseTail_10));
#line 342 "assoc_list.m"
                }
#line 341 "assoc_list.m"
              }
#line 337 "assoc_list.m"
          }
#line 336 "assoc_list.m"
      }
#line 336 "assoc_list.m"
      break;
#line 336 "assoc_list.m"
    }
#line 104 "assoc_list.m"
}

#line 97 "assoc_list.m"
MR_Word MR_CALL 
mercury__assoc_list__filter_2_f_0(
#line 97 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_7,
#line 97 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_8,
#line 97 "assoc_list.m"
  MR_Word mercury__assoc_list__P_4,
#line 97 "assoc_list.m"
  MR_Word mercury__assoc_list__List_5)
#line 97 "assoc_list.m"
{
#line 334 "assoc_list.m"
  {
#line 334 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;
#line 334 "assoc_list.m"
    MR_Word mercury__assoc_list__Trues_6;

#line 334 "assoc_list.m"
    {
#line 334 "assoc_list.m"
      mercury__assoc_list__filter_3_p_0(mercury__assoc_list__TypeInfo_for_K_7, mercury__assoc_list__TypeInfo_for_V_8, mercury__assoc_list__P_4, mercury__assoc_list__List_5, &mercury__assoc_list__Trues_6);
    }
#line 334 "assoc_list.m"
    return mercury__assoc_list__Trues_6;
#line 334 "assoc_list.m"
  }
#line 97 "assoc_list.m"
}

#line 95 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__filter_3_p_0(
#line 95 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_13,
#line 95 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_14,
#line 95 "assoc_list.m"
  MR_Word mercury__assoc_list__P_1,
#line 95 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 95 "assoc_list.m"
  MR_Word * mercury__assoc_list__HeadVar__3_3)
#line 95 "assoc_list.m"
{
#line 324 "assoc_list.m"
  while (MR_TRUE)
#line 324 "assoc_list.m"
    {
#line 324 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 324 "assoc_list.m"
      {
#line 324 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 324 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 324 "assoc_list.m"
          *mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 324 "assoc_list.m"
        else
#line 325 "assoc_list.m"
          {
#line 325 "assoc_list.m"
            MR_Box mercury__assoc_list__HK_6;
#line 325 "assoc_list.m"
            MR_Word mercury__assoc_list__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 325 "assoc_list.m"
            MR_Word mercury__assoc_list__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 325 "assoc_list.m"
            MR_Box mercury__assoc_list__HV_7;
#line 326 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box);

#line 325 "assoc_list.m"
            mercury__assoc_list__HK_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 0));
#line 325 "assoc_list.m"
            mercury__assoc_list__HV_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 1));
#line 326 "assoc_list.m"
            mercury__assoc_list__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));
#line 326 "assoc_list.m"
            {
#line 326 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__HK_6);
            }
#line 329 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 327 "assoc_list.m"
              {
#line 327 "assoc_list.m"
                MR_Word mercury__assoc_list__TrueTail_10;

#line 327 "assoc_list.m"
                {
#line 327 "assoc_list.m"
                  mercury__assoc_list__filter_3_p_0(mercury__assoc_list__TypeInfo_for_K_13, mercury__assoc_list__TypeInfo_for_V_14, mercury__assoc_list__P_1, mercury__assoc_list__T_8, &mercury__assoc_list__TrueTail_10);
                }
#line 328 "assoc_list.m"
                {
#line 328 "assoc_list.m"
                  MR_Word base;
#line 328 "assoc_list.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "assoc_list.m"
                  *mercury__assoc_list__HeadVar__3_3 = base;
#line 328 "assoc_list.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_11_11));
#line 328 "assoc_list.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__TrueTail_10));
#line 328 "assoc_list.m"
                }
#line 327 "assoc_list.m"
              }
#line 329 "assoc_list.m"
            else
#line 330 "assoc_list.m"
              {
#line 330 "assoc_list.m"
                /* direct tailcall eliminated */
#line 330 "assoc_list.m"
                {
#line 330 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__T_8;

#line 330 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 330 "assoc_list.m"
                }
#line 330 "assoc_list.m"
                continue;
#line 330 "assoc_list.m"
              }
#line 325 "assoc_list.m"
          }
#line 324 "assoc_list.m"
      }
#line 324 "assoc_list.m"
      break;
#line 324 "assoc_list.m"
    }
#line 95 "assoc_list.m"
}

#line 89 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__map_values_3_p_0(
#line 89 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_13,
#line 89 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_14,
#line 89 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_W_15,
#line 89 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__1_1,
#line 89 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 89 "assoc_list.m"
  MR_Word * mercury__assoc_list__HeadVar__3_3)
#line 89 "assoc_list.m"
{
#line 314 "assoc_list.m"
  {
#line 314 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;

#line 314 "assoc_list.m"
    if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 314 "assoc_list.m"
      *mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 314 "assoc_list.m"
    else
#line 315 "assoc_list.m"
      {
#line 315 "assoc_list.m"
        MR_Box mercury__assoc_list__K_6;
#line 315 "assoc_list.m"
        MR_Box mercury__assoc_list__V0_7;
#line 315 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 315 "assoc_list.m"
        MR_Box mercury__assoc_list__V_9;
#line 315 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs_10;
#line 315 "assoc_list.m"
        MR_Word mercury__assoc_list__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 315 "assoc_list.m"
        MR_Word mercury__assoc_list__V_12_12;
#line 316 "assoc_list.m"
        void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 315 "assoc_list.m"
        mercury__assoc_list__K_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 0));
#line 315 "assoc_list.m"
        mercury__assoc_list__V0_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 1));
#line 316 "assoc_list.m"
        mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
#line 316 "assoc_list.m"
        {
#line 316 "assoc_list.m"
          mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__HeadVar__1_1), mercury__assoc_list__K_6, mercury__assoc_list__V0_7, &mercury__assoc_list__V_9);
        }
#line 315 "assoc_list.m"
        {
#line 315 "assoc_list.m"
          mercury__assoc_list__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 315 "assoc_list.m"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 0) = mercury__assoc_list__K_6;
#line 315 "assoc_list.m"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 1) = mercury__assoc_list__V_9;
#line 315 "assoc_list.m"
        }
#line 317 "assoc_list.m"
        {
#line 317 "assoc_list.m"
          mercury__assoc_list__map_values_3_p_0(mercury__assoc_list__TypeInfo_for_K_13, mercury__assoc_list__TypeInfo_for_V_14, mercury__assoc_list__TypeInfo_for_W_15, mercury__assoc_list__HeadVar__1_1, mercury__assoc_list__KVs0_8, &mercury__assoc_list__KVs_10);
        }
#line 315 "assoc_list.m"
        {
#line 315 "assoc_list.m"
          MR_Word base;
#line 315 "assoc_list.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "assoc_list.m"
          *mercury__assoc_list__HeadVar__3_3 = base;
#line 315 "assoc_list.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_12_12));
#line 315 "assoc_list.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__KVs_10));
#line 315 "assoc_list.m"
        }
#line 315 "assoc_list.m"
      }
#line 314 "assoc_list.m"
  }
#line 89 "assoc_list.m"
}

#line 87 "assoc_list.m"
MR_Word MR_CALL 
mercury__assoc_list__map_values_2_f_0(
#line 87 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_13,
#line 87 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_14,
#line 87 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_W_15,
#line 87 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__1_1,
#line 87 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2)
#line 87 "assoc_list.m"
{
#line 319 "assoc_list.m"
  {
#line 319 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;
#line 319 "assoc_list.m"
    MR_Word mercury__assoc_list__HeadVar__3_3;

#line 319 "assoc_list.m"
    if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 319 "assoc_list.m"
      mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 319 "assoc_list.m"
    else
#line 320 "assoc_list.m"
      {
#line 320 "assoc_list.m"
        MR_Box mercury__assoc_list__K_6;
#line 320 "assoc_list.m"
        MR_Box mercury__assoc_list__V0_7;
#line 320 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 320 "assoc_list.m"
        MR_Box mercury__assoc_list__V_9;
#line 320 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs_10;
#line 320 "assoc_list.m"
        MR_Word mercury__assoc_list__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 320 "assoc_list.m"
        MR_Word mercury__assoc_list__V_12_12;
#line 321 "assoc_list.m"
        MR_Box MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box);

#line 320 "assoc_list.m"
        mercury__assoc_list__K_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 0));
#line 320 "assoc_list.m"
        mercury__assoc_list__V0_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 1));
#line 321 "assoc_list.m"
        mercury__assoc_list__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
#line 321 "assoc_list.m"
        {
#line 321 "assoc_list.m"
          mercury__assoc_list__V_9 = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__HeadVar__1_1), mercury__assoc_list__K_6, mercury__assoc_list__V0_7);
        }
#line 320 "assoc_list.m"
        {
#line 320 "assoc_list.m"
          mercury__assoc_list__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 320 "assoc_list.m"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 0) = mercury__assoc_list__K_6;
#line 320 "assoc_list.m"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 1) = mercury__assoc_list__V_9;
#line 320 "assoc_list.m"
        }
#line 322 "assoc_list.m"
        {
#line 322 "assoc_list.m"
          mercury__assoc_list__KVs_10 = mercury__assoc_list__map_values_2_f_0(mercury__assoc_list__TypeInfo_for_K_13, mercury__assoc_list__TypeInfo_for_V_14, mercury__assoc_list__TypeInfo_for_W_15, mercury__assoc_list__HeadVar__1_1, mercury__assoc_list__KVs0_8);
        }
#line 320 "assoc_list.m"
        {
#line 320 "assoc_list.m"
          mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "assoc_list.m"
          MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__3_3, 0) = ((MR_Box) (mercury__assoc_list__V_12_12));
#line 320 "assoc_list.m"
          MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__3_3, 1) = ((MR_Box) (mercury__assoc_list__KVs_10));
#line 320 "assoc_list.m"
        }
#line 320 "assoc_list.m"
      }
#line 319 "assoc_list.m"
    return mercury__assoc_list__HeadVar__3_3;
#line 319 "assoc_list.m"
  }
#line 87 "assoc_list.m"
}

#line 85 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__map_values_only_3_p_0(
#line 85 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_13,
#line 85 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_W_14,
#line 85 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_15,
#line 85 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__1_1,
#line 85 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 85 "assoc_list.m"
  MR_Word * mercury__assoc_list__HeadVar__3_3)
#line 85 "assoc_list.m"
{
#line 304 "assoc_list.m"
  {
#line 304 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;

#line 304 "assoc_list.m"
    if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 304 "assoc_list.m"
      *mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 304 "assoc_list.m"
    else
#line 305 "assoc_list.m"
      {
#line 305 "assoc_list.m"
        MR_Box mercury__assoc_list__K_6;
#line 305 "assoc_list.m"
        MR_Box mercury__assoc_list__V0_7;
#line 305 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 305 "assoc_list.m"
        MR_Box mercury__assoc_list__V_9;
#line 305 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs_10;
#line 305 "assoc_list.m"
        MR_Word mercury__assoc_list__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 305 "assoc_list.m"
        MR_Word mercury__assoc_list__V_12_12;
#line 306 "assoc_list.m"
        void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box *);

#line 305 "assoc_list.m"
        mercury__assoc_list__K_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 0));
#line 305 "assoc_list.m"
        mercury__assoc_list__V0_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 1));
#line 306 "assoc_list.m"
        mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
#line 306 "assoc_list.m"
        {
#line 306 "assoc_list.m"
          mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__HeadVar__1_1), mercury__assoc_list__V0_7, &mercury__assoc_list__V_9);
        }
#line 305 "assoc_list.m"
        {
#line 305 "assoc_list.m"
          mercury__assoc_list__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 305 "assoc_list.m"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 0) = mercury__assoc_list__K_6;
#line 305 "assoc_list.m"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 1) = mercury__assoc_list__V_9;
#line 305 "assoc_list.m"
        }
#line 307 "assoc_list.m"
        {
#line 307 "assoc_list.m"
          mercury__assoc_list__map_values_only_3_p_0(mercury__assoc_list__TypeInfo_for_V_13, mercury__assoc_list__TypeInfo_for_W_14, mercury__assoc_list__TypeInfo_for_K_15, mercury__assoc_list__HeadVar__1_1, mercury__assoc_list__KVs0_8, &mercury__assoc_list__KVs_10);
        }
#line 305 "assoc_list.m"
        {
#line 305 "assoc_list.m"
          MR_Word base;
#line 305 "assoc_list.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "assoc_list.m"
          *mercury__assoc_list__HeadVar__3_3 = base;
#line 305 "assoc_list.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_12_12));
#line 305 "assoc_list.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__KVs_10));
#line 305 "assoc_list.m"
        }
#line 305 "assoc_list.m"
      }
#line 304 "assoc_list.m"
  }
#line 85 "assoc_list.m"
}

#line 83 "assoc_list.m"
MR_Word MR_CALL 
mercury__assoc_list__map_values_only_2_f_0(
#line 83 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_13,
#line 83 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_W_14,
#line 83 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_15,
#line 83 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__1_1,
#line 83 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2)
#line 83 "assoc_list.m"
{
#line 309 "assoc_list.m"
  {
#line 309 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;
#line 309 "assoc_list.m"
    MR_Word mercury__assoc_list__HeadVar__3_3;

#line 309 "assoc_list.m"
    if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 309 "assoc_list.m"
      mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 309 "assoc_list.m"
    else
#line 310 "assoc_list.m"
      {
#line 310 "assoc_list.m"
        MR_Box mercury__assoc_list__K_6;
#line 310 "assoc_list.m"
        MR_Box mercury__assoc_list__V0_7;
#line 310 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 310 "assoc_list.m"
        MR_Box mercury__assoc_list__V_9;
#line 310 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs_10;
#line 310 "assoc_list.m"
        MR_Word mercury__assoc_list__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 310 "assoc_list.m"
        MR_Word mercury__assoc_list__V_12_12;
#line 311 "assoc_list.m"
        MR_Box MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box);

#line 310 "assoc_list.m"
        mercury__assoc_list__K_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 0));
#line 310 "assoc_list.m"
        mercury__assoc_list__V0_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 1));
#line 311 "assoc_list.m"
        mercury__assoc_list__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
#line 311 "assoc_list.m"
        {
#line 311 "assoc_list.m"
          mercury__assoc_list__V_9 = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__HeadVar__1_1), mercury__assoc_list__V0_7);
        }
#line 310 "assoc_list.m"
        {
#line 310 "assoc_list.m"
          mercury__assoc_list__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 310 "assoc_list.m"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 0) = mercury__assoc_list__K_6;
#line 310 "assoc_list.m"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 1) = mercury__assoc_list__V_9;
#line 310 "assoc_list.m"
        }
#line 312 "assoc_list.m"
        {
#line 312 "assoc_list.m"
          mercury__assoc_list__KVs_10 = mercury__assoc_list__map_values_only_2_f_0(mercury__assoc_list__TypeInfo_for_V_13, mercury__assoc_list__TypeInfo_for_W_14, mercury__assoc_list__TypeInfo_for_K_15, mercury__assoc_list__HeadVar__1_1, mercury__assoc_list__KVs0_8);
        }
#line 310 "assoc_list.m"
        {
#line 310 "assoc_list.m"
          mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "assoc_list.m"
          MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__3_3, 0) = ((MR_Box) (mercury__assoc_list__V_12_12));
#line 310 "assoc_list.m"
          MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__3_3, 1) = ((MR_Box) (mercury__assoc_list__KVs_10));
#line 310 "assoc_list.m"
        }
#line 310 "assoc_list.m"
      }
#line 309 "assoc_list.m"
    return mercury__assoc_list__HeadVar__3_3;
#line 309 "assoc_list.m"
  }
#line 83 "assoc_list.m"
}

#line 81 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__map_keys_only_3_p_0(
#line 81 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_13,
#line 81 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_L_14,
#line 81 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_15,
#line 81 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__1_1,
#line 81 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2,
#line 81 "assoc_list.m"
  MR_Word * mercury__assoc_list__HeadVar__3_3)
#line 81 "assoc_list.m"
{
#line 294 "assoc_list.m"
  {
#line 294 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;

#line 294 "assoc_list.m"
    if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 294 "assoc_list.m"
      *mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 294 "assoc_list.m"
    else
#line 295 "assoc_list.m"
      {
#line 295 "assoc_list.m"
        MR_Box mercury__assoc_list__K0_6;
#line 295 "assoc_list.m"
        MR_Box mercury__assoc_list__V_7;
#line 295 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 295 "assoc_list.m"
        MR_Box mercury__assoc_list__K_9;
#line 295 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs_10;
#line 295 "assoc_list.m"
        MR_Word mercury__assoc_list__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 295 "assoc_list.m"
        MR_Word mercury__assoc_list__V_12_12;
#line 296 "assoc_list.m"
        void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box *);

#line 295 "assoc_list.m"
        mercury__assoc_list__K0_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 0));
#line 295 "assoc_list.m"
        mercury__assoc_list__V_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 1));
#line 296 "assoc_list.m"
        mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
#line 296 "assoc_list.m"
        {
#line 296 "assoc_list.m"
          mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__HeadVar__1_1), mercury__assoc_list__K0_6, &mercury__assoc_list__K_9);
        }
#line 295 "assoc_list.m"
        {
#line 295 "assoc_list.m"
          mercury__assoc_list__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 295 "assoc_list.m"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 0) = mercury__assoc_list__K_9;
#line 295 "assoc_list.m"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 1) = mercury__assoc_list__V_7;
#line 295 "assoc_list.m"
        }
#line 297 "assoc_list.m"
        {
#line 297 "assoc_list.m"
          mercury__assoc_list__map_keys_only_3_p_0(mercury__assoc_list__TypeInfo_for_K_13, mercury__assoc_list__TypeInfo_for_L_14, mercury__assoc_list__TypeInfo_for_V_15, mercury__assoc_list__HeadVar__1_1, mercury__assoc_list__KVs0_8, &mercury__assoc_list__KVs_10);
        }
#line 295 "assoc_list.m"
        {
#line 295 "assoc_list.m"
          MR_Word base;
#line 295 "assoc_list.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "assoc_list.m"
          *mercury__assoc_list__HeadVar__3_3 = base;
#line 295 "assoc_list.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_12_12));
#line 295 "assoc_list.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__KVs_10));
#line 295 "assoc_list.m"
        }
#line 295 "assoc_list.m"
      }
#line 294 "assoc_list.m"
  }
#line 81 "assoc_list.m"
}

#line 79 "assoc_list.m"
MR_Word MR_CALL 
mercury__assoc_list__map_keys_only_2_f_0(
#line 79 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_13,
#line 79 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_L_14,
#line 79 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_15,
#line 79 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__1_1,
#line 79 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__2_2)
#line 79 "assoc_list.m"
{
#line 299 "assoc_list.m"
  {
#line 299 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;
#line 299 "assoc_list.m"
    MR_Word mercury__assoc_list__HeadVar__3_3;

#line 299 "assoc_list.m"
    if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 299 "assoc_list.m"
      mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 299 "assoc_list.m"
    else
#line 300 "assoc_list.m"
      {
#line 300 "assoc_list.m"
        MR_Box mercury__assoc_list__K0_6;
#line 300 "assoc_list.m"
        MR_Box mercury__assoc_list__V_7;
#line 300 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 300 "assoc_list.m"
        MR_Box mercury__assoc_list__K_9;
#line 300 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs_10;
#line 300 "assoc_list.m"
        MR_Word mercury__assoc_list__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 300 "assoc_list.m"
        MR_Word mercury__assoc_list__V_12_12;
#line 301 "assoc_list.m"
        MR_Box MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box);

#line 300 "assoc_list.m"
        mercury__assoc_list__K0_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 0));
#line 300 "assoc_list.m"
        mercury__assoc_list__V_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 1));
#line 301 "assoc_list.m"
        mercury__assoc_list__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
#line 301 "assoc_list.m"
        {
#line 301 "assoc_list.m"
          mercury__assoc_list__K_9 = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__HeadVar__1_1), mercury__assoc_list__K0_6);
        }
#line 300 "assoc_list.m"
        {
#line 300 "assoc_list.m"
          mercury__assoc_list__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 300 "assoc_list.m"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 0) = mercury__assoc_list__K_9;
#line 300 "assoc_list.m"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 1) = mercury__assoc_list__V_7;
#line 300 "assoc_list.m"
        }
#line 302 "assoc_list.m"
        {
#line 302 "assoc_list.m"
          mercury__assoc_list__KVs_10 = mercury__assoc_list__map_keys_only_2_f_0(mercury__assoc_list__TypeInfo_for_K_13, mercury__assoc_list__TypeInfo_for_L_14, mercury__assoc_list__TypeInfo_for_V_15, mercury__assoc_list__HeadVar__1_1, mercury__assoc_list__KVs0_8);
        }
#line 300 "assoc_list.m"
        {
#line 300 "assoc_list.m"
          mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "assoc_list.m"
          MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__3_3, 0) = ((MR_Box) (mercury__assoc_list__V_12_12));
#line 300 "assoc_list.m"
          MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__3_3, 1) = ((MR_Box) (mercury__assoc_list__KVs_10));
#line 300 "assoc_list.m"
        }
#line 300 "assoc_list.m"
      }
#line 299 "assoc_list.m"
    return mercury__assoc_list__HeadVar__3_3;
#line 299 "assoc_list.m"
  }
#line 79 "assoc_list.m"
}

#line 76 "assoc_list.m"
MR_bool MR_CALL 
mercury__assoc_list__remove_4_p_0(
#line 76 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_14,
#line 76 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_15,
#line 76 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__1_1,
#line 76 "assoc_list.m"
  MR_Box mercury__assoc_list__Key_8,
#line 76 "assoc_list.m"
  MR_Box * mercury__assoc_list__Value_9,
#line 76 "assoc_list.m"
  MR_Word * mercury__assoc_list__Rest_10)
#line 76 "assoc_list.m"
{
#line 285 "assoc_list.m"
  {
#line 285 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded = ((MR_tag((MR_Word) mercury__assoc_list__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 285 "assoc_list.m"
    MR_Box mercury__assoc_list__K_5;
#line 285 "assoc_list.m"
    MR_Box mercury__assoc_list__V_6;
#line 285 "assoc_list.m"
    MR_Word mercury__assoc_list__KVs_7;
#line 285 "assoc_list.m"
    MR_Word mercury__assoc_list__V_12_12;

#line 285 "assoc_list.m"
    if (mercury__assoc_list__succeeded)
#line 285 "assoc_list.m"
      {
#line 285 "assoc_list.m"
        mercury__assoc_list__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 0)));
#line 285 "assoc_list.m"
        mercury__assoc_list__KVs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
#line 285 "assoc_list.m"
        mercury__assoc_list__K_5 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, (MR_Integer) 0));
#line 285 "assoc_list.m"
        mercury__assoc_list__V_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, (MR_Integer) 1));
#line 286 "assoc_list.m"
        {
#line 286 "assoc_list.m"
          mercury__assoc_list__succeeded = mercury__builtin__unify_2_p_0(mercury__assoc_list__TypeInfo_for_K_14, mercury__assoc_list__K_5, mercury__assoc_list__Key_8);
        }
#line 289 "assoc_list.m"
        if (mercury__assoc_list__succeeded)
#line 287 "assoc_list.m"
          {
#line 287 "assoc_list.m"
            *mercury__assoc_list__Value_9 = mercury__assoc_list__V_6;
#line 288 "assoc_list.m"
            *mercury__assoc_list__Rest_10 = mercury__assoc_list__KVs_7;
#line 287 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 287 "assoc_list.m"
          }
#line 289 "assoc_list.m"
        else
#line 290 "assoc_list.m"
          {
#line 290 "assoc_list.m"
            MR_Word mercury__assoc_list__Rest1_11;

#line 290 "assoc_list.m"
            {
#line 290 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__remove_4_p_0(mercury__assoc_list__TypeInfo_for_K_14, mercury__assoc_list__TypeInfo_for_V_15, mercury__assoc_list__KVs_7, mercury__assoc_list__Key_8, mercury__assoc_list__Value_9, &mercury__assoc_list__Rest1_11);
            }
#line 290 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 290 "assoc_list.m"
              {
#line 291 "assoc_list.m"
                {
#line 291 "assoc_list.m"
                  MR_Word base;
#line 291 "assoc_list.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "assoc_list.m"
                  *mercury__assoc_list__Rest_10 = base;
#line 291 "assoc_list.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_12_12));
#line 291 "assoc_list.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__Rest1_11));
#line 291 "assoc_list.m"
                }
#line 291 "assoc_list.m"
                mercury__assoc_list__succeeded = MR_TRUE;
#line 290 "assoc_list.m"
              }
#line 290 "assoc_list.m"
          }
#line 285 "assoc_list.m"
      }
#line 285 "assoc_list.m"
    return mercury__assoc_list__succeeded;
#line 285 "assoc_list.m"
  }
#line 76 "assoc_list.m"
}

#line 70 "assoc_list.m"
MR_Box MR_CALL 
mercury__assoc_list__det_elem_2_f_0(
#line 70 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_9,
#line 70 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_10,
#line 70 "assoc_list.m"
  MR_Box mercury__assoc_list__K_5,
#line 70 "assoc_list.m"
  MR_Word mercury__assoc_list__AL_4)
#line 70 "assoc_list.m"
{
#line 282 "assoc_list.m"
  {
#line 282 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;
#line 282 "assoc_list.m"
    MR_Box mercury__assoc_list__V_6;
#line 282 "assoc_list.m"
    MR_Box mercury__assoc_list__V0_7;

#line 280 "assoc_list.m"
    {
#line 280 "assoc_list.m"
      mercury__assoc_list__succeeded = mercury__assoc_list__search_3_p_0(mercury__assoc_list__TypeInfo_for_K_9, mercury__assoc_list__TypeInfo_for_V_10, mercury__assoc_list__AL_4, mercury__assoc_list__K_5, &mercury__assoc_list__V0_7);
    }
#line 282 "assoc_list.m"
    if (mercury__assoc_list__succeeded)
#line 281 "assoc_list.m"
      mercury__assoc_list__V_6 = mercury__assoc_list__V0_7;
#line 282 "assoc_list.m"
    else
#line 282 "assoc_list.m"
      {
#line 282 "assoc_list.m"
        {
#line 282 "assoc_list.m"
          mercury__require__report_lookup_error_2_p_0(mercury__assoc_list__TypeInfo_for_K_9, (MR_String) "assoc_list.det_elem: key not found", mercury__assoc_list__K_5);
        }
#line 282 "assoc_list.m"
      }
#line 282 "assoc_list.m"
    return mercury__assoc_list__V_6;
#line 282 "assoc_list.m"
  }
#line 70 "assoc_list.m"
}

#line 65 "assoc_list.m"
MR_bool MR_CALL 
mercury__assoc_list__elem_2_f_0(
#line 65 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_7,
#line 65 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_8,
#line 65 "assoc_list.m"
  MR_Box mercury__assoc_list__K_5,
#line 65 "assoc_list.m"
  MR_Word mercury__assoc_list__AL_4,
#line 65 "assoc_list.m"
  MR_Box * mercury__assoc_list__V_6)
#line 65 "assoc_list.m"
{
#line 277 "assoc_list.m"
  {
#line 277 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;

#line 277 "assoc_list.m"
    {
#line 277 "assoc_list.m"
      return mercury__assoc_list__succeeded = mercury__assoc_list__search_3_p_0(mercury__assoc_list__TypeInfo_for_K_7, mercury__assoc_list__TypeInfo_for_V_8, mercury__assoc_list__AL_4, mercury__assoc_list__K_5, mercury__assoc_list__V_6);
    }
#line 277 "assoc_list.m"
    return mercury__assoc_list__succeeded;
#line 277 "assoc_list.m"
  }
#line 65 "assoc_list.m"
}

#line 61 "assoc_list.m"
MR_bool MR_CALL 
mercury__assoc_list__search_3_p_0(
#line 61 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_10,
#line 61 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_11,
#line 61 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__1_1,
#line 61 "assoc_list.m"
  MR_Box mercury__assoc_list__Key_7,
#line 61 "assoc_list.m"
  MR_Box * mercury__assoc_list__Value_8)
#line 61 "assoc_list.m"
{
#line 269 "assoc_list.m"
  while (MR_TRUE)
#line 269 "assoc_list.m"
    {
#line 269 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 269 "assoc_list.m"
      {
#line 269 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded = ((MR_tag((MR_Word) mercury__assoc_list__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 269 "assoc_list.m"
        MR_Box mercury__assoc_list__K_4;
#line 269 "assoc_list.m"
        MR_Box mercury__assoc_list__V_5;
#line 269 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs_6;
#line 269 "assoc_list.m"
        MR_Word mercury__assoc_list__V_9_9;

#line 269 "assoc_list.m"
        if (mercury__assoc_list__succeeded)
#line 269 "assoc_list.m"
          {
#line 269 "assoc_list.m"
            mercury__assoc_list__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 0)));
#line 269 "assoc_list.m"
            mercury__assoc_list__KVs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
#line 269 "assoc_list.m"
            mercury__assoc_list__K_4 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_9_9, (MR_Integer) 0));
#line 269 "assoc_list.m"
            mercury__assoc_list__V_5 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_9_9, (MR_Integer) 1));
#line 270 "assoc_list.m"
            {
#line 270 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__builtin__unify_2_p_0(mercury__assoc_list__TypeInfo_for_K_10, mercury__assoc_list__K_4, mercury__assoc_list__Key_7);
            }
#line 272 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 271 "assoc_list.m"
              {
#line 271 "assoc_list.m"
                *mercury__assoc_list__Value_8 = mercury__assoc_list__V_5;
#line 271 "assoc_list.m"
                mercury__assoc_list__succeeded = MR_TRUE;
#line 271 "assoc_list.m"
              }
#line 272 "assoc_list.m"
            else
#line 273 "assoc_list.m"
              {
#line 273 "assoc_list.m"
                /* direct tailcall eliminated */
#line 273 "assoc_list.m"
                {
#line 273 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__1__tmp_copy_1 = mercury__assoc_list__KVs_6;

#line 273 "assoc_list.m"
                  mercury__assoc_list__HeadVar__1_1 = mercury__assoc_list__HeadVar__1__tmp_copy_1;
#line 273 "assoc_list.m"
                }
#line 273 "assoc_list.m"
                continue;
#line 273 "assoc_list.m"
              }
#line 269 "assoc_list.m"
          }
#line 269 "assoc_list.m"
        return mercury__assoc_list__succeeded;
#line 269 "assoc_list.m"
      }
#line 269 "assoc_list.m"
      break;
#line 269 "assoc_list.m"
    }
#line 61 "assoc_list.m"
}

#line 55 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__keys_and_values_3_p_0(
#line 55 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_10,
#line 55 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_11,
#line 55 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__1_1,
#line 55 "assoc_list.m"
  MR_Word * mercury__assoc_list__HeadVar__2_2,
#line 55 "assoc_list.m"
  MR_Word * mercury__assoc_list__HeadVar__3_3)
#line 55 "assoc_list.m"
{
#line 265 "assoc_list.m"
  {
#line 265 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;

#line 265 "assoc_list.m"
    if ((mercury__assoc_list__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 265 "assoc_list.m"
      {
#line 265 "assoc_list.m"
        *mercury__assoc_list__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 265 "assoc_list.m"
        *mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 265 "assoc_list.m"
      }
#line 265 "assoc_list.m"
    else
#line 266 "assoc_list.m"
      {
#line 266 "assoc_list.m"
        MR_Box mercury__assoc_list__K_4;
#line 266 "assoc_list.m"
        MR_Box mercury__assoc_list__V_5;
#line 266 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
#line 266 "assoc_list.m"
        MR_Word mercury__assoc_list__Ks_7;
#line 266 "assoc_list.m"
        MR_Word mercury__assoc_list__Vs_8;
#line 266 "assoc_list.m"
        MR_Word mercury__assoc_list__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 0)));

#line 266 "assoc_list.m"
        mercury__assoc_list__K_4 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_9_9, (MR_Integer) 0));
#line 266 "assoc_list.m"
        mercury__assoc_list__V_5 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_9_9, (MR_Integer) 1));
#line 267 "assoc_list.m"
        {
#line 267 "assoc_list.m"
          mercury__assoc_list__keys_and_values_3_p_0(mercury__assoc_list__TypeInfo_for_K_10, mercury__assoc_list__TypeInfo_for_V_11, mercury__assoc_list__KVs_6, &mercury__assoc_list__Ks_7, &mercury__assoc_list__Vs_8);
        }
#line 266 "assoc_list.m"
        {
#line 266 "assoc_list.m"
          MR_Word base;
#line 266 "assoc_list.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "assoc_list.m"
          *mercury__assoc_list__HeadVar__2_2 = base;
#line 266 "assoc_list.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__assoc_list__K_4;
#line 266 "assoc_list.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__Ks_7));
#line 266 "assoc_list.m"
        }
#line 266 "assoc_list.m"
        {
#line 266 "assoc_list.m"
          MR_Word base;
#line 266 "assoc_list.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "assoc_list.m"
          *mercury__assoc_list__HeadVar__3_3 = base;
#line 266 "assoc_list.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__assoc_list__V_5;
#line 266 "assoc_list.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__Vs_8));
#line 266 "assoc_list.m"
        }
#line 266 "assoc_list.m"
      }
#line 265 "assoc_list.m"
  }
#line 55 "assoc_list.m"
}

#line 50 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__values_2_p_0(
#line 50 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_8,
#line 50 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_9,
#line 50 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__1_1,
#line 50 "assoc_list.m"
  MR_Word * mercury__assoc_list__HeadVar__2_2)
#line 50 "assoc_list.m"
{
#line 261 "assoc_list.m"
  {
#line 261 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;

#line 261 "assoc_list.m"
    if ((mercury__assoc_list__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 261 "assoc_list.m"
      *mercury__assoc_list__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 261 "assoc_list.m"
    else
#line 262 "assoc_list.m"
      {
#line 262 "assoc_list.m"
        MR_Box mercury__assoc_list__V_4;
#line 262 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
#line 262 "assoc_list.m"
        MR_Word mercury__assoc_list__Vs_6;
#line 262 "assoc_list.m"
        MR_Word mercury__assoc_list__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 0)));
#line 262 "assoc_list.m"
        MR_Box mercury__assoc_list__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_7_7, (MR_Integer) 0));

#line 262 "assoc_list.m"
        mercury__assoc_list__V_4 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_7_7, (MR_Integer) 1));
#line 263 "assoc_list.m"
        {
#line 263 "assoc_list.m"
          mercury__assoc_list__values_2_p_0(mercury__assoc_list__TypeInfo_for_K_8, mercury__assoc_list__TypeInfo_for_V_9, mercury__assoc_list__KVs_5, &mercury__assoc_list__Vs_6);
        }
#line 262 "assoc_list.m"
        {
#line 262 "assoc_list.m"
          MR_Word base;
#line 262 "assoc_list.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "assoc_list.m"
          *mercury__assoc_list__HeadVar__2_2 = base;
#line 262 "assoc_list.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__assoc_list__V_4;
#line 262 "assoc_list.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__Vs_6));
#line 262 "assoc_list.m"
        }
#line 262 "assoc_list.m"
      }
#line 261 "assoc_list.m"
  }
#line 50 "assoc_list.m"
}

#line 49 "assoc_list.m"
MR_Word MR_CALL 
mercury__assoc_list__values_1_f_0(
#line 49 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_5,
#line 49 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_6,
#line 49 "assoc_list.m"
  MR_Word mercury__assoc_list__AL_3)
#line 49 "assoc_list.m"
{
#line 259 "assoc_list.m"
  {
#line 259 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;
#line 259 "assoc_list.m"
    MR_Word mercury__assoc_list__Vs_4;

#line 259 "assoc_list.m"
    {
#line 259 "assoc_list.m"
      mercury__assoc_list__values_2_p_0(mercury__assoc_list__TypeInfo_for_K_5, mercury__assoc_list__TypeInfo_for_V_6, mercury__assoc_list__AL_3, &mercury__assoc_list__Vs_4);
    }
#line 259 "assoc_list.m"
    return mercury__assoc_list__Vs_4;
#line 259 "assoc_list.m"
  }
#line 49 "assoc_list.m"
}

#line 45 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__keys_2_p_0(
#line 45 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_8,
#line 45 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_9,
#line 45 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__1_1,
#line 45 "assoc_list.m"
  MR_Word * mercury__assoc_list__HeadVar__2_2)
#line 45 "assoc_list.m"
{
#line 254 "assoc_list.m"
  {
#line 254 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;

#line 254 "assoc_list.m"
    if ((mercury__assoc_list__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 254 "assoc_list.m"
      *mercury__assoc_list__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 254 "assoc_list.m"
    else
#line 255 "assoc_list.m"
      {
#line 255 "assoc_list.m"
        MR_Box mercury__assoc_list__K_3;
#line 255 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
#line 255 "assoc_list.m"
        MR_Word mercury__assoc_list__Ks_6;
#line 255 "assoc_list.m"
        MR_Word mercury__assoc_list__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 0)));
#line 255 "assoc_list.m"
        MR_Box mercury__assoc_list__V_4_4;

#line 255 "assoc_list.m"
        mercury__assoc_list__K_3 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_7_7, (MR_Integer) 0));
#line 255 "assoc_list.m"
        mercury__assoc_list__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_7_7, (MR_Integer) 1));
#line 256 "assoc_list.m"
        {
#line 256 "assoc_list.m"
          mercury__assoc_list__keys_2_p_0(mercury__assoc_list__TypeInfo_for_K_8, mercury__assoc_list__TypeInfo_for_V_9, mercury__assoc_list__KVs_5, &mercury__assoc_list__Ks_6);
        }
#line 255 "assoc_list.m"
        {
#line 255 "assoc_list.m"
          MR_Word base;
#line 255 "assoc_list.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "assoc_list.m"
          *mercury__assoc_list__HeadVar__2_2 = base;
#line 255 "assoc_list.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__assoc_list__K_3;
#line 255 "assoc_list.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__Ks_6));
#line 255 "assoc_list.m"
        }
#line 255 "assoc_list.m"
      }
#line 254 "assoc_list.m"
  }
#line 45 "assoc_list.m"
}

#line 44 "assoc_list.m"
MR_Word MR_CALL 
mercury__assoc_list__keys_1_f_0(
#line 44 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_5,
#line 44 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_6,
#line 44 "assoc_list.m"
  MR_Word mercury__assoc_list__AL_3)
#line 44 "assoc_list.m"
{
#line 252 "assoc_list.m"
  {
#line 252 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;
#line 252 "assoc_list.m"
    MR_Word mercury__assoc_list__Ks_4;

#line 252 "assoc_list.m"
    {
#line 252 "assoc_list.m"
      mercury__assoc_list__keys_2_p_0(mercury__assoc_list__TypeInfo_for_K_5, mercury__assoc_list__TypeInfo_for_V_6, mercury__assoc_list__AL_3, &mercury__assoc_list__Ks_4);
    }
#line 252 "assoc_list.m"
    return mercury__assoc_list__Ks_4;
#line 252 "assoc_list.m"
  }
#line 44 "assoc_list.m"
}

#line 39 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__from_corresponding_lists_3_p_0(
#line 39 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_31,
#line 39 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_32,
#line 39 "assoc_list.m"
  MR_Word mercury__assoc_list__Ks_4,
#line 39 "assoc_list.m"
  MR_Word mercury__assoc_list__Vs_5,
#line 39 "assoc_list.m"
  MR_Word * mercury__assoc_list__KVs_6)
#line 39 "assoc_list.m"
{
#line 228 "assoc_list.m"
  {
#line 228 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;
#line 228 "assoc_list.m"
    MR_Word mercury__assoc_list__KVs0_7;

#line 226 "assoc_list.m"
    {
#line 226 "assoc_list.m"
      mercury__assoc_list__succeeded = mercury__assoc_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__assoc_list__Ks_4, mercury__assoc_list__Vs_5, &mercury__assoc_list__KVs0_7);
    }
#line 228 "assoc_list.m"
    if (mercury__assoc_list__succeeded)
#line 227 "assoc_list.m"
      *mercury__assoc_list__KVs_6 = mercury__assoc_list__KVs0_7;
#line 228 "assoc_list.m"
    else
#line 229 "assoc_list.m"
      {
#line 229 "assoc_list.m"
        MR_Word mercury__assoc_list__TypeCtorInfo_33_33 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 229 "assoc_list.m"
        MR_Word mercury__assoc_list__TypeInfo_34_34;
#line 229 "assoc_list.m"
        MR_Word mercury__assoc_list__TypeInfo_35_35;
#line 229 "assoc_list.m"
        MR_String mercury__assoc_list__KeyType_8;
#line 229 "assoc_list.m"
        MR_Integer mercury__assoc_list__KeyLength_9;
#line 229 "assoc_list.m"
        MR_String mercury__assoc_list__KeyLengthString_10;
#line 229 "assoc_list.m"
        MR_String mercury__assoc_list__ValueType_11;
#line 229 "assoc_list.m"
        MR_Integer mercury__assoc_list__ValueLength_12;
#line 229 "assoc_list.m"
        MR_String mercury__assoc_list__ValueLengthString_13;
#line 229 "assoc_list.m"
        MR_String mercury__assoc_list__ErrorString_14;
#line 229 "assoc_list.m"
        MR_Word mercury__assoc_list__V_15_15;
#line 229 "assoc_list.m"
        MR_Word mercury__assoc_list__V_16_16;
#line 229 "assoc_list.m"
        MR_String mercury__assoc_list__V_18_18;
#line 229 "assoc_list.m"
        MR_String mercury__assoc_list__V_20_20;
#line 229 "assoc_list.m"
        MR_String mercury__assoc_list__V_22_22;
#line 229 "assoc_list.m"
        MR_String mercury__assoc_list__V_23_23;
#line 229 "assoc_list.m"
        MR_String mercury__assoc_list__V_25_25;
#line 229 "assoc_list.m"
        MR_String mercury__assoc_list__V_26_26;
#line 229 "assoc_list.m"
        MR_String mercury__assoc_list__V_28_28;
#line 229 "assoc_list.m"
        MR_String mercury__assoc_list__V_29_29;
#line 56 "type_desc.opt"
        MR_Word mercury__assoc_list__V_36_36;
#line 56 "type_desc.opt"
        MR_Word mercury__assoc_list__V_37_37;

#line 6594 "assoc_list.c"
        {
#line 6596 "assoc_list.c"
          mercury__assoc_list__TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6598 "assoc_list.c"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_34_34, 0) = ((MR_Box) (mercury__assoc_list__TypeCtorInfo_33_33));
#line 6600 "assoc_list.c"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_34_34, 1) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_K_31));
#line 6602 "assoc_list.c"
        }
#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__assoc_list__from_corresponding_lists_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__assoc_list__TypeInfo_34_34 ;
		{
#line 56 "type_desc.opt"
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
#line 6630 "assoc_list.c"

		;}
#undef MR_PROC_LABEL
	 mercury__assoc_list__V_15_15  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 229 "assoc_list.m"
        {
#line 229 "assoc_list.m"
          mercury__assoc_list__KeyType_8 = mercury__type_desc__type_name_1_f_0(mercury__assoc_list__V_15_15);
        }
#line 78 "list.opt"
        {
#line 78 "list.opt"
          mercury__list__length_2_3_p_0(mercury__assoc_list__TypeInfo_for_K_31, mercury__assoc_list__Ks_4, (MR_Integer) 0, &mercury__assoc_list__KeyLength_9);
        }
#line 705 "string.opt"
        {
#line 705 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__assoc_list__KeyLength_9, (MR_Integer) 10, &mercury__assoc_list__KeyLengthString_10);
        }
#line 6652 "assoc_list.c"
        {
#line 6654 "assoc_list.c"
          mercury__assoc_list__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6656 "assoc_list.c"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_35_35, 0) = ((MR_Box) (mercury__assoc_list__TypeCtorInfo_33_33));
#line 6658 "assoc_list.c"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_35_35, 1) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_V_32));
#line 6660 "assoc_list.c"
        }
#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__assoc_list__from_corresponding_lists_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__assoc_list__TypeInfo_35_35 ;
		{
#line 56 "type_desc.opt"
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
#line 6688 "assoc_list.c"

		;}
#undef MR_PROC_LABEL
	 mercury__assoc_list__V_16_16  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 232 "assoc_list.m"
        {
#line 232 "assoc_list.m"
          mercury__assoc_list__ValueType_11 = mercury__type_desc__type_name_1_f_0(mercury__assoc_list__V_16_16);
        }
#line 78 "list.opt"
        {
#line 78 "list.opt"
          mercury__list__length_2_3_p_0(mercury__assoc_list__TypeInfo_for_V_32, mercury__assoc_list__Vs_5, (MR_Integer) 0, &mercury__assoc_list__ValueLength_12);
        }
#line 705 "string.opt"
        {
#line 705 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__assoc_list__ValueLength_12, (MR_Integer) 10, &mercury__assoc_list__ValueLengthString_13);
        }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2((MR_String) "\n\tValue list length: ", mercury__assoc_list__ValueLengthString_13, &mercury__assoc_list__V_29_29);
        }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2(mercury__assoc_list__ValueType_11, mercury__assoc_list__V_29_29, &mercury__assoc_list__V_28_28);
        }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2((MR_String) "\n\tValue list type: ", mercury__assoc_list__V_28_28, &mercury__assoc_list__V_26_26);
        }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2(mercury__assoc_list__KeyLengthString_10, mercury__assoc_list__V_26_26, &mercury__assoc_list__V_25_25);
        }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2((MR_String) "\n\tKey list length: ", mercury__assoc_list__V_25_25, &mercury__assoc_list__V_23_23);
        }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2(mercury__assoc_list__KeyType_8, mercury__assoc_list__V_23_23, &mercury__assoc_list__V_22_22);
        }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2((MR_String) "\tKey list type: ", mercury__assoc_list__V_22_22, &mercury__assoc_list__V_20_20);
        }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2((MR_String) "lists have different lengths.\n", mercury__assoc_list__V_20_20, &mercury__assoc_list__V_18_18);
        }
#line 236 "assoc_list.m"
        {
#line 236 "assoc_list.m"
          mercury__assoc_list__ErrorString_14 = mercury__string__f_43_43_2_f_0((MR_String) "assoc_list.from_corresponding_lists: ", mercury__assoc_list__V_18_18);
        }
#line 241 "assoc_list.m"
        {
#line 241 "assoc_list.m"
          mercury__require__error_1_p_0(mercury__assoc_list__ErrorString_14);
#line 241 "assoc_list.m"
          return;
        }
#line 229 "assoc_list.m"
      }
#line 228 "assoc_list.m"
  }
#line 39 "assoc_list.m"
}

#line 38 "assoc_list.m"
MR_Word MR_CALL 
mercury__assoc_list__from_corresponding_lists_2_f_0(
#line 38 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_7,
#line 38 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_8,
#line 38 "assoc_list.m"
  MR_Word mercury__assoc_list__Ks_4,
#line 38 "assoc_list.m"
  MR_Word mercury__assoc_list__Vs_5)
#line 38 "assoc_list.m"
{
#line 223 "assoc_list.m"
  {
#line 223 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;
#line 223 "assoc_list.m"
    MR_Word mercury__assoc_list__AL_6;

#line 223 "assoc_list.m"
    {
#line 223 "assoc_list.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__assoc_list__TypeInfo_for_K_7, mercury__assoc_list__TypeInfo_for_V_8, mercury__assoc_list__Ks_4, mercury__assoc_list__Vs_5, &mercury__assoc_list__AL_6);
    }
#line 223 "assoc_list.m"
    return mercury__assoc_list__AL_6;
#line 223 "assoc_list.m"
  }
#line 38 "assoc_list.m"
}

#line 34 "assoc_list.m"
void MR_CALL 
mercury__assoc_list__reverse_members_2_p_0(
#line 34 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_9,
#line 34 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_10,
#line 34 "assoc_list.m"
  MR_Word mercury__assoc_list__HeadVar__1_1,
#line 34 "assoc_list.m"
  MR_Word * mercury__assoc_list__HeadVar__2_2)
#line 34 "assoc_list.m"
{
#line 218 "assoc_list.m"
  {
#line 218 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;

#line 218 "assoc_list.m"
    if ((mercury__assoc_list__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 218 "assoc_list.m"
      *mercury__assoc_list__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 218 "assoc_list.m"
    else
#line 219 "assoc_list.m"
      {
#line 219 "assoc_list.m"
        MR_Box mercury__assoc_list__K_3;
#line 219 "assoc_list.m"
        MR_Box mercury__assoc_list__V_4;
#line 219 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
#line 219 "assoc_list.m"
        MR_Word mercury__assoc_list__VKs_6;
#line 219 "assoc_list.m"
        MR_Word mercury__assoc_list__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 0)));
#line 219 "assoc_list.m"
        MR_Word mercury__assoc_list__V_8_8;

#line 219 "assoc_list.m"
        mercury__assoc_list__K_3 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_7_7, (MR_Integer) 0));
#line 219 "assoc_list.m"
        mercury__assoc_list__V_4 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_7_7, (MR_Integer) 1));
#line 219 "assoc_list.m"
        {
#line 219 "assoc_list.m"
          mercury__assoc_list__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 219 "assoc_list.m"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_8_8, 0) = mercury__assoc_list__V_4;
#line 219 "assoc_list.m"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_8_8, 1) = mercury__assoc_list__K_3;
#line 219 "assoc_list.m"
        }
#line 220 "assoc_list.m"
        {
#line 220 "assoc_list.m"
          mercury__assoc_list__reverse_members_2_p_0(mercury__assoc_list__TypeInfo_for_K_9, mercury__assoc_list__TypeInfo_for_V_10, mercury__assoc_list__KVs_5, &mercury__assoc_list__VKs_6);
        }
#line 219 "assoc_list.m"
        {
#line 219 "assoc_list.m"
          MR_Word base;
#line 219 "assoc_list.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "assoc_list.m"
          *mercury__assoc_list__HeadVar__2_2 = base;
#line 219 "assoc_list.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_8_8));
#line 219 "assoc_list.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__VKs_6));
#line 219 "assoc_list.m"
        }
#line 219 "assoc_list.m"
      }
#line 218 "assoc_list.m"
  }
#line 34 "assoc_list.m"
}

#line 33 "assoc_list.m"
MR_Word MR_CALL 
mercury__assoc_list__reverse_members_1_f_0(
#line 33 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_K_5,
#line 33 "assoc_list.m"
  MR_Word mercury__assoc_list__TypeInfo_for_V_6,
#line 33 "assoc_list.m"
  MR_Word mercury__assoc_list__AL1_3)
#line 33 "assoc_list.m"
{
#line 216 "assoc_list.m"
  {
#line 216 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;
#line 216 "assoc_list.m"
    MR_Word mercury__assoc_list__AL2_4;

#line 216 "assoc_list.m"
    {
#line 216 "assoc_list.m"
      mercury__assoc_list__reverse_members_2_p_0(mercury__assoc_list__TypeInfo_for_K_5, mercury__assoc_list__TypeInfo_for_V_6, mercury__assoc_list__AL1_3, &mercury__assoc_list__AL2_4);
    }
#line 216 "assoc_list.m"
    return mercury__assoc_list__AL2_4;
#line 216 "assoc_list.m"
  }
#line 33 "assoc_list.m"
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
