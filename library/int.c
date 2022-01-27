/*
** Automatically generated from `int.m'
** by the Mercury compiler,
** version 13.05, configured for x86_64-apple-darwin12.3.0.
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
#line 847 "int.m"
  MR_Box mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_A_17_17;
#line 847 "int.m"
  MR_Box mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_B_18_18;
#line 847 "int.m"
  MR_Integer mercury__int__fold_down2_7_p_8_env_0__V_19_19;
#line 847 "int.m"
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
#line 847 "int.m"
  MR_Box mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_A_17_17;
#line 847 "int.m"
  MR_Box mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_B_18_18;
#line 847 "int.m"
  MR_Integer mercury__int__fold_down2_7_p_7_env_0__V_19_19;
#line 847 "int.m"
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
#line 830 "int.m"
  MR_Box mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_A_17_17;
#line 830 "int.m"
  MR_Box mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_B_18_18;
#line 830 "int.m"
  MR_Integer mercury__int__fold_up2_7_p_9_env_0__V_19_19;
#line 830 "int.m"
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
#line 830 "int.m"
  MR_Box mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_A_17_17;
#line 830 "int.m"
  MR_Box mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_B_18_18;
#line 830 "int.m"
  MR_Integer mercury__int__fold_up2_7_p_8_env_0__V_19_19;
#line 830 "int.m"
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
#line 838 "int.m"
  MR_Box mercury__int__fold_down_5_p_8_env_0__STATE_VARIABLE_A_12_12;
#line 838 "int.m"
  MR_Integer mercury__int__fold_down_5_p_8_env_0__V_13_13;
#line 838 "int.m"
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
#line 838 "int.m"
  MR_Box mercury__int__fold_down_5_p_7_env_0__STATE_VARIABLE_A_12_12;
#line 838 "int.m"
  MR_Integer mercury__int__fold_down_5_p_7_env_0__V_13_13;
#line 838 "int.m"
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
#line 821 "int.m"
  MR_Box mercury__int__fold_up_5_p_8_env_0__STATE_VARIABLE_A_12_12;
#line 821 "int.m"
  MR_Integer mercury__int__fold_up_5_p_8_env_0__V_13_13;
#line 821 "int.m"
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
#line 821 "int.m"
  MR_Box mercury__int__fold_up_5_p_7_env_0__STATE_VARIABLE_A_12_12;
#line 821 "int.m"
  MR_Integer mercury__int__fold_up_5_p_7_env_0__V_13_13;
#line 821 "int.m"
  MR_Integer mercury__int__fold_up_5_p_7_env_0__V_15_15;
#line 255 "int.m"
};


#line 309 "int.c"
static MR_Box MR_CALL 
mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__to_int_1_1_f_0_10001(
#line 312 "int.c"
  MR_Box mercury__int__closure_arg,
#line 314 "int.c"
  MR_Box mercury__int__wrapper_arg_1);

#line 317 "int.c"
static MR_bool MR_CALL 
mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__from_int_1_1_f_0_10001(
#line 320 "int.c"
  MR_Box mercury__int__closure_arg,
#line 322 "int.c"
  MR_Box mercury__int__wrapper_arg_1,
#line 324 "int.c"
  MR_Box * mercury__int__wrapper_arg_2);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__int__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 635 "int.m"
static void MR_CALL 
mercury__int__log2_2_3_p_0(
#line 635 "int.m"
  MR_Integer mercury__int__X_4,
#line 635 "int.m"
  MR_Integer mercury__int__N0_5,
#line 635 "int.m"
  MR_Integer * mercury__int__N_6);

#line 610 "int.m"
static MR_Integer MR_CALL 
mercury__int__multiply_by_pow_3_f_0(
#line 610 "int.m"
  MR_Integer mercury__int__Scale0_5,
#line 610 "int.m"
  MR_Integer mercury__int__Base_6,
#line 610 "int.m"
  MR_Integer mercury__int__Exp_7);

#line 847 "int.m"
static void MR_CALL 
mercury__int__fold_down2_7_p_8_1(
#line 847 "int.m"
  void * mercury__int__env_ptr_arg);

#line 847 "int.m"
static void MR_CALL 
mercury__int__fold_down2_7_p_7_1(
#line 847 "int.m"
  void * mercury__int__env_ptr_arg);

#line 830 "int.m"
static void MR_CALL 
mercury__int__fold_up2_7_p_9_1(
#line 830 "int.m"
  void * mercury__int__env_ptr_arg);

#line 830 "int.m"
static void MR_CALL 
mercury__int__fold_up2_7_p_8_1(
#line 830 "int.m"
  void * mercury__int__env_ptr_arg);

#line 838 "int.m"
static void MR_CALL 
mercury__int__fold_down_5_p_8_1(
#line 838 "int.m"
  void * mercury__int__env_ptr_arg);

#line 838 "int.m"
static void MR_CALL 
mercury__int__fold_down_5_p_7_1(
#line 838 "int.m"
  void * mercury__int__env_ptr_arg);

#line 821 "int.m"
static void MR_CALL 
mercury__int__fold_up_5_p_8_1(
#line 821 "int.m"
  void * mercury__int__env_ptr_arg);

#line 821 "int.m"
static void MR_CALL 
mercury__int__fold_up_5_p_7_1(
#line 821 "int.m"
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
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
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



#line 749 "int.c"
const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__int__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__from_int_1_1_f_0_10001))
};

#line 760 "int.c"
static MR_Box MR_CALL 
mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__to_int_1_1_f_0_10001(
#line 763 "int.c"
  MR_Box mercury__int__closure_arg,
#line 765 "int.c"
  MR_Box mercury__int__wrapper_arg_1)
#line 767 "int.c"
{
#line 769 "int.c"
  {
#line 771 "int.c"
    MR_Box mercury__int__wrapper_arg_2;
#line 773 "int.c"
    MR_Box mercury__int__closure;
#line 775 "int.c"
    MR_Integer mercury__int__conv0_X_2;

#line 778 "int.c"
    mercury__int__closure = mercury__int__closure_arg;
#line 780 "int.c"
    {
#line 782 "int.c"
      mercury__int__conv0_X_2 = mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__to_int_1_1_f_0(((MR_Integer) mercury__int__wrapper_arg_1));
    }
#line 785 "int.c"
    mercury__int__wrapper_arg_2 = ((MR_Box) (mercury__int__conv0_X_2));
#line 787 "int.c"
    return mercury__int__wrapper_arg_2;
#line 789 "int.c"
  }
#line 791 "int.c"
}

#line 794 "int.c"
static MR_bool MR_CALL 
mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__from_int_1_1_f_0_10001(
#line 797 "int.c"
  MR_Box mercury__int__closure_arg,
#line 799 "int.c"
  MR_Box mercury__int__wrapper_arg_1,
#line 801 "int.c"
  MR_Box * mercury__int__wrapper_arg_2)
#line 803 "int.c"
{
#line 805 "int.c"
  {
#line 807 "int.c"
    MR_bool mercury__int__succeeded;
#line 809 "int.c"
    MR_Box mercury__int__closure;
#line 811 "int.c"
    MR_Integer mercury__int__conv0_X_2;

#line 814 "int.c"
    mercury__int__closure = mercury__int__closure_arg;
#line 816 "int.c"
    {
#line 818 "int.c"
      mercury__int__succeeded = mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__from_int_1_1_f_0(((MR_Integer) mercury__int__wrapper_arg_1), &mercury__int__conv0_X_2);
    }
#line 821 "int.c"
    if (mercury__int__succeeded)
#line 823 "int.c"
      {
#line 825 "int.c"
        *mercury__int__wrapper_arg_2 = ((MR_Box) (mercury__int__conv0_X_2));
#line 827 "int.c"
        mercury__int__succeeded = MR_TRUE;
#line 829 "int.c"
      }
#line 831 "int.c"
    return mercury__int__succeeded;
#line 833 "int.c"
  }
#line 835 "int.c"
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

#line 426 "int.m"
MR_bool MR_CALL 
mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__from_int_1_1_f_0(
#line 426 "int.m"
  MR_Integer mercury__int__X_3,
#line 426 "int.m"
  MR_Integer * mercury__int__X_2)
#line 426 "int.m"
{
#line 426 "int.m"
  {
#line 426 "int.m"
    *mercury__int__X_2 = mercury__int__X_3;
#line 426 "int.m"
    return MR_TRUE;
#line 426 "int.m"
  }
#line 426 "int.m"
}

#line 425 "int.m"
MR_Integer MR_CALL 
mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__to_int_1_1_f_0(
#line 425 "int.m"
  MR_Integer mercury__int__X_3)
#line 425 "int.m"
{
#line 425 "int.m"
  {
#line 425 "int.m"
    MR_bool mercury__int__succeeded;
#line 425 "int.m"
    MR_Integer mercury__int__X_2 = mercury__int__X_3;

#line 425 "int.m"
    return mercury__int__X_2;
#line 425 "int.m"
  }
#line 425 "int.m"
}

#line 635 "int.m"
static void MR_CALL 
mercury__int__log2_2_3_p_0(
#line 635 "int.m"
  MR_Integer mercury__int__X_4,
#line 635 "int.m"
  MR_Integer mercury__int__N0_5,
#line 635 "int.m"
  MR_Integer * mercury__int__N_6)
#line 635 "int.m"
{
#line 640 "int.m"
  while (MR_TRUE)
#line 640 "int.m"
    {
#line 640 "int.m"
      /* tailcall optimized into a loop */
#line 640 "int.m"
      {
#line 640 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__X_4 == (MR_Integer) 1);

#line 640 "int.m"
        if (mercury__int__succeeded)
#line 639 "int.m"
          *mercury__int__N_6 = mercury__int__N0_5;
#line 640 "int.m"
        else
#line 641 "int.m"
          {
#line 641 "int.m"
            MR_Integer mercury__int__X1_7 = (mercury__int__X_4 + (MR_Integer) 1);
#line 641 "int.m"
            MR_Integer mercury__int__X2_8 = (mercury__int__X1_7 / (MR_Integer) 2);
#line 641 "int.m"
            MR_Integer mercury__int__N1_9 = (mercury__int__N0_5 + (MR_Integer) 1);

#line 644 "int.m"
            /* direct tailcall eliminated */
#line 644 "int.m"
            {
#line 644 "int.m"
              MR_Integer mercury__int__X__tmp_copy_4 = mercury__int__X2_8;
#line 644 "int.m"
              MR_Integer mercury__int__N0__tmp_copy_5 = mercury__int__N1_9;

#line 644 "int.m"
              mercury__int__N0_5 = mercury__int__N0__tmp_copy_5;
#line 644 "int.m"
              mercury__int__X_4 = mercury__int__X__tmp_copy_4;
#line 644 "int.m"
            }
#line 644 "int.m"
            continue;
#line 641 "int.m"
          }
#line 640 "int.m"
      }
#line 640 "int.m"
      break;
#line 640 "int.m"
    }
#line 635 "int.m"
}

#line 610 "int.m"
static MR_Integer MR_CALL 
mercury__int__multiply_by_pow_3_f_0(
#line 610 "int.m"
  MR_Integer mercury__int__Scale0_5,
#line 610 "int.m"
  MR_Integer mercury__int__Base_6,
#line 610 "int.m"
  MR_Integer mercury__int__Exp_7)
#line 610 "int.m"
{
#line 615 "int.m"
  while (MR_TRUE)
#line 615 "int.m"
    {
#line 615 "int.m"
      /* tailcall optimized into a loop */
#line 615 "int.m"
      {
#line 615 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Exp_7 == (MR_Integer) 0);
#line 615 "int.m"
        MR_Integer mercury__int__Result_8;

#line 615 "int.m"
        if (mercury__int__succeeded)
#line 614 "int.m"
          mercury__int__Result_8 = mercury__int__Scale0_5;
#line 615 "int.m"
        else
#line 620 "int.m"
          {
#line 620 "int.m"
            MR_Integer mercury__int__Scale1_9;
#line 620 "int.m"
            MR_Integer mercury__int__V_10_10;
#line 620 "int.m"
            MR_Integer mercury__int__V_12_12;
#line 565 "int.m"
            MR_Integer mercury__int__V_15_15 = (mercury__int__Exp_7 & (MR_Integer) 1);

#line 565 "int.m"
            mercury__int__succeeded = (mercury__int__V_15_15 == (MR_Integer) 0);
#line 565 "int.m"
            mercury__int__succeeded = !(mercury__int__succeeded);
#line 618 "int.m"
            if (mercury__int__succeeded)
#line 617 "int.m"
              mercury__int__Scale1_9 = (mercury__int__Scale0_5 * mercury__int__Base_6);
#line 618 "int.m"
            else
#line 619 "int.m"
              mercury__int__Scale1_9 = mercury__int__Scale0_5;
#line 621 "int.m"
            mercury__int__V_10_10 = (mercury__int__Base_6 * mercury__int__Base_6);
#line 621 "int.m"
            {
#line 621 "int.m"
              mercury__int__V_12_12 = mercury__int__div_2_f_0(mercury__int__Exp_7, (MR_Integer) 2);
            }
#line 621 "int.m"
            /* direct tailcall eliminated */
#line 621 "int.m"
            {
#line 621 "int.m"
              MR_Integer mercury__int__Scale0__tmp_copy_5 = mercury__int__Scale1_9;
#line 621 "int.m"
              MR_Integer mercury__int__Base__tmp_copy_6 = mercury__int__V_10_10;
#line 621 "int.m"
              MR_Integer mercury__int__Exp__tmp_copy_7 = mercury__int__V_12_12;

#line 621 "int.m"
              mercury__int__Exp_7 = mercury__int__Exp__tmp_copy_7;
#line 621 "int.m"
              mercury__int__Base_6 = mercury__int__Base__tmp_copy_6;
#line 621 "int.m"
              mercury__int__Scale0_5 = mercury__int__Scale0__tmp_copy_5;
#line 621 "int.m"
            }
#line 621 "int.m"
            continue;
#line 620 "int.m"
          }
#line 615 "int.m"
        return mercury__int__Result_8;
#line 615 "int.m"
      }
#line 615 "int.m"
      break;
#line 615 "int.m"
    }
#line 610 "int.m"
}

#line 474 "int.m"
MR_bool MR_CALL 
mercury__int__int_domain_checks_0_p_0(void)
#line 474 "int.m"
{
#line 477 "int.m"
  {
#line 477 "int.m"
    MR_bool mercury__int__succeeded;

#line 481 "int.m"
{
#define MR_PROC_LABEL mercury__int__int_domain_checks_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 481 "int.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 1080 "int.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 481 "int.m"
	}
mercury__int__succeeded  = SUCCESS_INDICATOR;
}
#line 477 "int.m"
    return mercury__int__succeeded;
#line 477 "int.m"
  }
#line 474 "int.m"
}

#line 411 "int.m"
MR_Integer MR_CALL 
mercury__int__rem_bits_per_int_1_f_0(
#line 411 "int.m"
  MR_Integer mercury__int__Int_1)
#line 411 "int.m"
{
#line 731 "int.m"
  {
#line 731 "int.m"
    MR_bool mercury__int__succeeded;
#line 731 "int.m"
    MR_Integer mercury__int__Rem_2;

#line 735 "int.m"
{
#define MR_PROC_LABEL mercury__int__rem_bits_per_int_1_f_0

	MR_Integer Int;
	MR_Integer Rem;

	Int =  mercury__int__Int_1 ;
		{
#line 735 "int.m"

    Rem = Int % ML_BITS_PER_INT;

#line 1123 "int.c"

		;}
#undef MR_PROC_LABEL
	 mercury__int__Rem_2  = Rem;
#line 735 "int.m"
}
#line 731 "int.m"
    return mercury__int__Rem_2;
#line 731 "int.m"
  }
#line 411 "int.m"
}

#line 404 "int.m"
MR_Integer MR_CALL 
mercury__int__times_bits_per_int_1_f_0(
#line 404 "int.m"
  MR_Integer mercury__int__Int_1)
#line 404 "int.m"
{
#line 723 "int.m"
  {
#line 723 "int.m"
    MR_bool mercury__int__succeeded;
#line 723 "int.m"
    MR_Integer mercury__int__Result_2;

#line 727 "int.m"
{
#define MR_PROC_LABEL mercury__int__times_bits_per_int_1_f_0

	MR_Integer Int;
	MR_Integer Result;

	Int =  mercury__int__Int_1 ;
		{
#line 727 "int.m"

    Result = Int * ML_BITS_PER_INT;

#line 1164 "int.c"

		;}
#undef MR_PROC_LABEL
	 mercury__int__Result_2  = Result;
#line 727 "int.m"
}
#line 723 "int.m"
    return mercury__int__Result_2;
#line 723 "int.m"
  }
#line 404 "int.m"
}

#line 400 "int.m"
MR_Integer MR_CALL 
mercury__int__quot_bits_per_int_1_f_0(
#line 400 "int.m"
  MR_Integer mercury__int__Int_1)
#line 400 "int.m"
{
#line 715 "int.m"
  {
#line 715 "int.m"
    MR_bool mercury__int__succeeded;
#line 715 "int.m"
    MR_Integer mercury__int__Div_2;

#line 719 "int.m"
{
#define MR_PROC_LABEL mercury__int__quot_bits_per_int_1_f_0

	MR_Integer Int;
	MR_Integer Div;

	Int =  mercury__int__Int_1 ;
		{
#line 719 "int.m"

    Div = Int / ML_BITS_PER_INT;

#line 1205 "int.c"

		;}
#undef MR_PROC_LABEL
	 mercury__int__Div_2  = Div;
#line 719 "int.m"
}
#line 715 "int.m"
    return mercury__int__Div_2;
#line 715 "int.m"
  }
#line 400 "int.m"
}

#line 393 "int.m"
MR_Integer MR_CALL 
mercury__int__floor_to_multiple_of_bits_per_int_1_f_0(
#line 393 "int.m"
  MR_Integer mercury__int__X_3)
#line 393 "int.m"
{
#line 514 "int.m"
  {
#line 514 "int.m"
    MR_bool mercury__int__succeeded;
#line 514 "int.m"
    MR_Integer mercury__int__Floor_4;
#line 514 "int.m"
    MR_Integer mercury__int__Trunc_5;
#line 514 "int.m"
    MR_Integer mercury__int__Floor0_6;

#line 719 "int.m"
{
#define MR_PROC_LABEL mercury__int__floor_to_multiple_of_bits_per_int_1_f_0

	MR_Integer Int;
	MR_Integer Div;

	Int =  mercury__int__X_3 ;
		{
#line 719 "int.m"

    Div = Int / ML_BITS_PER_INT;

#line 1250 "int.c"

		;}
#undef MR_PROC_LABEL
	 mercury__int__Trunc_5  = Div;
#line 719 "int.m"
}
#line 727 "int.m"
{
#define MR_PROC_LABEL mercury__int__floor_to_multiple_of_bits_per_int_1_f_0

	MR_Integer Int;
	MR_Integer Result;

	Int =  mercury__int__Trunc_5 ;
		{
#line 727 "int.m"

    Result = Int * ML_BITS_PER_INT;

#line 1270 "int.c"

		;}
#undef MR_PROC_LABEL
	 mercury__int__Floor0_6  = Result;
#line 727 "int.m"
}
#line 517 "int.m"
    mercury__int__succeeded = (mercury__int__Floor0_6 > mercury__int__X_3);
#line 519 "int.m"
    if (mercury__int__succeeded)
#line 518 "int.m"
      {
#line 518 "int.m"
        MR_Integer mercury__int__V_7_7;

#line 711 "int.m"
{
#define MR_PROC_LABEL mercury__int__floor_to_multiple_of_bits_per_int_1_f_0

	MR_Integer Bits;

		{
#line 711 "int.m"

    Bits = ML_BITS_PER_INT;

#line 1297 "int.c"

		;}
#undef MR_PROC_LABEL
	 mercury__int__V_7_7  = Bits;
#line 711 "int.m"
}
#line 518 "int.m"
        mercury__int__Floor_4 = (mercury__int__Floor0_6 - mercury__int__V_7_7);
#line 518 "int.m"
      }
#line 519 "int.m"
    else
#line 520 "int.m"
      mercury__int__Floor_4 = mercury__int__Floor0_6;
#line 514 "int.m"
    return mercury__int__Floor_4;
#line 514 "int.m"
  }
#line 393 "int.m"
}

#line 361 "int.m"
MR_Word MR_CALL 
mercury__int__int_to_doc_1_f_0(
#line 361 "int.m"
  MR_Integer mercury__int__X_3)
#line 361 "int.m"
{
#line 867 "int.m"
  {
#line 867 "int.m"
    MR_bool mercury__int__succeeded;
#line 867 "int.m"
    MR_Word mercury__int__HeadVar__2_2;
#line 867 "int.m"
    MR_String mercury__int__V_4_4;

#line 284 "string.opt"
    {
#line 284 "string.opt"
      mercury__string__int_to_base_string_3_p_0(mercury__int__X_3, (MR_Integer) 10, &mercury__int__V_4_4);
    }
#line 867 "int.m"
    {
#line 867 "int.m"
      mercury__int__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 867 "int.m"
      MR_hl_field(MR_mktag(1), mercury__int__HeadVar__2_2, 0) = ((MR_Box) (mercury__int__V_4_4));
#line 867 "int.m"
    }
#line 867 "int.m"
    return mercury__int__HeadVar__2_2;
#line 867 "int.m"
  }
#line 361 "int.m"
}

#line 357 "int.m"
void MR_CALL 
mercury__int__nondet_int_in_range_3_p_0(
#line 357 "int.m"
  MR_Integer mercury__int__Lo_4,
#line 357 "int.m"
  MR_Integer mercury__int__Hi_5,
#line 357 "int.m"
  MR_Integer * mercury__int__I_6,
#line 357 "int.m"
  MR_Cont mercury__int__cont,
#line 357 "int.m"
  void * mercury__int__cont_env_ptr)
#line 357 "int.m"
{
#line 860 "int.m"
  while (MR_TRUE)
#line 860 "int.m"
    {
#line 860 "int.m"
      /* tailcall optimized into a loop */
#line 860 "int.m"
      {
#line 860 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_4 < mercury__int__Hi_5);

#line 860 "int.m"
        if (mercury__int__succeeded)
#line 857 "int.m"
          {
#line 856 "int.m"
            *mercury__int__I_6 = mercury__int__Lo_4;
#line 856 "int.m"
            {
#line 856 "int.m"
              mercury__int__cont(mercury__int__cont_env_ptr);
            }
#line 858 "int.m"
            {
#line 858 "int.m"
              MR_Integer mercury__int__V_7_7 = (mercury__int__Lo_4 + (MR_Integer) 1);

#line 858 "int.m"
              /* direct tailcall eliminated */
#line 858 "int.m"
              {
#line 858 "int.m"
                MR_Integer mercury__int__Lo__tmp_copy_4 = mercury__int__V_7_7;

#line 858 "int.m"
                mercury__int__Lo_4 = mercury__int__Lo__tmp_copy_4;
#line 858 "int.m"
              }
#line 858 "int.m"
              continue;
#line 858 "int.m"
            }
#line 857 "int.m"
          }
#line 860 "int.m"
        else
#line 861 "int.m"
          {
#line 861 "int.m"
            mercury__int__succeeded = (mercury__int__Lo_4 == mercury__int__Hi_5);
#line 861 "int.m"
            if (mercury__int__succeeded)
#line 861 "int.m"
              {
#line 862 "int.m"
                *mercury__int__I_6 = mercury__int__Lo_4;
#line 862 "int.m"
                mercury__int__succeeded = MR_TRUE;
#line 861 "int.m"
              }
#line 861 "int.m"
            if (mercury__int__succeeded)
#line 861 "int.m"
              {
#line 861 "int.m"
                mercury__int__cont(mercury__int__cont_env_ptr);
#line 861 "int.m"
                return;
              }
#line 861 "int.m"
          }
#line 860 "int.m"
      }
#line 860 "int.m"
      break;
#line 860 "int.m"
    }
#line 357 "int.m"
}

#line 847 "int.m"
static void MR_CALL 
mercury__int__fold_down2_7_p_8_1(
#line 847 "int.m"
  void * mercury__int__env_ptr_arg)
#line 847 "int.m"
{
#line 847 "int.m"
  {
#line 847 "int.m"
    struct mercury__int__fold_down2_7_p_8_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_down2_7_p_8_env_0_s *) mercury__int__env_ptr_arg;

#line 847 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__V_22_22 = (MR_Integer) 1;
#line 847 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__V_19_19 = ((mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__Hi_10 - (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__V_22_22);
#line 847 "int.m"
    {
#line 847 "int.m"
      mercury__int__fold_down2_7_p_8((mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__TypeInfo_for_T_23, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__TypeInfo_for_U_24, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__P_8, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__Lo_9, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__V_19_19, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_A_17_17, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_A_14, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_B_18_18, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_B_16, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__cont_env_ptr);
#line 847 "int.m"
      return;
    }
#line 847 "int.m"
  }
#line 847 "int.m"
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
#line 848 "int.m"
    {
#line 848 "int.m"
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__Lo_9 <= (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__Hi_10);

#line 848 "int.m"
      if (mercury__int__succeeded)
#line 847 "int.m"
        {
#line 847 "int.m"
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__P_8, (MR_Integer) 1)));

#line 847 "int.m"
          {
#line 847 "int.m"
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__P_8), ((MR_Box) ((mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &(mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &(mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_B_18_18, mercury__int__fold_down2_7_p_8_1, &mercury__int__env);
          }
#line 847 "int.m"
        }
#line 848 "int.m"
      else
#line 848 "int.m"
        {
#line 848 "int.m"
          *((mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_B_16) = mercury__int__STATE_VARIABLE_B_0_15;
#line 848 "int.m"
          *((mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_A_14) = mercury__int__STATE_VARIABLE_A_0_13;
#line 848 "int.m"
          {
#line 848 "int.m"
            ((mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__cont)((mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__cont_env_ptr);
#line 848 "int.m"
            return;
          }
#line 848 "int.m"
        }
#line 848 "int.m"
    }
#line 350 "int.m"
  }
#line 350 "int.m"
}

#line 847 "int.m"
static void MR_CALL 
mercury__int__fold_down2_7_p_7_1(
#line 847 "int.m"
  void * mercury__int__env_ptr_arg)
#line 847 "int.m"
{
#line 847 "int.m"
  {
#line 847 "int.m"
    struct mercury__int__fold_down2_7_p_7_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_down2_7_p_7_env_0_s *) mercury__int__env_ptr_arg;

#line 847 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__V_22_22 = (MR_Integer) 1;
#line 847 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__V_19_19 = ((mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__Hi_10 - (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__V_22_22);
#line 847 "int.m"
    {
#line 847 "int.m"
      mercury__int__fold_down2_7_p_7((mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__TypeInfo_for_T_23, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__TypeInfo_for_U_24, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__P_8, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__Lo_9, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__V_19_19, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_A_17_17, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_A_14, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_B_18_18, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_B_16, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__cont_env_ptr);
#line 847 "int.m"
      return;
    }
#line 847 "int.m"
  }
#line 847 "int.m"
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
#line 848 "int.m"
    {
#line 848 "int.m"
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__Lo_9 <= (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__Hi_10);

#line 848 "int.m"
      if (mercury__int__succeeded)
#line 847 "int.m"
        {
#line 847 "int.m"
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__P_8, (MR_Integer) 1)));

#line 847 "int.m"
          {
#line 847 "int.m"
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__P_8), ((MR_Box) ((mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &(mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &(mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_B_18_18, mercury__int__fold_down2_7_p_7_1, &mercury__int__env);
          }
#line 847 "int.m"
        }
#line 848 "int.m"
      else
#line 848 "int.m"
        {
#line 848 "int.m"
          *((mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_B_16) = mercury__int__STATE_VARIABLE_B_0_15;
#line 848 "int.m"
          *((mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_A_14) = mercury__int__STATE_VARIABLE_A_0_13;
#line 848 "int.m"
          {
#line 848 "int.m"
            ((mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__cont)((mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__cont_env_ptr);
#line 848 "int.m"
            return;
          }
#line 848 "int.m"
        }
#line 848 "int.m"
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
#line 848 "int.m"
  while (MR_TRUE)
#line 848 "int.m"
    {
#line 848 "int.m"
      /* tailcall optimized into a loop */
#line 848 "int.m"
      {
#line 848 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 848 "int.m"
        if (mercury__int__succeeded)
#line 847 "int.m"
          {
#line 847 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 847 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 847 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 847 "int.m"
            MR_Integer mercury__int__V_22_22;
#line 847 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 847 "int.m"
            {
#line 847 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 847 "int.m"
            if (mercury__int__succeeded)
#line 847 "int.m"
              {
#line 847 "int.m"
                mercury__int__V_22_22 = (MR_Integer) 1;
#line 847 "int.m"
                mercury__int__V_19_19 = (mercury__int__Hi_10 - mercury__int__V_22_22);
#line 847 "int.m"
                /* direct tailcall eliminated */
#line 847 "int.m"
                {
#line 847 "int.m"
                  MR_Integer mercury__int__Hi__tmp_copy_10 = mercury__int__V_19_19;
#line 847 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 847 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 847 "int.m"
                  mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 847 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 847 "int.m"
                  mercury__int__Hi_10 = mercury__int__Hi__tmp_copy_10;
#line 847 "int.m"
                }
#line 847 "int.m"
                continue;
#line 847 "int.m"
              }
#line 847 "int.m"
          }
#line 848 "int.m"
        else
#line 848 "int.m"
          {
#line 848 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 848 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 848 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 848 "int.m"
          }
#line 848 "int.m"
        return mercury__int__succeeded;
#line 848 "int.m"
      }
#line 848 "int.m"
      break;
#line 848 "int.m"
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
#line 848 "int.m"
  while (MR_TRUE)
#line 848 "int.m"
    {
#line 848 "int.m"
      /* tailcall optimized into a loop */
#line 848 "int.m"
      {
#line 848 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 848 "int.m"
        if (mercury__int__succeeded)
#line 847 "int.m"
          {
#line 847 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 847 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 847 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 847 "int.m"
            MR_Integer mercury__int__V_22_22;
#line 847 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 847 "int.m"
            {
#line 847 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 847 "int.m"
            if (mercury__int__succeeded)
#line 847 "int.m"
              {
#line 847 "int.m"
                mercury__int__V_22_22 = (MR_Integer) 1;
#line 847 "int.m"
                mercury__int__V_19_19 = (mercury__int__Hi_10 - mercury__int__V_22_22);
#line 847 "int.m"
                /* direct tailcall eliminated */
#line 847 "int.m"
                {
#line 847 "int.m"
                  MR_Integer mercury__int__Hi__tmp_copy_10 = mercury__int__V_19_19;
#line 847 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 847 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 847 "int.m"
                  mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 847 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 847 "int.m"
                  mercury__int__Hi_10 = mercury__int__Hi__tmp_copy_10;
#line 847 "int.m"
                }
#line 847 "int.m"
                continue;
#line 847 "int.m"
              }
#line 847 "int.m"
          }
#line 848 "int.m"
        else
#line 848 "int.m"
          {
#line 848 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 848 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 848 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 848 "int.m"
          }
#line 848 "int.m"
        return mercury__int__succeeded;
#line 848 "int.m"
      }
#line 848 "int.m"
      break;
#line 848 "int.m"
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
#line 848 "int.m"
  while (MR_TRUE)
#line 848 "int.m"
    {
#line 848 "int.m"
      /* tailcall optimized into a loop */
#line 848 "int.m"
      {
#line 848 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 848 "int.m"
        if (mercury__int__succeeded)
#line 847 "int.m"
          {
#line 847 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 847 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 847 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 847 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 847 "int.m"
            {
#line 847 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 847 "int.m"
            mercury__int__V_19_19 = (mercury__int__Hi_10 - (MR_Integer) 1);
#line 847 "int.m"
            /* direct tailcall eliminated */
#line 847 "int.m"
            {
#line 847 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_10 = mercury__int__V_19_19;
#line 847 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 847 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 847 "int.m"
              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 847 "int.m"
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 847 "int.m"
              mercury__int__Hi_10 = mercury__int__Hi__tmp_copy_10;
#line 847 "int.m"
            }
#line 847 "int.m"
            continue;
#line 847 "int.m"
          }
#line 848 "int.m"
        else
#line 848 "int.m"
          {
#line 848 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 848 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 848 "int.m"
          }
#line 848 "int.m"
      }
#line 848 "int.m"
      break;
#line 848 "int.m"
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
#line 848 "int.m"
  while (MR_TRUE)
#line 848 "int.m"
    {
#line 848 "int.m"
      /* tailcall optimized into a loop */
#line 848 "int.m"
      {
#line 848 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 848 "int.m"
        if (mercury__int__succeeded)
#line 847 "int.m"
          {
#line 847 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 847 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 847 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 847 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 847 "int.m"
            {
#line 847 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 847 "int.m"
            mercury__int__V_19_19 = (mercury__int__Hi_10 - (MR_Integer) 1);
#line 847 "int.m"
            /* direct tailcall eliminated */
#line 847 "int.m"
            {
#line 847 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_10 = mercury__int__V_19_19;
#line 847 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 847 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 847 "int.m"
              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 847 "int.m"
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 847 "int.m"
              mercury__int__Hi_10 = mercury__int__Hi__tmp_copy_10;
#line 847 "int.m"
            }
#line 847 "int.m"
            continue;
#line 847 "int.m"
          }
#line 848 "int.m"
        else
#line 848 "int.m"
          {
#line 848 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 848 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 848 "int.m"
          }
#line 848 "int.m"
      }
#line 848 "int.m"
      break;
#line 848 "int.m"
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
#line 848 "int.m"
  while (MR_TRUE)
#line 848 "int.m"
    {
#line 848 "int.m"
      /* tailcall optimized into a loop */
#line 848 "int.m"
      {
#line 848 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 848 "int.m"
        if (mercury__int__succeeded)
#line 847 "int.m"
          {
#line 847 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 847 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 847 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 847 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 847 "int.m"
            {
#line 847 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 847 "int.m"
            mercury__int__V_19_19 = (mercury__int__Hi_10 - (MR_Integer) 1);
#line 847 "int.m"
            /* direct tailcall eliminated */
#line 847 "int.m"
            {
#line 847 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_10 = mercury__int__V_19_19;
#line 847 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 847 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 847 "int.m"
              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 847 "int.m"
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 847 "int.m"
              mercury__int__Hi_10 = mercury__int__Hi__tmp_copy_10;
#line 847 "int.m"
            }
#line 847 "int.m"
            continue;
#line 847 "int.m"
          }
#line 848 "int.m"
        else
#line 848 "int.m"
          {
#line 848 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 848 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 848 "int.m"
          }
#line 848 "int.m"
      }
#line 848 "int.m"
      break;
#line 848 "int.m"
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
#line 848 "int.m"
  while (MR_TRUE)
#line 848 "int.m"
    {
#line 848 "int.m"
      /* tailcall optimized into a loop */
#line 848 "int.m"
      {
#line 848 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 848 "int.m"
        if (mercury__int__succeeded)
#line 847 "int.m"
          {
#line 847 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 847 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 847 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 847 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 847 "int.m"
            {
#line 847 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 847 "int.m"
            mercury__int__V_19_19 = (mercury__int__Hi_10 - (MR_Integer) 1);
#line 847 "int.m"
            /* direct tailcall eliminated */
#line 847 "int.m"
            {
#line 847 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_10 = mercury__int__V_19_19;
#line 847 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 847 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 847 "int.m"
              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 847 "int.m"
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 847 "int.m"
              mercury__int__Hi_10 = mercury__int__Hi__tmp_copy_10;
#line 847 "int.m"
            }
#line 847 "int.m"
            continue;
#line 847 "int.m"
          }
#line 848 "int.m"
        else
#line 848 "int.m"
          {
#line 848 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 848 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 848 "int.m"
          }
#line 848 "int.m"
      }
#line 848 "int.m"
      break;
#line 848 "int.m"
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
#line 848 "int.m"
  while (MR_TRUE)
#line 848 "int.m"
    {
#line 848 "int.m"
      /* tailcall optimized into a loop */
#line 848 "int.m"
      {
#line 848 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 848 "int.m"
        if (mercury__int__succeeded)
#line 847 "int.m"
          {
#line 847 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 847 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 847 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 847 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 847 "int.m"
            {
#line 847 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 847 "int.m"
            mercury__int__V_19_19 = (mercury__int__Hi_10 - (MR_Integer) 1);
#line 847 "int.m"
            /* direct tailcall eliminated */
#line 847 "int.m"
            {
#line 847 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_10 = mercury__int__V_19_19;
#line 847 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 847 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 847 "int.m"
              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 847 "int.m"
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 847 "int.m"
              mercury__int__Hi_10 = mercury__int__Hi__tmp_copy_10;
#line 847 "int.m"
            }
#line 847 "int.m"
            continue;
#line 847 "int.m"
          }
#line 848 "int.m"
        else
#line 848 "int.m"
          {
#line 848 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 848 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 848 "int.m"
          }
#line 848 "int.m"
      }
#line 848 "int.m"
      break;
#line 848 "int.m"
    }
#line 334 "int.m"
}

#line 830 "int.m"
static void MR_CALL 
mercury__int__fold_up2_7_p_9_1(
#line 830 "int.m"
  void * mercury__int__env_ptr_arg)
#line 830 "int.m"
{
#line 830 "int.m"
  {
#line 830 "int.m"
    struct mercury__int__fold_up2_7_p_9_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_up2_7_p_9_env_0_s *) mercury__int__env_ptr_arg;

#line 830 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__V_22_22 = (MR_Integer) 1;
#line 830 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__V_19_19 = ((mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__Lo_9 + (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__V_22_22);
#line 830 "int.m"
    {
#line 830 "int.m"
      mercury__int__fold_up2_7_p_9((mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__TypeInfo_for_T_23, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__TypeInfo_for_U_24, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__P_8, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__V_19_19, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__Hi_10, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_A_17_17, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_A_14, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_B_18_18, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_B_16, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__cont_env_ptr);
#line 830 "int.m"
      return;
    }
#line 830 "int.m"
  }
#line 830 "int.m"
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
#line 831 "int.m"
    {
#line 831 "int.m"
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__Lo_9 <= (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__Hi_10);

#line 831 "int.m"
      if (mercury__int__succeeded)
#line 830 "int.m"
        {
#line 830 "int.m"
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__P_8, (MR_Integer) 1)));

#line 830 "int.m"
          {
#line 830 "int.m"
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__P_8), ((MR_Box) ((mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &(mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &(mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_B_18_18, mercury__int__fold_up2_7_p_9_1, &mercury__int__env);
          }
#line 830 "int.m"
        }
#line 831 "int.m"
      else
#line 831 "int.m"
        {
#line 831 "int.m"
          *((mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_B_16) = mercury__int__STATE_VARIABLE_B_0_15;
#line 831 "int.m"
          *((mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_A_14) = mercury__int__STATE_VARIABLE_A_0_13;
#line 831 "int.m"
          {
#line 831 "int.m"
            ((mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__cont)((mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__cont_env_ptr);
#line 831 "int.m"
            return;
          }
#line 831 "int.m"
        }
#line 831 "int.m"
    }
#line 325 "int.m"
  }
#line 325 "int.m"
}

#line 830 "int.m"
static void MR_CALL 
mercury__int__fold_up2_7_p_8_1(
#line 830 "int.m"
  void * mercury__int__env_ptr_arg)
#line 830 "int.m"
{
#line 830 "int.m"
  {
#line 830 "int.m"
    struct mercury__int__fold_up2_7_p_8_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_up2_7_p_8_env_0_s *) mercury__int__env_ptr_arg;

#line 830 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__V_22_22 = (MR_Integer) 1;
#line 830 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__V_19_19 = ((mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__Lo_9 + (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__V_22_22);
#line 830 "int.m"
    {
#line 830 "int.m"
      mercury__int__fold_up2_7_p_8((mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__TypeInfo_for_T_23, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__TypeInfo_for_U_24, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__P_8, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__V_19_19, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__Hi_10, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_A_17_17, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_A_14, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_B_18_18, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_B_16, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__cont_env_ptr);
#line 830 "int.m"
      return;
    }
#line 830 "int.m"
  }
#line 830 "int.m"
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
#line 831 "int.m"
    {
#line 831 "int.m"
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__Lo_9 <= (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__Hi_10);

#line 831 "int.m"
      if (mercury__int__succeeded)
#line 830 "int.m"
        {
#line 830 "int.m"
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__P_8, (MR_Integer) 1)));

#line 830 "int.m"
          {
#line 830 "int.m"
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__P_8), ((MR_Box) ((mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &(mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &(mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_B_18_18, mercury__int__fold_up2_7_p_8_1, &mercury__int__env);
          }
#line 830 "int.m"
        }
#line 831 "int.m"
      else
#line 831 "int.m"
        {
#line 831 "int.m"
          *((mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_B_16) = mercury__int__STATE_VARIABLE_B_0_15;
#line 831 "int.m"
          *((mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_A_14) = mercury__int__STATE_VARIABLE_A_0_13;
#line 831 "int.m"
          {
#line 831 "int.m"
            ((mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__cont)((mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__cont_env_ptr);
#line 831 "int.m"
            return;
          }
#line 831 "int.m"
        }
#line 831 "int.m"
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
#line 831 "int.m"
  while (MR_TRUE)
#line 831 "int.m"
    {
#line 831 "int.m"
      /* tailcall optimized into a loop */
#line 831 "int.m"
      {
#line 831 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 831 "int.m"
        if (mercury__int__succeeded)
#line 830 "int.m"
          {
#line 830 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 830 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 830 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 830 "int.m"
            MR_Integer mercury__int__V_22_22;
#line 830 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 830 "int.m"
            {
#line 830 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 830 "int.m"
            if (mercury__int__succeeded)
#line 830 "int.m"
              {
#line 830 "int.m"
                mercury__int__V_22_22 = (MR_Integer) 1;
#line 830 "int.m"
                mercury__int__V_19_19 = (mercury__int__Lo_9 + mercury__int__V_22_22);
#line 830 "int.m"
                /* direct tailcall eliminated */
#line 830 "int.m"
                {
#line 830 "int.m"
                  MR_Integer mercury__int__Lo__tmp_copy_9 = mercury__int__V_19_19;
#line 830 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 830 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 830 "int.m"
                  mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 830 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 830 "int.m"
                  mercury__int__Lo_9 = mercury__int__Lo__tmp_copy_9;
#line 830 "int.m"
                }
#line 830 "int.m"
                continue;
#line 830 "int.m"
              }
#line 830 "int.m"
          }
#line 831 "int.m"
        else
#line 831 "int.m"
          {
#line 831 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 831 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 831 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 831 "int.m"
          }
#line 831 "int.m"
        return mercury__int__succeeded;
#line 831 "int.m"
      }
#line 831 "int.m"
      break;
#line 831 "int.m"
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
#line 831 "int.m"
  while (MR_TRUE)
#line 831 "int.m"
    {
#line 831 "int.m"
      /* tailcall optimized into a loop */
#line 831 "int.m"
      {
#line 831 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 831 "int.m"
        if (mercury__int__succeeded)
#line 830 "int.m"
          {
#line 830 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 830 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 830 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 830 "int.m"
            MR_Integer mercury__int__V_22_22;
#line 830 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 830 "int.m"
            {
#line 830 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 830 "int.m"
            if (mercury__int__succeeded)
#line 830 "int.m"
              {
#line 830 "int.m"
                mercury__int__V_22_22 = (MR_Integer) 1;
#line 830 "int.m"
                mercury__int__V_19_19 = (mercury__int__Lo_9 + mercury__int__V_22_22);
#line 830 "int.m"
                /* direct tailcall eliminated */
#line 830 "int.m"
                {
#line 830 "int.m"
                  MR_Integer mercury__int__Lo__tmp_copy_9 = mercury__int__V_19_19;
#line 830 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 830 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 830 "int.m"
                  mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 830 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 830 "int.m"
                  mercury__int__Lo_9 = mercury__int__Lo__tmp_copy_9;
#line 830 "int.m"
                }
#line 830 "int.m"
                continue;
#line 830 "int.m"
              }
#line 830 "int.m"
          }
#line 831 "int.m"
        else
#line 831 "int.m"
          {
#line 831 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 831 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 831 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 831 "int.m"
          }
#line 831 "int.m"
        return mercury__int__succeeded;
#line 831 "int.m"
      }
#line 831 "int.m"
      break;
#line 831 "int.m"
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
#line 831 "int.m"
  while (MR_TRUE)
#line 831 "int.m"
    {
#line 831 "int.m"
      /* tailcall optimized into a loop */
#line 831 "int.m"
      {
#line 831 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 831 "int.m"
        if (mercury__int__succeeded)
#line 830 "int.m"
          {
#line 830 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 830 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 830 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 830 "int.m"
            MR_Integer mercury__int__V_22_22;
#line 830 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 830 "int.m"
            {
#line 830 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 830 "int.m"
            if (mercury__int__succeeded)
#line 830 "int.m"
              {
#line 830 "int.m"
                mercury__int__V_22_22 = (MR_Integer) 1;
#line 830 "int.m"
                mercury__int__V_19_19 = (mercury__int__Lo_9 + mercury__int__V_22_22);
#line 830 "int.m"
                /* direct tailcall eliminated */
#line 830 "int.m"
                {
#line 830 "int.m"
                  MR_Integer mercury__int__Lo__tmp_copy_9 = mercury__int__V_19_19;
#line 830 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 830 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 830 "int.m"
                  mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 830 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 830 "int.m"
                  mercury__int__Lo_9 = mercury__int__Lo__tmp_copy_9;
#line 830 "int.m"
                }
#line 830 "int.m"
                continue;
#line 830 "int.m"
              }
#line 830 "int.m"
          }
#line 831 "int.m"
        else
#line 831 "int.m"
          {
#line 831 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 831 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 831 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 831 "int.m"
          }
#line 831 "int.m"
        return mercury__int__succeeded;
#line 831 "int.m"
      }
#line 831 "int.m"
      break;
#line 831 "int.m"
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
#line 831 "int.m"
  while (MR_TRUE)
#line 831 "int.m"
    {
#line 831 "int.m"
      /* tailcall optimized into a loop */
#line 831 "int.m"
      {
#line 831 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 831 "int.m"
        if (mercury__int__succeeded)
#line 830 "int.m"
          {
#line 830 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 830 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 830 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 830 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 830 "int.m"
            {
#line 830 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 830 "int.m"
            mercury__int__V_19_19 = (mercury__int__Lo_9 + (MR_Integer) 1);
#line 830 "int.m"
            /* direct tailcall eliminated */
#line 830 "int.m"
            {
#line 830 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_9 = mercury__int__V_19_19;
#line 830 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 830 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 830 "int.m"
              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 830 "int.m"
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 830 "int.m"
              mercury__int__Lo_9 = mercury__int__Lo__tmp_copy_9;
#line 830 "int.m"
            }
#line 830 "int.m"
            continue;
#line 830 "int.m"
          }
#line 831 "int.m"
        else
#line 831 "int.m"
          {
#line 831 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 831 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 831 "int.m"
          }
#line 831 "int.m"
      }
#line 831 "int.m"
      break;
#line 831 "int.m"
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
#line 831 "int.m"
  while (MR_TRUE)
#line 831 "int.m"
    {
#line 831 "int.m"
      /* tailcall optimized into a loop */
#line 831 "int.m"
      {
#line 831 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 831 "int.m"
        if (mercury__int__succeeded)
#line 830 "int.m"
          {
#line 830 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 830 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 830 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 830 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 830 "int.m"
            {
#line 830 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 830 "int.m"
            mercury__int__V_19_19 = (mercury__int__Lo_9 + (MR_Integer) 1);
#line 830 "int.m"
            /* direct tailcall eliminated */
#line 830 "int.m"
            {
#line 830 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_9 = mercury__int__V_19_19;
#line 830 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 830 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 830 "int.m"
              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 830 "int.m"
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 830 "int.m"
              mercury__int__Lo_9 = mercury__int__Lo__tmp_copy_9;
#line 830 "int.m"
            }
#line 830 "int.m"
            continue;
#line 830 "int.m"
          }
#line 831 "int.m"
        else
#line 831 "int.m"
          {
#line 831 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 831 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 831 "int.m"
          }
#line 831 "int.m"
      }
#line 831 "int.m"
      break;
#line 831 "int.m"
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
#line 831 "int.m"
  while (MR_TRUE)
#line 831 "int.m"
    {
#line 831 "int.m"
      /* tailcall optimized into a loop */
#line 831 "int.m"
      {
#line 831 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 831 "int.m"
        if (mercury__int__succeeded)
#line 830 "int.m"
          {
#line 830 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 830 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 830 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 830 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 830 "int.m"
            {
#line 830 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 830 "int.m"
            mercury__int__V_19_19 = (mercury__int__Lo_9 + (MR_Integer) 1);
#line 830 "int.m"
            /* direct tailcall eliminated */
#line 830 "int.m"
            {
#line 830 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_9 = mercury__int__V_19_19;
#line 830 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 830 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 830 "int.m"
              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 830 "int.m"
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 830 "int.m"
              mercury__int__Lo_9 = mercury__int__Lo__tmp_copy_9;
#line 830 "int.m"
            }
#line 830 "int.m"
            continue;
#line 830 "int.m"
          }
#line 831 "int.m"
        else
#line 831 "int.m"
          {
#line 831 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 831 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 831 "int.m"
          }
#line 831 "int.m"
      }
#line 831 "int.m"
      break;
#line 831 "int.m"
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
#line 831 "int.m"
  while (MR_TRUE)
#line 831 "int.m"
    {
#line 831 "int.m"
      /* tailcall optimized into a loop */
#line 831 "int.m"
      {
#line 831 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 831 "int.m"
        if (mercury__int__succeeded)
#line 830 "int.m"
          {
#line 830 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 830 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 830 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 830 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 830 "int.m"
            {
#line 830 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 830 "int.m"
            mercury__int__V_19_19 = (mercury__int__Lo_9 + (MR_Integer) 1);
#line 830 "int.m"
            /* direct tailcall eliminated */
#line 830 "int.m"
            {
#line 830 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_9 = mercury__int__V_19_19;
#line 830 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 830 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 830 "int.m"
              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 830 "int.m"
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 830 "int.m"
              mercury__int__Lo_9 = mercury__int__Lo__tmp_copy_9;
#line 830 "int.m"
            }
#line 830 "int.m"
            continue;
#line 830 "int.m"
          }
#line 831 "int.m"
        else
#line 831 "int.m"
          {
#line 831 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 831 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 831 "int.m"
          }
#line 831 "int.m"
      }
#line 831 "int.m"
      break;
#line 831 "int.m"
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
#line 831 "int.m"
  while (MR_TRUE)
#line 831 "int.m"
    {
#line 831 "int.m"
      /* tailcall optimized into a loop */
#line 831 "int.m"
      {
#line 831 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

#line 831 "int.m"
        if (mercury__int__succeeded)
#line 830 "int.m"
          {
#line 830 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
#line 830 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
#line 830 "int.m"
            MR_Integer mercury__int__V_19_19;
#line 830 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

#line 830 "int.m"
            {
#line 830 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
#line 830 "int.m"
            mercury__int__V_19_19 = (mercury__int__Lo_9 + (MR_Integer) 1);
#line 830 "int.m"
            /* direct tailcall eliminated */
#line 830 "int.m"
            {
#line 830 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_9 = mercury__int__V_19_19;
#line 830 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__int__STATE_VARIABLE_A_17_17;
#line 830 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__int__STATE_VARIABLE_B_18_18;

#line 830 "int.m"
              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_0__tmp_copy_15;
#line 830 "int.m"
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_13;
#line 830 "int.m"
              mercury__int__Lo_9 = mercury__int__Lo__tmp_copy_9;
#line 830 "int.m"
            }
#line 830 "int.m"
            continue;
#line 830 "int.m"
          }
#line 831 "int.m"
        else
#line 831 "int.m"
          {
#line 831 "int.m"
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
#line 831 "int.m"
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
#line 831 "int.m"
          }
#line 831 "int.m"
      }
#line 831 "int.m"
      break;
#line 831 "int.m"
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
#line 842 "int.m"
  while (MR_TRUE)
#line 842 "int.m"
    {
#line 842 "int.m"
      /* tailcall optimized into a loop */
#line 842 "int.m"
      {
#line 842 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);
#line 842 "int.m"
        MR_Box mercury__int__HeadVar__5_5;

#line 842 "int.m"
        if (mercury__int__succeeded)
#line 843 "int.m"
          {
#line 843 "int.m"
            MR_Integer mercury__int__V_10_10 = (mercury__int__Hi_8 - (MR_Integer) 1);
#line 843 "int.m"
            MR_Box mercury__int__V_12_12;
#line 843 "int.m"
            MR_Box MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__int__F_6, (MR_Integer) 1)));

#line 843 "int.m"
            {
#line 843 "int.m"
              mercury__int__V_12_12 = mercury__int__func_0(((MR_Box) mercury__int__F_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__A_9);
            }
#line 842 "int.m"
            /* direct tailcall eliminated */
#line 842 "int.m"
            {
#line 842 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_8 = mercury__int__V_10_10;
#line 842 "int.m"
              MR_Box mercury__int__A__tmp_copy_9 = mercury__int__V_12_12;

#line 842 "int.m"
              mercury__int__A_9 = mercury__int__A__tmp_copy_9;
#line 842 "int.m"
              mercury__int__Hi_8 = mercury__int__Hi__tmp_copy_8;
#line 842 "int.m"
            }
#line 842 "int.m"
            continue;
#line 843 "int.m"
          }
#line 842 "int.m"
        else
#line 842 "int.m"
          mercury__int__HeadVar__5_5 = mercury__int__A_9;
#line 842 "int.m"
        return mercury__int__HeadVar__5_5;
#line 842 "int.m"
      }
#line 842 "int.m"
      break;
#line 842 "int.m"
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
#line 839 "int.m"
  while (MR_TRUE)
#line 839 "int.m"
    {
#line 839 "int.m"
      /* tailcall optimized into a loop */
#line 839 "int.m"
      {
#line 839 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 839 "int.m"
        if (mercury__int__succeeded)
#line 838 "int.m"
          {
#line 838 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 838 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 838 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 838 "int.m"
            {
#line 838 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 838 "int.m"
            mercury__int__V_13_13 = (mercury__int__Hi_8 - (MR_Integer) 1);
#line 838 "int.m"
            /* direct tailcall eliminated */
#line 838 "int.m"
            {
#line 838 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_8 = mercury__int__V_13_13;
#line 838 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 838 "int.m"
              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 838 "int.m"
              mercury__int__Hi_8 = mercury__int__Hi__tmp_copy_8;
#line 838 "int.m"
            }
#line 838 "int.m"
            continue;
#line 838 "int.m"
          }
#line 839 "int.m"
        else
#line 838 "int.m"
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 839 "int.m"
      }
#line 839 "int.m"
      break;
#line 839 "int.m"
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
#line 839 "int.m"
  while (MR_TRUE)
#line 839 "int.m"
    {
#line 839 "int.m"
      /* tailcall optimized into a loop */
#line 839 "int.m"
      {
#line 839 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 839 "int.m"
        if (mercury__int__succeeded)
#line 838 "int.m"
          {
#line 838 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 838 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 838 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 838 "int.m"
            {
#line 838 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 838 "int.m"
            mercury__int__V_13_13 = (mercury__int__Hi_8 - (MR_Integer) 1);
#line 838 "int.m"
            /* direct tailcall eliminated */
#line 838 "int.m"
            {
#line 838 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_8 = mercury__int__V_13_13;
#line 838 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 838 "int.m"
              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 838 "int.m"
              mercury__int__Hi_8 = mercury__int__Hi__tmp_copy_8;
#line 838 "int.m"
            }
#line 838 "int.m"
            continue;
#line 838 "int.m"
          }
#line 839 "int.m"
        else
#line 838 "int.m"
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 839 "int.m"
      }
#line 839 "int.m"
      break;
#line 839 "int.m"
    }
#line 290 "int.m"
}

#line 838 "int.m"
static void MR_CALL 
mercury__int__fold_down_5_p_8_1(
#line 838 "int.m"
  void * mercury__int__env_ptr_arg)
#line 838 "int.m"
{
#line 838 "int.m"
  {
#line 838 "int.m"
    struct mercury__int__fold_down_5_p_8_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_down_5_p_8_env_0_s *) mercury__int__env_ptr_arg;

#line 838 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__V_15_15 = (MR_Integer) 1;
#line 838 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__V_13_13 = ((mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__Hi_8 - (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__V_15_15);
#line 838 "int.m"
    {
#line 838 "int.m"
      mercury__int__fold_down_5_p_8((mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__TypeInfo_for_T_16, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__P_6, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__Lo_7, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__V_13_13, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__STATE_VARIABLE_A_12_12, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__STATE_VARIABLE_A_11, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__cont_env_ptr);
#line 838 "int.m"
      return;
    }
#line 838 "int.m"
  }
#line 838 "int.m"
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
#line 839 "int.m"
    {
#line 839 "int.m"
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_down_5_p_8_env_0__Lo_7 <= (mercury__int__env).mercury__int__fold_down_5_p_8_env_0__Hi_8);

#line 839 "int.m"
      if (mercury__int__succeeded)
#line 838 "int.m"
        {
#line 838 "int.m"
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_down_5_p_8_env_0__P_6, (MR_Integer) 1)));

#line 838 "int.m"
          {
#line 838 "int.m"
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_down_5_p_8_env_0__P_6), ((MR_Box) ((mercury__int__env).mercury__int__fold_down_5_p_8_env_0__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &(mercury__int__env).mercury__int__fold_down_5_p_8_env_0__STATE_VARIABLE_A_12_12, mercury__int__fold_down_5_p_8_1, &mercury__int__env);
          }
#line 838 "int.m"
        }
#line 839 "int.m"
      else
#line 838 "int.m"
        {
#line 838 "int.m"
          *((mercury__int__env).mercury__int__fold_down_5_p_8_env_0__STATE_VARIABLE_A_11) = mercury__int__STATE_VARIABLE_A_0_10;
#line 838 "int.m"
          {
#line 838 "int.m"
            ((mercury__int__env).mercury__int__fold_down_5_p_8_env_0__cont)((mercury__int__env).mercury__int__fold_down_5_p_8_env_0__cont_env_ptr);
#line 838 "int.m"
            return;
          }
#line 838 "int.m"
        }
#line 839 "int.m"
    }
#line 288 "int.m"
  }
#line 288 "int.m"
}

#line 838 "int.m"
static void MR_CALL 
mercury__int__fold_down_5_p_7_1(
#line 838 "int.m"
  void * mercury__int__env_ptr_arg)
#line 838 "int.m"
{
#line 838 "int.m"
  {
#line 838 "int.m"
    struct mercury__int__fold_down_5_p_7_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_down_5_p_7_env_0_s *) mercury__int__env_ptr_arg;

#line 838 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__V_15_15 = (MR_Integer) 1;
#line 838 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__V_13_13 = ((mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__Hi_8 - (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__V_15_15);
#line 838 "int.m"
    {
#line 838 "int.m"
      mercury__int__fold_down_5_p_7((mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__TypeInfo_for_T_16, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__P_6, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__Lo_7, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__V_13_13, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__STATE_VARIABLE_A_12_12, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__STATE_VARIABLE_A_11, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__cont_env_ptr);
#line 838 "int.m"
      return;
    }
#line 838 "int.m"
  }
#line 838 "int.m"
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
#line 839 "int.m"
    {
#line 839 "int.m"
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_down_5_p_7_env_0__Lo_7 <= (mercury__int__env).mercury__int__fold_down_5_p_7_env_0__Hi_8);

#line 839 "int.m"
      if (mercury__int__succeeded)
#line 838 "int.m"
        {
#line 838 "int.m"
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_down_5_p_7_env_0__P_6, (MR_Integer) 1)));

#line 838 "int.m"
          {
#line 838 "int.m"
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_down_5_p_7_env_0__P_6), ((MR_Box) ((mercury__int__env).mercury__int__fold_down_5_p_7_env_0__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &(mercury__int__env).mercury__int__fold_down_5_p_7_env_0__STATE_VARIABLE_A_12_12, mercury__int__fold_down_5_p_7_1, &mercury__int__env);
          }
#line 838 "int.m"
        }
#line 839 "int.m"
      else
#line 838 "int.m"
        {
#line 838 "int.m"
          *((mercury__int__env).mercury__int__fold_down_5_p_7_env_0__STATE_VARIABLE_A_11) = mercury__int__STATE_VARIABLE_A_0_10;
#line 838 "int.m"
          {
#line 838 "int.m"
            ((mercury__int__env).mercury__int__fold_down_5_p_7_env_0__cont)((mercury__int__env).mercury__int__fold_down_5_p_7_env_0__cont_env_ptr);
#line 838 "int.m"
            return;
          }
#line 838 "int.m"
        }
#line 839 "int.m"
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
#line 839 "int.m"
  while (MR_TRUE)
#line 839 "int.m"
    {
#line 839 "int.m"
      /* tailcall optimized into a loop */
#line 839 "int.m"
      {
#line 839 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 839 "int.m"
        if (mercury__int__succeeded)
#line 838 "int.m"
          {
#line 838 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 838 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 838 "int.m"
            MR_Integer mercury__int__V_15_15;
#line 838 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 838 "int.m"
            {
#line 838 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 838 "int.m"
            if (mercury__int__succeeded)
#line 838 "int.m"
              {
#line 838 "int.m"
                mercury__int__V_15_15 = (MR_Integer) 1;
#line 838 "int.m"
                mercury__int__V_13_13 = (mercury__int__Hi_8 - mercury__int__V_15_15);
#line 838 "int.m"
                /* direct tailcall eliminated */
#line 838 "int.m"
                {
#line 838 "int.m"
                  MR_Integer mercury__int__Hi__tmp_copy_8 = mercury__int__V_13_13;
#line 838 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 838 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 838 "int.m"
                  mercury__int__Hi_8 = mercury__int__Hi__tmp_copy_8;
#line 838 "int.m"
                }
#line 838 "int.m"
                continue;
#line 838 "int.m"
              }
#line 838 "int.m"
          }
#line 839 "int.m"
        else
#line 838 "int.m"
          {
#line 838 "int.m"
            *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 838 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 838 "int.m"
          }
#line 839 "int.m"
        return mercury__int__succeeded;
#line 839 "int.m"
      }
#line 839 "int.m"
      break;
#line 839 "int.m"
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
#line 839 "int.m"
  while (MR_TRUE)
#line 839 "int.m"
    {
#line 839 "int.m"
      /* tailcall optimized into a loop */
#line 839 "int.m"
      {
#line 839 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 839 "int.m"
        if (mercury__int__succeeded)
#line 838 "int.m"
          {
#line 838 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 838 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 838 "int.m"
            MR_Integer mercury__int__V_15_15;
#line 838 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 838 "int.m"
            {
#line 838 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 838 "int.m"
            if (mercury__int__succeeded)
#line 838 "int.m"
              {
#line 838 "int.m"
                mercury__int__V_15_15 = (MR_Integer) 1;
#line 838 "int.m"
                mercury__int__V_13_13 = (mercury__int__Hi_8 - mercury__int__V_15_15);
#line 838 "int.m"
                /* direct tailcall eliminated */
#line 838 "int.m"
                {
#line 838 "int.m"
                  MR_Integer mercury__int__Hi__tmp_copy_8 = mercury__int__V_13_13;
#line 838 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 838 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 838 "int.m"
                  mercury__int__Hi_8 = mercury__int__Hi__tmp_copy_8;
#line 838 "int.m"
                }
#line 838 "int.m"
                continue;
#line 838 "int.m"
              }
#line 838 "int.m"
          }
#line 839 "int.m"
        else
#line 838 "int.m"
          {
#line 838 "int.m"
            *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 838 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 838 "int.m"
          }
#line 839 "int.m"
        return mercury__int__succeeded;
#line 839 "int.m"
      }
#line 839 "int.m"
      break;
#line 839 "int.m"
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
#line 839 "int.m"
  while (MR_TRUE)
#line 839 "int.m"
    {
#line 839 "int.m"
      /* tailcall optimized into a loop */
#line 839 "int.m"
      {
#line 839 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 839 "int.m"
        if (mercury__int__succeeded)
#line 838 "int.m"
          {
#line 838 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 838 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 838 "int.m"
            MR_Integer mercury__int__V_15_15;
#line 838 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 838 "int.m"
            {
#line 838 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 838 "int.m"
            if (mercury__int__succeeded)
#line 838 "int.m"
              {
#line 838 "int.m"
                mercury__int__V_15_15 = (MR_Integer) 1;
#line 838 "int.m"
                mercury__int__V_13_13 = (mercury__int__Hi_8 - mercury__int__V_15_15);
#line 838 "int.m"
                /* direct tailcall eliminated */
#line 838 "int.m"
                {
#line 838 "int.m"
                  MR_Integer mercury__int__Hi__tmp_copy_8 = mercury__int__V_13_13;
#line 838 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 838 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 838 "int.m"
                  mercury__int__Hi_8 = mercury__int__Hi__tmp_copy_8;
#line 838 "int.m"
                }
#line 838 "int.m"
                continue;
#line 838 "int.m"
              }
#line 838 "int.m"
          }
#line 839 "int.m"
        else
#line 838 "int.m"
          {
#line 838 "int.m"
            *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 838 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 838 "int.m"
          }
#line 839 "int.m"
        return mercury__int__succeeded;
#line 839 "int.m"
      }
#line 839 "int.m"
      break;
#line 839 "int.m"
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
#line 839 "int.m"
  while (MR_TRUE)
#line 839 "int.m"
    {
#line 839 "int.m"
      /* tailcall optimized into a loop */
#line 839 "int.m"
      {
#line 839 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 839 "int.m"
        if (mercury__int__succeeded)
#line 838 "int.m"
          {
#line 838 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 838 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 838 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 838 "int.m"
            {
#line 838 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 838 "int.m"
            mercury__int__V_13_13 = (mercury__int__Hi_8 - (MR_Integer) 1);
#line 838 "int.m"
            /* direct tailcall eliminated */
#line 838 "int.m"
            {
#line 838 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_8 = mercury__int__V_13_13;
#line 838 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 838 "int.m"
              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 838 "int.m"
              mercury__int__Hi_8 = mercury__int__Hi__tmp_copy_8;
#line 838 "int.m"
            }
#line 838 "int.m"
            continue;
#line 838 "int.m"
          }
#line 839 "int.m"
        else
#line 838 "int.m"
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 839 "int.m"
      }
#line 839 "int.m"
      break;
#line 839 "int.m"
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
#line 839 "int.m"
  while (MR_TRUE)
#line 839 "int.m"
    {
#line 839 "int.m"
      /* tailcall optimized into a loop */
#line 839 "int.m"
      {
#line 839 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 839 "int.m"
        if (mercury__int__succeeded)
#line 838 "int.m"
          {
#line 838 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 838 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 838 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 838 "int.m"
            {
#line 838 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 838 "int.m"
            mercury__int__V_13_13 = (mercury__int__Hi_8 - (MR_Integer) 1);
#line 838 "int.m"
            /* direct tailcall eliminated */
#line 838 "int.m"
            {
#line 838 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_8 = mercury__int__V_13_13;
#line 838 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 838 "int.m"
              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 838 "int.m"
              mercury__int__Hi_8 = mercury__int__Hi__tmp_copy_8;
#line 838 "int.m"
            }
#line 838 "int.m"
            continue;
#line 838 "int.m"
          }
#line 839 "int.m"
        else
#line 838 "int.m"
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 839 "int.m"
      }
#line 839 "int.m"
      break;
#line 839 "int.m"
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
#line 839 "int.m"
  while (MR_TRUE)
#line 839 "int.m"
    {
#line 839 "int.m"
      /* tailcall optimized into a loop */
#line 839 "int.m"
      {
#line 839 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 839 "int.m"
        if (mercury__int__succeeded)
#line 838 "int.m"
          {
#line 838 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 838 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 838 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 838 "int.m"
            {
#line 838 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 838 "int.m"
            mercury__int__V_13_13 = (mercury__int__Hi_8 - (MR_Integer) 1);
#line 838 "int.m"
            /* direct tailcall eliminated */
#line 838 "int.m"
            {
#line 838 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_8 = mercury__int__V_13_13;
#line 838 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 838 "int.m"
              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 838 "int.m"
              mercury__int__Hi_8 = mercury__int__Hi__tmp_copy_8;
#line 838 "int.m"
            }
#line 838 "int.m"
            continue;
#line 838 "int.m"
          }
#line 839 "int.m"
        else
#line 838 "int.m"
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 839 "int.m"
      }
#line 839 "int.m"
      break;
#line 839 "int.m"
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
#line 839 "int.m"
  while (MR_TRUE)
#line 839 "int.m"
    {
#line 839 "int.m"
      /* tailcall optimized into a loop */
#line 839 "int.m"
      {
#line 839 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 839 "int.m"
        if (mercury__int__succeeded)
#line 838 "int.m"
          {
#line 838 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 838 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 838 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 838 "int.m"
            {
#line 838 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 838 "int.m"
            mercury__int__V_13_13 = (mercury__int__Hi_8 - (MR_Integer) 1);
#line 838 "int.m"
            /* direct tailcall eliminated */
#line 838 "int.m"
            {
#line 838 "int.m"
              MR_Integer mercury__int__Hi__tmp_copy_8 = mercury__int__V_13_13;
#line 838 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 838 "int.m"
              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 838 "int.m"
              mercury__int__Hi_8 = mercury__int__Hi__tmp_copy_8;
#line 838 "int.m"
            }
#line 838 "int.m"
            continue;
#line 838 "int.m"
          }
#line 839 "int.m"
        else
#line 838 "int.m"
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 839 "int.m"
      }
#line 839 "int.m"
      break;
#line 839 "int.m"
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
#line 825 "int.m"
  while (MR_TRUE)
#line 825 "int.m"
    {
#line 825 "int.m"
      /* tailcall optimized into a loop */
#line 825 "int.m"
      {
#line 825 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);
#line 825 "int.m"
        MR_Box mercury__int__HeadVar__5_5;

#line 825 "int.m"
        if (mercury__int__succeeded)
#line 826 "int.m"
          {
#line 826 "int.m"
            MR_Integer mercury__int__V_10_10 = (mercury__int__Lo_7 + (MR_Integer) 1);
#line 826 "int.m"
            MR_Box mercury__int__V_12_12;
#line 826 "int.m"
            MR_Box MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__int__F_6, (MR_Integer) 1)));

#line 826 "int.m"
            {
#line 826 "int.m"
              mercury__int__V_12_12 = mercury__int__func_0(((MR_Box) mercury__int__F_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__A_9);
            }
#line 825 "int.m"
            /* direct tailcall eliminated */
#line 825 "int.m"
            {
#line 825 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_7 = mercury__int__V_10_10;
#line 825 "int.m"
              MR_Box mercury__int__A__tmp_copy_9 = mercury__int__V_12_12;

#line 825 "int.m"
              mercury__int__A_9 = mercury__int__A__tmp_copy_9;
#line 825 "int.m"
              mercury__int__Lo_7 = mercury__int__Lo__tmp_copy_7;
#line 825 "int.m"
            }
#line 825 "int.m"
            continue;
#line 826 "int.m"
          }
#line 825 "int.m"
        else
#line 825 "int.m"
          mercury__int__HeadVar__5_5 = mercury__int__A_9;
#line 825 "int.m"
        return mercury__int__HeadVar__5_5;
#line 825 "int.m"
      }
#line 825 "int.m"
      break;
#line 825 "int.m"
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
#line 822 "int.m"
  while (MR_TRUE)
#line 822 "int.m"
    {
#line 822 "int.m"
      /* tailcall optimized into a loop */
#line 822 "int.m"
      {
#line 822 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 822 "int.m"
        if (mercury__int__succeeded)
#line 821 "int.m"
          {
#line 821 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 821 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 821 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 821 "int.m"
            {
#line 821 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 821 "int.m"
            mercury__int__V_13_13 = (mercury__int__Lo_7 + (MR_Integer) 1);
#line 821 "int.m"
            /* direct tailcall eliminated */
#line 821 "int.m"
            {
#line 821 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_7 = mercury__int__V_13_13;
#line 821 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 821 "int.m"
              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 821 "int.m"
              mercury__int__Lo_7 = mercury__int__Lo__tmp_copy_7;
#line 821 "int.m"
            }
#line 821 "int.m"
            continue;
#line 821 "int.m"
          }
#line 822 "int.m"
        else
#line 821 "int.m"
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 822 "int.m"
      }
#line 822 "int.m"
      break;
#line 822 "int.m"
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
#line 822 "int.m"
  while (MR_TRUE)
#line 822 "int.m"
    {
#line 822 "int.m"
      /* tailcall optimized into a loop */
#line 822 "int.m"
      {
#line 822 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 822 "int.m"
        if (mercury__int__succeeded)
#line 821 "int.m"
          {
#line 821 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 821 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 821 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 821 "int.m"
            {
#line 821 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 821 "int.m"
            mercury__int__V_13_13 = (mercury__int__Lo_7 + (MR_Integer) 1);
#line 821 "int.m"
            /* direct tailcall eliminated */
#line 821 "int.m"
            {
#line 821 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_7 = mercury__int__V_13_13;
#line 821 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 821 "int.m"
              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 821 "int.m"
              mercury__int__Lo_7 = mercury__int__Lo__tmp_copy_7;
#line 821 "int.m"
            }
#line 821 "int.m"
            continue;
#line 821 "int.m"
          }
#line 822 "int.m"
        else
#line 821 "int.m"
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 822 "int.m"
      }
#line 822 "int.m"
      break;
#line 822 "int.m"
    }
#line 259 "int.m"
}

#line 821 "int.m"
static void MR_CALL 
mercury__int__fold_up_5_p_8_1(
#line 821 "int.m"
  void * mercury__int__env_ptr_arg)
#line 821 "int.m"
{
#line 821 "int.m"
  {
#line 821 "int.m"
    struct mercury__int__fold_up_5_p_8_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_up_5_p_8_env_0_s *) mercury__int__env_ptr_arg;

#line 821 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__V_15_15 = (MR_Integer) 1;
#line 821 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__V_13_13 = ((mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__Lo_7 + (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__V_15_15);
#line 821 "int.m"
    {
#line 821 "int.m"
      mercury__int__fold_up_5_p_8((mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__TypeInfo_for_T_16, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__P_6, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__V_13_13, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__Hi_8, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__STATE_VARIABLE_A_12_12, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__STATE_VARIABLE_A_11, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__cont_env_ptr);
#line 821 "int.m"
      return;
    }
#line 821 "int.m"
  }
#line 821 "int.m"
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
#line 822 "int.m"
    {
#line 822 "int.m"
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_up_5_p_8_env_0__Lo_7 <= (mercury__int__env).mercury__int__fold_up_5_p_8_env_0__Hi_8);

#line 822 "int.m"
      if (mercury__int__succeeded)
#line 821 "int.m"
        {
#line 821 "int.m"
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_up_5_p_8_env_0__P_6, (MR_Integer) 1)));

#line 821 "int.m"
          {
#line 821 "int.m"
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_up_5_p_8_env_0__P_6), ((MR_Box) ((mercury__int__env).mercury__int__fold_up_5_p_8_env_0__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &(mercury__int__env).mercury__int__fold_up_5_p_8_env_0__STATE_VARIABLE_A_12_12, mercury__int__fold_up_5_p_8_1, &mercury__int__env);
          }
#line 821 "int.m"
        }
#line 822 "int.m"
      else
#line 821 "int.m"
        {
#line 821 "int.m"
          *((mercury__int__env).mercury__int__fold_up_5_p_8_env_0__STATE_VARIABLE_A_11) = mercury__int__STATE_VARIABLE_A_0_10;
#line 821 "int.m"
          {
#line 821 "int.m"
            ((mercury__int__env).mercury__int__fold_up_5_p_8_env_0__cont)((mercury__int__env).mercury__int__fold_up_5_p_8_env_0__cont_env_ptr);
#line 821 "int.m"
            return;
          }
#line 821 "int.m"
        }
#line 822 "int.m"
    }
#line 257 "int.m"
  }
#line 257 "int.m"
}

#line 821 "int.m"
static void MR_CALL 
mercury__int__fold_up_5_p_7_1(
#line 821 "int.m"
  void * mercury__int__env_ptr_arg)
#line 821 "int.m"
{
#line 821 "int.m"
  {
#line 821 "int.m"
    struct mercury__int__fold_up_5_p_7_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_up_5_p_7_env_0_s *) mercury__int__env_ptr_arg;

#line 821 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__V_15_15 = (MR_Integer) 1;
#line 821 "int.m"
    (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__V_13_13 = ((mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__Lo_7 + (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__V_15_15);
#line 821 "int.m"
    {
#line 821 "int.m"
      mercury__int__fold_up_5_p_7((mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__TypeInfo_for_T_16, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__P_6, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__V_13_13, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__Hi_8, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__STATE_VARIABLE_A_12_12, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__STATE_VARIABLE_A_11, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__cont_env_ptr);
#line 821 "int.m"
      return;
    }
#line 821 "int.m"
  }
#line 821 "int.m"
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
#line 822 "int.m"
    {
#line 822 "int.m"
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_up_5_p_7_env_0__Lo_7 <= (mercury__int__env).mercury__int__fold_up_5_p_7_env_0__Hi_8);

#line 822 "int.m"
      if (mercury__int__succeeded)
#line 821 "int.m"
        {
#line 821 "int.m"
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_up_5_p_7_env_0__P_6, (MR_Integer) 1)));

#line 821 "int.m"
          {
#line 821 "int.m"
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_up_5_p_7_env_0__P_6), ((MR_Box) ((mercury__int__env).mercury__int__fold_up_5_p_7_env_0__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &(mercury__int__env).mercury__int__fold_up_5_p_7_env_0__STATE_VARIABLE_A_12_12, mercury__int__fold_up_5_p_7_1, &mercury__int__env);
          }
#line 821 "int.m"
        }
#line 822 "int.m"
      else
#line 821 "int.m"
        {
#line 821 "int.m"
          *((mercury__int__env).mercury__int__fold_up_5_p_7_env_0__STATE_VARIABLE_A_11) = mercury__int__STATE_VARIABLE_A_0_10;
#line 821 "int.m"
          {
#line 821 "int.m"
            ((mercury__int__env).mercury__int__fold_up_5_p_7_env_0__cont)((mercury__int__env).mercury__int__fold_up_5_p_7_env_0__cont_env_ptr);
#line 821 "int.m"
            return;
          }
#line 821 "int.m"
        }
#line 822 "int.m"
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
#line 822 "int.m"
  while (MR_TRUE)
#line 822 "int.m"
    {
#line 822 "int.m"
      /* tailcall optimized into a loop */
#line 822 "int.m"
      {
#line 822 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 822 "int.m"
        if (mercury__int__succeeded)
#line 821 "int.m"
          {
#line 821 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 821 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 821 "int.m"
            MR_Integer mercury__int__V_15_15;
#line 821 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 821 "int.m"
            {
#line 821 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 821 "int.m"
            if (mercury__int__succeeded)
#line 821 "int.m"
              {
#line 821 "int.m"
                mercury__int__V_15_15 = (MR_Integer) 1;
#line 821 "int.m"
                mercury__int__V_13_13 = (mercury__int__Lo_7 + mercury__int__V_15_15);
#line 821 "int.m"
                /* direct tailcall eliminated */
#line 821 "int.m"
                {
#line 821 "int.m"
                  MR_Integer mercury__int__Lo__tmp_copy_7 = mercury__int__V_13_13;
#line 821 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 821 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 821 "int.m"
                  mercury__int__Lo_7 = mercury__int__Lo__tmp_copy_7;
#line 821 "int.m"
                }
#line 821 "int.m"
                continue;
#line 821 "int.m"
              }
#line 821 "int.m"
          }
#line 822 "int.m"
        else
#line 821 "int.m"
          {
#line 821 "int.m"
            *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 821 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 821 "int.m"
          }
#line 822 "int.m"
        return mercury__int__succeeded;
#line 822 "int.m"
      }
#line 822 "int.m"
      break;
#line 822 "int.m"
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
#line 822 "int.m"
  while (MR_TRUE)
#line 822 "int.m"
    {
#line 822 "int.m"
      /* tailcall optimized into a loop */
#line 822 "int.m"
      {
#line 822 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 822 "int.m"
        if (mercury__int__succeeded)
#line 821 "int.m"
          {
#line 821 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 821 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 821 "int.m"
            MR_Integer mercury__int__V_15_15;
#line 821 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 821 "int.m"
            {
#line 821 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 821 "int.m"
            if (mercury__int__succeeded)
#line 821 "int.m"
              {
#line 821 "int.m"
                mercury__int__V_15_15 = (MR_Integer) 1;
#line 821 "int.m"
                mercury__int__V_13_13 = (mercury__int__Lo_7 + mercury__int__V_15_15);
#line 821 "int.m"
                /* direct tailcall eliminated */
#line 821 "int.m"
                {
#line 821 "int.m"
                  MR_Integer mercury__int__Lo__tmp_copy_7 = mercury__int__V_13_13;
#line 821 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 821 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 821 "int.m"
                  mercury__int__Lo_7 = mercury__int__Lo__tmp_copy_7;
#line 821 "int.m"
                }
#line 821 "int.m"
                continue;
#line 821 "int.m"
              }
#line 821 "int.m"
          }
#line 822 "int.m"
        else
#line 821 "int.m"
          {
#line 821 "int.m"
            *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 821 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 821 "int.m"
          }
#line 822 "int.m"
        return mercury__int__succeeded;
#line 822 "int.m"
      }
#line 822 "int.m"
      break;
#line 822 "int.m"
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
#line 822 "int.m"
  while (MR_TRUE)
#line 822 "int.m"
    {
#line 822 "int.m"
      /* tailcall optimized into a loop */
#line 822 "int.m"
      {
#line 822 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 822 "int.m"
        if (mercury__int__succeeded)
#line 821 "int.m"
          {
#line 821 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 821 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 821 "int.m"
            MR_Integer mercury__int__V_15_15;
#line 821 "int.m"
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 821 "int.m"
            {
#line 821 "int.m"
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 821 "int.m"
            if (mercury__int__succeeded)
#line 821 "int.m"
              {
#line 821 "int.m"
                mercury__int__V_15_15 = (MR_Integer) 1;
#line 821 "int.m"
                mercury__int__V_13_13 = (mercury__int__Lo_7 + mercury__int__V_15_15);
#line 821 "int.m"
                /* direct tailcall eliminated */
#line 821 "int.m"
                {
#line 821 "int.m"
                  MR_Integer mercury__int__Lo__tmp_copy_7 = mercury__int__V_13_13;
#line 821 "int.m"
                  MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 821 "int.m"
                  mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 821 "int.m"
                  mercury__int__Lo_7 = mercury__int__Lo__tmp_copy_7;
#line 821 "int.m"
                }
#line 821 "int.m"
                continue;
#line 821 "int.m"
              }
#line 821 "int.m"
          }
#line 822 "int.m"
        else
#line 821 "int.m"
          {
#line 821 "int.m"
            *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 821 "int.m"
            mercury__int__succeeded = MR_TRUE;
#line 821 "int.m"
          }
#line 822 "int.m"
        return mercury__int__succeeded;
#line 822 "int.m"
      }
#line 822 "int.m"
      break;
#line 822 "int.m"
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
#line 822 "int.m"
  while (MR_TRUE)
#line 822 "int.m"
    {
#line 822 "int.m"
      /* tailcall optimized into a loop */
#line 822 "int.m"
      {
#line 822 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 822 "int.m"
        if (mercury__int__succeeded)
#line 821 "int.m"
          {
#line 821 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 821 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 821 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 821 "int.m"
            {
#line 821 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 821 "int.m"
            mercury__int__V_13_13 = (mercury__int__Lo_7 + (MR_Integer) 1);
#line 821 "int.m"
            /* direct tailcall eliminated */
#line 821 "int.m"
            {
#line 821 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_7 = mercury__int__V_13_13;
#line 821 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 821 "int.m"
              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 821 "int.m"
              mercury__int__Lo_7 = mercury__int__Lo__tmp_copy_7;
#line 821 "int.m"
            }
#line 821 "int.m"
            continue;
#line 821 "int.m"
          }
#line 822 "int.m"
        else
#line 821 "int.m"
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 822 "int.m"
      }
#line 822 "int.m"
      break;
#line 822 "int.m"
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
#line 822 "int.m"
  while (MR_TRUE)
#line 822 "int.m"
    {
#line 822 "int.m"
      /* tailcall optimized into a loop */
#line 822 "int.m"
      {
#line 822 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 822 "int.m"
        if (mercury__int__succeeded)
#line 821 "int.m"
          {
#line 821 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 821 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 821 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 821 "int.m"
            {
#line 821 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 821 "int.m"
            mercury__int__V_13_13 = (mercury__int__Lo_7 + (MR_Integer) 1);
#line 821 "int.m"
            /* direct tailcall eliminated */
#line 821 "int.m"
            {
#line 821 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_7 = mercury__int__V_13_13;
#line 821 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 821 "int.m"
              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 821 "int.m"
              mercury__int__Lo_7 = mercury__int__Lo__tmp_copy_7;
#line 821 "int.m"
            }
#line 821 "int.m"
            continue;
#line 821 "int.m"
          }
#line 822 "int.m"
        else
#line 821 "int.m"
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 822 "int.m"
      }
#line 822 "int.m"
      break;
#line 822 "int.m"
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
#line 822 "int.m"
  while (MR_TRUE)
#line 822 "int.m"
    {
#line 822 "int.m"
      /* tailcall optimized into a loop */
#line 822 "int.m"
      {
#line 822 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 822 "int.m"
        if (mercury__int__succeeded)
#line 821 "int.m"
          {
#line 821 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 821 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 821 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 821 "int.m"
            {
#line 821 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 821 "int.m"
            mercury__int__V_13_13 = (mercury__int__Lo_7 + (MR_Integer) 1);
#line 821 "int.m"
            /* direct tailcall eliminated */
#line 821 "int.m"
            {
#line 821 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_7 = mercury__int__V_13_13;
#line 821 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 821 "int.m"
              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 821 "int.m"
              mercury__int__Lo_7 = mercury__int__Lo__tmp_copy_7;
#line 821 "int.m"
            }
#line 821 "int.m"
            continue;
#line 821 "int.m"
          }
#line 822 "int.m"
        else
#line 821 "int.m"
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 822 "int.m"
      }
#line 822 "int.m"
      break;
#line 822 "int.m"
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
#line 822 "int.m"
  while (MR_TRUE)
#line 822 "int.m"
    {
#line 822 "int.m"
      /* tailcall optimized into a loop */
#line 822 "int.m"
      {
#line 822 "int.m"
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

#line 822 "int.m"
        if (mercury__int__succeeded)
#line 821 "int.m"
          {
#line 821 "int.m"
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
#line 821 "int.m"
            MR_Integer mercury__int__V_13_13;
#line 821 "int.m"
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

#line 821 "int.m"
            {
#line 821 "int.m"
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
#line 821 "int.m"
            mercury__int__V_13_13 = (mercury__int__Lo_7 + (MR_Integer) 1);
#line 821 "int.m"
            /* direct tailcall eliminated */
#line 821 "int.m"
            {
#line 821 "int.m"
              MR_Integer mercury__int__Lo__tmp_copy_7 = mercury__int__V_13_13;
#line 821 "int.m"
              MR_Box mercury__int__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__int__STATE_VARIABLE_A_12_12;

#line 821 "int.m"
              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_0__tmp_copy_10;
#line 821 "int.m"
              mercury__int__Lo_7 = mercury__int__Lo__tmp_copy_7;
#line 821 "int.m"
            }
#line 821 "int.m"
            continue;
#line 821 "int.m"
          }
#line 822 "int.m"
        else
#line 821 "int.m"
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
#line 822 "int.m"
      }
#line 822 "int.m"
      break;
#line 822 "int.m"
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
#line 707 "int.m"
  {
#line 707 "int.m"
    MR_bool mercury__int__succeeded;

#line 711 "int.m"
{
#define MR_PROC_LABEL mercury__int__bits_per_int_1_p_0

	MR_Integer Bits;

		{
#line 711 "int.m"

    Bits = ML_BITS_PER_INT;

#line 5571 "int.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__int__Bits_1  = Bits;
#line 711 "int.m"
}
#line 707 "int.m"
  }
#line 237 "int.m"
}

#line 236 "int.m"
MR_Integer MR_CALL 
mercury__int__bits_per_int_0_f_0(void)
#line 236 "int.m"
{
#line 707 "int.m"
  {
#line 707 "int.m"
    MR_bool mercury__int__succeeded;
#line 707 "int.m"
    MR_Integer mercury__int__X_2;

#line 711 "int.m"
{
#define MR_PROC_LABEL mercury__int__bits_per_int_0_f_0

	MR_Integer Bits;

		{
#line 711 "int.m"

    Bits = ML_BITS_PER_INT;

#line 5606 "int.c"

		;}
#undef MR_PROC_LABEL
	 mercury__int__X_2  = Bits;
#line 711 "int.m"
}
#line 707 "int.m"
    return mercury__int__X_2;
#line 707 "int.m"
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
#line 686 "int.m"
  {
#line 686 "int.m"
    MR_bool mercury__int__succeeded;

#line 690 "int.m"
{
#define MR_PROC_LABEL mercury__int__min_int_1_p_0

	MR_Integer Min;

		{
#line 690 "int.m"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Min = INT_MIN;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Min = LONG_MIN;
    #if defined(LLONG_MIN)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Min = LLONG_MIN;
    #endif
    } else {
        MR_fatal_error("Unable to figure out min integer size");
    }

#line 5653 "int.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__int__Min_1  = Min;
#line 690 "int.m"
}
#line 686 "int.m"
  }
#line 232 "int.m"
}

#line 231 "int.m"
MR_Integer MR_CALL 
mercury__int__min_int_0_f_0(void)
#line 231 "int.m"
{
#line 686 "int.m"
  {
#line 686 "int.m"
    MR_bool mercury__int__succeeded;
#line 686 "int.m"
    MR_Integer mercury__int__X_2;

#line 690 "int.m"
{
#define MR_PROC_LABEL mercury__int__min_int_0_f_0

	MR_Integer Min;

		{
#line 690 "int.m"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Min = INT_MIN;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Min = LONG_MIN;
    #if defined(LLONG_MIN)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Min = LLONG_MIN;
    #endif
    } else {
        MR_fatal_error("Unable to figure out min integer size");
    }

#line 5698 "int.c"

		;}
#undef MR_PROC_LABEL
	 mercury__int__X_2  = Min;
#line 690 "int.m"
}
#line 686 "int.m"
    return mercury__int__X_2;
#line 686 "int.m"
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
#line 665 "int.m"
  {
#line 665 "int.m"
    MR_bool mercury__int__succeeded;

#line 669 "int.m"
{
#define MR_PROC_LABEL mercury__int__max_int_1_p_0

	MR_Integer Max;

		{
#line 669 "int.m"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 5745 "int.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__int__Max_1  = Max;
#line 669 "int.m"
}
#line 665 "int.m"
  }
#line 227 "int.m"
}

#line 226 "int.m"
MR_Integer MR_CALL 
mercury__int__max_int_0_f_0(void)
#line 226 "int.m"
{
#line 665 "int.m"
  {
#line 665 "int.m"
    MR_bool mercury__int__succeeded;
#line 665 "int.m"
    MR_Integer mercury__int__X_2;

#line 669 "int.m"
{
#define MR_PROC_LABEL mercury__int__max_int_0_f_0

	MR_Integer Max;

		{
#line 669 "int.m"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 5790 "int.c"

		;}
#undef MR_PROC_LABEL
	 mercury__int__X_2  = Max;
#line 669 "int.m"
}
#line 665 "int.m"
    return mercury__int__X_2;
#line 665 "int.m"
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
#line 652 "int.m"
  {
#line 652 "int.m"
    MR_bool mercury__int__succeeded;

#line 652 "int.m"
    *mercury__int__X_3 = mercury__int__X_2;
#line 652 "int.m"
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
#line 652 "int.m"
  {
#line 652 "int.m"
    MR_bool mercury__int__succeeded;

#line 652 "int.m"
    *mercury__int__X_3 = mercury__int__X_2;
#line 652 "int.m"
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
#line 565 "int.m"
  {
#line 565 "int.m"
    MR_bool mercury__int__succeeded;
#line 565 "int.m"
    MR_Integer mercury__int__V_3_3 = (mercury__int__X_2 & (MR_Integer) 1);

#line 565 "int.m"
    mercury__int__succeeded = (mercury__int__V_3_3 == (MR_Integer) 0);
#line 565 "int.m"
    mercury__int__succeeded = !(mercury__int__succeeded);
#line 565 "int.m"
    return mercury__int__succeeded;
#line 565 "int.m"
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
#line 560 "int.m"
  {
#line 560 "int.m"
    MR_bool mercury__int__succeeded;
#line 560 "int.m"
    MR_Integer mercury__int__V_3_3 = (mercury__int__X_2 & (MR_Integer) 1);

#line 561 "int.m"
    mercury__int__succeeded = (mercury__int__V_3_3 == (MR_Integer) 0);
#line 560 "int.m"
    return mercury__int__succeeded;
#line 560 "int.m"
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
#line 543 "int.m"
  {
#line 543 "int.m"
    MR_bool mercury__int__succeeded;
#line 543 "int.m"
    MR_Integer mercury__int__Z_6;
#line 543 "int.m"
    MR_Integer mercury__int__IntBits_7;

#line 711 "int.m"
{
#define MR_PROC_LABEL mercury__int__f_62_62_2_f_0

	MR_Integer Bits;

		{
#line 711 "int.m"

    Bits = ML_BITS_PER_INT;

#line 6128 "int.c"

		;}
#undef MR_PROC_LABEL
	 mercury__int__IntBits_7  = Bits;
#line 711 "int.m"
}
#line 545 "int.m"
    mercury__int__succeeded = (mercury__int__Y_5 >= (MR_Integer) 0);
#line 551 "int.m"
    if (mercury__int__succeeded)
#line 548 "int.m"
      {
#line 546 "int.m"
        mercury__int__succeeded = (mercury__int__Y_5 >= mercury__int__IntBits_7);
#line 548 "int.m"
        if (mercury__int__succeeded)
#line 547 "int.m"
          {
#line 547 "int.m"
            mercury__int__succeeded = (mercury__int__X_4 >= (MR_Integer) 0);
#line 547 "int.m"
            if (mercury__int__succeeded)
#line 547 "int.m"
              mercury__int__Z_6 = (MR_Integer) 0;
#line 547 "int.m"
            else
#line 547 "int.m"
              mercury__int__Z_6 = (MR_Integer) -1;
#line 547 "int.m"
          }
#line 548 "int.m"
        else
#line 549 "int.m"
          mercury__int__Z_6 = (mercury__int__X_4 >> mercury__int__Y_5);
#line 548 "int.m"
      }
#line 551 "int.m"
    else
#line 554 "int.m"
      {
#line 552 "int.m"
        MR_Integer mercury__int__V_10_10 = ((MR_Integer) 0 - mercury__int__IntBits_7);

#line 552 "int.m"
        mercury__int__succeeded = (mercury__int__Y_5 <= mercury__int__V_10_10);
#line 554 "int.m"
        if (mercury__int__succeeded)
#line 553 "int.m"
          mercury__int__Z_6 = (MR_Integer) 0;
#line 554 "int.m"
        else
#line 555 "int.m"
          {
#line 555 "int.m"
            MR_Integer mercury__int__V_11_11 = ((MR_Integer) 0 - mercury__int__Y_5);

#line 555 "int.m"
            mercury__int__Z_6 = (mercury__int__X_4 << mercury__int__V_11_11);
#line 555 "int.m"
          }
#line 554 "int.m"
      }
#line 543 "int.m"
    return mercury__int__Z_6;
#line 543 "int.m"
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
#line 525 "int.m"
  {
#line 525 "int.m"
    MR_bool mercury__int__succeeded;
#line 525 "int.m"
    MR_Integer mercury__int__Z_6;
#line 525 "int.m"
    MR_Integer mercury__int__IntBits_7;

#line 711 "int.m"
{
#define MR_PROC_LABEL mercury__int__f_60_60_2_f_0

	MR_Integer Bits;

		{
#line 711 "int.m"

    Bits = ML_BITS_PER_INT;

#line 6250 "int.c"

		;}
#undef MR_PROC_LABEL
	 mercury__int__IntBits_7  = Bits;
#line 711 "int.m"
}
#line 527 "int.m"
    mercury__int__succeeded = (mercury__int__Y_5 >= (MR_Integer) 0);
#line 533 "int.m"
    if (mercury__int__succeeded)
#line 530 "int.m"
      {
#line 528 "int.m"
        mercury__int__succeeded = (mercury__int__Y_5 >= mercury__int__IntBits_7);
#line 530 "int.m"
        if (mercury__int__succeeded)
#line 529 "int.m"
          mercury__int__Z_6 = (MR_Integer) 0;
#line 530 "int.m"
        else
#line 531 "int.m"
          mercury__int__Z_6 = (mercury__int__X_4 << mercury__int__Y_5);
#line 530 "int.m"
      }
#line 533 "int.m"
    else
#line 536 "int.m"
      {
#line 534 "int.m"
        MR_Integer mercury__int__V_9_9 = ((MR_Integer) 0 - mercury__int__IntBits_7);

#line 534 "int.m"
        mercury__int__succeeded = (mercury__int__Y_5 <= mercury__int__V_9_9);
#line 536 "int.m"
        if (mercury__int__succeeded)
#line 535 "int.m"
          {
#line 535 "int.m"
            mercury__int__succeeded = (mercury__int__X_4 >= (MR_Integer) 0);
#line 535 "int.m"
            if (mercury__int__succeeded)
#line 535 "int.m"
              mercury__int__Z_6 = (MR_Integer) 0;
#line 535 "int.m"
            else
#line 535 "int.m"
              mercury__int__Z_6 = (MR_Integer) -1;
#line 535 "int.m"
          }
#line 536 "int.m"
        else
#line 537 "int.m"
          {
#line 537 "int.m"
            MR_Integer mercury__int__V_11_11 = ((MR_Integer) 0 - mercury__int__Y_5);

#line 537 "int.m"
            mercury__int__Z_6 = (mercury__int__X_4 >> mercury__int__V_11_11);
#line 537 "int.m"
          }
#line 536 "int.m"
      }
#line 525 "int.m"
    return mercury__int__Z_6;
#line 525 "int.m"
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
#line 466 "int.m"
  {
#line 466 "int.m"
    MR_bool mercury__int__succeeded;
#line 466 "int.m"
    MR_Integer mercury__int__Rem_6;

#line 481 "int.m"
{
#define MR_PROC_LABEL mercury__int__rem_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 481 "int.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 6374 "int.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 481 "int.m"
	}
mercury__int__succeeded  = SUCCESS_INDICATOR;
}
#line 462 "int.m"
    if (mercury__int__succeeded)
#line 463 "int.m"
      mercury__int__succeeded = (mercury__int__Y_5 == (MR_Integer) 0);
#line 466 "int.m"
    if (mercury__int__succeeded)
#line 465 "int.m"
      {
#line 465 "int.m"
        MR_Word mercury__int__TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 465 "int.m"
        MR_Word mercury__int__V_7_7 = (MR_Word) ((MR_Box) ((MR_String) "int.rem: division by zero"));

#line 465 "int.m"
        {
#line 465 "int.m"
          mercury__exception__throw_1_p_0(mercury__int__TypeCtorInfo_9_9, ((MR_Box) (mercury__int__V_7_7)));
        }
#line 465 "int.m"
      }
#line 466 "int.m"
    else
#line 467 "int.m"
      mercury__int__Rem_6 = (mercury__int__X_4 % mercury__int__Y_5);
#line 466 "int.m"
    return mercury__int__Rem_6;
#line 466 "int.m"
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
#line 523 "int.m"
  {
#line 523 "int.m"
    MR_bool mercury__int__succeeded;
#line 523 "int.m"
    MR_Integer mercury__int__HeadVar__3_3;
#line 523 "int.m"
    MR_Integer mercury__int__V_6_6;
#line 523 "int.m"
    MR_Integer mercury__int__V_7_7;

#line 523 "int.m"
    {
#line 523 "int.m"
      mercury__int__V_7_7 = mercury__int__div_2_f_0(mercury__int__X_4, mercury__int__Y_5);
    }
#line 523 "int.m"
    mercury__int__V_6_6 = (mercury__int__V_7_7 * mercury__int__Y_5);
#line 523 "int.m"
    mercury__int__HeadVar__3_3 = (mercury__int__X_4 - mercury__int__V_6_6);
#line 523 "int.m"
    return mercury__int__HeadVar__3_3;
#line 523 "int.m"
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
#line 452 "int.m"
  {
#line 452 "int.m"
    MR_bool mercury__int__succeeded;
#line 452 "int.m"
    MR_Integer mercury__int__HeadVar__3_3;

#line 481 "int.m"
{
#define MR_PROC_LABEL mercury__int__f_slash_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 481 "int.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 6504 "int.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 481 "int.m"
	}
mercury__int__succeeded  = SUCCESS_INDICATOR;
}
#line 448 "int.m"
    if (mercury__int__succeeded)
#line 449 "int.m"
      mercury__int__succeeded = (mercury__int__Y_5 == (MR_Integer) 0);
#line 452 "int.m"
    if (mercury__int__succeeded)
#line 451 "int.m"
      {
#line 451 "int.m"
        MR_Word mercury__int__TypeCtorInfo_9_11 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 451 "int.m"
        MR_Word mercury__int__V_9_9 = (MR_Word) ((MR_Box) ((MR_String) "int.\'//\': division by zero"));

#line 451 "int.m"
        {
#line 451 "int.m"
          mercury__exception__throw_1_p_0(mercury__int__TypeCtorInfo_9_11, ((MR_Box) (mercury__int__V_9_9)));
        }
#line 451 "int.m"
      }
#line 452 "int.m"
    else
#line 453 "int.m"
      mercury__int__HeadVar__3_3 = (mercury__int__X_4 / mercury__int__Y_5);
#line 452 "int.m"
    return mercury__int__HeadVar__3_3;
#line 452 "int.m"
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
#line 452 "int.m"
  {
#line 452 "int.m"
    MR_bool mercury__int__succeeded;
#line 452 "int.m"
    MR_Integer mercury__int__Div_6;

#line 481 "int.m"
{
#define MR_PROC_LABEL mercury__int__f_47_47_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 481 "int.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 6575 "int.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 481 "int.m"
	}
mercury__int__succeeded  = SUCCESS_INDICATOR;
}
#line 448 "int.m"
    if (mercury__int__succeeded)
#line 449 "int.m"
      mercury__int__succeeded = (mercury__int__Y_5 == (MR_Integer) 0);
#line 452 "int.m"
    if (mercury__int__succeeded)
#line 451 "int.m"
      {
#line 451 "int.m"
        MR_Word mercury__int__TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 451 "int.m"
        MR_Word mercury__int__V_7_7 = (MR_Word) ((MR_Box) ((MR_String) "int.\'//\': division by zero"));

#line 451 "int.m"
        {
#line 451 "int.m"
          mercury__exception__throw_1_p_0(mercury__int__TypeCtorInfo_9_9, ((MR_Box) (mercury__int__V_7_7)));
        }
#line 451 "int.m"
      }
#line 452 "int.m"
    else
#line 453 "int.m"
      mercury__int__Div_6 = (mercury__int__X_4 / mercury__int__Y_5);
#line 452 "int.m"
    return mercury__int__Div_6;
#line 452 "int.m"
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
#line 432 "int.m"
  {
#line 432 "int.m"
    MR_bool mercury__int__succeeded;
#line 432 "int.m"
    MR_Integer mercury__int__Div_6;
#line 432 "int.m"
    MR_Integer mercury__int__Trunc_7;

#line 481 "int.m"
{
#define MR_PROC_LABEL mercury__int__div_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 481 "int.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 6648 "int.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 481 "int.m"
	}
mercury__int__succeeded  = SUCCESS_INDICATOR;
}
#line 448 "int.m"
    if (mercury__int__succeeded)
#line 449 "int.m"
      mercury__int__succeeded = (mercury__int__Y_5 == (MR_Integer) 0);
#line 452 "int.m"
    if (mercury__int__succeeded)
#line 451 "int.m"
      {
#line 451 "int.m"
        MR_Word mercury__int__TypeCtorInfo_9_19 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 451 "int.m"
        MR_Word mercury__int__V_17_17 = (MR_Word) ((MR_Box) ((MR_String) "int.\'//\': division by zero"));

#line 451 "int.m"
        {
#line 451 "int.m"
          mercury__exception__throw_1_p_0(mercury__int__TypeCtorInfo_9_19, ((MR_Box) (mercury__int__V_17_17)));
        }
#line 451 "int.m"
      }
#line 452 "int.m"
    else
#line 453 "int.m"
      mercury__int__Trunc_7 = (mercury__int__X_4 / mercury__int__Y_5);
#line 435 "int.m"
    {
#line 435 "int.m"
      MR_Integer mercury__int__V_12_12;

#line 435 "int.m"
      mercury__int__succeeded = (mercury__int__X_4 >= (MR_Integer) 0);
#line 435 "int.m"
      if (mercury__int__succeeded)
#line 435 "int.m"
        {
#line 435 "int.m"
          mercury__int__V_12_12 = (MR_Integer) 0;
#line 435 "int.m"
          mercury__int__succeeded = (mercury__int__Y_5 >= mercury__int__V_12_12);
#line 435 "int.m"
        }
#line 435 "int.m"
    }
#line 436 "int.m"
    if (!(mercury__int__succeeded))
#line 436 "int.m"
      {
#line 436 "int.m"
        {
#line 436 "int.m"
          MR_Integer mercury__int__V_10_10;

#line 436 "int.m"
          mercury__int__succeeded = (mercury__int__X_4 < (MR_Integer) 0);
#line 436 "int.m"
          if (mercury__int__succeeded)
#line 436 "int.m"
            {
#line 436 "int.m"
              mercury__int__V_10_10 = (MR_Integer) 0;
#line 436 "int.m"
              mercury__int__succeeded = (mercury__int__Y_5 < mercury__int__V_10_10);
#line 436 "int.m"
            }
#line 436 "int.m"
        }
#line 436 "int.m"
        if (!(mercury__int__succeeded))
#line 437 "int.m"
          {
#line 437 "int.m"
            MR_Integer mercury__int__V_8_8;

#line 481 "int.m"
{
#define MR_PROC_LABEL mercury__int__div_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 481 "int.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 6745 "int.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 481 "int.m"
	}
mercury__int__succeeded  = SUCCESS_INDICATOR;
}
#line 462 "int.m"
            if (mercury__int__succeeded)
#line 463 "int.m"
              mercury__int__succeeded = (mercury__int__Y_5 == (MR_Integer) 0);
#line 466 "int.m"
            if (mercury__int__succeeded)
#line 465 "int.m"
              {
#line 465 "int.m"
                MR_Word mercury__int__TypeCtorInfo_9_25 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 465 "int.m"
                MR_Word mercury__int__V_23_23 = (MR_Word) ((MR_Box) ((MR_String) "int.rem: division by zero"));

#line 465 "int.m"
                {
#line 465 "int.m"
                  mercury__exception__throw_1_p_0(mercury__int__TypeCtorInfo_9_25, ((MR_Box) (mercury__int__V_23_23)));
                }
#line 465 "int.m"
              }
#line 466 "int.m"
            else
#line 467 "int.m"
              mercury__int__V_8_8 = (mercury__int__X_4 % mercury__int__Y_5);
#line 437 "int.m"
            mercury__int__succeeded = (mercury__int__V_8_8 == (MR_Integer) 0);
#line 437 "int.m"
          }
#line 436 "int.m"
      }
#line 441 "int.m"
    if (mercury__int__succeeded)
#line 440 "int.m"
      mercury__int__Div_6 = mercury__int__Trunc_7;
#line 441 "int.m"
    else
#line 442 "int.m"
      {
#line 442 "int.m"
        mercury__int__Div_6 = (mercury__int__Trunc_7 - (MR_Integer) 1);
#line 442 "int.m"
      }
#line 432 "int.m"
    return mercury__int__Div_6;
#line 432 "int.m"
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
#line 630 "int.m"
  {
#line 630 "int.m"
    MR_bool mercury__int__succeeded;
#line 628 "int.m"
    MR_Integer mercury__int__V_5_5;

#line 481 "int.m"
{
#define MR_PROC_LABEL mercury__int__log2_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 481 "int.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 7064 "int.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 481 "int.m"
	}
mercury__int__succeeded  = SUCCESS_INDICATOR;
}
#line 628 "int.m"
    if (mercury__int__succeeded)
#line 628 "int.m"
      {
#line 628 "int.m"
        mercury__int__V_5_5 = (MR_Integer) 0;
#line 628 "int.m"
        mercury__int__succeeded = (mercury__int__X_3 <= mercury__int__V_5_5);
#line 628 "int.m"
      }
#line 630 "int.m"
    if (mercury__int__succeeded)
#line 629 "int.m"
      {
#line 629 "int.m"
        MR_Word mercury__int__TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 629 "int.m"
        MR_Word mercury__int__V_6_6 = (MR_Word) ((MR_Box) ((MR_String) "int.log2: taking logarithm of zero"));

#line 629 "int.m"
        {
#line 629 "int.m"
          mercury__exception__throw_1_p_0(mercury__int__TypeCtorInfo_9_9, ((MR_Box) (mercury__int__V_6_6)));
#line 629 "int.m"
          return;
        }
#line 629 "int.m"
      }
#line 630 "int.m"
    else
#line 631 "int.m"
      {
#line 631 "int.m"
        {
#line 631 "int.m"
          mercury__int__log2_2_3_p_0(mercury__int__X_3, (MR_Integer) 0, mercury__int__N_4);
#line 631 "int.m"
          return;
        }
#line 631 "int.m"
      }
#line 630 "int.m"
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
#line 625 "int.m"
  {
#line 625 "int.m"
    MR_bool mercury__int__succeeded;
#line 625 "int.m"
    MR_Integer mercury__int__N_4;

#line 625 "int.m"
    {
#line 625 "int.m"
      mercury__int__log2_2_p_0(mercury__int__X_3, &mercury__int__N_4);
    }
#line 625 "int.m"
    return mercury__int__N_4;
#line 625 "int.m"
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
#line 603 "int.m"
  {
#line 603 "int.m"
    MR_bool mercury__int__succeeded;
#line 601 "int.m"
    MR_Integer mercury__int__V_7_7;

#line 481 "int.m"
{
#define MR_PROC_LABEL mercury__int__pow_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 481 "int.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 7178 "int.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 481 "int.m"
	}
mercury__int__succeeded  = SUCCESS_INDICATOR;
}
#line 601 "int.m"
    if (mercury__int__succeeded)
#line 601 "int.m"
      {
#line 601 "int.m"
        mercury__int__V_7_7 = (MR_Integer) 0;
#line 601 "int.m"
        mercury__int__succeeded = (mercury__int__Exp_5 < mercury__int__V_7_7);
#line 601 "int.m"
      }
#line 603 "int.m"
    if (mercury__int__succeeded)
#line 602 "int.m"
      {
#line 602 "int.m"
        MR_Word mercury__int__TypeCtorInfo_11_11 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 602 "int.m"
        MR_Word mercury__int__V_8_8 = (MR_Word) ((MR_Box) ((MR_String) "int.pow: zero base"));

#line 602 "int.m"
        {
#line 602 "int.m"
          mercury__exception__throw_1_p_0(mercury__int__TypeCtorInfo_11_11, ((MR_Box) (mercury__int__V_8_8)));
#line 602 "int.m"
          return;
        }
#line 602 "int.m"
      }
#line 603 "int.m"
    else
#line 604 "int.m"
      {
#line 604 "int.m"
        {
#line 604 "int.m"
          *mercury__int__Result_6 = mercury__int__multiply_by_pow_3_f_0((MR_Integer) 1, mercury__int__Base_4, mercury__int__Exp_5);
        }
#line 604 "int.m"
      }
#line 603 "int.m"
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
#line 598 "int.m"
  {
#line 598 "int.m"
    MR_bool mercury__int__succeeded;
#line 598 "int.m"
    MR_Integer mercury__int__Result_6;

#line 598 "int.m"
    {
#line 598 "int.m"
      mercury__int__pow_3_p_0(mercury__int__Base_4, mercury__int__Exp_5, &mercury__int__Result_6);
    }
#line 598 "int.m"
    return mercury__int__Result_6;
#line 598 "int.m"
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
#line 593 "int.m"
  {
#line 593 "int.m"
    MR_bool mercury__int__succeeded = (mercury__int__X_4 < mercury__int__Y_5);

#line 593 "int.m"
    if (mercury__int__succeeded)
#line 592 "int.m"
      *mercury__int__Min_6 = mercury__int__X_4;
#line 593 "int.m"
    else
#line 594 "int.m"
      *mercury__int__Min_6 = mercury__int__Y_5;
#line 593 "int.m"
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
#line 593 "int.m"
  {
#line 593 "int.m"
    MR_bool mercury__int__succeeded = (mercury__int__X_4 < mercury__int__Y_5);
#line 593 "int.m"
    MR_Integer mercury__int__Min_6;

#line 593 "int.m"
    if (mercury__int__succeeded)
#line 592 "int.m"
      mercury__int__Min_6 = mercury__int__X_4;
#line 593 "int.m"
    else
#line 594 "int.m"
      mercury__int__Min_6 = mercury__int__Y_5;
#line 593 "int.m"
    return mercury__int__Min_6;
#line 593 "int.m"
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
#line 583 "int.m"
  {
#line 583 "int.m"
    MR_bool mercury__int__succeeded = (mercury__int__X_4 > mercury__int__Y_5);

#line 583 "int.m"
    if (mercury__int__succeeded)
#line 582 "int.m"
      *mercury__int__Max_6 = mercury__int__X_4;
#line 583 "int.m"
    else
#line 584 "int.m"
      *mercury__int__Max_6 = mercury__int__Y_5;
#line 583 "int.m"
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
#line 583 "int.m"
  {
#line 583 "int.m"
    MR_bool mercury__int__succeeded = (mercury__int__X_4 > mercury__int__Y_5);
#line 583 "int.m"
    MR_Integer mercury__int__Max_6;

#line 583 "int.m"
    if (mercury__int__succeeded)
#line 582 "int.m"
      mercury__int__Max_6 = mercury__int__X_4;
#line 583 "int.m"
    else
#line 584 "int.m"
      mercury__int__Max_6 = mercury__int__Y_5;
#line 583 "int.m"
    return mercury__int__Max_6;
#line 583 "int.m"
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
#line 573 "int.m"
  {
#line 573 "int.m"
    MR_bool mercury__int__succeeded = (mercury__int__Num_3 < (MR_Integer) 0);

#line 573 "int.m"
    if (mercury__int__succeeded)
#line 572 "int.m"
      {
#line 572 "int.m"
        *mercury__int__Abs_4 = ((MR_Integer) 0 - mercury__int__Num_3);
#line 572 "int.m"
      }
#line 573 "int.m"
    else
#line 574 "int.m"
      *mercury__int__Abs_4 = mercury__int__Num_3;
#line 573 "int.m"
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
#line 573 "int.m"
  {
#line 573 "int.m"
    MR_bool mercury__int__succeeded = (mercury__int__Num_3 < (MR_Integer) 0);
#line 573 "int.m"
    MR_Integer mercury__int__Abs_4;

#line 573 "int.m"
    if (mercury__int__succeeded)
#line 572 "int.m"
      {
#line 572 "int.m"
        mercury__int__Abs_4 = ((MR_Integer) 0 - mercury__int__Num_3);
#line 572 "int.m"
      }
#line 573 "int.m"
    else
#line 574 "int.m"
      mercury__int__Abs_4 = mercury__int__Num_3;
#line 573 "int.m"
    return mercury__int__Abs_4;
#line 573 "int.m"
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
