/*
** Automatically generated from `solutions.m'
** by the Mercury compiler,
** version rotd-2014-09-30
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module solutions. */
/* :- implementation. */

/*
INIT mercury__solutions__init
ENDINIT
*/

#include "solutions.mih"


#include "array.mih"
#include "assoc_list.mih"
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



#line 407 "solutions.m"
struct mercury__solutions__builtin_aggregate2_6_p_7_env_0_s {
#line 407 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_T_32;
#line 407 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_U_33;
#line 407 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_V_34;
#line 407 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__GeneratorPred_7;
#line 407 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__CollectorPred_8;
#line 411 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate2_6_p_7_env_0__succeeded;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__HeapPtr_11;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__TrailPtr_13;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar1_14;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar2_15;
#line 422 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate2_6_p_7_env_0__commit_0;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_7_env_0__Answer0_16;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_7_env_0__Answer_17;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_7_env_0__STATE_VARIABLE_Acc1_28_28;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_7_env_0__STATE_VARIABLE_Acc2_29_29;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_7_env_0__STATE_VARIABLE_Acc1_30_30;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_7_env_0__STATE_VARIABLE_Acc2_31_31;
#line 407 "solutions.m"
};

#line 404 "solutions.m"
struct mercury__solutions__builtin_aggregate2_6_p_6_env_0_s {
#line 404 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_T_32;
#line 404 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_U_33;
#line 404 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_V_34;
#line 404 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__GeneratorPred_7;
#line 404 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__CollectorPred_8;
#line 411 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate2_6_p_6_env_0__succeeded;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__HeapPtr_11;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__TrailPtr_13;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar1_14;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar2_15;
#line 422 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate2_6_p_6_env_0__commit_0;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_6_env_0__Answer0_16;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_6_env_0__Answer_17;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_6_env_0__STATE_VARIABLE_Acc1_28_28;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_6_env_0__STATE_VARIABLE_Acc2_29_29;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_6_env_0__STATE_VARIABLE_Acc1_30_30;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_6_env_0__STATE_VARIABLE_Acc2_31_31;
#line 404 "solutions.m"
};

#line 401 "solutions.m"
struct mercury__solutions__builtin_aggregate2_6_p_5_env_0_s {
#line 401 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_T_32;
#line 401 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_U_33;
#line 401 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_V_34;
#line 401 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__GeneratorPred_7;
#line 401 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__CollectorPred_8;
#line 411 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate2_6_p_5_env_0__succeeded;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__HeapPtr_11;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__TrailPtr_13;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar1_14;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar2_15;
#line 422 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate2_6_p_5_env_0__commit_0;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_5_env_0__Answer0_16;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_5_env_0__Answer_17;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_5_env_0__STATE_VARIABLE_Acc1_28_28;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_5_env_0__STATE_VARIABLE_Acc2_29_29;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_5_env_0__STATE_VARIABLE_Acc1_30_30;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_5_env_0__STATE_VARIABLE_Acc2_31_31;
#line 401 "solutions.m"
};

#line 398 "solutions.m"
struct mercury__solutions__builtin_aggregate2_6_p_4_env_0_s {
#line 398 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_T_32;
#line 398 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_U_33;
#line 398 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_V_34;
#line 398 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__GeneratorPred_7;
#line 398 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__CollectorPred_8;
#line 411 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate2_6_p_4_env_0__succeeded;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__HeapPtr_11;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__TrailPtr_13;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar1_14;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar2_15;
#line 422 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate2_6_p_4_env_0__commit_0;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_4_env_0__Answer0_16;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_4_env_0__Answer_17;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_4_env_0__STATE_VARIABLE_Acc1_28_28;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_4_env_0__STATE_VARIABLE_Acc2_29_29;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_4_env_0__STATE_VARIABLE_Acc1_30_30;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_4_env_0__STATE_VARIABLE_Acc2_31_31;
#line 398 "solutions.m"
};

#line 395 "solutions.m"
struct mercury__solutions__builtin_aggregate2_6_p_3_env_0_s {
#line 395 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_T_32;
#line 395 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_U_33;
#line 395 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_V_34;
#line 395 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__GeneratorPred_7;
#line 395 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__CollectorPred_8;
#line 411 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate2_6_p_3_env_0__succeeded;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__HeapPtr_11;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__TrailPtr_13;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar1_14;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar2_15;
#line 422 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate2_6_p_3_env_0__commit_0;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_3_env_0__Answer0_16;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_3_env_0__Answer_17;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_3_env_0__STATE_VARIABLE_Acc1_28_28;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_3_env_0__STATE_VARIABLE_Acc2_29_29;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_3_env_0__STATE_VARIABLE_Acc1_30_30;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_3_env_0__STATE_VARIABLE_Acc2_31_31;
#line 395 "solutions.m"
};

#line 392 "solutions.m"
struct mercury__solutions__builtin_aggregate2_6_p_2_env_0_s {
#line 392 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_T_32;
#line 392 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_U_33;
#line 392 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_V_34;
#line 392 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__GeneratorPred_7;
#line 392 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__CollectorPred_8;
#line 411 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate2_6_p_2_env_0__succeeded;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__HeapPtr_11;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__TrailPtr_13;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar1_14;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar2_15;
#line 422 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate2_6_p_2_env_0__commit_0;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_2_env_0__Answer0_16;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_2_env_0__Answer_17;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_2_env_0__STATE_VARIABLE_Acc1_28_28;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_2_env_0__STATE_VARIABLE_Acc2_29_29;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_2_env_0__STATE_VARIABLE_Acc1_30_30;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_2_env_0__STATE_VARIABLE_Acc2_31_31;
#line 392 "solutions.m"
};

#line 389 "solutions.m"
struct mercury__solutions__builtin_aggregate2_6_p_1_env_0_s {
#line 389 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_T_32;
#line 389 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_U_33;
#line 389 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_V_34;
#line 389 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__GeneratorPred_7;
#line 389 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__CollectorPred_8;
#line 411 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate2_6_p_1_env_0__succeeded;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__HeapPtr_11;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__TrailPtr_13;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar1_14;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar2_15;
#line 422 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate2_6_p_1_env_0__commit_0;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_1_env_0__Answer0_16;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_1_env_0__Answer_17;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_1_env_0__STATE_VARIABLE_Acc1_28_28;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_1_env_0__STATE_VARIABLE_Acc2_29_29;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_1_env_0__STATE_VARIABLE_Acc1_30_30;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_1_env_0__STATE_VARIABLE_Acc2_31_31;
#line 389 "solutions.m"
};

#line 386 "solutions.m"
struct mercury__solutions__builtin_aggregate2_6_p_0_env_0_s {
#line 386 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_T_32;
#line 386 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_U_33;
#line 386 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_V_34;
#line 386 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__GeneratorPred_7;
#line 386 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__CollectorPred_8;
#line 411 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate2_6_p_0_env_0__succeeded;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__HeapPtr_11;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__TrailPtr_13;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar1_14;
#line 411 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar2_15;
#line 422 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate2_6_p_0_env_0__commit_0;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_0_env_0__Answer0_16;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_0_env_0__Answer_17;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_0_env_0__STATE_VARIABLE_Acc1_28_28;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_0_env_0__STATE_VARIABLE_Acc2_29_29;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_0_env_0__STATE_VARIABLE_Acc1_30_30;
#line 422 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_0_env_0__STATE_VARIABLE_Acc2_31_31;
#line 386 "solutions.m"
};

#line 283 "solutions.m"
struct mercury__solutions__builtin_aggregate_4_p_9_env_0_s {
#line 283 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_T_20;
#line 283 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_U_21;
#line 283 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_9_env_0__GeneratorPred_5;
#line 283 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_9_env_0__CollectorPred_6;
#line 338 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate_4_p_9_env_0__succeeded;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_9_env_0__HeapPtr_8;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_9_env_0__TrailPtr_10;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_9_env_0__Mutvar_11;
#line 349 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate_4_p_9_env_0__commit_0;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_9_env_0__Answer0_12;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_9_env_0__Answer_13;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_9_env_0__Acc0_14;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_9_env_0__Acc1_15;
#line 283 "solutions.m"
};

#line 281 "solutions.m"
struct mercury__solutions__builtin_aggregate_4_p_8_env_0_s {
#line 281 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_T_20;
#line 281 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_U_21;
#line 281 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_8_env_0__GeneratorPred_5;
#line 281 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_8_env_0__CollectorPred_6;
#line 338 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate_4_p_8_env_0__succeeded;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_8_env_0__HeapPtr_8;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_8_env_0__TrailPtr_10;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_8_env_0__Mutvar_11;
#line 349 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate_4_p_8_env_0__commit_0;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_8_env_0__Answer0_12;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_8_env_0__Answer_13;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_8_env_0__Acc0_14;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_8_env_0__Acc1_15;
#line 281 "solutions.m"
};

#line 279 "solutions.m"
struct mercury__solutions__builtin_aggregate_4_p_7_env_0_s {
#line 279 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_T_20;
#line 279 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_U_21;
#line 279 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_7_env_0__GeneratorPred_5;
#line 279 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_7_env_0__CollectorPred_6;
#line 338 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate_4_p_7_env_0__succeeded;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_7_env_0__HeapPtr_8;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_7_env_0__TrailPtr_10;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_7_env_0__Mutvar_11;
#line 349 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate_4_p_7_env_0__commit_0;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_7_env_0__Answer0_12;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_7_env_0__Answer_13;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_7_env_0__Acc0_14;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_7_env_0__Acc1_15;
#line 279 "solutions.m"
};

#line 277 "solutions.m"
struct mercury__solutions__builtin_aggregate_4_p_6_env_0_s {
#line 277 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_T_20;
#line 277 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_U_21;
#line 277 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_6_env_0__GeneratorPred_5;
#line 277 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_6_env_0__CollectorPred_6;
#line 338 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate_4_p_6_env_0__succeeded;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_6_env_0__HeapPtr_8;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_6_env_0__TrailPtr_10;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_6_env_0__Mutvar_11;
#line 349 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate_4_p_6_env_0__commit_0;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_6_env_0__Answer0_12;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_6_env_0__Answer_13;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_6_env_0__Acc0_14;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_6_env_0__Acc1_15;
#line 277 "solutions.m"
};

#line 275 "solutions.m"
struct mercury__solutions__builtin_aggregate_4_p_5_env_0_s {
#line 275 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_T_20;
#line 275 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_U_21;
#line 275 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_5_env_0__GeneratorPred_5;
#line 275 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_5_env_0__CollectorPred_6;
#line 338 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate_4_p_5_env_0__succeeded;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_5_env_0__HeapPtr_8;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_5_env_0__TrailPtr_10;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_5_env_0__Mutvar_11;
#line 349 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate_4_p_5_env_0__commit_0;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_5_env_0__Answer0_12;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_5_env_0__Answer_13;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_5_env_0__Acc0_14;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_5_env_0__Acc1_15;
#line 275 "solutions.m"
};

#line 273 "solutions.m"
struct mercury__solutions__builtin_aggregate_4_p_4_env_0_s {
#line 273 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_T_20;
#line 273 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_U_21;
#line 273 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_4_env_0__GeneratorPred_5;
#line 273 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_4_env_0__CollectorPred_6;
#line 338 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate_4_p_4_env_0__succeeded;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_4_env_0__HeapPtr_8;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_4_env_0__TrailPtr_10;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_4_env_0__Mutvar_11;
#line 349 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate_4_p_4_env_0__commit_0;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_4_env_0__Answer0_12;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_4_env_0__Answer_13;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_4_env_0__Acc0_14;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_4_env_0__Acc1_15;
#line 273 "solutions.m"
};

#line 271 "solutions.m"
struct mercury__solutions__builtin_aggregate_4_p_3_env_0_s {
#line 271 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_T_20;
#line 271 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_U_21;
#line 271 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_3_env_0__GeneratorPred_5;
#line 271 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_3_env_0__CollectorPred_6;
#line 338 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate_4_p_3_env_0__succeeded;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_3_env_0__HeapPtr_8;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_3_env_0__TrailPtr_10;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_3_env_0__Mutvar_11;
#line 349 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate_4_p_3_env_0__commit_0;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_3_env_0__Answer0_12;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_3_env_0__Answer_13;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_3_env_0__Acc0_14;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_3_env_0__Acc1_15;
#line 271 "solutions.m"
};

#line 269 "solutions.m"
struct mercury__solutions__builtin_aggregate_4_p_2_env_0_s {
#line 269 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_T_20;
#line 269 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_U_21;
#line 269 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_2_env_0__GeneratorPred_5;
#line 269 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_2_env_0__CollectorPred_6;
#line 338 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate_4_p_2_env_0__succeeded;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_2_env_0__HeapPtr_8;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_2_env_0__TrailPtr_10;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_2_env_0__Mutvar_11;
#line 349 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate_4_p_2_env_0__commit_0;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_2_env_0__Answer0_12;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_2_env_0__Answer_13;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_2_env_0__Acc0_14;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_2_env_0__Acc1_15;
#line 269 "solutions.m"
};

#line 267 "solutions.m"
struct mercury__solutions__builtin_aggregate_4_p_1_env_0_s {
#line 267 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_T_20;
#line 267 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_U_21;
#line 267 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_1_env_0__GeneratorPred_5;
#line 267 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_1_env_0__CollectorPred_6;
#line 338 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate_4_p_1_env_0__succeeded;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_1_env_0__HeapPtr_8;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_1_env_0__TrailPtr_10;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_1_env_0__Mutvar_11;
#line 349 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate_4_p_1_env_0__commit_0;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_1_env_0__Answer0_12;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_1_env_0__Answer_13;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_1_env_0__Acc0_14;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_1_env_0__Acc1_15;
#line 267 "solutions.m"
};

#line 265 "solutions.m"
struct mercury__solutions__builtin_aggregate_4_p_0_env_0_s {
#line 265 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_T_20;
#line 265 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_U_21;
#line 265 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_0_env_0__GeneratorPred_5;
#line 265 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_0_env_0__CollectorPred_6;
#line 338 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate_4_p_0_env_0__succeeded;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_0_env_0__HeapPtr_8;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_0_env_0__TrailPtr_10;
#line 338 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_0_env_0__Mutvar_11;
#line 349 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate_4_p_0_env_0__commit_0;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_0_env_0__Answer0_12;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_0_env_0__Answer_13;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_0_env_0__Acc0_14;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_0_env_0__Acc1_15;
#line 265 "solutions.m"
};

#line 252 "solutions.m"
struct mercury__solutions__builtin_solutions_2_p_1_env_0_s {
#line 252 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_for_T_7;
#line 252 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_1_env_0__Generator_3;
#line 254 "solutions.m"
  MR_bool mercury__solutions__builtin_solutions_2_p_1_env_0__succeeded;
#line 254 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_12_12;
#line 254 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_1_env_0__HeapPtr_18;
#line 254 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_1_env_0__TrailPtr_20;
#line 254 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_1_env_0__Mutvar_21;
#line 349 "solutions.m"
  jmp_buf mercury__solutions__builtin_solutions_2_p_1_env_0__commit_0;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_solutions_2_p_1_env_0__Answer0_22;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_solutions_2_p_1_env_0__Answer_23;
#line 349 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_1_env_0__Acc0_24;
#line 349 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_1_env_0__Acc1_25;
#line 252 "solutions.m"
};

#line 251 "solutions.m"
struct mercury__solutions__builtin_solutions_2_p_0_env_0_s {
#line 251 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_for_T_7;
#line 251 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_0_env_0__Generator_3;
#line 254 "solutions.m"
  MR_bool mercury__solutions__builtin_solutions_2_p_0_env_0__succeeded;
#line 254 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_12_12;
#line 254 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_0_env_0__HeapPtr_18;
#line 254 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_0_env_0__TrailPtr_20;
#line 254 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_0_env_0__Mutvar_21;
#line 349 "solutions.m"
  jmp_buf mercury__solutions__builtin_solutions_2_p_0_env_0__commit_0;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_solutions_2_p_0_env_0__Answer0_22;
#line 349 "solutions.m"
  MR_Box mercury__solutions__builtin_solutions_2_p_0_env_0__Answer_23;
#line 349 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_0_env_0__Acc0_24;
#line 349 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_0_env_0__Acc1_25;
#line 251 "solutions.m"
};

#line 191 "solutions.m"
struct mercury__solutions__do_while_4_p_5_env_0_s {
#line 191 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T_21;
#line 191 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T2_22;
#line 191 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_5_env_0__GeneratorPred_5;
#line 191 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_5_env_0__CollectorPred_6;
#line 471 "solutions.m"
  MR_bool mercury__solutions__do_while_4_p_5_env_0__succeeded;
#line 471 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_5_env_0__HeapPtr_8;
#line 471 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_5_env_0__TrailPtr_10;
#line 471 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_5_env_0__Mutvar_11;
#line 476 "solutions.m"
  jmp_buf mercury__solutions__do_while_4_p_5_env_0__commit_0;
#line 476 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_5_env_0__Answer0_12;
#line 476 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_5_env_0__Answer_13;
#line 476 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_5_env_0__Acc0_14;
#line 476 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_5_env_0__More_15;
#line 476 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_5_env_0__Acc1_16;
#line 191 "solutions.m"
};

#line 189 "solutions.m"
struct mercury__solutions__do_while_4_p_4_env_0_s {
#line 189 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T_21;
#line 189 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T2_22;
#line 189 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_4_env_0__GeneratorPred_5;
#line 189 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_4_env_0__CollectorPred_6;
#line 471 "solutions.m"
  MR_bool mercury__solutions__do_while_4_p_4_env_0__succeeded;
#line 471 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_4_env_0__HeapPtr_8;
#line 471 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_4_env_0__TrailPtr_10;
#line 471 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_4_env_0__Mutvar_11;
#line 476 "solutions.m"
  jmp_buf mercury__solutions__do_while_4_p_4_env_0__commit_0;
#line 476 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_4_env_0__Answer0_12;
#line 476 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_4_env_0__Answer_13;
#line 476 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_4_env_0__Acc0_14;
#line 476 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_4_env_0__More_15;
#line 476 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_4_env_0__Acc1_16;
#line 189 "solutions.m"
};

#line 187 "solutions.m"
struct mercury__solutions__do_while_4_p_3_env_0_s {
#line 187 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T_21;
#line 187 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T2_22;
#line 187 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_3_env_0__GeneratorPred_5;
#line 187 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_3_env_0__CollectorPred_6;
#line 471 "solutions.m"
  MR_bool mercury__solutions__do_while_4_p_3_env_0__succeeded;
#line 471 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_3_env_0__HeapPtr_8;
#line 471 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_3_env_0__TrailPtr_10;
#line 471 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_3_env_0__Mutvar_11;
#line 476 "solutions.m"
  jmp_buf mercury__solutions__do_while_4_p_3_env_0__commit_0;
#line 476 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_3_env_0__Answer0_12;
#line 476 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_3_env_0__Answer_13;
#line 476 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_3_env_0__Acc0_14;
#line 476 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_3_env_0__More_15;
#line 476 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_3_env_0__Acc1_16;
#line 187 "solutions.m"
};

#line 185 "solutions.m"
struct mercury__solutions__do_while_4_p_2_env_0_s {
#line 185 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T_21;
#line 185 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T2_22;
#line 185 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_2_env_0__GeneratorPred_5;
#line 185 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_2_env_0__CollectorPred_6;
#line 471 "solutions.m"
  MR_bool mercury__solutions__do_while_4_p_2_env_0__succeeded;
#line 471 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_2_env_0__HeapPtr_8;
#line 471 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_2_env_0__TrailPtr_10;
#line 471 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_2_env_0__Mutvar_11;
#line 476 "solutions.m"
  jmp_buf mercury__solutions__do_while_4_p_2_env_0__commit_0;
#line 476 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_2_env_0__Answer0_12;
#line 476 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_2_env_0__Answer_13;
#line 476 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_2_env_0__Acc0_14;
#line 476 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_2_env_0__More_15;
#line 476 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_2_env_0__Acc1_16;
#line 185 "solutions.m"
};

#line 183 "solutions.m"
struct mercury__solutions__do_while_4_p_1_env_0_s {
#line 183 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T_21;
#line 183 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T2_22;
#line 183 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_1_env_0__GeneratorPred_5;
#line 183 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_1_env_0__CollectorPred_6;
#line 471 "solutions.m"
  MR_bool mercury__solutions__do_while_4_p_1_env_0__succeeded;
#line 471 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_1_env_0__HeapPtr_8;
#line 471 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_1_env_0__TrailPtr_10;
#line 471 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_1_env_0__Mutvar_11;
#line 476 "solutions.m"
  jmp_buf mercury__solutions__do_while_4_p_1_env_0__commit_0;
#line 476 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_1_env_0__Answer0_12;
#line 476 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_1_env_0__Answer_13;
#line 476 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_1_env_0__Acc0_14;
#line 476 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_1_env_0__More_15;
#line 476 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_1_env_0__Acc1_16;
#line 183 "solutions.m"
};

#line 181 "solutions.m"
struct mercury__solutions__do_while_4_p_0_env_0_s {
#line 181 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T_21;
#line 181 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T2_22;
#line 181 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_0_env_0__GeneratorPred_5;
#line 181 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_0_env_0__CollectorPred_6;
#line 471 "solutions.m"
  MR_bool mercury__solutions__do_while_4_p_0_env_0__succeeded;
#line 471 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_0_env_0__HeapPtr_8;
#line 471 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_0_env_0__TrailPtr_10;
#line 471 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_0_env_0__Mutvar_11;
#line 476 "solutions.m"
  jmp_buf mercury__solutions__do_while_4_p_0_env_0__commit_0;
#line 476 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_0_env_0__Answer0_12;
#line 476 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_0_env_0__Answer_13;
#line 476 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_0_env_0__Acc0_14;
#line 476 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_0_env_0__More_15;
#line 476 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_0_env_0__Acc1_16;
#line 181 "solutions.m"
};


#line 964 "solutions.c"
static const MR_Integer mercury__solutions__solutions__functor_number_map_trail_ptr_0[1];

#line 967 "solutions.c"
static const MR_NotagFunctorDesc mercury__solutions__solutions__notag_functor_desc_trail_ptr_0;

#line 970 "solutions.c"
static MR_bool MR_CALL 
mercury__solutions____Unify____heap_ptr_0_0_10001(
#line 973 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_1,
#line 975 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_2);

#line 978 "solutions.c"
static void MR_CALL 
mercury__solutions____Compare____heap_ptr_0_0_10001(
#line 981 "solutions.c"
  MR_Box * mercury__solutions__wrapper_arg_1,
#line 983 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_2,
#line 985 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_3);

#line 988 "solutions.c"
static MR_bool MR_CALL 
mercury__solutions____Unify____trail_ptr_0_0_10001(
#line 991 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_1,
#line 993 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_2);

#line 996 "solutions.c"
static void MR_CALL 
mercury__solutions____Compare____trail_ptr_0_0_10001(
#line 999 "solutions.c"
  MR_Box * mercury__solutions__wrapper_arg_1,
#line 1001 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_2,
#line 1003 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_3);

#line 133 "list.int"
static void MR_CALL 
mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__solutions__V_18_18,
#line 133 "list.int"
  MR_Word mercury__solutions__HeadVar__2_2,
#line 133 "list.int"
  MR_Box mercury__solutions__HeadVar__3_3,
#line 133 "list.int"
  MR_Box * mercury__solutions__HeadVar__4_4);

#line 133 "list.int"
static void MR_CALL 
mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__solutions__V_18_18,
#line 133 "list.int"
  MR_Word mercury__solutions__HeadVar__2_2,
#line 133 "list.int"
  MR_Box mercury__solutions__HeadVar__3_3,
#line 133 "list.int"
  MR_Box * mercury__solutions__HeadVar__4_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 970 "solutions.m"
static void MR_CALL 
mercury__solutions__end_all_soln_neg_context_no_more_0_p_0(void);

#line 955 "solutions.m"
static void MR_CALL 
mercury__solutions__end_all_soln_neg_context_more_0_p_0(void);

#line 940 "solutions.m"
static void MR_CALL 
mercury__solutions__start_all_soln_neg_context_0_p_0(void);

#line 906 "solutions.m"
static void MR_CALL 
mercury__solutions__reset_solutions_heap_1_p_0(
#line 906 "solutions.m"
  MR_Word mercury__solutions__SolutionsHeapPtr_1);

#line 778 "solutions.m"
static void MR_CALL 
mercury__solutions__partial_deep_copy_3_p_2(
#line 778 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_4,
#line 778 "solutions.m"
  MR_Word mercury__solutions__HeadVar__1_1,
#line 778 "solutions.m"
  MR_Box mercury__solutions__HeadVar__2_2,
#line 778 "solutions.m"
  MR_Box * mercury__solutions__HeadVar__3_3);

#line 777 "solutions.m"
static void MR_CALL 
mercury__solutions__partial_deep_copy_3_p_1(
#line 777 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_4,
#line 777 "solutions.m"
  MR_Word mercury__solutions__HeadVar__1_1,
#line 777 "solutions.m"
  MR_Box mercury__solutions__HeadVar__2_2,
#line 777 "solutions.m"
  MR_Box * mercury__solutions__HeadVar__3_3);

#line 776 "solutions.m"
static void MR_CALL 
mercury__solutions__partial_deep_copy_3_p_0(
#line 776 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_4,
#line 776 "solutions.m"
  MR_Word mercury__solutions__HeadVar__1_1,
#line 776 "solutions.m"
  MR_Box mercury__solutions__HeadVar__2_2,
#line 776 "solutions.m"
  MR_Box * mercury__solutions__HeadVar__3_3);

#line 722 "solutions.m"
static void MR_CALL 
mercury__solutions__swap_heap_and_solutions_heap_0_p_0(void);

#line 685 "solutions.m"
static void MR_CALL 
mercury__solutions__discard_trail_ticket_0_p_0(void);

#line 647 "solutions.m"
static void MR_CALL 
mercury__solutions__check_for_floundering_1_p_0(
#line 647 "solutions.m"
  MR_Word mercury__solutions__TrailPtr_1);

#line 579 "solutions.m"
static void MR_CALL 
mercury__solutions__get_registers_3_p_0(
#line 579 "solutions.m"
  MR_Word * mercury__solutions__HeapPtr_1,
#line 579 "solutions.m"
  MR_Word * mercury__solutions__SolutionsHeapPtr_2,
#line 579 "solutions.m"
  MR_Word * mercury__solutions__TrailPtr_3);

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_7_1(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_7_2(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_7_3(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_6_1(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_6_2(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_6_3(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_5_1(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_5_2(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_5_3(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_4_1(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_4_2(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_4_3(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_3_1(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_3_2(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_3_3(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_2_1(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_2_2(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_2_3(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_1_1(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_1_2(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_1_3(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_0_1(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_0_2(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_0_3(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_9_1(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_9_2(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_9_3(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_8_1(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_8_2(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_8_3(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_7_1(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_7_2(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_7_3(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_6_1(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_6_2(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_6_3(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_5_1(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_5_2(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_5_3(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_4_1(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_4_2(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_4_3(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_3_1(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_3_2(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_3_3(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_2_1(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_2_2(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_2_3(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_1_1(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_1_2(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_1_3(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_0_1(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_0_2(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_0_3(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_1_1(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_1_2(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_1_3(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_0_1(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_0_2(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_0_3(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_5_1(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_5_2(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_5_3(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_4_1(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_4_2(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_4_3(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_3_1(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_3_2(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_3_3(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_2_1(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_2_2(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_2_3(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_1_1(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_1_2(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_1_3(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_0_1(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_0_2(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_0_3(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg);


static /* final */ const MR_Box mercury__solutions_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__solutions_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__solutions_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__solutions_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__solutions_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__solutions_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__solutions_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__solutions_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__solutions_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "solutions.mh"
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
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
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



#line 1943 "solutions.c"
const MR_TypeCtorInfo_Struct mercury__solutions__solutions__type_ctor_info_heap_ptr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__solutions____Unify____heap_ptr_0_0_10001)),
  ((MR_Box) (mercury__solutions____Compare____heap_ptr_0_0_10001)),
  (MR_String) "solutions",
  (MR_String) "heap_ptr",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__private_builtin__private_builtin__type_ctor_info_heap_pointer_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1964 "solutions.c"
static const MR_Integer mercury__solutions__solutions__functor_number_map_trail_ptr_0[1] = {
  (MR_Integer) 0
};

#line 1969 "solutions.c"
static const MR_NotagFunctorDesc mercury__solutions__solutions__notag_functor_desc_trail_ptr_0 = {
  (MR_String) "trail_ptr",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL
};

#line 1976 "solutions.c"
const MR_TypeCtorInfo_Struct mercury__solutions__solutions__type_ctor_info_trail_ptr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__solutions____Unify____trail_ptr_0_0_10001)),
  ((MR_Box) (mercury__solutions____Compare____trail_ptr_0_0_10001)),
  (MR_String) "solutions",
  (MR_String) "trail_ptr",
  {
    &mercury__solutions__solutions__notag_functor_desc_trail_ptr_0
  },
  {
    &mercury__solutions__solutions__notag_functor_desc_trail_ptr_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__solutions__solutions__functor_number_map_trail_ptr_0
};

#line 1997 "solutions.c"
static MR_bool MR_CALL 
mercury__solutions____Unify____heap_ptr_0_0_10001(
#line 2000 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_1,
#line 2002 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_2)
#line 2004 "solutions.c"
{
#line 2006 "solutions.c"
  {
#line 2008 "solutions.c"
    MR_bool mercury__solutions__succeeded;

#line 2011 "solutions.c"
    {
#line 2013 "solutions.c"
      mercury__solutions__succeeded = mercury__solutions____Unify____heap_ptr_0_0(((MR_Word) mercury__solutions__wrapper_arg_1), ((MR_Word) mercury__solutions__wrapper_arg_2));
    }
#line 2016 "solutions.c"
    return mercury__solutions__succeeded;
#line 2018 "solutions.c"
  }
#line 2020 "solutions.c"
}

#line 2023 "solutions.c"
static void MR_CALL 
mercury__solutions____Compare____heap_ptr_0_0_10001(
#line 2026 "solutions.c"
  MR_Box * mercury__solutions__wrapper_arg_1,
#line 2028 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_2,
#line 2030 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_3)
#line 2032 "solutions.c"
{
#line 2034 "solutions.c"
  {
#line 2036 "solutions.c"
    MR_Word mercury__solutions__conv0_HeadVar__1_1;

#line 2039 "solutions.c"
    {
#line 2041 "solutions.c"
      mercury__solutions____Compare____heap_ptr_0_0(&mercury__solutions__conv0_HeadVar__1_1, ((MR_Word) mercury__solutions__wrapper_arg_2), ((MR_Word) mercury__solutions__wrapper_arg_3));
    }
#line 2044 "solutions.c"
    *mercury__solutions__wrapper_arg_1 = ((MR_Box) (mercury__solutions__conv0_HeadVar__1_1));
#line 2046 "solutions.c"
  }
#line 2048 "solutions.c"
}

#line 2051 "solutions.c"
static MR_bool MR_CALL 
mercury__solutions____Unify____trail_ptr_0_0_10001(
#line 2054 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_1,
#line 2056 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_2)
#line 2058 "solutions.c"
{
#line 2060 "solutions.c"
  {
#line 2062 "solutions.c"
    MR_bool mercury__solutions__succeeded;

#line 2065 "solutions.c"
    {
#line 2067 "solutions.c"
      mercury__solutions__succeeded = mercury__solutions____Unify____trail_ptr_0_0(((MR_Word) mercury__solutions__wrapper_arg_1), ((MR_Word) mercury__solutions__wrapper_arg_2));
    }
#line 2070 "solutions.c"
    return mercury__solutions__succeeded;
#line 2072 "solutions.c"
  }
#line 2074 "solutions.c"
}

#line 2077 "solutions.c"
static void MR_CALL 
mercury__solutions____Compare____trail_ptr_0_0_10001(
#line 2080 "solutions.c"
  MR_Box * mercury__solutions__wrapper_arg_1,
#line 2082 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_2,
#line 2084 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_3)
#line 2086 "solutions.c"
{
#line 2088 "solutions.c"
  {
#line 2090 "solutions.c"
    MR_Word mercury__solutions__conv0_HeadVar__1_1;

#line 2093 "solutions.c"
    {
#line 2095 "solutions.c"
      mercury__solutions____Compare____trail_ptr_0_0(&mercury__solutions__conv0_HeadVar__1_1, ((MR_Word) mercury__solutions__wrapper_arg_2), ((MR_Word) mercury__solutions__wrapper_arg_3));
    }
#line 2098 "solutions.c"
    *mercury__solutions__wrapper_arg_1 = ((MR_Box) (mercury__solutions__conv0_HeadVar__1_1));
#line 2100 "solutions.c"
  }
#line 2102 "solutions.c"
}

#line 133 "list.int"
static void MR_CALL 
mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__solutions__V_18_18,
#line 133 "list.int"
  MR_Word mercury__solutions__HeadVar__2_2,
#line 133 "list.int"
  MR_Box mercury__solutions__HeadVar__3_3,
#line 133 "list.int"
  MR_Box * mercury__solutions__HeadVar__4_4)
#line 133 "list.int"
{
#line 380 "list.opt"
  while (MR_TRUE)
#line 380 "list.opt"
    {
#line 380 "list.opt"
      /* tailcall optimized into a loop */
#line 380 "list.opt"
      {
#line 380 "list.opt"
        MR_bool mercury__solutions__succeeded;

#line 380 "list.opt"
        if ((mercury__solutions__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__solutions__HeadVar__4_4 = mercury__solutions__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_Box mercury__solutions__H_10_9 = (MR_hl_field(MR_mktag(1), mercury__solutions__HeadVar__2_2, (MR_Integer) 0));
#line 382 "list.opt"
            MR_Word mercury__solutions__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__solutions__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Box mercury__solutions__STATE_VARIABLE_A_15_15_13;
#line 228 "solutions.m"
            MR_Box MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__solutions__V_18_18, (MR_Integer) 1)));

#line 228 "solutions.m"
            {
#line 228 "solutions.m"
              mercury__solutions__STATE_VARIABLE_A_15_15_13 = mercury__solutions__func_0(((MR_Box) mercury__solutions__V_18_18), mercury__solutions__H_10_9, mercury__solutions__HeadVar__3_3);
            }
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__solutions__HeadVar__2__tmp_copy_2 = mercury__solutions__T_11_10;
#line 384 "list.opt"
              MR_Box mercury__solutions__HeadVar__3__tmp_copy_3 = mercury__solutions__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__solutions__HeadVar__3_3 = mercury__solutions__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__solutions__HeadVar__2_2 = mercury__solutions__HeadVar__2__tmp_copy_2;
#line 384 "list.opt"
            }
#line 384 "list.opt"
            continue;
#line 382 "list.opt"
          }
#line 380 "list.opt"
      }
#line 380 "list.opt"
      break;
#line 380 "list.opt"
    }
#line 133 "list.int"
}

#line 133 "list.int"
static void MR_CALL 
mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__solutions__V_18_18,
#line 133 "list.int"
  MR_Word mercury__solutions__HeadVar__2_2,
#line 133 "list.int"
  MR_Box mercury__solutions__HeadVar__3_3,
#line 133 "list.int"
  MR_Box * mercury__solutions__HeadVar__4_4)
#line 133 "list.int"
{
#line 380 "list.opt"
  while (MR_TRUE)
#line 380 "list.opt"
    {
#line 380 "list.opt"
      /* tailcall optimized into a loop */
#line 380 "list.opt"
      {
#line 380 "list.opt"
        MR_bool mercury__solutions__succeeded;

#line 380 "list.opt"
        if ((mercury__solutions__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__solutions__HeadVar__4_4 = mercury__solutions__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_Box mercury__solutions__H_10_9 = (MR_hl_field(MR_mktag(1), mercury__solutions__HeadVar__2_2, (MR_Integer) 0));
#line 382 "list.opt"
            MR_Word mercury__solutions__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__solutions__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Box mercury__solutions__STATE_VARIABLE_A_15_15_13;
#line 228 "solutions.m"
            MR_Box MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__solutions__V_18_18, (MR_Integer) 1)));

#line 228 "solutions.m"
            {
#line 228 "solutions.m"
              mercury__solutions__STATE_VARIABLE_A_15_15_13 = mercury__solutions__func_0(((MR_Box) mercury__solutions__V_18_18), mercury__solutions__H_10_9, mercury__solutions__HeadVar__3_3);
            }
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__solutions__HeadVar__2__tmp_copy_2 = mercury__solutions__T_11_10;
#line 384 "list.opt"
              MR_Box mercury__solutions__HeadVar__3__tmp_copy_3 = mercury__solutions__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__solutions__HeadVar__3_3 = mercury__solutions__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__solutions__HeadVar__2_2 = mercury__solutions__HeadVar__2__tmp_copy_2;
#line 384 "list.opt"
            }
#line 384 "list.opt"
            continue;
#line 382 "list.opt"
          }
#line 380 "list.opt"
      }
#line 380 "list.opt"
      break;
#line 380 "list.opt"
    }
#line 133 "list.int"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__solutions__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 572 "solutions.m"
void MR_CALL 
mercury__solutions____Compare____trail_ptr_0_0(
#line 572 "solutions.m"
  MR_Word * mercury__solutions__HeadVar__1_1,
#line 572 "solutions.m"
  MR_Word mercury__solutions__HeadVar__2_2,
#line 572 "solutions.m"
  MR_Word mercury__solutions__HeadVar__3_3)
#line 572 "solutions.m"
{
#line 572 "solutions.m"
  {
#line 572 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 572 "solutions.m"
    MR_Integer mercury__solutions__CastX_6 = (MR_Integer) mercury__solutions__HeadVar__2_2;
#line 572 "solutions.m"
    MR_Integer mercury__solutions__CastY_7 = (MR_Integer) mercury__solutions__HeadVar__3_3;

#line 572 "solutions.m"
    mercury__solutions__succeeded = (mercury__solutions__CastX_6 == mercury__solutions__CastY_7);
#line 572 "solutions.m"
    if (mercury__solutions__succeeded)
#line 2294 "solutions.c"
      *mercury__solutions__HeadVar__1_1 = (MR_Integer) 0;
#line 572 "solutions.m"
    else
#line 572 "solutions.m"
      {
#line 572 "solutions.m"
        MR_Word mercury__solutions__V_4_4 = (MR_Word) mercury__solutions__HeadVar__2_2;
#line 572 "solutions.m"
        MR_Word mercury__solutions__V_5_5 = (MR_Word) mercury__solutions__HeadVar__3_3;

#line 572 "solutions.m"
        {
#line 572 "solutions.m"
          mercury__builtin____Compare____c_pointer_0_0(mercury__solutions__HeadVar__1_1, mercury__solutions__V_4_4, mercury__solutions__V_5_5);
#line 572 "solutions.m"
          return;
        }
#line 572 "solutions.m"
      }
#line 572 "solutions.m"
  }
#line 572 "solutions.m"
}

#line 572 "solutions.m"
MR_bool MR_CALL 
mercury__solutions____Unify____trail_ptr_0_0(
#line 572 "solutions.m"
  MR_Word mercury__solutions__HeadVar__1_1,
#line 572 "solutions.m"
  MR_Word mercury__solutions__HeadVar__2_2)
#line 572 "solutions.m"
{
#line 572 "solutions.m"
  {
#line 572 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 572 "solutions.m"
    MR_Integer mercury__solutions__CastX_5 = (MR_Integer) mercury__solutions__HeadVar__1_1;
#line 572 "solutions.m"
    MR_Integer mercury__solutions__CastY_6 = (MR_Integer) mercury__solutions__HeadVar__2_2;

#line 572 "solutions.m"
    mercury__solutions__succeeded = (mercury__solutions__CastX_5 == mercury__solutions__CastY_6);
#line 572 "solutions.m"
    if (mercury__solutions__succeeded)
#line 572 "solutions.m"
      mercury__solutions__succeeded = MR_TRUE;
#line 572 "solutions.m"
    else
#line 572 "solutions.m"
      {
#line 572 "solutions.m"
        MR_Word mercury__solutions__V_3_3 = (MR_Word) mercury__solutions__HeadVar__1_1;
#line 572 "solutions.m"
        MR_Word mercury__solutions__V_4_4 = (MR_Word) mercury__solutions__HeadVar__2_2;

#line 2352 "solutions.c"
        {
#line 2354 "solutions.c"
          return mercury__solutions__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__solutions__V_3_3, mercury__solutions__V_4_4);
        }
#line 572 "solutions.m"
      }
#line 572 "solutions.m"
    return mercury__solutions__succeeded;
#line 572 "solutions.m"
  }
#line 572 "solutions.m"
}

#line 571 "solutions.m"
void MR_CALL 
mercury__solutions____Compare____heap_ptr_0_0(
#line 571 "solutions.m"
  MR_Word * mercury__solutions__HeadVar__1_1,
#line 571 "solutions.m"
  MR_Word mercury__solutions__HeadVar__2_2,
#line 571 "solutions.m"
  MR_Word mercury__solutions__HeadVar__3_3)
#line 571 "solutions.m"
{
#line 571 "solutions.m"
  {
#line 571 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 571 "solutions.m"
    MR_Word mercury__solutions__Cast_HeadVar1_4 = mercury__solutions__HeadVar__2_2;
#line 571 "solutions.m"
    MR_Word mercury__solutions__Cast_HeadVar2_5 = mercury__solutions__HeadVar__3_3;

#line 571 "solutions.m"
    {
#line 571 "solutions.m"
      mercury__private_builtin____Compare____heap_pointer_0_0(mercury__solutions__HeadVar__1_1, mercury__solutions__Cast_HeadVar1_4, mercury__solutions__Cast_HeadVar2_5);
#line 571 "solutions.m"
      return;
    }
#line 571 "solutions.m"
  }
#line 571 "solutions.m"
}

#line 571 "solutions.m"
MR_bool MR_CALL 
mercury__solutions____Unify____heap_ptr_0_0(
#line 571 "solutions.m"
  MR_Word mercury__solutions__HeadVar__1_1,
#line 571 "solutions.m"
  MR_Word mercury__solutions__HeadVar__2_2)
#line 571 "solutions.m"
{
#line 571 "solutions.m"
  {
#line 571 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 571 "solutions.m"
    MR_Word mercury__solutions__Cast_HeadVar1_3 = mercury__solutions__HeadVar__1_1;
#line 571 "solutions.m"
    MR_Word mercury__solutions__Cast_HeadVar2_4 = mercury__solutions__HeadVar__2_2;

#line 571 "solutions.m"
    {
#line 571 "solutions.m"
      return mercury__solutions__succeeded = mercury__private_builtin____Unify____heap_pointer_0_0(mercury__solutions__Cast_HeadVar1_3, mercury__solutions__Cast_HeadVar2_4);
    }
#line 571 "solutions.m"
    return mercury__solutions__succeeded;
#line 571 "solutions.m"
  }
#line 571 "solutions.m"
}

#line 970 "solutions.m"
static void MR_CALL 
mercury__solutions__end_all_soln_neg_context_no_more_0_p_0(void)
#line 970 "solutions.m"
{
#line 972 "solutions.m"
  {
#line 972 "solutions.m"
    MR_bool mercury__solutions__succeeded;

#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__end_all_soln_neg_context_no_more_0_p_0


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 2450 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 972 "solutions.m"
  }
#line 970 "solutions.m"
}

#line 955 "solutions.m"
static void MR_CALL 
mercury__solutions__end_all_soln_neg_context_more_0_p_0(void)
#line 955 "solutions.m"
{
#line 957 "solutions.m"
  {
#line 957 "solutions.m"
    MR_bool mercury__solutions__succeeded;

#line 962 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__end_all_soln_neg_context_more_0_p_0


		{
#line 962 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif

#line 2483 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 962 "solutions.m"
}
#line 957 "solutions.m"
  }
#line 955 "solutions.m"
}

#line 940 "solutions.m"
static void MR_CALL 
mercury__solutions__start_all_soln_neg_context_0_p_0(void)
#line 940 "solutions.m"
{
#line 942 "solutions.m"
  {
#line 942 "solutions.m"
    MR_bool mercury__solutions__succeeded;

#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__start_all_soln_neg_context_0_p_0


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 2516 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 942 "solutions.m"
  }
#line 940 "solutions.m"
}

#line 906 "solutions.m"
static void MR_CALL 
mercury__solutions__reset_solutions_heap_1_p_0(
#line 906 "solutions.m"
  MR_Word mercury__solutions__SolutionsHeapPtr_1)
#line 906 "solutions.m"
{
#line 908 "solutions.m"
  {
#line 908 "solutions.m"
    MR_bool mercury__solutions__succeeded;

#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__reset_solutions_heap_1_p_0

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_1 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 2553 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 908 "solutions.m"
  }
#line 906 "solutions.m"
}

#line 778 "solutions.m"
static void MR_CALL 
mercury__solutions__partial_deep_copy_3_p_2(
#line 778 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_4,
#line 778 "solutions.m"
  MR_Word mercury__solutions__HeadVar__1_1,
#line 778 "solutions.m"
  MR_Box mercury__solutions__HeadVar__2_2,
#line 778 "solutions.m"
  MR_Box * mercury__solutions__HeadVar__3_3)
#line 778 "solutions.m"
{
#line 809 "solutions.m"
  {
#line 809 "solutions.m"
    MR_bool mercury__solutions__succeeded;

#line 812 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__partial_deep_copy_3_p_2

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  mercury__solutions__TypeInfo_for_T_4 ;
	SolutionsHeapPtr =  mercury__solutions__HeadVar__1_1 ;
	OldVal = (MR_Word) mercury__solutions__HeadVar__2_2 ;
		{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 2599 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__HeadVar__3_3  = (MR_Box) NewVal;
#line 812 "solutions.m"
}
#line 809 "solutions.m"
  }
#line 778 "solutions.m"
}

#line 777 "solutions.m"
static void MR_CALL 
mercury__solutions__partial_deep_copy_3_p_1(
#line 777 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_4,
#line 777 "solutions.m"
  MR_Word mercury__solutions__HeadVar__1_1,
#line 777 "solutions.m"
  MR_Box mercury__solutions__HeadVar__2_2,
#line 777 "solutions.m"
  MR_Box * mercury__solutions__HeadVar__3_3)
#line 777 "solutions.m"
{
#line 815 "solutions.m"
  {
#line 815 "solutions.m"
    MR_bool mercury__solutions__succeeded;

#line 818 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__partial_deep_copy_3_p_1

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  mercury__solutions__TypeInfo_for_T_4 ;
	SolutionsHeapPtr =  mercury__solutions__HeadVar__1_1 ;
	OldVal = (MR_Word) mercury__solutions__HeadVar__2_2 ;
		{
#line 818 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 2646 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__HeadVar__3_3  = (MR_Box) NewVal;
#line 818 "solutions.m"
}
#line 815 "solutions.m"
  }
#line 777 "solutions.m"
}

#line 776 "solutions.m"
static void MR_CALL 
mercury__solutions__partial_deep_copy_3_p_0(
#line 776 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_4,
#line 776 "solutions.m"
  MR_Word mercury__solutions__HeadVar__1_1,
#line 776 "solutions.m"
  MR_Box mercury__solutions__HeadVar__2_2,
#line 776 "solutions.m"
  MR_Box * mercury__solutions__HeadVar__3_3)
#line 776 "solutions.m"
{
#line 821 "solutions.m"
  {
#line 821 "solutions.m"
    MR_bool mercury__solutions__succeeded;

#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__partial_deep_copy_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  mercury__solutions__TypeInfo_for_T_4 ;
	SolutionsHeapPtr =  mercury__solutions__HeadVar__1_1 ;
	OldVal = (MR_Word) mercury__solutions__HeadVar__2_2 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 2693 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__HeadVar__3_3  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 821 "solutions.m"
  }
#line 776 "solutions.m"
}

#line 722 "solutions.m"
static void MR_CALL 
mercury__solutions__swap_heap_and_solutions_heap_0_p_0(void)
#line 722 "solutions.m"
{
#line 724 "solutions.m"
  {
#line 724 "solutions.m"
    MR_bool mercury__solutions__succeeded;

#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__swap_heap_and_solutions_heap_0_p_0


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 2735 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 724 "solutions.m"
  }
#line 722 "solutions.m"
}

#line 685 "solutions.m"
static void MR_CALL 
mercury__solutions__discard_trail_ticket_0_p_0(void)
#line 685 "solutions.m"
{
#line 687 "solutions.m"
  {
#line 687 "solutions.m"
    MR_bool mercury__solutions__succeeded;

#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__discard_trail_ticket_0_p_0


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 2768 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 687 "solutions.m"
  }
#line 685 "solutions.m"
}

#line 647 "solutions.m"
static void MR_CALL 
mercury__solutions__check_for_floundering_1_p_0(
#line 647 "solutions.m"
  MR_Word mercury__solutions__TrailPtr_1)
#line 647 "solutions.m"
{
#line 649 "solutions.m"
  {
#line 649 "solutions.m"
    MR_bool mercury__solutions__succeeded;

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__check_for_floundering_1_p_0

	MR_Word TrailPtr;

	TrailPtr =  mercury__solutions__TrailPtr_1 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 2806 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 649 "solutions.m"
  }
#line 647 "solutions.m"
}

#line 579 "solutions.m"
static void MR_CALL 
mercury__solutions__get_registers_3_p_0(
#line 579 "solutions.m"
  MR_Word * mercury__solutions__HeapPtr_1,
#line 579 "solutions.m"
  MR_Word * mercury__solutions__SolutionsHeapPtr_2,
#line 579 "solutions.m"
  MR_Word * mercury__solutions__TrailPtr_3)
#line 579 "solutions.m"
{
#line 582 "solutions.m"
  {
#line 582 "solutions.m"
    MR_bool mercury__solutions__succeeded;

#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__get_registers_3_p_0

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 2859 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__HeapPtr_1  = HeapPtr;
	 *mercury__solutions__SolutionsHeapPtr_2  = SolutionsHeapPtr;
	 *mercury__solutions__TrailPtr_3  = TrailPtr;
#line 585 "solutions.m"
}
#line 582 "solutions.m"
  }
#line 579 "solutions.m"
}

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_7_1(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 422 "solutions.m"
{
#line 422 "solutions.m"
  {
#line 422 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_7_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_7_env_0_s *) mercury__solutions__env_ptr_arg;

#line 422 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__commit_0, 1);
#line 422 "solutions.m"
  }
#line 422 "solutions.m"
}

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_7_2(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 422 "solutions.m"
{
#line 422 "solutions.m"
  {
#line 422 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_7_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_7_env_0_s *) mercury__solutions__env_ptr_arg;

#line 422 "solutions.m"
    {
#line 567 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__TrailPtr_13 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 2924 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 2950 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 812 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_T_32 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__HeapPtr_11 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__Answer0_16 ;
		{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 2973 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__Answer_17  = (MR_Box) NewVal;
#line 812 "solutions.m"
}
#line 431 "solutions.m"
      {
#line 431 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar1_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__STATE_VARIABLE_Acc1_28_28);
      }
#line 432 "solutions.m"
      {
#line 432 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar2_15, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__STATE_VARIABLE_Acc2_29_29);
      }
#line 567 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__CollectorPred_8, (MR_Integer) 1)));
#line 567 "solutions.m"
      {
#line 567 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__CollectorPred_8), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__Answer_17, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__STATE_VARIABLE_Acc1_28_28, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__STATE_VARIABLE_Acc1_30_30, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__STATE_VARIABLE_Acc2_29_29, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 568 "solutions.m"
      {
#line 568 "solutions.m"
        mercury__builtin__impure_true_0_p_0();
      }
#line 434 "solutions.m"
      {
#line 434 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar1_14, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__STATE_VARIABLE_Acc1_30_30);
      }
#line 435 "solutions.m"
      {
#line 435 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar2_15, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 3032 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 441 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__succeeded = MR_FALSE;
#line 441 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__succeeded)
#line 441 "solutions.m"
        {
#line 441 "solutions.m"
          mercury__solutions__builtin_aggregate2_6_p_7_1(mercury__solutions__env_ptr);
#line 441 "solutions.m"
          return;
        }
#line 422 "solutions.m"
    }
#line 422 "solutions.m"
  }
#line 422 "solutions.m"
}

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_7_3(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 422 "solutions.m"
{
#line 422 "solutions.m"
  {
#line 422 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_7_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_7_env_0_s *) mercury__solutions__env_ptr_arg;

#line 422 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__commit_0) == 0)
#line 422 "solutions.m"
      {
#line 422 "solutions.m"
        {
#line 422 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__GeneratorPred_7, (MR_Integer) 1)));

#line 422 "solutions.m"
          {
#line 422 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__GeneratorPred_7), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__Answer0_16, mercury__solutions__builtin_aggregate2_6_p_7_2, mercury__solutions__env_ptr);
          }
#line 422 "solutions.m"
        }
#line 422 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__succeeded = MR_FALSE;
#line 422 "solutions.m"
      }
#line 422 "solutions.m"
    else
#line 422 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__succeeded = MR_TRUE;
#line 422 "solutions.m"
  }
#line 422 "solutions.m"
}

#line 407 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_7(
#line 407 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_32,
#line 407 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_33,
#line 407 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_34,
#line 407 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_7,
#line 407 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_8,
#line 407 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_0_20,
#line 407 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator1_21,
#line 407 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_0_22,
#line 407 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator2_23)
#line 407 "solutions.m"
{
#line 407 "solutions.m"
  {
#line 407 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_7_env_0_s mercury__solutions__env;

#line 407 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_T_32 = mercury__solutions__TypeInfo_for_T_32;
#line 407 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_U_33 = mercury__solutions__TypeInfo_for_U_33;
#line 407 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_V_34 = mercury__solutions__TypeInfo_for_V_34;
#line 407 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__GeneratorPred_7 = mercury__solutions__GeneratorPred_7;
#line 407 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__CollectorPred_8 = mercury__solutions__CollectorPred_8;
#line 411 "solutions.m"
    {
#line 411 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_12;

#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 3166 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__HeapPtr_11  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_12  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TrailPtr_13  = TrailPtr;
#line 585 "solutions.m"
}
#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 3187 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 417 "solutions.m"
      {
#line 417 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_U_33, mercury__solutions__STATE_VARIABLE_Accumulator1_0_20, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar1_14);
      }
#line 418 "solutions.m"
      {
#line 418 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_V_34, mercury__solutions__STATE_VARIABLE_Accumulator2_0_22, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar2_15);
      }
#line 422 "solutions.m"
      {
#line 422 "solutions.m"
        mercury__solutions__builtin_aggregate2_6_p_7_3(&mercury__solutions__env);
      }
#line 442 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__succeeded))
#line 444 "solutions.m"
        {
#line 444 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_24_24;
#line 444 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_25_25;

#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 3229 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 450 "solutions.m"
          {
#line 450 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_U_33, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar1_14, &mercury__solutions__STATE_VARIABLE_Accumulator1_24_24);
          }
#line 451 "solutions.m"
          {
#line 451 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_V_34, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar2_15, &mercury__solutions__STATE_VARIABLE_Accumulator2_25_25);
          }
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_U_33 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator1_24_24 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 3262 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator1_21  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_V_34 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator2_25_25 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 3286 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator2_23  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 3307 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 3325 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 444 "solutions.m"
        }
#line 411 "solutions.m"
    }
#line 407 "solutions.m"
  }
#line 407 "solutions.m"
}

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_6_1(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 422 "solutions.m"
{
#line 422 "solutions.m"
  {
#line 422 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_6_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_6_env_0_s *) mercury__solutions__env_ptr_arg;

#line 422 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__commit_0, 1);
#line 422 "solutions.m"
  }
#line 422 "solutions.m"
}

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_6_2(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 422 "solutions.m"
{
#line 422 "solutions.m"
  {
#line 422 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_6_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_6_env_0_s *) mercury__solutions__env_ptr_arg;

#line 422 "solutions.m"
    {
#line 563 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__TrailPtr_13 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 3391 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 3417 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 812 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_T_32 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__HeapPtr_11 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__Answer0_16 ;
		{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 3440 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__Answer_17  = (MR_Box) NewVal;
#line 812 "solutions.m"
}
#line 431 "solutions.m"
      {
#line 431 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar1_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__STATE_VARIABLE_Acc1_28_28);
      }
#line 432 "solutions.m"
      {
#line 432 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar2_15, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__STATE_VARIABLE_Acc2_29_29);
      }
#line 563 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__CollectorPred_8, (MR_Integer) 1)));
#line 563 "solutions.m"
      {
#line 563 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__CollectorPred_8), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__Answer_17, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__STATE_VARIABLE_Acc1_28_28, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__STATE_VARIABLE_Acc1_30_30, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__STATE_VARIABLE_Acc2_29_29, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 434 "solutions.m"
      {
#line 434 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar1_14, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__STATE_VARIABLE_Acc1_30_30);
      }
#line 435 "solutions.m"
      {
#line 435 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar2_15, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 3494 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 441 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__succeeded = MR_FALSE;
#line 441 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__succeeded)
#line 441 "solutions.m"
        {
#line 441 "solutions.m"
          mercury__solutions__builtin_aggregate2_6_p_6_1(mercury__solutions__env_ptr);
#line 441 "solutions.m"
          return;
        }
#line 422 "solutions.m"
    }
#line 422 "solutions.m"
  }
#line 422 "solutions.m"
}

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_6_3(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 422 "solutions.m"
{
#line 422 "solutions.m"
  {
#line 422 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_6_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_6_env_0_s *) mercury__solutions__env_ptr_arg;

#line 422 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__commit_0) == 0)
#line 422 "solutions.m"
      {
#line 422 "solutions.m"
        {
#line 422 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__GeneratorPred_7, (MR_Integer) 1)));

#line 422 "solutions.m"
          {
#line 422 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__GeneratorPred_7), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__Answer0_16, mercury__solutions__builtin_aggregate2_6_p_6_2, mercury__solutions__env_ptr);
          }
#line 422 "solutions.m"
        }
#line 422 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__succeeded = MR_FALSE;
#line 422 "solutions.m"
      }
#line 422 "solutions.m"
    else
#line 422 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__succeeded = MR_TRUE;
#line 422 "solutions.m"
  }
#line 422 "solutions.m"
}

#line 404 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_6(
#line 404 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_32,
#line 404 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_33,
#line 404 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_34,
#line 404 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_7,
#line 404 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_8,
#line 404 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_0_20,
#line 404 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator1_21,
#line 404 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_0_22,
#line 404 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator2_23)
#line 404 "solutions.m"
{
#line 404 "solutions.m"
  {
#line 404 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_6_env_0_s mercury__solutions__env;

#line 404 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_T_32 = mercury__solutions__TypeInfo_for_T_32;
#line 404 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_U_33 = mercury__solutions__TypeInfo_for_U_33;
#line 404 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_V_34 = mercury__solutions__TypeInfo_for_V_34;
#line 404 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__GeneratorPred_7 = mercury__solutions__GeneratorPred_7;
#line 404 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__CollectorPred_8 = mercury__solutions__CollectorPred_8;
#line 411 "solutions.m"
    {
#line 411 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_12;

#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 3628 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__HeapPtr_11  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_12  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TrailPtr_13  = TrailPtr;
#line 585 "solutions.m"
}
#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 3649 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 417 "solutions.m"
      {
#line 417 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_U_33, mercury__solutions__STATE_VARIABLE_Accumulator1_0_20, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar1_14);
      }
#line 418 "solutions.m"
      {
#line 418 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_V_34, mercury__solutions__STATE_VARIABLE_Accumulator2_0_22, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar2_15);
      }
#line 422 "solutions.m"
      {
#line 422 "solutions.m"
        mercury__solutions__builtin_aggregate2_6_p_6_3(&mercury__solutions__env);
      }
#line 442 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__succeeded))
#line 444 "solutions.m"
        {
#line 444 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_24_24;
#line 444 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_25_25;

#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 3691 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 450 "solutions.m"
          {
#line 450 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_U_33, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar1_14, &mercury__solutions__STATE_VARIABLE_Accumulator1_24_24);
          }
#line 451 "solutions.m"
          {
#line 451 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_V_34, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar2_15, &mercury__solutions__STATE_VARIABLE_Accumulator2_25_25);
          }
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_U_33 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator1_24_24 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 3724 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator1_21  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_V_34 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator2_25_25 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 3748 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator2_23  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 3769 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 3787 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 444 "solutions.m"
        }
#line 411 "solutions.m"
    }
#line 404 "solutions.m"
  }
#line 404 "solutions.m"
}

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_5_1(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 422 "solutions.m"
{
#line 422 "solutions.m"
  {
#line 422 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_5_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_5_env_0_s *) mercury__solutions__env_ptr_arg;

#line 422 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__commit_0, 1);
#line 422 "solutions.m"
  }
#line 422 "solutions.m"
}

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_5_2(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 422 "solutions.m"
{
#line 422 "solutions.m"
  {
#line 422 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_5_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_5_env_0_s *) mercury__solutions__env_ptr_arg;

#line 422 "solutions.m"
    {
#line 558 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__TrailPtr_13 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 3853 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 3879 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 812 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_T_32 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__HeapPtr_11 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__Answer0_16 ;
		{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 3902 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__Answer_17  = (MR_Box) NewVal;
#line 812 "solutions.m"
}
#line 431 "solutions.m"
      {
#line 431 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar1_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__STATE_VARIABLE_Acc1_28_28);
      }
#line 432 "solutions.m"
      {
#line 432 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar2_15, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__STATE_VARIABLE_Acc2_29_29);
      }
#line 558 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__CollectorPred_8, (MR_Integer) 1)));
#line 558 "solutions.m"
      {
#line 558 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__CollectorPred_8), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__Answer_17, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__STATE_VARIABLE_Acc1_28_28, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__STATE_VARIABLE_Acc1_30_30, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__STATE_VARIABLE_Acc2_29_29, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 559 "solutions.m"
      {
#line 559 "solutions.m"
        mercury__builtin__impure_true_0_p_0();
      }
#line 434 "solutions.m"
      {
#line 434 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar1_14, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__STATE_VARIABLE_Acc1_30_30);
      }
#line 435 "solutions.m"
      {
#line 435 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar2_15, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 3961 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 441 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__succeeded = MR_FALSE;
#line 441 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__succeeded)
#line 441 "solutions.m"
        {
#line 441 "solutions.m"
          mercury__solutions__builtin_aggregate2_6_p_5_1(mercury__solutions__env_ptr);
#line 441 "solutions.m"
          return;
        }
#line 422 "solutions.m"
    }
#line 422 "solutions.m"
  }
#line 422 "solutions.m"
}

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_5_3(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 422 "solutions.m"
{
#line 422 "solutions.m"
  {
#line 422 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_5_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_5_env_0_s *) mercury__solutions__env_ptr_arg;

#line 422 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__commit_0) == 0)
#line 422 "solutions.m"
      {
#line 422 "solutions.m"
        {
#line 422 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__GeneratorPred_7, (MR_Integer) 1)));

#line 422 "solutions.m"
          {
#line 422 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__GeneratorPred_7), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__Answer0_16, mercury__solutions__builtin_aggregate2_6_p_5_2, mercury__solutions__env_ptr);
          }
#line 422 "solutions.m"
        }
#line 422 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__succeeded = MR_FALSE;
#line 422 "solutions.m"
      }
#line 422 "solutions.m"
    else
#line 422 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__succeeded = MR_TRUE;
#line 422 "solutions.m"
  }
#line 422 "solutions.m"
}

#line 401 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_5(
#line 401 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_32,
#line 401 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_33,
#line 401 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_34,
#line 401 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_7,
#line 401 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_8,
#line 401 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_0_20,
#line 401 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator1_21,
#line 401 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_0_22,
#line 401 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator2_23)
#line 401 "solutions.m"
{
#line 401 "solutions.m"
  {
#line 401 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_5_env_0_s mercury__solutions__env;

#line 401 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_T_32 = mercury__solutions__TypeInfo_for_T_32;
#line 401 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_U_33 = mercury__solutions__TypeInfo_for_U_33;
#line 401 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_V_34 = mercury__solutions__TypeInfo_for_V_34;
#line 401 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__GeneratorPred_7 = mercury__solutions__GeneratorPred_7;
#line 401 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__CollectorPred_8 = mercury__solutions__CollectorPred_8;
#line 411 "solutions.m"
    {
#line 411 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_12;

#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 4095 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__HeapPtr_11  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_12  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TrailPtr_13  = TrailPtr;
#line 585 "solutions.m"
}
#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 4116 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 417 "solutions.m"
      {
#line 417 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_U_33, mercury__solutions__STATE_VARIABLE_Accumulator1_0_20, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar1_14);
      }
#line 418 "solutions.m"
      {
#line 418 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_V_34, mercury__solutions__STATE_VARIABLE_Accumulator2_0_22, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar2_15);
      }
#line 422 "solutions.m"
      {
#line 422 "solutions.m"
        mercury__solutions__builtin_aggregate2_6_p_5_3(&mercury__solutions__env);
      }
#line 442 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__succeeded))
#line 444 "solutions.m"
        {
#line 444 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_24_24;
#line 444 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_25_25;

#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 4158 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 450 "solutions.m"
          {
#line 450 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_U_33, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar1_14, &mercury__solutions__STATE_VARIABLE_Accumulator1_24_24);
          }
#line 451 "solutions.m"
          {
#line 451 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_V_34, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar2_15, &mercury__solutions__STATE_VARIABLE_Accumulator2_25_25);
          }
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_U_33 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator1_24_24 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 4191 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator1_21  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_V_34 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator2_25_25 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 4215 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator2_23  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 4236 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 4254 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 444 "solutions.m"
        }
#line 411 "solutions.m"
    }
#line 401 "solutions.m"
  }
#line 401 "solutions.m"
}

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_4_1(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 422 "solutions.m"
{
#line 422 "solutions.m"
  {
#line 422 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_4_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_4_env_0_s *) mercury__solutions__env_ptr_arg;

#line 422 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__commit_0, 1);
#line 422 "solutions.m"
  }
#line 422 "solutions.m"
}

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_4_2(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 422 "solutions.m"
{
#line 422 "solutions.m"
  {
#line 422 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_4_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_4_env_0_s *) mercury__solutions__env_ptr_arg;

#line 422 "solutions.m"
    {
#line 554 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__TrailPtr_13 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 4320 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 4346 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 812 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_T_32 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__HeapPtr_11 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__Answer0_16 ;
		{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 4369 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__Answer_17  = (MR_Box) NewVal;
#line 812 "solutions.m"
}
#line 431 "solutions.m"
      {
#line 431 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar1_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__STATE_VARIABLE_Acc1_28_28);
      }
#line 432 "solutions.m"
      {
#line 432 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar2_15, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__STATE_VARIABLE_Acc2_29_29);
      }
#line 554 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__CollectorPred_8, (MR_Integer) 1)));
#line 554 "solutions.m"
      {
#line 554 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__CollectorPred_8), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__Answer_17, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__STATE_VARIABLE_Acc1_28_28, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__STATE_VARIABLE_Acc1_30_30, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__STATE_VARIABLE_Acc2_29_29, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 434 "solutions.m"
      {
#line 434 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar1_14, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__STATE_VARIABLE_Acc1_30_30);
      }
#line 435 "solutions.m"
      {
#line 435 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar2_15, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 4423 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 441 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__succeeded = MR_FALSE;
#line 441 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__succeeded)
#line 441 "solutions.m"
        {
#line 441 "solutions.m"
          mercury__solutions__builtin_aggregate2_6_p_4_1(mercury__solutions__env_ptr);
#line 441 "solutions.m"
          return;
        }
#line 422 "solutions.m"
    }
#line 422 "solutions.m"
  }
#line 422 "solutions.m"
}

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_4_3(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 422 "solutions.m"
{
#line 422 "solutions.m"
  {
#line 422 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_4_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_4_env_0_s *) mercury__solutions__env_ptr_arg;

#line 422 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__commit_0) == 0)
#line 422 "solutions.m"
      {
#line 422 "solutions.m"
        {
#line 422 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__GeneratorPred_7, (MR_Integer) 1)));

#line 422 "solutions.m"
          {
#line 422 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__GeneratorPred_7), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__Answer0_16, mercury__solutions__builtin_aggregate2_6_p_4_2, mercury__solutions__env_ptr);
          }
#line 422 "solutions.m"
        }
#line 422 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__succeeded = MR_FALSE;
#line 422 "solutions.m"
      }
#line 422 "solutions.m"
    else
#line 422 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__succeeded = MR_TRUE;
#line 422 "solutions.m"
  }
#line 422 "solutions.m"
}

#line 398 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_4(
#line 398 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_32,
#line 398 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_33,
#line 398 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_34,
#line 398 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_7,
#line 398 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_8,
#line 398 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_0_20,
#line 398 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator1_21,
#line 398 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_0_22,
#line 398 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator2_23)
#line 398 "solutions.m"
{
#line 398 "solutions.m"
  {
#line 398 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_4_env_0_s mercury__solutions__env;

#line 398 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_T_32 = mercury__solutions__TypeInfo_for_T_32;
#line 398 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_U_33 = mercury__solutions__TypeInfo_for_U_33;
#line 398 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_V_34 = mercury__solutions__TypeInfo_for_V_34;
#line 398 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__GeneratorPred_7 = mercury__solutions__GeneratorPred_7;
#line 398 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__CollectorPred_8 = mercury__solutions__CollectorPred_8;
#line 411 "solutions.m"
    {
#line 411 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_12;

#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 4557 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__HeapPtr_11  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_12  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TrailPtr_13  = TrailPtr;
#line 585 "solutions.m"
}
#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 4578 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 417 "solutions.m"
      {
#line 417 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_U_33, mercury__solutions__STATE_VARIABLE_Accumulator1_0_20, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar1_14);
      }
#line 418 "solutions.m"
      {
#line 418 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_V_34, mercury__solutions__STATE_VARIABLE_Accumulator2_0_22, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar2_15);
      }
#line 422 "solutions.m"
      {
#line 422 "solutions.m"
        mercury__solutions__builtin_aggregate2_6_p_4_3(&mercury__solutions__env);
      }
#line 442 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__succeeded))
#line 444 "solutions.m"
        {
#line 444 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_24_24;
#line 444 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_25_25;

#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 4620 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 450 "solutions.m"
          {
#line 450 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_U_33, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar1_14, &mercury__solutions__STATE_VARIABLE_Accumulator1_24_24);
          }
#line 451 "solutions.m"
          {
#line 451 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_V_34, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar2_15, &mercury__solutions__STATE_VARIABLE_Accumulator2_25_25);
          }
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_U_33 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator1_24_24 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 4653 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator1_21  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_V_34 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator2_25_25 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 4677 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator2_23  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 4698 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 4716 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 444 "solutions.m"
        }
#line 411 "solutions.m"
    }
#line 398 "solutions.m"
  }
#line 398 "solutions.m"
}

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_3_1(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 422 "solutions.m"
{
#line 422 "solutions.m"
  {
#line 422 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_3_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_3_env_0_s *) mercury__solutions__env_ptr_arg;

#line 422 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__commit_0, 1);
#line 422 "solutions.m"
  }
#line 422 "solutions.m"
}

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_3_2(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 422 "solutions.m"
{
#line 422 "solutions.m"
  {
#line 422 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_3_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_3_env_0_s *) mercury__solutions__env_ptr_arg;

#line 422 "solutions.m"
    {
#line 567 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__TrailPtr_13 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 4782 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 4808 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 812 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_T_32 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__HeapPtr_11 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__Answer0_16 ;
		{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 4831 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__Answer_17  = (MR_Box) NewVal;
#line 812 "solutions.m"
}
#line 431 "solutions.m"
      {
#line 431 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar1_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__STATE_VARIABLE_Acc1_28_28);
      }
#line 432 "solutions.m"
      {
#line 432 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar2_15, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__STATE_VARIABLE_Acc2_29_29);
      }
#line 567 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__CollectorPred_8, (MR_Integer) 1)));
#line 567 "solutions.m"
      {
#line 567 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__CollectorPred_8), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__Answer_17, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__STATE_VARIABLE_Acc1_28_28, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__STATE_VARIABLE_Acc1_30_30, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__STATE_VARIABLE_Acc2_29_29, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 568 "solutions.m"
      {
#line 568 "solutions.m"
        mercury__builtin__impure_true_0_p_0();
      }
#line 434 "solutions.m"
      {
#line 434 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar1_14, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__STATE_VARIABLE_Acc1_30_30);
      }
#line 435 "solutions.m"
      {
#line 435 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar2_15, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 4890 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 441 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__succeeded = MR_FALSE;
#line 441 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__succeeded)
#line 441 "solutions.m"
        {
#line 441 "solutions.m"
          mercury__solutions__builtin_aggregate2_6_p_3_1(mercury__solutions__env_ptr);
#line 441 "solutions.m"
          return;
        }
#line 422 "solutions.m"
    }
#line 422 "solutions.m"
  }
#line 422 "solutions.m"
}

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_3_3(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 422 "solutions.m"
{
#line 422 "solutions.m"
  {
#line 422 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_3_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_3_env_0_s *) mercury__solutions__env_ptr_arg;

#line 422 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__commit_0) == 0)
#line 422 "solutions.m"
      {
#line 422 "solutions.m"
        {
#line 422 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__GeneratorPred_7, (MR_Integer) 1)));

#line 422 "solutions.m"
          {
#line 422 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__GeneratorPred_7), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__Answer0_16, mercury__solutions__builtin_aggregate2_6_p_3_2, mercury__solutions__env_ptr);
          }
#line 422 "solutions.m"
        }
#line 422 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__succeeded = MR_FALSE;
#line 422 "solutions.m"
      }
#line 422 "solutions.m"
    else
#line 422 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__succeeded = MR_TRUE;
#line 422 "solutions.m"
  }
#line 422 "solutions.m"
}

#line 395 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_3(
#line 395 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_32,
#line 395 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_33,
#line 395 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_34,
#line 395 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_7,
#line 395 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_8,
#line 395 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_0_20,
#line 395 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator1_21,
#line 395 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_0_22,
#line 395 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator2_23)
#line 395 "solutions.m"
{
#line 395 "solutions.m"
  {
#line 395 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_3_env_0_s mercury__solutions__env;

#line 395 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_T_32 = mercury__solutions__TypeInfo_for_T_32;
#line 395 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_U_33 = mercury__solutions__TypeInfo_for_U_33;
#line 395 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_V_34 = mercury__solutions__TypeInfo_for_V_34;
#line 395 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__GeneratorPred_7 = mercury__solutions__GeneratorPred_7;
#line 395 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__CollectorPred_8 = mercury__solutions__CollectorPred_8;
#line 411 "solutions.m"
    {
#line 411 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_12;

#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 5024 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__HeapPtr_11  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_12  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TrailPtr_13  = TrailPtr;
#line 585 "solutions.m"
}
#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 5045 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 417 "solutions.m"
      {
#line 417 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_U_33, mercury__solutions__STATE_VARIABLE_Accumulator1_0_20, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar1_14);
      }
#line 418 "solutions.m"
      {
#line 418 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_V_34, mercury__solutions__STATE_VARIABLE_Accumulator2_0_22, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar2_15);
      }
#line 422 "solutions.m"
      {
#line 422 "solutions.m"
        mercury__solutions__builtin_aggregate2_6_p_3_3(&mercury__solutions__env);
      }
#line 442 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__succeeded))
#line 444 "solutions.m"
        {
#line 444 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_24_24;
#line 444 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_25_25;

#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 5087 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 450 "solutions.m"
          {
#line 450 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_U_33, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar1_14, &mercury__solutions__STATE_VARIABLE_Accumulator1_24_24);
          }
#line 451 "solutions.m"
          {
#line 451 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_V_34, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar2_15, &mercury__solutions__STATE_VARIABLE_Accumulator2_25_25);
          }
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_U_33 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator1_24_24 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 5120 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator1_21  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_V_34 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator2_25_25 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 5144 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator2_23  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 5165 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 5183 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 444 "solutions.m"
        }
#line 411 "solutions.m"
    }
#line 395 "solutions.m"
  }
#line 395 "solutions.m"
}

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_2_1(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 422 "solutions.m"
{
#line 422 "solutions.m"
  {
#line 422 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_2_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_2_env_0_s *) mercury__solutions__env_ptr_arg;

#line 422 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__commit_0, 1);
#line 422 "solutions.m"
  }
#line 422 "solutions.m"
}

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_2_2(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 422 "solutions.m"
{
#line 422 "solutions.m"
  {
#line 422 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_2_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_2_env_0_s *) mercury__solutions__env_ptr_arg;

#line 422 "solutions.m"
    {
#line 563 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__TrailPtr_13 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 5249 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 5275 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 812 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_T_32 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__HeapPtr_11 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__Answer0_16 ;
		{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 5298 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__Answer_17  = (MR_Box) NewVal;
#line 812 "solutions.m"
}
#line 431 "solutions.m"
      {
#line 431 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar1_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__STATE_VARIABLE_Acc1_28_28);
      }
#line 432 "solutions.m"
      {
#line 432 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar2_15, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__STATE_VARIABLE_Acc2_29_29);
      }
#line 563 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__CollectorPred_8, (MR_Integer) 1)));
#line 563 "solutions.m"
      {
#line 563 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__CollectorPred_8), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__Answer_17, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__STATE_VARIABLE_Acc1_28_28, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__STATE_VARIABLE_Acc1_30_30, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__STATE_VARIABLE_Acc2_29_29, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 434 "solutions.m"
      {
#line 434 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar1_14, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__STATE_VARIABLE_Acc1_30_30);
      }
#line 435 "solutions.m"
      {
#line 435 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar2_15, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 5352 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 441 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__succeeded = MR_FALSE;
#line 441 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__succeeded)
#line 441 "solutions.m"
        {
#line 441 "solutions.m"
          mercury__solutions__builtin_aggregate2_6_p_2_1(mercury__solutions__env_ptr);
#line 441 "solutions.m"
          return;
        }
#line 422 "solutions.m"
    }
#line 422 "solutions.m"
  }
#line 422 "solutions.m"
}

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_2_3(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 422 "solutions.m"
{
#line 422 "solutions.m"
  {
#line 422 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_2_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_2_env_0_s *) mercury__solutions__env_ptr_arg;

#line 422 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__commit_0) == 0)
#line 422 "solutions.m"
      {
#line 422 "solutions.m"
        {
#line 422 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__GeneratorPred_7, (MR_Integer) 1)));

#line 422 "solutions.m"
          {
#line 422 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__GeneratorPred_7), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__Answer0_16, mercury__solutions__builtin_aggregate2_6_p_2_2, mercury__solutions__env_ptr);
          }
#line 422 "solutions.m"
        }
#line 422 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__succeeded = MR_FALSE;
#line 422 "solutions.m"
      }
#line 422 "solutions.m"
    else
#line 422 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__succeeded = MR_TRUE;
#line 422 "solutions.m"
  }
#line 422 "solutions.m"
}

#line 392 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_2(
#line 392 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_32,
#line 392 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_33,
#line 392 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_34,
#line 392 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_7,
#line 392 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_8,
#line 392 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_0_20,
#line 392 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator1_21,
#line 392 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_0_22,
#line 392 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator2_23)
#line 392 "solutions.m"
{
#line 392 "solutions.m"
  {
#line 392 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_2_env_0_s mercury__solutions__env;

#line 392 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_T_32 = mercury__solutions__TypeInfo_for_T_32;
#line 392 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_U_33 = mercury__solutions__TypeInfo_for_U_33;
#line 392 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_V_34 = mercury__solutions__TypeInfo_for_V_34;
#line 392 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__GeneratorPred_7 = mercury__solutions__GeneratorPred_7;
#line 392 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__CollectorPred_8 = mercury__solutions__CollectorPred_8;
#line 411 "solutions.m"
    {
#line 411 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_12;

#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 5486 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__HeapPtr_11  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_12  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TrailPtr_13  = TrailPtr;
#line 585 "solutions.m"
}
#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 5507 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 417 "solutions.m"
      {
#line 417 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_U_33, mercury__solutions__STATE_VARIABLE_Accumulator1_0_20, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar1_14);
      }
#line 418 "solutions.m"
      {
#line 418 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_V_34, mercury__solutions__STATE_VARIABLE_Accumulator2_0_22, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar2_15);
      }
#line 422 "solutions.m"
      {
#line 422 "solutions.m"
        mercury__solutions__builtin_aggregate2_6_p_2_3(&mercury__solutions__env);
      }
#line 442 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__succeeded))
#line 444 "solutions.m"
        {
#line 444 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_24_24;
#line 444 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_25_25;

#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 5549 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 450 "solutions.m"
          {
#line 450 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_U_33, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar1_14, &mercury__solutions__STATE_VARIABLE_Accumulator1_24_24);
          }
#line 451 "solutions.m"
          {
#line 451 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_V_34, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar2_15, &mercury__solutions__STATE_VARIABLE_Accumulator2_25_25);
          }
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_U_33 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator1_24_24 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 5582 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator1_21  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_V_34 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator2_25_25 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 5606 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator2_23  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 5627 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 5645 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 444 "solutions.m"
        }
#line 411 "solutions.m"
    }
#line 392 "solutions.m"
  }
#line 392 "solutions.m"
}

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_1_1(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 422 "solutions.m"
{
#line 422 "solutions.m"
  {
#line 422 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_1_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_1_env_0_s *) mercury__solutions__env_ptr_arg;

#line 422 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__commit_0, 1);
#line 422 "solutions.m"
  }
#line 422 "solutions.m"
}

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_1_2(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 422 "solutions.m"
{
#line 422 "solutions.m"
  {
#line 422 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_1_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_1_env_0_s *) mercury__solutions__env_ptr_arg;

#line 422 "solutions.m"
    {
#line 558 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__TrailPtr_13 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 5711 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 5737 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 812 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_T_32 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__HeapPtr_11 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__Answer0_16 ;
		{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 5760 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__Answer_17  = (MR_Box) NewVal;
#line 812 "solutions.m"
}
#line 431 "solutions.m"
      {
#line 431 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar1_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__STATE_VARIABLE_Acc1_28_28);
      }
#line 432 "solutions.m"
      {
#line 432 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar2_15, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__STATE_VARIABLE_Acc2_29_29);
      }
#line 558 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__CollectorPred_8, (MR_Integer) 1)));
#line 558 "solutions.m"
      {
#line 558 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__CollectorPred_8), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__Answer_17, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__STATE_VARIABLE_Acc1_28_28, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__STATE_VARIABLE_Acc1_30_30, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__STATE_VARIABLE_Acc2_29_29, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 559 "solutions.m"
      {
#line 559 "solutions.m"
        mercury__builtin__impure_true_0_p_0();
      }
#line 434 "solutions.m"
      {
#line 434 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar1_14, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__STATE_VARIABLE_Acc1_30_30);
      }
#line 435 "solutions.m"
      {
#line 435 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar2_15, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 5819 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 441 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__succeeded = MR_FALSE;
#line 441 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__succeeded)
#line 441 "solutions.m"
        {
#line 441 "solutions.m"
          mercury__solutions__builtin_aggregate2_6_p_1_1(mercury__solutions__env_ptr);
#line 441 "solutions.m"
          return;
        }
#line 422 "solutions.m"
    }
#line 422 "solutions.m"
  }
#line 422 "solutions.m"
}

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_1_3(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 422 "solutions.m"
{
#line 422 "solutions.m"
  {
#line 422 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_1_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_1_env_0_s *) mercury__solutions__env_ptr_arg;

#line 422 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__commit_0) == 0)
#line 422 "solutions.m"
      {
#line 422 "solutions.m"
        {
#line 422 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__GeneratorPred_7, (MR_Integer) 1)));

#line 422 "solutions.m"
          {
#line 422 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__GeneratorPred_7), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__Answer0_16, mercury__solutions__builtin_aggregate2_6_p_1_2, mercury__solutions__env_ptr);
          }
#line 422 "solutions.m"
        }
#line 422 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__succeeded = MR_FALSE;
#line 422 "solutions.m"
      }
#line 422 "solutions.m"
    else
#line 422 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__succeeded = MR_TRUE;
#line 422 "solutions.m"
  }
#line 422 "solutions.m"
}

#line 389 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_1(
#line 389 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_32,
#line 389 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_33,
#line 389 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_34,
#line 389 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_7,
#line 389 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_8,
#line 389 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_0_20,
#line 389 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator1_21,
#line 389 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_0_22,
#line 389 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator2_23)
#line 389 "solutions.m"
{
#line 389 "solutions.m"
  {
#line 389 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_1_env_0_s mercury__solutions__env;

#line 389 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_T_32 = mercury__solutions__TypeInfo_for_T_32;
#line 389 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_U_33 = mercury__solutions__TypeInfo_for_U_33;
#line 389 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_V_34 = mercury__solutions__TypeInfo_for_V_34;
#line 389 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__GeneratorPred_7 = mercury__solutions__GeneratorPred_7;
#line 389 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__CollectorPred_8 = mercury__solutions__CollectorPred_8;
#line 411 "solutions.m"
    {
#line 411 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_12;

#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 5953 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__HeapPtr_11  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_12  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TrailPtr_13  = TrailPtr;
#line 585 "solutions.m"
}
#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 5974 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 417 "solutions.m"
      {
#line 417 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_U_33, mercury__solutions__STATE_VARIABLE_Accumulator1_0_20, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar1_14);
      }
#line 418 "solutions.m"
      {
#line 418 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_V_34, mercury__solutions__STATE_VARIABLE_Accumulator2_0_22, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar2_15);
      }
#line 422 "solutions.m"
      {
#line 422 "solutions.m"
        mercury__solutions__builtin_aggregate2_6_p_1_3(&mercury__solutions__env);
      }
#line 442 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__succeeded))
#line 444 "solutions.m"
        {
#line 444 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_24_24;
#line 444 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_25_25;

#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 6016 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 450 "solutions.m"
          {
#line 450 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_U_33, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar1_14, &mercury__solutions__STATE_VARIABLE_Accumulator1_24_24);
          }
#line 451 "solutions.m"
          {
#line 451 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_V_34, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar2_15, &mercury__solutions__STATE_VARIABLE_Accumulator2_25_25);
          }
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_U_33 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator1_24_24 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 6049 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator1_21  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_V_34 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator2_25_25 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 6073 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator2_23  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 6094 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 6112 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 444 "solutions.m"
        }
#line 411 "solutions.m"
    }
#line 389 "solutions.m"
  }
#line 389 "solutions.m"
}

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_0_1(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 422 "solutions.m"
{
#line 422 "solutions.m"
  {
#line 422 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_0_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_0_env_0_s *) mercury__solutions__env_ptr_arg;

#line 422 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__commit_0, 1);
#line 422 "solutions.m"
  }
#line 422 "solutions.m"
}

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_0_2(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 422 "solutions.m"
{
#line 422 "solutions.m"
  {
#line 422 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_0_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_0_env_0_s *) mercury__solutions__env_ptr_arg;

#line 422 "solutions.m"
    {
#line 554 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__TrailPtr_13 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 6178 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 6204 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 812 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_T_32 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__HeapPtr_11 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__Answer0_16 ;
		{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 6227 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__Answer_17  = (MR_Box) NewVal;
#line 812 "solutions.m"
}
#line 431 "solutions.m"
      {
#line 431 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar1_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__STATE_VARIABLE_Acc1_28_28);
      }
#line 432 "solutions.m"
      {
#line 432 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar2_15, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__STATE_VARIABLE_Acc2_29_29);
      }
#line 554 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__CollectorPred_8, (MR_Integer) 1)));
#line 554 "solutions.m"
      {
#line 554 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__CollectorPred_8), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__Answer_17, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__STATE_VARIABLE_Acc1_28_28, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__STATE_VARIABLE_Acc1_30_30, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__STATE_VARIABLE_Acc2_29_29, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 434 "solutions.m"
      {
#line 434 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar1_14, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__STATE_VARIABLE_Acc1_30_30);
      }
#line 435 "solutions.m"
      {
#line 435 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar2_15, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 6281 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 441 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__succeeded = MR_FALSE;
#line 441 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__succeeded)
#line 441 "solutions.m"
        {
#line 441 "solutions.m"
          mercury__solutions__builtin_aggregate2_6_p_0_1(mercury__solutions__env_ptr);
#line 441 "solutions.m"
          return;
        }
#line 422 "solutions.m"
    }
#line 422 "solutions.m"
  }
#line 422 "solutions.m"
}

#line 422 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_0_3(
#line 422 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 422 "solutions.m"
{
#line 422 "solutions.m"
  {
#line 422 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_0_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_0_env_0_s *) mercury__solutions__env_ptr_arg;

#line 422 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__commit_0) == 0)
#line 422 "solutions.m"
      {
#line 422 "solutions.m"
        {
#line 422 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__GeneratorPred_7, (MR_Integer) 1)));

#line 422 "solutions.m"
          {
#line 422 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__GeneratorPred_7), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__Answer0_16, mercury__solutions__builtin_aggregate2_6_p_0_2, mercury__solutions__env_ptr);
          }
#line 422 "solutions.m"
        }
#line 422 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__succeeded = MR_FALSE;
#line 422 "solutions.m"
      }
#line 422 "solutions.m"
    else
#line 422 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__succeeded = MR_TRUE;
#line 422 "solutions.m"
  }
#line 422 "solutions.m"
}

#line 386 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_0(
#line 386 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_32,
#line 386 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_33,
#line 386 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_34,
#line 386 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_7,
#line 386 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_8,
#line 386 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_0_20,
#line 386 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator1_21,
#line 386 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_0_22,
#line 386 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator2_23)
#line 386 "solutions.m"
{
#line 386 "solutions.m"
  {
#line 386 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_0_env_0_s mercury__solutions__env;

#line 386 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_T_32 = mercury__solutions__TypeInfo_for_T_32;
#line 386 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_U_33 = mercury__solutions__TypeInfo_for_U_33;
#line 386 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_V_34 = mercury__solutions__TypeInfo_for_V_34;
#line 386 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__GeneratorPred_7 = mercury__solutions__GeneratorPred_7;
#line 386 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__CollectorPred_8 = mercury__solutions__CollectorPred_8;
#line 411 "solutions.m"
    {
#line 411 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_12;

#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 6415 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__HeapPtr_11  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_12  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TrailPtr_13  = TrailPtr;
#line 585 "solutions.m"
}
#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 6436 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 417 "solutions.m"
      {
#line 417 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_U_33, mercury__solutions__STATE_VARIABLE_Accumulator1_0_20, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar1_14);
      }
#line 418 "solutions.m"
      {
#line 418 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_V_34, mercury__solutions__STATE_VARIABLE_Accumulator2_0_22, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar2_15);
      }
#line 422 "solutions.m"
      {
#line 422 "solutions.m"
        mercury__solutions__builtin_aggregate2_6_p_0_3(&mercury__solutions__env);
      }
#line 442 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__succeeded))
#line 444 "solutions.m"
        {
#line 444 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_24_24;
#line 444 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_25_25;

#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 6478 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 450 "solutions.m"
          {
#line 450 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_U_33, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar1_14, &mercury__solutions__STATE_VARIABLE_Accumulator1_24_24);
          }
#line 451 "solutions.m"
          {
#line 451 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_V_34, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar2_15, &mercury__solutions__STATE_VARIABLE_Accumulator2_25_25);
          }
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_U_33 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator1_24_24 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 6511 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator1_21  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_V_34 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator2_25_25 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 6535 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator2_23  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 6556 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 6574 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 444 "solutions.m"
        }
#line 411 "solutions.m"
    }
#line 386 "solutions.m"
  }
#line 386 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_9_1(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_9_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_9_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__commit_0, 1);
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_9_2(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_9_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_9_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    {
#line 523 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__TrailPtr_10 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 6640 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 6666 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 818 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_T_20 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Answer0_12 ;
		{
#line 818 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 6689 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Answer_13  = (MR_Box) NewVal;
#line 818 "solutions.m"
}
#line 358 "solutions.m"
      {
#line 358 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Acc0_14);
      }
#line 523 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 523 "solutions.m"
      {
#line 523 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Answer_13, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Acc1_15);
      }
#line 360 "solutions.m"
      {
#line 360 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Acc1_15);
      }
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 6733 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 365 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__succeeded = MR_FALSE;
#line 365 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__succeeded)
#line 365 "solutions.m"
        {
#line 365 "solutions.m"
          mercury__solutions__builtin_aggregate_4_p_9_1(mercury__solutions__env_ptr);
#line 365 "solutions.m"
          return;
        }
#line 349 "solutions.m"
    }
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_9_3(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_9_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_9_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__commit_0) == 0)
#line 349 "solutions.m"
      {
#line 349 "solutions.m"
        {
#line 349 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 349 "solutions.m"
          {
#line 349 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_9_2, mercury__solutions__env_ptr);
          }
#line 349 "solutions.m"
        }
#line 349 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__succeeded = MR_FALSE;
#line 349 "solutions.m"
      }
#line 349 "solutions.m"
    else
#line 349 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__succeeded = MR_TRUE;
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 283 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_9(
#line 283 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_20,
#line 283 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_21,
#line 283 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 283 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 283 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_16,
#line 283 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_17)
#line 283 "solutions.m"
{
#line 283 "solutions.m"
  {
#line 283 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_9_env_0_s mercury__solutions__env;

#line 283 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_T_20 = mercury__solutions__TypeInfo_for_T_20;
#line 283 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_U_21 = mercury__solutions__TypeInfo_for_U_21;
#line 283 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_9_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 283 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_9_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 338 "solutions.m"
    {
#line 338 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;

#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 6859 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_9_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_9_env_0__TrailPtr_10  = TrailPtr;
#line 585 "solutions.m"
}
#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 6880 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 345 "solutions.m"
      {
#line 345 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_U_21, mercury__solutions__STATE_VARIABLE_Accumulator_0_16, &(mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_9_env_0__Mutvar_11);
      }
#line 349 "solutions.m"
      {
#line 349 "solutions.m"
        mercury__solutions__builtin_aggregate_4_p_9_3(&mercury__solutions__env);
      }
#line 366 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_9_env_0__succeeded))
#line 368 "solutions.m"
        {
#line 368 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_18_18;

#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 6915 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 375 "solutions.m"
          {
#line 375 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_U_21, (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_9_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_18_18);
          }
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_U_21 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator_18_18 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 6943 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_17  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 6964 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 6982 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 368 "solutions.m"
        }
#line 338 "solutions.m"
    }
#line 283 "solutions.m"
  }
#line 283 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_8_1(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_8_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_8_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__commit_0, 1);
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_8_2(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_8_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_8_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    {
#line 512 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__TrailPtr_10 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 7048 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 7074 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 812 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_T_20 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Answer0_12 ;
		{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 7097 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Answer_13  = (MR_Box) NewVal;
#line 812 "solutions.m"
}
#line 358 "solutions.m"
      {
#line 358 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Acc0_14);
      }
#line 512 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 512 "solutions.m"
      {
#line 512 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Answer_13, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Acc1_15);
      }
#line 513 "solutions.m"
      {
#line 513 "solutions.m"
        mercury__builtin__impure_true_0_p_0();
      }
#line 360 "solutions.m"
      {
#line 360 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Acc1_15);
      }
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 7146 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 365 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__succeeded = MR_FALSE;
#line 365 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__succeeded)
#line 365 "solutions.m"
        {
#line 365 "solutions.m"
          mercury__solutions__builtin_aggregate_4_p_8_1(mercury__solutions__env_ptr);
#line 365 "solutions.m"
          return;
        }
#line 349 "solutions.m"
    }
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_8_3(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_8_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_8_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__commit_0) == 0)
#line 349 "solutions.m"
      {
#line 349 "solutions.m"
        {
#line 349 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 349 "solutions.m"
          {
#line 349 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_8_2, mercury__solutions__env_ptr);
          }
#line 349 "solutions.m"
        }
#line 349 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__succeeded = MR_FALSE;
#line 349 "solutions.m"
      }
#line 349 "solutions.m"
    else
#line 349 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__succeeded = MR_TRUE;
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 281 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_8(
#line 281 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_20,
#line 281 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_21,
#line 281 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 281 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 281 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_16,
#line 281 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_17)
#line 281 "solutions.m"
{
#line 281 "solutions.m"
  {
#line 281 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_8_env_0_s mercury__solutions__env;

#line 281 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_T_20 = mercury__solutions__TypeInfo_for_T_20;
#line 281 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_U_21 = mercury__solutions__TypeInfo_for_U_21;
#line 281 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_8_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 281 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_8_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 338 "solutions.m"
    {
#line 338 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;

#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 7272 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_8_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_8_env_0__TrailPtr_10  = TrailPtr;
#line 585 "solutions.m"
}
#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 7293 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 345 "solutions.m"
      {
#line 345 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_U_21, mercury__solutions__STATE_VARIABLE_Accumulator_0_16, &(mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_8_env_0__Mutvar_11);
      }
#line 349 "solutions.m"
      {
#line 349 "solutions.m"
        mercury__solutions__builtin_aggregate_4_p_8_3(&mercury__solutions__env);
      }
#line 366 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_8_env_0__succeeded))
#line 368 "solutions.m"
        {
#line 368 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_18_18;

#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 7328 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 375 "solutions.m"
          {
#line 375 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_U_21, (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_8_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_18_18);
          }
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_U_21 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator_18_18 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 7356 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_17  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 7377 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 7395 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 368 "solutions.m"
        }
#line 338 "solutions.m"
    }
#line 281 "solutions.m"
  }
#line 281 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_7_1(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_7_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_7_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__commit_0, 1);
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_7_2(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_7_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_7_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    {
#line 509 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__TrailPtr_10 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 7461 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 7487 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 812 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_T_20 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Answer0_12 ;
		{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 7510 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Answer_13  = (MR_Box) NewVal;
#line 812 "solutions.m"
}
#line 358 "solutions.m"
      {
#line 358 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Acc0_14);
      }
#line 509 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 509 "solutions.m"
      {
#line 509 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Answer_13, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Acc1_15);
      }
#line 360 "solutions.m"
      {
#line 360 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Acc1_15);
      }
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 7554 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 365 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__succeeded = MR_FALSE;
#line 365 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__succeeded)
#line 365 "solutions.m"
        {
#line 365 "solutions.m"
          mercury__solutions__builtin_aggregate_4_p_7_1(mercury__solutions__env_ptr);
#line 365 "solutions.m"
          return;
        }
#line 349 "solutions.m"
    }
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_7_3(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_7_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_7_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__commit_0) == 0)
#line 349 "solutions.m"
      {
#line 349 "solutions.m"
        {
#line 349 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 349 "solutions.m"
          {
#line 349 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_7_2, mercury__solutions__env_ptr);
          }
#line 349 "solutions.m"
        }
#line 349 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__succeeded = MR_FALSE;
#line 349 "solutions.m"
      }
#line 349 "solutions.m"
    else
#line 349 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__succeeded = MR_TRUE;
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 279 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_7(
#line 279 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_20,
#line 279 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_21,
#line 279 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 279 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 279 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_16,
#line 279 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_17)
#line 279 "solutions.m"
{
#line 279 "solutions.m"
  {
#line 279 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_7_env_0_s mercury__solutions__env;

#line 279 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_T_20 = mercury__solutions__TypeInfo_for_T_20;
#line 279 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_U_21 = mercury__solutions__TypeInfo_for_U_21;
#line 279 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_7_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 279 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_7_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 338 "solutions.m"
    {
#line 338 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;

#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 7680 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_7_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_7_env_0__TrailPtr_10  = TrailPtr;
#line 585 "solutions.m"
}
#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 7701 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 345 "solutions.m"
      {
#line 345 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_U_21, mercury__solutions__STATE_VARIABLE_Accumulator_0_16, &(mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_7_env_0__Mutvar_11);
      }
#line 349 "solutions.m"
      {
#line 349 "solutions.m"
        mercury__solutions__builtin_aggregate_4_p_7_3(&mercury__solutions__env);
      }
#line 366 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_7_env_0__succeeded))
#line 368 "solutions.m"
        {
#line 368 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_18_18;

#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 7736 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 375 "solutions.m"
          {
#line 375 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_U_21, (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_7_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_18_18);
          }
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_U_21 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator_18_18 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 7764 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_17  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 7785 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 7803 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 368 "solutions.m"
        }
#line 338 "solutions.m"
    }
#line 279 "solutions.m"
  }
#line 279 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_6_1(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_6_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_6_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__commit_0, 1);
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_6_2(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_6_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_6_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    {
#line 517 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__TrailPtr_10 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 7869 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 7895 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 812 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_T_20 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Answer0_12 ;
		{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 7918 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Answer_13  = (MR_Box) NewVal;
#line 812 "solutions.m"
}
#line 358 "solutions.m"
      {
#line 358 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Acc0_14);
      }
#line 517 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 517 "solutions.m"
      {
#line 517 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Answer_13, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Acc1_15);
      }
#line 518 "solutions.m"
      {
#line 518 "solutions.m"
        mercury__builtin__impure_true_0_p_0();
      }
#line 360 "solutions.m"
      {
#line 360 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Acc1_15);
      }
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 7967 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 365 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__succeeded = MR_FALSE;
#line 365 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__succeeded)
#line 365 "solutions.m"
        {
#line 365 "solutions.m"
          mercury__solutions__builtin_aggregate_4_p_6_1(mercury__solutions__env_ptr);
#line 365 "solutions.m"
          return;
        }
#line 349 "solutions.m"
    }
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_6_3(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_6_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_6_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__commit_0) == 0)
#line 349 "solutions.m"
      {
#line 349 "solutions.m"
        {
#line 349 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 349 "solutions.m"
          {
#line 349 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_6_2, mercury__solutions__env_ptr);
          }
#line 349 "solutions.m"
        }
#line 349 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__succeeded = MR_FALSE;
#line 349 "solutions.m"
      }
#line 349 "solutions.m"
    else
#line 349 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__succeeded = MR_TRUE;
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 277 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_6(
#line 277 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_20,
#line 277 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_21,
#line 277 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 277 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 277 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_16,
#line 277 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_17)
#line 277 "solutions.m"
{
#line 277 "solutions.m"
  {
#line 277 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_6_env_0_s mercury__solutions__env;

#line 277 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_T_20 = mercury__solutions__TypeInfo_for_T_20;
#line 277 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_U_21 = mercury__solutions__TypeInfo_for_U_21;
#line 277 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_6_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 277 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_6_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 338 "solutions.m"
    {
#line 338 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;

#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 8093 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_6_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_6_env_0__TrailPtr_10  = TrailPtr;
#line 585 "solutions.m"
}
#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 8114 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 345 "solutions.m"
      {
#line 345 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_U_21, mercury__solutions__STATE_VARIABLE_Accumulator_0_16, &(mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_6_env_0__Mutvar_11);
      }
#line 349 "solutions.m"
      {
#line 349 "solutions.m"
        mercury__solutions__builtin_aggregate_4_p_6_3(&mercury__solutions__env);
      }
#line 366 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_6_env_0__succeeded))
#line 368 "solutions.m"
        {
#line 368 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_18_18;

#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 8149 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 375 "solutions.m"
          {
#line 375 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_U_21, (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_6_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_18_18);
          }
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_U_21 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator_18_18 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 8177 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_17  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 8198 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 8216 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 368 "solutions.m"
        }
#line 338 "solutions.m"
    }
#line 277 "solutions.m"
  }
#line 277 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_5_1(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_5_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_5_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__commit_0, 1);
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_5_2(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_5_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_5_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    {
#line 521 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__TrailPtr_10 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 8282 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 8308 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 812 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_T_20 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Answer0_12 ;
		{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 8331 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Answer_13  = (MR_Box) NewVal;
#line 812 "solutions.m"
}
#line 358 "solutions.m"
      {
#line 358 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Acc0_14);
      }
#line 521 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 521 "solutions.m"
      {
#line 521 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Answer_13, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Acc1_15);
      }
#line 360 "solutions.m"
      {
#line 360 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Acc1_15);
      }
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 8375 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 365 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__succeeded = MR_FALSE;
#line 365 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__succeeded)
#line 365 "solutions.m"
        {
#line 365 "solutions.m"
          mercury__solutions__builtin_aggregate_4_p_5_1(mercury__solutions__env_ptr);
#line 365 "solutions.m"
          return;
        }
#line 349 "solutions.m"
    }
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_5_3(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_5_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_5_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__commit_0) == 0)
#line 349 "solutions.m"
      {
#line 349 "solutions.m"
        {
#line 349 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 349 "solutions.m"
          {
#line 349 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_5_2, mercury__solutions__env_ptr);
          }
#line 349 "solutions.m"
        }
#line 349 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__succeeded = MR_FALSE;
#line 349 "solutions.m"
      }
#line 349 "solutions.m"
    else
#line 349 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__succeeded = MR_TRUE;
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 275 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_5(
#line 275 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_20,
#line 275 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_21,
#line 275 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 275 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 275 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_16,
#line 275 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_17)
#line 275 "solutions.m"
{
#line 275 "solutions.m"
  {
#line 275 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_5_env_0_s mercury__solutions__env;

#line 275 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_T_20 = mercury__solutions__TypeInfo_for_T_20;
#line 275 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_U_21 = mercury__solutions__TypeInfo_for_U_21;
#line 275 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_5_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 275 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_5_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 338 "solutions.m"
    {
#line 338 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;

#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 8501 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_5_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_5_env_0__TrailPtr_10  = TrailPtr;
#line 585 "solutions.m"
}
#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 8522 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 345 "solutions.m"
      {
#line 345 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_U_21, mercury__solutions__STATE_VARIABLE_Accumulator_0_16, &(mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_5_env_0__Mutvar_11);
      }
#line 349 "solutions.m"
      {
#line 349 "solutions.m"
        mercury__solutions__builtin_aggregate_4_p_5_3(&mercury__solutions__env);
      }
#line 366 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_5_env_0__succeeded))
#line 368 "solutions.m"
        {
#line 368 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_18_18;

#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 8557 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 375 "solutions.m"
          {
#line 375 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_U_21, (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_5_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_18_18);
          }
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_U_21 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator_18_18 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 8585 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_17  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 8606 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 8624 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 368 "solutions.m"
        }
#line 338 "solutions.m"
    }
#line 275 "solutions.m"
  }
#line 275 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_4_1(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_4_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_4_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__commit_0, 1);
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_4_2(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_4_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_4_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    {
#line 523 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__TrailPtr_10 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 8690 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 8716 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 818 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_T_20 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Answer0_12 ;
		{
#line 818 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 8739 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Answer_13  = (MR_Box) NewVal;
#line 818 "solutions.m"
}
#line 358 "solutions.m"
      {
#line 358 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Acc0_14);
      }
#line 523 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 523 "solutions.m"
      {
#line 523 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Answer_13, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Acc1_15);
      }
#line 360 "solutions.m"
      {
#line 360 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Acc1_15);
      }
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 8783 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 365 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__succeeded = MR_FALSE;
#line 365 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__succeeded)
#line 365 "solutions.m"
        {
#line 365 "solutions.m"
          mercury__solutions__builtin_aggregate_4_p_4_1(mercury__solutions__env_ptr);
#line 365 "solutions.m"
          return;
        }
#line 349 "solutions.m"
    }
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_4_3(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_4_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_4_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__commit_0) == 0)
#line 349 "solutions.m"
      {
#line 349 "solutions.m"
        {
#line 349 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 349 "solutions.m"
          {
#line 349 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_4_2, mercury__solutions__env_ptr);
          }
#line 349 "solutions.m"
        }
#line 349 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__succeeded = MR_FALSE;
#line 349 "solutions.m"
      }
#line 349 "solutions.m"
    else
#line 349 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__succeeded = MR_TRUE;
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 273 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_4(
#line 273 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_20,
#line 273 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_21,
#line 273 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 273 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 273 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_16,
#line 273 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_17)
#line 273 "solutions.m"
{
#line 273 "solutions.m"
  {
#line 273 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_4_env_0_s mercury__solutions__env;

#line 273 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_T_20 = mercury__solutions__TypeInfo_for_T_20;
#line 273 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_U_21 = mercury__solutions__TypeInfo_for_U_21;
#line 273 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_4_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 273 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_4_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 338 "solutions.m"
    {
#line 338 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;

#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 8909 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_4_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_4_env_0__TrailPtr_10  = TrailPtr;
#line 585 "solutions.m"
}
#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 8930 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 345 "solutions.m"
      {
#line 345 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_U_21, mercury__solutions__STATE_VARIABLE_Accumulator_0_16, &(mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_4_env_0__Mutvar_11);
      }
#line 349 "solutions.m"
      {
#line 349 "solutions.m"
        mercury__solutions__builtin_aggregate_4_p_4_3(&mercury__solutions__env);
      }
#line 366 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_4_env_0__succeeded))
#line 368 "solutions.m"
        {
#line 368 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_18_18;

#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 8965 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 375 "solutions.m"
          {
#line 375 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_U_21, (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_4_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_18_18);
          }
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_U_21 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator_18_18 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 8993 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_17  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 9014 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 9032 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 368 "solutions.m"
        }
#line 338 "solutions.m"
    }
#line 273 "solutions.m"
  }
#line 273 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_3_1(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_3_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_3_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__commit_0, 1);
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_3_2(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_3_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_3_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    {
#line 517 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__TrailPtr_10 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 9098 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 9124 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 812 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_T_20 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Answer0_12 ;
		{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 9147 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Answer_13  = (MR_Box) NewVal;
#line 812 "solutions.m"
}
#line 358 "solutions.m"
      {
#line 358 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Acc0_14);
      }
#line 517 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 517 "solutions.m"
      {
#line 517 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Answer_13, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Acc1_15);
      }
#line 518 "solutions.m"
      {
#line 518 "solutions.m"
        mercury__builtin__impure_true_0_p_0();
      }
#line 360 "solutions.m"
      {
#line 360 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Acc1_15);
      }
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 9196 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 365 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__succeeded = MR_FALSE;
#line 365 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__succeeded)
#line 365 "solutions.m"
        {
#line 365 "solutions.m"
          mercury__solutions__builtin_aggregate_4_p_3_1(mercury__solutions__env_ptr);
#line 365 "solutions.m"
          return;
        }
#line 349 "solutions.m"
    }
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_3_3(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_3_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_3_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__commit_0) == 0)
#line 349 "solutions.m"
      {
#line 349 "solutions.m"
        {
#line 349 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 349 "solutions.m"
          {
#line 349 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_3_2, mercury__solutions__env_ptr);
          }
#line 349 "solutions.m"
        }
#line 349 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__succeeded = MR_FALSE;
#line 349 "solutions.m"
      }
#line 349 "solutions.m"
    else
#line 349 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__succeeded = MR_TRUE;
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 271 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_3(
#line 271 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_20,
#line 271 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_21,
#line 271 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 271 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 271 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_16,
#line 271 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_17)
#line 271 "solutions.m"
{
#line 271 "solutions.m"
  {
#line 271 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_3_env_0_s mercury__solutions__env;

#line 271 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_T_20 = mercury__solutions__TypeInfo_for_T_20;
#line 271 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_U_21 = mercury__solutions__TypeInfo_for_U_21;
#line 271 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_3_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 271 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_3_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 338 "solutions.m"
    {
#line 338 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;

#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 9322 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_3_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_3_env_0__TrailPtr_10  = TrailPtr;
#line 585 "solutions.m"
}
#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 9343 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 345 "solutions.m"
      {
#line 345 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_U_21, mercury__solutions__STATE_VARIABLE_Accumulator_0_16, &(mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_3_env_0__Mutvar_11);
      }
#line 349 "solutions.m"
      {
#line 349 "solutions.m"
        mercury__solutions__builtin_aggregate_4_p_3_3(&mercury__solutions__env);
      }
#line 366 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_3_env_0__succeeded))
#line 368 "solutions.m"
        {
#line 368 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_18_18;

#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 9378 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 375 "solutions.m"
          {
#line 375 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_U_21, (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_3_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_18_18);
          }
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_U_21 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator_18_18 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 9406 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_17  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 9427 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 9445 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 368 "solutions.m"
        }
#line 338 "solutions.m"
    }
#line 271 "solutions.m"
  }
#line 271 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_2_1(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_2_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_2_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__commit_0, 1);
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_2_2(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_2_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_2_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    {
#line 512 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__TrailPtr_10 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 9511 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 9537 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 812 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_T_20 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Answer0_12 ;
		{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 9560 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Answer_13  = (MR_Box) NewVal;
#line 812 "solutions.m"
}
#line 358 "solutions.m"
      {
#line 358 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Acc0_14);
      }
#line 512 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 512 "solutions.m"
      {
#line 512 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Answer_13, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Acc1_15);
      }
#line 513 "solutions.m"
      {
#line 513 "solutions.m"
        mercury__builtin__impure_true_0_p_0();
      }
#line 360 "solutions.m"
      {
#line 360 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Acc1_15);
      }
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 9609 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 365 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__succeeded = MR_FALSE;
#line 365 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__succeeded)
#line 365 "solutions.m"
        {
#line 365 "solutions.m"
          mercury__solutions__builtin_aggregate_4_p_2_1(mercury__solutions__env_ptr);
#line 365 "solutions.m"
          return;
        }
#line 349 "solutions.m"
    }
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_2_3(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_2_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_2_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__commit_0) == 0)
#line 349 "solutions.m"
      {
#line 349 "solutions.m"
        {
#line 349 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 349 "solutions.m"
          {
#line 349 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_2_2, mercury__solutions__env_ptr);
          }
#line 349 "solutions.m"
        }
#line 349 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__succeeded = MR_FALSE;
#line 349 "solutions.m"
      }
#line 349 "solutions.m"
    else
#line 349 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__succeeded = MR_TRUE;
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 269 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_2(
#line 269 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_20,
#line 269 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_21,
#line 269 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 269 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 269 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_16,
#line 269 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_17)
#line 269 "solutions.m"
{
#line 269 "solutions.m"
  {
#line 269 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_2_env_0_s mercury__solutions__env;

#line 269 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_T_20 = mercury__solutions__TypeInfo_for_T_20;
#line 269 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_U_21 = mercury__solutions__TypeInfo_for_U_21;
#line 269 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_2_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 269 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_2_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 338 "solutions.m"
    {
#line 338 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;

#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 9735 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_2_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_2_env_0__TrailPtr_10  = TrailPtr;
#line 585 "solutions.m"
}
#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 9756 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 345 "solutions.m"
      {
#line 345 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_U_21, mercury__solutions__STATE_VARIABLE_Accumulator_0_16, &(mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_2_env_0__Mutvar_11);
      }
#line 349 "solutions.m"
      {
#line 349 "solutions.m"
        mercury__solutions__builtin_aggregate_4_p_2_3(&mercury__solutions__env);
      }
#line 366 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_2_env_0__succeeded))
#line 368 "solutions.m"
        {
#line 368 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_18_18;

#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 9791 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 375 "solutions.m"
          {
#line 375 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_U_21, (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_2_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_18_18);
          }
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_U_21 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator_18_18 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 9819 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_17  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 9840 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 9858 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 368 "solutions.m"
        }
#line 338 "solutions.m"
    }
#line 269 "solutions.m"
  }
#line 269 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_1_1(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_1_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_1_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__commit_0, 1);
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_1_2(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_1_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_1_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    {
#line 521 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__TrailPtr_10 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 9924 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 9950 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 812 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_T_20 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Answer0_12 ;
		{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 9973 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Answer_13  = (MR_Box) NewVal;
#line 812 "solutions.m"
}
#line 358 "solutions.m"
      {
#line 358 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Acc0_14);
      }
#line 521 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 521 "solutions.m"
      {
#line 521 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Answer_13, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Acc1_15);
      }
#line 360 "solutions.m"
      {
#line 360 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Acc1_15);
      }
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 10017 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 365 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__succeeded = MR_FALSE;
#line 365 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__succeeded)
#line 365 "solutions.m"
        {
#line 365 "solutions.m"
          mercury__solutions__builtin_aggregate_4_p_1_1(mercury__solutions__env_ptr);
#line 365 "solutions.m"
          return;
        }
#line 349 "solutions.m"
    }
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_1_3(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_1_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_1_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__commit_0) == 0)
#line 349 "solutions.m"
      {
#line 349 "solutions.m"
        {
#line 349 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 349 "solutions.m"
          {
#line 349 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_1_2, mercury__solutions__env_ptr);
          }
#line 349 "solutions.m"
        }
#line 349 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__succeeded = MR_FALSE;
#line 349 "solutions.m"
      }
#line 349 "solutions.m"
    else
#line 349 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__succeeded = MR_TRUE;
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 267 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_1(
#line 267 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_20,
#line 267 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_21,
#line 267 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 267 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 267 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_16,
#line 267 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_17)
#line 267 "solutions.m"
{
#line 267 "solutions.m"
  {
#line 267 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_1_env_0_s mercury__solutions__env;

#line 267 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_T_20 = mercury__solutions__TypeInfo_for_T_20;
#line 267 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_U_21 = mercury__solutions__TypeInfo_for_U_21;
#line 267 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_1_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 267 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_1_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 338 "solutions.m"
    {
#line 338 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;

#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 10143 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_1_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_1_env_0__TrailPtr_10  = TrailPtr;
#line 585 "solutions.m"
}
#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 10164 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 345 "solutions.m"
      {
#line 345 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_U_21, mercury__solutions__STATE_VARIABLE_Accumulator_0_16, &(mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_1_env_0__Mutvar_11);
      }
#line 349 "solutions.m"
      {
#line 349 "solutions.m"
        mercury__solutions__builtin_aggregate_4_p_1_3(&mercury__solutions__env);
      }
#line 366 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_1_env_0__succeeded))
#line 368 "solutions.m"
        {
#line 368 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_18_18;

#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 10199 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 375 "solutions.m"
          {
#line 375 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_U_21, (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_1_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_18_18);
          }
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_U_21 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator_18_18 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 10227 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_17  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 10248 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 10266 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 368 "solutions.m"
        }
#line 338 "solutions.m"
    }
#line 267 "solutions.m"
  }
#line 267 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_0_1(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_0_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_0_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__commit_0, 1);
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_0_2(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_0_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_0_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    {
#line 509 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__TrailPtr_10 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 10332 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 10358 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 812 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_T_20 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Answer0_12 ;
		{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 10381 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Answer_13  = (MR_Box) NewVal;
#line 812 "solutions.m"
}
#line 358 "solutions.m"
      {
#line 358 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Acc0_14);
      }
#line 509 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 509 "solutions.m"
      {
#line 509 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Answer_13, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Acc1_15);
      }
#line 360 "solutions.m"
      {
#line 360 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Acc1_15);
      }
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 10425 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 365 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__succeeded = MR_FALSE;
#line 365 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__succeeded)
#line 365 "solutions.m"
        {
#line 365 "solutions.m"
          mercury__solutions__builtin_aggregate_4_p_0_1(mercury__solutions__env_ptr);
#line 365 "solutions.m"
          return;
        }
#line 349 "solutions.m"
    }
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_0_3(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_0_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_0_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__commit_0) == 0)
#line 349 "solutions.m"
      {
#line 349 "solutions.m"
        {
#line 349 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 349 "solutions.m"
          {
#line 349 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_0_2, mercury__solutions__env_ptr);
          }
#line 349 "solutions.m"
        }
#line 349 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__succeeded = MR_FALSE;
#line 349 "solutions.m"
      }
#line 349 "solutions.m"
    else
#line 349 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__succeeded = MR_TRUE;
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 265 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_0(
#line 265 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_20,
#line 265 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_21,
#line 265 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 265 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 265 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_16,
#line 265 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_17)
#line 265 "solutions.m"
{
#line 265 "solutions.m"
  {
#line 265 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_0_env_0_s mercury__solutions__env;

#line 265 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_T_20 = mercury__solutions__TypeInfo_for_T_20;
#line 265 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_U_21 = mercury__solutions__TypeInfo_for_U_21;
#line 265 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_0_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 265 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_0_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 338 "solutions.m"
    {
#line 338 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;

#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 10551 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_0_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_0_env_0__TrailPtr_10  = TrailPtr;
#line 585 "solutions.m"
}
#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 10572 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 345 "solutions.m"
      {
#line 345 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_U_21, mercury__solutions__STATE_VARIABLE_Accumulator_0_16, &(mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_0_env_0__Mutvar_11);
      }
#line 349 "solutions.m"
      {
#line 349 "solutions.m"
        mercury__solutions__builtin_aggregate_4_p_0_3(&mercury__solutions__env);
      }
#line 366 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_0_env_0__succeeded))
#line 368 "solutions.m"
        {
#line 368 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_18_18;

#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 10607 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 375 "solutions.m"
          {
#line 375 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_U_21, (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_0_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_18_18);
          }
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_U_21 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator_18_18 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 10635 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_17  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 10656 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 10674 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 368 "solutions.m"
        }
#line 338 "solutions.m"
    }
#line 265 "solutions.m"
  }
#line 265 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_1_1(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_solutions_2_p_1_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_solutions_2_p_1_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__commit_0, 1);
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_1_2(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_solutions_2_p_1_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_solutions_2_p_1_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    {
#line 358 "solutions.m"
      MR_Box mercury__solutions__conv2_Acc0_24;

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__TrailPtr_20 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 10740 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 10766 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 812 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_for_T_7 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__HeapPtr_18 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Answer0_22 ;
		{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 10789 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Answer_23  = (MR_Box) NewVal;
#line 812 "solutions.m"
}
#line 358 "solutions.m"
      {
#line 358 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_12_12, (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Mutvar_21, &mercury__solutions__conv2_Acc0_24);
      }
#line 358 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Acc0_24 = ((MR_Word) mercury__solutions__conv2_Acc0_24);
#line 43 "list.opt"
      {
#line 43 "list.opt"
        MR_Word base;
#line 43 "list.opt"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 43 "list.opt"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Acc1_25 = base;
#line 43 "list.opt"
        MR_hl_field(MR_mktag(1), base, 0) = (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Answer_23;
#line 43 "list.opt"
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Acc0_24));
#line 43 "list.opt"
      }
#line 360 "solutions.m"
      {
#line 360 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_12_12, (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Mutvar_21, ((MR_Box) ((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Acc1_25)));
      }
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 10842 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 365 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__succeeded = MR_FALSE;
#line 365 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__succeeded)
#line 365 "solutions.m"
        {
#line 365 "solutions.m"
          mercury__solutions__builtin_solutions_2_p_1_1(mercury__solutions__env_ptr);
#line 365 "solutions.m"
          return;
        }
#line 349 "solutions.m"
    }
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_1_3(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_solutions_2_p_1_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_solutions_2_p_1_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__commit_0) == 0)
#line 349 "solutions.m"
      {
#line 349 "solutions.m"
        {
#line 349 "solutions.m"
          void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Generator_3, (MR_Integer) 1)));

#line 349 "solutions.m"
          {
#line 349 "solutions.m"
            mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Generator_3), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Answer0_22, mercury__solutions__builtin_solutions_2_p_1_2, mercury__solutions__env_ptr);
          }
#line 349 "solutions.m"
        }
#line 349 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__succeeded = MR_FALSE;
#line 349 "solutions.m"
      }
#line 349 "solutions.m"
    else
#line 349 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__succeeded = MR_TRUE;
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 252 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_solutions_2_p_1(
#line 252 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_7,
#line 252 "solutions.m"
  MR_Word mercury__solutions__Generator_3,
#line 252 "solutions.m"
  MR_Word * mercury__solutions__UnsortedList_4)
#line 252 "solutions.m"
{
#line 252 "solutions.m"
  {
#line 252 "solutions.m"
    struct mercury__solutions__builtin_solutions_2_p_1_env_0_s mercury__solutions__env;

#line 252 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_for_T_7 = mercury__solutions__TypeInfo_for_T_7;
#line 252 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_1_env_0__Generator_3 = mercury__solutions__Generator_3;
#line 254 "solutions.m"
    {
#line 254 "solutions.m"
      MR_Word mercury__solutions__TypeCtorInfo_11_11 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 254 "solutions.m"
      MR_Word mercury__solutions__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 254 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_19;
#line 345 "solutions.m"
      MR_Word mercury__solutions__conv0_Mutvar_21;

#line 10938 "solutions.c"
      {
#line 10940 "solutions.c"
        MR_Word base;
#line 10942 "solutions.c"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10944 "solutions.c"
        (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_12_12 = base;
#line 10946 "solutions.c"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__solutions__TypeCtorInfo_11_11));
#line 10948 "solutions.c"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_for_T_7));
#line 10950 "solutions.c"
      }
#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 10978 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_1_env_0__HeapPtr_18  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_19  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_1_env_0__TrailPtr_20  = TrailPtr;
#line 585 "solutions.m"
}
#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 10999 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 345 "solutions.m"
      {
#line 345 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_12_12, ((MR_Box) (mercury__solutions__V_6_6)), &mercury__solutions__conv0_Mutvar_21);
      }
#line 345 "solutions.m"
      (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_1_env_0__Mutvar_21 = (MR_Word) mercury__solutions__conv0_Mutvar_21;
#line 349 "solutions.m"
      {
#line 349 "solutions.m"
        mercury__solutions__builtin_solutions_2_p_1_3(&mercury__solutions__env);
      }
#line 366 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_1_env_0__succeeded))
#line 368 "solutions.m"
        {
#line 368 "solutions.m"
          MR_Word mercury__solutions__STATE_VARIABLE_Accumulator_18_26;
#line 375 "solutions.m"
          MR_Box mercury__solutions__conv3_STATE_VARIABLE_Accumulator_18_26;
#line 824 "solutions.m"
          MR_Box mercury__solutions__conv4_NewVal;

#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 11040 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 375 "solutions.m"
          {
#line 375 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_12_12, (MR_Word) (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_1_env_0__Mutvar_21, &mercury__solutions__conv3_STATE_VARIABLE_Accumulator_18_26);
          }
#line 375 "solutions.m"
          mercury__solutions__STATE_VARIABLE_Accumulator_18_26 = ((MR_Word) mercury__solutions__conv3_STATE_VARIABLE_Accumulator_18_26);
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_12_12 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_19 ;
	OldVal = (MR_Word) ((MR_Box) (mercury__solutions__STATE_VARIABLE_Accumulator_18_26)) ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 11070 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 mercury__solutions__conv4_NewVal  = (MR_Box) NewVal;
#line 824 "solutions.m"
          *mercury__solutions__UnsortedList_4 = ((MR_Word) mercury__solutions__conv4_NewVal);
#line 824 "solutions.m"
}
#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_19 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 11093 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 11111 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 368 "solutions.m"
        }
#line 254 "solutions.m"
    }
#line 252 "solutions.m"
  }
#line 252 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_0_1(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_solutions_2_p_0_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_solutions_2_p_0_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__commit_0, 1);
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_0_2(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_solutions_2_p_0_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_solutions_2_p_0_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    {
#line 358 "solutions.m"
      MR_Box mercury__solutions__conv2_Acc0_24;

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__TrailPtr_20 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 11177 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 11203 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 812 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_for_T_7 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__HeapPtr_18 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Answer0_22 ;
		{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 11226 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Answer_23  = (MR_Box) NewVal;
#line 812 "solutions.m"
}
#line 358 "solutions.m"
      {
#line 358 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_12_12, (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Mutvar_21, &mercury__solutions__conv2_Acc0_24);
      }
#line 358 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Acc0_24 = ((MR_Word) mercury__solutions__conv2_Acc0_24);
#line 43 "list.opt"
      {
#line 43 "list.opt"
        MR_Word base;
#line 43 "list.opt"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 43 "list.opt"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Acc1_25 = base;
#line 43 "list.opt"
        MR_hl_field(MR_mktag(1), base, 0) = (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Answer_23;
#line 43 "list.opt"
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Acc0_24));
#line 43 "list.opt"
      }
#line 360 "solutions.m"
      {
#line 360 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_12_12, (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Mutvar_21, ((MR_Box) ((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Acc1_25)));
      }
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 11279 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 365 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__succeeded = MR_FALSE;
#line 365 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__succeeded)
#line 365 "solutions.m"
        {
#line 365 "solutions.m"
          mercury__solutions__builtin_solutions_2_p_0_1(mercury__solutions__env_ptr);
#line 365 "solutions.m"
          return;
        }
#line 349 "solutions.m"
    }
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 349 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_0_3(
#line 349 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 349 "solutions.m"
{
#line 349 "solutions.m"
  {
#line 349 "solutions.m"
    struct mercury__solutions__builtin_solutions_2_p_0_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_solutions_2_p_0_env_0_s *) mercury__solutions__env_ptr_arg;

#line 349 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__commit_0) == 0)
#line 349 "solutions.m"
      {
#line 349 "solutions.m"
        {
#line 349 "solutions.m"
          void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Generator_3, (MR_Integer) 1)));

#line 349 "solutions.m"
          {
#line 349 "solutions.m"
            mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Generator_3), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Answer0_22, mercury__solutions__builtin_solutions_2_p_0_2, mercury__solutions__env_ptr);
          }
#line 349 "solutions.m"
        }
#line 349 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__succeeded = MR_FALSE;
#line 349 "solutions.m"
      }
#line 349 "solutions.m"
    else
#line 349 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__succeeded = MR_TRUE;
#line 349 "solutions.m"
  }
#line 349 "solutions.m"
}

#line 251 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_solutions_2_p_0(
#line 251 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_7,
#line 251 "solutions.m"
  MR_Word mercury__solutions__Generator_3,
#line 251 "solutions.m"
  MR_Word * mercury__solutions__UnsortedList_4)
#line 251 "solutions.m"
{
#line 251 "solutions.m"
  {
#line 251 "solutions.m"
    struct mercury__solutions__builtin_solutions_2_p_0_env_0_s mercury__solutions__env;

#line 251 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_for_T_7 = mercury__solutions__TypeInfo_for_T_7;
#line 251 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_0_env_0__Generator_3 = mercury__solutions__Generator_3;
#line 254 "solutions.m"
    {
#line 254 "solutions.m"
      MR_Word mercury__solutions__TypeCtorInfo_11_11 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 254 "solutions.m"
      MR_Word mercury__solutions__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 254 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_19;
#line 345 "solutions.m"
      MR_Word mercury__solutions__conv0_Mutvar_21;

#line 11375 "solutions.c"
      {
#line 11377 "solutions.c"
        MR_Word base;
#line 11379 "solutions.c"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11381 "solutions.c"
        (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_12_12 = base;
#line 11383 "solutions.c"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__solutions__TypeCtorInfo_11_11));
#line 11385 "solutions.c"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_for_T_7));
#line 11387 "solutions.c"
      }
#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 11415 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_0_env_0__HeapPtr_18  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_19  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_0_env_0__TrailPtr_20  = TrailPtr;
#line 585 "solutions.m"
}
#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 11436 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 345 "solutions.m"
      {
#line 345 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_12_12, ((MR_Box) (mercury__solutions__V_6_6)), &mercury__solutions__conv0_Mutvar_21);
      }
#line 345 "solutions.m"
      (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_0_env_0__Mutvar_21 = (MR_Word) mercury__solutions__conv0_Mutvar_21;
#line 349 "solutions.m"
      {
#line 349 "solutions.m"
        mercury__solutions__builtin_solutions_2_p_0_3(&mercury__solutions__env);
      }
#line 366 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_0_env_0__succeeded))
#line 368 "solutions.m"
        {
#line 368 "solutions.m"
          MR_Word mercury__solutions__STATE_VARIABLE_Accumulator_18_26;
#line 375 "solutions.m"
          MR_Box mercury__solutions__conv3_STATE_VARIABLE_Accumulator_18_26;
#line 824 "solutions.m"
          MR_Box mercury__solutions__conv4_NewVal;

#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 11477 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 375 "solutions.m"
          {
#line 375 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_12_12, (MR_Word) (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_0_env_0__Mutvar_21, &mercury__solutions__conv3_STATE_VARIABLE_Accumulator_18_26);
          }
#line 375 "solutions.m"
          mercury__solutions__STATE_VARIABLE_Accumulator_18_26 = ((MR_Word) mercury__solutions__conv3_STATE_VARIABLE_Accumulator_18_26);
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_12_12 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_19 ;
	OldVal = (MR_Word) ((MR_Box) (mercury__solutions__STATE_VARIABLE_Accumulator_18_26)) ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 11507 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 mercury__solutions__conv4_NewVal  = (MR_Box) NewVal;
#line 824 "solutions.m"
          *mercury__solutions__UnsortedList_4 = ((MR_Word) mercury__solutions__conv4_NewVal);
#line 824 "solutions.m"
}
#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_19 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 11530 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 11548 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 368 "solutions.m"
        }
#line 254 "solutions.m"
    }
#line 251 "solutions.m"
  }
#line 251 "solutions.m"
}

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_5_1(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 476 "solutions.m"
{
#line 476 "solutions.m"
  {
#line 476 "solutions.m"
    struct mercury__solutions__do_while_4_p_5_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_5_env_0_s *) mercury__solutions__env_ptr_arg;

#line 476 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__commit_0, 1);
#line 476 "solutions.m"
  }
#line 476 "solutions.m"
}

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_5_2(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 476 "solutions.m"
{
#line 476 "solutions.m"
  {
#line 476 "solutions.m"
    struct mercury__solutions__do_while_4_p_5_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_5_env_0_s *) mercury__solutions__env_ptr_arg;

#line 476 "solutions.m"
    {
#line 541 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 541 "solutions.m"
      MR_Box mercury__solutions__conv2_More_15;

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__TrailPtr_10 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 11616 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 11642 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 812 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T_21 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Answer0_12 ;
		{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 11665 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Answer_13  = (MR_Box) NewVal;
#line 812 "solutions.m"
}
#line 482 "solutions.m"
      {
#line 482 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T2_22, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Acc0_14);
      }
#line 541 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 541 "solutions.m"
      {
#line 541 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Answer_13, &mercury__solutions__conv2_More_15, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Acc1_16);
      }
#line 541 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__More_15 = ((MR_Word) mercury__solutions__conv2_More_15);
#line 542 "solutions.m"
      {
#line 542 "solutions.m"
        mercury__builtin__impure_true_0_p_0();
      }
#line 484 "solutions.m"
      {
#line 484 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T2_22, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Acc1_16);
      }
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 11716 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 489 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__succeeded = ((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__More_15 == (MR_Integer) 0);
#line 476 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__succeeded)
#line 476 "solutions.m"
        {
#line 962 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5


		{
#line 962 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif

#line 11740 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 962 "solutions.m"
}
#line 957 "solutions.m"
          {
#line 957 "solutions.m"
            mercury__solutions__do_while_4_p_5_1(mercury__solutions__env_ptr);
#line 957 "solutions.m"
            return;
          }
#line 476 "solutions.m"
        }
#line 476 "solutions.m"
    }
#line 476 "solutions.m"
  }
#line 476 "solutions.m"
}

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_5_3(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 476 "solutions.m"
{
#line 476 "solutions.m"
  {
#line 476 "solutions.m"
    struct mercury__solutions__do_while_4_p_5_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_5_env_0_s *) mercury__solutions__env_ptr_arg;

#line 476 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__commit_0) == 0)
#line 476 "solutions.m"
      {
#line 476 "solutions.m"
        {
#line 476 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 476 "solutions.m"
          {
#line 476 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Answer0_12, mercury__solutions__do_while_4_p_5_2, mercury__solutions__env_ptr);
          }
#line 476 "solutions.m"
        }
#line 476 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__succeeded = MR_FALSE;
#line 476 "solutions.m"
      }
#line 476 "solutions.m"
    else
#line 476 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__succeeded = MR_TRUE;
#line 476 "solutions.m"
  }
#line 476 "solutions.m"
}

#line 191 "solutions.m"
void MR_CALL 
mercury__solutions__do_while_4_p_5(
#line 191 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_21,
#line 191 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T2_22,
#line 191 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 191 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 191 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_17,
#line 191 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_18)
#line 191 "solutions.m"
{
#line 191 "solutions.m"
  {
#line 191 "solutions.m"
    struct mercury__solutions__do_while_4_p_5_env_0_s mercury__solutions__env;

#line 191 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T_21 = mercury__solutions__TypeInfo_for_T_21;
#line 191 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T2_22 = mercury__solutions__TypeInfo_for_T2_22;
#line 191 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_5_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 191 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_5_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 471 "solutions.m"
    {
#line 471 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;
#line 471 "solutions.m"
      MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_19_19;

#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 11866 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__do_while_4_p_5_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__do_while_4_p_5_env_0__TrailPtr_10  = TrailPtr;
#line 585 "solutions.m"
}
#line 473 "solutions.m"
      {
#line 473 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_1((mercury__solutions__env).mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T2_22, mercury__solutions__STATE_VARIABLE_Accumulator_0_17, &(mercury__solutions__env).mercury__solutions__do_while_4_p_5_env_0__Mutvar_11);
      }
#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 11892 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 476 "solutions.m"
      {
#line 476 "solutions.m"
        mercury__solutions__do_while_4_p_5_3(&mercury__solutions__env);
      }
#line 491 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__do_while_4_p_5_env_0__succeeded))
#line 972 "solutions.m"
        {
#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 11919 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 972 "solutions.m"
        }
#line 494 "solutions.m"
      {
#line 494 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T2_22, (mercury__solutions__env).mercury__solutions__do_while_4_p_5_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_19_19);
      }
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T2_22 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator_19_19 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 11949 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_18  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 11970 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 11988 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 471 "solutions.m"
    }
#line 191 "solutions.m"
  }
#line 191 "solutions.m"
}

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_4_1(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 476 "solutions.m"
{
#line 476 "solutions.m"
  {
#line 476 "solutions.m"
    struct mercury__solutions__do_while_4_p_4_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_4_env_0_s *) mercury__solutions__env_ptr_arg;

#line 476 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__commit_0, 1);
#line 476 "solutions.m"
  }
#line 476 "solutions.m"
}

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_4_2(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 476 "solutions.m"
{
#line 476 "solutions.m"
  {
#line 476 "solutions.m"
    struct mercury__solutions__do_while_4_p_4_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_4_env_0_s *) mercury__solutions__env_ptr_arg;

#line 476 "solutions.m"
    {
#line 534 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 534 "solutions.m"
      MR_Box mercury__solutions__conv2_More_15;

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__TrailPtr_10 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 12054 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 12080 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 812 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T_21 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Answer0_12 ;
		{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 12103 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Answer_13  = (MR_Box) NewVal;
#line 812 "solutions.m"
}
#line 482 "solutions.m"
      {
#line 482 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T2_22, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Acc0_14);
      }
#line 534 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 534 "solutions.m"
      {
#line 534 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Answer_13, &mercury__solutions__conv2_More_15, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Acc1_16);
      }
#line 534 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__More_15 = ((MR_Word) mercury__solutions__conv2_More_15);
#line 484 "solutions.m"
      {
#line 484 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T2_22, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Acc1_16);
      }
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 12149 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 489 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__succeeded = ((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__More_15 == (MR_Integer) 0);
#line 476 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__succeeded)
#line 476 "solutions.m"
        {
#line 962 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4


		{
#line 962 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif

#line 12173 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 962 "solutions.m"
}
#line 957 "solutions.m"
          {
#line 957 "solutions.m"
            mercury__solutions__do_while_4_p_4_1(mercury__solutions__env_ptr);
#line 957 "solutions.m"
            return;
          }
#line 476 "solutions.m"
        }
#line 476 "solutions.m"
    }
#line 476 "solutions.m"
  }
#line 476 "solutions.m"
}

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_4_3(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 476 "solutions.m"
{
#line 476 "solutions.m"
  {
#line 476 "solutions.m"
    struct mercury__solutions__do_while_4_p_4_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_4_env_0_s *) mercury__solutions__env_ptr_arg;

#line 476 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__commit_0) == 0)
#line 476 "solutions.m"
      {
#line 476 "solutions.m"
        {
#line 476 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 476 "solutions.m"
          {
#line 476 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Answer0_12, mercury__solutions__do_while_4_p_4_2, mercury__solutions__env_ptr);
          }
#line 476 "solutions.m"
        }
#line 476 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__succeeded = MR_FALSE;
#line 476 "solutions.m"
      }
#line 476 "solutions.m"
    else
#line 476 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__succeeded = MR_TRUE;
#line 476 "solutions.m"
  }
#line 476 "solutions.m"
}

#line 189 "solutions.m"
void MR_CALL 
mercury__solutions__do_while_4_p_4(
#line 189 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_21,
#line 189 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T2_22,
#line 189 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 189 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 189 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_17,
#line 189 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_18)
#line 189 "solutions.m"
{
#line 189 "solutions.m"
  {
#line 189 "solutions.m"
    struct mercury__solutions__do_while_4_p_4_env_0_s mercury__solutions__env;

#line 189 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T_21 = mercury__solutions__TypeInfo_for_T_21;
#line 189 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T2_22 = mercury__solutions__TypeInfo_for_T2_22;
#line 189 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_4_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 189 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_4_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 471 "solutions.m"
    {
#line 471 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;
#line 471 "solutions.m"
      MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_19_19;

#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 12299 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__do_while_4_p_4_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__do_while_4_p_4_env_0__TrailPtr_10  = TrailPtr;
#line 585 "solutions.m"
}
#line 473 "solutions.m"
      {
#line 473 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_1((mercury__solutions__env).mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T2_22, mercury__solutions__STATE_VARIABLE_Accumulator_0_17, &(mercury__solutions__env).mercury__solutions__do_while_4_p_4_env_0__Mutvar_11);
      }
#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 12325 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 476 "solutions.m"
      {
#line 476 "solutions.m"
        mercury__solutions__do_while_4_p_4_3(&mercury__solutions__env);
      }
#line 491 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__do_while_4_p_4_env_0__succeeded))
#line 972 "solutions.m"
        {
#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 12352 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 972 "solutions.m"
        }
#line 494 "solutions.m"
      {
#line 494 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T2_22, (mercury__solutions__env).mercury__solutions__do_while_4_p_4_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_19_19);
      }
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T2_22 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator_19_19 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 12382 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_18  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 12403 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 12421 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 471 "solutions.m"
    }
#line 189 "solutions.m"
  }
#line 189 "solutions.m"
}

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_3_1(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 476 "solutions.m"
{
#line 476 "solutions.m"
  {
#line 476 "solutions.m"
    struct mercury__solutions__do_while_4_p_3_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_3_env_0_s *) mercury__solutions__env_ptr_arg;

#line 476 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__commit_0, 1);
#line 476 "solutions.m"
  }
#line 476 "solutions.m"
}

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_3_2(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 476 "solutions.m"
{
#line 476 "solutions.m"
  {
#line 476 "solutions.m"
    struct mercury__solutions__do_while_4_p_3_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_3_env_0_s *) mercury__solutions__env_ptr_arg;

#line 476 "solutions.m"
    {
#line 537 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 537 "solutions.m"
      MR_Box mercury__solutions__conv2_More_15;

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__TrailPtr_10 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 12487 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 12513 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 812 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T_21 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Answer0_12 ;
		{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 12536 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Answer_13  = (MR_Box) NewVal;
#line 812 "solutions.m"
}
#line 482 "solutions.m"
      {
#line 482 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T2_22, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Acc0_14);
      }
#line 537 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 537 "solutions.m"
      {
#line 537 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Answer_13, &mercury__solutions__conv2_More_15, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Acc1_16);
      }
#line 537 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__More_15 = ((MR_Word) mercury__solutions__conv2_More_15);
#line 484 "solutions.m"
      {
#line 484 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T2_22, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Acc1_16);
      }
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 12582 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 489 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__succeeded = ((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__More_15 == (MR_Integer) 0);
#line 476 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__succeeded)
#line 476 "solutions.m"
        {
#line 962 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3


		{
#line 962 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif

#line 12606 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 962 "solutions.m"
}
#line 957 "solutions.m"
          {
#line 957 "solutions.m"
            mercury__solutions__do_while_4_p_3_1(mercury__solutions__env_ptr);
#line 957 "solutions.m"
            return;
          }
#line 476 "solutions.m"
        }
#line 476 "solutions.m"
    }
#line 476 "solutions.m"
  }
#line 476 "solutions.m"
}

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_3_3(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 476 "solutions.m"
{
#line 476 "solutions.m"
  {
#line 476 "solutions.m"
    struct mercury__solutions__do_while_4_p_3_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_3_env_0_s *) mercury__solutions__env_ptr_arg;

#line 476 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__commit_0) == 0)
#line 476 "solutions.m"
      {
#line 476 "solutions.m"
        {
#line 476 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 476 "solutions.m"
          {
#line 476 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Answer0_12, mercury__solutions__do_while_4_p_3_2, mercury__solutions__env_ptr);
          }
#line 476 "solutions.m"
        }
#line 476 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__succeeded = MR_FALSE;
#line 476 "solutions.m"
      }
#line 476 "solutions.m"
    else
#line 476 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__succeeded = MR_TRUE;
#line 476 "solutions.m"
  }
#line 476 "solutions.m"
}

#line 187 "solutions.m"
void MR_CALL 
mercury__solutions__do_while_4_p_3(
#line 187 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_21,
#line 187 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T2_22,
#line 187 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 187 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 187 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_17,
#line 187 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_18)
#line 187 "solutions.m"
{
#line 187 "solutions.m"
  {
#line 187 "solutions.m"
    struct mercury__solutions__do_while_4_p_3_env_0_s mercury__solutions__env;

#line 187 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T_21 = mercury__solutions__TypeInfo_for_T_21;
#line 187 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T2_22 = mercury__solutions__TypeInfo_for_T2_22;
#line 187 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_3_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 187 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_3_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 471 "solutions.m"
    {
#line 471 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;
#line 471 "solutions.m"
      MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_19_19;

#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 12732 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__do_while_4_p_3_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__do_while_4_p_3_env_0__TrailPtr_10  = TrailPtr;
#line 585 "solutions.m"
}
#line 473 "solutions.m"
      {
#line 473 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T2_22, mercury__solutions__STATE_VARIABLE_Accumulator_0_17, &(mercury__solutions__env).mercury__solutions__do_while_4_p_3_env_0__Mutvar_11);
      }
#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 12758 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 476 "solutions.m"
      {
#line 476 "solutions.m"
        mercury__solutions__do_while_4_p_3_3(&mercury__solutions__env);
      }
#line 491 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__do_while_4_p_3_env_0__succeeded))
#line 972 "solutions.m"
        {
#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 12785 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 972 "solutions.m"
        }
#line 494 "solutions.m"
      {
#line 494 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T2_22, (mercury__solutions__env).mercury__solutions__do_while_4_p_3_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_19_19);
      }
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T2_22 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator_19_19 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 12815 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_18  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 12836 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 12854 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 471 "solutions.m"
    }
#line 187 "solutions.m"
  }
#line 187 "solutions.m"
}

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_2_1(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 476 "solutions.m"
{
#line 476 "solutions.m"
  {
#line 476 "solutions.m"
    struct mercury__solutions__do_while_4_p_2_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_2_env_0_s *) mercury__solutions__env_ptr_arg;

#line 476 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__commit_0, 1);
#line 476 "solutions.m"
  }
#line 476 "solutions.m"
}

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_2_2(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 476 "solutions.m"
{
#line 476 "solutions.m"
  {
#line 476 "solutions.m"
    struct mercury__solutions__do_while_4_p_2_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_2_env_0_s *) mercury__solutions__env_ptr_arg;

#line 476 "solutions.m"
    {
#line 541 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 541 "solutions.m"
      MR_Box mercury__solutions__conv2_More_15;

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__TrailPtr_10 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 12920 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 12946 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 812 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T_21 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Answer0_12 ;
		{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 12969 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Answer_13  = (MR_Box) NewVal;
#line 812 "solutions.m"
}
#line 482 "solutions.m"
      {
#line 482 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T2_22, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Acc0_14);
      }
#line 541 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 541 "solutions.m"
      {
#line 541 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Answer_13, &mercury__solutions__conv2_More_15, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Acc1_16);
      }
#line 541 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__More_15 = ((MR_Word) mercury__solutions__conv2_More_15);
#line 542 "solutions.m"
      {
#line 542 "solutions.m"
        mercury__builtin__impure_true_0_p_0();
      }
#line 484 "solutions.m"
      {
#line 484 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T2_22, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Acc1_16);
      }
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 13020 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 489 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__succeeded = ((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__More_15 == (MR_Integer) 0);
#line 476 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__succeeded)
#line 476 "solutions.m"
        {
#line 962 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2


		{
#line 962 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif

#line 13044 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 962 "solutions.m"
}
#line 957 "solutions.m"
          {
#line 957 "solutions.m"
            mercury__solutions__do_while_4_p_2_1(mercury__solutions__env_ptr);
#line 957 "solutions.m"
            return;
          }
#line 476 "solutions.m"
        }
#line 476 "solutions.m"
    }
#line 476 "solutions.m"
  }
#line 476 "solutions.m"
}

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_2_3(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 476 "solutions.m"
{
#line 476 "solutions.m"
  {
#line 476 "solutions.m"
    struct mercury__solutions__do_while_4_p_2_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_2_env_0_s *) mercury__solutions__env_ptr_arg;

#line 476 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__commit_0) == 0)
#line 476 "solutions.m"
      {
#line 476 "solutions.m"
        {
#line 476 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 476 "solutions.m"
          {
#line 476 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Answer0_12, mercury__solutions__do_while_4_p_2_2, mercury__solutions__env_ptr);
          }
#line 476 "solutions.m"
        }
#line 476 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__succeeded = MR_FALSE;
#line 476 "solutions.m"
      }
#line 476 "solutions.m"
    else
#line 476 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__succeeded = MR_TRUE;
#line 476 "solutions.m"
  }
#line 476 "solutions.m"
}

#line 185 "solutions.m"
void MR_CALL 
mercury__solutions__do_while_4_p_2(
#line 185 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_21,
#line 185 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T2_22,
#line 185 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 185 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 185 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_17,
#line 185 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_18)
#line 185 "solutions.m"
{
#line 185 "solutions.m"
  {
#line 185 "solutions.m"
    struct mercury__solutions__do_while_4_p_2_env_0_s mercury__solutions__env;

#line 185 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T_21 = mercury__solutions__TypeInfo_for_T_21;
#line 185 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T2_22 = mercury__solutions__TypeInfo_for_T2_22;
#line 185 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_2_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 185 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_2_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 471 "solutions.m"
    {
#line 471 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;
#line 471 "solutions.m"
      MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_19_19;

#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 13170 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__do_while_4_p_2_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__do_while_4_p_2_env_0__TrailPtr_10  = TrailPtr;
#line 585 "solutions.m"
}
#line 473 "solutions.m"
      {
#line 473 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_1((mercury__solutions__env).mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T2_22, mercury__solutions__STATE_VARIABLE_Accumulator_0_17, &(mercury__solutions__env).mercury__solutions__do_while_4_p_2_env_0__Mutvar_11);
      }
#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 13196 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 476 "solutions.m"
      {
#line 476 "solutions.m"
        mercury__solutions__do_while_4_p_2_3(&mercury__solutions__env);
      }
#line 491 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__do_while_4_p_2_env_0__succeeded))
#line 972 "solutions.m"
        {
#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 13223 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 972 "solutions.m"
        }
#line 494 "solutions.m"
      {
#line 494 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T2_22, (mercury__solutions__env).mercury__solutions__do_while_4_p_2_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_19_19);
      }
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T2_22 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator_19_19 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 13253 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_18  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 13274 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 13292 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 471 "solutions.m"
    }
#line 185 "solutions.m"
  }
#line 185 "solutions.m"
}

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_1_1(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 476 "solutions.m"
{
#line 476 "solutions.m"
  {
#line 476 "solutions.m"
    struct mercury__solutions__do_while_4_p_1_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_1_env_0_s *) mercury__solutions__env_ptr_arg;

#line 476 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__commit_0, 1);
#line 476 "solutions.m"
  }
#line 476 "solutions.m"
}

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_1_2(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 476 "solutions.m"
{
#line 476 "solutions.m"
  {
#line 476 "solutions.m"
    struct mercury__solutions__do_while_4_p_1_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_1_env_0_s *) mercury__solutions__env_ptr_arg;

#line 476 "solutions.m"
    {
#line 534 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 534 "solutions.m"
      MR_Box mercury__solutions__conv2_More_15;

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__TrailPtr_10 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 13358 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 13384 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 812 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T_21 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Answer0_12 ;
		{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 13407 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Answer_13  = (MR_Box) NewVal;
#line 812 "solutions.m"
}
#line 482 "solutions.m"
      {
#line 482 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T2_22, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Acc0_14);
      }
#line 534 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 534 "solutions.m"
      {
#line 534 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Answer_13, &mercury__solutions__conv2_More_15, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Acc1_16);
      }
#line 534 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__More_15 = ((MR_Word) mercury__solutions__conv2_More_15);
#line 484 "solutions.m"
      {
#line 484 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T2_22, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Acc1_16);
      }
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 13453 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 489 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__succeeded = ((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__More_15 == (MR_Integer) 0);
#line 476 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__succeeded)
#line 476 "solutions.m"
        {
#line 962 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1


		{
#line 962 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif

#line 13477 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 962 "solutions.m"
}
#line 957 "solutions.m"
          {
#line 957 "solutions.m"
            mercury__solutions__do_while_4_p_1_1(mercury__solutions__env_ptr);
#line 957 "solutions.m"
            return;
          }
#line 476 "solutions.m"
        }
#line 476 "solutions.m"
    }
#line 476 "solutions.m"
  }
#line 476 "solutions.m"
}

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_1_3(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 476 "solutions.m"
{
#line 476 "solutions.m"
  {
#line 476 "solutions.m"
    struct mercury__solutions__do_while_4_p_1_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_1_env_0_s *) mercury__solutions__env_ptr_arg;

#line 476 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__commit_0) == 0)
#line 476 "solutions.m"
      {
#line 476 "solutions.m"
        {
#line 476 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 476 "solutions.m"
          {
#line 476 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Answer0_12, mercury__solutions__do_while_4_p_1_2, mercury__solutions__env_ptr);
          }
#line 476 "solutions.m"
        }
#line 476 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__succeeded = MR_FALSE;
#line 476 "solutions.m"
      }
#line 476 "solutions.m"
    else
#line 476 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__succeeded = MR_TRUE;
#line 476 "solutions.m"
  }
#line 476 "solutions.m"
}

#line 183 "solutions.m"
void MR_CALL 
mercury__solutions__do_while_4_p_1(
#line 183 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_21,
#line 183 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T2_22,
#line 183 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 183 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 183 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_17,
#line 183 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_18)
#line 183 "solutions.m"
{
#line 183 "solutions.m"
  {
#line 183 "solutions.m"
    struct mercury__solutions__do_while_4_p_1_env_0_s mercury__solutions__env;

#line 183 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T_21 = mercury__solutions__TypeInfo_for_T_21;
#line 183 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T2_22 = mercury__solutions__TypeInfo_for_T2_22;
#line 183 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_1_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 183 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_1_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 471 "solutions.m"
    {
#line 471 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;
#line 471 "solutions.m"
      MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_19_19;

#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 13603 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__do_while_4_p_1_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__do_while_4_p_1_env_0__TrailPtr_10  = TrailPtr;
#line 585 "solutions.m"
}
#line 473 "solutions.m"
      {
#line 473 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_1((mercury__solutions__env).mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T2_22, mercury__solutions__STATE_VARIABLE_Accumulator_0_17, &(mercury__solutions__env).mercury__solutions__do_while_4_p_1_env_0__Mutvar_11);
      }
#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 13629 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 476 "solutions.m"
      {
#line 476 "solutions.m"
        mercury__solutions__do_while_4_p_1_3(&mercury__solutions__env);
      }
#line 491 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__do_while_4_p_1_env_0__succeeded))
#line 972 "solutions.m"
        {
#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 13656 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 972 "solutions.m"
        }
#line 494 "solutions.m"
      {
#line 494 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T2_22, (mercury__solutions__env).mercury__solutions__do_while_4_p_1_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_19_19);
      }
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T2_22 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator_19_19 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 13686 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_18  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 13707 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 13725 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 471 "solutions.m"
    }
#line 183 "solutions.m"
  }
#line 183 "solutions.m"
}

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_0_1(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 476 "solutions.m"
{
#line 476 "solutions.m"
  {
#line 476 "solutions.m"
    struct mercury__solutions__do_while_4_p_0_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_0_env_0_s *) mercury__solutions__env_ptr_arg;

#line 476 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__commit_0, 1);
#line 476 "solutions.m"
  }
#line 476 "solutions.m"
}

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_0_2(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 476 "solutions.m"
{
#line 476 "solutions.m"
  {
#line 476 "solutions.m"
    struct mercury__solutions__do_while_4_p_0_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_0_env_0_s *) mercury__solutions__env_ptr_arg;

#line 476 "solutions.m"
    {
#line 537 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 537 "solutions.m"
      MR_Box mercury__solutions__conv2_More_15;

#line 652 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__TrailPtr_10 ;
		{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 13791 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 652 "solutions.m"
}
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 13817 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 812 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T_21 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Answer0_12 ;
		{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 13840 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Answer_13  = (MR_Box) NewVal;
#line 812 "solutions.m"
}
#line 482 "solutions.m"
      {
#line 482 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T2_22, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Acc0_14);
      }
#line 537 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 537 "solutions.m"
      {
#line 537 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Answer_13, &mercury__solutions__conv2_More_15, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Acc1_16);
      }
#line 537 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__More_15 = ((MR_Word) mercury__solutions__conv2_More_15);
#line 484 "solutions.m"
      {
#line 484 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T2_22, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Acc1_16);
      }
#line 727 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0


		{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
}
#line 13886 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 727 "solutions.m"
}
#line 489 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__succeeded = ((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__More_15 == (MR_Integer) 0);
#line 476 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__succeeded)
#line 476 "solutions.m"
        {
#line 962 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0


		{
#line 962 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif

#line 13910 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 962 "solutions.m"
}
#line 957 "solutions.m"
          {
#line 957 "solutions.m"
            mercury__solutions__do_while_4_p_0_1(mercury__solutions__env_ptr);
#line 957 "solutions.m"
            return;
          }
#line 476 "solutions.m"
        }
#line 476 "solutions.m"
    }
#line 476 "solutions.m"
  }
#line 476 "solutions.m"
}

#line 476 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_0_3(
#line 476 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 476 "solutions.m"
{
#line 476 "solutions.m"
  {
#line 476 "solutions.m"
    struct mercury__solutions__do_while_4_p_0_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_0_env_0_s *) mercury__solutions__env_ptr_arg;

#line 476 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__commit_0) == 0)
#line 476 "solutions.m"
      {
#line 476 "solutions.m"
        {
#line 476 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 476 "solutions.m"
          {
#line 476 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Answer0_12, mercury__solutions__do_while_4_p_0_2, mercury__solutions__env_ptr);
          }
#line 476 "solutions.m"
        }
#line 476 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__succeeded = MR_FALSE;
#line 476 "solutions.m"
      }
#line 476 "solutions.m"
    else
#line 476 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__succeeded = MR_TRUE;
#line 476 "solutions.m"
  }
#line 476 "solutions.m"
}

#line 181 "solutions.m"
void MR_CALL 
mercury__solutions__do_while_4_p_0(
#line 181 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_21,
#line 181 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T2_22,
#line 181 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 181 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 181 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_17,
#line 181 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_18)
#line 181 "solutions.m"
{
#line 181 "solutions.m"
  {
#line 181 "solutions.m"
    struct mercury__solutions__do_while_4_p_0_env_0_s mercury__solutions__env;

#line 181 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T_21 = mercury__solutions__TypeInfo_for_T_21;
#line 181 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T2_22 = mercury__solutions__TypeInfo_for_T2_22;
#line 181 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_0_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 181 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_0_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 471 "solutions.m"
    {
#line 471 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;
#line 471 "solutions.m"
      MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_19_19;

#line 585 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif

#line 14036 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__do_while_4_p_0_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__do_while_4_p_0_env_0__TrailPtr_10  = TrailPtr;
#line 585 "solutions.m"
}
#line 473 "solutions.m"
      {
#line 473 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T2_22, mercury__solutions__STATE_VARIABLE_Accumulator_0_17, &(mercury__solutions__env).mercury__solutions__do_while_4_p_0_env_0__Mutvar_11);
      }
#line 947 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0


		{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 14062 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 947 "solutions.m"
}
#line 476 "solutions.m"
      {
#line 476 "solutions.m"
        mercury__solutions__do_while_4_p_0_3(&mercury__solutions__env);
      }
#line 491 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__do_while_4_p_0_env_0__succeeded))
#line 972 "solutions.m"
        {
#line 977 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0


		{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 14089 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 977 "solutions.m"
}
#line 972 "solutions.m"
        }
#line 494 "solutions.m"
      {
#line 494 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T2_22, (mercury__solutions__env).mercury__solutions__do_while_4_p_0_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_19_19);
      }
#line 824 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T2_22 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) mercury__solutions__STATE_VARIABLE_Accumulator_19_19 ;
		{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 14119 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_18  = (MR_Box) NewVal;
#line 824 "solutions.m"
}
#line 911 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 14140 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 911 "solutions.m"
}
#line 690 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0


		{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 14158 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 690 "solutions.m"
}
#line 471 "solutions.m"
    }
#line 181 "solutions.m"
  }
#line 181 "solutions.m"
}

#line 156 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate2_6_p_7(
#line 156 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_19,
#line 156 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_20,
#line 156 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_21,
#line 156 "solutions.m"
  MR_Word mercury__solutions__Generator_7,
#line 156 "solutions.m"
  MR_Word mercury__solutions__Accumulator_8,
#line 156 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc1_0_11,
#line 156 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc1_12,
#line 156 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc2_0_13,
#line 156 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc2_14)
#line 156 "solutions.m"
{
#line 243 "solutions.m"
  {
#line 243 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 243 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc1_15_15;
#line 243 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc2_16_16;
#line 101 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_22;
#line 98 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_V_23;

#line 244 "solutions.m"
    {
#line 244 "solutions.m"
      mercury__solutions__builtin_aggregate2_6_p_7(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__TypeInfo_for_U_20, mercury__solutions__TypeInfo_for_V_21, mercury__solutions__Generator_7, mercury__solutions__Accumulator_8, mercury__solutions__STATE_VARIABLE_Acc1_0_11, &mercury__solutions__STATE_VARIABLE_Acc1_15_15, mercury__solutions__STATE_VARIABLE_Acc2_0_13, &mercury__solutions__STATE_VARIABLE_Acc2_16_16);
    }
#line 101 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_7

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc1_15_15 ;
		{
#line 101 "builtin.opt"

    Y = X;

#line 14225 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc1_12  = (MR_Box) Y;
#line 101 "builtin.opt"
}
#line 98 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_7

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc2_16_16 ;
		{
#line 98 "builtin.opt"

    Y = X;

#line 14245 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc2_14  = (MR_Box) Y;
#line 98 "builtin.opt"
}
#line 243 "solutions.m"
  }
#line 156 "solutions.m"
}

#line 154 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate2_6_p_6(
#line 154 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_19,
#line 154 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_20,
#line 154 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_21,
#line 154 "solutions.m"
  MR_Word mercury__solutions__Generator_7,
#line 154 "solutions.m"
  MR_Word mercury__solutions__Accumulator_8,
#line 154 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc1_0_11,
#line 154 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc1_12,
#line 154 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc2_0_13,
#line 154 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc2_14)
#line 154 "solutions.m"
{
#line 243 "solutions.m"
  {
#line 243 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 243 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc1_15_15;
#line 243 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc2_16_16;
#line 101 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_22;
#line 98 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_V_23;

#line 244 "solutions.m"
    {
#line 244 "solutions.m"
      mercury__solutions__builtin_aggregate2_6_p_6(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__TypeInfo_for_U_20, mercury__solutions__TypeInfo_for_V_21, mercury__solutions__Generator_7, mercury__solutions__Accumulator_8, mercury__solutions__STATE_VARIABLE_Acc1_0_11, &mercury__solutions__STATE_VARIABLE_Acc1_15_15, mercury__solutions__STATE_VARIABLE_Acc2_0_13, &mercury__solutions__STATE_VARIABLE_Acc2_16_16);
    }
#line 101 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_6

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc1_15_15 ;
		{
#line 101 "builtin.opt"

    Y = X;

#line 14311 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc1_12  = (MR_Box) Y;
#line 101 "builtin.opt"
}
#line 98 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_6

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc2_16_16 ;
		{
#line 98 "builtin.opt"

    Y = X;

#line 14331 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc2_14  = (MR_Box) Y;
#line 98 "builtin.opt"
}
#line 243 "solutions.m"
  }
#line 154 "solutions.m"
}

#line 152 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate2_6_p_5(
#line 152 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_19,
#line 152 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_20,
#line 152 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_21,
#line 152 "solutions.m"
  MR_Word mercury__solutions__Generator_7,
#line 152 "solutions.m"
  MR_Word mercury__solutions__Accumulator_8,
#line 152 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc1_0_11,
#line 152 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc1_12,
#line 152 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc2_0_13,
#line 152 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc2_14)
#line 152 "solutions.m"
{
#line 243 "solutions.m"
  {
#line 243 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 243 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc1_15_15;
#line 243 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc2_16_16;
#line 101 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_22;
#line 101 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_V_23;

#line 244 "solutions.m"
    {
#line 244 "solutions.m"
      mercury__solutions__builtin_aggregate2_6_p_5(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__TypeInfo_for_U_20, mercury__solutions__TypeInfo_for_V_21, mercury__solutions__Generator_7, mercury__solutions__Accumulator_8, mercury__solutions__STATE_VARIABLE_Acc1_0_11, &mercury__solutions__STATE_VARIABLE_Acc1_15_15, mercury__solutions__STATE_VARIABLE_Acc2_0_13, &mercury__solutions__STATE_VARIABLE_Acc2_16_16);
    }
#line 101 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_5

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc1_15_15 ;
		{
#line 101 "builtin.opt"

    Y = X;

#line 14397 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc1_12  = (MR_Box) Y;
#line 101 "builtin.opt"
}
#line 101 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_5

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc2_16_16 ;
		{
#line 101 "builtin.opt"

    Y = X;

#line 14417 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc2_14  = (MR_Box) Y;
#line 101 "builtin.opt"
}
#line 243 "solutions.m"
  }
#line 152 "solutions.m"
}

#line 150 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate2_6_p_4(
#line 150 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_19,
#line 150 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_20,
#line 150 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_21,
#line 150 "solutions.m"
  MR_Word mercury__solutions__Generator_7,
#line 150 "solutions.m"
  MR_Word mercury__solutions__Accumulator_8,
#line 150 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc1_0_11,
#line 150 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc1_12,
#line 150 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc2_0_13,
#line 150 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc2_14)
#line 150 "solutions.m"
{
#line 243 "solutions.m"
  {
#line 243 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 243 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc1_15_15;
#line 243 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc2_16_16;
#line 101 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_22;
#line 101 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_V_23;

#line 244 "solutions.m"
    {
#line 244 "solutions.m"
      mercury__solutions__builtin_aggregate2_6_p_4(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__TypeInfo_for_U_20, mercury__solutions__TypeInfo_for_V_21, mercury__solutions__Generator_7, mercury__solutions__Accumulator_8, mercury__solutions__STATE_VARIABLE_Acc1_0_11, &mercury__solutions__STATE_VARIABLE_Acc1_15_15, mercury__solutions__STATE_VARIABLE_Acc2_0_13, &mercury__solutions__STATE_VARIABLE_Acc2_16_16);
    }
#line 101 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_4

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc1_15_15 ;
		{
#line 101 "builtin.opt"

    Y = X;

#line 14483 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc1_12  = (MR_Box) Y;
#line 101 "builtin.opt"
}
#line 101 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_4

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc2_16_16 ;
		{
#line 101 "builtin.opt"

    Y = X;

#line 14503 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc2_14  = (MR_Box) Y;
#line 101 "builtin.opt"
}
#line 243 "solutions.m"
  }
#line 150 "solutions.m"
}

#line 148 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate2_6_p_3(
#line 148 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_19,
#line 148 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_20,
#line 148 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_21,
#line 148 "solutions.m"
  MR_Word mercury__solutions__Generator_7,
#line 148 "solutions.m"
  MR_Word mercury__solutions__Accumulator_8,
#line 148 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc1_0_11,
#line 148 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc1_12,
#line 148 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc2_0_13,
#line 148 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc2_14)
#line 148 "solutions.m"
{
#line 243 "solutions.m"
  {
#line 243 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 243 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc1_15_15;
#line 243 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc2_16_16;
#line 101 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_22;
#line 98 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_V_23;

#line 244 "solutions.m"
    {
#line 244 "solutions.m"
      mercury__solutions__builtin_aggregate2_6_p_3(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__TypeInfo_for_U_20, mercury__solutions__TypeInfo_for_V_21, mercury__solutions__Generator_7, mercury__solutions__Accumulator_8, mercury__solutions__STATE_VARIABLE_Acc1_0_11, &mercury__solutions__STATE_VARIABLE_Acc1_15_15, mercury__solutions__STATE_VARIABLE_Acc2_0_13, &mercury__solutions__STATE_VARIABLE_Acc2_16_16);
    }
#line 101 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_3

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc1_15_15 ;
		{
#line 101 "builtin.opt"

    Y = X;

#line 14569 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc1_12  = (MR_Box) Y;
#line 101 "builtin.opt"
}
#line 98 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_3

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc2_16_16 ;
		{
#line 98 "builtin.opt"

    Y = X;

#line 14589 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc2_14  = (MR_Box) Y;
#line 98 "builtin.opt"
}
#line 243 "solutions.m"
  }
#line 148 "solutions.m"
}

#line 146 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate2_6_p_2(
#line 146 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_19,
#line 146 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_20,
#line 146 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_21,
#line 146 "solutions.m"
  MR_Word mercury__solutions__Generator_7,
#line 146 "solutions.m"
  MR_Word mercury__solutions__Accumulator_8,
#line 146 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc1_0_11,
#line 146 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc1_12,
#line 146 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc2_0_13,
#line 146 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc2_14)
#line 146 "solutions.m"
{
#line 243 "solutions.m"
  {
#line 243 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 243 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc1_15_15;
#line 243 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc2_16_16;
#line 101 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_22;
#line 98 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_V_23;

#line 244 "solutions.m"
    {
#line 244 "solutions.m"
      mercury__solutions__builtin_aggregate2_6_p_2(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__TypeInfo_for_U_20, mercury__solutions__TypeInfo_for_V_21, mercury__solutions__Generator_7, mercury__solutions__Accumulator_8, mercury__solutions__STATE_VARIABLE_Acc1_0_11, &mercury__solutions__STATE_VARIABLE_Acc1_15_15, mercury__solutions__STATE_VARIABLE_Acc2_0_13, &mercury__solutions__STATE_VARIABLE_Acc2_16_16);
    }
#line 101 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_2

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc1_15_15 ;
		{
#line 101 "builtin.opt"

    Y = X;

#line 14655 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc1_12  = (MR_Box) Y;
#line 101 "builtin.opt"
}
#line 98 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_2

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc2_16_16 ;
		{
#line 98 "builtin.opt"

    Y = X;

#line 14675 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc2_14  = (MR_Box) Y;
#line 98 "builtin.opt"
}
#line 243 "solutions.m"
  }
#line 146 "solutions.m"
}

#line 144 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate2_6_p_1(
#line 144 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_19,
#line 144 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_20,
#line 144 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_21,
#line 144 "solutions.m"
  MR_Word mercury__solutions__Generator_7,
#line 144 "solutions.m"
  MR_Word mercury__solutions__Accumulator_8,
#line 144 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc1_0_11,
#line 144 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc1_12,
#line 144 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc2_0_13,
#line 144 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc2_14)
#line 144 "solutions.m"
{
#line 243 "solutions.m"
  {
#line 243 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 243 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc1_15_15;
#line 243 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc2_16_16;
#line 101 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_22;
#line 101 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_V_23;

#line 244 "solutions.m"
    {
#line 244 "solutions.m"
      mercury__solutions__builtin_aggregate2_6_p_1(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__TypeInfo_for_U_20, mercury__solutions__TypeInfo_for_V_21, mercury__solutions__Generator_7, mercury__solutions__Accumulator_8, mercury__solutions__STATE_VARIABLE_Acc1_0_11, &mercury__solutions__STATE_VARIABLE_Acc1_15_15, mercury__solutions__STATE_VARIABLE_Acc2_0_13, &mercury__solutions__STATE_VARIABLE_Acc2_16_16);
    }
#line 101 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_1

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc1_15_15 ;
		{
#line 101 "builtin.opt"

    Y = X;

#line 14741 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc1_12  = (MR_Box) Y;
#line 101 "builtin.opt"
}
#line 101 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_1

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc2_16_16 ;
		{
#line 101 "builtin.opt"

    Y = X;

#line 14761 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc2_14  = (MR_Box) Y;
#line 101 "builtin.opt"
}
#line 243 "solutions.m"
  }
#line 144 "solutions.m"
}

#line 142 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate2_6_p_0(
#line 142 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_19,
#line 142 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_20,
#line 142 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_21,
#line 142 "solutions.m"
  MR_Word mercury__solutions__Generator_7,
#line 142 "solutions.m"
  MR_Word mercury__solutions__Accumulator_8,
#line 142 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc1_0_11,
#line 142 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc1_12,
#line 142 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc2_0_13,
#line 142 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc2_14)
#line 142 "solutions.m"
{
#line 243 "solutions.m"
  {
#line 243 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 243 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc1_15_15;
#line 243 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc2_16_16;
#line 101 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_22;
#line 101 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_V_23;

#line 244 "solutions.m"
    {
#line 244 "solutions.m"
      mercury__solutions__builtin_aggregate2_6_p_0(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__TypeInfo_for_U_20, mercury__solutions__TypeInfo_for_V_21, mercury__solutions__Generator_7, mercury__solutions__Accumulator_8, mercury__solutions__STATE_VARIABLE_Acc1_0_11, &mercury__solutions__STATE_VARIABLE_Acc1_15_15, mercury__solutions__STATE_VARIABLE_Acc2_0_13, &mercury__solutions__STATE_VARIABLE_Acc2_16_16);
    }
#line 101 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc1_15_15 ;
		{
#line 101 "builtin.opt"

    Y = X;

#line 14827 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc1_12  = (MR_Box) Y;
#line 101 "builtin.opt"
}
#line 101 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc2_16_16 ;
		{
#line 101 "builtin.opt"

    Y = X;

#line 14847 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc2_14  = (MR_Box) Y;
#line 101 "builtin.opt"
}
#line 243 "solutions.m"
  }
#line 142 "solutions.m"
}

#line 126 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_9(
#line 126 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 126 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 126 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 126 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 126 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_8,
#line 126 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_9)
#line 126 "solutions.m"
{
#line 239 "solutions.m"
  {
#line 239 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 239 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc_10_10;
#line 98 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 240 "solutions.m"
    {
#line 240 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_9(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 98 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_9

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 98 "builtin.opt"

    Y = X;

#line 14903 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 98 "builtin.opt"
}
#line 239 "solutions.m"
  }
#line 126 "solutions.m"
}

#line 124 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_8(
#line 124 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 124 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 124 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 124 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 124 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_8,
#line 124 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_9)
#line 124 "solutions.m"
{
#line 239 "solutions.m"
  {
#line 239 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 239 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc_10_10;
#line 101 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 240 "solutions.m"
    {
#line 240 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_8(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 101 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_8

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 101 "builtin.opt"

    Y = X;

#line 14959 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 101 "builtin.opt"
}
#line 239 "solutions.m"
  }
#line 124 "solutions.m"
}

#line 122 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_7(
#line 122 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 122 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 122 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 122 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 122 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_8,
#line 122 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_9)
#line 122 "solutions.m"
{
#line 239 "solutions.m"
  {
#line 239 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 239 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc_10_10;
#line 101 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 240 "solutions.m"
    {
#line 240 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_7(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 101 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_7

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 101 "builtin.opt"

    Y = X;

#line 15015 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 101 "builtin.opt"
}
#line 239 "solutions.m"
  }
#line 122 "solutions.m"
}

#line 120 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_6(
#line 120 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 120 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 120 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 120 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 120 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_8,
#line 120 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_9)
#line 120 "solutions.m"
{
#line 239 "solutions.m"
  {
#line 239 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 239 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc_10_10;
#line 98 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 240 "solutions.m"
    {
#line 240 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_6(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 98 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_6

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 98 "builtin.opt"

    Y = X;

#line 15071 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 98 "builtin.opt"
}
#line 239 "solutions.m"
  }
#line 120 "solutions.m"
}

#line 118 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_5(
#line 118 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 118 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 118 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 118 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 118 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_8,
#line 118 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_9)
#line 118 "solutions.m"
{
#line 239 "solutions.m"
  {
#line 239 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 239 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc_10_10;
#line 98 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 240 "solutions.m"
    {
#line 240 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_5(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 98 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_5

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 98 "builtin.opt"

    Y = X;

#line 15127 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 98 "builtin.opt"
}
#line 239 "solutions.m"
  }
#line 118 "solutions.m"
}

#line 116 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_4(
#line 116 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 116 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 116 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 116 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 116 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_8,
#line 116 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_9)
#line 116 "solutions.m"
{
#line 239 "solutions.m"
  {
#line 239 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 239 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc_10_10;
#line 98 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 240 "solutions.m"
    {
#line 240 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_4(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 98 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_4

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 98 "builtin.opt"

    Y = X;

#line 15183 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 98 "builtin.opt"
}
#line 239 "solutions.m"
  }
#line 116 "solutions.m"
}

#line 114 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_3(
#line 114 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 114 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 114 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 114 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 114 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_8,
#line 114 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_9)
#line 114 "solutions.m"
{
#line 239 "solutions.m"
  {
#line 239 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 239 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc_10_10;
#line 98 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 240 "solutions.m"
    {
#line 240 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_3(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 98 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_3

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 98 "builtin.opt"

    Y = X;

#line 15239 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 98 "builtin.opt"
}
#line 239 "solutions.m"
  }
#line 114 "solutions.m"
}

#line 112 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_2(
#line 112 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 112 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 112 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 112 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 112 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_8,
#line 112 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_9)
#line 112 "solutions.m"
{
#line 239 "solutions.m"
  {
#line 239 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 239 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc_10_10;
#line 98 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 240 "solutions.m"
    {
#line 240 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_1(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 98 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_2

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 98 "builtin.opt"

    Y = X;

#line 15295 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 98 "builtin.opt"
}
#line 239 "solutions.m"
  }
#line 112 "solutions.m"
}

#line 110 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_1(
#line 110 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 110 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 110 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 110 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 110 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_8,
#line 110 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_9)
#line 110 "solutions.m"
{
#line 239 "solutions.m"
  {
#line 239 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 239 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc_10_10;
#line 101 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 240 "solutions.m"
    {
#line 240 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_2(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 101 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_1

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 101 "builtin.opt"

    Y = X;

#line 15351 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 101 "builtin.opt"
}
#line 239 "solutions.m"
  }
#line 110 "solutions.m"
}

#line 108 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_0(
#line 108 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 108 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 108 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 108 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 108 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_8,
#line 108 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_9)
#line 108 "solutions.m"
{
#line 239 "solutions.m"
  {
#line 239 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 239 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc_10_10;
#line 101 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 240 "solutions.m"
    {
#line 240 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 101 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 101 "builtin.opt"

    Y = X;

#line 15407 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 101 "builtin.opt"
}
#line 239 "solutions.m"
  }
#line 108 "solutions.m"
}

#line 92 "solutions.m"
void MR_CALL 
mercury__solutions__aggregate2_6_p_3(
#line 92 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_18,
#line 92 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_19,
#line 92 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_20,
#line 92 "solutions.m"
  MR_Word mercury__solutions__Generator_7,
#line 92 "solutions.m"
  MR_Word mercury__solutions__Accumulator_8,
#line 92 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc1_0_12,
#line 92 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc1_13,
#line 92 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc2_0_14,
#line 92 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc2_15)
#line 92 "solutions.m"
{
#line 235 "solutions.m"
  {
#line 235 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 235 "solutions.m"
    MR_Word mercury__solutions__Solutions_11;
#line 235 "solutions.m"
    MR_Word mercury__solutions__UnsortedList_23;
#line 235 "solutions.m"
    MR_Integer mercury__solutions__V_5_26;

#line 210 "solutions.m"
    {
#line 210 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_1(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__Generator_7, &mercury__solutions__UnsortedList_23);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__UnsortedList_23, (MR_Integer) 0, &mercury__solutions__V_5_26);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__V_5_26, mercury__solutions__UnsortedList_23, &mercury__solutions__Solutions_11);
    }
#line 237 "solutions.m"
    {
#line 237 "solutions.m"
      mercury__list__foldl2_6_p_0(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__TypeInfo_for_U_19, mercury__solutions__TypeInfo_for_V_20, mercury__solutions__Accumulator_8, mercury__solutions__Solutions_11, mercury__solutions__STATE_VARIABLE_Acc1_0_12, mercury__solutions__STATE_VARIABLE_Acc1_13, mercury__solutions__STATE_VARIABLE_Acc2_0_14, mercury__solutions__STATE_VARIABLE_Acc2_15);
#line 237 "solutions.m"
      return;
    }
#line 235 "solutions.m"
  }
#line 92 "solutions.m"
}

#line 90 "solutions.m"
void MR_CALL 
mercury__solutions__aggregate2_6_p_2(
#line 90 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_18,
#line 90 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_19,
#line 90 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_20,
#line 90 "solutions.m"
  MR_Word mercury__solutions__Generator_7,
#line 90 "solutions.m"
  MR_Word mercury__solutions__Accumulator_8,
#line 90 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc1_0_12,
#line 90 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc1_13,
#line 90 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc2_0_14,
#line 90 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc2_15)
#line 90 "solutions.m"
{
#line 235 "solutions.m"
  {
#line 235 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 235 "solutions.m"
    MR_Word mercury__solutions__Solutions_11;
#line 235 "solutions.m"
    MR_Word mercury__solutions__UnsortedList_23;
#line 235 "solutions.m"
    MR_Integer mercury__solutions__V_5_26;

#line 210 "solutions.m"
    {
#line 210 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_1(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__Generator_7, &mercury__solutions__UnsortedList_23);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__UnsortedList_23, (MR_Integer) 0, &mercury__solutions__V_5_26);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__V_5_26, mercury__solutions__UnsortedList_23, &mercury__solutions__Solutions_11);
    }
#line 237 "solutions.m"
    {
#line 237 "solutions.m"
      mercury__list__foldl2_6_p_2(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__TypeInfo_for_U_19, mercury__solutions__TypeInfo_for_V_20, mercury__solutions__Accumulator_8, mercury__solutions__Solutions_11, mercury__solutions__STATE_VARIABLE_Acc1_0_12, mercury__solutions__STATE_VARIABLE_Acc1_13, mercury__solutions__STATE_VARIABLE_Acc2_0_14, mercury__solutions__STATE_VARIABLE_Acc2_15);
#line 237 "solutions.m"
      return;
    }
#line 235 "solutions.m"
  }
#line 90 "solutions.m"
}

#line 88 "solutions.m"
void MR_CALL 
mercury__solutions__aggregate2_6_p_1(
#line 88 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_18,
#line 88 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_19,
#line 88 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_20,
#line 88 "solutions.m"
  MR_Word mercury__solutions__Generator_7,
#line 88 "solutions.m"
  MR_Word mercury__solutions__Accumulator_8,
#line 88 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc1_0_12,
#line 88 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc1_13,
#line 88 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc2_0_14,
#line 88 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc2_15)
#line 88 "solutions.m"
{
#line 235 "solutions.m"
  {
#line 235 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 235 "solutions.m"
    MR_Word mercury__solutions__Solutions_11;
#line 235 "solutions.m"
    MR_Word mercury__solutions__UnsortedList_23;
#line 235 "solutions.m"
    MR_Integer mercury__solutions__V_5_26;

#line 210 "solutions.m"
    {
#line 210 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_0(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__Generator_7, &mercury__solutions__UnsortedList_23);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__UnsortedList_23, (MR_Integer) 0, &mercury__solutions__V_5_26);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__V_5_26, mercury__solutions__UnsortedList_23, &mercury__solutions__Solutions_11);
    }
#line 237 "solutions.m"
    {
#line 237 "solutions.m"
      mercury__list__foldl2_6_p_2(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__TypeInfo_for_U_19, mercury__solutions__TypeInfo_for_V_20, mercury__solutions__Accumulator_8, mercury__solutions__Solutions_11, mercury__solutions__STATE_VARIABLE_Acc1_0_12, mercury__solutions__STATE_VARIABLE_Acc1_13, mercury__solutions__STATE_VARIABLE_Acc2_0_14, mercury__solutions__STATE_VARIABLE_Acc2_15);
#line 237 "solutions.m"
      return;
    }
#line 235 "solutions.m"
  }
#line 88 "solutions.m"
}

#line 86 "solutions.m"
void MR_CALL 
mercury__solutions__aggregate2_6_p_0(
#line 86 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_18,
#line 86 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_19,
#line 86 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_20,
#line 86 "solutions.m"
  MR_Word mercury__solutions__Generator_7,
#line 86 "solutions.m"
  MR_Word mercury__solutions__Accumulator_8,
#line 86 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc1_0_12,
#line 86 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc1_13,
#line 86 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc2_0_14,
#line 86 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc2_15)
#line 86 "solutions.m"
{
#line 235 "solutions.m"
  {
#line 235 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 235 "solutions.m"
    MR_Word mercury__solutions__Solutions_11;
#line 235 "solutions.m"
    MR_Word mercury__solutions__UnsortedList_23;
#line 235 "solutions.m"
    MR_Integer mercury__solutions__V_5_26;

#line 210 "solutions.m"
    {
#line 210 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_0(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__Generator_7, &mercury__solutions__UnsortedList_23);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__UnsortedList_23, (MR_Integer) 0, &mercury__solutions__V_5_26);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__V_5_26, mercury__solutions__UnsortedList_23, &mercury__solutions__Solutions_11);
    }
#line 237 "solutions.m"
    {
#line 237 "solutions.m"
      mercury__list__foldl2_6_p_0(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__TypeInfo_for_U_19, mercury__solutions__TypeInfo_for_V_20, mercury__solutions__Accumulator_8, mercury__solutions__Solutions_11, mercury__solutions__STATE_VARIABLE_Acc1_0_12, mercury__solutions__STATE_VARIABLE_Acc1_13, mercury__solutions__STATE_VARIABLE_Acc2_0_14, mercury__solutions__STATE_VARIABLE_Acc2_15);
#line 237 "solutions.m"
      return;
    }
#line 235 "solutions.m"
  }
#line 86 "solutions.m"
}

#line 74 "solutions.m"
void MR_CALL 
mercury__solutions__aggregate_4_p_3(
#line 74 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 74 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 74 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 74 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 74 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_9,
#line 74 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_10)
#line 74 "solutions.m"
{
#line 231 "solutions.m"
  {
#line 231 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 231 "solutions.m"
    MR_Word mercury__solutions__Solutions_8;
#line 231 "solutions.m"
    MR_Word mercury__solutions__UnsortedList_16;
#line 231 "solutions.m"
    MR_Integer mercury__solutions__V_5_19;

#line 210 "solutions.m"
    {
#line 210 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_1(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__Generator_5, &mercury__solutions__UnsortedList_16);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__UnsortedList_16, (MR_Integer) 0, &mercury__solutions__V_5_19);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__V_5_19, mercury__solutions__UnsortedList_16, &mercury__solutions__Solutions_8);
    }
#line 233 "solutions.m"
    {
#line 233 "solutions.m"
      mercury__list__foldl_4_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Accumulator_6, mercury__solutions__Solutions_8, mercury__solutions__STATE_VARIABLE_Acc_0_9, mercury__solutions__STATE_VARIABLE_Acc_10);
#line 233 "solutions.m"
      return;
    }
#line 231 "solutions.m"
  }
#line 74 "solutions.m"
}

#line 72 "solutions.m"
void MR_CALL 
mercury__solutions__aggregate_4_p_2(
#line 72 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 72 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 72 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 72 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 72 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_9,
#line 72 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_10)
#line 72 "solutions.m"
{
#line 231 "solutions.m"
  {
#line 231 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 231 "solutions.m"
    MR_Word mercury__solutions__Solutions_8;
#line 231 "solutions.m"
    MR_Word mercury__solutions__UnsortedList_16;
#line 231 "solutions.m"
    MR_Integer mercury__solutions__V_5_19;

#line 210 "solutions.m"
    {
#line 210 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_1(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__Generator_5, &mercury__solutions__UnsortedList_16);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__UnsortedList_16, (MR_Integer) 0, &mercury__solutions__V_5_19);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__V_5_19, mercury__solutions__UnsortedList_16, &mercury__solutions__Solutions_8);
    }
#line 233 "solutions.m"
    {
#line 233 "solutions.m"
      mercury__list__foldl_4_p_2(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Accumulator_6, mercury__solutions__Solutions_8, mercury__solutions__STATE_VARIABLE_Acc_0_9, mercury__solutions__STATE_VARIABLE_Acc_10);
#line 233 "solutions.m"
      return;
    }
#line 231 "solutions.m"
  }
#line 72 "solutions.m"
}

#line 70 "solutions.m"
void MR_CALL 
mercury__solutions__aggregate_4_p_1(
#line 70 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 70 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 70 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 70 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 70 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_9,
#line 70 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_10)
#line 70 "solutions.m"
{
#line 231 "solutions.m"
  {
#line 231 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 231 "solutions.m"
    MR_Word mercury__solutions__Solutions_8;
#line 231 "solutions.m"
    MR_Word mercury__solutions__UnsortedList_16;
#line 231 "solutions.m"
    MR_Integer mercury__solutions__V_5_19;

#line 210 "solutions.m"
    {
#line 210 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__Generator_5, &mercury__solutions__UnsortedList_16);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__UnsortedList_16, (MR_Integer) 0, &mercury__solutions__V_5_19);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__V_5_19, mercury__solutions__UnsortedList_16, &mercury__solutions__Solutions_8);
    }
#line 233 "solutions.m"
    {
#line 233 "solutions.m"
      mercury__list__foldl_4_p_2(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Accumulator_6, mercury__solutions__Solutions_8, mercury__solutions__STATE_VARIABLE_Acc_0_9, mercury__solutions__STATE_VARIABLE_Acc_10);
#line 233 "solutions.m"
      return;
    }
#line 231 "solutions.m"
  }
#line 70 "solutions.m"
}

#line 68 "solutions.m"
void MR_CALL 
mercury__solutions__aggregate_4_p_0(
#line 68 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 68 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 68 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 68 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 68 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_9,
#line 68 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_10)
#line 68 "solutions.m"
{
#line 231 "solutions.m"
  {
#line 231 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 231 "solutions.m"
    MR_Word mercury__solutions__Solutions_8;
#line 231 "solutions.m"
    MR_Word mercury__solutions__UnsortedList_16;
#line 231 "solutions.m"
    MR_Integer mercury__solutions__V_5_19;

#line 210 "solutions.m"
    {
#line 210 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__Generator_5, &mercury__solutions__UnsortedList_16);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__UnsortedList_16, (MR_Integer) 0, &mercury__solutions__V_5_19);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__V_5_19, mercury__solutions__UnsortedList_16, &mercury__solutions__Solutions_8);
    }
#line 233 "solutions.m"
    {
#line 233 "solutions.m"
      mercury__list__foldl_4_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Accumulator_6, mercury__solutions__Solutions_8, mercury__solutions__STATE_VARIABLE_Acc_0_9, mercury__solutions__STATE_VARIABLE_Acc_10);
#line 233 "solutions.m"
      return;
    }
#line 231 "solutions.m"
  }
#line 68 "solutions.m"
}

#line 56 "solutions.m"
MR_Box MR_CALL 
mercury__solutions__aggregate_3_f_1(
#line 56 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_19,
#line 56 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_20,
#line 56 "solutions.m"
  MR_Word mercury__solutions__P_5,
#line 56 "solutions.m"
  MR_Word mercury__solutions__F_6,
#line 56 "solutions.m"
  MR_Box mercury__solutions__Acc0_7)
#line 56 "solutions.m"
{
#line 227 "solutions.m"
  {
#line 227 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 227 "solutions.m"
    MR_Box mercury__solutions__Acc_8;
#line 227 "solutions.m"
    MR_Word mercury__solutions__Solutions_26;
#line 227 "solutions.m"
    MR_Word mercury__solutions__UnsortedList_30;
#line 227 "solutions.m"
    MR_Integer mercury__solutions__V_5_33;

#line 210 "solutions.m"
    {
#line 210 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_1(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__P_5, &mercury__solutions__UnsortedList_30);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__UnsortedList_30, (MR_Integer) 0, &mercury__solutions__V_5_33);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__V_5_33, mercury__solutions__UnsortedList_30, &mercury__solutions__Solutions_26);
    }
#line 233 "solutions.m"
    {
#line 233 "solutions.m"
      mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__solutions__F_6, mercury__solutions__Solutions_26, mercury__solutions__Acc0_7, &mercury__solutions__Acc_8);
    }
#line 227 "solutions.m"
    return mercury__solutions__Acc_8;
#line 227 "solutions.m"
  }
#line 56 "solutions.m"
}

#line 54 "solutions.m"
MR_Box MR_CALL 
mercury__solutions__aggregate_3_f_0(
#line 54 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_19,
#line 54 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_20,
#line 54 "solutions.m"
  MR_Word mercury__solutions__P_5,
#line 54 "solutions.m"
  MR_Word mercury__solutions__F_6,
#line 54 "solutions.m"
  MR_Box mercury__solutions__Acc0_7)
#line 54 "solutions.m"
{
#line 227 "solutions.m"
  {
#line 227 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 227 "solutions.m"
    MR_Box mercury__solutions__Acc_8;
#line 227 "solutions.m"
    MR_Word mercury__solutions__Solutions_26;
#line 227 "solutions.m"
    MR_Word mercury__solutions__UnsortedList_30;
#line 227 "solutions.m"
    MR_Integer mercury__solutions__V_5_33;

#line 210 "solutions.m"
    {
#line 210 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_0(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__P_5, &mercury__solutions__UnsortedList_30);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__UnsortedList_30, (MR_Integer) 0, &mercury__solutions__V_5_33);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__V_5_33, mercury__solutions__UnsortedList_30, &mercury__solutions__Solutions_26);
    }
#line 233 "solutions.m"
    {
#line 233 "solutions.m"
      mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__solutions__F_6, mercury__solutions__Solutions_26, mercury__solutions__Acc0_7, &mercury__solutions__Acc_8);
    }
#line 227 "solutions.m"
    return mercury__solutions__Acc_8;
#line 227 "solutions.m"
  }
#line 54 "solutions.m"
}

#line 51 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_solutions_2_p_1(
#line 51 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_6,
#line 51 "solutions.m"
  MR_Word mercury__solutions__Pred_3,
#line 51 "solutions.m"
  MR_Word * mercury__solutions__List_4)
#line 51 "solutions.m"
{
#line 223 "solutions.m"
  {
#line 223 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 223 "solutions.m"
    MR_Word mercury__solutions__UnsortedList_5;
#line 101 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_8_9;
#line 101 "builtin.opt"
    MR_Box mercury__solutions__conv0_Y;

#line 224 "solutions.m"
    {
#line 224 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_1(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__Pred_3, &mercury__solutions__UnsortedList_5);
    }
#line 101 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_solutions_2_p_1

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (mercury__solutions__UnsortedList_5)) ;
		{
#line 101 "builtin.opt"

    Y = X;

#line 16033 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 mercury__solutions__conv0_Y  = (MR_Box) Y;
#line 101 "builtin.opt"
    *mercury__solutions__List_4 = ((MR_Word) mercury__solutions__conv0_Y);
#line 101 "builtin.opt"
}
#line 223 "solutions.m"
  }
#line 51 "solutions.m"
}

#line 49 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_solutions_2_p_0(
#line 49 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_6,
#line 49 "solutions.m"
  MR_Word mercury__solutions__Pred_3,
#line 49 "solutions.m"
  MR_Word * mercury__solutions__List_4)
#line 49 "solutions.m"
{
#line 223 "solutions.m"
  {
#line 223 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 223 "solutions.m"
    MR_Word mercury__solutions__UnsortedList_5;
#line 101 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_8_9;
#line 101 "builtin.opt"
    MR_Box mercury__solutions__conv0_Y;

#line 224 "solutions.m"
    {
#line 224 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_0(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__Pred_3, &mercury__solutions__UnsortedList_5);
    }
#line 101 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_solutions_2_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (mercury__solutions__UnsortedList_5)) ;
		{
#line 101 "builtin.opt"

    Y = X;

#line 16087 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 mercury__solutions__conv0_Y  = (MR_Box) Y;
#line 101 "builtin.opt"
    *mercury__solutions__List_4 = ((MR_Word) mercury__solutions__conv0_Y);
#line 101 "builtin.opt"
}
#line 223 "solutions.m"
  }
#line 49 "solutions.m"
}

#line 46 "solutions.m"
void MR_CALL 
mercury__solutions__solutions_set_2_p_1(
#line 46 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_6,
#line 46 "solutions.m"
  MR_Word mercury__solutions__Pred_3,
#line 46 "solutions.m"
  MR_Word * mercury__solutions__Set_4)
#line 46 "solutions.m"
{
#line 219 "solutions.m"
  {
#line 219 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 219 "solutions.m"
    MR_Word mercury__solutions__List_5;
#line 219 "solutions.m"
    MR_Word mercury__solutions__List_4_10;
#line 219 "solutions.m"
    MR_Integer mercury__solutions__V_5_13;

#line 220 "solutions.m"
    {
#line 220 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_1(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__Pred_3, &mercury__solutions__List_5);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__List_5, (MR_Integer) 0, &mercury__solutions__V_5_13);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__V_5_13, mercury__solutions__List_5, &mercury__solutions__List_4_10);
    }
#line 26 "set_ordlist.opt"
    *mercury__solutions__Set_4 = (MR_Word) mercury__solutions__List_4_10;
#line 219 "solutions.m"
  }
#line 46 "solutions.m"
}

#line 45 "solutions.m"
void MR_CALL 
mercury__solutions__solutions_set_2_p_0(
#line 45 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_6,
#line 45 "solutions.m"
  MR_Word mercury__solutions__Pred_3,
#line 45 "solutions.m"
  MR_Word * mercury__solutions__Set_4)
#line 45 "solutions.m"
{
#line 219 "solutions.m"
  {
#line 219 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 219 "solutions.m"
    MR_Word mercury__solutions__List_5;
#line 219 "solutions.m"
    MR_Word mercury__solutions__List_4_10;
#line 219 "solutions.m"
    MR_Integer mercury__solutions__V_5_13;

#line 220 "solutions.m"
    {
#line 220 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_0(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__Pred_3, &mercury__solutions__List_5);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__List_5, (MR_Integer) 0, &mercury__solutions__V_5_13);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__V_5_13, mercury__solutions__List_5, &mercury__solutions__List_4_10);
    }
#line 26 "set_ordlist.opt"
    *mercury__solutions__Set_4 = (MR_Word) mercury__solutions__List_4_10;
#line 219 "solutions.m"
  }
#line 45 "solutions.m"
}

#line 42 "solutions.m"
MR_Word MR_CALL 
mercury__solutions__solutions_set_1_f_1(
#line 42 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_5,
#line 42 "solutions.m"
  MR_Word mercury__solutions__P_3)
#line 42 "solutions.m"
{
#line 219 "solutions.m"
  {
#line 219 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 219 "solutions.m"
    MR_Word mercury__solutions__S_4;
#line 219 "solutions.m"
    MR_Word mercury__solutions__List_8;
#line 219 "solutions.m"
    MR_Word mercury__solutions__List_4_12;
#line 219 "solutions.m"
    MR_Integer mercury__solutions__V_5_15;

#line 220 "solutions.m"
    {
#line 220 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_1(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__P_3, &mercury__solutions__List_8);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__List_8, (MR_Integer) 0, &mercury__solutions__V_5_15);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__V_5_15, mercury__solutions__List_8, &mercury__solutions__List_4_12);
    }
#line 26 "set_ordlist.opt"
    mercury__solutions__S_4 = (MR_Word) mercury__solutions__List_4_12;
#line 219 "solutions.m"
    return mercury__solutions__S_4;
#line 219 "solutions.m"
  }
#line 42 "solutions.m"
}

#line 41 "solutions.m"
MR_Word MR_CALL 
mercury__solutions__solutions_set_1_f_0(
#line 41 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_5,
#line 41 "solutions.m"
  MR_Word mercury__solutions__P_3)
#line 41 "solutions.m"
{
#line 219 "solutions.m"
  {
#line 219 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 219 "solutions.m"
    MR_Word mercury__solutions__S_4;
#line 219 "solutions.m"
    MR_Word mercury__solutions__List_8;
#line 219 "solutions.m"
    MR_Word mercury__solutions__List_4_12;
#line 219 "solutions.m"
    MR_Integer mercury__solutions__V_5_15;

#line 220 "solutions.m"
    {
#line 220 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_0(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__P_3, &mercury__solutions__List_8);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__List_8, (MR_Integer) 0, &mercury__solutions__V_5_15);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__V_5_15, mercury__solutions__List_8, &mercury__solutions__List_4_12);
    }
#line 26 "set_ordlist.opt"
    mercury__solutions__S_4 = (MR_Word) mercury__solutions__List_4_12;
#line 219 "solutions.m"
    return mercury__solutions__S_4;
#line 219 "solutions.m"
  }
#line 41 "solutions.m"
}

#line 38 "solutions.m"
MR_Word MR_CALL 
mercury__solutions__solutions_1_f_1(
#line 38 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_5,
#line 38 "solutions.m"
  MR_Word mercury__solutions__P_3)
#line 38 "solutions.m"
{
#line 209 "solutions.m"
  {
#line 209 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 209 "solutions.m"
    MR_Word mercury__solutions__S_4;
#line 209 "solutions.m"
    MR_Word mercury__solutions__UnsortedList_8;
#line 209 "solutions.m"
    MR_Integer mercury__solutions__V_5_11;

#line 210 "solutions.m"
    {
#line 210 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_1(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__P_3, &mercury__solutions__UnsortedList_8);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__UnsortedList_8, (MR_Integer) 0, &mercury__solutions__V_5_11);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__V_5_11, mercury__solutions__UnsortedList_8, &mercury__solutions__S_4);
    }
#line 209 "solutions.m"
    return mercury__solutions__S_4;
#line 209 "solutions.m"
  }
#line 38 "solutions.m"
}

#line 37 "solutions.m"
MR_Word MR_CALL 
mercury__solutions__solutions_1_f_0(
#line 37 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_5,
#line 37 "solutions.m"
  MR_Word mercury__solutions__P_3)
#line 37 "solutions.m"
{
#line 209 "solutions.m"
  {
#line 209 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 209 "solutions.m"
    MR_Word mercury__solutions__S_4;
#line 209 "solutions.m"
    MR_Word mercury__solutions__UnsortedList_8;
#line 209 "solutions.m"
    MR_Integer mercury__solutions__V_5_11;

#line 210 "solutions.m"
    {
#line 210 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_0(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__P_3, &mercury__solutions__UnsortedList_8);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__UnsortedList_8, (MR_Integer) 0, &mercury__solutions__V_5_11);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__V_5_11, mercury__solutions__UnsortedList_8, &mercury__solutions__S_4);
    }
#line 209 "solutions.m"
    return mercury__solutions__S_4;
#line 209 "solutions.m"
  }
#line 37 "solutions.m"
}

#line 34 "solutions.m"
void MR_CALL 
mercury__solutions__solutions_2_p_1(
#line 34 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_6,
#line 34 "solutions.m"
  MR_Word mercury__solutions__Pred_3,
#line 34 "solutions.m"
  MR_Word * mercury__solutions__List_4)
#line 34 "solutions.m"
{
#line 209 "solutions.m"
  {
#line 209 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 209 "solutions.m"
    MR_Word mercury__solutions__UnsortedList_5;
#line 209 "solutions.m"
    MR_Integer mercury__solutions__V_5_9;

#line 210 "solutions.m"
    {
#line 210 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_1(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__Pred_3, &mercury__solutions__UnsortedList_5);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__UnsortedList_5, (MR_Integer) 0, &mercury__solutions__V_5_9);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__V_5_9, mercury__solutions__UnsortedList_5, mercury__solutions__List_4);
#line 110 "list.opt"
      return;
    }
#line 209 "solutions.m"
  }
#line 34 "solutions.m"
}

#line 33 "solutions.m"
void MR_CALL 
mercury__solutions__solutions_2_p_0(
#line 33 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_6,
#line 33 "solutions.m"
  MR_Word mercury__solutions__Pred_3,
#line 33 "solutions.m"
  MR_Word * mercury__solutions__List_4)
#line 33 "solutions.m"
{
#line 209 "solutions.m"
  {
#line 209 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 209 "solutions.m"
    MR_Word mercury__solutions__UnsortedList_5;
#line 209 "solutions.m"
    MR_Integer mercury__solutions__V_5_9;

#line 210 "solutions.m"
    {
#line 210 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_0(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__Pred_3, &mercury__solutions__UnsortedList_5);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__UnsortedList_5, (MR_Integer) 0, &mercury__solutions__V_5_9);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__V_5_9, mercury__solutions__UnsortedList_5, mercury__solutions__List_4);
#line 110 "list.opt"
      return;
    }
#line 209 "solutions.m"
  }
#line 33 "solutions.m"
}

void mercury__solutions__init(void)
{
}

void mercury__solutions__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__solutions__solutions__type_ctor_info_heap_ptr_0);
	MR_register_type_ctor_info(&mercury__solutions__solutions__type_ctor_info_trail_ptr_0);
}

void mercury__solutions__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module solutions. */
