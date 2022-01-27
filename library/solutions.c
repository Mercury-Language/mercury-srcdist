/*
** Automatically generated from `solutions.m'
** by the Mercury compiler,
** version DEV
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



#line 434 "solutions.m"
struct mercury__solutions__builtin_aggregate2_6_p_7_env_0_s {
#line 434 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_T_32;
#line 434 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_U_33;
#line 434 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_V_34;
#line 434 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__GeneratorPred_7;
#line 434 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__CollectorPred_8;
#line 438 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate2_6_p_7_env_0__succeeded;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__HeapPtr_11;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__TrailPtr_13;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar1_14;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar2_15;
#line 449 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate2_6_p_7_env_0__commit_0;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_7_env_0__Answer0_16;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_7_env_0__Answer_17;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_7_env_0__STATE_VARIABLE_Acc1_28_28;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_7_env_0__STATE_VARIABLE_Acc2_29_29;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_7_env_0__STATE_VARIABLE_Acc1_30_30;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_7_env_0__STATE_VARIABLE_Acc2_31_31;
#line 434 "solutions.m"
};

#line 431 "solutions.m"
struct mercury__solutions__builtin_aggregate2_6_p_6_env_0_s {
#line 431 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_T_32;
#line 431 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_U_33;
#line 431 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_V_34;
#line 431 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__GeneratorPred_7;
#line 431 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__CollectorPred_8;
#line 438 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate2_6_p_6_env_0__succeeded;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__HeapPtr_11;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__TrailPtr_13;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar1_14;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar2_15;
#line 449 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate2_6_p_6_env_0__commit_0;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_6_env_0__Answer0_16;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_6_env_0__Answer_17;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_6_env_0__STATE_VARIABLE_Acc1_28_28;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_6_env_0__STATE_VARIABLE_Acc2_29_29;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_6_env_0__STATE_VARIABLE_Acc1_30_30;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_6_env_0__STATE_VARIABLE_Acc2_31_31;
#line 431 "solutions.m"
};

#line 428 "solutions.m"
struct mercury__solutions__builtin_aggregate2_6_p_5_env_0_s {
#line 428 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_T_32;
#line 428 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_U_33;
#line 428 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_V_34;
#line 428 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__GeneratorPred_7;
#line 428 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__CollectorPred_8;
#line 438 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate2_6_p_5_env_0__succeeded;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__HeapPtr_11;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__TrailPtr_13;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar1_14;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar2_15;
#line 449 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate2_6_p_5_env_0__commit_0;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_5_env_0__Answer0_16;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_5_env_0__Answer_17;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_5_env_0__STATE_VARIABLE_Acc1_28_28;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_5_env_0__STATE_VARIABLE_Acc2_29_29;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_5_env_0__STATE_VARIABLE_Acc1_30_30;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_5_env_0__STATE_VARIABLE_Acc2_31_31;
#line 428 "solutions.m"
};

#line 425 "solutions.m"
struct mercury__solutions__builtin_aggregate2_6_p_4_env_0_s {
#line 425 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_T_32;
#line 425 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_U_33;
#line 425 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_V_34;
#line 425 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__GeneratorPred_7;
#line 425 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__CollectorPred_8;
#line 438 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate2_6_p_4_env_0__succeeded;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__HeapPtr_11;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__TrailPtr_13;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar1_14;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar2_15;
#line 449 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate2_6_p_4_env_0__commit_0;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_4_env_0__Answer0_16;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_4_env_0__Answer_17;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_4_env_0__STATE_VARIABLE_Acc1_28_28;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_4_env_0__STATE_VARIABLE_Acc2_29_29;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_4_env_0__STATE_VARIABLE_Acc1_30_30;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_4_env_0__STATE_VARIABLE_Acc2_31_31;
#line 425 "solutions.m"
};

#line 422 "solutions.m"
struct mercury__solutions__builtin_aggregate2_6_p_3_env_0_s {
#line 422 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_T_32;
#line 422 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_U_33;
#line 422 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_V_34;
#line 422 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__GeneratorPred_7;
#line 422 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__CollectorPred_8;
#line 438 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate2_6_p_3_env_0__succeeded;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__HeapPtr_11;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__TrailPtr_13;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar1_14;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar2_15;
#line 449 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate2_6_p_3_env_0__commit_0;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_3_env_0__Answer0_16;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_3_env_0__Answer_17;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_3_env_0__STATE_VARIABLE_Acc1_28_28;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_3_env_0__STATE_VARIABLE_Acc2_29_29;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_3_env_0__STATE_VARIABLE_Acc1_30_30;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_3_env_0__STATE_VARIABLE_Acc2_31_31;
#line 422 "solutions.m"
};

#line 419 "solutions.m"
struct mercury__solutions__builtin_aggregate2_6_p_2_env_0_s {
#line 419 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_T_32;
#line 419 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_U_33;
#line 419 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_V_34;
#line 419 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__GeneratorPred_7;
#line 419 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__CollectorPred_8;
#line 438 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate2_6_p_2_env_0__succeeded;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__HeapPtr_11;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__TrailPtr_13;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar1_14;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar2_15;
#line 449 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate2_6_p_2_env_0__commit_0;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_2_env_0__Answer0_16;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_2_env_0__Answer_17;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_2_env_0__STATE_VARIABLE_Acc1_28_28;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_2_env_0__STATE_VARIABLE_Acc2_29_29;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_2_env_0__STATE_VARIABLE_Acc1_30_30;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_2_env_0__STATE_VARIABLE_Acc2_31_31;
#line 419 "solutions.m"
};

#line 416 "solutions.m"
struct mercury__solutions__builtin_aggregate2_6_p_1_env_0_s {
#line 416 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_T_32;
#line 416 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_U_33;
#line 416 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_V_34;
#line 416 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__GeneratorPred_7;
#line 416 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__CollectorPred_8;
#line 438 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate2_6_p_1_env_0__succeeded;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__HeapPtr_11;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__TrailPtr_13;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar1_14;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar2_15;
#line 449 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate2_6_p_1_env_0__commit_0;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_1_env_0__Answer0_16;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_1_env_0__Answer_17;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_1_env_0__STATE_VARIABLE_Acc1_28_28;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_1_env_0__STATE_VARIABLE_Acc2_29_29;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_1_env_0__STATE_VARIABLE_Acc1_30_30;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_1_env_0__STATE_VARIABLE_Acc2_31_31;
#line 416 "solutions.m"
};

#line 413 "solutions.m"
struct mercury__solutions__builtin_aggregate2_6_p_0_env_0_s {
#line 413 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_T_32;
#line 413 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_U_33;
#line 413 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_V_34;
#line 413 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__GeneratorPred_7;
#line 413 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__CollectorPred_8;
#line 438 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate2_6_p_0_env_0__succeeded;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__HeapPtr_11;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__TrailPtr_13;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar1_14;
#line 438 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar2_15;
#line 449 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate2_6_p_0_env_0__commit_0;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_0_env_0__Answer0_16;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_0_env_0__Answer_17;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_0_env_0__STATE_VARIABLE_Acc1_28_28;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_0_env_0__STATE_VARIABLE_Acc2_29_29;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_0_env_0__STATE_VARIABLE_Acc1_30_30;
#line 449 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate2_6_p_0_env_0__STATE_VARIABLE_Acc2_31_31;
#line 413 "solutions.m"
};

#line 310 "solutions.m"
struct mercury__solutions__builtin_aggregate_4_p_9_env_0_s {
#line 310 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_T_20;
#line 310 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_U_21;
#line 310 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_9_env_0__GeneratorPred_5;
#line 310 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_9_env_0__CollectorPred_6;
#line 365 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate_4_p_9_env_0__succeeded;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_9_env_0__HeapPtr_8;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_9_env_0__TrailPtr_10;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_9_env_0__Mutvar_11;
#line 376 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate_4_p_9_env_0__commit_0;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_9_env_0__Answer0_12;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_9_env_0__Answer_13;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_9_env_0__Acc0_14;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_9_env_0__Acc1_15;
#line 310 "solutions.m"
};

#line 308 "solutions.m"
struct mercury__solutions__builtin_aggregate_4_p_8_env_0_s {
#line 308 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_T_20;
#line 308 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_U_21;
#line 308 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_8_env_0__GeneratorPred_5;
#line 308 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_8_env_0__CollectorPred_6;
#line 365 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate_4_p_8_env_0__succeeded;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_8_env_0__HeapPtr_8;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_8_env_0__TrailPtr_10;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_8_env_0__Mutvar_11;
#line 376 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate_4_p_8_env_0__commit_0;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_8_env_0__Answer0_12;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_8_env_0__Answer_13;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_8_env_0__Acc0_14;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_8_env_0__Acc1_15;
#line 308 "solutions.m"
};

#line 306 "solutions.m"
struct mercury__solutions__builtin_aggregate_4_p_7_env_0_s {
#line 306 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_T_20;
#line 306 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_U_21;
#line 306 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_7_env_0__GeneratorPred_5;
#line 306 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_7_env_0__CollectorPred_6;
#line 365 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate_4_p_7_env_0__succeeded;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_7_env_0__HeapPtr_8;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_7_env_0__TrailPtr_10;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_7_env_0__Mutvar_11;
#line 376 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate_4_p_7_env_0__commit_0;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_7_env_0__Answer0_12;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_7_env_0__Answer_13;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_7_env_0__Acc0_14;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_7_env_0__Acc1_15;
#line 306 "solutions.m"
};

#line 304 "solutions.m"
struct mercury__solutions__builtin_aggregate_4_p_6_env_0_s {
#line 304 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_T_20;
#line 304 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_U_21;
#line 304 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_6_env_0__GeneratorPred_5;
#line 304 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_6_env_0__CollectorPred_6;
#line 365 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate_4_p_6_env_0__succeeded;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_6_env_0__HeapPtr_8;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_6_env_0__TrailPtr_10;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_6_env_0__Mutvar_11;
#line 376 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate_4_p_6_env_0__commit_0;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_6_env_0__Answer0_12;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_6_env_0__Answer_13;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_6_env_0__Acc0_14;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_6_env_0__Acc1_15;
#line 304 "solutions.m"
};

#line 302 "solutions.m"
struct mercury__solutions__builtin_aggregate_4_p_5_env_0_s {
#line 302 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_T_20;
#line 302 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_U_21;
#line 302 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_5_env_0__GeneratorPred_5;
#line 302 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_5_env_0__CollectorPred_6;
#line 365 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate_4_p_5_env_0__succeeded;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_5_env_0__HeapPtr_8;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_5_env_0__TrailPtr_10;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_5_env_0__Mutvar_11;
#line 376 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate_4_p_5_env_0__commit_0;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_5_env_0__Answer0_12;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_5_env_0__Answer_13;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_5_env_0__Acc0_14;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_5_env_0__Acc1_15;
#line 302 "solutions.m"
};

#line 300 "solutions.m"
struct mercury__solutions__builtin_aggregate_4_p_4_env_0_s {
#line 300 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_T_20;
#line 300 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_U_21;
#line 300 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_4_env_0__GeneratorPred_5;
#line 300 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_4_env_0__CollectorPred_6;
#line 365 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate_4_p_4_env_0__succeeded;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_4_env_0__HeapPtr_8;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_4_env_0__TrailPtr_10;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_4_env_0__Mutvar_11;
#line 376 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate_4_p_4_env_0__commit_0;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_4_env_0__Answer0_12;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_4_env_0__Answer_13;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_4_env_0__Acc0_14;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_4_env_0__Acc1_15;
#line 300 "solutions.m"
};

#line 298 "solutions.m"
struct mercury__solutions__builtin_aggregate_4_p_3_env_0_s {
#line 298 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_T_20;
#line 298 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_U_21;
#line 298 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_3_env_0__GeneratorPred_5;
#line 298 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_3_env_0__CollectorPred_6;
#line 365 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate_4_p_3_env_0__succeeded;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_3_env_0__HeapPtr_8;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_3_env_0__TrailPtr_10;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_3_env_0__Mutvar_11;
#line 376 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate_4_p_3_env_0__commit_0;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_3_env_0__Answer0_12;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_3_env_0__Answer_13;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_3_env_0__Acc0_14;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_3_env_0__Acc1_15;
#line 298 "solutions.m"
};

#line 296 "solutions.m"
struct mercury__solutions__builtin_aggregate_4_p_2_env_0_s {
#line 296 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_T_20;
#line 296 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_U_21;
#line 296 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_2_env_0__GeneratorPred_5;
#line 296 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_2_env_0__CollectorPred_6;
#line 365 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate_4_p_2_env_0__succeeded;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_2_env_0__HeapPtr_8;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_2_env_0__TrailPtr_10;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_2_env_0__Mutvar_11;
#line 376 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate_4_p_2_env_0__commit_0;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_2_env_0__Answer0_12;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_2_env_0__Answer_13;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_2_env_0__Acc0_14;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_2_env_0__Acc1_15;
#line 296 "solutions.m"
};

#line 294 "solutions.m"
struct mercury__solutions__builtin_aggregate_4_p_1_env_0_s {
#line 294 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_T_20;
#line 294 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_U_21;
#line 294 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_1_env_0__GeneratorPred_5;
#line 294 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_1_env_0__CollectorPred_6;
#line 365 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate_4_p_1_env_0__succeeded;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_1_env_0__HeapPtr_8;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_1_env_0__TrailPtr_10;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_1_env_0__Mutvar_11;
#line 376 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate_4_p_1_env_0__commit_0;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_1_env_0__Answer0_12;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_1_env_0__Answer_13;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_1_env_0__Acc0_14;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_1_env_0__Acc1_15;
#line 294 "solutions.m"
};

#line 292 "solutions.m"
struct mercury__solutions__builtin_aggregate_4_p_0_env_0_s {
#line 292 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_T_20;
#line 292 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_U_21;
#line 292 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_0_env_0__GeneratorPred_5;
#line 292 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_0_env_0__CollectorPred_6;
#line 365 "solutions.m"
  MR_bool mercury__solutions__builtin_aggregate_4_p_0_env_0__succeeded;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_0_env_0__HeapPtr_8;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_0_env_0__TrailPtr_10;
#line 365 "solutions.m"
  MR_Word mercury__solutions__builtin_aggregate_4_p_0_env_0__Mutvar_11;
#line 376 "solutions.m"
  jmp_buf mercury__solutions__builtin_aggregate_4_p_0_env_0__commit_0;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_0_env_0__Answer0_12;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_0_env_0__Answer_13;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_0_env_0__Acc0_14;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_aggregate_4_p_0_env_0__Acc1_15;
#line 292 "solutions.m"
};

#line 258 "solutions.m"
struct mercury__solutions__builtin_solutions_2_p_1_env_0_s {
#line 258 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_for_T_8;
#line 258 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_1_env_0__Generator_3;
#line 261 "solutions.m"
  MR_bool mercury__solutions__builtin_solutions_2_p_1_env_0__succeeded;
#line 261 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_13_13;
#line 261 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_1_env_0__HeapPtr_19;
#line 261 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_1_env_0__TrailPtr_21;
#line 261 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_1_env_0__Mutvar_22;
#line 376 "solutions.m"
  jmp_buf mercury__solutions__builtin_solutions_2_p_1_env_0__commit_0;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_solutions_2_p_1_env_0__Answer0_23;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_solutions_2_p_1_env_0__Answer_24;
#line 376 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_1_env_0__Acc0_25;
#line 376 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_1_env_0__Acc1_26;
#line 258 "solutions.m"
};

#line 256 "solutions.m"
struct mercury__solutions__builtin_solutions_2_p_0_env_0_s {
#line 256 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_for_T_8;
#line 256 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_0_env_0__Generator_3;
#line 261 "solutions.m"
  MR_bool mercury__solutions__builtin_solutions_2_p_0_env_0__succeeded;
#line 261 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_13_13;
#line 261 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_0_env_0__HeapPtr_19;
#line 261 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_0_env_0__TrailPtr_21;
#line 261 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_0_env_0__Mutvar_22;
#line 376 "solutions.m"
  jmp_buf mercury__solutions__builtin_solutions_2_p_0_env_0__commit_0;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_solutions_2_p_0_env_0__Answer0_23;
#line 376 "solutions.m"
  MR_Box mercury__solutions__builtin_solutions_2_p_0_env_0__Answer_24;
#line 376 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_0_env_0__Acc0_25;
#line 376 "solutions.m"
  MR_Word mercury__solutions__builtin_solutions_2_p_0_env_0__Acc1_26;
#line 256 "solutions.m"
};

#line 192 "solutions.m"
struct mercury__solutions__do_while_4_p_5_env_0_s {
#line 192 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T_21;
#line 192 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T2_22;
#line 192 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_5_env_0__GeneratorPred_5;
#line 192 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_5_env_0__CollectorPred_6;
#line 498 "solutions.m"
  MR_bool mercury__solutions__do_while_4_p_5_env_0__succeeded;
#line 498 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_5_env_0__HeapPtr_8;
#line 498 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_5_env_0__TrailPtr_10;
#line 498 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_5_env_0__Mutvar_11;
#line 503 "solutions.m"
  jmp_buf mercury__solutions__do_while_4_p_5_env_0__commit_0;
#line 503 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_5_env_0__Answer0_12;
#line 503 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_5_env_0__Answer_13;
#line 503 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_5_env_0__Acc0_14;
#line 503 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_5_env_0__More_15;
#line 503 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_5_env_0__Acc1_16;
#line 192 "solutions.m"
};

#line 190 "solutions.m"
struct mercury__solutions__do_while_4_p_4_env_0_s {
#line 190 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T_21;
#line 190 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T2_22;
#line 190 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_4_env_0__GeneratorPred_5;
#line 190 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_4_env_0__CollectorPred_6;
#line 498 "solutions.m"
  MR_bool mercury__solutions__do_while_4_p_4_env_0__succeeded;
#line 498 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_4_env_0__HeapPtr_8;
#line 498 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_4_env_0__TrailPtr_10;
#line 498 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_4_env_0__Mutvar_11;
#line 503 "solutions.m"
  jmp_buf mercury__solutions__do_while_4_p_4_env_0__commit_0;
#line 503 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_4_env_0__Answer0_12;
#line 503 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_4_env_0__Answer_13;
#line 503 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_4_env_0__Acc0_14;
#line 503 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_4_env_0__More_15;
#line 503 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_4_env_0__Acc1_16;
#line 190 "solutions.m"
};

#line 188 "solutions.m"
struct mercury__solutions__do_while_4_p_3_env_0_s {
#line 188 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T_21;
#line 188 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T2_22;
#line 188 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_3_env_0__GeneratorPred_5;
#line 188 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_3_env_0__CollectorPred_6;
#line 498 "solutions.m"
  MR_bool mercury__solutions__do_while_4_p_3_env_0__succeeded;
#line 498 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_3_env_0__HeapPtr_8;
#line 498 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_3_env_0__TrailPtr_10;
#line 498 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_3_env_0__Mutvar_11;
#line 503 "solutions.m"
  jmp_buf mercury__solutions__do_while_4_p_3_env_0__commit_0;
#line 503 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_3_env_0__Answer0_12;
#line 503 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_3_env_0__Answer_13;
#line 503 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_3_env_0__Acc0_14;
#line 503 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_3_env_0__More_15;
#line 503 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_3_env_0__Acc1_16;
#line 188 "solutions.m"
};

#line 186 "solutions.m"
struct mercury__solutions__do_while_4_p_2_env_0_s {
#line 186 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T_21;
#line 186 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T2_22;
#line 186 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_2_env_0__GeneratorPred_5;
#line 186 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_2_env_0__CollectorPred_6;
#line 498 "solutions.m"
  MR_bool mercury__solutions__do_while_4_p_2_env_0__succeeded;
#line 498 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_2_env_0__HeapPtr_8;
#line 498 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_2_env_0__TrailPtr_10;
#line 498 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_2_env_0__Mutvar_11;
#line 503 "solutions.m"
  jmp_buf mercury__solutions__do_while_4_p_2_env_0__commit_0;
#line 503 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_2_env_0__Answer0_12;
#line 503 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_2_env_0__Answer_13;
#line 503 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_2_env_0__Acc0_14;
#line 503 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_2_env_0__More_15;
#line 503 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_2_env_0__Acc1_16;
#line 186 "solutions.m"
};

#line 184 "solutions.m"
struct mercury__solutions__do_while_4_p_1_env_0_s {
#line 184 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T_21;
#line 184 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T2_22;
#line 184 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_1_env_0__GeneratorPred_5;
#line 184 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_1_env_0__CollectorPred_6;
#line 498 "solutions.m"
  MR_bool mercury__solutions__do_while_4_p_1_env_0__succeeded;
#line 498 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_1_env_0__HeapPtr_8;
#line 498 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_1_env_0__TrailPtr_10;
#line 498 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_1_env_0__Mutvar_11;
#line 503 "solutions.m"
  jmp_buf mercury__solutions__do_while_4_p_1_env_0__commit_0;
#line 503 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_1_env_0__Answer0_12;
#line 503 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_1_env_0__Answer_13;
#line 503 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_1_env_0__Acc0_14;
#line 503 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_1_env_0__More_15;
#line 503 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_1_env_0__Acc1_16;
#line 184 "solutions.m"
};

#line 182 "solutions.m"
struct mercury__solutions__do_while_4_p_0_env_0_s {
#line 182 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T_21;
#line 182 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T2_22;
#line 182 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_0_env_0__GeneratorPred_5;
#line 182 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_0_env_0__CollectorPred_6;
#line 498 "solutions.m"
  MR_bool mercury__solutions__do_while_4_p_0_env_0__succeeded;
#line 498 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_0_env_0__HeapPtr_8;
#line 498 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_0_env_0__TrailPtr_10;
#line 498 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_0_env_0__Mutvar_11;
#line 503 "solutions.m"
  jmp_buf mercury__solutions__do_while_4_p_0_env_0__commit_0;
#line 503 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_0_env_0__Answer0_12;
#line 503 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_0_env_0__Answer_13;
#line 503 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_0_env_0__Acc0_14;
#line 503 "solutions.m"
  MR_Word mercury__solutions__do_while_4_p_0_env_0__More_15;
#line 503 "solutions.m"
  MR_Box mercury__solutions__do_while_4_p_0_env_0__Acc1_16;
#line 182 "solutions.m"
};


#line 971 "solutions.c"
static const MR_Integer mercury__solutions__solutions__functor_number_map_trail_ptr_0[1];

#line 974 "solutions.c"
static const MR_NotagFunctorDesc mercury__solutions__solutions__notag_functor_desc_trail_ptr_0;

#line 977 "solutions.c"
static MR_bool MR_CALL 
mercury__solutions____Unify____heap_ptr_0_0_10001(
#line 980 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_1,
#line 982 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_2);

#line 985 "solutions.c"
static void MR_CALL 
mercury__solutions____Compare____heap_ptr_0_0_10001(
#line 988 "solutions.c"
  MR_Box * mercury__solutions__wrapper_arg_1,
#line 990 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_2,
#line 992 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_3);

#line 995 "solutions.c"
static MR_bool MR_CALL 
mercury__solutions____Unify____trail_ptr_0_0_10001(
#line 998 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_1,
#line 1000 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_2);

#line 1003 "solutions.c"
static void MR_CALL 
mercury__solutions____Compare____trail_ptr_0_0_10001(
#line 1006 "solutions.c"
  MR_Box * mercury__solutions__wrapper_arg_1,
#line 1008 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_2,
#line 1010 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_3);

#line 126 "list.int"
static void MR_CALL 
mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 126 "list.int"
  MR_Word mercury__solutions__V_18_18,
#line 126 "list.int"
  MR_Word mercury__solutions__HeadVar__2_2,
#line 126 "list.int"
  MR_Box mercury__solutions__HeadVar__3_3,
#line 126 "list.int"
  MR_Box * mercury__solutions__HeadVar__4_4);

#line 126 "list.int"
static void MR_CALL 
mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 126 "list.int"
  MR_Word mercury__solutions__V_18_18,
#line 126 "list.int"
  MR_Word mercury__solutions__HeadVar__2_2,
#line 126 "list.int"
  MR_Box mercury__solutions__HeadVar__3_3,
#line 126 "list.int"
  MR_Box * mercury__solutions__HeadVar__4_4);

#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 997 "solutions.m"
static void MR_CALL 
mercury__solutions__end_all_soln_neg_context_no_more_0_p_0(void);

#line 982 "solutions.m"
static void MR_CALL 
mercury__solutions__end_all_soln_neg_context_more_0_p_0(void);

#line 967 "solutions.m"
static void MR_CALL 
mercury__solutions__start_all_soln_neg_context_0_p_0(void);

#line 933 "solutions.m"
static void MR_CALL 
mercury__solutions__reset_solutions_heap_1_p_0(
#line 933 "solutions.m"
  MR_Word mercury__solutions__SolutionsHeapPtr_1);

#line 805 "solutions.m"
static void MR_CALL 
mercury__solutions__partial_deep_copy_3_p_2(
#line 805 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_4,
#line 805 "solutions.m"
  MR_Word mercury__solutions__HeadVar__1_1,
#line 805 "solutions.m"
  MR_Box mercury__solutions__HeadVar__2_2,
#line 805 "solutions.m"
  MR_Box * mercury__solutions__HeadVar__3_3);

#line 804 "solutions.m"
static void MR_CALL 
mercury__solutions__partial_deep_copy_3_p_1(
#line 804 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_4,
#line 804 "solutions.m"
  MR_Word mercury__solutions__HeadVar__1_1,
#line 804 "solutions.m"
  MR_Box mercury__solutions__HeadVar__2_2,
#line 804 "solutions.m"
  MR_Box * mercury__solutions__HeadVar__3_3);

#line 803 "solutions.m"
static void MR_CALL 
mercury__solutions__partial_deep_copy_3_p_0(
#line 803 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_4,
#line 803 "solutions.m"
  MR_Word mercury__solutions__HeadVar__1_1,
#line 803 "solutions.m"
  MR_Box mercury__solutions__HeadVar__2_2,
#line 803 "solutions.m"
  MR_Box * mercury__solutions__HeadVar__3_3);

#line 749 "solutions.m"
static void MR_CALL 
mercury__solutions__swap_heap_and_solutions_heap_0_p_0(void);

#line 712 "solutions.m"
static void MR_CALL 
mercury__solutions__discard_trail_ticket_0_p_0(void);

#line 674 "solutions.m"
static void MR_CALL 
mercury__solutions__check_for_floundering_1_p_0(
#line 674 "solutions.m"
  MR_Word mercury__solutions__TrailPtr_1);

#line 606 "solutions.m"
static void MR_CALL 
mercury__solutions__get_registers_3_p_0(
#line 606 "solutions.m"
  MR_Word * mercury__solutions__HeapPtr_1,
#line 606 "solutions.m"
  MR_Word * mercury__solutions__SolutionsHeapPtr_2,
#line 606 "solutions.m"
  MR_Word * mercury__solutions__TrailPtr_3);

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_7_1(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_7_2(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_7_3(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_6_1(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_6_2(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_6_3(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_5_1(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_5_2(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_5_3(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_4_1(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_4_2(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_4_3(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_3_1(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_3_2(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_3_3(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_2_1(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_2_2(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_2_3(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_1_1(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_1_2(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_1_3(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_0_1(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_0_2(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_0_3(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_9_1(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_9_2(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_9_3(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_8_1(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_8_2(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_8_3(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_7_1(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_7_2(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_7_3(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_6_1(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_6_2(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_6_3(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_5_1(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_5_2(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_5_3(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_4_1(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_4_2(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_4_3(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_3_1(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_3_2(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_3_3(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_2_1(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_2_2(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_2_3(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_1_1(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_1_2(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_1_3(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_0_1(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_0_2(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_0_3(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_1_1(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_1_2(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_1_3(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_0_1(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_0_2(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_0_3(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_5_1(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_5_2(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_5_3(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_4_1(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_4_2(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_4_3(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_3_1(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_3_2(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_3_3(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_2_1(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_2_2(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_2_3(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_1_1(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_1_2(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_1_3(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_0_1(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_0_2(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg);

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_0_3(
#line 503 "solutions.m"
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
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "version_array.mh"
#include "builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "char.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "float.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "time.mh"
#include "array.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "construct.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "type_desc.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "exception.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "store.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "math.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "version_array.mh"
#include "string.mh"
#include "array.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



#line 1761 "solutions.c"
const MR_TypeCtorInfo_Struct mercury__solutions__solutions__type_ctor_info_heap_ptr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__solutions____Unify____heap_ptr_0_0_10001)),
  ((MR_Box) (mercury__solutions____Compare____heap_ptr_0_0_10001)),
  (MR_String) "solutions",
  (MR_String) "heap_ptr",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__private_builtin__private_builtin__type_ctor_info_heap_pointer_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1778 "solutions.c"
static const MR_Integer mercury__solutions__solutions__functor_number_map_trail_ptr_0[1] = {
  (MR_Integer) 0
};

#line 1783 "solutions.c"
static const MR_NotagFunctorDesc mercury__solutions__solutions__notag_functor_desc_trail_ptr_0 = {
  (MR_String) "trail_ptr",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL
};

#line 1790 "solutions.c"
const MR_TypeCtorInfo_Struct mercury__solutions__solutions__type_ctor_info_trail_ptr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__solutions____Unify____trail_ptr_0_0_10001)),
  ((MR_Box) (mercury__solutions____Compare____trail_ptr_0_0_10001)),
  (MR_String) "solutions",
  (MR_String) "trail_ptr",
  {     &mercury__solutions__solutions__notag_functor_desc_trail_ptr_0 },
  {     &mercury__solutions__solutions__notag_functor_desc_trail_ptr_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__solutions__solutions__functor_number_map_trail_ptr_0
};

#line 1807 "solutions.c"
static MR_bool MR_CALL 
mercury__solutions____Unify____heap_ptr_0_0_10001(
#line 1810 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_1,
#line 1812 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_2)
#line 1814 "solutions.c"
{
#line 1816 "solutions.c"
  {
#line 1818 "solutions.c"
    MR_bool mercury__solutions__succeeded;

#line 1821 "solutions.c"
    {
#line 1823 "solutions.c"
      mercury__solutions__succeeded = mercury__solutions____Unify____heap_ptr_0_0(((MR_Word) mercury__solutions__wrapper_arg_1), ((MR_Word) mercury__solutions__wrapper_arg_2));
    }
#line 1826 "solutions.c"
    return mercury__solutions__succeeded;
#line 1828 "solutions.c"
  }
#line 1830 "solutions.c"
}

#line 1833 "solutions.c"
static void MR_CALL 
mercury__solutions____Compare____heap_ptr_0_0_10001(
#line 1836 "solutions.c"
  MR_Box * mercury__solutions__wrapper_arg_1,
#line 1838 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_2,
#line 1840 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_3)
#line 1842 "solutions.c"
{
#line 1844 "solutions.c"
  {
#line 1846 "solutions.c"
    MR_Word mercury__solutions__conv0_HeadVar__1_1;

#line 1849 "solutions.c"
    {
#line 1851 "solutions.c"
      mercury__solutions____Compare____heap_ptr_0_0(&mercury__solutions__conv0_HeadVar__1_1, ((MR_Word) mercury__solutions__wrapper_arg_2), ((MR_Word) mercury__solutions__wrapper_arg_3));
    }
#line 1854 "solutions.c"
    *mercury__solutions__wrapper_arg_1 = ((MR_Box) (mercury__solutions__conv0_HeadVar__1_1));
#line 1856 "solutions.c"
  }
#line 1858 "solutions.c"
}

#line 1861 "solutions.c"
static MR_bool MR_CALL 
mercury__solutions____Unify____trail_ptr_0_0_10001(
#line 1864 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_1,
#line 1866 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_2)
#line 1868 "solutions.c"
{
#line 1870 "solutions.c"
  {
#line 1872 "solutions.c"
    MR_bool mercury__solutions__succeeded;

#line 1875 "solutions.c"
    {
#line 1877 "solutions.c"
      mercury__solutions__succeeded = mercury__solutions____Unify____trail_ptr_0_0(((MR_Word) mercury__solutions__wrapper_arg_1), ((MR_Word) mercury__solutions__wrapper_arg_2));
    }
#line 1880 "solutions.c"
    return mercury__solutions__succeeded;
#line 1882 "solutions.c"
  }
#line 1884 "solutions.c"
}

#line 1887 "solutions.c"
static void MR_CALL 
mercury__solutions____Compare____trail_ptr_0_0_10001(
#line 1890 "solutions.c"
  MR_Box * mercury__solutions__wrapper_arg_1,
#line 1892 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_2,
#line 1894 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_3)
#line 1896 "solutions.c"
{
#line 1898 "solutions.c"
  {
#line 1900 "solutions.c"
    MR_Word mercury__solutions__conv0_HeadVar__1_1;

#line 1903 "solutions.c"
    {
#line 1905 "solutions.c"
      mercury__solutions____Compare____trail_ptr_0_0(&mercury__solutions__conv0_HeadVar__1_1, ((MR_Word) mercury__solutions__wrapper_arg_2), ((MR_Word) mercury__solutions__wrapper_arg_3));
    }
#line 1908 "solutions.c"
    *mercury__solutions__wrapper_arg_1 = ((MR_Box) (mercury__solutions__conv0_HeadVar__1_1));
#line 1910 "solutions.c"
  }
#line 1912 "solutions.c"
}

#line 126 "list.int"
static void MR_CALL 
mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 126 "list.int"
  MR_Word mercury__solutions__V_18_18,
#line 126 "list.int"
  MR_Word mercury__solutions__HeadVar__2_2,
#line 126 "list.int"
  MR_Box mercury__solutions__HeadVar__3_3,
#line 126 "list.int"
  MR_Box * mercury__solutions__HeadVar__4_4)
#line 126 "list.int"
{
#line 395 "list.opt"
  while (MR_TRUE)
#line 395 "list.opt"
    {
#line 395 "list.opt"
      /* tailcall optimized into a loop */
#line 395 "list.opt"
      {
#line 395 "list.opt"
        MR_bool mercury__solutions__succeeded;

#line 395 "list.opt"
        if ((mercury__solutions__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 395 "list.opt"
          *mercury__solutions__HeadVar__4_4 = mercury__solutions__HeadVar__3_3;
#line 395 "list.opt"
        else
#line 397 "list.opt"
          {
#line 397 "list.opt"
            MR_Box mercury__solutions__H_10_9 = (MR_hl_field(MR_mktag(1), mercury__solutions__HeadVar__2_2, (MR_Integer) 0));
#line 397 "list.opt"
            MR_Word mercury__solutions__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__solutions__HeadVar__2_2, (MR_Integer) 1)));
#line 397 "list.opt"
            MR_Box mercury__solutions__STATE_VARIABLE_A_15_15_13;
#line 233 "solutions.m"
            MR_Box MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__solutions__V_18_18, (MR_Integer) 1)));

#line 233 "solutions.m"
            {
#line 233 "solutions.m"
              mercury__solutions__STATE_VARIABLE_A_15_15_13 = mercury__solutions__func_0(((MR_Box) mercury__solutions__V_18_18), mercury__solutions__H_10_9, mercury__solutions__HeadVar__3_3);
            }
#line 399 "list.opt"
            /* direct tailcall eliminated */
#line 399 "list.opt"
            {
#line 399 "list.opt"
              MR_Word mercury__solutions__HeadVar__2__tmp_copy_2 = mercury__solutions__T_11_10;
#line 399 "list.opt"
              MR_Box mercury__solutions__HeadVar__3__tmp_copy_3 = mercury__solutions__STATE_VARIABLE_A_15_15_13;

#line 399 "list.opt"
              mercury__solutions__HeadVar__3_3 = mercury__solutions__HeadVar__3__tmp_copy_3;
#line 399 "list.opt"
              mercury__solutions__HeadVar__2_2 = mercury__solutions__HeadVar__2__tmp_copy_2;
#line 399 "list.opt"
            }
#line 399 "list.opt"
            continue;
#line 397 "list.opt"
          }
#line 395 "list.opt"
      }
#line 395 "list.opt"
      break;
#line 395 "list.opt"
    }
#line 126 "list.int"
}

#line 126 "list.int"
static void MR_CALL 
mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 126 "list.int"
  MR_Word mercury__solutions__V_18_18,
#line 126 "list.int"
  MR_Word mercury__solutions__HeadVar__2_2,
#line 126 "list.int"
  MR_Box mercury__solutions__HeadVar__3_3,
#line 126 "list.int"
  MR_Box * mercury__solutions__HeadVar__4_4)
#line 126 "list.int"
{
#line 395 "list.opt"
  while (MR_TRUE)
#line 395 "list.opt"
    {
#line 395 "list.opt"
      /* tailcall optimized into a loop */
#line 395 "list.opt"
      {
#line 395 "list.opt"
        MR_bool mercury__solutions__succeeded;

#line 395 "list.opt"
        if ((mercury__solutions__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 395 "list.opt"
          *mercury__solutions__HeadVar__4_4 = mercury__solutions__HeadVar__3_3;
#line 395 "list.opt"
        else
#line 397 "list.opt"
          {
#line 397 "list.opt"
            MR_Box mercury__solutions__H_10_9 = (MR_hl_field(MR_mktag(1), mercury__solutions__HeadVar__2_2, (MR_Integer) 0));
#line 397 "list.opt"
            MR_Word mercury__solutions__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__solutions__HeadVar__2_2, (MR_Integer) 1)));
#line 397 "list.opt"
            MR_Box mercury__solutions__STATE_VARIABLE_A_15_15_13;
#line 233 "solutions.m"
            MR_Box MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__solutions__V_18_18, (MR_Integer) 1)));

#line 233 "solutions.m"
            {
#line 233 "solutions.m"
              mercury__solutions__STATE_VARIABLE_A_15_15_13 = mercury__solutions__func_0(((MR_Box) mercury__solutions__V_18_18), mercury__solutions__H_10_9, mercury__solutions__HeadVar__3_3);
            }
#line 399 "list.opt"
            /* direct tailcall eliminated */
#line 399 "list.opt"
            {
#line 399 "list.opt"
              MR_Word mercury__solutions__HeadVar__2__tmp_copy_2 = mercury__solutions__T_11_10;
#line 399 "list.opt"
              MR_Box mercury__solutions__HeadVar__3__tmp_copy_3 = mercury__solutions__STATE_VARIABLE_A_15_15_13;

#line 399 "list.opt"
              mercury__solutions__HeadVar__3_3 = mercury__solutions__HeadVar__3__tmp_copy_3;
#line 399 "list.opt"
              mercury__solutions__HeadVar__2_2 = mercury__solutions__HeadVar__2__tmp_copy_2;
#line 399 "list.opt"
            }
#line 399 "list.opt"
            continue;
#line 397 "list.opt"
          }
#line 395 "list.opt"
      }
#line 395 "list.opt"
      break;
#line 395 "list.opt"
    }
#line 126 "list.int"
}

#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 16 "ops.opt"
{
#line 41 "ops.opt"
  {
#line 41 "ops.opt"
    MR_bool mercury__solutions__succeeded;

#line 41 "ops.opt"
    return (MR_Integer) 1200;
#line 41 "ops.opt"
  }
#line 16 "ops.opt"
}

#line 268 "solutions.m"
void MR_CALL 
mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_110_117_109_95_115_111_108_117_116_105_111_110_115_95_95_91_50_93_95_49_3_p_1(
#line 268 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_14,
#line 268 "solutions.m"
  MR_Word mercury__solutions__HeadVar__2_2,
#line 268 "solutions.m"
  MR_Word * mercury__solutions__List_3)
#line 268 "solutions.m"
{
#line 282 "solutions.m"
  {
#line 282 "solutions.m"
    MR_bool mercury__solutions__succeeded;

#line 282 "solutions.m"
    *mercury__solutions__List_3 = mercury__solutions__HeadVar__2_2;
#line 282 "solutions.m"
  }
#line 268 "solutions.m"
}

#line 266 "solutions.m"
void MR_CALL 
mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_110_117_109_95_115_111_108_117_116_105_111_110_115_95_95_91_50_93_95_48_3_p_0(
#line 266 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_14,
#line 266 "solutions.m"
  MR_Word mercury__solutions__HeadVar__2_2,
#line 266 "solutions.m"
  MR_Word * mercury__solutions__List_3)
#line 266 "solutions.m"
{
#line 278 "solutions.m"
  {
#line 278 "solutions.m"
    MR_bool mercury__solutions__succeeded;

#line 278 "solutions.m"
    if ((mercury__solutions__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 276 "solutions.m"
      {
#line 277 "solutions.m"
        {
#line 277 "solutions.m"
          mercury__require__unexpected_3_p_0((MR_String) "solutions", (MR_String) "predicate \140solutions.assert_num_solutions\'/3", (MR_String) "no solutions");
#line 277 "solutions.m"
          return;
        }
#line 276 "solutions.m"
      }
#line 278 "solutions.m"
    else
#line 280 "solutions.m"
      *mercury__solutions__List_3 = mercury__solutions__HeadVar__2_2;
#line 278 "solutions.m"
  }
#line 266 "solutions.m"
}

#line 599 "solutions.m"
void MR_CALL 
mercury__solutions____Compare____trail_ptr_0_0(
#line 599 "solutions.m"
  MR_Word * mercury__solutions__HeadVar__1_1,
#line 599 "solutions.m"
  MR_Word mercury__solutions__HeadVar__2_2,
#line 599 "solutions.m"
  MR_Word mercury__solutions__HeadVar__3_3)
#line 599 "solutions.m"
{
#line 599 "solutions.m"
  {
#line 599 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 599 "solutions.m"
    MR_Integer mercury__solutions__CastX_6 = (MR_Integer) mercury__solutions__HeadVar__2_2;
#line 599 "solutions.m"
    MR_Integer mercury__solutions__CastY_7 = (MR_Integer) mercury__solutions__HeadVar__3_3;

#line 599 "solutions.m"
    mercury__solutions__succeeded = (mercury__solutions__CastX_6 == mercury__solutions__CastY_7);
#line 599 "solutions.m"
    if (mercury__solutions__succeeded)
#line 2165 "solutions.c"
      *mercury__solutions__HeadVar__1_1 = (MR_Integer) 0;
#line 599 "solutions.m"
    else
#line 599 "solutions.m"
      {
#line 599 "solutions.m"
        MR_Word mercury__solutions__V_4_4 = (MR_Word) mercury__solutions__HeadVar__2_2;
#line 599 "solutions.m"
        MR_Word mercury__solutions__V_5_5 = (MR_Word) mercury__solutions__HeadVar__3_3;

#line 599 "solutions.m"
        {
#line 599 "solutions.m"
          mercury__builtin____Compare____c_pointer_0_0(mercury__solutions__HeadVar__1_1, mercury__solutions__V_4_4, mercury__solutions__V_5_5);
#line 599 "solutions.m"
          return;
        }
#line 599 "solutions.m"
      }
#line 599 "solutions.m"
  }
#line 599 "solutions.m"
}

#line 599 "solutions.m"
MR_bool MR_CALL 
mercury__solutions____Unify____trail_ptr_0_0(
#line 599 "solutions.m"
  MR_Word mercury__solutions__HeadVar__1_1,
#line 599 "solutions.m"
  MR_Word mercury__solutions__HeadVar__2_2)
#line 599 "solutions.m"
{
#line 599 "solutions.m"
  {
#line 599 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 599 "solutions.m"
    MR_Integer mercury__solutions__CastX_5 = (MR_Integer) mercury__solutions__HeadVar__1_1;
#line 599 "solutions.m"
    MR_Integer mercury__solutions__CastY_6 = (MR_Integer) mercury__solutions__HeadVar__2_2;

#line 599 "solutions.m"
    mercury__solutions__succeeded = (mercury__solutions__CastX_5 == mercury__solutions__CastY_6);
#line 599 "solutions.m"
    if (mercury__solutions__succeeded)
#line 599 "solutions.m"
      mercury__solutions__succeeded = MR_TRUE;
#line 599 "solutions.m"
    else
#line 599 "solutions.m"
      {
#line 599 "solutions.m"
        MR_Word mercury__solutions__V_3_3 = (MR_Word) mercury__solutions__HeadVar__1_1;
#line 599 "solutions.m"
        MR_Word mercury__solutions__V_4_4 = (MR_Word) mercury__solutions__HeadVar__2_2;

#line 2223 "solutions.c"
        {
#line 2225 "solutions.c"
          return mercury__solutions__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__solutions__V_3_3, mercury__solutions__V_4_4);
        }
#line 599 "solutions.m"
      }
#line 599 "solutions.m"
    return mercury__solutions__succeeded;
#line 599 "solutions.m"
  }
#line 599 "solutions.m"
}

#line 598 "solutions.m"
void MR_CALL 
mercury__solutions____Compare____heap_ptr_0_0(
#line 598 "solutions.m"
  MR_Word * mercury__solutions__HeadVar__1_1,
#line 598 "solutions.m"
  MR_Word mercury__solutions__HeadVar__2_2,
#line 598 "solutions.m"
  MR_Word mercury__solutions__HeadVar__3_3)
#line 598 "solutions.m"
{
#line 598 "solutions.m"
  {
#line 598 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 598 "solutions.m"
    MR_Word mercury__solutions__Cast_HeadVar1_4 = mercury__solutions__HeadVar__2_2;
#line 598 "solutions.m"
    MR_Word mercury__solutions__Cast_HeadVar2_5 = mercury__solutions__HeadVar__3_3;

#line 598 "solutions.m"
    {
#line 598 "solutions.m"
      mercury__private_builtin____Compare____heap_pointer_0_0(mercury__solutions__HeadVar__1_1, mercury__solutions__Cast_HeadVar1_4, mercury__solutions__Cast_HeadVar2_5);
#line 598 "solutions.m"
      return;
    }
#line 598 "solutions.m"
  }
#line 598 "solutions.m"
}

#line 598 "solutions.m"
MR_bool MR_CALL 
mercury__solutions____Unify____heap_ptr_0_0(
#line 598 "solutions.m"
  MR_Word mercury__solutions__HeadVar__1_1,
#line 598 "solutions.m"
  MR_Word mercury__solutions__HeadVar__2_2)
#line 598 "solutions.m"
{
#line 598 "solutions.m"
  {
#line 598 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 598 "solutions.m"
    MR_Word mercury__solutions__Cast_HeadVar1_3 = mercury__solutions__HeadVar__1_1;
#line 598 "solutions.m"
    MR_Word mercury__solutions__Cast_HeadVar2_4 = mercury__solutions__HeadVar__2_2;

#line 598 "solutions.m"
    {
#line 598 "solutions.m"
      return mercury__solutions__succeeded = mercury__private_builtin____Unify____heap_pointer_0_0(mercury__solutions__Cast_HeadVar1_3, mercury__solutions__Cast_HeadVar2_4);
    }
#line 598 "solutions.m"
    return mercury__solutions__succeeded;
#line 598 "solutions.m"
  }
#line 598 "solutions.m"
}

#line 997 "solutions.m"
static void MR_CALL 
mercury__solutions__end_all_soln_neg_context_no_more_0_p_0(void)
#line 997 "solutions.m"
{
#line 999 "solutions.m"
  {
#line 999 "solutions.m"
    MR_bool mercury__solutions__succeeded;

#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__end_all_soln_neg_context_no_more_0_p_0


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 2321 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 999 "solutions.m"
  }
#line 997 "solutions.m"
}

#line 982 "solutions.m"
static void MR_CALL 
mercury__solutions__end_all_soln_neg_context_more_0_p_0(void)
#line 982 "solutions.m"
{
#line 984 "solutions.m"
  {
#line 984 "solutions.m"
    MR_bool mercury__solutions__succeeded;

#line 989 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__end_all_soln_neg_context_more_0_p_0


		{
#line 989 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif

#line 2354 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 989 "solutions.m"
}
#line 984 "solutions.m"
  }
#line 982 "solutions.m"
}

#line 967 "solutions.m"
static void MR_CALL 
mercury__solutions__start_all_soln_neg_context_0_p_0(void)
#line 967 "solutions.m"
{
#line 969 "solutions.m"
  {
#line 969 "solutions.m"
    MR_bool mercury__solutions__succeeded;

#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__start_all_soln_neg_context_0_p_0


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 2387 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 969 "solutions.m"
  }
#line 967 "solutions.m"
}

#line 933 "solutions.m"
static void MR_CALL 
mercury__solutions__reset_solutions_heap_1_p_0(
#line 933 "solutions.m"
  MR_Word mercury__solutions__SolutionsHeapPtr_1)
#line 933 "solutions.m"
{
#line 935 "solutions.m"
  {
#line 935 "solutions.m"
    MR_bool mercury__solutions__succeeded;

#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__reset_solutions_heap_1_p_0

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_1 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 2424 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 935 "solutions.m"
  }
#line 933 "solutions.m"
}

#line 805 "solutions.m"
static void MR_CALL 
mercury__solutions__partial_deep_copy_3_p_2(
#line 805 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_4,
#line 805 "solutions.m"
  MR_Word mercury__solutions__HeadVar__1_1,
#line 805 "solutions.m"
  MR_Box mercury__solutions__HeadVar__2_2,
#line 805 "solutions.m"
  MR_Box * mercury__solutions__HeadVar__3_3)
#line 805 "solutions.m"
{
#line 836 "solutions.m"
  {
#line 836 "solutions.m"
    MR_bool mercury__solutions__succeeded;

#line 839 "solutions.m"
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
#line 839 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 2470 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__HeadVar__3_3  = (MR_Box) NewVal;
#line 839 "solutions.m"
}
#line 836 "solutions.m"
  }
#line 805 "solutions.m"
}

#line 804 "solutions.m"
static void MR_CALL 
mercury__solutions__partial_deep_copy_3_p_1(
#line 804 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_4,
#line 804 "solutions.m"
  MR_Word mercury__solutions__HeadVar__1_1,
#line 804 "solutions.m"
  MR_Box mercury__solutions__HeadVar__2_2,
#line 804 "solutions.m"
  MR_Box * mercury__solutions__HeadVar__3_3)
#line 804 "solutions.m"
{
#line 842 "solutions.m"
  {
#line 842 "solutions.m"
    MR_bool mercury__solutions__succeeded;

#line 845 "solutions.m"
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
#line 845 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 2517 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__HeadVar__3_3  = (MR_Box) NewVal;
#line 845 "solutions.m"
}
#line 842 "solutions.m"
  }
#line 804 "solutions.m"
}

#line 803 "solutions.m"
static void MR_CALL 
mercury__solutions__partial_deep_copy_3_p_0(
#line 803 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_4,
#line 803 "solutions.m"
  MR_Word mercury__solutions__HeadVar__1_1,
#line 803 "solutions.m"
  MR_Box mercury__solutions__HeadVar__2_2,
#line 803 "solutions.m"
  MR_Box * mercury__solutions__HeadVar__3_3)
#line 803 "solutions.m"
{
#line 848 "solutions.m"
  {
#line 848 "solutions.m"
    MR_bool mercury__solutions__succeeded;

#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 2564 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__HeadVar__3_3  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 848 "solutions.m"
  }
#line 803 "solutions.m"
}

#line 749 "solutions.m"
static void MR_CALL 
mercury__solutions__swap_heap_and_solutions_heap_0_p_0(void)
#line 749 "solutions.m"
{
#line 751 "solutions.m"
  {
#line 751 "solutions.m"
    MR_bool mercury__solutions__succeeded;

#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__swap_heap_and_solutions_heap_0_p_0


		{
#line 754 "solutions.m"
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
#line 2606 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 751 "solutions.m"
  }
#line 749 "solutions.m"
}

#line 712 "solutions.m"
static void MR_CALL 
mercury__solutions__discard_trail_ticket_0_p_0(void)
#line 712 "solutions.m"
{
#line 714 "solutions.m"
  {
#line 714 "solutions.m"
    MR_bool mercury__solutions__succeeded;

#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__discard_trail_ticket_0_p_0


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 2639 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 714 "solutions.m"
  }
#line 712 "solutions.m"
}

#line 674 "solutions.m"
static void MR_CALL 
mercury__solutions__check_for_floundering_1_p_0(
#line 674 "solutions.m"
  MR_Word mercury__solutions__TrailPtr_1)
#line 674 "solutions.m"
{
#line 676 "solutions.m"
  {
#line 676 "solutions.m"
    MR_bool mercury__solutions__succeeded;

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__check_for_floundering_1_p_0

	MR_Word TrailPtr;

	TrailPtr =  mercury__solutions__TrailPtr_1 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 2677 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 676 "solutions.m"
  }
#line 674 "solutions.m"
}

#line 606 "solutions.m"
static void MR_CALL 
mercury__solutions__get_registers_3_p_0(
#line 606 "solutions.m"
  MR_Word * mercury__solutions__HeapPtr_1,
#line 606 "solutions.m"
  MR_Word * mercury__solutions__SolutionsHeapPtr_2,
#line 606 "solutions.m"
  MR_Word * mercury__solutions__TrailPtr_3)
#line 606 "solutions.m"
{
#line 609 "solutions.m"
  {
#line 609 "solutions.m"
    MR_bool mercury__solutions__succeeded;

#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__get_registers_3_p_0

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 2730 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__HeapPtr_1  = HeapPtr;
	 *mercury__solutions__SolutionsHeapPtr_2  = SolutionsHeapPtr;
	 *mercury__solutions__TrailPtr_3  = TrailPtr;
#line 612 "solutions.m"
}
#line 609 "solutions.m"
  }
#line 606 "solutions.m"
}

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_7_1(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 449 "solutions.m"
{
#line 449 "solutions.m"
  {
#line 449 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_7_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_7_env_0_s *) mercury__solutions__env_ptr_arg;

#line 449 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__commit_0, 1);
#line 449 "solutions.m"
  }
#line 449 "solutions.m"
}

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_7_2(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 449 "solutions.m"
{
#line 449 "solutions.m"
  {
#line 449 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_7_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_7_env_0_s *) mercury__solutions__env_ptr_arg;

#line 449 "solutions.m"
    {
#line 594 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__TrailPtr_13 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 2795 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7


		{
#line 754 "solutions.m"
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
#line 2821 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 839 "solutions.m"
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
#line 839 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 2844 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__Answer_17  = (MR_Box) NewVal;
#line 839 "solutions.m"
}
#line 458 "solutions.m"
      {
#line 458 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar1_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__STATE_VARIABLE_Acc1_28_28);
      }
#line 459 "solutions.m"
      {
#line 459 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar2_15, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__STATE_VARIABLE_Acc2_29_29);
      }
#line 594 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__CollectorPred_8, (MR_Integer) 1)));
#line 594 "solutions.m"
      {
#line 594 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__CollectorPred_8), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__Answer_17, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__STATE_VARIABLE_Acc1_28_28, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__STATE_VARIABLE_Acc1_30_30, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__STATE_VARIABLE_Acc2_29_29, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 595 "solutions.m"
      {
#line 595 "solutions.m"
        mercury__builtin__impure_true_0_p_0();
      }
#line 461 "solutions.m"
      {
#line 461 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar1_14, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__STATE_VARIABLE_Acc1_30_30);
      }
#line 462 "solutions.m"
      {
#line 462 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar2_15, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7


		{
#line 754 "solutions.m"
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
#line 2903 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 468 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__succeeded = MR_FALSE;
#line 468 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__succeeded)
#line 468 "solutions.m"
        {
#line 468 "solutions.m"
          mercury__solutions__builtin_aggregate2_6_p_7_1(mercury__solutions__env_ptr);
#line 468 "solutions.m"
          return;
        }
#line 449 "solutions.m"
    }
#line 449 "solutions.m"
  }
#line 449 "solutions.m"
}

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_7_3(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 449 "solutions.m"
{
#line 449 "solutions.m"
  {
#line 449 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_7_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_7_env_0_s *) mercury__solutions__env_ptr_arg;

#line 449 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__commit_0) == 0)
#line 449 "solutions.m"
      {
#line 449 "solutions.m"
        {
#line 449 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__GeneratorPred_7, (MR_Integer) 1)));

#line 449 "solutions.m"
          {
#line 449 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__GeneratorPred_7), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__Answer0_16, mercury__solutions__builtin_aggregate2_6_p_7_2, mercury__solutions__env_ptr);
          }
#line 449 "solutions.m"
        }
#line 449 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__succeeded = MR_FALSE;
#line 449 "solutions.m"
      }
#line 449 "solutions.m"
    else
#line 449 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__succeeded = MR_TRUE;
#line 449 "solutions.m"
  }
#line 449 "solutions.m"
}

#line 434 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_7(
#line 434 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_32,
#line 434 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_33,
#line 434 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_34,
#line 434 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_7,
#line 434 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_8,
#line 434 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_0_20,
#line 434 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator1_21,
#line 434 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_0_22,
#line 434 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator2_23)
#line 434 "solutions.m"
{
#line 434 "solutions.m"
  {
#line 434 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_7_env_0_s mercury__solutions__env;

#line 434 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_T_32 = mercury__solutions__TypeInfo_for_T_32;
#line 434 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_U_33 = mercury__solutions__TypeInfo_for_U_33;
#line 434 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_V_34 = mercury__solutions__TypeInfo_for_V_34;
#line 434 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__GeneratorPred_7 = mercury__solutions__GeneratorPred_7;
#line 434 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__CollectorPred_8 = mercury__solutions__CollectorPred_8;
#line 438 "solutions.m"
    {
#line 438 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_12;

#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 3037 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__HeapPtr_11  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_12  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TrailPtr_13  = TrailPtr;
#line 612 "solutions.m"
}
#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 3058 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 444 "solutions.m"
      {
#line 444 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_U_33, mercury__solutions__STATE_VARIABLE_Accumulator1_0_20, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar1_14);
      }
#line 445 "solutions.m"
      {
#line 445 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_V_34, mercury__solutions__STATE_VARIABLE_Accumulator2_0_22, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar2_15);
      }
#line 449 "solutions.m"
      {
#line 449 "solutions.m"
        mercury__solutions__builtin_aggregate2_6_p_7_3(&mercury__solutions__env);
      }
#line 469 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__succeeded))
#line 471 "solutions.m"
        {
#line 471 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_24_24;
#line 471 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_25_25;

#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 3100 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 477 "solutions.m"
          {
#line 477 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_U_33, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar1_14, &mercury__solutions__STATE_VARIABLE_Accumulator1_24_24);
          }
#line 478 "solutions.m"
          {
#line 478 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_V_34, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar2_15, &mercury__solutions__STATE_VARIABLE_Accumulator2_25_25);
          }
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 3133 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator1_21  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 3157 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator2_23  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 3178 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 3196 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 471 "solutions.m"
        }
#line 438 "solutions.m"
    }
#line 434 "solutions.m"
  }
#line 434 "solutions.m"
}

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_6_1(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 449 "solutions.m"
{
#line 449 "solutions.m"
  {
#line 449 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_6_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_6_env_0_s *) mercury__solutions__env_ptr_arg;

#line 449 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__commit_0, 1);
#line 449 "solutions.m"
  }
#line 449 "solutions.m"
}

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_6_2(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 449 "solutions.m"
{
#line 449 "solutions.m"
  {
#line 449 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_6_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_6_env_0_s *) mercury__solutions__env_ptr_arg;

#line 449 "solutions.m"
    {
#line 590 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__TrailPtr_13 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 3262 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6


		{
#line 754 "solutions.m"
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
#line 3288 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 839 "solutions.m"
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
#line 839 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 3311 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__Answer_17  = (MR_Box) NewVal;
#line 839 "solutions.m"
}
#line 458 "solutions.m"
      {
#line 458 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar1_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__STATE_VARIABLE_Acc1_28_28);
      }
#line 459 "solutions.m"
      {
#line 459 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar2_15, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__STATE_VARIABLE_Acc2_29_29);
      }
#line 590 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__CollectorPred_8, (MR_Integer) 1)));
#line 590 "solutions.m"
      {
#line 590 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__CollectorPred_8), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__Answer_17, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__STATE_VARIABLE_Acc1_28_28, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__STATE_VARIABLE_Acc1_30_30, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__STATE_VARIABLE_Acc2_29_29, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 461 "solutions.m"
      {
#line 461 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar1_14, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__STATE_VARIABLE_Acc1_30_30);
      }
#line 462 "solutions.m"
      {
#line 462 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar2_15, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6


		{
#line 754 "solutions.m"
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
#line 3365 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 468 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__succeeded = MR_FALSE;
#line 468 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__succeeded)
#line 468 "solutions.m"
        {
#line 468 "solutions.m"
          mercury__solutions__builtin_aggregate2_6_p_6_1(mercury__solutions__env_ptr);
#line 468 "solutions.m"
          return;
        }
#line 449 "solutions.m"
    }
#line 449 "solutions.m"
  }
#line 449 "solutions.m"
}

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_6_3(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 449 "solutions.m"
{
#line 449 "solutions.m"
  {
#line 449 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_6_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_6_env_0_s *) mercury__solutions__env_ptr_arg;

#line 449 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__commit_0) == 0)
#line 449 "solutions.m"
      {
#line 449 "solutions.m"
        {
#line 449 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__GeneratorPred_7, (MR_Integer) 1)));

#line 449 "solutions.m"
          {
#line 449 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__GeneratorPred_7), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__Answer0_16, mercury__solutions__builtin_aggregate2_6_p_6_2, mercury__solutions__env_ptr);
          }
#line 449 "solutions.m"
        }
#line 449 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__succeeded = MR_FALSE;
#line 449 "solutions.m"
      }
#line 449 "solutions.m"
    else
#line 449 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__succeeded = MR_TRUE;
#line 449 "solutions.m"
  }
#line 449 "solutions.m"
}

#line 431 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_6(
#line 431 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_32,
#line 431 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_33,
#line 431 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_34,
#line 431 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_7,
#line 431 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_8,
#line 431 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_0_20,
#line 431 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator1_21,
#line 431 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_0_22,
#line 431 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator2_23)
#line 431 "solutions.m"
{
#line 431 "solutions.m"
  {
#line 431 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_6_env_0_s mercury__solutions__env;

#line 431 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_T_32 = mercury__solutions__TypeInfo_for_T_32;
#line 431 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_U_33 = mercury__solutions__TypeInfo_for_U_33;
#line 431 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_V_34 = mercury__solutions__TypeInfo_for_V_34;
#line 431 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__GeneratorPred_7 = mercury__solutions__GeneratorPred_7;
#line 431 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__CollectorPred_8 = mercury__solutions__CollectorPred_8;
#line 438 "solutions.m"
    {
#line 438 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_12;

#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 3499 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__HeapPtr_11  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_12  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TrailPtr_13  = TrailPtr;
#line 612 "solutions.m"
}
#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 3520 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 444 "solutions.m"
      {
#line 444 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_U_33, mercury__solutions__STATE_VARIABLE_Accumulator1_0_20, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar1_14);
      }
#line 445 "solutions.m"
      {
#line 445 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_V_34, mercury__solutions__STATE_VARIABLE_Accumulator2_0_22, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar2_15);
      }
#line 449 "solutions.m"
      {
#line 449 "solutions.m"
        mercury__solutions__builtin_aggregate2_6_p_6_3(&mercury__solutions__env);
      }
#line 469 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__succeeded))
#line 471 "solutions.m"
        {
#line 471 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_24_24;
#line 471 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_25_25;

#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 3562 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 477 "solutions.m"
          {
#line 477 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_U_33, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar1_14, &mercury__solutions__STATE_VARIABLE_Accumulator1_24_24);
          }
#line 478 "solutions.m"
          {
#line 478 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_V_34, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar2_15, &mercury__solutions__STATE_VARIABLE_Accumulator2_25_25);
          }
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 3595 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator1_21  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 3619 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator2_23  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 3640 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 3658 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 471 "solutions.m"
        }
#line 438 "solutions.m"
    }
#line 431 "solutions.m"
  }
#line 431 "solutions.m"
}

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_5_1(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 449 "solutions.m"
{
#line 449 "solutions.m"
  {
#line 449 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_5_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_5_env_0_s *) mercury__solutions__env_ptr_arg;

#line 449 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__commit_0, 1);
#line 449 "solutions.m"
  }
#line 449 "solutions.m"
}

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_5_2(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 449 "solutions.m"
{
#line 449 "solutions.m"
  {
#line 449 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_5_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_5_env_0_s *) mercury__solutions__env_ptr_arg;

#line 449 "solutions.m"
    {
#line 585 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__TrailPtr_13 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 3724 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5


		{
#line 754 "solutions.m"
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
#line 3750 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 839 "solutions.m"
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
#line 839 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 3773 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__Answer_17  = (MR_Box) NewVal;
#line 839 "solutions.m"
}
#line 458 "solutions.m"
      {
#line 458 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar1_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__STATE_VARIABLE_Acc1_28_28);
      }
#line 459 "solutions.m"
      {
#line 459 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar2_15, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__STATE_VARIABLE_Acc2_29_29);
      }
#line 585 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__CollectorPred_8, (MR_Integer) 1)));
#line 585 "solutions.m"
      {
#line 585 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__CollectorPred_8), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__Answer_17, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__STATE_VARIABLE_Acc1_28_28, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__STATE_VARIABLE_Acc1_30_30, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__STATE_VARIABLE_Acc2_29_29, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 586 "solutions.m"
      {
#line 586 "solutions.m"
        mercury__builtin__impure_true_0_p_0();
      }
#line 461 "solutions.m"
      {
#line 461 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar1_14, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__STATE_VARIABLE_Acc1_30_30);
      }
#line 462 "solutions.m"
      {
#line 462 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar2_15, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5


		{
#line 754 "solutions.m"
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
#line 3832 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 468 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__succeeded = MR_FALSE;
#line 468 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__succeeded)
#line 468 "solutions.m"
        {
#line 468 "solutions.m"
          mercury__solutions__builtin_aggregate2_6_p_5_1(mercury__solutions__env_ptr);
#line 468 "solutions.m"
          return;
        }
#line 449 "solutions.m"
    }
#line 449 "solutions.m"
  }
#line 449 "solutions.m"
}

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_5_3(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 449 "solutions.m"
{
#line 449 "solutions.m"
  {
#line 449 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_5_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_5_env_0_s *) mercury__solutions__env_ptr_arg;

#line 449 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__commit_0) == 0)
#line 449 "solutions.m"
      {
#line 449 "solutions.m"
        {
#line 449 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__GeneratorPred_7, (MR_Integer) 1)));

#line 449 "solutions.m"
          {
#line 449 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__GeneratorPred_7), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__Answer0_16, mercury__solutions__builtin_aggregate2_6_p_5_2, mercury__solutions__env_ptr);
          }
#line 449 "solutions.m"
        }
#line 449 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__succeeded = MR_FALSE;
#line 449 "solutions.m"
      }
#line 449 "solutions.m"
    else
#line 449 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__succeeded = MR_TRUE;
#line 449 "solutions.m"
  }
#line 449 "solutions.m"
}

#line 428 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_5(
#line 428 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_32,
#line 428 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_33,
#line 428 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_34,
#line 428 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_7,
#line 428 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_8,
#line 428 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_0_20,
#line 428 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator1_21,
#line 428 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_0_22,
#line 428 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator2_23)
#line 428 "solutions.m"
{
#line 428 "solutions.m"
  {
#line 428 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_5_env_0_s mercury__solutions__env;

#line 428 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_T_32 = mercury__solutions__TypeInfo_for_T_32;
#line 428 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_U_33 = mercury__solutions__TypeInfo_for_U_33;
#line 428 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_V_34 = mercury__solutions__TypeInfo_for_V_34;
#line 428 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__GeneratorPred_7 = mercury__solutions__GeneratorPred_7;
#line 428 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__CollectorPred_8 = mercury__solutions__CollectorPred_8;
#line 438 "solutions.m"
    {
#line 438 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_12;

#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 3966 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__HeapPtr_11  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_12  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TrailPtr_13  = TrailPtr;
#line 612 "solutions.m"
}
#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 3987 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 444 "solutions.m"
      {
#line 444 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_U_33, mercury__solutions__STATE_VARIABLE_Accumulator1_0_20, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar1_14);
      }
#line 445 "solutions.m"
      {
#line 445 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_V_34, mercury__solutions__STATE_VARIABLE_Accumulator2_0_22, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar2_15);
      }
#line 449 "solutions.m"
      {
#line 449 "solutions.m"
        mercury__solutions__builtin_aggregate2_6_p_5_3(&mercury__solutions__env);
      }
#line 469 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__succeeded))
#line 471 "solutions.m"
        {
#line 471 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_24_24;
#line 471 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_25_25;

#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 4029 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 477 "solutions.m"
          {
#line 477 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_U_33, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar1_14, &mercury__solutions__STATE_VARIABLE_Accumulator1_24_24);
          }
#line 478 "solutions.m"
          {
#line 478 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_V_34, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar2_15, &mercury__solutions__STATE_VARIABLE_Accumulator2_25_25);
          }
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 4062 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator1_21  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 4086 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator2_23  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 4107 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 4125 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 471 "solutions.m"
        }
#line 438 "solutions.m"
    }
#line 428 "solutions.m"
  }
#line 428 "solutions.m"
}

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_4_1(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 449 "solutions.m"
{
#line 449 "solutions.m"
  {
#line 449 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_4_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_4_env_0_s *) mercury__solutions__env_ptr_arg;

#line 449 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__commit_0, 1);
#line 449 "solutions.m"
  }
#line 449 "solutions.m"
}

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_4_2(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 449 "solutions.m"
{
#line 449 "solutions.m"
  {
#line 449 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_4_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_4_env_0_s *) mercury__solutions__env_ptr_arg;

#line 449 "solutions.m"
    {
#line 581 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__TrailPtr_13 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 4191 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4


		{
#line 754 "solutions.m"
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
#line 4217 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 839 "solutions.m"
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
#line 839 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 4240 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__Answer_17  = (MR_Box) NewVal;
#line 839 "solutions.m"
}
#line 458 "solutions.m"
      {
#line 458 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar1_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__STATE_VARIABLE_Acc1_28_28);
      }
#line 459 "solutions.m"
      {
#line 459 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar2_15, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__STATE_VARIABLE_Acc2_29_29);
      }
#line 581 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__CollectorPred_8, (MR_Integer) 1)));
#line 581 "solutions.m"
      {
#line 581 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__CollectorPred_8), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__Answer_17, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__STATE_VARIABLE_Acc1_28_28, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__STATE_VARIABLE_Acc1_30_30, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__STATE_VARIABLE_Acc2_29_29, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 461 "solutions.m"
      {
#line 461 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar1_14, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__STATE_VARIABLE_Acc1_30_30);
      }
#line 462 "solutions.m"
      {
#line 462 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar2_15, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4


		{
#line 754 "solutions.m"
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
#line 4294 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 468 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__succeeded = MR_FALSE;
#line 468 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__succeeded)
#line 468 "solutions.m"
        {
#line 468 "solutions.m"
          mercury__solutions__builtin_aggregate2_6_p_4_1(mercury__solutions__env_ptr);
#line 468 "solutions.m"
          return;
        }
#line 449 "solutions.m"
    }
#line 449 "solutions.m"
  }
#line 449 "solutions.m"
}

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_4_3(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 449 "solutions.m"
{
#line 449 "solutions.m"
  {
#line 449 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_4_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_4_env_0_s *) mercury__solutions__env_ptr_arg;

#line 449 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__commit_0) == 0)
#line 449 "solutions.m"
      {
#line 449 "solutions.m"
        {
#line 449 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__GeneratorPred_7, (MR_Integer) 1)));

#line 449 "solutions.m"
          {
#line 449 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__GeneratorPred_7), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__Answer0_16, mercury__solutions__builtin_aggregate2_6_p_4_2, mercury__solutions__env_ptr);
          }
#line 449 "solutions.m"
        }
#line 449 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__succeeded = MR_FALSE;
#line 449 "solutions.m"
      }
#line 449 "solutions.m"
    else
#line 449 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__succeeded = MR_TRUE;
#line 449 "solutions.m"
  }
#line 449 "solutions.m"
}

#line 425 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_4(
#line 425 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_32,
#line 425 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_33,
#line 425 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_34,
#line 425 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_7,
#line 425 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_8,
#line 425 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_0_20,
#line 425 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator1_21,
#line 425 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_0_22,
#line 425 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator2_23)
#line 425 "solutions.m"
{
#line 425 "solutions.m"
  {
#line 425 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_4_env_0_s mercury__solutions__env;

#line 425 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_T_32 = mercury__solutions__TypeInfo_for_T_32;
#line 425 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_U_33 = mercury__solutions__TypeInfo_for_U_33;
#line 425 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_V_34 = mercury__solutions__TypeInfo_for_V_34;
#line 425 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__GeneratorPred_7 = mercury__solutions__GeneratorPred_7;
#line 425 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__CollectorPred_8 = mercury__solutions__CollectorPred_8;
#line 438 "solutions.m"
    {
#line 438 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_12;

#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 4428 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__HeapPtr_11  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_12  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TrailPtr_13  = TrailPtr;
#line 612 "solutions.m"
}
#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 4449 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 444 "solutions.m"
      {
#line 444 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_U_33, mercury__solutions__STATE_VARIABLE_Accumulator1_0_20, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar1_14);
      }
#line 445 "solutions.m"
      {
#line 445 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_V_34, mercury__solutions__STATE_VARIABLE_Accumulator2_0_22, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar2_15);
      }
#line 449 "solutions.m"
      {
#line 449 "solutions.m"
        mercury__solutions__builtin_aggregate2_6_p_4_3(&mercury__solutions__env);
      }
#line 469 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__succeeded))
#line 471 "solutions.m"
        {
#line 471 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_24_24;
#line 471 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_25_25;

#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 4491 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 477 "solutions.m"
          {
#line 477 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_U_33, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar1_14, &mercury__solutions__STATE_VARIABLE_Accumulator1_24_24);
          }
#line 478 "solutions.m"
          {
#line 478 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_V_34, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar2_15, &mercury__solutions__STATE_VARIABLE_Accumulator2_25_25);
          }
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 4524 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator1_21  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 4548 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator2_23  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 4569 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 4587 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 471 "solutions.m"
        }
#line 438 "solutions.m"
    }
#line 425 "solutions.m"
  }
#line 425 "solutions.m"
}

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_3_1(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 449 "solutions.m"
{
#line 449 "solutions.m"
  {
#line 449 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_3_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_3_env_0_s *) mercury__solutions__env_ptr_arg;

#line 449 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__commit_0, 1);
#line 449 "solutions.m"
  }
#line 449 "solutions.m"
}

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_3_2(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 449 "solutions.m"
{
#line 449 "solutions.m"
  {
#line 449 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_3_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_3_env_0_s *) mercury__solutions__env_ptr_arg;

#line 449 "solutions.m"
    {
#line 594 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__TrailPtr_13 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 4653 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3


		{
#line 754 "solutions.m"
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
#line 4679 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 839 "solutions.m"
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
#line 839 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 4702 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__Answer_17  = (MR_Box) NewVal;
#line 839 "solutions.m"
}
#line 458 "solutions.m"
      {
#line 458 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar1_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__STATE_VARIABLE_Acc1_28_28);
      }
#line 459 "solutions.m"
      {
#line 459 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar2_15, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__STATE_VARIABLE_Acc2_29_29);
      }
#line 594 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__CollectorPred_8, (MR_Integer) 1)));
#line 594 "solutions.m"
      {
#line 594 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__CollectorPred_8), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__Answer_17, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__STATE_VARIABLE_Acc1_28_28, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__STATE_VARIABLE_Acc1_30_30, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__STATE_VARIABLE_Acc2_29_29, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 595 "solutions.m"
      {
#line 595 "solutions.m"
        mercury__builtin__impure_true_0_p_0();
      }
#line 461 "solutions.m"
      {
#line 461 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar1_14, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__STATE_VARIABLE_Acc1_30_30);
      }
#line 462 "solutions.m"
      {
#line 462 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar2_15, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3


		{
#line 754 "solutions.m"
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
#line 4761 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 468 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__succeeded = MR_FALSE;
#line 468 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__succeeded)
#line 468 "solutions.m"
        {
#line 468 "solutions.m"
          mercury__solutions__builtin_aggregate2_6_p_3_1(mercury__solutions__env_ptr);
#line 468 "solutions.m"
          return;
        }
#line 449 "solutions.m"
    }
#line 449 "solutions.m"
  }
#line 449 "solutions.m"
}

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_3_3(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 449 "solutions.m"
{
#line 449 "solutions.m"
  {
#line 449 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_3_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_3_env_0_s *) mercury__solutions__env_ptr_arg;

#line 449 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__commit_0) == 0)
#line 449 "solutions.m"
      {
#line 449 "solutions.m"
        {
#line 449 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__GeneratorPred_7, (MR_Integer) 1)));

#line 449 "solutions.m"
          {
#line 449 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__GeneratorPred_7), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__Answer0_16, mercury__solutions__builtin_aggregate2_6_p_3_2, mercury__solutions__env_ptr);
          }
#line 449 "solutions.m"
        }
#line 449 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__succeeded = MR_FALSE;
#line 449 "solutions.m"
      }
#line 449 "solutions.m"
    else
#line 449 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__succeeded = MR_TRUE;
#line 449 "solutions.m"
  }
#line 449 "solutions.m"
}

#line 422 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_3(
#line 422 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_32,
#line 422 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_33,
#line 422 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_34,
#line 422 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_7,
#line 422 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_8,
#line 422 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_0_20,
#line 422 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator1_21,
#line 422 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_0_22,
#line 422 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator2_23)
#line 422 "solutions.m"
{
#line 422 "solutions.m"
  {
#line 422 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_3_env_0_s mercury__solutions__env;

#line 422 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_T_32 = mercury__solutions__TypeInfo_for_T_32;
#line 422 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_U_33 = mercury__solutions__TypeInfo_for_U_33;
#line 422 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_V_34 = mercury__solutions__TypeInfo_for_V_34;
#line 422 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__GeneratorPred_7 = mercury__solutions__GeneratorPred_7;
#line 422 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__CollectorPred_8 = mercury__solutions__CollectorPred_8;
#line 438 "solutions.m"
    {
#line 438 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_12;

#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 4895 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__HeapPtr_11  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_12  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TrailPtr_13  = TrailPtr;
#line 612 "solutions.m"
}
#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 4916 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 444 "solutions.m"
      {
#line 444 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_U_33, mercury__solutions__STATE_VARIABLE_Accumulator1_0_20, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar1_14);
      }
#line 445 "solutions.m"
      {
#line 445 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_V_34, mercury__solutions__STATE_VARIABLE_Accumulator2_0_22, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar2_15);
      }
#line 449 "solutions.m"
      {
#line 449 "solutions.m"
        mercury__solutions__builtin_aggregate2_6_p_3_3(&mercury__solutions__env);
      }
#line 469 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__succeeded))
#line 471 "solutions.m"
        {
#line 471 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_24_24;
#line 471 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_25_25;

#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 4958 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 477 "solutions.m"
          {
#line 477 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_U_33, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar1_14, &mercury__solutions__STATE_VARIABLE_Accumulator1_24_24);
          }
#line 478 "solutions.m"
          {
#line 478 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_V_34, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar2_15, &mercury__solutions__STATE_VARIABLE_Accumulator2_25_25);
          }
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 4991 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator1_21  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 5015 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator2_23  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 5036 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 5054 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 471 "solutions.m"
        }
#line 438 "solutions.m"
    }
#line 422 "solutions.m"
  }
#line 422 "solutions.m"
}

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_2_1(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 449 "solutions.m"
{
#line 449 "solutions.m"
  {
#line 449 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_2_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_2_env_0_s *) mercury__solutions__env_ptr_arg;

#line 449 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__commit_0, 1);
#line 449 "solutions.m"
  }
#line 449 "solutions.m"
}

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_2_2(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 449 "solutions.m"
{
#line 449 "solutions.m"
  {
#line 449 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_2_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_2_env_0_s *) mercury__solutions__env_ptr_arg;

#line 449 "solutions.m"
    {
#line 590 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__TrailPtr_13 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 5120 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2


		{
#line 754 "solutions.m"
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
#line 5146 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 839 "solutions.m"
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
#line 839 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 5169 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__Answer_17  = (MR_Box) NewVal;
#line 839 "solutions.m"
}
#line 458 "solutions.m"
      {
#line 458 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar1_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__STATE_VARIABLE_Acc1_28_28);
      }
#line 459 "solutions.m"
      {
#line 459 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar2_15, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__STATE_VARIABLE_Acc2_29_29);
      }
#line 590 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__CollectorPred_8, (MR_Integer) 1)));
#line 590 "solutions.m"
      {
#line 590 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__CollectorPred_8), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__Answer_17, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__STATE_VARIABLE_Acc1_28_28, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__STATE_VARIABLE_Acc1_30_30, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__STATE_VARIABLE_Acc2_29_29, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 461 "solutions.m"
      {
#line 461 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar1_14, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__STATE_VARIABLE_Acc1_30_30);
      }
#line 462 "solutions.m"
      {
#line 462 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar2_15, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2


		{
#line 754 "solutions.m"
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
#line 5223 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 468 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__succeeded = MR_FALSE;
#line 468 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__succeeded)
#line 468 "solutions.m"
        {
#line 468 "solutions.m"
          mercury__solutions__builtin_aggregate2_6_p_2_1(mercury__solutions__env_ptr);
#line 468 "solutions.m"
          return;
        }
#line 449 "solutions.m"
    }
#line 449 "solutions.m"
  }
#line 449 "solutions.m"
}

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_2_3(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 449 "solutions.m"
{
#line 449 "solutions.m"
  {
#line 449 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_2_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_2_env_0_s *) mercury__solutions__env_ptr_arg;

#line 449 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__commit_0) == 0)
#line 449 "solutions.m"
      {
#line 449 "solutions.m"
        {
#line 449 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__GeneratorPred_7, (MR_Integer) 1)));

#line 449 "solutions.m"
          {
#line 449 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__GeneratorPred_7), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__Answer0_16, mercury__solutions__builtin_aggregate2_6_p_2_2, mercury__solutions__env_ptr);
          }
#line 449 "solutions.m"
        }
#line 449 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__succeeded = MR_FALSE;
#line 449 "solutions.m"
      }
#line 449 "solutions.m"
    else
#line 449 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__succeeded = MR_TRUE;
#line 449 "solutions.m"
  }
#line 449 "solutions.m"
}

#line 419 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_2(
#line 419 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_32,
#line 419 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_33,
#line 419 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_34,
#line 419 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_7,
#line 419 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_8,
#line 419 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_0_20,
#line 419 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator1_21,
#line 419 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_0_22,
#line 419 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator2_23)
#line 419 "solutions.m"
{
#line 419 "solutions.m"
  {
#line 419 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_2_env_0_s mercury__solutions__env;

#line 419 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_T_32 = mercury__solutions__TypeInfo_for_T_32;
#line 419 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_U_33 = mercury__solutions__TypeInfo_for_U_33;
#line 419 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_V_34 = mercury__solutions__TypeInfo_for_V_34;
#line 419 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__GeneratorPred_7 = mercury__solutions__GeneratorPred_7;
#line 419 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__CollectorPred_8 = mercury__solutions__CollectorPred_8;
#line 438 "solutions.m"
    {
#line 438 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_12;

#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 5357 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__HeapPtr_11  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_12  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TrailPtr_13  = TrailPtr;
#line 612 "solutions.m"
}
#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 5378 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 444 "solutions.m"
      {
#line 444 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_U_33, mercury__solutions__STATE_VARIABLE_Accumulator1_0_20, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar1_14);
      }
#line 445 "solutions.m"
      {
#line 445 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_V_34, mercury__solutions__STATE_VARIABLE_Accumulator2_0_22, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar2_15);
      }
#line 449 "solutions.m"
      {
#line 449 "solutions.m"
        mercury__solutions__builtin_aggregate2_6_p_2_3(&mercury__solutions__env);
      }
#line 469 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__succeeded))
#line 471 "solutions.m"
        {
#line 471 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_24_24;
#line 471 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_25_25;

#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 5420 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 477 "solutions.m"
          {
#line 477 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_U_33, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar1_14, &mercury__solutions__STATE_VARIABLE_Accumulator1_24_24);
          }
#line 478 "solutions.m"
          {
#line 478 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_V_34, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar2_15, &mercury__solutions__STATE_VARIABLE_Accumulator2_25_25);
          }
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 5453 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator1_21  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 5477 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator2_23  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 5498 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 5516 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 471 "solutions.m"
        }
#line 438 "solutions.m"
    }
#line 419 "solutions.m"
  }
#line 419 "solutions.m"
}

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_1_1(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 449 "solutions.m"
{
#line 449 "solutions.m"
  {
#line 449 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_1_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_1_env_0_s *) mercury__solutions__env_ptr_arg;

#line 449 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__commit_0, 1);
#line 449 "solutions.m"
  }
#line 449 "solutions.m"
}

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_1_2(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 449 "solutions.m"
{
#line 449 "solutions.m"
  {
#line 449 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_1_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_1_env_0_s *) mercury__solutions__env_ptr_arg;

#line 449 "solutions.m"
    {
#line 585 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__TrailPtr_13 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 5582 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1


		{
#line 754 "solutions.m"
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
#line 5608 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 839 "solutions.m"
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
#line 839 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 5631 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__Answer_17  = (MR_Box) NewVal;
#line 839 "solutions.m"
}
#line 458 "solutions.m"
      {
#line 458 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar1_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__STATE_VARIABLE_Acc1_28_28);
      }
#line 459 "solutions.m"
      {
#line 459 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar2_15, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__STATE_VARIABLE_Acc2_29_29);
      }
#line 585 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__CollectorPred_8, (MR_Integer) 1)));
#line 585 "solutions.m"
      {
#line 585 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__CollectorPred_8), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__Answer_17, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__STATE_VARIABLE_Acc1_28_28, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__STATE_VARIABLE_Acc1_30_30, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__STATE_VARIABLE_Acc2_29_29, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 586 "solutions.m"
      {
#line 586 "solutions.m"
        mercury__builtin__impure_true_0_p_0();
      }
#line 461 "solutions.m"
      {
#line 461 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar1_14, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__STATE_VARIABLE_Acc1_30_30);
      }
#line 462 "solutions.m"
      {
#line 462 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar2_15, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1


		{
#line 754 "solutions.m"
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
#line 5690 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 468 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__succeeded = MR_FALSE;
#line 468 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__succeeded)
#line 468 "solutions.m"
        {
#line 468 "solutions.m"
          mercury__solutions__builtin_aggregate2_6_p_1_1(mercury__solutions__env_ptr);
#line 468 "solutions.m"
          return;
        }
#line 449 "solutions.m"
    }
#line 449 "solutions.m"
  }
#line 449 "solutions.m"
}

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_1_3(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 449 "solutions.m"
{
#line 449 "solutions.m"
  {
#line 449 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_1_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_1_env_0_s *) mercury__solutions__env_ptr_arg;

#line 449 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__commit_0) == 0)
#line 449 "solutions.m"
      {
#line 449 "solutions.m"
        {
#line 449 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__GeneratorPred_7, (MR_Integer) 1)));

#line 449 "solutions.m"
          {
#line 449 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__GeneratorPred_7), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__Answer0_16, mercury__solutions__builtin_aggregate2_6_p_1_2, mercury__solutions__env_ptr);
          }
#line 449 "solutions.m"
        }
#line 449 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__succeeded = MR_FALSE;
#line 449 "solutions.m"
      }
#line 449 "solutions.m"
    else
#line 449 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__succeeded = MR_TRUE;
#line 449 "solutions.m"
  }
#line 449 "solutions.m"
}

#line 416 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_1(
#line 416 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_32,
#line 416 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_33,
#line 416 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_34,
#line 416 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_7,
#line 416 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_8,
#line 416 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_0_20,
#line 416 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator1_21,
#line 416 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_0_22,
#line 416 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator2_23)
#line 416 "solutions.m"
{
#line 416 "solutions.m"
  {
#line 416 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_1_env_0_s mercury__solutions__env;

#line 416 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_T_32 = mercury__solutions__TypeInfo_for_T_32;
#line 416 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_U_33 = mercury__solutions__TypeInfo_for_U_33;
#line 416 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_V_34 = mercury__solutions__TypeInfo_for_V_34;
#line 416 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__GeneratorPred_7 = mercury__solutions__GeneratorPred_7;
#line 416 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__CollectorPred_8 = mercury__solutions__CollectorPred_8;
#line 438 "solutions.m"
    {
#line 438 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_12;

#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 5824 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__HeapPtr_11  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_12  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TrailPtr_13  = TrailPtr;
#line 612 "solutions.m"
}
#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 5845 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 444 "solutions.m"
      {
#line 444 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_U_33, mercury__solutions__STATE_VARIABLE_Accumulator1_0_20, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar1_14);
      }
#line 445 "solutions.m"
      {
#line 445 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_V_34, mercury__solutions__STATE_VARIABLE_Accumulator2_0_22, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar2_15);
      }
#line 449 "solutions.m"
      {
#line 449 "solutions.m"
        mercury__solutions__builtin_aggregate2_6_p_1_3(&mercury__solutions__env);
      }
#line 469 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__succeeded))
#line 471 "solutions.m"
        {
#line 471 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_24_24;
#line 471 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_25_25;

#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 5887 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 477 "solutions.m"
          {
#line 477 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_U_33, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar1_14, &mercury__solutions__STATE_VARIABLE_Accumulator1_24_24);
          }
#line 478 "solutions.m"
          {
#line 478 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_V_34, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar2_15, &mercury__solutions__STATE_VARIABLE_Accumulator2_25_25);
          }
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 5920 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator1_21  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 5944 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator2_23  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 5965 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 5983 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 471 "solutions.m"
        }
#line 438 "solutions.m"
    }
#line 416 "solutions.m"
  }
#line 416 "solutions.m"
}

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_0_1(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 449 "solutions.m"
{
#line 449 "solutions.m"
  {
#line 449 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_0_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_0_env_0_s *) mercury__solutions__env_ptr_arg;

#line 449 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__commit_0, 1);
#line 449 "solutions.m"
  }
#line 449 "solutions.m"
}

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_0_2(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 449 "solutions.m"
{
#line 449 "solutions.m"
  {
#line 449 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_0_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_0_env_0_s *) mercury__solutions__env_ptr_arg;

#line 449 "solutions.m"
    {
#line 581 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__TrailPtr_13 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 6049 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0


		{
#line 754 "solutions.m"
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
#line 6075 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 839 "solutions.m"
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
#line 839 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 6098 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__Answer_17  = (MR_Box) NewVal;
#line 839 "solutions.m"
}
#line 458 "solutions.m"
      {
#line 458 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar1_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__STATE_VARIABLE_Acc1_28_28);
      }
#line 459 "solutions.m"
      {
#line 459 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar2_15, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__STATE_VARIABLE_Acc2_29_29);
      }
#line 581 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__CollectorPred_8, (MR_Integer) 1)));
#line 581 "solutions.m"
      {
#line 581 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__CollectorPred_8), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__Answer_17, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__STATE_VARIABLE_Acc1_28_28, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__STATE_VARIABLE_Acc1_30_30, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__STATE_VARIABLE_Acc2_29_29, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 461 "solutions.m"
      {
#line 461 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_U_33, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar1_14, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__STATE_VARIABLE_Acc1_30_30);
      }
#line 462 "solutions.m"
      {
#line 462 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_V_34, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar2_15, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__STATE_VARIABLE_Acc2_31_31);
      }
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0


		{
#line 754 "solutions.m"
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
#line 6152 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 468 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__succeeded = MR_FALSE;
#line 468 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__succeeded)
#line 468 "solutions.m"
        {
#line 468 "solutions.m"
          mercury__solutions__builtin_aggregate2_6_p_0_1(mercury__solutions__env_ptr);
#line 468 "solutions.m"
          return;
        }
#line 449 "solutions.m"
    }
#line 449 "solutions.m"
  }
#line 449 "solutions.m"
}

#line 449 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_0_3(
#line 449 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 449 "solutions.m"
{
#line 449 "solutions.m"
  {
#line 449 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_0_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_0_env_0_s *) mercury__solutions__env_ptr_arg;

#line 449 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__commit_0) == 0)
#line 449 "solutions.m"
      {
#line 449 "solutions.m"
        {
#line 449 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__GeneratorPred_7, (MR_Integer) 1)));

#line 449 "solutions.m"
          {
#line 449 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__GeneratorPred_7), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__Answer0_16, mercury__solutions__builtin_aggregate2_6_p_0_2, mercury__solutions__env_ptr);
          }
#line 449 "solutions.m"
        }
#line 449 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__succeeded = MR_FALSE;
#line 449 "solutions.m"
      }
#line 449 "solutions.m"
    else
#line 449 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__succeeded = MR_TRUE;
#line 449 "solutions.m"
  }
#line 449 "solutions.m"
}

#line 413 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_0(
#line 413 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_32,
#line 413 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_33,
#line 413 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_34,
#line 413 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_7,
#line 413 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_8,
#line 413 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_0_20,
#line 413 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator1_21,
#line 413 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_0_22,
#line 413 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator2_23)
#line 413 "solutions.m"
{
#line 413 "solutions.m"
  {
#line 413 "solutions.m"
    struct mercury__solutions__builtin_aggregate2_6_p_0_env_0_s mercury__solutions__env;

#line 413 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_T_32 = mercury__solutions__TypeInfo_for_T_32;
#line 413 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_U_33 = mercury__solutions__TypeInfo_for_U_33;
#line 413 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_V_34 = mercury__solutions__TypeInfo_for_V_34;
#line 413 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__GeneratorPred_7 = mercury__solutions__GeneratorPred_7;
#line 413 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__CollectorPred_8 = mercury__solutions__CollectorPred_8;
#line 438 "solutions.m"
    {
#line 438 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_12;

#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 6286 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__HeapPtr_11  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_12  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TrailPtr_13  = TrailPtr;
#line 612 "solutions.m"
}
#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 6307 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 444 "solutions.m"
      {
#line 444 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_U_33, mercury__solutions__STATE_VARIABLE_Accumulator1_0_20, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar1_14);
      }
#line 445 "solutions.m"
      {
#line 445 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_V_34, mercury__solutions__STATE_VARIABLE_Accumulator2_0_22, &(mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar2_15);
      }
#line 449 "solutions.m"
      {
#line 449 "solutions.m"
        mercury__solutions__builtin_aggregate2_6_p_0_3(&mercury__solutions__env);
      }
#line 469 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__succeeded))
#line 471 "solutions.m"
        {
#line 471 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator1_24_24;
#line 471 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator2_25_25;

#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 6349 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 477 "solutions.m"
          {
#line 477 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_U_33, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar1_14, &mercury__solutions__STATE_VARIABLE_Accumulator1_24_24);
          }
#line 478 "solutions.m"
          {
#line 478 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_V_34, (mercury__solutions__env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar2_15, &mercury__solutions__STATE_VARIABLE_Accumulator2_25_25);
          }
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 6382 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator1_21  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 6406 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator2_23  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_12 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 6427 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 6445 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 471 "solutions.m"
        }
#line 438 "solutions.m"
    }
#line 413 "solutions.m"
  }
#line 413 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_9_1(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_9_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_9_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__commit_0, 1);
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_9_2(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_9_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_9_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    {
#line 550 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__TrailPtr_10 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 6511 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9


		{
#line 754 "solutions.m"
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
#line 6537 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 845 "solutions.m"
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
#line 845 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 6560 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Answer_13  = (MR_Box) NewVal;
#line 845 "solutions.m"
}
#line 385 "solutions.m"
      {
#line 385 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Acc0_14);
      }
#line 550 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 550 "solutions.m"
      {
#line 550 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Answer_13, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Acc1_15);
      }
#line 387 "solutions.m"
      {
#line 387 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Acc1_15);
      }
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9


		{
#line 754 "solutions.m"
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
#line 6604 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 392 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__succeeded = MR_FALSE;
#line 392 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__succeeded)
#line 392 "solutions.m"
        {
#line 392 "solutions.m"
          mercury__solutions__builtin_aggregate_4_p_9_1(mercury__solutions__env_ptr);
#line 392 "solutions.m"
          return;
        }
#line 376 "solutions.m"
    }
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_9_3(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_9_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_9_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__commit_0) == 0)
#line 376 "solutions.m"
      {
#line 376 "solutions.m"
        {
#line 376 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 376 "solutions.m"
          {
#line 376 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_9_2, mercury__solutions__env_ptr);
          }
#line 376 "solutions.m"
        }
#line 376 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__succeeded = MR_FALSE;
#line 376 "solutions.m"
      }
#line 376 "solutions.m"
    else
#line 376 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__succeeded = MR_TRUE;
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 310 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_9(
#line 310 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_20,
#line 310 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_21,
#line 310 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 310 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 310 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_16,
#line 310 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_17)
#line 310 "solutions.m"
{
#line 310 "solutions.m"
  {
#line 310 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_9_env_0_s mercury__solutions__env;

#line 310 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_T_20 = mercury__solutions__TypeInfo_for_T_20;
#line 310 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_U_21 = mercury__solutions__TypeInfo_for_U_21;
#line 310 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_9_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 310 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_9_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 365 "solutions.m"
    {
#line 365 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;

#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 6730 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_9_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_9_env_0__TrailPtr_10  = TrailPtr;
#line 612 "solutions.m"
}
#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 6751 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 372 "solutions.m"
      {
#line 372 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_U_21, mercury__solutions__STATE_VARIABLE_Accumulator_0_16, &(mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_9_env_0__Mutvar_11);
      }
#line 376 "solutions.m"
      {
#line 376 "solutions.m"
        mercury__solutions__builtin_aggregate_4_p_9_3(&mercury__solutions__env);
      }
#line 393 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_9_env_0__succeeded))
#line 395 "solutions.m"
        {
#line 395 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_18_18;

#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 6786 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 402 "solutions.m"
          {
#line 402 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_U_21, (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_9_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_18_18);
          }
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 6814 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_17  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 6835 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 6853 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 395 "solutions.m"
        }
#line 365 "solutions.m"
    }
#line 310 "solutions.m"
  }
#line 310 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_8_1(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_8_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_8_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__commit_0, 1);
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_8_2(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_8_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_8_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    {
#line 539 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__TrailPtr_10 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 6919 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8


		{
#line 754 "solutions.m"
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
#line 6945 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 839 "solutions.m"
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
#line 839 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 6968 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Answer_13  = (MR_Box) NewVal;
#line 839 "solutions.m"
}
#line 385 "solutions.m"
      {
#line 385 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Acc0_14);
      }
#line 539 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 539 "solutions.m"
      {
#line 539 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Answer_13, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Acc1_15);
      }
#line 540 "solutions.m"
      {
#line 540 "solutions.m"
        mercury__builtin__impure_true_0_p_0();
      }
#line 387 "solutions.m"
      {
#line 387 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Acc1_15);
      }
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8


		{
#line 754 "solutions.m"
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
#line 7017 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 392 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__succeeded = MR_FALSE;
#line 392 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__succeeded)
#line 392 "solutions.m"
        {
#line 392 "solutions.m"
          mercury__solutions__builtin_aggregate_4_p_8_1(mercury__solutions__env_ptr);
#line 392 "solutions.m"
          return;
        }
#line 376 "solutions.m"
    }
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_8_3(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_8_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_8_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__commit_0) == 0)
#line 376 "solutions.m"
      {
#line 376 "solutions.m"
        {
#line 376 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 376 "solutions.m"
          {
#line 376 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_8_2, mercury__solutions__env_ptr);
          }
#line 376 "solutions.m"
        }
#line 376 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__succeeded = MR_FALSE;
#line 376 "solutions.m"
      }
#line 376 "solutions.m"
    else
#line 376 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__succeeded = MR_TRUE;
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 308 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_8(
#line 308 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_20,
#line 308 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_21,
#line 308 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 308 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 308 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_16,
#line 308 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_17)
#line 308 "solutions.m"
{
#line 308 "solutions.m"
  {
#line 308 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_8_env_0_s mercury__solutions__env;

#line 308 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_T_20 = mercury__solutions__TypeInfo_for_T_20;
#line 308 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_U_21 = mercury__solutions__TypeInfo_for_U_21;
#line 308 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_8_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 308 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_8_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 365 "solutions.m"
    {
#line 365 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;

#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 7143 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_8_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_8_env_0__TrailPtr_10  = TrailPtr;
#line 612 "solutions.m"
}
#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 7164 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 372 "solutions.m"
      {
#line 372 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_U_21, mercury__solutions__STATE_VARIABLE_Accumulator_0_16, &(mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_8_env_0__Mutvar_11);
      }
#line 376 "solutions.m"
      {
#line 376 "solutions.m"
        mercury__solutions__builtin_aggregate_4_p_8_3(&mercury__solutions__env);
      }
#line 393 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_8_env_0__succeeded))
#line 395 "solutions.m"
        {
#line 395 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_18_18;

#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 7199 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 402 "solutions.m"
          {
#line 402 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_U_21, (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_8_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_18_18);
          }
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 7227 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_17  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 7248 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 7266 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 395 "solutions.m"
        }
#line 365 "solutions.m"
    }
#line 308 "solutions.m"
  }
#line 308 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_7_1(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_7_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_7_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__commit_0, 1);
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_7_2(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_7_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_7_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    {
#line 536 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__TrailPtr_10 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 7332 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7


		{
#line 754 "solutions.m"
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
#line 7358 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 839 "solutions.m"
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
#line 839 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 7381 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Answer_13  = (MR_Box) NewVal;
#line 839 "solutions.m"
}
#line 385 "solutions.m"
      {
#line 385 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Acc0_14);
      }
#line 536 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 536 "solutions.m"
      {
#line 536 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Answer_13, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Acc1_15);
      }
#line 387 "solutions.m"
      {
#line 387 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Acc1_15);
      }
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7


		{
#line 754 "solutions.m"
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
#line 7425 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 392 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__succeeded = MR_FALSE;
#line 392 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__succeeded)
#line 392 "solutions.m"
        {
#line 392 "solutions.m"
          mercury__solutions__builtin_aggregate_4_p_7_1(mercury__solutions__env_ptr);
#line 392 "solutions.m"
          return;
        }
#line 376 "solutions.m"
    }
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_7_3(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_7_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_7_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__commit_0) == 0)
#line 376 "solutions.m"
      {
#line 376 "solutions.m"
        {
#line 376 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 376 "solutions.m"
          {
#line 376 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_7_2, mercury__solutions__env_ptr);
          }
#line 376 "solutions.m"
        }
#line 376 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__succeeded = MR_FALSE;
#line 376 "solutions.m"
      }
#line 376 "solutions.m"
    else
#line 376 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__succeeded = MR_TRUE;
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 306 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_7(
#line 306 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_20,
#line 306 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_21,
#line 306 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 306 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 306 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_16,
#line 306 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_17)
#line 306 "solutions.m"
{
#line 306 "solutions.m"
  {
#line 306 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_7_env_0_s mercury__solutions__env;

#line 306 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_T_20 = mercury__solutions__TypeInfo_for_T_20;
#line 306 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_U_21 = mercury__solutions__TypeInfo_for_U_21;
#line 306 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_7_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 306 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_7_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 365 "solutions.m"
    {
#line 365 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;

#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 7551 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_7_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_7_env_0__TrailPtr_10  = TrailPtr;
#line 612 "solutions.m"
}
#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 7572 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 372 "solutions.m"
      {
#line 372 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_U_21, mercury__solutions__STATE_VARIABLE_Accumulator_0_16, &(mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_7_env_0__Mutvar_11);
      }
#line 376 "solutions.m"
      {
#line 376 "solutions.m"
        mercury__solutions__builtin_aggregate_4_p_7_3(&mercury__solutions__env);
      }
#line 393 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_7_env_0__succeeded))
#line 395 "solutions.m"
        {
#line 395 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_18_18;

#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 7607 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 402 "solutions.m"
          {
#line 402 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_U_21, (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_7_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_18_18);
          }
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 7635 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_17  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 7656 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 7674 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 395 "solutions.m"
        }
#line 365 "solutions.m"
    }
#line 306 "solutions.m"
  }
#line 306 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_6_1(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_6_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_6_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__commit_0, 1);
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_6_2(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_6_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_6_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    {
#line 544 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__TrailPtr_10 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 7740 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6


		{
#line 754 "solutions.m"
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
#line 7766 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 839 "solutions.m"
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
#line 839 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 7789 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Answer_13  = (MR_Box) NewVal;
#line 839 "solutions.m"
}
#line 385 "solutions.m"
      {
#line 385 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Acc0_14);
      }
#line 544 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 544 "solutions.m"
      {
#line 544 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Answer_13, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Acc1_15);
      }
#line 545 "solutions.m"
      {
#line 545 "solutions.m"
        mercury__builtin__impure_true_0_p_0();
      }
#line 387 "solutions.m"
      {
#line 387 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Acc1_15);
      }
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6


		{
#line 754 "solutions.m"
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
#line 7838 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 392 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__succeeded = MR_FALSE;
#line 392 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__succeeded)
#line 392 "solutions.m"
        {
#line 392 "solutions.m"
          mercury__solutions__builtin_aggregate_4_p_6_1(mercury__solutions__env_ptr);
#line 392 "solutions.m"
          return;
        }
#line 376 "solutions.m"
    }
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_6_3(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_6_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_6_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__commit_0) == 0)
#line 376 "solutions.m"
      {
#line 376 "solutions.m"
        {
#line 376 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 376 "solutions.m"
          {
#line 376 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_6_2, mercury__solutions__env_ptr);
          }
#line 376 "solutions.m"
        }
#line 376 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__succeeded = MR_FALSE;
#line 376 "solutions.m"
      }
#line 376 "solutions.m"
    else
#line 376 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__succeeded = MR_TRUE;
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 304 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_6(
#line 304 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_20,
#line 304 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_21,
#line 304 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 304 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 304 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_16,
#line 304 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_17)
#line 304 "solutions.m"
{
#line 304 "solutions.m"
  {
#line 304 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_6_env_0_s mercury__solutions__env;

#line 304 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_T_20 = mercury__solutions__TypeInfo_for_T_20;
#line 304 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_U_21 = mercury__solutions__TypeInfo_for_U_21;
#line 304 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_6_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 304 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_6_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 365 "solutions.m"
    {
#line 365 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;

#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 7964 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_6_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_6_env_0__TrailPtr_10  = TrailPtr;
#line 612 "solutions.m"
}
#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 7985 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 372 "solutions.m"
      {
#line 372 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_U_21, mercury__solutions__STATE_VARIABLE_Accumulator_0_16, &(mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_6_env_0__Mutvar_11);
      }
#line 376 "solutions.m"
      {
#line 376 "solutions.m"
        mercury__solutions__builtin_aggregate_4_p_6_3(&mercury__solutions__env);
      }
#line 393 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_6_env_0__succeeded))
#line 395 "solutions.m"
        {
#line 395 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_18_18;

#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 8020 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 402 "solutions.m"
          {
#line 402 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_U_21, (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_6_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_18_18);
          }
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 8048 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_17  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 8069 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 8087 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 395 "solutions.m"
        }
#line 365 "solutions.m"
    }
#line 304 "solutions.m"
  }
#line 304 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_5_1(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_5_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_5_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__commit_0, 1);
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_5_2(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_5_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_5_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    {
#line 548 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__TrailPtr_10 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 8153 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5


		{
#line 754 "solutions.m"
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
#line 8179 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 839 "solutions.m"
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
#line 839 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 8202 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Answer_13  = (MR_Box) NewVal;
#line 839 "solutions.m"
}
#line 385 "solutions.m"
      {
#line 385 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Acc0_14);
      }
#line 548 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 548 "solutions.m"
      {
#line 548 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Answer_13, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Acc1_15);
      }
#line 387 "solutions.m"
      {
#line 387 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Acc1_15);
      }
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5


		{
#line 754 "solutions.m"
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
#line 8246 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 392 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__succeeded = MR_FALSE;
#line 392 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__succeeded)
#line 392 "solutions.m"
        {
#line 392 "solutions.m"
          mercury__solutions__builtin_aggregate_4_p_5_1(mercury__solutions__env_ptr);
#line 392 "solutions.m"
          return;
        }
#line 376 "solutions.m"
    }
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_5_3(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_5_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_5_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__commit_0) == 0)
#line 376 "solutions.m"
      {
#line 376 "solutions.m"
        {
#line 376 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 376 "solutions.m"
          {
#line 376 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_5_2, mercury__solutions__env_ptr);
          }
#line 376 "solutions.m"
        }
#line 376 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__succeeded = MR_FALSE;
#line 376 "solutions.m"
      }
#line 376 "solutions.m"
    else
#line 376 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__succeeded = MR_TRUE;
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 302 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_5(
#line 302 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_20,
#line 302 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_21,
#line 302 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 302 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 302 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_16,
#line 302 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_17)
#line 302 "solutions.m"
{
#line 302 "solutions.m"
  {
#line 302 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_5_env_0_s mercury__solutions__env;

#line 302 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_T_20 = mercury__solutions__TypeInfo_for_T_20;
#line 302 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_U_21 = mercury__solutions__TypeInfo_for_U_21;
#line 302 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_5_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 302 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_5_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 365 "solutions.m"
    {
#line 365 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;

#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 8372 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_5_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_5_env_0__TrailPtr_10  = TrailPtr;
#line 612 "solutions.m"
}
#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 8393 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 372 "solutions.m"
      {
#line 372 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_U_21, mercury__solutions__STATE_VARIABLE_Accumulator_0_16, &(mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_5_env_0__Mutvar_11);
      }
#line 376 "solutions.m"
      {
#line 376 "solutions.m"
        mercury__solutions__builtin_aggregate_4_p_5_3(&mercury__solutions__env);
      }
#line 393 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_5_env_0__succeeded))
#line 395 "solutions.m"
        {
#line 395 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_18_18;

#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 8428 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 402 "solutions.m"
          {
#line 402 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_U_21, (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_5_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_18_18);
          }
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 8456 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_17  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 8477 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 8495 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 395 "solutions.m"
        }
#line 365 "solutions.m"
    }
#line 302 "solutions.m"
  }
#line 302 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_4_1(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_4_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_4_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__commit_0, 1);
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_4_2(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_4_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_4_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    {
#line 550 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__TrailPtr_10 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 8561 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4


		{
#line 754 "solutions.m"
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
#line 8587 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 845 "solutions.m"
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
#line 845 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 8610 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Answer_13  = (MR_Box) NewVal;
#line 845 "solutions.m"
}
#line 385 "solutions.m"
      {
#line 385 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Acc0_14);
      }
#line 550 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 550 "solutions.m"
      {
#line 550 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Answer_13, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Acc1_15);
      }
#line 387 "solutions.m"
      {
#line 387 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Acc1_15);
      }
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4


		{
#line 754 "solutions.m"
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
#line 8654 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 392 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__succeeded = MR_FALSE;
#line 392 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__succeeded)
#line 392 "solutions.m"
        {
#line 392 "solutions.m"
          mercury__solutions__builtin_aggregate_4_p_4_1(mercury__solutions__env_ptr);
#line 392 "solutions.m"
          return;
        }
#line 376 "solutions.m"
    }
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_4_3(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_4_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_4_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__commit_0) == 0)
#line 376 "solutions.m"
      {
#line 376 "solutions.m"
        {
#line 376 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 376 "solutions.m"
          {
#line 376 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_4_2, mercury__solutions__env_ptr);
          }
#line 376 "solutions.m"
        }
#line 376 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__succeeded = MR_FALSE;
#line 376 "solutions.m"
      }
#line 376 "solutions.m"
    else
#line 376 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__succeeded = MR_TRUE;
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 300 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_4(
#line 300 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_20,
#line 300 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_21,
#line 300 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 300 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 300 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_16,
#line 300 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_17)
#line 300 "solutions.m"
{
#line 300 "solutions.m"
  {
#line 300 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_4_env_0_s mercury__solutions__env;

#line 300 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_T_20 = mercury__solutions__TypeInfo_for_T_20;
#line 300 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_U_21 = mercury__solutions__TypeInfo_for_U_21;
#line 300 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_4_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 300 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_4_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 365 "solutions.m"
    {
#line 365 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;

#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 8780 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_4_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_4_env_0__TrailPtr_10  = TrailPtr;
#line 612 "solutions.m"
}
#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 8801 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 372 "solutions.m"
      {
#line 372 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_U_21, mercury__solutions__STATE_VARIABLE_Accumulator_0_16, &(mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_4_env_0__Mutvar_11);
      }
#line 376 "solutions.m"
      {
#line 376 "solutions.m"
        mercury__solutions__builtin_aggregate_4_p_4_3(&mercury__solutions__env);
      }
#line 393 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_4_env_0__succeeded))
#line 395 "solutions.m"
        {
#line 395 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_18_18;

#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 8836 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 402 "solutions.m"
          {
#line 402 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_U_21, (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_4_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_18_18);
          }
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 8864 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_17  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 8885 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 8903 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 395 "solutions.m"
        }
#line 365 "solutions.m"
    }
#line 300 "solutions.m"
  }
#line 300 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_3_1(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_3_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_3_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__commit_0, 1);
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_3_2(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_3_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_3_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    {
#line 544 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__TrailPtr_10 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 8969 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3


		{
#line 754 "solutions.m"
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
#line 8995 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 839 "solutions.m"
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
#line 839 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 9018 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Answer_13  = (MR_Box) NewVal;
#line 839 "solutions.m"
}
#line 385 "solutions.m"
      {
#line 385 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Acc0_14);
      }
#line 544 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 544 "solutions.m"
      {
#line 544 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Answer_13, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Acc1_15);
      }
#line 545 "solutions.m"
      {
#line 545 "solutions.m"
        mercury__builtin__impure_true_0_p_0();
      }
#line 387 "solutions.m"
      {
#line 387 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Acc1_15);
      }
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3


		{
#line 754 "solutions.m"
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
#line 9067 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 392 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__succeeded = MR_FALSE;
#line 392 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__succeeded)
#line 392 "solutions.m"
        {
#line 392 "solutions.m"
          mercury__solutions__builtin_aggregate_4_p_3_1(mercury__solutions__env_ptr);
#line 392 "solutions.m"
          return;
        }
#line 376 "solutions.m"
    }
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_3_3(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_3_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_3_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__commit_0) == 0)
#line 376 "solutions.m"
      {
#line 376 "solutions.m"
        {
#line 376 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 376 "solutions.m"
          {
#line 376 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_3_2, mercury__solutions__env_ptr);
          }
#line 376 "solutions.m"
        }
#line 376 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__succeeded = MR_FALSE;
#line 376 "solutions.m"
      }
#line 376 "solutions.m"
    else
#line 376 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__succeeded = MR_TRUE;
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 298 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_3(
#line 298 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_20,
#line 298 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_21,
#line 298 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 298 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 298 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_16,
#line 298 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_17)
#line 298 "solutions.m"
{
#line 298 "solutions.m"
  {
#line 298 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_3_env_0_s mercury__solutions__env;

#line 298 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_T_20 = mercury__solutions__TypeInfo_for_T_20;
#line 298 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_U_21 = mercury__solutions__TypeInfo_for_U_21;
#line 298 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_3_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 298 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_3_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 365 "solutions.m"
    {
#line 365 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;

#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 9193 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_3_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_3_env_0__TrailPtr_10  = TrailPtr;
#line 612 "solutions.m"
}
#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 9214 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 372 "solutions.m"
      {
#line 372 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_U_21, mercury__solutions__STATE_VARIABLE_Accumulator_0_16, &(mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_3_env_0__Mutvar_11);
      }
#line 376 "solutions.m"
      {
#line 376 "solutions.m"
        mercury__solutions__builtin_aggregate_4_p_3_3(&mercury__solutions__env);
      }
#line 393 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_3_env_0__succeeded))
#line 395 "solutions.m"
        {
#line 395 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_18_18;

#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 9249 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 402 "solutions.m"
          {
#line 402 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_U_21, (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_3_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_18_18);
          }
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 9277 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_17  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 9298 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 9316 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 395 "solutions.m"
        }
#line 365 "solutions.m"
    }
#line 298 "solutions.m"
  }
#line 298 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_2_1(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_2_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_2_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__commit_0, 1);
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_2_2(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_2_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_2_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    {
#line 539 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__TrailPtr_10 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 9382 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2


		{
#line 754 "solutions.m"
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
#line 9408 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 839 "solutions.m"
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
#line 839 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 9431 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Answer_13  = (MR_Box) NewVal;
#line 839 "solutions.m"
}
#line 385 "solutions.m"
      {
#line 385 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Acc0_14);
      }
#line 539 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 539 "solutions.m"
      {
#line 539 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Answer_13, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Acc1_15);
      }
#line 540 "solutions.m"
      {
#line 540 "solutions.m"
        mercury__builtin__impure_true_0_p_0();
      }
#line 387 "solutions.m"
      {
#line 387 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Acc1_15);
      }
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2


		{
#line 754 "solutions.m"
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
#line 9480 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 392 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__succeeded = MR_FALSE;
#line 392 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__succeeded)
#line 392 "solutions.m"
        {
#line 392 "solutions.m"
          mercury__solutions__builtin_aggregate_4_p_2_1(mercury__solutions__env_ptr);
#line 392 "solutions.m"
          return;
        }
#line 376 "solutions.m"
    }
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_2_3(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_2_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_2_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__commit_0) == 0)
#line 376 "solutions.m"
      {
#line 376 "solutions.m"
        {
#line 376 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 376 "solutions.m"
          {
#line 376 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_2_2, mercury__solutions__env_ptr);
          }
#line 376 "solutions.m"
        }
#line 376 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__succeeded = MR_FALSE;
#line 376 "solutions.m"
      }
#line 376 "solutions.m"
    else
#line 376 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__succeeded = MR_TRUE;
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 296 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_2(
#line 296 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_20,
#line 296 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_21,
#line 296 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 296 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 296 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_16,
#line 296 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_17)
#line 296 "solutions.m"
{
#line 296 "solutions.m"
  {
#line 296 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_2_env_0_s mercury__solutions__env;

#line 296 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_T_20 = mercury__solutions__TypeInfo_for_T_20;
#line 296 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_U_21 = mercury__solutions__TypeInfo_for_U_21;
#line 296 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_2_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 296 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_2_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 365 "solutions.m"
    {
#line 365 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;

#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 9606 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_2_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_2_env_0__TrailPtr_10  = TrailPtr;
#line 612 "solutions.m"
}
#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 9627 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 372 "solutions.m"
      {
#line 372 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_U_21, mercury__solutions__STATE_VARIABLE_Accumulator_0_16, &(mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_2_env_0__Mutvar_11);
      }
#line 376 "solutions.m"
      {
#line 376 "solutions.m"
        mercury__solutions__builtin_aggregate_4_p_2_3(&mercury__solutions__env);
      }
#line 393 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_2_env_0__succeeded))
#line 395 "solutions.m"
        {
#line 395 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_18_18;

#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 9662 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 402 "solutions.m"
          {
#line 402 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_U_21, (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_2_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_18_18);
          }
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 9690 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_17  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 9711 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 9729 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 395 "solutions.m"
        }
#line 365 "solutions.m"
    }
#line 296 "solutions.m"
  }
#line 296 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_1_1(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_1_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_1_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__commit_0, 1);
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_1_2(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_1_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_1_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    {
#line 548 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__TrailPtr_10 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 9795 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1


		{
#line 754 "solutions.m"
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
#line 9821 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 839 "solutions.m"
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
#line 839 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 9844 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Answer_13  = (MR_Box) NewVal;
#line 839 "solutions.m"
}
#line 385 "solutions.m"
      {
#line 385 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Acc0_14);
      }
#line 548 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 548 "solutions.m"
      {
#line 548 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Answer_13, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Acc1_15);
      }
#line 387 "solutions.m"
      {
#line 387 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Acc1_15);
      }
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1


		{
#line 754 "solutions.m"
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
#line 9888 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 392 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__succeeded = MR_FALSE;
#line 392 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__succeeded)
#line 392 "solutions.m"
        {
#line 392 "solutions.m"
          mercury__solutions__builtin_aggregate_4_p_1_1(mercury__solutions__env_ptr);
#line 392 "solutions.m"
          return;
        }
#line 376 "solutions.m"
    }
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_1_3(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_1_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_1_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__commit_0) == 0)
#line 376 "solutions.m"
      {
#line 376 "solutions.m"
        {
#line 376 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 376 "solutions.m"
          {
#line 376 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_1_2, mercury__solutions__env_ptr);
          }
#line 376 "solutions.m"
        }
#line 376 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__succeeded = MR_FALSE;
#line 376 "solutions.m"
      }
#line 376 "solutions.m"
    else
#line 376 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__succeeded = MR_TRUE;
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 294 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_1(
#line 294 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_20,
#line 294 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_21,
#line 294 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 294 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 294 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_16,
#line 294 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_17)
#line 294 "solutions.m"
{
#line 294 "solutions.m"
  {
#line 294 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_1_env_0_s mercury__solutions__env;

#line 294 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_T_20 = mercury__solutions__TypeInfo_for_T_20;
#line 294 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_U_21 = mercury__solutions__TypeInfo_for_U_21;
#line 294 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_1_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 294 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_1_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 365 "solutions.m"
    {
#line 365 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;

#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 10014 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_1_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_1_env_0__TrailPtr_10  = TrailPtr;
#line 612 "solutions.m"
}
#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 10035 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 372 "solutions.m"
      {
#line 372 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_U_21, mercury__solutions__STATE_VARIABLE_Accumulator_0_16, &(mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_1_env_0__Mutvar_11);
      }
#line 376 "solutions.m"
      {
#line 376 "solutions.m"
        mercury__solutions__builtin_aggregate_4_p_1_3(&mercury__solutions__env);
      }
#line 393 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_1_env_0__succeeded))
#line 395 "solutions.m"
        {
#line 395 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_18_18;

#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 10070 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 402 "solutions.m"
          {
#line 402 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_U_21, (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_1_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_18_18);
          }
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 10098 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_17  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 10119 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 10137 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 395 "solutions.m"
        }
#line 365 "solutions.m"
    }
#line 294 "solutions.m"
  }
#line 294 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_0_1(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_0_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_0_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__commit_0, 1);
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_0_2(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_0_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_0_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    {
#line 536 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__TrailPtr_10 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 10203 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0


		{
#line 754 "solutions.m"
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
#line 10229 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 839 "solutions.m"
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
#line 839 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 10252 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Answer_13  = (MR_Box) NewVal;
#line 839 "solutions.m"
}
#line 385 "solutions.m"
      {
#line 385 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Acc0_14);
      }
#line 536 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 536 "solutions.m"
      {
#line 536 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Answer_13, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Acc1_15);
      }
#line 387 "solutions.m"
      {
#line 387 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_U_21, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Acc1_15);
      }
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0


		{
#line 754 "solutions.m"
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
#line 10296 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 392 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__succeeded = MR_FALSE;
#line 392 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__succeeded)
#line 392 "solutions.m"
        {
#line 392 "solutions.m"
          mercury__solutions__builtin_aggregate_4_p_0_1(mercury__solutions__env_ptr);
#line 392 "solutions.m"
          return;
        }
#line 376 "solutions.m"
    }
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_0_3(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_0_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_0_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__commit_0) == 0)
#line 376 "solutions.m"
      {
#line 376 "solutions.m"
        {
#line 376 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 376 "solutions.m"
          {
#line 376 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_0_2, mercury__solutions__env_ptr);
          }
#line 376 "solutions.m"
        }
#line 376 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__succeeded = MR_FALSE;
#line 376 "solutions.m"
      }
#line 376 "solutions.m"
    else
#line 376 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__succeeded = MR_TRUE;
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 292 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_0(
#line 292 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_20,
#line 292 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_21,
#line 292 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 292 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 292 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_16,
#line 292 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_17)
#line 292 "solutions.m"
{
#line 292 "solutions.m"
  {
#line 292 "solutions.m"
    struct mercury__solutions__builtin_aggregate_4_p_0_env_0_s mercury__solutions__env;

#line 292 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_T_20 = mercury__solutions__TypeInfo_for_T_20;
#line 292 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_U_21 = mercury__solutions__TypeInfo_for_U_21;
#line 292 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_0_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 292 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_0_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 365 "solutions.m"
    {
#line 365 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;

#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 10422 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_0_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_0_env_0__TrailPtr_10  = TrailPtr;
#line 612 "solutions.m"
}
#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 10443 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 372 "solutions.m"
      {
#line 372 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_U_21, mercury__solutions__STATE_VARIABLE_Accumulator_0_16, &(mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_0_env_0__Mutvar_11);
      }
#line 376 "solutions.m"
      {
#line 376 "solutions.m"
        mercury__solutions__builtin_aggregate_4_p_0_3(&mercury__solutions__env);
      }
#line 393 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_0_env_0__succeeded))
#line 395 "solutions.m"
        {
#line 395 "solutions.m"
          MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_18_18;

#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 10478 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 402 "solutions.m"
          {
#line 402 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_U_21, (mercury__solutions__env).mercury__solutions__builtin_aggregate_4_p_0_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_18_18);
          }
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 10506 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_17  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 10527 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 10545 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 395 "solutions.m"
        }
#line 365 "solutions.m"
    }
#line 292 "solutions.m"
  }
#line 292 "solutions.m"
}

#line 268 "solutions.m"
void MR_CALL 
mercury__solutions__assert_num_solutions_3_p_1(
#line 268 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_14,
#line 268 "solutions.m"
  MR_Word mercury__solutions___Pred_1,
#line 268 "solutions.m"
  MR_Word mercury__solutions__HeadVar__2_2,
#line 268 "solutions.m"
  MR_Word * mercury__solutions__List_3)
#line 268 "solutions.m"
{
#line 282 "solutions.m"
  {
#line 282 "solutions.m"
    MR_bool mercury__solutions__succeeded;

#line 282 "solutions.m"
    {
#line 282 "solutions.m"
      mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_110_117_109_95_115_111_108_117_116_105_111_110_115_95_95_91_50_93_95_49_3_p_1(mercury__solutions__TypeInfo_for_T_14, mercury__solutions__HeadVar__2_2, mercury__solutions__List_3);
#line 282 "solutions.m"
      return;
    }
#line 282 "solutions.m"
  }
#line 268 "solutions.m"
}

#line 266 "solutions.m"
void MR_CALL 
mercury__solutions__assert_num_solutions_3_p_0(
#line 266 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_14,
#line 266 "solutions.m"
  MR_Word mercury__solutions___Pred_1,
#line 266 "solutions.m"
  MR_Word mercury__solutions__HeadVar__2_2,
#line 266 "solutions.m"
  MR_Word * mercury__solutions__List_3)
#line 266 "solutions.m"
{
#line 278 "solutions.m"
  {
#line 278 "solutions.m"
    MR_bool mercury__solutions__succeeded;

#line 278 "solutions.m"
    {
#line 278 "solutions.m"
      mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_110_117_109_95_115_111_108_117_116_105_111_110_115_95_95_91_50_93_95_48_3_p_0(mercury__solutions__TypeInfo_for_T_14, mercury__solutions__HeadVar__2_2, mercury__solutions__List_3);
#line 278 "solutions.m"
      return;
    }
#line 278 "solutions.m"
  }
#line 266 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_1_1(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_solutions_2_p_1_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_solutions_2_p_1_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__commit_0, 1);
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_1_2(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_solutions_2_p_1_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_solutions_2_p_1_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    {
#line 385 "solutions.m"
      MR_Box mercury__solutions__conv2_Acc0_25;

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__TrailPtr_21 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 10671 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1


		{
#line 754 "solutions.m"
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
#line 10697 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 839 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_for_T_8 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__HeapPtr_19 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Answer0_23 ;
		{
#line 839 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 10720 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Answer_24  = (MR_Box) NewVal;
#line 839 "solutions.m"
}
#line 385 "solutions.m"
      {
#line 385 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_13_13, (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Mutvar_22, &mercury__solutions__conv2_Acc0_25);
      }
#line 385 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Acc0_25 = ((MR_Word) mercury__solutions__conv2_Acc0_25);
#line 55 "list.opt"
      {
#line 55 "list.opt"
        MR_Word base;
#line 55 "list.opt"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 55 "list.opt"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Acc1_26 = base;
#line 55 "list.opt"
        MR_hl_field(MR_mktag(1), base, 0) = (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Answer_24;
#line 55 "list.opt"
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Acc0_25));
#line 55 "list.opt"
      }
#line 387 "solutions.m"
      {
#line 387 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_13_13, (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Mutvar_22, ((MR_Box) ((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Acc1_26)));
      }
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1


		{
#line 754 "solutions.m"
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
#line 10773 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 392 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__succeeded = MR_FALSE;
#line 392 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__succeeded)
#line 392 "solutions.m"
        {
#line 392 "solutions.m"
          mercury__solutions__builtin_solutions_2_p_1_1(mercury__solutions__env_ptr);
#line 392 "solutions.m"
          return;
        }
#line 376 "solutions.m"
    }
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_1_3(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_solutions_2_p_1_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_solutions_2_p_1_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__commit_0) == 0)
#line 376 "solutions.m"
      {
#line 376 "solutions.m"
        {
#line 376 "solutions.m"
          void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Generator_3, (MR_Integer) 1)));

#line 376 "solutions.m"
          {
#line 376 "solutions.m"
            mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Generator_3), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Answer0_23, mercury__solutions__builtin_solutions_2_p_1_2, mercury__solutions__env_ptr);
          }
#line 376 "solutions.m"
        }
#line 376 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__succeeded = MR_FALSE;
#line 376 "solutions.m"
      }
#line 376 "solutions.m"
    else
#line 376 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__succeeded = MR_TRUE;
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 258 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_solutions_2_p_1(
#line 258 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_8,
#line 258 "solutions.m"
  MR_Word mercury__solutions__Generator_3,
#line 258 "solutions.m"
  MR_Word * mercury__solutions__UnsortedList_4)
#line 258 "solutions.m"
{
#line 258 "solutions.m"
  {
#line 258 "solutions.m"
    struct mercury__solutions__builtin_solutions_2_p_1_env_0_s mercury__solutions__env;

#line 258 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_for_T_8 = mercury__solutions__TypeInfo_for_T_8;
#line 258 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_1_env_0__Generator_3 = mercury__solutions__Generator_3;
#line 261 "solutions.m"
    {
#line 261 "solutions.m"
      MR_Word mercury__solutions__TypeCtorInfo_12_12 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 261 "solutions.m"
      MR_Word mercury__solutions__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 261 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_20;
#line 372 "solutions.m"
      MR_Word mercury__solutions__conv0_Mutvar_22;

#line 10869 "solutions.c"
      {
#line 10871 "solutions.c"
        MR_Word base;
#line 10873 "solutions.c"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10875 "solutions.c"
        (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_13_13 = base;
#line 10877 "solutions.c"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__solutions__TypeCtorInfo_12_12));
#line 10879 "solutions.c"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_for_T_8));
#line 10881 "solutions.c"
      }
#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 10909 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_1_env_0__HeapPtr_19  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_20  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_1_env_0__TrailPtr_21  = TrailPtr;
#line 612 "solutions.m"
}
#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 10930 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 372 "solutions.m"
      {
#line 372 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_13_13, ((MR_Box) (mercury__solutions__V_7_7)), &mercury__solutions__conv0_Mutvar_22);
      }
#line 372 "solutions.m"
      (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_1_env_0__Mutvar_22 = (MR_Word) mercury__solutions__conv0_Mutvar_22;
#line 376 "solutions.m"
      {
#line 376 "solutions.m"
        mercury__solutions__builtin_solutions_2_p_1_3(&mercury__solutions__env);
      }
#line 393 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_1_env_0__succeeded))
#line 395 "solutions.m"
        {
#line 395 "solutions.m"
          MR_Word mercury__solutions__STATE_VARIABLE_Accumulator_18_27;
#line 402 "solutions.m"
          MR_Box mercury__solutions__conv3_STATE_VARIABLE_Accumulator_18_27;
#line 851 "solutions.m"
          MR_Box mercury__solutions__conv4_NewVal;

#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 10971 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 402 "solutions.m"
          {
#line 402 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_13_13, (MR_Word) (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_1_env_0__Mutvar_22, &mercury__solutions__conv3_STATE_VARIABLE_Accumulator_18_27);
          }
#line 402 "solutions.m"
          mercury__solutions__STATE_VARIABLE_Accumulator_18_27 = ((MR_Word) mercury__solutions__conv3_STATE_VARIABLE_Accumulator_18_27);
#line 851 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_13_13 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_20 ;
	OldVal = (MR_Word) ((MR_Box) (mercury__solutions__STATE_VARIABLE_Accumulator_18_27)) ;
		{
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 11001 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 mercury__solutions__conv4_NewVal  = (MR_Box) NewVal;
#line 851 "solutions.m"
          *mercury__solutions__UnsortedList_4 = ((MR_Word) mercury__solutions__conv4_NewVal);
#line 851 "solutions.m"
}
#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_20 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 11024 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 11042 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 395 "solutions.m"
        }
#line 261 "solutions.m"
    }
#line 258 "solutions.m"
  }
#line 258 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_0_1(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_solutions_2_p_0_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_solutions_2_p_0_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__commit_0, 1);
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_0_2(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_solutions_2_p_0_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_solutions_2_p_0_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    {
#line 385 "solutions.m"
      MR_Box mercury__solutions__conv2_Acc0_25;

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__TrailPtr_21 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 11108 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0


		{
#line 754 "solutions.m"
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
#line 11134 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 839 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_for_T_8 ;
	SolutionsHeapPtr =  (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__HeapPtr_19 ;
	OldVal = (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Answer0_23 ;
		{
#line 839 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 11157 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Answer_24  = (MR_Box) NewVal;
#line 839 "solutions.m"
}
#line 385 "solutions.m"
      {
#line 385 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_13_13, (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Mutvar_22, &mercury__solutions__conv2_Acc0_25);
      }
#line 385 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Acc0_25 = ((MR_Word) mercury__solutions__conv2_Acc0_25);
#line 55 "list.opt"
      {
#line 55 "list.opt"
        MR_Word base;
#line 55 "list.opt"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 55 "list.opt"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Acc1_26 = base;
#line 55 "list.opt"
        MR_hl_field(MR_mktag(1), base, 0) = (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Answer_24;
#line 55 "list.opt"
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Acc0_25));
#line 55 "list.opt"
      }
#line 387 "solutions.m"
      {
#line 387 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_13_13, (MR_Word) (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Mutvar_22, ((MR_Box) ((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Acc1_26)));
      }
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0


		{
#line 754 "solutions.m"
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
#line 11210 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 392 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__succeeded = MR_FALSE;
#line 392 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__succeeded)
#line 392 "solutions.m"
        {
#line 392 "solutions.m"
          mercury__solutions__builtin_solutions_2_p_0_1(mercury__solutions__env_ptr);
#line 392 "solutions.m"
          return;
        }
#line 376 "solutions.m"
    }
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 376 "solutions.m"
static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_0_3(
#line 376 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 376 "solutions.m"
{
#line 376 "solutions.m"
  {
#line 376 "solutions.m"
    struct mercury__solutions__builtin_solutions_2_p_0_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__builtin_solutions_2_p_0_env_0_s *) mercury__solutions__env_ptr_arg;

#line 376 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__commit_0) == 0)
#line 376 "solutions.m"
      {
#line 376 "solutions.m"
        {
#line 376 "solutions.m"
          void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Generator_3, (MR_Integer) 1)));

#line 376 "solutions.m"
          {
#line 376 "solutions.m"
            mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Generator_3), &(mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Answer0_23, mercury__solutions__builtin_solutions_2_p_0_2, mercury__solutions__env_ptr);
          }
#line 376 "solutions.m"
        }
#line 376 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__succeeded = MR_FALSE;
#line 376 "solutions.m"
      }
#line 376 "solutions.m"
    else
#line 376 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__succeeded = MR_TRUE;
#line 376 "solutions.m"
  }
#line 376 "solutions.m"
}

#line 256 "solutions.m"
void MR_CALL 
mercury__solutions__builtin_solutions_2_p_0(
#line 256 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_8,
#line 256 "solutions.m"
  MR_Word mercury__solutions__Generator_3,
#line 256 "solutions.m"
  MR_Word * mercury__solutions__UnsortedList_4)
#line 256 "solutions.m"
{
#line 256 "solutions.m"
  {
#line 256 "solutions.m"
    struct mercury__solutions__builtin_solutions_2_p_0_env_0_s mercury__solutions__env;

#line 256 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_for_T_8 = mercury__solutions__TypeInfo_for_T_8;
#line 256 "solutions.m"
    (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_0_env_0__Generator_3 = mercury__solutions__Generator_3;
#line 261 "solutions.m"
    {
#line 261 "solutions.m"
      MR_Word mercury__solutions__TypeCtorInfo_12_12 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 261 "solutions.m"
      MR_Word mercury__solutions__UnsortedList0_5;
#line 261 "solutions.m"
      MR_Word mercury__solutions__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 261 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_20;
#line 372 "solutions.m"
      MR_Word mercury__solutions__conv0_Mutvar_22;

#line 11308 "solutions.c"
      {
#line 11310 "solutions.c"
        MR_Word base;
#line 11312 "solutions.c"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11314 "solutions.c"
        (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_13_13 = base;
#line 11316 "solutions.c"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__solutions__TypeCtorInfo_12_12));
#line 11318 "solutions.c"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_for_T_8));
#line 11320 "solutions.c"
      }
#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 11348 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_0_env_0__HeapPtr_19  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_20  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_0_env_0__TrailPtr_21  = TrailPtr;
#line 612 "solutions.m"
}
#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 11369 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 372 "solutions.m"
      {
#line 372 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_13_13, ((MR_Box) (mercury__solutions__V_7_7)), &mercury__solutions__conv0_Mutvar_22);
      }
#line 372 "solutions.m"
      (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_0_env_0__Mutvar_22 = (MR_Word) mercury__solutions__conv0_Mutvar_22;
#line 376 "solutions.m"
      {
#line 376 "solutions.m"
        mercury__solutions__builtin_solutions_2_p_0_3(&mercury__solutions__env);
      }
#line 393 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_0_env_0__succeeded))
#line 395 "solutions.m"
        {
#line 395 "solutions.m"
          MR_Word mercury__solutions__STATE_VARIABLE_Accumulator_18_27;
#line 402 "solutions.m"
          MR_Box mercury__solutions__conv3_STATE_VARIABLE_Accumulator_18_27;
#line 851 "solutions.m"
          MR_Box mercury__solutions__conv4_NewVal;

#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 11410 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 402 "solutions.m"
          {
#line 402 "solutions.m"
            mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_13_13, (MR_Word) (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_0_env_0__Mutvar_22, &mercury__solutions__conv3_STATE_VARIABLE_Accumulator_18_27);
          }
#line 402 "solutions.m"
          mercury__solutions__STATE_VARIABLE_Accumulator_18_27 = ((MR_Word) mercury__solutions__conv3_STATE_VARIABLE_Accumulator_18_27);
#line 851 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T =  (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_13_13 ;
	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_20 ;
	OldVal = (MR_Word) ((MR_Box) (mercury__solutions__STATE_VARIABLE_Accumulator_18_27)) ;
		{
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 11440 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 mercury__solutions__conv4_NewVal  = (MR_Box) NewVal;
#line 851 "solutions.m"
          mercury__solutions__UnsortedList0_5 = ((MR_Word) mercury__solutions__conv4_NewVal);
#line 851 "solutions.m"
}
#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_20 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 11463 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 11481 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 395 "solutions.m"
        }
#line 278 "solutions.m"
      if ((mercury__solutions__UnsortedList0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 276 "solutions.m"
        {
#line 277 "solutions.m"
          {
#line 277 "solutions.m"
            mercury__require__unexpected_3_p_0((MR_String) "solutions", (MR_String) "predicate \140solutions.assert_num_solutions\'/3", (MR_String) "no solutions");
#line 277 "solutions.m"
            return;
          }
#line 276 "solutions.m"
        }
#line 278 "solutions.m"
      else
#line 280 "solutions.m"
        *mercury__solutions__UnsortedList_4 = mercury__solutions__UnsortedList0_5;
#line 261 "solutions.m"
    }
#line 256 "solutions.m"
  }
#line 256 "solutions.m"
}

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_5_1(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 503 "solutions.m"
{
#line 503 "solutions.m"
  {
#line 503 "solutions.m"
    struct mercury__solutions__do_while_4_p_5_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_5_env_0_s *) mercury__solutions__env_ptr_arg;

#line 503 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__commit_0, 1);
#line 503 "solutions.m"
  }
#line 503 "solutions.m"
}

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_5_2(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 503 "solutions.m"
{
#line 503 "solutions.m"
  {
#line 503 "solutions.m"
    struct mercury__solutions__do_while_4_p_5_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_5_env_0_s *) mercury__solutions__env_ptr_arg;

#line 503 "solutions.m"
    {
#line 568 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 568 "solutions.m"
      MR_Box mercury__solutions__conv2_More_15;

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__TrailPtr_10 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 11566 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5


		{
#line 754 "solutions.m"
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
#line 11592 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 839 "solutions.m"
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
#line 839 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 11615 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Answer_13  = (MR_Box) NewVal;
#line 839 "solutions.m"
}
#line 509 "solutions.m"
      {
#line 509 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T2_22, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Acc0_14);
      }
#line 568 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 568 "solutions.m"
      {
#line 568 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Answer_13, &mercury__solutions__conv2_More_15, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Acc1_16);
      }
#line 568 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__More_15 = ((MR_Word) mercury__solutions__conv2_More_15);
#line 569 "solutions.m"
      {
#line 569 "solutions.m"
        mercury__builtin__impure_true_0_p_0();
      }
#line 511 "solutions.m"
      {
#line 511 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T2_22, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Acc1_16);
      }
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5


		{
#line 754 "solutions.m"
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
#line 11666 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 516 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__succeeded = ((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__More_15 == (MR_Integer) 0);
#line 503 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__succeeded)
#line 503 "solutions.m"
        {
#line 989 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5


		{
#line 989 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif

#line 11690 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 989 "solutions.m"
}
#line 984 "solutions.m"
          {
#line 984 "solutions.m"
            mercury__solutions__do_while_4_p_5_1(mercury__solutions__env_ptr);
#line 984 "solutions.m"
            return;
          }
#line 503 "solutions.m"
        }
#line 503 "solutions.m"
    }
#line 503 "solutions.m"
  }
#line 503 "solutions.m"
}

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_5_3(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 503 "solutions.m"
{
#line 503 "solutions.m"
  {
#line 503 "solutions.m"
    struct mercury__solutions__do_while_4_p_5_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_5_env_0_s *) mercury__solutions__env_ptr_arg;

#line 503 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__commit_0) == 0)
#line 503 "solutions.m"
      {
#line 503 "solutions.m"
        {
#line 503 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 503 "solutions.m"
          {
#line 503 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Answer0_12, mercury__solutions__do_while_4_p_5_2, mercury__solutions__env_ptr);
          }
#line 503 "solutions.m"
        }
#line 503 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__succeeded = MR_FALSE;
#line 503 "solutions.m"
      }
#line 503 "solutions.m"
    else
#line 503 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_5_env_0__succeeded = MR_TRUE;
#line 503 "solutions.m"
  }
#line 503 "solutions.m"
}

#line 192 "solutions.m"
void MR_CALL 
mercury__solutions__do_while_4_p_5(
#line 192 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_21,
#line 192 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T2_22,
#line 192 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 192 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 192 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_17,
#line 192 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_18)
#line 192 "solutions.m"
{
#line 192 "solutions.m"
  {
#line 192 "solutions.m"
    struct mercury__solutions__do_while_4_p_5_env_0_s mercury__solutions__env;

#line 192 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T_21 = mercury__solutions__TypeInfo_for_T_21;
#line 192 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T2_22 = mercury__solutions__TypeInfo_for_T2_22;
#line 192 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_5_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 192 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_5_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 498 "solutions.m"
    {
#line 498 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;
#line 498 "solutions.m"
      MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_19_19;

#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 11816 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__do_while_4_p_5_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__do_while_4_p_5_env_0__TrailPtr_10  = TrailPtr;
#line 612 "solutions.m"
}
#line 500 "solutions.m"
      {
#line 500 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_1((mercury__solutions__env).mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T2_22, mercury__solutions__STATE_VARIABLE_Accumulator_0_17, &(mercury__solutions__env).mercury__solutions__do_while_4_p_5_env_0__Mutvar_11);
      }
#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 11842 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 503 "solutions.m"
      {
#line 503 "solutions.m"
        mercury__solutions__do_while_4_p_5_3(&mercury__solutions__env);
      }
#line 518 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__do_while_4_p_5_env_0__succeeded))
#line 999 "solutions.m"
        {
#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 11869 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 999 "solutions.m"
        }
#line 521 "solutions.m"
      {
#line 521 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T2_22, (mercury__solutions__env).mercury__solutions__do_while_4_p_5_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_19_19);
      }
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 11899 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_18  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 11920 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 11938 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 498 "solutions.m"
    }
#line 192 "solutions.m"
  }
#line 192 "solutions.m"
}

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_4_1(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 503 "solutions.m"
{
#line 503 "solutions.m"
  {
#line 503 "solutions.m"
    struct mercury__solutions__do_while_4_p_4_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_4_env_0_s *) mercury__solutions__env_ptr_arg;

#line 503 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__commit_0, 1);
#line 503 "solutions.m"
  }
#line 503 "solutions.m"
}

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_4_2(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 503 "solutions.m"
{
#line 503 "solutions.m"
  {
#line 503 "solutions.m"
    struct mercury__solutions__do_while_4_p_4_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_4_env_0_s *) mercury__solutions__env_ptr_arg;

#line 503 "solutions.m"
    {
#line 561 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 561 "solutions.m"
      MR_Box mercury__solutions__conv2_More_15;

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__TrailPtr_10 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 12004 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4


		{
#line 754 "solutions.m"
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
#line 12030 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 839 "solutions.m"
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
#line 839 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 12053 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Answer_13  = (MR_Box) NewVal;
#line 839 "solutions.m"
}
#line 509 "solutions.m"
      {
#line 509 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T2_22, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Acc0_14);
      }
#line 561 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 561 "solutions.m"
      {
#line 561 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Answer_13, &mercury__solutions__conv2_More_15, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Acc1_16);
      }
#line 561 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__More_15 = ((MR_Word) mercury__solutions__conv2_More_15);
#line 511 "solutions.m"
      {
#line 511 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T2_22, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Acc1_16);
      }
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4


		{
#line 754 "solutions.m"
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
#line 12099 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 516 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__succeeded = ((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__More_15 == (MR_Integer) 0);
#line 503 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__succeeded)
#line 503 "solutions.m"
        {
#line 989 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4


		{
#line 989 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif

#line 12123 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 989 "solutions.m"
}
#line 984 "solutions.m"
          {
#line 984 "solutions.m"
            mercury__solutions__do_while_4_p_4_1(mercury__solutions__env_ptr);
#line 984 "solutions.m"
            return;
          }
#line 503 "solutions.m"
        }
#line 503 "solutions.m"
    }
#line 503 "solutions.m"
  }
#line 503 "solutions.m"
}

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_4_3(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 503 "solutions.m"
{
#line 503 "solutions.m"
  {
#line 503 "solutions.m"
    struct mercury__solutions__do_while_4_p_4_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_4_env_0_s *) mercury__solutions__env_ptr_arg;

#line 503 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__commit_0) == 0)
#line 503 "solutions.m"
      {
#line 503 "solutions.m"
        {
#line 503 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 503 "solutions.m"
          {
#line 503 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Answer0_12, mercury__solutions__do_while_4_p_4_2, mercury__solutions__env_ptr);
          }
#line 503 "solutions.m"
        }
#line 503 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__succeeded = MR_FALSE;
#line 503 "solutions.m"
      }
#line 503 "solutions.m"
    else
#line 503 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_4_env_0__succeeded = MR_TRUE;
#line 503 "solutions.m"
  }
#line 503 "solutions.m"
}

#line 190 "solutions.m"
void MR_CALL 
mercury__solutions__do_while_4_p_4(
#line 190 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_21,
#line 190 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T2_22,
#line 190 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 190 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 190 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_17,
#line 190 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_18)
#line 190 "solutions.m"
{
#line 190 "solutions.m"
  {
#line 190 "solutions.m"
    struct mercury__solutions__do_while_4_p_4_env_0_s mercury__solutions__env;

#line 190 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T_21 = mercury__solutions__TypeInfo_for_T_21;
#line 190 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T2_22 = mercury__solutions__TypeInfo_for_T2_22;
#line 190 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_4_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 190 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_4_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 498 "solutions.m"
    {
#line 498 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;
#line 498 "solutions.m"
      MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_19_19;

#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 12249 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__do_while_4_p_4_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__do_while_4_p_4_env_0__TrailPtr_10  = TrailPtr;
#line 612 "solutions.m"
}
#line 500 "solutions.m"
      {
#line 500 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_1((mercury__solutions__env).mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T2_22, mercury__solutions__STATE_VARIABLE_Accumulator_0_17, &(mercury__solutions__env).mercury__solutions__do_while_4_p_4_env_0__Mutvar_11);
      }
#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 12275 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 503 "solutions.m"
      {
#line 503 "solutions.m"
        mercury__solutions__do_while_4_p_4_3(&mercury__solutions__env);
      }
#line 518 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__do_while_4_p_4_env_0__succeeded))
#line 999 "solutions.m"
        {
#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 12302 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 999 "solutions.m"
        }
#line 521 "solutions.m"
      {
#line 521 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T2_22, (mercury__solutions__env).mercury__solutions__do_while_4_p_4_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_19_19);
      }
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 12332 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_18  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 12353 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 12371 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 498 "solutions.m"
    }
#line 190 "solutions.m"
  }
#line 190 "solutions.m"
}

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_3_1(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 503 "solutions.m"
{
#line 503 "solutions.m"
  {
#line 503 "solutions.m"
    struct mercury__solutions__do_while_4_p_3_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_3_env_0_s *) mercury__solutions__env_ptr_arg;

#line 503 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__commit_0, 1);
#line 503 "solutions.m"
  }
#line 503 "solutions.m"
}

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_3_2(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 503 "solutions.m"
{
#line 503 "solutions.m"
  {
#line 503 "solutions.m"
    struct mercury__solutions__do_while_4_p_3_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_3_env_0_s *) mercury__solutions__env_ptr_arg;

#line 503 "solutions.m"
    {
#line 564 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 564 "solutions.m"
      MR_Box mercury__solutions__conv2_More_15;

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__TrailPtr_10 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 12437 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3


		{
#line 754 "solutions.m"
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
#line 12463 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 839 "solutions.m"
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
#line 839 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 12486 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Answer_13  = (MR_Box) NewVal;
#line 839 "solutions.m"
}
#line 509 "solutions.m"
      {
#line 509 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T2_22, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Acc0_14);
      }
#line 564 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 564 "solutions.m"
      {
#line 564 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Answer_13, &mercury__solutions__conv2_More_15, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Acc1_16);
      }
#line 564 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__More_15 = ((MR_Word) mercury__solutions__conv2_More_15);
#line 511 "solutions.m"
      {
#line 511 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T2_22, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Acc1_16);
      }
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3


		{
#line 754 "solutions.m"
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
#line 12532 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 516 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__succeeded = ((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__More_15 == (MR_Integer) 0);
#line 503 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__succeeded)
#line 503 "solutions.m"
        {
#line 989 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3


		{
#line 989 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif

#line 12556 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 989 "solutions.m"
}
#line 984 "solutions.m"
          {
#line 984 "solutions.m"
            mercury__solutions__do_while_4_p_3_1(mercury__solutions__env_ptr);
#line 984 "solutions.m"
            return;
          }
#line 503 "solutions.m"
        }
#line 503 "solutions.m"
    }
#line 503 "solutions.m"
  }
#line 503 "solutions.m"
}

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_3_3(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 503 "solutions.m"
{
#line 503 "solutions.m"
  {
#line 503 "solutions.m"
    struct mercury__solutions__do_while_4_p_3_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_3_env_0_s *) mercury__solutions__env_ptr_arg;

#line 503 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__commit_0) == 0)
#line 503 "solutions.m"
      {
#line 503 "solutions.m"
        {
#line 503 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 503 "solutions.m"
          {
#line 503 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Answer0_12, mercury__solutions__do_while_4_p_3_2, mercury__solutions__env_ptr);
          }
#line 503 "solutions.m"
        }
#line 503 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__succeeded = MR_FALSE;
#line 503 "solutions.m"
      }
#line 503 "solutions.m"
    else
#line 503 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_3_env_0__succeeded = MR_TRUE;
#line 503 "solutions.m"
  }
#line 503 "solutions.m"
}

#line 188 "solutions.m"
void MR_CALL 
mercury__solutions__do_while_4_p_3(
#line 188 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_21,
#line 188 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T2_22,
#line 188 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 188 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 188 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_17,
#line 188 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_18)
#line 188 "solutions.m"
{
#line 188 "solutions.m"
  {
#line 188 "solutions.m"
    struct mercury__solutions__do_while_4_p_3_env_0_s mercury__solutions__env;

#line 188 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T_21 = mercury__solutions__TypeInfo_for_T_21;
#line 188 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T2_22 = mercury__solutions__TypeInfo_for_T2_22;
#line 188 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_3_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 188 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_3_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 498 "solutions.m"
    {
#line 498 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;
#line 498 "solutions.m"
      MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_19_19;

#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 12682 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__do_while_4_p_3_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__do_while_4_p_3_env_0__TrailPtr_10  = TrailPtr;
#line 612 "solutions.m"
}
#line 500 "solutions.m"
      {
#line 500 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T2_22, mercury__solutions__STATE_VARIABLE_Accumulator_0_17, &(mercury__solutions__env).mercury__solutions__do_while_4_p_3_env_0__Mutvar_11);
      }
#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 12708 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 503 "solutions.m"
      {
#line 503 "solutions.m"
        mercury__solutions__do_while_4_p_3_3(&mercury__solutions__env);
      }
#line 518 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__do_while_4_p_3_env_0__succeeded))
#line 999 "solutions.m"
        {
#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 12735 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 999 "solutions.m"
        }
#line 521 "solutions.m"
      {
#line 521 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T2_22, (mercury__solutions__env).mercury__solutions__do_while_4_p_3_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_19_19);
      }
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 12765 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_18  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 12786 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 12804 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 498 "solutions.m"
    }
#line 188 "solutions.m"
  }
#line 188 "solutions.m"
}

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_2_1(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 503 "solutions.m"
{
#line 503 "solutions.m"
  {
#line 503 "solutions.m"
    struct mercury__solutions__do_while_4_p_2_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_2_env_0_s *) mercury__solutions__env_ptr_arg;

#line 503 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__commit_0, 1);
#line 503 "solutions.m"
  }
#line 503 "solutions.m"
}

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_2_2(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 503 "solutions.m"
{
#line 503 "solutions.m"
  {
#line 503 "solutions.m"
    struct mercury__solutions__do_while_4_p_2_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_2_env_0_s *) mercury__solutions__env_ptr_arg;

#line 503 "solutions.m"
    {
#line 568 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 568 "solutions.m"
      MR_Box mercury__solutions__conv2_More_15;

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__TrailPtr_10 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 12870 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2


		{
#line 754 "solutions.m"
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
#line 12896 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 839 "solutions.m"
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
#line 839 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 12919 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Answer_13  = (MR_Box) NewVal;
#line 839 "solutions.m"
}
#line 509 "solutions.m"
      {
#line 509 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T2_22, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Acc0_14);
      }
#line 568 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 568 "solutions.m"
      {
#line 568 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Answer_13, &mercury__solutions__conv2_More_15, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Acc1_16);
      }
#line 568 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__More_15 = ((MR_Word) mercury__solutions__conv2_More_15);
#line 569 "solutions.m"
      {
#line 569 "solutions.m"
        mercury__builtin__impure_true_0_p_0();
      }
#line 511 "solutions.m"
      {
#line 511 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T2_22, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Acc1_16);
      }
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2


		{
#line 754 "solutions.m"
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
#line 12970 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 516 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__succeeded = ((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__More_15 == (MR_Integer) 0);
#line 503 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__succeeded)
#line 503 "solutions.m"
        {
#line 989 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2


		{
#line 989 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif

#line 12994 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 989 "solutions.m"
}
#line 984 "solutions.m"
          {
#line 984 "solutions.m"
            mercury__solutions__do_while_4_p_2_1(mercury__solutions__env_ptr);
#line 984 "solutions.m"
            return;
          }
#line 503 "solutions.m"
        }
#line 503 "solutions.m"
    }
#line 503 "solutions.m"
  }
#line 503 "solutions.m"
}

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_2_3(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 503 "solutions.m"
{
#line 503 "solutions.m"
  {
#line 503 "solutions.m"
    struct mercury__solutions__do_while_4_p_2_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_2_env_0_s *) mercury__solutions__env_ptr_arg;

#line 503 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__commit_0) == 0)
#line 503 "solutions.m"
      {
#line 503 "solutions.m"
        {
#line 503 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 503 "solutions.m"
          {
#line 503 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Answer0_12, mercury__solutions__do_while_4_p_2_2, mercury__solutions__env_ptr);
          }
#line 503 "solutions.m"
        }
#line 503 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__succeeded = MR_FALSE;
#line 503 "solutions.m"
      }
#line 503 "solutions.m"
    else
#line 503 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_2_env_0__succeeded = MR_TRUE;
#line 503 "solutions.m"
  }
#line 503 "solutions.m"
}

#line 186 "solutions.m"
void MR_CALL 
mercury__solutions__do_while_4_p_2(
#line 186 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_21,
#line 186 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T2_22,
#line 186 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 186 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 186 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_17,
#line 186 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_18)
#line 186 "solutions.m"
{
#line 186 "solutions.m"
  {
#line 186 "solutions.m"
    struct mercury__solutions__do_while_4_p_2_env_0_s mercury__solutions__env;

#line 186 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T_21 = mercury__solutions__TypeInfo_for_T_21;
#line 186 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T2_22 = mercury__solutions__TypeInfo_for_T2_22;
#line 186 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_2_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 186 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_2_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 498 "solutions.m"
    {
#line 498 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;
#line 498 "solutions.m"
      MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_19_19;

#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 13120 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__do_while_4_p_2_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__do_while_4_p_2_env_0__TrailPtr_10  = TrailPtr;
#line 612 "solutions.m"
}
#line 500 "solutions.m"
      {
#line 500 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_1((mercury__solutions__env).mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T2_22, mercury__solutions__STATE_VARIABLE_Accumulator_0_17, &(mercury__solutions__env).mercury__solutions__do_while_4_p_2_env_0__Mutvar_11);
      }
#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 13146 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 503 "solutions.m"
      {
#line 503 "solutions.m"
        mercury__solutions__do_while_4_p_2_3(&mercury__solutions__env);
      }
#line 518 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__do_while_4_p_2_env_0__succeeded))
#line 999 "solutions.m"
        {
#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 13173 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 999 "solutions.m"
        }
#line 521 "solutions.m"
      {
#line 521 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T2_22, (mercury__solutions__env).mercury__solutions__do_while_4_p_2_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_19_19);
      }
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 13203 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_18  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 13224 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 13242 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 498 "solutions.m"
    }
#line 186 "solutions.m"
  }
#line 186 "solutions.m"
}

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_1_1(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 503 "solutions.m"
{
#line 503 "solutions.m"
  {
#line 503 "solutions.m"
    struct mercury__solutions__do_while_4_p_1_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_1_env_0_s *) mercury__solutions__env_ptr_arg;

#line 503 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__commit_0, 1);
#line 503 "solutions.m"
  }
#line 503 "solutions.m"
}

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_1_2(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 503 "solutions.m"
{
#line 503 "solutions.m"
  {
#line 503 "solutions.m"
    struct mercury__solutions__do_while_4_p_1_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_1_env_0_s *) mercury__solutions__env_ptr_arg;

#line 503 "solutions.m"
    {
#line 561 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 561 "solutions.m"
      MR_Box mercury__solutions__conv2_More_15;

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__TrailPtr_10 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 13308 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1


		{
#line 754 "solutions.m"
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
#line 13334 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 839 "solutions.m"
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
#line 839 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 13357 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Answer_13  = (MR_Box) NewVal;
#line 839 "solutions.m"
}
#line 509 "solutions.m"
      {
#line 509 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T2_22, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Acc0_14);
      }
#line 561 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 561 "solutions.m"
      {
#line 561 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Answer_13, &mercury__solutions__conv2_More_15, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Acc1_16);
      }
#line 561 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__More_15 = ((MR_Word) mercury__solutions__conv2_More_15);
#line 511 "solutions.m"
      {
#line 511 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T2_22, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Acc1_16);
      }
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1


		{
#line 754 "solutions.m"
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
#line 13403 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 516 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__succeeded = ((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__More_15 == (MR_Integer) 0);
#line 503 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__succeeded)
#line 503 "solutions.m"
        {
#line 989 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1


		{
#line 989 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif

#line 13427 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 989 "solutions.m"
}
#line 984 "solutions.m"
          {
#line 984 "solutions.m"
            mercury__solutions__do_while_4_p_1_1(mercury__solutions__env_ptr);
#line 984 "solutions.m"
            return;
          }
#line 503 "solutions.m"
        }
#line 503 "solutions.m"
    }
#line 503 "solutions.m"
  }
#line 503 "solutions.m"
}

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_1_3(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 503 "solutions.m"
{
#line 503 "solutions.m"
  {
#line 503 "solutions.m"
    struct mercury__solutions__do_while_4_p_1_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_1_env_0_s *) mercury__solutions__env_ptr_arg;

#line 503 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__commit_0) == 0)
#line 503 "solutions.m"
      {
#line 503 "solutions.m"
        {
#line 503 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 503 "solutions.m"
          {
#line 503 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Answer0_12, mercury__solutions__do_while_4_p_1_2, mercury__solutions__env_ptr);
          }
#line 503 "solutions.m"
        }
#line 503 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__succeeded = MR_FALSE;
#line 503 "solutions.m"
      }
#line 503 "solutions.m"
    else
#line 503 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_1_env_0__succeeded = MR_TRUE;
#line 503 "solutions.m"
  }
#line 503 "solutions.m"
}

#line 184 "solutions.m"
void MR_CALL 
mercury__solutions__do_while_4_p_1(
#line 184 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_21,
#line 184 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T2_22,
#line 184 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 184 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 184 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_17,
#line 184 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_18)
#line 184 "solutions.m"
{
#line 184 "solutions.m"
  {
#line 184 "solutions.m"
    struct mercury__solutions__do_while_4_p_1_env_0_s mercury__solutions__env;

#line 184 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T_21 = mercury__solutions__TypeInfo_for_T_21;
#line 184 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T2_22 = mercury__solutions__TypeInfo_for_T2_22;
#line 184 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_1_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 184 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_1_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 498 "solutions.m"
    {
#line 498 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;
#line 498 "solutions.m"
      MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_19_19;

#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 13553 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__do_while_4_p_1_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__do_while_4_p_1_env_0__TrailPtr_10  = TrailPtr;
#line 612 "solutions.m"
}
#line 500 "solutions.m"
      {
#line 500 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_1((mercury__solutions__env).mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T2_22, mercury__solutions__STATE_VARIABLE_Accumulator_0_17, &(mercury__solutions__env).mercury__solutions__do_while_4_p_1_env_0__Mutvar_11);
      }
#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 13579 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 503 "solutions.m"
      {
#line 503 "solutions.m"
        mercury__solutions__do_while_4_p_1_3(&mercury__solutions__env);
      }
#line 518 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__do_while_4_p_1_env_0__succeeded))
#line 999 "solutions.m"
        {
#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 13606 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 999 "solutions.m"
        }
#line 521 "solutions.m"
      {
#line 521 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T2_22, (mercury__solutions__env).mercury__solutions__do_while_4_p_1_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_19_19);
      }
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 13636 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_18  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 13657 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 13675 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 498 "solutions.m"
    }
#line 184 "solutions.m"
  }
#line 184 "solutions.m"
}

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_0_1(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 503 "solutions.m"
{
#line 503 "solutions.m"
  {
#line 503 "solutions.m"
    struct mercury__solutions__do_while_4_p_0_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_0_env_0_s *) mercury__solutions__env_ptr_arg;

#line 503 "solutions.m"
    MR_builtin_longjmp((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__commit_0, 1);
#line 503 "solutions.m"
  }
#line 503 "solutions.m"
}

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_0_2(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 503 "solutions.m"
{
#line 503 "solutions.m"
  {
#line 503 "solutions.m"
    struct mercury__solutions__do_while_4_p_0_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_0_env_0_s *) mercury__solutions__env_ptr_arg;

#line 503 "solutions.m"
    {
#line 564 "solutions.m"
      void MR_CALL (* mercury__solutions__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 564 "solutions.m"
      MR_Box mercury__solutions__conv2_More_15;

#line 679 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0

	MR_Word TrailPtr;

	TrailPtr =  (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__TrailPtr_10 ;
		{
#line 679 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif

#line 13741 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 679 "solutions.m"
}
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0


		{
#line 754 "solutions.m"
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
#line 13767 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 839 "solutions.m"
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
#line 839 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 13790 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Answer_13  = (MR_Box) NewVal;
#line 839 "solutions.m"
}
#line 509 "solutions.m"
      {
#line 509 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T2_22, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Mutvar_11, &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Acc0_14);
      }
#line 564 "solutions.m"
      mercury__solutions__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__CollectorPred_6, (MR_Integer) 1)));
#line 564 "solutions.m"
      {
#line 564 "solutions.m"
        mercury__solutions__func_1(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__CollectorPred_6), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Answer_13, &mercury__solutions__conv2_More_15, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Acc0_14, &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Acc1_16);
      }
#line 564 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__More_15 = ((MR_Word) mercury__solutions__conv2_More_15);
#line 511 "solutions.m"
      {
#line 511 "solutions.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T2_22, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Mutvar_11, (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Acc1_16);
      }
#line 754 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0


		{
#line 754 "solutions.m"
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
#line 13836 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 754 "solutions.m"
}
#line 516 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__succeeded = ((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__More_15 == (MR_Integer) 0);
#line 503 "solutions.m"
      if ((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__succeeded)
#line 503 "solutions.m"
        {
#line 989 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0


		{
#line 989 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif

#line 13860 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 989 "solutions.m"
}
#line 984 "solutions.m"
          {
#line 984 "solutions.m"
            mercury__solutions__do_while_4_p_0_1(mercury__solutions__env_ptr);
#line 984 "solutions.m"
            return;
          }
#line 503 "solutions.m"
        }
#line 503 "solutions.m"
    }
#line 503 "solutions.m"
  }
#line 503 "solutions.m"
}

#line 503 "solutions.m"
static void MR_CALL 
mercury__solutions__do_while_4_p_0_3(
#line 503 "solutions.m"
  void * mercury__solutions__env_ptr_arg)
#line 503 "solutions.m"
{
#line 503 "solutions.m"
  {
#line 503 "solutions.m"
    struct mercury__solutions__do_while_4_p_0_env_0_s * mercury__solutions__env_ptr = (struct mercury__solutions__do_while_4_p_0_env_0_s *) mercury__solutions__env_ptr_arg;

#line 503 "solutions.m"
    if (MR_builtin_setjmp((mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__commit_0) == 0)
#line 503 "solutions.m"
      {
#line 503 "solutions.m"
        {
#line 503 "solutions.m"
          void MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__GeneratorPred_5, (MR_Integer) 1)));

#line 503 "solutions.m"
          {
#line 503 "solutions.m"
            mercury__solutions__func_0(((MR_Box) (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__GeneratorPred_5), &(mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Answer0_12, mercury__solutions__do_while_4_p_0_2, mercury__solutions__env_ptr);
          }
#line 503 "solutions.m"
        }
#line 503 "solutions.m"
        (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__succeeded = MR_FALSE;
#line 503 "solutions.m"
      }
#line 503 "solutions.m"
    else
#line 503 "solutions.m"
      (mercury__solutions__env_ptr)->mercury__solutions__do_while_4_p_0_env_0__succeeded = MR_TRUE;
#line 503 "solutions.m"
  }
#line 503 "solutions.m"
}

#line 182 "solutions.m"
void MR_CALL 
mercury__solutions__do_while_4_p_0(
#line 182 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_21,
#line 182 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T2_22,
#line 182 "solutions.m"
  MR_Word mercury__solutions__GeneratorPred_5,
#line 182 "solutions.m"
  MR_Word mercury__solutions__CollectorPred_6,
#line 182 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_0_17,
#line 182 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Accumulator_18)
#line 182 "solutions.m"
{
#line 182 "solutions.m"
  {
#line 182 "solutions.m"
    struct mercury__solutions__do_while_4_p_0_env_0_s mercury__solutions__env;

#line 182 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T_21 = mercury__solutions__TypeInfo_for_T_21;
#line 182 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T2_22 = mercury__solutions__TypeInfo_for_T2_22;
#line 182 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_0_env_0__GeneratorPred_5 = mercury__solutions__GeneratorPred_5;
#line 182 "solutions.m"
    (mercury__solutions__env).mercury__solutions__do_while_4_p_0_env_0__CollectorPred_6 = mercury__solutions__CollectorPred_6;
#line 498 "solutions.m"
    {
#line 498 "solutions.m"
      MR_Word mercury__solutions__SolutionsHeapPtr_9;
#line 498 "solutions.m"
      MR_Box mercury__solutions__STATE_VARIABLE_Accumulator_19_19;

#line 612 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{
#line 612 "solutions.m"

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

#line 13986 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 (mercury__solutions__env).mercury__solutions__do_while_4_p_0_env_0__HeapPtr_8  = HeapPtr;
	 mercury__solutions__SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (mercury__solutions__env).mercury__solutions__do_while_4_p_0_env_0__TrailPtr_10  = TrailPtr;
#line 612 "solutions.m"
}
#line 500 "solutions.m"
      {
#line 500 "solutions.m"
        mercury__mutvar__new_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T2_22, mercury__solutions__STATE_VARIABLE_Accumulator_0_17, &(mercury__solutions__env).mercury__solutions__do_while_4_p_0_env_0__Mutvar_11);
      }
#line 974 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0


		{
#line 974 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif

#line 14012 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 974 "solutions.m"
}
#line 503 "solutions.m"
      {
#line 503 "solutions.m"
        mercury__solutions__do_while_4_p_0_3(&mercury__solutions__env);
      }
#line 518 "solutions.m"
      if (!((mercury__solutions__env).mercury__solutions__do_while_4_p_0_env_0__succeeded))
#line 999 "solutions.m"
        {
#line 1004 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0


		{
#line 1004 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif

#line 14039 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 1004 "solutions.m"
}
#line 999 "solutions.m"
        }
#line 521 "solutions.m"
      {
#line 521 "solutions.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__solutions__env).mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T2_22, (mercury__solutions__env).mercury__solutions__do_while_4_p_0_env_0__Mutvar_11, &mercury__solutions__STATE_VARIABLE_Accumulator_19_19);
      }
#line 851 "solutions.m"
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
#line 851 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);

#line 14069 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Accumulator_18  = (MR_Box) NewVal;
#line 851 "solutions.m"
}
#line 938 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr =  mercury__solutions__SolutionsHeapPtr_9 ;
		{
#line 938 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif

#line 14090 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 938 "solutions.m"
}
#line 717 "solutions.m"
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0


		{
#line 717 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif

#line 14108 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 717 "solutions.m"
}
#line 498 "solutions.m"
    }
#line 182 "solutions.m"
  }
#line 182 "solutions.m"
}

#line 157 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate2_6_p_7(
#line 157 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_19,
#line 157 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_20,
#line 157 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_21,
#line 157 "solutions.m"
  MR_Word mercury__solutions__Generator_7,
#line 157 "solutions.m"
  MR_Word mercury__solutions__Accumulator_8,
#line 157 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc1_0_11,
#line 157 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc1_12,
#line 157 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc2_0_13,
#line 157 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc2_14)
#line 157 "solutions.m"
{
#line 248 "solutions.m"
  {
#line 248 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 248 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc1_15_15;
#line 248 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc2_16_16;
#line 64 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_22;
#line 61 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_V_23;

#line 249 "solutions.m"
    {
#line 249 "solutions.m"
      mercury__solutions__builtin_aggregate2_6_p_7(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__TypeInfo_for_U_20, mercury__solutions__TypeInfo_for_V_21, mercury__solutions__Generator_7, mercury__solutions__Accumulator_8, mercury__solutions__STATE_VARIABLE_Acc1_0_11, &mercury__solutions__STATE_VARIABLE_Acc1_15_15, mercury__solutions__STATE_VARIABLE_Acc2_0_13, &mercury__solutions__STATE_VARIABLE_Acc2_16_16);
    }
#line 64 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_7

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc1_15_15 ;
		{
#line 64 "builtin.opt"

    Y = X;

#line 14175 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc1_12  = (MR_Box) Y;
#line 64 "builtin.opt"
}
#line 61 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_7

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc2_16_16 ;
		{
#line 61 "builtin.opt"

    Y = X;

#line 14195 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc2_14  = (MR_Box) Y;
#line 61 "builtin.opt"
}
#line 248 "solutions.m"
  }
#line 157 "solutions.m"
}

#line 155 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate2_6_p_6(
#line 155 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_19,
#line 155 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_20,
#line 155 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_21,
#line 155 "solutions.m"
  MR_Word mercury__solutions__Generator_7,
#line 155 "solutions.m"
  MR_Word mercury__solutions__Accumulator_8,
#line 155 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc1_0_11,
#line 155 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc1_12,
#line 155 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc2_0_13,
#line 155 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc2_14)
#line 155 "solutions.m"
{
#line 248 "solutions.m"
  {
#line 248 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 248 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc1_15_15;
#line 248 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc2_16_16;
#line 64 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_22;
#line 61 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_V_23;

#line 249 "solutions.m"
    {
#line 249 "solutions.m"
      mercury__solutions__builtin_aggregate2_6_p_6(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__TypeInfo_for_U_20, mercury__solutions__TypeInfo_for_V_21, mercury__solutions__Generator_7, mercury__solutions__Accumulator_8, mercury__solutions__STATE_VARIABLE_Acc1_0_11, &mercury__solutions__STATE_VARIABLE_Acc1_15_15, mercury__solutions__STATE_VARIABLE_Acc2_0_13, &mercury__solutions__STATE_VARIABLE_Acc2_16_16);
    }
#line 64 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_6

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc1_15_15 ;
		{
#line 64 "builtin.opt"

    Y = X;

#line 14261 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc1_12  = (MR_Box) Y;
#line 64 "builtin.opt"
}
#line 61 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_6

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc2_16_16 ;
		{
#line 61 "builtin.opt"

    Y = X;

#line 14281 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc2_14  = (MR_Box) Y;
#line 61 "builtin.opt"
}
#line 248 "solutions.m"
  }
#line 155 "solutions.m"
}

#line 153 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate2_6_p_5(
#line 153 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_19,
#line 153 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_20,
#line 153 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_21,
#line 153 "solutions.m"
  MR_Word mercury__solutions__Generator_7,
#line 153 "solutions.m"
  MR_Word mercury__solutions__Accumulator_8,
#line 153 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc1_0_11,
#line 153 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc1_12,
#line 153 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc2_0_13,
#line 153 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc2_14)
#line 153 "solutions.m"
{
#line 248 "solutions.m"
  {
#line 248 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 248 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc1_15_15;
#line 248 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc2_16_16;
#line 64 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_22;
#line 64 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_V_23;

#line 249 "solutions.m"
    {
#line 249 "solutions.m"
      mercury__solutions__builtin_aggregate2_6_p_5(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__TypeInfo_for_U_20, mercury__solutions__TypeInfo_for_V_21, mercury__solutions__Generator_7, mercury__solutions__Accumulator_8, mercury__solutions__STATE_VARIABLE_Acc1_0_11, &mercury__solutions__STATE_VARIABLE_Acc1_15_15, mercury__solutions__STATE_VARIABLE_Acc2_0_13, &mercury__solutions__STATE_VARIABLE_Acc2_16_16);
    }
#line 64 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_5

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc1_15_15 ;
		{
#line 64 "builtin.opt"

    Y = X;

#line 14347 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc1_12  = (MR_Box) Y;
#line 64 "builtin.opt"
}
#line 64 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_5

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc2_16_16 ;
		{
#line 64 "builtin.opt"

    Y = X;

#line 14367 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc2_14  = (MR_Box) Y;
#line 64 "builtin.opt"
}
#line 248 "solutions.m"
  }
#line 153 "solutions.m"
}

#line 151 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate2_6_p_4(
#line 151 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_19,
#line 151 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_20,
#line 151 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_21,
#line 151 "solutions.m"
  MR_Word mercury__solutions__Generator_7,
#line 151 "solutions.m"
  MR_Word mercury__solutions__Accumulator_8,
#line 151 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc1_0_11,
#line 151 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc1_12,
#line 151 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc2_0_13,
#line 151 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc2_14)
#line 151 "solutions.m"
{
#line 248 "solutions.m"
  {
#line 248 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 248 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc1_15_15;
#line 248 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc2_16_16;
#line 64 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_22;
#line 64 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_V_23;

#line 249 "solutions.m"
    {
#line 249 "solutions.m"
      mercury__solutions__builtin_aggregate2_6_p_4(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__TypeInfo_for_U_20, mercury__solutions__TypeInfo_for_V_21, mercury__solutions__Generator_7, mercury__solutions__Accumulator_8, mercury__solutions__STATE_VARIABLE_Acc1_0_11, &mercury__solutions__STATE_VARIABLE_Acc1_15_15, mercury__solutions__STATE_VARIABLE_Acc2_0_13, &mercury__solutions__STATE_VARIABLE_Acc2_16_16);
    }
#line 64 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_4

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc1_15_15 ;
		{
#line 64 "builtin.opt"

    Y = X;

#line 14433 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc1_12  = (MR_Box) Y;
#line 64 "builtin.opt"
}
#line 64 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_4

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc2_16_16 ;
		{
#line 64 "builtin.opt"

    Y = X;

#line 14453 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc2_14  = (MR_Box) Y;
#line 64 "builtin.opt"
}
#line 248 "solutions.m"
  }
#line 151 "solutions.m"
}

#line 149 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate2_6_p_3(
#line 149 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_19,
#line 149 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_20,
#line 149 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_21,
#line 149 "solutions.m"
  MR_Word mercury__solutions__Generator_7,
#line 149 "solutions.m"
  MR_Word mercury__solutions__Accumulator_8,
#line 149 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc1_0_11,
#line 149 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc1_12,
#line 149 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc2_0_13,
#line 149 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc2_14)
#line 149 "solutions.m"
{
#line 248 "solutions.m"
  {
#line 248 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 248 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc1_15_15;
#line 248 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc2_16_16;
#line 64 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_22;
#line 61 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_V_23;

#line 249 "solutions.m"
    {
#line 249 "solutions.m"
      mercury__solutions__builtin_aggregate2_6_p_3(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__TypeInfo_for_U_20, mercury__solutions__TypeInfo_for_V_21, mercury__solutions__Generator_7, mercury__solutions__Accumulator_8, mercury__solutions__STATE_VARIABLE_Acc1_0_11, &mercury__solutions__STATE_VARIABLE_Acc1_15_15, mercury__solutions__STATE_VARIABLE_Acc2_0_13, &mercury__solutions__STATE_VARIABLE_Acc2_16_16);
    }
#line 64 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_3

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc1_15_15 ;
		{
#line 64 "builtin.opt"

    Y = X;

#line 14519 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc1_12  = (MR_Box) Y;
#line 64 "builtin.opt"
}
#line 61 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_3

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc2_16_16 ;
		{
#line 61 "builtin.opt"

    Y = X;

#line 14539 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc2_14  = (MR_Box) Y;
#line 61 "builtin.opt"
}
#line 248 "solutions.m"
  }
#line 149 "solutions.m"
}

#line 147 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate2_6_p_2(
#line 147 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_19,
#line 147 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_20,
#line 147 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_21,
#line 147 "solutions.m"
  MR_Word mercury__solutions__Generator_7,
#line 147 "solutions.m"
  MR_Word mercury__solutions__Accumulator_8,
#line 147 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc1_0_11,
#line 147 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc1_12,
#line 147 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc2_0_13,
#line 147 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc2_14)
#line 147 "solutions.m"
{
#line 248 "solutions.m"
  {
#line 248 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 248 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc1_15_15;
#line 248 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc2_16_16;
#line 64 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_22;
#line 61 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_V_23;

#line 249 "solutions.m"
    {
#line 249 "solutions.m"
      mercury__solutions__builtin_aggregate2_6_p_2(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__TypeInfo_for_U_20, mercury__solutions__TypeInfo_for_V_21, mercury__solutions__Generator_7, mercury__solutions__Accumulator_8, mercury__solutions__STATE_VARIABLE_Acc1_0_11, &mercury__solutions__STATE_VARIABLE_Acc1_15_15, mercury__solutions__STATE_VARIABLE_Acc2_0_13, &mercury__solutions__STATE_VARIABLE_Acc2_16_16);
    }
#line 64 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_2

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc1_15_15 ;
		{
#line 64 "builtin.opt"

    Y = X;

#line 14605 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc1_12  = (MR_Box) Y;
#line 64 "builtin.opt"
}
#line 61 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_2

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc2_16_16 ;
		{
#line 61 "builtin.opt"

    Y = X;

#line 14625 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc2_14  = (MR_Box) Y;
#line 61 "builtin.opt"
}
#line 248 "solutions.m"
  }
#line 147 "solutions.m"
}

#line 145 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate2_6_p_1(
#line 145 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_19,
#line 145 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_20,
#line 145 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_21,
#line 145 "solutions.m"
  MR_Word mercury__solutions__Generator_7,
#line 145 "solutions.m"
  MR_Word mercury__solutions__Accumulator_8,
#line 145 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc1_0_11,
#line 145 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc1_12,
#line 145 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc2_0_13,
#line 145 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc2_14)
#line 145 "solutions.m"
{
#line 248 "solutions.m"
  {
#line 248 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 248 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc1_15_15;
#line 248 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc2_16_16;
#line 64 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_22;
#line 64 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_V_23;

#line 249 "solutions.m"
    {
#line 249 "solutions.m"
      mercury__solutions__builtin_aggregate2_6_p_1(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__TypeInfo_for_U_20, mercury__solutions__TypeInfo_for_V_21, mercury__solutions__Generator_7, mercury__solutions__Accumulator_8, mercury__solutions__STATE_VARIABLE_Acc1_0_11, &mercury__solutions__STATE_VARIABLE_Acc1_15_15, mercury__solutions__STATE_VARIABLE_Acc2_0_13, &mercury__solutions__STATE_VARIABLE_Acc2_16_16);
    }
#line 64 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_1

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc1_15_15 ;
		{
#line 64 "builtin.opt"

    Y = X;

#line 14691 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc1_12  = (MR_Box) Y;
#line 64 "builtin.opt"
}
#line 64 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_1

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc2_16_16 ;
		{
#line 64 "builtin.opt"

    Y = X;

#line 14711 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc2_14  = (MR_Box) Y;
#line 64 "builtin.opt"
}
#line 248 "solutions.m"
  }
#line 145 "solutions.m"
}

#line 143 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate2_6_p_0(
#line 143 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_19,
#line 143 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_20,
#line 143 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_21,
#line 143 "solutions.m"
  MR_Word mercury__solutions__Generator_7,
#line 143 "solutions.m"
  MR_Word mercury__solutions__Accumulator_8,
#line 143 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc1_0_11,
#line 143 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc1_12,
#line 143 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc2_0_13,
#line 143 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc2_14)
#line 143 "solutions.m"
{
#line 248 "solutions.m"
  {
#line 248 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 248 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc1_15_15;
#line 248 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc2_16_16;
#line 64 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_22;
#line 64 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_V_23;

#line 249 "solutions.m"
    {
#line 249 "solutions.m"
      mercury__solutions__builtin_aggregate2_6_p_0(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__TypeInfo_for_U_20, mercury__solutions__TypeInfo_for_V_21, mercury__solutions__Generator_7, mercury__solutions__Accumulator_8, mercury__solutions__STATE_VARIABLE_Acc1_0_11, &mercury__solutions__STATE_VARIABLE_Acc1_15_15, mercury__solutions__STATE_VARIABLE_Acc2_0_13, &mercury__solutions__STATE_VARIABLE_Acc2_16_16);
    }
#line 64 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc1_15_15 ;
		{
#line 64 "builtin.opt"

    Y = X;

#line 14777 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc1_12  = (MR_Box) Y;
#line 64 "builtin.opt"
}
#line 64 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc2_16_16 ;
		{
#line 64 "builtin.opt"

    Y = X;

#line 14797 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc2_14  = (MR_Box) Y;
#line 64 "builtin.opt"
}
#line 248 "solutions.m"
  }
#line 143 "solutions.m"
}

#line 127 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_9(
#line 127 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 127 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 127 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 127 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 127 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_8,
#line 127 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_9)
#line 127 "solutions.m"
{
#line 244 "solutions.m"
  {
#line 244 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 244 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc_10_10;
#line 61 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 245 "solutions.m"
    {
#line 245 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_9(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 61 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_9

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 61 "builtin.opt"

    Y = X;

#line 14853 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 61 "builtin.opt"
}
#line 244 "solutions.m"
  }
#line 127 "solutions.m"
}

#line 125 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_8(
#line 125 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 125 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 125 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 125 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 125 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_8,
#line 125 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_9)
#line 125 "solutions.m"
{
#line 244 "solutions.m"
  {
#line 244 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 244 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc_10_10;
#line 64 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 245 "solutions.m"
    {
#line 245 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_8(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 64 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_8

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 64 "builtin.opt"

    Y = X;

#line 14909 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 64 "builtin.opt"
}
#line 244 "solutions.m"
  }
#line 125 "solutions.m"
}

#line 123 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_7(
#line 123 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 123 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 123 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 123 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 123 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_8,
#line 123 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_9)
#line 123 "solutions.m"
{
#line 244 "solutions.m"
  {
#line 244 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 244 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc_10_10;
#line 64 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 245 "solutions.m"
    {
#line 245 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_7(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 64 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_7

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 64 "builtin.opt"

    Y = X;

#line 14965 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 64 "builtin.opt"
}
#line 244 "solutions.m"
  }
#line 123 "solutions.m"
}

#line 121 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_6(
#line 121 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 121 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 121 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 121 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 121 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_8,
#line 121 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_9)
#line 121 "solutions.m"
{
#line 244 "solutions.m"
  {
#line 244 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 244 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc_10_10;
#line 61 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 245 "solutions.m"
    {
#line 245 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_6(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 61 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_6

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 61 "builtin.opt"

    Y = X;

#line 15021 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 61 "builtin.opt"
}
#line 244 "solutions.m"
  }
#line 121 "solutions.m"
}

#line 119 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_5(
#line 119 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 119 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 119 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 119 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 119 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_8,
#line 119 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_9)
#line 119 "solutions.m"
{
#line 244 "solutions.m"
  {
#line 244 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 244 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc_10_10;
#line 61 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 245 "solutions.m"
    {
#line 245 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_5(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 61 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_5

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 61 "builtin.opt"

    Y = X;

#line 15077 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 61 "builtin.opt"
}
#line 244 "solutions.m"
  }
#line 119 "solutions.m"
}

#line 117 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_4(
#line 117 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 117 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 117 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 117 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 117 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_8,
#line 117 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_9)
#line 117 "solutions.m"
{
#line 244 "solutions.m"
  {
#line 244 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 244 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc_10_10;
#line 61 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 245 "solutions.m"
    {
#line 245 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_4(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 61 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_4

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 61 "builtin.opt"

    Y = X;

#line 15133 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 61 "builtin.opt"
}
#line 244 "solutions.m"
  }
#line 117 "solutions.m"
}

#line 115 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_3(
#line 115 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 115 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 115 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 115 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 115 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_8,
#line 115 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_9)
#line 115 "solutions.m"
{
#line 244 "solutions.m"
  {
#line 244 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 244 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc_10_10;
#line 61 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 245 "solutions.m"
    {
#line 245 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_3(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 61 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_3

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 61 "builtin.opt"

    Y = X;

#line 15189 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 61 "builtin.opt"
}
#line 244 "solutions.m"
  }
#line 115 "solutions.m"
}

#line 113 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_2(
#line 113 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 113 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 113 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 113 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 113 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_8,
#line 113 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_9)
#line 113 "solutions.m"
{
#line 244 "solutions.m"
  {
#line 244 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 244 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc_10_10;
#line 61 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 245 "solutions.m"
    {
#line 245 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_1(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 61 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_2

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 61 "builtin.opt"

    Y = X;

#line 15245 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 61 "builtin.opt"
}
#line 244 "solutions.m"
  }
#line 113 "solutions.m"
}

#line 111 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_1(
#line 111 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 111 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 111 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 111 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 111 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_8,
#line 111 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_9)
#line 111 "solutions.m"
{
#line 244 "solutions.m"
  {
#line 244 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 244 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc_10_10;
#line 64 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 245 "solutions.m"
    {
#line 245 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_2(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 64 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_1

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 64 "builtin.opt"

    Y = X;

#line 15301 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 64 "builtin.opt"
}
#line 244 "solutions.m"
  }
#line 111 "solutions.m"
}

#line 109 "solutions.m"
void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_0(
#line 109 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 109 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 109 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 109 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 109 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_8,
#line 109 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_9)
#line 109 "solutions.m"
{
#line 244 "solutions.m"
  {
#line 244 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 244 "solutions.m"
    MR_Box mercury__solutions__STATE_VARIABLE_Acc_10_10;
#line 64 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 245 "solutions.m"
    {
#line 245 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 64 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 64 "builtin.opt"

    Y = X;

#line 15357 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 64 "builtin.opt"
}
#line 244 "solutions.m"
  }
#line 109 "solutions.m"
}

#line 93 "solutions.m"
void MR_CALL 
mercury__solutions__aggregate2_6_p_3(
#line 93 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_18,
#line 93 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_19,
#line 93 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_20,
#line 93 "solutions.m"
  MR_Word mercury__solutions__Generator_7,
#line 93 "solutions.m"
  MR_Word mercury__solutions__Accumulator_8,
#line 93 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc1_0_12,
#line 93 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc1_13,
#line 93 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc2_0_14,
#line 93 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc2_15)
#line 93 "solutions.m"
{
#line 240 "solutions.m"
  {
#line 240 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 240 "solutions.m"
    MR_Word mercury__solutions__Solutions_11;
#line 240 "solutions.m"
    MR_Word mercury__solutions__UnsortedList_23;
#line 240 "solutions.m"
    MR_Integer mercury__solutions__V_5_27;

#line 212 "solutions.m"
    {
#line 212 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_1(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__Generator_7, &mercury__solutions__UnsortedList_23);
    }
#line 93 "list.opt"
    {
#line 93 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__UnsortedList_23, (MR_Integer) 0, &mercury__solutions__V_5_27);
    }
#line 125 "list.opt"
    {
#line 125 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__V_5_27, mercury__solutions__UnsortedList_23, &mercury__solutions__Solutions_11);
    }
#line 242 "solutions.m"
    {
#line 242 "solutions.m"
      mercury__list__foldl2_6_p_0(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__TypeInfo_for_U_19, mercury__solutions__TypeInfo_for_V_20, mercury__solutions__Accumulator_8, mercury__solutions__Solutions_11, mercury__solutions__STATE_VARIABLE_Acc1_0_12, mercury__solutions__STATE_VARIABLE_Acc1_13, mercury__solutions__STATE_VARIABLE_Acc2_0_14, mercury__solutions__STATE_VARIABLE_Acc2_15);
#line 242 "solutions.m"
      return;
    }
#line 240 "solutions.m"
  }
#line 93 "solutions.m"
}

#line 91 "solutions.m"
void MR_CALL 
mercury__solutions__aggregate2_6_p_2(
#line 91 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_18,
#line 91 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_19,
#line 91 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_20,
#line 91 "solutions.m"
  MR_Word mercury__solutions__Generator_7,
#line 91 "solutions.m"
  MR_Word mercury__solutions__Accumulator_8,
#line 91 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc1_0_12,
#line 91 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc1_13,
#line 91 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc2_0_14,
#line 91 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc2_15)
#line 91 "solutions.m"
{
#line 240 "solutions.m"
  {
#line 240 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 240 "solutions.m"
    MR_Word mercury__solutions__Solutions_11;
#line 240 "solutions.m"
    MR_Word mercury__solutions__UnsortedList_23;
#line 240 "solutions.m"
    MR_Integer mercury__solutions__V_5_27;

#line 212 "solutions.m"
    {
#line 212 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_1(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__Generator_7, &mercury__solutions__UnsortedList_23);
    }
#line 93 "list.opt"
    {
#line 93 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__UnsortedList_23, (MR_Integer) 0, &mercury__solutions__V_5_27);
    }
#line 125 "list.opt"
    {
#line 125 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__V_5_27, mercury__solutions__UnsortedList_23, &mercury__solutions__Solutions_11);
    }
#line 242 "solutions.m"
    {
#line 242 "solutions.m"
      mercury__list__foldl2_6_p_2(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__TypeInfo_for_U_19, mercury__solutions__TypeInfo_for_V_20, mercury__solutions__Accumulator_8, mercury__solutions__Solutions_11, mercury__solutions__STATE_VARIABLE_Acc1_0_12, mercury__solutions__STATE_VARIABLE_Acc1_13, mercury__solutions__STATE_VARIABLE_Acc2_0_14, mercury__solutions__STATE_VARIABLE_Acc2_15);
#line 242 "solutions.m"
      return;
    }
#line 240 "solutions.m"
  }
#line 91 "solutions.m"
}

#line 89 "solutions.m"
void MR_CALL 
mercury__solutions__aggregate2_6_p_1(
#line 89 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_18,
#line 89 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_19,
#line 89 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_20,
#line 89 "solutions.m"
  MR_Word mercury__solutions__Generator_7,
#line 89 "solutions.m"
  MR_Word mercury__solutions__Accumulator_8,
#line 89 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc1_0_12,
#line 89 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc1_13,
#line 89 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc2_0_14,
#line 89 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc2_15)
#line 89 "solutions.m"
{
#line 240 "solutions.m"
  {
#line 240 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 240 "solutions.m"
    MR_Word mercury__solutions__Solutions_11;

#line 241 "solutions.m"
    {
#line 241 "solutions.m"
      mercury__solutions__solutions_2_p_0(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__Generator_7, &mercury__solutions__Solutions_11);
    }
#line 242 "solutions.m"
    {
#line 242 "solutions.m"
      mercury__list__foldl2_6_p_2(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__TypeInfo_for_U_19, mercury__solutions__TypeInfo_for_V_20, mercury__solutions__Accumulator_8, mercury__solutions__Solutions_11, mercury__solutions__STATE_VARIABLE_Acc1_0_12, mercury__solutions__STATE_VARIABLE_Acc1_13, mercury__solutions__STATE_VARIABLE_Acc2_0_14, mercury__solutions__STATE_VARIABLE_Acc2_15);
#line 242 "solutions.m"
      return;
    }
#line 240 "solutions.m"
  }
#line 89 "solutions.m"
}

#line 87 "solutions.m"
void MR_CALL 
mercury__solutions__aggregate2_6_p_0(
#line 87 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_18,
#line 87 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_19,
#line 87 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_V_20,
#line 87 "solutions.m"
  MR_Word mercury__solutions__Generator_7,
#line 87 "solutions.m"
  MR_Word mercury__solutions__Accumulator_8,
#line 87 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc1_0_12,
#line 87 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc1_13,
#line 87 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc2_0_14,
#line 87 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc2_15)
#line 87 "solutions.m"
{
#line 240 "solutions.m"
  {
#line 240 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 240 "solutions.m"
    MR_Word mercury__solutions__Solutions_11;

#line 241 "solutions.m"
    {
#line 241 "solutions.m"
      mercury__solutions__solutions_2_p_0(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__Generator_7, &mercury__solutions__Solutions_11);
    }
#line 242 "solutions.m"
    {
#line 242 "solutions.m"
      mercury__list__foldl2_6_p_0(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__TypeInfo_for_U_19, mercury__solutions__TypeInfo_for_V_20, mercury__solutions__Accumulator_8, mercury__solutions__Solutions_11, mercury__solutions__STATE_VARIABLE_Acc1_0_12, mercury__solutions__STATE_VARIABLE_Acc1_13, mercury__solutions__STATE_VARIABLE_Acc2_0_14, mercury__solutions__STATE_VARIABLE_Acc2_15);
#line 242 "solutions.m"
      return;
    }
#line 240 "solutions.m"
  }
#line 87 "solutions.m"
}

#line 75 "solutions.m"
void MR_CALL 
mercury__solutions__aggregate_4_p_3(
#line 75 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 75 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 75 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 75 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 75 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_9,
#line 75 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_10)
#line 75 "solutions.m"
{
#line 236 "solutions.m"
  {
#line 236 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 236 "solutions.m"
    MR_Word mercury__solutions__Solutions_8;
#line 236 "solutions.m"
    MR_Word mercury__solutions__UnsortedList_16;
#line 236 "solutions.m"
    MR_Integer mercury__solutions__V_5_20;

#line 212 "solutions.m"
    {
#line 212 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_1(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__Generator_5, &mercury__solutions__UnsortedList_16);
    }
#line 93 "list.opt"
    {
#line 93 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__UnsortedList_16, (MR_Integer) 0, &mercury__solutions__V_5_20);
    }
#line 125 "list.opt"
    {
#line 125 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__V_5_20, mercury__solutions__UnsortedList_16, &mercury__solutions__Solutions_8);
    }
#line 238 "solutions.m"
    {
#line 238 "solutions.m"
      mercury__list__foldl_4_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Accumulator_6, mercury__solutions__Solutions_8, mercury__solutions__STATE_VARIABLE_Acc_0_9, mercury__solutions__STATE_VARIABLE_Acc_10);
#line 238 "solutions.m"
      return;
    }
#line 236 "solutions.m"
  }
#line 75 "solutions.m"
}

#line 73 "solutions.m"
void MR_CALL 
mercury__solutions__aggregate_4_p_2(
#line 73 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 73 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 73 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 73 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 73 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_9,
#line 73 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_10)
#line 73 "solutions.m"
{
#line 236 "solutions.m"
  {
#line 236 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 236 "solutions.m"
    MR_Word mercury__solutions__Solutions_8;
#line 236 "solutions.m"
    MR_Word mercury__solutions__UnsortedList_16;
#line 236 "solutions.m"
    MR_Integer mercury__solutions__V_5_20;

#line 212 "solutions.m"
    {
#line 212 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_1(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__Generator_5, &mercury__solutions__UnsortedList_16);
    }
#line 93 "list.opt"
    {
#line 93 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__UnsortedList_16, (MR_Integer) 0, &mercury__solutions__V_5_20);
    }
#line 125 "list.opt"
    {
#line 125 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__V_5_20, mercury__solutions__UnsortedList_16, &mercury__solutions__Solutions_8);
    }
#line 238 "solutions.m"
    {
#line 238 "solutions.m"
      mercury__list__foldl_4_p_2(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Accumulator_6, mercury__solutions__Solutions_8, mercury__solutions__STATE_VARIABLE_Acc_0_9, mercury__solutions__STATE_VARIABLE_Acc_10);
#line 238 "solutions.m"
      return;
    }
#line 236 "solutions.m"
  }
#line 73 "solutions.m"
}

#line 71 "solutions.m"
void MR_CALL 
mercury__solutions__aggregate_4_p_1(
#line 71 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 71 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 71 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 71 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 71 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_9,
#line 71 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_10)
#line 71 "solutions.m"
{
#line 236 "solutions.m"
  {
#line 236 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 236 "solutions.m"
    MR_Word mercury__solutions__Solutions_8;

#line 237 "solutions.m"
    {
#line 237 "solutions.m"
      mercury__solutions__solutions_2_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__Generator_5, &mercury__solutions__Solutions_8);
    }
#line 238 "solutions.m"
    {
#line 238 "solutions.m"
      mercury__list__foldl_4_p_2(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Accumulator_6, mercury__solutions__Solutions_8, mercury__solutions__STATE_VARIABLE_Acc_0_9, mercury__solutions__STATE_VARIABLE_Acc_10);
#line 238 "solutions.m"
      return;
    }
#line 236 "solutions.m"
  }
#line 71 "solutions.m"
}

#line 69 "solutions.m"
void MR_CALL 
mercury__solutions__aggregate_4_p_0(
#line 69 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_12,
#line 69 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_13,
#line 69 "solutions.m"
  MR_Word mercury__solutions__Generator_5,
#line 69 "solutions.m"
  MR_Word mercury__solutions__Accumulator_6,
#line 69 "solutions.m"
  MR_Box mercury__solutions__STATE_VARIABLE_Acc_0_9,
#line 69 "solutions.m"
  MR_Box * mercury__solutions__STATE_VARIABLE_Acc_10)
#line 69 "solutions.m"
{
#line 236 "solutions.m"
  {
#line 236 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 236 "solutions.m"
    MR_Word mercury__solutions__Solutions_8;

#line 237 "solutions.m"
    {
#line 237 "solutions.m"
      mercury__solutions__solutions_2_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__Generator_5, &mercury__solutions__Solutions_8);
    }
#line 238 "solutions.m"
    {
#line 238 "solutions.m"
      mercury__list__foldl_4_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Accumulator_6, mercury__solutions__Solutions_8, mercury__solutions__STATE_VARIABLE_Acc_0_9, mercury__solutions__STATE_VARIABLE_Acc_10);
#line 238 "solutions.m"
      return;
    }
#line 236 "solutions.m"
  }
#line 69 "solutions.m"
}

#line 57 "solutions.m"
MR_Box MR_CALL 
mercury__solutions__aggregate_3_f_1(
#line 57 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_19,
#line 57 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_20,
#line 57 "solutions.m"
  MR_Word mercury__solutions__P_5,
#line 57 "solutions.m"
  MR_Word mercury__solutions__F_6,
#line 57 "solutions.m"
  MR_Box mercury__solutions__Acc0_7)
#line 57 "solutions.m"
{
#line 232 "solutions.m"
  {
#line 232 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 232 "solutions.m"
    MR_Box mercury__solutions__Acc_8;
#line 232 "solutions.m"
    MR_Word mercury__solutions__Solutions_26;
#line 232 "solutions.m"
    MR_Word mercury__solutions__UnsortedList_30;
#line 232 "solutions.m"
    MR_Integer mercury__solutions__V_5_34;

#line 212 "solutions.m"
    {
#line 212 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_1(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__P_5, &mercury__solutions__UnsortedList_30);
    }
#line 93 "list.opt"
    {
#line 93 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__UnsortedList_30, (MR_Integer) 0, &mercury__solutions__V_5_34);
    }
#line 125 "list.opt"
    {
#line 125 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__V_5_34, mercury__solutions__UnsortedList_30, &mercury__solutions__Solutions_26);
    }
#line 238 "solutions.m"
    {
#line 238 "solutions.m"
      mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__solutions__F_6, mercury__solutions__Solutions_26, mercury__solutions__Acc0_7, &mercury__solutions__Acc_8);
    }
#line 232 "solutions.m"
    return mercury__solutions__Acc_8;
#line 232 "solutions.m"
  }
#line 57 "solutions.m"
}

#line 55 "solutions.m"
MR_Box MR_CALL 
mercury__solutions__aggregate_3_f_0(
#line 55 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_19,
#line 55 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_U_20,
#line 55 "solutions.m"
  MR_Word mercury__solutions__P_5,
#line 55 "solutions.m"
  MR_Word mercury__solutions__F_6,
#line 55 "solutions.m"
  MR_Box mercury__solutions__Acc0_7)
#line 55 "solutions.m"
{
#line 232 "solutions.m"
  {
#line 232 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 232 "solutions.m"
    MR_Box mercury__solutions__Acc_8;
#line 232 "solutions.m"
    MR_Word mercury__solutions__Solutions_26;

#line 237 "solutions.m"
    {
#line 237 "solutions.m"
      mercury__solutions__solutions_2_p_0(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__P_5, &mercury__solutions__Solutions_26);
    }
#line 238 "solutions.m"
    {
#line 238 "solutions.m"
      mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__solutions__F_6, mercury__solutions__Solutions_26, mercury__solutions__Acc0_7, &mercury__solutions__Acc_8);
    }
#line 232 "solutions.m"
    return mercury__solutions__Acc_8;
#line 232 "solutions.m"
  }
#line 55 "solutions.m"
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
#line 226 "solutions.m"
  {
#line 226 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 226 "solutions.m"
    MR_Word mercury__solutions__UnsortedList_5;

#line 227 "solutions.m"
    {
#line 227 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_1(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__Pred_3, &mercury__solutions__UnsortedList_5);
    }
#line 228 "solutions.m"
    *mercury__solutions__List_4 = mercury__solutions__UnsortedList_5;
#line 226 "solutions.m"
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
#line 226 "solutions.m"
  {
#line 226 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 226 "solutions.m"
    MR_Word mercury__solutions__UnsortedList_5;

#line 227 "solutions.m"
    {
#line 227 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_0(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__Pred_3, &mercury__solutions__UnsortedList_5);
    }
#line 228 "solutions.m"
    *mercury__solutions__List_4 = mercury__solutions__UnsortedList_5;
#line 226 "solutions.m"
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
#line 222 "solutions.m"
  {
#line 222 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 222 "solutions.m"
    MR_Word mercury__solutions__List_5;
#line 222 "solutions.m"
    MR_Word mercury__solutions__List_4_10;
#line 222 "solutions.m"
    MR_Integer mercury__solutions__V_5_13;

#line 223 "solutions.m"
    {
#line 223 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_1(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__Pred_3, &mercury__solutions__List_5);
    }
#line 93 "list.opt"
    {
#line 93 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__List_5, (MR_Integer) 0, &mercury__solutions__V_5_13);
    }
#line 125 "list.opt"
    {
#line 125 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__V_5_13, mercury__solutions__List_5, &mercury__solutions__List_4_10);
    }
#line 31 "set_ordlist.opt"
    *mercury__solutions__Set_4 = (MR_Word) mercury__solutions__List_4_10;
#line 222 "solutions.m"
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
#line 222 "solutions.m"
  {
#line 222 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 222 "solutions.m"
    MR_Word mercury__solutions__List_5;
#line 222 "solutions.m"
    MR_Word mercury__solutions__List_4_10;
#line 222 "solutions.m"
    MR_Integer mercury__solutions__V_5_13;

#line 223 "solutions.m"
    {
#line 223 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_0(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__Pred_3, &mercury__solutions__List_5);
    }
#line 93 "list.opt"
    {
#line 93 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__List_5, (MR_Integer) 0, &mercury__solutions__V_5_13);
    }
#line 125 "list.opt"
    {
#line 125 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__V_5_13, mercury__solutions__List_5, &mercury__solutions__List_4_10);
    }
#line 31 "set_ordlist.opt"
    *mercury__solutions__Set_4 = (MR_Word) mercury__solutions__List_4_10;
#line 222 "solutions.m"
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
#line 222 "solutions.m"
  {
#line 222 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 222 "solutions.m"
    MR_Word mercury__solutions__S_4;
#line 222 "solutions.m"
    MR_Word mercury__solutions__List_8;
#line 222 "solutions.m"
    MR_Word mercury__solutions__List_4_12;
#line 222 "solutions.m"
    MR_Integer mercury__solutions__V_5_15;

#line 223 "solutions.m"
    {
#line 223 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_1(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__P_3, &mercury__solutions__List_8);
    }
#line 93 "list.opt"
    {
#line 93 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__List_8, (MR_Integer) 0, &mercury__solutions__V_5_15);
    }
#line 125 "list.opt"
    {
#line 125 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__V_5_15, mercury__solutions__List_8, &mercury__solutions__List_4_12);
    }
#line 31 "set_ordlist.opt"
    mercury__solutions__S_4 = (MR_Word) mercury__solutions__List_4_12;
#line 222 "solutions.m"
    return mercury__solutions__S_4;
#line 222 "solutions.m"
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
#line 222 "solutions.m"
  {
#line 222 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 222 "solutions.m"
    MR_Word mercury__solutions__S_4;
#line 222 "solutions.m"
    MR_Word mercury__solutions__List_8;
#line 222 "solutions.m"
    MR_Word mercury__solutions__List_4_12;
#line 222 "solutions.m"
    MR_Integer mercury__solutions__V_5_15;

#line 223 "solutions.m"
    {
#line 223 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_0(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__P_3, &mercury__solutions__List_8);
    }
#line 93 "list.opt"
    {
#line 93 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__List_8, (MR_Integer) 0, &mercury__solutions__V_5_15);
    }
#line 125 "list.opt"
    {
#line 125 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__V_5_15, mercury__solutions__List_8, &mercury__solutions__List_4_12);
    }
#line 31 "set_ordlist.opt"
    mercury__solutions__S_4 = (MR_Word) mercury__solutions__List_4_12;
#line 222 "solutions.m"
    return mercury__solutions__S_4;
#line 222 "solutions.m"
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
#line 211 "solutions.m"
  {
#line 211 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 211 "solutions.m"
    MR_Word mercury__solutions__S_4;
#line 211 "solutions.m"
    MR_Word mercury__solutions__UnsortedList_8;
#line 211 "solutions.m"
    MR_Integer mercury__solutions__V_5_12;

#line 212 "solutions.m"
    {
#line 212 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_1(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__P_3, &mercury__solutions__UnsortedList_8);
    }
#line 93 "list.opt"
    {
#line 93 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__UnsortedList_8, (MR_Integer) 0, &mercury__solutions__V_5_12);
    }
#line 125 "list.opt"
    {
#line 125 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__V_5_12, mercury__solutions__UnsortedList_8, &mercury__solutions__S_4);
    }
#line 211 "solutions.m"
    return mercury__solutions__S_4;
#line 211 "solutions.m"
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
#line 217 "solutions.m"
  {
#line 217 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 217 "solutions.m"
    MR_Word mercury__solutions__S_4;

#line 217 "solutions.m"
    {
#line 217 "solutions.m"
      mercury__solutions__solutions_2_p_0(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__P_3, &mercury__solutions__S_4);
    }
#line 217 "solutions.m"
    return mercury__solutions__S_4;
#line 217 "solutions.m"
  }
#line 37 "solutions.m"
}

#line 34 "solutions.m"
void MR_CALL 
mercury__solutions__solutions_2_p_1(
#line 34 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_7,
#line 34 "solutions.m"
  MR_Word mercury__solutions__Pred_3,
#line 34 "solutions.m"
  MR_Word * mercury__solutions__List_4)
#line 34 "solutions.m"
{
#line 211 "solutions.m"
  {
#line 211 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 211 "solutions.m"
    MR_Word mercury__solutions__UnsortedList_5;
#line 211 "solutions.m"
    MR_Integer mercury__solutions__V_5_10;

#line 212 "solutions.m"
    {
#line 212 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_1(mercury__solutions__TypeInfo_for_T_7, mercury__solutions__Pred_3, &mercury__solutions__UnsortedList_5);
    }
#line 93 "list.opt"
    {
#line 93 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_7, mercury__solutions__UnsortedList_5, (MR_Integer) 0, &mercury__solutions__V_5_10);
    }
#line 125 "list.opt"
    {
#line 125 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_7, mercury__solutions__V_5_10, mercury__solutions__UnsortedList_5, mercury__solutions__List_4);
#line 125 "list.opt"
      return;
    }
#line 211 "solutions.m"
  }
#line 34 "solutions.m"
}

#line 33 "solutions.m"
void MR_CALL 
mercury__solutions__solutions_2_p_0(
#line 33 "solutions.m"
  MR_Word mercury__solutions__TypeInfo_for_T_7,
#line 33 "solutions.m"
  MR_Word mercury__solutions__Pred_3,
#line 33 "solutions.m"
  MR_Word * mercury__solutions__List_4)
#line 33 "solutions.m"
{
#line 211 "solutions.m"
  {
#line 211 "solutions.m"
    MR_bool mercury__solutions__succeeded;
#line 211 "solutions.m"
    MR_Word mercury__solutions__UnsortedList_5;
#line 211 "solutions.m"
    MR_Word mercury__solutions__List0_6;
#line 211 "solutions.m"
    MR_Integer mercury__solutions__V_5_10;

#line 212 "solutions.m"
    {
#line 212 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_0(mercury__solutions__TypeInfo_for_T_7, mercury__solutions__Pred_3, &mercury__solutions__UnsortedList_5);
    }
#line 93 "list.opt"
    {
#line 93 "list.opt"
      mercury__list__length_2_3_p_0(mercury__solutions__TypeInfo_for_T_7, mercury__solutions__UnsortedList_5, (MR_Integer) 0, &mercury__solutions__V_5_10);
    }
#line 125 "list.opt"
    {
#line 125 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_7, mercury__solutions__V_5_10, mercury__solutions__UnsortedList_5, &mercury__solutions__List0_6);
    }
#line 278 "solutions.m"
    if ((mercury__solutions__List0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 276 "solutions.m"
      {
#line 277 "solutions.m"
        {
#line 277 "solutions.m"
          mercury__require__unexpected_3_p_0((MR_String) "solutions", (MR_String) "predicate \140solutions.assert_num_solutions\'/3", (MR_String) "no solutions");
#line 277 "solutions.m"
          return;
        }
#line 276 "solutions.m"
      }
#line 278 "solutions.m"
    else
#line 280 "solutions.m"
      *mercury__solutions__List_4 = mercury__solutions__List0_6;
#line 211 "solutions.m"
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
