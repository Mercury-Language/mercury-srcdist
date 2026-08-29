/*
** Automatically generated from `solutions.m'
** by the Mercury compiler,
** version 22.01.9-beta-2026-08-29
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


// :- module solutions.
// :- implementation.

/*
INIT mercury__solutions__init
ENDINIT
*/

#include "solutions.mih"


#include "array.mih"
#include "assoc_list.mih"
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
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "prolog.mih"
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



struct mercury__solutions__do_while_4_p_5_env_0_s {
  MR_Word mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T_22;
  MR_Word mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T2_23;
  MR_Word mercury__solutions__do_while_4_p_5_env_0__GeneratorPred_5;
  MR_Word mercury__solutions__do_while_4_p_5_env_0__CollectorPred_6;
  MR_bool mercury__solutions__do_while_4_p_5_env_0__succeeded;
  MR_Word mercury__solutions__do_while_4_p_5_env_0__HeapPtr_8;
  MR_Word mercury__solutions__do_while_4_p_5_env_0__TrailPtr_10;
  MR_Word mercury__solutions__do_while_4_p_5_env_0__Mutvar_11;
  jmp_buf mercury__solutions__do_while_4_p_5_env_0__commit_0;
  MR_Box mercury__solutions__do_while_4_p_5_env_0__Answer0_12;
  MR_Box mercury__solutions__do_while_4_p_5_env_0__Answer_13;
  MR_Box mercury__solutions__do_while_4_p_5_env_0__Acc0_14;
  MR_Word mercury__solutions__do_while_4_p_5_env_0__More_15;
  MR_Box mercury__solutions__do_while_4_p_5_env_0__Acc1_16;
};

struct mercury__solutions__do_while_4_p_4_env_0_s {
  MR_Word mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T_22;
  MR_Word mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T2_23;
  MR_Word mercury__solutions__do_while_4_p_4_env_0__GeneratorPred_5;
  MR_Word mercury__solutions__do_while_4_p_4_env_0__CollectorPred_6;
  MR_bool mercury__solutions__do_while_4_p_4_env_0__succeeded;
  MR_Word mercury__solutions__do_while_4_p_4_env_0__HeapPtr_8;
  MR_Word mercury__solutions__do_while_4_p_4_env_0__TrailPtr_10;
  MR_Word mercury__solutions__do_while_4_p_4_env_0__Mutvar_11;
  jmp_buf mercury__solutions__do_while_4_p_4_env_0__commit_0;
  MR_Box mercury__solutions__do_while_4_p_4_env_0__Answer0_12;
  MR_Box mercury__solutions__do_while_4_p_4_env_0__Answer_13;
  MR_Box mercury__solutions__do_while_4_p_4_env_0__Acc0_14;
  MR_Word mercury__solutions__do_while_4_p_4_env_0__More_15;
  MR_Box mercury__solutions__do_while_4_p_4_env_0__Acc1_16;
};

struct mercury__solutions__do_while_4_p_3_env_0_s {
  MR_Word mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T_22;
  MR_Word mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T2_23;
  MR_Word mercury__solutions__do_while_4_p_3_env_0__GeneratorPred_5;
  MR_Word mercury__solutions__do_while_4_p_3_env_0__CollectorPred_6;
  MR_bool mercury__solutions__do_while_4_p_3_env_0__succeeded;
  MR_Word mercury__solutions__do_while_4_p_3_env_0__HeapPtr_8;
  MR_Word mercury__solutions__do_while_4_p_3_env_0__TrailPtr_10;
  MR_Word mercury__solutions__do_while_4_p_3_env_0__Mutvar_11;
  jmp_buf mercury__solutions__do_while_4_p_3_env_0__commit_0;
  MR_Box mercury__solutions__do_while_4_p_3_env_0__Answer0_12;
  MR_Box mercury__solutions__do_while_4_p_3_env_0__Answer_13;
  MR_Box mercury__solutions__do_while_4_p_3_env_0__Acc0_14;
  MR_Word mercury__solutions__do_while_4_p_3_env_0__More_15;
  MR_Box mercury__solutions__do_while_4_p_3_env_0__Acc1_16;
};

struct mercury__solutions__do_while_4_p_2_env_0_s {
  MR_Word mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T_22;
  MR_Word mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T2_23;
  MR_Word mercury__solutions__do_while_4_p_2_env_0__GeneratorPred_5;
  MR_Word mercury__solutions__do_while_4_p_2_env_0__CollectorPred_6;
  MR_bool mercury__solutions__do_while_4_p_2_env_0__succeeded;
  MR_Word mercury__solutions__do_while_4_p_2_env_0__HeapPtr_8;
  MR_Word mercury__solutions__do_while_4_p_2_env_0__TrailPtr_10;
  MR_Word mercury__solutions__do_while_4_p_2_env_0__Mutvar_11;
  jmp_buf mercury__solutions__do_while_4_p_2_env_0__commit_0;
  MR_Box mercury__solutions__do_while_4_p_2_env_0__Answer0_12;
  MR_Box mercury__solutions__do_while_4_p_2_env_0__Answer_13;
  MR_Box mercury__solutions__do_while_4_p_2_env_0__Acc0_14;
  MR_Word mercury__solutions__do_while_4_p_2_env_0__More_15;
  MR_Box mercury__solutions__do_while_4_p_2_env_0__Acc1_16;
};

struct mercury__solutions__do_while_4_p_1_env_0_s {
  MR_Word mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T_22;
  MR_Word mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T2_23;
  MR_Word mercury__solutions__do_while_4_p_1_env_0__GeneratorPred_5;
  MR_Word mercury__solutions__do_while_4_p_1_env_0__CollectorPred_6;
  MR_bool mercury__solutions__do_while_4_p_1_env_0__succeeded;
  MR_Word mercury__solutions__do_while_4_p_1_env_0__HeapPtr_8;
  MR_Word mercury__solutions__do_while_4_p_1_env_0__TrailPtr_10;
  MR_Word mercury__solutions__do_while_4_p_1_env_0__Mutvar_11;
  jmp_buf mercury__solutions__do_while_4_p_1_env_0__commit_0;
  MR_Box mercury__solutions__do_while_4_p_1_env_0__Answer0_12;
  MR_Box mercury__solutions__do_while_4_p_1_env_0__Answer_13;
  MR_Box mercury__solutions__do_while_4_p_1_env_0__Acc0_14;
  MR_Word mercury__solutions__do_while_4_p_1_env_0__More_15;
  MR_Box mercury__solutions__do_while_4_p_1_env_0__Acc1_16;
};

struct mercury__solutions__do_while_4_p_0_env_0_s {
  MR_Word mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T_22;
  MR_Word mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T2_23;
  MR_Word mercury__solutions__do_while_4_p_0_env_0__GeneratorPred_5;
  MR_Word mercury__solutions__do_while_4_p_0_env_0__CollectorPred_6;
  MR_bool mercury__solutions__do_while_4_p_0_env_0__succeeded;
  MR_Word mercury__solutions__do_while_4_p_0_env_0__HeapPtr_8;
  MR_Word mercury__solutions__do_while_4_p_0_env_0__TrailPtr_10;
  MR_Word mercury__solutions__do_while_4_p_0_env_0__Mutvar_11;
  jmp_buf mercury__solutions__do_while_4_p_0_env_0__commit_0;
  MR_Box mercury__solutions__do_while_4_p_0_env_0__Answer0_12;
  MR_Box mercury__solutions__do_while_4_p_0_env_0__Answer_13;
  MR_Box mercury__solutions__do_while_4_p_0_env_0__Acc0_14;
  MR_Word mercury__solutions__do_while_4_p_0_env_0__More_15;
  MR_Box mercury__solutions__do_while_4_p_0_env_0__Acc1_16;
};

struct mercury__solutions__builtin_aggregate2_6_p_7_env_0_s {
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_T_32;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_U_33;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_V_34;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__GeneratorPred_7;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__CollectorPred_8;
  MR_bool mercury__solutions__builtin_aggregate2_6_p_7_env_0__succeeded;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__HeapPtr_11;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__TrailPtr_13;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar1_14;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar2_15;
  jmp_buf mercury__solutions__builtin_aggregate2_6_p_7_env_0__commit_0;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_7_env_0__Answer0_16;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_7_env_0__Answer_17;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_7_env_0__SubAccA0_18;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_7_env_0__SubAccB0_19;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_7_env_0__SubAccA_20;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_7_env_0__SubAccB_21;
};

struct mercury__solutions__builtin_aggregate2_6_p_6_env_0_s {
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_T_32;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_U_33;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_V_34;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__GeneratorPred_7;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__CollectorPred_8;
  MR_bool mercury__solutions__builtin_aggregate2_6_p_6_env_0__succeeded;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__HeapPtr_11;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__TrailPtr_13;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar1_14;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar2_15;
  jmp_buf mercury__solutions__builtin_aggregate2_6_p_6_env_0__commit_0;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_6_env_0__Answer0_16;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_6_env_0__Answer_17;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_6_env_0__SubAccA0_18;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_6_env_0__SubAccB0_19;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_6_env_0__SubAccA_20;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_6_env_0__SubAccB_21;
};

struct mercury__solutions__builtin_aggregate2_6_p_5_env_0_s {
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_T_32;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_U_33;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_V_34;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__GeneratorPred_7;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__CollectorPred_8;
  MR_bool mercury__solutions__builtin_aggregate2_6_p_5_env_0__succeeded;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__HeapPtr_11;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__TrailPtr_13;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar1_14;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar2_15;
  jmp_buf mercury__solutions__builtin_aggregate2_6_p_5_env_0__commit_0;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_5_env_0__Answer0_16;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_5_env_0__Answer_17;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_5_env_0__SubAccA0_18;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_5_env_0__SubAccB0_19;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_5_env_0__SubAccA_20;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_5_env_0__SubAccB_21;
};

struct mercury__solutions__builtin_aggregate2_6_p_4_env_0_s {
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_T_32;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_U_33;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_V_34;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__GeneratorPred_7;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__CollectorPred_8;
  MR_bool mercury__solutions__builtin_aggregate2_6_p_4_env_0__succeeded;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__HeapPtr_11;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__TrailPtr_13;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar1_14;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar2_15;
  jmp_buf mercury__solutions__builtin_aggregate2_6_p_4_env_0__commit_0;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_4_env_0__Answer0_16;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_4_env_0__Answer_17;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_4_env_0__SubAccA0_18;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_4_env_0__SubAccB0_19;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_4_env_0__SubAccA_20;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_4_env_0__SubAccB_21;
};

struct mercury__solutions__builtin_aggregate2_6_p_3_env_0_s {
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_T_32;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_U_33;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_V_34;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__GeneratorPred_7;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__CollectorPred_8;
  MR_bool mercury__solutions__builtin_aggregate2_6_p_3_env_0__succeeded;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__HeapPtr_11;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__TrailPtr_13;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar1_14;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar2_15;
  jmp_buf mercury__solutions__builtin_aggregate2_6_p_3_env_0__commit_0;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_3_env_0__Answer0_16;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_3_env_0__Answer_17;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_3_env_0__SubAccA0_18;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_3_env_0__SubAccB0_19;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_3_env_0__SubAccA_20;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_3_env_0__SubAccB_21;
};

struct mercury__solutions__builtin_aggregate2_6_p_2_env_0_s {
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_T_32;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_U_33;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_V_34;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__GeneratorPred_7;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__CollectorPred_8;
  MR_bool mercury__solutions__builtin_aggregate2_6_p_2_env_0__succeeded;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__HeapPtr_11;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__TrailPtr_13;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar1_14;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar2_15;
  jmp_buf mercury__solutions__builtin_aggregate2_6_p_2_env_0__commit_0;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_2_env_0__Answer0_16;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_2_env_0__Answer_17;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_2_env_0__SubAccA0_18;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_2_env_0__SubAccB0_19;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_2_env_0__SubAccA_20;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_2_env_0__SubAccB_21;
};

struct mercury__solutions__builtin_aggregate2_6_p_1_env_0_s {
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_T_32;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_U_33;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_V_34;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__GeneratorPred_7;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__CollectorPred_8;
  MR_bool mercury__solutions__builtin_aggregate2_6_p_1_env_0__succeeded;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__HeapPtr_11;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__TrailPtr_13;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar1_14;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar2_15;
  jmp_buf mercury__solutions__builtin_aggregate2_6_p_1_env_0__commit_0;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_1_env_0__Answer0_16;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_1_env_0__Answer_17;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_1_env_0__SubAccA0_18;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_1_env_0__SubAccB0_19;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_1_env_0__SubAccA_20;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_1_env_0__SubAccB_21;
};

struct mercury__solutions__builtin_aggregate2_6_p_0_env_0_s {
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_T_32;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_U_33;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_V_34;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__GeneratorPred_7;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__CollectorPred_8;
  MR_bool mercury__solutions__builtin_aggregate2_6_p_0_env_0__succeeded;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__HeapPtr_11;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__TrailPtr_13;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar1_14;
  MR_Word mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar2_15;
  jmp_buf mercury__solutions__builtin_aggregate2_6_p_0_env_0__commit_0;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_0_env_0__Answer0_16;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_0_env_0__Answer_17;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_0_env_0__SubAccA0_18;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_0_env_0__SubAccB0_19;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_0_env_0__SubAccA_20;
  MR_Box mercury__solutions__builtin_aggregate2_6_p_0_env_0__SubAccB_21;
};

struct mercury__solutions__builtin_aggregate_4_p_9_env_0_s {
  MR_Word mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_T_21;
  MR_Word mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_U_22;
  MR_Word mercury__solutions__builtin_aggregate_4_p_9_env_0__GeneratorPred_5;
  MR_Word mercury__solutions__builtin_aggregate_4_p_9_env_0__CollectorPred_6;
  MR_bool mercury__solutions__builtin_aggregate_4_p_9_env_0__succeeded;
  MR_Word mercury__solutions__builtin_aggregate_4_p_9_env_0__HeapPtr_8;
  MR_Word mercury__solutions__builtin_aggregate_4_p_9_env_0__TrailPtr_10;
  MR_Word mercury__solutions__builtin_aggregate_4_p_9_env_0__Mutvar_11;
  jmp_buf mercury__solutions__builtin_aggregate_4_p_9_env_0__commit_0;
  MR_Box mercury__solutions__builtin_aggregate_4_p_9_env_0__Answer0_12;
  MR_Box mercury__solutions__builtin_aggregate_4_p_9_env_0__Answer_13;
  MR_Box mercury__solutions__builtin_aggregate_4_p_9_env_0__Acc0_14;
  MR_Box mercury__solutions__builtin_aggregate_4_p_9_env_0__Acc1_15;
};

struct mercury__solutions__builtin_aggregate_4_p_8_env_0_s {
  MR_Word mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_T_21;
  MR_Word mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_U_22;
  MR_Word mercury__solutions__builtin_aggregate_4_p_8_env_0__GeneratorPred_5;
  MR_Word mercury__solutions__builtin_aggregate_4_p_8_env_0__CollectorPred_6;
  MR_bool mercury__solutions__builtin_aggregate_4_p_8_env_0__succeeded;
  MR_Word mercury__solutions__builtin_aggregate_4_p_8_env_0__HeapPtr_8;
  MR_Word mercury__solutions__builtin_aggregate_4_p_8_env_0__TrailPtr_10;
  MR_Word mercury__solutions__builtin_aggregate_4_p_8_env_0__Mutvar_11;
  jmp_buf mercury__solutions__builtin_aggregate_4_p_8_env_0__commit_0;
  MR_Box mercury__solutions__builtin_aggregate_4_p_8_env_0__Answer0_12;
  MR_Box mercury__solutions__builtin_aggregate_4_p_8_env_0__Answer_13;
  MR_Box mercury__solutions__builtin_aggregate_4_p_8_env_0__Acc0_14;
  MR_Box mercury__solutions__builtin_aggregate_4_p_8_env_0__Acc1_15;
};

struct mercury__solutions__builtin_aggregate_4_p_7_env_0_s {
  MR_Word mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_T_21;
  MR_Word mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_U_22;
  MR_Word mercury__solutions__builtin_aggregate_4_p_7_env_0__GeneratorPred_5;
  MR_Word mercury__solutions__builtin_aggregate_4_p_7_env_0__CollectorPred_6;
  MR_bool mercury__solutions__builtin_aggregate_4_p_7_env_0__succeeded;
  MR_Word mercury__solutions__builtin_aggregate_4_p_7_env_0__HeapPtr_8;
  MR_Word mercury__solutions__builtin_aggregate_4_p_7_env_0__TrailPtr_10;
  MR_Word mercury__solutions__builtin_aggregate_4_p_7_env_0__Mutvar_11;
  jmp_buf mercury__solutions__builtin_aggregate_4_p_7_env_0__commit_0;
  MR_Box mercury__solutions__builtin_aggregate_4_p_7_env_0__Answer0_12;
  MR_Box mercury__solutions__builtin_aggregate_4_p_7_env_0__Answer_13;
  MR_Box mercury__solutions__builtin_aggregate_4_p_7_env_0__Acc0_14;
  MR_Box mercury__solutions__builtin_aggregate_4_p_7_env_0__Acc1_15;
};

struct mercury__solutions__builtin_aggregate_4_p_6_env_0_s {
  MR_Word mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_T_21;
  MR_Word mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_U_22;
  MR_Word mercury__solutions__builtin_aggregate_4_p_6_env_0__GeneratorPred_5;
  MR_Word mercury__solutions__builtin_aggregate_4_p_6_env_0__CollectorPred_6;
  MR_bool mercury__solutions__builtin_aggregate_4_p_6_env_0__succeeded;
  MR_Word mercury__solutions__builtin_aggregate_4_p_6_env_0__HeapPtr_8;
  MR_Word mercury__solutions__builtin_aggregate_4_p_6_env_0__TrailPtr_10;
  MR_Word mercury__solutions__builtin_aggregate_4_p_6_env_0__Mutvar_11;
  jmp_buf mercury__solutions__builtin_aggregate_4_p_6_env_0__commit_0;
  MR_Box mercury__solutions__builtin_aggregate_4_p_6_env_0__Answer0_12;
  MR_Box mercury__solutions__builtin_aggregate_4_p_6_env_0__Answer_13;
  MR_Box mercury__solutions__builtin_aggregate_4_p_6_env_0__Acc0_14;
  MR_Box mercury__solutions__builtin_aggregate_4_p_6_env_0__Acc1_15;
};

struct mercury__solutions__builtin_aggregate_4_p_5_env_0_s {
  MR_Word mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_T_21;
  MR_Word mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_U_22;
  MR_Word mercury__solutions__builtin_aggregate_4_p_5_env_0__GeneratorPred_5;
  MR_Word mercury__solutions__builtin_aggregate_4_p_5_env_0__CollectorPred_6;
  MR_bool mercury__solutions__builtin_aggregate_4_p_5_env_0__succeeded;
  MR_Word mercury__solutions__builtin_aggregate_4_p_5_env_0__HeapPtr_8;
  MR_Word mercury__solutions__builtin_aggregate_4_p_5_env_0__TrailPtr_10;
  MR_Word mercury__solutions__builtin_aggregate_4_p_5_env_0__Mutvar_11;
  jmp_buf mercury__solutions__builtin_aggregate_4_p_5_env_0__commit_0;
  MR_Box mercury__solutions__builtin_aggregate_4_p_5_env_0__Answer0_12;
  MR_Box mercury__solutions__builtin_aggregate_4_p_5_env_0__Answer_13;
  MR_Box mercury__solutions__builtin_aggregate_4_p_5_env_0__Acc0_14;
  MR_Box mercury__solutions__builtin_aggregate_4_p_5_env_0__Acc1_15;
};

struct mercury__solutions__builtin_aggregate_4_p_4_env_0_s {
  MR_Word mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_T_21;
  MR_Word mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_U_22;
  MR_Word mercury__solutions__builtin_aggregate_4_p_4_env_0__GeneratorPred_5;
  MR_Word mercury__solutions__builtin_aggregate_4_p_4_env_0__CollectorPred_6;
  MR_bool mercury__solutions__builtin_aggregate_4_p_4_env_0__succeeded;
  MR_Word mercury__solutions__builtin_aggregate_4_p_4_env_0__HeapPtr_8;
  MR_Word mercury__solutions__builtin_aggregate_4_p_4_env_0__TrailPtr_10;
  MR_Word mercury__solutions__builtin_aggregate_4_p_4_env_0__Mutvar_11;
  jmp_buf mercury__solutions__builtin_aggregate_4_p_4_env_0__commit_0;
  MR_Box mercury__solutions__builtin_aggregate_4_p_4_env_0__Answer0_12;
  MR_Box mercury__solutions__builtin_aggregate_4_p_4_env_0__Answer_13;
  MR_Box mercury__solutions__builtin_aggregate_4_p_4_env_0__Acc0_14;
  MR_Box mercury__solutions__builtin_aggregate_4_p_4_env_0__Acc1_15;
};

struct mercury__solutions__builtin_aggregate_4_p_3_env_0_s {
  MR_Word mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_T_21;
  MR_Word mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_U_22;
  MR_Word mercury__solutions__builtin_aggregate_4_p_3_env_0__GeneratorPred_5;
  MR_Word mercury__solutions__builtin_aggregate_4_p_3_env_0__CollectorPred_6;
  MR_bool mercury__solutions__builtin_aggregate_4_p_3_env_0__succeeded;
  MR_Word mercury__solutions__builtin_aggregate_4_p_3_env_0__HeapPtr_8;
  MR_Word mercury__solutions__builtin_aggregate_4_p_3_env_0__TrailPtr_10;
  MR_Word mercury__solutions__builtin_aggregate_4_p_3_env_0__Mutvar_11;
  jmp_buf mercury__solutions__builtin_aggregate_4_p_3_env_0__commit_0;
  MR_Box mercury__solutions__builtin_aggregate_4_p_3_env_0__Answer0_12;
  MR_Box mercury__solutions__builtin_aggregate_4_p_3_env_0__Answer_13;
  MR_Box mercury__solutions__builtin_aggregate_4_p_3_env_0__Acc0_14;
  MR_Box mercury__solutions__builtin_aggregate_4_p_3_env_0__Acc1_15;
};

struct mercury__solutions__builtin_aggregate_4_p_1_env_0_s {
  MR_Word mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_T_21;
  MR_Word mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_U_22;
  MR_Word mercury__solutions__builtin_aggregate_4_p_1_env_0__GeneratorPred_5;
  MR_Word mercury__solutions__builtin_aggregate_4_p_1_env_0__CollectorPred_6;
  MR_bool mercury__solutions__builtin_aggregate_4_p_1_env_0__succeeded;
  MR_Word mercury__solutions__builtin_aggregate_4_p_1_env_0__HeapPtr_8;
  MR_Word mercury__solutions__builtin_aggregate_4_p_1_env_0__TrailPtr_10;
  MR_Word mercury__solutions__builtin_aggregate_4_p_1_env_0__Mutvar_11;
  jmp_buf mercury__solutions__builtin_aggregate_4_p_1_env_0__commit_0;
  MR_Box mercury__solutions__builtin_aggregate_4_p_1_env_0__Answer0_12;
  MR_Box mercury__solutions__builtin_aggregate_4_p_1_env_0__Answer_13;
  MR_Box mercury__solutions__builtin_aggregate_4_p_1_env_0__Acc0_14;
  MR_Box mercury__solutions__builtin_aggregate_4_p_1_env_0__Acc1_15;
};

struct mercury__solutions__builtin_aggregate_4_p_2_env_0_s {
  MR_Word mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_T_21;
  MR_Word mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_U_22;
  MR_Word mercury__solutions__builtin_aggregate_4_p_2_env_0__GeneratorPred_5;
  MR_Word mercury__solutions__builtin_aggregate_4_p_2_env_0__CollectorPred_6;
  MR_bool mercury__solutions__builtin_aggregate_4_p_2_env_0__succeeded;
  MR_Word mercury__solutions__builtin_aggregate_4_p_2_env_0__HeapPtr_8;
  MR_Word mercury__solutions__builtin_aggregate_4_p_2_env_0__TrailPtr_10;
  MR_Word mercury__solutions__builtin_aggregate_4_p_2_env_0__Mutvar_11;
  jmp_buf mercury__solutions__builtin_aggregate_4_p_2_env_0__commit_0;
  MR_Box mercury__solutions__builtin_aggregate_4_p_2_env_0__Answer0_12;
  MR_Box mercury__solutions__builtin_aggregate_4_p_2_env_0__Answer_13;
  MR_Box mercury__solutions__builtin_aggregate_4_p_2_env_0__Acc0_14;
  MR_Box mercury__solutions__builtin_aggregate_4_p_2_env_0__Acc1_15;
};

struct mercury__solutions__builtin_aggregate_4_p_0_env_0_s {
  MR_Word mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_T_21;
  MR_Word mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_U_22;
  MR_Word mercury__solutions__builtin_aggregate_4_p_0_env_0__GeneratorPred_5;
  MR_Word mercury__solutions__builtin_aggregate_4_p_0_env_0__CollectorPred_6;
  MR_bool mercury__solutions__builtin_aggregate_4_p_0_env_0__succeeded;
  MR_Word mercury__solutions__builtin_aggregate_4_p_0_env_0__HeapPtr_8;
  MR_Word mercury__solutions__builtin_aggregate_4_p_0_env_0__TrailPtr_10;
  MR_Word mercury__solutions__builtin_aggregate_4_p_0_env_0__Mutvar_11;
  jmp_buf mercury__solutions__builtin_aggregate_4_p_0_env_0__commit_0;
  MR_Box mercury__solutions__builtin_aggregate_4_p_0_env_0__Answer0_12;
  MR_Box mercury__solutions__builtin_aggregate_4_p_0_env_0__Answer_13;
  MR_Box mercury__solutions__builtin_aggregate_4_p_0_env_0__Acc0_14;
  MR_Box mercury__solutions__builtin_aggregate_4_p_0_env_0__Acc1_15;
};

struct mercury__solutions__builtin_solutions_2_p_1_env_0_s {
  MR_Word mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_for_T_8;
  MR_Word mercury__solutions__builtin_solutions_2_p_1_env_0__Generator_3;
  MR_bool mercury__solutions__builtin_solutions_2_p_1_env_0__succeeded;
  MR_Word mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_13_13;
  MR_Word mercury__solutions__builtin_solutions_2_p_1_env_0__HeapPtr_19;
  MR_Word mercury__solutions__builtin_solutions_2_p_1_env_0__TrailPtr_21;
  MR_Word mercury__solutions__builtin_solutions_2_p_1_env_0__Mutvar_22;
  jmp_buf mercury__solutions__builtin_solutions_2_p_1_env_0__commit_0;
  MR_Box mercury__solutions__builtin_solutions_2_p_1_env_0__Answer0_23;
  MR_Box mercury__solutions__builtin_solutions_2_p_1_env_0__Answer_24;
  MR_Word mercury__solutions__builtin_solutions_2_p_1_env_0__Acc0_25;
  MR_Word mercury__solutions__builtin_solutions_2_p_1_env_0__Acc1_26;
};

struct mercury__solutions__builtin_solutions_2_p_0_env_0_s {
  MR_Word mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_for_T_8;
  MR_Word mercury__solutions__builtin_solutions_2_p_0_env_0__Generator_3;
  MR_bool mercury__solutions__builtin_solutions_2_p_0_env_0__succeeded;
  MR_Word mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_13_13;
  MR_Word mercury__solutions__builtin_solutions_2_p_0_env_0__HeapPtr_19;
  MR_Word mercury__solutions__builtin_solutions_2_p_0_env_0__TrailPtr_21;
  MR_Word mercury__solutions__builtin_solutions_2_p_0_env_0__Mutvar_22;
  jmp_buf mercury__solutions__builtin_solutions_2_p_0_env_0__commit_0;
  MR_Box mercury__solutions__builtin_solutions_2_p_0_env_0__Answer0_23;
  MR_Box mercury__solutions__builtin_solutions_2_p_0_env_0__Answer_24;
  MR_Word mercury__solutions__builtin_solutions_2_p_0_env_0__Acc0_25;
  MR_Word mercury__solutions__builtin_solutions_2_p_0_env_0__Acc1_26;
};


static const MR_Integer mercury__solutions__solutions__functor_number_map_trail_ptr_0[1];

static const MR_NotagFunctorDesc mercury__solutions__solutions__notag_functor_desc_trail_ptr_0;

static void MR_CALL 
mercury__solutions__end_all_soln_neg_context_no_more_0_p_0(void);

static void MR_CALL 
mercury__solutions__end_all_soln_neg_context_more_0_p_0(void);

static void MR_CALL 
mercury__solutions__start_all_soln_neg_context_0_p_0(void);

static void MR_CALL 
mercury__solutions__reset_solutions_heap_1_p_0(
  MR_Word SolutionsHeapPtr_1);

static void MR_CALL 
mercury__solutions__partial_deep_copy_3_p_2(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3);

static void MR_CALL 
mercury__solutions__partial_deep_copy_3_p_1(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3);

static void MR_CALL 
mercury__solutions__partial_deep_copy_3_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3);

static void MR_CALL 
mercury__solutions__swap_heap_and_solutions_heap_0_p_0(void);

static void MR_CALL 
mercury__solutions__discard_trail_ticket_0_p_0(void);

static void MR_CALL 
mercury__solutions__check_for_floundering_1_p_0(
  MR_Word TrailPtr_1);

static void MR_CALL 
mercury__solutions__get_registers_3_p_0(
  MR_Word * HeapPtr_1,
  MR_Word * SolutionsHeapPtr_2,
  MR_Word * TrailPtr_3);

static void MR_CALL 
mercury__solutions__do_while_4_p_5_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__do_while_4_p_5_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__do_while_4_p_5_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__do_while_4_p_4_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__do_while_4_p_4_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__do_while_4_p_4_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__do_while_4_p_3_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__do_while_4_p_3_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__do_while_4_p_3_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__do_while_4_p_2_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__do_while_4_p_2_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__do_while_4_p_2_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__do_while_4_p_1_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__do_while_4_p_1_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__do_while_4_p_1_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__do_while_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__do_while_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__do_while_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_7_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_7_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_7_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_6_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_6_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_6_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_5_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_5_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_5_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_4_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_4_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_4_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_3_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_3_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_3_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_2_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_2_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_2_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_1_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_1_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_1_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_9_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_9_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_9_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_8_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_8_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_8_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_7_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_7_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_7_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_6_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_6_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_6_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_5_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_5_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_5_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_4_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_4_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_4_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_3_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_3_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_3_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_1_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_1_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_1_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_2_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_2_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_2_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word Var_18,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word Var_18,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_1_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_1_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_1_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_0_3(
  void * env_ptr_arg);

static MR_bool MR_CALL 
mercury__solutions____Unify____heap_ptr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__solutions____Compare____heap_ptr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__solutions____Unify____trail_ptr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__solutions____Compare____trail_ptr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
#include "solutions.mh"
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



const MR_TypeCtorInfo_Struct mercury__solutions__solutions__type_ctor_info_heap_ptr_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__solutions____Unify____heap_ptr_0_0_10001)),
  ((MR_Box) (mercury__solutions____Compare____heap_ptr_0_0_10001)),
  (MR_String) "solutions",
  (MR_String) "heap_ptr",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__private_builtin__private_builtin__type_ctor_info_heap_pointer_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_Integer mercury__solutions__solutions__functor_number_map_trail_ptr_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__solutions__solutions__notag_functor_desc_trail_ptr_0 = {
  (MR_String) "trail_ptr",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__solutions__solutions__type_ctor_info_trail_ptr_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__solutions____Unify____trail_ptr_0_0_10001)),
  ((MR_Box) (mercury__solutions____Compare____trail_ptr_0_0_10001)),
  (MR_String) "solutions",
  (MR_String) "trail_ptr",
  {     &mercury__solutions__solutions__notag_functor_desc_trail_ptr_0 },
  {     &mercury__solutions__solutions__notag_functor_desc_trail_ptr_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__solutions__solutions__functor_number_map_trail_ptr_0,

};

void MR_CALL 
mercury__solutions____Compare____trail_ptr_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

      mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
mercury__solutions____Unify____trail_ptr_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      succeeded = mercury__builtin____Unify____c_pointer_0_0(ArgX1_3, ArgY1_4);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__solutions____Compare____heap_ptr_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin____Compare____heap_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__solutions____Unify____heap_ptr_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin____Unify____heap_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
mercury__solutions__end_all_soln_neg_context_no_more_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__solutions__end_all_soln_neg_context_no_more_0_p_0


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
mercury__solutions__end_all_soln_neg_context_more_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__solutions__end_all_soln_neg_context_more_0_p_0


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
mercury__solutions__start_all_soln_neg_context_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__solutions__start_all_soln_neg_context_0_p_0


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
mercury__solutions__reset_solutions_heap_1_p_0(
  MR_Word SolutionsHeapPtr_1)
{
  {
{
#define MR_PROC_LABEL mercury__solutions__reset_solutions_heap_1_p_0

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_1 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
mercury__solutions__partial_deep_copy_3_p_2(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
{
#define MR_PROC_LABEL mercury__solutions__partial_deep_copy_3_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = TypeInfo_for_T_4 ;
	SolutionsHeapPtr = HeadVar__1_1 ;
	OldVal = (MR_Word) HeadVar__2_2 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 *HeadVar__3_3  = (MR_Box) NewVal;
}
  }
}

static void MR_CALL 
mercury__solutions__partial_deep_copy_3_p_1(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
{
#define MR_PROC_LABEL mercury__solutions__partial_deep_copy_3_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = TypeInfo_for_T_4 ;
	SolutionsHeapPtr = HeadVar__1_1 ;
	OldVal = (MR_Word) HeadVar__2_2 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 *HeadVar__3_3  = (MR_Box) NewVal;
}
  }
}

static void MR_CALL 
mercury__solutions__partial_deep_copy_3_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
{
#define MR_PROC_LABEL mercury__solutions__partial_deep_copy_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = TypeInfo_for_T_4 ;
	SolutionsHeapPtr = HeadVar__1_1 ;
	OldVal = (MR_Word) HeadVar__2_2 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 *HeadVar__3_3  = (MR_Box) NewVal;
}
  }
}

static void MR_CALL 
mercury__solutions__swap_heap_and_solutions_heap_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__solutions__swap_heap_and_solutions_heap_0_p_0


		{
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

		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
mercury__solutions__discard_trail_ticket_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__solutions__discard_trail_ticket_0_p_0


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
mercury__solutions__check_for_floundering_1_p_0(
  MR_Word TrailPtr_1)
{
  {
{
#define MR_PROC_LABEL mercury__solutions__check_for_floundering_1_p_0

	MR_Word TrailPtr;

	TrailPtr = TrailPtr_1 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
mercury__solutions__get_registers_3_p_0(
  MR_Word * HeapPtr_1,
  MR_Word * SolutionsHeapPtr_2,
  MR_Word * TrailPtr_3)
{
  {
{
#define MR_PROC_LABEL mercury__solutions__get_registers_3_p_0

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 *HeapPtr_1  = HeapPtr;
	 *SolutionsHeapPtr_2  = SolutionsHeapPtr;
	 *TrailPtr_3  = TrailPtr;
}
  }
}

void MR_CALL 
mercury__solutions__assert_num_solutions_3_p_1(
  MR_Word TypeInfo_for_T_13,
  MR_Word _Pred_1,
  MR_Word HeadVar__2_2,
  MR_Word * List_3)
{
  mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_110_117_109_95_115_111_108_117_116_105_111_110_115_95_95_91_50_93_95_49_3_p_1(TypeInfo_for_T_13, HeadVar__2_2, List_3);
}

void MR_CALL 
mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_110_117_109_95_115_111_108_117_116_105_111_110_115_95_95_91_50_93_95_49_3_p_1(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__2_2,
  MR_Word * List_3)
{
  *List_3 = HeadVar__2_2;
}

void MR_CALL 
mercury__solutions__assert_num_solutions_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word _Pred_1,
  MR_Word HeadVar__2_2,
  MR_Word * List_3)
{
  mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_110_117_109_95_115_111_108_117_116_105_111_110_115_95_95_91_50_93_95_48_3_p_0(TypeInfo_for_T_13, HeadVar__2_2, List_3);
}

void MR_CALL 
mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_110_117_109_95_115_111_108_117_116_105_111_110_115_95_95_91_50_93_95_48_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__2_2,
  MR_Word * List_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140solutions.assert_num_solutions\'/3", (MR_String) "no solutions");
      return;
    }
  else
    *List_3 = HeadVar__2_2;
}

static void MR_CALL 
mercury__solutions__do_while_4_p_5_1(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__do_while_4_p_5_env_0_s * env_ptr = (struct mercury__solutions__do_while_4_p_5_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__solutions__do_while_4_p_5_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__solutions__do_while_4_p_5_2(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__do_while_4_p_5_env_0_s * env_ptr = (struct mercury__solutions__do_while_4_p_5_env_0_s *) (env_ptr_arg);

    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Box conv2_More_15;

{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5

	MR_Word TrailPtr;

	TrailPtr = (env_ptr)->mercury__solutions__do_while_4_p_5_env_0__TrailPtr_10 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5


		{
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

		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env_ptr)->mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T_22 ;
	SolutionsHeapPtr = (env_ptr)->mercury__solutions__do_while_4_p_5_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Answer0_12 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 (env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Answer_13  = (MR_Box) NewVal;
}
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T2_23, (env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Mutvar_11, &(env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Acc0_14);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__do_while_4_p_5_env_0__CollectorPred_6, (MR_Integer) 1))));
      func_1(((MR_Box) ((env_ptr)->mercury__solutions__do_while_4_p_5_env_0__CollectorPred_6)), (env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Answer_13, &conv2_More_15, (env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Acc0_14, &(env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Acc1_16);
      (env_ptr)->mercury__solutions__do_while_4_p_5_env_0__More_15 = ((MR_Word) (conv2_More_15));
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T2_23, (env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Mutvar_11, (env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Acc1_16);
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5


		{
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

		;}
#undef MR_PROC_LABEL
}
      (env_ptr)->mercury__solutions__do_while_4_p_5_env_0__succeeded = ((env_ptr)->mercury__solutions__do_while_4_p_5_env_0__More_15 == (MR_Integer) 0);
      if ((env_ptr)->mercury__solutions__do_while_4_p_5_env_0__succeeded)
      {
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__solutions__do_while_4_p_5_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
mercury__solutions__do_while_4_p_5_3(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__do_while_4_p_5_env_0_s * env_ptr = (struct mercury__solutions__do_while_4_p_5_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__solutions__do_while_4_p_5_env_0__commit_0) == 0)
      {
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__do_while_4_p_5_env_0__GeneratorPred_5, (MR_Integer) 1))));

          func_0(((MR_Box) ((env_ptr)->mercury__solutions__do_while_4_p_5_env_0__GeneratorPred_5)), &(env_ptr)->mercury__solutions__do_while_4_p_5_env_0__Answer0_12, mercury__solutions__do_while_4_p_5_2, env_ptr);
        }
        (env_ptr)->mercury__solutions__do_while_4_p_5_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__solutions__do_while_4_p_5_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__solutions__do_while_4_p_5(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word GeneratorPred_5,
  MR_Word CollectorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_17,
  MR_Box * STATE_VARIABLE_Acc_18)
{
  {
    struct mercury__solutions__do_while_4_p_5_env_0_s env;

    (env).mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T_22 = TypeInfo_for_T_22;
    (env).mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T2_23 = TypeInfo_for_T2_23;
    (env).mercury__solutions__do_while_4_p_5_env_0__GeneratorPred_5 = GeneratorPred_5;
    (env).mercury__solutions__do_while_4_p_5_env_0__CollectorPred_6 = CollectorPred_6;
    {
      MR_Word SolutionsHeapPtr_9;
      MR_Box STATE_VARIABLE_Acc_19_19;
      MR_Box STATE_VARIABLE_Acc_20_20;
      MR_Word TypeInfo_for_T2_24;

{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 (env).mercury__solutions__do_while_4_p_5_env_0__HeapPtr_8  = HeapPtr;
	 SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (env).mercury__solutions__do_while_4_p_5_env_0__TrailPtr_10  = TrailPtr;
}
      mercury__mutvar__new_mutvar_2_p_1((env).mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T2_23, STATE_VARIABLE_Acc_0_17, &(env).mercury__solutions__do_while_4_p_5_env_0__Mutvar_11);
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__solutions__do_while_4_p_5_3(&env);
      if (!((env).mercury__solutions__do_while_4_p_5_env_0__succeeded))
      {
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
      }
      mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T2_23, (env).mercury__solutions__do_while_4_p_5_env_0__Mutvar_11, &STATE_VARIABLE_Acc_19_19);
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__do_while_4_p_5_env_0__TypeInfo_for_T2_23 ;
	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc_19_19 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc_20_20  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_5

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc_20_20 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc_18  = (MR_Box) Y;
}
    }
  }
}

static void MR_CALL 
mercury__solutions__do_while_4_p_4_1(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__do_while_4_p_4_env_0_s * env_ptr = (struct mercury__solutions__do_while_4_p_4_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__solutions__do_while_4_p_4_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__solutions__do_while_4_p_4_2(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__do_while_4_p_4_env_0_s * env_ptr = (struct mercury__solutions__do_while_4_p_4_env_0_s *) (env_ptr_arg);

    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Box conv2_More_15;

{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4

	MR_Word TrailPtr;

	TrailPtr = (env_ptr)->mercury__solutions__do_while_4_p_4_env_0__TrailPtr_10 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4


		{
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

		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env_ptr)->mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T_22 ;
	SolutionsHeapPtr = (env_ptr)->mercury__solutions__do_while_4_p_4_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Answer0_12 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 (env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Answer_13  = (MR_Box) NewVal;
}
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T2_23, (env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Mutvar_11, &(env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Acc0_14);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__do_while_4_p_4_env_0__CollectorPred_6, (MR_Integer) 1))));
      func_1(((MR_Box) ((env_ptr)->mercury__solutions__do_while_4_p_4_env_0__CollectorPred_6)), (env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Answer_13, &conv2_More_15, (env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Acc0_14, &(env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Acc1_16);
      (env_ptr)->mercury__solutions__do_while_4_p_4_env_0__More_15 = ((MR_Word) (conv2_More_15));
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T2_23, (env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Mutvar_11, (env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Acc1_16);
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4


		{
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

		;}
#undef MR_PROC_LABEL
}
      (env_ptr)->mercury__solutions__do_while_4_p_4_env_0__succeeded = ((env_ptr)->mercury__solutions__do_while_4_p_4_env_0__More_15 == (MR_Integer) 0);
      if ((env_ptr)->mercury__solutions__do_while_4_p_4_env_0__succeeded)
      {
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__solutions__do_while_4_p_4_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
mercury__solutions__do_while_4_p_4_3(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__do_while_4_p_4_env_0_s * env_ptr = (struct mercury__solutions__do_while_4_p_4_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__solutions__do_while_4_p_4_env_0__commit_0) == 0)
      {
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__do_while_4_p_4_env_0__GeneratorPred_5, (MR_Integer) 1))));

          func_0(((MR_Box) ((env_ptr)->mercury__solutions__do_while_4_p_4_env_0__GeneratorPred_5)), &(env_ptr)->mercury__solutions__do_while_4_p_4_env_0__Answer0_12, mercury__solutions__do_while_4_p_4_2, env_ptr);
        }
        (env_ptr)->mercury__solutions__do_while_4_p_4_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__solutions__do_while_4_p_4_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__solutions__do_while_4_p_4(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word GeneratorPred_5,
  MR_Word CollectorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_17,
  MR_Box * STATE_VARIABLE_Acc_18)
{
  {
    struct mercury__solutions__do_while_4_p_4_env_0_s env;

    (env).mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T_22 = TypeInfo_for_T_22;
    (env).mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T2_23 = TypeInfo_for_T2_23;
    (env).mercury__solutions__do_while_4_p_4_env_0__GeneratorPred_5 = GeneratorPred_5;
    (env).mercury__solutions__do_while_4_p_4_env_0__CollectorPred_6 = CollectorPred_6;
    {
      MR_Word SolutionsHeapPtr_9;
      MR_Box STATE_VARIABLE_Acc_19_19;
      MR_Box STATE_VARIABLE_Acc_20_20;
      MR_Word TypeInfo_for_T2_24;

{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 (env).mercury__solutions__do_while_4_p_4_env_0__HeapPtr_8  = HeapPtr;
	 SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (env).mercury__solutions__do_while_4_p_4_env_0__TrailPtr_10  = TrailPtr;
}
      mercury__mutvar__new_mutvar_2_p_1((env).mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T2_23, STATE_VARIABLE_Acc_0_17, &(env).mercury__solutions__do_while_4_p_4_env_0__Mutvar_11);
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__solutions__do_while_4_p_4_3(&env);
      if (!((env).mercury__solutions__do_while_4_p_4_env_0__succeeded))
      {
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
      }
      mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T2_23, (env).mercury__solutions__do_while_4_p_4_env_0__Mutvar_11, &STATE_VARIABLE_Acc_19_19);
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__do_while_4_p_4_env_0__TypeInfo_for_T2_23 ;
	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc_19_19 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc_20_20  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_4

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc_20_20 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc_18  = (MR_Box) Y;
}
    }
  }
}

static void MR_CALL 
mercury__solutions__do_while_4_p_3_1(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__do_while_4_p_3_env_0_s * env_ptr = (struct mercury__solutions__do_while_4_p_3_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__solutions__do_while_4_p_3_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__solutions__do_while_4_p_3_2(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__do_while_4_p_3_env_0_s * env_ptr = (struct mercury__solutions__do_while_4_p_3_env_0_s *) (env_ptr_arg);

    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Box conv2_More_15;

{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3

	MR_Word TrailPtr;

	TrailPtr = (env_ptr)->mercury__solutions__do_while_4_p_3_env_0__TrailPtr_10 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3


		{
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

		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env_ptr)->mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T_22 ;
	SolutionsHeapPtr = (env_ptr)->mercury__solutions__do_while_4_p_3_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Answer0_12 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 (env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Answer_13  = (MR_Box) NewVal;
}
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T2_23, (env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Mutvar_11, &(env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Acc0_14);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__do_while_4_p_3_env_0__CollectorPred_6, (MR_Integer) 1))));
      func_1(((MR_Box) ((env_ptr)->mercury__solutions__do_while_4_p_3_env_0__CollectorPred_6)), (env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Answer_13, &conv2_More_15, (env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Acc0_14, &(env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Acc1_16);
      (env_ptr)->mercury__solutions__do_while_4_p_3_env_0__More_15 = ((MR_Word) (conv2_More_15));
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T2_23, (env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Mutvar_11, (env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Acc1_16);
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3


		{
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

		;}
#undef MR_PROC_LABEL
}
      (env_ptr)->mercury__solutions__do_while_4_p_3_env_0__succeeded = ((env_ptr)->mercury__solutions__do_while_4_p_3_env_0__More_15 == (MR_Integer) 0);
      if ((env_ptr)->mercury__solutions__do_while_4_p_3_env_0__succeeded)
      {
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__solutions__do_while_4_p_3_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
mercury__solutions__do_while_4_p_3_3(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__do_while_4_p_3_env_0_s * env_ptr = (struct mercury__solutions__do_while_4_p_3_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__solutions__do_while_4_p_3_env_0__commit_0) == 0)
      {
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__do_while_4_p_3_env_0__GeneratorPred_5, (MR_Integer) 1))));

          func_0(((MR_Box) ((env_ptr)->mercury__solutions__do_while_4_p_3_env_0__GeneratorPred_5)), &(env_ptr)->mercury__solutions__do_while_4_p_3_env_0__Answer0_12, mercury__solutions__do_while_4_p_3_2, env_ptr);
        }
        (env_ptr)->mercury__solutions__do_while_4_p_3_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__solutions__do_while_4_p_3_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__solutions__do_while_4_p_3(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word GeneratorPred_5,
  MR_Word CollectorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_17,
  MR_Box * STATE_VARIABLE_Acc_18)
{
  {
    struct mercury__solutions__do_while_4_p_3_env_0_s env;

    (env).mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T_22 = TypeInfo_for_T_22;
    (env).mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T2_23 = TypeInfo_for_T2_23;
    (env).mercury__solutions__do_while_4_p_3_env_0__GeneratorPred_5 = GeneratorPred_5;
    (env).mercury__solutions__do_while_4_p_3_env_0__CollectorPred_6 = CollectorPred_6;
    {
      MR_Word SolutionsHeapPtr_9;
      MR_Box STATE_VARIABLE_Acc_19_19;
      MR_Box STATE_VARIABLE_Acc_20_20;
      MR_Word TypeInfo_for_T2_24;

{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 (env).mercury__solutions__do_while_4_p_3_env_0__HeapPtr_8  = HeapPtr;
	 SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (env).mercury__solutions__do_while_4_p_3_env_0__TrailPtr_10  = TrailPtr;
}
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T2_23, STATE_VARIABLE_Acc_0_17, &(env).mercury__solutions__do_while_4_p_3_env_0__Mutvar_11);
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__solutions__do_while_4_p_3_3(&env);
      if (!((env).mercury__solutions__do_while_4_p_3_env_0__succeeded))
      {
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
      }
      mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T2_23, (env).mercury__solutions__do_while_4_p_3_env_0__Mutvar_11, &STATE_VARIABLE_Acc_19_19);
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__do_while_4_p_3_env_0__TypeInfo_for_T2_23 ;
	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc_19_19 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc_20_20  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_3

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc_20_20 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc_18  = (MR_Box) Y;
}
    }
  }
}

static void MR_CALL 
mercury__solutions__do_while_4_p_2_1(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__do_while_4_p_2_env_0_s * env_ptr = (struct mercury__solutions__do_while_4_p_2_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__solutions__do_while_4_p_2_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__solutions__do_while_4_p_2_2(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__do_while_4_p_2_env_0_s * env_ptr = (struct mercury__solutions__do_while_4_p_2_env_0_s *) (env_ptr_arg);

    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Box conv2_More_15;

{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2

	MR_Word TrailPtr;

	TrailPtr = (env_ptr)->mercury__solutions__do_while_4_p_2_env_0__TrailPtr_10 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2


		{
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

		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env_ptr)->mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T_22 ;
	SolutionsHeapPtr = (env_ptr)->mercury__solutions__do_while_4_p_2_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Answer0_12 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 (env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Answer_13  = (MR_Box) NewVal;
}
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T2_23, (env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Mutvar_11, &(env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Acc0_14);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__do_while_4_p_2_env_0__CollectorPred_6, (MR_Integer) 1))));
      func_1(((MR_Box) ((env_ptr)->mercury__solutions__do_while_4_p_2_env_0__CollectorPred_6)), (env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Answer_13, &conv2_More_15, (env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Acc0_14, &(env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Acc1_16);
      (env_ptr)->mercury__solutions__do_while_4_p_2_env_0__More_15 = ((MR_Word) (conv2_More_15));
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T2_23, (env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Mutvar_11, (env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Acc1_16);
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2


		{
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

		;}
#undef MR_PROC_LABEL
}
      (env_ptr)->mercury__solutions__do_while_4_p_2_env_0__succeeded = ((env_ptr)->mercury__solutions__do_while_4_p_2_env_0__More_15 == (MR_Integer) 0);
      if ((env_ptr)->mercury__solutions__do_while_4_p_2_env_0__succeeded)
      {
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__solutions__do_while_4_p_2_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
mercury__solutions__do_while_4_p_2_3(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__do_while_4_p_2_env_0_s * env_ptr = (struct mercury__solutions__do_while_4_p_2_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__solutions__do_while_4_p_2_env_0__commit_0) == 0)
      {
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__do_while_4_p_2_env_0__GeneratorPred_5, (MR_Integer) 1))));

          func_0(((MR_Box) ((env_ptr)->mercury__solutions__do_while_4_p_2_env_0__GeneratorPred_5)), &(env_ptr)->mercury__solutions__do_while_4_p_2_env_0__Answer0_12, mercury__solutions__do_while_4_p_2_2, env_ptr);
        }
        (env_ptr)->mercury__solutions__do_while_4_p_2_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__solutions__do_while_4_p_2_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__solutions__do_while_4_p_2(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word GeneratorPred_5,
  MR_Word CollectorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_17,
  MR_Box * STATE_VARIABLE_Acc_18)
{
  {
    struct mercury__solutions__do_while_4_p_2_env_0_s env;

    (env).mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T_22 = TypeInfo_for_T_22;
    (env).mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T2_23 = TypeInfo_for_T2_23;
    (env).mercury__solutions__do_while_4_p_2_env_0__GeneratorPred_5 = GeneratorPred_5;
    (env).mercury__solutions__do_while_4_p_2_env_0__CollectorPred_6 = CollectorPred_6;
    {
      MR_Word SolutionsHeapPtr_9;
      MR_Box STATE_VARIABLE_Acc_19_19;
      MR_Box STATE_VARIABLE_Acc_20_20;
      MR_Word TypeInfo_for_T2_24;

{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 (env).mercury__solutions__do_while_4_p_2_env_0__HeapPtr_8  = HeapPtr;
	 SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (env).mercury__solutions__do_while_4_p_2_env_0__TrailPtr_10  = TrailPtr;
}
      mercury__mutvar__new_mutvar_2_p_1((env).mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T2_23, STATE_VARIABLE_Acc_0_17, &(env).mercury__solutions__do_while_4_p_2_env_0__Mutvar_11);
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__solutions__do_while_4_p_2_3(&env);
      if (!((env).mercury__solutions__do_while_4_p_2_env_0__succeeded))
      {
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
      }
      mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T2_23, (env).mercury__solutions__do_while_4_p_2_env_0__Mutvar_11, &STATE_VARIABLE_Acc_19_19);
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__do_while_4_p_2_env_0__TypeInfo_for_T2_23 ;
	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc_19_19 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc_20_20  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_2

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc_20_20 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc_18  = (MR_Box) Y;
}
    }
  }
}

static void MR_CALL 
mercury__solutions__do_while_4_p_1_1(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__do_while_4_p_1_env_0_s * env_ptr = (struct mercury__solutions__do_while_4_p_1_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__solutions__do_while_4_p_1_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__solutions__do_while_4_p_1_2(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__do_while_4_p_1_env_0_s * env_ptr = (struct mercury__solutions__do_while_4_p_1_env_0_s *) (env_ptr_arg);

    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Box conv2_More_15;

{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1

	MR_Word TrailPtr;

	TrailPtr = (env_ptr)->mercury__solutions__do_while_4_p_1_env_0__TrailPtr_10 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1


		{
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

		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env_ptr)->mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T_22 ;
	SolutionsHeapPtr = (env_ptr)->mercury__solutions__do_while_4_p_1_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Answer0_12 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 (env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Answer_13  = (MR_Box) NewVal;
}
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T2_23, (env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Mutvar_11, &(env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Acc0_14);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__do_while_4_p_1_env_0__CollectorPred_6, (MR_Integer) 1))));
      func_1(((MR_Box) ((env_ptr)->mercury__solutions__do_while_4_p_1_env_0__CollectorPred_6)), (env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Answer_13, &conv2_More_15, (env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Acc0_14, &(env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Acc1_16);
      (env_ptr)->mercury__solutions__do_while_4_p_1_env_0__More_15 = ((MR_Word) (conv2_More_15));
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T2_23, (env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Mutvar_11, (env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Acc1_16);
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1


		{
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

		;}
#undef MR_PROC_LABEL
}
      (env_ptr)->mercury__solutions__do_while_4_p_1_env_0__succeeded = ((env_ptr)->mercury__solutions__do_while_4_p_1_env_0__More_15 == (MR_Integer) 0);
      if ((env_ptr)->mercury__solutions__do_while_4_p_1_env_0__succeeded)
      {
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__solutions__do_while_4_p_1_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
mercury__solutions__do_while_4_p_1_3(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__do_while_4_p_1_env_0_s * env_ptr = (struct mercury__solutions__do_while_4_p_1_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__solutions__do_while_4_p_1_env_0__commit_0) == 0)
      {
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__do_while_4_p_1_env_0__GeneratorPred_5, (MR_Integer) 1))));

          func_0(((MR_Box) ((env_ptr)->mercury__solutions__do_while_4_p_1_env_0__GeneratorPred_5)), &(env_ptr)->mercury__solutions__do_while_4_p_1_env_0__Answer0_12, mercury__solutions__do_while_4_p_1_2, env_ptr);
        }
        (env_ptr)->mercury__solutions__do_while_4_p_1_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__solutions__do_while_4_p_1_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__solutions__do_while_4_p_1(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word GeneratorPred_5,
  MR_Word CollectorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_17,
  MR_Box * STATE_VARIABLE_Acc_18)
{
  {
    struct mercury__solutions__do_while_4_p_1_env_0_s env;

    (env).mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T_22 = TypeInfo_for_T_22;
    (env).mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T2_23 = TypeInfo_for_T2_23;
    (env).mercury__solutions__do_while_4_p_1_env_0__GeneratorPred_5 = GeneratorPred_5;
    (env).mercury__solutions__do_while_4_p_1_env_0__CollectorPred_6 = CollectorPred_6;
    {
      MR_Word SolutionsHeapPtr_9;
      MR_Box STATE_VARIABLE_Acc_19_19;
      MR_Box STATE_VARIABLE_Acc_20_20;
      MR_Word TypeInfo_for_T2_24;

{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 (env).mercury__solutions__do_while_4_p_1_env_0__HeapPtr_8  = HeapPtr;
	 SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (env).mercury__solutions__do_while_4_p_1_env_0__TrailPtr_10  = TrailPtr;
}
      mercury__mutvar__new_mutvar_2_p_1((env).mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T2_23, STATE_VARIABLE_Acc_0_17, &(env).mercury__solutions__do_while_4_p_1_env_0__Mutvar_11);
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__solutions__do_while_4_p_1_3(&env);
      if (!((env).mercury__solutions__do_while_4_p_1_env_0__succeeded))
      {
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
      }
      mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T2_23, (env).mercury__solutions__do_while_4_p_1_env_0__Mutvar_11, &STATE_VARIABLE_Acc_19_19);
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__do_while_4_p_1_env_0__TypeInfo_for_T2_23 ;
	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc_19_19 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc_20_20  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_1

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc_20_20 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc_18  = (MR_Box) Y;
}
    }
  }
}

static void MR_CALL 
mercury__solutions__do_while_4_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__do_while_4_p_0_env_0_s * env_ptr = (struct mercury__solutions__do_while_4_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__solutions__do_while_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__solutions__do_while_4_p_0_2(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__do_while_4_p_0_env_0_s * env_ptr = (struct mercury__solutions__do_while_4_p_0_env_0_s *) (env_ptr_arg);

    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Box conv2_More_15;

{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0

	MR_Word TrailPtr;

	TrailPtr = (env_ptr)->mercury__solutions__do_while_4_p_0_env_0__TrailPtr_10 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0


		{
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

		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env_ptr)->mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T_22 ;
	SolutionsHeapPtr = (env_ptr)->mercury__solutions__do_while_4_p_0_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Answer0_12 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 (env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Answer_13  = (MR_Box) NewVal;
}
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T2_23, (env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Mutvar_11, &(env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Acc0_14);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__do_while_4_p_0_env_0__CollectorPred_6, (MR_Integer) 1))));
      func_1(((MR_Box) ((env_ptr)->mercury__solutions__do_while_4_p_0_env_0__CollectorPred_6)), (env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Answer_13, &conv2_More_15, (env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Acc0_14, &(env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Acc1_16);
      (env_ptr)->mercury__solutions__do_while_4_p_0_env_0__More_15 = ((MR_Word) (conv2_More_15));
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T2_23, (env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Mutvar_11, (env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Acc1_16);
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0


		{
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

		;}
#undef MR_PROC_LABEL
}
      (env_ptr)->mercury__solutions__do_while_4_p_0_env_0__succeeded = ((env_ptr)->mercury__solutions__do_while_4_p_0_env_0__More_15 == (MR_Integer) 0);
      if ((env_ptr)->mercury__solutions__do_while_4_p_0_env_0__succeeded)
      {
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__solutions__do_while_4_p_0_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
mercury__solutions__do_while_4_p_0_3(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__do_while_4_p_0_env_0_s * env_ptr = (struct mercury__solutions__do_while_4_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__solutions__do_while_4_p_0_env_0__commit_0) == 0)
      {
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__do_while_4_p_0_env_0__GeneratorPred_5, (MR_Integer) 1))));

          func_0(((MR_Box) ((env_ptr)->mercury__solutions__do_while_4_p_0_env_0__GeneratorPred_5)), &(env_ptr)->mercury__solutions__do_while_4_p_0_env_0__Answer0_12, mercury__solutions__do_while_4_p_0_2, env_ptr);
        }
        (env_ptr)->mercury__solutions__do_while_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__solutions__do_while_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__solutions__do_while_4_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word GeneratorPred_5,
  MR_Word CollectorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_17,
  MR_Box * STATE_VARIABLE_Acc_18)
{
  {
    struct mercury__solutions__do_while_4_p_0_env_0_s env;

    (env).mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T_22 = TypeInfo_for_T_22;
    (env).mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T2_23 = TypeInfo_for_T2_23;
    (env).mercury__solutions__do_while_4_p_0_env_0__GeneratorPred_5 = GeneratorPred_5;
    (env).mercury__solutions__do_while_4_p_0_env_0__CollectorPred_6 = CollectorPred_6;
    {
      MR_Word SolutionsHeapPtr_9;
      MR_Box STATE_VARIABLE_Acc_19_19;
      MR_Box STATE_VARIABLE_Acc_20_20;
      MR_Word TypeInfo_for_T2_24;

{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 (env).mercury__solutions__do_while_4_p_0_env_0__HeapPtr_8  = HeapPtr;
	 SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (env).mercury__solutions__do_while_4_p_0_env_0__TrailPtr_10  = TrailPtr;
}
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T2_23, STATE_VARIABLE_Acc_0_17, &(env).mercury__solutions__do_while_4_p_0_env_0__Mutvar_11);
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__solutions__do_while_4_p_0_3(&env);
      if (!((env).mercury__solutions__do_while_4_p_0_env_0__succeeded))
      {
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
      }
      mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T2_23, (env).mercury__solutions__do_while_4_p_0_env_0__Mutvar_11, &STATE_VARIABLE_Acc_19_19);
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__do_while_4_p_0_env_0__TypeInfo_for_T2_23 ;
	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc_19_19 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc_20_20  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__do_while_4_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc_20_20 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc_18  = (MR_Box) Y;
}
    }
  }
}

void MR_CALL 
mercury__solutions__unsorted_aggregate2_6_p_7(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_U_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word Generator_7,
  MR_Word AccumulatorPred_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  mercury__solutions__builtin_aggregate2_6_p_7(TypeInfo_for_T_17, TypeInfo_for_U_18, TypeInfo_for_V_19, Generator_7, AccumulatorPred_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
}

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_7_1(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_7_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_7_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_7_2(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_7_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_7_env_0_s *) (env_ptr_arg);

    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7

	MR_Word TrailPtr;

	TrailPtr = (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__TrailPtr_13 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7


		{
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

		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_T_32 ;
	SolutionsHeapPtr = (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__HeapPtr_11 ;
	OldVal = (MR_Word) (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__Answer0_16 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__Answer_17  = (MR_Box) NewVal;
}
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_U_33, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar1_14, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__SubAccA0_18);
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_V_34, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar2_15, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__SubAccB0_19);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__CollectorPred_8, (MR_Integer) 1))));
      func_1(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__CollectorPred_8)), (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__Answer_17, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__SubAccA0_18, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__SubAccA_20, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__SubAccB0_19, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__SubAccB_21);
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_U_33, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar1_14, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__SubAccA_20);
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_V_34, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar2_15, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__SubAccB_21);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7


		{
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

		;}
#undef MR_PROC_LABEL
}
      (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__succeeded = MR_FALSE;
      if ((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__succeeded)
        mercury__solutions__builtin_aggregate2_6_p_7_1(env_ptr);
    }
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_7_3(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_7_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_7_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__commit_0) == 0)
      {
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__GeneratorPred_7, (MR_Integer) 1))));

          func_0(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__GeneratorPred_7)), &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__Answer0_16, mercury__solutions__builtin_aggregate2_6_p_7_2, env_ptr);
        }
        (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_7_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_7(
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeInfo_for_U_33,
  MR_Word TypeInfo_for_V_34,
  MR_Word GeneratorPred_7,
  MR_Word CollectorPred_8,
  MR_Box STATE_VARIABLE_Acc1_0_22,
  MR_Box * STATE_VARIABLE_Acc1_23,
  MR_Box STATE_VARIABLE_Acc2_0_24,
  MR_Box * STATE_VARIABLE_Acc2_25)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_7_env_0_s env;

    (env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_T_32 = TypeInfo_for_T_32;
    (env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_U_33 = TypeInfo_for_U_33;
    (env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_V_34 = TypeInfo_for_V_34;
    (env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__GeneratorPred_7 = GeneratorPred_7;
    (env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__CollectorPred_8 = CollectorPred_8;
    {
      MR_Word SolutionsHeapPtr_12;
      MR_Box STATE_VARIABLE_Acc1_28_28;
      MR_Box STATE_VARIABLE_Acc2_29_29;
      MR_Word TypeInfo_for_U_35;
      MR_Word TypeInfo_for_V_36;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 (env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__HeapPtr_11  = HeapPtr;
	 SolutionsHeapPtr_12  = SolutionsHeapPtr;
	 (env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TrailPtr_13  = TrailPtr;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_U_33, STATE_VARIABLE_Acc1_0_22, &(env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar1_14);
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_V_34, STATE_VARIABLE_Acc2_0_24, &(env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar2_15);
      mercury__solutions__builtin_aggregate2_6_p_7_3(&env);
      if (!((env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__succeeded))
      {
        MR_Box STATE_VARIABLE_Acc1_26_26;
        MR_Box STATE_VARIABLE_Acc2_27_27;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_U_33, (env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar1_14, &STATE_VARIABLE_Acc1_26_26);
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_V_34, (env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__Mutvar2_15, &STATE_VARIABLE_Acc2_27_27);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_U_33 ;
	SolutionsHeapPtr = SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc1_26_26 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc1_28_28  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_aggregate2_6_p_7_env_0__TypeInfo_for_V_34 ;
	SolutionsHeapPtr = SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc2_27_27 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc2_29_29  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_12 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
      }
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc1_28_28 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc1_23  = (MR_Box) Y;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_7

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc2_29_29 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc2_25  = (MR_Box) Y;
}
    }
  }
}

void MR_CALL 
mercury__solutions__unsorted_aggregate2_6_p_6(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_U_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word Generator_7,
  MR_Word AccumulatorPred_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  mercury__solutions__builtin_aggregate2_6_p_6(TypeInfo_for_T_17, TypeInfo_for_U_18, TypeInfo_for_V_19, Generator_7, AccumulatorPred_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
}

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_6_1(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_6_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_6_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_6_2(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_6_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_6_env_0_s *) (env_ptr_arg);

    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6

	MR_Word TrailPtr;

	TrailPtr = (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__TrailPtr_13 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6


		{
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

		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_T_32 ;
	SolutionsHeapPtr = (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__HeapPtr_11 ;
	OldVal = (MR_Word) (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__Answer0_16 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__Answer_17  = (MR_Box) NewVal;
}
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_U_33, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar1_14, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__SubAccA0_18);
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_V_34, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar2_15, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__SubAccB0_19);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__CollectorPred_8, (MR_Integer) 1))));
      func_1(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__CollectorPred_8)), (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__Answer_17, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__SubAccA0_18, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__SubAccA_20, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__SubAccB0_19, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__SubAccB_21);
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_U_33, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar1_14, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__SubAccA_20);
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_V_34, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar2_15, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__SubAccB_21);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6


		{
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

		;}
#undef MR_PROC_LABEL
}
      (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__succeeded = MR_FALSE;
      if ((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__succeeded)
        mercury__solutions__builtin_aggregate2_6_p_6_1(env_ptr);
    }
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_6_3(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_6_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_6_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__commit_0) == 0)
      {
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__GeneratorPred_7, (MR_Integer) 1))));

          func_0(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__GeneratorPred_7)), &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__Answer0_16, mercury__solutions__builtin_aggregate2_6_p_6_2, env_ptr);
        }
        (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_6_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_6(
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeInfo_for_U_33,
  MR_Word TypeInfo_for_V_34,
  MR_Word GeneratorPred_7,
  MR_Word CollectorPred_8,
  MR_Box STATE_VARIABLE_Acc1_0_22,
  MR_Box * STATE_VARIABLE_Acc1_23,
  MR_Box STATE_VARIABLE_Acc2_0_24,
  MR_Box * STATE_VARIABLE_Acc2_25)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_6_env_0_s env;

    (env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_T_32 = TypeInfo_for_T_32;
    (env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_U_33 = TypeInfo_for_U_33;
    (env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_V_34 = TypeInfo_for_V_34;
    (env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__GeneratorPred_7 = GeneratorPred_7;
    (env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__CollectorPred_8 = CollectorPred_8;
    {
      MR_Word SolutionsHeapPtr_12;
      MR_Box STATE_VARIABLE_Acc1_28_28;
      MR_Box STATE_VARIABLE_Acc2_29_29;
      MR_Word TypeInfo_for_U_35;
      MR_Word TypeInfo_for_V_36;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 (env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__HeapPtr_11  = HeapPtr;
	 SolutionsHeapPtr_12  = SolutionsHeapPtr;
	 (env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TrailPtr_13  = TrailPtr;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_U_33, STATE_VARIABLE_Acc1_0_22, &(env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar1_14);
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_V_34, STATE_VARIABLE_Acc2_0_24, &(env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar2_15);
      mercury__solutions__builtin_aggregate2_6_p_6_3(&env);
      if (!((env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__succeeded))
      {
        MR_Box STATE_VARIABLE_Acc1_26_26;
        MR_Box STATE_VARIABLE_Acc2_27_27;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_U_33, (env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar1_14, &STATE_VARIABLE_Acc1_26_26);
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_V_34, (env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__Mutvar2_15, &STATE_VARIABLE_Acc2_27_27);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_U_33 ;
	SolutionsHeapPtr = SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc1_26_26 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc1_28_28  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_aggregate2_6_p_6_env_0__TypeInfo_for_V_34 ;
	SolutionsHeapPtr = SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc2_27_27 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc2_29_29  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_12 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
      }
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc1_28_28 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc1_23  = (MR_Box) Y;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_6

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc2_29_29 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc2_25  = (MR_Box) Y;
}
    }
  }
}

void MR_CALL 
mercury__solutions__unsorted_aggregate2_6_p_5(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_U_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word Generator_7,
  MR_Word AccumulatorPred_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  mercury__solutions__builtin_aggregate2_6_p_5(TypeInfo_for_T_17, TypeInfo_for_U_18, TypeInfo_for_V_19, Generator_7, AccumulatorPred_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
}

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_5_1(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_5_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_5_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_5_2(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_5_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_5_env_0_s *) (env_ptr_arg);

    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5

	MR_Word TrailPtr;

	TrailPtr = (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__TrailPtr_13 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5


		{
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

		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_T_32 ;
	SolutionsHeapPtr = (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__HeapPtr_11 ;
	OldVal = (MR_Word) (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__Answer0_16 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__Answer_17  = (MR_Box) NewVal;
}
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_U_33, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar1_14, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__SubAccA0_18);
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_V_34, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar2_15, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__SubAccB0_19);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__CollectorPred_8, (MR_Integer) 1))));
      func_1(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__CollectorPred_8)), (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__Answer_17, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__SubAccA0_18, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__SubAccA_20, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__SubAccB0_19, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__SubAccB_21);
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_U_33, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar1_14, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__SubAccA_20);
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_V_34, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar2_15, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__SubAccB_21);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5


		{
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

		;}
#undef MR_PROC_LABEL
}
      (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__succeeded = MR_FALSE;
      if ((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__succeeded)
        mercury__solutions__builtin_aggregate2_6_p_5_1(env_ptr);
    }
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_5_3(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_5_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_5_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__commit_0) == 0)
      {
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__GeneratorPred_7, (MR_Integer) 1))));

          func_0(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__GeneratorPred_7)), &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__Answer0_16, mercury__solutions__builtin_aggregate2_6_p_5_2, env_ptr);
        }
        (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_5_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_5(
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeInfo_for_U_33,
  MR_Word TypeInfo_for_V_34,
  MR_Word GeneratorPred_7,
  MR_Word CollectorPred_8,
  MR_Box STATE_VARIABLE_Acc1_0_22,
  MR_Box * STATE_VARIABLE_Acc1_23,
  MR_Box STATE_VARIABLE_Acc2_0_24,
  MR_Box * STATE_VARIABLE_Acc2_25)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_5_env_0_s env;

    (env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_T_32 = TypeInfo_for_T_32;
    (env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_U_33 = TypeInfo_for_U_33;
    (env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_V_34 = TypeInfo_for_V_34;
    (env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__GeneratorPred_7 = GeneratorPred_7;
    (env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__CollectorPred_8 = CollectorPred_8;
    {
      MR_Word SolutionsHeapPtr_12;
      MR_Box STATE_VARIABLE_Acc1_28_28;
      MR_Box STATE_VARIABLE_Acc2_29_29;
      MR_Word TypeInfo_for_U_35;
      MR_Word TypeInfo_for_V_36;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 (env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__HeapPtr_11  = HeapPtr;
	 SolutionsHeapPtr_12  = SolutionsHeapPtr;
	 (env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TrailPtr_13  = TrailPtr;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_U_33, STATE_VARIABLE_Acc1_0_22, &(env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar1_14);
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_V_34, STATE_VARIABLE_Acc2_0_24, &(env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar2_15);
      mercury__solutions__builtin_aggregate2_6_p_5_3(&env);
      if (!((env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__succeeded))
      {
        MR_Box STATE_VARIABLE_Acc1_26_26;
        MR_Box STATE_VARIABLE_Acc2_27_27;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_U_33, (env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar1_14, &STATE_VARIABLE_Acc1_26_26);
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_V_34, (env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__Mutvar2_15, &STATE_VARIABLE_Acc2_27_27);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_U_33 ;
	SolutionsHeapPtr = SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc1_26_26 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc1_28_28  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_aggregate2_6_p_5_env_0__TypeInfo_for_V_34 ;
	SolutionsHeapPtr = SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc2_27_27 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc2_29_29  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_12 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
      }
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc1_28_28 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc1_23  = (MR_Box) Y;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_5

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc2_29_29 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc2_25  = (MR_Box) Y;
}
    }
  }
}

void MR_CALL 
mercury__solutions__unsorted_aggregate2_6_p_4(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_U_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word Generator_7,
  MR_Word AccumulatorPred_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  mercury__solutions__builtin_aggregate2_6_p_4(TypeInfo_for_T_17, TypeInfo_for_U_18, TypeInfo_for_V_19, Generator_7, AccumulatorPred_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
}

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_4_1(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_4_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_4_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_4_2(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_4_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_4_env_0_s *) (env_ptr_arg);

    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4

	MR_Word TrailPtr;

	TrailPtr = (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__TrailPtr_13 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4


		{
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

		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_T_32 ;
	SolutionsHeapPtr = (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__HeapPtr_11 ;
	OldVal = (MR_Word) (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__Answer0_16 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__Answer_17  = (MR_Box) NewVal;
}
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_U_33, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar1_14, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__SubAccA0_18);
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_V_34, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar2_15, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__SubAccB0_19);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__CollectorPred_8, (MR_Integer) 1))));
      func_1(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__CollectorPred_8)), (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__Answer_17, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__SubAccA0_18, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__SubAccA_20, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__SubAccB0_19, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__SubAccB_21);
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_U_33, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar1_14, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__SubAccA_20);
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_V_34, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar2_15, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__SubAccB_21);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4


		{
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

		;}
#undef MR_PROC_LABEL
}
      (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__succeeded = MR_FALSE;
      if ((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__succeeded)
        mercury__solutions__builtin_aggregate2_6_p_4_1(env_ptr);
    }
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_4_3(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_4_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_4_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__commit_0) == 0)
      {
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__GeneratorPred_7, (MR_Integer) 1))));

          func_0(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__GeneratorPred_7)), &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__Answer0_16, mercury__solutions__builtin_aggregate2_6_p_4_2, env_ptr);
        }
        (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_4_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_4(
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeInfo_for_U_33,
  MR_Word TypeInfo_for_V_34,
  MR_Word GeneratorPred_7,
  MR_Word CollectorPred_8,
  MR_Box STATE_VARIABLE_Acc1_0_22,
  MR_Box * STATE_VARIABLE_Acc1_23,
  MR_Box STATE_VARIABLE_Acc2_0_24,
  MR_Box * STATE_VARIABLE_Acc2_25)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_4_env_0_s env;

    (env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_T_32 = TypeInfo_for_T_32;
    (env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_U_33 = TypeInfo_for_U_33;
    (env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_V_34 = TypeInfo_for_V_34;
    (env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__GeneratorPred_7 = GeneratorPred_7;
    (env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__CollectorPred_8 = CollectorPred_8;
    {
      MR_Word SolutionsHeapPtr_12;
      MR_Box STATE_VARIABLE_Acc1_28_28;
      MR_Box STATE_VARIABLE_Acc2_29_29;
      MR_Word TypeInfo_for_U_35;
      MR_Word TypeInfo_for_V_36;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 (env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__HeapPtr_11  = HeapPtr;
	 SolutionsHeapPtr_12  = SolutionsHeapPtr;
	 (env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TrailPtr_13  = TrailPtr;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_U_33, STATE_VARIABLE_Acc1_0_22, &(env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar1_14);
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_V_34, STATE_VARIABLE_Acc2_0_24, &(env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar2_15);
      mercury__solutions__builtin_aggregate2_6_p_4_3(&env);
      if (!((env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__succeeded))
      {
        MR_Box STATE_VARIABLE_Acc1_26_26;
        MR_Box STATE_VARIABLE_Acc2_27_27;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_U_33, (env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar1_14, &STATE_VARIABLE_Acc1_26_26);
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_V_34, (env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__Mutvar2_15, &STATE_VARIABLE_Acc2_27_27);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_U_33 ;
	SolutionsHeapPtr = SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc1_26_26 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc1_28_28  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_aggregate2_6_p_4_env_0__TypeInfo_for_V_34 ;
	SolutionsHeapPtr = SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc2_27_27 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc2_29_29  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_12 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
      }
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc1_28_28 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc1_23  = (MR_Box) Y;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_4

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc2_29_29 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc2_25  = (MR_Box) Y;
}
    }
  }
}

void MR_CALL 
mercury__solutions__unsorted_aggregate2_6_p_3(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_U_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word Generator_7,
  MR_Word AccumulatorPred_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  mercury__solutions__builtin_aggregate2_6_p_3(TypeInfo_for_T_17, TypeInfo_for_U_18, TypeInfo_for_V_19, Generator_7, AccumulatorPred_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
}

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_3_1(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_3_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_3_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_3_2(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_3_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_3_env_0_s *) (env_ptr_arg);

    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3

	MR_Word TrailPtr;

	TrailPtr = (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__TrailPtr_13 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3


		{
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

		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_T_32 ;
	SolutionsHeapPtr = (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__HeapPtr_11 ;
	OldVal = (MR_Word) (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__Answer0_16 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__Answer_17  = (MR_Box) NewVal;
}
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_U_33, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar1_14, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__SubAccA0_18);
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_V_34, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar2_15, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__SubAccB0_19);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__CollectorPred_8, (MR_Integer) 1))));
      func_1(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__CollectorPred_8)), (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__Answer_17, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__SubAccA0_18, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__SubAccA_20, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__SubAccB0_19, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__SubAccB_21);
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_U_33, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar1_14, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__SubAccA_20);
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_V_34, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar2_15, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__SubAccB_21);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3


		{
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

		;}
#undef MR_PROC_LABEL
}
      (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__succeeded = MR_FALSE;
      if ((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__succeeded)
        mercury__solutions__builtin_aggregate2_6_p_3_1(env_ptr);
    }
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_3_3(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_3_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_3_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__commit_0) == 0)
      {
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__GeneratorPred_7, (MR_Integer) 1))));

          func_0(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__GeneratorPred_7)), &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__Answer0_16, mercury__solutions__builtin_aggregate2_6_p_3_2, env_ptr);
        }
        (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_3_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_3(
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeInfo_for_U_33,
  MR_Word TypeInfo_for_V_34,
  MR_Word GeneratorPred_7,
  MR_Word CollectorPred_8,
  MR_Box STATE_VARIABLE_Acc1_0_22,
  MR_Box * STATE_VARIABLE_Acc1_23,
  MR_Box STATE_VARIABLE_Acc2_0_24,
  MR_Box * STATE_VARIABLE_Acc2_25)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_3_env_0_s env;

    (env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_T_32 = TypeInfo_for_T_32;
    (env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_U_33 = TypeInfo_for_U_33;
    (env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_V_34 = TypeInfo_for_V_34;
    (env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__GeneratorPred_7 = GeneratorPred_7;
    (env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__CollectorPred_8 = CollectorPred_8;
    {
      MR_Word SolutionsHeapPtr_12;
      MR_Box STATE_VARIABLE_Acc1_28_28;
      MR_Box STATE_VARIABLE_Acc2_29_29;
      MR_Word TypeInfo_for_U_35;
      MR_Word TypeInfo_for_V_36;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 (env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__HeapPtr_11  = HeapPtr;
	 SolutionsHeapPtr_12  = SolutionsHeapPtr;
	 (env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TrailPtr_13  = TrailPtr;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_U_33, STATE_VARIABLE_Acc1_0_22, &(env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar1_14);
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_V_34, STATE_VARIABLE_Acc2_0_24, &(env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar2_15);
      mercury__solutions__builtin_aggregate2_6_p_3_3(&env);
      if (!((env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__succeeded))
      {
        MR_Box STATE_VARIABLE_Acc1_26_26;
        MR_Box STATE_VARIABLE_Acc2_27_27;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_U_33, (env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar1_14, &STATE_VARIABLE_Acc1_26_26);
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_V_34, (env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__Mutvar2_15, &STATE_VARIABLE_Acc2_27_27);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_U_33 ;
	SolutionsHeapPtr = SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc1_26_26 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc1_28_28  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_aggregate2_6_p_3_env_0__TypeInfo_for_V_34 ;
	SolutionsHeapPtr = SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc2_27_27 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc2_29_29  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_12 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
      }
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc1_28_28 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc1_23  = (MR_Box) Y;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_3

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc2_29_29 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc2_25  = (MR_Box) Y;
}
    }
  }
}

void MR_CALL 
mercury__solutions__unsorted_aggregate2_6_p_2(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_U_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word Generator_7,
  MR_Word AccumulatorPred_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  mercury__solutions__builtin_aggregate2_6_p_2(TypeInfo_for_T_17, TypeInfo_for_U_18, TypeInfo_for_V_19, Generator_7, AccumulatorPred_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
}

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_2_1(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_2_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_2_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_2_2(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_2_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_2_env_0_s *) (env_ptr_arg);

    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2

	MR_Word TrailPtr;

	TrailPtr = (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__TrailPtr_13 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2


		{
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

		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_T_32 ;
	SolutionsHeapPtr = (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__HeapPtr_11 ;
	OldVal = (MR_Word) (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__Answer0_16 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__Answer_17  = (MR_Box) NewVal;
}
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_U_33, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar1_14, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__SubAccA0_18);
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_V_34, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar2_15, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__SubAccB0_19);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__CollectorPred_8, (MR_Integer) 1))));
      func_1(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__CollectorPred_8)), (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__Answer_17, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__SubAccA0_18, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__SubAccA_20, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__SubAccB0_19, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__SubAccB_21);
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_U_33, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar1_14, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__SubAccA_20);
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_V_34, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar2_15, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__SubAccB_21);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2


		{
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

		;}
#undef MR_PROC_LABEL
}
      (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__succeeded = MR_FALSE;
      if ((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__succeeded)
        mercury__solutions__builtin_aggregate2_6_p_2_1(env_ptr);
    }
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_2_3(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_2_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_2_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__commit_0) == 0)
      {
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__GeneratorPred_7, (MR_Integer) 1))));

          func_0(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__GeneratorPred_7)), &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__Answer0_16, mercury__solutions__builtin_aggregate2_6_p_2_2, env_ptr);
        }
        (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_2_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_2(
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeInfo_for_U_33,
  MR_Word TypeInfo_for_V_34,
  MR_Word GeneratorPred_7,
  MR_Word CollectorPred_8,
  MR_Box STATE_VARIABLE_Acc1_0_22,
  MR_Box * STATE_VARIABLE_Acc1_23,
  MR_Box STATE_VARIABLE_Acc2_0_24,
  MR_Box * STATE_VARIABLE_Acc2_25)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_2_env_0_s env;

    (env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_T_32 = TypeInfo_for_T_32;
    (env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_U_33 = TypeInfo_for_U_33;
    (env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_V_34 = TypeInfo_for_V_34;
    (env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__GeneratorPred_7 = GeneratorPred_7;
    (env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__CollectorPred_8 = CollectorPred_8;
    {
      MR_Word SolutionsHeapPtr_12;
      MR_Box STATE_VARIABLE_Acc1_28_28;
      MR_Box STATE_VARIABLE_Acc2_29_29;
      MR_Word TypeInfo_for_U_35;
      MR_Word TypeInfo_for_V_36;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 (env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__HeapPtr_11  = HeapPtr;
	 SolutionsHeapPtr_12  = SolutionsHeapPtr;
	 (env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TrailPtr_13  = TrailPtr;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_U_33, STATE_VARIABLE_Acc1_0_22, &(env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar1_14);
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_V_34, STATE_VARIABLE_Acc2_0_24, &(env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar2_15);
      mercury__solutions__builtin_aggregate2_6_p_2_3(&env);
      if (!((env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__succeeded))
      {
        MR_Box STATE_VARIABLE_Acc1_26_26;
        MR_Box STATE_VARIABLE_Acc2_27_27;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_U_33, (env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar1_14, &STATE_VARIABLE_Acc1_26_26);
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_V_34, (env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__Mutvar2_15, &STATE_VARIABLE_Acc2_27_27);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_U_33 ;
	SolutionsHeapPtr = SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc1_26_26 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc1_28_28  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_aggregate2_6_p_2_env_0__TypeInfo_for_V_34 ;
	SolutionsHeapPtr = SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc2_27_27 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc2_29_29  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_12 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
      }
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc1_28_28 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc1_23  = (MR_Box) Y;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_2

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc2_29_29 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc2_25  = (MR_Box) Y;
}
    }
  }
}

void MR_CALL 
mercury__solutions__unsorted_aggregate2_6_p_1(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_U_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word Generator_7,
  MR_Word AccumulatorPred_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  mercury__solutions__builtin_aggregate2_6_p_1(TypeInfo_for_T_17, TypeInfo_for_U_18, TypeInfo_for_V_19, Generator_7, AccumulatorPred_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
}

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_1_1(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_1_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_1_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_1_2(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_1_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_1_env_0_s *) (env_ptr_arg);

    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1

	MR_Word TrailPtr;

	TrailPtr = (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__TrailPtr_13 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1


		{
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

		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_T_32 ;
	SolutionsHeapPtr = (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__HeapPtr_11 ;
	OldVal = (MR_Word) (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__Answer0_16 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__Answer_17  = (MR_Box) NewVal;
}
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_U_33, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar1_14, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__SubAccA0_18);
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_V_34, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar2_15, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__SubAccB0_19);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__CollectorPred_8, (MR_Integer) 1))));
      func_1(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__CollectorPred_8)), (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__Answer_17, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__SubAccA0_18, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__SubAccA_20, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__SubAccB0_19, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__SubAccB_21);
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_U_33, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar1_14, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__SubAccA_20);
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_V_34, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar2_15, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__SubAccB_21);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1


		{
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

		;}
#undef MR_PROC_LABEL
}
      (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__succeeded = MR_FALSE;
      if ((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__succeeded)
        mercury__solutions__builtin_aggregate2_6_p_1_1(env_ptr);
    }
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_1_3(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_1_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_1_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__commit_0) == 0)
      {
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__GeneratorPred_7, (MR_Integer) 1))));

          func_0(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__GeneratorPred_7)), &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__Answer0_16, mercury__solutions__builtin_aggregate2_6_p_1_2, env_ptr);
        }
        (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_1_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_1(
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeInfo_for_U_33,
  MR_Word TypeInfo_for_V_34,
  MR_Word GeneratorPred_7,
  MR_Word CollectorPred_8,
  MR_Box STATE_VARIABLE_Acc1_0_22,
  MR_Box * STATE_VARIABLE_Acc1_23,
  MR_Box STATE_VARIABLE_Acc2_0_24,
  MR_Box * STATE_VARIABLE_Acc2_25)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_1_env_0_s env;

    (env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_T_32 = TypeInfo_for_T_32;
    (env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_U_33 = TypeInfo_for_U_33;
    (env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_V_34 = TypeInfo_for_V_34;
    (env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__GeneratorPred_7 = GeneratorPred_7;
    (env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__CollectorPred_8 = CollectorPred_8;
    {
      MR_Word SolutionsHeapPtr_12;
      MR_Box STATE_VARIABLE_Acc1_28_28;
      MR_Box STATE_VARIABLE_Acc2_29_29;
      MR_Word TypeInfo_for_U_35;
      MR_Word TypeInfo_for_V_36;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 (env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__HeapPtr_11  = HeapPtr;
	 SolutionsHeapPtr_12  = SolutionsHeapPtr;
	 (env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TrailPtr_13  = TrailPtr;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_U_33, STATE_VARIABLE_Acc1_0_22, &(env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar1_14);
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_V_34, STATE_VARIABLE_Acc2_0_24, &(env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar2_15);
      mercury__solutions__builtin_aggregate2_6_p_1_3(&env);
      if (!((env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__succeeded))
      {
        MR_Box STATE_VARIABLE_Acc1_26_26;
        MR_Box STATE_VARIABLE_Acc2_27_27;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_U_33, (env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar1_14, &STATE_VARIABLE_Acc1_26_26);
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_V_34, (env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__Mutvar2_15, &STATE_VARIABLE_Acc2_27_27);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_U_33 ;
	SolutionsHeapPtr = SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc1_26_26 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc1_28_28  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_aggregate2_6_p_1_env_0__TypeInfo_for_V_34 ;
	SolutionsHeapPtr = SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc2_27_27 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc2_29_29  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_12 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
      }
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc1_28_28 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc1_23  = (MR_Box) Y;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_1

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc2_29_29 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc2_25  = (MR_Box) Y;
}
    }
  }
}

void MR_CALL 
mercury__solutions__unsorted_aggregate2_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_U_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word Generator_7,
  MR_Word AccumulatorPred_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  mercury__solutions__builtin_aggregate2_6_p_0(TypeInfo_for_T_17, TypeInfo_for_U_18, TypeInfo_for_V_19, Generator_7, AccumulatorPred_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
}

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_0_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_0_2(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_0_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_0_env_0_s *) (env_ptr_arg);

    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0

	MR_Word TrailPtr;

	TrailPtr = (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__TrailPtr_13 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0


		{
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

		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_T_32 ;
	SolutionsHeapPtr = (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__HeapPtr_11 ;
	OldVal = (MR_Word) (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__Answer0_16 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__Answer_17  = (MR_Box) NewVal;
}
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_U_33, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar1_14, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__SubAccA0_18);
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_V_34, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar2_15, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__SubAccB0_19);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__CollectorPred_8, (MR_Integer) 1))));
      func_1(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__CollectorPred_8)), (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__Answer_17, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__SubAccA0_18, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__SubAccA_20, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__SubAccB0_19, &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__SubAccB_21);
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_U_33, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar1_14, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__SubAccA_20);
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_V_34, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar2_15, (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__SubAccB_21);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0


		{
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

		;}
#undef MR_PROC_LABEL
}
      (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__succeeded = MR_FALSE;
      if ((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__succeeded)
        mercury__solutions__builtin_aggregate2_6_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_0_3(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_0_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate2_6_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__commit_0) == 0)
      {
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__GeneratorPred_7, (MR_Integer) 1))));

          func_0(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__GeneratorPred_7)), &(env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__Answer0_16, mercury__solutions__builtin_aggregate2_6_p_0_2, env_ptr);
        }
        (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__solutions__builtin_aggregate2_6_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__solutions__builtin_aggregate2_6_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeInfo_for_U_33,
  MR_Word TypeInfo_for_V_34,
  MR_Word GeneratorPred_7,
  MR_Word CollectorPred_8,
  MR_Box STATE_VARIABLE_Acc1_0_22,
  MR_Box * STATE_VARIABLE_Acc1_23,
  MR_Box STATE_VARIABLE_Acc2_0_24,
  MR_Box * STATE_VARIABLE_Acc2_25)
{
  {
    struct mercury__solutions__builtin_aggregate2_6_p_0_env_0_s env;

    (env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_T_32 = TypeInfo_for_T_32;
    (env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_U_33 = TypeInfo_for_U_33;
    (env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_V_34 = TypeInfo_for_V_34;
    (env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__GeneratorPred_7 = GeneratorPred_7;
    (env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__CollectorPred_8 = CollectorPred_8;
    {
      MR_Word SolutionsHeapPtr_12;
      MR_Box STATE_VARIABLE_Acc1_28_28;
      MR_Box STATE_VARIABLE_Acc2_29_29;
      MR_Word TypeInfo_for_U_35;
      MR_Word TypeInfo_for_V_36;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 (env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__HeapPtr_11  = HeapPtr;
	 SolutionsHeapPtr_12  = SolutionsHeapPtr;
	 (env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TrailPtr_13  = TrailPtr;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_U_33, STATE_VARIABLE_Acc1_0_22, &(env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar1_14);
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_V_34, STATE_VARIABLE_Acc2_0_24, &(env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar2_15);
      mercury__solutions__builtin_aggregate2_6_p_0_3(&env);
      if (!((env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__succeeded))
      {
        MR_Box STATE_VARIABLE_Acc1_26_26;
        MR_Box STATE_VARIABLE_Acc2_27_27;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_U_33, (env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar1_14, &STATE_VARIABLE_Acc1_26_26);
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_V_34, (env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__Mutvar2_15, &STATE_VARIABLE_Acc2_27_27);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_U_33 ;
	SolutionsHeapPtr = SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc1_26_26 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc1_28_28  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_aggregate2_6_p_0_env_0__TypeInfo_for_V_34 ;
	SolutionsHeapPtr = SolutionsHeapPtr_12 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc2_27_27 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc2_29_29  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_12 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
      }
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc1_28_28 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc1_23  = (MR_Box) Y;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate2_6_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc2_29_29 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc2_25  = (MR_Box) Y;
}
    }
  }
}

void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_9(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_U_12,
  MR_Word Generator_5,
  MR_Word AccumulatorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  mercury__solutions__builtin_aggregate_4_p_9(TypeInfo_for_T_11, TypeInfo_for_U_12, Generator_5, AccumulatorPred_6, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_9_1(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_9_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_9_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_9_2(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_9_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_9_env_0_s *) (env_ptr_arg);

    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9

	MR_Word TrailPtr;

	TrailPtr = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__TrailPtr_10 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9


		{
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

		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_T_21 ;
	SolutionsHeapPtr = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Answer0_12 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 (env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Answer_13  = (MR_Box) NewVal;
}
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_U_22, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Mutvar_11, &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Acc0_14);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__CollectorPred_6, (MR_Integer) 1))));
      func_1(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__CollectorPred_6)), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Answer_13, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Acc0_14, &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Acc1_15);
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_U_22, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Mutvar_11, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Acc1_15);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9


		{
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

		;}
#undef MR_PROC_LABEL
}
      (env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__succeeded = MR_FALSE;
      if ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__succeeded)
        mercury__solutions__builtin_aggregate_4_p_9_1(env_ptr);
    }
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_9_3(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_9_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_9_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__commit_0) == 0)
      {
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__GeneratorPred_5, (MR_Integer) 1))));

          func_0(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__GeneratorPred_5)), &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_9_2, env_ptr);
        }
        (env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__solutions__builtin_aggregate_4_p_9_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_9(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeInfo_for_U_22,
  MR_Word GeneratorPred_5,
  MR_Word CollectorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_16,
  MR_Box * STATE_VARIABLE_Acc_17)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_9_env_0_s env;

    (env).mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_T_21 = TypeInfo_for_T_21;
    (env).mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_U_22 = TypeInfo_for_U_22;
    (env).mercury__solutions__builtin_aggregate_4_p_9_env_0__GeneratorPred_5 = GeneratorPred_5;
    (env).mercury__solutions__builtin_aggregate_4_p_9_env_0__CollectorPred_6 = CollectorPred_6;
    {
      MR_Word SolutionsHeapPtr_9;
      MR_Box STATE_VARIABLE_Acc_19_19;
      MR_Word TypeInfo_for_U_23;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 (env).mercury__solutions__builtin_aggregate_4_p_9_env_0__HeapPtr_8  = HeapPtr;
	 SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (env).mercury__solutions__builtin_aggregate_4_p_9_env_0__TrailPtr_10  = TrailPtr;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_U_22, STATE_VARIABLE_Acc_0_16, &(env).mercury__solutions__builtin_aggregate_4_p_9_env_0__Mutvar_11);
      mercury__solutions__builtin_aggregate_4_p_9_3(&env);
      if (!((env).mercury__solutions__builtin_aggregate_4_p_9_env_0__succeeded))
      {
        MR_Box STATE_VARIABLE_Acc_18_18;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_U_22, (env).mercury__solutions__builtin_aggregate_4_p_9_env_0__Mutvar_11, &STATE_VARIABLE_Acc_18_18);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_aggregate_4_p_9_env_0__TypeInfo_for_U_22 ;
	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc_18_18 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc_19_19  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
      }
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_9

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc_19_19 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc_17  = (MR_Box) Y;
}
    }
  }
}

void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_8(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_U_12,
  MR_Word Generator_5,
  MR_Word AccumulatorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  mercury__solutions__builtin_aggregate_4_p_8(TypeInfo_for_T_11, TypeInfo_for_U_12, Generator_5, AccumulatorPred_6, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_8_1(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_8_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_8_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_8_2(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_8_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_8_env_0_s *) (env_ptr_arg);

    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8

	MR_Word TrailPtr;

	TrailPtr = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__TrailPtr_10 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8


		{
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

		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_T_21 ;
	SolutionsHeapPtr = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Answer0_12 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 (env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Answer_13  = (MR_Box) NewVal;
}
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_U_22, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Mutvar_11, &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Acc0_14);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__CollectorPred_6, (MR_Integer) 1))));
      func_1(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__CollectorPred_6)), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Answer_13, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Acc0_14, &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Acc1_15);
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_U_22, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Mutvar_11, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Acc1_15);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8


		{
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

		;}
#undef MR_PROC_LABEL
}
      (env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__succeeded = MR_FALSE;
      if ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__succeeded)
        mercury__solutions__builtin_aggregate_4_p_8_1(env_ptr);
    }
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_8_3(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_8_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_8_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__commit_0) == 0)
      {
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__GeneratorPred_5, (MR_Integer) 1))));

          func_0(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__GeneratorPred_5)), &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_8_2, env_ptr);
        }
        (env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__solutions__builtin_aggregate_4_p_8_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_8(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeInfo_for_U_22,
  MR_Word GeneratorPred_5,
  MR_Word CollectorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_16,
  MR_Box * STATE_VARIABLE_Acc_17)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_8_env_0_s env;

    (env).mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_T_21 = TypeInfo_for_T_21;
    (env).mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_U_22 = TypeInfo_for_U_22;
    (env).mercury__solutions__builtin_aggregate_4_p_8_env_0__GeneratorPred_5 = GeneratorPred_5;
    (env).mercury__solutions__builtin_aggregate_4_p_8_env_0__CollectorPred_6 = CollectorPred_6;
    {
      MR_Word SolutionsHeapPtr_9;
      MR_Box STATE_VARIABLE_Acc_19_19;
      MR_Word TypeInfo_for_U_23;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 (env).mercury__solutions__builtin_aggregate_4_p_8_env_0__HeapPtr_8  = HeapPtr;
	 SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (env).mercury__solutions__builtin_aggregate_4_p_8_env_0__TrailPtr_10  = TrailPtr;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_U_22, STATE_VARIABLE_Acc_0_16, &(env).mercury__solutions__builtin_aggregate_4_p_8_env_0__Mutvar_11);
      mercury__solutions__builtin_aggregate_4_p_8_3(&env);
      if (!((env).mercury__solutions__builtin_aggregate_4_p_8_env_0__succeeded))
      {
        MR_Box STATE_VARIABLE_Acc_18_18;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_U_22, (env).mercury__solutions__builtin_aggregate_4_p_8_env_0__Mutvar_11, &STATE_VARIABLE_Acc_18_18);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_aggregate_4_p_8_env_0__TypeInfo_for_U_22 ;
	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc_18_18 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc_19_19  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
      }
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_8

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc_19_19 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc_17  = (MR_Box) Y;
}
    }
  }
}

void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_7(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_U_12,
  MR_Word Generator_5,
  MR_Word AccumulatorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  mercury__solutions__builtin_aggregate_4_p_7(TypeInfo_for_T_11, TypeInfo_for_U_12, Generator_5, AccumulatorPred_6, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_7_1(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_7_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_7_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_7_2(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_7_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_7_env_0_s *) (env_ptr_arg);

    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7

	MR_Word TrailPtr;

	TrailPtr = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__TrailPtr_10 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7


		{
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

		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_T_21 ;
	SolutionsHeapPtr = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Answer0_12 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 (env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Answer_13  = (MR_Box) NewVal;
}
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_U_22, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Mutvar_11, &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Acc0_14);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__CollectorPred_6, (MR_Integer) 1))));
      func_1(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__CollectorPred_6)), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Answer_13, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Acc0_14, &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Acc1_15);
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_U_22, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Mutvar_11, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Acc1_15);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7


		{
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

		;}
#undef MR_PROC_LABEL
}
      (env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__succeeded = MR_FALSE;
      if ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__succeeded)
        mercury__solutions__builtin_aggregate_4_p_7_1(env_ptr);
    }
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_7_3(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_7_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_7_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__commit_0) == 0)
      {
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__GeneratorPred_5, (MR_Integer) 1))));

          func_0(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__GeneratorPred_5)), &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_7_2, env_ptr);
        }
        (env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__solutions__builtin_aggregate_4_p_7_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_7(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeInfo_for_U_22,
  MR_Word GeneratorPred_5,
  MR_Word CollectorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_16,
  MR_Box * STATE_VARIABLE_Acc_17)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_7_env_0_s env;

    (env).mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_T_21 = TypeInfo_for_T_21;
    (env).mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_U_22 = TypeInfo_for_U_22;
    (env).mercury__solutions__builtin_aggregate_4_p_7_env_0__GeneratorPred_5 = GeneratorPred_5;
    (env).mercury__solutions__builtin_aggregate_4_p_7_env_0__CollectorPred_6 = CollectorPred_6;
    {
      MR_Word SolutionsHeapPtr_9;
      MR_Box STATE_VARIABLE_Acc_19_19;
      MR_Word TypeInfo_for_U_23;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 (env).mercury__solutions__builtin_aggregate_4_p_7_env_0__HeapPtr_8  = HeapPtr;
	 SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (env).mercury__solutions__builtin_aggregate_4_p_7_env_0__TrailPtr_10  = TrailPtr;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_U_22, STATE_VARIABLE_Acc_0_16, &(env).mercury__solutions__builtin_aggregate_4_p_7_env_0__Mutvar_11);
      mercury__solutions__builtin_aggregate_4_p_7_3(&env);
      if (!((env).mercury__solutions__builtin_aggregate_4_p_7_env_0__succeeded))
      {
        MR_Box STATE_VARIABLE_Acc_18_18;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_U_22, (env).mercury__solutions__builtin_aggregate_4_p_7_env_0__Mutvar_11, &STATE_VARIABLE_Acc_18_18);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_aggregate_4_p_7_env_0__TypeInfo_for_U_22 ;
	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc_18_18 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc_19_19  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
      }
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_7

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc_19_19 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc_17  = (MR_Box) Y;
}
    }
  }
}

void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_6(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_U_12,
  MR_Word Generator_5,
  MR_Word AccumulatorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  mercury__solutions__builtin_aggregate_4_p_6(TypeInfo_for_T_11, TypeInfo_for_U_12, Generator_5, AccumulatorPred_6, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_6_1(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_6_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_6_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_6_2(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_6_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_6_env_0_s *) (env_ptr_arg);

    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6

	MR_Word TrailPtr;

	TrailPtr = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__TrailPtr_10 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6


		{
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

		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_T_21 ;
	SolutionsHeapPtr = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Answer0_12 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 (env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Answer_13  = (MR_Box) NewVal;
}
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_U_22, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Mutvar_11, &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Acc0_14);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__CollectorPred_6, (MR_Integer) 1))));
      func_1(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__CollectorPred_6)), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Answer_13, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Acc0_14, &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Acc1_15);
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_U_22, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Mutvar_11, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Acc1_15);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6


		{
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

		;}
#undef MR_PROC_LABEL
}
      (env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__succeeded = MR_FALSE;
      if ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__succeeded)
        mercury__solutions__builtin_aggregate_4_p_6_1(env_ptr);
    }
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_6_3(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_6_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_6_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__commit_0) == 0)
      {
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__GeneratorPred_5, (MR_Integer) 1))));

          func_0(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__GeneratorPred_5)), &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_6_2, env_ptr);
        }
        (env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__solutions__builtin_aggregate_4_p_6_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_6(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeInfo_for_U_22,
  MR_Word GeneratorPred_5,
  MR_Word CollectorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_16,
  MR_Box * STATE_VARIABLE_Acc_17)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_6_env_0_s env;

    (env).mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_T_21 = TypeInfo_for_T_21;
    (env).mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_U_22 = TypeInfo_for_U_22;
    (env).mercury__solutions__builtin_aggregate_4_p_6_env_0__GeneratorPred_5 = GeneratorPred_5;
    (env).mercury__solutions__builtin_aggregate_4_p_6_env_0__CollectorPred_6 = CollectorPred_6;
    {
      MR_Word SolutionsHeapPtr_9;
      MR_Box STATE_VARIABLE_Acc_19_19;
      MR_Word TypeInfo_for_U_23;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 (env).mercury__solutions__builtin_aggregate_4_p_6_env_0__HeapPtr_8  = HeapPtr;
	 SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (env).mercury__solutions__builtin_aggregate_4_p_6_env_0__TrailPtr_10  = TrailPtr;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_U_22, STATE_VARIABLE_Acc_0_16, &(env).mercury__solutions__builtin_aggregate_4_p_6_env_0__Mutvar_11);
      mercury__solutions__builtin_aggregate_4_p_6_3(&env);
      if (!((env).mercury__solutions__builtin_aggregate_4_p_6_env_0__succeeded))
      {
        MR_Box STATE_VARIABLE_Acc_18_18;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_U_22, (env).mercury__solutions__builtin_aggregate_4_p_6_env_0__Mutvar_11, &STATE_VARIABLE_Acc_18_18);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_aggregate_4_p_6_env_0__TypeInfo_for_U_22 ;
	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc_18_18 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc_19_19  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
      }
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_6

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc_19_19 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc_17  = (MR_Box) Y;
}
    }
  }
}

void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_5(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_U_12,
  MR_Word Generator_5,
  MR_Word AccumulatorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  mercury__solutions__builtin_aggregate_4_p_5(TypeInfo_for_T_11, TypeInfo_for_U_12, Generator_5, AccumulatorPred_6, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_5_1(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_5_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_5_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_5_2(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_5_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_5_env_0_s *) (env_ptr_arg);

    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5

	MR_Word TrailPtr;

	TrailPtr = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__TrailPtr_10 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5


		{
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

		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_T_21 ;
	SolutionsHeapPtr = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Answer0_12 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 (env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Answer_13  = (MR_Box) NewVal;
}
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_U_22, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Mutvar_11, &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Acc0_14);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__CollectorPred_6, (MR_Integer) 1))));
      func_1(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__CollectorPred_6)), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Answer_13, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Acc0_14, &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Acc1_15);
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_U_22, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Mutvar_11, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Acc1_15);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5


		{
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

		;}
#undef MR_PROC_LABEL
}
      (env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__succeeded = MR_FALSE;
      if ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__succeeded)
        mercury__solutions__builtin_aggregate_4_p_5_1(env_ptr);
    }
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_5_3(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_5_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_5_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__commit_0) == 0)
      {
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__GeneratorPred_5, (MR_Integer) 1))));

          func_0(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__GeneratorPred_5)), &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_5_2, env_ptr);
        }
        (env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__solutions__builtin_aggregate_4_p_5_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_5(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeInfo_for_U_22,
  MR_Word GeneratorPred_5,
  MR_Word CollectorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_16,
  MR_Box * STATE_VARIABLE_Acc_17)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_5_env_0_s env;

    (env).mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_T_21 = TypeInfo_for_T_21;
    (env).mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_U_22 = TypeInfo_for_U_22;
    (env).mercury__solutions__builtin_aggregate_4_p_5_env_0__GeneratorPred_5 = GeneratorPred_5;
    (env).mercury__solutions__builtin_aggregate_4_p_5_env_0__CollectorPred_6 = CollectorPred_6;
    {
      MR_Word SolutionsHeapPtr_9;
      MR_Box STATE_VARIABLE_Acc_19_19;
      MR_Word TypeInfo_for_U_23;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 (env).mercury__solutions__builtin_aggregate_4_p_5_env_0__HeapPtr_8  = HeapPtr;
	 SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (env).mercury__solutions__builtin_aggregate_4_p_5_env_0__TrailPtr_10  = TrailPtr;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_U_22, STATE_VARIABLE_Acc_0_16, &(env).mercury__solutions__builtin_aggregate_4_p_5_env_0__Mutvar_11);
      mercury__solutions__builtin_aggregate_4_p_5_3(&env);
      if (!((env).mercury__solutions__builtin_aggregate_4_p_5_env_0__succeeded))
      {
        MR_Box STATE_VARIABLE_Acc_18_18;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_U_22, (env).mercury__solutions__builtin_aggregate_4_p_5_env_0__Mutvar_11, &STATE_VARIABLE_Acc_18_18);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_aggregate_4_p_5_env_0__TypeInfo_for_U_22 ;
	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc_18_18 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc_19_19  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
      }
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_5

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc_19_19 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc_17  = (MR_Box) Y;
}
    }
  }
}

void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_4(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_U_12,
  MR_Word Generator_5,
  MR_Word AccumulatorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  mercury__solutions__builtin_aggregate_4_p_4(TypeInfo_for_T_11, TypeInfo_for_U_12, Generator_5, AccumulatorPred_6, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_4_1(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_4_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_4_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_4_2(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_4_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_4_env_0_s *) (env_ptr_arg);

    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4

	MR_Word TrailPtr;

	TrailPtr = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__TrailPtr_10 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4


		{
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

		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_T_21 ;
	SolutionsHeapPtr = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Answer0_12 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 (env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Answer_13  = (MR_Box) NewVal;
}
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_U_22, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Mutvar_11, &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Acc0_14);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__CollectorPred_6, (MR_Integer) 1))));
      func_1(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__CollectorPred_6)), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Answer_13, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Acc0_14, &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Acc1_15);
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_U_22, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Mutvar_11, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Acc1_15);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4


		{
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

		;}
#undef MR_PROC_LABEL
}
      (env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__succeeded = MR_FALSE;
      if ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__succeeded)
        mercury__solutions__builtin_aggregate_4_p_4_1(env_ptr);
    }
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_4_3(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_4_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_4_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__commit_0) == 0)
      {
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__GeneratorPred_5, (MR_Integer) 1))));

          func_0(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__GeneratorPred_5)), &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_4_2, env_ptr);
        }
        (env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__solutions__builtin_aggregate_4_p_4_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_4(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeInfo_for_U_22,
  MR_Word GeneratorPred_5,
  MR_Word CollectorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_16,
  MR_Box * STATE_VARIABLE_Acc_17)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_4_env_0_s env;

    (env).mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_T_21 = TypeInfo_for_T_21;
    (env).mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_U_22 = TypeInfo_for_U_22;
    (env).mercury__solutions__builtin_aggregate_4_p_4_env_0__GeneratorPred_5 = GeneratorPred_5;
    (env).mercury__solutions__builtin_aggregate_4_p_4_env_0__CollectorPred_6 = CollectorPred_6;
    {
      MR_Word SolutionsHeapPtr_9;
      MR_Box STATE_VARIABLE_Acc_19_19;
      MR_Word TypeInfo_for_U_23;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 (env).mercury__solutions__builtin_aggregate_4_p_4_env_0__HeapPtr_8  = HeapPtr;
	 SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (env).mercury__solutions__builtin_aggregate_4_p_4_env_0__TrailPtr_10  = TrailPtr;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_U_22, STATE_VARIABLE_Acc_0_16, &(env).mercury__solutions__builtin_aggregate_4_p_4_env_0__Mutvar_11);
      mercury__solutions__builtin_aggregate_4_p_4_3(&env);
      if (!((env).mercury__solutions__builtin_aggregate_4_p_4_env_0__succeeded))
      {
        MR_Box STATE_VARIABLE_Acc_18_18;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_U_22, (env).mercury__solutions__builtin_aggregate_4_p_4_env_0__Mutvar_11, &STATE_VARIABLE_Acc_18_18);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_aggregate_4_p_4_env_0__TypeInfo_for_U_22 ;
	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc_18_18 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc_19_19  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
      }
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_4

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc_19_19 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc_17  = (MR_Box) Y;
}
    }
  }
}

void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_3(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_U_12,
  MR_Word Generator_5,
  MR_Word AccumulatorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  mercury__solutions__builtin_aggregate_4_p_3(TypeInfo_for_T_11, TypeInfo_for_U_12, Generator_5, AccumulatorPred_6, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_3_1(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_3_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_3_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_3_2(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_3_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_3_env_0_s *) (env_ptr_arg);

    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3

	MR_Word TrailPtr;

	TrailPtr = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__TrailPtr_10 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3


		{
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

		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_T_21 ;
	SolutionsHeapPtr = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Answer0_12 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 (env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Answer_13  = (MR_Box) NewVal;
}
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_U_22, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Mutvar_11, &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Acc0_14);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__CollectorPred_6, (MR_Integer) 1))));
      func_1(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__CollectorPred_6)), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Answer_13, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Acc0_14, &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Acc1_15);
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_U_22, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Mutvar_11, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Acc1_15);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3


		{
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

		;}
#undef MR_PROC_LABEL
}
      (env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__succeeded = MR_FALSE;
      if ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__succeeded)
        mercury__solutions__builtin_aggregate_4_p_3_1(env_ptr);
    }
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_3_3(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_3_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_3_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__commit_0) == 0)
      {
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__GeneratorPred_5, (MR_Integer) 1))));

          func_0(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__GeneratorPred_5)), &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_3_2, env_ptr);
        }
        (env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__solutions__builtin_aggregate_4_p_3_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_3(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeInfo_for_U_22,
  MR_Word GeneratorPred_5,
  MR_Word CollectorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_16,
  MR_Box * STATE_VARIABLE_Acc_17)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_3_env_0_s env;

    (env).mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_T_21 = TypeInfo_for_T_21;
    (env).mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_U_22 = TypeInfo_for_U_22;
    (env).mercury__solutions__builtin_aggregate_4_p_3_env_0__GeneratorPred_5 = GeneratorPred_5;
    (env).mercury__solutions__builtin_aggregate_4_p_3_env_0__CollectorPred_6 = CollectorPred_6;
    {
      MR_Word SolutionsHeapPtr_9;
      MR_Box STATE_VARIABLE_Acc_19_19;
      MR_Word TypeInfo_for_U_23;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 (env).mercury__solutions__builtin_aggregate_4_p_3_env_0__HeapPtr_8  = HeapPtr;
	 SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (env).mercury__solutions__builtin_aggregate_4_p_3_env_0__TrailPtr_10  = TrailPtr;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_U_22, STATE_VARIABLE_Acc_0_16, &(env).mercury__solutions__builtin_aggregate_4_p_3_env_0__Mutvar_11);
      mercury__solutions__builtin_aggregate_4_p_3_3(&env);
      if (!((env).mercury__solutions__builtin_aggregate_4_p_3_env_0__succeeded))
      {
        MR_Box STATE_VARIABLE_Acc_18_18;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_U_22, (env).mercury__solutions__builtin_aggregate_4_p_3_env_0__Mutvar_11, &STATE_VARIABLE_Acc_18_18);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_aggregate_4_p_3_env_0__TypeInfo_for_U_22 ;
	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc_18_18 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc_19_19  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
      }
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_3

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc_19_19 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc_17  = (MR_Box) Y;
}
    }
  }
}

void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_2(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_U_12,
  MR_Word Generator_5,
  MR_Word AccumulatorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  mercury__solutions__builtin_aggregate_4_p_1(TypeInfo_for_T_11, TypeInfo_for_U_12, Generator_5, AccumulatorPred_6, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_1_1(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_1_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_1_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_1_2(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_1_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_1_env_0_s *) (env_ptr_arg);

    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1

	MR_Word TrailPtr;

	TrailPtr = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__TrailPtr_10 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1


		{
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

		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_T_21 ;
	SolutionsHeapPtr = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Answer0_12 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 (env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Answer_13  = (MR_Box) NewVal;
}
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_U_22, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Mutvar_11, &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Acc0_14);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__CollectorPred_6, (MR_Integer) 1))));
      func_1(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__CollectorPred_6)), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Answer_13, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Acc0_14, &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Acc1_15);
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_U_22, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Mutvar_11, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Acc1_15);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1


		{
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

		;}
#undef MR_PROC_LABEL
}
      (env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__succeeded = MR_FALSE;
      if ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__succeeded)
        mercury__solutions__builtin_aggregate_4_p_1_1(env_ptr);
    }
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_1_3(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_1_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_1_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__commit_0) == 0)
      {
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__GeneratorPred_5, (MR_Integer) 1))));

          func_0(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__GeneratorPred_5)), &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_1_2, env_ptr);
        }
        (env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__solutions__builtin_aggregate_4_p_1_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_1(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeInfo_for_U_22,
  MR_Word GeneratorPred_5,
  MR_Word CollectorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_16,
  MR_Box * STATE_VARIABLE_Acc_17)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_1_env_0_s env;

    (env).mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_T_21 = TypeInfo_for_T_21;
    (env).mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_U_22 = TypeInfo_for_U_22;
    (env).mercury__solutions__builtin_aggregate_4_p_1_env_0__GeneratorPred_5 = GeneratorPred_5;
    (env).mercury__solutions__builtin_aggregate_4_p_1_env_0__CollectorPred_6 = CollectorPred_6;
    {
      MR_Word SolutionsHeapPtr_9;
      MR_Box STATE_VARIABLE_Acc_19_19;
      MR_Word TypeInfo_for_U_23;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 (env).mercury__solutions__builtin_aggregate_4_p_1_env_0__HeapPtr_8  = HeapPtr;
	 SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (env).mercury__solutions__builtin_aggregate_4_p_1_env_0__TrailPtr_10  = TrailPtr;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_U_22, STATE_VARIABLE_Acc_0_16, &(env).mercury__solutions__builtin_aggregate_4_p_1_env_0__Mutvar_11);
      mercury__solutions__builtin_aggregate_4_p_1_3(&env);
      if (!((env).mercury__solutions__builtin_aggregate_4_p_1_env_0__succeeded))
      {
        MR_Box STATE_VARIABLE_Acc_18_18;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_U_22, (env).mercury__solutions__builtin_aggregate_4_p_1_env_0__Mutvar_11, &STATE_VARIABLE_Acc_18_18);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_aggregate_4_p_1_env_0__TypeInfo_for_U_22 ;
	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc_18_18 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc_19_19  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
      }
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_1

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc_19_19 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc_17  = (MR_Box) Y;
}
    }
  }
}

void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_1(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_U_12,
  MR_Word Generator_5,
  MR_Word AccumulatorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  mercury__solutions__builtin_aggregate_4_p_2(TypeInfo_for_T_11, TypeInfo_for_U_12, Generator_5, AccumulatorPred_6, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_2_1(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_2_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_2_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_2_2(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_2_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_2_env_0_s *) (env_ptr_arg);

    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2

	MR_Word TrailPtr;

	TrailPtr = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__TrailPtr_10 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2


		{
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

		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_T_21 ;
	SolutionsHeapPtr = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Answer0_12 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 (env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Answer_13  = (MR_Box) NewVal;
}
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_U_22, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Mutvar_11, &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Acc0_14);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__CollectorPred_6, (MR_Integer) 1))));
      func_1(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__CollectorPred_6)), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Answer_13, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Acc0_14, &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Acc1_15);
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_U_22, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Mutvar_11, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Acc1_15);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2


		{
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

		;}
#undef MR_PROC_LABEL
}
      (env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__succeeded = MR_FALSE;
      if ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__succeeded)
        mercury__solutions__builtin_aggregate_4_p_2_1(env_ptr);
    }
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_2_3(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_2_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_2_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__commit_0) == 0)
      {
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__GeneratorPred_5, (MR_Integer) 1))));

          func_0(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__GeneratorPred_5)), &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_2_2, env_ptr);
        }
        (env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__solutions__builtin_aggregate_4_p_2_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_2(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeInfo_for_U_22,
  MR_Word GeneratorPred_5,
  MR_Word CollectorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_16,
  MR_Box * STATE_VARIABLE_Acc_17)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_2_env_0_s env;

    (env).mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_T_21 = TypeInfo_for_T_21;
    (env).mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_U_22 = TypeInfo_for_U_22;
    (env).mercury__solutions__builtin_aggregate_4_p_2_env_0__GeneratorPred_5 = GeneratorPred_5;
    (env).mercury__solutions__builtin_aggregate_4_p_2_env_0__CollectorPred_6 = CollectorPred_6;
    {
      MR_Word SolutionsHeapPtr_9;
      MR_Box STATE_VARIABLE_Acc_19_19;
      MR_Word TypeInfo_for_U_23;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 (env).mercury__solutions__builtin_aggregate_4_p_2_env_0__HeapPtr_8  = HeapPtr;
	 SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (env).mercury__solutions__builtin_aggregate_4_p_2_env_0__TrailPtr_10  = TrailPtr;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_U_22, STATE_VARIABLE_Acc_0_16, &(env).mercury__solutions__builtin_aggregate_4_p_2_env_0__Mutvar_11);
      mercury__solutions__builtin_aggregate_4_p_2_3(&env);
      if (!((env).mercury__solutions__builtin_aggregate_4_p_2_env_0__succeeded))
      {
        MR_Box STATE_VARIABLE_Acc_18_18;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_U_22, (env).mercury__solutions__builtin_aggregate_4_p_2_env_0__Mutvar_11, &STATE_VARIABLE_Acc_18_18);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_aggregate_4_p_2_env_0__TypeInfo_for_U_22 ;
	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc_18_18 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc_19_19  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
      }
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_2

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc_19_19 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc_17  = (MR_Box) Y;
}
    }
  }
}

void MR_CALL 
mercury__solutions__unsorted_aggregate_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_U_12,
  MR_Word Generator_5,
  MR_Word AccumulatorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  mercury__solutions__builtin_aggregate_4_p_0(TypeInfo_for_T_11, TypeInfo_for_U_12, Generator_5, AccumulatorPred_6, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_0_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_0_2(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_0_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_0_env_0_s *) (env_ptr_arg);

    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0

	MR_Word TrailPtr;

	TrailPtr = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__TrailPtr_10 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0


		{
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

		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_T_21 ;
	SolutionsHeapPtr = (env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__HeapPtr_8 ;
	OldVal = (MR_Word) (env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Answer0_12 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 (env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Answer_13  = (MR_Box) NewVal;
}
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_U_22, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Mutvar_11, &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Acc0_14);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__CollectorPred_6, (MR_Integer) 1))));
      func_1(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__CollectorPred_6)), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Answer_13, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Acc0_14, &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Acc1_15);
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_U_22, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Mutvar_11, (env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Acc1_15);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0


		{
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

		;}
#undef MR_PROC_LABEL
}
      (env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__succeeded = MR_FALSE;
      if ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__succeeded)
        mercury__solutions__builtin_aggregate_4_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_0_3(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_0_env_0_s * env_ptr = (struct mercury__solutions__builtin_aggregate_4_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__commit_0) == 0)
      {
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__GeneratorPred_5, (MR_Integer) 1))));

          func_0(((MR_Box) ((env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__GeneratorPred_5)), &(env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__Answer0_12, mercury__solutions__builtin_aggregate_4_p_0_2, env_ptr);
        }
        (env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__solutions__builtin_aggregate_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__solutions__builtin_aggregate_4_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeInfo_for_U_22,
  MR_Word GeneratorPred_5,
  MR_Word CollectorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_16,
  MR_Box * STATE_VARIABLE_Acc_17)
{
  {
    struct mercury__solutions__builtin_aggregate_4_p_0_env_0_s env;

    (env).mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_T_21 = TypeInfo_for_T_21;
    (env).mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_U_22 = TypeInfo_for_U_22;
    (env).mercury__solutions__builtin_aggregate_4_p_0_env_0__GeneratorPred_5 = GeneratorPred_5;
    (env).mercury__solutions__builtin_aggregate_4_p_0_env_0__CollectorPred_6 = CollectorPred_6;
    {
      MR_Word SolutionsHeapPtr_9;
      MR_Box STATE_VARIABLE_Acc_19_19;
      MR_Word TypeInfo_for_U_23;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 (env).mercury__solutions__builtin_aggregate_4_p_0_env_0__HeapPtr_8  = HeapPtr;
	 SolutionsHeapPtr_9  = SolutionsHeapPtr;
	 (env).mercury__solutions__builtin_aggregate_4_p_0_env_0__TrailPtr_10  = TrailPtr;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_U_22, STATE_VARIABLE_Acc_0_16, &(env).mercury__solutions__builtin_aggregate_4_p_0_env_0__Mutvar_11);
      mercury__solutions__builtin_aggregate_4_p_0_3(&env);
      if (!((env).mercury__solutions__builtin_aggregate_4_p_0_env_0__succeeded))
      {
        MR_Box STATE_VARIABLE_Acc_18_18;

{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_U_22, (env).mercury__solutions__builtin_aggregate_4_p_0_env_0__Mutvar_11, &STATE_VARIABLE_Acc_18_18);
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_aggregate_4_p_0_env_0__TypeInfo_for_U_22 ;
	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
	OldVal = (MR_Word) STATE_VARIABLE_Acc_18_18 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Acc_19_19  = (MR_Box) NewVal;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_9 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
      }
{
#define MR_PROC_LABEL mercury__solutions__builtin_aggregate_4_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) STATE_VARIABLE_Acc_19_19 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Acc_17  = (MR_Box) Y;
}
    }
  }
}

void MR_CALL 
mercury__solutions__aggregate2_6_p_3(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeInfo_for_U_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word Generator_7,
  MR_Word AccumulatorPred_8,
  MR_Box STATE_VARIABLE_Acc1_0_12,
  MR_Box * STATE_VARIABLE_Acc1_13,
  MR_Box STATE_VARIABLE_Acc2_0_14,
  MR_Box * STATE_VARIABLE_Acc2_15)
{
  {
    MR_Word Solutions_11;
    MR_Word UnsortedList_24;
    MR_Integer Var_27;

    mercury__solutions__builtin_solutions_2_p_1(TypeInfo_for_T_18, Generator_7, &UnsortedList_24);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T_18, UnsortedList_24, (MR_Integer) 0, &Var_27);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_18, Var_27, UnsortedList_24, &Solutions_11);
    mercury__list__foldl2_6_p_0(TypeInfo_for_T_18, TypeInfo_for_U_19, TypeInfo_for_V_20, AccumulatorPred_8, Solutions_11, STATE_VARIABLE_Acc1_0_12, STATE_VARIABLE_Acc1_13, STATE_VARIABLE_Acc2_0_14, STATE_VARIABLE_Acc2_15);
  }
}

void MR_CALL 
mercury__solutions__aggregate2_6_p_2(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeInfo_for_U_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word Generator_7,
  MR_Word AccumulatorPred_8,
  MR_Box STATE_VARIABLE_Acc1_0_12,
  MR_Box * STATE_VARIABLE_Acc1_13,
  MR_Box STATE_VARIABLE_Acc2_0_14,
  MR_Box * STATE_VARIABLE_Acc2_15)
{
  {
    MR_Word Solutions_11;
    MR_Word UnsortedList_24;
    MR_Integer Var_27;

    mercury__solutions__builtin_solutions_2_p_1(TypeInfo_for_T_18, Generator_7, &UnsortedList_24);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T_18, UnsortedList_24, (MR_Integer) 0, &Var_27);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_18, Var_27, UnsortedList_24, &Solutions_11);
    mercury__list__foldl2_6_p_2(TypeInfo_for_T_18, TypeInfo_for_U_19, TypeInfo_for_V_20, AccumulatorPred_8, Solutions_11, STATE_VARIABLE_Acc1_0_12, STATE_VARIABLE_Acc1_13, STATE_VARIABLE_Acc2_0_14, STATE_VARIABLE_Acc2_15);
  }
}

void MR_CALL 
mercury__solutions__aggregate2_6_p_1(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeInfo_for_U_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word Generator_7,
  MR_Word AccumulatorPred_8,
  MR_Box STATE_VARIABLE_Acc1_0_12,
  MR_Box * STATE_VARIABLE_Acc1_13,
  MR_Box STATE_VARIABLE_Acc2_0_14,
  MR_Box * STATE_VARIABLE_Acc2_15)
{
  {
    MR_Word Solutions_11;

    mercury__solutions__solutions_2_p_0(TypeInfo_for_T_18, Generator_7, &Solutions_11);
    mercury__list__foldl2_6_p_2(TypeInfo_for_T_18, TypeInfo_for_U_19, TypeInfo_for_V_20, AccumulatorPred_8, Solutions_11, STATE_VARIABLE_Acc1_0_12, STATE_VARIABLE_Acc1_13, STATE_VARIABLE_Acc2_0_14, STATE_VARIABLE_Acc2_15);
  }
}

void MR_CALL 
mercury__solutions__aggregate2_6_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeInfo_for_U_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word Generator_7,
  MR_Word AccumulatorPred_8,
  MR_Box STATE_VARIABLE_Acc1_0_12,
  MR_Box * STATE_VARIABLE_Acc1_13,
  MR_Box STATE_VARIABLE_Acc2_0_14,
  MR_Box * STATE_VARIABLE_Acc2_15)
{
  {
    MR_Word Solutions_11;

    mercury__solutions__solutions_2_p_0(TypeInfo_for_T_18, Generator_7, &Solutions_11);
    mercury__list__foldl2_6_p_0(TypeInfo_for_T_18, TypeInfo_for_U_19, TypeInfo_for_V_20, AccumulatorPred_8, Solutions_11, STATE_VARIABLE_Acc1_0_12, STATE_VARIABLE_Acc1_13, STATE_VARIABLE_Acc2_0_14, STATE_VARIABLE_Acc2_15);
  }
}

void MR_CALL 
mercury__solutions__aggregate_4_p_3(
  MR_Word TypeInfo_for_T_12,
  MR_Word TypeInfo_for_U_13,
  MR_Word Generator_5,
  MR_Word AccumulatorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_9,
  MR_Box * STATE_VARIABLE_Acc_10)
{
  {
    MR_Word Solutions_8;
    MR_Word UnsortedList_17;
    MR_Integer Var_20;

    mercury__solutions__builtin_solutions_2_p_1(TypeInfo_for_T_12, Generator_5, &UnsortedList_17);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T_12, UnsortedList_17, (MR_Integer) 0, &Var_20);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_12, Var_20, UnsortedList_17, &Solutions_8);
    mercury__list__foldl_4_p_0(TypeInfo_for_T_12, TypeInfo_for_U_13, AccumulatorPred_6, Solutions_8, STATE_VARIABLE_Acc_0_9, STATE_VARIABLE_Acc_10);
  }
}

void MR_CALL 
mercury__solutions__aggregate_4_p_2(
  MR_Word TypeInfo_for_T_12,
  MR_Word TypeInfo_for_U_13,
  MR_Word Generator_5,
  MR_Word AccumulatorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_9,
  MR_Box * STATE_VARIABLE_Acc_10)
{
  {
    MR_Word Solutions_8;
    MR_Word UnsortedList_17;
    MR_Integer Var_20;

    mercury__solutions__builtin_solutions_2_p_1(TypeInfo_for_T_12, Generator_5, &UnsortedList_17);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T_12, UnsortedList_17, (MR_Integer) 0, &Var_20);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_12, Var_20, UnsortedList_17, &Solutions_8);
    mercury__list__foldl_4_p_2(TypeInfo_for_T_12, TypeInfo_for_U_13, AccumulatorPred_6, Solutions_8, STATE_VARIABLE_Acc_0_9, STATE_VARIABLE_Acc_10);
  }
}

void MR_CALL 
mercury__solutions__aggregate_4_p_1(
  MR_Word TypeInfo_for_T_12,
  MR_Word TypeInfo_for_U_13,
  MR_Word Generator_5,
  MR_Word AccumulatorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_9,
  MR_Box * STATE_VARIABLE_Acc_10)
{
  {
    MR_Word Solutions_8;

    mercury__solutions__solutions_2_p_0(TypeInfo_for_T_12, Generator_5, &Solutions_8);
    mercury__list__foldl_4_p_2(TypeInfo_for_T_12, TypeInfo_for_U_13, AccumulatorPred_6, Solutions_8, STATE_VARIABLE_Acc_0_9, STATE_VARIABLE_Acc_10);
  }
}

void MR_CALL 
mercury__solutions__aggregate_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word TypeInfo_for_U_13,
  MR_Word Generator_5,
  MR_Word AccumulatorPred_6,
  MR_Box STATE_VARIABLE_Acc_0_9,
  MR_Box * STATE_VARIABLE_Acc_10)
{
  {
    MR_Word Solutions_8;

    mercury__solutions__solutions_2_p_0(TypeInfo_for_T_12, Generator_5, &Solutions_8);
    mercury__list__foldl_4_p_0(TypeInfo_for_T_12, TypeInfo_for_U_13, AccumulatorPred_6, Solutions_8, STATE_VARIABLE_Acc_0_9, STATE_VARIABLE_Acc_10);
  }
}

MR_Box MR_CALL 
mercury__solutions__aggregate_3_f_1(
  MR_Word TypeInfo_for_T_19,
  MR_Word TypeInfo_for_U_20,
  MR_Word P_5,
  MR_Word F_6,
  MR_Box Acc0_7)
{
  {
    MR_Box Acc_8;
    MR_Word Solutions_26;
    MR_Word UnsortedList_31;
    MR_Integer Var_34;

    mercury__solutions__builtin_solutions_2_p_1(TypeInfo_for_T_19, P_5, &UnsortedList_31);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T_19, UnsortedList_31, (MR_Integer) 0, &Var_34);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_19, Var_34, UnsortedList_31, &Solutions_26);
    mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(F_6, Solutions_26, Acc0_7, &Acc_8);
    return Acc_8;
  }
}

static void MR_CALL 
mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word Var_18,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Box Var_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_13;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

      Var_13 = func_0(((MR_Box) (Var_18)), Var_9, HeadVar__3_3);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__solutions__aggregate_3_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word TypeInfo_for_U_20,
  MR_Word P_5,
  MR_Word F_6,
  MR_Box Acc0_7)
{
  {
    MR_Box Acc_8;
    MR_Word Solutions_26;

    mercury__solutions__solutions_2_p_0(TypeInfo_for_T_19, P_5, &Solutions_26);
    mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(F_6, Solutions_26, Acc0_7, &Acc_8);
    return Acc_8;
  }
}

static void MR_CALL 
mercury__solutions__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word Var_18,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Box Var_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_13;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

      Var_13 = func_0(((MR_Box) (Var_18)), Var_9, HeadVar__3_3);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__solutions__unsorted_solutions_2_p_1(
  MR_Word TypeInfo_for_T_5,
  MR_Word Pred_3,
  MR_Word * List_4)
{
  mercury__solutions__builtin_solutions_2_p_1(TypeInfo_for_T_5, Pred_3, List_4);
}

void MR_CALL 
mercury__solutions__unsorted_solutions_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Pred_3,
  MR_Word * List_4)
{
  mercury__solutions__builtin_solutions_2_p_0(TypeInfo_for_T_5, Pred_3, List_4);
}

void MR_CALL 
mercury__solutions__solutions_set_2_p_1(
  MR_Word TypeInfo_for_T_6,
  MR_Word Pred_3,
  MR_Word * Set_4)
{
  {
    MR_Word List_5;
    MR_Word Var_10;
    MR_Integer Var_13;

    mercury__solutions__builtin_solutions_2_p_1(TypeInfo_for_T_6, Pred_3, &List_5);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T_6, List_5, (MR_Integer) 0, &Var_13);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_6, Var_13, List_5, &Var_10);
    *Set_4 = (MR_Word) (Var_10);
  }
}

void MR_CALL 
mercury__solutions__solutions_set_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word Pred_3,
  MR_Word * Set_4)
{
  {
    MR_Word List_5;
    MR_Word Var_10;
    MR_Integer Var_13;

    mercury__solutions__builtin_solutions_2_p_0(TypeInfo_for_T_6, Pred_3, &List_5);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T_6, List_5, (MR_Integer) 0, &Var_13);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_6, Var_13, List_5, &Var_10);
    *Set_4 = (MR_Word) (Var_10);
  }
}

MR_Word MR_CALL 
mercury__solutions__solutions_set_1_f_1(
  MR_Word TypeInfo_for_T_5,
  MR_Word P_3)
{
  {
    MR_Word S_4;
    MR_Word List_8;
    MR_Word Var_12;
    MR_Integer Var_15;

    mercury__solutions__builtin_solutions_2_p_1(TypeInfo_for_T_5, P_3, &List_8);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, List_8, (MR_Integer) 0, &Var_15);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_5, Var_15, List_8, &Var_12);
    S_4 = (MR_Word) (Var_12);
    return S_4;
  }
}

MR_Word MR_CALL 
mercury__solutions__solutions_set_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word P_3)
{
  {
    MR_Word S_4;
    MR_Word List_8;
    MR_Word Var_12;
    MR_Integer Var_15;

    mercury__solutions__builtin_solutions_2_p_0(TypeInfo_for_T_5, P_3, &List_8);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, List_8, (MR_Integer) 0, &Var_15);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_5, Var_15, List_8, &Var_12);
    S_4 = (MR_Word) (Var_12);
    return S_4;
  }
}

MR_Word MR_CALL 
mercury__solutions__solutions_1_f_1(
  MR_Word TypeInfo_for_T_5,
  MR_Word P_3)
{
  {
    MR_Word S_4;
    MR_Word UnsortedList_9;
    MR_Integer Var_12;

    mercury__solutions__builtin_solutions_2_p_1(TypeInfo_for_T_5, P_3, &UnsortedList_9);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, UnsortedList_9, (MR_Integer) 0, &Var_12);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_5, Var_12, UnsortedList_9, &S_4);
    return S_4;
  }
}

MR_Word MR_CALL 
mercury__solutions__solutions_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word P_3)
{
  {
    MR_Word S_4;

    mercury__solutions__solutions_2_p_0(TypeInfo_for_T_5, P_3, &S_4);
    return S_4;
  }
}

void MR_CALL 
mercury__solutions__solutions_2_p_1(
  MR_Word TypeInfo_for_T_7,
  MR_Word Pred_3,
  MR_Word * List_4)
{
  {
    MR_Word UnsortedList_6;
    MR_Integer Var_10;

    mercury__solutions__builtin_solutions_2_p_1(TypeInfo_for_T_7, Pred_3, &UnsortedList_6);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T_7, UnsortedList_6, (MR_Integer) 0, &Var_10);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_7, Var_10, UnsortedList_6, List_4);
  }
}

static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_1_1(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_solutions_2_p_1_env_0_s * env_ptr = (struct mercury__solutions__builtin_solutions_2_p_1_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_1_2(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_solutions_2_p_1_env_0_s * env_ptr = (struct mercury__solutions__builtin_solutions_2_p_1_env_0_s *) (env_ptr_arg);

    {
      MR_Box conv2_Acc0_25;

{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1

	MR_Word TrailPtr;

	TrailPtr = (env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__TrailPtr_21 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1


		{
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

		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_for_T_8 ;
	SolutionsHeapPtr = (env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__HeapPtr_19 ;
	OldVal = (MR_Word) (env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Answer0_23 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 (env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Answer_24  = (MR_Box) NewVal;
}
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_13_13, (MR_Word) ((env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Mutvar_22), &conv2_Acc0_25);
      (env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Acc0_25 = ((MR_Word) (conv2_Acc0_25));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        (env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Acc1_26 = base;
        MR_hl_field(MR_mktag(1), base, 0) = (env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Answer_24;
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Acc0_25));
      }
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_13_13, (MR_Word) ((env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Mutvar_22), ((MR_Box) ((env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Acc1_26)));
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1


		{
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

		;}
#undef MR_PROC_LABEL
}
      (env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__succeeded = MR_FALSE;
      if ((env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__succeeded)
        mercury__solutions__builtin_solutions_2_p_1_1(env_ptr);
    }
  }
}

static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_1_3(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_solutions_2_p_1_env_0_s * env_ptr = (struct mercury__solutions__builtin_solutions_2_p_1_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__commit_0) == 0)
      {
        {
          void MR_CALL (* func_1)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Generator_3, (MR_Integer) 1))));

          func_1(((MR_Box) ((env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Generator_3)), &(env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__Answer0_23, mercury__solutions__builtin_solutions_2_p_1_2, env_ptr);
        }
        (env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__solutions__builtin_solutions_2_p_1_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__solutions__builtin_solutions_2_p_1(
  MR_Word TypeInfo_for_T_8,
  MR_Word Generator_3,
  MR_Word * UnsortedList_4)
{
  {
    struct mercury__solutions__builtin_solutions_2_p_1_env_0_s env;

    (env).mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_for_T_8 = TypeInfo_for_T_8;
    (env).mercury__solutions__builtin_solutions_2_p_1_env_0__Generator_3 = Generator_3;
    {
      MR_Word SolutionsHeapPtr_20;
      MR_Word STATE_VARIABLE_Acc_19_28;
      MR_Word conv0_Mutvar_22;
      MR_Word TypeInfo_13_42;
      MR_Box conv5_Y;

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        (env).mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_13_13 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((env).mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_for_T_8));
      }
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 (env).mercury__solutions__builtin_solutions_2_p_1_env_0__HeapPtr_19  = HeapPtr;
	 SolutionsHeapPtr_20  = SolutionsHeapPtr;
	 (env).mercury__solutions__builtin_solutions_2_p_1_env_0__TrailPtr_21  = TrailPtr;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_13_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv0_Mutvar_22);
      (env).mercury__solutions__builtin_solutions_2_p_1_env_0__Mutvar_22 = (MR_Word) (conv0_Mutvar_22);
      mercury__solutions__builtin_solutions_2_p_1_3(&env);
      if (!((env).mercury__solutions__builtin_solutions_2_p_1_env_0__succeeded))
      {
        MR_Word STATE_VARIABLE_Acc_18_27;
        MR_Box conv3_STATE_VARIABLE_Acc_18_27;
        MR_Box conv4_NewVal;

{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_13_13, (MR_Word) ((env).mercury__solutions__builtin_solutions_2_p_1_env_0__Mutvar_22), &conv3_STATE_VARIABLE_Acc_18_27);
        STATE_VARIABLE_Acc_18_27 = ((MR_Word) (conv3_STATE_VARIABLE_Acc_18_27));
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_solutions_2_p_1_env_0__TypeInfo_13_13 ;
	SolutionsHeapPtr = SolutionsHeapPtr_20 ;
	OldVal = (MR_Word) ((MR_Box) (STATE_VARIABLE_Acc_18_27)) ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 conv4_NewVal  = (MR_Box) NewVal;
        STATE_VARIABLE_Acc_19_28 = ((MR_Word) (conv4_NewVal));
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_20 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
      }
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_1

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (STATE_VARIABLE_Acc_19_28)) ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 conv5_Y  = (MR_Box) Y;
      *UnsortedList_4 = ((MR_Word) (conv5_Y));
}
    }
  }
}

void MR_CALL 
mercury__solutions__solutions_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Pred_3,
  MR_Word * List_4)
{
  {
    MR_Word List0_5;
    MR_Word UnsortedList_6;
    MR_Integer Var_10;

    mercury__solutions__builtin_solutions_2_p_0(TypeInfo_for_T_7, Pred_3, &UnsortedList_6);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T_7, UnsortedList_6, (MR_Integer) 0, &Var_10);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_7, Var_10, UnsortedList_6, &List0_5);
    if ((List0_5 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140solutions.assert_num_solutions\'/3", (MR_String) "no solutions");
        return;
      }
    else
      *List_4 = List0_5;
  }
}

static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_solutions_2_p_0_env_0_s * env_ptr = (struct mercury__solutions__builtin_solutions_2_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_0_2(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_solutions_2_p_0_env_0_s * env_ptr = (struct mercury__solutions__builtin_solutions_2_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Box conv2_Acc0_25;

{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0

	MR_Word TrailPtr;

	TrailPtr = (env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__TrailPtr_21 ;
		{

#ifdef MR_USE_TRAIL
    // Check for outstanding delayed goals (``floundering'').
    MR_reset_ticket(TrailPtr, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0


		{
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

		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_for_T_8 ;
	SolutionsHeapPtr = (env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__HeapPtr_19 ;
	OldVal = (MR_Word) (env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Answer0_23 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 (env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Answer_24  = (MR_Box) NewVal;
}
      mercury__mutvar__get_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_13_13, (MR_Word) ((env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Mutvar_22), &conv2_Acc0_25);
      (env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Acc0_25 = ((MR_Word) (conv2_Acc0_25));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        (env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Acc1_26 = base;
        MR_hl_field(MR_mktag(1), base, 0) = (env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Answer_24;
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Acc0_25));
      }
      mercury__mutvar__set_mutvar_2_p_0((env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_13_13, (MR_Word) ((env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Mutvar_22), ((MR_Box) ((env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Acc1_26)));
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0


		{
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

		;}
#undef MR_PROC_LABEL
}
      (env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__succeeded = MR_FALSE;
      if ((env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__succeeded)
        mercury__solutions__builtin_solutions_2_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
mercury__solutions__builtin_solutions_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct mercury__solutions__builtin_solutions_2_p_0_env_0_s * env_ptr = (struct mercury__solutions__builtin_solutions_2_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__commit_0) == 0)
      {
        {
          void MR_CALL (* func_1)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Generator_3, (MR_Integer) 1))));

          func_1(((MR_Box) ((env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Generator_3)), &(env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__Answer0_23, mercury__solutions__builtin_solutions_2_p_0_2, env_ptr);
        }
        (env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__solutions__builtin_solutions_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__solutions__builtin_solutions_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Generator_3,
  MR_Word * UnsortedList_4)
{
  {
    struct mercury__solutions__builtin_solutions_2_p_0_env_0_s env;

    (env).mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_for_T_8 = TypeInfo_for_T_8;
    (env).mercury__solutions__builtin_solutions_2_p_0_env_0__Generator_3 = Generator_3;
    {
      MR_Word UnsortedList0_5;
      MR_Word SolutionsHeapPtr_20;
      MR_Word STATE_VARIABLE_Acc_19_28;
      MR_Word conv0_Mutvar_22;
      MR_Word TypeInfo_13_42;
      MR_Box conv5_Y;

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        (env).mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_13_13 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((env).mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_for_T_8));
      }
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0

	MR_Word HeapPtr;
	MR_Word SolutionsHeapPtr;
	MR_Word TrailPtr;

		{

    // Save heap states.
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    // Save trail state.
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 (env).mercury__solutions__builtin_solutions_2_p_0_env_0__HeapPtr_19  = HeapPtr;
	 SolutionsHeapPtr_20  = SolutionsHeapPtr;
	 (env).mercury__solutions__builtin_solutions_2_p_0_env_0__TrailPtr_21  = TrailPtr;
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__mutvar__new_mutvar_2_p_0((env).mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_13_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv0_Mutvar_22);
      (env).mercury__solutions__builtin_solutions_2_p_0_env_0__Mutvar_22 = (MR_Word) (conv0_Mutvar_22);
      mercury__solutions__builtin_solutions_2_p_0_3(&env);
      if (!((env).mercury__solutions__builtin_solutions_2_p_0_env_0__succeeded))
      {
        MR_Word STATE_VARIABLE_Acc_18_27;
        MR_Box conv3_STATE_VARIABLE_Acc_18_27;
        MR_Box conv4_NewVal;

{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0


		{

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__mutvar__get_mutvar_2_p_0((env).mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_13_13, (MR_Word) ((env).mercury__solutions__builtin_solutions_2_p_0_env_0__Mutvar_22), &conv3_STATE_VARIABLE_Acc_18_27);
        STATE_VARIABLE_Acc_18_27 = ((MR_Word) (conv3_STATE_VARIABLE_Acc_18_27));
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word SolutionsHeapPtr;
	MR_Word OldVal;
	MR_Word NewVal;

	TypeInfo_for_T = (env).mercury__solutions__builtin_solutions_2_p_0_env_0__TypeInfo_13_13 ;
	SolutionsHeapPtr = SolutionsHeapPtr_20 ;
	OldVal = (MR_Word) ((MR_Box) (STATE_VARIABLE_Acc_18_27)) ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 conv4_NewVal  = (MR_Box) NewVal;
        STATE_VARIABLE_Acc_19_28 = ((MR_Word) (conv4_NewVal));
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0

	MR_Word SolutionsHeapPtr;

	SolutionsHeapPtr = SolutionsHeapPtr_20 ;
		{

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
      }
{
#define MR_PROC_LABEL mercury__solutions__builtin_solutions_2_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (STATE_VARIABLE_Acc_19_28)) ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 conv5_Y  = (MR_Box) Y;
      UnsortedList0_5 = ((MR_Word) (conv5_Y));
}
      if ((UnsortedList0_5 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140solutions.assert_num_solutions\'/3", (MR_String) "no solutions");
          return;
        }
      else
        *UnsortedList_4 = UnsortedList0_5;
    }
  }
}

static MR_bool MR_CALL 
mercury__solutions____Unify____heap_ptr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__solutions____Unify____heap_ptr_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__solutions____Compare____heap_ptr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__solutions____Compare____heap_ptr_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__solutions____Unify____trail_ptr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__solutions____Unify____trail_ptr_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__solutions____Compare____trail_ptr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__solutions____Compare____trail_ptr_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__solutions__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module solutions.
