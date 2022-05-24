/*
** Automatically generated from `assoc_list.m'
** by the Mercury compiler,
** version rotd-2022-05-24
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


// :- module assoc_list.
// :- implementation.

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
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"



struct mercury__assoc_list__foldl3_values_8_p_7_env_0_s {
  MR_Word mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_V_39;
  MR_Word mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_A_40;
  MR_Word mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_B_41;
  MR_Word mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_C_42;
  MR_Word mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_K_43;
  MR_Word mercury__assoc_list__foldl3_values_8_p_7_env_0__HeadVar__1_1;
  MR_Box * mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_A_4;
  MR_Box * mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_B_6;
  MR_Box * mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_C_8;
  MR_Cont mercury__assoc_list__foldl3_values_8_p_7_env_0__cont;
  void * mercury__assoc_list__foldl3_values_8_p_7_env_0__cont_env_ptr;
  MR_Word mercury__assoc_list__foldl3_values_8_p_7_env_0__KVs_21;
  MR_Box mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_A_33_33;
  MR_Box mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_B_34_34;
  MR_Box mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_C_35_35;
};

struct mercury__assoc_list__foldl3_values_8_p_6_env_0_s {
  MR_Word mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_V_39;
  MR_Word mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_A_40;
  MR_Word mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_B_41;
  MR_Word mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_C_42;
  MR_Word mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_K_43;
  MR_Word mercury__assoc_list__foldl3_values_8_p_6_env_0__HeadVar__1_1;
  MR_Box * mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_A_4;
  MR_Box * mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_B_6;
  MR_Box * mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_C_8;
  MR_Cont mercury__assoc_list__foldl3_values_8_p_6_env_0__cont;
  void * mercury__assoc_list__foldl3_values_8_p_6_env_0__cont_env_ptr;
  MR_Word mercury__assoc_list__foldl3_values_8_p_6_env_0__KVs_21;
  MR_Box mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_A_33_33;
  MR_Box mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_B_34_34;
  MR_Box mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_C_35_35;
};

struct mercury__assoc_list__foldl3_8_p_6_env_0_s {
  MR_Word mercury__assoc_list__foldl3_8_p_6_env_0__TypeInfo_for_K_39;
  MR_Word mercury__assoc_list__foldl3_8_p_6_env_0__TypeInfo_for_V_40;
  MR_Word mercury__assoc_list__foldl3_8_p_6_env_0__TypeInfo_for_A_41;
  MR_Word mercury__assoc_list__foldl3_8_p_6_env_0__TypeInfo_for_B_42;
  MR_Word mercury__assoc_list__foldl3_8_p_6_env_0__TypeInfo_for_C_43;
  MR_Word mercury__assoc_list__foldl3_8_p_6_env_0__HeadVar__1_1;
  MR_Box * mercury__assoc_list__foldl3_8_p_6_env_0__STATE_VARIABLE_A_4;
  MR_Box * mercury__assoc_list__foldl3_8_p_6_env_0__STATE_VARIABLE_B_6;
  MR_Box * mercury__assoc_list__foldl3_8_p_6_env_0__STATE_VARIABLE_C_8;
  MR_Cont mercury__assoc_list__foldl3_8_p_6_env_0__cont;
  void * mercury__assoc_list__foldl3_8_p_6_env_0__cont_env_ptr;
  MR_Word mercury__assoc_list__foldl3_8_p_6_env_0__KVs_22;
  MR_Box mercury__assoc_list__foldl3_8_p_6_env_0__STATE_VARIABLE_A_33_33;
  MR_Box mercury__assoc_list__foldl3_8_p_6_env_0__STATE_VARIABLE_B_34_34;
  MR_Box mercury__assoc_list__foldl3_8_p_6_env_0__STATE_VARIABLE_C_35_35;
};

struct mercury__assoc_list__foldl2_values_6_p_7_env_0_s {
  MR_Word mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_V_29;
  MR_Word mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_A_30;
  MR_Word mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_B_31;
  MR_Word mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_K_32;
  MR_Word mercury__assoc_list__foldl2_values_6_p_7_env_0__HeadVar__1_1;
  MR_Box * mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_A_4;
  MR_Box * mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_B_6;
  MR_Cont mercury__assoc_list__foldl2_values_6_p_7_env_0__cont;
  void * mercury__assoc_list__foldl2_values_6_p_7_env_0__cont_env_ptr;
  MR_Word mercury__assoc_list__foldl2_values_6_p_7_env_0__KVs_16;
  MR_Box mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_A_25_25;
  MR_Box mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_B_26_26;
};

struct mercury__assoc_list__foldl2_values_6_p_6_env_0_s {
  MR_Word mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_V_29;
  MR_Word mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_A_30;
  MR_Word mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_B_31;
  MR_Word mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_K_32;
  MR_Word mercury__assoc_list__foldl2_values_6_p_6_env_0__HeadVar__1_1;
  MR_Box * mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_A_4;
  MR_Box * mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_B_6;
  MR_Cont mercury__assoc_list__foldl2_values_6_p_6_env_0__cont;
  void * mercury__assoc_list__foldl2_values_6_p_6_env_0__cont_env_ptr;
  MR_Word mercury__assoc_list__foldl2_values_6_p_6_env_0__KVs_16;
  MR_Box mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_A_25_25;
  MR_Box mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_B_26_26;
};

struct mercury__assoc_list__foldl2_6_p_6_env_0_s {
  MR_Word mercury__assoc_list__foldl2_6_p_6_env_0__TypeInfo_for_K_29;
  MR_Word mercury__assoc_list__foldl2_6_p_6_env_0__TypeInfo_for_V_30;
  MR_Word mercury__assoc_list__foldl2_6_p_6_env_0__TypeInfo_for_A_31;
  MR_Word mercury__assoc_list__foldl2_6_p_6_env_0__TypeInfo_for_B_32;
  MR_Word mercury__assoc_list__foldl2_6_p_6_env_0__HeadVar__1_1;
  MR_Box * mercury__assoc_list__foldl2_6_p_6_env_0__STATE_VARIABLE_A_4;
  MR_Box * mercury__assoc_list__foldl2_6_p_6_env_0__STATE_VARIABLE_B_6;
  MR_Cont mercury__assoc_list__foldl2_6_p_6_env_0__cont;
  void * mercury__assoc_list__foldl2_6_p_6_env_0__cont_env_ptr;
  MR_Word mercury__assoc_list__foldl2_6_p_6_env_0__KVs_17;
  MR_Box mercury__assoc_list__foldl2_6_p_6_env_0__STATE_VARIABLE_A_25_25;
  MR_Box mercury__assoc_list__foldl2_6_p_6_env_0__STATE_VARIABLE_B_26_26;
};

struct mercury__assoc_list__foldl_values_4_p_7_env_0_s {
  MR_Word mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_V_19;
  MR_Word mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_A_20;
  MR_Word mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_K_21;
  MR_Word mercury__assoc_list__foldl_values_4_p_7_env_0__HeadVar__1_1;
  MR_Box * mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_A_4;
  MR_Cont mercury__assoc_list__foldl_values_4_p_7_env_0__cont;
  void * mercury__assoc_list__foldl_values_4_p_7_env_0__cont_env_ptr;
  MR_Word mercury__assoc_list__foldl_values_4_p_7_env_0__KVs_11;
  MR_Box mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_A_17_17;
};

struct mercury__assoc_list__foldl_values_4_p_6_env_0_s {
  MR_Word mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_V_19;
  MR_Word mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_A_20;
  MR_Word mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_K_21;
  MR_Word mercury__assoc_list__foldl_values_4_p_6_env_0__HeadVar__1_1;
  MR_Box * mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_A_4;
  MR_Cont mercury__assoc_list__foldl_values_4_p_6_env_0__cont;
  void * mercury__assoc_list__foldl_values_4_p_6_env_0__cont_env_ptr;
  MR_Word mercury__assoc_list__foldl_values_4_p_6_env_0__KVs_11;
  MR_Box mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_A_17_17;
};

struct mercury__assoc_list__foldl_keys_4_p_7_env_0_s {
  MR_Word mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_K_19;
  MR_Word mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_A_20;
  MR_Word mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_V_21;
  MR_Word mercury__assoc_list__foldl_keys_4_p_7_env_0__HeadVar__1_1;
  MR_Box * mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_A_4;
  MR_Cont mercury__assoc_list__foldl_keys_4_p_7_env_0__cont;
  void * mercury__assoc_list__foldl_keys_4_p_7_env_0__cont_env_ptr;
  MR_Word mercury__assoc_list__foldl_keys_4_p_7_env_0__KVs_11;
  MR_Box mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_A_17_17;
};

struct mercury__assoc_list__foldl_keys_4_p_6_env_0_s {
  MR_Word mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_K_19;
  MR_Word mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_A_20;
  MR_Word mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_V_21;
  MR_Word mercury__assoc_list__foldl_keys_4_p_6_env_0__HeadVar__1_1;
  MR_Box * mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_A_4;
  MR_Cont mercury__assoc_list__foldl_keys_4_p_6_env_0__cont;
  void * mercury__assoc_list__foldl_keys_4_p_6_env_0__cont_env_ptr;
  MR_Word mercury__assoc_list__foldl_keys_4_p_6_env_0__KVs_11;
  MR_Box mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_A_17_17;
};

struct mercury__assoc_list__foldl_4_p_6_env_0_s {
  MR_Word mercury__assoc_list__foldl_4_p_6_env_0__TypeInfo_for_K_19;
  MR_Word mercury__assoc_list__foldl_4_p_6_env_0__TypeInfo_for_V_20;
  MR_Word mercury__assoc_list__foldl_4_p_6_env_0__TypeInfo_for_A_21;
  MR_Word mercury__assoc_list__foldl_4_p_6_env_0__HeadVar__1_1;
  MR_Box * mercury__assoc_list__foldl_4_p_6_env_0__STATE_VARIABLE_A_4;
  MR_Cont mercury__assoc_list__foldl_4_p_6_env_0__cont;
  void * mercury__assoc_list__foldl_4_p_6_env_0__cont_env_ptr;
  MR_Word mercury__assoc_list__foldl_4_p_6_env_0__KVs_12;
  MR_Box mercury__assoc_list__foldl_4_p_6_env_0__STATE_VARIABLE_A_17_17;
};


static const MR_FA_PseudoTypeInfo_Struct2 mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__assoc_list__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__assoc_list__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_1;

static void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_7_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_6_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__assoc_list__foldl3_8_p_6_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_7_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_6_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__assoc_list__foldl2_6_p_6_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__assoc_list__foldl_values_4_p_7_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__assoc_list__foldl_values_4_p_6_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_7_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_6_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__assoc_list__foldl_4_p_6_1(
  void * env_ptr_arg);

static MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__assoc_list____Compare____assoc_list_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__assoc_list____Compare____assoc_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__assoc_list_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__assoc_list_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__assoc_list_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__assoc_list_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__assoc_list_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__assoc_list_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__assoc_list_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__assoc_list_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
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
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
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
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "io.environment.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"



static const MR_FA_PseudoTypeInfo_Struct2 mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_2 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__assoc_list__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_2)
  }
};

const MR_TypeCtorInfo_Struct mercury__assoc_list__assoc_list__type_ctor_info_assoc_list_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__assoc_list____Unify____assoc_list_2_0_10001)),
  ((MR_Box) (mercury__assoc_list____Compare____assoc_list_2_0_10001)),
  (MR_String) "assoc_list",
  (MR_String) "assoc_list",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__assoc_list__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_2) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__assoc_list__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__assoc_list__pair__pti_pair_2__pseudo_1__pseudo_1)
  }
};

const MR_TypeCtorInfo_Struct mercury__assoc_list__assoc_list__type_ctor_info_assoc_list_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__assoc_list____Unify____assoc_list_1_0_10001)),
  ((MR_Box) (mercury__assoc_list____Compare____assoc_list_1_0_10001)),
  (MR_String) "assoc_list",
  (MR_String) "assoc_list",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__assoc_list__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
mercury__assoc_list____Compare____assoc_list_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_8_8;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 2) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__list____Compare____list_1_0(TypeInfo_8_8, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_7_7;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
    MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
    MR_hl_field(MR_mktag(0), TypeInfo_7_7, 2) = ((MR_Box) (TypeInfo_for_T_5));
  }
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_7_7, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
mercury__assoc_list____Compare____assoc_list_2_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_9_9;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
    MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_K_6));
    MR_hl_field(MR_mktag(0), TypeInfo_9_9, 2) = ((MR_Box) (TypeInfo_for_V_7));
  }
  mercury__list____Compare____list_1_0(TypeInfo_9_9, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_2_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_8_8;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_K_5));
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 2) = ((MR_Box) (TypeInfo_for_V_6));
  }
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_8_8, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

static void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_7_1(
  void * env_ptr_arg)
{
  struct mercury__assoc_list__foldl3_values_8_p_7_env_0_s * env_ptr = (struct mercury__assoc_list__foldl3_values_8_p_7_env_0_s *) (env_ptr_arg);

  mercury__assoc_list__foldl3_values_8_p_7((env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_V_39, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_A_40, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_B_41, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_C_42, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_K_43, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__HeadVar__1_1, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__KVs_21, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_A_33_33, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_A_4, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_B_34_34, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_B_6, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_C_35_35, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_C_8, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__cont, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_7_env_0__cont_env_ptr);
}

void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_7(
  MR_Word TypeInfo_for_V_39,
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word TypeInfo_for_K_43,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6,
  MR_Box STATE_VARIABLE_C_0_7,
  MR_Box * STATE_VARIABLE_C_8,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__assoc_list__foldl3_values_8_p_7_env_0_s env;

  (env).mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_V_39 = TypeInfo_for_V_39;
  (env).mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_A_40 = TypeInfo_for_A_40;
  (env).mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_B_41 = TypeInfo_for_B_41;
  (env).mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_C_42 = TypeInfo_for_C_42;
  (env).mercury__assoc_list__foldl3_values_8_p_7_env_0__TypeInfo_for_K_43 = TypeInfo_for_K_43;
  (env).mercury__assoc_list__foldl3_values_8_p_7_env_0__HeadVar__1_1 = HeadVar__1_1;
  (env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_A_4 = STATE_VARIABLE_A_4;
  (env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_B_6 = STATE_VARIABLE_B_6;
  (env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_C_8 = STATE_VARIABLE_C_8;
  (env).mercury__assoc_list__foldl3_values_8_p_7_env_0__cont = cont;
  (env).mercury__assoc_list__foldl3_values_8_p_7_env_0__cont_env_ptr = cont_env_ptr;
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *((env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_C_8) = STATE_VARIABLE_C_0_7;
    *((env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_B_6) = STATE_VARIABLE_B_0_5;
    *((env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_A_4) = STATE_VARIABLE_A_0_3;
    ((env).mercury__assoc_list__foldl3_values_8_p_7_env_0__cont)((env).mercury__assoc_list__foldl3_values_8_p_7_env_0__cont_env_ptr);
  }
  else
  {
    MR_Word KV_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Box V_26;
    MR_Box _K_25;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

    (env).mercury__assoc_list__foldl3_values_8_p_7_env_0__KVs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    _K_25 = (MR_hl_field(MR_mktag(0), KV_20, (MR_Integer) 0));
    V_26 = (MR_hl_field(MR_mktag(0), KV_20, (MR_Integer) 1));
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__assoc_list__foldl3_values_8_p_7_env_0__HeadVar__1_1, (MR_Integer) 1))));
    func_0(((MR_Box) ((env).mercury__assoc_list__foldl3_values_8_p_7_env_0__HeadVar__1_1)), V_26, STATE_VARIABLE_A_0_3, &(env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_A_33_33, STATE_VARIABLE_B_0_5, &(env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_B_34_34, STATE_VARIABLE_C_0_7, &(env).mercury__assoc_list__foldl3_values_8_p_7_env_0__STATE_VARIABLE_C_35_35, mercury__assoc_list__foldl3_values_8_p_7_1, &env);
  }
}

static void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_6_1(
  void * env_ptr_arg)
{
  struct mercury__assoc_list__foldl3_values_8_p_6_env_0_s * env_ptr = (struct mercury__assoc_list__foldl3_values_8_p_6_env_0_s *) (env_ptr_arg);

  mercury__assoc_list__foldl3_values_8_p_6((env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_V_39, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_A_40, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_B_41, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_C_42, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_K_43, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__HeadVar__1_1, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__KVs_21, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_A_33_33, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_A_4, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_B_34_34, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_B_6, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_C_35_35, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_C_8, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__cont, (env_ptr)->mercury__assoc_list__foldl3_values_8_p_6_env_0__cont_env_ptr);
}

void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_6(
  MR_Word TypeInfo_for_V_39,
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word TypeInfo_for_K_43,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6,
  MR_Box STATE_VARIABLE_C_0_7,
  MR_Box * STATE_VARIABLE_C_8,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__assoc_list__foldl3_values_8_p_6_env_0_s env;

  (env).mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_V_39 = TypeInfo_for_V_39;
  (env).mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_A_40 = TypeInfo_for_A_40;
  (env).mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_B_41 = TypeInfo_for_B_41;
  (env).mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_C_42 = TypeInfo_for_C_42;
  (env).mercury__assoc_list__foldl3_values_8_p_6_env_0__TypeInfo_for_K_43 = TypeInfo_for_K_43;
  (env).mercury__assoc_list__foldl3_values_8_p_6_env_0__HeadVar__1_1 = HeadVar__1_1;
  (env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_A_4 = STATE_VARIABLE_A_4;
  (env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_B_6 = STATE_VARIABLE_B_6;
  (env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_C_8 = STATE_VARIABLE_C_8;
  (env).mercury__assoc_list__foldl3_values_8_p_6_env_0__cont = cont;
  (env).mercury__assoc_list__foldl3_values_8_p_6_env_0__cont_env_ptr = cont_env_ptr;
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *((env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_C_8) = STATE_VARIABLE_C_0_7;
    *((env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_B_6) = STATE_VARIABLE_B_0_5;
    *((env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_A_4) = STATE_VARIABLE_A_0_3;
    ((env).mercury__assoc_list__foldl3_values_8_p_6_env_0__cont)((env).mercury__assoc_list__foldl3_values_8_p_6_env_0__cont_env_ptr);
  }
  else
  {
    MR_Word KV_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Box V_26;
    MR_Box _K_25;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

    (env).mercury__assoc_list__foldl3_values_8_p_6_env_0__KVs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    _K_25 = (MR_hl_field(MR_mktag(0), KV_20, (MR_Integer) 0));
    V_26 = (MR_hl_field(MR_mktag(0), KV_20, (MR_Integer) 1));
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__assoc_list__foldl3_values_8_p_6_env_0__HeadVar__1_1, (MR_Integer) 1))));
    func_0(((MR_Box) ((env).mercury__assoc_list__foldl3_values_8_p_6_env_0__HeadVar__1_1)), V_26, STATE_VARIABLE_A_0_3, &(env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_A_33_33, STATE_VARIABLE_B_0_5, &(env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_B_34_34, STATE_VARIABLE_C_0_7, &(env).mercury__assoc_list__foldl3_values_8_p_6_env_0__STATE_VARIABLE_C_35_35, mercury__assoc_list__foldl3_values_8_p_6_1, &env);
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl3_values_8_p_5(
  MR_Word TypeInfo_for_V_39,
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word TypeInfo_for_K_43,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6,
  MR_Box STATE_VARIABLE_C_0_7,
  MR_Box * STATE_VARIABLE_C_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_C_8 = STATE_VARIABLE_C_0_7;
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word KV_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_26 = (MR_hl_field(MR_mktag(0), KV_20, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_A_33_33;
      MR_Box STATE_VARIABLE_B_34_34;
      MR_Box STATE_VARIABLE_C_35_35;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;
      MR_Box next_value_of_STATE_VARIABLE_C_0_7;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), V_26, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_33_33, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_34_34, STATE_VARIABLE_C_0_7, &STATE_VARIABLE_C_35_35);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_21;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_33_33;
        next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_34_34;
        next_value_of_STATE_VARIABLE_C_0_7 = STATE_VARIABLE_C_35_35;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
        STATE_VARIABLE_C_0_7 = next_value_of_STATE_VARIABLE_C_0_7;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl3_values_8_p_4(
  MR_Word TypeInfo_for_V_39,
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word TypeInfo_for_K_43,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6,
  MR_Box STATE_VARIABLE_C_0_7,
  MR_Box * STATE_VARIABLE_C_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_C_8 = STATE_VARIABLE_C_0_7;
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word KV_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_26 = (MR_hl_field(MR_mktag(0), KV_20, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_A_33_33;
      MR_Box STATE_VARIABLE_B_34_34;
      MR_Box STATE_VARIABLE_C_35_35;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;
      MR_Box next_value_of_STATE_VARIABLE_C_0_7;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), V_26, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_33_33, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_34_34, STATE_VARIABLE_C_0_7, &STATE_VARIABLE_C_35_35);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_21;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_33_33;
        next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_34_34;
        next_value_of_STATE_VARIABLE_C_0_7 = STATE_VARIABLE_C_35_35;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
        STATE_VARIABLE_C_0_7 = next_value_of_STATE_VARIABLE_C_0_7;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl3_values_8_p_3(
  MR_Word TypeInfo_for_V_39,
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word TypeInfo_for_K_43,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6,
  MR_Box STATE_VARIABLE_C_0_7,
  MR_Box * STATE_VARIABLE_C_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_C_8 = STATE_VARIABLE_C_0_7;
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word KV_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_26 = (MR_hl_field(MR_mktag(0), KV_20, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_A_33_33;
      MR_Box STATE_VARIABLE_B_34_34;
      MR_Box STATE_VARIABLE_C_35_35;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;
      MR_Box next_value_of_STATE_VARIABLE_C_0_7;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), V_26, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_33_33, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_34_34, STATE_VARIABLE_C_0_7, &STATE_VARIABLE_C_35_35);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_21;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_33_33;
        next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_34_34;
        next_value_of_STATE_VARIABLE_C_0_7 = STATE_VARIABLE_C_35_35;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
        STATE_VARIABLE_C_0_7 = next_value_of_STATE_VARIABLE_C_0_7;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_2(
  MR_Word TypeInfo_for_V_39,
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word TypeInfo_for_K_43,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6,
  MR_Box STATE_VARIABLE_C_0_7,
  MR_Box * STATE_VARIABLE_C_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_C_8 = STATE_VARIABLE_C_0_7;
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    }
    else
    {
      MR_Word KV_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_26 = (MR_hl_field(MR_mktag(0), KV_20, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_A_33_33;
      MR_Box STATE_VARIABLE_B_34_34;
      MR_Box STATE_VARIABLE_C_35_35;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;
      MR_Box next_value_of_STATE_VARIABLE_C_0_7;

      func_0(((MR_Box) (HeadVar__1_1)), V_26, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_33_33, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_34_34, STATE_VARIABLE_C_0_7, &STATE_VARIABLE_C_35_35);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_21;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_33_33;
      next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_34_34;
      next_value_of_STATE_VARIABLE_C_0_7 = STATE_VARIABLE_C_35_35;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
      STATE_VARIABLE_C_0_7 = next_value_of_STATE_VARIABLE_C_0_7;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_1(
  MR_Word TypeInfo_for_V_39,
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word TypeInfo_for_K_43,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6,
  MR_Box STATE_VARIABLE_C_0_7,
  MR_Box * STATE_VARIABLE_C_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_C_8 = STATE_VARIABLE_C_0_7;
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    }
    else
    {
      MR_Word KV_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_26 = (MR_hl_field(MR_mktag(0), KV_20, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_A_33_33;
      MR_Box STATE_VARIABLE_B_34_34;
      MR_Box STATE_VARIABLE_C_35_35;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;
      MR_Box next_value_of_STATE_VARIABLE_C_0_7;

      func_0(((MR_Box) (HeadVar__1_1)), V_26, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_33_33, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_34_34, STATE_VARIABLE_C_0_7, &STATE_VARIABLE_C_35_35);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_21;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_33_33;
      next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_34_34;
      next_value_of_STATE_VARIABLE_C_0_7 = STATE_VARIABLE_C_35_35;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
      STATE_VARIABLE_C_0_7 = next_value_of_STATE_VARIABLE_C_0_7;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl3_values_8_p_0(
  MR_Word TypeInfo_for_V_39,
  MR_Word TypeInfo_for_A_40,
  MR_Word TypeInfo_for_B_41,
  MR_Word TypeInfo_for_C_42,
  MR_Word TypeInfo_for_K_43,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6,
  MR_Box STATE_VARIABLE_C_0_7,
  MR_Box * STATE_VARIABLE_C_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_C_8 = STATE_VARIABLE_C_0_7;
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    }
    else
    {
      MR_Word KV_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_26 = (MR_hl_field(MR_mktag(0), KV_20, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_A_33_33;
      MR_Box STATE_VARIABLE_B_34_34;
      MR_Box STATE_VARIABLE_C_35_35;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;
      MR_Box next_value_of_STATE_VARIABLE_C_0_7;

      func_0(((MR_Box) (HeadVar__1_1)), V_26, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_33_33, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_34_34, STATE_VARIABLE_C_0_7, &STATE_VARIABLE_C_35_35);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_21;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_33_33;
      next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_34_34;
      next_value_of_STATE_VARIABLE_C_0_7 = STATE_VARIABLE_C_35_35;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
      STATE_VARIABLE_C_0_7 = next_value_of_STATE_VARIABLE_C_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__assoc_list__foldl3_8_p_6_1(
  void * env_ptr_arg)
{
  struct mercury__assoc_list__foldl3_8_p_6_env_0_s * env_ptr = (struct mercury__assoc_list__foldl3_8_p_6_env_0_s *) (env_ptr_arg);

  mercury__assoc_list__foldl3_8_p_6((env_ptr)->mercury__assoc_list__foldl3_8_p_6_env_0__TypeInfo_for_K_39, (env_ptr)->mercury__assoc_list__foldl3_8_p_6_env_0__TypeInfo_for_V_40, (env_ptr)->mercury__assoc_list__foldl3_8_p_6_env_0__TypeInfo_for_A_41, (env_ptr)->mercury__assoc_list__foldl3_8_p_6_env_0__TypeInfo_for_B_42, (env_ptr)->mercury__assoc_list__foldl3_8_p_6_env_0__TypeInfo_for_C_43, (env_ptr)->mercury__assoc_list__foldl3_8_p_6_env_0__HeadVar__1_1, (env_ptr)->mercury__assoc_list__foldl3_8_p_6_env_0__KVs_22, (env_ptr)->mercury__assoc_list__foldl3_8_p_6_env_0__STATE_VARIABLE_A_33_33, (env_ptr)->mercury__assoc_list__foldl3_8_p_6_env_0__STATE_VARIABLE_A_4, (env_ptr)->mercury__assoc_list__foldl3_8_p_6_env_0__STATE_VARIABLE_B_34_34, (env_ptr)->mercury__assoc_list__foldl3_8_p_6_env_0__STATE_VARIABLE_B_6, (env_ptr)->mercury__assoc_list__foldl3_8_p_6_env_0__STATE_VARIABLE_C_35_35, (env_ptr)->mercury__assoc_list__foldl3_8_p_6_env_0__STATE_VARIABLE_C_8, (env_ptr)->mercury__assoc_list__foldl3_8_p_6_env_0__cont, (env_ptr)->mercury__assoc_list__foldl3_8_p_6_env_0__cont_env_ptr);
}

void MR_CALL 
mercury__assoc_list__foldl3_8_p_6(
  MR_Word TypeInfo_for_K_39,
  MR_Word TypeInfo_for_V_40,
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6,
  MR_Box STATE_VARIABLE_C_0_7,
  MR_Box * STATE_VARIABLE_C_8,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__assoc_list__foldl3_8_p_6_env_0_s env;

  (env).mercury__assoc_list__foldl3_8_p_6_env_0__TypeInfo_for_K_39 = TypeInfo_for_K_39;
  (env).mercury__assoc_list__foldl3_8_p_6_env_0__TypeInfo_for_V_40 = TypeInfo_for_V_40;
  (env).mercury__assoc_list__foldl3_8_p_6_env_0__TypeInfo_for_A_41 = TypeInfo_for_A_41;
  (env).mercury__assoc_list__foldl3_8_p_6_env_0__TypeInfo_for_B_42 = TypeInfo_for_B_42;
  (env).mercury__assoc_list__foldl3_8_p_6_env_0__TypeInfo_for_C_43 = TypeInfo_for_C_43;
  (env).mercury__assoc_list__foldl3_8_p_6_env_0__HeadVar__1_1 = HeadVar__1_1;
  (env).mercury__assoc_list__foldl3_8_p_6_env_0__STATE_VARIABLE_A_4 = STATE_VARIABLE_A_4;
  (env).mercury__assoc_list__foldl3_8_p_6_env_0__STATE_VARIABLE_B_6 = STATE_VARIABLE_B_6;
  (env).mercury__assoc_list__foldl3_8_p_6_env_0__STATE_VARIABLE_C_8 = STATE_VARIABLE_C_8;
  (env).mercury__assoc_list__foldl3_8_p_6_env_0__cont = cont;
  (env).mercury__assoc_list__foldl3_8_p_6_env_0__cont_env_ptr = cont_env_ptr;
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *((env).mercury__assoc_list__foldl3_8_p_6_env_0__STATE_VARIABLE_C_8) = STATE_VARIABLE_C_0_7;
    *((env).mercury__assoc_list__foldl3_8_p_6_env_0__STATE_VARIABLE_B_6) = STATE_VARIABLE_B_0_5;
    *((env).mercury__assoc_list__foldl3_8_p_6_env_0__STATE_VARIABLE_A_4) = STATE_VARIABLE_A_0_3;
    ((env).mercury__assoc_list__foldl3_8_p_6_env_0__cont)((env).mercury__assoc_list__foldl3_8_p_6_env_0__cont_env_ptr);
  }
  else
  {
    MR_Box K_20;
    MR_Box V_21;
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

    (env).mercury__assoc_list__foldl3_8_p_6_env_0__KVs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    K_20 = (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0));
    V_21 = (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 1));
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__assoc_list__foldl3_8_p_6_env_0__HeadVar__1_1, (MR_Integer) 1))));
    func_0(((MR_Box) ((env).mercury__assoc_list__foldl3_8_p_6_env_0__HeadVar__1_1)), K_20, V_21, STATE_VARIABLE_A_0_3, &(env).mercury__assoc_list__foldl3_8_p_6_env_0__STATE_VARIABLE_A_33_33, STATE_VARIABLE_B_0_5, &(env).mercury__assoc_list__foldl3_8_p_6_env_0__STATE_VARIABLE_B_34_34, STATE_VARIABLE_C_0_7, &(env).mercury__assoc_list__foldl3_8_p_6_env_0__STATE_VARIABLE_C_35_35, mercury__assoc_list__foldl3_8_p_6_1, &env);
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl3_8_p_5(
  MR_Word TypeInfo_for_K_39,
  MR_Word TypeInfo_for_V_40,
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6,
  MR_Box STATE_VARIABLE_C_0_7,
  MR_Box * STATE_VARIABLE_C_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_C_8 = STATE_VARIABLE_C_0_7;
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box K_20;
      MR_Box V_21;
      MR_Word KVs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_A_33_33;
      MR_Box STATE_VARIABLE_B_34_34;
      MR_Box STATE_VARIABLE_C_35_35;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;
      MR_Box next_value_of_STATE_VARIABLE_C_0_7;

      K_20 = (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0));
      V_21 = (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 1));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_20, V_21, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_33_33, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_34_34, STATE_VARIABLE_C_0_7, &STATE_VARIABLE_C_35_35);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_22;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_33_33;
        next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_34_34;
        next_value_of_STATE_VARIABLE_C_0_7 = STATE_VARIABLE_C_35_35;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
        STATE_VARIABLE_C_0_7 = next_value_of_STATE_VARIABLE_C_0_7;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl3_8_p_4(
  MR_Word TypeInfo_for_K_39,
  MR_Word TypeInfo_for_V_40,
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6,
  MR_Box STATE_VARIABLE_C_0_7,
  MR_Box * STATE_VARIABLE_C_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_C_8 = STATE_VARIABLE_C_0_7;
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box K_20;
      MR_Box V_21;
      MR_Word KVs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_A_33_33;
      MR_Box STATE_VARIABLE_B_34_34;
      MR_Box STATE_VARIABLE_C_35_35;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;
      MR_Box next_value_of_STATE_VARIABLE_C_0_7;

      K_20 = (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0));
      V_21 = (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 1));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_20, V_21, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_33_33, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_34_34, STATE_VARIABLE_C_0_7, &STATE_VARIABLE_C_35_35);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_22;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_33_33;
        next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_34_34;
        next_value_of_STATE_VARIABLE_C_0_7 = STATE_VARIABLE_C_35_35;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
        STATE_VARIABLE_C_0_7 = next_value_of_STATE_VARIABLE_C_0_7;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl3_8_p_3(
  MR_Word TypeInfo_for_K_39,
  MR_Word TypeInfo_for_V_40,
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6,
  MR_Box STATE_VARIABLE_C_0_7,
  MR_Box * STATE_VARIABLE_C_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_C_8 = STATE_VARIABLE_C_0_7;
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box K_20;
      MR_Box V_21;
      MR_Word KVs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_A_33_33;
      MR_Box STATE_VARIABLE_B_34_34;
      MR_Box STATE_VARIABLE_C_35_35;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;
      MR_Box next_value_of_STATE_VARIABLE_C_0_7;

      K_20 = (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0));
      V_21 = (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 1));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_20, V_21, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_33_33, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_34_34, STATE_VARIABLE_C_0_7, &STATE_VARIABLE_C_35_35);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_22;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_33_33;
        next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_34_34;
        next_value_of_STATE_VARIABLE_C_0_7 = STATE_VARIABLE_C_35_35;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
        STATE_VARIABLE_C_0_7 = next_value_of_STATE_VARIABLE_C_0_7;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl3_8_p_2(
  MR_Word TypeInfo_for_K_39,
  MR_Word TypeInfo_for_V_40,
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6,
  MR_Box STATE_VARIABLE_C_0_7,
  MR_Box * STATE_VARIABLE_C_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_C_8 = STATE_VARIABLE_C_0_7;
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    }
    else
    {
      MR_Box K_20;
      MR_Box V_21;
      MR_Word KVs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_A_33_33;
      MR_Box STATE_VARIABLE_B_34_34;
      MR_Box STATE_VARIABLE_C_35_35;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;
      MR_Box next_value_of_STATE_VARIABLE_C_0_7;

      K_20 = (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0));
      V_21 = (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 1));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      func_0(((MR_Box) (HeadVar__1_1)), K_20, V_21, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_33_33, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_34_34, STATE_VARIABLE_C_0_7, &STATE_VARIABLE_C_35_35);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_22;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_33_33;
      next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_34_34;
      next_value_of_STATE_VARIABLE_C_0_7 = STATE_VARIABLE_C_35_35;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
      STATE_VARIABLE_C_0_7 = next_value_of_STATE_VARIABLE_C_0_7;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl3_8_p_1(
  MR_Word TypeInfo_for_K_39,
  MR_Word TypeInfo_for_V_40,
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6,
  MR_Box STATE_VARIABLE_C_0_7,
  MR_Box * STATE_VARIABLE_C_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_C_8 = STATE_VARIABLE_C_0_7;
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    }
    else
    {
      MR_Box K_20;
      MR_Box V_21;
      MR_Word KVs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_A_33_33;
      MR_Box STATE_VARIABLE_B_34_34;
      MR_Box STATE_VARIABLE_C_35_35;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;
      MR_Box next_value_of_STATE_VARIABLE_C_0_7;

      K_20 = (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0));
      V_21 = (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 1));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      func_0(((MR_Box) (HeadVar__1_1)), K_20, V_21, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_33_33, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_34_34, STATE_VARIABLE_C_0_7, &STATE_VARIABLE_C_35_35);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_22;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_33_33;
      next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_34_34;
      next_value_of_STATE_VARIABLE_C_0_7 = STATE_VARIABLE_C_35_35;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
      STATE_VARIABLE_C_0_7 = next_value_of_STATE_VARIABLE_C_0_7;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl3_8_p_0(
  MR_Word TypeInfo_for_K_39,
  MR_Word TypeInfo_for_V_40,
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6,
  MR_Box STATE_VARIABLE_C_0_7,
  MR_Box * STATE_VARIABLE_C_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_C_8 = STATE_VARIABLE_C_0_7;
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    }
    else
    {
      MR_Box K_20;
      MR_Box V_21;
      MR_Word KVs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_A_33_33;
      MR_Box STATE_VARIABLE_B_34_34;
      MR_Box STATE_VARIABLE_C_35_35;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;
      MR_Box next_value_of_STATE_VARIABLE_C_0_7;

      K_20 = (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0));
      V_21 = (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 1));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      func_0(((MR_Box) (HeadVar__1_1)), K_20, V_21, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_33_33, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_34_34, STATE_VARIABLE_C_0_7, &STATE_VARIABLE_C_35_35);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_22;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_33_33;
      next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_34_34;
      next_value_of_STATE_VARIABLE_C_0_7 = STATE_VARIABLE_C_35_35;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
      STATE_VARIABLE_C_0_7 = next_value_of_STATE_VARIABLE_C_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_7_1(
  void * env_ptr_arg)
{
  struct mercury__assoc_list__foldl2_values_6_p_7_env_0_s * env_ptr = (struct mercury__assoc_list__foldl2_values_6_p_7_env_0_s *) (env_ptr_arg);

  mercury__assoc_list__foldl2_values_6_p_7((env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_V_29, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_A_30, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_B_31, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_K_32, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__HeadVar__1_1, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__KVs_16, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_A_25_25, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_A_4, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_B_26_26, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_B_6, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__cont, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_7_env_0__cont_env_ptr);
}

void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_7(
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_K_32,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__assoc_list__foldl2_values_6_p_7_env_0_s env;

  (env).mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_V_29 = TypeInfo_for_V_29;
  (env).mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_A_30 = TypeInfo_for_A_30;
  (env).mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_B_31 = TypeInfo_for_B_31;
  (env).mercury__assoc_list__foldl2_values_6_p_7_env_0__TypeInfo_for_K_32 = TypeInfo_for_K_32;
  (env).mercury__assoc_list__foldl2_values_6_p_7_env_0__HeadVar__1_1 = HeadVar__1_1;
  (env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_A_4 = STATE_VARIABLE_A_4;
  (env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_B_6 = STATE_VARIABLE_B_6;
  (env).mercury__assoc_list__foldl2_values_6_p_7_env_0__cont = cont;
  (env).mercury__assoc_list__foldl2_values_6_p_7_env_0__cont_env_ptr = cont_env_ptr;
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *((env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_B_6) = STATE_VARIABLE_B_0_5;
    *((env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_A_4) = STATE_VARIABLE_A_0_3;
    ((env).mercury__assoc_list__foldl2_values_6_p_7_env_0__cont)((env).mercury__assoc_list__foldl2_values_6_p_7_env_0__cont_env_ptr);
  }
  else
  {
    MR_Word KV_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Box V_20;
    MR_Box _K_19;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

    (env).mercury__assoc_list__foldl2_values_6_p_7_env_0__KVs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    _K_19 = (MR_hl_field(MR_mktag(0), KV_15, (MR_Integer) 0));
    V_20 = (MR_hl_field(MR_mktag(0), KV_15, (MR_Integer) 1));
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__assoc_list__foldl2_values_6_p_7_env_0__HeadVar__1_1, (MR_Integer) 1))));
    func_0(((MR_Box) ((env).mercury__assoc_list__foldl2_values_6_p_7_env_0__HeadVar__1_1)), V_20, STATE_VARIABLE_A_0_3, &(env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_A_25_25, STATE_VARIABLE_B_0_5, &(env).mercury__assoc_list__foldl2_values_6_p_7_env_0__STATE_VARIABLE_B_26_26, mercury__assoc_list__foldl2_values_6_p_7_1, &env);
  }
}

static void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_6_1(
  void * env_ptr_arg)
{
  struct mercury__assoc_list__foldl2_values_6_p_6_env_0_s * env_ptr = (struct mercury__assoc_list__foldl2_values_6_p_6_env_0_s *) (env_ptr_arg);

  mercury__assoc_list__foldl2_values_6_p_6((env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_V_29, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_A_30, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_B_31, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_K_32, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__HeadVar__1_1, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__KVs_16, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_A_25_25, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_A_4, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_B_26_26, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_B_6, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__cont, (env_ptr)->mercury__assoc_list__foldl2_values_6_p_6_env_0__cont_env_ptr);
}

void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_6(
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_K_32,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__assoc_list__foldl2_values_6_p_6_env_0_s env;

  (env).mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_V_29 = TypeInfo_for_V_29;
  (env).mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_A_30 = TypeInfo_for_A_30;
  (env).mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_B_31 = TypeInfo_for_B_31;
  (env).mercury__assoc_list__foldl2_values_6_p_6_env_0__TypeInfo_for_K_32 = TypeInfo_for_K_32;
  (env).mercury__assoc_list__foldl2_values_6_p_6_env_0__HeadVar__1_1 = HeadVar__1_1;
  (env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_A_4 = STATE_VARIABLE_A_4;
  (env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_B_6 = STATE_VARIABLE_B_6;
  (env).mercury__assoc_list__foldl2_values_6_p_6_env_0__cont = cont;
  (env).mercury__assoc_list__foldl2_values_6_p_6_env_0__cont_env_ptr = cont_env_ptr;
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *((env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_B_6) = STATE_VARIABLE_B_0_5;
    *((env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_A_4) = STATE_VARIABLE_A_0_3;
    ((env).mercury__assoc_list__foldl2_values_6_p_6_env_0__cont)((env).mercury__assoc_list__foldl2_values_6_p_6_env_0__cont_env_ptr);
  }
  else
  {
    MR_Word KV_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Box V_20;
    MR_Box _K_19;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

    (env).mercury__assoc_list__foldl2_values_6_p_6_env_0__KVs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    _K_19 = (MR_hl_field(MR_mktag(0), KV_15, (MR_Integer) 0));
    V_20 = (MR_hl_field(MR_mktag(0), KV_15, (MR_Integer) 1));
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__assoc_list__foldl2_values_6_p_6_env_0__HeadVar__1_1, (MR_Integer) 1))));
    func_0(((MR_Box) ((env).mercury__assoc_list__foldl2_values_6_p_6_env_0__HeadVar__1_1)), V_20, STATE_VARIABLE_A_0_3, &(env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_A_25_25, STATE_VARIABLE_B_0_5, &(env).mercury__assoc_list__foldl2_values_6_p_6_env_0__STATE_VARIABLE_B_26_26, mercury__assoc_list__foldl2_values_6_p_6_1, &env);
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl2_values_6_p_5(
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_K_32,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word KV_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_20 = (MR_hl_field(MR_mktag(0), KV_15, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_A_25_25;
      MR_Box STATE_VARIABLE_B_26_26;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), V_20, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_25_25, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_26_26);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_16;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_25_25;
        next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_26_26;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl2_values_6_p_4(
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_K_32,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word KV_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_20 = (MR_hl_field(MR_mktag(0), KV_15, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_A_25_25;
      MR_Box STATE_VARIABLE_B_26_26;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), V_20, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_25_25, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_26_26);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_16;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_25_25;
        next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_26_26;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl2_values_6_p_3(
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_K_32,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word KV_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_20 = (MR_hl_field(MR_mktag(0), KV_15, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_A_25_25;
      MR_Box STATE_VARIABLE_B_26_26;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), V_20, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_25_25, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_26_26);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_16;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_25_25;
        next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_26_26;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_2(
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_K_32,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    }
    else
    {
      MR_Word KV_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_20 = (MR_hl_field(MR_mktag(0), KV_15, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_A_25_25;
      MR_Box STATE_VARIABLE_B_26_26;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;

      func_0(((MR_Box) (HeadVar__1_1)), V_20, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_25_25, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_26_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_16;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_25_25;
      next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_26_26;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_1(
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_K_32,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    }
    else
    {
      MR_Word KV_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_20 = (MR_hl_field(MR_mktag(0), KV_15, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_A_25_25;
      MR_Box STATE_VARIABLE_B_26_26;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;

      func_0(((MR_Box) (HeadVar__1_1)), V_20, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_25_25, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_26_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_16;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_25_25;
      next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_26_26;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl2_values_6_p_0(
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_K_32,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    }
    else
    {
      MR_Word KV_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_20 = (MR_hl_field(MR_mktag(0), KV_15, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_A_25_25;
      MR_Box STATE_VARIABLE_B_26_26;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;

      func_0(((MR_Box) (HeadVar__1_1)), V_20, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_25_25, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_26_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_16;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_25_25;
      next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_26_26;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__assoc_list__foldl2_6_p_6_1(
  void * env_ptr_arg)
{
  struct mercury__assoc_list__foldl2_6_p_6_env_0_s * env_ptr = (struct mercury__assoc_list__foldl2_6_p_6_env_0_s *) (env_ptr_arg);

  mercury__assoc_list__foldl2_6_p_6((env_ptr)->mercury__assoc_list__foldl2_6_p_6_env_0__TypeInfo_for_K_29, (env_ptr)->mercury__assoc_list__foldl2_6_p_6_env_0__TypeInfo_for_V_30, (env_ptr)->mercury__assoc_list__foldl2_6_p_6_env_0__TypeInfo_for_A_31, (env_ptr)->mercury__assoc_list__foldl2_6_p_6_env_0__TypeInfo_for_B_32, (env_ptr)->mercury__assoc_list__foldl2_6_p_6_env_0__HeadVar__1_1, (env_ptr)->mercury__assoc_list__foldl2_6_p_6_env_0__KVs_17, (env_ptr)->mercury__assoc_list__foldl2_6_p_6_env_0__STATE_VARIABLE_A_25_25, (env_ptr)->mercury__assoc_list__foldl2_6_p_6_env_0__STATE_VARIABLE_A_4, (env_ptr)->mercury__assoc_list__foldl2_6_p_6_env_0__STATE_VARIABLE_B_26_26, (env_ptr)->mercury__assoc_list__foldl2_6_p_6_env_0__STATE_VARIABLE_B_6, (env_ptr)->mercury__assoc_list__foldl2_6_p_6_env_0__cont, (env_ptr)->mercury__assoc_list__foldl2_6_p_6_env_0__cont_env_ptr);
}

void MR_CALL 
mercury__assoc_list__foldl2_6_p_6(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__assoc_list__foldl2_6_p_6_env_0_s env;

  (env).mercury__assoc_list__foldl2_6_p_6_env_0__TypeInfo_for_K_29 = TypeInfo_for_K_29;
  (env).mercury__assoc_list__foldl2_6_p_6_env_0__TypeInfo_for_V_30 = TypeInfo_for_V_30;
  (env).mercury__assoc_list__foldl2_6_p_6_env_0__TypeInfo_for_A_31 = TypeInfo_for_A_31;
  (env).mercury__assoc_list__foldl2_6_p_6_env_0__TypeInfo_for_B_32 = TypeInfo_for_B_32;
  (env).mercury__assoc_list__foldl2_6_p_6_env_0__HeadVar__1_1 = HeadVar__1_1;
  (env).mercury__assoc_list__foldl2_6_p_6_env_0__STATE_VARIABLE_A_4 = STATE_VARIABLE_A_4;
  (env).mercury__assoc_list__foldl2_6_p_6_env_0__STATE_VARIABLE_B_6 = STATE_VARIABLE_B_6;
  (env).mercury__assoc_list__foldl2_6_p_6_env_0__cont = cont;
  (env).mercury__assoc_list__foldl2_6_p_6_env_0__cont_env_ptr = cont_env_ptr;
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *((env).mercury__assoc_list__foldl2_6_p_6_env_0__STATE_VARIABLE_B_6) = STATE_VARIABLE_B_0_5;
    *((env).mercury__assoc_list__foldl2_6_p_6_env_0__STATE_VARIABLE_A_4) = STATE_VARIABLE_A_0_3;
    ((env).mercury__assoc_list__foldl2_6_p_6_env_0__cont)((env).mercury__assoc_list__foldl2_6_p_6_env_0__cont_env_ptr);
  }
  else
  {
    MR_Box K_15;
    MR_Box V_16;
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *);

    (env).mercury__assoc_list__foldl2_6_p_6_env_0__KVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    K_15 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0));
    V_16 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1));
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__assoc_list__foldl2_6_p_6_env_0__HeadVar__1_1, (MR_Integer) 1))));
    func_0(((MR_Box) ((env).mercury__assoc_list__foldl2_6_p_6_env_0__HeadVar__1_1)), K_15, V_16, STATE_VARIABLE_A_0_3, &(env).mercury__assoc_list__foldl2_6_p_6_env_0__STATE_VARIABLE_A_25_25, STATE_VARIABLE_B_0_5, &(env).mercury__assoc_list__foldl2_6_p_6_env_0__STATE_VARIABLE_B_26_26, mercury__assoc_list__foldl2_6_p_6_1, &env);
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl2_6_p_5(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box K_15;
      MR_Box V_16;
      MR_Word KVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_A_25_25;
      MR_Box STATE_VARIABLE_B_26_26;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;

      K_15 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0));
      V_16 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_15, V_16, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_25_25, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_26_26);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_17;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_25_25;
        next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_26_26;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl2_6_p_4(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box K_15;
      MR_Box V_16;
      MR_Word KVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_A_25_25;
      MR_Box STATE_VARIABLE_B_26_26;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;

      K_15 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0));
      V_16 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_15, V_16, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_25_25, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_26_26);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_17;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_25_25;
        next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_26_26;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl2_6_p_3(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box K_15;
      MR_Box V_16;
      MR_Word KVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_A_25_25;
      MR_Box STATE_VARIABLE_B_26_26;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;

      K_15 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0));
      V_16 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_15, V_16, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_25_25, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_26_26);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_17;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_25_25;
        next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_26_26;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl2_6_p_2(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    }
    else
    {
      MR_Box K_15;
      MR_Box V_16;
      MR_Word KVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_A_25_25;
      MR_Box STATE_VARIABLE_B_26_26;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;

      K_15 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0));
      V_16 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      func_0(((MR_Box) (HeadVar__1_1)), K_15, V_16, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_25_25, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_26_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_17;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_25_25;
      next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_26_26;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl2_6_p_1(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    }
    else
    {
      MR_Box K_15;
      MR_Box V_16;
      MR_Word KVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_A_25_25;
      MR_Box STATE_VARIABLE_B_26_26;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;

      K_15 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0));
      V_16 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      func_0(((MR_Box) (HeadVar__1_1)), K_15, V_16, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_25_25, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_26_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_17;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_25_25;
      next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_26_26;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl2_6_p_0(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Box STATE_VARIABLE_B_0_5,
  MR_Box * STATE_VARIABLE_B_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    }
    else
    {
      MR_Box K_15;
      MR_Box V_16;
      MR_Word KVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_A_25_25;
      MR_Box STATE_VARIABLE_B_26_26;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;
      MR_Box next_value_of_STATE_VARIABLE_B_0_5;

      K_15 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0));
      V_16 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      func_0(((MR_Box) (HeadVar__1_1)), K_15, V_16, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_25_25, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_26_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_17;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_25_25;
      next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_26_26;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__assoc_list__foldl_values_4_p_7_1(
  void * env_ptr_arg)
{
  struct mercury__assoc_list__foldl_values_4_p_7_env_0_s * env_ptr = (struct mercury__assoc_list__foldl_values_4_p_7_env_0_s *) (env_ptr_arg);

  mercury__assoc_list__foldl_values_4_p_7((env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_V_19, (env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_A_20, (env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_K_21, (env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__HeadVar__1_1, (env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__KVs_11, (env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_A_17_17, (env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_A_4, (env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__cont, (env_ptr)->mercury__assoc_list__foldl_values_4_p_7_env_0__cont_env_ptr);
}

void MR_CALL 
mercury__assoc_list__foldl_values_4_p_7(
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_K_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__assoc_list__foldl_values_4_p_7_env_0_s env;

  (env).mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_V_19 = TypeInfo_for_V_19;
  (env).mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_A_20 = TypeInfo_for_A_20;
  (env).mercury__assoc_list__foldl_values_4_p_7_env_0__TypeInfo_for_K_21 = TypeInfo_for_K_21;
  (env).mercury__assoc_list__foldl_values_4_p_7_env_0__HeadVar__1_1 = HeadVar__1_1;
  (env).mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_A_4 = STATE_VARIABLE_A_4;
  (env).mercury__assoc_list__foldl_values_4_p_7_env_0__cont = cont;
  (env).mercury__assoc_list__foldl_values_4_p_7_env_0__cont_env_ptr = cont_env_ptr;
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *((env).mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_A_4) = STATE_VARIABLE_A_0_3;
    ((env).mercury__assoc_list__foldl_values_4_p_7_env_0__cont)((env).mercury__assoc_list__foldl_values_4_p_7_env_0__cont_env_ptr);
  }
  else
  {
    MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Box V_14;
    MR_Box _K_13;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

    (env).mercury__assoc_list__foldl_values_4_p_7_env_0__KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    _K_13 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 0));
    V_14 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 1));
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__assoc_list__foldl_values_4_p_7_env_0__HeadVar__1_1, (MR_Integer) 1))));
    func_0(((MR_Box) ((env).mercury__assoc_list__foldl_values_4_p_7_env_0__HeadVar__1_1)), V_14, STATE_VARIABLE_A_0_3, &(env).mercury__assoc_list__foldl_values_4_p_7_env_0__STATE_VARIABLE_A_17_17, mercury__assoc_list__foldl_values_4_p_7_1, &env);
  }
}

static void MR_CALL 
mercury__assoc_list__foldl_values_4_p_6_1(
  void * env_ptr_arg)
{
  struct mercury__assoc_list__foldl_values_4_p_6_env_0_s * env_ptr = (struct mercury__assoc_list__foldl_values_4_p_6_env_0_s *) (env_ptr_arg);

  mercury__assoc_list__foldl_values_4_p_6((env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_V_19, (env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_A_20, (env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_K_21, (env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__HeadVar__1_1, (env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__KVs_11, (env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_A_17_17, (env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_A_4, (env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__cont, (env_ptr)->mercury__assoc_list__foldl_values_4_p_6_env_0__cont_env_ptr);
}

void MR_CALL 
mercury__assoc_list__foldl_values_4_p_6(
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_K_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__assoc_list__foldl_values_4_p_6_env_0_s env;

  (env).mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_V_19 = TypeInfo_for_V_19;
  (env).mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_A_20 = TypeInfo_for_A_20;
  (env).mercury__assoc_list__foldl_values_4_p_6_env_0__TypeInfo_for_K_21 = TypeInfo_for_K_21;
  (env).mercury__assoc_list__foldl_values_4_p_6_env_0__HeadVar__1_1 = HeadVar__1_1;
  (env).mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_A_4 = STATE_VARIABLE_A_4;
  (env).mercury__assoc_list__foldl_values_4_p_6_env_0__cont = cont;
  (env).mercury__assoc_list__foldl_values_4_p_6_env_0__cont_env_ptr = cont_env_ptr;
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *((env).mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_A_4) = STATE_VARIABLE_A_0_3;
    ((env).mercury__assoc_list__foldl_values_4_p_6_env_0__cont)((env).mercury__assoc_list__foldl_values_4_p_6_env_0__cont_env_ptr);
  }
  else
  {
    MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Box V_14;
    MR_Box _K_13;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

    (env).mercury__assoc_list__foldl_values_4_p_6_env_0__KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    _K_13 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 0));
    V_14 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 1));
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__assoc_list__foldl_values_4_p_6_env_0__HeadVar__1_1, (MR_Integer) 1))));
    func_0(((MR_Box) ((env).mercury__assoc_list__foldl_values_4_p_6_env_0__HeadVar__1_1)), V_14, STATE_VARIABLE_A_0_3, &(env).mercury__assoc_list__foldl_values_4_p_6_env_0__STATE_VARIABLE_A_17_17, mercury__assoc_list__foldl_values_4_p_6_1, &env);
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl_values_4_p_5(
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_K_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_14 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_A_17_17;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), V_14, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_17_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_11;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_17_17;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl_values_4_p_4(
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_K_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_14 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_A_17_17;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), V_14, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_17_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_11;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_17_17;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl_values_4_p_3(
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_K_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_14 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_A_17_17;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), V_14, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_17_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_11;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_17_17;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl_values_4_p_2(
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_K_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_14 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_A_17_17;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      func_0(((MR_Box) (HeadVar__1_1)), V_14, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_11;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_17_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl_values_4_p_1(
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_K_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_14 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_A_17_17;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      func_0(((MR_Box) (HeadVar__1_1)), V_14, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_11;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_17_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl_values_4_p_0(
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_K_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_14 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_A_17_17;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      func_0(((MR_Box) (HeadVar__1_1)), V_14, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_11;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_17_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      continue;
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__assoc_list__foldl_values_3_f_0(
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_K_19,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_Box HeadVar__4_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word KV_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_12 = (MR_hl_field(MR_mktag(0), KV_8, (MR_Integer) 1));
      MR_Box STATE_VARIABLE_A_15_15;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

      STATE_VARIABLE_A_15_15 = func_0(((MR_Box) (HeadVar__1_1)), V_12, HeadVar__3_3);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_9;
      next_value_of_HeadVar__3_3 = STATE_VARIABLE_A_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    return HeadVar__4_4;
    break;
  }
}

static void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_7_1(
  void * env_ptr_arg)
{
  struct mercury__assoc_list__foldl_keys_4_p_7_env_0_s * env_ptr = (struct mercury__assoc_list__foldl_keys_4_p_7_env_0_s *) (env_ptr_arg);

  mercury__assoc_list__foldl_keys_4_p_7((env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_K_19, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_A_20, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_V_21, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__HeadVar__1_1, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__KVs_11, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_A_17_17, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_A_4, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__cont, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_7_env_0__cont_env_ptr);
}

void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_7(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__assoc_list__foldl_keys_4_p_7_env_0_s env;

  (env).mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_K_19 = TypeInfo_for_K_19;
  (env).mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_A_20 = TypeInfo_for_A_20;
  (env).mercury__assoc_list__foldl_keys_4_p_7_env_0__TypeInfo_for_V_21 = TypeInfo_for_V_21;
  (env).mercury__assoc_list__foldl_keys_4_p_7_env_0__HeadVar__1_1 = HeadVar__1_1;
  (env).mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_A_4 = STATE_VARIABLE_A_4;
  (env).mercury__assoc_list__foldl_keys_4_p_7_env_0__cont = cont;
  (env).mercury__assoc_list__foldl_keys_4_p_7_env_0__cont_env_ptr = cont_env_ptr;
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *((env).mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_A_4) = STATE_VARIABLE_A_0_3;
    ((env).mercury__assoc_list__foldl_keys_4_p_7_env_0__cont)((env).mercury__assoc_list__foldl_keys_4_p_7_env_0__cont_env_ptr);
  }
  else
  {
    MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Box K_13;
    MR_Box _V_14;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

    (env).mercury__assoc_list__foldl_keys_4_p_7_env_0__KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    K_13 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 0));
    _V_14 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 1));
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__assoc_list__foldl_keys_4_p_7_env_0__HeadVar__1_1, (MR_Integer) 1))));
    func_0(((MR_Box) ((env).mercury__assoc_list__foldl_keys_4_p_7_env_0__HeadVar__1_1)), K_13, STATE_VARIABLE_A_0_3, &(env).mercury__assoc_list__foldl_keys_4_p_7_env_0__STATE_VARIABLE_A_17_17, mercury__assoc_list__foldl_keys_4_p_7_1, &env);
  }
}

static void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_6_1(
  void * env_ptr_arg)
{
  struct mercury__assoc_list__foldl_keys_4_p_6_env_0_s * env_ptr = (struct mercury__assoc_list__foldl_keys_4_p_6_env_0_s *) (env_ptr_arg);

  mercury__assoc_list__foldl_keys_4_p_6((env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_K_19, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_A_20, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_V_21, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__HeadVar__1_1, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__KVs_11, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_A_17_17, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_A_4, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__cont, (env_ptr)->mercury__assoc_list__foldl_keys_4_p_6_env_0__cont_env_ptr);
}

void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_6(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__assoc_list__foldl_keys_4_p_6_env_0_s env;

  (env).mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_K_19 = TypeInfo_for_K_19;
  (env).mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_A_20 = TypeInfo_for_A_20;
  (env).mercury__assoc_list__foldl_keys_4_p_6_env_0__TypeInfo_for_V_21 = TypeInfo_for_V_21;
  (env).mercury__assoc_list__foldl_keys_4_p_6_env_0__HeadVar__1_1 = HeadVar__1_1;
  (env).mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_A_4 = STATE_VARIABLE_A_4;
  (env).mercury__assoc_list__foldl_keys_4_p_6_env_0__cont = cont;
  (env).mercury__assoc_list__foldl_keys_4_p_6_env_0__cont_env_ptr = cont_env_ptr;
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *((env).mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_A_4) = STATE_VARIABLE_A_0_3;
    ((env).mercury__assoc_list__foldl_keys_4_p_6_env_0__cont)((env).mercury__assoc_list__foldl_keys_4_p_6_env_0__cont_env_ptr);
  }
  else
  {
    MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Box K_13;
    MR_Box _V_14;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

    (env).mercury__assoc_list__foldl_keys_4_p_6_env_0__KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    K_13 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 0));
    _V_14 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 1));
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__assoc_list__foldl_keys_4_p_6_env_0__HeadVar__1_1, (MR_Integer) 1))));
    func_0(((MR_Box) ((env).mercury__assoc_list__foldl_keys_4_p_6_env_0__HeadVar__1_1)), K_13, STATE_VARIABLE_A_0_3, &(env).mercury__assoc_list__foldl_keys_4_p_6_env_0__STATE_VARIABLE_A_17_17, mercury__assoc_list__foldl_keys_4_p_6_1, &env);
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl_keys_4_p_5(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box K_13 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 0));
      MR_Box STATE_VARIABLE_A_17_17;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_13, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_17_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_11;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_17_17;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl_keys_4_p_4(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box K_13 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 0));
      MR_Box STATE_VARIABLE_A_17_17;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_13, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_17_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_11;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_17_17;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl_keys_4_p_3(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box K_13 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 0));
      MR_Box STATE_VARIABLE_A_17_17;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_13, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_17_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_11;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_17_17;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_2(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box K_13 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 0));
      MR_Box STATE_VARIABLE_A_17_17;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      func_0(((MR_Box) (HeadVar__1_1)), K_13, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_11;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_17_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_1(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box K_13 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 0));
      MR_Box STATE_VARIABLE_A_17_17;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      func_0(((MR_Box) (HeadVar__1_1)), K_13, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_11;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_17_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl_keys_4_p_0(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    else
    {
      MR_Word KV_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box K_13 = (MR_hl_field(MR_mktag(0), KV_10, (MR_Integer) 0));
      MR_Box STATE_VARIABLE_A_17_17;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      func_0(((MR_Box) (HeadVar__1_1)), K_13, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_11;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_17_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      continue;
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__assoc_list__foldl_keys_3_f_0(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_Box HeadVar__4_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word KV_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word KVs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box K_11 = (MR_hl_field(MR_mktag(0), KV_8, (MR_Integer) 0));
      MR_Box STATE_VARIABLE_A_15_15;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

      STATE_VARIABLE_A_15_15 = func_0(((MR_Box) (HeadVar__1_1)), K_11, HeadVar__3_3);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_9;
      next_value_of_HeadVar__3_3 = STATE_VARIABLE_A_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    return HeadVar__4_4;
    break;
  }
}

static void MR_CALL 
mercury__assoc_list__foldl_4_p_6_1(
  void * env_ptr_arg)
{
  struct mercury__assoc_list__foldl_4_p_6_env_0_s * env_ptr = (struct mercury__assoc_list__foldl_4_p_6_env_0_s *) (env_ptr_arg);

  mercury__assoc_list__foldl_4_p_6((env_ptr)->mercury__assoc_list__foldl_4_p_6_env_0__TypeInfo_for_K_19, (env_ptr)->mercury__assoc_list__foldl_4_p_6_env_0__TypeInfo_for_V_20, (env_ptr)->mercury__assoc_list__foldl_4_p_6_env_0__TypeInfo_for_A_21, (env_ptr)->mercury__assoc_list__foldl_4_p_6_env_0__HeadVar__1_1, (env_ptr)->mercury__assoc_list__foldl_4_p_6_env_0__KVs_12, (env_ptr)->mercury__assoc_list__foldl_4_p_6_env_0__STATE_VARIABLE_A_17_17, (env_ptr)->mercury__assoc_list__foldl_4_p_6_env_0__STATE_VARIABLE_A_4, (env_ptr)->mercury__assoc_list__foldl_4_p_6_env_0__cont, (env_ptr)->mercury__assoc_list__foldl_4_p_6_env_0__cont_env_ptr);
}

void MR_CALL 
mercury__assoc_list__foldl_4_p_6(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__assoc_list__foldl_4_p_6_env_0_s env;

  (env).mercury__assoc_list__foldl_4_p_6_env_0__TypeInfo_for_K_19 = TypeInfo_for_K_19;
  (env).mercury__assoc_list__foldl_4_p_6_env_0__TypeInfo_for_V_20 = TypeInfo_for_V_20;
  (env).mercury__assoc_list__foldl_4_p_6_env_0__TypeInfo_for_A_21 = TypeInfo_for_A_21;
  (env).mercury__assoc_list__foldl_4_p_6_env_0__HeadVar__1_1 = HeadVar__1_1;
  (env).mercury__assoc_list__foldl_4_p_6_env_0__STATE_VARIABLE_A_4 = STATE_VARIABLE_A_4;
  (env).mercury__assoc_list__foldl_4_p_6_env_0__cont = cont;
  (env).mercury__assoc_list__foldl_4_p_6_env_0__cont_env_ptr = cont_env_ptr;
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *((env).mercury__assoc_list__foldl_4_p_6_env_0__STATE_VARIABLE_A_4) = STATE_VARIABLE_A_0_3;
    ((env).mercury__assoc_list__foldl_4_p_6_env_0__cont)((env).mercury__assoc_list__foldl_4_p_6_env_0__cont_env_ptr);
  }
  else
  {
    MR_Box K_10;
    MR_Box V_11;
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

    (env).mercury__assoc_list__foldl_4_p_6_env_0__KVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    K_10 = (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0));
    V_11 = (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1));
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__assoc_list__foldl_4_p_6_env_0__HeadVar__1_1, (MR_Integer) 1))));
    func_0(((MR_Box) ((env).mercury__assoc_list__foldl_4_p_6_env_0__HeadVar__1_1)), K_10, V_11, STATE_VARIABLE_A_0_3, &(env).mercury__assoc_list__foldl_4_p_6_env_0__STATE_VARIABLE_A_17_17, mercury__assoc_list__foldl_4_p_6_1, &env);
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl_4_p_5(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box K_10;
      MR_Box V_11;
      MR_Word KVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_A_17_17;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      K_10 = (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0));
      V_11 = (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_10, V_11, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_17_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_12;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_17_17;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl_4_p_4(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box K_10;
      MR_Box V_11;
      MR_Word KVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_A_17_17;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      K_10 = (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0));
      V_11 = (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_10, V_11, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_17_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_12;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_17_17;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__foldl_4_p_3(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box K_10;
      MR_Box V_11;
      MR_Word KVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_A_17_17;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      K_10 = (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0));
      V_11 = (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_10, V_11, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_17_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = KVs_12;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_17_17;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl_4_p_2(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    else
    {
      MR_Box K_10;
      MR_Box V_11;
      MR_Word KVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_A_17_17;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      K_10 = (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0));
      V_11 = (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      func_0(((MR_Box) (HeadVar__1_1)), K_10, V_11, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_12;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_17_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl_4_p_1(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    else
    {
      MR_Box K_10;
      MR_Box V_11;
      MR_Word KVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_A_17_17;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      K_10 = (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0));
      V_11 = (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      func_0(((MR_Box) (HeadVar__1_1)), K_10, V_11, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_12;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_17_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__foldl_4_p_0(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    else
    {
      MR_Box K_10;
      MR_Box V_11;
      MR_Word KVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_A_17_17;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      K_10 = (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0));
      V_11 = (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      func_0(((MR_Box) (HeadVar__1_1)), K_10, V_11, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs_12;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_17_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__assoc_list__common_subset_2_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word ListA_4,
  MR_Word ListB_5)
{
  MR_Word CommonList_6;
  MR_Word TypeInfo_12_12;
  MR_Word RevCommonList_7;
  MR_Word conv0_CommonList_6;

  mercury__assoc_list__common_subset_loop_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, ListA_4, ListB_5, (MR_Word) ((MR_Unsigned) 0U), &RevCommonList_7);
  {
    TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_12_12, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
    MR_hl_field(MR_mktag(0), TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_for_K_9));
    MR_hl_field(MR_mktag(0), TypeInfo_12_12, 2) = ((MR_Box) (TypeInfo_for_V_10));
  }
  mercury__list__reverse_2_p_0(TypeInfo_12_12, (MR_Word) (RevCommonList_7), &conv0_CommonList_6);
  CommonList_6 = (MR_Word) (conv0_CommonList_6);
  return CommonList_6;
}

void MR_CALL 
mercury__assoc_list__common_subset_loop_4_p_0(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word ListA_5,
  MR_Word ListB_6,
  MR_Word STATE_VARIABLE_RevCommonList_0_19,
  MR_Word * STATE_VARIABLE_RevCommonList_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((ListA_5 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((ListB_6 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevCommonList_20 = STATE_VARIABLE_RevCommonList_0_19;
      else
        *STATE_VARIABLE_RevCommonList_20 = STATE_VARIABLE_RevCommonList_0_19;
    else
    {
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ListA_5, (MR_Integer) 1))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ListA_5, (MR_Integer) 0))));

      if ((ListB_6 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevCommonList_20 = STATE_VARIABLE_RevCommonList_0_19;
      else
      {
        MR_Box KeyA_12 = (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 0));
        MR_Box ValueA_13 = (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 1));
        MR_Box KeyB_15;
        MR_Box ValueB_16;
        MR_Word TailB_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ListB_6, (MR_Integer) 1))));
        MR_Word R_18;
        MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ListB_6, (MR_Integer) 0))));

        KeyB_15 = (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0));
        ValueB_16 = (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1));
        mercury__builtin__compare_3_p_0(TypeInfo_for_K_28, &R_18, KeyA_12, KeyB_15);
        switch (R_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_ListA_5 = Var_30;

              // direct tailcall eliminated
              ;
              ListA_5 = next_value_of_ListA_5;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word STATE_VARIABLE_RevCommonList_23_23;
              MR_Word next_value_of_ListA_5;
              MR_Word next_value_of_ListB_6;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonList_0_19;

              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V_29, ValueA_13, ValueB_16);
              if (succeeded)
                {
                  STATE_VARIABLE_RevCommonList_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonList_23_23, 0) = ((MR_Box) (Var_31));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonList_23_23, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonList_0_19));
                }
              else
                STATE_VARIABLE_RevCommonList_23_23 = STATE_VARIABLE_RevCommonList_0_19;
              // direct tailcall eliminated
              ;
              next_value_of_ListA_5 = Var_30;
              next_value_of_ListB_6 = TailB_17;
              next_value_of_STATE_VARIABLE_RevCommonList_0_19 = STATE_VARIABLE_RevCommonList_23_23;
              ListA_5 = next_value_of_ListA_5;
              ListB_6 = next_value_of_ListB_6;
              STATE_VARIABLE_RevCommonList_0_19 = next_value_of_STATE_VARIABLE_RevCommonList_0_19;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_ListB_6 = TailB_17;

              // direct tailcall eliminated
              ;
              ListB_6 = next_value_of_ListB_6;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__assoc_list__merge_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word As_4,
  MR_Word Bs_5)
{
  MR_Word ABs_6;

  mercury__assoc_list__merge_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, As_4, Bs_5, &ABs_6);
  return ABs_6;
}

void MR_CALL 
mercury__assoc_list__merge_3_p_0(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = HeadVar__2_2;
  else
  {
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = HeadVar__1_1;
    else
    {
      MR_Word B_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Bs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box AK_12 = (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0));
      MR_Box BK_14 = (MR_hl_field(MR_mktag(0), B_9, (MR_Integer) 0));
      MR_Word Var_23;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_21, &Var_23, AK_12, BK_14);
      succeeded = ((MR_Integer) 2 == Var_23);
      if (succeeded)
      {
        MR_Word * AddrCs0_26;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (B_9));
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
        }
        AddrCs0_26 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 1)));
        mercury__assoc_list__LCMC__pred__merge__1_3_p_0(TypeInfo_for_K_21, TypeInfo_for_V_22, HeadVar__1_1, Bs_10, AddrCs0_26);
      }
      else
      {
        MR_Word * AddrCs0_27;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_25));
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
        }
        AddrCs0_27 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 1)));
        mercury__assoc_list__LCMC__pred__merge__1_3_p_0(TypeInfo_for_K_21, TypeInfo_for_V_22, Var_24, HeadVar__2_2, AddrCs0_27);
      }
    }
  }
}

void MR_CALL 
mercury__assoc_list__LCMC__pred__merge__1_3_p_0(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_28 = HeadVar__2_2;
    else
    {
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *AddrOfHeadVar__3_28 = HeadVar__1_1;
      else
      {
        MR_Word B_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Bs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Box AK_12 = (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0));
        MR_Box BK_14 = (MR_hl_field(MR_mktag(0), B_9, (MR_Integer) 0));
        MR_Word Var_23;

        mercury__builtin__compare_3_p_0(TypeInfo_for_K_21, &Var_23, AK_12, BK_14);
        succeeded = ((MR_Integer) 2 == Var_23);
        if (succeeded)
        {
          MR_Word * AddrCs0_26;
          MR_Word HeadVar__3_30;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word * next_value_of_AddrOfHeadVar__3_28;

          {
            HeadVar__3_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__3_30, 0) = ((MR_Box) (B_9));
            MR_hl_field(MR_mktag(1), HeadVar__3_30, 1) = NULL;
          }
          AddrCs0_26 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_30, (MR_Integer) 1)));
          *AddrOfHeadVar__3_28 = HeadVar__3_30;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Bs_10;
          next_value_of_AddrOfHeadVar__3_28 = AddrCs0_26;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          AddrOfHeadVar__3_28 = next_value_of_AddrOfHeadVar__3_28;
          continue;
        }
        else
        {
          MR_Word * AddrCs0_27;
          MR_Word HeadVar__3_33;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word * next_value_of_AddrOfHeadVar__3_28;

          {
            HeadVar__3_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__3_33, 0) = ((MR_Box) (Var_25));
            MR_hl_field(MR_mktag(1), HeadVar__3_33, 1) = NULL;
          }
          AddrCs0_27 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_33, (MR_Integer) 1)));
          *AddrOfHeadVar__3_28 = HeadVar__3_33;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Var_24;
          next_value_of_AddrOfHeadVar__3_28 = AddrCs0_27;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          AddrOfHeadVar__3_28 = next_value_of_AddrOfHeadVar__3_28;
          continue;
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__filter_4_p_0(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Box HK_7;
    MR_Word T_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box);

    HK_7 = (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0));
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
    succeeded = func_0(((MR_Box) (P_1)), HK_7);
    if (succeeded)
    {
      MR_Word * AddrTrueTail_19;

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_14));
        MR_hl_field(MR_mktag(1), base, 1) = NULL;
      }
      AddrTrueTail_19 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 1)));
      mercury__assoc_list__LCMC__pred__filter__1_4_p_0(TypeInfo_for_K_17, TypeInfo_for_V_18, P_1, T_9, AddrTrueTail_19, HeadVar__4_4);
    }
    else
    {
      MR_Word * AddrFalseTail_20;

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_14));
        MR_hl_field(MR_mktag(1), base, 1) = NULL;
      }
      AddrFalseTail_20 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
      mercury__assoc_list__LCMC__pred__filter__2_4_p_0(TypeInfo_for_K_17, TypeInfo_for_V_18, P_1, T_9, HeadVar__3_3, AddrFalseTail_20);
    }
  }
}

void MR_CALL 
mercury__assoc_list__LCMC__pred__filter__2_4_p_0(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *AddrOfHeadVar__4_21 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Box HK_7;
      MR_Word T_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box);

      HK_7 = (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_1)), HK_7);
      if (succeeded)
      {
        MR_Word * AddrTrueTail_19;
        MR_Word HeadVar__4_22;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_14));
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
        }
        AddrTrueTail_19 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 1)));
        mercury__assoc_list__LCMC__pred__filter__1_4_p_0(TypeInfo_for_K_17, TypeInfo_for_V_18, P_1, T_9, AddrTrueTail_19, &HeadVar__4_22);
        *AddrOfHeadVar__4_21 = HeadVar__4_22;
      }
      else
      {
        MR_Word * AddrFalseTail_20;
        MR_Word HeadVar__4_25;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word * next_value_of_AddrOfHeadVar__4_21;

        {
          HeadVar__4_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__4_25, 0) = ((MR_Box) (Var_14));
          MR_hl_field(MR_mktag(1), HeadVar__4_25, 1) = NULL;
        }
        AddrFalseTail_20 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_25, (MR_Integer) 1)));
        *AddrOfHeadVar__4_21 = HeadVar__4_25;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = T_9;
        next_value_of_AddrOfHeadVar__4_21 = AddrFalseTail_20;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        AddrOfHeadVar__4_21 = next_value_of_AddrOfHeadVar__4_21;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__LCMC__pred__filter__1_4_p_0(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_21,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__3_21 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Box HK_7;
      MR_Word T_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box);

      HK_7 = (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_1)), HK_7);
      if (succeeded)
      {
        MR_Word * AddrTrueTail_19;
        MR_Word HeadVar__3_22;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word * next_value_of_AddrOfHeadVar__3_21;

        {
          HeadVar__3_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__3_22, 0) = ((MR_Box) (Var_14));
          MR_hl_field(MR_mktag(1), HeadVar__3_22, 1) = NULL;
        }
        AddrTrueTail_19 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_22, (MR_Integer) 1)));
        *AddrOfHeadVar__3_21 = HeadVar__3_22;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = T_9;
        next_value_of_AddrOfHeadVar__3_21 = AddrTrueTail_19;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        AddrOfHeadVar__3_21 = next_value_of_AddrOfHeadVar__3_21;
        continue;
      }
      else
      {
        MR_Word * AddrFalseTail_20;
        MR_Word HeadVar__3_25;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_14));
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
        }
        AddrFalseTail_20 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
        mercury__assoc_list__LCMC__pred__filter__2_4_p_0(TypeInfo_for_K_17, TypeInfo_for_V_18, P_1, T_9, &HeadVar__3_25, AddrFalseTail_20);
        *AddrOfHeadVar__3_21 = HeadVar__3_25;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__assoc_list__negated_filter_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word P_4,
  MR_Word List_5)
{
  MR_Word Falses_6;

  mercury__assoc_list__negated_filter_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, P_4, List_5, &Falses_6);
  return Falses_6;
}

void MR_CALL 
mercury__assoc_list__negated_filter_3_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box HK_6;
      MR_Word T_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box);

      HK_6 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_1)), HK_6);
      if (succeeded)
      {
        MR_Word next_value_of_HeadVar__2_2 = T_8;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
      else
      {
        MR_Word * AddrFalseTail_15;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_11));
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
        }
        AddrFalseTail_15 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 1)));
        mercury__assoc_list__LCMC__pred__negated_filter__1_3_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, P_1, T_8, AddrFalseTail_15);
      }
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__LCMC__pred__negated_filter__1_3_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_16 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box HK_6;
      MR_Word T_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box);

      HK_6 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_1)), HK_6);
      if (succeeded)
      {
        MR_Word next_value_of_HeadVar__2_2 = T_8;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
      else
      {
        MR_Word * AddrFalseTail_15;
        MR_Word HeadVar__3_17;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word * next_value_of_AddrOfHeadVar__3_16;

        {
          HeadVar__3_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__3_17, 0) = ((MR_Box) (Var_11));
          MR_hl_field(MR_mktag(1), HeadVar__3_17, 1) = NULL;
        }
        AddrFalseTail_15 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_17, (MR_Integer) 1)));
        *AddrOfHeadVar__3_16 = HeadVar__3_17;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = T_8;
        next_value_of_AddrOfHeadVar__3_16 = AddrFalseTail_15;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        AddrOfHeadVar__3_16 = next_value_of_AddrOfHeadVar__3_16;
        continue;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__assoc_list__filter_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word P_4,
  MR_Word List_5)
{
  MR_Word Trues_6;

  mercury__assoc_list__filter_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, P_4, List_5, &Trues_6);
  return Trues_6;
}

void MR_CALL 
mercury__assoc_list__filter_3_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box HK_6;
      MR_Word T_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box);

      HK_6 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_1)), HK_6);
      if (succeeded)
      {
        MR_Word * AddrTrueTail_15;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_11));
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
        }
        AddrTrueTail_15 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 1)));
        mercury__assoc_list__LCMC__pred__filter__1_3_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, P_1, T_8, AddrTrueTail_15);
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = T_8;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__LCMC__pred__filter__1_3_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_16 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box HK_6;
      MR_Word T_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box);

      HK_6 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_1)), HK_6);
      if (succeeded)
      {
        MR_Word * AddrTrueTail_15;
        MR_Word HeadVar__3_17;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word * next_value_of_AddrOfHeadVar__3_16;

        {
          HeadVar__3_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__3_17, 0) = ((MR_Box) (Var_11));
          MR_hl_field(MR_mktag(1), HeadVar__3_17, 1) = NULL;
        }
        AddrTrueTail_15 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_17, (MR_Integer) 1)));
        *AddrOfHeadVar__3_16 = HeadVar__3_17;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = T_8;
        next_value_of_AddrOfHeadVar__3_16 = AddrTrueTail_15;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        AddrOfHeadVar__3_16 = next_value_of_AddrOfHeadVar__3_16;
        continue;
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = T_8;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__map_values_3_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word TypeInfo_for_W_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box K_6;
    MR_Box V0_7;
    MR_Word KVs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Box V_9;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_12;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Word * AddrKVs_16;

    K_6 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0));
    V0_7 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1));
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    func_0(((MR_Box) (HeadVar__1_1)), K_6, V0_7, &V_9);
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = K_6;
      MR_hl_field(MR_mktag(0), Var_12, 1) = V_9;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrKVs_16 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 1)));
    mercury__assoc_list__LCMC__pred__map_values__1_3_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, TypeInfo_for_W_15, HeadVar__1_1, KVs0_8, AddrKVs_16);
  }
}

void MR_CALL 
mercury__assoc_list__LCMC__pred__map_values__1_3_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word TypeInfo_for_W_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_17 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box K_6;
      MR_Box V0_7;
      MR_Word KVs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_9;
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_12;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word * AddrKVs_16;
      MR_Word HeadVar__3_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_17;

      K_6 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0));
      V0_7 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      func_0(((MR_Box) (HeadVar__1_1)), K_6, V0_7, &V_9);
      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = K_6;
        MR_hl_field(MR_mktag(0), Var_12, 1) = V_9;
      }
      {
        HeadVar__3_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_18, 0) = ((MR_Box) (Var_12));
        MR_hl_field(MR_mktag(1), HeadVar__3_18, 1) = NULL;
      }
      AddrKVs_16 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_18, (MR_Integer) 1)));
      *AddrOfHeadVar__3_17 = HeadVar__3_18;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs0_8;
      next_value_of_AddrOfHeadVar__3_17 = AddrKVs_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_17 = next_value_of_AddrOfHeadVar__3_17;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__assoc_list__map_values_2_f_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word TypeInfo_for_W_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box K_6;
    MR_Box V0_7;
    MR_Word KVs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Box V_9;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_12;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Word * AddrKVs_16;

    K_6 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0));
    V0_7 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1));
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    V_9 = func_0(((MR_Box) (HeadVar__1_1)), K_6, V0_7);
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = K_6;
      MR_hl_field(MR_mktag(0), Var_12, 1) = V_9;
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = NULL;
    }
    AddrKVs_16 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    mercury__assoc_list__LCMC__func__map_values__1_3_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, TypeInfo_for_W_15, HeadVar__1_1, KVs0_8, AddrKVs_16);
  }
  return HeadVar__3_3;
}

void MR_CALL 
mercury__assoc_list__LCMC__func__map_values__1_3_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word TypeInfo_for_W_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_17 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box K_6;
      MR_Box V0_7;
      MR_Word KVs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_9;
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_12;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
      MR_Word * AddrKVs_16;
      MR_Word HeadVar__3_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_17;

      K_6 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0));
      V0_7 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1));
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      V_9 = func_0(((MR_Box) (HeadVar__1_1)), K_6, V0_7);
      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = K_6;
        MR_hl_field(MR_mktag(0), Var_12, 1) = V_9;
      }
      {
        HeadVar__3_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_18, 0) = ((MR_Box) (Var_12));
        MR_hl_field(MR_mktag(1), HeadVar__3_18, 1) = NULL;
      }
      AddrKVs_16 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_18, (MR_Integer) 1)));
      *AddrOfHeadVar__3_17 = HeadVar__3_18;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs0_8;
      next_value_of_AddrOfHeadVar__3_17 = AddrKVs_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_17 = next_value_of_AddrOfHeadVar__3_17;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__map_values_only_3_p_0(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_W_14,
  MR_Word TypeInfo_for_K_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box K_6;
    MR_Box V0_7;
    MR_Word KVs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Box V_9;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_12;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Word * AddrKVs_16;

    K_6 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0));
    V0_7 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1));
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    func_0(((MR_Box) (HeadVar__1_1)), V0_7, &V_9);
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = K_6;
      MR_hl_field(MR_mktag(0), Var_12, 1) = V_9;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrKVs_16 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 1)));
    mercury__assoc_list__LCMC__pred__map_values_only__1_3_p_0(TypeInfo_for_V_13, TypeInfo_for_W_14, TypeInfo_for_K_15, HeadVar__1_1, KVs0_8, AddrKVs_16);
  }
}

void MR_CALL 
mercury__assoc_list__LCMC__pred__map_values_only__1_3_p_0(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_W_14,
  MR_Word TypeInfo_for_K_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_17 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box K_6;
      MR_Box V0_7;
      MR_Word KVs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_9;
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_12;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
      MR_Word * AddrKVs_16;
      MR_Word HeadVar__3_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_17;

      K_6 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0));
      V0_7 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      func_0(((MR_Box) (HeadVar__1_1)), V0_7, &V_9);
      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = K_6;
        MR_hl_field(MR_mktag(0), Var_12, 1) = V_9;
      }
      {
        HeadVar__3_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_18, 0) = ((MR_Box) (Var_12));
        MR_hl_field(MR_mktag(1), HeadVar__3_18, 1) = NULL;
      }
      AddrKVs_16 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_18, (MR_Integer) 1)));
      *AddrOfHeadVar__3_17 = HeadVar__3_18;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs0_8;
      next_value_of_AddrOfHeadVar__3_17 = AddrKVs_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_17 = next_value_of_AddrOfHeadVar__3_17;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__assoc_list__map_values_only_2_f_0(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_W_14,
  MR_Word TypeInfo_for_K_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box K_6;
    MR_Box V0_7;
    MR_Word KVs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Box V_9;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_12;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Word * AddrKVs_16;

    K_6 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0));
    V0_7 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1));
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    V_9 = func_0(((MR_Box) (HeadVar__1_1)), V0_7);
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = K_6;
      MR_hl_field(MR_mktag(0), Var_12, 1) = V_9;
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = NULL;
    }
    AddrKVs_16 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    mercury__assoc_list__LCMC__func__map_values_only__1_3_p_0(TypeInfo_for_V_13, TypeInfo_for_W_14, TypeInfo_for_K_15, HeadVar__1_1, KVs0_8, AddrKVs_16);
  }
  return HeadVar__3_3;
}

void MR_CALL 
mercury__assoc_list__LCMC__func__map_values_only__1_3_p_0(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_W_14,
  MR_Word TypeInfo_for_K_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_17 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box K_6;
      MR_Box V0_7;
      MR_Word KVs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box V_9;
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_12;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_Word * AddrKVs_16;
      MR_Word HeadVar__3_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_17;

      K_6 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0));
      V0_7 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1));
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      V_9 = func_0(((MR_Box) (HeadVar__1_1)), V0_7);
      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = K_6;
        MR_hl_field(MR_mktag(0), Var_12, 1) = V_9;
      }
      {
        HeadVar__3_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_18, 0) = ((MR_Box) (Var_12));
        MR_hl_field(MR_mktag(1), HeadVar__3_18, 1) = NULL;
      }
      AddrKVs_16 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_18, (MR_Integer) 1)));
      *AddrOfHeadVar__3_17 = HeadVar__3_18;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs0_8;
      next_value_of_AddrOfHeadVar__3_17 = AddrKVs_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_17 = next_value_of_AddrOfHeadVar__3_17;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__assoc_list__map_keys_only_3_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_L_14,
  MR_Word TypeInfo_for_V_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box K0_6;
    MR_Box V_7;
    MR_Word KVs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Box K_9;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_12;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Word * AddrKVs_16;

    K0_6 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0));
    V_7 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1));
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    func_0(((MR_Box) (HeadVar__1_1)), K0_6, &K_9);
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = K_9;
      MR_hl_field(MR_mktag(0), Var_12, 1) = V_7;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrKVs_16 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 1)));
    mercury__assoc_list__LCMC__pred__map_keys_only__1_3_p_0(TypeInfo_for_K_13, TypeInfo_for_L_14, TypeInfo_for_V_15, HeadVar__1_1, KVs0_8, AddrKVs_16);
  }
}

void MR_CALL 
mercury__assoc_list__LCMC__pred__map_keys_only__1_3_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_L_14,
  MR_Word TypeInfo_for_V_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_17 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box K0_6;
      MR_Box V_7;
      MR_Word KVs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box K_9;
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_12;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
      MR_Word * AddrKVs_16;
      MR_Word HeadVar__3_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_17;

      K0_6 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0));
      V_7 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      func_0(((MR_Box) (HeadVar__1_1)), K0_6, &K_9);
      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = K_9;
        MR_hl_field(MR_mktag(0), Var_12, 1) = V_7;
      }
      {
        HeadVar__3_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_18, 0) = ((MR_Box) (Var_12));
        MR_hl_field(MR_mktag(1), HeadVar__3_18, 1) = NULL;
      }
      AddrKVs_16 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_18, (MR_Integer) 1)));
      *AddrOfHeadVar__3_17 = HeadVar__3_18;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs0_8;
      next_value_of_AddrOfHeadVar__3_17 = AddrKVs_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_17 = next_value_of_AddrOfHeadVar__3_17;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__assoc_list__map_keys_only_2_f_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_L_14,
  MR_Word TypeInfo_for_V_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box K0_6;
    MR_Box V_7;
    MR_Word KVs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Box K_9;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_12;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Word * AddrKVs_16;

    K0_6 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0));
    V_7 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1));
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    K_9 = func_0(((MR_Box) (HeadVar__1_1)), K0_6);
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = K_9;
      MR_hl_field(MR_mktag(0), Var_12, 1) = V_7;
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = NULL;
    }
    AddrKVs_16 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    mercury__assoc_list__LCMC__func__map_keys_only__1_3_p_0(TypeInfo_for_K_13, TypeInfo_for_L_14, TypeInfo_for_V_15, HeadVar__1_1, KVs0_8, AddrKVs_16);
  }
  return HeadVar__3_3;
}

void MR_CALL 
mercury__assoc_list__LCMC__func__map_keys_only__1_3_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_L_14,
  MR_Word TypeInfo_for_V_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_17 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box K0_6;
      MR_Box V_7;
      MR_Word KVs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box K_9;
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_12;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_Word * AddrKVs_16;
      MR_Word HeadVar__3_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_17;

      K0_6 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0));
      V_7 = (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1));
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      K_9 = func_0(((MR_Box) (HeadVar__1_1)), K0_6);
      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = K_9;
        MR_hl_field(MR_mktag(0), Var_12, 1) = V_7;
      }
      {
        HeadVar__3_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_18, 0) = ((MR_Box) (Var_12));
        MR_hl_field(MR_mktag(1), HeadVar__3_18, 1) = NULL;
      }
      AddrKVs_16 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_18, (MR_Integer) 1)));
      *AddrOfHeadVar__3_17 = HeadVar__3_18;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = KVs0_8;
      next_value_of_AddrOfHeadVar__3_17 = AddrKVs_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_17 = next_value_of_AddrOfHeadVar__3_17;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__svremove_4_p_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Box Key_5,
  MR_Box * Value_6,
  MR_Word STATE_VARIABLE_AL_0_8,
  MR_Word * STATE_VARIABLE_AL_9)
{
  MR_bool succeeded;

  succeeded = mercury__assoc_list__remove_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, STATE_VARIABLE_AL_0_8, Key_5, Value_6, STATE_VARIABLE_AL_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__assoc_list__remove_4_p_0(
  MR_Word TypeInfo_for_K_14,
  MR_Word TypeInfo_for_V_15,
  MR_Word HeadVar__1_1,
  MR_Box Key_8,
  MR_Box * Value_9,
  MR_Word * Filtered_10)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Box K_5;
  MR_Box V_6;
  MR_Word KVs_7;
  MR_Word Var_12;

  if (succeeded)
  {
    Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    KVs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    K_5 = (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0));
    V_6 = (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 1));
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_14, K_5, Key_8);
    if (succeeded)
    {
      *Value_9 = V_6;
      *Filtered_10 = KVs_7;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word * AddrFilteredTail_16;

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Filtered_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_12));
        MR_hl_field(MR_mktag(1), base, 1) = NULL;
      }
      AddrFilteredTail_16 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *Filtered_10, (MR_Integer) 1)));
      succeeded = mercury__assoc_list__LCMC__pred__remove__1_4_p_0(TypeInfo_for_K_14, TypeInfo_for_V_15, KVs_7, Key_8, Value_9, AddrFilteredTail_16);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__assoc_list__LCMC__pred__remove__1_4_p_0(
  MR_Word TypeInfo_for_K_14,
  MR_Word TypeInfo_for_V_15,
  MR_Word HeadVar__1_1,
  MR_Box Key_8,
  MR_Box * Value_9,
  MR_Word * AddrOfFiltered_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box K_5;
    MR_Box V_6;
    MR_Word KVs_7;
    MR_Word Var_12;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      KVs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      K_5 = (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0));
      V_6 = (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 1));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_14, K_5, Key_8);
      if (succeeded)
      {
        *Value_9 = V_6;
        *AddrOfFiltered_17 = KVs_7;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word * AddrFilteredTail_16;
        MR_Word Filtered_18;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word * next_value_of_AddrOfFiltered_17;

        {
          Filtered_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Filtered_18, 0) = ((MR_Box) (Var_12));
          MR_hl_field(MR_mktag(1), Filtered_18, 1) = NULL;
        }
        AddrFilteredTail_16 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), Filtered_18, (MR_Integer) 1)));
        *AddrOfFiltered_17 = Filtered_18;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = KVs_7;
        next_value_of_AddrOfFiltered_17 = AddrFilteredTail_16;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        AddrOfFiltered_17 = next_value_of_AddrOfFiltered_17;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__update_4_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Box Key_5,
  MR_Box Value_6,
  MR_Word KVs0_7,
  MR_Word * KVs_8)
{
  MR_bool succeeded = (KVs0_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Box K_9;
  MR_Word TailKVs0_11;
  MR_Word Var_18;

  if (succeeded)
  {
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), KVs0_7, (MR_Integer) 0))));
    TailKVs0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), KVs0_7, (MR_Integer) 1))));
    K_9 = (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0));
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_16, Key_5, K_9);
    if (succeeded)
    {
      MR_Word Var_14;

      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_14, 0) = K_9;
        MR_hl_field(MR_mktag(0), Var_14, 1) = Value_6;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *KVs_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailKVs0_11));
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word * AddrTailKVs_20;

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *KVs_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(1), base, 1) = NULL;
      }
      AddrTailKVs_20 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *KVs_8, (MR_Integer) 1)));
      succeeded = mercury__assoc_list__LCMC__pred__update__1_4_p_0(TypeInfo_for_K_16, TypeInfo_for_V_17, Key_5, Value_6, TailKVs0_11, AddrTailKVs_20);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__assoc_list__LCMC__pred__update__1_4_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Box Key_5,
  MR_Box Value_6,
  MR_Word KVs0_7,
  MR_Word * AddrOfKVs_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (KVs0_7 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box K_9;
    MR_Word TailKVs0_11;
    MR_Word Var_18;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), KVs0_7, (MR_Integer) 0))));
      TailKVs0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), KVs0_7, (MR_Integer) 1))));
      K_9 = (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_16, Key_5, K_9);
      if (succeeded)
      {
        MR_Word KVs_8;
        MR_Word Var_14;

        {
          Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_14, 0) = K_9;
          MR_hl_field(MR_mktag(0), Var_14, 1) = Value_6;
        }
        {
          KVs_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), KVs_8, 0) = ((MR_Box) (Var_14));
          MR_hl_field(MR_mktag(1), KVs_8, 1) = ((MR_Box) (TailKVs0_11));
        }
        *AddrOfKVs_21 = KVs_8;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word * AddrTailKVs_20;
        MR_Word KVs_22;
        MR_Word next_value_of_KVs0_7;
        MR_Word * next_value_of_AddrOfKVs_21;

        {
          KVs_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), KVs_22, 0) = ((MR_Box) (Var_18));
          MR_hl_field(MR_mktag(1), KVs_22, 1) = NULL;
        }
        AddrTailKVs_20 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), KVs_22, (MR_Integer) 1)));
        *AddrOfKVs_21 = KVs_22;
        // direct tailcall eliminated
        ;
        next_value_of_KVs0_7 = TailKVs0_11;
        next_value_of_AddrOfKVs_21 = AddrTailKVs_20;
        KVs0_7 = next_value_of_KVs0_7;
        AddrOfKVs_21 = next_value_of_AddrOfKVs_21;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_Box MR_CALL 
mercury__assoc_list__det_elem_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Box K_5,
  MR_Word AL_4)
{
  MR_bool succeeded;
  MR_Box V_6;
  MR_Box VPrime_12;

  succeeded = mercury__assoc_list__search_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, AL_4, K_5, &VPrime_12);
  if (succeeded)
    V_6 = VPrime_12;
  else
    mercury__require__report_lookup_error_2_p_0(TypeInfo_for_K_7, (MR_String) "assoc_list.lookup: key not found", K_5);
  return V_6;
}

MR_bool MR_CALL 
mercury__assoc_list__elem_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Box K_5,
  MR_Word AL_4,
  MR_Box * V_6)
{
  MR_bool succeeded;

  succeeded = mercury__assoc_list__search_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, AL_4, K_5, V_6);
  return succeeded;
}

void MR_CALL 
mercury__assoc_list__lookup_3_p_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word KVs_4,
  MR_Box K_5,
  MR_Box * V_6)
{
  MR_bool succeeded;
  MR_Box VPrime_7;

  succeeded = mercury__assoc_list__search_3_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, KVs_4, K_5, &VPrime_7);
  if (succeeded)
    *V_6 = VPrime_7;
  else
    {
      mercury__require__report_lookup_error_2_p_0(TypeInfo_for_K_9, (MR_String) "assoc_list.lookup: key not found", K_5);
      return;
    }
}

MR_bool MR_CALL 
mercury__assoc_list__search_3_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word HeadVar__1_1,
  MR_Box Key_7,
  MR_Box * Value_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box K_4;
    MR_Box V_5;
    MR_Word KVs_6;
    MR_Word Var_9;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      KVs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      K_4 = (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0));
      V_5 = (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_10, K_4, Key_7);
      if (succeeded)
      {
        *Value_8 = V_5;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = KVs_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__assoc_list__keys_and_values_3_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Box K_4;
    MR_Box V_5;
    MR_Word KVs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word * AddrVs_12;
    MR_Word * AddrKs_13;

    K_4 = (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0));
    V_5 = (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = K_4;
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrKs_13 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__2_2, (MR_Integer) 1)));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = V_5;
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrVs_12 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 1)));
    mercury__assoc_list__LCMC__pred__keys_and_values__1_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, KVs_6, AddrKs_13, AddrVs_12);
  }
}

void MR_CALL 
mercury__assoc_list__LCMC__pred__keys_and_values__1_3_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_14,
  MR_Word * AddrOfHeadVar__3_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__2_14 = (MR_Word) ((MR_Unsigned) 0U);
      *AddrOfHeadVar__3_15 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Box K_4;
      MR_Box V_5;
      MR_Word KVs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word * AddrVs_12;
      MR_Word * AddrKs_13;
      MR_Word HeadVar__2_16;
      MR_Word HeadVar__3_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_14;
      MR_Word * next_value_of_AddrOfHeadVar__3_15;

      K_4 = (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0));
      V_5 = (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1));
      {
        HeadVar__2_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_16, 0) = K_4;
        MR_hl_field(MR_mktag(1), HeadVar__2_16, 1) = NULL;
      }
      AddrKs_13 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__2_16, (MR_Integer) 1)));
      *AddrOfHeadVar__2_14 = HeadVar__2_16;
      {
        HeadVar__3_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_17, 0) = V_5;
        MR_hl_field(MR_mktag(1), HeadVar__3_17, 1) = NULL;
      }
      AddrVs_12 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_17, (MR_Integer) 1)));
      *AddrOfHeadVar__3_15 = HeadVar__3_17;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = KVs_6;
      next_value_of_AddrOfHeadVar__2_14 = AddrKs_13;
      next_value_of_AddrOfHeadVar__3_15 = AddrVs_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_14 = next_value_of_AddrOfHeadVar__2_14;
      AddrOfHeadVar__3_15 = next_value_of_AddrOfHeadVar__3_15;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__assoc_list__values_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word AL_3)
{
  MR_Word Vs_4;

  mercury__assoc_list__values_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, AL_3, &Vs_4);
  return Vs_4;
}

void MR_CALL 
mercury__assoc_list__values_2_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box V_4;
    MR_Word KVs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word * AddrVs_10;

    V_4 = (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 1));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = V_4;
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrVs_10 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__2_2, (MR_Integer) 1)));
    mercury__assoc_list__LCMC__pred__values__1_2_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, KVs_5, AddrVs_10);
  }
}

void MR_CALL 
mercury__assoc_list__LCMC__pred__values__1_2_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_11)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__2_11 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box V_4;
      MR_Word KVs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word * AddrVs_10;
      MR_Word HeadVar__2_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_11;

      V_4 = (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 1));
      {
        HeadVar__2_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_12, 0) = V_4;
        MR_hl_field(MR_mktag(1), HeadVar__2_12, 1) = NULL;
      }
      AddrVs_10 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__2_12, (MR_Integer) 1)));
      *AddrOfHeadVar__2_11 = HeadVar__2_12;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = KVs_5;
      next_value_of_AddrOfHeadVar__2_11 = AddrVs_10;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_11 = next_value_of_AddrOfHeadVar__2_11;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__assoc_list__keys_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word AL_3)
{
  MR_Word Ks_4;

  mercury__assoc_list__keys_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, AL_3, &Ks_4);
  return Ks_4;
}

void MR_CALL 
mercury__assoc_list__keys_2_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box K_3;
    MR_Word KVs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word * AddrKs_10;

    K_3 = (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = K_3;
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrKs_10 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__2_2, (MR_Integer) 1)));
    mercury__assoc_list__LCMC__pred__keys__1_2_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, KVs_5, AddrKs_10);
  }
}

void MR_CALL 
mercury__assoc_list__LCMC__pred__keys__1_2_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_11)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__2_11 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box K_3;
      MR_Word KVs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word * AddrKs_10;
      MR_Word HeadVar__2_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_11;

      K_3 = (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0));
      {
        HeadVar__2_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_12, 0) = K_3;
        MR_hl_field(MR_mktag(1), HeadVar__2_12, 1) = NULL;
      }
      AddrKs_10 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__2_12, (MR_Integer) 1)));
      *AddrOfHeadVar__2_11 = HeadVar__2_12;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = KVs_5;
      next_value_of_AddrOfHeadVar__2_11 = AddrKs_10;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_11 = next_value_of_AddrOfHeadVar__2_11;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__assoc_list__reverse_members_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word AL1_3)
{
  MR_Word AL2_4;

  mercury__assoc_list__reverse_members_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, AL1_3, &AL2_4);
  return AL2_4;
}

void MR_CALL 
mercury__assoc_list__reverse_members_2_p_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box K_3;
    MR_Box V_4;
    MR_Word KVs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_8;
    MR_Word * AddrVKs_11;

    K_3 = (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0));
    V_4 = (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 1));
    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = V_4;
      MR_hl_field(MR_mktag(0), Var_8, 1) = K_3;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrVKs_11 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__2_2, (MR_Integer) 1)));
    mercury__assoc_list__LCMC__pred__reverse_members__1_2_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, KVs_5, AddrVKs_11);
  }
}

void MR_CALL 
mercury__assoc_list__LCMC__pred__reverse_members__1_2_p_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__2_12 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box K_3;
      MR_Box V_4;
      MR_Word KVs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_8;
      MR_Word * AddrVKs_11;
      MR_Word HeadVar__2_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_12;

      K_3 = (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0));
      V_4 = (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 1));
      {
        Var_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_8, 0) = V_4;
        MR_hl_field(MR_mktag(0), Var_8, 1) = K_3;
      }
      {
        HeadVar__2_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_13, 0) = ((MR_Box) (Var_8));
        MR_hl_field(MR_mktag(1), HeadVar__2_13, 1) = NULL;
      }
      AddrVKs_11 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__2_13, (MR_Integer) 1)));
      *AddrOfHeadVar__2_12 = HeadVar__2_13;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = KVs_5;
      next_value_of_AddrOfHeadVar__2_12 = AddrVKs_11;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_12 = next_value_of_AddrOfHeadVar__2_12;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__assoc_list__maybe_from_corresponding_lists_3_p_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word Ks_4,
  MR_Word Vs_5,
  MR_Word * KVs_6)
{
  MR_bool succeeded;

  succeeded = mercury__assoc_list__from_corresponding_loop_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Ks_4, Vs_5, KVs_6);
  return succeeded;
}

MR_Word MR_CALL 
mercury__assoc_list__from_corresponding_lists_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word Ks_4,
  MR_Word Vs_5)
{
  MR_Word AL_6;

  mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Ks_4, Vs_5, &AL_6);
  return AL_6;
}

void MR_CALL 
mercury__assoc_list__from_corresponding_lists_3_p_0(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Word Ks_4,
  MR_Word Vs_5,
  MR_Word * KVs_6)
{
  MR_bool succeeded;
  MR_Word KVsPrime_7;

  succeeded = mercury__assoc_list__from_corresponding_loop_3_p_0(TypeInfo_for_K_30, TypeInfo_for_V_31, Ks_4, Vs_5, &KVsPrime_7);
  if (succeeded)
    *KVs_6 = KVsPrime_7;
  else
  {
    MR_Word TypeInfo_33_33;
    MR_Word TypeInfo_34_34;
    MR_String KeyType_8;
    MR_Integer KeyLength_9;
    MR_String KeyLengthString_10;
    MR_String ValueType_11;
    MR_Integer ValueLength_12;
    MR_String ValueLengthString_13;
    MR_String ErrorString_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_String Var_18;
    MR_String Var_20;
    MR_String Var_21;
    MR_String Var_23;
    MR_String Var_24;
    MR_String Var_26;
    MR_String Var_27;

    {
      TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_33_33, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_33_33, 1) = ((MR_Box) (TypeInfo_for_K_30));
    }
{
#define MR_PROC_LABEL mercury__assoc_list__from_corresponding_lists_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_33_33 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	Var_15  = TypeInfo;
}
    KeyType_8 = mercury__type_desc__type_name_1_f_0(Var_15);
    mercury__list__length_acc_3_p_0(TypeInfo_for_K_30, Ks_4, (MR_Integer) 0, &KeyLength_9);
{
#define MR_PROC_LABEL mercury__assoc_list__from_corresponding_lists_3_p_0

	MR_Integer I;
	MR_String S;

	I = KeyLength_9 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	KeyLengthString_10  = S;
}
    {
      TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_34_34, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_34_34, 1) = ((MR_Box) (TypeInfo_for_V_31));
    }
{
#define MR_PROC_LABEL mercury__assoc_list__from_corresponding_lists_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_34_34 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	Var_16  = TypeInfo;
}
    ValueType_11 = mercury__type_desc__type_name_1_f_0(Var_16);
    mercury__list__length_acc_3_p_0(TypeInfo_for_V_31, Vs_5, (MR_Integer) 0, &ValueLength_12);
{
#define MR_PROC_LABEL mercury__assoc_list__from_corresponding_lists_3_p_0

	MR_Integer I;
	MR_String S;

	I = ValueLength_12 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	ValueLengthString_13  = S;
}
    mercury__string__append_3_p_2((MR_String) "\n\tValue list length: ", ValueLengthString_13, &Var_27);
    mercury__string__append_3_p_2(ValueType_11, Var_27, &Var_26);
    mercury__string__append_3_p_2((MR_String) "\n\tValue list type: ", Var_26, &Var_24);
    mercury__string__append_3_p_2(KeyLengthString_10, Var_24, &Var_23);
    mercury__string__append_3_p_2((MR_String) "\n\tKey list length: ", Var_23, &Var_21);
    mercury__string__append_3_p_2(KeyType_8, Var_21, &Var_20);
    mercury__string__append_3_p_2((MR_String) "\tKey list type: ", Var_20, &Var_18);
    mercury__string__append_3_p_2((MR_String) "Lists have different lengths.\n", Var_18, &ErrorString_14);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140assoc_list.from_corresponding_lists\'/3", ErrorString_14);
      return;
    }
  }
}

MR_bool MR_CALL 
mercury__assoc_list__from_corresponding_loop_3_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_Box A_4 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
    MR_Word As_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Box B_6;
    MR_Word Bs_7;
    MR_Word Var_9;
    MR_Word * AddrABs_12;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      B_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      Bs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      {
        Var_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_9, 0) = A_4;
        MR_hl_field(MR_mktag(0), Var_9, 1) = B_6;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_9));
        MR_hl_field(MR_mktag(1), base, 1) = NULL;
      }
      AddrABs_12 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 1)));
      succeeded = mercury__assoc_list__LCMC__pred__from_corresponding_loop__1_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, As_5, Bs_7, AddrABs_12);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__assoc_list__LCMC__pred__from_corresponding_loop__1_3_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word HeadVar__3_3;

      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
        *AddrOfHeadVar__3_13 = HeadVar__3_3;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Box A_4 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word As_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Box B_6;
      MR_Word Bs_7;
      MR_Word Var_9;
      MR_Word * AddrABs_12;
      MR_Word HeadVar__3_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_13;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        B_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        Bs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        {
          Var_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_9, 0) = A_4;
          MR_hl_field(MR_mktag(0), Var_9, 1) = B_6;
        }
        {
          HeadVar__3_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__3_14, 0) = ((MR_Box) (Var_9));
          MR_hl_field(MR_mktag(1), HeadVar__3_14, 1) = NULL;
        }
        AddrABs_12 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_14, (MR_Integer) 1)));
        *AddrOfHeadVar__3_13 = HeadVar__3_14;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = As_5;
        next_value_of_HeadVar__2_2 = Bs_7;
        next_value_of_AddrOfHeadVar__3_13 = AddrABs_12;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        AddrOfHeadVar__3_13 = next_value_of_AddrOfHeadVar__3_13;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = mercury__assoc_list____Unify____assoc_list_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__assoc_list____Compare____assoc_list_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__assoc_list____Compare____assoc_list_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__assoc_list____Unify____assoc_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__assoc_list____Unify____assoc_list_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__assoc_list____Compare____assoc_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__assoc_list____Compare____assoc_list_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__assoc_list__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module assoc_list.
