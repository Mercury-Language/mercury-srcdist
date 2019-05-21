/*
** Automatically generated from `int.m'
** by the Mercury compiler,
** version rotd-2017-08-26
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
#include "int16.mih"
#include "int32.mih"
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



struct mercury__int__fold_down3_9_p_9_env_0_s {
  MR_Word mercury__int__fold_down3_9_p_9_env_0__TypeInfo_for_T_30;
  MR_Word mercury__int__fold_down3_9_p_9_env_0__TypeInfo_for_U_31;
  MR_Word mercury__int__fold_down3_9_p_9_env_0__TypeInfo_for_V_32;
  MR_Word mercury__int__fold_down3_9_p_9_env_0__P_10;
  MR_Integer mercury__int__fold_down3_9_p_9_env_0__Lo_11;
  MR_Integer mercury__int__fold_down3_9_p_9_env_0__Hi_12;
  MR_Box * mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_A_17;
  MR_Box * mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_B_19;
  MR_Box * mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_C_21;
  MR_Cont mercury__int__fold_down3_9_p_9_env_0__cont;
  void * mercury__int__fold_down3_9_p_9_env_0__cont_env_ptr;
  MR_Box mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_A_22_22;
  MR_Box mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_B_23_23;
  MR_Box mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_C_24_24;
  MR_Integer mercury__int__fold_down3_9_p_9_env_0__Var_25;
  MR_Integer mercury__int__fold_down3_9_p_9_env_0__Var_29;
};

struct mercury__int__fold_down3_9_p_8_env_0_s {
  MR_Word mercury__int__fold_down3_9_p_8_env_0__TypeInfo_for_T_30;
  MR_Word mercury__int__fold_down3_9_p_8_env_0__TypeInfo_for_U_31;
  MR_Word mercury__int__fold_down3_9_p_8_env_0__TypeInfo_for_V_32;
  MR_Word mercury__int__fold_down3_9_p_8_env_0__P_10;
  MR_Integer mercury__int__fold_down3_9_p_8_env_0__Lo_11;
  MR_Integer mercury__int__fold_down3_9_p_8_env_0__Hi_12;
  MR_Box * mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_A_17;
  MR_Box * mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_B_19;
  MR_Box * mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_C_21;
  MR_Cont mercury__int__fold_down3_9_p_8_env_0__cont;
  void * mercury__int__fold_down3_9_p_8_env_0__cont_env_ptr;
  MR_Box mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_A_22_22;
  MR_Box mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_B_23_23;
  MR_Box mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_C_24_24;
  MR_Integer mercury__int__fold_down3_9_p_8_env_0__Var_25;
  MR_Integer mercury__int__fold_down3_9_p_8_env_0__Var_29;
};

struct mercury__int__fold_down2_7_p_8_env_0_s {
  MR_Word mercury__int__fold_down2_7_p_8_env_0__TypeInfo_for_T_23;
  MR_Word mercury__int__fold_down2_7_p_8_env_0__TypeInfo_for_U_24;
  MR_Word mercury__int__fold_down2_7_p_8_env_0__P_8;
  MR_Integer mercury__int__fold_down2_7_p_8_env_0__Lo_9;
  MR_Integer mercury__int__fold_down2_7_p_8_env_0__Hi_10;
  MR_Box * mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_A_14;
  MR_Box * mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_B_16;
  MR_Cont mercury__int__fold_down2_7_p_8_env_0__cont;
  void * mercury__int__fold_down2_7_p_8_env_0__cont_env_ptr;
  MR_Box mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_A_17_17;
  MR_Box mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_B_18_18;
  MR_Integer mercury__int__fold_down2_7_p_8_env_0__Var_19;
  MR_Integer mercury__int__fold_down2_7_p_8_env_0__Var_22;
};

struct mercury__int__fold_down2_7_p_7_env_0_s {
  MR_Word mercury__int__fold_down2_7_p_7_env_0__TypeInfo_for_T_23;
  MR_Word mercury__int__fold_down2_7_p_7_env_0__TypeInfo_for_U_24;
  MR_Word mercury__int__fold_down2_7_p_7_env_0__P_8;
  MR_Integer mercury__int__fold_down2_7_p_7_env_0__Lo_9;
  MR_Integer mercury__int__fold_down2_7_p_7_env_0__Hi_10;
  MR_Box * mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_A_14;
  MR_Box * mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_B_16;
  MR_Cont mercury__int__fold_down2_7_p_7_env_0__cont;
  void * mercury__int__fold_down2_7_p_7_env_0__cont_env_ptr;
  MR_Box mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_A_17_17;
  MR_Box mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_B_18_18;
  MR_Integer mercury__int__fold_down2_7_p_7_env_0__Var_19;
  MR_Integer mercury__int__fold_down2_7_p_7_env_0__Var_22;
};

struct mercury__int__fold_down_5_p_8_env_0_s {
  MR_Word mercury__int__fold_down_5_p_8_env_0__TypeInfo_for_T_16;
  MR_Word mercury__int__fold_down_5_p_8_env_0__P_6;
  MR_Integer mercury__int__fold_down_5_p_8_env_0__Lo_7;
  MR_Integer mercury__int__fold_down_5_p_8_env_0__Hi_8;
  MR_Box * mercury__int__fold_down_5_p_8_env_0__STATE_VARIABLE_A_11;
  MR_Cont mercury__int__fold_down_5_p_8_env_0__cont;
  void * mercury__int__fold_down_5_p_8_env_0__cont_env_ptr;
  MR_Box mercury__int__fold_down_5_p_8_env_0__STATE_VARIABLE_A_12_12;
  MR_Integer mercury__int__fold_down_5_p_8_env_0__Var_13;
  MR_Integer mercury__int__fold_down_5_p_8_env_0__Var_15;
};

struct mercury__int__fold_down_5_p_7_env_0_s {
  MR_Word mercury__int__fold_down_5_p_7_env_0__TypeInfo_for_T_16;
  MR_Word mercury__int__fold_down_5_p_7_env_0__P_6;
  MR_Integer mercury__int__fold_down_5_p_7_env_0__Lo_7;
  MR_Integer mercury__int__fold_down_5_p_7_env_0__Hi_8;
  MR_Box * mercury__int__fold_down_5_p_7_env_0__STATE_VARIABLE_A_11;
  MR_Cont mercury__int__fold_down_5_p_7_env_0__cont;
  void * mercury__int__fold_down_5_p_7_env_0__cont_env_ptr;
  MR_Box mercury__int__fold_down_5_p_7_env_0__STATE_VARIABLE_A_12_12;
  MR_Integer mercury__int__fold_down_5_p_7_env_0__Var_13;
  MR_Integer mercury__int__fold_down_5_p_7_env_0__Var_15;
};

struct mercury__int__fold_up3_9_p_9_env_0_s {
  MR_Word mercury__int__fold_up3_9_p_9_env_0__TypeInfo_for_T_30;
  MR_Word mercury__int__fold_up3_9_p_9_env_0__TypeInfo_for_U_31;
  MR_Word mercury__int__fold_up3_9_p_9_env_0__TypeInfo_for_V_32;
  MR_Word mercury__int__fold_up3_9_p_9_env_0__P_10;
  MR_Integer mercury__int__fold_up3_9_p_9_env_0__Lo_11;
  MR_Integer mercury__int__fold_up3_9_p_9_env_0__Hi_12;
  MR_Box * mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_A_17;
  MR_Box * mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_B_19;
  MR_Box * mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_C_21;
  MR_Cont mercury__int__fold_up3_9_p_9_env_0__cont;
  void * mercury__int__fold_up3_9_p_9_env_0__cont_env_ptr;
  MR_Box mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_A_22_22;
  MR_Box mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_B_23_23;
  MR_Box mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_C_24_24;
  MR_Integer mercury__int__fold_up3_9_p_9_env_0__Var_25;
  MR_Integer mercury__int__fold_up3_9_p_9_env_0__Var_29;
};

struct mercury__int__fold_up3_9_p_8_env_0_s {
  MR_Word mercury__int__fold_up3_9_p_8_env_0__TypeInfo_for_T_30;
  MR_Word mercury__int__fold_up3_9_p_8_env_0__TypeInfo_for_U_31;
  MR_Word mercury__int__fold_up3_9_p_8_env_0__TypeInfo_for_V_32;
  MR_Word mercury__int__fold_up3_9_p_8_env_0__P_10;
  MR_Integer mercury__int__fold_up3_9_p_8_env_0__Lo_11;
  MR_Integer mercury__int__fold_up3_9_p_8_env_0__Hi_12;
  MR_Box * mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_A_17;
  MR_Box * mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_B_19;
  MR_Box * mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_C_21;
  MR_Cont mercury__int__fold_up3_9_p_8_env_0__cont;
  void * mercury__int__fold_up3_9_p_8_env_0__cont_env_ptr;
  MR_Box mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_A_22_22;
  MR_Box mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_B_23_23;
  MR_Box mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_C_24_24;
  MR_Integer mercury__int__fold_up3_9_p_8_env_0__Var_25;
  MR_Integer mercury__int__fold_up3_9_p_8_env_0__Var_29;
};

struct mercury__int__fold_up2_7_p_9_env_0_s {
  MR_Word mercury__int__fold_up2_7_p_9_env_0__TypeInfo_for_T_23;
  MR_Word mercury__int__fold_up2_7_p_9_env_0__TypeInfo_for_U_24;
  MR_Word mercury__int__fold_up2_7_p_9_env_0__P_8;
  MR_Integer mercury__int__fold_up2_7_p_9_env_0__Lo_9;
  MR_Integer mercury__int__fold_up2_7_p_9_env_0__Hi_10;
  MR_Box * mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_A_14;
  MR_Box * mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_B_16;
  MR_Cont mercury__int__fold_up2_7_p_9_env_0__cont;
  void * mercury__int__fold_up2_7_p_9_env_0__cont_env_ptr;
  MR_Box mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_A_17_17;
  MR_Box mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_B_18_18;
  MR_Integer mercury__int__fold_up2_7_p_9_env_0__Var_19;
  MR_Integer mercury__int__fold_up2_7_p_9_env_0__Var_22;
};

struct mercury__int__fold_up2_7_p_8_env_0_s {
  MR_Word mercury__int__fold_up2_7_p_8_env_0__TypeInfo_for_T_23;
  MR_Word mercury__int__fold_up2_7_p_8_env_0__TypeInfo_for_U_24;
  MR_Word mercury__int__fold_up2_7_p_8_env_0__P_8;
  MR_Integer mercury__int__fold_up2_7_p_8_env_0__Lo_9;
  MR_Integer mercury__int__fold_up2_7_p_8_env_0__Hi_10;
  MR_Box * mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_A_14;
  MR_Box * mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_B_16;
  MR_Cont mercury__int__fold_up2_7_p_8_env_0__cont;
  void * mercury__int__fold_up2_7_p_8_env_0__cont_env_ptr;
  MR_Box mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_A_17_17;
  MR_Box mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_B_18_18;
  MR_Integer mercury__int__fold_up2_7_p_8_env_0__Var_19;
  MR_Integer mercury__int__fold_up2_7_p_8_env_0__Var_22;
};

struct mercury__int__fold_up_5_p_8_env_0_s {
  MR_Word mercury__int__fold_up_5_p_8_env_0__TypeInfo_for_T_16;
  MR_Word mercury__int__fold_up_5_p_8_env_0__P_6;
  MR_Integer mercury__int__fold_up_5_p_8_env_0__Lo_7;
  MR_Integer mercury__int__fold_up_5_p_8_env_0__Hi_8;
  MR_Box * mercury__int__fold_up_5_p_8_env_0__STATE_VARIABLE_A_11;
  MR_Cont mercury__int__fold_up_5_p_8_env_0__cont;
  void * mercury__int__fold_up_5_p_8_env_0__cont_env_ptr;
  MR_Box mercury__int__fold_up_5_p_8_env_0__STATE_VARIABLE_A_12_12;
  MR_Integer mercury__int__fold_up_5_p_8_env_0__Var_13;
  MR_Integer mercury__int__fold_up_5_p_8_env_0__Var_15;
};

struct mercury__int__fold_up_5_p_7_env_0_s {
  MR_Word mercury__int__fold_up_5_p_7_env_0__TypeInfo_for_T_16;
  MR_Word mercury__int__fold_up_5_p_7_env_0__P_6;
  MR_Integer mercury__int__fold_up_5_p_7_env_0__Lo_7;
  MR_Integer mercury__int__fold_up_5_p_7_env_0__Hi_8;
  MR_Box * mercury__int__fold_up_5_p_7_env_0__STATE_VARIABLE_A_11;
  MR_Cont mercury__int__fold_up_5_p_7_env_0__cont;
  void * mercury__int__fold_up_5_p_7_env_0__cont_env_ptr;
  MR_Box mercury__int__fold_up_5_p_7_env_0__STATE_VARIABLE_A_12_12;
  MR_Integer mercury__int__fold_up_5_p_7_env_0__Var_13;
  MR_Integer mercury__int__fold_up_5_p_7_env_0__Var_15;
};


static MR_Integer MR_CALL 
mercury__int__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__int__fold_down3_9_p_9_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__int__fold_down3_9_p_8_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__int__fold_down2_7_p_8_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__int__fold_down2_7_p_7_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__int__fold_down_5_p_8_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__int__fold_down_5_p_7_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__int__fold_up3_9_p_9_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__int__fold_up3_9_p_8_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__int__fold_up2_7_p_9_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__int__fold_up2_7_p_8_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__int__fold_up_5_p_8_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__int__fold_up_5_p_7_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__int__log2_loop_3_p_0(
  MR_Integer CurX_4,
  MR_Integer CurLogXSoFar_5,
  MR_Integer * CeilLogX_6);

static MR_Integer MR_CALL 
mercury__int__multiply_by_pow_3_f_0(
  MR_Integer Scale0_5,
  MR_Integer Base_6,
  MR_Integer Exp_7);

static MR_Box MR_CALL 
mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__to_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__from_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);


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
#include "uint8.mh"
#include "version_array.mh"



const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__int__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__from_int_1_1_f_0_10001))
};

static MR_Integer MR_CALL 
mercury__int__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

MR_bool MR_CALL 
mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__from_int_1_1_f_0(
  MR_Integer X_3,
  MR_Integer * X_2)
{
  {
    *X_2 = X_3;
    return MR_TRUE;
  }
}

MR_Integer MR_CALL 
mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__to_int_1_1_f_0(
  MR_Integer X_3)
{
  {
    MR_Integer X_2 = X_3;

    return X_2;
  }
}

MR_bool MR_CALL 
mercury__int__int_domain_checks_0_p_0(void)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__int__int_domain_checks_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_Integer MR_CALL 
mercury__int__rem_bits_per_int_1_f_0(
  MR_Integer Int_1)
{
  {
    MR_Integer Rem_2;

{
#define MR_PROC_LABEL mercury__int__rem_bits_per_int_1_f_0

	MR_Integer Int;
	MR_Integer Rem;

	Int =  Int_1 ;
		{

    Rem = Int % ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Rem_2  = Rem;
}
    return Rem_2;
  }
}

MR_Integer MR_CALL 
mercury__int__times_bits_per_int_1_f_0(
  MR_Integer Int_1)
{
  {
    MR_Integer Result_2;

{
#define MR_PROC_LABEL mercury__int__times_bits_per_int_1_f_0

	MR_Integer Int;
	MR_Integer Result;

	Int =  Int_1 ;
		{

    Result = Int * ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Result_2  = Result;
}
    return Result_2;
  }
}

MR_Integer MR_CALL 
mercury__int__quot_bits_per_int_1_f_0(
  MR_Integer Int_1)
{
  {
    MR_Integer Div_2;

{
#define MR_PROC_LABEL mercury__int__quot_bits_per_int_1_f_0

	MR_Integer Int;
	MR_Integer Div;

	Int =  Int_1 ;
		{

    Div = Int / ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Div_2  = Div;
}
    return Div_2;
  }
}

MR_Integer MR_CALL 
mercury__int__floor_to_multiple_of_bits_per_int_1_f_0(
  MR_Integer X_3)
{
  {
    MR_bool succeeded;
    MR_Integer Floor_4;
    MR_Integer Trunc_5;
    MR_Integer Floor0_6;

{
#define MR_PROC_LABEL mercury__int__floor_to_multiple_of_bits_per_int_1_f_0

	MR_Integer Int;
	MR_Integer Div;

	Int =  X_3 ;
		{

    Div = Int / ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Trunc_5  = Div;
}
{
#define MR_PROC_LABEL mercury__int__floor_to_multiple_of_bits_per_int_1_f_0

	MR_Integer Int;
	MR_Integer Result;

	Int =  Trunc_5 ;
		{

    Result = Int * ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Floor0_6  = Result;
}
    succeeded = (Floor0_6 > X_3);
    if (succeeded)
    {
      MR_Integer Var_7;

{
#define MR_PROC_LABEL mercury__int__floor_to_multiple_of_bits_per_int_1_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_7  = Bits;
}
      Floor_4 = (Floor0_6 - Var_7);
    }
    else
      Floor_4 = Floor0_6;
    return Floor_4;
  }
}

MR_Word MR_CALL 
mercury__int__int_to_doc_1_f_0(
  MR_Integer X_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_String Var_4;

    mercury__string__int_to_base_string_3_p_0(X_3, (MR_Integer) 10, &Var_4);
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    }
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__int__all_true_in_range_3_p_0(
  MR_Word P_4,
  MR_Integer Lo_5,
  MR_Integer Hi_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_5 <= Hi_6);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Integer Var_7;
      MR_Integer Var_8;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), P_4, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_5;

      succeeded = func_0(((MR_Box) P_4), ((MR_Box) (Lo_5)));
      if (succeeded)
      {
        Var_8 = (MR_Integer) 1;
        Var_7 = (Lo_5 + Var_8);
        /* direct tailcall eliminated */
        next_value_of_Lo_5 = Var_7;
        Lo_5 = next_value_of_Lo_5;
        continue;
      }
    }
    else
      succeeded = MR_TRUE;
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__int__nondet_int_in_range_3_p_0(
  MR_Integer Lo_4,
  MR_Integer Hi_5,
  MR_Integer * I_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_bool succeeded = (Lo_4 < Hi_5);

    if (succeeded)
    {
      *I_6 = Lo_4;
      cont(cont_env_ptr);
      {
        MR_Integer Var_7 = (Lo_4 + (MR_Integer) 1);

        mercury__int__nondet_int_in_range_3_p_0(Var_7, Hi_5, I_6, cont, cont_env_ptr);
      }
    }
    else
    {
      succeeded = (Lo_4 == Hi_5);
      if (succeeded)
      {
        *I_6 = Lo_4;
        succeeded = MR_TRUE;
      }
      if (succeeded)
        cont(cont_env_ptr);
    }
  }
}

static void MR_CALL 
mercury__int__fold_down3_9_p_9_1(
  void * env_ptr_arg)
{
  {
    struct mercury__int__fold_down3_9_p_9_env_0_s * env_ptr = (struct mercury__int__fold_down3_9_p_9_env_0_s *) env_ptr_arg;

    (env_ptr)->mercury__int__fold_down3_9_p_9_env_0__Var_29 = (MR_Integer) 1;
    (env_ptr)->mercury__int__fold_down3_9_p_9_env_0__Var_25 = ((env_ptr)->mercury__int__fold_down3_9_p_9_env_0__Hi_12 - (env_ptr)->mercury__int__fold_down3_9_p_9_env_0__Var_29);
    mercury__int__fold_down3_9_p_9((env_ptr)->mercury__int__fold_down3_9_p_9_env_0__TypeInfo_for_T_30, (env_ptr)->mercury__int__fold_down3_9_p_9_env_0__TypeInfo_for_U_31, (env_ptr)->mercury__int__fold_down3_9_p_9_env_0__TypeInfo_for_V_32, (env_ptr)->mercury__int__fold_down3_9_p_9_env_0__P_10, (env_ptr)->mercury__int__fold_down3_9_p_9_env_0__Lo_11, (env_ptr)->mercury__int__fold_down3_9_p_9_env_0__Var_25, (env_ptr)->mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_A_22_22, (env_ptr)->mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_A_17, (env_ptr)->mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_B_23_23, (env_ptr)->mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_B_19, (env_ptr)->mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_C_24_24, (env_ptr)->mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_C_21, (env_ptr)->mercury__int__fold_down3_9_p_9_env_0__cont, (env_ptr)->mercury__int__fold_down3_9_p_9_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__int__fold_down3_9_p_9(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_U_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word P_10,
  MR_Integer Lo_11,
  MR_Integer Hi_12,
  MR_Box STATE_VARIABLE_A_0_16,
  MR_Box * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_B_0_18,
  MR_Box * STATE_VARIABLE_B_19,
  MR_Box STATE_VARIABLE_C_0_20,
  MR_Box * STATE_VARIABLE_C_21,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__int__fold_down3_9_p_9_env_0_s env;

    (env).mercury__int__fold_down3_9_p_9_env_0__TypeInfo_for_T_30 = TypeInfo_for_T_30;
    (env).mercury__int__fold_down3_9_p_9_env_0__TypeInfo_for_U_31 = TypeInfo_for_U_31;
    (env).mercury__int__fold_down3_9_p_9_env_0__TypeInfo_for_V_32 = TypeInfo_for_V_32;
    (env).mercury__int__fold_down3_9_p_9_env_0__P_10 = P_10;
    (env).mercury__int__fold_down3_9_p_9_env_0__Lo_11 = Lo_11;
    (env).mercury__int__fold_down3_9_p_9_env_0__Hi_12 = Hi_12;
    (env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_A_17 = STATE_VARIABLE_A_17;
    (env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_B_19 = STATE_VARIABLE_B_19;
    (env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_C_21 = STATE_VARIABLE_C_21;
    (env).mercury__int__fold_down3_9_p_9_env_0__cont = cont;
    (env).mercury__int__fold_down3_9_p_9_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_bool succeeded = ((env).mercury__int__fold_down3_9_p_9_env_0__Lo_11 <= (env).mercury__int__fold_down3_9_p_9_env_0__Hi_12);

      if (succeeded)
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (env).mercury__int__fold_down3_9_p_9_env_0__P_10, (MR_Integer) 1)));

        func_0(((MR_Box) (env).mercury__int__fold_down3_9_p_9_env_0__P_10), ((MR_Box) ((env).mercury__int__fold_down3_9_p_9_env_0__Hi_12)), STATE_VARIABLE_A_0_16, &(env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_18, &(env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_B_23_23, STATE_VARIABLE_C_0_20, &(env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_C_24_24, mercury__int__fold_down3_9_p_9_1, &env);
      }
      else
      {
        *((env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_C_21) = STATE_VARIABLE_C_0_20;
        *((env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_B_19) = STATE_VARIABLE_B_0_18;
        *((env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_A_17) = STATE_VARIABLE_A_0_16;
        ((env).mercury__int__fold_down3_9_p_9_env_0__cont)((env).mercury__int__fold_down3_9_p_9_env_0__cont_env_ptr);
      }
    }
  }
}

static void MR_CALL 
mercury__int__fold_down3_9_p_8_1(
  void * env_ptr_arg)
{
  {
    struct mercury__int__fold_down3_9_p_8_env_0_s * env_ptr = (struct mercury__int__fold_down3_9_p_8_env_0_s *) env_ptr_arg;

    (env_ptr)->mercury__int__fold_down3_9_p_8_env_0__Var_29 = (MR_Integer) 1;
    (env_ptr)->mercury__int__fold_down3_9_p_8_env_0__Var_25 = ((env_ptr)->mercury__int__fold_down3_9_p_8_env_0__Hi_12 - (env_ptr)->mercury__int__fold_down3_9_p_8_env_0__Var_29);
    mercury__int__fold_down3_9_p_8((env_ptr)->mercury__int__fold_down3_9_p_8_env_0__TypeInfo_for_T_30, (env_ptr)->mercury__int__fold_down3_9_p_8_env_0__TypeInfo_for_U_31, (env_ptr)->mercury__int__fold_down3_9_p_8_env_0__TypeInfo_for_V_32, (env_ptr)->mercury__int__fold_down3_9_p_8_env_0__P_10, (env_ptr)->mercury__int__fold_down3_9_p_8_env_0__Lo_11, (env_ptr)->mercury__int__fold_down3_9_p_8_env_0__Var_25, (env_ptr)->mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_A_22_22, (env_ptr)->mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_A_17, (env_ptr)->mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_B_23_23, (env_ptr)->mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_B_19, (env_ptr)->mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_C_24_24, (env_ptr)->mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_C_21, (env_ptr)->mercury__int__fold_down3_9_p_8_env_0__cont, (env_ptr)->mercury__int__fold_down3_9_p_8_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__int__fold_down3_9_p_8(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_U_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word P_10,
  MR_Integer Lo_11,
  MR_Integer Hi_12,
  MR_Box STATE_VARIABLE_A_0_16,
  MR_Box * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_B_0_18,
  MR_Box * STATE_VARIABLE_B_19,
  MR_Box STATE_VARIABLE_C_0_20,
  MR_Box * STATE_VARIABLE_C_21,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__int__fold_down3_9_p_8_env_0_s env;

    (env).mercury__int__fold_down3_9_p_8_env_0__TypeInfo_for_T_30 = TypeInfo_for_T_30;
    (env).mercury__int__fold_down3_9_p_8_env_0__TypeInfo_for_U_31 = TypeInfo_for_U_31;
    (env).mercury__int__fold_down3_9_p_8_env_0__TypeInfo_for_V_32 = TypeInfo_for_V_32;
    (env).mercury__int__fold_down3_9_p_8_env_0__P_10 = P_10;
    (env).mercury__int__fold_down3_9_p_8_env_0__Lo_11 = Lo_11;
    (env).mercury__int__fold_down3_9_p_8_env_0__Hi_12 = Hi_12;
    (env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_A_17 = STATE_VARIABLE_A_17;
    (env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_B_19 = STATE_VARIABLE_B_19;
    (env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_C_21 = STATE_VARIABLE_C_21;
    (env).mercury__int__fold_down3_9_p_8_env_0__cont = cont;
    (env).mercury__int__fold_down3_9_p_8_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_bool succeeded = ((env).mercury__int__fold_down3_9_p_8_env_0__Lo_11 <= (env).mercury__int__fold_down3_9_p_8_env_0__Hi_12);

      if (succeeded)
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (env).mercury__int__fold_down3_9_p_8_env_0__P_10, (MR_Integer) 1)));

        func_0(((MR_Box) (env).mercury__int__fold_down3_9_p_8_env_0__P_10), ((MR_Box) ((env).mercury__int__fold_down3_9_p_8_env_0__Hi_12)), STATE_VARIABLE_A_0_16, &(env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_18, &(env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_B_23_23, STATE_VARIABLE_C_0_20, &(env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_C_24_24, mercury__int__fold_down3_9_p_8_1, &env);
      }
      else
      {
        *((env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_C_21) = STATE_VARIABLE_C_0_20;
        *((env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_B_19) = STATE_VARIABLE_B_0_18;
        *((env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_A_17) = STATE_VARIABLE_A_0_16;
        ((env).mercury__int__fold_down3_9_p_8_env_0__cont)((env).mercury__int__fold_down3_9_p_8_env_0__cont_env_ptr);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__int__fold_down3_9_p_7(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_U_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word P_10,
  MR_Integer Lo_11,
  MR_Integer Hi_12,
  MR_Box STATE_VARIABLE_A_0_16,
  MR_Box * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_B_0_18,
  MR_Box * STATE_VARIABLE_B_19,
  MR_Box STATE_VARIABLE_C_0_20,
  MR_Box * STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_11 <= Hi_12);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_22_22;
      MR_Box STATE_VARIABLE_B_23_23;
      MR_Box STATE_VARIABLE_C_24_24;
      MR_Integer Var_25;
      MR_Integer Var_29;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_10, (MR_Integer) 1)));
      MR_Integer next_value_of_Hi_12;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      succeeded = func_0(((MR_Box) P_10), ((MR_Box) (Hi_12)), STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_23_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_24_24);
      if (succeeded)
      {
        Var_29 = (MR_Integer) 1;
        Var_25 = (Hi_12 - Var_29);
        /* direct tailcall eliminated */
        next_value_of_Hi_12 = Var_25;
        next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_22_22;
        next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_23_23;
        next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_24_24;
        Hi_12 = next_value_of_Hi_12;
        STATE_VARIABLE_A_0_16 = next_value_of_STATE_VARIABLE_A_0_16;
        STATE_VARIABLE_B_0_18 = next_value_of_STATE_VARIABLE_B_0_18;
        STATE_VARIABLE_C_0_20 = next_value_of_STATE_VARIABLE_C_0_20;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_C_21 = STATE_VARIABLE_C_0_20;
      *STATE_VARIABLE_B_19 = STATE_VARIABLE_B_0_18;
      *STATE_VARIABLE_A_17 = STATE_VARIABLE_A_0_16;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__int__fold_down3_9_p_6(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_U_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word P_10,
  MR_Integer Lo_11,
  MR_Integer Hi_12,
  MR_Box STATE_VARIABLE_A_0_16,
  MR_Box * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_B_0_18,
  MR_Box * STATE_VARIABLE_B_19,
  MR_Box STATE_VARIABLE_C_0_20,
  MR_Box * STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_11 <= Hi_12);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_22_22;
      MR_Box STATE_VARIABLE_B_23_23;
      MR_Box STATE_VARIABLE_C_24_24;
      MR_Integer Var_25;
      MR_Integer Var_29;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_10, (MR_Integer) 1)));
      MR_Integer next_value_of_Hi_12;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      succeeded = func_0(((MR_Box) P_10), ((MR_Box) (Hi_12)), STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_23_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_24_24);
      if (succeeded)
      {
        Var_29 = (MR_Integer) 1;
        Var_25 = (Hi_12 - Var_29);
        /* direct tailcall eliminated */
        next_value_of_Hi_12 = Var_25;
        next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_22_22;
        next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_23_23;
        next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_24_24;
        Hi_12 = next_value_of_Hi_12;
        STATE_VARIABLE_A_0_16 = next_value_of_STATE_VARIABLE_A_0_16;
        STATE_VARIABLE_B_0_18 = next_value_of_STATE_VARIABLE_B_0_18;
        STATE_VARIABLE_C_0_20 = next_value_of_STATE_VARIABLE_C_0_20;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_C_21 = STATE_VARIABLE_C_0_20;
      *STATE_VARIABLE_B_19 = STATE_VARIABLE_B_0_18;
      *STATE_VARIABLE_A_17 = STATE_VARIABLE_A_0_16;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__int__fold_down3_9_p_5(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_U_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word P_10,
  MR_Integer Lo_11,
  MR_Integer Hi_12,
  MR_Box STATE_VARIABLE_A_0_16,
  MR_Box * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_B_0_18,
  MR_Box * STATE_VARIABLE_B_19,
  MR_Box STATE_VARIABLE_C_0_20,
  MR_Box * STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_11 <= Hi_12);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_22_22;
      MR_Box STATE_VARIABLE_B_23_23;
      MR_Box STATE_VARIABLE_C_24_24;
      MR_Integer Var_25;
      MR_Integer Var_29;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_10, (MR_Integer) 1)));
      MR_Integer next_value_of_Hi_12;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      succeeded = func_0(((MR_Box) P_10), ((MR_Box) (Hi_12)), STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_23_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_24_24);
      if (succeeded)
      {
        Var_29 = (MR_Integer) 1;
        Var_25 = (Hi_12 - Var_29);
        /* direct tailcall eliminated */
        next_value_of_Hi_12 = Var_25;
        next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_22_22;
        next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_23_23;
        next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_24_24;
        Hi_12 = next_value_of_Hi_12;
        STATE_VARIABLE_A_0_16 = next_value_of_STATE_VARIABLE_A_0_16;
        STATE_VARIABLE_B_0_18 = next_value_of_STATE_VARIABLE_B_0_18;
        STATE_VARIABLE_C_0_20 = next_value_of_STATE_VARIABLE_C_0_20;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_C_21 = STATE_VARIABLE_C_0_20;
      *STATE_VARIABLE_B_19 = STATE_VARIABLE_B_0_18;
      *STATE_VARIABLE_A_17 = STATE_VARIABLE_A_0_16;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__int__fold_down3_9_p_4(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_U_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word P_10,
  MR_Integer Lo_11,
  MR_Integer Hi_12,
  MR_Box STATE_VARIABLE_A_0_16,
  MR_Box * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_B_0_18,
  MR_Box * STATE_VARIABLE_B_19,
  MR_Box STATE_VARIABLE_C_0_20,
  MR_Box * STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_11 <= Hi_12);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_22_22;
      MR_Box STATE_VARIABLE_B_23_23;
      MR_Box STATE_VARIABLE_C_24_24;
      MR_Integer Var_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_10, (MR_Integer) 1)));
      MR_Integer next_value_of_Hi_12;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      func_0(((MR_Box) P_10), ((MR_Box) (Hi_12)), STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_23_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_24_24);
      Var_25 = (Hi_12 - (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Hi_12 = Var_25;
      next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_22_22;
      next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_23_23;
      next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_24_24;
      Hi_12 = next_value_of_Hi_12;
      STATE_VARIABLE_A_0_16 = next_value_of_STATE_VARIABLE_A_0_16;
      STATE_VARIABLE_B_0_18 = next_value_of_STATE_VARIABLE_B_0_18;
      STATE_VARIABLE_C_0_20 = next_value_of_STATE_VARIABLE_C_0_20;
      continue;
    }
    else
    {
      *STATE_VARIABLE_C_21 = STATE_VARIABLE_C_0_20;
      *STATE_VARIABLE_B_19 = STATE_VARIABLE_B_0_18;
      *STATE_VARIABLE_A_17 = STATE_VARIABLE_A_0_16;
    }
    break;
  }
}

void MR_CALL 
mercury__int__fold_down3_9_p_3(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_U_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word P_10,
  MR_Integer Lo_11,
  MR_Integer Hi_12,
  MR_Box STATE_VARIABLE_A_0_16,
  MR_Box * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_B_0_18,
  MR_Box * STATE_VARIABLE_B_19,
  MR_Box STATE_VARIABLE_C_0_20,
  MR_Box * STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_11 <= Hi_12);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_22_22;
      MR_Box STATE_VARIABLE_B_23_23;
      MR_Box STATE_VARIABLE_C_24_24;
      MR_Integer Var_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_10, (MR_Integer) 1)));
      MR_Integer next_value_of_Hi_12;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      func_0(((MR_Box) P_10), ((MR_Box) (Hi_12)), STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_23_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_24_24);
      Var_25 = (Hi_12 - (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Hi_12 = Var_25;
      next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_22_22;
      next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_23_23;
      next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_24_24;
      Hi_12 = next_value_of_Hi_12;
      STATE_VARIABLE_A_0_16 = next_value_of_STATE_VARIABLE_A_0_16;
      STATE_VARIABLE_B_0_18 = next_value_of_STATE_VARIABLE_B_0_18;
      STATE_VARIABLE_C_0_20 = next_value_of_STATE_VARIABLE_C_0_20;
      continue;
    }
    else
    {
      *STATE_VARIABLE_C_21 = STATE_VARIABLE_C_0_20;
      *STATE_VARIABLE_B_19 = STATE_VARIABLE_B_0_18;
      *STATE_VARIABLE_A_17 = STATE_VARIABLE_A_0_16;
    }
    break;
  }
}

void MR_CALL 
mercury__int__fold_down3_9_p_2(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_U_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word P_10,
  MR_Integer Lo_11,
  MR_Integer Hi_12,
  MR_Box STATE_VARIABLE_A_0_16,
  MR_Box * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_B_0_18,
  MR_Box * STATE_VARIABLE_B_19,
  MR_Box STATE_VARIABLE_C_0_20,
  MR_Box * STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_11 <= Hi_12);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_22_22;
      MR_Box STATE_VARIABLE_B_23_23;
      MR_Box STATE_VARIABLE_C_24_24;
      MR_Integer Var_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_10, (MR_Integer) 1)));
      MR_Integer next_value_of_Hi_12;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      func_0(((MR_Box) P_10), ((MR_Box) (Hi_12)), STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_23_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_24_24);
      Var_25 = (Hi_12 - (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Hi_12 = Var_25;
      next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_22_22;
      next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_23_23;
      next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_24_24;
      Hi_12 = next_value_of_Hi_12;
      STATE_VARIABLE_A_0_16 = next_value_of_STATE_VARIABLE_A_0_16;
      STATE_VARIABLE_B_0_18 = next_value_of_STATE_VARIABLE_B_0_18;
      STATE_VARIABLE_C_0_20 = next_value_of_STATE_VARIABLE_C_0_20;
      continue;
    }
    else
    {
      *STATE_VARIABLE_C_21 = STATE_VARIABLE_C_0_20;
      *STATE_VARIABLE_B_19 = STATE_VARIABLE_B_0_18;
      *STATE_VARIABLE_A_17 = STATE_VARIABLE_A_0_16;
    }
    break;
  }
}

void MR_CALL 
mercury__int__fold_down3_9_p_1(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_U_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word P_10,
  MR_Integer Lo_11,
  MR_Integer Hi_12,
  MR_Box STATE_VARIABLE_A_0_16,
  MR_Box * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_B_0_18,
  MR_Box * STATE_VARIABLE_B_19,
  MR_Box STATE_VARIABLE_C_0_20,
  MR_Box * STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_11 <= Hi_12);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_22_22;
      MR_Box STATE_VARIABLE_B_23_23;
      MR_Box STATE_VARIABLE_C_24_24;
      MR_Integer Var_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_10, (MR_Integer) 1)));
      MR_Integer next_value_of_Hi_12;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      func_0(((MR_Box) P_10), ((MR_Box) (Hi_12)), STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_23_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_24_24);
      Var_25 = (Hi_12 - (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Hi_12 = Var_25;
      next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_22_22;
      next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_23_23;
      next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_24_24;
      Hi_12 = next_value_of_Hi_12;
      STATE_VARIABLE_A_0_16 = next_value_of_STATE_VARIABLE_A_0_16;
      STATE_VARIABLE_B_0_18 = next_value_of_STATE_VARIABLE_B_0_18;
      STATE_VARIABLE_C_0_20 = next_value_of_STATE_VARIABLE_C_0_20;
      continue;
    }
    else
    {
      *STATE_VARIABLE_C_21 = STATE_VARIABLE_C_0_20;
      *STATE_VARIABLE_B_19 = STATE_VARIABLE_B_0_18;
      *STATE_VARIABLE_A_17 = STATE_VARIABLE_A_0_16;
    }
    break;
  }
}

void MR_CALL 
mercury__int__fold_down3_9_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_U_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word P_10,
  MR_Integer Lo_11,
  MR_Integer Hi_12,
  MR_Box STATE_VARIABLE_A_0_16,
  MR_Box * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_B_0_18,
  MR_Box * STATE_VARIABLE_B_19,
  MR_Box STATE_VARIABLE_C_0_20,
  MR_Box * STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_11 <= Hi_12);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_22_22;
      MR_Box STATE_VARIABLE_B_23_23;
      MR_Box STATE_VARIABLE_C_24_24;
      MR_Integer Var_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_10, (MR_Integer) 1)));
      MR_Integer next_value_of_Hi_12;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      func_0(((MR_Box) P_10), ((MR_Box) (Hi_12)), STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_23_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_24_24);
      Var_25 = (Hi_12 - (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Hi_12 = Var_25;
      next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_22_22;
      next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_23_23;
      next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_24_24;
      Hi_12 = next_value_of_Hi_12;
      STATE_VARIABLE_A_0_16 = next_value_of_STATE_VARIABLE_A_0_16;
      STATE_VARIABLE_B_0_18 = next_value_of_STATE_VARIABLE_B_0_18;
      STATE_VARIABLE_C_0_20 = next_value_of_STATE_VARIABLE_C_0_20;
      continue;
    }
    else
    {
      *STATE_VARIABLE_C_21 = STATE_VARIABLE_C_0_20;
      *STATE_VARIABLE_B_19 = STATE_VARIABLE_B_0_18;
      *STATE_VARIABLE_A_17 = STATE_VARIABLE_A_0_16;
    }
    break;
  }
}

static void MR_CALL 
mercury__int__fold_down2_7_p_8_1(
  void * env_ptr_arg)
{
  {
    struct mercury__int__fold_down2_7_p_8_env_0_s * env_ptr = (struct mercury__int__fold_down2_7_p_8_env_0_s *) env_ptr_arg;

    (env_ptr)->mercury__int__fold_down2_7_p_8_env_0__Var_22 = (MR_Integer) 1;
    (env_ptr)->mercury__int__fold_down2_7_p_8_env_0__Var_19 = ((env_ptr)->mercury__int__fold_down2_7_p_8_env_0__Hi_10 - (env_ptr)->mercury__int__fold_down2_7_p_8_env_0__Var_22);
    mercury__int__fold_down2_7_p_8((env_ptr)->mercury__int__fold_down2_7_p_8_env_0__TypeInfo_for_T_23, (env_ptr)->mercury__int__fold_down2_7_p_8_env_0__TypeInfo_for_U_24, (env_ptr)->mercury__int__fold_down2_7_p_8_env_0__P_8, (env_ptr)->mercury__int__fold_down2_7_p_8_env_0__Lo_9, (env_ptr)->mercury__int__fold_down2_7_p_8_env_0__Var_19, (env_ptr)->mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_A_17_17, (env_ptr)->mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_A_14, (env_ptr)->mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_B_18_18, (env_ptr)->mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_B_16, (env_ptr)->mercury__int__fold_down2_7_p_8_env_0__cont, (env_ptr)->mercury__int__fold_down2_7_p_8_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__int__fold_down2_7_p_8(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_U_24,
  MR_Word P_8,
  MR_Integer Lo_9,
  MR_Integer Hi_10,
  MR_Box STATE_VARIABLE_A_0_13,
  MR_Box * STATE_VARIABLE_A_14,
  MR_Box STATE_VARIABLE_B_0_15,
  MR_Box * STATE_VARIABLE_B_16,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__int__fold_down2_7_p_8_env_0_s env;

    (env).mercury__int__fold_down2_7_p_8_env_0__TypeInfo_for_T_23 = TypeInfo_for_T_23;
    (env).mercury__int__fold_down2_7_p_8_env_0__TypeInfo_for_U_24 = TypeInfo_for_U_24;
    (env).mercury__int__fold_down2_7_p_8_env_0__P_8 = P_8;
    (env).mercury__int__fold_down2_7_p_8_env_0__Lo_9 = Lo_9;
    (env).mercury__int__fold_down2_7_p_8_env_0__Hi_10 = Hi_10;
    (env).mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_A_14 = STATE_VARIABLE_A_14;
    (env).mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_B_16 = STATE_VARIABLE_B_16;
    (env).mercury__int__fold_down2_7_p_8_env_0__cont = cont;
    (env).mercury__int__fold_down2_7_p_8_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_bool succeeded = ((env).mercury__int__fold_down2_7_p_8_env_0__Lo_9 <= (env).mercury__int__fold_down2_7_p_8_env_0__Hi_10);

      if (succeeded)
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (env).mercury__int__fold_down2_7_p_8_env_0__P_8, (MR_Integer) 1)));

        func_0(((MR_Box) (env).mercury__int__fold_down2_7_p_8_env_0__P_8), ((MR_Box) ((env).mercury__int__fold_down2_7_p_8_env_0__Hi_10)), STATE_VARIABLE_A_0_13, &(env).mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_A_17_17, STATE_VARIABLE_B_0_15, &(env).mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_B_18_18, mercury__int__fold_down2_7_p_8_1, &env);
      }
      else
      {
        *((env).mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_B_16) = STATE_VARIABLE_B_0_15;
        *((env).mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_A_14) = STATE_VARIABLE_A_0_13;
        ((env).mercury__int__fold_down2_7_p_8_env_0__cont)((env).mercury__int__fold_down2_7_p_8_env_0__cont_env_ptr);
      }
    }
  }
}

static void MR_CALL 
mercury__int__fold_down2_7_p_7_1(
  void * env_ptr_arg)
{
  {
    struct mercury__int__fold_down2_7_p_7_env_0_s * env_ptr = (struct mercury__int__fold_down2_7_p_7_env_0_s *) env_ptr_arg;

    (env_ptr)->mercury__int__fold_down2_7_p_7_env_0__Var_22 = (MR_Integer) 1;
    (env_ptr)->mercury__int__fold_down2_7_p_7_env_0__Var_19 = ((env_ptr)->mercury__int__fold_down2_7_p_7_env_0__Hi_10 - (env_ptr)->mercury__int__fold_down2_7_p_7_env_0__Var_22);
    mercury__int__fold_down2_7_p_7((env_ptr)->mercury__int__fold_down2_7_p_7_env_0__TypeInfo_for_T_23, (env_ptr)->mercury__int__fold_down2_7_p_7_env_0__TypeInfo_for_U_24, (env_ptr)->mercury__int__fold_down2_7_p_7_env_0__P_8, (env_ptr)->mercury__int__fold_down2_7_p_7_env_0__Lo_9, (env_ptr)->mercury__int__fold_down2_7_p_7_env_0__Var_19, (env_ptr)->mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_A_17_17, (env_ptr)->mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_A_14, (env_ptr)->mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_B_18_18, (env_ptr)->mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_B_16, (env_ptr)->mercury__int__fold_down2_7_p_7_env_0__cont, (env_ptr)->mercury__int__fold_down2_7_p_7_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__int__fold_down2_7_p_7(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_U_24,
  MR_Word P_8,
  MR_Integer Lo_9,
  MR_Integer Hi_10,
  MR_Box STATE_VARIABLE_A_0_13,
  MR_Box * STATE_VARIABLE_A_14,
  MR_Box STATE_VARIABLE_B_0_15,
  MR_Box * STATE_VARIABLE_B_16,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__int__fold_down2_7_p_7_env_0_s env;

    (env).mercury__int__fold_down2_7_p_7_env_0__TypeInfo_for_T_23 = TypeInfo_for_T_23;
    (env).mercury__int__fold_down2_7_p_7_env_0__TypeInfo_for_U_24 = TypeInfo_for_U_24;
    (env).mercury__int__fold_down2_7_p_7_env_0__P_8 = P_8;
    (env).mercury__int__fold_down2_7_p_7_env_0__Lo_9 = Lo_9;
    (env).mercury__int__fold_down2_7_p_7_env_0__Hi_10 = Hi_10;
    (env).mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_A_14 = STATE_VARIABLE_A_14;
    (env).mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_B_16 = STATE_VARIABLE_B_16;
    (env).mercury__int__fold_down2_7_p_7_env_0__cont = cont;
    (env).mercury__int__fold_down2_7_p_7_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_bool succeeded = ((env).mercury__int__fold_down2_7_p_7_env_0__Lo_9 <= (env).mercury__int__fold_down2_7_p_7_env_0__Hi_10);

      if (succeeded)
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (env).mercury__int__fold_down2_7_p_7_env_0__P_8, (MR_Integer) 1)));

        func_0(((MR_Box) (env).mercury__int__fold_down2_7_p_7_env_0__P_8), ((MR_Box) ((env).mercury__int__fold_down2_7_p_7_env_0__Hi_10)), STATE_VARIABLE_A_0_13, &(env).mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_A_17_17, STATE_VARIABLE_B_0_15, &(env).mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_B_18_18, mercury__int__fold_down2_7_p_7_1, &env);
      }
      else
      {
        *((env).mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_B_16) = STATE_VARIABLE_B_0_15;
        *((env).mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_A_14) = STATE_VARIABLE_A_0_13;
        ((env).mercury__int__fold_down2_7_p_7_env_0__cont)((env).mercury__int__fold_down2_7_p_7_env_0__cont_env_ptr);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__int__fold_down2_7_p_6(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_U_24,
  MR_Word P_8,
  MR_Integer Lo_9,
  MR_Integer Hi_10,
  MR_Box STATE_VARIABLE_A_0_13,
  MR_Box * STATE_VARIABLE_A_14,
  MR_Box STATE_VARIABLE_B_0_15,
  MR_Box * STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_9 <= Hi_10);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_17_17;
      MR_Box STATE_VARIABLE_B_18_18;
      MR_Integer Var_19;
      MR_Integer Var_22;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1)));
      MR_Integer next_value_of_Hi_10;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      succeeded = func_0(((MR_Box) P_8), ((MR_Box) (Hi_10)), STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_17_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_18_18);
      if (succeeded)
      {
        Var_22 = (MR_Integer) 1;
        Var_19 = (Hi_10 - Var_22);
        /* direct tailcall eliminated */
        next_value_of_Hi_10 = Var_19;
        next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_17_17;
        next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_18_18;
        Hi_10 = next_value_of_Hi_10;
        STATE_VARIABLE_A_0_13 = next_value_of_STATE_VARIABLE_A_0_13;
        STATE_VARIABLE_B_0_15 = next_value_of_STATE_VARIABLE_B_0_15;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_B_16 = STATE_VARIABLE_B_0_15;
      *STATE_VARIABLE_A_14 = STATE_VARIABLE_A_0_13;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__int__fold_down2_7_p_5(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_U_24,
  MR_Word P_8,
  MR_Integer Lo_9,
  MR_Integer Hi_10,
  MR_Box STATE_VARIABLE_A_0_13,
  MR_Box * STATE_VARIABLE_A_14,
  MR_Box STATE_VARIABLE_B_0_15,
  MR_Box * STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_9 <= Hi_10);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_17_17;
      MR_Box STATE_VARIABLE_B_18_18;
      MR_Integer Var_19;
      MR_Integer Var_22;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1)));
      MR_Integer next_value_of_Hi_10;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      succeeded = func_0(((MR_Box) P_8), ((MR_Box) (Hi_10)), STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_17_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_18_18);
      if (succeeded)
      {
        Var_22 = (MR_Integer) 1;
        Var_19 = (Hi_10 - Var_22);
        /* direct tailcall eliminated */
        next_value_of_Hi_10 = Var_19;
        next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_17_17;
        next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_18_18;
        Hi_10 = next_value_of_Hi_10;
        STATE_VARIABLE_A_0_13 = next_value_of_STATE_VARIABLE_A_0_13;
        STATE_VARIABLE_B_0_15 = next_value_of_STATE_VARIABLE_B_0_15;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_B_16 = STATE_VARIABLE_B_0_15;
      *STATE_VARIABLE_A_14 = STATE_VARIABLE_A_0_13;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__int__fold_down2_7_p_4(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_U_24,
  MR_Word P_8,
  MR_Integer Lo_9,
  MR_Integer Hi_10,
  MR_Box STATE_VARIABLE_A_0_13,
  MR_Box * STATE_VARIABLE_A_14,
  MR_Box STATE_VARIABLE_B_0_15,
  MR_Box * STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_9 <= Hi_10);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_17_17;
      MR_Box STATE_VARIABLE_B_18_18;
      MR_Integer Var_19;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1)));
      MR_Integer next_value_of_Hi_10;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      func_0(((MR_Box) P_8), ((MR_Box) (Hi_10)), STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_17_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_18_18);
      Var_19 = (Hi_10 - (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Hi_10 = Var_19;
      next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_17_17;
      next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_18_18;
      Hi_10 = next_value_of_Hi_10;
      STATE_VARIABLE_A_0_13 = next_value_of_STATE_VARIABLE_A_0_13;
      STATE_VARIABLE_B_0_15 = next_value_of_STATE_VARIABLE_B_0_15;
      continue;
    }
    else
    {
      *STATE_VARIABLE_B_16 = STATE_VARIABLE_B_0_15;
      *STATE_VARIABLE_A_14 = STATE_VARIABLE_A_0_13;
    }
    break;
  }
}

void MR_CALL 
mercury__int__fold_down2_7_p_3(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_U_24,
  MR_Word P_8,
  MR_Integer Lo_9,
  MR_Integer Hi_10,
  MR_Box STATE_VARIABLE_A_0_13,
  MR_Box * STATE_VARIABLE_A_14,
  MR_Box STATE_VARIABLE_B_0_15,
  MR_Box * STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_9 <= Hi_10);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_17_17;
      MR_Box STATE_VARIABLE_B_18_18;
      MR_Integer Var_19;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1)));
      MR_Integer next_value_of_Hi_10;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      func_0(((MR_Box) P_8), ((MR_Box) (Hi_10)), STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_17_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_18_18);
      Var_19 = (Hi_10 - (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Hi_10 = Var_19;
      next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_17_17;
      next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_18_18;
      Hi_10 = next_value_of_Hi_10;
      STATE_VARIABLE_A_0_13 = next_value_of_STATE_VARIABLE_A_0_13;
      STATE_VARIABLE_B_0_15 = next_value_of_STATE_VARIABLE_B_0_15;
      continue;
    }
    else
    {
      *STATE_VARIABLE_B_16 = STATE_VARIABLE_B_0_15;
      *STATE_VARIABLE_A_14 = STATE_VARIABLE_A_0_13;
    }
    break;
  }
}

void MR_CALL 
mercury__int__fold_down2_7_p_2(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_U_24,
  MR_Word P_8,
  MR_Integer Lo_9,
  MR_Integer Hi_10,
  MR_Box STATE_VARIABLE_A_0_13,
  MR_Box * STATE_VARIABLE_A_14,
  MR_Box STATE_VARIABLE_B_0_15,
  MR_Box * STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_9 <= Hi_10);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_17_17;
      MR_Box STATE_VARIABLE_B_18_18;
      MR_Integer Var_19;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1)));
      MR_Integer next_value_of_Hi_10;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      func_0(((MR_Box) P_8), ((MR_Box) (Hi_10)), STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_17_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_18_18);
      Var_19 = (Hi_10 - (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Hi_10 = Var_19;
      next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_17_17;
      next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_18_18;
      Hi_10 = next_value_of_Hi_10;
      STATE_VARIABLE_A_0_13 = next_value_of_STATE_VARIABLE_A_0_13;
      STATE_VARIABLE_B_0_15 = next_value_of_STATE_VARIABLE_B_0_15;
      continue;
    }
    else
    {
      *STATE_VARIABLE_B_16 = STATE_VARIABLE_B_0_15;
      *STATE_VARIABLE_A_14 = STATE_VARIABLE_A_0_13;
    }
    break;
  }
}

void MR_CALL 
mercury__int__fold_down2_7_p_1(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_U_24,
  MR_Word P_8,
  MR_Integer Lo_9,
  MR_Integer Hi_10,
  MR_Box STATE_VARIABLE_A_0_13,
  MR_Box * STATE_VARIABLE_A_14,
  MR_Box STATE_VARIABLE_B_0_15,
  MR_Box * STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_9 <= Hi_10);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_17_17;
      MR_Box STATE_VARIABLE_B_18_18;
      MR_Integer Var_19;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1)));
      MR_Integer next_value_of_Hi_10;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      func_0(((MR_Box) P_8), ((MR_Box) (Hi_10)), STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_17_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_18_18);
      Var_19 = (Hi_10 - (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Hi_10 = Var_19;
      next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_17_17;
      next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_18_18;
      Hi_10 = next_value_of_Hi_10;
      STATE_VARIABLE_A_0_13 = next_value_of_STATE_VARIABLE_A_0_13;
      STATE_VARIABLE_B_0_15 = next_value_of_STATE_VARIABLE_B_0_15;
      continue;
    }
    else
    {
      *STATE_VARIABLE_B_16 = STATE_VARIABLE_B_0_15;
      *STATE_VARIABLE_A_14 = STATE_VARIABLE_A_0_13;
    }
    break;
  }
}

void MR_CALL 
mercury__int__fold_down2_7_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_U_24,
  MR_Word P_8,
  MR_Integer Lo_9,
  MR_Integer Hi_10,
  MR_Box STATE_VARIABLE_A_0_13,
  MR_Box * STATE_VARIABLE_A_14,
  MR_Box STATE_VARIABLE_B_0_15,
  MR_Box * STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_9 <= Hi_10);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_17_17;
      MR_Box STATE_VARIABLE_B_18_18;
      MR_Integer Var_19;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1)));
      MR_Integer next_value_of_Hi_10;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      func_0(((MR_Box) P_8), ((MR_Box) (Hi_10)), STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_17_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_18_18);
      Var_19 = (Hi_10 - (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Hi_10 = Var_19;
      next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_17_17;
      next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_18_18;
      Hi_10 = next_value_of_Hi_10;
      STATE_VARIABLE_A_0_13 = next_value_of_STATE_VARIABLE_A_0_13;
      STATE_VARIABLE_B_0_15 = next_value_of_STATE_VARIABLE_B_0_15;
      continue;
    }
    else
    {
      *STATE_VARIABLE_B_16 = STATE_VARIABLE_B_0_15;
      *STATE_VARIABLE_A_14 = STATE_VARIABLE_A_0_13;
    }
    break;
  }
}

void MR_CALL 
mercury__int__fold_down_5_p_10(
  MR_Word TypeInfo_for_T_16,
  MR_Word P_6,
  MR_Integer Lo_7,
  MR_Integer Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_7 <= Hi_8);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_12_12;
      MR_Integer Var_13;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Integer next_value_of_Hi_8;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      func_0(((MR_Box) P_6), ((MR_Box) (Hi_8)), STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_12_12);
      Var_13 = (Hi_8 - (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Hi_8 = Var_13;
      next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_12_12;
      Hi_8 = next_value_of_Hi_8;
      STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
    break;
  }
}

void MR_CALL 
mercury__int__fold_down_5_p_9(
  MR_Word TypeInfo_for_T_16,
  MR_Word P_6,
  MR_Integer Lo_7,
  MR_Integer Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_7 <= Hi_8);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_12_12;
      MR_Integer Var_13;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Integer next_value_of_Hi_8;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      func_0(((MR_Box) P_6), ((MR_Box) (Hi_8)), STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_12_12);
      Var_13 = (Hi_8 - (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Hi_8 = Var_13;
      next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_12_12;
      Hi_8 = next_value_of_Hi_8;
      STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
    break;
  }
}

static void MR_CALL 
mercury__int__fold_down_5_p_8_1(
  void * env_ptr_arg)
{
  {
    struct mercury__int__fold_down_5_p_8_env_0_s * env_ptr = (struct mercury__int__fold_down_5_p_8_env_0_s *) env_ptr_arg;

    (env_ptr)->mercury__int__fold_down_5_p_8_env_0__Var_15 = (MR_Integer) 1;
    (env_ptr)->mercury__int__fold_down_5_p_8_env_0__Var_13 = ((env_ptr)->mercury__int__fold_down_5_p_8_env_0__Hi_8 - (env_ptr)->mercury__int__fold_down_5_p_8_env_0__Var_15);
    mercury__int__fold_down_5_p_8((env_ptr)->mercury__int__fold_down_5_p_8_env_0__TypeInfo_for_T_16, (env_ptr)->mercury__int__fold_down_5_p_8_env_0__P_6, (env_ptr)->mercury__int__fold_down_5_p_8_env_0__Lo_7, (env_ptr)->mercury__int__fold_down_5_p_8_env_0__Var_13, (env_ptr)->mercury__int__fold_down_5_p_8_env_0__STATE_VARIABLE_A_12_12, (env_ptr)->mercury__int__fold_down_5_p_8_env_0__STATE_VARIABLE_A_11, (env_ptr)->mercury__int__fold_down_5_p_8_env_0__cont, (env_ptr)->mercury__int__fold_down_5_p_8_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__int__fold_down_5_p_8(
  MR_Word TypeInfo_for_T_16,
  MR_Word P_6,
  MR_Integer Lo_7,
  MR_Integer Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__int__fold_down_5_p_8_env_0_s env;

    (env).mercury__int__fold_down_5_p_8_env_0__TypeInfo_for_T_16 = TypeInfo_for_T_16;
    (env).mercury__int__fold_down_5_p_8_env_0__P_6 = P_6;
    (env).mercury__int__fold_down_5_p_8_env_0__Lo_7 = Lo_7;
    (env).mercury__int__fold_down_5_p_8_env_0__Hi_8 = Hi_8;
    (env).mercury__int__fold_down_5_p_8_env_0__STATE_VARIABLE_A_11 = STATE_VARIABLE_A_11;
    (env).mercury__int__fold_down_5_p_8_env_0__cont = cont;
    (env).mercury__int__fold_down_5_p_8_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_bool succeeded = ((env).mercury__int__fold_down_5_p_8_env_0__Lo_7 <= (env).mercury__int__fold_down_5_p_8_env_0__Hi_8);

      if (succeeded)
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (env).mercury__int__fold_down_5_p_8_env_0__P_6, (MR_Integer) 1)));

        func_0(((MR_Box) (env).mercury__int__fold_down_5_p_8_env_0__P_6), ((MR_Box) ((env).mercury__int__fold_down_5_p_8_env_0__Hi_8)), STATE_VARIABLE_A_0_10, &(env).mercury__int__fold_down_5_p_8_env_0__STATE_VARIABLE_A_12_12, mercury__int__fold_down_5_p_8_1, &env);
      }
      else
      {
        *((env).mercury__int__fold_down_5_p_8_env_0__STATE_VARIABLE_A_11) = STATE_VARIABLE_A_0_10;
        ((env).mercury__int__fold_down_5_p_8_env_0__cont)((env).mercury__int__fold_down_5_p_8_env_0__cont_env_ptr);
      }
    }
  }
}

static void MR_CALL 
mercury__int__fold_down_5_p_7_1(
  void * env_ptr_arg)
{
  {
    struct mercury__int__fold_down_5_p_7_env_0_s * env_ptr = (struct mercury__int__fold_down_5_p_7_env_0_s *) env_ptr_arg;

    (env_ptr)->mercury__int__fold_down_5_p_7_env_0__Var_15 = (MR_Integer) 1;
    (env_ptr)->mercury__int__fold_down_5_p_7_env_0__Var_13 = ((env_ptr)->mercury__int__fold_down_5_p_7_env_0__Hi_8 - (env_ptr)->mercury__int__fold_down_5_p_7_env_0__Var_15);
    mercury__int__fold_down_5_p_7((env_ptr)->mercury__int__fold_down_5_p_7_env_0__TypeInfo_for_T_16, (env_ptr)->mercury__int__fold_down_5_p_7_env_0__P_6, (env_ptr)->mercury__int__fold_down_5_p_7_env_0__Lo_7, (env_ptr)->mercury__int__fold_down_5_p_7_env_0__Var_13, (env_ptr)->mercury__int__fold_down_5_p_7_env_0__STATE_VARIABLE_A_12_12, (env_ptr)->mercury__int__fold_down_5_p_7_env_0__STATE_VARIABLE_A_11, (env_ptr)->mercury__int__fold_down_5_p_7_env_0__cont, (env_ptr)->mercury__int__fold_down_5_p_7_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__int__fold_down_5_p_7(
  MR_Word TypeInfo_for_T_16,
  MR_Word P_6,
  MR_Integer Lo_7,
  MR_Integer Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__int__fold_down_5_p_7_env_0_s env;

    (env).mercury__int__fold_down_5_p_7_env_0__TypeInfo_for_T_16 = TypeInfo_for_T_16;
    (env).mercury__int__fold_down_5_p_7_env_0__P_6 = P_6;
    (env).mercury__int__fold_down_5_p_7_env_0__Lo_7 = Lo_7;
    (env).mercury__int__fold_down_5_p_7_env_0__Hi_8 = Hi_8;
    (env).mercury__int__fold_down_5_p_7_env_0__STATE_VARIABLE_A_11 = STATE_VARIABLE_A_11;
    (env).mercury__int__fold_down_5_p_7_env_0__cont = cont;
    (env).mercury__int__fold_down_5_p_7_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_bool succeeded = ((env).mercury__int__fold_down_5_p_7_env_0__Lo_7 <= (env).mercury__int__fold_down_5_p_7_env_0__Hi_8);

      if (succeeded)
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (env).mercury__int__fold_down_5_p_7_env_0__P_6, (MR_Integer) 1)));

        func_0(((MR_Box) (env).mercury__int__fold_down_5_p_7_env_0__P_6), ((MR_Box) ((env).mercury__int__fold_down_5_p_7_env_0__Hi_8)), STATE_VARIABLE_A_0_10, &(env).mercury__int__fold_down_5_p_7_env_0__STATE_VARIABLE_A_12_12, mercury__int__fold_down_5_p_7_1, &env);
      }
      else
      {
        *((env).mercury__int__fold_down_5_p_7_env_0__STATE_VARIABLE_A_11) = STATE_VARIABLE_A_0_10;
        ((env).mercury__int__fold_down_5_p_7_env_0__cont)((env).mercury__int__fold_down_5_p_7_env_0__cont_env_ptr);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__int__fold_down_5_p_6(
  MR_Word TypeInfo_for_T_16,
  MR_Word P_6,
  MR_Integer Lo_7,
  MR_Integer Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_7 <= Hi_8);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_12_12;
      MR_Integer Var_13;
      MR_Integer Var_15;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Integer next_value_of_Hi_8;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      succeeded = func_0(((MR_Box) P_6), ((MR_Box) (Hi_8)), STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_12_12);
      if (succeeded)
      {
        Var_15 = (MR_Integer) 1;
        Var_13 = (Hi_8 - Var_15);
        /* direct tailcall eliminated */
        next_value_of_Hi_8 = Var_13;
        next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_12_12;
        Hi_8 = next_value_of_Hi_8;
        STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__int__fold_down_5_p_5(
  MR_Word TypeInfo_for_T_16,
  MR_Word P_6,
  MR_Integer Lo_7,
  MR_Integer Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_7 <= Hi_8);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_12_12;
      MR_Integer Var_13;
      MR_Integer Var_15;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Integer next_value_of_Hi_8;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      succeeded = func_0(((MR_Box) P_6), ((MR_Box) (Hi_8)), STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_12_12);
      if (succeeded)
      {
        Var_15 = (MR_Integer) 1;
        Var_13 = (Hi_8 - Var_15);
        /* direct tailcall eliminated */
        next_value_of_Hi_8 = Var_13;
        next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_12_12;
        Hi_8 = next_value_of_Hi_8;
        STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__int__fold_down_5_p_4(
  MR_Word TypeInfo_for_T_16,
  MR_Word P_6,
  MR_Integer Lo_7,
  MR_Integer Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_7 <= Hi_8);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_12_12;
      MR_Integer Var_13;
      MR_Integer Var_15;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Integer next_value_of_Hi_8;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      succeeded = func_0(((MR_Box) P_6), ((MR_Box) (Hi_8)), STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_12_12);
      if (succeeded)
      {
        Var_15 = (MR_Integer) 1;
        Var_13 = (Hi_8 - Var_15);
        /* direct tailcall eliminated */
        next_value_of_Hi_8 = Var_13;
        next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_12_12;
        Hi_8 = next_value_of_Hi_8;
        STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__int__fold_down_5_p_3(
  MR_Word TypeInfo_for_T_16,
  MR_Word P_6,
  MR_Integer Lo_7,
  MR_Integer Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_7 <= Hi_8);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_12_12;
      MR_Integer Var_13;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Integer next_value_of_Hi_8;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      func_0(((MR_Box) P_6), ((MR_Box) (Hi_8)), STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_12_12);
      Var_13 = (Hi_8 - (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Hi_8 = Var_13;
      next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_12_12;
      Hi_8 = next_value_of_Hi_8;
      STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
    break;
  }
}

void MR_CALL 
mercury__int__fold_down_5_p_2(
  MR_Word TypeInfo_for_T_16,
  MR_Word P_6,
  MR_Integer Lo_7,
  MR_Integer Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_7 <= Hi_8);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_12_12;
      MR_Integer Var_13;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Integer next_value_of_Hi_8;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      func_0(((MR_Box) P_6), ((MR_Box) (Hi_8)), STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_12_12);
      Var_13 = (Hi_8 - (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Hi_8 = Var_13;
      next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_12_12;
      Hi_8 = next_value_of_Hi_8;
      STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
    break;
  }
}

void MR_CALL 
mercury__int__fold_down_5_p_1(
  MR_Word TypeInfo_for_T_16,
  MR_Word P_6,
  MR_Integer Lo_7,
  MR_Integer Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_7 <= Hi_8);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_12_12;
      MR_Integer Var_13;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Integer next_value_of_Hi_8;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      func_0(((MR_Box) P_6), ((MR_Box) (Hi_8)), STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_12_12);
      Var_13 = (Hi_8 - (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Hi_8 = Var_13;
      next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_12_12;
      Hi_8 = next_value_of_Hi_8;
      STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
    break;
  }
}

void MR_CALL 
mercury__int__fold_down_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word P_6,
  MR_Integer Lo_7,
  MR_Integer Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_7 <= Hi_8);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_12_12;
      MR_Integer Var_13;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Integer next_value_of_Hi_8;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      func_0(((MR_Box) P_6), ((MR_Box) (Hi_8)), STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_12_12);
      Var_13 = (Hi_8 - (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Hi_8 = Var_13;
      next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_12_12;
      Hi_8 = next_value_of_Hi_8;
      STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
    break;
  }
}

MR_Box MR_CALL 
mercury__int__fold_down_4_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word F_6,
  MR_Integer Lo_7,
  MR_Integer Hi_8,
  MR_Box A_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_7 <= Hi_8);
    MR_Box HeadVar__5_5;

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Integer Var_10 = (Hi_8 - (MR_Integer) 1);
      MR_Box Var_12;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), F_6, (MR_Integer) 1)));
      MR_Integer next_value_of_Hi_8;
      MR_Box next_value_of_A_9;

      Var_12 = func_0(((MR_Box) F_6), ((MR_Box) (Hi_8)), A_9);
      /* direct tailcall eliminated */
      next_value_of_Hi_8 = Var_10;
      next_value_of_A_9 = Var_12;
      Hi_8 = next_value_of_Hi_8;
      A_9 = next_value_of_A_9;
      continue;
    }
    else
      HeadVar__5_5 = A_9;
    return HeadVar__5_5;
    break;
  }
}

static void MR_CALL 
mercury__int__fold_up3_9_p_9_1(
  void * env_ptr_arg)
{
  {
    struct mercury__int__fold_up3_9_p_9_env_0_s * env_ptr = (struct mercury__int__fold_up3_9_p_9_env_0_s *) env_ptr_arg;

    (env_ptr)->mercury__int__fold_up3_9_p_9_env_0__Var_29 = (MR_Integer) 1;
    (env_ptr)->mercury__int__fold_up3_9_p_9_env_0__Var_25 = ((env_ptr)->mercury__int__fold_up3_9_p_9_env_0__Lo_11 + (env_ptr)->mercury__int__fold_up3_9_p_9_env_0__Var_29);
    mercury__int__fold_up3_9_p_9((env_ptr)->mercury__int__fold_up3_9_p_9_env_0__TypeInfo_for_T_30, (env_ptr)->mercury__int__fold_up3_9_p_9_env_0__TypeInfo_for_U_31, (env_ptr)->mercury__int__fold_up3_9_p_9_env_0__TypeInfo_for_V_32, (env_ptr)->mercury__int__fold_up3_9_p_9_env_0__P_10, (env_ptr)->mercury__int__fold_up3_9_p_9_env_0__Var_25, (env_ptr)->mercury__int__fold_up3_9_p_9_env_0__Hi_12, (env_ptr)->mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_A_22_22, (env_ptr)->mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_A_17, (env_ptr)->mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_B_23_23, (env_ptr)->mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_B_19, (env_ptr)->mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_C_24_24, (env_ptr)->mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_C_21, (env_ptr)->mercury__int__fold_up3_9_p_9_env_0__cont, (env_ptr)->mercury__int__fold_up3_9_p_9_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__int__fold_up3_9_p_9(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_U_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word P_10,
  MR_Integer Lo_11,
  MR_Integer Hi_12,
  MR_Box STATE_VARIABLE_A_0_16,
  MR_Box * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_B_0_18,
  MR_Box * STATE_VARIABLE_B_19,
  MR_Box STATE_VARIABLE_C_0_20,
  MR_Box * STATE_VARIABLE_C_21,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__int__fold_up3_9_p_9_env_0_s env;

    (env).mercury__int__fold_up3_9_p_9_env_0__TypeInfo_for_T_30 = TypeInfo_for_T_30;
    (env).mercury__int__fold_up3_9_p_9_env_0__TypeInfo_for_U_31 = TypeInfo_for_U_31;
    (env).mercury__int__fold_up3_9_p_9_env_0__TypeInfo_for_V_32 = TypeInfo_for_V_32;
    (env).mercury__int__fold_up3_9_p_9_env_0__P_10 = P_10;
    (env).mercury__int__fold_up3_9_p_9_env_0__Lo_11 = Lo_11;
    (env).mercury__int__fold_up3_9_p_9_env_0__Hi_12 = Hi_12;
    (env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_A_17 = STATE_VARIABLE_A_17;
    (env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_B_19 = STATE_VARIABLE_B_19;
    (env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_C_21 = STATE_VARIABLE_C_21;
    (env).mercury__int__fold_up3_9_p_9_env_0__cont = cont;
    (env).mercury__int__fold_up3_9_p_9_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_bool succeeded = ((env).mercury__int__fold_up3_9_p_9_env_0__Lo_11 <= (env).mercury__int__fold_up3_9_p_9_env_0__Hi_12);

      if (succeeded)
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (env).mercury__int__fold_up3_9_p_9_env_0__P_10, (MR_Integer) 1)));

        func_0(((MR_Box) (env).mercury__int__fold_up3_9_p_9_env_0__P_10), ((MR_Box) ((env).mercury__int__fold_up3_9_p_9_env_0__Lo_11)), STATE_VARIABLE_A_0_16, &(env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_18, &(env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_B_23_23, STATE_VARIABLE_C_0_20, &(env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_C_24_24, mercury__int__fold_up3_9_p_9_1, &env);
      }
      else
      {
        *((env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_C_21) = STATE_VARIABLE_C_0_20;
        *((env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_B_19) = STATE_VARIABLE_B_0_18;
        *((env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_A_17) = STATE_VARIABLE_A_0_16;
        ((env).mercury__int__fold_up3_9_p_9_env_0__cont)((env).mercury__int__fold_up3_9_p_9_env_0__cont_env_ptr);
      }
    }
  }
}

static void MR_CALL 
mercury__int__fold_up3_9_p_8_1(
  void * env_ptr_arg)
{
  {
    struct mercury__int__fold_up3_9_p_8_env_0_s * env_ptr = (struct mercury__int__fold_up3_9_p_8_env_0_s *) env_ptr_arg;

    (env_ptr)->mercury__int__fold_up3_9_p_8_env_0__Var_29 = (MR_Integer) 1;
    (env_ptr)->mercury__int__fold_up3_9_p_8_env_0__Var_25 = ((env_ptr)->mercury__int__fold_up3_9_p_8_env_0__Lo_11 + (env_ptr)->mercury__int__fold_up3_9_p_8_env_0__Var_29);
    mercury__int__fold_up3_9_p_8((env_ptr)->mercury__int__fold_up3_9_p_8_env_0__TypeInfo_for_T_30, (env_ptr)->mercury__int__fold_up3_9_p_8_env_0__TypeInfo_for_U_31, (env_ptr)->mercury__int__fold_up3_9_p_8_env_0__TypeInfo_for_V_32, (env_ptr)->mercury__int__fold_up3_9_p_8_env_0__P_10, (env_ptr)->mercury__int__fold_up3_9_p_8_env_0__Var_25, (env_ptr)->mercury__int__fold_up3_9_p_8_env_0__Hi_12, (env_ptr)->mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_A_22_22, (env_ptr)->mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_A_17, (env_ptr)->mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_B_23_23, (env_ptr)->mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_B_19, (env_ptr)->mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_C_24_24, (env_ptr)->mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_C_21, (env_ptr)->mercury__int__fold_up3_9_p_8_env_0__cont, (env_ptr)->mercury__int__fold_up3_9_p_8_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__int__fold_up3_9_p_8(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_U_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word P_10,
  MR_Integer Lo_11,
  MR_Integer Hi_12,
  MR_Box STATE_VARIABLE_A_0_16,
  MR_Box * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_B_0_18,
  MR_Box * STATE_VARIABLE_B_19,
  MR_Box STATE_VARIABLE_C_0_20,
  MR_Box * STATE_VARIABLE_C_21,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__int__fold_up3_9_p_8_env_0_s env;

    (env).mercury__int__fold_up3_9_p_8_env_0__TypeInfo_for_T_30 = TypeInfo_for_T_30;
    (env).mercury__int__fold_up3_9_p_8_env_0__TypeInfo_for_U_31 = TypeInfo_for_U_31;
    (env).mercury__int__fold_up3_9_p_8_env_0__TypeInfo_for_V_32 = TypeInfo_for_V_32;
    (env).mercury__int__fold_up3_9_p_8_env_0__P_10 = P_10;
    (env).mercury__int__fold_up3_9_p_8_env_0__Lo_11 = Lo_11;
    (env).mercury__int__fold_up3_9_p_8_env_0__Hi_12 = Hi_12;
    (env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_A_17 = STATE_VARIABLE_A_17;
    (env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_B_19 = STATE_VARIABLE_B_19;
    (env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_C_21 = STATE_VARIABLE_C_21;
    (env).mercury__int__fold_up3_9_p_8_env_0__cont = cont;
    (env).mercury__int__fold_up3_9_p_8_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_bool succeeded = ((env).mercury__int__fold_up3_9_p_8_env_0__Lo_11 <= (env).mercury__int__fold_up3_9_p_8_env_0__Hi_12);

      if (succeeded)
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (env).mercury__int__fold_up3_9_p_8_env_0__P_10, (MR_Integer) 1)));

        func_0(((MR_Box) (env).mercury__int__fold_up3_9_p_8_env_0__P_10), ((MR_Box) ((env).mercury__int__fold_up3_9_p_8_env_0__Lo_11)), STATE_VARIABLE_A_0_16, &(env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_18, &(env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_B_23_23, STATE_VARIABLE_C_0_20, &(env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_C_24_24, mercury__int__fold_up3_9_p_8_1, &env);
      }
      else
      {
        *((env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_C_21) = STATE_VARIABLE_C_0_20;
        *((env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_B_19) = STATE_VARIABLE_B_0_18;
        *((env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_A_17) = STATE_VARIABLE_A_0_16;
        ((env).mercury__int__fold_up3_9_p_8_env_0__cont)((env).mercury__int__fold_up3_9_p_8_env_0__cont_env_ptr);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__int__fold_up3_9_p_7(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_U_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word P_10,
  MR_Integer Lo_11,
  MR_Integer Hi_12,
  MR_Box STATE_VARIABLE_A_0_16,
  MR_Box * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_B_0_18,
  MR_Box * STATE_VARIABLE_B_19,
  MR_Box STATE_VARIABLE_C_0_20,
  MR_Box * STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_11 <= Hi_12);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_22_22;
      MR_Box STATE_VARIABLE_B_23_23;
      MR_Box STATE_VARIABLE_C_24_24;
      MR_Integer Var_25;
      MR_Integer Var_29;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_10, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_11;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      succeeded = func_0(((MR_Box) P_10), ((MR_Box) (Lo_11)), STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_23_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_24_24);
      if (succeeded)
      {
        Var_29 = (MR_Integer) 1;
        Var_25 = (Lo_11 + Var_29);
        /* direct tailcall eliminated */
        next_value_of_Lo_11 = Var_25;
        next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_22_22;
        next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_23_23;
        next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_24_24;
        Lo_11 = next_value_of_Lo_11;
        STATE_VARIABLE_A_0_16 = next_value_of_STATE_VARIABLE_A_0_16;
        STATE_VARIABLE_B_0_18 = next_value_of_STATE_VARIABLE_B_0_18;
        STATE_VARIABLE_C_0_20 = next_value_of_STATE_VARIABLE_C_0_20;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_C_21 = STATE_VARIABLE_C_0_20;
      *STATE_VARIABLE_B_19 = STATE_VARIABLE_B_0_18;
      *STATE_VARIABLE_A_17 = STATE_VARIABLE_A_0_16;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__int__fold_up3_9_p_6(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_U_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word P_10,
  MR_Integer Lo_11,
  MR_Integer Hi_12,
  MR_Box STATE_VARIABLE_A_0_16,
  MR_Box * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_B_0_18,
  MR_Box * STATE_VARIABLE_B_19,
  MR_Box STATE_VARIABLE_C_0_20,
  MR_Box * STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_11 <= Hi_12);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_22_22;
      MR_Box STATE_VARIABLE_B_23_23;
      MR_Box STATE_VARIABLE_C_24_24;
      MR_Integer Var_25;
      MR_Integer Var_29;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_10, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_11;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      succeeded = func_0(((MR_Box) P_10), ((MR_Box) (Lo_11)), STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_23_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_24_24);
      if (succeeded)
      {
        Var_29 = (MR_Integer) 1;
        Var_25 = (Lo_11 + Var_29);
        /* direct tailcall eliminated */
        next_value_of_Lo_11 = Var_25;
        next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_22_22;
        next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_23_23;
        next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_24_24;
        Lo_11 = next_value_of_Lo_11;
        STATE_VARIABLE_A_0_16 = next_value_of_STATE_VARIABLE_A_0_16;
        STATE_VARIABLE_B_0_18 = next_value_of_STATE_VARIABLE_B_0_18;
        STATE_VARIABLE_C_0_20 = next_value_of_STATE_VARIABLE_C_0_20;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_C_21 = STATE_VARIABLE_C_0_20;
      *STATE_VARIABLE_B_19 = STATE_VARIABLE_B_0_18;
      *STATE_VARIABLE_A_17 = STATE_VARIABLE_A_0_16;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__int__fold_up3_9_p_5(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_U_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word P_10,
  MR_Integer Lo_11,
  MR_Integer Hi_12,
  MR_Box STATE_VARIABLE_A_0_16,
  MR_Box * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_B_0_18,
  MR_Box * STATE_VARIABLE_B_19,
  MR_Box STATE_VARIABLE_C_0_20,
  MR_Box * STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_11 <= Hi_12);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_22_22;
      MR_Box STATE_VARIABLE_B_23_23;
      MR_Box STATE_VARIABLE_C_24_24;
      MR_Integer Var_25;
      MR_Integer Var_29;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_10, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_11;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      succeeded = func_0(((MR_Box) P_10), ((MR_Box) (Lo_11)), STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_23_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_24_24);
      if (succeeded)
      {
        Var_29 = (MR_Integer) 1;
        Var_25 = (Lo_11 + Var_29);
        /* direct tailcall eliminated */
        next_value_of_Lo_11 = Var_25;
        next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_22_22;
        next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_23_23;
        next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_24_24;
        Lo_11 = next_value_of_Lo_11;
        STATE_VARIABLE_A_0_16 = next_value_of_STATE_VARIABLE_A_0_16;
        STATE_VARIABLE_B_0_18 = next_value_of_STATE_VARIABLE_B_0_18;
        STATE_VARIABLE_C_0_20 = next_value_of_STATE_VARIABLE_C_0_20;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_C_21 = STATE_VARIABLE_C_0_20;
      *STATE_VARIABLE_B_19 = STATE_VARIABLE_B_0_18;
      *STATE_VARIABLE_A_17 = STATE_VARIABLE_A_0_16;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__int__fold_up3_9_p_4(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_U_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word P_10,
  MR_Integer Lo_11,
  MR_Integer Hi_12,
  MR_Box STATE_VARIABLE_A_0_16,
  MR_Box * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_B_0_18,
  MR_Box * STATE_VARIABLE_B_19,
  MR_Box STATE_VARIABLE_C_0_20,
  MR_Box * STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_11 <= Hi_12);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_22_22;
      MR_Box STATE_VARIABLE_B_23_23;
      MR_Box STATE_VARIABLE_C_24_24;
      MR_Integer Var_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_10, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_11;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      func_0(((MR_Box) P_10), ((MR_Box) (Lo_11)), STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_23_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_24_24);
      Var_25 = (Lo_11 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Lo_11 = Var_25;
      next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_22_22;
      next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_23_23;
      next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_24_24;
      Lo_11 = next_value_of_Lo_11;
      STATE_VARIABLE_A_0_16 = next_value_of_STATE_VARIABLE_A_0_16;
      STATE_VARIABLE_B_0_18 = next_value_of_STATE_VARIABLE_B_0_18;
      STATE_VARIABLE_C_0_20 = next_value_of_STATE_VARIABLE_C_0_20;
      continue;
    }
    else
    {
      *STATE_VARIABLE_C_21 = STATE_VARIABLE_C_0_20;
      *STATE_VARIABLE_B_19 = STATE_VARIABLE_B_0_18;
      *STATE_VARIABLE_A_17 = STATE_VARIABLE_A_0_16;
    }
    break;
  }
}

void MR_CALL 
mercury__int__fold_up3_9_p_3(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_U_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word P_10,
  MR_Integer Lo_11,
  MR_Integer Hi_12,
  MR_Box STATE_VARIABLE_A_0_16,
  MR_Box * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_B_0_18,
  MR_Box * STATE_VARIABLE_B_19,
  MR_Box STATE_VARIABLE_C_0_20,
  MR_Box * STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_11 <= Hi_12);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_22_22;
      MR_Box STATE_VARIABLE_B_23_23;
      MR_Box STATE_VARIABLE_C_24_24;
      MR_Integer Var_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_10, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_11;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      func_0(((MR_Box) P_10), ((MR_Box) (Lo_11)), STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_23_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_24_24);
      Var_25 = (Lo_11 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Lo_11 = Var_25;
      next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_22_22;
      next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_23_23;
      next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_24_24;
      Lo_11 = next_value_of_Lo_11;
      STATE_VARIABLE_A_0_16 = next_value_of_STATE_VARIABLE_A_0_16;
      STATE_VARIABLE_B_0_18 = next_value_of_STATE_VARIABLE_B_0_18;
      STATE_VARIABLE_C_0_20 = next_value_of_STATE_VARIABLE_C_0_20;
      continue;
    }
    else
    {
      *STATE_VARIABLE_C_21 = STATE_VARIABLE_C_0_20;
      *STATE_VARIABLE_B_19 = STATE_VARIABLE_B_0_18;
      *STATE_VARIABLE_A_17 = STATE_VARIABLE_A_0_16;
    }
    break;
  }
}

void MR_CALL 
mercury__int__fold_up3_9_p_2(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_U_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word P_10,
  MR_Integer Lo_11,
  MR_Integer Hi_12,
  MR_Box STATE_VARIABLE_A_0_16,
  MR_Box * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_B_0_18,
  MR_Box * STATE_VARIABLE_B_19,
  MR_Box STATE_VARIABLE_C_0_20,
  MR_Box * STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_11 <= Hi_12);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_22_22;
      MR_Box STATE_VARIABLE_B_23_23;
      MR_Box STATE_VARIABLE_C_24_24;
      MR_Integer Var_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_10, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_11;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      func_0(((MR_Box) P_10), ((MR_Box) (Lo_11)), STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_23_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_24_24);
      Var_25 = (Lo_11 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Lo_11 = Var_25;
      next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_22_22;
      next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_23_23;
      next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_24_24;
      Lo_11 = next_value_of_Lo_11;
      STATE_VARIABLE_A_0_16 = next_value_of_STATE_VARIABLE_A_0_16;
      STATE_VARIABLE_B_0_18 = next_value_of_STATE_VARIABLE_B_0_18;
      STATE_VARIABLE_C_0_20 = next_value_of_STATE_VARIABLE_C_0_20;
      continue;
    }
    else
    {
      *STATE_VARIABLE_C_21 = STATE_VARIABLE_C_0_20;
      *STATE_VARIABLE_B_19 = STATE_VARIABLE_B_0_18;
      *STATE_VARIABLE_A_17 = STATE_VARIABLE_A_0_16;
    }
    break;
  }
}

void MR_CALL 
mercury__int__fold_up3_9_p_1(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_U_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word P_10,
  MR_Integer Lo_11,
  MR_Integer Hi_12,
  MR_Box STATE_VARIABLE_A_0_16,
  MR_Box * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_B_0_18,
  MR_Box * STATE_VARIABLE_B_19,
  MR_Box STATE_VARIABLE_C_0_20,
  MR_Box * STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_11 <= Hi_12);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_22_22;
      MR_Box STATE_VARIABLE_B_23_23;
      MR_Box STATE_VARIABLE_C_24_24;
      MR_Integer Var_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_10, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_11;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      func_0(((MR_Box) P_10), ((MR_Box) (Lo_11)), STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_23_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_24_24);
      Var_25 = (Lo_11 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Lo_11 = Var_25;
      next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_22_22;
      next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_23_23;
      next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_24_24;
      Lo_11 = next_value_of_Lo_11;
      STATE_VARIABLE_A_0_16 = next_value_of_STATE_VARIABLE_A_0_16;
      STATE_VARIABLE_B_0_18 = next_value_of_STATE_VARIABLE_B_0_18;
      STATE_VARIABLE_C_0_20 = next_value_of_STATE_VARIABLE_C_0_20;
      continue;
    }
    else
    {
      *STATE_VARIABLE_C_21 = STATE_VARIABLE_C_0_20;
      *STATE_VARIABLE_B_19 = STATE_VARIABLE_B_0_18;
      *STATE_VARIABLE_A_17 = STATE_VARIABLE_A_0_16;
    }
    break;
  }
}

void MR_CALL 
mercury__int__fold_up3_9_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_U_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word P_10,
  MR_Integer Lo_11,
  MR_Integer Hi_12,
  MR_Box STATE_VARIABLE_A_0_16,
  MR_Box * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_B_0_18,
  MR_Box * STATE_VARIABLE_B_19,
  MR_Box STATE_VARIABLE_C_0_20,
  MR_Box * STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_11 <= Hi_12);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_22_22;
      MR_Box STATE_VARIABLE_B_23_23;
      MR_Box STATE_VARIABLE_C_24_24;
      MR_Integer Var_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_10, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_11;
      MR_Box next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_B_0_18;
      MR_Box next_value_of_STATE_VARIABLE_C_0_20;

      func_0(((MR_Box) P_10), ((MR_Box) (Lo_11)), STATE_VARIABLE_A_0_16, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_18, &STATE_VARIABLE_B_23_23, STATE_VARIABLE_C_0_20, &STATE_VARIABLE_C_24_24);
      Var_25 = (Lo_11 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Lo_11 = Var_25;
      next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_22_22;
      next_value_of_STATE_VARIABLE_B_0_18 = STATE_VARIABLE_B_23_23;
      next_value_of_STATE_VARIABLE_C_0_20 = STATE_VARIABLE_C_24_24;
      Lo_11 = next_value_of_Lo_11;
      STATE_VARIABLE_A_0_16 = next_value_of_STATE_VARIABLE_A_0_16;
      STATE_VARIABLE_B_0_18 = next_value_of_STATE_VARIABLE_B_0_18;
      STATE_VARIABLE_C_0_20 = next_value_of_STATE_VARIABLE_C_0_20;
      continue;
    }
    else
    {
      *STATE_VARIABLE_C_21 = STATE_VARIABLE_C_0_20;
      *STATE_VARIABLE_B_19 = STATE_VARIABLE_B_0_18;
      *STATE_VARIABLE_A_17 = STATE_VARIABLE_A_0_16;
    }
    break;
  }
}

static void MR_CALL 
mercury__int__fold_up2_7_p_9_1(
  void * env_ptr_arg)
{
  {
    struct mercury__int__fold_up2_7_p_9_env_0_s * env_ptr = (struct mercury__int__fold_up2_7_p_9_env_0_s *) env_ptr_arg;

    (env_ptr)->mercury__int__fold_up2_7_p_9_env_0__Var_22 = (MR_Integer) 1;
    (env_ptr)->mercury__int__fold_up2_7_p_9_env_0__Var_19 = ((env_ptr)->mercury__int__fold_up2_7_p_9_env_0__Lo_9 + (env_ptr)->mercury__int__fold_up2_7_p_9_env_0__Var_22);
    mercury__int__fold_up2_7_p_9((env_ptr)->mercury__int__fold_up2_7_p_9_env_0__TypeInfo_for_T_23, (env_ptr)->mercury__int__fold_up2_7_p_9_env_0__TypeInfo_for_U_24, (env_ptr)->mercury__int__fold_up2_7_p_9_env_0__P_8, (env_ptr)->mercury__int__fold_up2_7_p_9_env_0__Var_19, (env_ptr)->mercury__int__fold_up2_7_p_9_env_0__Hi_10, (env_ptr)->mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_A_17_17, (env_ptr)->mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_A_14, (env_ptr)->mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_B_18_18, (env_ptr)->mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_B_16, (env_ptr)->mercury__int__fold_up2_7_p_9_env_0__cont, (env_ptr)->mercury__int__fold_up2_7_p_9_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__int__fold_up2_7_p_9(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_U_24,
  MR_Word P_8,
  MR_Integer Lo_9,
  MR_Integer Hi_10,
  MR_Box STATE_VARIABLE_A_0_13,
  MR_Box * STATE_VARIABLE_A_14,
  MR_Box STATE_VARIABLE_B_0_15,
  MR_Box * STATE_VARIABLE_B_16,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__int__fold_up2_7_p_9_env_0_s env;

    (env).mercury__int__fold_up2_7_p_9_env_0__TypeInfo_for_T_23 = TypeInfo_for_T_23;
    (env).mercury__int__fold_up2_7_p_9_env_0__TypeInfo_for_U_24 = TypeInfo_for_U_24;
    (env).mercury__int__fold_up2_7_p_9_env_0__P_8 = P_8;
    (env).mercury__int__fold_up2_7_p_9_env_0__Lo_9 = Lo_9;
    (env).mercury__int__fold_up2_7_p_9_env_0__Hi_10 = Hi_10;
    (env).mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_A_14 = STATE_VARIABLE_A_14;
    (env).mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_B_16 = STATE_VARIABLE_B_16;
    (env).mercury__int__fold_up2_7_p_9_env_0__cont = cont;
    (env).mercury__int__fold_up2_7_p_9_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_bool succeeded = ((env).mercury__int__fold_up2_7_p_9_env_0__Lo_9 <= (env).mercury__int__fold_up2_7_p_9_env_0__Hi_10);

      if (succeeded)
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (env).mercury__int__fold_up2_7_p_9_env_0__P_8, (MR_Integer) 1)));

        func_0(((MR_Box) (env).mercury__int__fold_up2_7_p_9_env_0__P_8), ((MR_Box) ((env).mercury__int__fold_up2_7_p_9_env_0__Lo_9)), STATE_VARIABLE_A_0_13, &(env).mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_A_17_17, STATE_VARIABLE_B_0_15, &(env).mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_B_18_18, mercury__int__fold_up2_7_p_9_1, &env);
      }
      else
      {
        *((env).mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_B_16) = STATE_VARIABLE_B_0_15;
        *((env).mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_A_14) = STATE_VARIABLE_A_0_13;
        ((env).mercury__int__fold_up2_7_p_9_env_0__cont)((env).mercury__int__fold_up2_7_p_9_env_0__cont_env_ptr);
      }
    }
  }
}

static void MR_CALL 
mercury__int__fold_up2_7_p_8_1(
  void * env_ptr_arg)
{
  {
    struct mercury__int__fold_up2_7_p_8_env_0_s * env_ptr = (struct mercury__int__fold_up2_7_p_8_env_0_s *) env_ptr_arg;

    (env_ptr)->mercury__int__fold_up2_7_p_8_env_0__Var_22 = (MR_Integer) 1;
    (env_ptr)->mercury__int__fold_up2_7_p_8_env_0__Var_19 = ((env_ptr)->mercury__int__fold_up2_7_p_8_env_0__Lo_9 + (env_ptr)->mercury__int__fold_up2_7_p_8_env_0__Var_22);
    mercury__int__fold_up2_7_p_8((env_ptr)->mercury__int__fold_up2_7_p_8_env_0__TypeInfo_for_T_23, (env_ptr)->mercury__int__fold_up2_7_p_8_env_0__TypeInfo_for_U_24, (env_ptr)->mercury__int__fold_up2_7_p_8_env_0__P_8, (env_ptr)->mercury__int__fold_up2_7_p_8_env_0__Var_19, (env_ptr)->mercury__int__fold_up2_7_p_8_env_0__Hi_10, (env_ptr)->mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_A_17_17, (env_ptr)->mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_A_14, (env_ptr)->mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_B_18_18, (env_ptr)->mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_B_16, (env_ptr)->mercury__int__fold_up2_7_p_8_env_0__cont, (env_ptr)->mercury__int__fold_up2_7_p_8_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__int__fold_up2_7_p_8(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_U_24,
  MR_Word P_8,
  MR_Integer Lo_9,
  MR_Integer Hi_10,
  MR_Box STATE_VARIABLE_A_0_13,
  MR_Box * STATE_VARIABLE_A_14,
  MR_Box STATE_VARIABLE_B_0_15,
  MR_Box * STATE_VARIABLE_B_16,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__int__fold_up2_7_p_8_env_0_s env;

    (env).mercury__int__fold_up2_7_p_8_env_0__TypeInfo_for_T_23 = TypeInfo_for_T_23;
    (env).mercury__int__fold_up2_7_p_8_env_0__TypeInfo_for_U_24 = TypeInfo_for_U_24;
    (env).mercury__int__fold_up2_7_p_8_env_0__P_8 = P_8;
    (env).mercury__int__fold_up2_7_p_8_env_0__Lo_9 = Lo_9;
    (env).mercury__int__fold_up2_7_p_8_env_0__Hi_10 = Hi_10;
    (env).mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_A_14 = STATE_VARIABLE_A_14;
    (env).mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_B_16 = STATE_VARIABLE_B_16;
    (env).mercury__int__fold_up2_7_p_8_env_0__cont = cont;
    (env).mercury__int__fold_up2_7_p_8_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_bool succeeded = ((env).mercury__int__fold_up2_7_p_8_env_0__Lo_9 <= (env).mercury__int__fold_up2_7_p_8_env_0__Hi_10);

      if (succeeded)
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (env).mercury__int__fold_up2_7_p_8_env_0__P_8, (MR_Integer) 1)));

        func_0(((MR_Box) (env).mercury__int__fold_up2_7_p_8_env_0__P_8), ((MR_Box) ((env).mercury__int__fold_up2_7_p_8_env_0__Lo_9)), STATE_VARIABLE_A_0_13, &(env).mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_A_17_17, STATE_VARIABLE_B_0_15, &(env).mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_B_18_18, mercury__int__fold_up2_7_p_8_1, &env);
      }
      else
      {
        *((env).mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_B_16) = STATE_VARIABLE_B_0_15;
        *((env).mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_A_14) = STATE_VARIABLE_A_0_13;
        ((env).mercury__int__fold_up2_7_p_8_env_0__cont)((env).mercury__int__fold_up2_7_p_8_env_0__cont_env_ptr);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__int__fold_up2_7_p_7(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_U_24,
  MR_Word P_8,
  MR_Integer Lo_9,
  MR_Integer Hi_10,
  MR_Box STATE_VARIABLE_A_0_13,
  MR_Box * STATE_VARIABLE_A_14,
  MR_Box STATE_VARIABLE_B_0_15,
  MR_Box * STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_9 <= Hi_10);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_17_17;
      MR_Box STATE_VARIABLE_B_18_18;
      MR_Integer Var_19;
      MR_Integer Var_22;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      succeeded = func_0(((MR_Box) P_8), ((MR_Box) (Lo_9)), STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_17_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_18_18);
      if (succeeded)
      {
        Var_22 = (MR_Integer) 1;
        Var_19 = (Lo_9 + Var_22);
        /* direct tailcall eliminated */
        next_value_of_Lo_9 = Var_19;
        next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_17_17;
        next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_18_18;
        Lo_9 = next_value_of_Lo_9;
        STATE_VARIABLE_A_0_13 = next_value_of_STATE_VARIABLE_A_0_13;
        STATE_VARIABLE_B_0_15 = next_value_of_STATE_VARIABLE_B_0_15;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_B_16 = STATE_VARIABLE_B_0_15;
      *STATE_VARIABLE_A_14 = STATE_VARIABLE_A_0_13;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__int__fold_up2_7_p_6(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_U_24,
  MR_Word P_8,
  MR_Integer Lo_9,
  MR_Integer Hi_10,
  MR_Box STATE_VARIABLE_A_0_13,
  MR_Box * STATE_VARIABLE_A_14,
  MR_Box STATE_VARIABLE_B_0_15,
  MR_Box * STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_9 <= Hi_10);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_17_17;
      MR_Box STATE_VARIABLE_B_18_18;
      MR_Integer Var_19;
      MR_Integer Var_22;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      succeeded = func_0(((MR_Box) P_8), ((MR_Box) (Lo_9)), STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_17_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_18_18);
      if (succeeded)
      {
        Var_22 = (MR_Integer) 1;
        Var_19 = (Lo_9 + Var_22);
        /* direct tailcall eliminated */
        next_value_of_Lo_9 = Var_19;
        next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_17_17;
        next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_18_18;
        Lo_9 = next_value_of_Lo_9;
        STATE_VARIABLE_A_0_13 = next_value_of_STATE_VARIABLE_A_0_13;
        STATE_VARIABLE_B_0_15 = next_value_of_STATE_VARIABLE_B_0_15;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_B_16 = STATE_VARIABLE_B_0_15;
      *STATE_VARIABLE_A_14 = STATE_VARIABLE_A_0_13;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__int__fold_up2_7_p_5(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_U_24,
  MR_Word P_8,
  MR_Integer Lo_9,
  MR_Integer Hi_10,
  MR_Box STATE_VARIABLE_A_0_13,
  MR_Box * STATE_VARIABLE_A_14,
  MR_Box STATE_VARIABLE_B_0_15,
  MR_Box * STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_9 <= Hi_10);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_17_17;
      MR_Box STATE_VARIABLE_B_18_18;
      MR_Integer Var_19;
      MR_Integer Var_22;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      succeeded = func_0(((MR_Box) P_8), ((MR_Box) (Lo_9)), STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_17_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_18_18);
      if (succeeded)
      {
        Var_22 = (MR_Integer) 1;
        Var_19 = (Lo_9 + Var_22);
        /* direct tailcall eliminated */
        next_value_of_Lo_9 = Var_19;
        next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_17_17;
        next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_18_18;
        Lo_9 = next_value_of_Lo_9;
        STATE_VARIABLE_A_0_13 = next_value_of_STATE_VARIABLE_A_0_13;
        STATE_VARIABLE_B_0_15 = next_value_of_STATE_VARIABLE_B_0_15;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_B_16 = STATE_VARIABLE_B_0_15;
      *STATE_VARIABLE_A_14 = STATE_VARIABLE_A_0_13;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__int__fold_up2_7_p_4(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_U_24,
  MR_Word P_8,
  MR_Integer Lo_9,
  MR_Integer Hi_10,
  MR_Box STATE_VARIABLE_A_0_13,
  MR_Box * STATE_VARIABLE_A_14,
  MR_Box STATE_VARIABLE_B_0_15,
  MR_Box * STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_9 <= Hi_10);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_17_17;
      MR_Box STATE_VARIABLE_B_18_18;
      MR_Integer Var_19;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      func_0(((MR_Box) P_8), ((MR_Box) (Lo_9)), STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_17_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_18_18);
      Var_19 = (Lo_9 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Lo_9 = Var_19;
      next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_17_17;
      next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_18_18;
      Lo_9 = next_value_of_Lo_9;
      STATE_VARIABLE_A_0_13 = next_value_of_STATE_VARIABLE_A_0_13;
      STATE_VARIABLE_B_0_15 = next_value_of_STATE_VARIABLE_B_0_15;
      continue;
    }
    else
    {
      *STATE_VARIABLE_B_16 = STATE_VARIABLE_B_0_15;
      *STATE_VARIABLE_A_14 = STATE_VARIABLE_A_0_13;
    }
    break;
  }
}

void MR_CALL 
mercury__int__fold_up2_7_p_3(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_U_24,
  MR_Word P_8,
  MR_Integer Lo_9,
  MR_Integer Hi_10,
  MR_Box STATE_VARIABLE_A_0_13,
  MR_Box * STATE_VARIABLE_A_14,
  MR_Box STATE_VARIABLE_B_0_15,
  MR_Box * STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_9 <= Hi_10);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_17_17;
      MR_Box STATE_VARIABLE_B_18_18;
      MR_Integer Var_19;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      func_0(((MR_Box) P_8), ((MR_Box) (Lo_9)), STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_17_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_18_18);
      Var_19 = (Lo_9 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Lo_9 = Var_19;
      next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_17_17;
      next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_18_18;
      Lo_9 = next_value_of_Lo_9;
      STATE_VARIABLE_A_0_13 = next_value_of_STATE_VARIABLE_A_0_13;
      STATE_VARIABLE_B_0_15 = next_value_of_STATE_VARIABLE_B_0_15;
      continue;
    }
    else
    {
      *STATE_VARIABLE_B_16 = STATE_VARIABLE_B_0_15;
      *STATE_VARIABLE_A_14 = STATE_VARIABLE_A_0_13;
    }
    break;
  }
}

void MR_CALL 
mercury__int__fold_up2_7_p_2(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_U_24,
  MR_Word P_8,
  MR_Integer Lo_9,
  MR_Integer Hi_10,
  MR_Box STATE_VARIABLE_A_0_13,
  MR_Box * STATE_VARIABLE_A_14,
  MR_Box STATE_VARIABLE_B_0_15,
  MR_Box * STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_9 <= Hi_10);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_17_17;
      MR_Box STATE_VARIABLE_B_18_18;
      MR_Integer Var_19;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      func_0(((MR_Box) P_8), ((MR_Box) (Lo_9)), STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_17_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_18_18);
      Var_19 = (Lo_9 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Lo_9 = Var_19;
      next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_17_17;
      next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_18_18;
      Lo_9 = next_value_of_Lo_9;
      STATE_VARIABLE_A_0_13 = next_value_of_STATE_VARIABLE_A_0_13;
      STATE_VARIABLE_B_0_15 = next_value_of_STATE_VARIABLE_B_0_15;
      continue;
    }
    else
    {
      *STATE_VARIABLE_B_16 = STATE_VARIABLE_B_0_15;
      *STATE_VARIABLE_A_14 = STATE_VARIABLE_A_0_13;
    }
    break;
  }
}

void MR_CALL 
mercury__int__fold_up2_7_p_1(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_U_24,
  MR_Word P_8,
  MR_Integer Lo_9,
  MR_Integer Hi_10,
  MR_Box STATE_VARIABLE_A_0_13,
  MR_Box * STATE_VARIABLE_A_14,
  MR_Box STATE_VARIABLE_B_0_15,
  MR_Box * STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_9 <= Hi_10);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_17_17;
      MR_Box STATE_VARIABLE_B_18_18;
      MR_Integer Var_19;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      func_0(((MR_Box) P_8), ((MR_Box) (Lo_9)), STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_17_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_18_18);
      Var_19 = (Lo_9 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Lo_9 = Var_19;
      next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_17_17;
      next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_18_18;
      Lo_9 = next_value_of_Lo_9;
      STATE_VARIABLE_A_0_13 = next_value_of_STATE_VARIABLE_A_0_13;
      STATE_VARIABLE_B_0_15 = next_value_of_STATE_VARIABLE_B_0_15;
      continue;
    }
    else
    {
      *STATE_VARIABLE_B_16 = STATE_VARIABLE_B_0_15;
      *STATE_VARIABLE_A_14 = STATE_VARIABLE_A_0_13;
    }
    break;
  }
}

void MR_CALL 
mercury__int__fold_up2_7_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_U_24,
  MR_Word P_8,
  MR_Integer Lo_9,
  MR_Integer Hi_10,
  MR_Box STATE_VARIABLE_A_0_13,
  MR_Box * STATE_VARIABLE_A_14,
  MR_Box STATE_VARIABLE_B_0_15,
  MR_Box * STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_9 <= Hi_10);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_17_17;
      MR_Box STATE_VARIABLE_B_18_18;
      MR_Integer Var_19;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_9;
      MR_Box next_value_of_STATE_VARIABLE_A_0_13;
      MR_Box next_value_of_STATE_VARIABLE_B_0_15;

      func_0(((MR_Box) P_8), ((MR_Box) (Lo_9)), STATE_VARIABLE_A_0_13, &STATE_VARIABLE_A_17_17, STATE_VARIABLE_B_0_15, &STATE_VARIABLE_B_18_18);
      Var_19 = (Lo_9 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Lo_9 = Var_19;
      next_value_of_STATE_VARIABLE_A_0_13 = STATE_VARIABLE_A_17_17;
      next_value_of_STATE_VARIABLE_B_0_15 = STATE_VARIABLE_B_18_18;
      Lo_9 = next_value_of_Lo_9;
      STATE_VARIABLE_A_0_13 = next_value_of_STATE_VARIABLE_A_0_13;
      STATE_VARIABLE_B_0_15 = next_value_of_STATE_VARIABLE_B_0_15;
      continue;
    }
    else
    {
      *STATE_VARIABLE_B_16 = STATE_VARIABLE_B_0_15;
      *STATE_VARIABLE_A_14 = STATE_VARIABLE_A_0_13;
    }
    break;
  }
}

void MR_CALL 
mercury__int__fold_up_5_p_10(
  MR_Word TypeInfo_for_T_16,
  MR_Word P_6,
  MR_Integer Lo_7,
  MR_Integer Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_7 <= Hi_8);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_12_12;
      MR_Integer Var_13;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_7;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      func_0(((MR_Box) P_6), ((MR_Box) (Lo_7)), STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_12_12);
      Var_13 = (Lo_7 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Lo_7 = Var_13;
      next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_12_12;
      Lo_7 = next_value_of_Lo_7;
      STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
    break;
  }
}

void MR_CALL 
mercury__int__fold_up_5_p_9(
  MR_Word TypeInfo_for_T_16,
  MR_Word P_6,
  MR_Integer Lo_7,
  MR_Integer Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_7 <= Hi_8);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_12_12;
      MR_Integer Var_13;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_7;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      func_0(((MR_Box) P_6), ((MR_Box) (Lo_7)), STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_12_12);
      Var_13 = (Lo_7 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Lo_7 = Var_13;
      next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_12_12;
      Lo_7 = next_value_of_Lo_7;
      STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
    break;
  }
}

static void MR_CALL 
mercury__int__fold_up_5_p_8_1(
  void * env_ptr_arg)
{
  {
    struct mercury__int__fold_up_5_p_8_env_0_s * env_ptr = (struct mercury__int__fold_up_5_p_8_env_0_s *) env_ptr_arg;

    (env_ptr)->mercury__int__fold_up_5_p_8_env_0__Var_15 = (MR_Integer) 1;
    (env_ptr)->mercury__int__fold_up_5_p_8_env_0__Var_13 = ((env_ptr)->mercury__int__fold_up_5_p_8_env_0__Lo_7 + (env_ptr)->mercury__int__fold_up_5_p_8_env_0__Var_15);
    mercury__int__fold_up_5_p_8((env_ptr)->mercury__int__fold_up_5_p_8_env_0__TypeInfo_for_T_16, (env_ptr)->mercury__int__fold_up_5_p_8_env_0__P_6, (env_ptr)->mercury__int__fold_up_5_p_8_env_0__Var_13, (env_ptr)->mercury__int__fold_up_5_p_8_env_0__Hi_8, (env_ptr)->mercury__int__fold_up_5_p_8_env_0__STATE_VARIABLE_A_12_12, (env_ptr)->mercury__int__fold_up_5_p_8_env_0__STATE_VARIABLE_A_11, (env_ptr)->mercury__int__fold_up_5_p_8_env_0__cont, (env_ptr)->mercury__int__fold_up_5_p_8_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__int__fold_up_5_p_8(
  MR_Word TypeInfo_for_T_16,
  MR_Word P_6,
  MR_Integer Lo_7,
  MR_Integer Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__int__fold_up_5_p_8_env_0_s env;

    (env).mercury__int__fold_up_5_p_8_env_0__TypeInfo_for_T_16 = TypeInfo_for_T_16;
    (env).mercury__int__fold_up_5_p_8_env_0__P_6 = P_6;
    (env).mercury__int__fold_up_5_p_8_env_0__Lo_7 = Lo_7;
    (env).mercury__int__fold_up_5_p_8_env_0__Hi_8 = Hi_8;
    (env).mercury__int__fold_up_5_p_8_env_0__STATE_VARIABLE_A_11 = STATE_VARIABLE_A_11;
    (env).mercury__int__fold_up_5_p_8_env_0__cont = cont;
    (env).mercury__int__fold_up_5_p_8_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_bool succeeded = ((env).mercury__int__fold_up_5_p_8_env_0__Lo_7 <= (env).mercury__int__fold_up_5_p_8_env_0__Hi_8);

      if (succeeded)
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (env).mercury__int__fold_up_5_p_8_env_0__P_6, (MR_Integer) 1)));

        func_0(((MR_Box) (env).mercury__int__fold_up_5_p_8_env_0__P_6), ((MR_Box) ((env).mercury__int__fold_up_5_p_8_env_0__Lo_7)), STATE_VARIABLE_A_0_10, &(env).mercury__int__fold_up_5_p_8_env_0__STATE_VARIABLE_A_12_12, mercury__int__fold_up_5_p_8_1, &env);
      }
      else
      {
        *((env).mercury__int__fold_up_5_p_8_env_0__STATE_VARIABLE_A_11) = STATE_VARIABLE_A_0_10;
        ((env).mercury__int__fold_up_5_p_8_env_0__cont)((env).mercury__int__fold_up_5_p_8_env_0__cont_env_ptr);
      }
    }
  }
}

static void MR_CALL 
mercury__int__fold_up_5_p_7_1(
  void * env_ptr_arg)
{
  {
    struct mercury__int__fold_up_5_p_7_env_0_s * env_ptr = (struct mercury__int__fold_up_5_p_7_env_0_s *) env_ptr_arg;

    (env_ptr)->mercury__int__fold_up_5_p_7_env_0__Var_15 = (MR_Integer) 1;
    (env_ptr)->mercury__int__fold_up_5_p_7_env_0__Var_13 = ((env_ptr)->mercury__int__fold_up_5_p_7_env_0__Lo_7 + (env_ptr)->mercury__int__fold_up_5_p_7_env_0__Var_15);
    mercury__int__fold_up_5_p_7((env_ptr)->mercury__int__fold_up_5_p_7_env_0__TypeInfo_for_T_16, (env_ptr)->mercury__int__fold_up_5_p_7_env_0__P_6, (env_ptr)->mercury__int__fold_up_5_p_7_env_0__Var_13, (env_ptr)->mercury__int__fold_up_5_p_7_env_0__Hi_8, (env_ptr)->mercury__int__fold_up_5_p_7_env_0__STATE_VARIABLE_A_12_12, (env_ptr)->mercury__int__fold_up_5_p_7_env_0__STATE_VARIABLE_A_11, (env_ptr)->mercury__int__fold_up_5_p_7_env_0__cont, (env_ptr)->mercury__int__fold_up_5_p_7_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__int__fold_up_5_p_7(
  MR_Word TypeInfo_for_T_16,
  MR_Word P_6,
  MR_Integer Lo_7,
  MR_Integer Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__int__fold_up_5_p_7_env_0_s env;

    (env).mercury__int__fold_up_5_p_7_env_0__TypeInfo_for_T_16 = TypeInfo_for_T_16;
    (env).mercury__int__fold_up_5_p_7_env_0__P_6 = P_6;
    (env).mercury__int__fold_up_5_p_7_env_0__Lo_7 = Lo_7;
    (env).mercury__int__fold_up_5_p_7_env_0__Hi_8 = Hi_8;
    (env).mercury__int__fold_up_5_p_7_env_0__STATE_VARIABLE_A_11 = STATE_VARIABLE_A_11;
    (env).mercury__int__fold_up_5_p_7_env_0__cont = cont;
    (env).mercury__int__fold_up_5_p_7_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_bool succeeded = ((env).mercury__int__fold_up_5_p_7_env_0__Lo_7 <= (env).mercury__int__fold_up_5_p_7_env_0__Hi_8);

      if (succeeded)
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (env).mercury__int__fold_up_5_p_7_env_0__P_6, (MR_Integer) 1)));

        func_0(((MR_Box) (env).mercury__int__fold_up_5_p_7_env_0__P_6), ((MR_Box) ((env).mercury__int__fold_up_5_p_7_env_0__Lo_7)), STATE_VARIABLE_A_0_10, &(env).mercury__int__fold_up_5_p_7_env_0__STATE_VARIABLE_A_12_12, mercury__int__fold_up_5_p_7_1, &env);
      }
      else
      {
        *((env).mercury__int__fold_up_5_p_7_env_0__STATE_VARIABLE_A_11) = STATE_VARIABLE_A_0_10;
        ((env).mercury__int__fold_up_5_p_7_env_0__cont)((env).mercury__int__fold_up_5_p_7_env_0__cont_env_ptr);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__int__fold_up_5_p_6(
  MR_Word TypeInfo_for_T_16,
  MR_Word P_6,
  MR_Integer Lo_7,
  MR_Integer Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_7 <= Hi_8);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_12_12;
      MR_Integer Var_13;
      MR_Integer Var_15;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_7;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      succeeded = func_0(((MR_Box) P_6), ((MR_Box) (Lo_7)), STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_12_12);
      if (succeeded)
      {
        Var_15 = (MR_Integer) 1;
        Var_13 = (Lo_7 + Var_15);
        /* direct tailcall eliminated */
        next_value_of_Lo_7 = Var_13;
        next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_12_12;
        Lo_7 = next_value_of_Lo_7;
        STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__int__fold_up_5_p_5(
  MR_Word TypeInfo_for_T_16,
  MR_Word P_6,
  MR_Integer Lo_7,
  MR_Integer Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_7 <= Hi_8);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_12_12;
      MR_Integer Var_13;
      MR_Integer Var_15;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_7;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      succeeded = func_0(((MR_Box) P_6), ((MR_Box) (Lo_7)), STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_12_12);
      if (succeeded)
      {
        Var_15 = (MR_Integer) 1;
        Var_13 = (Lo_7 + Var_15);
        /* direct tailcall eliminated */
        next_value_of_Lo_7 = Var_13;
        next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_12_12;
        Lo_7 = next_value_of_Lo_7;
        STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__int__fold_up_5_p_4(
  MR_Word TypeInfo_for_T_16,
  MR_Word P_6,
  MR_Integer Lo_7,
  MR_Integer Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_7 <= Hi_8);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_12_12;
      MR_Integer Var_13;
      MR_Integer Var_15;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_7;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      succeeded = func_0(((MR_Box) P_6), ((MR_Box) (Lo_7)), STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_12_12);
      if (succeeded)
      {
        Var_15 = (MR_Integer) 1;
        Var_13 = (Lo_7 + Var_15);
        /* direct tailcall eliminated */
        next_value_of_Lo_7 = Var_13;
        next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_12_12;
        Lo_7 = next_value_of_Lo_7;
        STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__int__fold_up_5_p_3(
  MR_Word TypeInfo_for_T_16,
  MR_Word P_6,
  MR_Integer Lo_7,
  MR_Integer Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_7 <= Hi_8);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_12_12;
      MR_Integer Var_13;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_7;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      func_0(((MR_Box) P_6), ((MR_Box) (Lo_7)), STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_12_12);
      Var_13 = (Lo_7 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Lo_7 = Var_13;
      next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_12_12;
      Lo_7 = next_value_of_Lo_7;
      STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
    break;
  }
}

void MR_CALL 
mercury__int__fold_up_5_p_2(
  MR_Word TypeInfo_for_T_16,
  MR_Word P_6,
  MR_Integer Lo_7,
  MR_Integer Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_7 <= Hi_8);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_12_12;
      MR_Integer Var_13;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_7;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      func_0(((MR_Box) P_6), ((MR_Box) (Lo_7)), STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_12_12);
      Var_13 = (Lo_7 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Lo_7 = Var_13;
      next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_12_12;
      Lo_7 = next_value_of_Lo_7;
      STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
    break;
  }
}

void MR_CALL 
mercury__int__fold_up_5_p_1(
  MR_Word TypeInfo_for_T_16,
  MR_Word P_6,
  MR_Integer Lo_7,
  MR_Integer Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_7 <= Hi_8);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_12_12;
      MR_Integer Var_13;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_7;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      func_0(((MR_Box) P_6), ((MR_Box) (Lo_7)), STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_12_12);
      Var_13 = (Lo_7 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Lo_7 = Var_13;
      next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_12_12;
      Lo_7 = next_value_of_Lo_7;
      STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
    break;
  }
}

void MR_CALL 
mercury__int__fold_up_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word P_6,
  MR_Integer Lo_7,
  MR_Integer Hi_8,
  MR_Box STATE_VARIABLE_A_0_10,
  MR_Box * STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_7 <= Hi_8);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_A_12_12;
      MR_Integer Var_13;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_7;
      MR_Box next_value_of_STATE_VARIABLE_A_0_10;

      func_0(((MR_Box) P_6), ((MR_Box) (Lo_7)), STATE_VARIABLE_A_0_10, &STATE_VARIABLE_A_12_12);
      Var_13 = (Lo_7 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_Lo_7 = Var_13;
      next_value_of_STATE_VARIABLE_A_0_10 = STATE_VARIABLE_A_12_12;
      Lo_7 = next_value_of_Lo_7;
      STATE_VARIABLE_A_0_10 = next_value_of_STATE_VARIABLE_A_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_A_11 = STATE_VARIABLE_A_0_10;
    break;
  }
}

MR_Box MR_CALL 
mercury__int__fold_up_4_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word F_6,
  MR_Integer Lo_7,
  MR_Integer Hi_8,
  MR_Box A_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_7 <= Hi_8);
    MR_Box HeadVar__5_5;

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Integer Var_10 = (Lo_7 + (MR_Integer) 1);
      MR_Box Var_12;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), F_6, (MR_Integer) 1)));
      MR_Integer next_value_of_Lo_7;
      MR_Box next_value_of_A_9;

      Var_12 = func_0(((MR_Box) F_6), ((MR_Box) (Lo_7)), A_9);
      /* direct tailcall eliminated */
      next_value_of_Lo_7 = Var_10;
      next_value_of_A_9 = Var_12;
      Lo_7 = next_value_of_Lo_7;
      A_9 = next_value_of_A_9;
      continue;
    }
    else
      HeadVar__5_5 = A_9;
    return HeadVar__5_5;
    break;
  }
}

void MR_CALL 
mercury__int__bits_per_int_1_p_0(
  MR_Integer * Bits_1)
{
  {
{
#define MR_PROC_LABEL mercury__int__bits_per_int_1_p_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 *Bits_1  = Bits;
}
  }
}

MR_Integer MR_CALL 
mercury__int__bits_per_int_0_f_0(void)
{
  {
    MR_Integer X_2;

{
#define MR_PROC_LABEL mercury__int__bits_per_int_0_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 X_2  = Bits;
}
    return X_2;
  }
}

void MR_CALL 
mercury__int__min_int_1_p_0(
  MR_Integer * Min_1)
{
  {
{
#define MR_PROC_LABEL mercury__int__min_int_1_p_0

	MR_Integer Min;

		{

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


		;}
#undef MR_PROC_LABEL
	 *Min_1  = Min;
}
  }
}

MR_Integer MR_CALL 
mercury__int__min_int_0_f_0(void)
{
  {
    MR_Integer X_2;

{
#define MR_PROC_LABEL mercury__int__min_int_0_f_0

	MR_Integer Min;

		{

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


		;}
#undef MR_PROC_LABEL
	 X_2  = Min;
}
    return X_2;
  }
}

void MR_CALL 
mercury__int__max_int_1_p_0(
  MR_Integer * Max_1)
{
  {
{
#define MR_PROC_LABEL mercury__int__max_int_1_p_0

	MR_Integer Max;

		{

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


		;}
#undef MR_PROC_LABEL
	 *Max_1  = Max;
}
  }
}

MR_Integer MR_CALL 
mercury__int__max_int_0_f_0(void)
{
  {
    MR_Integer X_2;

{
#define MR_PROC_LABEL mercury__int__max_int_0_f_0

	MR_Integer Max;

		{

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


		;}
#undef MR_PROC_LABEL
	 X_2  = Max;
}
    return X_2;
  }
}

void MR_CALL 
mercury__int__is_2_p_1(
  MR_Word TypeInfo_for_T_4,
  MR_Box * X_3,
  MR_Box X_2)
{
  *X_3 = X_2;
}

void MR_CALL 
mercury__int__is_2_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Box * X_3,
  MR_Box X_2)
{
  *X_3 = X_2;
}

void MR_CALL 
mercury__int__xor_2_f_2(
  MR_Integer * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  *HeadVar__1_1 = (HeadVar__2_2 ^ HeadVar__3_3);
}

void MR_CALL 
mercury__int__xor_2_f_1(
  MR_Integer HeadVar__1_1,
  MR_Integer * HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  *HeadVar__2_2 = (HeadVar__1_1 ^ HeadVar__3_3);
}

MR_Integer MR_CALL 
mercury__int__xor_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_Integer HeadVar__3_3 = (HeadVar__1_1 ^ HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__int__f_92_47_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_Integer HeadVar__3_3 = (HeadVar__1_1 | HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__int__f_47_92_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_Integer HeadVar__3_3 = (HeadVar__1_1 & HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__int__f_92_1_f_0(
  MR_Integer HeadVar__1_1)
{
  {
    MR_Integer HeadVar__2_2 = ~(HeadVar__1_1);

    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__int__unchecked_right_shift_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_Integer HeadVar__3_3 = (HeadVar__1_1 >> HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__int__f_62_62_2_f_0(
  MR_Integer X_4,
  MR_Integer Y_5)
{
  {
    MR_bool succeeded;
    MR_Integer Z_6;
    MR_Integer IntBits_7;

{
#define MR_PROC_LABEL mercury__int__f_62_62_2_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 IntBits_7  = Bits;
}
    succeeded = (Y_5 >= (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (Y_5 >= IntBits_7);
      if (succeeded)
      {
        succeeded = (X_4 >= (MR_Integer) 0);
        if (succeeded)
          Z_6 = (MR_Integer) 0;
        else
          Z_6 = (MR_Integer) -1;
      }
      else
        Z_6 = (X_4 >> Y_5);
    }
    else
    {
      MR_Integer Var_10 = ((MR_Integer) 0 - IntBits_7);

      succeeded = (Y_5 <= Var_10);
      if (succeeded)
        Z_6 = (MR_Integer) 0;
      else
      {
        MR_Integer Var_11 = ((MR_Integer) 0 - Y_5);

        Z_6 = (X_4 << Var_11);
      }
    }
    return Z_6;
  }
}

MR_Integer MR_CALL 
mercury__int__unchecked_left_shift_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_Integer HeadVar__3_3 = (HeadVar__1_1 << HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__int__f_60_60_2_f_0(
  MR_Integer X_4,
  MR_Integer Y_5)
{
  {
    MR_bool succeeded;
    MR_Integer Z_6;
    MR_Integer IntBits_7;

{
#define MR_PROC_LABEL mercury__int__f_60_60_2_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 IntBits_7  = Bits;
}
    succeeded = (Y_5 >= (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (Y_5 >= IntBits_7);
      if (succeeded)
        Z_6 = (MR_Integer) 0;
      else
        Z_6 = (X_4 << Y_5);
    }
    else
    {
      MR_Integer Var_9 = ((MR_Integer) 0 - IntBits_7);

      succeeded = (Y_5 <= Var_9);
      if (succeeded)
      {
        succeeded = (X_4 >= (MR_Integer) 0);
        if (succeeded)
          Z_6 = (MR_Integer) 0;
        else
          Z_6 = (MR_Integer) -1;
      }
      else
      {
        MR_Integer Var_11 = ((MR_Integer) 0 - Y_5);

        Z_6 = (X_4 >> Var_11);
      }
    }
    return Z_6;
  }
}

MR_Integer MR_CALL 
mercury__int__log2_1_f_0(
  MR_Integer X_3)
{
  {
    MR_Integer CeilLogX_4;

    mercury__int__log2_2_p_0(X_3, &CeilLogX_4);
    return CeilLogX_4;
  }
}

void MR_CALL 
mercury__int__log2_2_p_0(
  MR_Integer X_3,
  MR_Integer * CeilLogX_4)
{
  {
    MR_bool succeeded;
    MR_Integer Var_5;

{
#define MR_PROC_LABEL mercury__int__log2_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      Var_5 = (MR_Integer) 0;
      succeeded = (X_3 <= Var_5);
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word Var_6 = (MR_Word) ((MR_Box) ((MR_String) "int.log2: taking logarithm of zero"));

      {
        mercury__exception__throw_1_p_0(TypeCtorInfo_9_9, ((MR_Box) (Var_6)));
        return;
      }
    }
    else
    {
      mercury__int__log2_loop_3_p_0(X_3, (MR_Integer) 0, CeilLogX_4);
    }
  }
}

static void MR_CALL 
mercury__int__log2_loop_3_p_0(
  MR_Integer CurX_4,
  MR_Integer CurLogXSoFar_5,
  MR_Integer * CeilLogX_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurX_4 == (MR_Integer) 1);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
      *CeilLogX_6 = CurLogXSoFar_5;
    else
    {
      MR_Integer NextX_7;
      MR_Integer NextLogXSoFar_8;
      MR_Integer Var_9 = (CurX_4 + (MR_Integer) 1);
      MR_Integer next_value_of_CurX_4;
      MR_Integer next_value_of_CurLogXSoFar_5;

      NextX_7 = (Var_9 / (MR_Integer) 2);
      NextLogXSoFar_8 = (CurLogXSoFar_5 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_CurX_4 = NextX_7;
      next_value_of_CurLogXSoFar_5 = NextLogXSoFar_8;
      CurX_4 = next_value_of_CurX_4;
      CurLogXSoFar_5 = next_value_of_CurLogXSoFar_5;
      continue;
    }
    break;
  }
}

MR_Integer MR_CALL 
mercury__int__pow_2_f_0(
  MR_Integer Base_4,
  MR_Integer Exp_5)
{
  {
    MR_Integer Result_6;

    mercury__int__pow_3_p_0(Base_4, Exp_5, &Result_6);
    return Result_6;
  }
}

void MR_CALL 
mercury__int__pow_3_p_0(
  MR_Integer Base_4,
  MR_Integer Exp_5,
  MR_Integer * Result_6)
{
  {
    MR_bool succeeded;
    MR_Integer Var_7;

{
#define MR_PROC_LABEL mercury__int__pow_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      Var_7 = (MR_Integer) 0;
      succeeded = (Exp_5 < Var_7);
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_11_11 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word Var_8 = (MR_Word) ((MR_Box) ((MR_String) "int.pow: zero base"));

      {
        mercury__exception__throw_1_p_0(TypeCtorInfo_11_11, ((MR_Box) (Var_8)));
        return;
      }
    }
    else
    {
      *Result_6 = mercury__int__multiply_by_pow_3_f_0((MR_Integer) 1, Base_4, Exp_5);
    }
  }
}

static MR_Integer MR_CALL 
mercury__int__multiply_by_pow_3_f_0(
  MR_Integer Scale0_5,
  MR_Integer Base_6,
  MR_Integer Exp_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Exp_7 == (MR_Integer) 0);
    MR_Integer Result_8;

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
      Result_8 = Scale0_5;
    else
    {
      MR_Integer Scale1_9;
      MR_Integer Var_10;
      MR_Integer Var_12;
      MR_Integer Var_15 = (Exp_7 & (MR_Integer) 1);
      MR_Integer next_value_of_Scale0_5;
      MR_Integer next_value_of_Base_6;
      MR_Integer next_value_of_Exp_7;

      succeeded = (Var_15 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        Scale1_9 = (Scale0_5 * Base_6);
      else
        Scale1_9 = Scale0_5;
      Var_10 = (Base_6 * Base_6);
      Var_12 = mercury__int__div_2_f_0(Exp_7, (MR_Integer) 2);
      /* direct tailcall eliminated */
      next_value_of_Scale0_5 = Scale1_9;
      next_value_of_Base_6 = Var_10;
      next_value_of_Exp_7 = Var_12;
      Scale0_5 = next_value_of_Scale0_5;
      Base_6 = next_value_of_Base_6;
      Exp_7 = next_value_of_Exp_7;
      continue;
    }
    return Result_8;
    break;
  }
}

MR_bool MR_CALL 
mercury__int__odd_1_p_0(
  MR_Integer X_2)
{
  {
    MR_bool succeeded;
    MR_Integer Var_3 = (X_2 & (MR_Integer) 1);

    succeeded = (Var_3 == (MR_Integer) 0);
    succeeded = !(succeeded);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__int__even_1_p_0(
  MR_Integer X_2)
{
  {
    MR_bool succeeded;
    MR_Integer Var_3 = (X_2 & (MR_Integer) 1);

    succeeded = (Var_3 == (MR_Integer) 0);
    return succeeded;
  }
}

MR_Integer MR_CALL 
mercury__int__unchecked_rem_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_Integer HeadVar__3_3 = (HeadVar__1_1 % HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__int__rem_2_f_0(
  MR_Integer X_4,
  MR_Integer Y_5)
{
  {
    MR_bool succeeded;
    MR_Integer Rem_6;

{
#define MR_PROC_LABEL mercury__int__rem_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = (Y_5 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word Var_7 = (MR_Word) ((MR_Box) ((MR_String) "int.rem: division by zero"));

      mercury__exception__throw_1_p_0(TypeCtorInfo_9_9, ((MR_Box) (Var_7)));
    }
    else
      Rem_6 = (X_4 % Y_5);
    return Rem_6;
  }
}

MR_Integer MR_CALL 
mercury__int__mod_2_f_0(
  MR_Integer X_4,
  MR_Integer Y_5)
{
  {
    MR_Integer HeadVar__3_3;
    MR_Integer Var_6;
    MR_Integer Var_7;

    Var_7 = mercury__int__div_2_f_0(X_4, Y_5);
    Var_6 = (Var_7 * Y_5);
    HeadVar__3_3 = (X_4 - Var_6);
    return HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__int__unchecked_quotient_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_Integer HeadVar__3_3 = (HeadVar__1_1 / HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__int__f_slash_2_f_0(
  MR_Integer X_4,
  MR_Integer Y_5)
{
  {
    MR_bool succeeded;
    MR_Integer HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__int__f_slash_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = (Y_5 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word TypeCtorInfo_9_11 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word Var_9 = (MR_Word) ((MR_Box) ((MR_String) "int.\'//\': division by zero"));

      mercury__exception__throw_1_p_0(TypeCtorInfo_9_11, ((MR_Box) (Var_9)));
    }
    else
      HeadVar__3_3 = (X_4 / Y_5);
    return HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__int__f_47_47_2_f_0(
  MR_Integer X_4,
  MR_Integer Y_5)
{
  {
    MR_bool succeeded;
    MR_Integer Div_6;

{
#define MR_PROC_LABEL mercury__int__f_47_47_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = (Y_5 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word Var_7 = (MR_Word) ((MR_Box) ((MR_String) "int.\'//\': division by zero"));

      mercury__exception__throw_1_p_0(TypeCtorInfo_9_9, ((MR_Box) (Var_7)));
    }
    else
      Div_6 = (X_4 / Y_5);
    return Div_6;
  }
}

MR_Integer MR_CALL 
mercury__int__div_2_f_0(
  MR_Integer X_4,
  MR_Integer Y_5)
{
  {
    MR_bool succeeded;
    MR_Integer Div_6;
    MR_Integer Trunc_7;

{
#define MR_PROC_LABEL mercury__int__div_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = (Y_5 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word TypeCtorInfo_9_19 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word Var_17 = (MR_Word) ((MR_Box) ((MR_String) "int.\'//\': division by zero"));

      mercury__exception__throw_1_p_0(TypeCtorInfo_9_19, ((MR_Box) (Var_17)));
    }
    else
      Trunc_7 = (X_4 / Y_5);
    {
      MR_Integer Var_12;

      succeeded = (X_4 >= (MR_Integer) 0);
      if (succeeded)
      {
        Var_12 = (MR_Integer) 0;
        succeeded = (Y_5 >= Var_12);
      }
    }
    if (!(succeeded))
    {
      {
        MR_Integer Var_10;

        succeeded = (X_4 < (MR_Integer) 0);
        if (succeeded)
        {
          Var_10 = (MR_Integer) 0;
          succeeded = (Y_5 < Var_10);
        }
      }
      if (!(succeeded))
      {
        MR_Integer Var_8;

{
#define MR_PROC_LABEL mercury__int__div_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          succeeded = (Y_5 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word TypeCtorInfo_9_25 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
          MR_Word Var_23 = (MR_Word) ((MR_Box) ((MR_String) "int.rem: division by zero"));

          mercury__exception__throw_1_p_0(TypeCtorInfo_9_25, ((MR_Box) (Var_23)));
        }
        else
          Var_8 = (X_4 % Y_5);
        succeeded = (Var_8 == (MR_Integer) 0);
      }
    }
    if (succeeded)
      Div_6 = Trunc_7;
    else
    {
      Div_6 = (Trunc_7 - (MR_Integer) 1);
    }
    return Div_6;
  }
}

MR_Integer MR_CALL 
mercury__int__times_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_Integer HeadVar__3_3 = (HeadVar__1_1 * HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__int__f_times_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_Integer HeadVar__3_3 = (HeadVar__1_1 * HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__int__minus_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_Integer HeadVar__3_3 = (HeadVar__1_1 - HeadVar__2_2);

    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__int__f_minus_2_f_2(
  MR_Integer HeadVar__1_1,
  MR_Integer * HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  *HeadVar__2_2 = (HeadVar__1_1 - HeadVar__3_3);
}

void MR_CALL 
mercury__int__f_minus_2_f_1(
  MR_Integer * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  *HeadVar__1_1 = (HeadVar__2_2 + HeadVar__3_3);
}

MR_Integer MR_CALL 
mercury__int__f_minus_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_Integer HeadVar__3_3 = (HeadVar__1_1 - HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__int__plus_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_Integer HeadVar__3_3 = (HeadVar__1_1 + HeadVar__2_2);

    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__int__f_plus_2_f_2(
  MR_Integer HeadVar__1_1,
  MR_Integer * HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  *HeadVar__2_2 = (HeadVar__3_3 - HeadVar__1_1);
}

void MR_CALL 
mercury__int__f_plus_2_f_1(
  MR_Integer * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  *HeadVar__1_1 = (HeadVar__3_3 - HeadVar__2_2);
}

MR_Integer MR_CALL 
mercury__int__f_plus_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_Integer HeadVar__3_3 = (HeadVar__1_1 + HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__int__f_minus_1_f_0(
  MR_Integer HeadVar__1_1)
{
  {
    MR_Integer HeadVar__2_2 = ((MR_Integer) 0 - HeadVar__1_1);

    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__int__f_plus_1_f_0(
  MR_Integer HeadVar__1_1)
{
  {
    MR_Integer HeadVar__2_2 = HeadVar__1_1;

    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__int__min_3_p_0(
  MR_Integer X_4,
  MR_Integer Y_5,
  MR_Integer * Min_6)
{
  {
    MR_bool succeeded = (X_4 < Y_5);

    if (succeeded)
      *Min_6 = X_4;
    else
      *Min_6 = Y_5;
  }
}

MR_Integer MR_CALL 
mercury__int__min_2_f_0(
  MR_Integer X_4,
  MR_Integer Y_5)
{
  {
    MR_bool succeeded = (X_4 < Y_5);
    MR_Integer Min_6;

    if (succeeded)
      Min_6 = X_4;
    else
      Min_6 = Y_5;
    return Min_6;
  }
}

void MR_CALL 
mercury__int__max_3_p_0(
  MR_Integer X_4,
  MR_Integer Y_5,
  MR_Integer * Max_6)
{
  {
    MR_bool succeeded = (X_4 > Y_5);

    if (succeeded)
      *Max_6 = X_4;
    else
      *Max_6 = Y_5;
  }
}

MR_Integer MR_CALL 
mercury__int__max_2_f_0(
  MR_Integer X_4,
  MR_Integer Y_5)
{
  {
    MR_bool succeeded = (X_4 > Y_5);
    MR_Integer Max_6;

    if (succeeded)
      Max_6 = X_4;
    else
      Max_6 = Y_5;
    return Max_6;
  }
}

void MR_CALL 
mercury__int__abs_2_p_0(
  MR_Integer Num_3,
  MR_Integer * Abs_4)
{
  {
    MR_bool succeeded = (Num_3 < (MR_Integer) 0);

    if (succeeded)
    {
      *Abs_4 = ((MR_Integer) 0 - Num_3);
    }
    else
      *Abs_4 = Num_3;
  }
}

MR_Integer MR_CALL 
mercury__int__abs_1_f_0(
  MR_Integer Num_3)
{
  {
    MR_bool succeeded = (Num_3 < (MR_Integer) 0);
    MR_Integer Abs_4;

    if (succeeded)
    {
      Abs_4 = ((MR_Integer) 0 - Num_3);
    }
    else
      Abs_4 = Num_3;
    return Abs_4;
  }
}

MR_bool MR_CALL 
mercury__int__f_greater_or_equal_2_p_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 >= HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__int__f_less_or_equal_2_p_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 <= HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__int__f_greater_than_2_p_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 > HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__int__f_less_than_2_p_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 < HeadVar__2_2);

    return succeeded;
  }
}

static MR_Box MR_CALL 
mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__to_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_X_2;

    conv0_X_2 = mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__to_int_1_1_f_0(((MR_Integer) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_X_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__from_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv0_X_2;

    succeeded = mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__from_int_1_1_f_0(((MR_Integer) wrapper_arg_1), &conv0_X_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_X_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__int__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module int. */
