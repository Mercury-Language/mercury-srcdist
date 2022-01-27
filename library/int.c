/*
** Automatically generated from `int.m'
** by the Mercury compiler,
** version rotd-2014-12-08
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


/* :- module int. */
/* :- implementation. */

/*
INIT mercury__int__init
ENDINIT
*/

#include "int.mih"


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



#line 404 "int.m"
struct mercury__int__fold_down3_9_p_9_env_0_s {
#line 404 "int.m"
  MR_Word mercury__int__fold_down3_9_p_9_env_0__TypeInfo_for_T_30;
#line 404 "int.m"
  MR_Word mercury__int__fold_down3_9_p_9_env_0__TypeInfo_for_U_31;
#line 404 "int.m"
  MR_Word mercury__int__fold_down3_9_p_9_env_0__TypeInfo_for_V_32;
#line 404 "int.m"
  MR_Word mercury__int__fold_down3_9_p_9_env_0__P_10;
#line 404 "int.m"
  MR_Integer mercury__int__fold_down3_9_p_9_env_0__Lo_11;
#line 404 "int.m"
  MR_Integer mercury__int__fold_down3_9_p_9_env_0__Hi_12;
#line 404 "int.m"
  MR_Box * mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_A_17;
#line 404 "int.m"
  MR_Box * mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_B_19;
#line 404 "int.m"
  MR_Box * mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_C_21;
#line 404 "int.m"
  MR_Cont mercury__int__fold_down3_9_p_9_env_0__cont;
#line 404 "int.m"
  void * mercury__int__fold_down3_9_p_9_env_0__cont_env_ptr;
#line 913 "int.m"
  MR_Box mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_A_22_22;
#line 913 "int.m"
  MR_Box mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_B_23_23;
#line 913 "int.m"
  MR_Box mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_C_24_24;
#line 913 "int.m"
  MR_Integer mercury__int__fold_down3_9_p_9_env_0__V_25_25;
#line 913 "int.m"
  MR_Integer mercury__int__fold_down3_9_p_9_env_0__V_29_29;
#line 404 "int.m"
};

#line 402 "int.m"
struct mercury__int__fold_down3_9_p_8_env_0_s {
#line 402 "int.m"
  MR_Word mercury__int__fold_down3_9_p_8_env_0__TypeInfo_for_T_30;
#line 402 "int.m"
  MR_Word mercury__int__fold_down3_9_p_8_env_0__TypeInfo_for_U_31;
#line 402 "int.m"
  MR_Word mercury__int__fold_down3_9_p_8_env_0__TypeInfo_for_V_32;
#line 402 "int.m"
  MR_Word mercury__int__fold_down3_9_p_8_env_0__P_10;
#line 402 "int.m"
  MR_Integer mercury__int__fold_down3_9_p_8_env_0__Lo_11;
#line 402 "int.m"
  MR_Integer mercury__int__fold_down3_9_p_8_env_0__Hi_12;
#line 402 "int.m"
  MR_Box * mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_A_17;
#line 402 "int.m"
  MR_Box * mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_B_19;
#line 402 "int.m"
  MR_Box * mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_C_21;
#line 402 "int.m"
  MR_Cont mercury__int__fold_down3_9_p_8_env_0__cont;
#line 402 "int.m"
  void * mercury__int__fold_down3_9_p_8_env_0__cont_env_ptr;
#line 913 "int.m"
  MR_Box mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_A_22_22;
#line 913 "int.m"
  MR_Box mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_B_23_23;
#line 913 "int.m"
  MR_Box mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_C_24_24;
#line 913 "int.m"
  MR_Integer mercury__int__fold_down3_9_p_8_env_0__V_25_25;
#line 913 "int.m"
  MR_Integer mercury__int__fold_down3_9_p_8_env_0__V_29_29;
#line 402 "int.m"
};

#line 377 "int.m"
struct mercury__int__fold_up3_9_p_9_env_0_s {
#line 377 "int.m"
  MR_Word mercury__int__fold_up3_9_p_9_env_0__TypeInfo_for_T_30;
#line 377 "int.m"
  MR_Word mercury__int__fold_up3_9_p_9_env_0__TypeInfo_for_U_31;
#line 377 "int.m"
  MR_Word mercury__int__fold_up3_9_p_9_env_0__TypeInfo_for_V_32;
#line 377 "int.m"
  MR_Word mercury__int__fold_up3_9_p_9_env_0__P_10;
#line 377 "int.m"
  MR_Integer mercury__int__fold_up3_9_p_9_env_0__Lo_11;
#line 377 "int.m"
  MR_Integer mercury__int__fold_up3_9_p_9_env_0__Hi_12;
#line 377 "int.m"
  MR_Box * mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_A_17;
#line 377 "int.m"
  MR_Box * mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_B_19;
#line 377 "int.m"
  MR_Box * mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_C_21;
#line 377 "int.m"
  MR_Cont mercury__int__fold_up3_9_p_9_env_0__cont;
#line 377 "int.m"
  void * mercury__int__fold_up3_9_p_9_env_0__cont_env_ptr;
#line 890 "int.m"
  MR_Box mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_A_22_22;
#line 890 "int.m"
  MR_Box mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_B_23_23;
#line 890 "int.m"
  MR_Box mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_C_24_24;
#line 890 "int.m"
  MR_Integer mercury__int__fold_up3_9_p_9_env_0__V_25_25;
#line 890 "int.m"
  MR_Integer mercury__int__fold_up3_9_p_9_env_0__V_29_29;
#line 377 "int.m"
};

#line 375 "int.m"
struct mercury__int__fold_up3_9_p_8_env_0_s {
#line 375 "int.m"
  MR_Word mercury__int__fold_up3_9_p_8_env_0__TypeInfo_for_T_30;
#line 375 "int.m"
  MR_Word mercury__int__fold_up3_9_p_8_env_0__TypeInfo_for_U_31;
#line 375 "int.m"
  MR_Word mercury__int__fold_up3_9_p_8_env_0__TypeInfo_for_V_32;
#line 375 "int.m"
  MR_Word mercury__int__fold_up3_9_p_8_env_0__P_10;
#line 375 "int.m"
  MR_Integer mercury__int__fold_up3_9_p_8_env_0__Lo_11;
#line 375 "int.m"
  MR_Integer mercury__int__fold_up3_9_p_8_env_0__Hi_12;
#line 375 "int.m"
  MR_Box * mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_A_17;
#line 375 "int.m"
  MR_Box * mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_B_19;
#line 375 "int.m"
  MR_Box * mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_C_21;
#line 375 "int.m"
  MR_Cont mercury__int__fold_up3_9_p_8_env_0__cont;
#line 375 "int.m"
  void * mercury__int__fold_up3_9_p_8_env_0__cont_env_ptr;
#line 890 "int.m"
  MR_Box mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_A_22_22;
#line 890 "int.m"
  MR_Box mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_B_23_23;
#line 890 "int.m"
  MR_Box mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_C_24_24;
#line 890 "int.m"
  MR_Integer mercury__int__fold_up3_9_p_8_env_0__V_25_25;
#line 890 "int.m"
  MR_Integer mercury__int__fold_up3_9_p_8_env_0__V_29_29;
#line 375 "int.m"
};

#line 350 "int.m"
struct mercury__int__fold_down2_7_p_8_env_0_s {
#line 350 "int.m"
  MR_Word mercury__int__fold_down2_7_p_8_env_0__TypeInfo_for_T_23;
#line 350 "int.m"
  MR_Word mercury__int__fold_down2_7_p_8_env_0__TypeInfo_for_U_24;
#line 350 "int.m"
  MR_Word mercury__int__fold_down2_7_p_8_env_0__P_8;
#line 350 "int.m"
  MR_Integer mercury__int__fold_down2_7_p_8_env_0__Lo_9;
#line 350 "int.m"
  MR_Integer mercury__int__fold_down2_7_p_8_env_0__Hi_10;
#line 350 "int.m"
  MR_Box * mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_A_14;
#line 350 "int.m"
  MR_Box * mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_B_16;
#line 350 "int.m"
  MR_Cont mercury__int__fold_down2_7_p_8_env_0__cont;
#line 350 "int.m"
  void * mercury__int__fold_down2_7_p_8_env_0__cont_env_ptr;
#line 907 "int.m"
  MR_Box mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_A_17_17;
#line 907 "int.m"
  MR_Box mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_B_18_18;
#line 907 "int.m"
  MR_Integer mercury__int__fold_down2_7_p_8_env_0__V_19_19;
#line 907 "int.m"
  MR_Integer mercury__int__fold_down2_7_p_8_env_0__V_22_22;
#line 350 "int.m"
};

#line 348 "int.m"
struct mercury__int__fold_down2_7_p_7_env_0_s {
#line 348 "int.m"
  MR_Word mercury__int__fold_down2_7_p_7_env_0__TypeInfo_for_T_23;
#line 348 "int.m"
  MR_Word mercury__int__fold_down2_7_p_7_env_0__TypeInfo_for_U_24;
#line 348 "int.m"
  MR_Word mercury__int__fold_down2_7_p_7_env_0__P_8;
#line 348 "int.m"
  MR_Integer mercury__int__fold_down2_7_p_7_env_0__Lo_9;
#line 348 "int.m"
  MR_Integer mercury__int__fold_down2_7_p_7_env_0__Hi_10;
#line 348 "int.m"
  MR_Box * mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_A_14;
#line 348 "int.m"
  MR_Box * mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_B_16;
#line 348 "int.m"
  MR_Cont mercury__int__fold_down2_7_p_7_env_0__cont;
#line 348 "int.m"
  void * mercury__int__fold_down2_7_p_7_env_0__cont_env_ptr;
#line 907 "int.m"
  MR_Box mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_A_17_17;
#line 907 "int.m"
  MR_Box mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_B_18_18;
#line 907 "int.m"
  MR_Integer mercury__int__fold_down2_7_p_7_env_0__V_19_19;
#line 907 "int.m"
  MR_Integer mercury__int__fold_down2_7_p_7_env_0__V_22_22;
#line 348 "int.m"
};

#line 325 "int.m"
struct mercury__int__fold_up2_7_p_9_env_0_s {
#line 325 "int.m"
  MR_Word mercury__int__fold_up2_7_p_9_env_0__TypeInfo_for_T_23;
#line 325 "int.m"
  MR_Word mercury__int__fold_up2_7_p_9_env_0__TypeInfo_for_U_24;
#line 325 "int.m"
  MR_Word mercury__int__fold_up2_7_p_9_env_0__P_8;
#line 325 "int.m"
  MR_Integer mercury__int__fold_up2_7_p_9_env_0__Lo_9;
#line 325 "int.m"
  MR_Integer mercury__int__fold_up2_7_p_9_env_0__Hi_10;
#line 325 "int.m"
  MR_Box * mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_A_14;
#line 325 "int.m"
  MR_Box * mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_B_16;
#line 325 "int.m"
  MR_Cont mercury__int__fold_up2_7_p_9_env_0__cont;
#line 325 "int.m"
  void * mercury__int__fold_up2_7_p_9_env_0__cont_env_ptr;
#line 884 "int.m"
  MR_Box mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_A_17_17;
#line 884 "int.m"
  MR_Box mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_B_18_18;
#line 884 "int.m"
  MR_Integer mercury__int__fold_up2_7_p_9_env_0__V_19_19;
#line 884 "int.m"
  MR_Integer mercury__int__fold_up2_7_p_9_env_0__V_22_22;
#line 325 "int.m"
};

#line 323 "int.m"
struct mercury__int__fold_up2_7_p_8_env_0_s {
#line 323 "int.m"
  MR_Word mercury__int__fold_up2_7_p_8_env_0__TypeInfo_for_T_23;
#line 323 "int.m"
  MR_Word mercury__int__fold_up2_7_p_8_env_0__TypeInfo_for_U_24;
#line 323 "int.m"
  MR_Word mercury__int__fold_up2_7_p_8_env_0__P_8;
#line 323 "int.m"
  MR_Integer mercury__int__fold_up2_7_p_8_env_0__Lo_9;
#line 323 "int.m"
  MR_Integer mercury__int__fold_up2_7_p_8_env_0__Hi_10;
#line 323 "int.m"
  MR_Box * mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_A_14;
#line 323 "int.m"
  MR_Box * mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_B_16;
#line 323 "int.m"
  MR_Cont mercury__int__fold_up2_7_p_8_env_0__cont;
#line 323 "int.m"
  void * mercury__int__fold_up2_7_p_8_env_0__cont_env_ptr;
#line 884 "int.m"
  MR_Box mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_A_17_17;
#line 884 "int.m"
  MR_Box mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_B_18_18;
#line 884 "int.m"
  MR_Integer mercury__int__fold_up2_7_p_8_env_0__V_19_19;
#line 884 "int.m"
  MR_Integer mercury__int__fold_up2_7_p_8_env_0__V_22_22;
#line 323 "int.m"
};

#line 288 "int.m"
struct mercury__int__fold_down_5_p_8_env_0_s {
#line 288 "int.m"
  MR_Word mercury__int__fold_down_5_p_8_env_0__TypeInfo_for_T_16;
#line 288 "int.m"
  MR_Word mercury__int__fold_down_5_p_8_env_0__P_6;
#line 288 "int.m"
  MR_Integer mercury__int__fold_down_5_p_8_env_0__Lo_7;
#line 288 "int.m"
  MR_Integer mercury__int__fold_down_5_p_8_env_0__Hi_8;
#line 288 "int.m"
  MR_Box * mercury__int__fold_down_5_p_8_env_0__STATE_VARIABLE_A_11;
#line 288 "int.m"
  MR_Cont mercury__int__fold_down_5_p_8_env_0__cont;
#line 288 "int.m"
  void * mercury__int__fold_down_5_p_8_env_0__cont_env_ptr;
#line 898 "int.m"
  MR_Box mercury__int__fold_down_5_p_8_env_0__STATE_VARIABLE_A_12_12;
#line 898 "int.m"
  MR_Integer mercury__int__fold_down_5_p_8_env_0__V_13_13;
#line 898 "int.m"
  MR_Integer mercury__int__fold_down_5_p_8_env_0__V_15_15;
#line 288 "int.m"
};

#line 286 "int.m"
struct mercury__int__fold_down_5_p_7_env_0_s {
#line 286 "int.m"
  MR_Word mercury__int__fold_down_5_p_7_env_0__TypeInfo_for_T_16;
#line 286 "int.m"
  MR_Word mercury__int__fold_down_5_p_7_env_0__P_6;
#line 286 "int.m"
  MR_Integer mercury__int__fold_down_5_p_7_env_0__Lo_7;
#line 286 "int.m"
  MR_Integer mercury__int__fold_down_5_p_7_env_0__Hi_8;
#line 286 "int.m"
  MR_Box * mercury__int__fold_down_5_p_7_env_0__STATE_VARIABLE_A_11;
#line 286 "int.m"
  MR_Cont mercury__int__fold_down_5_p_7_env_0__cont;
#line 286 "int.m"
  void * mercury__int__fold_down_5_p_7_env_0__cont_env_ptr;
#line 898 "int.m"
  MR_Box mercury__int__fold_down_5_p_7_env_0__STATE_VARIABLE_A_12_12;
#line 898 "int.m"
  MR_Integer mercury__int__fold_down_5_p_7_env_0__V_13_13;
#line 898 "int.m"
  MR_Integer mercury__int__fold_down_5_p_7_env_0__V_15_15;
#line 286 "int.m"
};

#line 257 "int.m"
struct mercury__int__fold_up_5_p_8_env_0_s {
#line 257 "int.m"
  MR_Word mercury__int__fold_up_5_p_8_env_0__TypeInfo_for_T_16;
#line 257 "int.m"
  MR_Word mercury__int__fold_up_5_p_8_env_0__P_6;
#line 257 "int.m"
  MR_Integer mercury__int__fold_up_5_p_8_env_0__Lo_7;
#line 257 "int.m"
  MR_Integer mercury__int__fold_up_5_p_8_env_0__Hi_8;
#line 257 "int.m"
  MR_Box * mercury__int__fold_up_5_p_8_env_0__STATE_VARIABLE_A_11;
#line 257 "int.m"
  MR_Cont mercury__int__fold_up_5_p_8_env_0__cont;
#line 257 "int.m"
  void * mercury__int__fold_up_5_p_8_env_0__cont_env_ptr;
#line 875 "int.m"
  MR_Box mercury__int__fold_up_5_p_8_env_0__STATE_VARIABLE_A_12_12;
#line 875 "int.m"
  MR_Integer mercury__int__fold_up_5_p_8_env_0__V_13_13;
#line 875 "int.m"
  MR_Integer mercury__int__fold_up_5_p_8_env_0__V_15_15;
#line 257 "int.m"
};

#line 255 "int.m"
struct mercury__int__fold_up_5_p_7_env_0_s {
#line 255 "int.m"
  MR_Word mercury__int__fold_up_5_p_7_env_0__TypeInfo_for_T_16;
#line 255 "int.m"
  MR_Word mercury__int__fold_up_5_p_7_env_0__P_6;
#line 255 "int.m"
  MR_Integer mercury__int__fold_up_5_p_7_env_0__Lo_7;
#line 255 "int.m"
  MR_Integer mercury__int__fold_up_5_p_7_env_0__Hi_8;
#line 255 "int.m"
  MR_Box * mercury__int__fold_up_5_p_7_env_0__STATE_VARIABLE_A_11;
#line 255 "int.m"
  MR_Cont mercury__int__fold_up_5_p_7_env_0__cont;
#line 255 "int.m"
  void * mercury__int__fold_up_5_p_7_env_0__cont_env_ptr;
#line 875 "int.m"
  MR_Box mercury__int__fold_up_5_p_7_env_0__STATE_VARIABLE_A_12_12;
#line 875 "int.m"
  MR_Integer mercury__int__fold_up_5_p_7_env_0__V_13_13;
#line 875 "int.m"
  MR_Integer mercury__int__fold_up_5_p_7_env_0__V_15_15;
#line 255 "int.m"
};


#line 462 "int.c"
static MR_Box MR_CALL 
mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__to_int_1_1_f_0_10001(
#line 465 "int.c"
  MR_Box mercury__int__closure_arg,
#line 467 "int.c"
  MR_Box mercury__int__wrapper_arg_1);

#line 470 "int.c"
static MR_bool MR_CALL 
mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__from_int_1_1_f_0_10001(
#line 473 "int.c"
  MR_Box mercury__int__closure_arg,
#line 475 "int.c"
  MR_Box mercury__int__wrapper_arg_1,
#line 477 "int.c"
  MR_Box * mercury__int__wrapper_arg_2);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__int__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 689 "int.m"
static void MR_CALL 
mercury__int__log2_2_3_p_0(
#line 689 "int.m"
  MR_Integer mercury__int__X_4,
#line 689 "int.m"
  MR_Integer mercury__int__N0_5,
#line 689 "int.m"
  MR_Integer * mercury__int__N_6);

#line 664 "int.m"
static MR_Integer MR_CALL 
mercury__int__multiply_by_pow_3_f_0(
#line 664 "int.m"
  MR_Integer mercury__int__Scale0_5,
#line 664 "int.m"
  MR_Integer mercury__int__Base_6,
#line 664 "int.m"
  MR_Integer mercury__int__Exp_7);

#line 913 "int.m"
static void MR_CALL 
mercury__int__fold_down3_9_p_9_1(
#line 913 "int.m"
  void * mercury__int__env_ptr_arg);

#line 913 "int.m"
static void MR_CALL 
mercury__int__fold_down3_9_p_8_1(
#line 913 "int.m"
  void * mercury__int__env_ptr_arg);

#line 890 "int.m"
static void MR_CALL 
mercury__int__fold_up3_9_p_9_1(
#line 890 "int.m"
  void * mercury__int__env_ptr_arg);

#line 890 "int.m"
static void MR_CALL 
mercury__int__fold_up3_9_p_8_1(
#line 890 "int.m"
  void * mercury__int__env_ptr_arg);

#line 907 "int.m"
static void MR_CALL 
mercury__int__fold_down2_7_p_8_1(
#line 907 "int.m"
  void * mercury__int__env_ptr_arg);

#line 907 "int.m"
static void MR_CALL 
mercury__int__fold_down2_7_p_7_1(
#line 907 "int.m"
  void * mercury__int__env_ptr_arg);

#line 884 "int.m"
static void MR_CALL 
mercury__int__fold_up2_7_p_9_1(
#line 884 "int.m"
  void * mercury__int__env_ptr_arg);

#line 884 "int.m"
static void MR_CALL 
mercury__int__fold_up2_7_p_8_1(
#line 884 "int.m"
  void * mercury__int__env_ptr_arg);

#line 898 "int.m"
static void MR_CALL 
mercury__int__fold_down_5_p_8_1(
#line 898 "int.m"
  void * mercury__int__env_ptr_arg);

#line 898 "int.m"
static void MR_CALL 
mercury__int__fold_down_5_p_7_1(
#line 898 "int.m"
  void * mercury__int__env_ptr_arg);

#line 875 "int.m"
static void MR_CALL 
mercury__int__fold_up_5_p_8_1(
#line 875 "int.m"
  void * mercury__int__env_ptr_arg);

#line 875 "int.m"
static void MR_CALL 
mercury__int__fold_up_5_p_7_1(
#line 875 "int.m"
  void * mercury__int__env_ptr_arg);


static /* final */ const MR_Box mercury__int_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__int_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__int_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__int_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__int_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__int_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__int_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__int_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__int_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



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
#include "type_desc.mh"
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



#line 928 "int.c"
const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__int__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__from_int_1_1_f_0_10001))
};

#line 939 "int.c"
static MR_Box MR_CALL 
mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__to_int_1_1_f_0_10001(
#line 942 "int.c"
  MR_Box mercury__int__closure_arg,
#line 944 "int.c"
  MR_Box mercury__int__wrapper_arg_1)
#line 946 "int.c"
{
#line 948 "int.c"
  {
#line 950 "int.c"
    MR_Box mercury__int__wrapper_arg_2;
#line 952 "int.c"
    MR_Box mercury__int__closure;
#line 954 "int.c"
    MR_Integer mercury__int__conv0_X_2;

#line 957 "int.c"
    mercury__int__closure = mercury__int__closure_arg;
#line 959 "int.c"
    {
#line 961 "int.c"
      mercury__int__conv0_X_2 = mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__to_int_1_1_f_0(((MR_Integer) mercury__int__wrapper_arg_1));
    }
#line 964 "int.c"
    mercury__int__wrapper_arg_2 = ((MR_Box) (mercury__int__conv0_X_2));
#line 966 "int.c"
    return mercury__int__wrapper_arg_2;
#line 968 "int.c"
  }
#line 970 "int.c"
}

#line 973 "int.c"
static MR_bool MR_CALL 
mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__from_int_1_1_f_0_10001(
#line 976 "int.c"
  MR_Box mercury__int__closure_arg,
#line 978 "int.c"
  MR_Box mercury__int__wrapper_arg_1,
#line 980 "int.c"
  MR_Box * mercury__int__wrapper_arg_2)
#line 982 "int.c"
{
#line 984 "int.c"
  {
#line 986 "int.c"
    MR_bool mercury__int__succeeded;
#line 988 "int.c"
    MR_Box mercury__int__closure;
#line 990 "int.c"
    MR_Integer mercury__int__conv0_X_2;

#line 993 "int.c"
    mercury__int__closure = mercury__int__closure_arg;
#line 995 "int.c"
    {
#line 997 "int.c"
      mercury__int__succeeded = mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__from_int_1_1_f_0(((MR_Integer) mercury__int__wrapper_arg_1), &mercury__int__conv0_X_2);
    }
#line 1000 "int.c"
    if (mercury__int__succeeded)
#line 1002 "int.c"
      {
#line 1004 "int.c"
        *mercury__int__wrapper_arg_2 = ((MR_Box) (mercury__int__conv0_X_2));
#line 1006 "int.c"
        mercury__int__succeeded = MR_TRUE;
#line 1008 "int.c"
      }
#line 1010 "int.c"
    return mercury__int__succeeded;
#line 1012 "int.c"
  }
#line 1014 "int.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__int__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__int__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 480 "int.m"
MR_bool MR_CALL 
mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__from_int_1_1_f_0(
#line 480 "int.m"
  MR_Integer mercury__int__X_3,
#line 480 "int.m"
  MR_Integer * mercury__int__X_2)
#line 480 "int.m"
{
#line 480 "int.m"
  {
#line 480 "int.m"
    *mercury__int__X_2 = mercury__int__X_3;
#line 480 "int.m"
    return MR_TRUE;
#line 480 "int.m"
  }
#line 480 "int.m"
}

#line 479 "int.m"
MR_Integer MR_CALL 
mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__to_int_1_1_f_0(
#line 479 "int.m"
  MR_Integer mercury__int__X_3)
#line 479 "int.m"
{
#line 479 "int.m"
  {
#line 479 "int.m"
    MR_bool mercury__int__succeeded;
#line 479 "int.m"
    MR_Integer mercury__int__X_2 = mercury__int__X_3;

#line 479 "int.m"
    return mercury__int__X_2;
#line 479 "int.m"
  }
#line 479 "int.m"
}

#line 689 "int.m"
static void MR_CALL 
mercury__int__log2_2_3_p_0(
#line 689 "int.m"
  MR_Integer mercury__int__X_4,
#line 689 "int.m"
  MR_Integer mercury__int__N0_5,
#line 689 "int.m"
  MR_Integer * mercury__int__N_6)
#line 689 "int.m"
{
#line 694 "int.m"
  while (MR_TRUE)
#line 694 "int.m"
    {
#line 694 "int.m"
      /* tailcall optimized into a loop */
#line 694 "int.m"
      {
#line 694 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__X_4 == (MR_Integer) 1);

#line 694 "int.m"
        if (mercury__int__succeeded)
#line 693 "int.m"
          *mercury__int__N_6 = mercury__int__N0_5;
#line 694 "int.m"
        else
#line 695 "int.m"
          {
#line 695 "int.m"
            MR_Integer mercury__int__X1_7 = (mercury__int__X_4 + (MR_Integer) 1);
#line 695 "int.m"
            MR_Integer mercury__int__X2_8 = (mercury__int__X1_7 / (MR_Integer) 2);
#line 695 "int.m"
            MR_Integer mercury__int__N1_9 = (mercury__int__N0_5 + (MR_Integer) 1);

#line 698 "int.m"
            /* direct tailcall eliminated */
#line 698 "int.m"
            {
#line 698 "int.m"
              MR_Integer mercury__int__X__tmp_copy_4 = mercury__int__X2_8;
#line 698 "int.m"
              MR_Integer mercury__int__N0__tmp_copy_5 = mercury__int__N1_9;

#line 698 "int.m"
              mercury__int__N0_5 = mercury__int__N0__tmp_copy_5;
#line 698 "int.m"
              mercury__int__X_4 = mercury__int__X__tmp_copy_4;
#line 698 "int.m"
            }
#line 698 "int.m"
            continue;
#line 695 "int.m"
          }
#line 694 "int.m"
      }
#line 694 "int.m"
      break;
#line 694 "int.m"
    }
#line 689 "int.m"
}

#line 664 "int.m"
static MR_Integer MR_CALL 
mercury__int__multiply_by_pow_3_f_0(
#line 664 "int.m"
  MR_Integer mercury__int__Scale0_5,
#line 664 "int.m"
  MR_Integer mercury__int__Base_6,
#line 664 "int.m"
  MR_Integer mercury__int__Exp_7)
#line 664 "int.m"
{
#line 669 "int.m"
  while (MR_TRUE)
#line 669 "int.m"
    {
#line 669 "int.m"
      /* tailcall optimized into a loop */
#line 669 "int.m"
      {
#line 669 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Exp_7 == (MR_Integer) 0);
#line 669 "int.m"
        MR_Integer mercury__int__Result_8;

#line 669 "int.m"
        if (mercury__int__succeeded)
#line 668 "int.m"
          mercury__int__Result_8 = mercury__int__Scale0_5;
#line 669 "int.m"
        else
#line 674 "int.m"
          {
#line 674 "int.m"
            MR_Integer mercury__int__Scale1_9;
#line 674 "int.m"
            MR_Integer mercury__int__V_10_10;
#line 674 "int.m"
            MR_Integer mercury__int__V_12_12;
#line 619 "int.m"
            MR_Integer mercury__int__V_15_15 = (mercury__int__Exp_7 & (MR_Integer) 1);

#line 619 "int.m"
            mercury__int__succeeded = (mercury__int__V_15_15 == (MR_Integer) 0);
#line 619 "int.m"
            mercury__int__succeeded = !(mercury__int__succeeded);
#line 672 "int.m"
            if (mercury__int__succeeded)
#line 671 "int.m"
              mercury__int__Scale1_9 = (mercury__int__Scale0_5 * mercury__int__Base_6);
#line 672 "int.m"
            else
#line 673 "int.m"
              mercury__int__Scale1_9 = mercury__int__Scale0_5;
#line 675 "int.m"
            mercury__int__V_10_10 = (mercury__int__Base_6 * mercury__int__Base_6);
#line 675 "int.m"
            {
#line 675 "int.m"
              mercury__int__V_12_12 = mercury__int__div_2_f_0(mercury__int__Exp_7, (MR_Integer) 2);
            }
#line 675 "int.m"
            /* direct tailcall eliminated */
#line 675 "int.m"
            {
#line 675 "int.m"
              MR_Integer mercury__int__Scale0__tmp_copy_5 = mercury__int__Scale1_9;
#line 675 "int.m"
              MR_Integer mercury__int__Base__tmp_copy_6 = mercury__int__V_10_10;
#line 675 "int.m"
              MR_Integer mercury__int__Exp__tmp_copy_7 = mercury__int__V_12_12;

#line 675 "int.m"
              mercury__int__Exp_7 = mercury__int__Exp__tmp_copy_7;
#line 675 "int.m"
              mercury__int__Base_6 = mercury__int__Base__tmp_copy_6;
#line 675 "int.m"
              mercury__int__Scale0_5 = mercury__int__Scale0__tmp_copy_5;
#line 675 "int.m"
            }
#line 675 "int.m"
            continue;
#line 674 "int.m"
          }
#line 669 "int.m"
        return mercury__int__Result_8;
#line 669 "int.m"
      }
#line 669 "int.m"
      break;
#line 669 "int.m"
    }
#line 664 "int.m"
}

#line 528 "int.m"
MR_bool MR_CALL 
mercury__int__int_domain_checks_0_p_0(void)
#line 528 "int.m"
{
#line 531 "int.m"
  {
#line 531 "int.m"
    MR_bool mercury__int__succeeded;

#line 535 "int.m"
{
#define MR_PROC_LABEL mercury__int__int_domain_checks_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 535 "int.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 1259 "int.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 535 "int.m"
	}
mercury__int__succeeded  = SUCCESS_INDICATOR;
}
#line 531 "int.m"
    return mercury__int__succeeded;
#line 531 "int.m"
  }
#line 528 "int.m"
}

#line 465 "int.m"
MR_Integer MR_CALL 
mercury__int__rem_bits_per_int_1_f_0(
#line 465 "int.m"
  MR_Integer mercury__int__Int_1)
#line 465 "int.m"
{
#line 785 "int.m"
  {
#line 785 "int.m"
    MR_bool mercury__int__succeeded;
#line 785 "int.m"
    MR_Integer mercury__int__Rem_2;

#line 789 "int.m"
{
#define MR_PROC_LABEL mercury__int__rem_bits_per_int_1_f_0

	MR_Integer Int;
	MR_Integer Rem;

	Int =  mercury__int__Int_1 ;
		{
#line 789 "int.m"

    Rem = Int % ML_BITS_PER_INT;

#line 1302 "int.c"

		;}
#undef MR_PROC_LABEL
	 mercury__int__Rem_2  = Rem;
#line 789 "int.m"
}
#line 785 "int.m"
    return mercury__int__Rem_2;
#line 785 "int.m"
  }
#line 465 "int.m"
}

#line 458 "int.m"
MR_Integer MR_CALL 
mercury__int__times_bits_per_int_1_f_0(
#line 458 "int.m"
  MR_Integer mercury__int__Int_1)
#line 458 "int.m"
{
#line 777 "int.m"
  {
#line 777 "int.m"
    MR_bool mercury__int__succeeded;
#line 777 "int.m"
    MR_Integer mercury__int__Result_2;

#line 781 "int.m"
{
#define MR_PROC_LABEL mercury__int__times_bits_per_int_1_f_0

	MR_Integer Int;
	MR_Integer Result;

	Int =  mercury__int__Int_1 ;
		{
#line 781 "int.m"

    Result = Int * ML_BITS_PER_INT;

#line 1343 "int.c"

		;}
#undef MR_PROC_LABEL
	 mercury__int__Result_2  = Result;
#line 781 "int.m"
}
#line 777 "int.m"
    return mercury__int__Result_2;
#line 777 "int.m"
  }
#line 458 "int.m"
}

#line 454 "int.m"
MR_Integer MR_CALL 
mercury__int__quot_bits_per_int_1_f_0(
#line 454 "int.m"
  MR_Integer mercury__int__Int_1)
#line 454 "int.m"
{
#line 769 "int.m"
  {
#line 769 "int.m"
    MR_bool mercury__int__succeeded;
#line 769 "int.m"
    MR_Integer mercury__int__Div_2;

#line 773 "int.m"
{
#define MR_PROC_LABEL mercury__int__quot_bits_per_int_1_f_0

	MR_Integer Int;
	MR_Integer Div;

	Int =  mercury__int__Int_1 ;
		{
#line 773 "int.m"

    Div = Int / ML_BITS_PER_INT;

#line 1384 "int.c"

		;}
#undef MR_PROC_LABEL
	 mercury__int__Div_2  = Div;
#line 773 "int.m"
}
#line 769 "int.m"
    return mercury__int__Div_2;
#line 769 "int.m"
  }
#line 454 "int.m"
}

#line 447 "int.m"
MR_Integer MR_CALL 
mercury__int__floor_to_multiple_of_bits_per_int_1_f_0(
#line 447 "int.m"
  MR_Integer mercury__int__X_3)
#line 447 "int.m"
{
#line 568 "int.m"
  {
#line 568 "int.m"
    MR_bool mercury__int__succeeded;
#line 568 "int.m"
    MR_Integer mercury__int__Floor_4;
#line 568 "int.m"
    MR_Integer mercury__int__Trunc_5;
#line 568 "int.m"
    MR_Integer mercury__int__Floor0_6;

#line 773 "int.m"
{
#define MR_PROC_LABEL mercury__int__floor_to_multiple_of_bits_per_int_1_f_0

	MR_Integer Int;
	MR_Integer Div;

	Int =  mercury__int__X_3 ;
		{
#line 773 "int.m"

    Div = Int / ML_BITS_PER_INT;

#line 1429 "int.c"

		;}
#undef MR_PROC_LABEL
	 mercury__int__Trunc_5  = Div;
#line 773 "int.m"
}
#line 781 "int.m"
{
#define MR_PROC_LABEL mercury__int__floor_to_multiple_of_bits_per_int_1_f_0

	MR_Integer Int;
	MR_Integer Result;

	Int =  mercury__int__Trunc_5 ;
		{
#line 781 "int.m"

    Result = Int * ML_BITS_PER_INT;

#line 1449 "int.c"

		;}
#undef MR_PROC_LABEL
	 mercury__int__Floor0_6  = Result;
#line 781 "int.m"
}
#line 571 "int.m"
    mercury__int__succeeded = (mercury__int__Floor0_6 > mercury__int__X_3);
#line 573 "int.m"
    if (mercury__int__succeeded)
#line 572 "int.m"
      {
#line 572 "int.m"
        MR_Integer mercury__int__V_7_7;

#line 765 "int.m"
{
#define MR_PROC_LABEL mercury__int__floor_to_multiple_of_bits_per_int_1_f_0

	MR_Integer Bits;

		{
#line 765 "int.m"

    Bits = ML_BITS_PER_INT;

#line 1476 "int.c"

		;}
#undef MR_PROC_LABEL
	 mercury__int__V_7_7  = Bits;
#line 765 "int.m"
}
#line 572 "int.m"
        mercury__int__Floor_4 = (mercury__int__Floor0_6 - mercury__int__V_7_7);
#line 572 "int.m"
      }
#line 573 "int.m"
    else
#line 574 "int.m"
      mercury__int__Floor_4 = mercury__int__Floor0_6;
#line 568 "int.m"
    return mercury__int__Floor_4;
#line 568 "int.m"
  }
#line 447 "int.m"
}

#line 415 "int.m"
MR_Word MR_CALL 
mercury__int__int_to_doc_1_f_0(
#line 415 "int.m"
  MR_Integer mercury__int__X_3)
#line 415 "int.m"
{
#line 935 "int.m"
  {
#line 935 "int.m"
    MR_bool mercury__int__succeeded;
#line 935 "int.m"
    MR_Word mercury__int__HeadVar__2_2;
#line 935 "int.m"
    MR_String mercury__int__V_4_4;

#line 705 "string.opt"
    {
#line 705 "string.opt"
      mercury__string__int_to_base_string_3_p_0(mercury__int__X_3, (MR_Integer) 10, &mercury__int__V_4_4);
    }
#line 935 "int.m"
    {
#line 935 "int.m"
      mercury__int__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 935 "int.m"
      MR_hl_field(MR_mktag(1), mercury__int__HeadVar__2_2, 0) = ((MR_Box) (mercury__int__V_4_4));
#line 935 "int.m"
    }
#line 935 "int.m"
    return mercury__int__HeadVar__2_2;
#line 935 "int.m"
  }
#line 415 "int.m"
}

#line 411 "int.m"
void MR_CALL 
mercury__int__nondet_int_in_range_3_p_0(
#line 411 "int.m"
  MR_Integer mercury__int__Lo_4,
#line 411 "int.m"
  MR_Integer mercury__int__Hi_5,
#line 411 "int.m"
  MR_Integer * mercury__int__I_6,
#line 411 "int.m"
  MR_Cont mercury__int__cont,
#line 411 "int.m"
  void * mercury__int__cont_env_ptr)
#line 411 "int.m"
{
#line 928 "int.m"
  while (MR_TRUE)
#line 928 "int.m"
    {
#line 928 "int.m"
      /* tailcall optimized into a loop */
#line 928 "int.m"
      {
#line 928 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_4 < mercury__int__Hi_5);

#line 928 "int.m"
        if (mercury__int__succeeded)
#line 925 "int.m"
          {
#line 924 "int.m"
            *mercury__int__I_6 = mercury__int__Lo_4;
#line 924 "int.m"
            {
#line 924 "int.m"
              mercury__int__cont(mercury__int__cont_env_ptr);
            }
#line 926 "int.m"
            {
#line 926 "int.m"
              MR_Integer mercury__int__V_7_7 = (mercury__int__Lo_4 + (MR_Integer) 1);

#line 926 "int.m"
              /* direct tailcall eliminated */
#line 926 "int.m"
              {
#line 926 "int.m"
                MR_Integer mercury__int__Lo__tmp_copy_4 = mercury__int__V_7_7;

#line 926 "int.m"
                mercury__int__Lo_4 = mercury__int__Lo__tmp_copy_4;
#line 926 "int.m"
              }
#line 926 "int.m"
              continue;
#line 926 "int.m"
            }
#line 925 "int.m"
          }
#line 928 "int.m"
        else
#line 929 "int.m"
          {
#line 929 "int.m"
            mercury__int__succeeded = (mercury__int__Lo_4 == mercury__int__Hi_5);
#line 929 "int.m"
            if (mercury__int__succeeded)
#line 929 "int.m"
              {
#line 930 "int.m"
                *mercury__int__I_6 = mercury__int__Lo_4;
#line 930 "int.m"
                mercury__int__succeeded = MR_TRUE;
#line 929 "int.m"
              }
#line 929 "int.m"
            if (mercury__int__succeeded)
#line 929 "int.m"
              {
#line 929 "int.m"
                mercury__int__cont(mercury__int__cont_env_ptr);
#line 929 "int.m"
                return;
              }
#line 929 "int.m"
          }
#line 928 "int.m"
      }
#line 928 "int.m"
      break;
#line 928 "int.m"
    }
#line 411 "int.m"
}

#line 913 "int.m"
static void MR_CALL 
mercury__int__fold_down3_9_p_9_1(
#line 913 "int.m"
  void * mercury__int__env_ptr_arg)
#line 913 "int.m"
{
#line 913 "int.m"
  {
#line 913 "int.m"
    struct mercury__int__fold_down3_9_p_9_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_down3_9_p_9_env_0_s *) mercury__int__env_ptr_arg;

#line 913 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__V_29_29 = (MR_Integer) 1;
#line 913 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__V_25_25 = ((mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__Hi_12 - (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__V_29_29);
#line 913 "int.m"
    {
#line 913 "int.m"
      mercury__int__fold_down3_9_p_9((mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__TypeInfo_for_T_30, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__TypeInfo_for_U_31, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__TypeInfo_for_V_32, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__P_10, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__Lo_11, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__V_25_25, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_A_22_22, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_A_17, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_B_23_23, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_B_19, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_C_24_24, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_C_21, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__cont_env_ptr);
#line 913 "int.m"
      return;
    }
#line 913 "int.m"
  }
#line 913 "int.m"
}

#line 404 "int.m"
void MR_CALL 
mercury__int__fold_down3_9_p_9(
#line 404 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_30,
#line 404 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_31,
#line 404 "int.m"
  MR_Word mercury__int__TypeInfo_for_V_32,
#line 404 "int.m"
  MR_Word mercury__int__P_10,
#line 404 "int.m"
  MR_Integer mercury__int__Lo_11,
#line 404 "int.m"
  MR_Integer mercury__int__Hi_12,
#line 404 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
#line 404 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
#line 404 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
#line 404 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
#line 404 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
#line 404 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_C_21,
#line 404 "int.m"
  MR_Cont mercury__int__cont,
#line 404 "int.m"
  void * mercury__int__cont_env_ptr)
#line 404 "int.m"
{
#line 404 "int.m"
  {
#line 404 "int.m"
    struct mercury__int__fold_down3_9_p_9_env_0_s mercury__int__env;

#line 404 "int.m"
    (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__TypeInfo_for_T_30 = mercury__int__TypeInfo_for_T_30;
#line 404 "int.m"
    (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__TypeInfo_for_U_31 = mercury__int__TypeInfo_for_U_31;
#line 404 "int.m"
    (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__TypeInfo_for_V_32 = mercury__int__TypeInfo_for_V_32;
#line 404 "int.m"
    (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__P_10 = mercury__int__P_10;
#line 404 "int.m"
    (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__Lo_11 = mercury__int__Lo_11;
#line 404 "int.m"
    (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__Hi_12 = mercury__int__Hi_12;
#line 404 "int.m"
    (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_17;
#line 404 "int.m"
    (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_19;
#line 404 "int.m"
    (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_21;
#line 404 "int.m"
    (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__cont = mercury__int__cont;
#line 404 "int.m"
    (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__cont_env_ptr = mercury__int__cont_env_ptr;
#line 914 "int.m"
    {
#line 914 "int.m"
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__Lo_11 <= (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__Hi_12);

#line 914 "int.m"
      if (mercury__int__succeeded)
#line 913 "int.m"
        {
#line 913 "int.m"
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__P_10, (MR_Integer) 1)));

#line 913 "int.m"
          {
#line 913 "int.m"
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__P_10), ((MR_Box) ((mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__Hi_12)), mercury__int__STATE_VARIABLE_A_0_16, &(mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &(mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &(mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_C_24_24, mercury__int__fold_down3_9_p_9_1, &mercury__int__env);
          }
#line 913 "int.m"
        }
#line 914 "int.m"
      else
#line 914 "int.m"
        {
#line 914 "int.m"
          *((mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_C_21) = mercury__int__STATE_VARIABLE_C_0_20;
#line 914 "int.m"
          *((mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_B_19) = mercury__int__STATE_VARIABLE_B_0_18;
#line 914 "int.m"
          *((mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_A_17) = mercury__int__STATE_VARIABLE_A_0_16;
#line 914 "int.m"
          {
#line 914 "int.m"
            ((mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__cont)((mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__cont_env_ptr);
#line 914 "int.m"
            return;
          }
#line 914 "int.m"
        }
#line 914 "int.m"
    }
#line 404 "int.m"
  }
#line 404 "int.m"
}

#line 913 "int.m"
static void MR_CALL 
mercury__int__fold_down3_9_p_8_1(
#line 913 "int.m"
  void * mercury__int__env_ptr_arg)
#line 913 "int.m"
{
#line 913 "int.m"
  {
#line 913 "int.m"
    struct mercury__int__fold_down3_9_p_8_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_down3_9_p_8_env_0_s *) mercury__int__env_ptr_arg;

#line 913 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__V_29_29 = (MR_Integer) 1;
#line 913 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__V_25_25 = ((mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__Hi_12 - (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__V_29_29);
#line 913 "int.m"
    {
#line 913 "int.m"
      mercury__int__fold_down3_9_p_8((mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__TypeInfo_for_T_30, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__TypeInfo_for_U_31, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__TypeInfo_for_V_32, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__P_10, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__Lo_11, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__V_25_25, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_A_22_22, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_A_17, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_B_23_23, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_B_19, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_C_24_24, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_C_21, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__cont_env_ptr);
#line 913 "int.m"
      return;
    }
#line 913 "int.m"
  }
#line 913 "int.m"
}

#line 402 "int.m"
void MR_CALL 
mercury__int__fold_down3_9_p_8(
#line 402 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_30,
#line 402 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_31,
#line 402 "int.m"
  MR_Word mercury__int__TypeInfo_for_V_32,
#line 402 "int.m"
  MR_Word mercury__int__P_10,
#line 402 "int.m"
  MR_Integer mercury__int__Lo_11,
#line 402 "int.m"
  MR_Integer mercury__int__Hi_12,
#line 402 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
#line 402 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
#line 402 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
#line 402 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
#line 402 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
#line 402 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_C_21,
#line 402 "int.m"
  MR_Cont mercury__int__cont,
#line 402 "int.m"
  void * mercury__int__cont_env_ptr)
#line 402 "int.m"
{
#line 402 "int.m"
  {
#line 402 "int.m"
    struct mercury__int__fold_down3_9_p_8_env_0_s mercury__int__env;

#line 402 "int.m"
    (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__TypeInfo_for_T_30 = mercury__int__TypeInfo_for_T_30;
#line 402 "int.m"
    (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__TypeInfo_for_U_31 = mercury__int__TypeInfo_for_U_31;
#line 402 "int.m"
    (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__TypeInfo_for_V_32 = mercury__int__TypeInfo_for_V_32;
#line 402 "int.m"
    (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__P_10 = mercury__int__P_10;
#line 402 "int.m"
    (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__Lo_11 = mercury__int__Lo_11;
#line 402 "int.m"
    (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__Hi_12 = mercury__int__Hi_12;
#line 402 "int.m"
    (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_17;
#line 402 "int.m"
    (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_19;
#line 402 "int.m"
    (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_21;
#line 402 "int.m"
    (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__cont = mercury__int__cont;
#line 402 "int.m"
    (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__cont_env_ptr = mercury__int__cont_env_ptr;
#line 914 "int.m"
    {
#line 914 "int.m"
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__Lo_11 <= (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__Hi_12);

#line 914 "int.m"
      if (mercury__int__succeeded)
#line 913 "int.m"
        {
#line 913 "int.m"
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__P_10, (MR_Integer) 1)));

#line 913 "int.m"
          {
#line 913 "int.m"
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__P_10), ((MR_Box) ((mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__Hi_12)), mercury__int__STATE_VARIABLE_A_0_16, &(mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &(mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &(mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_C_24_24, mercury__int__fold_down3_9_p_8_1, &mercury__int__env);
          }
#line 913 "int.m"
        }
#line 914 "int.m"
      else
#line 914 "int.m"
        {
#line 914 "int.m"
          *((mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_C_21) = mercury__int__STATE_VARIABLE_C_0_20;
#line 914 "int.m"
          *((mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_B_19) = mercury__int__STATE_VARIABLE_B_0_18;
#line 914 "int.m"
          *((mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_A_17) = mercury__int__STATE_VARIABLE_A_0_16;
#line 914 "int.m"
          {
#line 914 "int.m"
            ((mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__cont)((mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__cont_env_ptr);
#line 914 "int.m"
            return;
          }
#line 914 "int.m"
        }
#line 914 "int.m"
    }
#line 402 "int.m"
  }
#line 402 "int.m"
}

#line 400 "int.m"
MR_bool MR_CALL 
mercury__int__fold_down3_9_p_7(
#line 400 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_30,
#line 400 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_31,
#line 400 "int.m"
  MR_Word mercury__int__TypeInfo_for_V_32,
#line 400 "int.m"
  MR_Word mercury__int__P_10,
#line 400 "int.m"
  MR_Integer mercury__int__Lo_11,
#line 400 "int.m"
  MR_Integer mercury__int__Hi_12,
#line 400 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
#line 400 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
#line 400 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
#line 400 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
#line 400 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
#line 400 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
#line 400 "int.m"
{
#line 914 "int.m"
  while (MR_TRUE)
#line 914 "int.m"
    {
#line 914 "int.m"
      /* tailcall optimized into a loop */
#line 914 "int.m"
      {
#line 914 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

#line 914 "int.m"
        if (mercury__int__succeeded)
#line 913 "int.m"
          {
#line 913 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
#line 913 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
#line 913 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
#line 913 "int.m"
            MR_Integer mercury__int__V_25_25;
#line 913 "int.m"
            MR_Integer mercury__int__V_29_29;
#line 913 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

#line 913 "int.m"
            {
#line 913 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Hi_12)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
#line 913 "int.m"
            if (mercury__int__succeeded)
#line 913 "int.m"
              {
#line 913 "int.m"
                mercury__int__V_29_29 = (MR_Integer) 1;
#line 913 "int.m"
                mercury__int__V_25_25 = (mercury__int__Hi_12 - mercury__int__V_29_29);
#line 913 "int.m"
                /* direct tailcall eliminated */
#line 913 "int.m"
                {
#line 913 "int.m"
                  MR_Integer mercury__int__Hi__tmp_copy_12 = mercury__int__V_25_25;
#line 913 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__int__STATE_VARIABLE_A_22_22;
#line 913 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__int__STATE_VARIABLE_B_23_23;
#line 913 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__int__STATE_VARIABLE_C_24_24;

#line 913 "int.m"
                  mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_0__tmp_copy_20;
#line 913 "int.m"
                  mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_18;
#line 913 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_16;
#line 913 "int.m"
                  mercury__int__Hi_12 = mercury__int__Hi__tmp_copy_12;
#line 913 "int.m"
                }
#line 913 "int.m"
                continue;
#line 913 "int.m"
              }
#line 913 "int.m"
          }
#line 914 "int.m"
        else
#line 914 "int.m"
          {
#line 914 "int.m"
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
#line 914 "int.m"
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
#line 914 "int.m"
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
#line 914 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 914 "int.m"
          }
#line 914 "int.m"
        return mercury__int__succeeded;
#line 914 "int.m"
      }
#line 914 "int.m"
      break;
#line 914 "int.m"
    }
#line 400 "int.m"
}

#line 398 "int.m"
MR_bool MR_CALL 
mercury__int__fold_down3_9_p_6(
#line 398 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_30,
#line 398 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_31,
#line 398 "int.m"
  MR_Word mercury__int__TypeInfo_for_V_32,
#line 398 "int.m"
  MR_Word mercury__int__P_10,
#line 398 "int.m"
  MR_Integer mercury__int__Lo_11,
#line 398 "int.m"
  MR_Integer mercury__int__Hi_12,
#line 398 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
#line 398 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
#line 398 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
#line 398 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
#line 398 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
#line 398 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
#line 398 "int.m"
{
#line 914 "int.m"
  while (MR_TRUE)
#line 914 "int.m"
    {
#line 914 "int.m"
      /* tailcall optimized into a loop */
#line 914 "int.m"
      {
#line 914 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

#line 914 "int.m"
        if (mercury__int__succeeded)
#line 913 "int.m"
          {
#line 913 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
#line 913 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
#line 913 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
#line 913 "int.m"
            MR_Integer mercury__int__V_25_25;
#line 913 "int.m"
            MR_Integer mercury__int__V_29_29;
#line 913 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

#line 913 "int.m"
            {
#line 913 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Hi_12)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
#line 913 "int.m"
            if (mercury__int__succeeded)
#line 913 "int.m"
              {
#line 913 "int.m"
                mercury__int__V_29_29 = (MR_Integer) 1;
#line 913 "int.m"
                mercury__int__V_25_25 = (mercury__int__Hi_12 - mercury__int__V_29_29);
#line 913 "int.m"
                /* direct tailcall eliminated */
#line 913 "int.m"
                {
#line 913 "int.m"
                  MR_Integer mercury__int__Hi__tmp_copy_12 = mercury__int__V_25_25;
#line 913 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__int__STATE_VARIABLE_A_22_22;
#line 913 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__int__STATE_VARIABLE_B_23_23;
#line 913 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__int__STATE_VARIABLE_C_24_24;

#line 913 "int.m"
                  mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_0__tmp_copy_20;
#line 913 "int.m"
                  mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_18;
#line 913 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_16;
#line 913 "int.m"
                  mercury__int__Hi_12 = mercury__int__Hi__tmp_copy_12;
#line 913 "int.m"
                }
#line 913 "int.m"
                continue;
#line 913 "int.m"
              }
#line 913 "int.m"
          }
#line 914 "int.m"
        else
#line 914 "int.m"
          {
#line 914 "int.m"
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
#line 914 "int.m"
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
#line 914 "int.m"
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
#line 914 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 914 "int.m"
          }
#line 914 "int.m"
        return mercury__int__succeeded;
#line 914 "int.m"
      }
#line 914 "int.m"
      break;
#line 914 "int.m"
    }
#line 398 "int.m"
}

#line 396 "int.m"
MR_bool MR_CALL 
mercury__int__fold_down3_9_p_5(
#line 396 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_30,
#line 396 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_31,
#line 396 "int.m"
  MR_Word mercury__int__TypeInfo_for_V_32,
#line 396 "int.m"
  MR_Word mercury__int__P_10,
#line 396 "int.m"
  MR_Integer mercury__int__Lo_11,
#line 396 "int.m"
  MR_Integer mercury__int__Hi_12,
#line 396 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
#line 396 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
#line 396 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
#line 396 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
#line 396 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
#line 396 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
#line 396 "int.m"
{
#line 914 "int.m"
  while (MR_TRUE)
#line 914 "int.m"
    {
#line 914 "int.m"
      /* tailcall optimized into a loop */
#line 914 "int.m"
      {
#line 914 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

#line 914 "int.m"
        if (mercury__int__succeeded)
#line 913 "int.m"
          {
#line 913 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
#line 913 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
#line 913 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
#line 913 "int.m"
            MR_Integer mercury__int__V_25_25;
#line 913 "int.m"
            MR_Integer mercury__int__V_29_29;
#line 913 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

#line 913 "int.m"
            {
#line 913 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Hi_12)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
#line 913 "int.m"
            if (mercury__int__succeeded)
#line 913 "int.m"
              {
#line 913 "int.m"
                mercury__int__V_29_29 = (MR_Integer) 1;
#line 913 "int.m"
                mercury__int__V_25_25 = (mercury__int__Hi_12 - mercury__int__V_29_29);
#line 913 "int.m"
                /* direct tailcall eliminated */
#line 913 "int.m"
                {
#line 913 "int.m"
                  MR_Integer mercury__int__Hi__tmp_copy_12 = mercury__int__V_25_25;
#line 913 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__int__STATE_VARIABLE_A_22_22;
#line 913 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__int__STATE_VARIABLE_B_23_23;
#line 913 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__int__STATE_VARIABLE_C_24_24;

#line 913 "int.m"
                  mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_0__tmp_copy_20;
#line 913 "int.m"
                  mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_18;
#line 913 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_16;
#line 913 "int.m"
                  mercury__int__Hi_12 = mercury__int__Hi__tmp_copy_12;
#line 913 "int.m"
                }
#line 913 "int.m"
                continue;
#line 913 "int.m"
              }
#line 913 "int.m"
          }
#line 914 "int.m"
        else
#line 914 "int.m"
          {
#line 914 "int.m"
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
#line 914 "int.m"
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
#line 914 "int.m"
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
#line 914 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 914 "int.m"
          }
#line 914 "int.m"
        return mercury__int__succeeded;
#line 914 "int.m"
      }
#line 914 "int.m"
      break;
#line 914 "int.m"
    }
#line 396 "int.m"
}

#line 394 "int.m"
void MR_CALL 
mercury__int__fold_down3_9_p_4(
#line 394 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_30,
#line 394 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_31,
#line 394 "int.m"
  MR_Word mercury__int__TypeInfo_for_V_32,
#line 394 "int.m"
  MR_Word mercury__int__P_10,
#line 394 "int.m"
  MR_Integer mercury__int__Lo_11,
#line 394 "int.m"
  MR_Integer mercury__int__Hi_12,
#line 394 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
#line 394 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
#line 394 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
#line 394 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
#line 394 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
#line 394 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
#line 394 "int.m"
{
#line 914 "int.m"
  while (MR_TRUE)
#line 914 "int.m"
    {
#line 914 "int.m"
      /* tailcall optimized into a loop */
#line 914 "int.m"
      {
#line 914 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

#line 914 "int.m"
        if (mercury__int__succeeded)
#line 913 "int.m"
          {
#line 913 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
#line 913 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
#line 913 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
#line 913 "int.m"
            MR_Integer mercury__int__V_25_25;
#line 913 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

#line 913 "int.m"
            {
#line 913 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Hi_12)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
#line 913 "int.m"
            mercury__int__V_25_25 = (mercury__int__Hi_12 - (MR_Integer) 1);
#line 913 "int.m"
            /* direct tailcall eliminated */
#line 913 "int.m"
            {
#line 913 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_12 = mercury__int__V_25_25;
#line 913 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__int__STATE_VARIABLE_A_22_22;
#line 913 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__int__STATE_VARIABLE_B_23_23;
#line 913 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__int__STATE_VARIABLE_C_24_24;

#line 913 "int.m"
              mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_0__tmp_copy_20;
#line 913 "int.m"
              mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_18;
#line 913 "int.m"
              mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_16;
#line 913 "int.m"
              mercury__int__Hi_12 = mercury__int__Hi__tmp_copy_12;
#line 913 "int.m"
            }
#line 913 "int.m"
            continue;
#line 913 "int.m"
          }
#line 914 "int.m"
        else
#line 914 "int.m"
          {
#line 914 "int.m"
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
#line 914 "int.m"
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
#line 914 "int.m"
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
#line 914 "int.m"
          }
#line 914 "int.m"
      }
#line 914 "int.m"
      break;
#line 914 "int.m"
    }
#line 394 "int.m"
}

#line 392 "int.m"
void MR_CALL 
mercury__int__fold_down3_9_p_3(
#line 392 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_30,
#line 392 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_31,
#line 392 "int.m"
  MR_Word mercury__int__TypeInfo_for_V_32,
#line 392 "int.m"
  MR_Word mercury__int__P_10,
#line 392 "int.m"
  MR_Integer mercury__int__Lo_11,
#line 392 "int.m"
  MR_Integer mercury__int__Hi_12,
#line 392 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
#line 392 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
#line 392 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
#line 392 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
#line 392 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
#line 392 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
#line 392 "int.m"
{
#line 914 "int.m"
  while (MR_TRUE)
#line 914 "int.m"
    {
#line 914 "int.m"
      /* tailcall optimized into a loop */
#line 914 "int.m"
      {
#line 914 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

#line 914 "int.m"
        if (mercury__int__succeeded)
#line 913 "int.m"
          {
#line 913 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
#line 913 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
#line 913 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
#line 913 "int.m"
            MR_Integer mercury__int__V_25_25;
#line 913 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

#line 913 "int.m"
            {
#line 913 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Hi_12)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
#line 913 "int.m"
            mercury__int__V_25_25 = (mercury__int__Hi_12 - (MR_Integer) 1);
#line 913 "int.m"
            /* direct tailcall eliminated */
#line 913 "int.m"
            {
#line 913 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_12 = mercury__int__V_25_25;
#line 913 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__int__STATE_VARIABLE_A_22_22;
#line 913 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__int__STATE_VARIABLE_B_23_23;
#line 913 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__int__STATE_VARIABLE_C_24_24;

#line 913 "int.m"
              mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_0__tmp_copy_20;
#line 913 "int.m"
              mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_18;
#line 913 "int.m"
              mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_16;
#line 913 "int.m"
              mercury__int__Hi_12 = mercury__int__Hi__tmp_copy_12;
#line 913 "int.m"
            }
#line 913 "int.m"
            continue;
#line 913 "int.m"
          }
#line 914 "int.m"
        else
#line 914 "int.m"
          {
#line 914 "int.m"
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
#line 914 "int.m"
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
#line 914 "int.m"
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
#line 914 "int.m"
          }
#line 914 "int.m"
      }
#line 914 "int.m"
      break;
#line 914 "int.m"
    }
#line 392 "int.m"
}

#line 390 "int.m"
void MR_CALL 
mercury__int__fold_down3_9_p_2(
#line 390 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_30,
#line 390 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_31,
#line 390 "int.m"
  MR_Word mercury__int__TypeInfo_for_V_32,
#line 390 "int.m"
  MR_Word mercury__int__P_10,
#line 390 "int.m"
  MR_Integer mercury__int__Lo_11,
#line 390 "int.m"
  MR_Integer mercury__int__Hi_12,
#line 390 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
#line 390 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
#line 390 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
#line 390 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
#line 390 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
#line 390 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
#line 390 "int.m"
{
#line 914 "int.m"
  while (MR_TRUE)
#line 914 "int.m"
    {
#line 914 "int.m"
      /* tailcall optimized into a loop */
#line 914 "int.m"
      {
#line 914 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

#line 914 "int.m"
        if (mercury__int__succeeded)
#line 913 "int.m"
          {
#line 913 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
#line 913 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
#line 913 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
#line 913 "int.m"
            MR_Integer mercury__int__V_25_25;
#line 913 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

#line 913 "int.m"
            {
#line 913 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Hi_12)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
#line 913 "int.m"
            mercury__int__V_25_25 = (mercury__int__Hi_12 - (MR_Integer) 1);
#line 913 "int.m"
            /* direct tailcall eliminated */
#line 913 "int.m"
            {
#line 913 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_12 = mercury__int__V_25_25;
#line 913 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__int__STATE_VARIABLE_A_22_22;
#line 913 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__int__STATE_VARIABLE_B_23_23;
#line 913 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__int__STATE_VARIABLE_C_24_24;

#line 913 "int.m"
              mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_0__tmp_copy_20;
#line 913 "int.m"
              mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_18;
#line 913 "int.m"
              mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_16;
#line 913 "int.m"
              mercury__int__Hi_12 = mercury__int__Hi__tmp_copy_12;
#line 913 "int.m"
            }
#line 913 "int.m"
            continue;
#line 913 "int.m"
          }
#line 914 "int.m"
        else
#line 914 "int.m"
          {
#line 914 "int.m"
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
#line 914 "int.m"
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
#line 914 "int.m"
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
#line 914 "int.m"
          }
#line 914 "int.m"
      }
#line 914 "int.m"
      break;
#line 914 "int.m"
    }
#line 390 "int.m"
}

#line 388 "int.m"
void MR_CALL 
mercury__int__fold_down3_9_p_1(
#line 388 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_30,
#line 388 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_31,
#line 388 "int.m"
  MR_Word mercury__int__TypeInfo_for_V_32,
#line 388 "int.m"
  MR_Word mercury__int__P_10,
#line 388 "int.m"
  MR_Integer mercury__int__Lo_11,
#line 388 "int.m"
  MR_Integer mercury__int__Hi_12,
#line 388 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
#line 388 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
#line 388 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
#line 388 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
#line 388 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
#line 388 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
#line 388 "int.m"
{
#line 914 "int.m"
  while (MR_TRUE)
#line 914 "int.m"
    {
#line 914 "int.m"
      /* tailcall optimized into a loop */
#line 914 "int.m"
      {
#line 914 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

#line 914 "int.m"
        if (mercury__int__succeeded)
#line 913 "int.m"
          {
#line 913 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
#line 913 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
#line 913 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
#line 913 "int.m"
            MR_Integer mercury__int__V_25_25;
#line 913 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

#line 913 "int.m"
            {
#line 913 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Hi_12)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
#line 913 "int.m"
            mercury__int__V_25_25 = (mercury__int__Hi_12 - (MR_Integer) 1);
#line 913 "int.m"
            /* direct tailcall eliminated */
#line 913 "int.m"
            {
#line 913 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_12 = mercury__int__V_25_25;
#line 913 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__int__STATE_VARIABLE_A_22_22;
#line 913 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__int__STATE_VARIABLE_B_23_23;
#line 913 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__int__STATE_VARIABLE_C_24_24;

#line 913 "int.m"
              mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_0__tmp_copy_20;
#line 913 "int.m"
              mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_18;
#line 913 "int.m"
              mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_16;
#line 913 "int.m"
              mercury__int__Hi_12 = mercury__int__Hi__tmp_copy_12;
#line 913 "int.m"
            }
#line 913 "int.m"
            continue;
#line 913 "int.m"
          }
#line 914 "int.m"
        else
#line 914 "int.m"
          {
#line 914 "int.m"
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
#line 914 "int.m"
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
#line 914 "int.m"
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
#line 914 "int.m"
          }
#line 914 "int.m"
      }
#line 914 "int.m"
      break;
#line 914 "int.m"
    }
#line 388 "int.m"
}

#line 386 "int.m"
void MR_CALL 
mercury__int__fold_down3_9_p_0(
#line 386 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_30,
#line 386 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_31,
#line 386 "int.m"
  MR_Word mercury__int__TypeInfo_for_V_32,
#line 386 "int.m"
  MR_Word mercury__int__P_10,
#line 386 "int.m"
  MR_Integer mercury__int__Lo_11,
#line 386 "int.m"
  MR_Integer mercury__int__Hi_12,
#line 386 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
#line 386 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
#line 386 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
#line 386 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
#line 386 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
#line 386 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
#line 386 "int.m"
{
#line 914 "int.m"
  while (MR_TRUE)
#line 914 "int.m"
    {
#line 914 "int.m"
      /* tailcall optimized into a loop */
#line 914 "int.m"
      {
#line 914 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

#line 914 "int.m"
        if (mercury__int__succeeded)
#line 913 "int.m"
          {
#line 913 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
#line 913 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
#line 913 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
#line 913 "int.m"
            MR_Integer mercury__int__V_25_25;
#line 913 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

#line 913 "int.m"
            {
#line 913 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Hi_12)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
#line 913 "int.m"
            mercury__int__V_25_25 = (mercury__int__Hi_12 - (MR_Integer) 1);
#line 913 "int.m"
            /* direct tailcall eliminated */
#line 913 "int.m"
            {
#line 913 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_12 = mercury__int__V_25_25;
#line 913 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__int__STATE_VARIABLE_A_22_22;
#line 913 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__int__STATE_VARIABLE_B_23_23;
#line 913 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__int__STATE_VARIABLE_C_24_24;

#line 913 "int.m"
              mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_0__tmp_copy_20;
#line 913 "int.m"
              mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_18;
#line 913 "int.m"
              mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_16;
#line 913 "int.m"
              mercury__int__Hi_12 = mercury__int__Hi__tmp_copy_12;
#line 913 "int.m"
            }
#line 913 "int.m"
            continue;
#line 913 "int.m"
          }
#line 914 "int.m"
        else
#line 914 "int.m"
          {
#line 914 "int.m"
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
#line 914 "int.m"
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
#line 914 "int.m"
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
#line 914 "int.m"
          }
#line 914 "int.m"
      }
#line 914 "int.m"
      break;
#line 914 "int.m"
    }
#line 386 "int.m"
}

#line 890 "int.m"
static void MR_CALL 
mercury__int__fold_up3_9_p_9_1(
#line 890 "int.m"
  void * mercury__int__env_ptr_arg)
#line 890 "int.m"
{
#line 890 "int.m"
  {
#line 890 "int.m"
    struct mercury__int__fold_up3_9_p_9_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_up3_9_p_9_env_0_s *) mercury__int__env_ptr_arg;

#line 890 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__V_29_29 = (MR_Integer) 1;
#line 890 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__V_25_25 = ((mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__Lo_11 + (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__V_29_29);
#line 890 "int.m"
    {
#line 890 "int.m"
      mercury__int__fold_up3_9_p_9((mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__TypeInfo_for_T_30, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__TypeInfo_for_U_31, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__TypeInfo_for_V_32, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__P_10, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__V_25_25, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__Hi_12, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_A_22_22, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_A_17, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_B_23_23, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_B_19, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_C_24_24, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_C_21, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__cont_env_ptr);
#line 890 "int.m"
      return;
    }
#line 890 "int.m"
  }
#line 890 "int.m"
}

#line 377 "int.m"
void MR_CALL 
mercury__int__fold_up3_9_p_9(
#line 377 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_30,
#line 377 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_31,
#line 377 "int.m"
  MR_Word mercury__int__TypeInfo_for_V_32,
#line 377 "int.m"
  MR_Word mercury__int__P_10,
#line 377 "int.m"
  MR_Integer mercury__int__Lo_11,
#line 377 "int.m"
  MR_Integer mercury__int__Hi_12,
#line 377 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
#line 377 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
#line 377 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
#line 377 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
#line 377 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
#line 377 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_C_21,
#line 377 "int.m"
  MR_Cont mercury__int__cont,
#line 377 "int.m"
  void * mercury__int__cont_env_ptr)
#line 377 "int.m"
{
#line 377 "int.m"
  {
#line 377 "int.m"
    struct mercury__int__fold_up3_9_p_9_env_0_s mercury__int__env;

#line 377 "int.m"
    (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__TypeInfo_for_T_30 = mercury__int__TypeInfo_for_T_30;
#line 377 "int.m"
    (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__TypeInfo_for_U_31 = mercury__int__TypeInfo_for_U_31;
#line 377 "int.m"
    (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__TypeInfo_for_V_32 = mercury__int__TypeInfo_for_V_32;
#line 377 "int.m"
    (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__P_10 = mercury__int__P_10;
#line 377 "int.m"
    (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__Lo_11 = mercury__int__Lo_11;
#line 377 "int.m"
    (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__Hi_12 = mercury__int__Hi_12;
#line 377 "int.m"
    (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_17;
#line 377 "int.m"
    (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_19;
#line 377 "int.m"
    (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_21;
#line 377 "int.m"
    (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__cont = mercury__int__cont;
#line 377 "int.m"
    (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__cont_env_ptr = mercury__int__cont_env_ptr;
#line 891 "int.m"
    {
#line 891 "int.m"
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__Lo_11 <= (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__Hi_12);

#line 891 "int.m"
      if (mercury__int__succeeded)
#line 890 "int.m"
        {
#line 890 "int.m"
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__P_10, (MR_Integer) 1)));

#line 890 "int.m"
          {
#line 890 "int.m"
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__P_10), ((MR_Box) ((mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__Lo_11)), mercury__int__STATE_VARIABLE_A_0_16, &(mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &(mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &(mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_C_24_24, mercury__int__fold_up3_9_p_9_1, &mercury__int__env);
          }
#line 890 "int.m"
        }
#line 891 "int.m"
      else
#line 891 "int.m"
        {
#line 891 "int.m"
          *((mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_C_21) = mercury__int__STATE_VARIABLE_C_0_20;
#line 891 "int.m"
          *((mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_B_19) = mercury__int__STATE_VARIABLE_B_0_18;
#line 891 "int.m"
          *((mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_A_17) = mercury__int__STATE_VARIABLE_A_0_16;
#line 891 "int.m"
          {
#line 891 "int.m"
            ((mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__cont)((mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__cont_env_ptr);
#line 891 "int.m"
            return;
          }
#line 891 "int.m"
        }
#line 891 "int.m"
    }
#line 377 "int.m"
  }
#line 377 "int.m"
}

#line 890 "int.m"
static void MR_CALL 
mercury__int__fold_up3_9_p_8_1(
#line 890 "int.m"
  void * mercury__int__env_ptr_arg)
#line 890 "int.m"
{
#line 890 "int.m"
  {
#line 890 "int.m"
    struct mercury__int__fold_up3_9_p_8_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_up3_9_p_8_env_0_s *) mercury__int__env_ptr_arg;

#line 890 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__V_29_29 = (MR_Integer) 1;
#line 890 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__V_25_25 = ((mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__Lo_11 + (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__V_29_29);
#line 890 "int.m"
    {
#line 890 "int.m"
      mercury__int__fold_up3_9_p_8((mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__TypeInfo_for_T_30, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__TypeInfo_for_U_31, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__TypeInfo_for_V_32, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__P_10, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__V_25_25, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__Hi_12, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_A_22_22, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_A_17, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_B_23_23, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_B_19, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_C_24_24, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_C_21, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__cont_env_ptr);
#line 890 "int.m"
      return;
    }
#line 890 "int.m"
  }
#line 890 "int.m"
}

#line 375 "int.m"
void MR_CALL 
mercury__int__fold_up3_9_p_8(
#line 375 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_30,
#line 375 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_31,
#line 375 "int.m"
  MR_Word mercury__int__TypeInfo_for_V_32,
#line 375 "int.m"
  MR_Word mercury__int__P_10,
#line 375 "int.m"
  MR_Integer mercury__int__Lo_11,
#line 375 "int.m"
  MR_Integer mercury__int__Hi_12,
#line 375 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
#line 375 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
#line 375 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
#line 375 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
#line 375 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
#line 375 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_C_21,
#line 375 "int.m"
  MR_Cont mercury__int__cont,
#line 375 "int.m"
  void * mercury__int__cont_env_ptr)
#line 375 "int.m"
{
#line 375 "int.m"
  {
#line 375 "int.m"
    struct mercury__int__fold_up3_9_p_8_env_0_s mercury__int__env;

#line 375 "int.m"
    (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__TypeInfo_for_T_30 = mercury__int__TypeInfo_for_T_30;
#line 375 "int.m"
    (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__TypeInfo_for_U_31 = mercury__int__TypeInfo_for_U_31;
#line 375 "int.m"
    (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__TypeInfo_for_V_32 = mercury__int__TypeInfo_for_V_32;
#line 375 "int.m"
    (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__P_10 = mercury__int__P_10;
#line 375 "int.m"
    (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__Lo_11 = mercury__int__Lo_11;
#line 375 "int.m"
    (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__Hi_12 = mercury__int__Hi_12;
#line 375 "int.m"
    (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_17;
#line 375 "int.m"
    (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_19;
#line 375 "int.m"
    (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_21;
#line 375 "int.m"
    (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__cont = mercury__int__cont;
#line 375 "int.m"
    (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__cont_env_ptr = mercury__int__cont_env_ptr;
#line 891 "int.m"
    {
#line 891 "int.m"
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__Lo_11 <= (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__Hi_12);

#line 891 "int.m"
      if (mercury__int__succeeded)
#line 890 "int.m"
        {
#line 890 "int.m"
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__P_10, (MR_Integer) 1)));

#line 890 "int.m"
          {
#line 890 "int.m"
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__P_10), ((MR_Box) ((mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__Lo_11)), mercury__int__STATE_VARIABLE_A_0_16, &(mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &(mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &(mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_C_24_24, mercury__int__fold_up3_9_p_8_1, &mercury__int__env);
          }
#line 890 "int.m"
        }
#line 891 "int.m"
      else
#line 891 "int.m"
        {
#line 891 "int.m"
          *((mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_C_21) = mercury__int__STATE_VARIABLE_C_0_20;
#line 891 "int.m"
          *((mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_B_19) = mercury__int__STATE_VARIABLE_B_0_18;
#line 891 "int.m"
          *((mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_A_17) = mercury__int__STATE_VARIABLE_A_0_16;
#line 891 "int.m"
          {
#line 891 "int.m"
            ((mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__cont)((mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__cont_env_ptr);
#line 891 "int.m"
            return;
          }
#line 891 "int.m"
        }
#line 891 "int.m"
    }
#line 375 "int.m"
  }
#line 375 "int.m"
}

#line 373 "int.m"
MR_bool MR_CALL 
mercury__int__fold_up3_9_p_7(
#line 373 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_30,
#line 373 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_31,
#line 373 "int.m"
  MR_Word mercury__int__TypeInfo_for_V_32,
#line 373 "int.m"
  MR_Word mercury__int__P_10,
#line 373 "int.m"
  MR_Integer mercury__int__Lo_11,
#line 373 "int.m"
  MR_Integer mercury__int__Hi_12,
#line 373 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
#line 373 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
#line 373 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
#line 373 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
#line 373 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
#line 373 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
#line 373 "int.m"
{
#line 891 "int.m"
  while (MR_TRUE)
#line 891 "int.m"
    {
#line 891 "int.m"
      /* tailcall optimized into a loop */
#line 891 "int.m"
      {
#line 891 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

#line 891 "int.m"
        if (mercury__int__succeeded)
#line 890 "int.m"
          {
#line 890 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
#line 890 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
#line 890 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
#line 890 "int.m"
            MR_Integer mercury__int__V_25_25;
#line 890 "int.m"
            MR_Integer mercury__int__V_29_29;
#line 890 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

#line 890 "int.m"
            {
#line 890 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Lo_11)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
#line 890 "int.m"
            if (mercury__int__succeeded)
#line 890 "int.m"
              {
#line 890 "int.m"
                mercury__int__V_29_29 = (MR_Integer) 1;
#line 890 "int.m"
                mercury__int__V_25_25 = (mercury__int__Lo_11 + mercury__int__V_29_29);
#line 890 "int.m"
                /* direct tailcall eliminated */
#line 890 "int.m"
                {
#line 890 "int.m"
                  MR_Integer mercury__int__Lo__tmp_copy_11 = mercury__int__V_25_25;
#line 890 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__int__STATE_VARIABLE_A_22_22;
#line 890 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__int__STATE_VARIABLE_B_23_23;
#line 890 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__int__STATE_VARIABLE_C_24_24;

#line 890 "int.m"
                  mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_0__tmp_copy_20;
#line 890 "int.m"
                  mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_18;
#line 890 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_16;
#line 890 "int.m"
                  mercury__int__Lo_11 = mercury__int__Lo__tmp_copy_11;
#line 890 "int.m"
                }
#line 890 "int.m"
                continue;
#line 890 "int.m"
              }
#line 890 "int.m"
          }
#line 891 "int.m"
        else
#line 891 "int.m"
          {
#line 891 "int.m"
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
#line 891 "int.m"
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
#line 891 "int.m"
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
#line 891 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 891 "int.m"
          }
#line 891 "int.m"
        return mercury__int__succeeded;
#line 891 "int.m"
      }
#line 891 "int.m"
      break;
#line 891 "int.m"
    }
#line 373 "int.m"
}

#line 371 "int.m"
MR_bool MR_CALL 
mercury__int__fold_up3_9_p_6(
#line 371 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_30,
#line 371 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_31,
#line 371 "int.m"
  MR_Word mercury__int__TypeInfo_for_V_32,
#line 371 "int.m"
  MR_Word mercury__int__P_10,
#line 371 "int.m"
  MR_Integer mercury__int__Lo_11,
#line 371 "int.m"
  MR_Integer mercury__int__Hi_12,
#line 371 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
#line 371 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
#line 371 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
#line 371 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
#line 371 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
#line 371 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
#line 371 "int.m"
{
#line 891 "int.m"
  while (MR_TRUE)
#line 891 "int.m"
    {
#line 891 "int.m"
      /* tailcall optimized into a loop */
#line 891 "int.m"
      {
#line 891 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

#line 891 "int.m"
        if (mercury__int__succeeded)
#line 890 "int.m"
          {
#line 890 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
#line 890 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
#line 890 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
#line 890 "int.m"
            MR_Integer mercury__int__V_25_25;
#line 890 "int.m"
            MR_Integer mercury__int__V_29_29;
#line 890 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

#line 890 "int.m"
            {
#line 890 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Lo_11)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
#line 890 "int.m"
            if (mercury__int__succeeded)
#line 890 "int.m"
              {
#line 890 "int.m"
                mercury__int__V_29_29 = (MR_Integer) 1;
#line 890 "int.m"
                mercury__int__V_25_25 = (mercury__int__Lo_11 + mercury__int__V_29_29);
#line 890 "int.m"
                /* direct tailcall eliminated */
#line 890 "int.m"
                {
#line 890 "int.m"
                  MR_Integer mercury__int__Lo__tmp_copy_11 = mercury__int__V_25_25;
#line 890 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__int__STATE_VARIABLE_A_22_22;
#line 890 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__int__STATE_VARIABLE_B_23_23;
#line 890 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__int__STATE_VARIABLE_C_24_24;

#line 890 "int.m"
                  mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_0__tmp_copy_20;
#line 890 "int.m"
                  mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_18;
#line 890 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_16;
#line 890 "int.m"
                  mercury__int__Lo_11 = mercury__int__Lo__tmp_copy_11;
#line 890 "int.m"
                }
#line 890 "int.m"
                continue;
#line 890 "int.m"
              }
#line 890 "int.m"
          }
#line 891 "int.m"
        else
#line 891 "int.m"
          {
#line 891 "int.m"
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
#line 891 "int.m"
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
#line 891 "int.m"
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
#line 891 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 891 "int.m"
          }
#line 891 "int.m"
        return mercury__int__succeeded;
#line 891 "int.m"
      }
#line 891 "int.m"
      break;
#line 891 "int.m"
    }
#line 371 "int.m"
}

#line 369 "int.m"
MR_bool MR_CALL 
mercury__int__fold_up3_9_p_5(
#line 369 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_30,
#line 369 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_31,
#line 369 "int.m"
  MR_Word mercury__int__TypeInfo_for_V_32,
#line 369 "int.m"
  MR_Word mercury__int__P_10,
#line 369 "int.m"
  MR_Integer mercury__int__Lo_11,
#line 369 "int.m"
  MR_Integer mercury__int__Hi_12,
#line 369 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
#line 369 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
#line 369 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
#line 369 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
#line 369 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
#line 369 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
#line 369 "int.m"
{
#line 891 "int.m"
  while (MR_TRUE)
#line 891 "int.m"
    {
#line 891 "int.m"
      /* tailcall optimized into a loop */
#line 891 "int.m"
      {
#line 891 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

#line 891 "int.m"
        if (mercury__int__succeeded)
#line 890 "int.m"
          {
#line 890 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
#line 890 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
#line 890 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
#line 890 "int.m"
            MR_Integer mercury__int__V_25_25;
#line 890 "int.m"
            MR_Integer mercury__int__V_29_29;
#line 890 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

#line 890 "int.m"
            {
#line 890 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Lo_11)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
#line 890 "int.m"
            if (mercury__int__succeeded)
#line 890 "int.m"
              {
#line 890 "int.m"
                mercury__int__V_29_29 = (MR_Integer) 1;
#line 890 "int.m"
                mercury__int__V_25_25 = (mercury__int__Lo_11 + mercury__int__V_29_29);
#line 890 "int.m"
                /* direct tailcall eliminated */
#line 890 "int.m"
                {
#line 890 "int.m"
                  MR_Integer mercury__int__Lo__tmp_copy_11 = mercury__int__V_25_25;
#line 890 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__int__STATE_VARIABLE_A_22_22;
#line 890 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__int__STATE_VARIABLE_B_23_23;
#line 890 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__int__STATE_VARIABLE_C_24_24;

#line 890 "int.m"
                  mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_0__tmp_copy_20;
#line 890 "int.m"
                  mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_18;
#line 890 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_16;
#line 890 "int.m"
                  mercury__int__Lo_11 = mercury__int__Lo__tmp_copy_11;
#line 890 "int.m"
                }
#line 890 "int.m"
                continue;
#line 890 "int.m"
              }
#line 890 "int.m"
          }
#line 891 "int.m"
        else
#line 891 "int.m"
          {
#line 891 "int.m"
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
#line 891 "int.m"
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
#line 891 "int.m"
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
#line 891 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 891 "int.m"
          }
#line 891 "int.m"
        return mercury__int__succeeded;
#line 891 "int.m"
      }
#line 891 "int.m"
      break;
#line 891 "int.m"
    }
#line 369 "int.m"
}

#line 367 "int.m"
void MR_CALL 
mercury__int__fold_up3_9_p_4(
#line 367 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_30,
#line 367 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_31,
#line 367 "int.m"
  MR_Word mercury__int__TypeInfo_for_V_32,
#line 367 "int.m"
  MR_Word mercury__int__P_10,
#line 367 "int.m"
  MR_Integer mercury__int__Lo_11,
#line 367 "int.m"
  MR_Integer mercury__int__Hi_12,
#line 367 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
#line 367 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
#line 367 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
#line 367 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
#line 367 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
#line 367 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
#line 367 "int.m"
{
#line 891 "int.m"
  while (MR_TRUE)
#line 891 "int.m"
    {
#line 891 "int.m"
      /* tailcall optimized into a loop */
#line 891 "int.m"
      {
#line 891 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

#line 891 "int.m"
        if (mercury__int__succeeded)
#line 890 "int.m"
          {
#line 890 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
#line 890 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
#line 890 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
#line 890 "int.m"
            MR_Integer mercury__int__V_25_25;
#line 890 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

#line 890 "int.m"
            {
#line 890 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Lo_11)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
#line 890 "int.m"
            mercury__int__V_25_25 = (mercury__int__Lo_11 + (MR_Integer) 1);
#line 890 "int.m"
            /* direct tailcall eliminated */
#line 890 "int.m"
            {
#line 890 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_11 = mercury__int__V_25_25;
#line 890 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__int__STATE_VARIABLE_A_22_22;
#line 890 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__int__STATE_VARIABLE_B_23_23;
#line 890 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__int__STATE_VARIABLE_C_24_24;

#line 890 "int.m"
              mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_0__tmp_copy_20;
#line 890 "int.m"
              mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_18;
#line 890 "int.m"
              mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_16;
#line 890 "int.m"
              mercury__int__Lo_11 = mercury__int__Lo__tmp_copy_11;
#line 890 "int.m"
            }
#line 890 "int.m"
            continue;
#line 890 "int.m"
          }
#line 891 "int.m"
        else
#line 891 "int.m"
          {
#line 891 "int.m"
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
#line 891 "int.m"
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
#line 891 "int.m"
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
#line 891 "int.m"
          }
#line 891 "int.m"
      }
#line 891 "int.m"
      break;
#line 891 "int.m"
    }
#line 367 "int.m"
}

#line 365 "int.m"
void MR_CALL 
mercury__int__fold_up3_9_p_3(
#line 365 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_30,
#line 365 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_31,
#line 365 "int.m"
  MR_Word mercury__int__TypeInfo_for_V_32,
#line 365 "int.m"
  MR_Word mercury__int__P_10,
#line 365 "int.m"
  MR_Integer mercury__int__Lo_11,
#line 365 "int.m"
  MR_Integer mercury__int__Hi_12,
#line 365 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
#line 365 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
#line 365 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
#line 365 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
#line 365 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
#line 365 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
#line 365 "int.m"
{
#line 891 "int.m"
  while (MR_TRUE)
#line 891 "int.m"
    {
#line 891 "int.m"
      /* tailcall optimized into a loop */
#line 891 "int.m"
      {
#line 891 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

#line 891 "int.m"
        if (mercury__int__succeeded)
#line 890 "int.m"
          {
#line 890 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
#line 890 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
#line 890 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
#line 890 "int.m"
            MR_Integer mercury__int__V_25_25;
#line 890 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

#line 890 "int.m"
            {
#line 890 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Lo_11)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
#line 890 "int.m"
            mercury__int__V_25_25 = (mercury__int__Lo_11 + (MR_Integer) 1);
#line 890 "int.m"
            /* direct tailcall eliminated */
#line 890 "int.m"
            {
#line 890 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_11 = mercury__int__V_25_25;
#line 890 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__int__STATE_VARIABLE_A_22_22;
#line 890 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__int__STATE_VARIABLE_B_23_23;
#line 890 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__int__STATE_VARIABLE_C_24_24;

#line 890 "int.m"
              mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_0__tmp_copy_20;
#line 890 "int.m"
              mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_18;
#line 890 "int.m"
              mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_16;
#line 890 "int.m"
              mercury__int__Lo_11 = mercury__int__Lo__tmp_copy_11;
#line 890 "int.m"
            }
#line 890 "int.m"
            continue;
#line 890 "int.m"
          }
#line 891 "int.m"
        else
#line 891 "int.m"
          {
#line 891 "int.m"
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
#line 891 "int.m"
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
#line 891 "int.m"
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
#line 891 "int.m"
          }
#line 891 "int.m"
      }
#line 891 "int.m"
      break;
#line 891 "int.m"
    }
#line 365 "int.m"
}

#line 363 "int.m"
void MR_CALL 
mercury__int__fold_up3_9_p_2(
#line 363 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_30,
#line 363 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_31,
#line 363 "int.m"
  MR_Word mercury__int__TypeInfo_for_V_32,
#line 363 "int.m"
  MR_Word mercury__int__P_10,
#line 363 "int.m"
  MR_Integer mercury__int__Lo_11,
#line 363 "int.m"
  MR_Integer mercury__int__Hi_12,
#line 363 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
#line 363 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
#line 363 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
#line 363 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
#line 363 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
#line 363 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
#line 363 "int.m"
{
#line 891 "int.m"
  while (MR_TRUE)
#line 891 "int.m"
    {
#line 891 "int.m"
      /* tailcall optimized into a loop */
#line 891 "int.m"
      {
#line 891 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

#line 891 "int.m"
        if (mercury__int__succeeded)
#line 890 "int.m"
          {
#line 890 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
#line 890 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
#line 890 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
#line 890 "int.m"
            MR_Integer mercury__int__V_25_25;
#line 890 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

#line 890 "int.m"
            {
#line 890 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Lo_11)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
#line 890 "int.m"
            mercury__int__V_25_25 = (mercury__int__Lo_11 + (MR_Integer) 1);
#line 890 "int.m"
            /* direct tailcall eliminated */
#line 890 "int.m"
            {
#line 890 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_11 = mercury__int__V_25_25;
#line 890 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__int__STATE_VARIABLE_A_22_22;
#line 890 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__int__STATE_VARIABLE_B_23_23;
#line 890 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__int__STATE_VARIABLE_C_24_24;

#line 890 "int.m"
              mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_0__tmp_copy_20;
#line 890 "int.m"
              mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_18;
#line 890 "int.m"
              mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_16;
#line 890 "int.m"
              mercury__int__Lo_11 = mercury__int__Lo__tmp_copy_11;
#line 890 "int.m"
            }
#line 890 "int.m"
            continue;
#line 890 "int.m"
          }
#line 891 "int.m"
        else
#line 891 "int.m"
          {
#line 891 "int.m"
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
#line 891 "int.m"
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
#line 891 "int.m"
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
#line 891 "int.m"
          }
#line 891 "int.m"
      }
#line 891 "int.m"
      break;
#line 891 "int.m"
    }
#line 363 "int.m"
}

#line 361 "int.m"
void MR_CALL 
mercury__int__fold_up3_9_p_1(
#line 361 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_30,
#line 361 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_31,
#line 361 "int.m"
  MR_Word mercury__int__TypeInfo_for_V_32,
#line 361 "int.m"
  MR_Word mercury__int__P_10,
#line 361 "int.m"
  MR_Integer mercury__int__Lo_11,
#line 361 "int.m"
  MR_Integer mercury__int__Hi_12,
#line 361 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
#line 361 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
#line 361 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
#line 361 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
#line 361 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
#line 361 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
#line 361 "int.m"
{
#line 891 "int.m"
  while (MR_TRUE)
#line 891 "int.m"
    {
#line 891 "int.m"
      /* tailcall optimized into a loop */
#line 891 "int.m"
      {
#line 891 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

#line 891 "int.m"
        if (mercury__int__succeeded)
#line 890 "int.m"
          {
#line 890 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
#line 890 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
#line 890 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
#line 890 "int.m"
            MR_Integer mercury__int__V_25_25;
#line 890 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

#line 890 "int.m"
            {
#line 890 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Lo_11)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
#line 890 "int.m"
            mercury__int__V_25_25 = (mercury__int__Lo_11 + (MR_Integer) 1);
#line 890 "int.m"
            /* direct tailcall eliminated */
#line 890 "int.m"
            {
#line 890 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_11 = mercury__int__V_25_25;
#line 890 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__int__STATE_VARIABLE_A_22_22;
#line 890 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__int__STATE_VARIABLE_B_23_23;
#line 890 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__int__STATE_VARIABLE_C_24_24;

#line 890 "int.m"
              mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_0__tmp_copy_20;
#line 890 "int.m"
              mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_18;
#line 890 "int.m"
              mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_16;
#line 890 "int.m"
              mercury__int__Lo_11 = mercury__int__Lo__tmp_copy_11;
#line 890 "int.m"
            }
#line 890 "int.m"
            continue;
#line 890 "int.m"
          }
#line 891 "int.m"
        else
#line 891 "int.m"
          {
#line 891 "int.m"
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
#line 891 "int.m"
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
#line 891 "int.m"
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
#line 891 "int.m"
          }
#line 891 "int.m"
      }
#line 891 "int.m"
      break;
#line 891 "int.m"
    }
#line 361 "int.m"
}

#line 359 "int.m"
void MR_CALL 
mercury__int__fold_up3_9_p_0(
#line 359 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_30,
#line 359 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_31,
#line 359 "int.m"
  MR_Word mercury__int__TypeInfo_for_V_32,
#line 359 "int.m"
  MR_Word mercury__int__P_10,
#line 359 "int.m"
  MR_Integer mercury__int__Lo_11,
#line 359 "int.m"
  MR_Integer mercury__int__Hi_12,
#line 359 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
#line 359 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
#line 359 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
#line 359 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
#line 359 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
#line 359 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
#line 359 "int.m"
{
#line 891 "int.m"
  while (MR_TRUE)
#line 891 "int.m"
    {
#line 891 "int.m"
      /* tailcall optimized into a loop */
#line 891 "int.m"
      {
#line 891 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

#line 891 "int.m"
        if (mercury__int__succeeded)
#line 890 "int.m"
          {
#line 890 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
#line 890 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
#line 890 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
#line 890 "int.m"
            MR_Integer mercury__int__V_25_25;
#line 890 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

#line 890 "int.m"
            {
#line 890 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Lo_11)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
#line 890 "int.m"
            mercury__int__V_25_25 = (mercury__int__Lo_11 + (MR_Integer) 1);
#line 890 "int.m"
            /* direct tailcall eliminated */
#line 890 "int.m"
            {
#line 890 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_11 = mercury__int__V_25_25;
#line 890 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__int__STATE_VARIABLE_A_22_22;
#line 890 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__int__STATE_VARIABLE_B_23_23;
#line 890 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__int__STATE_VARIABLE_C_24_24;

#line 890 "int.m"
              mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_0__tmp_copy_20;
#line 890 "int.m"
              mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_18;
#line 890 "int.m"
              mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_16;
#line 890 "int.m"
              mercury__int__Lo_11 = mercury__int__Lo__tmp_copy_11;
#line 890 "int.m"
            }
#line 890 "int.m"
            continue;
#line 890 "int.m"
          }
#line 891 "int.m"
        else
#line 891 "int.m"
          {
#line 891 "int.m"
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
#line 891 "int.m"
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
#line 891 "int.m"
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
#line 891 "int.m"
          }
#line 891 "int.m"
      }
#line 891 "int.m"
      break;
#line 891 "int.m"
    }
#line 359 "int.m"
}

#line 907 "int.m"
static void MR_CALL 
mercury__int__fold_down2_7_p_8_1(
#line 907 "int.m"
  void * mercury__int__env_ptr_arg)
#line 907 "int.m"
{
#line 907 "int.m"
  {
#line 907 "int.m"
    struct mercury__int__fold_down2_7_p_8_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_down2_7_p_8_env_0_s *) mercury__int__env_ptr_arg;

#line 907 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__V_22_22 = (MR_Integer) 1;
#line 907 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__V_19_19 = ((mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__Hi_10 - (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__V_22_22);
#line 907 "int.m"
    {
#line 907 "int.m"
      mercury__int__fold_down2_7_p_8((mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__TypeInfo_for_T_23, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__TypeInfo_for_U_24, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__P_8, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__Lo_9, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__V_19_19, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_A_17_17, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_A_14, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_B_18_18, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_B_16, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__cont_env_ptr);
#line 907 "int.m"
      return;
    }
#line 907 "int.m"
  }
#line 907 "int.m"
}

#line 350 "int.m"
void MR_CALL 
mercury__int__fold_down2_7_p_8(
#line 350 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_23,
#line 350 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_24,
#line 350 "int.m"
  MR_Word mercury__int__P_8,
#line 350 "int.m"
  MR_Integer mercury__int__Lo_9,
#line 350 "int.m"
  MR_Integer mercury__int__Hi_10,
#line 350 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
#line 350 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
#line 350 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
#line 350 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_16,
#line 350 "int.m"
  MR_Cont mercury__int__cont,
#line 350 "int.m"
  void * mercury__int__cont_env_ptr)
#line 350 "int.m"
{
#line 350 "int.m"
  {
#line 350 "int.m"
    struct mercury__int__fold_down2_7_p_8_env_0_s mercury__int__env;

#line 350 "int.m"
    (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__TypeInfo_for_T_23 = mercury__int__TypeInfo_for_T_23;
#line 350 "int.m"
    (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__TypeInfo_for_U_24 = mercury__int__TypeInfo_for_U_24;
#line 350 "int.m"
    (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__P_8 = mercury__int__P_8;
#line 350 "int.m"
    (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__Lo_9 = mercury__int__Lo_9;
#line 350 "int.m"
    (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__Hi_10 = mercury__int__Hi_10;
#line 350 "int.m"
    (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_14;
#line 350 "int.m"
    (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_16;
#line 350 "int.m"
    (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__cont = mercury__int__cont;
#line 350 "int.m"
    (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__cont_env_ptr = mercury__int__cont_env_ptr;
#line 908 "int.m"
    {
#line 908 "int.m"
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__Lo_9 <= (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__Hi_10);

#line 908 "int.m"
      if (mercury__int__succeeded)
#line 907 "int.m"
        {
#line 907 "int.m"
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__P_8, (MR_Integer) 1)));

#line 907 "int.m"
          {
#line 907 "int.m"
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__P_8), ((MR_Box) ((mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &(mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &(mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_B_18_18, mercury__int__fold_down2_7_p_8_1, &mercury__int__env);
          }
#line 907 "int.m"
        }
#line 908 "int.m"
      else
#line 908 "int.m"
        {
#line 908 "int.m"
          *((mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_B_16) = mercury__int__STATE_VARIABLE_B_0_15;
#line 908 "int.m"
          *((mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_A_14) = mercury__int__STATE_VARIABLE_A_0_13;
#line 908 "int.m"
          {
#line 908 "int.m"
            ((mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__cont)((mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__cont_env_ptr);
#line 908 "int.m"
            return;
          }
#line 908 "int.m"
        }
#line 908 "int.m"
    }
#line 350 "int.m"
  }
#line 350 "int.m"
}

#line 907 "int.m"
static void MR_CALL 
mercury__int__fold_down2_7_p_7_1(
#line 907 "int.m"
  void * mercury__int__env_ptr_arg)
#line 907 "int.m"
{
#line 907 "int.m"
  {
#line 907 "int.m"
    struct mercury__int__fold_down2_7_p_7_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_down2_7_p_7_env_0_s *) mercury__int__env_ptr_arg;

#line 907 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__V_22_22 = (MR_Integer) 1;
#line 907 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__V_19_19 = ((mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__Hi_10 - (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__V_22_22);
#line 907 "int.m"
    {
#line 907 "int.m"
      mercury__int__fold_down2_7_p_7((mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__TypeInfo_for_T_23, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__TypeInfo_for_U_24, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__P_8, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__Lo_9, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__V_19_19, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_A_17_17, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_A_14, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_B_18_18, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_B_16, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__cont_env_ptr);
#line 907 "int.m"
      return;
    }
#line 907 "int.m"
  }
#line 907 "int.m"
}

#line 348 "int.m"
void MR_CALL 
mercury__int__fold_down2_7_p_7(
#line 348 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_23,
#line 348 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_24,
#line 348 "int.m"
  MR_Word mercury__int__P_8,
#line 348 "int.m"
  MR_Integer mercury__int__Lo_9,
#line 348 "int.m"
  MR_Integer mercury__int__Hi_10,
#line 348 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
#line 348 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
#line 348 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
#line 348 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_16,
#line 348 "int.m"
  MR_Cont mercury__int__cont,
#line 348 "int.m"
  void * mercury__int__cont_env_ptr)
#line 348 "int.m"
{
#line 348 "int.m"
  {
#line 348 "int.m"
    struct mercury__int__fold_down2_7_p_7_env_0_s mercury__int__env;

#line 348 "int.m"
    (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__TypeInfo_for_T_23 = mercury__int__TypeInfo_for_T_23;
#line 348 "int.m"
    (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__TypeInfo_for_U_24 = mercury__int__TypeInfo_for_U_24;
#line 348 "int.m"
    (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__P_8 = mercury__int__P_8;
#line 348 "int.m"
    (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__Lo_9 = mercury__int__Lo_9;
#line 348 "int.m"
    (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__Hi_10 = mercury__int__Hi_10;
#line 348 "int.m"
    (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_14;
#line 348 "int.m"
    (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_16;
#line 348 "int.m"
    (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__cont = mercury__int__cont;
#line 348 "int.m"
    (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__cont_env_ptr = mercury__int__cont_env_ptr;
#line 908 "int.m"
    {
#line 908 "int.m"
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__Lo_9 <= (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__Hi_10);

#line 908 "int.m"
      if (mercury__int__succeeded)
#line 907 "int.m"
        {
#line 907 "int.m"
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__P_8, (MR_Integer) 1)));

#line 907 "int.m"
          {
#line 907 "int.m"
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__P_8), ((MR_Box) ((mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &(mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &(mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_B_18_18, mercury__int__fold_down2_7_p_7_1, &mercury__int__env);
          }
#line 907 "int.m"
        }
#line 908 "int.m"
      else
#line 908 "int.m"
        {
#line 908 "int.m"
          *((mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_B_16) = mercury__int__STATE_VARIABLE_B_0_15;
#line 908 "int.m"
          *((mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_A_14) = mercury__int__STATE_VARIABLE_A_0_13;
#line 908 "int.m"
          {
#line 908 "int.m"
            ((mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__cont)((mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__cont_env_ptr);
#line 908 "int.m"
            return;
          }
#line 908 "int.m"
        }
#line 908 "int.m"
    }
#line 348 "int.m"
  }
#line 348 "int.m"
}

#line 346 "int.m"
MR_bool MR_CALL 
mercury__int__fold_down2_7_p_6(
#line 346 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_23,
#line 346 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_24,
#line 346 "int.m"
  MR_Word mercury__int__P_8,
#line 346 "int.m"
  MR_Integer mercury__int__Lo_9,
#line 346 "int.m"
  MR_Integer mercury__int__Hi_10,
#line 346 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
#line 346 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
#line 346 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
#line 346 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
#line 346 "int.m"
{
#line 908 "int.m"
  while (MR_TRUE)
#line 908 "int.m"
    {
#line 908 "int.m"
      /* tailcall optimized into a loop */
#line 908 "int.m"
      {
#line 908 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 908 "int.m"
        if (mercury__int__succeeded)
#line 907 "int.m"
          {
#line 907 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 907 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 907 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 907 "int.m"
            MR_Integer mercury__int__V_22_22;
#line 907 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 907 "int.m"
            {
#line 907 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 907 "int.m"
            if (mercury__int__succeeded)
#line 907 "int.m"
              {
#line 907 "int.m"
                mercury__int__V_22_22 = (MR_Integer) 1;
#line 907 "int.m"
                mercury__int__V_19_19 = (mercury__int__Hi_10 - mercury__int__V_22_22);
#line 907 "int.m"
                /* direct tailcall eliminated */
#line 907 "int.m"
                {
#line 907 "int.m"
                  MR_Integer mercury__int__Hi__tmp_copy_10 = mercury__int__V_19_19;
#line 907 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 907 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 907 "int.m"
                  mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 907 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 907 "int.m"
                  mercury__int__Hi_10 = mercury__int__Hi__tmp_copy_10;
#line 907 "int.m"
                }
#line 907 "int.m"
                continue;
#line 907 "int.m"
              }
#line 907 "int.m"
          }
#line 908 "int.m"
        else
#line 908 "int.m"
          {
#line 908 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 908 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 908 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 908 "int.m"
          }
#line 908 "int.m"
        return mercury__int__succeeded;
#line 908 "int.m"
      }
#line 908 "int.m"
      break;
#line 908 "int.m"
    }
#line 346 "int.m"
}

#line 344 "int.m"
MR_bool MR_CALL 
mercury__int__fold_down2_7_p_5(
#line 344 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_23,
#line 344 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_24,
#line 344 "int.m"
  MR_Word mercury__int__P_8,
#line 344 "int.m"
  MR_Integer mercury__int__Lo_9,
#line 344 "int.m"
  MR_Integer mercury__int__Hi_10,
#line 344 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
#line 344 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
#line 344 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
#line 344 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
#line 344 "int.m"
{
#line 908 "int.m"
  while (MR_TRUE)
#line 908 "int.m"
    {
#line 908 "int.m"
      /* tailcall optimized into a loop */
#line 908 "int.m"
      {
#line 908 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 908 "int.m"
        if (mercury__int__succeeded)
#line 907 "int.m"
          {
#line 907 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 907 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 907 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 907 "int.m"
            MR_Integer mercury__int__V_22_22;
#line 907 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 907 "int.m"
            {
#line 907 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 907 "int.m"
            if (mercury__int__succeeded)
#line 907 "int.m"
              {
#line 907 "int.m"
                mercury__int__V_22_22 = (MR_Integer) 1;
#line 907 "int.m"
                mercury__int__V_19_19 = (mercury__int__Hi_10 - mercury__int__V_22_22);
#line 907 "int.m"
                /* direct tailcall eliminated */
#line 907 "int.m"
                {
#line 907 "int.m"
                  MR_Integer mercury__int__Hi__tmp_copy_10 = mercury__int__V_19_19;
#line 907 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 907 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 907 "int.m"
                  mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 907 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 907 "int.m"
                  mercury__int__Hi_10 = mercury__int__Hi__tmp_copy_10;
#line 907 "int.m"
                }
#line 907 "int.m"
                continue;
#line 907 "int.m"
              }
#line 907 "int.m"
          }
#line 908 "int.m"
        else
#line 908 "int.m"
          {
#line 908 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 908 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 908 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 908 "int.m"
          }
#line 908 "int.m"
        return mercury__int__succeeded;
#line 908 "int.m"
      }
#line 908 "int.m"
      break;
#line 908 "int.m"
    }
#line 344 "int.m"
}

#line 342 "int.m"
void MR_CALL 
mercury__int__fold_down2_7_p_4(
#line 342 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_23,
#line 342 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_24,
#line 342 "int.m"
  MR_Word mercury__int__P_8,
#line 342 "int.m"
  MR_Integer mercury__int__Lo_9,
#line 342 "int.m"
  MR_Integer mercury__int__Hi_10,
#line 342 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
#line 342 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
#line 342 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
#line 342 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
#line 342 "int.m"
{
#line 908 "int.m"
  while (MR_TRUE)
#line 908 "int.m"
    {
#line 908 "int.m"
      /* tailcall optimized into a loop */
#line 908 "int.m"
      {
#line 908 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 908 "int.m"
        if (mercury__int__succeeded)
#line 907 "int.m"
          {
#line 907 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 907 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 907 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 907 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 907 "int.m"
            {
#line 907 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 907 "int.m"
            mercury__int__V_19_19 = (mercury__int__Hi_10 - (MR_Integer) 1);
#line 907 "int.m"
            /* direct tailcall eliminated */
#line 907 "int.m"
            {
#line 907 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_10 = mercury__int__V_19_19;
#line 907 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 907 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 907 "int.m"
              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 907 "int.m"
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 907 "int.m"
              mercury__int__Hi_10 = mercury__int__Hi__tmp_copy_10;
#line 907 "int.m"
            }
#line 907 "int.m"
            continue;
#line 907 "int.m"
          }
#line 908 "int.m"
        else
#line 908 "int.m"
          {
#line 908 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 908 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 908 "int.m"
          }
#line 908 "int.m"
      }
#line 908 "int.m"
      break;
#line 908 "int.m"
    }
#line 342 "int.m"
}

#line 340 "int.m"
void MR_CALL 
mercury__int__fold_down2_7_p_3(
#line 340 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_23,
#line 340 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_24,
#line 340 "int.m"
  MR_Word mercury__int__P_8,
#line 340 "int.m"
  MR_Integer mercury__int__Lo_9,
#line 340 "int.m"
  MR_Integer mercury__int__Hi_10,
#line 340 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
#line 340 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
#line 340 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
#line 340 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
#line 340 "int.m"
{
#line 908 "int.m"
  while (MR_TRUE)
#line 908 "int.m"
    {
#line 908 "int.m"
      /* tailcall optimized into a loop */
#line 908 "int.m"
      {
#line 908 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 908 "int.m"
        if (mercury__int__succeeded)
#line 907 "int.m"
          {
#line 907 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 907 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 907 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 907 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 907 "int.m"
            {
#line 907 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 907 "int.m"
            mercury__int__V_19_19 = (mercury__int__Hi_10 - (MR_Integer) 1);
#line 907 "int.m"
            /* direct tailcall eliminated */
#line 907 "int.m"
            {
#line 907 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_10 = mercury__int__V_19_19;
#line 907 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 907 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 907 "int.m"
              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 907 "int.m"
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 907 "int.m"
              mercury__int__Hi_10 = mercury__int__Hi__tmp_copy_10;
#line 907 "int.m"
            }
#line 907 "int.m"
            continue;
#line 907 "int.m"
          }
#line 908 "int.m"
        else
#line 908 "int.m"
          {
#line 908 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 908 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 908 "int.m"
          }
#line 908 "int.m"
      }
#line 908 "int.m"
      break;
#line 908 "int.m"
    }
#line 340 "int.m"
}

#line 338 "int.m"
void MR_CALL 
mercury__int__fold_down2_7_p_2(
#line 338 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_23,
#line 338 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_24,
#line 338 "int.m"
  MR_Word mercury__int__P_8,
#line 338 "int.m"
  MR_Integer mercury__int__Lo_9,
#line 338 "int.m"
  MR_Integer mercury__int__Hi_10,
#line 338 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
#line 338 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
#line 338 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
#line 338 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
#line 338 "int.m"
{
#line 908 "int.m"
  while (MR_TRUE)
#line 908 "int.m"
    {
#line 908 "int.m"
      /* tailcall optimized into a loop */
#line 908 "int.m"
      {
#line 908 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 908 "int.m"
        if (mercury__int__succeeded)
#line 907 "int.m"
          {
#line 907 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 907 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 907 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 907 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 907 "int.m"
            {
#line 907 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 907 "int.m"
            mercury__int__V_19_19 = (mercury__int__Hi_10 - (MR_Integer) 1);
#line 907 "int.m"
            /* direct tailcall eliminated */
#line 907 "int.m"
            {
#line 907 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_10 = mercury__int__V_19_19;
#line 907 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 907 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 907 "int.m"
              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 907 "int.m"
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 907 "int.m"
              mercury__int__Hi_10 = mercury__int__Hi__tmp_copy_10;
#line 907 "int.m"
            }
#line 907 "int.m"
            continue;
#line 907 "int.m"
          }
#line 908 "int.m"
        else
#line 908 "int.m"
          {
#line 908 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 908 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 908 "int.m"
          }
#line 908 "int.m"
      }
#line 908 "int.m"
      break;
#line 908 "int.m"
    }
#line 338 "int.m"
}

#line 336 "int.m"
void MR_CALL 
mercury__int__fold_down2_7_p_1(
#line 336 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_23,
#line 336 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_24,
#line 336 "int.m"
  MR_Word mercury__int__P_8,
#line 336 "int.m"
  MR_Integer mercury__int__Lo_9,
#line 336 "int.m"
  MR_Integer mercury__int__Hi_10,
#line 336 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
#line 336 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
#line 336 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
#line 336 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
#line 336 "int.m"
{
#line 908 "int.m"
  while (MR_TRUE)
#line 908 "int.m"
    {
#line 908 "int.m"
      /* tailcall optimized into a loop */
#line 908 "int.m"
      {
#line 908 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 908 "int.m"
        if (mercury__int__succeeded)
#line 907 "int.m"
          {
#line 907 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 907 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 907 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 907 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 907 "int.m"
            {
#line 907 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 907 "int.m"
            mercury__int__V_19_19 = (mercury__int__Hi_10 - (MR_Integer) 1);
#line 907 "int.m"
            /* direct tailcall eliminated */
#line 907 "int.m"
            {
#line 907 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_10 = mercury__int__V_19_19;
#line 907 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 907 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 907 "int.m"
              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 907 "int.m"
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 907 "int.m"
              mercury__int__Hi_10 = mercury__int__Hi__tmp_copy_10;
#line 907 "int.m"
            }
#line 907 "int.m"
            continue;
#line 907 "int.m"
          }
#line 908 "int.m"
        else
#line 908 "int.m"
          {
#line 908 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 908 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 908 "int.m"
          }
#line 908 "int.m"
      }
#line 908 "int.m"
      break;
#line 908 "int.m"
    }
#line 336 "int.m"
}

#line 334 "int.m"
void MR_CALL 
mercury__int__fold_down2_7_p_0(
#line 334 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_23,
#line 334 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_24,
#line 334 "int.m"
  MR_Word mercury__int__P_8,
#line 334 "int.m"
  MR_Integer mercury__int__Lo_9,
#line 334 "int.m"
  MR_Integer mercury__int__Hi_10,
#line 334 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
#line 334 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
#line 334 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
#line 334 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
#line 334 "int.m"
{
#line 908 "int.m"
  while (MR_TRUE)
#line 908 "int.m"
    {
#line 908 "int.m"
      /* tailcall optimized into a loop */
#line 908 "int.m"
      {
#line 908 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 908 "int.m"
        if (mercury__int__succeeded)
#line 907 "int.m"
          {
#line 907 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 907 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 907 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 907 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 907 "int.m"
            {
#line 907 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 907 "int.m"
            mercury__int__V_19_19 = (mercury__int__Hi_10 - (MR_Integer) 1);
#line 907 "int.m"
            /* direct tailcall eliminated */
#line 907 "int.m"
            {
#line 907 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_10 = mercury__int__V_19_19;
#line 907 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 907 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 907 "int.m"
              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 907 "int.m"
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 907 "int.m"
              mercury__int__Hi_10 = mercury__int__Hi__tmp_copy_10;
#line 907 "int.m"
            }
#line 907 "int.m"
            continue;
#line 907 "int.m"
          }
#line 908 "int.m"
        else
#line 908 "int.m"
          {
#line 908 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 908 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 908 "int.m"
          }
#line 908 "int.m"
      }
#line 908 "int.m"
      break;
#line 908 "int.m"
    }
#line 334 "int.m"
}

#line 884 "int.m"
static void MR_CALL 
mercury__int__fold_up2_7_p_9_1(
#line 884 "int.m"
  void * mercury__int__env_ptr_arg)
#line 884 "int.m"
{
#line 884 "int.m"
  {
#line 884 "int.m"
    struct mercury__int__fold_up2_7_p_9_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_up2_7_p_9_env_0_s *) mercury__int__env_ptr_arg;

#line 884 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__V_22_22 = (MR_Integer) 1;
#line 884 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__V_19_19 = ((mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__Lo_9 + (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__V_22_22);
#line 884 "int.m"
    {
#line 884 "int.m"
      mercury__int__fold_up2_7_p_9((mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__TypeInfo_for_T_23, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__TypeInfo_for_U_24, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__P_8, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__V_19_19, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__Hi_10, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_A_17_17, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_A_14, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_B_18_18, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_B_16, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__cont_env_ptr);
#line 884 "int.m"
      return;
    }
#line 884 "int.m"
  }
#line 884 "int.m"
}

#line 325 "int.m"
void MR_CALL 
mercury__int__fold_up2_7_p_9(
#line 325 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_23,
#line 325 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_24,
#line 325 "int.m"
  MR_Word mercury__int__P_8,
#line 325 "int.m"
  MR_Integer mercury__int__Lo_9,
#line 325 "int.m"
  MR_Integer mercury__int__Hi_10,
#line 325 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
#line 325 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
#line 325 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
#line 325 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_16,
#line 325 "int.m"
  MR_Cont mercury__int__cont,
#line 325 "int.m"
  void * mercury__int__cont_env_ptr)
#line 325 "int.m"
{
#line 325 "int.m"
  {
#line 325 "int.m"
    struct mercury__int__fold_up2_7_p_9_env_0_s mercury__int__env;

#line 325 "int.m"
    (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__TypeInfo_for_T_23 = mercury__int__TypeInfo_for_T_23;
#line 325 "int.m"
    (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__TypeInfo_for_U_24 = mercury__int__TypeInfo_for_U_24;
#line 325 "int.m"
    (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__P_8 = mercury__int__P_8;
#line 325 "int.m"
    (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__Lo_9 = mercury__int__Lo_9;
#line 325 "int.m"
    (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__Hi_10 = mercury__int__Hi_10;
#line 325 "int.m"
    (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_14;
#line 325 "int.m"
    (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_16;
#line 325 "int.m"
    (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__cont = mercury__int__cont;
#line 325 "int.m"
    (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__cont_env_ptr = mercury__int__cont_env_ptr;
#line 885 "int.m"
    {
#line 885 "int.m"
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__Lo_9 <= (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__Hi_10);

#line 885 "int.m"
      if (mercury__int__succeeded)
#line 884 "int.m"
        {
#line 884 "int.m"
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__P_8, (MR_Integer) 1)));

#line 884 "int.m"
          {
#line 884 "int.m"
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__P_8), ((MR_Box) ((mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &(mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &(mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_B_18_18, mercury__int__fold_up2_7_p_9_1, &mercury__int__env);
          }
#line 884 "int.m"
        }
#line 885 "int.m"
      else
#line 885 "int.m"
        {
#line 885 "int.m"
          *((mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_B_16) = mercury__int__STATE_VARIABLE_B_0_15;
#line 885 "int.m"
          *((mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_A_14) = mercury__int__STATE_VARIABLE_A_0_13;
#line 885 "int.m"
          {
#line 885 "int.m"
            ((mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__cont)((mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__cont_env_ptr);
#line 885 "int.m"
            return;
          }
#line 885 "int.m"
        }
#line 885 "int.m"
    }
#line 325 "int.m"
  }
#line 325 "int.m"
}

#line 884 "int.m"
static void MR_CALL 
mercury__int__fold_up2_7_p_8_1(
#line 884 "int.m"
  void * mercury__int__env_ptr_arg)
#line 884 "int.m"
{
#line 884 "int.m"
  {
#line 884 "int.m"
    struct mercury__int__fold_up2_7_p_8_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_up2_7_p_8_env_0_s *) mercury__int__env_ptr_arg;

#line 884 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__V_22_22 = (MR_Integer) 1;
#line 884 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__V_19_19 = ((mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__Lo_9 + (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__V_22_22);
#line 884 "int.m"
    {
#line 884 "int.m"
      mercury__int__fold_up2_7_p_8((mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__TypeInfo_for_T_23, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__TypeInfo_for_U_24, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__P_8, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__V_19_19, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__Hi_10, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_A_17_17, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_A_14, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_B_18_18, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_B_16, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__cont_env_ptr);
#line 884 "int.m"
      return;
    }
#line 884 "int.m"
  }
#line 884 "int.m"
}

#line 323 "int.m"
void MR_CALL 
mercury__int__fold_up2_7_p_8(
#line 323 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_23,
#line 323 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_24,
#line 323 "int.m"
  MR_Word mercury__int__P_8,
#line 323 "int.m"
  MR_Integer mercury__int__Lo_9,
#line 323 "int.m"
  MR_Integer mercury__int__Hi_10,
#line 323 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
#line 323 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
#line 323 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
#line 323 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_16,
#line 323 "int.m"
  MR_Cont mercury__int__cont,
#line 323 "int.m"
  void * mercury__int__cont_env_ptr)
#line 323 "int.m"
{
#line 323 "int.m"
  {
#line 323 "int.m"
    struct mercury__int__fold_up2_7_p_8_env_0_s mercury__int__env;

#line 323 "int.m"
    (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__TypeInfo_for_T_23 = mercury__int__TypeInfo_for_T_23;
#line 323 "int.m"
    (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__TypeInfo_for_U_24 = mercury__int__TypeInfo_for_U_24;
#line 323 "int.m"
    (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__P_8 = mercury__int__P_8;
#line 323 "int.m"
    (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__Lo_9 = mercury__int__Lo_9;
#line 323 "int.m"
    (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__Hi_10 = mercury__int__Hi_10;
#line 323 "int.m"
    (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_14;
#line 323 "int.m"
    (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_16;
#line 323 "int.m"
    (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__cont = mercury__int__cont;
#line 323 "int.m"
    (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__cont_env_ptr = mercury__int__cont_env_ptr;
#line 885 "int.m"
    {
#line 885 "int.m"
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__Lo_9 <= (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__Hi_10);

#line 885 "int.m"
      if (mercury__int__succeeded)
#line 884 "int.m"
        {
#line 884 "int.m"
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__P_8, (MR_Integer) 1)));

#line 884 "int.m"
          {
#line 884 "int.m"
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__P_8), ((MR_Box) ((mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &(mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &(mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_B_18_18, mercury__int__fold_up2_7_p_8_1, &mercury__int__env);
          }
#line 884 "int.m"
        }
#line 885 "int.m"
      else
#line 885 "int.m"
        {
#line 885 "int.m"
          *((mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_B_16) = mercury__int__STATE_VARIABLE_B_0_15;
#line 885 "int.m"
          *((mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_A_14) = mercury__int__STATE_VARIABLE_A_0_13;
#line 885 "int.m"
          {
#line 885 "int.m"
            ((mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__cont)((mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__cont_env_ptr);
#line 885 "int.m"
            return;
          }
#line 885 "int.m"
        }
#line 885 "int.m"
    }
#line 323 "int.m"
  }
#line 323 "int.m"
}

#line 321 "int.m"
MR_bool MR_CALL 
mercury__int__fold_up2_7_p_7(
#line 321 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_23,
#line 321 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_24,
#line 321 "int.m"
  MR_Word mercury__int__P_8,
#line 321 "int.m"
  MR_Integer mercury__int__Lo_9,
#line 321 "int.m"
  MR_Integer mercury__int__Hi_10,
#line 321 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
#line 321 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
#line 321 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
#line 321 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
#line 321 "int.m"
{
#line 885 "int.m"
  while (MR_TRUE)
#line 885 "int.m"
    {
#line 885 "int.m"
      /* tailcall optimized into a loop */
#line 885 "int.m"
      {
#line 885 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 885 "int.m"
        if (mercury__int__succeeded)
#line 884 "int.m"
          {
#line 884 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 884 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 884 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 884 "int.m"
            MR_Integer mercury__int__V_22_22;
#line 884 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 884 "int.m"
            {
#line 884 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 884 "int.m"
            if (mercury__int__succeeded)
#line 884 "int.m"
              {
#line 884 "int.m"
                mercury__int__V_22_22 = (MR_Integer) 1;
#line 884 "int.m"
                mercury__int__V_19_19 = (mercury__int__Lo_9 + mercury__int__V_22_22);
#line 884 "int.m"
                /* direct tailcall eliminated */
#line 884 "int.m"
                {
#line 884 "int.m"
                  MR_Integer mercury__int__Lo__tmp_copy_9 = mercury__int__V_19_19;
#line 884 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 884 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 884 "int.m"
                  mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 884 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 884 "int.m"
                  mercury__int__Lo_9 = mercury__int__Lo__tmp_copy_9;
#line 884 "int.m"
                }
#line 884 "int.m"
                continue;
#line 884 "int.m"
              }
#line 884 "int.m"
          }
#line 885 "int.m"
        else
#line 885 "int.m"
          {
#line 885 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 885 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 885 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 885 "int.m"
          }
#line 885 "int.m"
        return mercury__int__succeeded;
#line 885 "int.m"
      }
#line 885 "int.m"
      break;
#line 885 "int.m"
    }
#line 321 "int.m"
}

#line 319 "int.m"
MR_bool MR_CALL 
mercury__int__fold_up2_7_p_6(
#line 319 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_23,
#line 319 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_24,
#line 319 "int.m"
  MR_Word mercury__int__P_8,
#line 319 "int.m"
  MR_Integer mercury__int__Lo_9,
#line 319 "int.m"
  MR_Integer mercury__int__Hi_10,
#line 319 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
#line 319 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
#line 319 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
#line 319 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
#line 319 "int.m"
{
#line 885 "int.m"
  while (MR_TRUE)
#line 885 "int.m"
    {
#line 885 "int.m"
      /* tailcall optimized into a loop */
#line 885 "int.m"
      {
#line 885 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 885 "int.m"
        if (mercury__int__succeeded)
#line 884 "int.m"
          {
#line 884 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 884 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 884 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 884 "int.m"
            MR_Integer mercury__int__V_22_22;
#line 884 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 884 "int.m"
            {
#line 884 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 884 "int.m"
            if (mercury__int__succeeded)
#line 884 "int.m"
              {
#line 884 "int.m"
                mercury__int__V_22_22 = (MR_Integer) 1;
#line 884 "int.m"
                mercury__int__V_19_19 = (mercury__int__Lo_9 + mercury__int__V_22_22);
#line 884 "int.m"
                /* direct tailcall eliminated */
#line 884 "int.m"
                {
#line 884 "int.m"
                  MR_Integer mercury__int__Lo__tmp_copy_9 = mercury__int__V_19_19;
#line 884 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 884 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 884 "int.m"
                  mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 884 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 884 "int.m"
                  mercury__int__Lo_9 = mercury__int__Lo__tmp_copy_9;
#line 884 "int.m"
                }
#line 884 "int.m"
                continue;
#line 884 "int.m"
              }
#line 884 "int.m"
          }
#line 885 "int.m"
        else
#line 885 "int.m"
          {
#line 885 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 885 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 885 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 885 "int.m"
          }
#line 885 "int.m"
        return mercury__int__succeeded;
#line 885 "int.m"
      }
#line 885 "int.m"
      break;
#line 885 "int.m"
    }
#line 319 "int.m"
}

#line 317 "int.m"
MR_bool MR_CALL 
mercury__int__fold_up2_7_p_5(
#line 317 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_23,
#line 317 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_24,
#line 317 "int.m"
  MR_Word mercury__int__P_8,
#line 317 "int.m"
  MR_Integer mercury__int__Lo_9,
#line 317 "int.m"
  MR_Integer mercury__int__Hi_10,
#line 317 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
#line 317 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
#line 317 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
#line 317 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
#line 317 "int.m"
{
#line 885 "int.m"
  while (MR_TRUE)
#line 885 "int.m"
    {
#line 885 "int.m"
      /* tailcall optimized into a loop */
#line 885 "int.m"
      {
#line 885 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 885 "int.m"
        if (mercury__int__succeeded)
#line 884 "int.m"
          {
#line 884 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 884 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 884 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 884 "int.m"
            MR_Integer mercury__int__V_22_22;
#line 884 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 884 "int.m"
            {
#line 884 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 884 "int.m"
            if (mercury__int__succeeded)
#line 884 "int.m"
              {
#line 884 "int.m"
                mercury__int__V_22_22 = (MR_Integer) 1;
#line 884 "int.m"
                mercury__int__V_19_19 = (mercury__int__Lo_9 + mercury__int__V_22_22);
#line 884 "int.m"
                /* direct tailcall eliminated */
#line 884 "int.m"
                {
#line 884 "int.m"
                  MR_Integer mercury__int__Lo__tmp_copy_9 = mercury__int__V_19_19;
#line 884 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 884 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 884 "int.m"
                  mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 884 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 884 "int.m"
                  mercury__int__Lo_9 = mercury__int__Lo__tmp_copy_9;
#line 884 "int.m"
                }
#line 884 "int.m"
                continue;
#line 884 "int.m"
              }
#line 884 "int.m"
          }
#line 885 "int.m"
        else
#line 885 "int.m"
          {
#line 885 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 885 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 885 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 885 "int.m"
          }
#line 885 "int.m"
        return mercury__int__succeeded;
#line 885 "int.m"
      }
#line 885 "int.m"
      break;
#line 885 "int.m"
    }
#line 317 "int.m"
}

#line 315 "int.m"
void MR_CALL 
mercury__int__fold_up2_7_p_4(
#line 315 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_23,
#line 315 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_24,
#line 315 "int.m"
  MR_Word mercury__int__P_8,
#line 315 "int.m"
  MR_Integer mercury__int__Lo_9,
#line 315 "int.m"
  MR_Integer mercury__int__Hi_10,
#line 315 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
#line 315 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
#line 315 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
#line 315 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
#line 315 "int.m"
{
#line 885 "int.m"
  while (MR_TRUE)
#line 885 "int.m"
    {
#line 885 "int.m"
      /* tailcall optimized into a loop */
#line 885 "int.m"
      {
#line 885 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 885 "int.m"
        if (mercury__int__succeeded)
#line 884 "int.m"
          {
#line 884 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 884 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 884 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 884 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 884 "int.m"
            {
#line 884 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 884 "int.m"
            mercury__int__V_19_19 = (mercury__int__Lo_9 + (MR_Integer) 1);
#line 884 "int.m"
            /* direct tailcall eliminated */
#line 884 "int.m"
            {
#line 884 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_9 = mercury__int__V_19_19;
#line 884 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 884 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 884 "int.m"
              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 884 "int.m"
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 884 "int.m"
              mercury__int__Lo_9 = mercury__int__Lo__tmp_copy_9;
#line 884 "int.m"
            }
#line 884 "int.m"
            continue;
#line 884 "int.m"
          }
#line 885 "int.m"
        else
#line 885 "int.m"
          {
#line 885 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 885 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 885 "int.m"
          }
#line 885 "int.m"
      }
#line 885 "int.m"
      break;
#line 885 "int.m"
    }
#line 315 "int.m"
}

#line 313 "int.m"
void MR_CALL 
mercury__int__fold_up2_7_p_3(
#line 313 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_23,
#line 313 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_24,
#line 313 "int.m"
  MR_Word mercury__int__P_8,
#line 313 "int.m"
  MR_Integer mercury__int__Lo_9,
#line 313 "int.m"
  MR_Integer mercury__int__Hi_10,
#line 313 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
#line 313 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
#line 313 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
#line 313 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
#line 313 "int.m"
{
#line 885 "int.m"
  while (MR_TRUE)
#line 885 "int.m"
    {
#line 885 "int.m"
      /* tailcall optimized into a loop */
#line 885 "int.m"
      {
#line 885 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 885 "int.m"
        if (mercury__int__succeeded)
#line 884 "int.m"
          {
#line 884 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 884 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 884 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 884 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 884 "int.m"
            {
#line 884 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 884 "int.m"
            mercury__int__V_19_19 = (mercury__int__Lo_9 + (MR_Integer) 1);
#line 884 "int.m"
            /* direct tailcall eliminated */
#line 884 "int.m"
            {
#line 884 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_9 = mercury__int__V_19_19;
#line 884 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 884 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 884 "int.m"
              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 884 "int.m"
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 884 "int.m"
              mercury__int__Lo_9 = mercury__int__Lo__tmp_copy_9;
#line 884 "int.m"
            }
#line 884 "int.m"
            continue;
#line 884 "int.m"
          }
#line 885 "int.m"
        else
#line 885 "int.m"
          {
#line 885 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 885 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 885 "int.m"
          }
#line 885 "int.m"
      }
#line 885 "int.m"
      break;
#line 885 "int.m"
    }
#line 313 "int.m"
}

#line 311 "int.m"
void MR_CALL 
mercury__int__fold_up2_7_p_2(
#line 311 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_23,
#line 311 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_24,
#line 311 "int.m"
  MR_Word mercury__int__P_8,
#line 311 "int.m"
  MR_Integer mercury__int__Lo_9,
#line 311 "int.m"
  MR_Integer mercury__int__Hi_10,
#line 311 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
#line 311 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
#line 311 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
#line 311 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
#line 311 "int.m"
{
#line 885 "int.m"
  while (MR_TRUE)
#line 885 "int.m"
    {
#line 885 "int.m"
      /* tailcall optimized into a loop */
#line 885 "int.m"
      {
#line 885 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 885 "int.m"
        if (mercury__int__succeeded)
#line 884 "int.m"
          {
#line 884 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 884 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 884 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 884 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 884 "int.m"
            {
#line 884 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 884 "int.m"
            mercury__int__V_19_19 = (mercury__int__Lo_9 + (MR_Integer) 1);
#line 884 "int.m"
            /* direct tailcall eliminated */
#line 884 "int.m"
            {
#line 884 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_9 = mercury__int__V_19_19;
#line 884 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 884 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 884 "int.m"
              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 884 "int.m"
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 884 "int.m"
              mercury__int__Lo_9 = mercury__int__Lo__tmp_copy_9;
#line 884 "int.m"
            }
#line 884 "int.m"
            continue;
#line 884 "int.m"
          }
#line 885 "int.m"
        else
#line 885 "int.m"
          {
#line 885 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 885 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 885 "int.m"
          }
#line 885 "int.m"
      }
#line 885 "int.m"
      break;
#line 885 "int.m"
    }
#line 311 "int.m"
}

#line 309 "int.m"
void MR_CALL 
mercury__int__fold_up2_7_p_1(
#line 309 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_23,
#line 309 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_24,
#line 309 "int.m"
  MR_Word mercury__int__P_8,
#line 309 "int.m"
  MR_Integer mercury__int__Lo_9,
#line 309 "int.m"
  MR_Integer mercury__int__Hi_10,
#line 309 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
#line 309 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
#line 309 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
#line 309 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
#line 309 "int.m"
{
#line 885 "int.m"
  while (MR_TRUE)
#line 885 "int.m"
    {
#line 885 "int.m"
      /* tailcall optimized into a loop */
#line 885 "int.m"
      {
#line 885 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 885 "int.m"
        if (mercury__int__succeeded)
#line 884 "int.m"
          {
#line 884 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 884 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 884 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 884 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 884 "int.m"
            {
#line 884 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 884 "int.m"
            mercury__int__V_19_19 = (mercury__int__Lo_9 + (MR_Integer) 1);
#line 884 "int.m"
            /* direct tailcall eliminated */
#line 884 "int.m"
            {
#line 884 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_9 = mercury__int__V_19_19;
#line 884 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 884 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 884 "int.m"
              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 884 "int.m"
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 884 "int.m"
              mercury__int__Lo_9 = mercury__int__Lo__tmp_copy_9;
#line 884 "int.m"
            }
#line 884 "int.m"
            continue;
#line 884 "int.m"
          }
#line 885 "int.m"
        else
#line 885 "int.m"
          {
#line 885 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 885 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 885 "int.m"
          }
#line 885 "int.m"
      }
#line 885 "int.m"
      break;
#line 885 "int.m"
    }
#line 309 "int.m"
}

#line 307 "int.m"
void MR_CALL 
mercury__int__fold_up2_7_p_0(
#line 307 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_23,
#line 307 "int.m"
  MR_Word mercury__int__TypeInfo_for_U_24,
#line 307 "int.m"
  MR_Word mercury__int__P_8,
#line 307 "int.m"
  MR_Integer mercury__int__Lo_9,
#line 307 "int.m"
  MR_Integer mercury__int__Hi_10,
#line 307 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
#line 307 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
#line 307 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
#line 307 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
#line 307 "int.m"
{
#line 885 "int.m"
  while (MR_TRUE)
#line 885 "int.m"
    {
#line 885 "int.m"
      /* tailcall optimized into a loop */
#line 885 "int.m"
      {
#line 885 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 885 "int.m"
        if (mercury__int__succeeded)
#line 884 "int.m"
          {
#line 884 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 884 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 884 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 884 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 884 "int.m"
            {
#line 884 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 884 "int.m"
            mercury__int__V_19_19 = (mercury__int__Lo_9 + (MR_Integer) 1);
#line 884 "int.m"
            /* direct tailcall eliminated */
#line 884 "int.m"
            {
#line 884 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_9 = mercury__int__V_19_19;
#line 884 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 884 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 884 "int.m"
              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 884 "int.m"
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 884 "int.m"
              mercury__int__Lo_9 = mercury__int__Lo__tmp_copy_9;
#line 884 "int.m"
            }
#line 884 "int.m"
            continue;
#line 884 "int.m"
          }
#line 885 "int.m"
        else
#line 885 "int.m"
          {
#line 885 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 885 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 885 "int.m"
          }
#line 885 "int.m"
      }
#line 885 "int.m"
      break;
#line 885 "int.m"
    }
#line 307 "int.m"
}

#line 299 "int.m"
MR_Box MR_CALL 
mercury__int__fold_down_4_f_0(
#line 299 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_13,
#line 299 "int.m"
  MR_Word mercury__int__F_6,
#line 299 "int.m"
  MR_Integer mercury__int__Lo_7,
#line 299 "int.m"
  MR_Integer mercury__int__Hi_8,
#line 299 "int.m"
  MR_Box mercury__int__A_9)
#line 299 "int.m"
{
#line 902 "int.m"
  while (MR_TRUE)
#line 902 "int.m"
    {
#line 902 "int.m"
      /* tailcall optimized into a loop */
#line 902 "int.m"
      {
#line 902 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);
#line 902 "int.m"
        MR_Box mercury__int__HeadVar__5_5;

#line 902 "int.m"
        if (mercury__int__succeeded)
#line 903 "int.m"
          {
#line 903 "int.m"
            MR_Integer mercury__int__V_10_10 = (mercury__int__Hi_8 - (MR_Integer) 1);
#line 903 "int.m"
            MR_Box mercury__int__V_12_12;
#line 903 "int.m"
            MR_Box MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__int__F_6, (MR_Integer) 1)));

#line 903 "int.m"
            {
#line 903 "int.m"
              mercury__int__V_12_12 = mercury__int__func_0(((MR_Box) mercury__int__F_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__A_9);
            }
#line 903 "int.m"
            /* direct tailcall eliminated */
#line 903 "int.m"
            {
#line 903 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_8 = mercury__int__V_10_10;
#line 903 "int.m"
              MR_Box mercury__int__A__tmp_copy_9 = mercury__int__V_12_12;

#line 903 "int.m"
              mercury__int__A_9 = mercury__int__A__tmp_copy_9;
#line 903 "int.m"
              mercury__int__Hi_8 = mercury__int__Hi__tmp_copy_8;
#line 903 "int.m"
            }
#line 903 "int.m"
            continue;
#line 903 "int.m"
          }
#line 902 "int.m"
        else
#line 902 "int.m"
          mercury__int__HeadVar__5_5 = mercury__int__A_9;
#line 902 "int.m"
        return mercury__int__HeadVar__5_5;
#line 902 "int.m"
      }
#line 902 "int.m"
      break;
#line 902 "int.m"
    }
#line 299 "int.m"
}

#line 292 "int.m"
void MR_CALL 
mercury__int__fold_down_5_p_10(
#line 292 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_16,
#line 292 "int.m"
  MR_Word mercury__int__P_6,
#line 292 "int.m"
  MR_Integer mercury__int__Lo_7,
#line 292 "int.m"
  MR_Integer mercury__int__Hi_8,
#line 292 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
#line 292 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
#line 292 "int.m"
{
#line 899 "int.m"
  while (MR_TRUE)
#line 899 "int.m"
    {
#line 899 "int.m"
      /* tailcall optimized into a loop */
#line 899 "int.m"
      {
#line 899 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 899 "int.m"
        if (mercury__int__succeeded)
#line 898 "int.m"
          {
#line 898 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 898 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 898 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 898 "int.m"
            {
#line 898 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 898 "int.m"
            mercury__int__V_13_13 = (mercury__int__Hi_8 - (MR_Integer) 1);
#line 898 "int.m"
            /* direct tailcall eliminated */
#line 898 "int.m"
            {
#line 898 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_8 = mercury__int__V_13_13;
#line 898 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 898 "int.m"
              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 898 "int.m"
              mercury__int__Hi_8 = mercury__int__Hi__tmp_copy_8;
#line 898 "int.m"
            }
#line 898 "int.m"
            continue;
#line 898 "int.m"
          }
#line 899 "int.m"
        else
#line 898 "int.m"
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 899 "int.m"
      }
#line 899 "int.m"
      break;
#line 899 "int.m"
    }
#line 292 "int.m"
}

#line 290 "int.m"
void MR_CALL 
mercury__int__fold_down_5_p_9(
#line 290 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_16,
#line 290 "int.m"
  MR_Word mercury__int__P_6,
#line 290 "int.m"
  MR_Integer mercury__int__Lo_7,
#line 290 "int.m"
  MR_Integer mercury__int__Hi_8,
#line 290 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
#line 290 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
#line 290 "int.m"
{
#line 899 "int.m"
  while (MR_TRUE)
#line 899 "int.m"
    {
#line 899 "int.m"
      /* tailcall optimized into a loop */
#line 899 "int.m"
      {
#line 899 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 899 "int.m"
        if (mercury__int__succeeded)
#line 898 "int.m"
          {
#line 898 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 898 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 898 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 898 "int.m"
            {
#line 898 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 898 "int.m"
            mercury__int__V_13_13 = (mercury__int__Hi_8 - (MR_Integer) 1);
#line 898 "int.m"
            /* direct tailcall eliminated */
#line 898 "int.m"
            {
#line 898 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_8 = mercury__int__V_13_13;
#line 898 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 898 "int.m"
              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 898 "int.m"
              mercury__int__Hi_8 = mercury__int__Hi__tmp_copy_8;
#line 898 "int.m"
            }
#line 898 "int.m"
            continue;
#line 898 "int.m"
          }
#line 899 "int.m"
        else
#line 898 "int.m"
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 899 "int.m"
      }
#line 899 "int.m"
      break;
#line 899 "int.m"
    }
#line 290 "int.m"
}

#line 898 "int.m"
static void MR_CALL 
mercury__int__fold_down_5_p_8_1(
#line 898 "int.m"
  void * mercury__int__env_ptr_arg)
#line 898 "int.m"
{
#line 898 "int.m"
  {
#line 898 "int.m"
    struct mercury__int__fold_down_5_p_8_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_down_5_p_8_env_0_s *) mercury__int__env_ptr_arg;

#line 898 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__V_15_15 = (MR_Integer) 1;
#line 898 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__V_13_13 = ((mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__Hi_8 - (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__V_15_15);
#line 898 "int.m"
    {
#line 898 "int.m"
      mercury__int__fold_down_5_p_8((mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__TypeInfo_for_T_16, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__P_6, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__Lo_7, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__V_13_13, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__STATE_VARIABLE_A_12_12, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__STATE_VARIABLE_A_11, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__cont_env_ptr);
#line 898 "int.m"
      return;
    }
#line 898 "int.m"
  }
#line 898 "int.m"
}

#line 288 "int.m"
void MR_CALL 
mercury__int__fold_down_5_p_8(
#line 288 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_16,
#line 288 "int.m"
  MR_Word mercury__int__P_6,
#line 288 "int.m"
  MR_Integer mercury__int__Lo_7,
#line 288 "int.m"
  MR_Integer mercury__int__Hi_8,
#line 288 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
#line 288 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_11,
#line 288 "int.m"
  MR_Cont mercury__int__cont,
#line 288 "int.m"
  void * mercury__int__cont_env_ptr)
#line 288 "int.m"
{
#line 288 "int.m"
  {
#line 288 "int.m"
    struct mercury__int__fold_down_5_p_8_env_0_s mercury__int__env;

#line 288 "int.m"
    (mercury__int__env).mercury__int__fold_down_5_p_8_env_0__TypeInfo_for_T_16 = mercury__int__TypeInfo_for_T_16;
#line 288 "int.m"
    (mercury__int__env).mercury__int__fold_down_5_p_8_env_0__P_6 = mercury__int__P_6;
#line 288 "int.m"
    (mercury__int__env).mercury__int__fold_down_5_p_8_env_0__Lo_7 = mercury__int__Lo_7;
#line 288 "int.m"
    (mercury__int__env).mercury__int__fold_down_5_p_8_env_0__Hi_8 = mercury__int__Hi_8;
#line 288 "int.m"
    (mercury__int__env).mercury__int__fold_down_5_p_8_env_0__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_11;
#line 288 "int.m"
    (mercury__int__env).mercury__int__fold_down_5_p_8_env_0__cont = mercury__int__cont;
#line 288 "int.m"
    (mercury__int__env).mercury__int__fold_down_5_p_8_env_0__cont_env_ptr = mercury__int__cont_env_ptr;
#line 899 "int.m"
    {
#line 899 "int.m"
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_down_5_p_8_env_0__Lo_7 <= (mercury__int__env).mercury__int__fold_down_5_p_8_env_0__Hi_8);

#line 899 "int.m"
      if (mercury__int__succeeded)
#line 898 "int.m"
        {
#line 898 "int.m"
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_down_5_p_8_env_0__P_6, (MR_Integer) 1)));

#line 898 "int.m"
          {
#line 898 "int.m"
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_down_5_p_8_env_0__P_6), ((MR_Box) ((mercury__int__env).mercury__int__fold_down_5_p_8_env_0__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &(mercury__int__env).mercury__int__fold_down_5_p_8_env_0__STATE_VARIABLE_A_12_12, mercury__int__fold_down_5_p_8_1, &mercury__int__env);
          }
#line 898 "int.m"
        }
#line 899 "int.m"
      else
#line 898 "int.m"
        {
#line 898 "int.m"
          *((mercury__int__env).mercury__int__fold_down_5_p_8_env_0__STATE_VARIABLE_A_11) = mercury__int__STATE_VARIABLE_A_0_10;
#line 898 "int.m"
          {
#line 898 "int.m"
            ((mercury__int__env).mercury__int__fold_down_5_p_8_env_0__cont)((mercury__int__env).mercury__int__fold_down_5_p_8_env_0__cont_env_ptr);
#line 898 "int.m"
            return;
          }
#line 898 "int.m"
        }
#line 899 "int.m"
    }
#line 288 "int.m"
  }
#line 288 "int.m"
}

#line 898 "int.m"
static void MR_CALL 
mercury__int__fold_down_5_p_7_1(
#line 898 "int.m"
  void * mercury__int__env_ptr_arg)
#line 898 "int.m"
{
#line 898 "int.m"
  {
#line 898 "int.m"
    struct mercury__int__fold_down_5_p_7_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_down_5_p_7_env_0_s *) mercury__int__env_ptr_arg;

#line 898 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__V_15_15 = (MR_Integer) 1;
#line 898 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__V_13_13 = ((mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__Hi_8 - (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__V_15_15);
#line 898 "int.m"
    {
#line 898 "int.m"
      mercury__int__fold_down_5_p_7((mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__TypeInfo_for_T_16, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__P_6, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__Lo_7, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__V_13_13, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__STATE_VARIABLE_A_12_12, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__STATE_VARIABLE_A_11, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__cont_env_ptr);
#line 898 "int.m"
      return;
    }
#line 898 "int.m"
  }
#line 898 "int.m"
}

#line 286 "int.m"
void MR_CALL 
mercury__int__fold_down_5_p_7(
#line 286 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_16,
#line 286 "int.m"
  MR_Word mercury__int__P_6,
#line 286 "int.m"
  MR_Integer mercury__int__Lo_7,
#line 286 "int.m"
  MR_Integer mercury__int__Hi_8,
#line 286 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
#line 286 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_11,
#line 286 "int.m"
  MR_Cont mercury__int__cont,
#line 286 "int.m"
  void * mercury__int__cont_env_ptr)
#line 286 "int.m"
{
#line 286 "int.m"
  {
#line 286 "int.m"
    struct mercury__int__fold_down_5_p_7_env_0_s mercury__int__env;

#line 286 "int.m"
    (mercury__int__env).mercury__int__fold_down_5_p_7_env_0__TypeInfo_for_T_16 = mercury__int__TypeInfo_for_T_16;
#line 286 "int.m"
    (mercury__int__env).mercury__int__fold_down_5_p_7_env_0__P_6 = mercury__int__P_6;
#line 286 "int.m"
    (mercury__int__env).mercury__int__fold_down_5_p_7_env_0__Lo_7 = mercury__int__Lo_7;
#line 286 "int.m"
    (mercury__int__env).mercury__int__fold_down_5_p_7_env_0__Hi_8 = mercury__int__Hi_8;
#line 286 "int.m"
    (mercury__int__env).mercury__int__fold_down_5_p_7_env_0__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_11;
#line 286 "int.m"
    (mercury__int__env).mercury__int__fold_down_5_p_7_env_0__cont = mercury__int__cont;
#line 286 "int.m"
    (mercury__int__env).mercury__int__fold_down_5_p_7_env_0__cont_env_ptr = mercury__int__cont_env_ptr;
#line 899 "int.m"
    {
#line 899 "int.m"
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_down_5_p_7_env_0__Lo_7 <= (mercury__int__env).mercury__int__fold_down_5_p_7_env_0__Hi_8);

#line 899 "int.m"
      if (mercury__int__succeeded)
#line 898 "int.m"
        {
#line 898 "int.m"
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_down_5_p_7_env_0__P_6, (MR_Integer) 1)));

#line 898 "int.m"
          {
#line 898 "int.m"
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_down_5_p_7_env_0__P_6), ((MR_Box) ((mercury__int__env).mercury__int__fold_down_5_p_7_env_0__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &(mercury__int__env).mercury__int__fold_down_5_p_7_env_0__STATE_VARIABLE_A_12_12, mercury__int__fold_down_5_p_7_1, &mercury__int__env);
          }
#line 898 "int.m"
        }
#line 899 "int.m"
      else
#line 898 "int.m"
        {
#line 898 "int.m"
          *((mercury__int__env).mercury__int__fold_down_5_p_7_env_0__STATE_VARIABLE_A_11) = mercury__int__STATE_VARIABLE_A_0_10;
#line 898 "int.m"
          {
#line 898 "int.m"
            ((mercury__int__env).mercury__int__fold_down_5_p_7_env_0__cont)((mercury__int__env).mercury__int__fold_down_5_p_7_env_0__cont_env_ptr);
#line 898 "int.m"
            return;
          }
#line 898 "int.m"
        }
#line 899 "int.m"
    }
#line 286 "int.m"
  }
#line 286 "int.m"
}

#line 284 "int.m"
MR_bool MR_CALL 
mercury__int__fold_down_5_p_6(
#line 284 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_16,
#line 284 "int.m"
  MR_Word mercury__int__P_6,
#line 284 "int.m"
  MR_Integer mercury__int__Lo_7,
#line 284 "int.m"
  MR_Integer mercury__int__Hi_8,
#line 284 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
#line 284 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
#line 284 "int.m"
{
#line 899 "int.m"
  while (MR_TRUE)
#line 899 "int.m"
    {
#line 899 "int.m"
      /* tailcall optimized into a loop */
#line 899 "int.m"
      {
#line 899 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 899 "int.m"
        if (mercury__int__succeeded)
#line 898 "int.m"
          {
#line 898 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 898 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 898 "int.m"
            MR_Integer mercury__int__V_15_15;
#line 898 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 898 "int.m"
            {
#line 898 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 898 "int.m"
            if (mercury__int__succeeded)
#line 898 "int.m"
              {
#line 898 "int.m"
                mercury__int__V_15_15 = (MR_Integer) 1;
#line 898 "int.m"
                mercury__int__V_13_13 = (mercury__int__Hi_8 - mercury__int__V_15_15);
#line 898 "int.m"
                /* direct tailcall eliminated */
#line 898 "int.m"
                {
#line 898 "int.m"
                  MR_Integer mercury__int__Hi__tmp_copy_8 = mercury__int__V_13_13;
#line 898 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 898 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 898 "int.m"
                  mercury__int__Hi_8 = mercury__int__Hi__tmp_copy_8;
#line 898 "int.m"
                }
#line 898 "int.m"
                continue;
#line 898 "int.m"
              }
#line 898 "int.m"
          }
#line 899 "int.m"
        else
#line 898 "int.m"
          {
#line 898 "int.m"
            *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 898 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 898 "int.m"
          }
#line 899 "int.m"
        return mercury__int__succeeded;
#line 899 "int.m"
      }
#line 899 "int.m"
      break;
#line 899 "int.m"
    }
#line 284 "int.m"
}

#line 282 "int.m"
MR_bool MR_CALL 
mercury__int__fold_down_5_p_5(
#line 282 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_16,
#line 282 "int.m"
  MR_Word mercury__int__P_6,
#line 282 "int.m"
  MR_Integer mercury__int__Lo_7,
#line 282 "int.m"
  MR_Integer mercury__int__Hi_8,
#line 282 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
#line 282 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
#line 282 "int.m"
{
#line 899 "int.m"
  while (MR_TRUE)
#line 899 "int.m"
    {
#line 899 "int.m"
      /* tailcall optimized into a loop */
#line 899 "int.m"
      {
#line 899 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 899 "int.m"
        if (mercury__int__succeeded)
#line 898 "int.m"
          {
#line 898 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 898 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 898 "int.m"
            MR_Integer mercury__int__V_15_15;
#line 898 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 898 "int.m"
            {
#line 898 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 898 "int.m"
            if (mercury__int__succeeded)
#line 898 "int.m"
              {
#line 898 "int.m"
                mercury__int__V_15_15 = (MR_Integer) 1;
#line 898 "int.m"
                mercury__int__V_13_13 = (mercury__int__Hi_8 - mercury__int__V_15_15);
#line 898 "int.m"
                /* direct tailcall eliminated */
#line 898 "int.m"
                {
#line 898 "int.m"
                  MR_Integer mercury__int__Hi__tmp_copy_8 = mercury__int__V_13_13;
#line 898 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 898 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 898 "int.m"
                  mercury__int__Hi_8 = mercury__int__Hi__tmp_copy_8;
#line 898 "int.m"
                }
#line 898 "int.m"
                continue;
#line 898 "int.m"
              }
#line 898 "int.m"
          }
#line 899 "int.m"
        else
#line 898 "int.m"
          {
#line 898 "int.m"
            *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 898 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 898 "int.m"
          }
#line 899 "int.m"
        return mercury__int__succeeded;
#line 899 "int.m"
      }
#line 899 "int.m"
      break;
#line 899 "int.m"
    }
#line 282 "int.m"
}

#line 280 "int.m"
MR_bool MR_CALL 
mercury__int__fold_down_5_p_4(
#line 280 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_16,
#line 280 "int.m"
  MR_Word mercury__int__P_6,
#line 280 "int.m"
  MR_Integer mercury__int__Lo_7,
#line 280 "int.m"
  MR_Integer mercury__int__Hi_8,
#line 280 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
#line 280 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
#line 280 "int.m"
{
#line 899 "int.m"
  while (MR_TRUE)
#line 899 "int.m"
    {
#line 899 "int.m"
      /* tailcall optimized into a loop */
#line 899 "int.m"
      {
#line 899 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 899 "int.m"
        if (mercury__int__succeeded)
#line 898 "int.m"
          {
#line 898 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 898 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 898 "int.m"
            MR_Integer mercury__int__V_15_15;
#line 898 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 898 "int.m"
            {
#line 898 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 898 "int.m"
            if (mercury__int__succeeded)
#line 898 "int.m"
              {
#line 898 "int.m"
                mercury__int__V_15_15 = (MR_Integer) 1;
#line 898 "int.m"
                mercury__int__V_13_13 = (mercury__int__Hi_8 - mercury__int__V_15_15);
#line 898 "int.m"
                /* direct tailcall eliminated */
#line 898 "int.m"
                {
#line 898 "int.m"
                  MR_Integer mercury__int__Hi__tmp_copy_8 = mercury__int__V_13_13;
#line 898 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 898 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 898 "int.m"
                  mercury__int__Hi_8 = mercury__int__Hi__tmp_copy_8;
#line 898 "int.m"
                }
#line 898 "int.m"
                continue;
#line 898 "int.m"
              }
#line 898 "int.m"
          }
#line 899 "int.m"
        else
#line 898 "int.m"
          {
#line 898 "int.m"
            *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 898 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 898 "int.m"
          }
#line 899 "int.m"
        return mercury__int__succeeded;
#line 899 "int.m"
      }
#line 899 "int.m"
      break;
#line 899 "int.m"
    }
#line 280 "int.m"
}

#line 278 "int.m"
void MR_CALL 
mercury__int__fold_down_5_p_3(
#line 278 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_16,
#line 278 "int.m"
  MR_Word mercury__int__P_6,
#line 278 "int.m"
  MR_Integer mercury__int__Lo_7,
#line 278 "int.m"
  MR_Integer mercury__int__Hi_8,
#line 278 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
#line 278 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
#line 278 "int.m"
{
#line 899 "int.m"
  while (MR_TRUE)
#line 899 "int.m"
    {
#line 899 "int.m"
      /* tailcall optimized into a loop */
#line 899 "int.m"
      {
#line 899 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 899 "int.m"
        if (mercury__int__succeeded)
#line 898 "int.m"
          {
#line 898 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 898 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 898 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 898 "int.m"
            {
#line 898 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 898 "int.m"
            mercury__int__V_13_13 = (mercury__int__Hi_8 - (MR_Integer) 1);
#line 898 "int.m"
            /* direct tailcall eliminated */
#line 898 "int.m"
            {
#line 898 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_8 = mercury__int__V_13_13;
#line 898 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 898 "int.m"
              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 898 "int.m"
              mercury__int__Hi_8 = mercury__int__Hi__tmp_copy_8;
#line 898 "int.m"
            }
#line 898 "int.m"
            continue;
#line 898 "int.m"
          }
#line 899 "int.m"
        else
#line 898 "int.m"
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 899 "int.m"
      }
#line 899 "int.m"
      break;
#line 899 "int.m"
    }
#line 278 "int.m"
}

#line 277 "int.m"
void MR_CALL 
mercury__int__fold_down_5_p_2(
#line 277 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_16,
#line 277 "int.m"
  MR_Word mercury__int__P_6,
#line 277 "int.m"
  MR_Integer mercury__int__Lo_7,
#line 277 "int.m"
  MR_Integer mercury__int__Hi_8,
#line 277 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
#line 277 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
#line 277 "int.m"
{
#line 899 "int.m"
  while (MR_TRUE)
#line 899 "int.m"
    {
#line 899 "int.m"
      /* tailcall optimized into a loop */
#line 899 "int.m"
      {
#line 899 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 899 "int.m"
        if (mercury__int__succeeded)
#line 898 "int.m"
          {
#line 898 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 898 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 898 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 898 "int.m"
            {
#line 898 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 898 "int.m"
            mercury__int__V_13_13 = (mercury__int__Hi_8 - (MR_Integer) 1);
#line 898 "int.m"
            /* direct tailcall eliminated */
#line 898 "int.m"
            {
#line 898 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_8 = mercury__int__V_13_13;
#line 898 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 898 "int.m"
              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 898 "int.m"
              mercury__int__Hi_8 = mercury__int__Hi__tmp_copy_8;
#line 898 "int.m"
            }
#line 898 "int.m"
            continue;
#line 898 "int.m"
          }
#line 899 "int.m"
        else
#line 898 "int.m"
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 899 "int.m"
      }
#line 899 "int.m"
      break;
#line 899 "int.m"
    }
#line 277 "int.m"
}

#line 276 "int.m"
void MR_CALL 
mercury__int__fold_down_5_p_1(
#line 276 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_16,
#line 276 "int.m"
  MR_Word mercury__int__P_6,
#line 276 "int.m"
  MR_Integer mercury__int__Lo_7,
#line 276 "int.m"
  MR_Integer mercury__int__Hi_8,
#line 276 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
#line 276 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
#line 276 "int.m"
{
#line 899 "int.m"
  while (MR_TRUE)
#line 899 "int.m"
    {
#line 899 "int.m"
      /* tailcall optimized into a loop */
#line 899 "int.m"
      {
#line 899 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 899 "int.m"
        if (mercury__int__succeeded)
#line 898 "int.m"
          {
#line 898 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 898 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 898 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 898 "int.m"
            {
#line 898 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 898 "int.m"
            mercury__int__V_13_13 = (mercury__int__Hi_8 - (MR_Integer) 1);
#line 898 "int.m"
            /* direct tailcall eliminated */
#line 898 "int.m"
            {
#line 898 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_8 = mercury__int__V_13_13;
#line 898 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 898 "int.m"
              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 898 "int.m"
              mercury__int__Hi_8 = mercury__int__Hi__tmp_copy_8;
#line 898 "int.m"
            }
#line 898 "int.m"
            continue;
#line 898 "int.m"
          }
#line 899 "int.m"
        else
#line 898 "int.m"
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 899 "int.m"
      }
#line 899 "int.m"
      break;
#line 899 "int.m"
    }
#line 276 "int.m"
}

#line 275 "int.m"
void MR_CALL 
mercury__int__fold_down_5_p_0(
#line 275 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_16,
#line 275 "int.m"
  MR_Word mercury__int__P_6,
#line 275 "int.m"
  MR_Integer mercury__int__Lo_7,
#line 275 "int.m"
  MR_Integer mercury__int__Hi_8,
#line 275 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
#line 275 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
#line 275 "int.m"
{
#line 899 "int.m"
  while (MR_TRUE)
#line 899 "int.m"
    {
#line 899 "int.m"
      /* tailcall optimized into a loop */
#line 899 "int.m"
      {
#line 899 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 899 "int.m"
        if (mercury__int__succeeded)
#line 898 "int.m"
          {
#line 898 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 898 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 898 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 898 "int.m"
            {
#line 898 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 898 "int.m"
            mercury__int__V_13_13 = (mercury__int__Hi_8 - (MR_Integer) 1);
#line 898 "int.m"
            /* direct tailcall eliminated */
#line 898 "int.m"
            {
#line 898 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_8 = mercury__int__V_13_13;
#line 898 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 898 "int.m"
              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 898 "int.m"
              mercury__int__Hi_8 = mercury__int__Hi__tmp_copy_8;
#line 898 "int.m"
            }
#line 898 "int.m"
            continue;
#line 898 "int.m"
          }
#line 899 "int.m"
        else
#line 898 "int.m"
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 899 "int.m"
      }
#line 899 "int.m"
      break;
#line 899 "int.m"
    }
#line 275 "int.m"
}

#line 268 "int.m"
MR_Box MR_CALL 
mercury__int__fold_up_4_f_0(
#line 268 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_13,
#line 268 "int.m"
  MR_Word mercury__int__F_6,
#line 268 "int.m"
  MR_Integer mercury__int__Lo_7,
#line 268 "int.m"
  MR_Integer mercury__int__Hi_8,
#line 268 "int.m"
  MR_Box mercury__int__A_9)
#line 268 "int.m"
{
#line 879 "int.m"
  while (MR_TRUE)
#line 879 "int.m"
    {
#line 879 "int.m"
      /* tailcall optimized into a loop */
#line 879 "int.m"
      {
#line 879 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);
#line 879 "int.m"
        MR_Box mercury__int__HeadVar__5_5;

#line 879 "int.m"
        if (mercury__int__succeeded)
#line 880 "int.m"
          {
#line 880 "int.m"
            MR_Integer mercury__int__V_10_10 = (mercury__int__Lo_7 + (MR_Integer) 1);
#line 880 "int.m"
            MR_Box mercury__int__V_12_12;
#line 880 "int.m"
            MR_Box MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__int__F_6, (MR_Integer) 1)));

#line 880 "int.m"
            {
#line 880 "int.m"
              mercury__int__V_12_12 = mercury__int__func_0(((MR_Box) mercury__int__F_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__A_9);
            }
#line 880 "int.m"
            /* direct tailcall eliminated */
#line 880 "int.m"
            {
#line 880 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_7 = mercury__int__V_10_10;
#line 880 "int.m"
              MR_Box mercury__int__A__tmp_copy_9 = mercury__int__V_12_12;

#line 880 "int.m"
              mercury__int__A_9 = mercury__int__A__tmp_copy_9;
#line 880 "int.m"
              mercury__int__Lo_7 = mercury__int__Lo__tmp_copy_7;
#line 880 "int.m"
            }
#line 880 "int.m"
            continue;
#line 880 "int.m"
          }
#line 879 "int.m"
        else
#line 879 "int.m"
          mercury__int__HeadVar__5_5 = mercury__int__A_9;
#line 879 "int.m"
        return mercury__int__HeadVar__5_5;
#line 879 "int.m"
      }
#line 879 "int.m"
      break;
#line 879 "int.m"
    }
#line 268 "int.m"
}

#line 261 "int.m"
void MR_CALL 
mercury__int__fold_up_5_p_10(
#line 261 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_16,
#line 261 "int.m"
  MR_Word mercury__int__P_6,
#line 261 "int.m"
  MR_Integer mercury__int__Lo_7,
#line 261 "int.m"
  MR_Integer mercury__int__Hi_8,
#line 261 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
#line 261 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
#line 261 "int.m"
{
#line 876 "int.m"
  while (MR_TRUE)
#line 876 "int.m"
    {
#line 876 "int.m"
      /* tailcall optimized into a loop */
#line 876 "int.m"
      {
#line 876 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 876 "int.m"
        if (mercury__int__succeeded)
#line 875 "int.m"
          {
#line 875 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 875 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 875 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 875 "int.m"
            {
#line 875 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 875 "int.m"
            mercury__int__V_13_13 = (mercury__int__Lo_7 + (MR_Integer) 1);
#line 875 "int.m"
            /* direct tailcall eliminated */
#line 875 "int.m"
            {
#line 875 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_7 = mercury__int__V_13_13;
#line 875 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 875 "int.m"
              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 875 "int.m"
              mercury__int__Lo_7 = mercury__int__Lo__tmp_copy_7;
#line 875 "int.m"
            }
#line 875 "int.m"
            continue;
#line 875 "int.m"
          }
#line 876 "int.m"
        else
#line 875 "int.m"
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 876 "int.m"
      }
#line 876 "int.m"
      break;
#line 876 "int.m"
    }
#line 261 "int.m"
}

#line 259 "int.m"
void MR_CALL 
mercury__int__fold_up_5_p_9(
#line 259 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_16,
#line 259 "int.m"
  MR_Word mercury__int__P_6,
#line 259 "int.m"
  MR_Integer mercury__int__Lo_7,
#line 259 "int.m"
  MR_Integer mercury__int__Hi_8,
#line 259 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
#line 259 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
#line 259 "int.m"
{
#line 876 "int.m"
  while (MR_TRUE)
#line 876 "int.m"
    {
#line 876 "int.m"
      /* tailcall optimized into a loop */
#line 876 "int.m"
      {
#line 876 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 876 "int.m"
        if (mercury__int__succeeded)
#line 875 "int.m"
          {
#line 875 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 875 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 875 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 875 "int.m"
            {
#line 875 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 875 "int.m"
            mercury__int__V_13_13 = (mercury__int__Lo_7 + (MR_Integer) 1);
#line 875 "int.m"
            /* direct tailcall eliminated */
#line 875 "int.m"
            {
#line 875 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_7 = mercury__int__V_13_13;
#line 875 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 875 "int.m"
              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 875 "int.m"
              mercury__int__Lo_7 = mercury__int__Lo__tmp_copy_7;
#line 875 "int.m"
            }
#line 875 "int.m"
            continue;
#line 875 "int.m"
          }
#line 876 "int.m"
        else
#line 875 "int.m"
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 876 "int.m"
      }
#line 876 "int.m"
      break;
#line 876 "int.m"
    }
#line 259 "int.m"
}

#line 875 "int.m"
static void MR_CALL 
mercury__int__fold_up_5_p_8_1(
#line 875 "int.m"
  void * mercury__int__env_ptr_arg)
#line 875 "int.m"
{
#line 875 "int.m"
  {
#line 875 "int.m"
    struct mercury__int__fold_up_5_p_8_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_up_5_p_8_env_0_s *) mercury__int__env_ptr_arg;

#line 875 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__V_15_15 = (MR_Integer) 1;
#line 875 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__V_13_13 = ((mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__Lo_7 + (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__V_15_15);
#line 875 "int.m"
    {
#line 875 "int.m"
      mercury__int__fold_up_5_p_8((mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__TypeInfo_for_T_16, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__P_6, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__V_13_13, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__Hi_8, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__STATE_VARIABLE_A_12_12, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__STATE_VARIABLE_A_11, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__cont_env_ptr);
#line 875 "int.m"
      return;
    }
#line 875 "int.m"
  }
#line 875 "int.m"
}

#line 257 "int.m"
void MR_CALL 
mercury__int__fold_up_5_p_8(
#line 257 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_16,
#line 257 "int.m"
  MR_Word mercury__int__P_6,
#line 257 "int.m"
  MR_Integer mercury__int__Lo_7,
#line 257 "int.m"
  MR_Integer mercury__int__Hi_8,
#line 257 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
#line 257 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_11,
#line 257 "int.m"
  MR_Cont mercury__int__cont,
#line 257 "int.m"
  void * mercury__int__cont_env_ptr)
#line 257 "int.m"
{
#line 257 "int.m"
  {
#line 257 "int.m"
    struct mercury__int__fold_up_5_p_8_env_0_s mercury__int__env;

#line 257 "int.m"
    (mercury__int__env).mercury__int__fold_up_5_p_8_env_0__TypeInfo_for_T_16 = mercury__int__TypeInfo_for_T_16;
#line 257 "int.m"
    (mercury__int__env).mercury__int__fold_up_5_p_8_env_0__P_6 = mercury__int__P_6;
#line 257 "int.m"
    (mercury__int__env).mercury__int__fold_up_5_p_8_env_0__Lo_7 = mercury__int__Lo_7;
#line 257 "int.m"
    (mercury__int__env).mercury__int__fold_up_5_p_8_env_0__Hi_8 = mercury__int__Hi_8;
#line 257 "int.m"
    (mercury__int__env).mercury__int__fold_up_5_p_8_env_0__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_11;
#line 257 "int.m"
    (mercury__int__env).mercury__int__fold_up_5_p_8_env_0__cont = mercury__int__cont;
#line 257 "int.m"
    (mercury__int__env).mercury__int__fold_up_5_p_8_env_0__cont_env_ptr = mercury__int__cont_env_ptr;
#line 876 "int.m"
    {
#line 876 "int.m"
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_up_5_p_8_env_0__Lo_7 <= (mercury__int__env).mercury__int__fold_up_5_p_8_env_0__Hi_8);

#line 876 "int.m"
      if (mercury__int__succeeded)
#line 875 "int.m"
        {
#line 875 "int.m"
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_up_5_p_8_env_0__P_6, (MR_Integer) 1)));

#line 875 "int.m"
          {
#line 875 "int.m"
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_up_5_p_8_env_0__P_6), ((MR_Box) ((mercury__int__env).mercury__int__fold_up_5_p_8_env_0__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &(mercury__int__env).mercury__int__fold_up_5_p_8_env_0__STATE_VARIABLE_A_12_12, mercury__int__fold_up_5_p_8_1, &mercury__int__env);
          }
#line 875 "int.m"
        }
#line 876 "int.m"
      else
#line 875 "int.m"
        {
#line 875 "int.m"
          *((mercury__int__env).mercury__int__fold_up_5_p_8_env_0__STATE_VARIABLE_A_11) = mercury__int__STATE_VARIABLE_A_0_10;
#line 875 "int.m"
          {
#line 875 "int.m"
            ((mercury__int__env).mercury__int__fold_up_5_p_8_env_0__cont)((mercury__int__env).mercury__int__fold_up_5_p_8_env_0__cont_env_ptr);
#line 875 "int.m"
            return;
          }
#line 875 "int.m"
        }
#line 876 "int.m"
    }
#line 257 "int.m"
  }
#line 257 "int.m"
}

#line 875 "int.m"
static void MR_CALL 
mercury__int__fold_up_5_p_7_1(
#line 875 "int.m"
  void * mercury__int__env_ptr_arg)
#line 875 "int.m"
{
#line 875 "int.m"
  {
#line 875 "int.m"
    struct mercury__int__fold_up_5_p_7_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_up_5_p_7_env_0_s *) mercury__int__env_ptr_arg;

#line 875 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__V_15_15 = (MR_Integer) 1;
#line 875 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__V_13_13 = ((mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__Lo_7 + (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__V_15_15);
#line 875 "int.m"
    {
#line 875 "int.m"
      mercury__int__fold_up_5_p_7((mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__TypeInfo_for_T_16, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__P_6, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__V_13_13, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__Hi_8, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__STATE_VARIABLE_A_12_12, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__STATE_VARIABLE_A_11, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__cont_env_ptr);
#line 875 "int.m"
      return;
    }
#line 875 "int.m"
  }
#line 875 "int.m"
}

#line 255 "int.m"
void MR_CALL 
mercury__int__fold_up_5_p_7(
#line 255 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_16,
#line 255 "int.m"
  MR_Word mercury__int__P_6,
#line 255 "int.m"
  MR_Integer mercury__int__Lo_7,
#line 255 "int.m"
  MR_Integer mercury__int__Hi_8,
#line 255 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
#line 255 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_11,
#line 255 "int.m"
  MR_Cont mercury__int__cont,
#line 255 "int.m"
  void * mercury__int__cont_env_ptr)
#line 255 "int.m"
{
#line 255 "int.m"
  {
#line 255 "int.m"
    struct mercury__int__fold_up_5_p_7_env_0_s mercury__int__env;

#line 255 "int.m"
    (mercury__int__env).mercury__int__fold_up_5_p_7_env_0__TypeInfo_for_T_16 = mercury__int__TypeInfo_for_T_16;
#line 255 "int.m"
    (mercury__int__env).mercury__int__fold_up_5_p_7_env_0__P_6 = mercury__int__P_6;
#line 255 "int.m"
    (mercury__int__env).mercury__int__fold_up_5_p_7_env_0__Lo_7 = mercury__int__Lo_7;
#line 255 "int.m"
    (mercury__int__env).mercury__int__fold_up_5_p_7_env_0__Hi_8 = mercury__int__Hi_8;
#line 255 "int.m"
    (mercury__int__env).mercury__int__fold_up_5_p_7_env_0__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_11;
#line 255 "int.m"
    (mercury__int__env).mercury__int__fold_up_5_p_7_env_0__cont = mercury__int__cont;
#line 255 "int.m"
    (mercury__int__env).mercury__int__fold_up_5_p_7_env_0__cont_env_ptr = mercury__int__cont_env_ptr;
#line 876 "int.m"
    {
#line 876 "int.m"
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_up_5_p_7_env_0__Lo_7 <= (mercury__int__env).mercury__int__fold_up_5_p_7_env_0__Hi_8);

#line 876 "int.m"
      if (mercury__int__succeeded)
#line 875 "int.m"
        {
#line 875 "int.m"
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_up_5_p_7_env_0__P_6, (MR_Integer) 1)));

#line 875 "int.m"
          {
#line 875 "int.m"
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_up_5_p_7_env_0__P_6), ((MR_Box) ((mercury__int__env).mercury__int__fold_up_5_p_7_env_0__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &(mercury__int__env).mercury__int__fold_up_5_p_7_env_0__STATE_VARIABLE_A_12_12, mercury__int__fold_up_5_p_7_1, &mercury__int__env);
          }
#line 875 "int.m"
        }
#line 876 "int.m"
      else
#line 875 "int.m"
        {
#line 875 "int.m"
          *((mercury__int__env).mercury__int__fold_up_5_p_7_env_0__STATE_VARIABLE_A_11) = mercury__int__STATE_VARIABLE_A_0_10;
#line 875 "int.m"
          {
#line 875 "int.m"
            ((mercury__int__env).mercury__int__fold_up_5_p_7_env_0__cont)((mercury__int__env).mercury__int__fold_up_5_p_7_env_0__cont_env_ptr);
#line 875 "int.m"
            return;
          }
#line 875 "int.m"
        }
#line 876 "int.m"
    }
#line 255 "int.m"
  }
#line 255 "int.m"
}

#line 253 "int.m"
MR_bool MR_CALL 
mercury__int__fold_up_5_p_6(
#line 253 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_16,
#line 253 "int.m"
  MR_Word mercury__int__P_6,
#line 253 "int.m"
  MR_Integer mercury__int__Lo_7,
#line 253 "int.m"
  MR_Integer mercury__int__Hi_8,
#line 253 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
#line 253 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
#line 253 "int.m"
{
#line 876 "int.m"
  while (MR_TRUE)
#line 876 "int.m"
    {
#line 876 "int.m"
      /* tailcall optimized into a loop */
#line 876 "int.m"
      {
#line 876 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 876 "int.m"
        if (mercury__int__succeeded)
#line 875 "int.m"
          {
#line 875 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 875 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 875 "int.m"
            MR_Integer mercury__int__V_15_15;
#line 875 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 875 "int.m"
            {
#line 875 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 875 "int.m"
            if (mercury__int__succeeded)
#line 875 "int.m"
              {
#line 875 "int.m"
                mercury__int__V_15_15 = (MR_Integer) 1;
#line 875 "int.m"
                mercury__int__V_13_13 = (mercury__int__Lo_7 + mercury__int__V_15_15);
#line 875 "int.m"
                /* direct tailcall eliminated */
#line 875 "int.m"
                {
#line 875 "int.m"
                  MR_Integer mercury__int__Lo__tmp_copy_7 = mercury__int__V_13_13;
#line 875 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 875 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 875 "int.m"
                  mercury__int__Lo_7 = mercury__int__Lo__tmp_copy_7;
#line 875 "int.m"
                }
#line 875 "int.m"
                continue;
#line 875 "int.m"
              }
#line 875 "int.m"
          }
#line 876 "int.m"
        else
#line 875 "int.m"
          {
#line 875 "int.m"
            *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 875 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 875 "int.m"
          }
#line 876 "int.m"
        return mercury__int__succeeded;
#line 876 "int.m"
      }
#line 876 "int.m"
      break;
#line 876 "int.m"
    }
#line 253 "int.m"
}

#line 251 "int.m"
MR_bool MR_CALL 
mercury__int__fold_up_5_p_5(
#line 251 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_16,
#line 251 "int.m"
  MR_Word mercury__int__P_6,
#line 251 "int.m"
  MR_Integer mercury__int__Lo_7,
#line 251 "int.m"
  MR_Integer mercury__int__Hi_8,
#line 251 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
#line 251 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
#line 251 "int.m"
{
#line 876 "int.m"
  while (MR_TRUE)
#line 876 "int.m"
    {
#line 876 "int.m"
      /* tailcall optimized into a loop */
#line 876 "int.m"
      {
#line 876 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 876 "int.m"
        if (mercury__int__succeeded)
#line 875 "int.m"
          {
#line 875 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 875 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 875 "int.m"
            MR_Integer mercury__int__V_15_15;
#line 875 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 875 "int.m"
            {
#line 875 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 875 "int.m"
            if (mercury__int__succeeded)
#line 875 "int.m"
              {
#line 875 "int.m"
                mercury__int__V_15_15 = (MR_Integer) 1;
#line 875 "int.m"
                mercury__int__V_13_13 = (mercury__int__Lo_7 + mercury__int__V_15_15);
#line 875 "int.m"
                /* direct tailcall eliminated */
#line 875 "int.m"
                {
#line 875 "int.m"
                  MR_Integer mercury__int__Lo__tmp_copy_7 = mercury__int__V_13_13;
#line 875 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 875 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 875 "int.m"
                  mercury__int__Lo_7 = mercury__int__Lo__tmp_copy_7;
#line 875 "int.m"
                }
#line 875 "int.m"
                continue;
#line 875 "int.m"
              }
#line 875 "int.m"
          }
#line 876 "int.m"
        else
#line 875 "int.m"
          {
#line 875 "int.m"
            *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 875 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 875 "int.m"
          }
#line 876 "int.m"
        return mercury__int__succeeded;
#line 876 "int.m"
      }
#line 876 "int.m"
      break;
#line 876 "int.m"
    }
#line 251 "int.m"
}

#line 249 "int.m"
MR_bool MR_CALL 
mercury__int__fold_up_5_p_4(
#line 249 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_16,
#line 249 "int.m"
  MR_Word mercury__int__P_6,
#line 249 "int.m"
  MR_Integer mercury__int__Lo_7,
#line 249 "int.m"
  MR_Integer mercury__int__Hi_8,
#line 249 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
#line 249 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
#line 249 "int.m"
{
#line 876 "int.m"
  while (MR_TRUE)
#line 876 "int.m"
    {
#line 876 "int.m"
      /* tailcall optimized into a loop */
#line 876 "int.m"
      {
#line 876 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 876 "int.m"
        if (mercury__int__succeeded)
#line 875 "int.m"
          {
#line 875 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 875 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 875 "int.m"
            MR_Integer mercury__int__V_15_15;
#line 875 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 875 "int.m"
            {
#line 875 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 875 "int.m"
            if (mercury__int__succeeded)
#line 875 "int.m"
              {
#line 875 "int.m"
                mercury__int__V_15_15 = (MR_Integer) 1;
#line 875 "int.m"
                mercury__int__V_13_13 = (mercury__int__Lo_7 + mercury__int__V_15_15);
#line 875 "int.m"
                /* direct tailcall eliminated */
#line 875 "int.m"
                {
#line 875 "int.m"
                  MR_Integer mercury__int__Lo__tmp_copy_7 = mercury__int__V_13_13;
#line 875 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 875 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 875 "int.m"
                  mercury__int__Lo_7 = mercury__int__Lo__tmp_copy_7;
#line 875 "int.m"
                }
#line 875 "int.m"
                continue;
#line 875 "int.m"
              }
#line 875 "int.m"
          }
#line 876 "int.m"
        else
#line 875 "int.m"
          {
#line 875 "int.m"
            *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 875 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 875 "int.m"
          }
#line 876 "int.m"
        return mercury__int__succeeded;
#line 876 "int.m"
      }
#line 876 "int.m"
      break;
#line 876 "int.m"
    }
#line 249 "int.m"
}

#line 247 "int.m"
void MR_CALL 
mercury__int__fold_up_5_p_3(
#line 247 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_16,
#line 247 "int.m"
  MR_Word mercury__int__P_6,
#line 247 "int.m"
  MR_Integer mercury__int__Lo_7,
#line 247 "int.m"
  MR_Integer mercury__int__Hi_8,
#line 247 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
#line 247 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
#line 247 "int.m"
{
#line 876 "int.m"
  while (MR_TRUE)
#line 876 "int.m"
    {
#line 876 "int.m"
      /* tailcall optimized into a loop */
#line 876 "int.m"
      {
#line 876 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 876 "int.m"
        if (mercury__int__succeeded)
#line 875 "int.m"
          {
#line 875 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 875 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 875 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 875 "int.m"
            {
#line 875 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 875 "int.m"
            mercury__int__V_13_13 = (mercury__int__Lo_7 + (MR_Integer) 1);
#line 875 "int.m"
            /* direct tailcall eliminated */
#line 875 "int.m"
            {
#line 875 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_7 = mercury__int__V_13_13;
#line 875 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 875 "int.m"
              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 875 "int.m"
              mercury__int__Lo_7 = mercury__int__Lo__tmp_copy_7;
#line 875 "int.m"
            }
#line 875 "int.m"
            continue;
#line 875 "int.m"
          }
#line 876 "int.m"
        else
#line 875 "int.m"
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 876 "int.m"
      }
#line 876 "int.m"
      break;
#line 876 "int.m"
    }
#line 247 "int.m"
}

#line 246 "int.m"
void MR_CALL 
mercury__int__fold_up_5_p_2(
#line 246 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_16,
#line 246 "int.m"
  MR_Word mercury__int__P_6,
#line 246 "int.m"
  MR_Integer mercury__int__Lo_7,
#line 246 "int.m"
  MR_Integer mercury__int__Hi_8,
#line 246 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
#line 246 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
#line 246 "int.m"
{
#line 876 "int.m"
  while (MR_TRUE)
#line 876 "int.m"
    {
#line 876 "int.m"
      /* tailcall optimized into a loop */
#line 876 "int.m"
      {
#line 876 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 876 "int.m"
        if (mercury__int__succeeded)
#line 875 "int.m"
          {
#line 875 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 875 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 875 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 875 "int.m"
            {
#line 875 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 875 "int.m"
            mercury__int__V_13_13 = (mercury__int__Lo_7 + (MR_Integer) 1);
#line 875 "int.m"
            /* direct tailcall eliminated */
#line 875 "int.m"
            {
#line 875 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_7 = mercury__int__V_13_13;
#line 875 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 875 "int.m"
              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 875 "int.m"
              mercury__int__Lo_7 = mercury__int__Lo__tmp_copy_7;
#line 875 "int.m"
            }
#line 875 "int.m"
            continue;
#line 875 "int.m"
          }
#line 876 "int.m"
        else
#line 875 "int.m"
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 876 "int.m"
      }
#line 876 "int.m"
      break;
#line 876 "int.m"
    }
#line 246 "int.m"
}

#line 245 "int.m"
void MR_CALL 
mercury__int__fold_up_5_p_1(
#line 245 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_16,
#line 245 "int.m"
  MR_Word mercury__int__P_6,
#line 245 "int.m"
  MR_Integer mercury__int__Lo_7,
#line 245 "int.m"
  MR_Integer mercury__int__Hi_8,
#line 245 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
#line 245 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
#line 245 "int.m"
{
#line 876 "int.m"
  while (MR_TRUE)
#line 876 "int.m"
    {
#line 876 "int.m"
      /* tailcall optimized into a loop */
#line 876 "int.m"
      {
#line 876 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 876 "int.m"
        if (mercury__int__succeeded)
#line 875 "int.m"
          {
#line 875 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 875 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 875 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 875 "int.m"
            {
#line 875 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 875 "int.m"
            mercury__int__V_13_13 = (mercury__int__Lo_7 + (MR_Integer) 1);
#line 875 "int.m"
            /* direct tailcall eliminated */
#line 875 "int.m"
            {
#line 875 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_7 = mercury__int__V_13_13;
#line 875 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 875 "int.m"
              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 875 "int.m"
              mercury__int__Lo_7 = mercury__int__Lo__tmp_copy_7;
#line 875 "int.m"
            }
#line 875 "int.m"
            continue;
#line 875 "int.m"
          }
#line 876 "int.m"
        else
#line 875 "int.m"
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 876 "int.m"
      }
#line 876 "int.m"
      break;
#line 876 "int.m"
    }
#line 245 "int.m"
}

#line 244 "int.m"
void MR_CALL 
mercury__int__fold_up_5_p_0(
#line 244 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_16,
#line 244 "int.m"
  MR_Word mercury__int__P_6,
#line 244 "int.m"
  MR_Integer mercury__int__Lo_7,
#line 244 "int.m"
  MR_Integer mercury__int__Hi_8,
#line 244 "int.m"
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
#line 244 "int.m"
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
#line 244 "int.m"
{
#line 876 "int.m"
  while (MR_TRUE)
#line 876 "int.m"
    {
#line 876 "int.m"
      /* tailcall optimized into a loop */
#line 876 "int.m"
      {
#line 876 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 876 "int.m"
        if (mercury__int__succeeded)
#line 875 "int.m"
          {
#line 875 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 875 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 875 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 875 "int.m"
            {
#line 875 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 875 "int.m"
            mercury__int__V_13_13 = (mercury__int__Lo_7 + (MR_Integer) 1);
#line 875 "int.m"
            /* direct tailcall eliminated */
#line 875 "int.m"
            {
#line 875 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_7 = mercury__int__V_13_13;
#line 875 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 875 "int.m"
              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 875 "int.m"
              mercury__int__Lo_7 = mercury__int__Lo__tmp_copy_7;
#line 875 "int.m"
            }
#line 875 "int.m"
            continue;
#line 875 "int.m"
          }
#line 876 "int.m"
        else
#line 875 "int.m"
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 876 "int.m"
      }
#line 876 "int.m"
      break;
#line 876 "int.m"
    }
#line 244 "int.m"
}

#line 237 "int.m"
void MR_CALL 
mercury__int__bits_per_int_1_p_0(
#line 237 "int.m"
  MR_Integer * mercury__int__Bits_1)
#line 237 "int.m"
{
#line 761 "int.m"
  {
#line 761 "int.m"
    MR_bool mercury__int__succeeded;

#line 765 "int.m"
{
#define MR_PROC_LABEL mercury__int__bits_per_int_1_p_0

	MR_Integer Bits;

		{
#line 765 "int.m"

    Bits = ML_BITS_PER_INT;

#line 8126 "int.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__int__Bits_1  = Bits;
#line 765 "int.m"
}
#line 761 "int.m"
  }
#line 237 "int.m"
}

#line 236 "int.m"
MR_Integer MR_CALL 
mercury__int__bits_per_int_0_f_0(void)
#line 236 "int.m"
{
#line 761 "int.m"
  {
#line 761 "int.m"
    MR_bool mercury__int__succeeded;
#line 761 "int.m"
    MR_Integer mercury__int__X_2;

#line 765 "int.m"
{
#define MR_PROC_LABEL mercury__int__bits_per_int_0_f_0

	MR_Integer Bits;

		{
#line 765 "int.m"

    Bits = ML_BITS_PER_INT;

#line 8161 "int.c"

		;}
#undef MR_PROC_LABEL
	 mercury__int__X_2  = Bits;
#line 765 "int.m"
}
#line 761 "int.m"
    return mercury__int__X_2;
#line 761 "int.m"
  }
#line 236 "int.m"
}

#line 232 "int.m"
void MR_CALL 
mercury__int__min_int_1_p_0(
#line 232 "int.m"
  MR_Integer * mercury__int__Min_1)
#line 232 "int.m"
{
#line 740 "int.m"
  {
#line 740 "int.m"
    MR_bool mercury__int__succeeded;

#line 744 "int.m"
{
#define MR_PROC_LABEL mercury__int__min_int_1_p_0

	MR_Integer Min;

		{
#line 744 "int.m"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Min = INT_MIN;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Min = (MR_Integer) LONG_MIN;
    #if defined(LLONG_MIN)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Min = (MR_Integer) LLONG_MIN;
    #endif
    } else {
        MR_fatal_error("Unable to figure out min integer size");
    }

#line 8208 "int.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__int__Min_1  = Min;
#line 744 "int.m"
}
#line 740 "int.m"
  }
#line 232 "int.m"
}

#line 231 "int.m"
MR_Integer MR_CALL 
mercury__int__min_int_0_f_0(void)
#line 231 "int.m"
{
#line 740 "int.m"
  {
#line 740 "int.m"
    MR_bool mercury__int__succeeded;
#line 740 "int.m"
    MR_Integer mercury__int__X_2;

#line 744 "int.m"
{
#define MR_PROC_LABEL mercury__int__min_int_0_f_0

	MR_Integer Min;

		{
#line 744 "int.m"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Min = INT_MIN;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Min = (MR_Integer) LONG_MIN;
    #if defined(LLONG_MIN)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Min = (MR_Integer) LLONG_MIN;
    #endif
    } else {
        MR_fatal_error("Unable to figure out min integer size");
    }

#line 8253 "int.c"

		;}
#undef MR_PROC_LABEL
	 mercury__int__X_2  = Min;
#line 744 "int.m"
}
#line 740 "int.m"
    return mercury__int__X_2;
#line 740 "int.m"
  }
#line 231 "int.m"
}

#line 227 "int.m"
void MR_CALL 
mercury__int__max_int_1_p_0(
#line 227 "int.m"
  MR_Integer * mercury__int__Max_1)
#line 227 "int.m"
{
#line 719 "int.m"
  {
#line 719 "int.m"
    MR_bool mercury__int__succeeded;

#line 723 "int.m"
{
#define MR_PROC_LABEL mercury__int__max_int_1_p_0

	MR_Integer Max;

		{
#line 723 "int.m"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 8300 "int.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__int__Max_1  = Max;
#line 723 "int.m"
}
#line 719 "int.m"
  }
#line 227 "int.m"
}

#line 226 "int.m"
MR_Integer MR_CALL 
mercury__int__max_int_0_f_0(void)
#line 226 "int.m"
{
#line 719 "int.m"
  {
#line 719 "int.m"
    MR_bool mercury__int__succeeded;
#line 719 "int.m"
    MR_Integer mercury__int__X_2;

#line 723 "int.m"
{
#define MR_PROC_LABEL mercury__int__max_int_0_f_0

	MR_Integer Max;

		{
#line 723 "int.m"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 8345 "int.c"

		;}
#undef MR_PROC_LABEL
	 mercury__int__X_2  = Max;
#line 723 "int.m"
}
#line 719 "int.m"
    return mercury__int__X_2;
#line 719 "int.m"
  }
#line 226 "int.m"
}

#line 222 "int.m"
void MR_CALL 
mercury__int__is_2_p_1(
#line 222 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_4,
#line 222 "int.m"
  MR_Box * mercury__int__X_3,
#line 222 "int.m"
  MR_Box mercury__int__X_2)
#line 222 "int.m"
{
#line 706 "int.m"
  {
#line 706 "int.m"
    MR_bool mercury__int__succeeded;

#line 706 "int.m"
    *mercury__int__X_3 = mercury__int__X_2;
#line 706 "int.m"
  }
#line 222 "int.m"
}

#line 221 "int.m"
void MR_CALL 
mercury__int__is_2_p_0(
#line 221 "int.m"
  MR_Word mercury__int__TypeInfo_for_T_4,
#line 221 "int.m"
  MR_Box * mercury__int__X_3,
#line 221 "int.m"
  MR_Box mercury__int__X_2)
#line 221 "int.m"
{
#line 706 "int.m"
  {
#line 706 "int.m"
    MR_bool mercury__int__succeeded;

#line 706 "int.m"
    *mercury__int__X_3 = mercury__int__X_2;
#line 706 "int.m"
  }
#line 221 "int.m"
}

#line 216 "int.m"
MR_Integer MR_CALL 
mercury__int__f_minus_1_f_0(
#line 216 "int.m"
  MR_Integer mercury__int__HeadVar__1_1)
#line 216 "int.m"
{
#line 216 "int.m"
  {
#line 216 "int.m"
    MR_bool mercury__int__succeeded;
#line 216 "int.m"
    MR_Integer mercury__int__HeadVar__2_2 = ((MR_Integer) 0 - mercury__int__HeadVar__1_1);

#line 216 "int.m"
    return mercury__int__HeadVar__2_2;
#line 216 "int.m"
  }
#line 216 "int.m"
}

#line 212 "int.m"
MR_Integer MR_CALL 
mercury__int__f_plus_1_f_0(
#line 212 "int.m"
  MR_Integer mercury__int__HeadVar__1_1)
#line 212 "int.m"
{
#line 212 "int.m"
  {
#line 212 "int.m"
    MR_bool mercury__int__succeeded;
#line 212 "int.m"
    MR_Integer mercury__int__HeadVar__2_2 = mercury__int__HeadVar__1_1;

#line 212 "int.m"
    return mercury__int__HeadVar__2_2;
#line 212 "int.m"
  }
#line 212 "int.m"
}

#line 208 "int.m"
MR_Integer MR_CALL 
mercury__int__f_92_1_f_0(
#line 208 "int.m"
  MR_Integer mercury__int__HeadVar__1_1)
#line 208 "int.m"
{
#line 208 "int.m"
  {
#line 208 "int.m"
    MR_bool mercury__int__succeeded;
#line 208 "int.m"
    MR_Integer mercury__int__HeadVar__2_2 = ~(mercury__int__HeadVar__1_1);

#line 208 "int.m"
    return mercury__int__HeadVar__2_2;
#line 208 "int.m"
  }
#line 208 "int.m"
}

#line 204 "int.m"
void MR_CALL 
mercury__int__xor_2_f_2(
#line 204 "int.m"
  MR_Integer * mercury__int__HeadVar__1_1,
#line 204 "int.m"
  MR_Integer mercury__int__HeadVar__2_2,
#line 204 "int.m"
  MR_Integer mercury__int__HeadVar__3_3)
#line 204 "int.m"
{
#line 201 "int.m"
  {
#line 201 "int.m"
    MR_bool mercury__int__succeeded;

#line 201 "int.m"
    *mercury__int__HeadVar__1_1 = (mercury__int__HeadVar__2_2 ^ mercury__int__HeadVar__3_3);
#line 201 "int.m"
  }
#line 204 "int.m"
}

#line 203 "int.m"
void MR_CALL 
mercury__int__xor_2_f_1(
#line 203 "int.m"
  MR_Integer mercury__int__HeadVar__1_1,
#line 203 "int.m"
  MR_Integer * mercury__int__HeadVar__2_2,
#line 203 "int.m"
  MR_Integer mercury__int__HeadVar__3_3)
#line 203 "int.m"
{
#line 201 "int.m"
  {
#line 201 "int.m"
    MR_bool mercury__int__succeeded;

#line 201 "int.m"
    *mercury__int__HeadVar__2_2 = (mercury__int__HeadVar__1_1 ^ mercury__int__HeadVar__3_3);
#line 201 "int.m"
  }
#line 203 "int.m"
}

#line 202 "int.m"
MR_Integer MR_CALL 
mercury__int__xor_2_f_0(
#line 202 "int.m"
  MR_Integer mercury__int__HeadVar__1_1,
#line 202 "int.m"
  MR_Integer mercury__int__HeadVar__2_2)
#line 202 "int.m"
{
#line 201 "int.m"
  {
#line 201 "int.m"
    MR_bool mercury__int__succeeded;
#line 201 "int.m"
    MR_Integer mercury__int__HeadVar__3_3 = (mercury__int__HeadVar__1_1 ^ mercury__int__HeadVar__2_2);

#line 201 "int.m"
    return mercury__int__HeadVar__3_3;
#line 201 "int.m"
  }
#line 202 "int.m"
}

#line 197 "int.m"
MR_Integer MR_CALL 
mercury__int__f_92_47_2_f_0(
#line 197 "int.m"
  MR_Integer mercury__int__HeadVar__1_1,
#line 197 "int.m"
  MR_Integer mercury__int__HeadVar__2_2)
#line 197 "int.m"
{
#line 197 "int.m"
  {
#line 197 "int.m"
    MR_bool mercury__int__succeeded;
#line 197 "int.m"
    MR_Integer mercury__int__HeadVar__3_3 = (mercury__int__HeadVar__1_1 | mercury__int__HeadVar__2_2);

#line 197 "int.m"
    return mercury__int__HeadVar__3_3;
#line 197 "int.m"
  }
#line 197 "int.m"
}

#line 193 "int.m"
MR_Integer MR_CALL 
mercury__int__f_47_92_2_f_0(
#line 193 "int.m"
  MR_Integer mercury__int__HeadVar__1_1,
#line 193 "int.m"
  MR_Integer mercury__int__HeadVar__2_2)
#line 193 "int.m"
{
#line 193 "int.m"
  {
#line 193 "int.m"
    MR_bool mercury__int__succeeded;
#line 193 "int.m"
    MR_Integer mercury__int__HeadVar__3_3 = (mercury__int__HeadVar__1_1 & mercury__int__HeadVar__2_2);

#line 193 "int.m"
    return mercury__int__HeadVar__3_3;
#line 193 "int.m"
  }
#line 193 "int.m"
}

#line 189 "int.m"
MR_bool MR_CALL 
mercury__int__odd_1_p_0(
#line 189 "int.m"
  MR_Integer mercury__int__X_2)
#line 189 "int.m"
{
#line 619 "int.m"
  {
#line 619 "int.m"
    MR_bool mercury__int__succeeded;
#line 619 "int.m"
    MR_Integer mercury__int__V_3_3 = (mercury__int__X_2 & (MR_Integer) 1);

#line 619 "int.m"
    mercury__int__succeeded = (mercury__int__V_3_3 == (MR_Integer) 0);
#line 619 "int.m"
    mercury__int__succeeded = !(mercury__int__succeeded);
#line 619 "int.m"
    return mercury__int__succeeded;
#line 619 "int.m"
  }
#line 189 "int.m"
}

#line 185 "int.m"
MR_bool MR_CALL 
mercury__int__even_1_p_0(
#line 185 "int.m"
  MR_Integer mercury__int__X_2)
#line 185 "int.m"
{
#line 614 "int.m"
  {
#line 614 "int.m"
    MR_bool mercury__int__succeeded;
#line 614 "int.m"
    MR_Integer mercury__int__V_3_3 = (mercury__int__X_2 & (MR_Integer) 1);

#line 615 "int.m"
    mercury__int__succeeded = (mercury__int__V_3_3 == (MR_Integer) 0);
#line 614 "int.m"
    return mercury__int__succeeded;
#line 614 "int.m"
  }
#line 185 "int.m"
}

#line 181 "int.m"
MR_Integer MR_CALL 
mercury__int__unchecked_right_shift_2_f_0(
#line 181 "int.m"
  MR_Integer mercury__int__HeadVar__1_1,
#line 181 "int.m"
  MR_Integer mercury__int__HeadVar__2_2)
#line 181 "int.m"
{
#line 181 "int.m"
  {
#line 181 "int.m"
    MR_bool mercury__int__succeeded;
#line 181 "int.m"
    MR_Integer mercury__int__HeadVar__3_3 = (mercury__int__HeadVar__1_1 >> mercury__int__HeadVar__2_2);

#line 181 "int.m"
    return mercury__int__HeadVar__3_3;
#line 181 "int.m"
  }
#line 181 "int.m"
}

#line 174 "int.m"
MR_Integer MR_CALL 
mercury__int__f_62_62_2_f_0(
#line 174 "int.m"
  MR_Integer mercury__int__X_4,
#line 174 "int.m"
  MR_Integer mercury__int__Y_5)
#line 174 "int.m"
{
#line 597 "int.m"
  {
#line 597 "int.m"
    MR_bool mercury__int__succeeded;
#line 597 "int.m"
    MR_Integer mercury__int__Z_6;
#line 597 "int.m"
    MR_Integer mercury__int__IntBits_7;

#line 765 "int.m"
{
#define MR_PROC_LABEL mercury__int__f_62_62_2_f_0

	MR_Integer Bits;

		{
#line 765 "int.m"

    Bits = ML_BITS_PER_INT;

#line 8683 "int.c"

		;}
#undef MR_PROC_LABEL
	 mercury__int__IntBits_7  = Bits;
#line 765 "int.m"
}
#line 599 "int.m"
    mercury__int__succeeded = (mercury__int__Y_5 >= (MR_Integer) 0);
#line 605 "int.m"
    if (mercury__int__succeeded)
#line 602 "int.m"
      {
#line 600 "int.m"
        mercury__int__succeeded = (mercury__int__Y_5 >= mercury__int__IntBits_7);
#line 602 "int.m"
        if (mercury__int__succeeded)
#line 601 "int.m"
          {
#line 601 "int.m"
            mercury__int__succeeded = (mercury__int__X_4 >= (MR_Integer) 0);
#line 601 "int.m"
            if (mercury__int__succeeded)
#line 601 "int.m"
              mercury__int__Z_6 = (MR_Integer) 0;
#line 601 "int.m"
            else
#line 601 "int.m"
              mercury__int__Z_6 = (MR_Integer) -1;
#line 601 "int.m"
          }
#line 602 "int.m"
        else
#line 603 "int.m"
          mercury__int__Z_6 = (mercury__int__X_4 >> mercury__int__Y_5);
#line 602 "int.m"
      }
#line 605 "int.m"
    else
#line 608 "int.m"
      {
#line 606 "int.m"
        MR_Integer mercury__int__V_10_10 = ((MR_Integer) 0 - mercury__int__IntBits_7);

#line 606 "int.m"
        mercury__int__succeeded = (mercury__int__Y_5 <= mercury__int__V_10_10);
#line 608 "int.m"
        if (mercury__int__succeeded)
#line 607 "int.m"
          mercury__int__Z_6 = (MR_Integer) 0;
#line 608 "int.m"
        else
#line 609 "int.m"
          {
#line 609 "int.m"
            MR_Integer mercury__int__V_11_11 = ((MR_Integer) 0 - mercury__int__Y_5);

#line 609 "int.m"
            mercury__int__Z_6 = (mercury__int__X_4 << mercury__int__V_11_11);
#line 609 "int.m"
          }
#line 608 "int.m"
      }
#line 597 "int.m"
    return mercury__int__Z_6;
#line 597 "int.m"
  }
#line 174 "int.m"
}

#line 167 "int.m"
MR_Integer MR_CALL 
mercury__int__unchecked_left_shift_2_f_0(
#line 167 "int.m"
  MR_Integer mercury__int__HeadVar__1_1,
#line 167 "int.m"
  MR_Integer mercury__int__HeadVar__2_2)
#line 167 "int.m"
{
#line 167 "int.m"
  {
#line 167 "int.m"
    MR_bool mercury__int__succeeded;
#line 167 "int.m"
    MR_Integer mercury__int__HeadVar__3_3 = (mercury__int__HeadVar__1_1 << mercury__int__HeadVar__2_2);

#line 167 "int.m"
    return mercury__int__HeadVar__3_3;
#line 167 "int.m"
  }
#line 167 "int.m"
}

#line 160 "int.m"
MR_Integer MR_CALL 
mercury__int__f_60_60_2_f_0(
#line 160 "int.m"
  MR_Integer mercury__int__X_4,
#line 160 "int.m"
  MR_Integer mercury__int__Y_5)
#line 160 "int.m"
{
#line 579 "int.m"
  {
#line 579 "int.m"
    MR_bool mercury__int__succeeded;
#line 579 "int.m"
    MR_Integer mercury__int__Z_6;
#line 579 "int.m"
    MR_Integer mercury__int__IntBits_7;

#line 765 "int.m"
{
#define MR_PROC_LABEL mercury__int__f_60_60_2_f_0

	MR_Integer Bits;

		{
#line 765 "int.m"

    Bits = ML_BITS_PER_INT;

#line 8805 "int.c"

		;}
#undef MR_PROC_LABEL
	 mercury__int__IntBits_7  = Bits;
#line 765 "int.m"
}
#line 581 "int.m"
    mercury__int__succeeded = (mercury__int__Y_5 >= (MR_Integer) 0);
#line 587 "int.m"
    if (mercury__int__succeeded)
#line 584 "int.m"
      {
#line 582 "int.m"
        mercury__int__succeeded = (mercury__int__Y_5 >= mercury__int__IntBits_7);
#line 584 "int.m"
        if (mercury__int__succeeded)
#line 583 "int.m"
          mercury__int__Z_6 = (MR_Integer) 0;
#line 584 "int.m"
        else
#line 585 "int.m"
          mercury__int__Z_6 = (mercury__int__X_4 << mercury__int__Y_5);
#line 584 "int.m"
      }
#line 587 "int.m"
    else
#line 590 "int.m"
      {
#line 588 "int.m"
        MR_Integer mercury__int__V_9_9 = ((MR_Integer) 0 - mercury__int__IntBits_7);

#line 588 "int.m"
        mercury__int__succeeded = (mercury__int__Y_5 <= mercury__int__V_9_9);
#line 590 "int.m"
        if (mercury__int__succeeded)
#line 589 "int.m"
          {
#line 589 "int.m"
            mercury__int__succeeded = (mercury__int__X_4 >= (MR_Integer) 0);
#line 589 "int.m"
            if (mercury__int__succeeded)
#line 589 "int.m"
              mercury__int__Z_6 = (MR_Integer) 0;
#line 589 "int.m"
            else
#line 589 "int.m"
              mercury__int__Z_6 = (MR_Integer) -1;
#line 589 "int.m"
          }
#line 590 "int.m"
        else
#line 591 "int.m"
          {
#line 591 "int.m"
            MR_Integer mercury__int__V_11_11 = ((MR_Integer) 0 - mercury__int__Y_5);

#line 591 "int.m"
            mercury__int__Z_6 = (mercury__int__X_4 >> mercury__int__V_11_11);
#line 591 "int.m"
          }
#line 590 "int.m"
      }
#line 579 "int.m"
    return mercury__int__Z_6;
#line 579 "int.m"
  }
#line 160 "int.m"
}

#line 153 "int.m"
MR_Integer MR_CALL 
mercury__int__unchecked_rem_2_f_0(
#line 153 "int.m"
  MR_Integer mercury__int__HeadVar__1_1,
#line 153 "int.m"
  MR_Integer mercury__int__HeadVar__2_2)
#line 153 "int.m"
{
#line 153 "int.m"
  {
#line 153 "int.m"
    MR_bool mercury__int__succeeded;
#line 153 "int.m"
    MR_Integer mercury__int__HeadVar__3_3 = (mercury__int__HeadVar__1_1 % mercury__int__HeadVar__2_2);

#line 153 "int.m"
    return mercury__int__HeadVar__3_3;
#line 153 "int.m"
  }
#line 153 "int.m"
}

#line 148 "int.m"
MR_Integer MR_CALL 
mercury__int__rem_2_f_0(
#line 148 "int.m"
  MR_Integer mercury__int__X_4,
#line 148 "int.m"
  MR_Integer mercury__int__Y_5)
#line 148 "int.m"
{
#line 520 "int.m"
  {
#line 520 "int.m"
    MR_bool mercury__int__succeeded;
#line 520 "int.m"
    MR_Integer mercury__int__Rem_6;

#line 535 "int.m"
{
#define MR_PROC_LABEL mercury__int__rem_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 535 "int.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 8929 "int.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 535 "int.m"
	}
mercury__int__succeeded  = SUCCESS_INDICATOR;
}
#line 516 "int.m"
    if (mercury__int__succeeded)
#line 517 "int.m"
      mercury__int__succeeded = (mercury__int__Y_5 == (MR_Integer) 0);
#line 520 "int.m"
    if (mercury__int__succeeded)
#line 519 "int.m"
      {
#line 519 "int.m"
        MR_Word mercury__int__TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 519 "int.m"
        MR_Word mercury__int__V_7_7 = (MR_Word) ((MR_Box) ((MR_String) "int.rem: division by zero"));

#line 519 "int.m"
        {
#line 519 "int.m"
          mercury__exception__throw_1_p_0(mercury__int__TypeCtorInfo_9_9, ((MR_Box) (mercury__int__V_7_7)));
        }
#line 519 "int.m"
      }
#line 520 "int.m"
    else
#line 521 "int.m"
      mercury__int__Rem_6 = (mercury__int__X_4 % mercury__int__Y_5);
#line 520 "int.m"
    return mercury__int__Rem_6;
#line 520 "int.m"
  }
#line 148 "int.m"
}

#line 137 "int.m"
MR_Integer MR_CALL 
mercury__int__mod_2_f_0(
#line 137 "int.m"
  MR_Integer mercury__int__X_4,
#line 137 "int.m"
  MR_Integer mercury__int__Y_5)
#line 137 "int.m"
{
#line 577 "int.m"
  {
#line 577 "int.m"
    MR_bool mercury__int__succeeded;
#line 577 "int.m"
    MR_Integer mercury__int__HeadVar__3_3;
#line 577 "int.m"
    MR_Integer mercury__int__V_6_6;
#line 577 "int.m"
    MR_Integer mercury__int__V_7_7;

#line 577 "int.m"
    {
#line 577 "int.m"
      mercury__int__V_7_7 = mercury__int__div_2_f_0(mercury__int__X_4, mercury__int__Y_5);
    }
#line 577 "int.m"
    mercury__int__V_6_6 = (mercury__int__V_7_7 * mercury__int__Y_5);
#line 577 "int.m"
    mercury__int__HeadVar__3_3 = (mercury__int__X_4 - mercury__int__V_6_6);
#line 577 "int.m"
    return mercury__int__HeadVar__3_3;
#line 577 "int.m"
  }
#line 137 "int.m"
}

#line 132 "int.m"
MR_Integer MR_CALL 
mercury__int__unchecked_quotient_2_f_0(
#line 132 "int.m"
  MR_Integer mercury__int__HeadVar__1_1,
#line 132 "int.m"
  MR_Integer mercury__int__HeadVar__2_2)
#line 132 "int.m"
{
#line 132 "int.m"
  {
#line 132 "int.m"
    MR_bool mercury__int__succeeded;
#line 132 "int.m"
    MR_Integer mercury__int__HeadVar__3_3 = (mercury__int__HeadVar__1_1 / mercury__int__HeadVar__2_2);

#line 132 "int.m"
    return mercury__int__HeadVar__3_3;
#line 132 "int.m"
  }
#line 132 "int.m"
}

#line 127 "int.m"
MR_Integer MR_CALL 
mercury__int__f_slash_2_f_0(
#line 127 "int.m"
  MR_Integer mercury__int__X_4,
#line 127 "int.m"
  MR_Integer mercury__int__Y_5)
#line 127 "int.m"
{
#line 506 "int.m"
  {
#line 506 "int.m"
    MR_bool mercury__int__succeeded;
#line 506 "int.m"
    MR_Integer mercury__int__HeadVar__3_3;

#line 535 "int.m"
{
#define MR_PROC_LABEL mercury__int__f_slash_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 535 "int.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 9059 "int.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 535 "int.m"
	}
mercury__int__succeeded  = SUCCESS_INDICATOR;
}
#line 502 "int.m"
    if (mercury__int__succeeded)
#line 503 "int.m"
      mercury__int__succeeded = (mercury__int__Y_5 == (MR_Integer) 0);
#line 506 "int.m"
    if (mercury__int__succeeded)
#line 505 "int.m"
      {
#line 505 "int.m"
        MR_Word mercury__int__TypeCtorInfo_9_11 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 505 "int.m"
        MR_Word mercury__int__V_9_9 = (MR_Word) ((MR_Box) ((MR_String) "int.\'//\': division by zero"));

#line 505 "int.m"
        {
#line 505 "int.m"
          mercury__exception__throw_1_p_0(mercury__int__TypeCtorInfo_9_11, ((MR_Box) (mercury__int__V_9_9)));
        }
#line 505 "int.m"
      }
#line 506 "int.m"
    else
#line 507 "int.m"
      mercury__int__HeadVar__3_3 = (mercury__int__X_4 / mercury__int__Y_5);
#line 506 "int.m"
    return mercury__int__HeadVar__3_3;
#line 506 "int.m"
  }
#line 127 "int.m"
}

#line 122 "int.m"
MR_Integer MR_CALL 
mercury__int__f_47_47_2_f_0(
#line 122 "int.m"
  MR_Integer mercury__int__X_4,
#line 122 "int.m"
  MR_Integer mercury__int__Y_5)
#line 122 "int.m"
{
#line 506 "int.m"
  {
#line 506 "int.m"
    MR_bool mercury__int__succeeded;
#line 506 "int.m"
    MR_Integer mercury__int__Div_6;

#line 535 "int.m"
{
#define MR_PROC_LABEL mercury__int__f_47_47_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 535 "int.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 9130 "int.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 535 "int.m"
	}
mercury__int__succeeded  = SUCCESS_INDICATOR;
}
#line 502 "int.m"
    if (mercury__int__succeeded)
#line 503 "int.m"
      mercury__int__succeeded = (mercury__int__Y_5 == (MR_Integer) 0);
#line 506 "int.m"
    if (mercury__int__succeeded)
#line 505 "int.m"
      {
#line 505 "int.m"
        MR_Word mercury__int__TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 505 "int.m"
        MR_Word mercury__int__V_7_7 = (MR_Word) ((MR_Box) ((MR_String) "int.\'//\': division by zero"));

#line 505 "int.m"
        {
#line 505 "int.m"
          mercury__exception__throw_1_p_0(mercury__int__TypeCtorInfo_9_9, ((MR_Box) (mercury__int__V_7_7)));
        }
#line 505 "int.m"
      }
#line 506 "int.m"
    else
#line 507 "int.m"
      mercury__int__Div_6 = (mercury__int__X_4 / mercury__int__Y_5);
#line 506 "int.m"
    return mercury__int__Div_6;
#line 506 "int.m"
  }
#line 122 "int.m"
}

#line 111 "int.m"
MR_Integer MR_CALL 
mercury__int__div_2_f_0(
#line 111 "int.m"
  MR_Integer mercury__int__X_4,
#line 111 "int.m"
  MR_Integer mercury__int__Y_5)
#line 111 "int.m"
{
#line 486 "int.m"
  {
#line 486 "int.m"
    MR_bool mercury__int__succeeded;
#line 486 "int.m"
    MR_Integer mercury__int__Div_6;
#line 486 "int.m"
    MR_Integer mercury__int__Trunc_7;

#line 535 "int.m"
{
#define MR_PROC_LABEL mercury__int__div_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 535 "int.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 9203 "int.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 535 "int.m"
	}
mercury__int__succeeded  = SUCCESS_INDICATOR;
}
#line 502 "int.m"
    if (mercury__int__succeeded)
#line 503 "int.m"
      mercury__int__succeeded = (mercury__int__Y_5 == (MR_Integer) 0);
#line 506 "int.m"
    if (mercury__int__succeeded)
#line 505 "int.m"
      {
#line 505 "int.m"
        MR_Word mercury__int__TypeCtorInfo_9_19 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 505 "int.m"
        MR_Word mercury__int__V_17_17 = (MR_Word) ((MR_Box) ((MR_String) "int.\'//\': division by zero"));

#line 505 "int.m"
        {
#line 505 "int.m"
          mercury__exception__throw_1_p_0(mercury__int__TypeCtorInfo_9_19, ((MR_Box) (mercury__int__V_17_17)));
        }
#line 505 "int.m"
      }
#line 506 "int.m"
    else
#line 507 "int.m"
      mercury__int__Trunc_7 = (mercury__int__X_4 / mercury__int__Y_5);
#line 489 "int.m"
    {
#line 489 "int.m"
      MR_Integer mercury__int__V_12_12;

#line 489 "int.m"
      mercury__int__succeeded = (mercury__int__X_4 >= (MR_Integer) 0);
#line 489 "int.m"
      if (mercury__int__succeeded)
#line 489 "int.m"
        {
#line 489 "int.m"
          mercury__int__V_12_12 = (MR_Integer) 0;
#line 489 "int.m"
          mercury__int__succeeded = (mercury__int__Y_5 >= mercury__int__V_12_12);
#line 489 "int.m"
        }
#line 489 "int.m"
    }
#line 490 "int.m"
    if (!(mercury__int__succeeded))
#line 490 "int.m"
      {
#line 490 "int.m"
        {
#line 490 "int.m"
          MR_Integer mercury__int__V_10_10;

#line 490 "int.m"
          mercury__int__succeeded = (mercury__int__X_4 < (MR_Integer) 0);
#line 490 "int.m"
          if (mercury__int__succeeded)
#line 490 "int.m"
            {
#line 490 "int.m"
              mercury__int__V_10_10 = (MR_Integer) 0;
#line 490 "int.m"
              mercury__int__succeeded = (mercury__int__Y_5 < mercury__int__V_10_10);
#line 490 "int.m"
            }
#line 490 "int.m"
        }
#line 490 "int.m"
        if (!(mercury__int__succeeded))
#line 491 "int.m"
          {
#line 491 "int.m"
            MR_Integer mercury__int__V_8_8;

#line 535 "int.m"
{
#define MR_PROC_LABEL mercury__int__div_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 535 "int.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 9300 "int.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 535 "int.m"
	}
mercury__int__succeeded  = SUCCESS_INDICATOR;
}
#line 516 "int.m"
            if (mercury__int__succeeded)
#line 517 "int.m"
              mercury__int__succeeded = (mercury__int__Y_5 == (MR_Integer) 0);
#line 520 "int.m"
            if (mercury__int__succeeded)
#line 519 "int.m"
              {
#line 519 "int.m"
                MR_Word mercury__int__TypeCtorInfo_9_25 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 519 "int.m"
                MR_Word mercury__int__V_23_23 = (MR_Word) ((MR_Box) ((MR_String) "int.rem: division by zero"));

#line 519 "int.m"
                {
#line 519 "int.m"
                  mercury__exception__throw_1_p_0(mercury__int__TypeCtorInfo_9_25, ((MR_Box) (mercury__int__V_23_23)));
                }
#line 519 "int.m"
              }
#line 520 "int.m"
            else
#line 521 "int.m"
              mercury__int__V_8_8 = (mercury__int__X_4 % mercury__int__Y_5);
#line 491 "int.m"
            mercury__int__succeeded = (mercury__int__V_8_8 == (MR_Integer) 0);
#line 491 "int.m"
          }
#line 490 "int.m"
      }
#line 495 "int.m"
    if (mercury__int__succeeded)
#line 494 "int.m"
      mercury__int__Div_6 = mercury__int__Trunc_7;
#line 495 "int.m"
    else
#line 496 "int.m"
      {
#line 496 "int.m"
        mercury__int__Div_6 = (mercury__int__Trunc_7 - (MR_Integer) 1);
#line 496 "int.m"
      }
#line 486 "int.m"
    return mercury__int__Div_6;
#line 486 "int.m"
  }
#line 111 "int.m"
}

#line 102 "int.m"
MR_Integer MR_CALL 
mercury__int__minus_2_f_0(
#line 102 "int.m"
  MR_Integer mercury__int__HeadVar__1_1,
#line 102 "int.m"
  MR_Integer mercury__int__HeadVar__2_2)
#line 102 "int.m"
{
#line 102 "int.m"
  {
#line 102 "int.m"
    MR_bool mercury__int__succeeded;
#line 102 "int.m"
    MR_Integer mercury__int__HeadVar__3_3 = (mercury__int__HeadVar__1_1 - mercury__int__HeadVar__2_2);

#line 102 "int.m"
    return mercury__int__HeadVar__3_3;
#line 102 "int.m"
  }
#line 102 "int.m"
}

#line 100 "int.m"
void MR_CALL 
mercury__int__f_minus_2_f_2(
#line 100 "int.m"
  MR_Integer mercury__int__HeadVar__1_1,
#line 100 "int.m"
  MR_Integer * mercury__int__HeadVar__2_2,
#line 100 "int.m"
  MR_Integer mercury__int__HeadVar__3_3)
#line 100 "int.m"
{
#line 97 "int.m"
  {
#line 97 "int.m"
    MR_bool mercury__int__succeeded;

#line 97 "int.m"
    *mercury__int__HeadVar__2_2 = (mercury__int__HeadVar__1_1 - mercury__int__HeadVar__3_3);
#line 97 "int.m"
  }
#line 100 "int.m"
}

#line 99 "int.m"
void MR_CALL 
mercury__int__f_minus_2_f_1(
#line 99 "int.m"
  MR_Integer * mercury__int__HeadVar__1_1,
#line 99 "int.m"
  MR_Integer mercury__int__HeadVar__2_2,
#line 99 "int.m"
  MR_Integer mercury__int__HeadVar__3_3)
#line 99 "int.m"
{
#line 97 "int.m"
  {
#line 97 "int.m"
    MR_bool mercury__int__succeeded;

#line 97 "int.m"
    *mercury__int__HeadVar__1_1 = (mercury__int__HeadVar__2_2 + mercury__int__HeadVar__3_3);
#line 97 "int.m"
  }
#line 99 "int.m"
}

#line 98 "int.m"
MR_Integer MR_CALL 
mercury__int__f_minus_2_f_0(
#line 98 "int.m"
  MR_Integer mercury__int__HeadVar__1_1,
#line 98 "int.m"
  MR_Integer mercury__int__HeadVar__2_2)
#line 98 "int.m"
{
#line 97 "int.m"
  {
#line 97 "int.m"
    MR_bool mercury__int__succeeded;
#line 97 "int.m"
    MR_Integer mercury__int__HeadVar__3_3 = (mercury__int__HeadVar__1_1 - mercury__int__HeadVar__2_2);

#line 97 "int.m"
    return mercury__int__HeadVar__3_3;
#line 97 "int.m"
  }
#line 98 "int.m"
}

#line 93 "int.m"
MR_Integer MR_CALL 
mercury__int__times_2_f_0(
#line 93 "int.m"
  MR_Integer mercury__int__HeadVar__1_1,
#line 93 "int.m"
  MR_Integer mercury__int__HeadVar__2_2)
#line 93 "int.m"
{
#line 93 "int.m"
  {
#line 93 "int.m"
    MR_bool mercury__int__succeeded;
#line 93 "int.m"
    MR_Integer mercury__int__HeadVar__3_3 = (mercury__int__HeadVar__1_1 * mercury__int__HeadVar__2_2);

#line 93 "int.m"
    return mercury__int__HeadVar__3_3;
#line 93 "int.m"
  }
#line 93 "int.m"
}

#line 92 "int.m"
MR_Integer MR_CALL 
mercury__int__f_times_2_f_0(
#line 92 "int.m"
  MR_Integer mercury__int__HeadVar__1_1,
#line 92 "int.m"
  MR_Integer mercury__int__HeadVar__2_2)
#line 92 "int.m"
{
#line 92 "int.m"
  {
#line 92 "int.m"
    MR_bool mercury__int__succeeded;
#line 92 "int.m"
    MR_Integer mercury__int__HeadVar__3_3 = (mercury__int__HeadVar__1_1 * mercury__int__HeadVar__2_2);

#line 92 "int.m"
    return mercury__int__HeadVar__3_3;
#line 92 "int.m"
  }
#line 92 "int.m"
}

#line 88 "int.m"
MR_Integer MR_CALL 
mercury__int__plus_2_f_0(
#line 88 "int.m"
  MR_Integer mercury__int__HeadVar__1_1,
#line 88 "int.m"
  MR_Integer mercury__int__HeadVar__2_2)
#line 88 "int.m"
{
#line 88 "int.m"
  {
#line 88 "int.m"
    MR_bool mercury__int__succeeded;
#line 88 "int.m"
    MR_Integer mercury__int__HeadVar__3_3 = (mercury__int__HeadVar__1_1 + mercury__int__HeadVar__2_2);

#line 88 "int.m"
    return mercury__int__HeadVar__3_3;
#line 88 "int.m"
  }
#line 88 "int.m"
}

#line 86 "int.m"
void MR_CALL 
mercury__int__f_plus_2_f_2(
#line 86 "int.m"
  MR_Integer mercury__int__HeadVar__1_1,
#line 86 "int.m"
  MR_Integer * mercury__int__HeadVar__2_2,
#line 86 "int.m"
  MR_Integer mercury__int__HeadVar__3_3)
#line 86 "int.m"
{
#line 83 "int.m"
  {
#line 83 "int.m"
    MR_bool mercury__int__succeeded;

#line 83 "int.m"
    *mercury__int__HeadVar__2_2 = (mercury__int__HeadVar__3_3 - mercury__int__HeadVar__1_1);
#line 83 "int.m"
  }
#line 86 "int.m"
}

#line 85 "int.m"
void MR_CALL 
mercury__int__f_plus_2_f_1(
#line 85 "int.m"
  MR_Integer * mercury__int__HeadVar__1_1,
#line 85 "int.m"
  MR_Integer mercury__int__HeadVar__2_2,
#line 85 "int.m"
  MR_Integer mercury__int__HeadVar__3_3)
#line 85 "int.m"
{
#line 83 "int.m"
  {
#line 83 "int.m"
    MR_bool mercury__int__succeeded;

#line 83 "int.m"
    *mercury__int__HeadVar__1_1 = (mercury__int__HeadVar__3_3 - mercury__int__HeadVar__2_2);
#line 83 "int.m"
  }
#line 85 "int.m"
}

#line 84 "int.m"
MR_Integer MR_CALL 
mercury__int__f_plus_2_f_0(
#line 84 "int.m"
  MR_Integer mercury__int__HeadVar__1_1,
#line 84 "int.m"
  MR_Integer mercury__int__HeadVar__2_2)
#line 84 "int.m"
{
#line 83 "int.m"
  {
#line 83 "int.m"
    MR_bool mercury__int__succeeded;
#line 83 "int.m"
    MR_Integer mercury__int__HeadVar__3_3 = (mercury__int__HeadVar__1_1 + mercury__int__HeadVar__2_2);

#line 83 "int.m"
    return mercury__int__HeadVar__3_3;
#line 83 "int.m"
  }
#line 84 "int.m"
}

#line 79 "int.m"
void MR_CALL 
mercury__int__log2_2_p_0(
#line 79 "int.m"
  MR_Integer mercury__int__X_3,
#line 79 "int.m"
  MR_Integer * mercury__int__N_4)
#line 79 "int.m"
{
#line 684 "int.m"
  {
#line 684 "int.m"
    MR_bool mercury__int__succeeded;
#line 682 "int.m"
    MR_Integer mercury__int__V_5_5;

#line 535 "int.m"
{
#define MR_PROC_LABEL mercury__int__log2_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 535 "int.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 9619 "int.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 535 "int.m"
	}
mercury__int__succeeded  = SUCCESS_INDICATOR;
}
#line 682 "int.m"
    if (mercury__int__succeeded)
#line 682 "int.m"
      {
#line 682 "int.m"
        mercury__int__V_5_5 = (MR_Integer) 0;
#line 682 "int.m"
        mercury__int__succeeded = (mercury__int__X_3 <= mercury__int__V_5_5);
#line 682 "int.m"
      }
#line 684 "int.m"
    if (mercury__int__succeeded)
#line 683 "int.m"
      {
#line 683 "int.m"
        MR_Word mercury__int__TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 683 "int.m"
        MR_Word mercury__int__V_6_6 = (MR_Word) ((MR_Box) ((MR_String) "int.log2: taking logarithm of zero"));

#line 683 "int.m"
        {
#line 683 "int.m"
          mercury__exception__throw_1_p_0(mercury__int__TypeCtorInfo_9_9, ((MR_Box) (mercury__int__V_6_6)));
#line 683 "int.m"
          return;
        }
#line 683 "int.m"
      }
#line 684 "int.m"
    else
#line 685 "int.m"
      {
#line 685 "int.m"
        {
#line 685 "int.m"
          mercury__int__log2_2_3_p_0(mercury__int__X_3, (MR_Integer) 0, mercury__int__N_4);
#line 685 "int.m"
          return;
        }
#line 685 "int.m"
      }
#line 684 "int.m"
  }
#line 79 "int.m"
}

#line 78 "int.m"
MR_Integer MR_CALL 
mercury__int__log2_1_f_0(
#line 78 "int.m"
  MR_Integer mercury__int__X_3)
#line 78 "int.m"
{
#line 679 "int.m"
  {
#line 679 "int.m"
    MR_bool mercury__int__succeeded;
#line 679 "int.m"
    MR_Integer mercury__int__N_4;

#line 679 "int.m"
    {
#line 679 "int.m"
      mercury__int__log2_2_p_0(mercury__int__X_3, &mercury__int__N_4);
    }
#line 679 "int.m"
    return mercury__int__N_4;
#line 679 "int.m"
  }
#line 78 "int.m"
}

#line 71 "int.m"
void MR_CALL 
mercury__int__pow_3_p_0(
#line 71 "int.m"
  MR_Integer mercury__int__Base_4,
#line 71 "int.m"
  MR_Integer mercury__int__Exp_5,
#line 71 "int.m"
  MR_Integer * mercury__int__Result_6)
#line 71 "int.m"
{
#line 657 "int.m"
  {
#line 657 "int.m"
    MR_bool mercury__int__succeeded;
#line 655 "int.m"
    MR_Integer mercury__int__V_7_7;

#line 535 "int.m"
{
#define MR_PROC_LABEL mercury__int__pow_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 535 "int.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 9733 "int.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 535 "int.m"
	}
mercury__int__succeeded  = SUCCESS_INDICATOR;
}
#line 655 "int.m"
    if (mercury__int__succeeded)
#line 655 "int.m"
      {
#line 655 "int.m"
        mercury__int__V_7_7 = (MR_Integer) 0;
#line 655 "int.m"
        mercury__int__succeeded = (mercury__int__Exp_5 < mercury__int__V_7_7);
#line 655 "int.m"
      }
#line 657 "int.m"
    if (mercury__int__succeeded)
#line 656 "int.m"
      {
#line 656 "int.m"
        MR_Word mercury__int__TypeCtorInfo_11_11 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 656 "int.m"
        MR_Word mercury__int__V_8_8 = (MR_Word) ((MR_Box) ((MR_String) "int.pow: zero base"));

#line 656 "int.m"
        {
#line 656 "int.m"
          mercury__exception__throw_1_p_0(mercury__int__TypeCtorInfo_11_11, ((MR_Box) (mercury__int__V_8_8)));
#line 656 "int.m"
          return;
        }
#line 656 "int.m"
      }
#line 657 "int.m"
    else
#line 658 "int.m"
      {
#line 658 "int.m"
        {
#line 658 "int.m"
          *mercury__int__Result_6 = mercury__int__multiply_by_pow_3_f_0((MR_Integer) 1, mercury__int__Base_4, mercury__int__Exp_5);
        }
#line 658 "int.m"
      }
#line 657 "int.m"
  }
#line 71 "int.m"
}

#line 70 "int.m"
MR_Integer MR_CALL 
mercury__int__pow_2_f_0(
#line 70 "int.m"
  MR_Integer mercury__int__Base_4,
#line 70 "int.m"
  MR_Integer mercury__int__Exp_5)
#line 70 "int.m"
{
#line 652 "int.m"
  {
#line 652 "int.m"
    MR_bool mercury__int__succeeded;
#line 652 "int.m"
    MR_Integer mercury__int__Result_6;

#line 652 "int.m"
    {
#line 652 "int.m"
      mercury__int__pow_3_p_0(mercury__int__Base_4, mercury__int__Exp_5, &mercury__int__Result_6);
    }
#line 652 "int.m"
    return mercury__int__Result_6;
#line 652 "int.m"
  }
#line 70 "int.m"
}

#line 64 "int.m"
void MR_CALL 
mercury__int__min_3_p_0(
#line 64 "int.m"
  MR_Integer mercury__int__X_4,
#line 64 "int.m"
  MR_Integer mercury__int__Y_5,
#line 64 "int.m"
  MR_Integer * mercury__int__Min_6)
#line 64 "int.m"
{
#line 647 "int.m"
  {
#line 647 "int.m"
    MR_bool mercury__int__succeeded = (mercury__int__X_4 < mercury__int__Y_5);

#line 647 "int.m"
    if (mercury__int__succeeded)
#line 646 "int.m"
      *mercury__int__Min_6 = mercury__int__X_4;
#line 647 "int.m"
    else
#line 648 "int.m"
      *mercury__int__Min_6 = mercury__int__Y_5;
#line 647 "int.m"
  }
#line 64 "int.m"
}

#line 63 "int.m"
MR_Integer MR_CALL 
mercury__int__min_2_f_0(
#line 63 "int.m"
  MR_Integer mercury__int__X_4,
#line 63 "int.m"
  MR_Integer mercury__int__Y_5)
#line 63 "int.m"
{
#line 647 "int.m"
  {
#line 647 "int.m"
    MR_bool mercury__int__succeeded = (mercury__int__X_4 < mercury__int__Y_5);
#line 647 "int.m"
    MR_Integer mercury__int__Min_6;

#line 647 "int.m"
    if (mercury__int__succeeded)
#line 646 "int.m"
      mercury__int__Min_6 = mercury__int__X_4;
#line 647 "int.m"
    else
#line 648 "int.m"
      mercury__int__Min_6 = mercury__int__Y_5;
#line 647 "int.m"
    return mercury__int__Min_6;
#line 647 "int.m"
  }
#line 63 "int.m"
}

#line 59 "int.m"
void MR_CALL 
mercury__int__max_3_p_0(
#line 59 "int.m"
  MR_Integer mercury__int__X_4,
#line 59 "int.m"
  MR_Integer mercury__int__Y_5,
#line 59 "int.m"
  MR_Integer * mercury__int__Max_6)
#line 59 "int.m"
{
#line 637 "int.m"
  {
#line 637 "int.m"
    MR_bool mercury__int__succeeded = (mercury__int__X_4 > mercury__int__Y_5);

#line 637 "int.m"
    if (mercury__int__succeeded)
#line 636 "int.m"
      *mercury__int__Max_6 = mercury__int__X_4;
#line 637 "int.m"
    else
#line 638 "int.m"
      *mercury__int__Max_6 = mercury__int__Y_5;
#line 637 "int.m"
  }
#line 59 "int.m"
}

#line 58 "int.m"
MR_Integer MR_CALL 
mercury__int__max_2_f_0(
#line 58 "int.m"
  MR_Integer mercury__int__X_4,
#line 58 "int.m"
  MR_Integer mercury__int__Y_5)
#line 58 "int.m"
{
#line 637 "int.m"
  {
#line 637 "int.m"
    MR_bool mercury__int__succeeded = (mercury__int__X_4 > mercury__int__Y_5);
#line 637 "int.m"
    MR_Integer mercury__int__Max_6;

#line 637 "int.m"
    if (mercury__int__succeeded)
#line 636 "int.m"
      mercury__int__Max_6 = mercury__int__X_4;
#line 637 "int.m"
    else
#line 638 "int.m"
      mercury__int__Max_6 = mercury__int__Y_5;
#line 637 "int.m"
    return mercury__int__Max_6;
#line 637 "int.m"
  }
#line 58 "int.m"
}

#line 54 "int.m"
void MR_CALL 
mercury__int__abs_2_p_0(
#line 54 "int.m"
  MR_Integer mercury__int__Num_3,
#line 54 "int.m"
  MR_Integer * mercury__int__Abs_4)
#line 54 "int.m"
{
#line 627 "int.m"
  {
#line 627 "int.m"
    MR_bool mercury__int__succeeded = (mercury__int__Num_3 < (MR_Integer) 0);

#line 627 "int.m"
    if (mercury__int__succeeded)
#line 626 "int.m"
      {
#line 626 "int.m"
        *mercury__int__Abs_4 = ((MR_Integer) 0 - mercury__int__Num_3);
#line 626 "int.m"
      }
#line 627 "int.m"
    else
#line 628 "int.m"
      *mercury__int__Abs_4 = mercury__int__Num_3;
#line 627 "int.m"
  }
#line 54 "int.m"
}

#line 53 "int.m"
MR_Integer MR_CALL 
mercury__int__abs_1_f_0(
#line 53 "int.m"
  MR_Integer mercury__int__Num_3)
#line 53 "int.m"
{
#line 627 "int.m"
  {
#line 627 "int.m"
    MR_bool mercury__int__succeeded = (mercury__int__Num_3 < (MR_Integer) 0);
#line 627 "int.m"
    MR_Integer mercury__int__Abs_4;

#line 627 "int.m"
    if (mercury__int__succeeded)
#line 626 "int.m"
      {
#line 626 "int.m"
        mercury__int__Abs_4 = ((MR_Integer) 0 - mercury__int__Num_3);
#line 626 "int.m"
      }
#line 627 "int.m"
    else
#line 628 "int.m"
      mercury__int__Abs_4 = mercury__int__Num_3;
#line 627 "int.m"
    return mercury__int__Abs_4;
#line 627 "int.m"
  }
#line 53 "int.m"
}

#line 49 "int.m"
MR_bool MR_CALL 
mercury__int__f_greater_or_equal_2_p_0(
#line 49 "int.m"
  MR_Integer mercury__int__HeadVar__1_1,
#line 49 "int.m"
  MR_Integer mercury__int__HeadVar__2_2)
#line 49 "int.m"
{
#line 49 "int.m"
  {
#line 49 "int.m"
    MR_bool mercury__int__succeeded = (mercury__int__HeadVar__1_1 >= mercury__int__HeadVar__2_2);

#line 49 "int.m"
    return mercury__int__succeeded;
#line 49 "int.m"
  }
#line 49 "int.m"
}

#line 45 "int.m"
MR_bool MR_CALL 
mercury__int__f_less_or_equal_2_p_0(
#line 45 "int.m"
  MR_Integer mercury__int__HeadVar__1_1,
#line 45 "int.m"
  MR_Integer mercury__int__HeadVar__2_2)
#line 45 "int.m"
{
#line 45 "int.m"
  {
#line 45 "int.m"
    MR_bool mercury__int__succeeded = (mercury__int__HeadVar__1_1 <= mercury__int__HeadVar__2_2);

#line 45 "int.m"
    return mercury__int__succeeded;
#line 45 "int.m"
  }
#line 45 "int.m"
}

#line 41 "int.m"
MR_bool MR_CALL 
mercury__int__f_greater_than_2_p_0(
#line 41 "int.m"
  MR_Integer mercury__int__HeadVar__1_1,
#line 41 "int.m"
  MR_Integer mercury__int__HeadVar__2_2)
#line 41 "int.m"
{
#line 41 "int.m"
  {
#line 41 "int.m"
    MR_bool mercury__int__succeeded = (mercury__int__HeadVar__1_1 > mercury__int__HeadVar__2_2);

#line 41 "int.m"
    return mercury__int__succeeded;
#line 41 "int.m"
  }
#line 41 "int.m"
}

#line 37 "int.m"
MR_bool MR_CALL 
mercury__int__f_less_than_2_p_0(
#line 37 "int.m"
  MR_Integer mercury__int__HeadVar__1_1,
#line 37 "int.m"
  MR_Integer mercury__int__HeadVar__2_2)
#line 37 "int.m"
{
#line 37 "int.m"
  {
#line 37 "int.m"
    MR_bool mercury__int__succeeded = (mercury__int__HeadVar__1_1 < mercury__int__HeadVar__2_2);

#line 37 "int.m"
    return mercury__int__succeeded;
#line 37 "int.m"
  }
#line 37 "int.m"
}

void mercury__int__init(void)
{
}

void mercury__int__init_type_tables(void)
{
}

void mercury__int__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module int. */
