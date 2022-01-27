/*
** Automatically generated from `assoc_list.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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
#line 398 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl3_values_8_p_7_env_0__KVs_21;
#line 398 "assoc_list.m"
  MR_Box mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_33_33;
#line 398 "assoc_list.m"
  MR_Box mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_34_34;
#line 398 "assoc_list.m"
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
#line 398 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl3_values_8_p_6_env_0__KVs_21;
#line 398 "assoc_list.m"
  MR_Box mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_33_33;
#line 398 "assoc_list.m"
  MR_Box mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_34_34;
#line 398 "assoc_list.m"
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
#line 392 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl2_values_6_p_7_env_0__KVs_16;
#line 392 "assoc_list.m"
  MR_Box mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_25_25;
#line 392 "assoc_list.m"
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
#line 392 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl2_values_6_p_6_env_0__KVs_16;
#line 392 "assoc_list.m"
  MR_Box mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_25_25;
#line 392 "assoc_list.m"
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
#line 386 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl_values_4_p_7_env_0__KVs_11;
#line 386 "assoc_list.m"
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
#line 386 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl_values_4_p_6_env_0__KVs_11;
#line 386 "assoc_list.m"
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
#line 380 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl_keys_4_p_7_env_0__KVs_11;
#line 380 "assoc_list.m"
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
#line 380 "assoc_list.m"
  MR_Word mercury__assoc_list__foldl_keys_4_p_6_env_0__KVs_11;
#line 380 "assoc_list.m"
  MR_Box mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_17_17;
#line 137 "assoc_list.m"
};


#line 313 "assoc_list.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_2;

#line 316 "assoc_list.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__assoc_list__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_2;

#line 319 "assoc_list.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_1;

#line 322 "assoc_list.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__assoc_list__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_1;

#line 325 "assoc_list.c"
static MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_2_0_10001(
#line 328 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_1,
#line 330 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_2,
#line 332 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_3,
#line 334 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_4);

#line 337 "assoc_list.c"
static void MR_CALL 
mercury__assoc_list____Compare____assoc_list_2_0_10001(
#line 340 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_1,
#line 342 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_2,
#line 344 "assoc_list.c"
  MR_Box * mercury__assoc_list__wrapper_arg_3,
#line 346 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_4,
#line 348 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_5);

#line 351 "assoc_list.c"
static MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_1_0_10001(
#line 354 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_1,
#line 356 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_2,
#line 358 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_3);

#line 361 "assoc_list.c"
static void MR_CALL 
mercury__assoc_list____Compare____assoc_list_1_0_10001(
#line 364 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_1,
#line 366 "assoc_list.c"
  MR_Box * mercury__assoc_list__wrapper_arg_2,
#line 368 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_3,
#line 370 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_4);

#line 18 "ops.opt"
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

#line 398 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_7_1(
#line 398 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg);

#line 398 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_6_1(
#line 398 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg);

#line 392 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_7_1(
#line 392 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg);

#line 392 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_6_1(
#line 392 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg);

#line 386 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl_values_4_p_7_1(
#line 386 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg);

#line 386 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl_values_4_p_6_1(
#line 386 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg);

#line 380 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_7_1(
#line 380 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg);

#line 380 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_6_1(
#line 380 "assoc_list.m"
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



#line 510 "assoc_list.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_2 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 519 "assoc_list.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__assoc_list__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_2
  }
};

#line 527 "assoc_list.c"
const MR_TypeCtorInfo_Struct mercury__assoc_list__assoc_list__type_ctor_info_assoc_list_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
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

#line 544 "assoc_list.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 553 "assoc_list.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__assoc_list__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_1
  }
};

#line 561 "assoc_list.c"
const MR_TypeCtorInfo_Struct mercury__assoc_list__assoc_list__type_ctor_info_assoc_list_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
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

#line 578 "assoc_list.c"
static MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_2_0_10001(
#line 581 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_1,
#line 583 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_2,
#line 585 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_3,
#line 587 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_4)
#line 589 "assoc_list.c"
{
#line 591 "assoc_list.c"
  {
#line 593 "assoc_list.c"
    MR_bool mercury__assoc_list__succeeded;

#line 596 "assoc_list.c"
    {
#line 598 "assoc_list.c"
      mercury__assoc_list__succeeded = mercury__assoc_list____Unify____assoc_list_2_0(((MR_Word) mercury__assoc_list__wrapper_arg_1), ((MR_Word) mercury__assoc_list__wrapper_arg_2), ((MR_Word) mercury__assoc_list__wrapper_arg_3), ((MR_Word) mercury__assoc_list__wrapper_arg_4));
    }
#line 601 "assoc_list.c"
    return mercury__assoc_list__succeeded;
#line 603 "assoc_list.c"
  }
#line 605 "assoc_list.c"
}

#line 608 "assoc_list.c"
static void MR_CALL 
mercury__assoc_list____Compare____assoc_list_2_0_10001(
#line 611 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_1,
#line 613 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_2,
#line 615 "assoc_list.c"
  MR_Box * mercury__assoc_list__wrapper_arg_3,
#line 617 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_4,
#line 619 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_5)
#line 621 "assoc_list.c"
{
#line 623 "assoc_list.c"
  {
#line 625 "assoc_list.c"
    MR_Word mercury__assoc_list__conv0_HeadVar__1_1;

#line 628 "assoc_list.c"
    {
#line 630 "assoc_list.c"
      mercury__assoc_list____Compare____assoc_list_2_0(((MR_Word) mercury__assoc_list__wrapper_arg_1), ((MR_Word) mercury__assoc_list__wrapper_arg_2), &mercury__assoc_list__conv0_HeadVar__1_1, ((MR_Word) mercury__assoc_list__wrapper_arg_4), ((MR_Word) mercury__assoc_list__wrapper_arg_5));
    }
#line 633 "assoc_list.c"
    *mercury__assoc_list__wrapper_arg_3 = ((MR_Box) (mercury__assoc_list__conv0_HeadVar__1_1));
#line 635 "assoc_list.c"
  }
#line 637 "assoc_list.c"
}

#line 640 "assoc_list.c"
static MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_1_0_10001(
#line 643 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_1,
#line 645 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_2,
#line 647 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_3)
#line 649 "assoc_list.c"
{
#line 651 "assoc_list.c"
  {
#line 653 "assoc_list.c"
    MR_bool mercury__assoc_list__succeeded;

#line 656 "assoc_list.c"
    {
#line 658 "assoc_list.c"
      mercury__assoc_list__succeeded = mercury__assoc_list____Unify____assoc_list_1_0(((MR_Word) mercury__assoc_list__wrapper_arg_1), ((MR_Word) mercury__assoc_list__wrapper_arg_2), ((MR_Word) mercury__assoc_list__wrapper_arg_3));
    }
#line 661 "assoc_list.c"
    return mercury__assoc_list__succeeded;
#line 663 "assoc_list.c"
  }
#line 665 "assoc_list.c"
}

#line 668 "assoc_list.c"
static void MR_CALL 
mercury__assoc_list____Compare____assoc_list_1_0_10001(
#line 671 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_1,
#line 673 "assoc_list.c"
  MR_Box * mercury__assoc_list__wrapper_arg_2,
#line 675 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_3,
#line 677 "assoc_list.c"
  MR_Box mercury__assoc_list__wrapper_arg_4)
#line 679 "assoc_list.c"
{
#line 681 "assoc_list.c"
  {
#line 683 "assoc_list.c"
    MR_Word mercury__assoc_list__conv0_HeadVar__1_1;

#line 686 "assoc_list.c"
    {
#line 688 "assoc_list.c"
      mercury__assoc_list____Compare____assoc_list_1_0(((MR_Word) mercury__assoc_list__wrapper_arg_1), &mercury__assoc_list__conv0_HeadVar__1_1, ((MR_Word) mercury__assoc_list__wrapper_arg_3), ((MR_Word) mercury__assoc_list__wrapper_arg_4));
    }
#line 691 "assoc_list.c"
    *mercury__assoc_list__wrapper_arg_2 = ((MR_Box) (mercury__assoc_list__conv0_HeadVar__1_1));
#line 693 "assoc_list.c"
  }
#line 695 "assoc_list.c"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__assoc_list__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__assoc_list__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
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

#line 852 "assoc_list.c"
    {
#line 854 "assoc_list.c"
      mercury__assoc_list__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 856 "assoc_list.c"
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_9_9, 0) = ((MR_Box) (mercury__assoc_list__TypeCtorInfo_8_8));
#line 858 "assoc_list.c"
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_9_9, 1) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_K_6));
#line 860 "assoc_list.c"
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_9_9, 2) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_V_7));
#line 862 "assoc_list.c"
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

#line 902 "assoc_list.c"
    {
#line 904 "assoc_list.c"
      mercury__assoc_list__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 906 "assoc_list.c"
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_8_8, 0) = ((MR_Box) (mercury__assoc_list__TypeCtorInfo_7_7));
#line 908 "assoc_list.c"
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_8_8, 1) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_K_5));
#line 910 "assoc_list.c"
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_8_8, 2) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_V_6));
#line 912 "assoc_list.c"
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

#line 952 "assoc_list.c"
    {
#line 954 "assoc_list.c"
      mercury__assoc_list__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 956 "assoc_list.c"
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_8_8, 0) = ((MR_Box) (mercury__assoc_list__TypeCtorInfo_7_7));
#line 958 "assoc_list.c"
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_8_8, 1) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_T_6));
#line 960 "assoc_list.c"
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_8_8, 2) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_T_6));
#line 962 "assoc_list.c"
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

#line 1000 "assoc_list.c"
    {
#line 1002 "assoc_list.c"
      mercury__assoc_list__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1004 "assoc_list.c"
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_7_7, 0) = ((MR_Box) (mercury__assoc_list__TypeCtorInfo_6_6));
#line 1006 "assoc_list.c"
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_7_7, 1) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_T_5));
#line 1008 "assoc_list.c"
      MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_7_7, 2) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_T_5));
#line 1010 "assoc_list.c"
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

#line 398 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_7_1(
#line 398 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg)
#line 398 "assoc_list.m"
{
#line 398 "assoc_list.m"
  {
#line 398 "assoc_list.m"
    struct mercury__assoc_list__foldl3_values_8_p_7_env_0_s * mercury__assoc_list__env_ptr = (struct mercury__assoc_list__foldl3_values_8_p_7_env_0_s *) mercury__assoc_list__env_ptr_arg;

#line 401 "assoc_list.m"
    {
#line 401 "assoc_list.m"
      mercury__assoc_list__foldl3_values_8_p_7((mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_V_39, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_A_40, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_B_41, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_C_42, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_K_43, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__P_1, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__KVs_21, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_33_33, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_4, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_34_34, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_6, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_35_35, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_8, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__cont, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__cont_env_ptr);
#line 401 "assoc_list.m"
      return;
    }
#line 398 "assoc_list.m"
  }
#line 398 "assoc_list.m"
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
#line 397 "assoc_list.m"
    {
#line 397 "assoc_list.m"
      MR_bool mercury__assoc_list__succeeded;

#line 397 "assoc_list.m"
      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 397 "assoc_list.m"
        {
#line 397 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_8) = mercury__assoc_list__STATE_VARIABLE_Acc3_0_7;
#line 397 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_6) = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 397 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_4) = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 397 "assoc_list.m"
          {
#line 397 "assoc_list.m"
            ((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__cont)((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__cont_env_ptr);
#line 397 "assoc_list.m"
            return;
          }
#line 397 "assoc_list.m"
        }
#line 397 "assoc_list.m"
      else
#line 398 "assoc_list.m"
        {
#line 398 "assoc_list.m"
          MR_Word mercury__assoc_list__KV_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 398 "assoc_list.m"
          MR_Box mercury__assoc_list__V_26;
#line 399 "assoc_list.m"
          MR_Box mercury__assoc_list___K_25;
#line 400 "assoc_list.m"
          void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

#line 398 "assoc_list.m"
          (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__KVs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 399 "assoc_list.m"
          mercury__assoc_list___K_25 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 0));
#line 399 "assoc_list.m"
          mercury__assoc_list__V_26 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 1));
#line 400 "assoc_list.m"
          mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__P_1, (MR_Integer) 1)));
#line 400 "assoc_list.m"
          {
#line 400 "assoc_list.m"
            mercury__assoc_list__func_0(((MR_Box) (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__P_1), mercury__assoc_list__V_26, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &(mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc1_33_33, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &(mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc2_34_34, mercury__assoc_list__STATE_VARIABLE_Acc3_0_7, &(mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_Acc3_35_35, mercury__assoc_list__foldl3_values_8_p_7_1, &mercury__assoc_list__env);
          }
#line 398 "assoc_list.m"
        }
#line 397 "assoc_list.m"
    }
#line 201 "assoc_list.m"
  }
#line 201 "assoc_list.m"
}

#line 398 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_6_1(
#line 398 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg)
#line 398 "assoc_list.m"
{
#line 398 "assoc_list.m"
  {
#line 398 "assoc_list.m"
    struct mercury__assoc_list__foldl3_values_8_p_6_env_0_s * mercury__assoc_list__env_ptr = (struct mercury__assoc_list__foldl3_values_8_p_6_env_0_s *) mercury__assoc_list__env_ptr_arg;

#line 401 "assoc_list.m"
    {
#line 401 "assoc_list.m"
      mercury__assoc_list__foldl3_values_8_p_6((mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_V_39, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_A_40, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_B_41, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_C_42, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_K_43, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__P_1, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__KVs_21, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_33_33, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_4, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_34_34, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_6, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_35_35, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_8, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__cont, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__cont_env_ptr);
#line 401 "assoc_list.m"
      return;
    }
#line 398 "assoc_list.m"
  }
#line 398 "assoc_list.m"
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
#line 397 "assoc_list.m"
    {
#line 397 "assoc_list.m"
      MR_bool mercury__assoc_list__succeeded;

#line 397 "assoc_list.m"
      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 397 "assoc_list.m"
        {
#line 397 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_8) = mercury__assoc_list__STATE_VARIABLE_Acc3_0_7;
#line 397 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_6) = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 397 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_4) = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 397 "assoc_list.m"
          {
#line 397 "assoc_list.m"
            ((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__cont)((mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__cont_env_ptr);
#line 397 "assoc_list.m"
            return;
          }
#line 397 "assoc_list.m"
        }
#line 397 "assoc_list.m"
      else
#line 398 "assoc_list.m"
        {
#line 398 "assoc_list.m"
          MR_Word mercury__assoc_list__KV_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 398 "assoc_list.m"
          MR_Box mercury__assoc_list__V_26;
#line 399 "assoc_list.m"
          MR_Box mercury__assoc_list___K_25;
#line 400 "assoc_list.m"
          void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

#line 398 "assoc_list.m"
          (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__KVs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 399 "assoc_list.m"
          mercury__assoc_list___K_25 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 0));
#line 399 "assoc_list.m"
          mercury__assoc_list__V_26 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 1));
#line 400 "assoc_list.m"
          mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__P_1, (MR_Integer) 1)));
#line 400 "assoc_list.m"
          {
#line 400 "assoc_list.m"
            mercury__assoc_list__func_0(((MR_Box) (mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__P_1), mercury__assoc_list__V_26, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &(mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc1_33_33, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &(mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc2_34_34, mercury__assoc_list__STATE_VARIABLE_Acc3_0_7, &(mercury__assoc_list__env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_Acc3_35_35, mercury__assoc_list__foldl3_values_8_p_6_1, &mercury__assoc_list__env);
          }
#line 398 "assoc_list.m"
        }
#line 397 "assoc_list.m"
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
#line 397 "assoc_list.m"
  while (MR_TRUE)
#line 397 "assoc_list.m"
    {
#line 397 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 397 "assoc_list.m"
      {
#line 397 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 397 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 397 "assoc_list.m"
          {
#line 397 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc3_8 = mercury__assoc_list__STATE_VARIABLE_Acc3_0_7;
#line 397 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 397 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 397 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 397 "assoc_list.m"
          }
#line 397 "assoc_list.m"
        else
#line 398 "assoc_list.m"
          {
#line 398 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 398 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list__V_26 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 1));
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;
#line 399 "assoc_list.m"
            MR_Box mercury__assoc_list___K_25 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 0));
#line 400 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 400 "assoc_list.m"
            {
#line 400 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_26, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_33_33, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_34_34, mercury__assoc_list__STATE_VARIABLE_Acc3_0_7, &mercury__assoc_list__STATE_VARIABLE_Acc3_35_35);
            }
#line 398 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 401 "assoc_list.m"
              {
#line 401 "assoc_list.m"
                /* direct tailcall eliminated */
#line 401 "assoc_list.m"
                {
#line 401 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_21;
#line 401 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
#line 401 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
#line 401 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;

#line 401 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc3_0_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 401 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 401 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 401 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 401 "assoc_list.m"
                }
#line 401 "assoc_list.m"
                continue;
#line 401 "assoc_list.m"
              }
#line 398 "assoc_list.m"
          }
#line 397 "assoc_list.m"
        return mercury__assoc_list__succeeded;
#line 397 "assoc_list.m"
      }
#line 397 "assoc_list.m"
      break;
#line 397 "assoc_list.m"
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
#line 397 "assoc_list.m"
  while (MR_TRUE)
#line 397 "assoc_list.m"
    {
#line 397 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 397 "assoc_list.m"
      {
#line 397 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 397 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 397 "assoc_list.m"
          {
#line 397 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc3_8 = mercury__assoc_list__STATE_VARIABLE_Acc3_0_7;
#line 397 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 397 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 397 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 397 "assoc_list.m"
          }
#line 397 "assoc_list.m"
        else
#line 398 "assoc_list.m"
          {
#line 398 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 398 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list__V_26 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 1));
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;
#line 399 "assoc_list.m"
            MR_Box mercury__assoc_list___K_25 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 0));
#line 400 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 400 "assoc_list.m"
            {
#line 400 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_26, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_33_33, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_34_34, mercury__assoc_list__STATE_VARIABLE_Acc3_0_7, &mercury__assoc_list__STATE_VARIABLE_Acc3_35_35);
            }
#line 398 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 401 "assoc_list.m"
              {
#line 401 "assoc_list.m"
                /* direct tailcall eliminated */
#line 401 "assoc_list.m"
                {
#line 401 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_21;
#line 401 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
#line 401 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
#line 401 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;

#line 401 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc3_0_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 401 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 401 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 401 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 401 "assoc_list.m"
                }
#line 401 "assoc_list.m"
                continue;
#line 401 "assoc_list.m"
              }
#line 398 "assoc_list.m"
          }
#line 397 "assoc_list.m"
        return mercury__assoc_list__succeeded;
#line 397 "assoc_list.m"
      }
#line 397 "assoc_list.m"
      break;
#line 397 "assoc_list.m"
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
#line 397 "assoc_list.m"
  while (MR_TRUE)
#line 397 "assoc_list.m"
    {
#line 397 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 397 "assoc_list.m"
      {
#line 397 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 397 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 397 "assoc_list.m"
          {
#line 397 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc3_8 = mercury__assoc_list__STATE_VARIABLE_Acc3_0_7;
#line 397 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 397 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 397 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 397 "assoc_list.m"
          }
#line 397 "assoc_list.m"
        else
#line 398 "assoc_list.m"
          {
#line 398 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 398 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list__V_26 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 1));
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;
#line 399 "assoc_list.m"
            MR_Box mercury__assoc_list___K_25 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 0));
#line 400 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 400 "assoc_list.m"
            {
#line 400 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_26, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_33_33, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_34_34, mercury__assoc_list__STATE_VARIABLE_Acc3_0_7, &mercury__assoc_list__STATE_VARIABLE_Acc3_35_35);
            }
#line 398 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 401 "assoc_list.m"
              {
#line 401 "assoc_list.m"
                /* direct tailcall eliminated */
#line 401 "assoc_list.m"
                {
#line 401 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_21;
#line 401 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
#line 401 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
#line 401 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;

#line 401 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc3_0_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 401 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 401 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 401 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 401 "assoc_list.m"
                }
#line 401 "assoc_list.m"
                continue;
#line 401 "assoc_list.m"
              }
#line 398 "assoc_list.m"
          }
#line 397 "assoc_list.m"
        return mercury__assoc_list__succeeded;
#line 397 "assoc_list.m"
      }
#line 397 "assoc_list.m"
      break;
#line 397 "assoc_list.m"
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
#line 397 "assoc_list.m"
  while (MR_TRUE)
#line 397 "assoc_list.m"
    {
#line 397 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 397 "assoc_list.m"
      {
#line 397 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 397 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 397 "assoc_list.m"
          {
#line 397 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc3_8 = mercury__assoc_list__STATE_VARIABLE_Acc3_0_7;
#line 397 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 397 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 397 "assoc_list.m"
          }
#line 397 "assoc_list.m"
        else
#line 398 "assoc_list.m"
          {
#line 398 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 398 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list__V_26 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 1));
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;
#line 399 "assoc_list.m"
            MR_Box mercury__assoc_list___K_25 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 0));
#line 400 "assoc_list.m"
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 400 "assoc_list.m"
            {
#line 400 "assoc_list.m"
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_26, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_33_33, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_34_34, mercury__assoc_list__STATE_VARIABLE_Acc3_0_7, &mercury__assoc_list__STATE_VARIABLE_Acc3_35_35);
            }
#line 401 "assoc_list.m"
            /* direct tailcall eliminated */
#line 401 "assoc_list.m"
            {
#line 401 "assoc_list.m"
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_21;
#line 401 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
#line 401 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
#line 401 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;

#line 401 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc3_0_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 401 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 401 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 401 "assoc_list.m"
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 401 "assoc_list.m"
            }
#line 401 "assoc_list.m"
            continue;
#line 398 "assoc_list.m"
          }
#line 397 "assoc_list.m"
      }
#line 397 "assoc_list.m"
      break;
#line 397 "assoc_list.m"
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
#line 397 "assoc_list.m"
  while (MR_TRUE)
#line 397 "assoc_list.m"
    {
#line 397 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 397 "assoc_list.m"
      {
#line 397 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 397 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 397 "assoc_list.m"
          {
#line 397 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc3_8 = mercury__assoc_list__STATE_VARIABLE_Acc3_0_7;
#line 397 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 397 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 397 "assoc_list.m"
          }
#line 397 "assoc_list.m"
        else
#line 398 "assoc_list.m"
          {
#line 398 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 398 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list__V_26 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 1));
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;
#line 399 "assoc_list.m"
            MR_Box mercury__assoc_list___K_25 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 0));
#line 400 "assoc_list.m"
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 400 "assoc_list.m"
            {
#line 400 "assoc_list.m"
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_26, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_33_33, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_34_34, mercury__assoc_list__STATE_VARIABLE_Acc3_0_7, &mercury__assoc_list__STATE_VARIABLE_Acc3_35_35);
            }
#line 401 "assoc_list.m"
            /* direct tailcall eliminated */
#line 401 "assoc_list.m"
            {
#line 401 "assoc_list.m"
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_21;
#line 401 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
#line 401 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
#line 401 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;

#line 401 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc3_0_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 401 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 401 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 401 "assoc_list.m"
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 401 "assoc_list.m"
            }
#line 401 "assoc_list.m"
            continue;
#line 398 "assoc_list.m"
          }
#line 397 "assoc_list.m"
      }
#line 397 "assoc_list.m"
      break;
#line 397 "assoc_list.m"
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
#line 397 "assoc_list.m"
  while (MR_TRUE)
#line 397 "assoc_list.m"
    {
#line 397 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 397 "assoc_list.m"
      {
#line 397 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 397 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 397 "assoc_list.m"
          {
#line 397 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc3_8 = mercury__assoc_list__STATE_VARIABLE_Acc3_0_7;
#line 397 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 397 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 397 "assoc_list.m"
          }
#line 397 "assoc_list.m"
        else
#line 398 "assoc_list.m"
          {
#line 398 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 398 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list__V_26 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 1));
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
#line 398 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;
#line 399 "assoc_list.m"
            MR_Box mercury__assoc_list___K_25 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_20, (MR_Integer) 0));
#line 400 "assoc_list.m"
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 400 "assoc_list.m"
            {
#line 400 "assoc_list.m"
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_26, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_33_33, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_34_34, mercury__assoc_list__STATE_VARIABLE_Acc3_0_7, &mercury__assoc_list__STATE_VARIABLE_Acc3_35_35);
            }
#line 401 "assoc_list.m"
            /* direct tailcall eliminated */
#line 401 "assoc_list.m"
            {
#line 401 "assoc_list.m"
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_21;
#line 401 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_33_33;
#line 401 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_34_34;
#line 401 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_35_35;

#line 401 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc3_0_7 = mercury__assoc_list__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 401 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 401 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 401 "assoc_list.m"
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 401 "assoc_list.m"
            }
#line 401 "assoc_list.m"
            continue;
#line 398 "assoc_list.m"
          }
#line 397 "assoc_list.m"
      }
#line 397 "assoc_list.m"
      break;
#line 397 "assoc_list.m"
    }
#line 187 "assoc_list.m"
}

#line 392 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_7_1(
#line 392 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg)
#line 392 "assoc_list.m"
{
#line 392 "assoc_list.m"
  {
#line 392 "assoc_list.m"
    struct mercury__assoc_list__foldl2_values_6_p_7_env_0_s * mercury__assoc_list__env_ptr = (struct mercury__assoc_list__foldl2_values_6_p_7_env_0_s *) mercury__assoc_list__env_ptr_arg;

#line 395 "assoc_list.m"
    {
#line 395 "assoc_list.m"
      mercury__assoc_list__foldl2_values_6_p_7((mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_V_29, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_A_30, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_B_31, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_K_32, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__P_1, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__KVs_16, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_25_25, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_4, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_26_26, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_6, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__cont, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__cont_env_ptr);
#line 395 "assoc_list.m"
      return;
    }
#line 392 "assoc_list.m"
  }
#line 392 "assoc_list.m"
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
#line 391 "assoc_list.m"
    {
#line 391 "assoc_list.m"
      MR_bool mercury__assoc_list__succeeded;

#line 391 "assoc_list.m"
      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "assoc_list.m"
        {
#line 391 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_6) = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 391 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_4) = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 391 "assoc_list.m"
          {
#line 391 "assoc_list.m"
            ((mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__cont)((mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__cont_env_ptr);
#line 391 "assoc_list.m"
            return;
          }
#line 391 "assoc_list.m"
        }
#line 391 "assoc_list.m"
      else
#line 392 "assoc_list.m"
        {
#line 392 "assoc_list.m"
          MR_Word mercury__assoc_list__KV_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 392 "assoc_list.m"
          MR_Box mercury__assoc_list__V_20;
#line 393 "assoc_list.m"
          MR_Box mercury__assoc_list___K_19;
#line 394 "assoc_list.m"
          void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

#line 392 "assoc_list.m"
          (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 393 "assoc_list.m"
          mercury__assoc_list___K_19 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 0));
#line 393 "assoc_list.m"
          mercury__assoc_list__V_20 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 1));
#line 394 "assoc_list.m"
          mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__P_1, (MR_Integer) 1)));
#line 394 "assoc_list.m"
          {
#line 394 "assoc_list.m"
            mercury__assoc_list__func_0(((MR_Box) (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__P_1), mercury__assoc_list__V_20, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &(mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc1_25_25, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &(mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_Acc2_26_26, mercury__assoc_list__foldl2_values_6_p_7_1, &mercury__assoc_list__env);
          }
#line 392 "assoc_list.m"
        }
#line 391 "assoc_list.m"
    }
#line 180 "assoc_list.m"
  }
#line 180 "assoc_list.m"
}

#line 392 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_6_1(
#line 392 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg)
#line 392 "assoc_list.m"
{
#line 392 "assoc_list.m"
  {
#line 392 "assoc_list.m"
    struct mercury__assoc_list__foldl2_values_6_p_6_env_0_s * mercury__assoc_list__env_ptr = (struct mercury__assoc_list__foldl2_values_6_p_6_env_0_s *) mercury__assoc_list__env_ptr_arg;

#line 395 "assoc_list.m"
    {
#line 395 "assoc_list.m"
      mercury__assoc_list__foldl2_values_6_p_6((mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_V_29, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_A_30, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_B_31, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_K_32, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__P_1, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__KVs_16, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_25_25, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_4, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_26_26, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_6, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__cont, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__cont_env_ptr);
#line 395 "assoc_list.m"
      return;
    }
#line 392 "assoc_list.m"
  }
#line 392 "assoc_list.m"
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
#line 391 "assoc_list.m"
    {
#line 391 "assoc_list.m"
      MR_bool mercury__assoc_list__succeeded;

#line 391 "assoc_list.m"
      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "assoc_list.m"
        {
#line 391 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_6) = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 391 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_4) = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 391 "assoc_list.m"
          {
#line 391 "assoc_list.m"
            ((mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__cont)((mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__cont_env_ptr);
#line 391 "assoc_list.m"
            return;
          }
#line 391 "assoc_list.m"
        }
#line 391 "assoc_list.m"
      else
#line 392 "assoc_list.m"
        {
#line 392 "assoc_list.m"
          MR_Word mercury__assoc_list__KV_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 392 "assoc_list.m"
          MR_Box mercury__assoc_list__V_20;
#line 393 "assoc_list.m"
          MR_Box mercury__assoc_list___K_19;
#line 394 "assoc_list.m"
          void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

#line 392 "assoc_list.m"
          (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 393 "assoc_list.m"
          mercury__assoc_list___K_19 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 0));
#line 393 "assoc_list.m"
          mercury__assoc_list__V_20 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 1));
#line 394 "assoc_list.m"
          mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__P_1, (MR_Integer) 1)));
#line 394 "assoc_list.m"
          {
#line 394 "assoc_list.m"
            mercury__assoc_list__func_0(((MR_Box) (mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__P_1), mercury__assoc_list__V_20, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &(mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc1_25_25, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &(mercury__assoc_list__env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_Acc2_26_26, mercury__assoc_list__foldl2_values_6_p_6_1, &mercury__assoc_list__env);
          }
#line 392 "assoc_list.m"
        }
#line 391 "assoc_list.m"
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
#line 391 "assoc_list.m"
  while (MR_TRUE)
#line 391 "assoc_list.m"
    {
#line 391 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 391 "assoc_list.m"
      {
#line 391 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 391 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "assoc_list.m"
          {
#line 391 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 391 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 391 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 391 "assoc_list.m"
          }
#line 391 "assoc_list.m"
        else
#line 392 "assoc_list.m"
          {
#line 392 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 392 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 392 "assoc_list.m"
            MR_Box mercury__assoc_list__V_20 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 1));
#line 392 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
#line 392 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;
#line 393 "assoc_list.m"
            MR_Box mercury__assoc_list___K_19 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 0));
#line 394 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 394 "assoc_list.m"
            {
#line 394 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_20, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_25_25, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_26_26);
            }
#line 392 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 395 "assoc_list.m"
              {
#line 395 "assoc_list.m"
                /* direct tailcall eliminated */
#line 395 "assoc_list.m"
                {
#line 395 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_16;
#line 395 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
#line 395 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;

#line 395 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 395 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 395 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 395 "assoc_list.m"
                }
#line 395 "assoc_list.m"
                continue;
#line 395 "assoc_list.m"
              }
#line 392 "assoc_list.m"
          }
#line 391 "assoc_list.m"
        return mercury__assoc_list__succeeded;
#line 391 "assoc_list.m"
      }
#line 391 "assoc_list.m"
      break;
#line 391 "assoc_list.m"
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
#line 391 "assoc_list.m"
  while (MR_TRUE)
#line 391 "assoc_list.m"
    {
#line 391 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 391 "assoc_list.m"
      {
#line 391 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 391 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "assoc_list.m"
          {
#line 391 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 391 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 391 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 391 "assoc_list.m"
          }
#line 391 "assoc_list.m"
        else
#line 392 "assoc_list.m"
          {
#line 392 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 392 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 392 "assoc_list.m"
            MR_Box mercury__assoc_list__V_20 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 1));
#line 392 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
#line 392 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;
#line 393 "assoc_list.m"
            MR_Box mercury__assoc_list___K_19 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 0));
#line 394 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 394 "assoc_list.m"
            {
#line 394 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_20, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_25_25, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_26_26);
            }
#line 392 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 395 "assoc_list.m"
              {
#line 395 "assoc_list.m"
                /* direct tailcall eliminated */
#line 395 "assoc_list.m"
                {
#line 395 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_16;
#line 395 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
#line 395 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;

#line 395 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 395 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 395 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 395 "assoc_list.m"
                }
#line 395 "assoc_list.m"
                continue;
#line 395 "assoc_list.m"
              }
#line 392 "assoc_list.m"
          }
#line 391 "assoc_list.m"
        return mercury__assoc_list__succeeded;
#line 391 "assoc_list.m"
      }
#line 391 "assoc_list.m"
      break;
#line 391 "assoc_list.m"
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
#line 391 "assoc_list.m"
  while (MR_TRUE)
#line 391 "assoc_list.m"
    {
#line 391 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 391 "assoc_list.m"
      {
#line 391 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 391 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "assoc_list.m"
          {
#line 391 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 391 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 391 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 391 "assoc_list.m"
          }
#line 391 "assoc_list.m"
        else
#line 392 "assoc_list.m"
          {
#line 392 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 392 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 392 "assoc_list.m"
            MR_Box mercury__assoc_list__V_20 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 1));
#line 392 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
#line 392 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;
#line 393 "assoc_list.m"
            MR_Box mercury__assoc_list___K_19 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 0));
#line 394 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 394 "assoc_list.m"
            {
#line 394 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_20, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_25_25, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_26_26);
            }
#line 392 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 395 "assoc_list.m"
              {
#line 395 "assoc_list.m"
                /* direct tailcall eliminated */
#line 395 "assoc_list.m"
                {
#line 395 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_16;
#line 395 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
#line 395 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;

#line 395 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 395 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 395 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 395 "assoc_list.m"
                }
#line 395 "assoc_list.m"
                continue;
#line 395 "assoc_list.m"
              }
#line 392 "assoc_list.m"
          }
#line 391 "assoc_list.m"
        return mercury__assoc_list__succeeded;
#line 391 "assoc_list.m"
      }
#line 391 "assoc_list.m"
      break;
#line 391 "assoc_list.m"
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
#line 391 "assoc_list.m"
  while (MR_TRUE)
#line 391 "assoc_list.m"
    {
#line 391 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 391 "assoc_list.m"
      {
#line 391 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 391 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "assoc_list.m"
          {
#line 391 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 391 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 391 "assoc_list.m"
          }
#line 391 "assoc_list.m"
        else
#line 392 "assoc_list.m"
          {
#line 392 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 392 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 392 "assoc_list.m"
            MR_Box mercury__assoc_list__V_20 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 1));
#line 392 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
#line 392 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;
#line 393 "assoc_list.m"
            MR_Box mercury__assoc_list___K_19 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 0));
#line 394 "assoc_list.m"
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 394 "assoc_list.m"
            {
#line 394 "assoc_list.m"
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_20, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_25_25, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_26_26);
            }
#line 395 "assoc_list.m"
            /* direct tailcall eliminated */
#line 395 "assoc_list.m"
            {
#line 395 "assoc_list.m"
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_16;
#line 395 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
#line 395 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;

#line 395 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 395 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 395 "assoc_list.m"
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 395 "assoc_list.m"
            }
#line 395 "assoc_list.m"
            continue;
#line 392 "assoc_list.m"
          }
#line 391 "assoc_list.m"
      }
#line 391 "assoc_list.m"
      break;
#line 391 "assoc_list.m"
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
#line 391 "assoc_list.m"
  while (MR_TRUE)
#line 391 "assoc_list.m"
    {
#line 391 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 391 "assoc_list.m"
      {
#line 391 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 391 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "assoc_list.m"
          {
#line 391 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 391 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 391 "assoc_list.m"
          }
#line 391 "assoc_list.m"
        else
#line 392 "assoc_list.m"
          {
#line 392 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 392 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 392 "assoc_list.m"
            MR_Box mercury__assoc_list__V_20 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 1));
#line 392 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
#line 392 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;
#line 393 "assoc_list.m"
            MR_Box mercury__assoc_list___K_19 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 0));
#line 394 "assoc_list.m"
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 394 "assoc_list.m"
            {
#line 394 "assoc_list.m"
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_20, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_25_25, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_26_26);
            }
#line 395 "assoc_list.m"
            /* direct tailcall eliminated */
#line 395 "assoc_list.m"
            {
#line 395 "assoc_list.m"
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_16;
#line 395 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
#line 395 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;

#line 395 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 395 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 395 "assoc_list.m"
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 395 "assoc_list.m"
            }
#line 395 "assoc_list.m"
            continue;
#line 392 "assoc_list.m"
          }
#line 391 "assoc_list.m"
      }
#line 391 "assoc_list.m"
      break;
#line 391 "assoc_list.m"
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
#line 391 "assoc_list.m"
  while (MR_TRUE)
#line 391 "assoc_list.m"
    {
#line 391 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 391 "assoc_list.m"
      {
#line 391 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 391 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "assoc_list.m"
          {
#line 391 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc2_6 = mercury__assoc_list__STATE_VARIABLE_Acc2_0_5;
#line 391 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc1_4 = mercury__assoc_list__STATE_VARIABLE_Acc1_0_3;
#line 391 "assoc_list.m"
          }
#line 391 "assoc_list.m"
        else
#line 392 "assoc_list.m"
          {
#line 392 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 392 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 392 "assoc_list.m"
            MR_Box mercury__assoc_list__V_20 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 1));
#line 392 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
#line 392 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;
#line 393 "assoc_list.m"
            MR_Box mercury__assoc_list___K_19 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_15, (MR_Integer) 0));
#line 394 "assoc_list.m"
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 394 "assoc_list.m"
            {
#line 394 "assoc_list.m"
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_20, mercury__assoc_list__STATE_VARIABLE_Acc1_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc1_25_25, mercury__assoc_list__STATE_VARIABLE_Acc2_0_5, &mercury__assoc_list__STATE_VARIABLE_Acc2_26_26);
            }
#line 395 "assoc_list.m"
            /* direct tailcall eliminated */
#line 395 "assoc_list.m"
            {
#line 395 "assoc_list.m"
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_16;
#line 395 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_25_25;
#line 395 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_26_26;

#line 395 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc2_0_5 = mercury__assoc_list__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 395 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc1_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 395 "assoc_list.m"
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 395 "assoc_list.m"
            }
#line 395 "assoc_list.m"
            continue;
#line 392 "assoc_list.m"
          }
#line 391 "assoc_list.m"
      }
#line 391 "assoc_list.m"
      break;
#line 391 "assoc_list.m"
    }
#line 166 "assoc_list.m"
}

#line 386 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl_values_4_p_7_1(
#line 386 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg)
#line 386 "assoc_list.m"
{
#line 386 "assoc_list.m"
  {
#line 386 "assoc_list.m"
    struct mercury__assoc_list__foldl_values_4_p_7_env_0_s * mercury__assoc_list__env_ptr = (struct mercury__assoc_list__foldl_values_4_p_7_env_0_s *) mercury__assoc_list__env_ptr_arg;

#line 389 "assoc_list.m"
    {
#line 389 "assoc_list.m"
      mercury__assoc_list__foldl_values_4_p_7((mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_V_19, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_A_20, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_K_21, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__P_1, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__KVs_11, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_17_17, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_4, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__cont, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__cont_env_ptr);
#line 389 "assoc_list.m"
      return;
    }
#line 386 "assoc_list.m"
  }
#line 386 "assoc_list.m"
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
#line 385 "assoc_list.m"
    {
#line 385 "assoc_list.m"
      MR_bool mercury__assoc_list__succeeded;

#line 385 "assoc_list.m"
      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 385 "assoc_list.m"
        {
#line 385 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_4) = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 385 "assoc_list.m"
          {
#line 385 "assoc_list.m"
            ((mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__cont)((mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__cont_env_ptr);
#line 385 "assoc_list.m"
            return;
          }
#line 385 "assoc_list.m"
        }
#line 385 "assoc_list.m"
      else
#line 386 "assoc_list.m"
        {
#line 386 "assoc_list.m"
          MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 386 "assoc_list.m"
          MR_Box mercury__assoc_list__V_14;
#line 387 "assoc_list.m"
          MR_Box mercury__assoc_list___K_13;
#line 388 "assoc_list.m"
          void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

#line 386 "assoc_list.m"
          (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 387 "assoc_list.m"
          mercury__assoc_list___K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 387 "assoc_list.m"
          mercury__assoc_list__V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 388 "assoc_list.m"
          mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__P_1, (MR_Integer) 1)));
#line 388 "assoc_list.m"
          {
#line 388 "assoc_list.m"
            mercury__assoc_list__func_0(((MR_Box) (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__P_1), mercury__assoc_list__V_14, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &(mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_Acc_17_17, mercury__assoc_list__foldl_values_4_p_7_1, &mercury__assoc_list__env);
          }
#line 386 "assoc_list.m"
        }
#line 385 "assoc_list.m"
    }
#line 159 "assoc_list.m"
  }
#line 159 "assoc_list.m"
}

#line 386 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl_values_4_p_6_1(
#line 386 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg)
#line 386 "assoc_list.m"
{
#line 386 "assoc_list.m"
  {
#line 386 "assoc_list.m"
    struct mercury__assoc_list__foldl_values_4_p_6_env_0_s * mercury__assoc_list__env_ptr = (struct mercury__assoc_list__foldl_values_4_p_6_env_0_s *) mercury__assoc_list__env_ptr_arg;

#line 389 "assoc_list.m"
    {
#line 389 "assoc_list.m"
      mercury__assoc_list__foldl_values_4_p_6((mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_V_19, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_A_20, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_K_21, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__P_1, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__KVs_11, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_17_17, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_4, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__cont, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__cont_env_ptr);
#line 389 "assoc_list.m"
      return;
    }
#line 386 "assoc_list.m"
  }
#line 386 "assoc_list.m"
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
#line 385 "assoc_list.m"
    {
#line 385 "assoc_list.m"
      MR_bool mercury__assoc_list__succeeded;

#line 385 "assoc_list.m"
      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 385 "assoc_list.m"
        {
#line 385 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_4) = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 385 "assoc_list.m"
          {
#line 385 "assoc_list.m"
            ((mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__cont)((mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__cont_env_ptr);
#line 385 "assoc_list.m"
            return;
          }
#line 385 "assoc_list.m"
        }
#line 385 "assoc_list.m"
      else
#line 386 "assoc_list.m"
        {
#line 386 "assoc_list.m"
          MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 386 "assoc_list.m"
          MR_Box mercury__assoc_list__V_14;
#line 387 "assoc_list.m"
          MR_Box mercury__assoc_list___K_13;
#line 388 "assoc_list.m"
          void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

#line 386 "assoc_list.m"
          (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 387 "assoc_list.m"
          mercury__assoc_list___K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 387 "assoc_list.m"
          mercury__assoc_list__V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 388 "assoc_list.m"
          mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__P_1, (MR_Integer) 1)));
#line 388 "assoc_list.m"
          {
#line 388 "assoc_list.m"
            mercury__assoc_list__func_0(((MR_Box) (mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__P_1), mercury__assoc_list__V_14, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &(mercury__assoc_list__env).mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_Acc_17_17, mercury__assoc_list__foldl_values_4_p_6_1, &mercury__assoc_list__env);
          }
#line 386 "assoc_list.m"
        }
#line 385 "assoc_list.m"
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
#line 385 "assoc_list.m"
  while (MR_TRUE)
#line 385 "assoc_list.m"
    {
#line 385 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 385 "assoc_list.m"
      {
#line 385 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 385 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 385 "assoc_list.m"
          {
#line 385 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 385 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 385 "assoc_list.m"
          }
#line 385 "assoc_list.m"
        else
#line 386 "assoc_list.m"
          {
#line 386 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 386 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 386 "assoc_list.m"
            MR_Box mercury__assoc_list__V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 386 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
#line 387 "assoc_list.m"
            MR_Box mercury__assoc_list___K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 388 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 388 "assoc_list.m"
            {
#line 388 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_14, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
#line 386 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 389 "assoc_list.m"
              {
#line 389 "assoc_list.m"
                /* direct tailcall eliminated */
#line 389 "assoc_list.m"
                {
#line 389 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
#line 389 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

#line 389 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 389 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 389 "assoc_list.m"
                }
#line 389 "assoc_list.m"
                continue;
#line 389 "assoc_list.m"
              }
#line 386 "assoc_list.m"
          }
#line 385 "assoc_list.m"
        return mercury__assoc_list__succeeded;
#line 385 "assoc_list.m"
      }
#line 385 "assoc_list.m"
      break;
#line 385 "assoc_list.m"
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
#line 385 "assoc_list.m"
  while (MR_TRUE)
#line 385 "assoc_list.m"
    {
#line 385 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 385 "assoc_list.m"
      {
#line 385 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 385 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 385 "assoc_list.m"
          {
#line 385 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 385 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 385 "assoc_list.m"
          }
#line 385 "assoc_list.m"
        else
#line 386 "assoc_list.m"
          {
#line 386 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 386 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 386 "assoc_list.m"
            MR_Box mercury__assoc_list__V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 386 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
#line 387 "assoc_list.m"
            MR_Box mercury__assoc_list___K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 388 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 388 "assoc_list.m"
            {
#line 388 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_14, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
#line 386 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 389 "assoc_list.m"
              {
#line 389 "assoc_list.m"
                /* direct tailcall eliminated */
#line 389 "assoc_list.m"
                {
#line 389 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
#line 389 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

#line 389 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 389 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 389 "assoc_list.m"
                }
#line 389 "assoc_list.m"
                continue;
#line 389 "assoc_list.m"
              }
#line 386 "assoc_list.m"
          }
#line 385 "assoc_list.m"
        return mercury__assoc_list__succeeded;
#line 385 "assoc_list.m"
      }
#line 385 "assoc_list.m"
      break;
#line 385 "assoc_list.m"
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
#line 385 "assoc_list.m"
  while (MR_TRUE)
#line 385 "assoc_list.m"
    {
#line 385 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 385 "assoc_list.m"
      {
#line 385 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 385 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 385 "assoc_list.m"
          {
#line 385 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 385 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 385 "assoc_list.m"
          }
#line 385 "assoc_list.m"
        else
#line 386 "assoc_list.m"
          {
#line 386 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 386 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 386 "assoc_list.m"
            MR_Box mercury__assoc_list__V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 386 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
#line 387 "assoc_list.m"
            MR_Box mercury__assoc_list___K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 388 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 388 "assoc_list.m"
            {
#line 388 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_14, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
#line 386 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 389 "assoc_list.m"
              {
#line 389 "assoc_list.m"
                /* direct tailcall eliminated */
#line 389 "assoc_list.m"
                {
#line 389 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
#line 389 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

#line 389 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 389 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 389 "assoc_list.m"
                }
#line 389 "assoc_list.m"
                continue;
#line 389 "assoc_list.m"
              }
#line 386 "assoc_list.m"
          }
#line 385 "assoc_list.m"
        return mercury__assoc_list__succeeded;
#line 385 "assoc_list.m"
      }
#line 385 "assoc_list.m"
      break;
#line 385 "assoc_list.m"
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
#line 385 "assoc_list.m"
  while (MR_TRUE)
#line 385 "assoc_list.m"
    {
#line 385 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 385 "assoc_list.m"
      {
#line 385 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 385 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 385 "assoc_list.m"
          *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 385 "assoc_list.m"
        else
#line 386 "assoc_list.m"
          {
#line 386 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 386 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 386 "assoc_list.m"
            MR_Box mercury__assoc_list__V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 386 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
#line 387 "assoc_list.m"
            MR_Box mercury__assoc_list___K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 388 "assoc_list.m"
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 388 "assoc_list.m"
            {
#line 388 "assoc_list.m"
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_14, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
#line 389 "assoc_list.m"
            /* direct tailcall eliminated */
#line 389 "assoc_list.m"
            {
#line 389 "assoc_list.m"
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
#line 389 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

#line 389 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 389 "assoc_list.m"
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 389 "assoc_list.m"
            }
#line 389 "assoc_list.m"
            continue;
#line 386 "assoc_list.m"
          }
#line 385 "assoc_list.m"
      }
#line 385 "assoc_list.m"
      break;
#line 385 "assoc_list.m"
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
#line 385 "assoc_list.m"
  while (MR_TRUE)
#line 385 "assoc_list.m"
    {
#line 385 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 385 "assoc_list.m"
      {
#line 385 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 385 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 385 "assoc_list.m"
          *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 385 "assoc_list.m"
        else
#line 386 "assoc_list.m"
          {
#line 386 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 386 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 386 "assoc_list.m"
            MR_Box mercury__assoc_list__V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 386 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
#line 387 "assoc_list.m"
            MR_Box mercury__assoc_list___K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 388 "assoc_list.m"
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 388 "assoc_list.m"
            {
#line 388 "assoc_list.m"
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_14, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
#line 389 "assoc_list.m"
            /* direct tailcall eliminated */
#line 389 "assoc_list.m"
            {
#line 389 "assoc_list.m"
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
#line 389 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

#line 389 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 389 "assoc_list.m"
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 389 "assoc_list.m"
            }
#line 389 "assoc_list.m"
            continue;
#line 386 "assoc_list.m"
          }
#line 385 "assoc_list.m"
      }
#line 385 "assoc_list.m"
      break;
#line 385 "assoc_list.m"
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
#line 385 "assoc_list.m"
  while (MR_TRUE)
#line 385 "assoc_list.m"
    {
#line 385 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 385 "assoc_list.m"
      {
#line 385 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 385 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 385 "assoc_list.m"
          *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 385 "assoc_list.m"
        else
#line 386 "assoc_list.m"
          {
#line 386 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 386 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 386 "assoc_list.m"
            MR_Box mercury__assoc_list__V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 386 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
#line 387 "assoc_list.m"
            MR_Box mercury__assoc_list___K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 388 "assoc_list.m"
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 388 "assoc_list.m"
            {
#line 388 "assoc_list.m"
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__V_14, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
#line 389 "assoc_list.m"
            /* direct tailcall eliminated */
#line 389 "assoc_list.m"
            {
#line 389 "assoc_list.m"
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
#line 389 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

#line 389 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 389 "assoc_list.m"
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 389 "assoc_list.m"
            }
#line 389 "assoc_list.m"
            continue;
#line 386 "assoc_list.m"
          }
#line 385 "assoc_list.m"
      }
#line 385 "assoc_list.m"
      break;
#line 385 "assoc_list.m"
    }
#line 145 "assoc_list.m"
}

#line 380 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_7_1(
#line 380 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg)
#line 380 "assoc_list.m"
{
#line 380 "assoc_list.m"
  {
#line 380 "assoc_list.m"
    struct mercury__assoc_list__foldl_keys_4_p_7_env_0_s * mercury__assoc_list__env_ptr = (struct mercury__assoc_list__foldl_keys_4_p_7_env_0_s *) mercury__assoc_list__env_ptr_arg;

#line 383 "assoc_list.m"
    {
#line 383 "assoc_list.m"
      mercury__assoc_list__foldl_keys_4_p_7((mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_K_19, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_A_20, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_V_21, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__P_1, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__KVs_11, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_17_17, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_4, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__cont, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__cont_env_ptr);
#line 383 "assoc_list.m"
      return;
    }
#line 380 "assoc_list.m"
  }
#line 380 "assoc_list.m"
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
#line 379 "assoc_list.m"
    {
#line 379 "assoc_list.m"
      MR_bool mercury__assoc_list__succeeded;

#line 379 "assoc_list.m"
      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 379 "assoc_list.m"
        {
#line 379 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_4) = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 379 "assoc_list.m"
          {
#line 379 "assoc_list.m"
            ((mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__cont)((mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__cont_env_ptr);
#line 379 "assoc_list.m"
            return;
          }
#line 379 "assoc_list.m"
        }
#line 379 "assoc_list.m"
      else
#line 380 "assoc_list.m"
        {
#line 380 "assoc_list.m"
          MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 380 "assoc_list.m"
          MR_Box mercury__assoc_list__K_13;
#line 381 "assoc_list.m"
          MR_Box mercury__assoc_list___V_14;
#line 382 "assoc_list.m"
          void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

#line 380 "assoc_list.m"
          (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 381 "assoc_list.m"
          mercury__assoc_list__K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 381 "assoc_list.m"
          mercury__assoc_list___V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 382 "assoc_list.m"
          mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__P_1, (MR_Integer) 1)));
#line 382 "assoc_list.m"
          {
#line 382 "assoc_list.m"
            mercury__assoc_list__func_0(((MR_Box) (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__P_1), mercury__assoc_list__K_13, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &(mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_Acc_17_17, mercury__assoc_list__foldl_keys_4_p_7_1, &mercury__assoc_list__env);
          }
#line 380 "assoc_list.m"
        }
#line 379 "assoc_list.m"
    }
#line 138 "assoc_list.m"
  }
#line 138 "assoc_list.m"
}

#line 380 "assoc_list.m"
static void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_6_1(
#line 380 "assoc_list.m"
  void * mercury__assoc_list__env_ptr_arg)
#line 380 "assoc_list.m"
{
#line 380 "assoc_list.m"
  {
#line 380 "assoc_list.m"
    struct mercury__assoc_list__foldl_keys_4_p_6_env_0_s * mercury__assoc_list__env_ptr = (struct mercury__assoc_list__foldl_keys_4_p_6_env_0_s *) mercury__assoc_list__env_ptr_arg;

#line 383 "assoc_list.m"
    {
#line 383 "assoc_list.m"
      mercury__assoc_list__foldl_keys_4_p_6((mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_K_19, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_A_20, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_V_21, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__P_1, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__KVs_11, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_17_17, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_4, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__cont, (mercury__assoc_list__env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__cont_env_ptr);
#line 383 "assoc_list.m"
      return;
    }
#line 380 "assoc_list.m"
  }
#line 380 "assoc_list.m"
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
#line 379 "assoc_list.m"
    {
#line 379 "assoc_list.m"
      MR_bool mercury__assoc_list__succeeded;

#line 379 "assoc_list.m"
      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 379 "assoc_list.m"
        {
#line 379 "assoc_list.m"
          *((mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_4) = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 379 "assoc_list.m"
          {
#line 379 "assoc_list.m"
            ((mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__cont)((mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__cont_env_ptr);
#line 379 "assoc_list.m"
            return;
          }
#line 379 "assoc_list.m"
        }
#line 379 "assoc_list.m"
      else
#line 380 "assoc_list.m"
        {
#line 380 "assoc_list.m"
          MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 380 "assoc_list.m"
          MR_Box mercury__assoc_list__K_13;
#line 381 "assoc_list.m"
          MR_Box mercury__assoc_list___V_14;
#line 382 "assoc_list.m"
          void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

#line 380 "assoc_list.m"
          (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 381 "assoc_list.m"
          mercury__assoc_list__K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 381 "assoc_list.m"
          mercury__assoc_list___V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 382 "assoc_list.m"
          mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__P_1, (MR_Integer) 1)));
#line 382 "assoc_list.m"
          {
#line 382 "assoc_list.m"
            mercury__assoc_list__func_0(((MR_Box) (mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__P_1), mercury__assoc_list__K_13, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &(mercury__assoc_list__env).mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_Acc_17_17, mercury__assoc_list__foldl_keys_4_p_6_1, &mercury__assoc_list__env);
          }
#line 380 "assoc_list.m"
        }
#line 379 "assoc_list.m"
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
#line 379 "assoc_list.m"
  while (MR_TRUE)
#line 379 "assoc_list.m"
    {
#line 379 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 379 "assoc_list.m"
      {
#line 379 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 379 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 379 "assoc_list.m"
          {
#line 379 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 379 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 379 "assoc_list.m"
          }
#line 379 "assoc_list.m"
        else
#line 380 "assoc_list.m"
          {
#line 380 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 380 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 380 "assoc_list.m"
            MR_Box mercury__assoc_list__K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 380 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
#line 381 "assoc_list.m"
            MR_Box mercury__assoc_list___V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 382 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 382 "assoc_list.m"
            {
#line 382 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__K_13, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
#line 380 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 383 "assoc_list.m"
              {
#line 383 "assoc_list.m"
                /* direct tailcall eliminated */
#line 383 "assoc_list.m"
                {
#line 383 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
#line 383 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

#line 383 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 383 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 383 "assoc_list.m"
                }
#line 383 "assoc_list.m"
                continue;
#line 383 "assoc_list.m"
              }
#line 380 "assoc_list.m"
          }
#line 379 "assoc_list.m"
        return mercury__assoc_list__succeeded;
#line 379 "assoc_list.m"
      }
#line 379 "assoc_list.m"
      break;
#line 379 "assoc_list.m"
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
#line 379 "assoc_list.m"
  while (MR_TRUE)
#line 379 "assoc_list.m"
    {
#line 379 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 379 "assoc_list.m"
      {
#line 379 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 379 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 379 "assoc_list.m"
          {
#line 379 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 379 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 379 "assoc_list.m"
          }
#line 379 "assoc_list.m"
        else
#line 380 "assoc_list.m"
          {
#line 380 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 380 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 380 "assoc_list.m"
            MR_Box mercury__assoc_list__K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 380 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
#line 381 "assoc_list.m"
            MR_Box mercury__assoc_list___V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 382 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 382 "assoc_list.m"
            {
#line 382 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__K_13, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
#line 380 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 383 "assoc_list.m"
              {
#line 383 "assoc_list.m"
                /* direct tailcall eliminated */
#line 383 "assoc_list.m"
                {
#line 383 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
#line 383 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

#line 383 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 383 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 383 "assoc_list.m"
                }
#line 383 "assoc_list.m"
                continue;
#line 383 "assoc_list.m"
              }
#line 380 "assoc_list.m"
          }
#line 379 "assoc_list.m"
        return mercury__assoc_list__succeeded;
#line 379 "assoc_list.m"
      }
#line 379 "assoc_list.m"
      break;
#line 379 "assoc_list.m"
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
#line 379 "assoc_list.m"
  while (MR_TRUE)
#line 379 "assoc_list.m"
    {
#line 379 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 379 "assoc_list.m"
      {
#line 379 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 379 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 379 "assoc_list.m"
          {
#line 379 "assoc_list.m"
            *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 379 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 379 "assoc_list.m"
          }
#line 379 "assoc_list.m"
        else
#line 380 "assoc_list.m"
          {
#line 380 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 380 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 380 "assoc_list.m"
            MR_Box mercury__assoc_list__K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 380 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
#line 381 "assoc_list.m"
            MR_Box mercury__assoc_list___V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 382 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 382 "assoc_list.m"
            {
#line 382 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__K_13, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
#line 380 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 383 "assoc_list.m"
              {
#line 383 "assoc_list.m"
                /* direct tailcall eliminated */
#line 383 "assoc_list.m"
                {
#line 383 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
#line 383 "assoc_list.m"
                  MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

#line 383 "assoc_list.m"
                  mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 383 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 383 "assoc_list.m"
                }
#line 383 "assoc_list.m"
                continue;
#line 383 "assoc_list.m"
              }
#line 380 "assoc_list.m"
          }
#line 379 "assoc_list.m"
        return mercury__assoc_list__succeeded;
#line 379 "assoc_list.m"
      }
#line 379 "assoc_list.m"
      break;
#line 379 "assoc_list.m"
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
#line 379 "assoc_list.m"
  while (MR_TRUE)
#line 379 "assoc_list.m"
    {
#line 379 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 379 "assoc_list.m"
      {
#line 379 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 379 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 379 "assoc_list.m"
          *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 379 "assoc_list.m"
        else
#line 380 "assoc_list.m"
          {
#line 380 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 380 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 380 "assoc_list.m"
            MR_Box mercury__assoc_list__K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 380 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
#line 381 "assoc_list.m"
            MR_Box mercury__assoc_list___V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 382 "assoc_list.m"
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 382 "assoc_list.m"
            {
#line 382 "assoc_list.m"
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__K_13, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
#line 383 "assoc_list.m"
            /* direct tailcall eliminated */
#line 383 "assoc_list.m"
            {
#line 383 "assoc_list.m"
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
#line 383 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

#line 383 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 383 "assoc_list.m"
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 383 "assoc_list.m"
            }
#line 383 "assoc_list.m"
            continue;
#line 380 "assoc_list.m"
          }
#line 379 "assoc_list.m"
      }
#line 379 "assoc_list.m"
      break;
#line 379 "assoc_list.m"
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
#line 379 "assoc_list.m"
  while (MR_TRUE)
#line 379 "assoc_list.m"
    {
#line 379 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 379 "assoc_list.m"
      {
#line 379 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 379 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 379 "assoc_list.m"
          *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 379 "assoc_list.m"
        else
#line 380 "assoc_list.m"
          {
#line 380 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 380 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 380 "assoc_list.m"
            MR_Box mercury__assoc_list__K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 380 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
#line 381 "assoc_list.m"
            MR_Box mercury__assoc_list___V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 382 "assoc_list.m"
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 382 "assoc_list.m"
            {
#line 382 "assoc_list.m"
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__K_13, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
#line 383 "assoc_list.m"
            /* direct tailcall eliminated */
#line 383 "assoc_list.m"
            {
#line 383 "assoc_list.m"
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
#line 383 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

#line 383 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 383 "assoc_list.m"
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 383 "assoc_list.m"
            }
#line 383 "assoc_list.m"
            continue;
#line 380 "assoc_list.m"
          }
#line 379 "assoc_list.m"
      }
#line 379 "assoc_list.m"
      break;
#line 379 "assoc_list.m"
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
#line 379 "assoc_list.m"
  while (MR_TRUE)
#line 379 "assoc_list.m"
    {
#line 379 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 379 "assoc_list.m"
      {
#line 379 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 379 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 379 "assoc_list.m"
          *mercury__assoc_list__STATE_VARIABLE_Acc_4 = mercury__assoc_list__STATE_VARIABLE_Acc_0_3;
#line 379 "assoc_list.m"
        else
#line 380 "assoc_list.m"
          {
#line 380 "assoc_list.m"
            MR_Word mercury__assoc_list__KV_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 380 "assoc_list.m"
            MR_Word mercury__assoc_list__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 380 "assoc_list.m"
            MR_Box mercury__assoc_list__K_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 0));
#line 380 "assoc_list.m"
            MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_17_17;
#line 381 "assoc_list.m"
            MR_Box mercury__assoc_list___V_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__KV_10, (MR_Integer) 1));
#line 382 "assoc_list.m"
            void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));

#line 382 "assoc_list.m"
            {
#line 382 "assoc_list.m"
              mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__K_13, mercury__assoc_list__STATE_VARIABLE_Acc_0_3, &mercury__assoc_list__STATE_VARIABLE_Acc_17_17);
            }
#line 383 "assoc_list.m"
            /* direct tailcall eliminated */
#line 383 "assoc_list.m"
            {
#line 383 "assoc_list.m"
              MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__KVs_11;
#line 383 "assoc_list.m"
              MR_Box mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__assoc_list__STATE_VARIABLE_Acc_17_17;

#line 383 "assoc_list.m"
              mercury__assoc_list__STATE_VARIABLE_Acc_0_3 = mercury__assoc_list__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 383 "assoc_list.m"
              mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 383 "assoc_list.m"
            }
#line 383 "assoc_list.m"
            continue;
#line 380 "assoc_list.m"
          }
#line 379 "assoc_list.m"
      }
#line 379 "assoc_list.m"
      break;
#line 379 "assoc_list.m"
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
#line 360 "assoc_list.m"
  {
#line 360 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;
#line 360 "assoc_list.m"
    MR_Word mercury__assoc_list__ABs_6;

#line 360 "assoc_list.m"
    {
#line 360 "assoc_list.m"
      mercury__assoc_list__merge_3_p_0(mercury__assoc_list__TypeInfo_for_K_7, mercury__assoc_list__TypeInfo_for_V_8, mercury__assoc_list__As_4, mercury__assoc_list__Bs_5, &mercury__assoc_list__ABs_6);
    }
#line 360 "assoc_list.m"
    return mercury__assoc_list__ABs_6;
#line 360 "assoc_list.m"
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
#line 362 "assoc_list.m"
  {
#line 362 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;

#line 362 "assoc_list.m"
    if ((mercury__assoc_list__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 362 "assoc_list.m"
      if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 362 "assoc_list.m"
        *mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 362 "assoc_list.m"
      else
#line 364 "assoc_list.m"
        *mercury__assoc_list__HeadVar__3_3 = mercury__assoc_list__HeadVar__2_2;
#line 362 "assoc_list.m"
    else
#line 362 "assoc_list.m"
      {
#line 362 "assoc_list.m"
        MR_Word mercury__assoc_list__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
#line 362 "assoc_list.m"
        MR_Word mercury__assoc_list__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 0)));

#line 362 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 363 "assoc_list.m"
          *mercury__assoc_list__HeadVar__3_3 = mercury__assoc_list__HeadVar__1_1;
#line 362 "assoc_list.m"
        else
#line 365 "assoc_list.m"
          {
#line 365 "assoc_list.m"
            MR_Word mercury__assoc_list__B_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 365 "assoc_list.m"
            MR_Word mercury__assoc_list__Bs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 367 "assoc_list.m"
            MR_Box mercury__assoc_list__AK_13 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_26_26, (MR_Integer) 0));
#line 367 "assoc_list.m"
            MR_Box mercury__assoc_list__BK_15 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__B_10, (MR_Integer) 0));
#line 367 "assoc_list.m"
            MR_Word mercury__assoc_list__V_24_24;
#line 367 "assoc_list.m"
            MR_Box mercury__assoc_list___AV_14 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_26_26, (MR_Integer) 1));
#line 368 "assoc_list.m"
            MR_Box mercury__assoc_list___BV_16 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__B_10, (MR_Integer) 1));

#line 369 "assoc_list.m"
            {
#line 369 "assoc_list.m"
              mercury__builtin__compare_3_p_0(mercury__assoc_list__TypeInfo_for_K_22, &mercury__assoc_list__V_24_24, mercury__assoc_list__AK_13, mercury__assoc_list__BK_15);
            }
#line 369 "assoc_list.m"
            mercury__assoc_list__succeeded = ((MR_Integer) 2 == mercury__assoc_list__V_24_24);
#line 373 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 371 "assoc_list.m"
              {
#line 371 "assoc_list.m"
                MR_Word mercury__assoc_list__Cs0_17;

#line 371 "assoc_list.m"
                {
#line 371 "assoc_list.m"
                  mercury__assoc_list__merge_3_p_0(mercury__assoc_list__TypeInfo_for_K_22, mercury__assoc_list__TypeInfo_for_V_23, mercury__assoc_list__HeadVar__1_1, mercury__assoc_list__Bs_11, &mercury__assoc_list__Cs0_17);
                }
#line 372 "assoc_list.m"
                {
#line 372 "assoc_list.m"
                  MR_Word base;
#line 372 "assoc_list.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 372 "assoc_list.m"
                  *mercury__assoc_list__HeadVar__3_3 = base;
#line 372 "assoc_list.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__B_10));
#line 372 "assoc_list.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__Cs0_17));
#line 372 "assoc_list.m"
                }
#line 371 "assoc_list.m"
              }
#line 373 "assoc_list.m"
            else
#line 375 "assoc_list.m"
              {
#line 375 "assoc_list.m"
                MR_Word mercury__assoc_list__Cs0_21;

#line 375 "assoc_list.m"
                {
#line 375 "assoc_list.m"
                  mercury__assoc_list__merge_3_p_0(mercury__assoc_list__TypeInfo_for_K_22, mercury__assoc_list__TypeInfo_for_V_23, mercury__assoc_list__V_25_25, mercury__assoc_list__HeadVar__2_2, &mercury__assoc_list__Cs0_21);
                }
#line 376 "assoc_list.m"
                {
#line 376 "assoc_list.m"
                  MR_Word base;
#line 376 "assoc_list.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "assoc_list.m"
                  *mercury__assoc_list__HeadVar__3_3 = base;
#line 376 "assoc_list.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_26_26));
#line 376 "assoc_list.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__Cs0_21));
#line 376 "assoc_list.m"
                }
#line 375 "assoc_list.m"
              }
#line 365 "assoc_list.m"
          }
#line 362 "assoc_list.m"
      }
#line 362 "assoc_list.m"
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
#line 349 "assoc_list.m"
  {
#line 349 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;

#line 349 "assoc_list.m"
    if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 349 "assoc_list.m"
      {
#line 349 "assoc_list.m"
        *mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 349 "assoc_list.m"
        *mercury__assoc_list__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 349 "assoc_list.m"
      }
#line 349 "assoc_list.m"
    else
#line 350 "assoc_list.m"
      {
#line 350 "assoc_list.m"
        MR_Box mercury__assoc_list__HK_7;
#line 350 "assoc_list.m"
        MR_Word mercury__assoc_list__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 350 "assoc_list.m"
        MR_Word mercury__assoc_list__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 350 "assoc_list.m"
        MR_Box mercury__assoc_list__HV_8;
#line 351 "assoc_list.m"
        MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box);

#line 350 "assoc_list.m"
        mercury__assoc_list__HK_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_14_14, (MR_Integer) 0));
#line 350 "assoc_list.m"
        mercury__assoc_list__HV_8 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_14_14, (MR_Integer) 1));
#line 351 "assoc_list.m"
        mercury__assoc_list__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));
#line 351 "assoc_list.m"
        {
#line 351 "assoc_list.m"
          mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__HK_7);
        }
#line 354 "assoc_list.m"
        if (mercury__assoc_list__succeeded)
#line 352 "assoc_list.m"
          {
#line 352 "assoc_list.m"
            MR_Word mercury__assoc_list__TrueTail_12;

#line 352 "assoc_list.m"
            {
#line 352 "assoc_list.m"
              mercury__assoc_list__filter_4_p_0(mercury__assoc_list__TypeInfo_for_K_17, mercury__assoc_list__TypeInfo_for_V_18, mercury__assoc_list__P_1, mercury__assoc_list__T_9, &mercury__assoc_list__TrueTail_12, mercury__assoc_list__HeadVar__4_4);
            }
#line 353 "assoc_list.m"
            {
#line 353 "assoc_list.m"
              MR_Word base;
#line 353 "assoc_list.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "assoc_list.m"
              *mercury__assoc_list__HeadVar__3_3 = base;
#line 353 "assoc_list.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_14_14));
#line 353 "assoc_list.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__TrueTail_12));
#line 353 "assoc_list.m"
            }
#line 352 "assoc_list.m"
          }
#line 354 "assoc_list.m"
        else
#line 355 "assoc_list.m"
          {
#line 355 "assoc_list.m"
            MR_Word mercury__assoc_list__FalseTail_13;

#line 355 "assoc_list.m"
            {
#line 355 "assoc_list.m"
              mercury__assoc_list__filter_4_p_0(mercury__assoc_list__TypeInfo_for_K_17, mercury__assoc_list__TypeInfo_for_V_18, mercury__assoc_list__P_1, mercury__assoc_list__T_9, mercury__assoc_list__HeadVar__3_3, &mercury__assoc_list__FalseTail_13);
            }
#line 356 "assoc_list.m"
            {
#line 356 "assoc_list.m"
              MR_Word base;
#line 356 "assoc_list.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "assoc_list.m"
              *mercury__assoc_list__HeadVar__4_4 = base;
#line 356 "assoc_list.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_14_14));
#line 356 "assoc_list.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__FalseTail_13));
#line 356 "assoc_list.m"
            }
#line 355 "assoc_list.m"
          }
#line 350 "assoc_list.m"
      }
#line 349 "assoc_list.m"
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
#line 347 "assoc_list.m"
  {
#line 347 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;
#line 347 "assoc_list.m"
    MR_Word mercury__assoc_list__Falses_6;

#line 347 "assoc_list.m"
    {
#line 347 "assoc_list.m"
      mercury__assoc_list__negated_filter_3_p_0(mercury__assoc_list__TypeInfo_for_K_7, mercury__assoc_list__TypeInfo_for_V_8, mercury__assoc_list__P_4, mercury__assoc_list__List_5, &mercury__assoc_list__Falses_6);
    }
#line 347 "assoc_list.m"
    return mercury__assoc_list__Falses_6;
#line 347 "assoc_list.m"
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
#line 337 "assoc_list.m"
  while (MR_TRUE)
#line 337 "assoc_list.m"
    {
#line 337 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 337 "assoc_list.m"
      {
#line 337 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 337 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 337 "assoc_list.m"
          *mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 337 "assoc_list.m"
        else
#line 338 "assoc_list.m"
          {
#line 338 "assoc_list.m"
            MR_Box mercury__assoc_list__HK_6;
#line 338 "assoc_list.m"
            MR_Word mercury__assoc_list__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 338 "assoc_list.m"
            MR_Word mercury__assoc_list__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 338 "assoc_list.m"
            MR_Box mercury__assoc_list__HV_7;
#line 339 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box);

#line 338 "assoc_list.m"
            mercury__assoc_list__HK_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 0));
#line 338 "assoc_list.m"
            mercury__assoc_list__HV_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 1));
#line 339 "assoc_list.m"
            mercury__assoc_list__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));
#line 339 "assoc_list.m"
            {
#line 339 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__HK_6);
            }
#line 341 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 340 "assoc_list.m"
              {
#line 340 "assoc_list.m"
                /* direct tailcall eliminated */
#line 340 "assoc_list.m"
                {
#line 340 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__T_8;

#line 340 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 340 "assoc_list.m"
                }
#line 340 "assoc_list.m"
                continue;
#line 340 "assoc_list.m"
              }
#line 341 "assoc_list.m"
            else
#line 342 "assoc_list.m"
              {
#line 342 "assoc_list.m"
                MR_Word mercury__assoc_list__FalseTail_10;

#line 342 "assoc_list.m"
                {
#line 342 "assoc_list.m"
                  mercury__assoc_list__negated_filter_3_p_0(mercury__assoc_list__TypeInfo_for_K_13, mercury__assoc_list__TypeInfo_for_V_14, mercury__assoc_list__P_1, mercury__assoc_list__T_8, &mercury__assoc_list__FalseTail_10);
                }
#line 343 "assoc_list.m"
                {
#line 343 "assoc_list.m"
                  MR_Word base;
#line 343 "assoc_list.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "assoc_list.m"
                  *mercury__assoc_list__HeadVar__3_3 = base;
#line 343 "assoc_list.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_11_11));
#line 343 "assoc_list.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__FalseTail_10));
#line 343 "assoc_list.m"
                }
#line 342 "assoc_list.m"
              }
#line 338 "assoc_list.m"
          }
#line 337 "assoc_list.m"
      }
#line 337 "assoc_list.m"
      break;
#line 337 "assoc_list.m"
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
#line 335 "assoc_list.m"
  {
#line 335 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;
#line 335 "assoc_list.m"
    MR_Word mercury__assoc_list__Trues_6;

#line 335 "assoc_list.m"
    {
#line 335 "assoc_list.m"
      mercury__assoc_list__filter_3_p_0(mercury__assoc_list__TypeInfo_for_K_7, mercury__assoc_list__TypeInfo_for_V_8, mercury__assoc_list__P_4, mercury__assoc_list__List_5, &mercury__assoc_list__Trues_6);
    }
#line 335 "assoc_list.m"
    return mercury__assoc_list__Trues_6;
#line 335 "assoc_list.m"
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
#line 325 "assoc_list.m"
  while (MR_TRUE)
#line 325 "assoc_list.m"
    {
#line 325 "assoc_list.m"
      /* tailcall optimized into a loop */
#line 325 "assoc_list.m"
      {
#line 325 "assoc_list.m"
        MR_bool mercury__assoc_list__succeeded;

#line 325 "assoc_list.m"
        if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 325 "assoc_list.m"
          *mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 325 "assoc_list.m"
        else
#line 326 "assoc_list.m"
          {
#line 326 "assoc_list.m"
            MR_Box mercury__assoc_list__HK_6;
#line 326 "assoc_list.m"
            MR_Word mercury__assoc_list__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 326 "assoc_list.m"
            MR_Word mercury__assoc_list__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 326 "assoc_list.m"
            MR_Box mercury__assoc_list__HV_7;
#line 327 "assoc_list.m"
            MR_bool MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box);

#line 326 "assoc_list.m"
            mercury__assoc_list__HK_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 0));
#line 326 "assoc_list.m"
            mercury__assoc_list__HV_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 1));
#line 327 "assoc_list.m"
            mercury__assoc_list__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__P_1, (MR_Integer) 1)));
#line 327 "assoc_list.m"
            {
#line 327 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__P_1), mercury__assoc_list__HK_6);
            }
#line 330 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 328 "assoc_list.m"
              {
#line 328 "assoc_list.m"
                MR_Word mercury__assoc_list__TrueTail_10;

#line 328 "assoc_list.m"
                {
#line 328 "assoc_list.m"
                  mercury__assoc_list__filter_3_p_0(mercury__assoc_list__TypeInfo_for_K_13, mercury__assoc_list__TypeInfo_for_V_14, mercury__assoc_list__P_1, mercury__assoc_list__T_8, &mercury__assoc_list__TrueTail_10);
                }
#line 329 "assoc_list.m"
                {
#line 329 "assoc_list.m"
                  MR_Word base;
#line 329 "assoc_list.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 329 "assoc_list.m"
                  *mercury__assoc_list__HeadVar__3_3 = base;
#line 329 "assoc_list.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_11_11));
#line 329 "assoc_list.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__TrueTail_10));
#line 329 "assoc_list.m"
                }
#line 328 "assoc_list.m"
              }
#line 330 "assoc_list.m"
            else
#line 331 "assoc_list.m"
              {
#line 331 "assoc_list.m"
                /* direct tailcall eliminated */
#line 331 "assoc_list.m"
                {
#line 331 "assoc_list.m"
                  MR_Word mercury__assoc_list__HeadVar__2__tmp_copy_2 = mercury__assoc_list__T_8;

#line 331 "assoc_list.m"
                  mercury__assoc_list__HeadVar__2_2 = mercury__assoc_list__HeadVar__2__tmp_copy_2;
#line 331 "assoc_list.m"
                }
#line 331 "assoc_list.m"
                continue;
#line 331 "assoc_list.m"
              }
#line 326 "assoc_list.m"
          }
#line 325 "assoc_list.m"
      }
#line 325 "assoc_list.m"
      break;
#line 325 "assoc_list.m"
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
#line 315 "assoc_list.m"
  {
#line 315 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;

#line 315 "assoc_list.m"
    if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 315 "assoc_list.m"
      *mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 315 "assoc_list.m"
    else
#line 316 "assoc_list.m"
      {
#line 316 "assoc_list.m"
        MR_Box mercury__assoc_list__K_6;
#line 316 "assoc_list.m"
        MR_Box mercury__assoc_list__V0_7;
#line 316 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 316 "assoc_list.m"
        MR_Box mercury__assoc_list__V_9;
#line 316 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs_10;
#line 316 "assoc_list.m"
        MR_Word mercury__assoc_list__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 316 "assoc_list.m"
        MR_Word mercury__assoc_list__V_12_12;
#line 317 "assoc_list.m"
        void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 316 "assoc_list.m"
        mercury__assoc_list__K_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 0));
#line 316 "assoc_list.m"
        mercury__assoc_list__V0_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 1));
#line 317 "assoc_list.m"
        mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
#line 317 "assoc_list.m"
        {
#line 317 "assoc_list.m"
          mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__HeadVar__1_1), mercury__assoc_list__K_6, mercury__assoc_list__V0_7, &mercury__assoc_list__V_9);
        }
#line 316 "assoc_list.m"
        {
#line 316 "assoc_list.m"
          mercury__assoc_list__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 316 "assoc_list.m"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 0) = mercury__assoc_list__K_6;
#line 316 "assoc_list.m"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 1) = mercury__assoc_list__V_9;
#line 316 "assoc_list.m"
        }
#line 318 "assoc_list.m"
        {
#line 318 "assoc_list.m"
          mercury__assoc_list__map_values_3_p_0(mercury__assoc_list__TypeInfo_for_K_13, mercury__assoc_list__TypeInfo_for_V_14, mercury__assoc_list__TypeInfo_for_W_15, mercury__assoc_list__HeadVar__1_1, mercury__assoc_list__KVs0_8, &mercury__assoc_list__KVs_10);
        }
#line 316 "assoc_list.m"
        {
#line 316 "assoc_list.m"
          MR_Word base;
#line 316 "assoc_list.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "assoc_list.m"
          *mercury__assoc_list__HeadVar__3_3 = base;
#line 316 "assoc_list.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_12_12));
#line 316 "assoc_list.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__KVs_10));
#line 316 "assoc_list.m"
        }
#line 316 "assoc_list.m"
      }
#line 315 "assoc_list.m"
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
#line 320 "assoc_list.m"
  {
#line 320 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;
#line 320 "assoc_list.m"
    MR_Word mercury__assoc_list__HeadVar__3_3;

#line 320 "assoc_list.m"
    if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 320 "assoc_list.m"
      mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 320 "assoc_list.m"
    else
#line 321 "assoc_list.m"
      {
#line 321 "assoc_list.m"
        MR_Box mercury__assoc_list__K_6;
#line 321 "assoc_list.m"
        MR_Box mercury__assoc_list__V0_7;
#line 321 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 321 "assoc_list.m"
        MR_Box mercury__assoc_list__V_9;
#line 321 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs_10;
#line 321 "assoc_list.m"
        MR_Word mercury__assoc_list__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 321 "assoc_list.m"
        MR_Word mercury__assoc_list__V_12_12;
#line 322 "assoc_list.m"
        MR_Box MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box);

#line 321 "assoc_list.m"
        mercury__assoc_list__K_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 0));
#line 321 "assoc_list.m"
        mercury__assoc_list__V0_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 1));
#line 322 "assoc_list.m"
        mercury__assoc_list__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
#line 322 "assoc_list.m"
        {
#line 322 "assoc_list.m"
          mercury__assoc_list__V_9 = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__HeadVar__1_1), mercury__assoc_list__K_6, mercury__assoc_list__V0_7);
        }
#line 321 "assoc_list.m"
        {
#line 321 "assoc_list.m"
          mercury__assoc_list__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 321 "assoc_list.m"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 0) = mercury__assoc_list__K_6;
#line 321 "assoc_list.m"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 1) = mercury__assoc_list__V_9;
#line 321 "assoc_list.m"
        }
#line 323 "assoc_list.m"
        {
#line 323 "assoc_list.m"
          mercury__assoc_list__KVs_10 = mercury__assoc_list__map_values_2_f_0(mercury__assoc_list__TypeInfo_for_K_13, mercury__assoc_list__TypeInfo_for_V_14, mercury__assoc_list__TypeInfo_for_W_15, mercury__assoc_list__HeadVar__1_1, mercury__assoc_list__KVs0_8);
        }
#line 321 "assoc_list.m"
        {
#line 321 "assoc_list.m"
          mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "assoc_list.m"
          MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__3_3, 0) = ((MR_Box) (mercury__assoc_list__V_12_12));
#line 321 "assoc_list.m"
          MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__3_3, 1) = ((MR_Box) (mercury__assoc_list__KVs_10));
#line 321 "assoc_list.m"
        }
#line 321 "assoc_list.m"
      }
#line 320 "assoc_list.m"
    return mercury__assoc_list__HeadVar__3_3;
#line 320 "assoc_list.m"
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
#line 305 "assoc_list.m"
  {
#line 305 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;

#line 305 "assoc_list.m"
    if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 305 "assoc_list.m"
      *mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 305 "assoc_list.m"
    else
#line 306 "assoc_list.m"
      {
#line 306 "assoc_list.m"
        MR_Box mercury__assoc_list__K_6;
#line 306 "assoc_list.m"
        MR_Box mercury__assoc_list__V0_7;
#line 306 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 306 "assoc_list.m"
        MR_Box mercury__assoc_list__V_9;
#line 306 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs_10;
#line 306 "assoc_list.m"
        MR_Word mercury__assoc_list__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 306 "assoc_list.m"
        MR_Word mercury__assoc_list__V_12_12;
#line 307 "assoc_list.m"
        void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box *);

#line 306 "assoc_list.m"
        mercury__assoc_list__K_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 0));
#line 306 "assoc_list.m"
        mercury__assoc_list__V0_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 1));
#line 307 "assoc_list.m"
        mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
#line 307 "assoc_list.m"
        {
#line 307 "assoc_list.m"
          mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__HeadVar__1_1), mercury__assoc_list__V0_7, &mercury__assoc_list__V_9);
        }
#line 306 "assoc_list.m"
        {
#line 306 "assoc_list.m"
          mercury__assoc_list__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 306 "assoc_list.m"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 0) = mercury__assoc_list__K_6;
#line 306 "assoc_list.m"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 1) = mercury__assoc_list__V_9;
#line 306 "assoc_list.m"
        }
#line 308 "assoc_list.m"
        {
#line 308 "assoc_list.m"
          mercury__assoc_list__map_values_only_3_p_0(mercury__assoc_list__TypeInfo_for_V_13, mercury__assoc_list__TypeInfo_for_W_14, mercury__assoc_list__TypeInfo_for_K_15, mercury__assoc_list__HeadVar__1_1, mercury__assoc_list__KVs0_8, &mercury__assoc_list__KVs_10);
        }
#line 306 "assoc_list.m"
        {
#line 306 "assoc_list.m"
          MR_Word base;
#line 306 "assoc_list.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "assoc_list.m"
          *mercury__assoc_list__HeadVar__3_3 = base;
#line 306 "assoc_list.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_12_12));
#line 306 "assoc_list.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__KVs_10));
#line 306 "assoc_list.m"
        }
#line 306 "assoc_list.m"
      }
#line 305 "assoc_list.m"
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
#line 310 "assoc_list.m"
  {
#line 310 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;
#line 310 "assoc_list.m"
    MR_Word mercury__assoc_list__HeadVar__3_3;

#line 310 "assoc_list.m"
    if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 310 "assoc_list.m"
      mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 310 "assoc_list.m"
    else
#line 311 "assoc_list.m"
      {
#line 311 "assoc_list.m"
        MR_Box mercury__assoc_list__K_6;
#line 311 "assoc_list.m"
        MR_Box mercury__assoc_list__V0_7;
#line 311 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 311 "assoc_list.m"
        MR_Box mercury__assoc_list__V_9;
#line 311 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs_10;
#line 311 "assoc_list.m"
        MR_Word mercury__assoc_list__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 311 "assoc_list.m"
        MR_Word mercury__assoc_list__V_12_12;
#line 312 "assoc_list.m"
        MR_Box MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box);

#line 311 "assoc_list.m"
        mercury__assoc_list__K_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 0));
#line 311 "assoc_list.m"
        mercury__assoc_list__V0_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 1));
#line 312 "assoc_list.m"
        mercury__assoc_list__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
#line 312 "assoc_list.m"
        {
#line 312 "assoc_list.m"
          mercury__assoc_list__V_9 = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__HeadVar__1_1), mercury__assoc_list__V0_7);
        }
#line 311 "assoc_list.m"
        {
#line 311 "assoc_list.m"
          mercury__assoc_list__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 311 "assoc_list.m"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 0) = mercury__assoc_list__K_6;
#line 311 "assoc_list.m"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 1) = mercury__assoc_list__V_9;
#line 311 "assoc_list.m"
        }
#line 313 "assoc_list.m"
        {
#line 313 "assoc_list.m"
          mercury__assoc_list__KVs_10 = mercury__assoc_list__map_values_only_2_f_0(mercury__assoc_list__TypeInfo_for_V_13, mercury__assoc_list__TypeInfo_for_W_14, mercury__assoc_list__TypeInfo_for_K_15, mercury__assoc_list__HeadVar__1_1, mercury__assoc_list__KVs0_8);
        }
#line 311 "assoc_list.m"
        {
#line 311 "assoc_list.m"
          mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "assoc_list.m"
          MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__3_3, 0) = ((MR_Box) (mercury__assoc_list__V_12_12));
#line 311 "assoc_list.m"
          MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__3_3, 1) = ((MR_Box) (mercury__assoc_list__KVs_10));
#line 311 "assoc_list.m"
        }
#line 311 "assoc_list.m"
      }
#line 310 "assoc_list.m"
    return mercury__assoc_list__HeadVar__3_3;
#line 310 "assoc_list.m"
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
#line 295 "assoc_list.m"
  {
#line 295 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;

#line 295 "assoc_list.m"
    if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 295 "assoc_list.m"
      *mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 295 "assoc_list.m"
    else
#line 296 "assoc_list.m"
      {
#line 296 "assoc_list.m"
        MR_Box mercury__assoc_list__K0_6;
#line 296 "assoc_list.m"
        MR_Box mercury__assoc_list__V_7;
#line 296 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 296 "assoc_list.m"
        MR_Box mercury__assoc_list__K_9;
#line 296 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs_10;
#line 296 "assoc_list.m"
        MR_Word mercury__assoc_list__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 296 "assoc_list.m"
        MR_Word mercury__assoc_list__V_12_12;
#line 297 "assoc_list.m"
        void MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box, MR_Box *);

#line 296 "assoc_list.m"
        mercury__assoc_list__K0_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 0));
#line 296 "assoc_list.m"
        mercury__assoc_list__V_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 1));
#line 297 "assoc_list.m"
        mercury__assoc_list__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
#line 297 "assoc_list.m"
        {
#line 297 "assoc_list.m"
          mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__HeadVar__1_1), mercury__assoc_list__K0_6, &mercury__assoc_list__K_9);
        }
#line 296 "assoc_list.m"
        {
#line 296 "assoc_list.m"
          mercury__assoc_list__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 296 "assoc_list.m"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 0) = mercury__assoc_list__K_9;
#line 296 "assoc_list.m"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 1) = mercury__assoc_list__V_7;
#line 296 "assoc_list.m"
        }
#line 298 "assoc_list.m"
        {
#line 298 "assoc_list.m"
          mercury__assoc_list__map_keys_only_3_p_0(mercury__assoc_list__TypeInfo_for_K_13, mercury__assoc_list__TypeInfo_for_L_14, mercury__assoc_list__TypeInfo_for_V_15, mercury__assoc_list__HeadVar__1_1, mercury__assoc_list__KVs0_8, &mercury__assoc_list__KVs_10);
        }
#line 296 "assoc_list.m"
        {
#line 296 "assoc_list.m"
          MR_Word base;
#line 296 "assoc_list.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "assoc_list.m"
          *mercury__assoc_list__HeadVar__3_3 = base;
#line 296 "assoc_list.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_12_12));
#line 296 "assoc_list.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__KVs_10));
#line 296 "assoc_list.m"
        }
#line 296 "assoc_list.m"
      }
#line 295 "assoc_list.m"
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
#line 300 "assoc_list.m"
  {
#line 300 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded;
#line 300 "assoc_list.m"
    MR_Word mercury__assoc_list__HeadVar__3_3;

#line 300 "assoc_list.m"
    if ((mercury__assoc_list__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 300 "assoc_list.m"
      mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 300 "assoc_list.m"
    else
#line 301 "assoc_list.m"
      {
#line 301 "assoc_list.m"
        MR_Box mercury__assoc_list__K0_6;
#line 301 "assoc_list.m"
        MR_Box mercury__assoc_list__V_7;
#line 301 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 1)));
#line 301 "assoc_list.m"
        MR_Box mercury__assoc_list__K_9;
#line 301 "assoc_list.m"
        MR_Word mercury__assoc_list__KVs_10;
#line 301 "assoc_list.m"
        MR_Word mercury__assoc_list__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__2_2, (MR_Integer) 0)));
#line 301 "assoc_list.m"
        MR_Word mercury__assoc_list__V_12_12;
#line 302 "assoc_list.m"
        MR_Box MR_CALL (* mercury__assoc_list__func_0)(MR_Box, MR_Box);

#line 301 "assoc_list.m"
        mercury__assoc_list__K0_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 0));
#line 301 "assoc_list.m"
        mercury__assoc_list__V_7 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_11_11, (MR_Integer) 1));
#line 302 "assoc_list.m"
        mercury__assoc_list__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
#line 302 "assoc_list.m"
        {
#line 302 "assoc_list.m"
          mercury__assoc_list__K_9 = mercury__assoc_list__func_0(((MR_Box) mercury__assoc_list__HeadVar__1_1), mercury__assoc_list__K0_6);
        }
#line 301 "assoc_list.m"
        {
#line 301 "assoc_list.m"
          mercury__assoc_list__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 301 "assoc_list.m"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 0) = mercury__assoc_list__K_9;
#line 301 "assoc_list.m"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, 1) = mercury__assoc_list__V_7;
#line 301 "assoc_list.m"
        }
#line 303 "assoc_list.m"
        {
#line 303 "assoc_list.m"
          mercury__assoc_list__KVs_10 = mercury__assoc_list__map_keys_only_2_f_0(mercury__assoc_list__TypeInfo_for_K_13, mercury__assoc_list__TypeInfo_for_L_14, mercury__assoc_list__TypeInfo_for_V_15, mercury__assoc_list__HeadVar__1_1, mercury__assoc_list__KVs0_8);
        }
#line 301 "assoc_list.m"
        {
#line 301 "assoc_list.m"
          mercury__assoc_list__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "assoc_list.m"
          MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__3_3, 0) = ((MR_Box) (mercury__assoc_list__V_12_12));
#line 301 "assoc_list.m"
          MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__3_3, 1) = ((MR_Box) (mercury__assoc_list__KVs_10));
#line 301 "assoc_list.m"
        }
#line 301 "assoc_list.m"
      }
#line 300 "assoc_list.m"
    return mercury__assoc_list__HeadVar__3_3;
#line 300 "assoc_list.m"
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
  MR_Word * mercury__assoc_list__Filtered_10)
#line 76 "assoc_list.m"
{
#line 286 "assoc_list.m"
  {
#line 286 "assoc_list.m"
    MR_bool mercury__assoc_list__succeeded = ((MR_tag((MR_Word) mercury__assoc_list__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 286 "assoc_list.m"
    MR_Box mercury__assoc_list__K_5;
#line 286 "assoc_list.m"
    MR_Box mercury__assoc_list__V_6;
#line 286 "assoc_list.m"
    MR_Word mercury__assoc_list__KVs_7;
#line 286 "assoc_list.m"
    MR_Word mercury__assoc_list__V_12_12;

#line 286 "assoc_list.m"
    if (mercury__assoc_list__succeeded)
#line 286 "assoc_list.m"
      {
#line 286 "assoc_list.m"
        mercury__assoc_list__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 0)));
#line 286 "assoc_list.m"
        mercury__assoc_list__KVs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__assoc_list__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "assoc_list.m"
        mercury__assoc_list__K_5 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, (MR_Integer) 0));
#line 286 "assoc_list.m"
        mercury__assoc_list__V_6 = (MR_hl_field(MR_mktag(0), mercury__assoc_list__V_12_12, (MR_Integer) 1));
#line 287 "assoc_list.m"
        {
#line 287 "assoc_list.m"
          mercury__assoc_list__succeeded = mercury__builtin__unify_2_p_0(mercury__assoc_list__TypeInfo_for_K_14, mercury__assoc_list__K_5, mercury__assoc_list__Key_8);
        }
#line 290 "assoc_list.m"
        if (mercury__assoc_list__succeeded)
#line 288 "assoc_list.m"
          {
#line 288 "assoc_list.m"
            *mercury__assoc_list__Value_9 = mercury__assoc_list__V_6;
#line 289 "assoc_list.m"
            *mercury__assoc_list__Filtered_10 = mercury__assoc_list__KVs_7;
#line 288 "assoc_list.m"
            mercury__assoc_list__succeeded = MR_TRUE;
#line 288 "assoc_list.m"
          }
#line 290 "assoc_list.m"
        else
#line 291 "assoc_list.m"
          {
#line 291 "assoc_list.m"
            MR_Word mercury__assoc_list__FilteredTail_11;

#line 291 "assoc_list.m"
            {
#line 291 "assoc_list.m"
              mercury__assoc_list__succeeded = mercury__assoc_list__remove_4_p_0(mercury__assoc_list__TypeInfo_for_K_14, mercury__assoc_list__TypeInfo_for_V_15, mercury__assoc_list__KVs_7, mercury__assoc_list__Key_8, mercury__assoc_list__Value_9, &mercury__assoc_list__FilteredTail_11);
            }
#line 291 "assoc_list.m"
            if (mercury__assoc_list__succeeded)
#line 291 "assoc_list.m"
              {
#line 292 "assoc_list.m"
                {
#line 292 "assoc_list.m"
                  MR_Word base;
#line 292 "assoc_list.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "assoc_list.m"
                  *mercury__assoc_list__Filtered_10 = base;
#line 292 "assoc_list.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__assoc_list__V_12_12));
#line 292 "assoc_list.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__assoc_list__FilteredTail_11));
#line 292 "assoc_list.m"
                }
#line 292 "assoc_list.m"
                mercury__assoc_list__succeeded = MR_TRUE;
#line 291 "assoc_list.m"
              }
#line 291 "assoc_list.m"
          }
#line 286 "assoc_list.m"
      }
#line 286 "assoc_list.m"
    return mercury__assoc_list__succeeded;
#line 286 "assoc_list.m"
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
    MR_Box mercury__assoc_list__VPrime_7;

#line 280 "assoc_list.m"
    {
#line 280 "assoc_list.m"
      mercury__assoc_list__succeeded = mercury__assoc_list__search_3_p_0(mercury__assoc_list__TypeInfo_for_K_9, mercury__assoc_list__TypeInfo_for_V_10, mercury__assoc_list__AL_4, mercury__assoc_list__K_5, &mercury__assoc_list__VPrime_7);
    }
#line 282 "assoc_list.m"
    if (mercury__assoc_list__succeeded)
#line 281 "assoc_list.m"
      mercury__assoc_list__V_6 = mercury__assoc_list__VPrime_7;
#line 282 "assoc_list.m"
    else
#line 283 "assoc_list.m"
      {
#line 283 "assoc_list.m"
        {
#line 283 "assoc_list.m"
          mercury__require__report_lookup_error_2_p_0(mercury__assoc_list__TypeInfo_for_K_9, (MR_String) "assoc_list.det_elem: key not found", mercury__assoc_list__K_5);
        }
#line 283 "assoc_list.m"
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
    MR_Word mercury__assoc_list__KVsPrime_7;

#line 226 "assoc_list.m"
    {
#line 226 "assoc_list.m"
      mercury__assoc_list__succeeded = mercury__assoc_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__assoc_list__Ks_4, mercury__assoc_list__Vs_5, &mercury__assoc_list__KVsPrime_7);
    }
#line 228 "assoc_list.m"
    if (mercury__assoc_list__succeeded)
#line 227 "assoc_list.m"
      *mercury__assoc_list__KVs_6 = mercury__assoc_list__KVsPrime_7;
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
        MR_String mercury__assoc_list__V_21_21;
#line 229 "assoc_list.m"
        MR_String mercury__assoc_list__V_23_23;
#line 229 "assoc_list.m"
        MR_String mercury__assoc_list__V_24_24;
#line 229 "assoc_list.m"
        MR_String mercury__assoc_list__V_26_26;
#line 229 "assoc_list.m"
        MR_String mercury__assoc_list__V_27_27;
#line 197 "type_desc.opt"
        MR_Word mercury__assoc_list__V_36_36;
#line 197 "type_desc.opt"
        MR_Word mercury__assoc_list__V_37_37;

#line 6300 "assoc_list.c"
        {
#line 6302 "assoc_list.c"
          mercury__assoc_list__TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6304 "assoc_list.c"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_34_34, 0) = ((MR_Box) (mercury__assoc_list__TypeCtorInfo_33_33));
#line 6306 "assoc_list.c"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_34_34, 1) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_K_31));
#line 6308 "assoc_list.c"
        }
#line 197 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__assoc_list__from_corresponding_lists_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__assoc_list__TypeInfo_34_34 ;
		{
#line 197 "type_desc.opt"
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
#line 6336 "assoc_list.c"

		;}
#undef MR_PROC_LABEL
	 mercury__assoc_list__V_15_15  = TypeInfo;
#line 197 "type_desc.opt"
}
#line 229 "assoc_list.m"
        {
#line 229 "assoc_list.m"
          mercury__assoc_list__KeyType_8 = mercury__type_desc__type_name_1_f_0(mercury__assoc_list__V_15_15);
        }
#line 600 "list.opt"
        {
#line 600 "list.opt"
          mercury__list__length_acc_3_p_0(mercury__assoc_list__TypeInfo_for_K_31, mercury__assoc_list__Ks_4, (MR_Integer) 0, &mercury__assoc_list__KeyLength_9);
        }
#line 552 "string.opt"
        {
#line 552 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__assoc_list__KeyLength_9, (MR_Integer) 10, &mercury__assoc_list__KeyLengthString_10);
        }
#line 6358 "assoc_list.c"
        {
#line 6360 "assoc_list.c"
          mercury__assoc_list__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6362 "assoc_list.c"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_35_35, 0) = ((MR_Box) (mercury__assoc_list__TypeCtorInfo_33_33));
#line 6364 "assoc_list.c"
          MR_hl_field(MR_mktag(0), mercury__assoc_list__TypeInfo_35_35, 1) = ((MR_Box) (mercury__assoc_list__TypeInfo_for_V_32));
#line 6366 "assoc_list.c"
        }
#line 197 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__assoc_list__from_corresponding_lists_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__assoc_list__TypeInfo_35_35 ;
		{
#line 197 "type_desc.opt"
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
#line 6394 "assoc_list.c"

		;}
#undef MR_PROC_LABEL
	 mercury__assoc_list__V_16_16  = TypeInfo;
#line 197 "type_desc.opt"
}
#line 232 "assoc_list.m"
        {
#line 232 "assoc_list.m"
          mercury__assoc_list__ValueType_11 = mercury__type_desc__type_name_1_f_0(mercury__assoc_list__V_16_16);
        }
#line 600 "list.opt"
        {
#line 600 "list.opt"
          mercury__list__length_acc_3_p_0(mercury__assoc_list__TypeInfo_for_V_32, mercury__assoc_list__Vs_5, (MR_Integer) 0, &mercury__assoc_list__ValueLength_12);
        }
#line 552 "string.opt"
        {
#line 552 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__assoc_list__ValueLength_12, (MR_Integer) 10, &mercury__assoc_list__ValueLengthString_13);
        }
#line 157 "string.opt"
        {
#line 157 "string.opt"
          mercury__string__append_3_p_2((MR_String) "\n\tValue list length: ", mercury__assoc_list__ValueLengthString_13, &mercury__assoc_list__V_27_27);
        }
#line 157 "string.opt"
        {
#line 157 "string.opt"
          mercury__string__append_3_p_2(mercury__assoc_list__ValueType_11, mercury__assoc_list__V_27_27, &mercury__assoc_list__V_26_26);
        }
#line 157 "string.opt"
        {
#line 157 "string.opt"
          mercury__string__append_3_p_2((MR_String) "\n\tValue list type: ", mercury__assoc_list__V_26_26, &mercury__assoc_list__V_24_24);
        }
#line 157 "string.opt"
        {
#line 157 "string.opt"
          mercury__string__append_3_p_2(mercury__assoc_list__KeyLengthString_10, mercury__assoc_list__V_24_24, &mercury__assoc_list__V_23_23);
        }
#line 157 "string.opt"
        {
#line 157 "string.opt"
          mercury__string__append_3_p_2((MR_String) "\n\tKey list length: ", mercury__assoc_list__V_23_23, &mercury__assoc_list__V_21_21);
        }
#line 157 "string.opt"
        {
#line 157 "string.opt"
          mercury__string__append_3_p_2(mercury__assoc_list__KeyType_8, mercury__assoc_list__V_21_21, &mercury__assoc_list__V_20_20);
        }
#line 157 "string.opt"
        {
#line 157 "string.opt"
          mercury__string__append_3_p_2((MR_String) "\tKey list type: ", mercury__assoc_list__V_20_20, &mercury__assoc_list__V_18_18);
        }
#line 157 "string.opt"
        {
#line 157 "string.opt"
          mercury__string__append_3_p_2((MR_String) "Lists have different lengths.\n", mercury__assoc_list__V_18_18, &mercury__assoc_list__ErrorString_14);
        }
#line 241 "assoc_list.m"
        {
#line 241 "assoc_list.m"
          mercury__require__unexpected_3_p_0((MR_String) "assoc_list", (MR_String) "predicate \140assoc_list.from_corresponding_lists\'/3", mercury__assoc_list__ErrorString_14);
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
