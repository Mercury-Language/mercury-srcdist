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

#line 127 "list.int"
static void MR_CALL 
mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__solutions__V_18_18,
#line 127 "list.int"
  MR_Word mercury__solutions__HeadVar__2_2,
#line 127 "list.int"
  MR_Box mercury__solutions__HeadVar__3_3,
#line 127 "list.int"
  MR_Box * mercury__solutions__HeadVar__4_4);

#line 127 "list.int"
static void MR_CALL 
mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__solutions__V_18_18,
#line 127 "list.int"
  MR_Word mercury__solutions__HeadVar__2_2,
#line 127 "list.int"
  MR_Box mercury__solutions__HeadVar__3_3,
#line 127 "list.int"
  MR_Box * mercury__solutions__HeadVar__4_4);

#line 18 "ops.opt"
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
#include "solutions.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "version_array.mh"



#line 1663 "solutions.c"
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

#line 1680 "solutions.c"
static const MR_Integer mercury__solutions__solutions__functor_number_map_trail_ptr_0[1] = {
  (MR_Integer) 0
};

#line 1685 "solutions.c"
static const MR_NotagFunctorDesc mercury__solutions__solutions__notag_functor_desc_trail_ptr_0 = {
  (MR_String) "trail_ptr",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL
};

#line 1692 "solutions.c"
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

#line 1709 "solutions.c"
static MR_bool MR_CALL 
mercury__solutions____Unify____heap_ptr_0_0_10001(
#line 1712 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_1,
#line 1714 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_2)
#line 1716 "solutions.c"
{
#line 1718 "solutions.c"
  {
#line 1720 "solutions.c"
    MR_bool mercury__solutions__succeeded;

#line 1723 "solutions.c"
    {
#line 1725 "solutions.c"
      mercury__solutions__succeeded = mercury__solutions____Unify____heap_ptr_0_0(((MR_Word) mercury__solutions__wrapper_arg_1), ((MR_Word) mercury__solutions__wrapper_arg_2));
    }
#line 1728 "solutions.c"
    return mercury__solutions__succeeded;
#line 1730 "solutions.c"
  }
#line 1732 "solutions.c"
}

#line 1735 "solutions.c"
static void MR_CALL 
mercury__solutions____Compare____heap_ptr_0_0_10001(
#line 1738 "solutions.c"
  MR_Box * mercury__solutions__wrapper_arg_1,
#line 1740 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_2,
#line 1742 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_3)
#line 1744 "solutions.c"
{
#line 1746 "solutions.c"
  {
#line 1748 "solutions.c"
    MR_Word mercury__solutions__conv0_HeadVar__1_1;

#line 1751 "solutions.c"
    {
#line 1753 "solutions.c"
      mercury__solutions____Compare____heap_ptr_0_0(&mercury__solutions__conv0_HeadVar__1_1, ((MR_Word) mercury__solutions__wrapper_arg_2), ((MR_Word) mercury__solutions__wrapper_arg_3));
    }
#line 1756 "solutions.c"
    *mercury__solutions__wrapper_arg_1 = ((MR_Box) (mercury__solutions__conv0_HeadVar__1_1));
#line 1758 "solutions.c"
  }
#line 1760 "solutions.c"
}

#line 1763 "solutions.c"
static MR_bool MR_CALL 
mercury__solutions____Unify____trail_ptr_0_0_10001(
#line 1766 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_1,
#line 1768 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_2)
#line 1770 "solutions.c"
{
#line 1772 "solutions.c"
  {
#line 1774 "solutions.c"
    MR_bool mercury__solutions__succeeded;

#line 1777 "solutions.c"
    {
#line 1779 "solutions.c"
      mercury__solutions__succeeded = mercury__solutions____Unify____trail_ptr_0_0(((MR_Word) mercury__solutions__wrapper_arg_1), ((MR_Word) mercury__solutions__wrapper_arg_2));
    }
#line 1782 "solutions.c"
    return mercury__solutions__succeeded;
#line 1784 "solutions.c"
  }
#line 1786 "solutions.c"
}

#line 1789 "solutions.c"
static void MR_CALL 
mercury__solutions____Compare____trail_ptr_0_0_10001(
#line 1792 "solutions.c"
  MR_Box * mercury__solutions__wrapper_arg_1,
#line 1794 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_2,
#line 1796 "solutions.c"
  MR_Box mercury__solutions__wrapper_arg_3)
#line 1798 "solutions.c"
{
#line 1800 "solutions.c"
  {
#line 1802 "solutions.c"
    MR_Word mercury__solutions__conv0_HeadVar__1_1;

#line 1805 "solutions.c"
    {
#line 1807 "solutions.c"
      mercury__solutions____Compare____trail_ptr_0_0(&mercury__solutions__conv0_HeadVar__1_1, ((MR_Word) mercury__solutions__wrapper_arg_2), ((MR_Word) mercury__solutions__wrapper_arg_3));
    }
#line 1810 "solutions.c"
    *mercury__solutions__wrapper_arg_1 = ((MR_Box) (mercury__solutions__conv0_HeadVar__1_1));
#line 1812 "solutions.c"
  }
#line 1814 "solutions.c"
}

#line 127 "list.int"
static void MR_CALL 
mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__solutions__V_18_18,
#line 127 "list.int"
  MR_Word mercury__solutions__HeadVar__2_2,
#line 127 "list.int"
  MR_Box mercury__solutions__HeadVar__3_3,
#line 127 "list.int"
  MR_Box * mercury__solutions__HeadVar__4_4)
#line 127 "list.int"
{
#line 393 "list.opt"
  while (MR_TRUE)
#line 393 "list.opt"
    {
#line 393 "list.opt"
      /* tailcall optimized into a loop */
#line 393 "list.opt"
      {
#line 393 "list.opt"
        MR_bool mercury__solutions__succeeded;

#line 393 "list.opt"
        if ((mercury__solutions__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 393 "list.opt"
          *mercury__solutions__HeadVar__4_4 = mercury__solutions__HeadVar__3_3;
#line 393 "list.opt"
        else
#line 395 "list.opt"
          {
#line 395 "list.opt"
            MR_Box mercury__solutions__V_10_9 = (MR_hl_field(MR_mktag(1), mercury__solutions__HeadVar__2_2, (MR_Integer) 0));
#line 395 "list.opt"
            MR_Word mercury__solutions__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__solutions__HeadVar__2_2, (MR_Integer) 1)));
#line 395 "list.opt"
            MR_Box mercury__solutions__V_15_13;
#line 233 "solutions.m"
            MR_Box MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__solutions__V_18_18, (MR_Integer) 1)));

#line 233 "solutions.m"
            {
#line 233 "solutions.m"
              mercury__solutions__V_15_13 = mercury__solutions__func_0(((MR_Box) mercury__solutions__V_18_18), mercury__solutions__V_10_9, mercury__solutions__HeadVar__3_3);
            }
#line 397 "list.opt"
            /* direct tailcall eliminated */
#line 397 "list.opt"
            {
#line 397 "list.opt"
              MR_Word mercury__solutions__HeadVar__2__tmp_copy_2 = mercury__solutions__V_11_10;
#line 397 "list.opt"
              MR_Box mercury__solutions__HeadVar__3__tmp_copy_3 = mercury__solutions__V_15_13;

#line 397 "list.opt"
              mercury__solutions__HeadVar__3_3 = mercury__solutions__HeadVar__3__tmp_copy_3;
#line 397 "list.opt"
              mercury__solutions__HeadVar__2_2 = mercury__solutions__HeadVar__2__tmp_copy_2;
#line 397 "list.opt"
            }
#line 397 "list.opt"
            continue;
#line 395 "list.opt"
          }
#line 393 "list.opt"
      }
#line 393 "list.opt"
      break;
#line 393 "list.opt"
    }
#line 127 "list.int"
}

#line 127 "list.int"
static void MR_CALL 
mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__solutions__V_18_18,
#line 127 "list.int"
  MR_Word mercury__solutions__HeadVar__2_2,
#line 127 "list.int"
  MR_Box mercury__solutions__HeadVar__3_3,
#line 127 "list.int"
  MR_Box * mercury__solutions__HeadVar__4_4)
#line 127 "list.int"
{
#line 393 "list.opt"
  while (MR_TRUE)
#line 393 "list.opt"
    {
#line 393 "list.opt"
      /* tailcall optimized into a loop */
#line 393 "list.opt"
      {
#line 393 "list.opt"
        MR_bool mercury__solutions__succeeded;

#line 393 "list.opt"
        if ((mercury__solutions__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 393 "list.opt"
          *mercury__solutions__HeadVar__4_4 = mercury__solutions__HeadVar__3_3;
#line 393 "list.opt"
        else
#line 395 "list.opt"
          {
#line 395 "list.opt"
            MR_Box mercury__solutions__V_10_9 = (MR_hl_field(MR_mktag(1), mercury__solutions__HeadVar__2_2, (MR_Integer) 0));
#line 395 "list.opt"
            MR_Word mercury__solutions__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__solutions__HeadVar__2_2, (MR_Integer) 1)));
#line 395 "list.opt"
            MR_Box mercury__solutions__V_15_13;
#line 233 "solutions.m"
            MR_Box MR_CALL (* mercury__solutions__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__solutions__V_18_18, (MR_Integer) 1)));

#line 233 "solutions.m"
            {
#line 233 "solutions.m"
              mercury__solutions__V_15_13 = mercury__solutions__func_0(((MR_Box) mercury__solutions__V_18_18), mercury__solutions__V_10_9, mercury__solutions__HeadVar__3_3);
            }
#line 397 "list.opt"
            /* direct tailcall eliminated */
#line 397 "list.opt"
            {
#line 397 "list.opt"
              MR_Word mercury__solutions__HeadVar__2__tmp_copy_2 = mercury__solutions__V_11_10;
#line 397 "list.opt"
              MR_Box mercury__solutions__HeadVar__3__tmp_copy_3 = mercury__solutions__V_15_13;

#line 397 "list.opt"
              mercury__solutions__HeadVar__3_3 = mercury__solutions__HeadVar__3__tmp_copy_3;
#line 397 "list.opt"
              mercury__solutions__HeadVar__2_2 = mercury__solutions__HeadVar__2__tmp_copy_2;
#line 397 "list.opt"
            }
#line 397 "list.opt"
            continue;
#line 395 "list.opt"
          }
#line 393 "list.opt"
      }
#line 393 "list.opt"
      break;
#line 393 "list.opt"
    }
#line 127 "list.int"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__solutions__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
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
#line 2067 "solutions.c"
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

#line 2123 "solutions.c"
        {
#line 2125 "solutions.c"
          mercury__solutions__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__solutions__V_3_3, mercury__solutions__V_4_4);
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
      mercury__solutions__succeeded = mercury__private_builtin____Unify____heap_pointer_0_0(mercury__solutions__Cast_HeadVar1_3, mercury__solutions__Cast_HeadVar2_4);
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

#line 2219 "solutions.c"

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

#line 2252 "solutions.c"

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

#line 2285 "solutions.c"

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

#line 2322 "solutions.c"

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

#line 2368 "solutions.c"

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

#line 2415 "solutions.c"

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

#line 2462 "solutions.c"

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
#line 2504 "solutions.c"

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

#line 2537 "solutions.c"

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

#line 2575 "solutions.c"

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

#line 2628 "solutions.c"

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

#line 2693 "solutions.c"

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
#line 2719 "solutions.c"

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

#line 2742 "solutions.c"

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
#line 2801 "solutions.c"

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

#line 2933 "solutions.c"

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

#line 2954 "solutions.c"

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

#line 2996 "solutions.c"

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

#line 3029 "solutions.c"

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

#line 3053 "solutions.c"

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

#line 3074 "solutions.c"

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

#line 3092 "solutions.c"

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

#line 3158 "solutions.c"

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
#line 3184 "solutions.c"

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

#line 3207 "solutions.c"

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
#line 3261 "solutions.c"

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

#line 3393 "solutions.c"

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

#line 3414 "solutions.c"

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

#line 3456 "solutions.c"

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

#line 3489 "solutions.c"

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

#line 3513 "solutions.c"

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

#line 3534 "solutions.c"

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

#line 3552 "solutions.c"

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

#line 3618 "solutions.c"

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
#line 3644 "solutions.c"

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

#line 3667 "solutions.c"

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
#line 3726 "solutions.c"

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

#line 3858 "solutions.c"

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

#line 3879 "solutions.c"

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

#line 3921 "solutions.c"

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

#line 3954 "solutions.c"

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

#line 3978 "solutions.c"

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

#line 3999 "solutions.c"

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

#line 4017 "solutions.c"

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

#line 4083 "solutions.c"

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
#line 4109 "solutions.c"

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

#line 4132 "solutions.c"

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
#line 4186 "solutions.c"

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

#line 4318 "solutions.c"

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

#line 4339 "solutions.c"

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

#line 4381 "solutions.c"

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

#line 4414 "solutions.c"

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

#line 4438 "solutions.c"

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

#line 4459 "solutions.c"

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

#line 4477 "solutions.c"

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

#line 4543 "solutions.c"

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
#line 4569 "solutions.c"

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

#line 4592 "solutions.c"

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
#line 4651 "solutions.c"

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

#line 4783 "solutions.c"

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

#line 4804 "solutions.c"

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

#line 4846 "solutions.c"

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

#line 4879 "solutions.c"

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

#line 4903 "solutions.c"

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

#line 4924 "solutions.c"

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

#line 4942 "solutions.c"

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

#line 5008 "solutions.c"

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
#line 5034 "solutions.c"

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

#line 5057 "solutions.c"

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
#line 5111 "solutions.c"

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

#line 5243 "solutions.c"

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

#line 5264 "solutions.c"

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

#line 5306 "solutions.c"

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

#line 5339 "solutions.c"

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

#line 5363 "solutions.c"

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

#line 5384 "solutions.c"

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

#line 5402 "solutions.c"

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

#line 5468 "solutions.c"

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
#line 5494 "solutions.c"

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

#line 5517 "solutions.c"

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
#line 5576 "solutions.c"

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

#line 5708 "solutions.c"

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

#line 5729 "solutions.c"

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

#line 5771 "solutions.c"

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

#line 5804 "solutions.c"

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

#line 5828 "solutions.c"

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

#line 5849 "solutions.c"

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

#line 5867 "solutions.c"

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

#line 5933 "solutions.c"

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
#line 5959 "solutions.c"

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

#line 5982 "solutions.c"

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
#line 6036 "solutions.c"

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

#line 6168 "solutions.c"

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

#line 6189 "solutions.c"

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

#line 6231 "solutions.c"

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

#line 6264 "solutions.c"

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

#line 6288 "solutions.c"

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

#line 6309 "solutions.c"

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

#line 6327 "solutions.c"

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

#line 6393 "solutions.c"

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
#line 6419 "solutions.c"

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

#line 6442 "solutions.c"

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
#line 6486 "solutions.c"

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

#line 6610 "solutions.c"

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

#line 6631 "solutions.c"

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

#line 6666 "solutions.c"

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

#line 6694 "solutions.c"

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

#line 6715 "solutions.c"

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

#line 6733 "solutions.c"

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

#line 6799 "solutions.c"

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
#line 6825 "solutions.c"

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

#line 6848 "solutions.c"

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
#line 6897 "solutions.c"

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

#line 7021 "solutions.c"

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

#line 7042 "solutions.c"

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

#line 7077 "solutions.c"

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

#line 7105 "solutions.c"

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

#line 7126 "solutions.c"

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

#line 7144 "solutions.c"

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

#line 7210 "solutions.c"

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
#line 7236 "solutions.c"

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

#line 7259 "solutions.c"

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
#line 7303 "solutions.c"

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

#line 7427 "solutions.c"

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

#line 7448 "solutions.c"

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

#line 7483 "solutions.c"

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

#line 7511 "solutions.c"

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

#line 7532 "solutions.c"

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

#line 7550 "solutions.c"

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

#line 7616 "solutions.c"

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
#line 7642 "solutions.c"

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

#line 7665 "solutions.c"

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
#line 7714 "solutions.c"

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

#line 7838 "solutions.c"

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

#line 7859 "solutions.c"

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

#line 7894 "solutions.c"

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

#line 7922 "solutions.c"

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

#line 7943 "solutions.c"

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

#line 7961 "solutions.c"

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

#line 8027 "solutions.c"

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
#line 8053 "solutions.c"

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

#line 8076 "solutions.c"

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
#line 8120 "solutions.c"

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

#line 8244 "solutions.c"

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

#line 8265 "solutions.c"

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

#line 8300 "solutions.c"

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

#line 8328 "solutions.c"

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

#line 8349 "solutions.c"

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

#line 8367 "solutions.c"

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

#line 8433 "solutions.c"

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
#line 8459 "solutions.c"

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

#line 8482 "solutions.c"

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
#line 8526 "solutions.c"

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

#line 8650 "solutions.c"

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

#line 8671 "solutions.c"

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

#line 8706 "solutions.c"

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

#line 8734 "solutions.c"

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

#line 8755 "solutions.c"

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

#line 8773 "solutions.c"

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

#line 8839 "solutions.c"

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
#line 8865 "solutions.c"

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

#line 8888 "solutions.c"

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
#line 8937 "solutions.c"

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

#line 9061 "solutions.c"

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

#line 9082 "solutions.c"

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

#line 9117 "solutions.c"

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

#line 9145 "solutions.c"

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

#line 9166 "solutions.c"

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

#line 9184 "solutions.c"

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

#line 9250 "solutions.c"

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
#line 9276 "solutions.c"

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

#line 9299 "solutions.c"

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
#line 9348 "solutions.c"

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

#line 9472 "solutions.c"

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

#line 9493 "solutions.c"

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

#line 9528 "solutions.c"

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

#line 9556 "solutions.c"

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

#line 9577 "solutions.c"

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

#line 9595 "solutions.c"

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

#line 9661 "solutions.c"

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
#line 9687 "solutions.c"

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

#line 9710 "solutions.c"

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
#line 9754 "solutions.c"

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

#line 9878 "solutions.c"

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

#line 9899 "solutions.c"

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

#line 9934 "solutions.c"

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

#line 9962 "solutions.c"

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

#line 9983 "solutions.c"

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

#line 10001 "solutions.c"

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

#line 10067 "solutions.c"

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
#line 10093 "solutions.c"

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

#line 10116 "solutions.c"

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
#line 10160 "solutions.c"

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

#line 10284 "solutions.c"

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

#line 10305 "solutions.c"

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

#line 10340 "solutions.c"

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

#line 10368 "solutions.c"

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

#line 10389 "solutions.c"

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

#line 10407 "solutions.c"

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

#line 10529 "solutions.c"

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
#line 10555 "solutions.c"

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

#line 10578 "solutions.c"

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
#line 133 "list.opt"
      {
#line 133 "list.opt"
        MR_Word base;
#line 133 "list.opt"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 133 "list.opt"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Acc1_26 = base;
#line 133 "list.opt"
        MR_hl_field(MR_mktag(1), base, 0) = (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Answer_24;
#line 133 "list.opt"
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Acc0_25));
#line 133 "list.opt"
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
#line 10631 "solutions.c"

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

#line 10725 "solutions.c"
      {
#line 10727 "solutions.c"
        MR_Word base;
#line 10729 "solutions.c"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10731 "solutions.c"
        (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_13_13 = base;
#line 10733 "solutions.c"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__solutions__TypeCtorInfo_12_12));
#line 10735 "solutions.c"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_for_T_8));
#line 10737 "solutions.c"
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

#line 10765 "solutions.c"

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

#line 10786 "solutions.c"

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

#line 10827 "solutions.c"

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

#line 10857 "solutions.c"

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

#line 10880 "solutions.c"

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

#line 10898 "solutions.c"

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

#line 10964 "solutions.c"

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
#line 10990 "solutions.c"

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

#line 11013 "solutions.c"

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
#line 133 "list.opt"
      {
#line 133 "list.opt"
        MR_Word base;
#line 133 "list.opt"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 133 "list.opt"
        (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Acc1_26 = base;
#line 133 "list.opt"
        MR_hl_field(MR_mktag(1), base, 0) = (mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Answer_24;
#line 133 "list.opt"
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((mercury__solutions__env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Acc0_25));
#line 133 "list.opt"
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
#line 11066 "solutions.c"

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

#line 11162 "solutions.c"
      {
#line 11164 "solutions.c"
        MR_Word base;
#line 11166 "solutions.c"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11168 "solutions.c"
        (mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_13_13 = base;
#line 11170 "solutions.c"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__solutions__TypeCtorInfo_12_12));
#line 11172 "solutions.c"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mercury__solutions__env).mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_for_T_8));
#line 11174 "solutions.c"
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

#line 11202 "solutions.c"

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

#line 11223 "solutions.c"

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

#line 11264 "solutions.c"

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

#line 11294 "solutions.c"

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

#line 11317 "solutions.c"

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

#line 11335 "solutions.c"

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

#line 11420 "solutions.c"

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
#line 11446 "solutions.c"

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

#line 11469 "solutions.c"

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
#line 11520 "solutions.c"

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

#line 11544 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 989 "solutions.m"
}
#line 984 "solutions.m"
          {
#line 984 "solutions.m"
            mercury__solutions__do_while_4_p_5_1(mercury__solutions__env_ptr);
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

#line 11668 "solutions.c"

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

#line 11694 "solutions.c"

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

#line 11721 "solutions.c"

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

#line 11751 "solutions.c"

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

#line 11772 "solutions.c"

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

#line 11790 "solutions.c"

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

#line 11856 "solutions.c"

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
#line 11882 "solutions.c"

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

#line 11905 "solutions.c"

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
#line 11951 "solutions.c"

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

#line 11975 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 989 "solutions.m"
}
#line 984 "solutions.m"
          {
#line 984 "solutions.m"
            mercury__solutions__do_while_4_p_4_1(mercury__solutions__env_ptr);
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

#line 12099 "solutions.c"

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

#line 12125 "solutions.c"

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

#line 12152 "solutions.c"

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

#line 12182 "solutions.c"

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

#line 12203 "solutions.c"

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

#line 12221 "solutions.c"

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

#line 12287 "solutions.c"

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
#line 12313 "solutions.c"

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

#line 12336 "solutions.c"

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
#line 12382 "solutions.c"

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

#line 12406 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 989 "solutions.m"
}
#line 984 "solutions.m"
          {
#line 984 "solutions.m"
            mercury__solutions__do_while_4_p_3_1(mercury__solutions__env_ptr);
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

#line 12530 "solutions.c"

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

#line 12556 "solutions.c"

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

#line 12583 "solutions.c"

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

#line 12613 "solutions.c"

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

#line 12634 "solutions.c"

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

#line 12652 "solutions.c"

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

#line 12718 "solutions.c"

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
#line 12744 "solutions.c"

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

#line 12767 "solutions.c"

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
#line 12818 "solutions.c"

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

#line 12842 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 989 "solutions.m"
}
#line 984 "solutions.m"
          {
#line 984 "solutions.m"
            mercury__solutions__do_while_4_p_2_1(mercury__solutions__env_ptr);
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

#line 12966 "solutions.c"

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

#line 12992 "solutions.c"

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

#line 13019 "solutions.c"

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

#line 13049 "solutions.c"

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

#line 13070 "solutions.c"

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

#line 13088 "solutions.c"

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

#line 13154 "solutions.c"

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
#line 13180 "solutions.c"

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

#line 13203 "solutions.c"

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
#line 13249 "solutions.c"

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

#line 13273 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 989 "solutions.m"
}
#line 984 "solutions.m"
          {
#line 984 "solutions.m"
            mercury__solutions__do_while_4_p_1_1(mercury__solutions__env_ptr);
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

#line 13397 "solutions.c"

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

#line 13423 "solutions.c"

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

#line 13450 "solutions.c"

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

#line 13480 "solutions.c"

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

#line 13501 "solutions.c"

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

#line 13519 "solutions.c"

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

#line 13585 "solutions.c"

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
#line 13611 "solutions.c"

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

#line 13634 "solutions.c"

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
#line 13680 "solutions.c"

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

#line 13704 "solutions.c"

		;}
#undef MR_PROC_LABEL
#line 989 "solutions.m"
}
#line 984 "solutions.m"
          {
#line 984 "solutions.m"
            mercury__solutions__do_while_4_p_0_1(mercury__solutions__env_ptr);
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

#line 13828 "solutions.c"

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

#line 13854 "solutions.c"

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

#line 13881 "solutions.c"

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

#line 13911 "solutions.c"

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

#line 13932 "solutions.c"

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

#line 13950 "solutions.c"

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
#line 43 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_22;
#line 40 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_V_23;

#line 249 "solutions.m"
    {
#line 249 "solutions.m"
      mercury__solutions__builtin_aggregate2_6_p_7(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__TypeInfo_for_U_20, mercury__solutions__TypeInfo_for_V_21, mercury__solutions__Generator_7, mercury__solutions__Accumulator_8, mercury__solutions__STATE_VARIABLE_Acc1_0_11, &mercury__solutions__STATE_VARIABLE_Acc1_15_15, mercury__solutions__STATE_VARIABLE_Acc2_0_13, &mercury__solutions__STATE_VARIABLE_Acc2_16_16);
    }
#line 43 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_7

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc1_15_15 ;
		{
#line 43 "builtin.opt"

    Y = X;

#line 14017 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc1_12  = (MR_Box) Y;
#line 43 "builtin.opt"
}
#line 40 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_7

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc2_16_16 ;
		{
#line 40 "builtin.opt"

    Y = X;

#line 14037 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc2_14  = (MR_Box) Y;
#line 40 "builtin.opt"
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
#line 43 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_22;
#line 40 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_V_23;

#line 249 "solutions.m"
    {
#line 249 "solutions.m"
      mercury__solutions__builtin_aggregate2_6_p_6(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__TypeInfo_for_U_20, mercury__solutions__TypeInfo_for_V_21, mercury__solutions__Generator_7, mercury__solutions__Accumulator_8, mercury__solutions__STATE_VARIABLE_Acc1_0_11, &mercury__solutions__STATE_VARIABLE_Acc1_15_15, mercury__solutions__STATE_VARIABLE_Acc2_0_13, &mercury__solutions__STATE_VARIABLE_Acc2_16_16);
    }
#line 43 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_6

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc1_15_15 ;
		{
#line 43 "builtin.opt"

    Y = X;

#line 14103 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc1_12  = (MR_Box) Y;
#line 43 "builtin.opt"
}
#line 40 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_6

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc2_16_16 ;
		{
#line 40 "builtin.opt"

    Y = X;

#line 14123 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc2_14  = (MR_Box) Y;
#line 40 "builtin.opt"
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
#line 43 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_22;
#line 43 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_V_23;

#line 249 "solutions.m"
    {
#line 249 "solutions.m"
      mercury__solutions__builtin_aggregate2_6_p_5(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__TypeInfo_for_U_20, mercury__solutions__TypeInfo_for_V_21, mercury__solutions__Generator_7, mercury__solutions__Accumulator_8, mercury__solutions__STATE_VARIABLE_Acc1_0_11, &mercury__solutions__STATE_VARIABLE_Acc1_15_15, mercury__solutions__STATE_VARIABLE_Acc2_0_13, &mercury__solutions__STATE_VARIABLE_Acc2_16_16);
    }
#line 43 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_5

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc1_15_15 ;
		{
#line 43 "builtin.opt"

    Y = X;

#line 14189 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc1_12  = (MR_Box) Y;
#line 43 "builtin.opt"
}
#line 43 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_5

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc2_16_16 ;
		{
#line 43 "builtin.opt"

    Y = X;

#line 14209 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc2_14  = (MR_Box) Y;
#line 43 "builtin.opt"
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
#line 43 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_22;
#line 43 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_V_23;

#line 249 "solutions.m"
    {
#line 249 "solutions.m"
      mercury__solutions__builtin_aggregate2_6_p_4(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__TypeInfo_for_U_20, mercury__solutions__TypeInfo_for_V_21, mercury__solutions__Generator_7, mercury__solutions__Accumulator_8, mercury__solutions__STATE_VARIABLE_Acc1_0_11, &mercury__solutions__STATE_VARIABLE_Acc1_15_15, mercury__solutions__STATE_VARIABLE_Acc2_0_13, &mercury__solutions__STATE_VARIABLE_Acc2_16_16);
    }
#line 43 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_4

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc1_15_15 ;
		{
#line 43 "builtin.opt"

    Y = X;

#line 14275 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc1_12  = (MR_Box) Y;
#line 43 "builtin.opt"
}
#line 43 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_4

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc2_16_16 ;
		{
#line 43 "builtin.opt"

    Y = X;

#line 14295 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc2_14  = (MR_Box) Y;
#line 43 "builtin.opt"
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
#line 43 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_22;
#line 40 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_V_23;

#line 249 "solutions.m"
    {
#line 249 "solutions.m"
      mercury__solutions__builtin_aggregate2_6_p_3(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__TypeInfo_for_U_20, mercury__solutions__TypeInfo_for_V_21, mercury__solutions__Generator_7, mercury__solutions__Accumulator_8, mercury__solutions__STATE_VARIABLE_Acc1_0_11, &mercury__solutions__STATE_VARIABLE_Acc1_15_15, mercury__solutions__STATE_VARIABLE_Acc2_0_13, &mercury__solutions__STATE_VARIABLE_Acc2_16_16);
    }
#line 43 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_3

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc1_15_15 ;
		{
#line 43 "builtin.opt"

    Y = X;

#line 14361 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc1_12  = (MR_Box) Y;
#line 43 "builtin.opt"
}
#line 40 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_3

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc2_16_16 ;
		{
#line 40 "builtin.opt"

    Y = X;

#line 14381 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc2_14  = (MR_Box) Y;
#line 40 "builtin.opt"
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
#line 43 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_22;
#line 40 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_V_23;

#line 249 "solutions.m"
    {
#line 249 "solutions.m"
      mercury__solutions__builtin_aggregate2_6_p_2(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__TypeInfo_for_U_20, mercury__solutions__TypeInfo_for_V_21, mercury__solutions__Generator_7, mercury__solutions__Accumulator_8, mercury__solutions__STATE_VARIABLE_Acc1_0_11, &mercury__solutions__STATE_VARIABLE_Acc1_15_15, mercury__solutions__STATE_VARIABLE_Acc2_0_13, &mercury__solutions__STATE_VARIABLE_Acc2_16_16);
    }
#line 43 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_2

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc1_15_15 ;
		{
#line 43 "builtin.opt"

    Y = X;

#line 14447 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc1_12  = (MR_Box) Y;
#line 43 "builtin.opt"
}
#line 40 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_2

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc2_16_16 ;
		{
#line 40 "builtin.opt"

    Y = X;

#line 14467 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc2_14  = (MR_Box) Y;
#line 40 "builtin.opt"
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
#line 43 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_22;
#line 43 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_V_23;

#line 249 "solutions.m"
    {
#line 249 "solutions.m"
      mercury__solutions__builtin_aggregate2_6_p_1(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__TypeInfo_for_U_20, mercury__solutions__TypeInfo_for_V_21, mercury__solutions__Generator_7, mercury__solutions__Accumulator_8, mercury__solutions__STATE_VARIABLE_Acc1_0_11, &mercury__solutions__STATE_VARIABLE_Acc1_15_15, mercury__solutions__STATE_VARIABLE_Acc2_0_13, &mercury__solutions__STATE_VARIABLE_Acc2_16_16);
    }
#line 43 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_1

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc1_15_15 ;
		{
#line 43 "builtin.opt"

    Y = X;

#line 14533 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc1_12  = (MR_Box) Y;
#line 43 "builtin.opt"
}
#line 43 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_1

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc2_16_16 ;
		{
#line 43 "builtin.opt"

    Y = X;

#line 14553 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc2_14  = (MR_Box) Y;
#line 43 "builtin.opt"
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
#line 43 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_22;
#line 43 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_V_23;

#line 249 "solutions.m"
    {
#line 249 "solutions.m"
      mercury__solutions__builtin_aggregate2_6_p_0(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__TypeInfo_for_U_20, mercury__solutions__TypeInfo_for_V_21, mercury__solutions__Generator_7, mercury__solutions__Accumulator_8, mercury__solutions__STATE_VARIABLE_Acc1_0_11, &mercury__solutions__STATE_VARIABLE_Acc1_15_15, mercury__solutions__STATE_VARIABLE_Acc2_0_13, &mercury__solutions__STATE_VARIABLE_Acc2_16_16);
    }
#line 43 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc1_15_15 ;
		{
#line 43 "builtin.opt"

    Y = X;

#line 14619 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc1_12  = (MR_Box) Y;
#line 43 "builtin.opt"
}
#line 43 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate2_6_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc2_16_16 ;
		{
#line 43 "builtin.opt"

    Y = X;

#line 14639 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc2_14  = (MR_Box) Y;
#line 43 "builtin.opt"
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
#line 40 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 245 "solutions.m"
    {
#line 245 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_9(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 40 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_9

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 40 "builtin.opt"

    Y = X;

#line 14695 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 40 "builtin.opt"
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
#line 43 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 245 "solutions.m"
    {
#line 245 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_8(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 43 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_8

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 43 "builtin.opt"

    Y = X;

#line 14751 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 43 "builtin.opt"
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
#line 43 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 245 "solutions.m"
    {
#line 245 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_7(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 43 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_7

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 43 "builtin.opt"

    Y = X;

#line 14807 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 43 "builtin.opt"
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
#line 40 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 245 "solutions.m"
    {
#line 245 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_6(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 40 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_6

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 40 "builtin.opt"

    Y = X;

#line 14863 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 40 "builtin.opt"
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
#line 40 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 245 "solutions.m"
    {
#line 245 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_5(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 40 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_5

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 40 "builtin.opt"

    Y = X;

#line 14919 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 40 "builtin.opt"
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
#line 40 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 245 "solutions.m"
    {
#line 245 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_4(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 40 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_4

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 40 "builtin.opt"

    Y = X;

#line 14975 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 40 "builtin.opt"
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
#line 40 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 245 "solutions.m"
    {
#line 245 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_3(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 40 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_3

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 40 "builtin.opt"

    Y = X;

#line 15031 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 40 "builtin.opt"
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
#line 40 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 245 "solutions.m"
    {
#line 245 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_1(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 40 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_2

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 40 "builtin.opt"

    Y = X;

#line 15087 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 40 "builtin.opt"
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
#line 43 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 245 "solutions.m"
    {
#line 245 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_2(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 43 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_1

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 43 "builtin.opt"

    Y = X;

#line 15143 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 43 "builtin.opt"
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
#line 43 "builtin.opt"
    MR_Word mercury__solutions__TypeInfo_for_U_14;

#line 245 "solutions.m"
    {
#line 245 "solutions.m"
      mercury__solutions__builtin_aggregate_4_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Generator_5, mercury__solutions__Accumulator_6, mercury__solutions__STATE_VARIABLE_Acc_0_8, &mercury__solutions__STATE_VARIABLE_Acc_10_10);
    }
#line 43 "builtin.opt"
{
#define MR_PROC_LABEL mercury__solutions__unsorted_aggregate_4_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__solutions__STATE_VARIABLE_Acc_10_10 ;
		{
#line 43 "builtin.opt"

    Y = X;

#line 15199 "solutions.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__solutions__STATE_VARIABLE_Acc_9  = (MR_Box) Y;
#line 43 "builtin.opt"
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
#line 606 "list.opt"
    {
#line 606 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__UnsortedList_23, (MR_Integer) 0, &mercury__solutions__V_5_27);
    }
#line 1111 "list.opt"
    {
#line 1111 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__V_5_27, mercury__solutions__UnsortedList_23, &mercury__solutions__Solutions_11);
    }
#line 242 "solutions.m"
    {
#line 242 "solutions.m"
      mercury__list__foldl2_6_p_0(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__TypeInfo_for_U_19, mercury__solutions__TypeInfo_for_V_20, mercury__solutions__Accumulator_8, mercury__solutions__Solutions_11, mercury__solutions__STATE_VARIABLE_Acc1_0_12, mercury__solutions__STATE_VARIABLE_Acc1_13, mercury__solutions__STATE_VARIABLE_Acc2_0_14, mercury__solutions__STATE_VARIABLE_Acc2_15);
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
#line 606 "list.opt"
    {
#line 606 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__UnsortedList_23, (MR_Integer) 0, &mercury__solutions__V_5_27);
    }
#line 1111 "list.opt"
    {
#line 1111 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__V_5_27, mercury__solutions__UnsortedList_23, &mercury__solutions__Solutions_11);
    }
#line 242 "solutions.m"
    {
#line 242 "solutions.m"
      mercury__list__foldl2_6_p_2(mercury__solutions__TypeInfo_for_T_18, mercury__solutions__TypeInfo_for_U_19, mercury__solutions__TypeInfo_for_V_20, mercury__solutions__Accumulator_8, mercury__solutions__Solutions_11, mercury__solutions__STATE_VARIABLE_Acc1_0_12, mercury__solutions__STATE_VARIABLE_Acc1_13, mercury__solutions__STATE_VARIABLE_Acc2_0_14, mercury__solutions__STATE_VARIABLE_Acc2_15);
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
#line 606 "list.opt"
    {
#line 606 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__UnsortedList_16, (MR_Integer) 0, &mercury__solutions__V_5_20);
    }
#line 1111 "list.opt"
    {
#line 1111 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__V_5_20, mercury__solutions__UnsortedList_16, &mercury__solutions__Solutions_8);
    }
#line 238 "solutions.m"
    {
#line 238 "solutions.m"
      mercury__list__foldl_4_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Accumulator_6, mercury__solutions__Solutions_8, mercury__solutions__STATE_VARIABLE_Acc_0_9, mercury__solutions__STATE_VARIABLE_Acc_10);
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
#line 606 "list.opt"
    {
#line 606 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__UnsortedList_16, (MR_Integer) 0, &mercury__solutions__V_5_20);
    }
#line 1111 "list.opt"
    {
#line 1111 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__V_5_20, mercury__solutions__UnsortedList_16, &mercury__solutions__Solutions_8);
    }
#line 238 "solutions.m"
    {
#line 238 "solutions.m"
      mercury__list__foldl_4_p_2(mercury__solutions__TypeInfo_for_T_12, mercury__solutions__TypeInfo_for_U_13, mercury__solutions__Accumulator_6, mercury__solutions__Solutions_8, mercury__solutions__STATE_VARIABLE_Acc_0_9, mercury__solutions__STATE_VARIABLE_Acc_10);
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
#line 606 "list.opt"
    {
#line 606 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__solutions__TypeInfo_for_T_19, mercury__solutions__UnsortedList_30, (MR_Integer) 0, &mercury__solutions__V_5_34);
    }
#line 1111 "list.opt"
    {
#line 1111 "list.opt"
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
    MR_Word mercury__solutions__V_4_10;
#line 222 "solutions.m"
    MR_Integer mercury__solutions__V_5_13;

#line 223 "solutions.m"
    {
#line 223 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_1(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__Pred_3, &mercury__solutions__List_5);
    }
#line 606 "list.opt"
    {
#line 606 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__List_5, (MR_Integer) 0, &mercury__solutions__V_5_13);
    }
#line 1111 "list.opt"
    {
#line 1111 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__V_5_13, mercury__solutions__List_5, &mercury__solutions__V_4_10);
    }
#line 214 "set_ordlist.opt"
    *mercury__solutions__Set_4 = (MR_Word) mercury__solutions__V_4_10;
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
    MR_Word mercury__solutions__V_4_10;
#line 222 "solutions.m"
    MR_Integer mercury__solutions__V_5_13;

#line 223 "solutions.m"
    {
#line 223 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_0(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__Pred_3, &mercury__solutions__List_5);
    }
#line 606 "list.opt"
    {
#line 606 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__List_5, (MR_Integer) 0, &mercury__solutions__V_5_13);
    }
#line 1111 "list.opt"
    {
#line 1111 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_6, mercury__solutions__V_5_13, mercury__solutions__List_5, &mercury__solutions__V_4_10);
    }
#line 214 "set_ordlist.opt"
    *mercury__solutions__Set_4 = (MR_Word) mercury__solutions__V_4_10;
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
    MR_Word mercury__solutions__V_4_12;
#line 222 "solutions.m"
    MR_Integer mercury__solutions__V_5_15;

#line 223 "solutions.m"
    {
#line 223 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_1(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__P_3, &mercury__solutions__List_8);
    }
#line 606 "list.opt"
    {
#line 606 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__List_8, (MR_Integer) 0, &mercury__solutions__V_5_15);
    }
#line 1111 "list.opt"
    {
#line 1111 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__V_5_15, mercury__solutions__List_8, &mercury__solutions__V_4_12);
    }
#line 214 "set_ordlist.opt"
    mercury__solutions__S_4 = (MR_Word) mercury__solutions__V_4_12;
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
    MR_Word mercury__solutions__V_4_12;
#line 222 "solutions.m"
    MR_Integer mercury__solutions__V_5_15;

#line 223 "solutions.m"
    {
#line 223 "solutions.m"
      mercury__solutions__builtin_solutions_2_p_0(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__P_3, &mercury__solutions__List_8);
    }
#line 606 "list.opt"
    {
#line 606 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__List_8, (MR_Integer) 0, &mercury__solutions__V_5_15);
    }
#line 1111 "list.opt"
    {
#line 1111 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__V_5_15, mercury__solutions__List_8, &mercury__solutions__V_4_12);
    }
#line 214 "set_ordlist.opt"
    mercury__solutions__S_4 = (MR_Word) mercury__solutions__V_4_12;
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
#line 606 "list.opt"
    {
#line 606 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__solutions__TypeInfo_for_T_5, mercury__solutions__UnsortedList_8, (MR_Integer) 0, &mercury__solutions__V_5_12);
    }
#line 1111 "list.opt"
    {
#line 1111 "list.opt"
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
#line 606 "list.opt"
    {
#line 606 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__solutions__TypeInfo_for_T_7, mercury__solutions__UnsortedList_5, (MR_Integer) 0, &mercury__solutions__V_5_10);
    }
#line 1111 "list.opt"
    {
#line 1111 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__solutions__TypeInfo_for_T_7, mercury__solutions__V_5_10, mercury__solutions__UnsortedList_5, mercury__solutions__List_4);
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
#line 606 "list.opt"
    {
#line 606 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__solutions__TypeInfo_for_T_7, mercury__solutions__UnsortedList_5, (MR_Integer) 0, &mercury__solutions__V_5_10);
    }
#line 1111 "list.opt"
    {
#line 1111 "list.opt"
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
