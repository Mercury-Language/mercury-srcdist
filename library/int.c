/*
** Automatically generated from `int.m'
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


static MR_Box MR_CALL 
mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__to_int_1_1_f_0_10001(
  MR_Box mercury__int__closure_arg,
  MR_Box mercury__int__wrapper_arg_1);

static MR_bool MR_CALL 
mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__from_int_1_1_f_0_10001(
  MR_Box mercury__int__closure_arg,
  MR_Box mercury__int__wrapper_arg_1,
  MR_Box * mercury__int__wrapper_arg_2);

static MR_Integer MR_CALL 
mercury__int__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__int__log2_loop_3_p_0(
  MR_Integer mercury__int__CurX_4,
  MR_Integer mercury__int__CurLogXSoFar_5,
  MR_Integer * mercury__int__CeilLogX_6);

static MR_Integer MR_CALL 
mercury__int__multiply_by_pow_3_f_0(
  MR_Integer mercury__int__Scale0_5,
  MR_Integer mercury__int__Base_6,
  MR_Integer mercury__int__Exp_7);

static void MR_CALL 
mercury__int__fold_down3_9_p_9_1(
  void * mercury__int__env_ptr_arg);

static void MR_CALL 
mercury__int__fold_down3_9_p_8_1(
  void * mercury__int__env_ptr_arg);

static void MR_CALL 
mercury__int__fold_up3_9_p_9_1(
  void * mercury__int__env_ptr_arg);

static void MR_CALL 
mercury__int__fold_up3_9_p_8_1(
  void * mercury__int__env_ptr_arg);

static void MR_CALL 
mercury__int__fold_down2_7_p_8_1(
  void * mercury__int__env_ptr_arg);

static void MR_CALL 
mercury__int__fold_down2_7_p_7_1(
  void * mercury__int__env_ptr_arg);

static void MR_CALL 
mercury__int__fold_up2_7_p_9_1(
  void * mercury__int__env_ptr_arg);

static void MR_CALL 
mercury__int__fold_up2_7_p_8_1(
  void * mercury__int__env_ptr_arg);

static void MR_CALL 
mercury__int__fold_down_5_p_8_1(
  void * mercury__int__env_ptr_arg);

static void MR_CALL 
mercury__int__fold_down_5_p_7_1(
  void * mercury__int__env_ptr_arg);

static void MR_CALL 
mercury__int__fold_up_5_p_8_1(
  void * mercury__int__env_ptr_arg);

static void MR_CALL 
mercury__int__fold_up_5_p_7_1(
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
#include "uint.mh"
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

static MR_Box MR_CALL 
mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__to_int_1_1_f_0_10001(
  MR_Box mercury__int__closure_arg,
  MR_Box mercury__int__wrapper_arg_1)
{
  {
    MR_Box mercury__int__wrapper_arg_2;
    MR_Box mercury__int__closure;
    MR_Integer mercury__int__conv0_X_2;

    mercury__int__closure = mercury__int__closure_arg;
    {
      mercury__int__conv0_X_2 = mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__to_int_1_1_f_0(((MR_Integer) mercury__int__wrapper_arg_1));
    }
    mercury__int__wrapper_arg_2 = ((MR_Box) (mercury__int__conv0_X_2));
    return mercury__int__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__from_int_1_1_f_0_10001(
  MR_Box mercury__int__closure_arg,
  MR_Box mercury__int__wrapper_arg_1,
  MR_Box * mercury__int__wrapper_arg_2)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Box mercury__int__closure;
    MR_Integer mercury__int__conv0_X_2;

    mercury__int__closure = mercury__int__closure_arg;
    {
      mercury__int__succeeded = mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__from_int_1_1_f_0(((MR_Integer) mercury__int__wrapper_arg_1), &mercury__int__conv0_X_2);
    }
    if (mercury__int__succeeded)
      {
        *mercury__int__wrapper_arg_2 = ((MR_Box) (mercury__int__conv0_X_2));
        mercury__int__succeeded = MR_TRUE;
      }
    return mercury__int__succeeded;
  }
}

static MR_Integer MR_CALL 
mercury__int__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__int__succeeded;

    return (MR_Integer) 1200;
  }
}

MR_bool MR_CALL 
mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__from_int_1_1_f_0(
  MR_Integer mercury__int__X_3,
  MR_Integer * mercury__int__X_2)
{
  {
    *mercury__int__X_2 = mercury__int__X_3;
    return MR_TRUE;
  }
}

MR_Integer MR_CALL 
mercury__int__ClassMethod_for_enum__enum____int__arity0______enum__to_int_1_1_f_0(
  MR_Integer mercury__int__X_3)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__X_2 = mercury__int__X_3;

    return mercury__int__X_2;
  }
}

static void MR_CALL 
mercury__int__log2_loop_3_p_0(
  MR_Integer mercury__int__CurX_4,
  MR_Integer mercury__int__CurLogXSoFar_5,
  MR_Integer * mercury__int__CeilLogX_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__CurX_4 == (MR_Integer) 1);

        if (mercury__int__succeeded)
          *mercury__int__CeilLogX_6 = mercury__int__CurLogXSoFar_5;
        else
          {
            MR_Integer mercury__int__NextX_7;
            MR_Integer mercury__int__NextLogXSoFar_8;
            MR_Integer mercury__int__Var_9 = (mercury__int__CurX_4 + (MR_Integer) 1);

            mercury__int__NextX_7 = (mercury__int__Var_9 / (MR_Integer) 2);
            mercury__int__NextLogXSoFar_8 = (mercury__int__CurLogXSoFar_5 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_CurX_4 = mercury__int__NextX_7;
              MR_Integer mercury__int__next_value_of_CurLogXSoFar_5 = mercury__int__NextLogXSoFar_8;

              mercury__int__CurLogXSoFar_5 = mercury__int__next_value_of_CurLogXSoFar_5;
              mercury__int__CurX_4 = mercury__int__next_value_of_CurX_4;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Integer MR_CALL 
mercury__int__multiply_by_pow_3_f_0(
  MR_Integer mercury__int__Scale0_5,
  MR_Integer mercury__int__Base_6,
  MR_Integer mercury__int__Exp_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Exp_7 == (MR_Integer) 0);
        MR_Integer mercury__int__Result_8;

        if (mercury__int__succeeded)
          mercury__int__Result_8 = mercury__int__Scale0_5;
        else
          {
            MR_Integer mercury__int__Scale1_9;
            MR_Integer mercury__int__Var_10;
            MR_Integer mercury__int__Var_12;
            MR_Integer mercury__int__Var_15 = (mercury__int__Exp_7 & (MR_Integer) 1);

            mercury__int__succeeded = (mercury__int__Var_15 == (MR_Integer) 0);
            mercury__int__succeeded = !(mercury__int__succeeded);
            if (mercury__int__succeeded)
              mercury__int__Scale1_9 = (mercury__int__Scale0_5 * mercury__int__Base_6);
            else
              mercury__int__Scale1_9 = mercury__int__Scale0_5;
            mercury__int__Var_10 = (mercury__int__Base_6 * mercury__int__Base_6);
            {
              mercury__int__Var_12 = mercury__int__div_2_f_0(mercury__int__Exp_7, (MR_Integer) 2);
            }
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Scale0_5 = mercury__int__Scale1_9;
              MR_Integer mercury__int__next_value_of_Base_6 = mercury__int__Var_10;
              MR_Integer mercury__int__next_value_of_Exp_7 = mercury__int__Var_12;

              mercury__int__Exp_7 = mercury__int__next_value_of_Exp_7;
              mercury__int__Base_6 = mercury__int__next_value_of_Base_6;
              mercury__int__Scale0_5 = mercury__int__next_value_of_Scale0_5;
            }
            continue;
          }
        return mercury__int__Result_8;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__int__int_domain_checks_0_p_0(void)
{
  {
    MR_bool mercury__int__succeeded;

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
mercury__int__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__int__succeeded;
  }
}

MR_Integer MR_CALL 
mercury__int__rem_bits_per_int_1_f_0(
  MR_Integer mercury__int__Int_1)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__Rem_2;

{
#define MR_PROC_LABEL mercury__int__rem_bits_per_int_1_f_0

	MR_Integer Int;
	MR_Integer Rem;

	Int =  mercury__int__Int_1 ;
		{

    Rem = Int % ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__int__Rem_2  = Rem;
}
    return mercury__int__Rem_2;
  }
}

MR_Integer MR_CALL 
mercury__int__times_bits_per_int_1_f_0(
  MR_Integer mercury__int__Int_1)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__Result_2;

{
#define MR_PROC_LABEL mercury__int__times_bits_per_int_1_f_0

	MR_Integer Int;
	MR_Integer Result;

	Int =  mercury__int__Int_1 ;
		{

    Result = Int * ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__int__Result_2  = Result;
}
    return mercury__int__Result_2;
  }
}

MR_Integer MR_CALL 
mercury__int__quot_bits_per_int_1_f_0(
  MR_Integer mercury__int__Int_1)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__Div_2;

{
#define MR_PROC_LABEL mercury__int__quot_bits_per_int_1_f_0

	MR_Integer Int;
	MR_Integer Div;

	Int =  mercury__int__Int_1 ;
		{

    Div = Int / ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__int__Div_2  = Div;
}
    return mercury__int__Div_2;
  }
}

MR_Integer MR_CALL 
mercury__int__floor_to_multiple_of_bits_per_int_1_f_0(
  MR_Integer mercury__int__X_3)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__Floor_4;
    MR_Integer mercury__int__Trunc_5;
    MR_Integer mercury__int__Floor0_6;

{
#define MR_PROC_LABEL mercury__int__floor_to_multiple_of_bits_per_int_1_f_0

	MR_Integer Int;
	MR_Integer Div;

	Int =  mercury__int__X_3 ;
		{

    Div = Int / ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__int__Trunc_5  = Div;
}
{
#define MR_PROC_LABEL mercury__int__floor_to_multiple_of_bits_per_int_1_f_0

	MR_Integer Int;
	MR_Integer Result;

	Int =  mercury__int__Trunc_5 ;
		{

    Result = Int * ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__int__Floor0_6  = Result;
}
    mercury__int__succeeded = (mercury__int__Floor0_6 > mercury__int__X_3);
    if (mercury__int__succeeded)
      {
        MR_Integer mercury__int__Var_7;

{
#define MR_PROC_LABEL mercury__int__floor_to_multiple_of_bits_per_int_1_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__int__Var_7  = Bits;
}
        mercury__int__Floor_4 = (mercury__int__Floor0_6 - mercury__int__Var_7);
      }
    else
      mercury__int__Floor_4 = mercury__int__Floor0_6;
    return mercury__int__Floor_4;
  }
}

MR_Word MR_CALL 
mercury__int__int_to_doc_1_f_0(
  MR_Integer mercury__int__X_3)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Word mercury__int__HeadVar__2_2;
    MR_String mercury__int__Var_4;

    {
      mercury__string__int_to_base_string_3_p_0(mercury__int__X_3, (MR_Integer) 10, &mercury__int__Var_4);
    }
    {
      mercury__int__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__int__HeadVar__2_2, 0) = ((MR_Box) (mercury__int__Var_4));
    }
    return mercury__int__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__int__all_true_in_range_3_p_0(
  MR_Word mercury__int__P_4,
  MR_Integer mercury__int__Lo_5,
  MR_Integer mercury__int__Hi_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_5 <= mercury__int__Hi_6);

        if (mercury__int__succeeded)
          {
            MR_Integer mercury__int__Var_7;
            MR_Integer mercury__int__Var_8;
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__int__P_4, (MR_Integer) 1)));

            {
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_4), ((MR_Box) (mercury__int__Lo_5)));
            }
            if (mercury__int__succeeded)
              {
                mercury__int__Var_8 = (MR_Integer) 1;
                mercury__int__Var_7 = (mercury__int__Lo_5 + mercury__int__Var_8);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__int__next_value_of_Lo_5 = mercury__int__Var_7;

                  mercury__int__Lo_5 = mercury__int__next_value_of_Lo_5;
                }
                continue;
              }
          }
        else
          mercury__int__succeeded = MR_TRUE;
        return mercury__int__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__int__nondet_int_in_range_3_p_0(
  MR_Integer mercury__int__Lo_4,
  MR_Integer mercury__int__Hi_5,
  MR_Integer * mercury__int__I_6,
  MR_Cont mercury__int__cont,
  void * mercury__int__cont_env_ptr)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_4 < mercury__int__Hi_5);

        if (mercury__int__succeeded)
          {
            *mercury__int__I_6 = mercury__int__Lo_4;
            {
              mercury__int__cont(mercury__int__cont_env_ptr);
            }
            {
              MR_Integer mercury__int__Var_7 = (mercury__int__Lo_4 + (MR_Integer) 1);

              /* direct tailcall eliminated */
              {
                MR_Integer mercury__int__next_value_of_Lo_4 = mercury__int__Var_7;

                mercury__int__Lo_4 = mercury__int__next_value_of_Lo_4;
              }
              continue;
            }
          }
        else
          {
            mercury__int__succeeded = (mercury__int__Lo_4 == mercury__int__Hi_5);
            if (mercury__int__succeeded)
              {
                *mercury__int__I_6 = mercury__int__Lo_4;
                mercury__int__succeeded = MR_TRUE;
              }
            if (mercury__int__succeeded)
              {
                mercury__int__cont(mercury__int__cont_env_ptr);
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__int__fold_down3_9_p_9_1(
  void * mercury__int__env_ptr_arg)
{
  {
    struct mercury__int__fold_down3_9_p_9_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_down3_9_p_9_env_0_s *) mercury__int__env_ptr_arg;

    (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__Var_29 = (MR_Integer) 1;
    (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__Var_25 = ((mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__Hi_12 - (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__Var_29);
    {
      mercury__int__fold_down3_9_p_9((mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__TypeInfo_for_T_30, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__TypeInfo_for_U_31, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__TypeInfo_for_V_32, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__P_10, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__Lo_11, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__Var_25, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_A_22_22, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_A_17, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_B_23_23, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_B_19, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_C_24_24, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_C_21, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_9_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__int__fold_down3_9_p_9(
  MR_Word mercury__int__TypeInfo_for_T_30,
  MR_Word mercury__int__TypeInfo_for_U_31,
  MR_Word mercury__int__TypeInfo_for_V_32,
  MR_Word mercury__int__P_10,
  MR_Integer mercury__int__Lo_11,
  MR_Integer mercury__int__Hi_12,
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
  MR_Box * mercury__int__STATE_VARIABLE_C_21,
  MR_Cont mercury__int__cont,
  void * mercury__int__cont_env_ptr)
{
  {
    struct mercury__int__fold_down3_9_p_9_env_0_s mercury__int__env;

    (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__TypeInfo_for_T_30 = mercury__int__TypeInfo_for_T_30;
    (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__TypeInfo_for_U_31 = mercury__int__TypeInfo_for_U_31;
    (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__TypeInfo_for_V_32 = mercury__int__TypeInfo_for_V_32;
    (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__P_10 = mercury__int__P_10;
    (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__Lo_11 = mercury__int__Lo_11;
    (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__Hi_12 = mercury__int__Hi_12;
    (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_17;
    (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_19;
    (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_21;
    (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__cont = mercury__int__cont;
    (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__cont_env_ptr = mercury__int__cont_env_ptr;
    {
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__Lo_11 <= (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__Hi_12);

      if (mercury__int__succeeded)
        {
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__P_10, (MR_Integer) 1)));

          {
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__P_10), ((MR_Box) ((mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__Hi_12)), mercury__int__STATE_VARIABLE_A_0_16, &(mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &(mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &(mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_C_24_24, mercury__int__fold_down3_9_p_9_1, &mercury__int__env);
          }
        }
      else
        {
          *((mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_C_21) = mercury__int__STATE_VARIABLE_C_0_20;
          *((mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_B_19) = mercury__int__STATE_VARIABLE_B_0_18;
          *((mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__STATE_VARIABLE_A_17) = mercury__int__STATE_VARIABLE_A_0_16;
          {
            ((mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__cont)((mercury__int__env).mercury__int__fold_down3_9_p_9_env_0__cont_env_ptr);
          }
        }
    }
  }
}

static void MR_CALL 
mercury__int__fold_down3_9_p_8_1(
  void * mercury__int__env_ptr_arg)
{
  {
    struct mercury__int__fold_down3_9_p_8_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_down3_9_p_8_env_0_s *) mercury__int__env_ptr_arg;

    (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__Var_29 = (MR_Integer) 1;
    (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__Var_25 = ((mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__Hi_12 - (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__Var_29);
    {
      mercury__int__fold_down3_9_p_8((mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__TypeInfo_for_T_30, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__TypeInfo_for_U_31, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__TypeInfo_for_V_32, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__P_10, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__Lo_11, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__Var_25, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_A_22_22, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_A_17, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_B_23_23, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_B_19, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_C_24_24, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_C_21, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_down3_9_p_8_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__int__fold_down3_9_p_8(
  MR_Word mercury__int__TypeInfo_for_T_30,
  MR_Word mercury__int__TypeInfo_for_U_31,
  MR_Word mercury__int__TypeInfo_for_V_32,
  MR_Word mercury__int__P_10,
  MR_Integer mercury__int__Lo_11,
  MR_Integer mercury__int__Hi_12,
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
  MR_Box * mercury__int__STATE_VARIABLE_C_21,
  MR_Cont mercury__int__cont,
  void * mercury__int__cont_env_ptr)
{
  {
    struct mercury__int__fold_down3_9_p_8_env_0_s mercury__int__env;

    (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__TypeInfo_for_T_30 = mercury__int__TypeInfo_for_T_30;
    (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__TypeInfo_for_U_31 = mercury__int__TypeInfo_for_U_31;
    (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__TypeInfo_for_V_32 = mercury__int__TypeInfo_for_V_32;
    (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__P_10 = mercury__int__P_10;
    (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__Lo_11 = mercury__int__Lo_11;
    (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__Hi_12 = mercury__int__Hi_12;
    (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_17;
    (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_19;
    (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_21;
    (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__cont = mercury__int__cont;
    (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__cont_env_ptr = mercury__int__cont_env_ptr;
    {
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__Lo_11 <= (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__Hi_12);

      if (mercury__int__succeeded)
        {
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__P_10, (MR_Integer) 1)));

          {
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__P_10), ((MR_Box) ((mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__Hi_12)), mercury__int__STATE_VARIABLE_A_0_16, &(mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &(mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &(mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_C_24_24, mercury__int__fold_down3_9_p_8_1, &mercury__int__env);
          }
        }
      else
        {
          *((mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_C_21) = mercury__int__STATE_VARIABLE_C_0_20;
          *((mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_B_19) = mercury__int__STATE_VARIABLE_B_0_18;
          *((mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__STATE_VARIABLE_A_17) = mercury__int__STATE_VARIABLE_A_0_16;
          {
            ((mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__cont)((mercury__int__env).mercury__int__fold_down3_9_p_8_env_0__cont_env_ptr);
          }
        }
    }
  }
}

MR_bool MR_CALL 
mercury__int__fold_down3_9_p_7(
  MR_Word mercury__int__TypeInfo_for_T_30,
  MR_Word mercury__int__TypeInfo_for_U_31,
  MR_Word mercury__int__TypeInfo_for_V_32,
  MR_Word mercury__int__P_10,
  MR_Integer mercury__int__Lo_11,
  MR_Integer mercury__int__Hi_12,
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
            MR_Integer mercury__int__Var_25;
            MR_Integer mercury__int__Var_29;
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

            {
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Hi_12)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
            if (mercury__int__succeeded)
              {
                mercury__int__Var_29 = (MR_Integer) 1;
                mercury__int__Var_25 = (mercury__int__Hi_12 - mercury__int__Var_29);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__int__next_value_of_Hi_12 = mercury__int__Var_25;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_22_22;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_23_23;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_24_24;

                  mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__next_value_of_STATE_VARIABLE_C_0_20;
                  mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__next_value_of_STATE_VARIABLE_B_0_18;
                  mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__next_value_of_STATE_VARIABLE_A_0_16;
                  mercury__int__Hi_12 = mercury__int__next_value_of_Hi_12;
                }
                continue;
              }
          }
        else
          {
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
            mercury__int__succeeded = MR_TRUE;
          }
        return mercury__int__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__int__fold_down3_9_p_6(
  MR_Word mercury__int__TypeInfo_for_T_30,
  MR_Word mercury__int__TypeInfo_for_U_31,
  MR_Word mercury__int__TypeInfo_for_V_32,
  MR_Word mercury__int__P_10,
  MR_Integer mercury__int__Lo_11,
  MR_Integer mercury__int__Hi_12,
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
            MR_Integer mercury__int__Var_25;
            MR_Integer mercury__int__Var_29;
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

            {
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Hi_12)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
            if (mercury__int__succeeded)
              {
                mercury__int__Var_29 = (MR_Integer) 1;
                mercury__int__Var_25 = (mercury__int__Hi_12 - mercury__int__Var_29);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__int__next_value_of_Hi_12 = mercury__int__Var_25;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_22_22;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_23_23;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_24_24;

                  mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__next_value_of_STATE_VARIABLE_C_0_20;
                  mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__next_value_of_STATE_VARIABLE_B_0_18;
                  mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__next_value_of_STATE_VARIABLE_A_0_16;
                  mercury__int__Hi_12 = mercury__int__next_value_of_Hi_12;
                }
                continue;
              }
          }
        else
          {
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
            mercury__int__succeeded = MR_TRUE;
          }
        return mercury__int__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__int__fold_down3_9_p_5(
  MR_Word mercury__int__TypeInfo_for_T_30,
  MR_Word mercury__int__TypeInfo_for_U_31,
  MR_Word mercury__int__TypeInfo_for_V_32,
  MR_Word mercury__int__P_10,
  MR_Integer mercury__int__Lo_11,
  MR_Integer mercury__int__Hi_12,
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
            MR_Integer mercury__int__Var_25;
            MR_Integer mercury__int__Var_29;
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

            {
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Hi_12)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
            if (mercury__int__succeeded)
              {
                mercury__int__Var_29 = (MR_Integer) 1;
                mercury__int__Var_25 = (mercury__int__Hi_12 - mercury__int__Var_29);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__int__next_value_of_Hi_12 = mercury__int__Var_25;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_22_22;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_23_23;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_24_24;

                  mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__next_value_of_STATE_VARIABLE_C_0_20;
                  mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__next_value_of_STATE_VARIABLE_B_0_18;
                  mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__next_value_of_STATE_VARIABLE_A_0_16;
                  mercury__int__Hi_12 = mercury__int__next_value_of_Hi_12;
                }
                continue;
              }
          }
        else
          {
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
            mercury__int__succeeded = MR_TRUE;
          }
        return mercury__int__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_down3_9_p_4(
  MR_Word mercury__int__TypeInfo_for_T_30,
  MR_Word mercury__int__TypeInfo_for_U_31,
  MR_Word mercury__int__TypeInfo_for_V_32,
  MR_Word mercury__int__P_10,
  MR_Integer mercury__int__Lo_11,
  MR_Integer mercury__int__Hi_12,
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
            MR_Integer mercury__int__Var_25;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Hi_12)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
            mercury__int__Var_25 = (mercury__int__Hi_12 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Hi_12 = mercury__int__Var_25;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_22_22;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_23_23;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_24_24;

              mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__next_value_of_STATE_VARIABLE_C_0_20;
              mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__next_value_of_STATE_VARIABLE_B_0_18;
              mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__next_value_of_STATE_VARIABLE_A_0_16;
              mercury__int__Hi_12 = mercury__int__next_value_of_Hi_12;
            }
            continue;
          }
        else
          {
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_down3_9_p_3(
  MR_Word mercury__int__TypeInfo_for_T_30,
  MR_Word mercury__int__TypeInfo_for_U_31,
  MR_Word mercury__int__TypeInfo_for_V_32,
  MR_Word mercury__int__P_10,
  MR_Integer mercury__int__Lo_11,
  MR_Integer mercury__int__Hi_12,
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
            MR_Integer mercury__int__Var_25;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Hi_12)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
            mercury__int__Var_25 = (mercury__int__Hi_12 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Hi_12 = mercury__int__Var_25;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_22_22;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_23_23;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_24_24;

              mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__next_value_of_STATE_VARIABLE_C_0_20;
              mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__next_value_of_STATE_VARIABLE_B_0_18;
              mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__next_value_of_STATE_VARIABLE_A_0_16;
              mercury__int__Hi_12 = mercury__int__next_value_of_Hi_12;
            }
            continue;
          }
        else
          {
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_down3_9_p_2(
  MR_Word mercury__int__TypeInfo_for_T_30,
  MR_Word mercury__int__TypeInfo_for_U_31,
  MR_Word mercury__int__TypeInfo_for_V_32,
  MR_Word mercury__int__P_10,
  MR_Integer mercury__int__Lo_11,
  MR_Integer mercury__int__Hi_12,
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
            MR_Integer mercury__int__Var_25;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Hi_12)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
            mercury__int__Var_25 = (mercury__int__Hi_12 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Hi_12 = mercury__int__Var_25;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_22_22;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_23_23;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_24_24;

              mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__next_value_of_STATE_VARIABLE_C_0_20;
              mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__next_value_of_STATE_VARIABLE_B_0_18;
              mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__next_value_of_STATE_VARIABLE_A_0_16;
              mercury__int__Hi_12 = mercury__int__next_value_of_Hi_12;
            }
            continue;
          }
        else
          {
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_down3_9_p_1(
  MR_Word mercury__int__TypeInfo_for_T_30,
  MR_Word mercury__int__TypeInfo_for_U_31,
  MR_Word mercury__int__TypeInfo_for_V_32,
  MR_Word mercury__int__P_10,
  MR_Integer mercury__int__Lo_11,
  MR_Integer mercury__int__Hi_12,
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
            MR_Integer mercury__int__Var_25;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Hi_12)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
            mercury__int__Var_25 = (mercury__int__Hi_12 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Hi_12 = mercury__int__Var_25;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_22_22;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_23_23;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_24_24;

              mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__next_value_of_STATE_VARIABLE_C_0_20;
              mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__next_value_of_STATE_VARIABLE_B_0_18;
              mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__next_value_of_STATE_VARIABLE_A_0_16;
              mercury__int__Hi_12 = mercury__int__next_value_of_Hi_12;
            }
            continue;
          }
        else
          {
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_down3_9_p_0(
  MR_Word mercury__int__TypeInfo_for_T_30,
  MR_Word mercury__int__TypeInfo_for_U_31,
  MR_Word mercury__int__TypeInfo_for_V_32,
  MR_Word mercury__int__P_10,
  MR_Integer mercury__int__Lo_11,
  MR_Integer mercury__int__Hi_12,
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
            MR_Integer mercury__int__Var_25;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Hi_12)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
            mercury__int__Var_25 = (mercury__int__Hi_12 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Hi_12 = mercury__int__Var_25;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_22_22;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_23_23;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_24_24;

              mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__next_value_of_STATE_VARIABLE_C_0_20;
              mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__next_value_of_STATE_VARIABLE_B_0_18;
              mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__next_value_of_STATE_VARIABLE_A_0_16;
              mercury__int__Hi_12 = mercury__int__next_value_of_Hi_12;
            }
            continue;
          }
        else
          {
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__int__fold_up3_9_p_9_1(
  void * mercury__int__env_ptr_arg)
{
  {
    struct mercury__int__fold_up3_9_p_9_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_up3_9_p_9_env_0_s *) mercury__int__env_ptr_arg;

    (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__Var_29 = (MR_Integer) 1;
    (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__Var_25 = ((mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__Lo_11 + (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__Var_29);
    {
      mercury__int__fold_up3_9_p_9((mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__TypeInfo_for_T_30, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__TypeInfo_for_U_31, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__TypeInfo_for_V_32, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__P_10, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__Var_25, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__Hi_12, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_A_22_22, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_A_17, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_B_23_23, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_B_19, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_C_24_24, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_C_21, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_9_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__int__fold_up3_9_p_9(
  MR_Word mercury__int__TypeInfo_for_T_30,
  MR_Word mercury__int__TypeInfo_for_U_31,
  MR_Word mercury__int__TypeInfo_for_V_32,
  MR_Word mercury__int__P_10,
  MR_Integer mercury__int__Lo_11,
  MR_Integer mercury__int__Hi_12,
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
  MR_Box * mercury__int__STATE_VARIABLE_C_21,
  MR_Cont mercury__int__cont,
  void * mercury__int__cont_env_ptr)
{
  {
    struct mercury__int__fold_up3_9_p_9_env_0_s mercury__int__env;

    (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__TypeInfo_for_T_30 = mercury__int__TypeInfo_for_T_30;
    (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__TypeInfo_for_U_31 = mercury__int__TypeInfo_for_U_31;
    (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__TypeInfo_for_V_32 = mercury__int__TypeInfo_for_V_32;
    (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__P_10 = mercury__int__P_10;
    (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__Lo_11 = mercury__int__Lo_11;
    (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__Hi_12 = mercury__int__Hi_12;
    (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_17;
    (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_19;
    (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_21;
    (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__cont = mercury__int__cont;
    (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__cont_env_ptr = mercury__int__cont_env_ptr;
    {
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__Lo_11 <= (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__Hi_12);

      if (mercury__int__succeeded)
        {
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__P_10, (MR_Integer) 1)));

          {
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__P_10), ((MR_Box) ((mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__Lo_11)), mercury__int__STATE_VARIABLE_A_0_16, &(mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &(mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &(mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_C_24_24, mercury__int__fold_up3_9_p_9_1, &mercury__int__env);
          }
        }
      else
        {
          *((mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_C_21) = mercury__int__STATE_VARIABLE_C_0_20;
          *((mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_B_19) = mercury__int__STATE_VARIABLE_B_0_18;
          *((mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__STATE_VARIABLE_A_17) = mercury__int__STATE_VARIABLE_A_0_16;
          {
            ((mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__cont)((mercury__int__env).mercury__int__fold_up3_9_p_9_env_0__cont_env_ptr);
          }
        }
    }
  }
}

static void MR_CALL 
mercury__int__fold_up3_9_p_8_1(
  void * mercury__int__env_ptr_arg)
{
  {
    struct mercury__int__fold_up3_9_p_8_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_up3_9_p_8_env_0_s *) mercury__int__env_ptr_arg;

    (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__Var_29 = (MR_Integer) 1;
    (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__Var_25 = ((mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__Lo_11 + (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__Var_29);
    {
      mercury__int__fold_up3_9_p_8((mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__TypeInfo_for_T_30, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__TypeInfo_for_U_31, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__TypeInfo_for_V_32, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__P_10, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__Var_25, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__Hi_12, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_A_22_22, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_A_17, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_B_23_23, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_B_19, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_C_24_24, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_C_21, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_up3_9_p_8_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__int__fold_up3_9_p_8(
  MR_Word mercury__int__TypeInfo_for_T_30,
  MR_Word mercury__int__TypeInfo_for_U_31,
  MR_Word mercury__int__TypeInfo_for_V_32,
  MR_Word mercury__int__P_10,
  MR_Integer mercury__int__Lo_11,
  MR_Integer mercury__int__Hi_12,
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
  MR_Box * mercury__int__STATE_VARIABLE_C_21,
  MR_Cont mercury__int__cont,
  void * mercury__int__cont_env_ptr)
{
  {
    struct mercury__int__fold_up3_9_p_8_env_0_s mercury__int__env;

    (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__TypeInfo_for_T_30 = mercury__int__TypeInfo_for_T_30;
    (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__TypeInfo_for_U_31 = mercury__int__TypeInfo_for_U_31;
    (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__TypeInfo_for_V_32 = mercury__int__TypeInfo_for_V_32;
    (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__P_10 = mercury__int__P_10;
    (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__Lo_11 = mercury__int__Lo_11;
    (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__Hi_12 = mercury__int__Hi_12;
    (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_17;
    (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_19;
    (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_21;
    (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__cont = mercury__int__cont;
    (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__cont_env_ptr = mercury__int__cont_env_ptr;
    {
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__Lo_11 <= (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__Hi_12);

      if (mercury__int__succeeded)
        {
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__P_10, (MR_Integer) 1)));

          {
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__P_10), ((MR_Box) ((mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__Lo_11)), mercury__int__STATE_VARIABLE_A_0_16, &(mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &(mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &(mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_C_24_24, mercury__int__fold_up3_9_p_8_1, &mercury__int__env);
          }
        }
      else
        {
          *((mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_C_21) = mercury__int__STATE_VARIABLE_C_0_20;
          *((mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_B_19) = mercury__int__STATE_VARIABLE_B_0_18;
          *((mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__STATE_VARIABLE_A_17) = mercury__int__STATE_VARIABLE_A_0_16;
          {
            ((mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__cont)((mercury__int__env).mercury__int__fold_up3_9_p_8_env_0__cont_env_ptr);
          }
        }
    }
  }
}

MR_bool MR_CALL 
mercury__int__fold_up3_9_p_7(
  MR_Word mercury__int__TypeInfo_for_T_30,
  MR_Word mercury__int__TypeInfo_for_U_31,
  MR_Word mercury__int__TypeInfo_for_V_32,
  MR_Word mercury__int__P_10,
  MR_Integer mercury__int__Lo_11,
  MR_Integer mercury__int__Hi_12,
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
            MR_Integer mercury__int__Var_25;
            MR_Integer mercury__int__Var_29;
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

            {
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Lo_11)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
            if (mercury__int__succeeded)
              {
                mercury__int__Var_29 = (MR_Integer) 1;
                mercury__int__Var_25 = (mercury__int__Lo_11 + mercury__int__Var_29);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__int__next_value_of_Lo_11 = mercury__int__Var_25;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_22_22;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_23_23;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_24_24;

                  mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__next_value_of_STATE_VARIABLE_C_0_20;
                  mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__next_value_of_STATE_VARIABLE_B_0_18;
                  mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__next_value_of_STATE_VARIABLE_A_0_16;
                  mercury__int__Lo_11 = mercury__int__next_value_of_Lo_11;
                }
                continue;
              }
          }
        else
          {
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
            mercury__int__succeeded = MR_TRUE;
          }
        return mercury__int__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__int__fold_up3_9_p_6(
  MR_Word mercury__int__TypeInfo_for_T_30,
  MR_Word mercury__int__TypeInfo_for_U_31,
  MR_Word mercury__int__TypeInfo_for_V_32,
  MR_Word mercury__int__P_10,
  MR_Integer mercury__int__Lo_11,
  MR_Integer mercury__int__Hi_12,
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
            MR_Integer mercury__int__Var_25;
            MR_Integer mercury__int__Var_29;
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

            {
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Lo_11)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
            if (mercury__int__succeeded)
              {
                mercury__int__Var_29 = (MR_Integer) 1;
                mercury__int__Var_25 = (mercury__int__Lo_11 + mercury__int__Var_29);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__int__next_value_of_Lo_11 = mercury__int__Var_25;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_22_22;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_23_23;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_24_24;

                  mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__next_value_of_STATE_VARIABLE_C_0_20;
                  mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__next_value_of_STATE_VARIABLE_B_0_18;
                  mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__next_value_of_STATE_VARIABLE_A_0_16;
                  mercury__int__Lo_11 = mercury__int__next_value_of_Lo_11;
                }
                continue;
              }
          }
        else
          {
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
            mercury__int__succeeded = MR_TRUE;
          }
        return mercury__int__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__int__fold_up3_9_p_5(
  MR_Word mercury__int__TypeInfo_for_T_30,
  MR_Word mercury__int__TypeInfo_for_U_31,
  MR_Word mercury__int__TypeInfo_for_V_32,
  MR_Word mercury__int__P_10,
  MR_Integer mercury__int__Lo_11,
  MR_Integer mercury__int__Hi_12,
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
            MR_Integer mercury__int__Var_25;
            MR_Integer mercury__int__Var_29;
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

            {
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Lo_11)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
            if (mercury__int__succeeded)
              {
                mercury__int__Var_29 = (MR_Integer) 1;
                mercury__int__Var_25 = (mercury__int__Lo_11 + mercury__int__Var_29);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__int__next_value_of_Lo_11 = mercury__int__Var_25;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_22_22;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_23_23;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_24_24;

                  mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__next_value_of_STATE_VARIABLE_C_0_20;
                  mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__next_value_of_STATE_VARIABLE_B_0_18;
                  mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__next_value_of_STATE_VARIABLE_A_0_16;
                  mercury__int__Lo_11 = mercury__int__next_value_of_Lo_11;
                }
                continue;
              }
          }
        else
          {
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
            mercury__int__succeeded = MR_TRUE;
          }
        return mercury__int__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_up3_9_p_4(
  MR_Word mercury__int__TypeInfo_for_T_30,
  MR_Word mercury__int__TypeInfo_for_U_31,
  MR_Word mercury__int__TypeInfo_for_V_32,
  MR_Word mercury__int__P_10,
  MR_Integer mercury__int__Lo_11,
  MR_Integer mercury__int__Hi_12,
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
            MR_Integer mercury__int__Var_25;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Lo_11)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
            mercury__int__Var_25 = (mercury__int__Lo_11 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Lo_11 = mercury__int__Var_25;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_22_22;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_23_23;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_24_24;

              mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__next_value_of_STATE_VARIABLE_C_0_20;
              mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__next_value_of_STATE_VARIABLE_B_0_18;
              mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__next_value_of_STATE_VARIABLE_A_0_16;
              mercury__int__Lo_11 = mercury__int__next_value_of_Lo_11;
            }
            continue;
          }
        else
          {
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_up3_9_p_3(
  MR_Word mercury__int__TypeInfo_for_T_30,
  MR_Word mercury__int__TypeInfo_for_U_31,
  MR_Word mercury__int__TypeInfo_for_V_32,
  MR_Word mercury__int__P_10,
  MR_Integer mercury__int__Lo_11,
  MR_Integer mercury__int__Hi_12,
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
            MR_Integer mercury__int__Var_25;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Lo_11)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
            mercury__int__Var_25 = (mercury__int__Lo_11 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Lo_11 = mercury__int__Var_25;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_22_22;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_23_23;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_24_24;

              mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__next_value_of_STATE_VARIABLE_C_0_20;
              mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__next_value_of_STATE_VARIABLE_B_0_18;
              mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__next_value_of_STATE_VARIABLE_A_0_16;
              mercury__int__Lo_11 = mercury__int__next_value_of_Lo_11;
            }
            continue;
          }
        else
          {
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_up3_9_p_2(
  MR_Word mercury__int__TypeInfo_for_T_30,
  MR_Word mercury__int__TypeInfo_for_U_31,
  MR_Word mercury__int__TypeInfo_for_V_32,
  MR_Word mercury__int__P_10,
  MR_Integer mercury__int__Lo_11,
  MR_Integer mercury__int__Hi_12,
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
            MR_Integer mercury__int__Var_25;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Lo_11)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
            mercury__int__Var_25 = (mercury__int__Lo_11 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Lo_11 = mercury__int__Var_25;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_22_22;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_23_23;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_24_24;

              mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__next_value_of_STATE_VARIABLE_C_0_20;
              mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__next_value_of_STATE_VARIABLE_B_0_18;
              mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__next_value_of_STATE_VARIABLE_A_0_16;
              mercury__int__Lo_11 = mercury__int__next_value_of_Lo_11;
            }
            continue;
          }
        else
          {
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_up3_9_p_1(
  MR_Word mercury__int__TypeInfo_for_T_30,
  MR_Word mercury__int__TypeInfo_for_U_31,
  MR_Word mercury__int__TypeInfo_for_V_32,
  MR_Word mercury__int__P_10,
  MR_Integer mercury__int__Lo_11,
  MR_Integer mercury__int__Hi_12,
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
            MR_Integer mercury__int__Var_25;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Lo_11)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
            mercury__int__Var_25 = (mercury__int__Lo_11 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Lo_11 = mercury__int__Var_25;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_22_22;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_23_23;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_24_24;

              mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__next_value_of_STATE_VARIABLE_C_0_20;
              mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__next_value_of_STATE_VARIABLE_B_0_18;
              mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__next_value_of_STATE_VARIABLE_A_0_16;
              mercury__int__Lo_11 = mercury__int__next_value_of_Lo_11;
            }
            continue;
          }
        else
          {
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_up3_9_p_0(
  MR_Word mercury__int__TypeInfo_for_T_30,
  MR_Word mercury__int__TypeInfo_for_U_31,
  MR_Word mercury__int__TypeInfo_for_V_32,
  MR_Word mercury__int__P_10,
  MR_Integer mercury__int__Lo_11,
  MR_Integer mercury__int__Hi_12,
  MR_Box mercury__int__STATE_VARIABLE_A_0_16,
  MR_Box * mercury__int__STATE_VARIABLE_A_17,
  MR_Box mercury__int__STATE_VARIABLE_B_0_18,
  MR_Box * mercury__int__STATE_VARIABLE_B_19,
  MR_Box mercury__int__STATE_VARIABLE_C_0_20,
  MR_Box * mercury__int__STATE_VARIABLE_C_21)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_11 <= mercury__int__Hi_12);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_22_22;
            MR_Box mercury__int__STATE_VARIABLE_B_23_23;
            MR_Box mercury__int__STATE_VARIABLE_C_24_24;
            MR_Integer mercury__int__Var_25;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_10, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_10), ((MR_Box) (mercury__int__Lo_11)), mercury__int__STATE_VARIABLE_A_0_16, &mercury__int__STATE_VARIABLE_A_22_22, mercury__int__STATE_VARIABLE_B_0_18, &mercury__int__STATE_VARIABLE_B_23_23, mercury__int__STATE_VARIABLE_C_0_20, &mercury__int__STATE_VARIABLE_C_24_24);
            }
            mercury__int__Var_25 = (mercury__int__Lo_11 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Lo_11 = mercury__int__Var_25;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_16 = mercury__int__STATE_VARIABLE_A_22_22;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_18 = mercury__int__STATE_VARIABLE_B_23_23;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_C_0_20 = mercury__int__STATE_VARIABLE_C_24_24;

              mercury__int__STATE_VARIABLE_C_0_20 = mercury__int__next_value_of_STATE_VARIABLE_C_0_20;
              mercury__int__STATE_VARIABLE_B_0_18 = mercury__int__next_value_of_STATE_VARIABLE_B_0_18;
              mercury__int__STATE_VARIABLE_A_0_16 = mercury__int__next_value_of_STATE_VARIABLE_A_0_16;
              mercury__int__Lo_11 = mercury__int__next_value_of_Lo_11;
            }
            continue;
          }
        else
          {
            *mercury__int__STATE_VARIABLE_C_21 = mercury__int__STATE_VARIABLE_C_0_20;
            *mercury__int__STATE_VARIABLE_B_19 = mercury__int__STATE_VARIABLE_B_0_18;
            *mercury__int__STATE_VARIABLE_A_17 = mercury__int__STATE_VARIABLE_A_0_16;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__int__fold_down2_7_p_8_1(
  void * mercury__int__env_ptr_arg)
{
  {
    struct mercury__int__fold_down2_7_p_8_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_down2_7_p_8_env_0_s *) mercury__int__env_ptr_arg;

    (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__Var_22 = (MR_Integer) 1;
    (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__Var_19 = ((mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__Hi_10 - (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__Var_22);
    {
      mercury__int__fold_down2_7_p_8((mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__TypeInfo_for_T_23, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__TypeInfo_for_U_24, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__P_8, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__Lo_9, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__Var_19, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_A_17_17, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_A_14, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_B_18_18, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_B_16, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_8_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__int__fold_down2_7_p_8(
  MR_Word mercury__int__TypeInfo_for_T_23,
  MR_Word mercury__int__TypeInfo_for_U_24,
  MR_Word mercury__int__P_8,
  MR_Integer mercury__int__Lo_9,
  MR_Integer mercury__int__Hi_10,
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
  MR_Box * mercury__int__STATE_VARIABLE_B_16,
  MR_Cont mercury__int__cont,
  void * mercury__int__cont_env_ptr)
{
  {
    struct mercury__int__fold_down2_7_p_8_env_0_s mercury__int__env;

    (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__TypeInfo_for_T_23 = mercury__int__TypeInfo_for_T_23;
    (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__TypeInfo_for_U_24 = mercury__int__TypeInfo_for_U_24;
    (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__P_8 = mercury__int__P_8;
    (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__Lo_9 = mercury__int__Lo_9;
    (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__Hi_10 = mercury__int__Hi_10;
    (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_14;
    (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_16;
    (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__cont = mercury__int__cont;
    (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__cont_env_ptr = mercury__int__cont_env_ptr;
    {
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__Lo_9 <= (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__Hi_10);

      if (mercury__int__succeeded)
        {
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__P_8, (MR_Integer) 1)));

          {
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__P_8), ((MR_Box) ((mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &(mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &(mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_B_18_18, mercury__int__fold_down2_7_p_8_1, &mercury__int__env);
          }
        }
      else
        {
          *((mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_B_16) = mercury__int__STATE_VARIABLE_B_0_15;
          *((mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__STATE_VARIABLE_A_14) = mercury__int__STATE_VARIABLE_A_0_13;
          {
            ((mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__cont)((mercury__int__env).mercury__int__fold_down2_7_p_8_env_0__cont_env_ptr);
          }
        }
    }
  }
}

static void MR_CALL 
mercury__int__fold_down2_7_p_7_1(
  void * mercury__int__env_ptr_arg)
{
  {
    struct mercury__int__fold_down2_7_p_7_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_down2_7_p_7_env_0_s *) mercury__int__env_ptr_arg;

    (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__Var_22 = (MR_Integer) 1;
    (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__Var_19 = ((mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__Hi_10 - (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__Var_22);
    {
      mercury__int__fold_down2_7_p_7((mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__TypeInfo_for_T_23, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__TypeInfo_for_U_24, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__P_8, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__Lo_9, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__Var_19, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_A_17_17, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_A_14, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_B_18_18, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_B_16, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_down2_7_p_7_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__int__fold_down2_7_p_7(
  MR_Word mercury__int__TypeInfo_for_T_23,
  MR_Word mercury__int__TypeInfo_for_U_24,
  MR_Word mercury__int__P_8,
  MR_Integer mercury__int__Lo_9,
  MR_Integer mercury__int__Hi_10,
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
  MR_Box * mercury__int__STATE_VARIABLE_B_16,
  MR_Cont mercury__int__cont,
  void * mercury__int__cont_env_ptr)
{
  {
    struct mercury__int__fold_down2_7_p_7_env_0_s mercury__int__env;

    (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__TypeInfo_for_T_23 = mercury__int__TypeInfo_for_T_23;
    (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__TypeInfo_for_U_24 = mercury__int__TypeInfo_for_U_24;
    (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__P_8 = mercury__int__P_8;
    (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__Lo_9 = mercury__int__Lo_9;
    (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__Hi_10 = mercury__int__Hi_10;
    (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_14;
    (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_16;
    (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__cont = mercury__int__cont;
    (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__cont_env_ptr = mercury__int__cont_env_ptr;
    {
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__Lo_9 <= (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__Hi_10);

      if (mercury__int__succeeded)
        {
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__P_8, (MR_Integer) 1)));

          {
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__P_8), ((MR_Box) ((mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &(mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &(mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_B_18_18, mercury__int__fold_down2_7_p_7_1, &mercury__int__env);
          }
        }
      else
        {
          *((mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_B_16) = mercury__int__STATE_VARIABLE_B_0_15;
          *((mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__STATE_VARIABLE_A_14) = mercury__int__STATE_VARIABLE_A_0_13;
          {
            ((mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__cont)((mercury__int__env).mercury__int__fold_down2_7_p_7_env_0__cont_env_ptr);
          }
        }
    }
  }
}

MR_bool MR_CALL 
mercury__int__fold_down2_7_p_6(
  MR_Word mercury__int__TypeInfo_for_T_23,
  MR_Word mercury__int__TypeInfo_for_U_24,
  MR_Word mercury__int__P_8,
  MR_Integer mercury__int__Lo_9,
  MR_Integer mercury__int__Hi_10,
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
            MR_Integer mercury__int__Var_19;
            MR_Integer mercury__int__Var_22;
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

            {
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
            if (mercury__int__succeeded)
              {
                mercury__int__Var_22 = (MR_Integer) 1;
                mercury__int__Var_19 = (mercury__int__Hi_10 - mercury__int__Var_22);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__int__next_value_of_Hi_10 = mercury__int__Var_19;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_17_17;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_18_18;

                  mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__next_value_of_STATE_VARIABLE_B_0_15;
                  mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__next_value_of_STATE_VARIABLE_A_0_13;
                  mercury__int__Hi_10 = mercury__int__next_value_of_Hi_10;
                }
                continue;
              }
          }
        else
          {
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
            mercury__int__succeeded = MR_TRUE;
          }
        return mercury__int__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__int__fold_down2_7_p_5(
  MR_Word mercury__int__TypeInfo_for_T_23,
  MR_Word mercury__int__TypeInfo_for_U_24,
  MR_Word mercury__int__P_8,
  MR_Integer mercury__int__Lo_9,
  MR_Integer mercury__int__Hi_10,
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
            MR_Integer mercury__int__Var_19;
            MR_Integer mercury__int__Var_22;
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

            {
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
            if (mercury__int__succeeded)
              {
                mercury__int__Var_22 = (MR_Integer) 1;
                mercury__int__Var_19 = (mercury__int__Hi_10 - mercury__int__Var_22);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__int__next_value_of_Hi_10 = mercury__int__Var_19;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_17_17;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_18_18;

                  mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__next_value_of_STATE_VARIABLE_B_0_15;
                  mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__next_value_of_STATE_VARIABLE_A_0_13;
                  mercury__int__Hi_10 = mercury__int__next_value_of_Hi_10;
                }
                continue;
              }
          }
        else
          {
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
            mercury__int__succeeded = MR_TRUE;
          }
        return mercury__int__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_down2_7_p_4(
  MR_Word mercury__int__TypeInfo_for_T_23,
  MR_Word mercury__int__TypeInfo_for_U_24,
  MR_Word mercury__int__P_8,
  MR_Integer mercury__int__Lo_9,
  MR_Integer mercury__int__Hi_10,
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
            MR_Integer mercury__int__Var_19;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
            mercury__int__Var_19 = (mercury__int__Hi_10 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Hi_10 = mercury__int__Var_19;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_17_17;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_18_18;

              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__next_value_of_STATE_VARIABLE_B_0_15;
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__next_value_of_STATE_VARIABLE_A_0_13;
              mercury__int__Hi_10 = mercury__int__next_value_of_Hi_10;
            }
            continue;
          }
        else
          {
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_down2_7_p_3(
  MR_Word mercury__int__TypeInfo_for_T_23,
  MR_Word mercury__int__TypeInfo_for_U_24,
  MR_Word mercury__int__P_8,
  MR_Integer mercury__int__Lo_9,
  MR_Integer mercury__int__Hi_10,
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
            MR_Integer mercury__int__Var_19;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
            mercury__int__Var_19 = (mercury__int__Hi_10 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Hi_10 = mercury__int__Var_19;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_17_17;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_18_18;

              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__next_value_of_STATE_VARIABLE_B_0_15;
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__next_value_of_STATE_VARIABLE_A_0_13;
              mercury__int__Hi_10 = mercury__int__next_value_of_Hi_10;
            }
            continue;
          }
        else
          {
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_down2_7_p_2(
  MR_Word mercury__int__TypeInfo_for_T_23,
  MR_Word mercury__int__TypeInfo_for_U_24,
  MR_Word mercury__int__P_8,
  MR_Integer mercury__int__Lo_9,
  MR_Integer mercury__int__Hi_10,
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
            MR_Integer mercury__int__Var_19;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
            mercury__int__Var_19 = (mercury__int__Hi_10 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Hi_10 = mercury__int__Var_19;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_17_17;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_18_18;

              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__next_value_of_STATE_VARIABLE_B_0_15;
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__next_value_of_STATE_VARIABLE_A_0_13;
              mercury__int__Hi_10 = mercury__int__next_value_of_Hi_10;
            }
            continue;
          }
        else
          {
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_down2_7_p_1(
  MR_Word mercury__int__TypeInfo_for_T_23,
  MR_Word mercury__int__TypeInfo_for_U_24,
  MR_Word mercury__int__P_8,
  MR_Integer mercury__int__Lo_9,
  MR_Integer mercury__int__Hi_10,
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
            MR_Integer mercury__int__Var_19;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
            mercury__int__Var_19 = (mercury__int__Hi_10 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Hi_10 = mercury__int__Var_19;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_17_17;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_18_18;

              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__next_value_of_STATE_VARIABLE_B_0_15;
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__next_value_of_STATE_VARIABLE_A_0_13;
              mercury__int__Hi_10 = mercury__int__next_value_of_Hi_10;
            }
            continue;
          }
        else
          {
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_down2_7_p_0(
  MR_Word mercury__int__TypeInfo_for_T_23,
  MR_Word mercury__int__TypeInfo_for_U_24,
  MR_Word mercury__int__P_8,
  MR_Integer mercury__int__Lo_9,
  MR_Integer mercury__int__Hi_10,
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
            MR_Integer mercury__int__Var_19;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Hi_10)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
            mercury__int__Var_19 = (mercury__int__Hi_10 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Hi_10 = mercury__int__Var_19;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_17_17;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_18_18;

              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__next_value_of_STATE_VARIABLE_B_0_15;
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__next_value_of_STATE_VARIABLE_A_0_13;
              mercury__int__Hi_10 = mercury__int__next_value_of_Hi_10;
            }
            continue;
          }
        else
          {
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__int__fold_up2_7_p_9_1(
  void * mercury__int__env_ptr_arg)
{
  {
    struct mercury__int__fold_up2_7_p_9_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_up2_7_p_9_env_0_s *) mercury__int__env_ptr_arg;

    (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__Var_22 = (MR_Integer) 1;
    (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__Var_19 = ((mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__Lo_9 + (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__Var_22);
    {
      mercury__int__fold_up2_7_p_9((mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__TypeInfo_for_T_23, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__TypeInfo_for_U_24, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__P_8, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__Var_19, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__Hi_10, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_A_17_17, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_A_14, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_B_18_18, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_B_16, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_9_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__int__fold_up2_7_p_9(
  MR_Word mercury__int__TypeInfo_for_T_23,
  MR_Word mercury__int__TypeInfo_for_U_24,
  MR_Word mercury__int__P_8,
  MR_Integer mercury__int__Lo_9,
  MR_Integer mercury__int__Hi_10,
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
  MR_Box * mercury__int__STATE_VARIABLE_B_16,
  MR_Cont mercury__int__cont,
  void * mercury__int__cont_env_ptr)
{
  {
    struct mercury__int__fold_up2_7_p_9_env_0_s mercury__int__env;

    (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__TypeInfo_for_T_23 = mercury__int__TypeInfo_for_T_23;
    (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__TypeInfo_for_U_24 = mercury__int__TypeInfo_for_U_24;
    (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__P_8 = mercury__int__P_8;
    (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__Lo_9 = mercury__int__Lo_9;
    (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__Hi_10 = mercury__int__Hi_10;
    (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_14;
    (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_16;
    (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__cont = mercury__int__cont;
    (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__cont_env_ptr = mercury__int__cont_env_ptr;
    {
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__Lo_9 <= (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__Hi_10);

      if (mercury__int__succeeded)
        {
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__P_8, (MR_Integer) 1)));

          {
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__P_8), ((MR_Box) ((mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &(mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &(mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_B_18_18, mercury__int__fold_up2_7_p_9_1, &mercury__int__env);
          }
        }
      else
        {
          *((mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_B_16) = mercury__int__STATE_VARIABLE_B_0_15;
          *((mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__STATE_VARIABLE_A_14) = mercury__int__STATE_VARIABLE_A_0_13;
          {
            ((mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__cont)((mercury__int__env).mercury__int__fold_up2_7_p_9_env_0__cont_env_ptr);
          }
        }
    }
  }
}

static void MR_CALL 
mercury__int__fold_up2_7_p_8_1(
  void * mercury__int__env_ptr_arg)
{
  {
    struct mercury__int__fold_up2_7_p_8_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_up2_7_p_8_env_0_s *) mercury__int__env_ptr_arg;

    (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__Var_22 = (MR_Integer) 1;
    (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__Var_19 = ((mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__Lo_9 + (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__Var_22);
    {
      mercury__int__fold_up2_7_p_8((mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__TypeInfo_for_T_23, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__TypeInfo_for_U_24, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__P_8, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__Var_19, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__Hi_10, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_A_17_17, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_A_14, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_B_18_18, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_B_16, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_up2_7_p_8_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__int__fold_up2_7_p_8(
  MR_Word mercury__int__TypeInfo_for_T_23,
  MR_Word mercury__int__TypeInfo_for_U_24,
  MR_Word mercury__int__P_8,
  MR_Integer mercury__int__Lo_9,
  MR_Integer mercury__int__Hi_10,
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
  MR_Box * mercury__int__STATE_VARIABLE_B_16,
  MR_Cont mercury__int__cont,
  void * mercury__int__cont_env_ptr)
{
  {
    struct mercury__int__fold_up2_7_p_8_env_0_s mercury__int__env;

    (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__TypeInfo_for_T_23 = mercury__int__TypeInfo_for_T_23;
    (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__TypeInfo_for_U_24 = mercury__int__TypeInfo_for_U_24;
    (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__P_8 = mercury__int__P_8;
    (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__Lo_9 = mercury__int__Lo_9;
    (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__Hi_10 = mercury__int__Hi_10;
    (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_14;
    (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_16;
    (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__cont = mercury__int__cont;
    (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__cont_env_ptr = mercury__int__cont_env_ptr;
    {
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__Lo_9 <= (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__Hi_10);

      if (mercury__int__succeeded)
        {
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__P_8, (MR_Integer) 1)));

          {
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__P_8), ((MR_Box) ((mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &(mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &(mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_B_18_18, mercury__int__fold_up2_7_p_8_1, &mercury__int__env);
          }
        }
      else
        {
          *((mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_B_16) = mercury__int__STATE_VARIABLE_B_0_15;
          *((mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__STATE_VARIABLE_A_14) = mercury__int__STATE_VARIABLE_A_0_13;
          {
            ((mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__cont)((mercury__int__env).mercury__int__fold_up2_7_p_8_env_0__cont_env_ptr);
          }
        }
    }
  }
}

MR_bool MR_CALL 
mercury__int__fold_up2_7_p_7(
  MR_Word mercury__int__TypeInfo_for_T_23,
  MR_Word mercury__int__TypeInfo_for_U_24,
  MR_Word mercury__int__P_8,
  MR_Integer mercury__int__Lo_9,
  MR_Integer mercury__int__Hi_10,
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
            MR_Integer mercury__int__Var_19;
            MR_Integer mercury__int__Var_22;
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

            {
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
            if (mercury__int__succeeded)
              {
                mercury__int__Var_22 = (MR_Integer) 1;
                mercury__int__Var_19 = (mercury__int__Lo_9 + mercury__int__Var_22);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__int__next_value_of_Lo_9 = mercury__int__Var_19;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_17_17;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_18_18;

                  mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__next_value_of_STATE_VARIABLE_B_0_15;
                  mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__next_value_of_STATE_VARIABLE_A_0_13;
                  mercury__int__Lo_9 = mercury__int__next_value_of_Lo_9;
                }
                continue;
              }
          }
        else
          {
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
            mercury__int__succeeded = MR_TRUE;
          }
        return mercury__int__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__int__fold_up2_7_p_6(
  MR_Word mercury__int__TypeInfo_for_T_23,
  MR_Word mercury__int__TypeInfo_for_U_24,
  MR_Word mercury__int__P_8,
  MR_Integer mercury__int__Lo_9,
  MR_Integer mercury__int__Hi_10,
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
            MR_Integer mercury__int__Var_19;
            MR_Integer mercury__int__Var_22;
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

            {
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
            if (mercury__int__succeeded)
              {
                mercury__int__Var_22 = (MR_Integer) 1;
                mercury__int__Var_19 = (mercury__int__Lo_9 + mercury__int__Var_22);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__int__next_value_of_Lo_9 = mercury__int__Var_19;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_17_17;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_18_18;

                  mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__next_value_of_STATE_VARIABLE_B_0_15;
                  mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__next_value_of_STATE_VARIABLE_A_0_13;
                  mercury__int__Lo_9 = mercury__int__next_value_of_Lo_9;
                }
                continue;
              }
          }
        else
          {
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
            mercury__int__succeeded = MR_TRUE;
          }
        return mercury__int__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__int__fold_up2_7_p_5(
  MR_Word mercury__int__TypeInfo_for_T_23,
  MR_Word mercury__int__TypeInfo_for_U_24,
  MR_Word mercury__int__P_8,
  MR_Integer mercury__int__Lo_9,
  MR_Integer mercury__int__Hi_10,
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
            MR_Integer mercury__int__Var_19;
            MR_Integer mercury__int__Var_22;
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

            {
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
            if (mercury__int__succeeded)
              {
                mercury__int__Var_22 = (MR_Integer) 1;
                mercury__int__Var_19 = (mercury__int__Lo_9 + mercury__int__Var_22);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__int__next_value_of_Lo_9 = mercury__int__Var_19;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_17_17;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_18_18;

                  mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__next_value_of_STATE_VARIABLE_B_0_15;
                  mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__next_value_of_STATE_VARIABLE_A_0_13;
                  mercury__int__Lo_9 = mercury__int__next_value_of_Lo_9;
                }
                continue;
              }
          }
        else
          {
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
            mercury__int__succeeded = MR_TRUE;
          }
        return mercury__int__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_up2_7_p_4(
  MR_Word mercury__int__TypeInfo_for_T_23,
  MR_Word mercury__int__TypeInfo_for_U_24,
  MR_Word mercury__int__P_8,
  MR_Integer mercury__int__Lo_9,
  MR_Integer mercury__int__Hi_10,
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
            MR_Integer mercury__int__Var_19;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
            mercury__int__Var_19 = (mercury__int__Lo_9 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Lo_9 = mercury__int__Var_19;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_17_17;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_18_18;

              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__next_value_of_STATE_VARIABLE_B_0_15;
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__next_value_of_STATE_VARIABLE_A_0_13;
              mercury__int__Lo_9 = mercury__int__next_value_of_Lo_9;
            }
            continue;
          }
        else
          {
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_up2_7_p_3(
  MR_Word mercury__int__TypeInfo_for_T_23,
  MR_Word mercury__int__TypeInfo_for_U_24,
  MR_Word mercury__int__P_8,
  MR_Integer mercury__int__Lo_9,
  MR_Integer mercury__int__Hi_10,
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
            MR_Integer mercury__int__Var_19;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
            mercury__int__Var_19 = (mercury__int__Lo_9 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Lo_9 = mercury__int__Var_19;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_17_17;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_18_18;

              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__next_value_of_STATE_VARIABLE_B_0_15;
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__next_value_of_STATE_VARIABLE_A_0_13;
              mercury__int__Lo_9 = mercury__int__next_value_of_Lo_9;
            }
            continue;
          }
        else
          {
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_up2_7_p_2(
  MR_Word mercury__int__TypeInfo_for_T_23,
  MR_Word mercury__int__TypeInfo_for_U_24,
  MR_Word mercury__int__P_8,
  MR_Integer mercury__int__Lo_9,
  MR_Integer mercury__int__Hi_10,
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
            MR_Integer mercury__int__Var_19;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
            mercury__int__Var_19 = (mercury__int__Lo_9 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Lo_9 = mercury__int__Var_19;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_17_17;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_18_18;

              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__next_value_of_STATE_VARIABLE_B_0_15;
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__next_value_of_STATE_VARIABLE_A_0_13;
              mercury__int__Lo_9 = mercury__int__next_value_of_Lo_9;
            }
            continue;
          }
        else
          {
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_up2_7_p_1(
  MR_Word mercury__int__TypeInfo_for_T_23,
  MR_Word mercury__int__TypeInfo_for_U_24,
  MR_Word mercury__int__P_8,
  MR_Integer mercury__int__Lo_9,
  MR_Integer mercury__int__Hi_10,
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
            MR_Integer mercury__int__Var_19;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
            mercury__int__Var_19 = (mercury__int__Lo_9 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Lo_9 = mercury__int__Var_19;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_17_17;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_18_18;

              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__next_value_of_STATE_VARIABLE_B_0_15;
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__next_value_of_STATE_VARIABLE_A_0_13;
              mercury__int__Lo_9 = mercury__int__next_value_of_Lo_9;
            }
            continue;
          }
        else
          {
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_up2_7_p_0(
  MR_Word mercury__int__TypeInfo_for_T_23,
  MR_Word mercury__int__TypeInfo_for_U_24,
  MR_Word mercury__int__P_8,
  MR_Integer mercury__int__Lo_9,
  MR_Integer mercury__int__Hi_10,
  MR_Box mercury__int__STATE_VARIABLE_A_0_13,
  MR_Box * mercury__int__STATE_VARIABLE_A_14,
  MR_Box mercury__int__STATE_VARIABLE_B_0_15,
  MR_Box * mercury__int__STATE_VARIABLE_B_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_9 <= mercury__int__Hi_10);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_17_17;
            MR_Box mercury__int__STATE_VARIABLE_B_18_18;
            MR_Integer mercury__int__Var_19;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_8, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_8), ((MR_Box) (mercury__int__Lo_9)), mercury__int__STATE_VARIABLE_A_0_13, &mercury__int__STATE_VARIABLE_A_17_17, mercury__int__STATE_VARIABLE_B_0_15, &mercury__int__STATE_VARIABLE_B_18_18);
            }
            mercury__int__Var_19 = (mercury__int__Lo_9 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Lo_9 = mercury__int__Var_19;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_13 = mercury__int__STATE_VARIABLE_A_17_17;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_B_0_15 = mercury__int__STATE_VARIABLE_B_18_18;

              mercury__int__STATE_VARIABLE_B_0_15 = mercury__int__next_value_of_STATE_VARIABLE_B_0_15;
              mercury__int__STATE_VARIABLE_A_0_13 = mercury__int__next_value_of_STATE_VARIABLE_A_0_13;
              mercury__int__Lo_9 = mercury__int__next_value_of_Lo_9;
            }
            continue;
          }
        else
          {
            *mercury__int__STATE_VARIABLE_B_16 = mercury__int__STATE_VARIABLE_B_0_15;
            *mercury__int__STATE_VARIABLE_A_14 = mercury__int__STATE_VARIABLE_A_0_13;
          }
      }
      break;
    }
}

MR_Box MR_CALL 
mercury__int__fold_down_4_f_0(
  MR_Word mercury__int__TypeInfo_for_T_13,
  MR_Word mercury__int__F_6,
  MR_Integer mercury__int__Lo_7,
  MR_Integer mercury__int__Hi_8,
  MR_Box mercury__int__A_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);
        MR_Box mercury__int__HeadVar__5_5;

        if (mercury__int__succeeded)
          {
            MR_Integer mercury__int__Var_10 = (mercury__int__Hi_8 - (MR_Integer) 1);
            MR_Box mercury__int__Var_12;
            MR_Box MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__int__F_6, (MR_Integer) 1)));

            {
              mercury__int__Var_12 = mercury__int__func_0(((MR_Box) mercury__int__F_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__A_9);
            }
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Hi_8 = mercury__int__Var_10;
              MR_Box mercury__int__next_value_of_A_9 = mercury__int__Var_12;

              mercury__int__A_9 = mercury__int__next_value_of_A_9;
              mercury__int__Hi_8 = mercury__int__next_value_of_Hi_8;
            }
            continue;
          }
        else
          mercury__int__HeadVar__5_5 = mercury__int__A_9;
        return mercury__int__HeadVar__5_5;
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_down_5_p_10(
  MR_Word mercury__int__TypeInfo_for_T_16,
  MR_Word mercury__int__P_6,
  MR_Integer mercury__int__Lo_7,
  MR_Integer mercury__int__Hi_8,
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
            MR_Integer mercury__int__Var_13;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
            mercury__int__Var_13 = (mercury__int__Hi_8 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Hi_8 = mercury__int__Var_13;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_12_12;

              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__next_value_of_STATE_VARIABLE_A_0_10;
              mercury__int__Hi_8 = mercury__int__next_value_of_Hi_8;
            }
            continue;
          }
        else
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_down_5_p_9(
  MR_Word mercury__int__TypeInfo_for_T_16,
  MR_Word mercury__int__P_6,
  MR_Integer mercury__int__Lo_7,
  MR_Integer mercury__int__Hi_8,
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
            MR_Integer mercury__int__Var_13;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
            mercury__int__Var_13 = (mercury__int__Hi_8 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Hi_8 = mercury__int__Var_13;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_12_12;

              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__next_value_of_STATE_VARIABLE_A_0_10;
              mercury__int__Hi_8 = mercury__int__next_value_of_Hi_8;
            }
            continue;
          }
        else
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
      }
      break;
    }
}

static void MR_CALL 
mercury__int__fold_down_5_p_8_1(
  void * mercury__int__env_ptr_arg)
{
  {
    struct mercury__int__fold_down_5_p_8_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_down_5_p_8_env_0_s *) mercury__int__env_ptr_arg;

    (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__Var_15 = (MR_Integer) 1;
    (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__Var_13 = ((mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__Hi_8 - (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__Var_15);
    {
      mercury__int__fold_down_5_p_8((mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__TypeInfo_for_T_16, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__P_6, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__Lo_7, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__Var_13, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__STATE_VARIABLE_A_12_12, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__STATE_VARIABLE_A_11, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_8_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__int__fold_down_5_p_8(
  MR_Word mercury__int__TypeInfo_for_T_16,
  MR_Word mercury__int__P_6,
  MR_Integer mercury__int__Lo_7,
  MR_Integer mercury__int__Hi_8,
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__int__STATE_VARIABLE_A_11,
  MR_Cont mercury__int__cont,
  void * mercury__int__cont_env_ptr)
{
  {
    struct mercury__int__fold_down_5_p_8_env_0_s mercury__int__env;

    (mercury__int__env).mercury__int__fold_down_5_p_8_env_0__TypeInfo_for_T_16 = mercury__int__TypeInfo_for_T_16;
    (mercury__int__env).mercury__int__fold_down_5_p_8_env_0__P_6 = mercury__int__P_6;
    (mercury__int__env).mercury__int__fold_down_5_p_8_env_0__Lo_7 = mercury__int__Lo_7;
    (mercury__int__env).mercury__int__fold_down_5_p_8_env_0__Hi_8 = mercury__int__Hi_8;
    (mercury__int__env).mercury__int__fold_down_5_p_8_env_0__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_11;
    (mercury__int__env).mercury__int__fold_down_5_p_8_env_0__cont = mercury__int__cont;
    (mercury__int__env).mercury__int__fold_down_5_p_8_env_0__cont_env_ptr = mercury__int__cont_env_ptr;
    {
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_down_5_p_8_env_0__Lo_7 <= (mercury__int__env).mercury__int__fold_down_5_p_8_env_0__Hi_8);

      if (mercury__int__succeeded)
        {
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_down_5_p_8_env_0__P_6, (MR_Integer) 1)));

          {
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_down_5_p_8_env_0__P_6), ((MR_Box) ((mercury__int__env).mercury__int__fold_down_5_p_8_env_0__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &(mercury__int__env).mercury__int__fold_down_5_p_8_env_0__STATE_VARIABLE_A_12_12, mercury__int__fold_down_5_p_8_1, &mercury__int__env);
          }
        }
      else
        {
          *((mercury__int__env).mercury__int__fold_down_5_p_8_env_0__STATE_VARIABLE_A_11) = mercury__int__STATE_VARIABLE_A_0_10;
          {
            ((mercury__int__env).mercury__int__fold_down_5_p_8_env_0__cont)((mercury__int__env).mercury__int__fold_down_5_p_8_env_0__cont_env_ptr);
          }
        }
    }
  }
}

static void MR_CALL 
mercury__int__fold_down_5_p_7_1(
  void * mercury__int__env_ptr_arg)
{
  {
    struct mercury__int__fold_down_5_p_7_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_down_5_p_7_env_0_s *) mercury__int__env_ptr_arg;

    (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__Var_15 = (MR_Integer) 1;
    (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__Var_13 = ((mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__Hi_8 - (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__Var_15);
    {
      mercury__int__fold_down_5_p_7((mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__TypeInfo_for_T_16, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__P_6, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__Lo_7, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__Var_13, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__STATE_VARIABLE_A_12_12, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__STATE_VARIABLE_A_11, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_down_5_p_7_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__int__fold_down_5_p_7(
  MR_Word mercury__int__TypeInfo_for_T_16,
  MR_Word mercury__int__P_6,
  MR_Integer mercury__int__Lo_7,
  MR_Integer mercury__int__Hi_8,
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__int__STATE_VARIABLE_A_11,
  MR_Cont mercury__int__cont,
  void * mercury__int__cont_env_ptr)
{
  {
    struct mercury__int__fold_down_5_p_7_env_0_s mercury__int__env;

    (mercury__int__env).mercury__int__fold_down_5_p_7_env_0__TypeInfo_for_T_16 = mercury__int__TypeInfo_for_T_16;
    (mercury__int__env).mercury__int__fold_down_5_p_7_env_0__P_6 = mercury__int__P_6;
    (mercury__int__env).mercury__int__fold_down_5_p_7_env_0__Lo_7 = mercury__int__Lo_7;
    (mercury__int__env).mercury__int__fold_down_5_p_7_env_0__Hi_8 = mercury__int__Hi_8;
    (mercury__int__env).mercury__int__fold_down_5_p_7_env_0__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_11;
    (mercury__int__env).mercury__int__fold_down_5_p_7_env_0__cont = mercury__int__cont;
    (mercury__int__env).mercury__int__fold_down_5_p_7_env_0__cont_env_ptr = mercury__int__cont_env_ptr;
    {
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_down_5_p_7_env_0__Lo_7 <= (mercury__int__env).mercury__int__fold_down_5_p_7_env_0__Hi_8);

      if (mercury__int__succeeded)
        {
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_down_5_p_7_env_0__P_6, (MR_Integer) 1)));

          {
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_down_5_p_7_env_0__P_6), ((MR_Box) ((mercury__int__env).mercury__int__fold_down_5_p_7_env_0__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &(mercury__int__env).mercury__int__fold_down_5_p_7_env_0__STATE_VARIABLE_A_12_12, mercury__int__fold_down_5_p_7_1, &mercury__int__env);
          }
        }
      else
        {
          *((mercury__int__env).mercury__int__fold_down_5_p_7_env_0__STATE_VARIABLE_A_11) = mercury__int__STATE_VARIABLE_A_0_10;
          {
            ((mercury__int__env).mercury__int__fold_down_5_p_7_env_0__cont)((mercury__int__env).mercury__int__fold_down_5_p_7_env_0__cont_env_ptr);
          }
        }
    }
  }
}

MR_bool MR_CALL 
mercury__int__fold_down_5_p_6(
  MR_Word mercury__int__TypeInfo_for_T_16,
  MR_Word mercury__int__P_6,
  MR_Integer mercury__int__Lo_7,
  MR_Integer mercury__int__Hi_8,
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
            MR_Integer mercury__int__Var_13;
            MR_Integer mercury__int__Var_15;
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

            {
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
            if (mercury__int__succeeded)
              {
                mercury__int__Var_15 = (MR_Integer) 1;
                mercury__int__Var_13 = (mercury__int__Hi_8 - mercury__int__Var_15);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__int__next_value_of_Hi_8 = mercury__int__Var_13;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_12_12;

                  mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__next_value_of_STATE_VARIABLE_A_0_10;
                  mercury__int__Hi_8 = mercury__int__next_value_of_Hi_8;
                }
                continue;
              }
          }
        else
          {
            *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
            mercury__int__succeeded = MR_TRUE;
          }
        return mercury__int__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__int__fold_down_5_p_5(
  MR_Word mercury__int__TypeInfo_for_T_16,
  MR_Word mercury__int__P_6,
  MR_Integer mercury__int__Lo_7,
  MR_Integer mercury__int__Hi_8,
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
            MR_Integer mercury__int__Var_13;
            MR_Integer mercury__int__Var_15;
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

            {
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
            if (mercury__int__succeeded)
              {
                mercury__int__Var_15 = (MR_Integer) 1;
                mercury__int__Var_13 = (mercury__int__Hi_8 - mercury__int__Var_15);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__int__next_value_of_Hi_8 = mercury__int__Var_13;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_12_12;

                  mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__next_value_of_STATE_VARIABLE_A_0_10;
                  mercury__int__Hi_8 = mercury__int__next_value_of_Hi_8;
                }
                continue;
              }
          }
        else
          {
            *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
            mercury__int__succeeded = MR_TRUE;
          }
        return mercury__int__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__int__fold_down_5_p_4(
  MR_Word mercury__int__TypeInfo_for_T_16,
  MR_Word mercury__int__P_6,
  MR_Integer mercury__int__Lo_7,
  MR_Integer mercury__int__Hi_8,
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
            MR_Integer mercury__int__Var_13;
            MR_Integer mercury__int__Var_15;
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

            {
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
            if (mercury__int__succeeded)
              {
                mercury__int__Var_15 = (MR_Integer) 1;
                mercury__int__Var_13 = (mercury__int__Hi_8 - mercury__int__Var_15);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__int__next_value_of_Hi_8 = mercury__int__Var_13;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_12_12;

                  mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__next_value_of_STATE_VARIABLE_A_0_10;
                  mercury__int__Hi_8 = mercury__int__next_value_of_Hi_8;
                }
                continue;
              }
          }
        else
          {
            *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
            mercury__int__succeeded = MR_TRUE;
          }
        return mercury__int__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_down_5_p_3(
  MR_Word mercury__int__TypeInfo_for_T_16,
  MR_Word mercury__int__P_6,
  MR_Integer mercury__int__Lo_7,
  MR_Integer mercury__int__Hi_8,
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
            MR_Integer mercury__int__Var_13;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
            mercury__int__Var_13 = (mercury__int__Hi_8 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Hi_8 = mercury__int__Var_13;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_12_12;

              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__next_value_of_STATE_VARIABLE_A_0_10;
              mercury__int__Hi_8 = mercury__int__next_value_of_Hi_8;
            }
            continue;
          }
        else
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_down_5_p_2(
  MR_Word mercury__int__TypeInfo_for_T_16,
  MR_Word mercury__int__P_6,
  MR_Integer mercury__int__Lo_7,
  MR_Integer mercury__int__Hi_8,
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
            MR_Integer mercury__int__Var_13;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
            mercury__int__Var_13 = (mercury__int__Hi_8 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Hi_8 = mercury__int__Var_13;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_12_12;

              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__next_value_of_STATE_VARIABLE_A_0_10;
              mercury__int__Hi_8 = mercury__int__next_value_of_Hi_8;
            }
            continue;
          }
        else
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_down_5_p_1(
  MR_Word mercury__int__TypeInfo_for_T_16,
  MR_Word mercury__int__P_6,
  MR_Integer mercury__int__Lo_7,
  MR_Integer mercury__int__Hi_8,
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
            MR_Integer mercury__int__Var_13;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
            mercury__int__Var_13 = (mercury__int__Hi_8 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Hi_8 = mercury__int__Var_13;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_12_12;

              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__next_value_of_STATE_VARIABLE_A_0_10;
              mercury__int__Hi_8 = mercury__int__next_value_of_Hi_8;
            }
            continue;
          }
        else
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_down_5_p_0(
  MR_Word mercury__int__TypeInfo_for_T_16,
  MR_Word mercury__int__P_6,
  MR_Integer mercury__int__Lo_7,
  MR_Integer mercury__int__Hi_8,
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
            MR_Integer mercury__int__Var_13;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Hi_8)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
            mercury__int__Var_13 = (mercury__int__Hi_8 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Hi_8 = mercury__int__Var_13;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_12_12;

              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__next_value_of_STATE_VARIABLE_A_0_10;
              mercury__int__Hi_8 = mercury__int__next_value_of_Hi_8;
            }
            continue;
          }
        else
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
      }
      break;
    }
}

MR_Box MR_CALL 
mercury__int__fold_up_4_f_0(
  MR_Word mercury__int__TypeInfo_for_T_13,
  MR_Word mercury__int__F_6,
  MR_Integer mercury__int__Lo_7,
  MR_Integer mercury__int__Hi_8,
  MR_Box mercury__int__A_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);
        MR_Box mercury__int__HeadVar__5_5;

        if (mercury__int__succeeded)
          {
            MR_Integer mercury__int__Var_10 = (mercury__int__Lo_7 + (MR_Integer) 1);
            MR_Box mercury__int__Var_12;
            MR_Box MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__int__F_6, (MR_Integer) 1)));

            {
              mercury__int__Var_12 = mercury__int__func_0(((MR_Box) mercury__int__F_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__A_9);
            }
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Lo_7 = mercury__int__Var_10;
              MR_Box mercury__int__next_value_of_A_9 = mercury__int__Var_12;

              mercury__int__A_9 = mercury__int__next_value_of_A_9;
              mercury__int__Lo_7 = mercury__int__next_value_of_Lo_7;
            }
            continue;
          }
        else
          mercury__int__HeadVar__5_5 = mercury__int__A_9;
        return mercury__int__HeadVar__5_5;
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_up_5_p_10(
  MR_Word mercury__int__TypeInfo_for_T_16,
  MR_Word mercury__int__P_6,
  MR_Integer mercury__int__Lo_7,
  MR_Integer mercury__int__Hi_8,
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
            MR_Integer mercury__int__Var_13;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
            mercury__int__Var_13 = (mercury__int__Lo_7 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Lo_7 = mercury__int__Var_13;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_12_12;

              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__next_value_of_STATE_VARIABLE_A_0_10;
              mercury__int__Lo_7 = mercury__int__next_value_of_Lo_7;
            }
            continue;
          }
        else
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_up_5_p_9(
  MR_Word mercury__int__TypeInfo_for_T_16,
  MR_Word mercury__int__P_6,
  MR_Integer mercury__int__Lo_7,
  MR_Integer mercury__int__Hi_8,
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
            MR_Integer mercury__int__Var_13;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
            mercury__int__Var_13 = (mercury__int__Lo_7 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Lo_7 = mercury__int__Var_13;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_12_12;

              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__next_value_of_STATE_VARIABLE_A_0_10;
              mercury__int__Lo_7 = mercury__int__next_value_of_Lo_7;
            }
            continue;
          }
        else
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
      }
      break;
    }
}

static void MR_CALL 
mercury__int__fold_up_5_p_8_1(
  void * mercury__int__env_ptr_arg)
{
  {
    struct mercury__int__fold_up_5_p_8_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_up_5_p_8_env_0_s *) mercury__int__env_ptr_arg;

    (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__Var_15 = (MR_Integer) 1;
    (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__Var_13 = ((mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__Lo_7 + (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__Var_15);
    {
      mercury__int__fold_up_5_p_8((mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__TypeInfo_for_T_16, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__P_6, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__Var_13, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__Hi_8, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__STATE_VARIABLE_A_12_12, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__STATE_VARIABLE_A_11, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_8_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__int__fold_up_5_p_8(
  MR_Word mercury__int__TypeInfo_for_T_16,
  MR_Word mercury__int__P_6,
  MR_Integer mercury__int__Lo_7,
  MR_Integer mercury__int__Hi_8,
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__int__STATE_VARIABLE_A_11,
  MR_Cont mercury__int__cont,
  void * mercury__int__cont_env_ptr)
{
  {
    struct mercury__int__fold_up_5_p_8_env_0_s mercury__int__env;

    (mercury__int__env).mercury__int__fold_up_5_p_8_env_0__TypeInfo_for_T_16 = mercury__int__TypeInfo_for_T_16;
    (mercury__int__env).mercury__int__fold_up_5_p_8_env_0__P_6 = mercury__int__P_6;
    (mercury__int__env).mercury__int__fold_up_5_p_8_env_0__Lo_7 = mercury__int__Lo_7;
    (mercury__int__env).mercury__int__fold_up_5_p_8_env_0__Hi_8 = mercury__int__Hi_8;
    (mercury__int__env).mercury__int__fold_up_5_p_8_env_0__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_11;
    (mercury__int__env).mercury__int__fold_up_5_p_8_env_0__cont = mercury__int__cont;
    (mercury__int__env).mercury__int__fold_up_5_p_8_env_0__cont_env_ptr = mercury__int__cont_env_ptr;
    {
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_up_5_p_8_env_0__Lo_7 <= (mercury__int__env).mercury__int__fold_up_5_p_8_env_0__Hi_8);

      if (mercury__int__succeeded)
        {
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_up_5_p_8_env_0__P_6, (MR_Integer) 1)));

          {
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_up_5_p_8_env_0__P_6), ((MR_Box) ((mercury__int__env).mercury__int__fold_up_5_p_8_env_0__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &(mercury__int__env).mercury__int__fold_up_5_p_8_env_0__STATE_VARIABLE_A_12_12, mercury__int__fold_up_5_p_8_1, &mercury__int__env);
          }
        }
      else
        {
          *((mercury__int__env).mercury__int__fold_up_5_p_8_env_0__STATE_VARIABLE_A_11) = mercury__int__STATE_VARIABLE_A_0_10;
          {
            ((mercury__int__env).mercury__int__fold_up_5_p_8_env_0__cont)((mercury__int__env).mercury__int__fold_up_5_p_8_env_0__cont_env_ptr);
          }
        }
    }
  }
}

static void MR_CALL 
mercury__int__fold_up_5_p_7_1(
  void * mercury__int__env_ptr_arg)
{
  {
    struct mercury__int__fold_up_5_p_7_env_0_s * mercury__int__env_ptr = (struct mercury__int__fold_up_5_p_7_env_0_s *) mercury__int__env_ptr_arg;

    (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__Var_15 = (MR_Integer) 1;
    (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__Var_13 = ((mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__Lo_7 + (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__Var_15);
    {
      mercury__int__fold_up_5_p_7((mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__TypeInfo_for_T_16, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__P_6, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__Var_13, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__Hi_8, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__STATE_VARIABLE_A_12_12, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__STATE_VARIABLE_A_11, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__cont, (mercury__int__env_ptr)->mercury__int__fold_up_5_p_7_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__int__fold_up_5_p_7(
  MR_Word mercury__int__TypeInfo_for_T_16,
  MR_Word mercury__int__P_6,
  MR_Integer mercury__int__Lo_7,
  MR_Integer mercury__int__Hi_8,
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__int__STATE_VARIABLE_A_11,
  MR_Cont mercury__int__cont,
  void * mercury__int__cont_env_ptr)
{
  {
    struct mercury__int__fold_up_5_p_7_env_0_s mercury__int__env;

    (mercury__int__env).mercury__int__fold_up_5_p_7_env_0__TypeInfo_for_T_16 = mercury__int__TypeInfo_for_T_16;
    (mercury__int__env).mercury__int__fold_up_5_p_7_env_0__P_6 = mercury__int__P_6;
    (mercury__int__env).mercury__int__fold_up_5_p_7_env_0__Lo_7 = mercury__int__Lo_7;
    (mercury__int__env).mercury__int__fold_up_5_p_7_env_0__Hi_8 = mercury__int__Hi_8;
    (mercury__int__env).mercury__int__fold_up_5_p_7_env_0__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_11;
    (mercury__int__env).mercury__int__fold_up_5_p_7_env_0__cont = mercury__int__cont;
    (mercury__int__env).mercury__int__fold_up_5_p_7_env_0__cont_env_ptr = mercury__int__cont_env_ptr;
    {
      MR_bool mercury__int__succeeded = ((mercury__int__env).mercury__int__fold_up_5_p_7_env_0__Lo_7 <= (mercury__int__env).mercury__int__fold_up_5_p_7_env_0__Hi_8);

      if (mercury__int__succeeded)
        {
          void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__int__env).mercury__int__fold_up_5_p_7_env_0__P_6, (MR_Integer) 1)));

          {
            mercury__int__func_0(((MR_Box) (mercury__int__env).mercury__int__fold_up_5_p_7_env_0__P_6), ((MR_Box) ((mercury__int__env).mercury__int__fold_up_5_p_7_env_0__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &(mercury__int__env).mercury__int__fold_up_5_p_7_env_0__STATE_VARIABLE_A_12_12, mercury__int__fold_up_5_p_7_1, &mercury__int__env);
          }
        }
      else
        {
          *((mercury__int__env).mercury__int__fold_up_5_p_7_env_0__STATE_VARIABLE_A_11) = mercury__int__STATE_VARIABLE_A_0_10;
          {
            ((mercury__int__env).mercury__int__fold_up_5_p_7_env_0__cont)((mercury__int__env).mercury__int__fold_up_5_p_7_env_0__cont_env_ptr);
          }
        }
    }
  }
}

MR_bool MR_CALL 
mercury__int__fold_up_5_p_6(
  MR_Word mercury__int__TypeInfo_for_T_16,
  MR_Word mercury__int__P_6,
  MR_Integer mercury__int__Lo_7,
  MR_Integer mercury__int__Hi_8,
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
            MR_Integer mercury__int__Var_13;
            MR_Integer mercury__int__Var_15;
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

            {
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
            if (mercury__int__succeeded)
              {
                mercury__int__Var_15 = (MR_Integer) 1;
                mercury__int__Var_13 = (mercury__int__Lo_7 + mercury__int__Var_15);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__int__next_value_of_Lo_7 = mercury__int__Var_13;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_12_12;

                  mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__next_value_of_STATE_VARIABLE_A_0_10;
                  mercury__int__Lo_7 = mercury__int__next_value_of_Lo_7;
                }
                continue;
              }
          }
        else
          {
            *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
            mercury__int__succeeded = MR_TRUE;
          }
        return mercury__int__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__int__fold_up_5_p_5(
  MR_Word mercury__int__TypeInfo_for_T_16,
  MR_Word mercury__int__P_6,
  MR_Integer mercury__int__Lo_7,
  MR_Integer mercury__int__Hi_8,
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
            MR_Integer mercury__int__Var_13;
            MR_Integer mercury__int__Var_15;
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

            {
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
            if (mercury__int__succeeded)
              {
                mercury__int__Var_15 = (MR_Integer) 1;
                mercury__int__Var_13 = (mercury__int__Lo_7 + mercury__int__Var_15);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__int__next_value_of_Lo_7 = mercury__int__Var_13;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_12_12;

                  mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__next_value_of_STATE_VARIABLE_A_0_10;
                  mercury__int__Lo_7 = mercury__int__next_value_of_Lo_7;
                }
                continue;
              }
          }
        else
          {
            *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
            mercury__int__succeeded = MR_TRUE;
          }
        return mercury__int__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__int__fold_up_5_p_4(
  MR_Word mercury__int__TypeInfo_for_T_16,
  MR_Word mercury__int__P_6,
  MR_Integer mercury__int__Lo_7,
  MR_Integer mercury__int__Hi_8,
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
            MR_Integer mercury__int__Var_13;
            MR_Integer mercury__int__Var_15;
            MR_bool MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

            {
              mercury__int__succeeded = mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
            if (mercury__int__succeeded)
              {
                mercury__int__Var_15 = (MR_Integer) 1;
                mercury__int__Var_13 = (mercury__int__Lo_7 + mercury__int__Var_15);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__int__next_value_of_Lo_7 = mercury__int__Var_13;
                  MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_12_12;

                  mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__next_value_of_STATE_VARIABLE_A_0_10;
                  mercury__int__Lo_7 = mercury__int__next_value_of_Lo_7;
                }
                continue;
              }
          }
        else
          {
            *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
            mercury__int__succeeded = MR_TRUE;
          }
        return mercury__int__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_up_5_p_3(
  MR_Word mercury__int__TypeInfo_for_T_16,
  MR_Word mercury__int__P_6,
  MR_Integer mercury__int__Lo_7,
  MR_Integer mercury__int__Hi_8,
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
            MR_Integer mercury__int__Var_13;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
            mercury__int__Var_13 = (mercury__int__Lo_7 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Lo_7 = mercury__int__Var_13;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_12_12;

              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__next_value_of_STATE_VARIABLE_A_0_10;
              mercury__int__Lo_7 = mercury__int__next_value_of_Lo_7;
            }
            continue;
          }
        else
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_up_5_p_2(
  MR_Word mercury__int__TypeInfo_for_T_16,
  MR_Word mercury__int__P_6,
  MR_Integer mercury__int__Lo_7,
  MR_Integer mercury__int__Hi_8,
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
            MR_Integer mercury__int__Var_13;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
            mercury__int__Var_13 = (mercury__int__Lo_7 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Lo_7 = mercury__int__Var_13;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_12_12;

              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__next_value_of_STATE_VARIABLE_A_0_10;
              mercury__int__Lo_7 = mercury__int__next_value_of_Lo_7;
            }
            continue;
          }
        else
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_up_5_p_1(
  MR_Word mercury__int__TypeInfo_for_T_16,
  MR_Word mercury__int__P_6,
  MR_Integer mercury__int__Lo_7,
  MR_Integer mercury__int__Hi_8,
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
            MR_Integer mercury__int__Var_13;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
            mercury__int__Var_13 = (mercury__int__Lo_7 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Lo_7 = mercury__int__Var_13;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_12_12;

              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__next_value_of_STATE_VARIABLE_A_0_10;
              mercury__int__Lo_7 = mercury__int__next_value_of_Lo_7;
            }
            continue;
          }
        else
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
      }
      break;
    }
}

void MR_CALL 
mercury__int__fold_up_5_p_0(
  MR_Word mercury__int__TypeInfo_for_T_16,
  MR_Word mercury__int__P_6,
  MR_Integer mercury__int__Lo_7,
  MR_Integer mercury__int__Hi_8,
  MR_Box mercury__int__STATE_VARIABLE_A_0_10,
  MR_Box * mercury__int__STATE_VARIABLE_A_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__int__succeeded = (mercury__int__Lo_7 <= mercury__int__Hi_8);

        if (mercury__int__succeeded)
          {
            MR_Box mercury__int__STATE_VARIABLE_A_12_12;
            MR_Integer mercury__int__Var_13;
            void MR_CALL (* mercury__int__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__int__P_6, (MR_Integer) 1)));

            {
              mercury__int__func_0(((MR_Box) mercury__int__P_6), ((MR_Box) (mercury__int__Lo_7)), mercury__int__STATE_VARIABLE_A_0_10, &mercury__int__STATE_VARIABLE_A_12_12);
            }
            mercury__int__Var_13 = (mercury__int__Lo_7 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__int__next_value_of_Lo_7 = mercury__int__Var_13;
              MR_Box mercury__int__next_value_of_STATE_VARIABLE_A_0_10 = mercury__int__STATE_VARIABLE_A_12_12;

              mercury__int__STATE_VARIABLE_A_0_10 = mercury__int__next_value_of_STATE_VARIABLE_A_0_10;
              mercury__int__Lo_7 = mercury__int__next_value_of_Lo_7;
            }
            continue;
          }
        else
          *mercury__int__STATE_VARIABLE_A_11 = mercury__int__STATE_VARIABLE_A_0_10;
      }
      break;
    }
}

void MR_CALL 
mercury__int__bits_per_int_1_p_0(
  MR_Integer * mercury__int__Bits_1)
{
  {
    MR_bool mercury__int__succeeded;

{
#define MR_PROC_LABEL mercury__int__bits_per_int_1_p_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 *mercury__int__Bits_1  = Bits;
}
  }
}

MR_Integer MR_CALL 
mercury__int__bits_per_int_0_f_0(void)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__X_2;

{
#define MR_PROC_LABEL mercury__int__bits_per_int_0_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__int__X_2  = Bits;
}
    return mercury__int__X_2;
  }
}

void MR_CALL 
mercury__int__min_int_1_p_0(
  MR_Integer * mercury__int__Min_1)
{
  {
    MR_bool mercury__int__succeeded;

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
	 *mercury__int__Min_1  = Min;
}
  }
}

MR_Integer MR_CALL 
mercury__int__min_int_0_f_0(void)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__X_2;

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
	 mercury__int__X_2  = Min;
}
    return mercury__int__X_2;
  }
}

void MR_CALL 
mercury__int__max_int_1_p_0(
  MR_Integer * mercury__int__Max_1)
{
  {
    MR_bool mercury__int__succeeded;

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
	 *mercury__int__Max_1  = Max;
}
  }
}

MR_Integer MR_CALL 
mercury__int__max_int_0_f_0(void)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__X_2;

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
	 mercury__int__X_2  = Max;
}
    return mercury__int__X_2;
  }
}

void MR_CALL 
mercury__int__is_2_p_1(
  MR_Word mercury__int__TypeInfo_for_T_4,
  MR_Box * mercury__int__X_3,
  MR_Box mercury__int__X_2)
{
  {
    MR_bool mercury__int__succeeded;

    *mercury__int__X_3 = mercury__int__X_2;
  }
}

void MR_CALL 
mercury__int__is_2_p_0(
  MR_Word mercury__int__TypeInfo_for_T_4,
  MR_Box * mercury__int__X_3,
  MR_Box mercury__int__X_2)
{
  {
    MR_bool mercury__int__succeeded;

    *mercury__int__X_3 = mercury__int__X_2;
  }
}

MR_Integer MR_CALL 
mercury__int__f_minus_1_f_0(
  MR_Integer mercury__int__HeadVar__1_1)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__HeadVar__2_2 = ((MR_Integer) 0 - mercury__int__HeadVar__1_1);

    return mercury__int__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__int__f_plus_1_f_0(
  MR_Integer mercury__int__HeadVar__1_1)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__HeadVar__2_2 = mercury__int__HeadVar__1_1;

    return mercury__int__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__int__f_92_1_f_0(
  MR_Integer mercury__int__HeadVar__1_1)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__HeadVar__2_2 = ~(mercury__int__HeadVar__1_1);

    return mercury__int__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__int__xor_2_f_2(
  MR_Integer * mercury__int__HeadVar__1_1,
  MR_Integer mercury__int__HeadVar__2_2,
  MR_Integer mercury__int__HeadVar__3_3)
{
  {
    MR_bool mercury__int__succeeded;

    *mercury__int__HeadVar__1_1 = (mercury__int__HeadVar__2_2 ^ mercury__int__HeadVar__3_3);
  }
}

void MR_CALL 
mercury__int__xor_2_f_1(
  MR_Integer mercury__int__HeadVar__1_1,
  MR_Integer * mercury__int__HeadVar__2_2,
  MR_Integer mercury__int__HeadVar__3_3)
{
  {
    MR_bool mercury__int__succeeded;

    *mercury__int__HeadVar__2_2 = (mercury__int__HeadVar__1_1 ^ mercury__int__HeadVar__3_3);
  }
}

MR_Integer MR_CALL 
mercury__int__xor_2_f_0(
  MR_Integer mercury__int__HeadVar__1_1,
  MR_Integer mercury__int__HeadVar__2_2)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__HeadVar__3_3 = (mercury__int__HeadVar__1_1 ^ mercury__int__HeadVar__2_2);

    return mercury__int__HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__int__f_92_47_2_f_0(
  MR_Integer mercury__int__HeadVar__1_1,
  MR_Integer mercury__int__HeadVar__2_2)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__HeadVar__3_3 = (mercury__int__HeadVar__1_1 | mercury__int__HeadVar__2_2);

    return mercury__int__HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__int__f_47_92_2_f_0(
  MR_Integer mercury__int__HeadVar__1_1,
  MR_Integer mercury__int__HeadVar__2_2)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__HeadVar__3_3 = (mercury__int__HeadVar__1_1 & mercury__int__HeadVar__2_2);

    return mercury__int__HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__int__odd_1_p_0(
  MR_Integer mercury__int__X_2)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__Var_3 = (mercury__int__X_2 & (MR_Integer) 1);

    mercury__int__succeeded = (mercury__int__Var_3 == (MR_Integer) 0);
    mercury__int__succeeded = !(mercury__int__succeeded);
    return mercury__int__succeeded;
  }
}

MR_bool MR_CALL 
mercury__int__even_1_p_0(
  MR_Integer mercury__int__X_2)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__Var_3 = (mercury__int__X_2 & (MR_Integer) 1);

    mercury__int__succeeded = (mercury__int__Var_3 == (MR_Integer) 0);
    return mercury__int__succeeded;
  }
}

MR_Integer MR_CALL 
mercury__int__unchecked_right_shift_2_f_0(
  MR_Integer mercury__int__HeadVar__1_1,
  MR_Integer mercury__int__HeadVar__2_2)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__HeadVar__3_3 = (mercury__int__HeadVar__1_1 >> mercury__int__HeadVar__2_2);

    return mercury__int__HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__int__f_62_62_2_f_0(
  MR_Integer mercury__int__X_4,
  MR_Integer mercury__int__Y_5)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__Z_6;
    MR_Integer mercury__int__IntBits_7;

{
#define MR_PROC_LABEL mercury__int__f_62_62_2_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__int__IntBits_7  = Bits;
}
    mercury__int__succeeded = (mercury__int__Y_5 >= (MR_Integer) 0);
    if (mercury__int__succeeded)
      {
        mercury__int__succeeded = (mercury__int__Y_5 >= mercury__int__IntBits_7);
        if (mercury__int__succeeded)
          {
            mercury__int__succeeded = (mercury__int__X_4 >= (MR_Integer) 0);
            if (mercury__int__succeeded)
              mercury__int__Z_6 = (MR_Integer) 0;
            else
              mercury__int__Z_6 = (MR_Integer) -1;
          }
        else
          mercury__int__Z_6 = (mercury__int__X_4 >> mercury__int__Y_5);
      }
    else
      {
        MR_Integer mercury__int__Var_10 = ((MR_Integer) 0 - mercury__int__IntBits_7);

        mercury__int__succeeded = (mercury__int__Y_5 <= mercury__int__Var_10);
        if (mercury__int__succeeded)
          mercury__int__Z_6 = (MR_Integer) 0;
        else
          {
            MR_Integer mercury__int__Var_11 = ((MR_Integer) 0 - mercury__int__Y_5);

            mercury__int__Z_6 = (mercury__int__X_4 << mercury__int__Var_11);
          }
      }
    return mercury__int__Z_6;
  }
}

MR_Integer MR_CALL 
mercury__int__unchecked_left_shift_2_f_0(
  MR_Integer mercury__int__HeadVar__1_1,
  MR_Integer mercury__int__HeadVar__2_2)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__HeadVar__3_3 = (mercury__int__HeadVar__1_1 << mercury__int__HeadVar__2_2);

    return mercury__int__HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__int__f_60_60_2_f_0(
  MR_Integer mercury__int__X_4,
  MR_Integer mercury__int__Y_5)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__Z_6;
    MR_Integer mercury__int__IntBits_7;

{
#define MR_PROC_LABEL mercury__int__f_60_60_2_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__int__IntBits_7  = Bits;
}
    mercury__int__succeeded = (mercury__int__Y_5 >= (MR_Integer) 0);
    if (mercury__int__succeeded)
      {
        mercury__int__succeeded = (mercury__int__Y_5 >= mercury__int__IntBits_7);
        if (mercury__int__succeeded)
          mercury__int__Z_6 = (MR_Integer) 0;
        else
          mercury__int__Z_6 = (mercury__int__X_4 << mercury__int__Y_5);
      }
    else
      {
        MR_Integer mercury__int__Var_9 = ((MR_Integer) 0 - mercury__int__IntBits_7);

        mercury__int__succeeded = (mercury__int__Y_5 <= mercury__int__Var_9);
        if (mercury__int__succeeded)
          {
            mercury__int__succeeded = (mercury__int__X_4 >= (MR_Integer) 0);
            if (mercury__int__succeeded)
              mercury__int__Z_6 = (MR_Integer) 0;
            else
              mercury__int__Z_6 = (MR_Integer) -1;
          }
        else
          {
            MR_Integer mercury__int__Var_11 = ((MR_Integer) 0 - mercury__int__Y_5);

            mercury__int__Z_6 = (mercury__int__X_4 >> mercury__int__Var_11);
          }
      }
    return mercury__int__Z_6;
  }
}

MR_Integer MR_CALL 
mercury__int__unchecked_rem_2_f_0(
  MR_Integer mercury__int__HeadVar__1_1,
  MR_Integer mercury__int__HeadVar__2_2)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__HeadVar__3_3 = (mercury__int__HeadVar__1_1 % mercury__int__HeadVar__2_2);

    return mercury__int__HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__int__rem_2_f_0(
  MR_Integer mercury__int__X_4,
  MR_Integer mercury__int__Y_5)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__Rem_6;

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
mercury__int__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__int__succeeded)
      mercury__int__succeeded = (mercury__int__Y_5 == (MR_Integer) 0);
    if (mercury__int__succeeded)
      {
        MR_Word mercury__int__TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
        MR_Word mercury__int__Var_7 = (MR_Word) ((MR_Box) ((MR_String) "int.rem: division by zero"));

        {
          mercury__exception__throw_1_p_0(mercury__int__TypeCtorInfo_9_9, ((MR_Box) (mercury__int__Var_7)));
        }
      }
    else
      mercury__int__Rem_6 = (mercury__int__X_4 % mercury__int__Y_5);
    return mercury__int__Rem_6;
  }
}

MR_Integer MR_CALL 
mercury__int__mod_2_f_0(
  MR_Integer mercury__int__X_4,
  MR_Integer mercury__int__Y_5)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__HeadVar__3_3;
    MR_Integer mercury__int__Var_6;
    MR_Integer mercury__int__Var_7;

    {
      mercury__int__Var_7 = mercury__int__div_2_f_0(mercury__int__X_4, mercury__int__Y_5);
    }
    mercury__int__Var_6 = (mercury__int__Var_7 * mercury__int__Y_5);
    mercury__int__HeadVar__3_3 = (mercury__int__X_4 - mercury__int__Var_6);
    return mercury__int__HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__int__unchecked_quotient_2_f_0(
  MR_Integer mercury__int__HeadVar__1_1,
  MR_Integer mercury__int__HeadVar__2_2)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__HeadVar__3_3 = (mercury__int__HeadVar__1_1 / mercury__int__HeadVar__2_2);

    return mercury__int__HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__int__f_slash_2_f_0(
  MR_Integer mercury__int__X_4,
  MR_Integer mercury__int__Y_5)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__HeadVar__3_3;

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
mercury__int__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__int__succeeded)
      mercury__int__succeeded = (mercury__int__Y_5 == (MR_Integer) 0);
    if (mercury__int__succeeded)
      {
        MR_Word mercury__int__TypeCtorInfo_9_11 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
        MR_Word mercury__int__Var_9 = (MR_Word) ((MR_Box) ((MR_String) "int.\'//\': division by zero"));

        {
          mercury__exception__throw_1_p_0(mercury__int__TypeCtorInfo_9_11, ((MR_Box) (mercury__int__Var_9)));
        }
      }
    else
      mercury__int__HeadVar__3_3 = (mercury__int__X_4 / mercury__int__Y_5);
    return mercury__int__HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__int__f_47_47_2_f_0(
  MR_Integer mercury__int__X_4,
  MR_Integer mercury__int__Y_5)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__Div_6;

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
mercury__int__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__int__succeeded)
      mercury__int__succeeded = (mercury__int__Y_5 == (MR_Integer) 0);
    if (mercury__int__succeeded)
      {
        MR_Word mercury__int__TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
        MR_Word mercury__int__Var_7 = (MR_Word) ((MR_Box) ((MR_String) "int.\'//\': division by zero"));

        {
          mercury__exception__throw_1_p_0(mercury__int__TypeCtorInfo_9_9, ((MR_Box) (mercury__int__Var_7)));
        }
      }
    else
      mercury__int__Div_6 = (mercury__int__X_4 / mercury__int__Y_5);
    return mercury__int__Div_6;
  }
}

MR_Integer MR_CALL 
mercury__int__div_2_f_0(
  MR_Integer mercury__int__X_4,
  MR_Integer mercury__int__Y_5)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__Div_6;
    MR_Integer mercury__int__Trunc_7;

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
mercury__int__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__int__succeeded)
      mercury__int__succeeded = (mercury__int__Y_5 == (MR_Integer) 0);
    if (mercury__int__succeeded)
      {
        MR_Word mercury__int__TypeCtorInfo_9_19 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
        MR_Word mercury__int__Var_17 = (MR_Word) ((MR_Box) ((MR_String) "int.\'//\': division by zero"));

        {
          mercury__exception__throw_1_p_0(mercury__int__TypeCtorInfo_9_19, ((MR_Box) (mercury__int__Var_17)));
        }
      }
    else
      mercury__int__Trunc_7 = (mercury__int__X_4 / mercury__int__Y_5);
    {
      MR_Integer mercury__int__Var_12;

      mercury__int__succeeded = (mercury__int__X_4 >= (MR_Integer) 0);
      if (mercury__int__succeeded)
        {
          mercury__int__Var_12 = (MR_Integer) 0;
          mercury__int__succeeded = (mercury__int__Y_5 >= mercury__int__Var_12);
        }
    }
    if (!(mercury__int__succeeded))
      {
        {
          MR_Integer mercury__int__Var_10;

          mercury__int__succeeded = (mercury__int__X_4 < (MR_Integer) 0);
          if (mercury__int__succeeded)
            {
              mercury__int__Var_10 = (MR_Integer) 0;
              mercury__int__succeeded = (mercury__int__Y_5 < mercury__int__Var_10);
            }
        }
        if (!(mercury__int__succeeded))
          {
            MR_Integer mercury__int__Var_8;

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
mercury__int__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__int__succeeded)
              mercury__int__succeeded = (mercury__int__Y_5 == (MR_Integer) 0);
            if (mercury__int__succeeded)
              {
                MR_Word mercury__int__TypeCtorInfo_9_25 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
                MR_Word mercury__int__Var_23 = (MR_Word) ((MR_Box) ((MR_String) "int.rem: division by zero"));

                {
                  mercury__exception__throw_1_p_0(mercury__int__TypeCtorInfo_9_25, ((MR_Box) (mercury__int__Var_23)));
                }
              }
            else
              mercury__int__Var_8 = (mercury__int__X_4 % mercury__int__Y_5);
            mercury__int__succeeded = (mercury__int__Var_8 == (MR_Integer) 0);
          }
      }
    if (mercury__int__succeeded)
      mercury__int__Div_6 = mercury__int__Trunc_7;
    else
      {
        mercury__int__Div_6 = (mercury__int__Trunc_7 - (MR_Integer) 1);
      }
    return mercury__int__Div_6;
  }
}

MR_Integer MR_CALL 
mercury__int__minus_2_f_0(
  MR_Integer mercury__int__HeadVar__1_1,
  MR_Integer mercury__int__HeadVar__2_2)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__HeadVar__3_3 = (mercury__int__HeadVar__1_1 - mercury__int__HeadVar__2_2);

    return mercury__int__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__int__f_minus_2_f_2(
  MR_Integer mercury__int__HeadVar__1_1,
  MR_Integer * mercury__int__HeadVar__2_2,
  MR_Integer mercury__int__HeadVar__3_3)
{
  {
    MR_bool mercury__int__succeeded;

    *mercury__int__HeadVar__2_2 = (mercury__int__HeadVar__1_1 - mercury__int__HeadVar__3_3);
  }
}

void MR_CALL 
mercury__int__f_minus_2_f_1(
  MR_Integer * mercury__int__HeadVar__1_1,
  MR_Integer mercury__int__HeadVar__2_2,
  MR_Integer mercury__int__HeadVar__3_3)
{
  {
    MR_bool mercury__int__succeeded;

    *mercury__int__HeadVar__1_1 = (mercury__int__HeadVar__2_2 + mercury__int__HeadVar__3_3);
  }
}

MR_Integer MR_CALL 
mercury__int__f_minus_2_f_0(
  MR_Integer mercury__int__HeadVar__1_1,
  MR_Integer mercury__int__HeadVar__2_2)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__HeadVar__3_3 = (mercury__int__HeadVar__1_1 - mercury__int__HeadVar__2_2);

    return mercury__int__HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__int__times_2_f_0(
  MR_Integer mercury__int__HeadVar__1_1,
  MR_Integer mercury__int__HeadVar__2_2)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__HeadVar__3_3 = (mercury__int__HeadVar__1_1 * mercury__int__HeadVar__2_2);

    return mercury__int__HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__int__f_times_2_f_0(
  MR_Integer mercury__int__HeadVar__1_1,
  MR_Integer mercury__int__HeadVar__2_2)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__HeadVar__3_3 = (mercury__int__HeadVar__1_1 * mercury__int__HeadVar__2_2);

    return mercury__int__HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__int__plus_2_f_0(
  MR_Integer mercury__int__HeadVar__1_1,
  MR_Integer mercury__int__HeadVar__2_2)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__HeadVar__3_3 = (mercury__int__HeadVar__1_1 + mercury__int__HeadVar__2_2);

    return mercury__int__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__int__f_plus_2_f_2(
  MR_Integer mercury__int__HeadVar__1_1,
  MR_Integer * mercury__int__HeadVar__2_2,
  MR_Integer mercury__int__HeadVar__3_3)
{
  {
    MR_bool mercury__int__succeeded;

    *mercury__int__HeadVar__2_2 = (mercury__int__HeadVar__3_3 - mercury__int__HeadVar__1_1);
  }
}

void MR_CALL 
mercury__int__f_plus_2_f_1(
  MR_Integer * mercury__int__HeadVar__1_1,
  MR_Integer mercury__int__HeadVar__2_2,
  MR_Integer mercury__int__HeadVar__3_3)
{
  {
    MR_bool mercury__int__succeeded;

    *mercury__int__HeadVar__1_1 = (mercury__int__HeadVar__3_3 - mercury__int__HeadVar__2_2);
  }
}

MR_Integer MR_CALL 
mercury__int__f_plus_2_f_0(
  MR_Integer mercury__int__HeadVar__1_1,
  MR_Integer mercury__int__HeadVar__2_2)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__HeadVar__3_3 = (mercury__int__HeadVar__1_1 + mercury__int__HeadVar__2_2);

    return mercury__int__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__int__log2_2_p_0(
  MR_Integer mercury__int__X_3,
  MR_Integer * mercury__int__CeilLogX_4)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__Var_5;

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
mercury__int__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__int__succeeded)
      {
        mercury__int__Var_5 = (MR_Integer) 0;
        mercury__int__succeeded = (mercury__int__X_3 <= mercury__int__Var_5);
      }
    if (mercury__int__succeeded)
      {
        MR_Word mercury__int__TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
        MR_Word mercury__int__Var_6 = (MR_Word) ((MR_Box) ((MR_String) "int.log2: taking logarithm of zero"));

        {
          mercury__exception__throw_1_p_0(mercury__int__TypeCtorInfo_9_9, ((MR_Box) (mercury__int__Var_6)));
          return;
        }
      }
    else
      {
        {
          mercury__int__log2_loop_3_p_0(mercury__int__X_3, (MR_Integer) 0, mercury__int__CeilLogX_4);
        }
      }
  }
}

MR_Integer MR_CALL 
mercury__int__log2_1_f_0(
  MR_Integer mercury__int__X_3)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__CeilLogX_4;

    {
      mercury__int__log2_2_p_0(mercury__int__X_3, &mercury__int__CeilLogX_4);
    }
    return mercury__int__CeilLogX_4;
  }
}

void MR_CALL 
mercury__int__pow_3_p_0(
  MR_Integer mercury__int__Base_4,
  MR_Integer mercury__int__Exp_5,
  MR_Integer * mercury__int__Result_6)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__Var_7;

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
mercury__int__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__int__succeeded)
      {
        mercury__int__Var_7 = (MR_Integer) 0;
        mercury__int__succeeded = (mercury__int__Exp_5 < mercury__int__Var_7);
      }
    if (mercury__int__succeeded)
      {
        MR_Word mercury__int__TypeCtorInfo_11_11 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
        MR_Word mercury__int__Var_8 = (MR_Word) ((MR_Box) ((MR_String) "int.pow: zero base"));

        {
          mercury__exception__throw_1_p_0(mercury__int__TypeCtorInfo_11_11, ((MR_Box) (mercury__int__Var_8)));
          return;
        }
      }
    else
      {
        {
          *mercury__int__Result_6 = mercury__int__multiply_by_pow_3_f_0((MR_Integer) 1, mercury__int__Base_4, mercury__int__Exp_5);
        }
      }
  }
}

MR_Integer MR_CALL 
mercury__int__pow_2_f_0(
  MR_Integer mercury__int__Base_4,
  MR_Integer mercury__int__Exp_5)
{
  {
    MR_bool mercury__int__succeeded;
    MR_Integer mercury__int__Result_6;

    {
      mercury__int__pow_3_p_0(mercury__int__Base_4, mercury__int__Exp_5, &mercury__int__Result_6);
    }
    return mercury__int__Result_6;
  }
}

void MR_CALL 
mercury__int__min_3_p_0(
  MR_Integer mercury__int__X_4,
  MR_Integer mercury__int__Y_5,
  MR_Integer * mercury__int__Min_6)
{
  {
    MR_bool mercury__int__succeeded = (mercury__int__X_4 < mercury__int__Y_5);

    if (mercury__int__succeeded)
      *mercury__int__Min_6 = mercury__int__X_4;
    else
      *mercury__int__Min_6 = mercury__int__Y_5;
  }
}

MR_Integer MR_CALL 
mercury__int__min_2_f_0(
  MR_Integer mercury__int__X_4,
  MR_Integer mercury__int__Y_5)
{
  {
    MR_bool mercury__int__succeeded = (mercury__int__X_4 < mercury__int__Y_5);
    MR_Integer mercury__int__Min_6;

    if (mercury__int__succeeded)
      mercury__int__Min_6 = mercury__int__X_4;
    else
      mercury__int__Min_6 = mercury__int__Y_5;
    return mercury__int__Min_6;
  }
}

void MR_CALL 
mercury__int__max_3_p_0(
  MR_Integer mercury__int__X_4,
  MR_Integer mercury__int__Y_5,
  MR_Integer * mercury__int__Max_6)
{
  {
    MR_bool mercury__int__succeeded = (mercury__int__X_4 > mercury__int__Y_5);

    if (mercury__int__succeeded)
      *mercury__int__Max_6 = mercury__int__X_4;
    else
      *mercury__int__Max_6 = mercury__int__Y_5;
  }
}

MR_Integer MR_CALL 
mercury__int__max_2_f_0(
  MR_Integer mercury__int__X_4,
  MR_Integer mercury__int__Y_5)
{
  {
    MR_bool mercury__int__succeeded = (mercury__int__X_4 > mercury__int__Y_5);
    MR_Integer mercury__int__Max_6;

    if (mercury__int__succeeded)
      mercury__int__Max_6 = mercury__int__X_4;
    else
      mercury__int__Max_6 = mercury__int__Y_5;
    return mercury__int__Max_6;
  }
}

void MR_CALL 
mercury__int__abs_2_p_0(
  MR_Integer mercury__int__Num_3,
  MR_Integer * mercury__int__Abs_4)
{
  {
    MR_bool mercury__int__succeeded = (mercury__int__Num_3 < (MR_Integer) 0);

    if (mercury__int__succeeded)
      {
        *mercury__int__Abs_4 = ((MR_Integer) 0 - mercury__int__Num_3);
      }
    else
      *mercury__int__Abs_4 = mercury__int__Num_3;
  }
}

MR_Integer MR_CALL 
mercury__int__abs_1_f_0(
  MR_Integer mercury__int__Num_3)
{
  {
    MR_bool mercury__int__succeeded = (mercury__int__Num_3 < (MR_Integer) 0);
    MR_Integer mercury__int__Abs_4;

    if (mercury__int__succeeded)
      {
        mercury__int__Abs_4 = ((MR_Integer) 0 - mercury__int__Num_3);
      }
    else
      mercury__int__Abs_4 = mercury__int__Num_3;
    return mercury__int__Abs_4;
  }
}

MR_bool MR_CALL 
mercury__int__f_greater_or_equal_2_p_0(
  MR_Integer mercury__int__HeadVar__1_1,
  MR_Integer mercury__int__HeadVar__2_2)
{
  {
    MR_bool mercury__int__succeeded = (mercury__int__HeadVar__1_1 >= mercury__int__HeadVar__2_2);

    return mercury__int__succeeded;
  }
}

MR_bool MR_CALL 
mercury__int__f_less_or_equal_2_p_0(
  MR_Integer mercury__int__HeadVar__1_1,
  MR_Integer mercury__int__HeadVar__2_2)
{
  {
    MR_bool mercury__int__succeeded = (mercury__int__HeadVar__1_1 <= mercury__int__HeadVar__2_2);

    return mercury__int__succeeded;
  }
}

MR_bool MR_CALL 
mercury__int__f_greater_than_2_p_0(
  MR_Integer mercury__int__HeadVar__1_1,
  MR_Integer mercury__int__HeadVar__2_2)
{
  {
    MR_bool mercury__int__succeeded = (mercury__int__HeadVar__1_1 > mercury__int__HeadVar__2_2);

    return mercury__int__succeeded;
  }
}

MR_bool MR_CALL 
mercury__int__f_less_than_2_p_0(
  MR_Integer mercury__int__HeadVar__1_1,
  MR_Integer mercury__int__HeadVar__2_2)
{
  {
    MR_bool mercury__int__succeeded = (mercury__int__HeadVar__1_1 < mercury__int__HeadVar__2_2);

    return mercury__int__succeeded;
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
