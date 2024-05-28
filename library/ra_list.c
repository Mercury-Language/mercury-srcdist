/*
** Automatically generated from `ra_list.m'
** by the Mercury compiler,
** version rotd-2024-05-28
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


// :- module ra_list.
// :- implementation.

/*
INIT mercury__ra_list__init
ENDINIT
*/

#include "ra_list.mih"


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
#include "counter.mih"
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
#include "one_or_more.mih"
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
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "term_vars.mih"
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
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"



struct mercury__ra_list__foldr_4_p_8_env_0_s {
  MR_Word mercury__ra_list__foldr_4_p_8_env_0__TypeInfo_for_L_17;
  MR_Word mercury__ra_list__foldr_4_p_8_env_0__TypeInfo_for_A_18;
  MR_Word mercury__ra_list__foldr_4_p_8_env_0__HeadVar__1_1;
  MR_Box * mercury__ra_list__foldr_4_p_8_env_0__STATE_VARIABLE_A_4;
  MR_Cont mercury__ra_list__foldr_4_p_8_env_0__cont;
  void * mercury__ra_list__foldr_4_p_8_env_0__cont_env_ptr;
  MR_Word mercury__ra_list__foldr_4_p_8_env_0__BinTree_11;
  MR_Box mercury__ra_list__foldr_4_p_8_env_0__STATE_VARIABLE_A_16_16;
};

struct mercury__ra_list__foldr_bintree_4_p_8_env_0_s {
  MR_Word mercury__ra_list__foldr_bintree_4_p_8_env_0__TypeInfo_for_L_18;
  MR_Word mercury__ra_list__foldr_bintree_4_p_8_env_0__TypeInfo_for_A_19;
  MR_Word mercury__ra_list__foldr_bintree_4_p_8_env_0__P_5;
  MR_Box * mercury__ra_list__foldr_bintree_4_p_8_env_0__STATE_VARIABLE_A_12;
  MR_Cont mercury__ra_list__foldr_bintree_4_p_8_env_0__cont;
  void * mercury__ra_list__foldr_bintree_4_p_8_env_0__cont_env_ptr;
  MR_Word mercury__ra_list__foldr_bintree_4_p_8_env_0__L_9;
  MR_Box mercury__ra_list__foldr_bintree_4_p_8_env_0__STATE_VARIABLE_A_14_14;
  MR_Box mercury__ra_list__foldr_bintree_4_p_8_env_0__STATE_VARIABLE_A_15_15;
  MR_Box mercury__ra_list__foldr_bintree_4_p_8_env_0__X_17;
};

struct mercury__ra_list__foldr_4_p_7_env_0_s {
  MR_Word mercury__ra_list__foldr_4_p_7_env_0__TypeInfo_for_L_17;
  MR_Word mercury__ra_list__foldr_4_p_7_env_0__TypeInfo_for_A_18;
  MR_Word mercury__ra_list__foldr_4_p_7_env_0__HeadVar__1_1;
  MR_Box * mercury__ra_list__foldr_4_p_7_env_0__STATE_VARIABLE_A_4;
  MR_Cont mercury__ra_list__foldr_4_p_7_env_0__cont;
  void * mercury__ra_list__foldr_4_p_7_env_0__cont_env_ptr;
  MR_Word mercury__ra_list__foldr_4_p_7_env_0__BinTree_11;
  MR_Box mercury__ra_list__foldr_4_p_7_env_0__STATE_VARIABLE_A_16_16;
};

struct mercury__ra_list__foldr_bintree_4_p_7_env_0_s {
  MR_Word mercury__ra_list__foldr_bintree_4_p_7_env_0__TypeInfo_for_L_18;
  MR_Word mercury__ra_list__foldr_bintree_4_p_7_env_0__TypeInfo_for_A_19;
  MR_Word mercury__ra_list__foldr_bintree_4_p_7_env_0__P_5;
  MR_Box * mercury__ra_list__foldr_bintree_4_p_7_env_0__STATE_VARIABLE_A_12;
  MR_Cont mercury__ra_list__foldr_bintree_4_p_7_env_0__cont;
  void * mercury__ra_list__foldr_bintree_4_p_7_env_0__cont_env_ptr;
  MR_Word mercury__ra_list__foldr_bintree_4_p_7_env_0__L_9;
  MR_Box mercury__ra_list__foldr_bintree_4_p_7_env_0__STATE_VARIABLE_A_14_14;
  MR_Box mercury__ra_list__foldr_bintree_4_p_7_env_0__STATE_VARIABLE_A_15_15;
  MR_Box mercury__ra_list__foldr_bintree_4_p_7_env_0__X_17;
};

struct mercury__ra_list__foldr_4_p_6_env_0_s {
  MR_Word mercury__ra_list__foldr_4_p_6_env_0__TypeInfo_for_L_17;
  MR_Word mercury__ra_list__foldr_4_p_6_env_0__TypeInfo_for_A_18;
  MR_Word mercury__ra_list__foldr_4_p_6_env_0__HeadVar__1_1;
  MR_Box * mercury__ra_list__foldr_4_p_6_env_0__STATE_VARIABLE_A_4;
  MR_Cont mercury__ra_list__foldr_4_p_6_env_0__cont;
  void * mercury__ra_list__foldr_4_p_6_env_0__cont_env_ptr;
  MR_Word mercury__ra_list__foldr_4_p_6_env_0__BinTree_11;
  MR_Box mercury__ra_list__foldr_4_p_6_env_0__STATE_VARIABLE_A_16_16;
};

struct mercury__ra_list__foldr_bintree_4_p_6_env_0_s {
  MR_Word mercury__ra_list__foldr_bintree_4_p_6_env_0__TypeInfo_for_L_18;
  MR_Word mercury__ra_list__foldr_bintree_4_p_6_env_0__TypeInfo_for_A_19;
  MR_Word mercury__ra_list__foldr_bintree_4_p_6_env_0__P_5;
  MR_Box * mercury__ra_list__foldr_bintree_4_p_6_env_0__STATE_VARIABLE_A_12;
  MR_Cont mercury__ra_list__foldr_bintree_4_p_6_env_0__cont;
  void * mercury__ra_list__foldr_bintree_4_p_6_env_0__cont_env_ptr;
  MR_Word mercury__ra_list__foldr_bintree_4_p_6_env_0__L_9;
  MR_Box mercury__ra_list__foldr_bintree_4_p_6_env_0__STATE_VARIABLE_A_14_14;
  MR_Box mercury__ra_list__foldr_bintree_4_p_6_env_0__STATE_VARIABLE_A_15_15;
  MR_Box mercury__ra_list__foldr_bintree_4_p_6_env_0__X_17;
};

struct mercury__ra_list__foldl_4_p_8_env_0_s {
  MR_Word mercury__ra_list__foldl_4_p_8_env_0__TypeInfo_for_L_17;
  MR_Word mercury__ra_list__foldl_4_p_8_env_0__TypeInfo_for_A_18;
  MR_Word mercury__ra_list__foldl_4_p_8_env_0__HeadVar__1_1;
  MR_Box * mercury__ra_list__foldl_4_p_8_env_0__STATE_VARIABLE_A_4;
  MR_Cont mercury__ra_list__foldl_4_p_8_env_0__cont;
  void * mercury__ra_list__foldl_4_p_8_env_0__cont_env_ptr;
  MR_Word mercury__ra_list__foldl_4_p_8_env_0__RAList_12;
  MR_Box mercury__ra_list__foldl_4_p_8_env_0__STATE_VARIABLE_A_16_16;
};

struct mercury__ra_list__foldl_bintree_4_p_8_env_0_s {
  MR_Word mercury__ra_list__foldl_bintree_4_p_8_env_0__TypeInfo_for_L_18;
  MR_Word mercury__ra_list__foldl_bintree_4_p_8_env_0__TypeInfo_for_A_19;
  MR_Word mercury__ra_list__foldl_bintree_4_p_8_env_0__P_5;
  MR_Box * mercury__ra_list__foldl_bintree_4_p_8_env_0__STATE_VARIABLE_A_12;
  MR_Cont mercury__ra_list__foldl_bintree_4_p_8_env_0__cont;
  void * mercury__ra_list__foldl_bintree_4_p_8_env_0__cont_env_ptr;
  MR_Word mercury__ra_list__foldl_bintree_4_p_8_env_0__L_9;
  MR_Word mercury__ra_list__foldl_bintree_4_p_8_env_0__R_10;
  MR_Box mercury__ra_list__foldl_bintree_4_p_8_env_0__STATE_VARIABLE_A_14_14;
  MR_Box mercury__ra_list__foldl_bintree_4_p_8_env_0__STATE_VARIABLE_A_15_15;
};

struct mercury__ra_list__foldl_4_p_7_env_0_s {
  MR_Word mercury__ra_list__foldl_4_p_7_env_0__TypeInfo_for_L_17;
  MR_Word mercury__ra_list__foldl_4_p_7_env_0__TypeInfo_for_A_18;
  MR_Word mercury__ra_list__foldl_4_p_7_env_0__HeadVar__1_1;
  MR_Box * mercury__ra_list__foldl_4_p_7_env_0__STATE_VARIABLE_A_4;
  MR_Cont mercury__ra_list__foldl_4_p_7_env_0__cont;
  void * mercury__ra_list__foldl_4_p_7_env_0__cont_env_ptr;
  MR_Word mercury__ra_list__foldl_4_p_7_env_0__RAList_12;
  MR_Box mercury__ra_list__foldl_4_p_7_env_0__STATE_VARIABLE_A_16_16;
};

struct mercury__ra_list__foldl_bintree_4_p_7_env_0_s {
  MR_Word mercury__ra_list__foldl_bintree_4_p_7_env_0__TypeInfo_for_L_18;
  MR_Word mercury__ra_list__foldl_bintree_4_p_7_env_0__TypeInfo_for_A_19;
  MR_Word mercury__ra_list__foldl_bintree_4_p_7_env_0__P_5;
  MR_Box * mercury__ra_list__foldl_bintree_4_p_7_env_0__STATE_VARIABLE_A_12;
  MR_Cont mercury__ra_list__foldl_bintree_4_p_7_env_0__cont;
  void * mercury__ra_list__foldl_bintree_4_p_7_env_0__cont_env_ptr;
  MR_Word mercury__ra_list__foldl_bintree_4_p_7_env_0__L_9;
  MR_Word mercury__ra_list__foldl_bintree_4_p_7_env_0__R_10;
  MR_Box mercury__ra_list__foldl_bintree_4_p_7_env_0__STATE_VARIABLE_A_14_14;
  MR_Box mercury__ra_list__foldl_bintree_4_p_7_env_0__STATE_VARIABLE_A_15_15;
};

struct mercury__ra_list__foldl_4_p_6_env_0_s {
  MR_Word mercury__ra_list__foldl_4_p_6_env_0__TypeInfo_for_L_17;
  MR_Word mercury__ra_list__foldl_4_p_6_env_0__TypeInfo_for_A_18;
  MR_Word mercury__ra_list__foldl_4_p_6_env_0__HeadVar__1_1;
  MR_Box * mercury__ra_list__foldl_4_p_6_env_0__STATE_VARIABLE_A_4;
  MR_Cont mercury__ra_list__foldl_4_p_6_env_0__cont;
  void * mercury__ra_list__foldl_4_p_6_env_0__cont_env_ptr;
  MR_Word mercury__ra_list__foldl_4_p_6_env_0__RAList_12;
  MR_Box mercury__ra_list__foldl_4_p_6_env_0__STATE_VARIABLE_A_16_16;
};

struct mercury__ra_list__foldl_bintree_4_p_6_env_0_s {
  MR_Word mercury__ra_list__foldl_bintree_4_p_6_env_0__TypeInfo_for_L_18;
  MR_Word mercury__ra_list__foldl_bintree_4_p_6_env_0__TypeInfo_for_A_19;
  MR_Word mercury__ra_list__foldl_bintree_4_p_6_env_0__P_5;
  MR_Box * mercury__ra_list__foldl_bintree_4_p_6_env_0__STATE_VARIABLE_A_12;
  MR_Cont mercury__ra_list__foldl_bintree_4_p_6_env_0__cont;
  void * mercury__ra_list__foldl_bintree_4_p_6_env_0__cont_env_ptr;
  MR_Word mercury__ra_list__foldl_bintree_4_p_6_env_0__L_9;
  MR_Word mercury__ra_list__foldl_bintree_4_p_6_env_0__R_10;
  MR_Box mercury__ra_list__foldl_bintree_4_p_6_env_0__STATE_VARIABLE_A_14_14;
  MR_Box mercury__ra_list__foldl_bintree_4_p_6_env_0__STATE_VARIABLE_A_15_15;
};

struct mercury__ra_list__map_3_p_4_env_0_s {
  MR_Word mercury__ra_list__map_3_p_4_env_0__TypeInfo_for_X_11;
  MR_Word mercury__ra_list__map_3_p_4_env_0__TypeInfo_for_Y_12;
  MR_Word mercury__ra_list__map_3_p_4_env_0__HeadVar__1_1;
  MR_Word * mercury__ra_list__map_3_p_4_env_0__HeadVar__3_3;
  MR_Cont mercury__ra_list__map_3_p_4_env_0__cont;
  void * mercury__ra_list__map_3_p_4_env_0__cont_env_ptr;
  MR_Integer mercury__ra_list__map_3_p_4_env_0__Size_6;
  MR_Word mercury__ra_list__map_3_p_4_env_0__RAList0_8;
  MR_Word mercury__ra_list__map_3_p_4_env_0__BinTree_9;
  MR_Word mercury__ra_list__map_3_p_4_env_0__RAList_10;
};

struct mercury__ra_list__map_bintree_3_p_4_env_0_s {
  MR_Word mercury__ra_list__map_bintree_3_p_4_env_0__TypeInfo_for_X_15;
  MR_Word mercury__ra_list__map_bintree_3_p_4_env_0__TypeInfo_for_Y_16;
  MR_Word mercury__ra_list__map_bintree_3_p_4_env_0__P_4;
  MR_Word * mercury__ra_list__map_bintree_3_p_4_env_0__BinTree_6;
  MR_Cont mercury__ra_list__map_bintree_3_p_4_env_0__cont;
  void * mercury__ra_list__map_bintree_3_p_4_env_0__cont_env_ptr;
  MR_Box mercury__ra_list__map_bintree_3_p_4_env_0__X_8;
  MR_Word mercury__ra_list__map_bintree_3_p_4_env_0__L0_9;
  MR_Word mercury__ra_list__map_bintree_3_p_4_env_0__R0_10;
  MR_Word mercury__ra_list__map_bintree_3_p_4_env_0__L_11;
  MR_Word mercury__ra_list__map_bintree_3_p_4_env_0__R_12;
  MR_Box mercury__ra_list__map_bintree_3_p_4_env_0__X_14;
};

struct mercury__ra_list__map_3_p_3_env_0_s {
  MR_Word mercury__ra_list__map_3_p_3_env_0__TypeInfo_for_X_11;
  MR_Word mercury__ra_list__map_3_p_3_env_0__TypeInfo_for_Y_12;
  MR_Word mercury__ra_list__map_3_p_3_env_0__HeadVar__1_1;
  MR_Word * mercury__ra_list__map_3_p_3_env_0__HeadVar__3_3;
  MR_Cont mercury__ra_list__map_3_p_3_env_0__cont;
  void * mercury__ra_list__map_3_p_3_env_0__cont_env_ptr;
  MR_Integer mercury__ra_list__map_3_p_3_env_0__Size_6;
  MR_Word mercury__ra_list__map_3_p_3_env_0__RAList0_8;
  MR_Word mercury__ra_list__map_3_p_3_env_0__BinTree_9;
  MR_Word mercury__ra_list__map_3_p_3_env_0__RAList_10;
};

struct mercury__ra_list__map_bintree_3_p_3_env_0_s {
  MR_Word mercury__ra_list__map_bintree_3_p_3_env_0__TypeInfo_for_X_15;
  MR_Word mercury__ra_list__map_bintree_3_p_3_env_0__TypeInfo_for_Y_16;
  MR_Word mercury__ra_list__map_bintree_3_p_3_env_0__P_4;
  MR_Word * mercury__ra_list__map_bintree_3_p_3_env_0__BinTree_6;
  MR_Cont mercury__ra_list__map_bintree_3_p_3_env_0__cont;
  void * mercury__ra_list__map_bintree_3_p_3_env_0__cont_env_ptr;
  MR_Box mercury__ra_list__map_bintree_3_p_3_env_0__X_8;
  MR_Word mercury__ra_list__map_bintree_3_p_3_env_0__L0_9;
  MR_Word mercury__ra_list__map_bintree_3_p_3_env_0__R0_10;
  MR_Word mercury__ra_list__map_bintree_3_p_3_env_0__L_11;
  MR_Word mercury__ra_list__map_bintree_3_p_3_env_0__R_12;
  MR_Box mercury__ra_list__map_bintree_3_p_3_env_0__X_14;
};


static const MR_DuFunctorDesc mercury__ra_list__ra_list__du_functor_desc_ra_list_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__ra_list__ra_list__pti_ra_list_bintree_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__ra_list__ra_list__pti_ra_list_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__ra_list__ra_list__field_types_ra_list_1_1[3];

static const MR_DuFunctorDesc mercury__ra_list__ra_list__du_functor_desc_ra_list_1_1;

static const MR_DuFunctorDescPtr mercury__ra_list__ra_list__du_stag_ordered_ra_list_1_0[1];

static const MR_DuFunctorDescPtr mercury__ra_list__ra_list__du_stag_ordered_ra_list_1_1[1];

static const MR_DuPtagLayout mercury__ra_list__ra_list__du_ptag_ordered_ra_list_1[2];

static const MR_DuFunctorDescPtr mercury__ra_list__ra_list__du_name_ordered_ra_list_1[2];

static const MR_Integer mercury__ra_list__ra_list__functor_number_map_ra_list_1[2];

static const MR_PseudoTypeInfo mercury__ra_list__ra_list__field_types_ra_list_bintree_1_0[1];

static const MR_DuFunctorDesc mercury__ra_list__ra_list__du_functor_desc_ra_list_bintree_1_0;

static const MR_PseudoTypeInfo mercury__ra_list__ra_list__field_types_ra_list_bintree_1_1[3];

static const MR_DuFunctorDesc mercury__ra_list__ra_list__du_functor_desc_ra_list_bintree_1_1;

static const MR_DuFunctorDescPtr mercury__ra_list__ra_list__du_stag_ordered_ra_list_bintree_1_0[1];

static const MR_DuFunctorDescPtr mercury__ra_list__ra_list__du_stag_ordered_ra_list_bintree_1_1[1];

static const MR_DuPtagLayout mercury__ra_list__ra_list__du_ptag_ordered_ra_list_bintree_1[2];

static const MR_DuFunctorDescPtr mercury__ra_list__ra_list__du_name_ordered_ra_list_bintree_1[2];

static const MR_Integer mercury__ra_list__ra_list__functor_number_map_ra_list_bintree_1[2];

static void MR_CALL 
mercury__ra_list__foldr_4_p_8_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__foldr_bintree_4_p_8_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__foldr_bintree_4_p_8_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__foldr_4_p_7_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__foldr_bintree_4_p_7_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__foldr_bintree_4_p_7_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__foldr_4_p_6_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__foldr_bintree_4_p_6_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__foldr_bintree_4_p_6_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__foldl_4_p_8_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__foldl_bintree_4_p_8_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__foldl_bintree_4_p_8_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__foldl_4_p_7_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__foldl_bintree_4_p_7_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__foldl_bintree_4_p_7_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__foldl_4_p_6_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__foldl_bintree_4_p_6_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__foldl_bintree_4_p_6_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__map_3_p_4_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__map_3_p_4_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__map_bintree_3_p_4_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__map_bintree_3_p_4_4(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__map_bintree_3_p_4_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__map_bintree_3_p_4_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__map_3_p_3_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__map_3_p_3_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__map_bintree_3_p_3_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__map_bintree_3_p_3_4(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__map_bintree_3_p_3_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__map_bintree_3_p_3_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__ra_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_112_114_101_112_101_110_100_95_97_110_100_95_99_111_117_110_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * L_3,
  MR_Integer STATE_VARIABLE_Size_0_4,
  MR_Integer * STATE_VARIABLE_Size_5);

static void MR_CALL 
mercury__ra_list__acc_ra_list_5_p_0(
  MR_Word TypeInfo_for_T_38,
  MR_Word RevList0_6,
  MR_Integer SizeLeftover0_7,
  MR_Integer SkewBinary0_8,
  MR_Word RAList0_9,
  MR_Word * RAList_10);

static void MR_CALL 
mercury__ra_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_100_95_112_114_101_102_105_120_95_116_111_95_98_105_110_116_114_101_101_95_95_91_49_93_95_48_4_p_0(
  MR_Integer BinTreeSize_5,
  MR_Word * BinTree_6,
  MR_Word STATE_VARIABLE_RevList_0_12,
  MR_Word * STATE_VARIABLE_RevList_13);

static void MR_CALL 
mercury__ra_list__get_max_bintree_size_3_p_0(
  MR_Integer Size_4,
  MR_Integer CurSkewBinary_5,
  MR_Integer * MaxSkewBinary_6);

static MR_bool MR_CALL 
mercury__ra_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(
  MR_Integer N_4,
  MR_Word As_5,
  MR_Word * Bs_6);

static MR_bool MR_CALL 
mercury__ra_list____Unify____ra_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__ra_list____Compare____ra_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__ra_list____Unify____ra_list_bintree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__ra_list____Compare____ra_list_bintree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__ra_list_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__ra_list_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__ra_list_scalar_common_3[1][5];




static /* final */ const MR_Box mercury__ra_list_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__ra_list_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__ra_list_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__ra_list_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__ra_list_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
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
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"


static const MR_DuFunctorDesc mercury__ra_list__ra_list__du_functor_desc_ra_list_1_0 = {
  (MR_String) "nil",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__ra_list__ra_list__pti_ra_list_bintree_1__pseudo_1 = {
  &mercury__ra_list__ra_list__type_ctor_info_ra_list_bintree_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__ra_list__ra_list__pti_ra_list_1__pseudo_1 = {
  &mercury__ra_list__ra_list__type_ctor_info_ra_list_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo mercury__ra_list__ra_list__field_types_ra_list_1_1[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__ra_list__ra_list__pti_ra_list_bintree_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__ra_list__ra_list__pti_ra_list_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__ra_list__ra_list__du_functor_desc_ra_list_1_1 = {
  (MR_String) "cons",
  INT16_C(3),
  UINT16_C(6),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__ra_list__ra_list__field_types_ra_list_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__ra_list__ra_list__du_stag_ordered_ra_list_1_0[1] = { &mercury__ra_list__ra_list__du_functor_desc_ra_list_1_0 };

static const MR_DuFunctorDescPtr mercury__ra_list__ra_list__du_stag_ordered_ra_list_1_1[1] = { &mercury__ra_list__ra_list__du_functor_desc_ra_list_1_1 };

static const MR_DuPtagLayout mercury__ra_list__ra_list__du_ptag_ordered_ra_list_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__ra_list__ra_list__du_stag_ordered_ra_list_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__ra_list__ra_list__du_stag_ordered_ra_list_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__ra_list__ra_list__du_name_ordered_ra_list_1[2] = {
  &mercury__ra_list__ra_list__du_functor_desc_ra_list_1_1,
  &mercury__ra_list__ra_list__du_functor_desc_ra_list_1_0
};

static const MR_Integer mercury__ra_list__ra_list__functor_number_map_ra_list_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__ra_list__ra_list__type_ctor_info_ra_list_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__ra_list____Unify____ra_list_1_0_10001)),
  ((MR_Box) (mercury__ra_list____Compare____ra_list_1_0_10001)),
  (MR_String) "ra_list",
  (MR_String) "ra_list",
  { mercury__ra_list__ra_list__du_name_ordered_ra_list_1 },
  { mercury__ra_list__ra_list__du_ptag_ordered_ra_list_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__ra_list__ra_list__functor_number_map_ra_list_1,

};

static const MR_PseudoTypeInfo mercury__ra_list__ra_list__field_types_ra_list_bintree_1_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc mercury__ra_list__ra_list__du_functor_desc_ra_list_bintree_1_0 = {
  (MR_String) "leaf",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__ra_list__ra_list__field_types_ra_list_bintree_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__ra_list__ra_list__field_types_ra_list_bintree_1_1[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__ra_list__ra_list__pti_ra_list_bintree_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__ra_list__ra_list__pti_ra_list_bintree_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__ra_list__ra_list__du_functor_desc_ra_list_bintree_1_1 = {
  (MR_String) "node",
  INT16_C(3),
  UINT16_C(7),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__ra_list__ra_list__field_types_ra_list_bintree_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__ra_list__ra_list__du_stag_ordered_ra_list_bintree_1_0[1] = { &mercury__ra_list__ra_list__du_functor_desc_ra_list_bintree_1_0 };

static const MR_DuFunctorDescPtr mercury__ra_list__ra_list__du_stag_ordered_ra_list_bintree_1_1[1] = { &mercury__ra_list__ra_list__du_functor_desc_ra_list_bintree_1_1 };

static const MR_DuPtagLayout mercury__ra_list__ra_list__du_ptag_ordered_ra_list_bintree_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__ra_list__ra_list__du_stag_ordered_ra_list_bintree_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__ra_list__ra_list__du_stag_ordered_ra_list_bintree_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__ra_list__ra_list__du_name_ordered_ra_list_bintree_1[2] = {
  &mercury__ra_list__ra_list__du_functor_desc_ra_list_bintree_1_0,
  &mercury__ra_list__ra_list__du_functor_desc_ra_list_bintree_1_1
};

static const MR_Integer mercury__ra_list__ra_list__functor_number_map_ra_list_bintree_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__ra_list__ra_list__type_ctor_info_ra_list_bintree_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__ra_list____Unify____ra_list_bintree_1_0_10001)),
  ((MR_Box) (mercury__ra_list____Compare____ra_list_bintree_1_0_10001)),
  (MR_String) "ra_list",
  (MR_String) "ra_list_bintree",
  { mercury__ra_list__ra_list__du_name_ordered_ra_list_bintree_1 },
  { mercury__ra_list__ra_list__du_ptag_ordered_ra_list_bintree_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__ra_list__ra_list__functor_number_map_ra_list_bintree_1,

};

void MR_CALL 
mercury__ra_list____Compare____ra_list_1_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX1_4 == ArgY1_5);
        if (succeeded)
          SubResult1_6 = (MR_Integer) 0;
        else
          SubResult1_6 = (MR_Integer) 2;
      }
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__ra_list____Compare____ra_list_bintree_1_0(TypeInfo_for_T_14, &SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word next_value_of_HeadVar__2_2 = ArgX3_10;
          MR_Word next_value_of_HeadVar__3_3 = ArgY3_11;

          // direct tailcall eliminated
          ;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__ra_list____Compare____ra_list_bintree_1_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_14 == CastY_15);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
        MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0));

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_16, HeadVar__1_1, ArgX1_4, ArgY1_5);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Box ArgX1_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      MR_Box ArgY1_7 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));
      MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_8;

      mercury__builtin__compare_3_p_0(TypeInfo_for_T_16, &SubResult1_8, ArgX1_6, ArgY1_7);
      succeeded = (SubResult1_8 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_8;
      else
      {
        MR_Word SubResult2_11;

        mercury__ra_list____Compare____ra_list_bintree_1_0(TypeInfo_for_T_16, &SubResult2_11, ArgX2_9, ArgY2_10);
        succeeded = (SubResult2_11 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_11;
        else
        {
          MR_Word next_value_of_HeadVar__2_2 = ArgX3_12;
          MR_Word next_value_of_HeadVar__3_3 = ArgY3_13;

          // direct tailcall eliminated
          ;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__ra_list__foldr_4_p_10(
  MR_Word TypeInfo_for_L_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
  else
  {
    MR_Word BinTree_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word RAList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Box STATE_VARIABLE_A_16_16;

    mercury__ra_list__foldr_4_p_10(TypeInfo_for_L_17, TypeInfo_for_A_18, HeadVar__1_1, RAList_12, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_16_16);
    mercury__ra_list__foldr_bintree_4_p_9(TypeInfo_for_L_17, TypeInfo_for_A_18, HeadVar__1_1, BinTree_11, STATE_VARIABLE_A_16_16, STATE_VARIABLE_A_4);
  }
}

void MR_CALL 
mercury__ra_list__foldr_bintree_4_p_9(
  MR_Word TypeInfo_for_L_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word P_5,
  MR_Word BinTree_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  if (((MR_tag((MR_Word) BinTree_6)) == (MR_Integer) 0))
  {
    MR_Box X_8 = (MR_hl_field(0, BinTree_6, (MR_Integer) 0));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));

    func_0(((MR_Box) (P_5)), X_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
  }
  else
  {
    MR_Word L_9 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 1))));
    MR_Word R_10 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 2))));
    MR_Box STATE_VARIABLE_A_14_14;
    MR_Box STATE_VARIABLE_A_15_15;
    MR_Box X_17 = (MR_hl_field(1, BinTree_6, (MR_Integer) 0));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

    mercury__ra_list__foldr_bintree_4_p_9(TypeInfo_for_L_18, TypeInfo_for_A_19, P_5, R_10, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_14_14);
    mercury__ra_list__foldr_bintree_4_p_9(TypeInfo_for_L_18, TypeInfo_for_A_19, P_5, L_9, STATE_VARIABLE_A_14_14, &STATE_VARIABLE_A_15_15);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));
    func_1(((MR_Box) (P_5)), X_17, STATE_VARIABLE_A_15_15, STATE_VARIABLE_A_12);
  }
}

void MR_CALL 
mercury__ra_list__foldr_4_p_9(
  MR_Word TypeInfo_for_L_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
  else
  {
    MR_Word BinTree_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word RAList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Box STATE_VARIABLE_A_16_16;

    mercury__ra_list__foldr_4_p_9(TypeInfo_for_L_17, TypeInfo_for_A_18, HeadVar__1_1, RAList_12, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_16_16);
    mercury__ra_list__foldr_bintree_4_p_10(TypeInfo_for_L_17, TypeInfo_for_A_18, HeadVar__1_1, BinTree_11, STATE_VARIABLE_A_16_16, STATE_VARIABLE_A_4);
  }
}

void MR_CALL 
mercury__ra_list__foldr_bintree_4_p_10(
  MR_Word TypeInfo_for_L_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word P_5,
  MR_Word BinTree_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  if (((MR_tag((MR_Word) BinTree_6)) == (MR_Integer) 0))
  {
    MR_Box X_8 = (MR_hl_field(0, BinTree_6, (MR_Integer) 0));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));

    func_0(((MR_Box) (P_5)), X_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
  }
  else
  {
    MR_Word L_9 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 1))));
    MR_Word R_10 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 2))));
    MR_Box STATE_VARIABLE_A_14_14;
    MR_Box STATE_VARIABLE_A_15_15;
    MR_Box X_17 = (MR_hl_field(1, BinTree_6, (MR_Integer) 0));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

    mercury__ra_list__foldr_bintree_4_p_10(TypeInfo_for_L_18, TypeInfo_for_A_19, P_5, R_10, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_14_14);
    mercury__ra_list__foldr_bintree_4_p_10(TypeInfo_for_L_18, TypeInfo_for_A_19, P_5, L_9, STATE_VARIABLE_A_14_14, &STATE_VARIABLE_A_15_15);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));
    func_1(((MR_Box) (P_5)), X_17, STATE_VARIABLE_A_15_15, STATE_VARIABLE_A_12);
  }
}

static void MR_CALL 
mercury__ra_list__foldr_4_p_8_1(
  void * env_ptr_arg)
{
  struct mercury__ra_list__foldr_4_p_8_env_0_s * env_ptr = (struct mercury__ra_list__foldr_4_p_8_env_0_s *) (env_ptr_arg);

  mercury__ra_list__foldr_bintree_4_p_8((env_ptr)->mercury__ra_list__foldr_4_p_8_env_0__TypeInfo_for_L_17, (env_ptr)->mercury__ra_list__foldr_4_p_8_env_0__TypeInfo_for_A_18, (env_ptr)->mercury__ra_list__foldr_4_p_8_env_0__HeadVar__1_1, (env_ptr)->mercury__ra_list__foldr_4_p_8_env_0__BinTree_11, (env_ptr)->mercury__ra_list__foldr_4_p_8_env_0__STATE_VARIABLE_A_16_16, (env_ptr)->mercury__ra_list__foldr_4_p_8_env_0__STATE_VARIABLE_A_4, (env_ptr)->mercury__ra_list__foldr_4_p_8_env_0__cont, (env_ptr)->mercury__ra_list__foldr_4_p_8_env_0__cont_env_ptr);
}

void MR_CALL 
mercury__ra_list__foldr_4_p_8(
  MR_Word TypeInfo_for_L_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__ra_list__foldr_4_p_8_env_0_s env;

  (env).mercury__ra_list__foldr_4_p_8_env_0__TypeInfo_for_L_17 = TypeInfo_for_L_17;
  (env).mercury__ra_list__foldr_4_p_8_env_0__TypeInfo_for_A_18 = TypeInfo_for_A_18;
  (env).mercury__ra_list__foldr_4_p_8_env_0__HeadVar__1_1 = HeadVar__1_1;
  (env).mercury__ra_list__foldr_4_p_8_env_0__STATE_VARIABLE_A_4 = STATE_VARIABLE_A_4;
  (env).mercury__ra_list__foldr_4_p_8_env_0__cont = cont;
  (env).mercury__ra_list__foldr_4_p_8_env_0__cont_env_ptr = cont_env_ptr;
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *((env).mercury__ra_list__foldr_4_p_8_env_0__STATE_VARIABLE_A_4) = STATE_VARIABLE_A_0_3;
    ((env).mercury__ra_list__foldr_4_p_8_env_0__cont)((env).mercury__ra_list__foldr_4_p_8_env_0__cont_env_ptr);
  }
  else
  {
    MR_Word RAList_12;
    MR_Integer _Size_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    (env).mercury__ra_list__foldr_4_p_8_env_0__BinTree_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    RAList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    mercury__ra_list__foldr_4_p_8((env).mercury__ra_list__foldr_4_p_8_env_0__TypeInfo_for_L_17, (env).mercury__ra_list__foldr_4_p_8_env_0__TypeInfo_for_A_18, (env).mercury__ra_list__foldr_4_p_8_env_0__HeadVar__1_1, RAList_12, STATE_VARIABLE_A_0_3, &(env).mercury__ra_list__foldr_4_p_8_env_0__STATE_VARIABLE_A_16_16, mercury__ra_list__foldr_4_p_8_1, &env);
  }
}

static void MR_CALL 
mercury__ra_list__foldr_bintree_4_p_8_2(
  void * env_ptr_arg)
{
  struct mercury__ra_list__foldr_bintree_4_p_8_env_0_s * env_ptr = (struct mercury__ra_list__foldr_bintree_4_p_8_env_0_s *) (env_ptr_arg);

  {
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(0, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_8_env_0__P_5, (MR_Integer) 1))));

    func_1(((MR_Box) ((env_ptr)->mercury__ra_list__foldr_bintree_4_p_8_env_0__P_5)), (env_ptr)->mercury__ra_list__foldr_bintree_4_p_8_env_0__X_17, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_8_env_0__STATE_VARIABLE_A_15_15, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_8_env_0__STATE_VARIABLE_A_12, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_8_env_0__cont, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_8_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
mercury__ra_list__foldr_bintree_4_p_8_1(
  void * env_ptr_arg)
{
  struct mercury__ra_list__foldr_bintree_4_p_8_env_0_s * env_ptr = (struct mercury__ra_list__foldr_bintree_4_p_8_env_0_s *) (env_ptr_arg);

  mercury__ra_list__foldr_bintree_4_p_8((env_ptr)->mercury__ra_list__foldr_bintree_4_p_8_env_0__TypeInfo_for_L_18, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_8_env_0__TypeInfo_for_A_19, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_8_env_0__P_5, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_8_env_0__L_9, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_8_env_0__STATE_VARIABLE_A_14_14, &(env_ptr)->mercury__ra_list__foldr_bintree_4_p_8_env_0__STATE_VARIABLE_A_15_15, mercury__ra_list__foldr_bintree_4_p_8_2, env_ptr);
}

void MR_CALL 
mercury__ra_list__foldr_bintree_4_p_8(
  MR_Word TypeInfo_for_L_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word P_5,
  MR_Word BinTree_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__ra_list__foldr_bintree_4_p_8_env_0_s env;

  (env).mercury__ra_list__foldr_bintree_4_p_8_env_0__TypeInfo_for_L_18 = TypeInfo_for_L_18;
  (env).mercury__ra_list__foldr_bintree_4_p_8_env_0__TypeInfo_for_A_19 = TypeInfo_for_A_19;
  (env).mercury__ra_list__foldr_bintree_4_p_8_env_0__P_5 = P_5;
  (env).mercury__ra_list__foldr_bintree_4_p_8_env_0__STATE_VARIABLE_A_12 = STATE_VARIABLE_A_12;
  (env).mercury__ra_list__foldr_bintree_4_p_8_env_0__cont = cont;
  (env).mercury__ra_list__foldr_bintree_4_p_8_env_0__cont_env_ptr = cont_env_ptr;
  if (((MR_tag((MR_Word) BinTree_6)) == (MR_Integer) 0))
  {
    MR_Box X_8 = (MR_hl_field(0, BinTree_6, (MR_Integer) 0));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(0, (env).mercury__ra_list__foldr_bintree_4_p_8_env_0__P_5, (MR_Integer) 1))));

    func_0(((MR_Box) ((env).mercury__ra_list__foldr_bintree_4_p_8_env_0__P_5)), X_8, STATE_VARIABLE_A_0_11, (env).mercury__ra_list__foldr_bintree_4_p_8_env_0__STATE_VARIABLE_A_12, (env).mercury__ra_list__foldr_bintree_4_p_8_env_0__cont, (env).mercury__ra_list__foldr_bintree_4_p_8_env_0__cont_env_ptr);
  }
  else
  {
    MR_Word R_10;

    (env).mercury__ra_list__foldr_bintree_4_p_8_env_0__X_17 = (MR_hl_field(1, BinTree_6, (MR_Integer) 0));
    (env).mercury__ra_list__foldr_bintree_4_p_8_env_0__L_9 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 1))));
    R_10 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 2))));
    mercury__ra_list__foldr_bintree_4_p_8((env).mercury__ra_list__foldr_bintree_4_p_8_env_0__TypeInfo_for_L_18, (env).mercury__ra_list__foldr_bintree_4_p_8_env_0__TypeInfo_for_A_19, (env).mercury__ra_list__foldr_bintree_4_p_8_env_0__P_5, R_10, STATE_VARIABLE_A_0_11, &(env).mercury__ra_list__foldr_bintree_4_p_8_env_0__STATE_VARIABLE_A_14_14, mercury__ra_list__foldr_bintree_4_p_8_1, &env);
  }
}

static void MR_CALL 
mercury__ra_list__foldr_4_p_7_1(
  void * env_ptr_arg)
{
  struct mercury__ra_list__foldr_4_p_7_env_0_s * env_ptr = (struct mercury__ra_list__foldr_4_p_7_env_0_s *) (env_ptr_arg);

  mercury__ra_list__foldr_bintree_4_p_7((env_ptr)->mercury__ra_list__foldr_4_p_7_env_0__TypeInfo_for_L_17, (env_ptr)->mercury__ra_list__foldr_4_p_7_env_0__TypeInfo_for_A_18, (env_ptr)->mercury__ra_list__foldr_4_p_7_env_0__HeadVar__1_1, (env_ptr)->mercury__ra_list__foldr_4_p_7_env_0__BinTree_11, (env_ptr)->mercury__ra_list__foldr_4_p_7_env_0__STATE_VARIABLE_A_16_16, (env_ptr)->mercury__ra_list__foldr_4_p_7_env_0__STATE_VARIABLE_A_4, (env_ptr)->mercury__ra_list__foldr_4_p_7_env_0__cont, (env_ptr)->mercury__ra_list__foldr_4_p_7_env_0__cont_env_ptr);
}

void MR_CALL 
mercury__ra_list__foldr_4_p_7(
  MR_Word TypeInfo_for_L_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__ra_list__foldr_4_p_7_env_0_s env;

  (env).mercury__ra_list__foldr_4_p_7_env_0__TypeInfo_for_L_17 = TypeInfo_for_L_17;
  (env).mercury__ra_list__foldr_4_p_7_env_0__TypeInfo_for_A_18 = TypeInfo_for_A_18;
  (env).mercury__ra_list__foldr_4_p_7_env_0__HeadVar__1_1 = HeadVar__1_1;
  (env).mercury__ra_list__foldr_4_p_7_env_0__STATE_VARIABLE_A_4 = STATE_VARIABLE_A_4;
  (env).mercury__ra_list__foldr_4_p_7_env_0__cont = cont;
  (env).mercury__ra_list__foldr_4_p_7_env_0__cont_env_ptr = cont_env_ptr;
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *((env).mercury__ra_list__foldr_4_p_7_env_0__STATE_VARIABLE_A_4) = STATE_VARIABLE_A_0_3;
    ((env).mercury__ra_list__foldr_4_p_7_env_0__cont)((env).mercury__ra_list__foldr_4_p_7_env_0__cont_env_ptr);
  }
  else
  {
    MR_Word RAList_12;
    MR_Integer _Size_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    (env).mercury__ra_list__foldr_4_p_7_env_0__BinTree_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    RAList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    mercury__ra_list__foldr_4_p_7((env).mercury__ra_list__foldr_4_p_7_env_0__TypeInfo_for_L_17, (env).mercury__ra_list__foldr_4_p_7_env_0__TypeInfo_for_A_18, (env).mercury__ra_list__foldr_4_p_7_env_0__HeadVar__1_1, RAList_12, STATE_VARIABLE_A_0_3, &(env).mercury__ra_list__foldr_4_p_7_env_0__STATE_VARIABLE_A_16_16, mercury__ra_list__foldr_4_p_7_1, &env);
  }
}

static void MR_CALL 
mercury__ra_list__foldr_bintree_4_p_7_2(
  void * env_ptr_arg)
{
  struct mercury__ra_list__foldr_bintree_4_p_7_env_0_s * env_ptr = (struct mercury__ra_list__foldr_bintree_4_p_7_env_0_s *) (env_ptr_arg);

  {
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(0, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_7_env_0__P_5, (MR_Integer) 1))));

    func_1(((MR_Box) ((env_ptr)->mercury__ra_list__foldr_bintree_4_p_7_env_0__P_5)), (env_ptr)->mercury__ra_list__foldr_bintree_4_p_7_env_0__X_17, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_7_env_0__STATE_VARIABLE_A_15_15, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_7_env_0__STATE_VARIABLE_A_12, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_7_env_0__cont, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_7_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
mercury__ra_list__foldr_bintree_4_p_7_1(
  void * env_ptr_arg)
{
  struct mercury__ra_list__foldr_bintree_4_p_7_env_0_s * env_ptr = (struct mercury__ra_list__foldr_bintree_4_p_7_env_0_s *) (env_ptr_arg);

  mercury__ra_list__foldr_bintree_4_p_7((env_ptr)->mercury__ra_list__foldr_bintree_4_p_7_env_0__TypeInfo_for_L_18, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_7_env_0__TypeInfo_for_A_19, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_7_env_0__P_5, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_7_env_0__L_9, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_7_env_0__STATE_VARIABLE_A_14_14, &(env_ptr)->mercury__ra_list__foldr_bintree_4_p_7_env_0__STATE_VARIABLE_A_15_15, mercury__ra_list__foldr_bintree_4_p_7_2, env_ptr);
}

void MR_CALL 
mercury__ra_list__foldr_bintree_4_p_7(
  MR_Word TypeInfo_for_L_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word P_5,
  MR_Word BinTree_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__ra_list__foldr_bintree_4_p_7_env_0_s env;

  (env).mercury__ra_list__foldr_bintree_4_p_7_env_0__TypeInfo_for_L_18 = TypeInfo_for_L_18;
  (env).mercury__ra_list__foldr_bintree_4_p_7_env_0__TypeInfo_for_A_19 = TypeInfo_for_A_19;
  (env).mercury__ra_list__foldr_bintree_4_p_7_env_0__P_5 = P_5;
  (env).mercury__ra_list__foldr_bintree_4_p_7_env_0__STATE_VARIABLE_A_12 = STATE_VARIABLE_A_12;
  (env).mercury__ra_list__foldr_bintree_4_p_7_env_0__cont = cont;
  (env).mercury__ra_list__foldr_bintree_4_p_7_env_0__cont_env_ptr = cont_env_ptr;
  if (((MR_tag((MR_Word) BinTree_6)) == (MR_Integer) 0))
  {
    MR_Box X_8 = (MR_hl_field(0, BinTree_6, (MR_Integer) 0));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(0, (env).mercury__ra_list__foldr_bintree_4_p_7_env_0__P_5, (MR_Integer) 1))));

    func_0(((MR_Box) ((env).mercury__ra_list__foldr_bintree_4_p_7_env_0__P_5)), X_8, STATE_VARIABLE_A_0_11, (env).mercury__ra_list__foldr_bintree_4_p_7_env_0__STATE_VARIABLE_A_12, (env).mercury__ra_list__foldr_bintree_4_p_7_env_0__cont, (env).mercury__ra_list__foldr_bintree_4_p_7_env_0__cont_env_ptr);
  }
  else
  {
    MR_Word R_10;

    (env).mercury__ra_list__foldr_bintree_4_p_7_env_0__X_17 = (MR_hl_field(1, BinTree_6, (MR_Integer) 0));
    (env).mercury__ra_list__foldr_bintree_4_p_7_env_0__L_9 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 1))));
    R_10 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 2))));
    mercury__ra_list__foldr_bintree_4_p_7((env).mercury__ra_list__foldr_bintree_4_p_7_env_0__TypeInfo_for_L_18, (env).mercury__ra_list__foldr_bintree_4_p_7_env_0__TypeInfo_for_A_19, (env).mercury__ra_list__foldr_bintree_4_p_7_env_0__P_5, R_10, STATE_VARIABLE_A_0_11, &(env).mercury__ra_list__foldr_bintree_4_p_7_env_0__STATE_VARIABLE_A_14_14, mercury__ra_list__foldr_bintree_4_p_7_1, &env);
  }
}

static void MR_CALL 
mercury__ra_list__foldr_4_p_6_1(
  void * env_ptr_arg)
{
  struct mercury__ra_list__foldr_4_p_6_env_0_s * env_ptr = (struct mercury__ra_list__foldr_4_p_6_env_0_s *) (env_ptr_arg);

  mercury__ra_list__foldr_bintree_4_p_6((env_ptr)->mercury__ra_list__foldr_4_p_6_env_0__TypeInfo_for_L_17, (env_ptr)->mercury__ra_list__foldr_4_p_6_env_0__TypeInfo_for_A_18, (env_ptr)->mercury__ra_list__foldr_4_p_6_env_0__HeadVar__1_1, (env_ptr)->mercury__ra_list__foldr_4_p_6_env_0__BinTree_11, (env_ptr)->mercury__ra_list__foldr_4_p_6_env_0__STATE_VARIABLE_A_16_16, (env_ptr)->mercury__ra_list__foldr_4_p_6_env_0__STATE_VARIABLE_A_4, (env_ptr)->mercury__ra_list__foldr_4_p_6_env_0__cont, (env_ptr)->mercury__ra_list__foldr_4_p_6_env_0__cont_env_ptr);
}

void MR_CALL 
mercury__ra_list__foldr_4_p_6(
  MR_Word TypeInfo_for_L_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__ra_list__foldr_4_p_6_env_0_s env;

  (env).mercury__ra_list__foldr_4_p_6_env_0__TypeInfo_for_L_17 = TypeInfo_for_L_17;
  (env).mercury__ra_list__foldr_4_p_6_env_0__TypeInfo_for_A_18 = TypeInfo_for_A_18;
  (env).mercury__ra_list__foldr_4_p_6_env_0__HeadVar__1_1 = HeadVar__1_1;
  (env).mercury__ra_list__foldr_4_p_6_env_0__STATE_VARIABLE_A_4 = STATE_VARIABLE_A_4;
  (env).mercury__ra_list__foldr_4_p_6_env_0__cont = cont;
  (env).mercury__ra_list__foldr_4_p_6_env_0__cont_env_ptr = cont_env_ptr;
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *((env).mercury__ra_list__foldr_4_p_6_env_0__STATE_VARIABLE_A_4) = STATE_VARIABLE_A_0_3;
    ((env).mercury__ra_list__foldr_4_p_6_env_0__cont)((env).mercury__ra_list__foldr_4_p_6_env_0__cont_env_ptr);
  }
  else
  {
    MR_Word RAList_12;
    MR_Integer _Size_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    (env).mercury__ra_list__foldr_4_p_6_env_0__BinTree_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    RAList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    mercury__ra_list__foldr_4_p_6((env).mercury__ra_list__foldr_4_p_6_env_0__TypeInfo_for_L_17, (env).mercury__ra_list__foldr_4_p_6_env_0__TypeInfo_for_A_18, (env).mercury__ra_list__foldr_4_p_6_env_0__HeadVar__1_1, RAList_12, STATE_VARIABLE_A_0_3, &(env).mercury__ra_list__foldr_4_p_6_env_0__STATE_VARIABLE_A_16_16, mercury__ra_list__foldr_4_p_6_1, &env);
  }
}

static void MR_CALL 
mercury__ra_list__foldr_bintree_4_p_6_2(
  void * env_ptr_arg)
{
  struct mercury__ra_list__foldr_bintree_4_p_6_env_0_s * env_ptr = (struct mercury__ra_list__foldr_bintree_4_p_6_env_0_s *) (env_ptr_arg);

  {
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(0, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_6_env_0__P_5, (MR_Integer) 1))));

    func_1(((MR_Box) ((env_ptr)->mercury__ra_list__foldr_bintree_4_p_6_env_0__P_5)), (env_ptr)->mercury__ra_list__foldr_bintree_4_p_6_env_0__X_17, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_6_env_0__STATE_VARIABLE_A_15_15, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_6_env_0__STATE_VARIABLE_A_12, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_6_env_0__cont, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_6_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
mercury__ra_list__foldr_bintree_4_p_6_1(
  void * env_ptr_arg)
{
  struct mercury__ra_list__foldr_bintree_4_p_6_env_0_s * env_ptr = (struct mercury__ra_list__foldr_bintree_4_p_6_env_0_s *) (env_ptr_arg);

  mercury__ra_list__foldr_bintree_4_p_6((env_ptr)->mercury__ra_list__foldr_bintree_4_p_6_env_0__TypeInfo_for_L_18, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_6_env_0__TypeInfo_for_A_19, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_6_env_0__P_5, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_6_env_0__L_9, (env_ptr)->mercury__ra_list__foldr_bintree_4_p_6_env_0__STATE_VARIABLE_A_14_14, &(env_ptr)->mercury__ra_list__foldr_bintree_4_p_6_env_0__STATE_VARIABLE_A_15_15, mercury__ra_list__foldr_bintree_4_p_6_2, env_ptr);
}

void MR_CALL 
mercury__ra_list__foldr_bintree_4_p_6(
  MR_Word TypeInfo_for_L_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word P_5,
  MR_Word BinTree_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__ra_list__foldr_bintree_4_p_6_env_0_s env;

  (env).mercury__ra_list__foldr_bintree_4_p_6_env_0__TypeInfo_for_L_18 = TypeInfo_for_L_18;
  (env).mercury__ra_list__foldr_bintree_4_p_6_env_0__TypeInfo_for_A_19 = TypeInfo_for_A_19;
  (env).mercury__ra_list__foldr_bintree_4_p_6_env_0__P_5 = P_5;
  (env).mercury__ra_list__foldr_bintree_4_p_6_env_0__STATE_VARIABLE_A_12 = STATE_VARIABLE_A_12;
  (env).mercury__ra_list__foldr_bintree_4_p_6_env_0__cont = cont;
  (env).mercury__ra_list__foldr_bintree_4_p_6_env_0__cont_env_ptr = cont_env_ptr;
  if (((MR_tag((MR_Word) BinTree_6)) == (MR_Integer) 0))
  {
    MR_Box X_8 = (MR_hl_field(0, BinTree_6, (MR_Integer) 0));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(0, (env).mercury__ra_list__foldr_bintree_4_p_6_env_0__P_5, (MR_Integer) 1))));

    func_0(((MR_Box) ((env).mercury__ra_list__foldr_bintree_4_p_6_env_0__P_5)), X_8, STATE_VARIABLE_A_0_11, (env).mercury__ra_list__foldr_bintree_4_p_6_env_0__STATE_VARIABLE_A_12, (env).mercury__ra_list__foldr_bintree_4_p_6_env_0__cont, (env).mercury__ra_list__foldr_bintree_4_p_6_env_0__cont_env_ptr);
  }
  else
  {
    MR_Word R_10;

    (env).mercury__ra_list__foldr_bintree_4_p_6_env_0__X_17 = (MR_hl_field(1, BinTree_6, (MR_Integer) 0));
    (env).mercury__ra_list__foldr_bintree_4_p_6_env_0__L_9 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 1))));
    R_10 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 2))));
    mercury__ra_list__foldr_bintree_4_p_6((env).mercury__ra_list__foldr_bintree_4_p_6_env_0__TypeInfo_for_L_18, (env).mercury__ra_list__foldr_bintree_4_p_6_env_0__TypeInfo_for_A_19, (env).mercury__ra_list__foldr_bintree_4_p_6_env_0__P_5, R_10, STATE_VARIABLE_A_0_11, &(env).mercury__ra_list__foldr_bintree_4_p_6_env_0__STATE_VARIABLE_A_14_14, mercury__ra_list__foldr_bintree_4_p_6_1, &env);
  }
}

MR_bool MR_CALL 
mercury__ra_list__foldr_4_p_5(
  MR_Word TypeInfo_for_L_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word BinTree_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word RAList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Box STATE_VARIABLE_A_16_16;

    succeeded = mercury__ra_list__foldr_4_p_5(TypeInfo_for_L_17, TypeInfo_for_A_18, HeadVar__1_1, RAList_12, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_16_16);
    if (succeeded)
      succeeded = mercury__ra_list__foldr_bintree_4_p_5(TypeInfo_for_L_17, TypeInfo_for_A_18, HeadVar__1_1, BinTree_11, STATE_VARIABLE_A_16_16, STATE_VARIABLE_A_4);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ra_list__foldr_bintree_4_p_5(
  MR_Word TypeInfo_for_L_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word P_5,
  MR_Word BinTree_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) BinTree_6)) == (MR_Integer) 0))
  {
    MR_Box X_8 = (MR_hl_field(0, BinTree_6, (MR_Integer) 0));
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));

    succeeded = func_0(((MR_Box) (P_5)), X_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
  }
  else
  {
    MR_Word L_9 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 1))));
    MR_Word R_10 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 2))));
    MR_Box STATE_VARIABLE_A_14_14;
    MR_Box STATE_VARIABLE_A_15_15;
    MR_Box X_17 = (MR_hl_field(1, BinTree_6, (MR_Integer) 0));
    MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

    succeeded = mercury__ra_list__foldr_bintree_4_p_5(TypeInfo_for_L_18, TypeInfo_for_A_19, P_5, R_10, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_14_14);
    if (succeeded)
    {
      succeeded = mercury__ra_list__foldr_bintree_4_p_5(TypeInfo_for_L_18, TypeInfo_for_A_19, P_5, L_9, STATE_VARIABLE_A_14_14, &STATE_VARIABLE_A_15_15);
      if (succeeded)
      {
        func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));
        succeeded = func_1(((MR_Box) (P_5)), X_17, STATE_VARIABLE_A_15_15, STATE_VARIABLE_A_12);
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ra_list__foldr_4_p_4(
  MR_Word TypeInfo_for_L_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word BinTree_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word RAList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Box STATE_VARIABLE_A_16_16;

    succeeded = mercury__ra_list__foldr_4_p_4(TypeInfo_for_L_17, TypeInfo_for_A_18, HeadVar__1_1, RAList_12, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_16_16);
    if (succeeded)
      succeeded = mercury__ra_list__foldr_bintree_4_p_4(TypeInfo_for_L_17, TypeInfo_for_A_18, HeadVar__1_1, BinTree_11, STATE_VARIABLE_A_16_16, STATE_VARIABLE_A_4);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ra_list__foldr_bintree_4_p_4(
  MR_Word TypeInfo_for_L_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word P_5,
  MR_Word BinTree_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) BinTree_6)) == (MR_Integer) 0))
  {
    MR_Box X_8 = (MR_hl_field(0, BinTree_6, (MR_Integer) 0));
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));

    succeeded = func_0(((MR_Box) (P_5)), X_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
  }
  else
  {
    MR_Word L_9 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 1))));
    MR_Word R_10 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 2))));
    MR_Box STATE_VARIABLE_A_14_14;
    MR_Box STATE_VARIABLE_A_15_15;
    MR_Box X_17 = (MR_hl_field(1, BinTree_6, (MR_Integer) 0));
    MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

    succeeded = mercury__ra_list__foldr_bintree_4_p_4(TypeInfo_for_L_18, TypeInfo_for_A_19, P_5, R_10, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_14_14);
    if (succeeded)
    {
      succeeded = mercury__ra_list__foldr_bintree_4_p_4(TypeInfo_for_L_18, TypeInfo_for_A_19, P_5, L_9, STATE_VARIABLE_A_14_14, &STATE_VARIABLE_A_15_15);
      if (succeeded)
      {
        func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));
        succeeded = func_1(((MR_Box) (P_5)), X_17, STATE_VARIABLE_A_15_15, STATE_VARIABLE_A_12);
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ra_list__foldr_4_p_3(
  MR_Word TypeInfo_for_L_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word BinTree_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word RAList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Box STATE_VARIABLE_A_16_16;

    succeeded = mercury__ra_list__foldr_4_p_3(TypeInfo_for_L_17, TypeInfo_for_A_18, HeadVar__1_1, RAList_12, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_16_16);
    if (succeeded)
      succeeded = mercury__ra_list__foldr_bintree_4_p_3(TypeInfo_for_L_17, TypeInfo_for_A_18, HeadVar__1_1, BinTree_11, STATE_VARIABLE_A_16_16, STATE_VARIABLE_A_4);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ra_list__foldr_bintree_4_p_3(
  MR_Word TypeInfo_for_L_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word P_5,
  MR_Word BinTree_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) BinTree_6)) == (MR_Integer) 0))
  {
    MR_Box X_8 = (MR_hl_field(0, BinTree_6, (MR_Integer) 0));
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));

    succeeded = func_0(((MR_Box) (P_5)), X_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
  }
  else
  {
    MR_Word L_9 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 1))));
    MR_Word R_10 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 2))));
    MR_Box STATE_VARIABLE_A_14_14;
    MR_Box STATE_VARIABLE_A_15_15;
    MR_Box X_17 = (MR_hl_field(1, BinTree_6, (MR_Integer) 0));
    MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

    succeeded = mercury__ra_list__foldr_bintree_4_p_3(TypeInfo_for_L_18, TypeInfo_for_A_19, P_5, R_10, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_14_14);
    if (succeeded)
    {
      succeeded = mercury__ra_list__foldr_bintree_4_p_3(TypeInfo_for_L_18, TypeInfo_for_A_19, P_5, L_9, STATE_VARIABLE_A_14_14, &STATE_VARIABLE_A_15_15);
      if (succeeded)
      {
        func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));
        succeeded = func_1(((MR_Box) (P_5)), X_17, STATE_VARIABLE_A_15_15, STATE_VARIABLE_A_12);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__ra_list__foldr_4_p_2(
  MR_Word TypeInfo_for_L_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
  else
  {
    MR_Word BinTree_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word RAList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Box STATE_VARIABLE_A_16_16;

    mercury__ra_list__foldr_4_p_2(TypeInfo_for_L_17, TypeInfo_for_A_18, HeadVar__1_1, RAList_12, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_16_16);
    mercury__ra_list__foldr_bintree_4_p_2(TypeInfo_for_L_17, TypeInfo_for_A_18, HeadVar__1_1, BinTree_11, STATE_VARIABLE_A_16_16, STATE_VARIABLE_A_4);
  }
}

void MR_CALL 
mercury__ra_list__foldr_bintree_4_p_2(
  MR_Word TypeInfo_for_L_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word P_5,
  MR_Word BinTree_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  if (((MR_tag((MR_Word) BinTree_6)) == (MR_Integer) 0))
  {
    MR_Box X_8 = (MR_hl_field(0, BinTree_6, (MR_Integer) 0));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));

    func_0(((MR_Box) (P_5)), X_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
  }
  else
  {
    MR_Word L_9 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 1))));
    MR_Word R_10 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 2))));
    MR_Box STATE_VARIABLE_A_14_14;
    MR_Box STATE_VARIABLE_A_15_15;
    MR_Box X_17 = (MR_hl_field(1, BinTree_6, (MR_Integer) 0));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

    mercury__ra_list__foldr_bintree_4_p_2(TypeInfo_for_L_18, TypeInfo_for_A_19, P_5, R_10, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_14_14);
    mercury__ra_list__foldr_bintree_4_p_2(TypeInfo_for_L_18, TypeInfo_for_A_19, P_5, L_9, STATE_VARIABLE_A_14_14, &STATE_VARIABLE_A_15_15);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));
    func_1(((MR_Box) (P_5)), X_17, STATE_VARIABLE_A_15_15, STATE_VARIABLE_A_12);
  }
}

void MR_CALL 
mercury__ra_list__foldr_4_p_1(
  MR_Word TypeInfo_for_L_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
  else
  {
    MR_Word BinTree_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word RAList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Box STATE_VARIABLE_A_16_16;

    mercury__ra_list__foldr_4_p_1(TypeInfo_for_L_17, TypeInfo_for_A_18, HeadVar__1_1, RAList_12, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_16_16);
    mercury__ra_list__foldr_bintree_4_p_1(TypeInfo_for_L_17, TypeInfo_for_A_18, HeadVar__1_1, BinTree_11, STATE_VARIABLE_A_16_16, STATE_VARIABLE_A_4);
  }
}

void MR_CALL 
mercury__ra_list__foldr_bintree_4_p_1(
  MR_Word TypeInfo_for_L_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word P_5,
  MR_Word BinTree_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  if (((MR_tag((MR_Word) BinTree_6)) == (MR_Integer) 0))
  {
    MR_Box X_8 = (MR_hl_field(0, BinTree_6, (MR_Integer) 0));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));

    func_0(((MR_Box) (P_5)), X_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
  }
  else
  {
    MR_Word L_9 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 1))));
    MR_Word R_10 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 2))));
    MR_Box STATE_VARIABLE_A_14_14;
    MR_Box STATE_VARIABLE_A_15_15;
    MR_Box X_17 = (MR_hl_field(1, BinTree_6, (MR_Integer) 0));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

    mercury__ra_list__foldr_bintree_4_p_1(TypeInfo_for_L_18, TypeInfo_for_A_19, P_5, R_10, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_14_14);
    mercury__ra_list__foldr_bintree_4_p_1(TypeInfo_for_L_18, TypeInfo_for_A_19, P_5, L_9, STATE_VARIABLE_A_14_14, &STATE_VARIABLE_A_15_15);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));
    func_1(((MR_Box) (P_5)), X_17, STATE_VARIABLE_A_15_15, STATE_VARIABLE_A_12);
  }
}

void MR_CALL 
mercury__ra_list__foldr_4_p_0(
  MR_Word TypeInfo_for_L_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
  else
  {
    MR_Word BinTree_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word RAList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Box STATE_VARIABLE_A_16_16;

    mercury__ra_list__foldr_4_p_0(TypeInfo_for_L_17, TypeInfo_for_A_18, HeadVar__1_1, RAList_12, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_16_16);
    mercury__ra_list__foldr_bintree_4_p_0(TypeInfo_for_L_17, TypeInfo_for_A_18, HeadVar__1_1, BinTree_11, STATE_VARIABLE_A_16_16, STATE_VARIABLE_A_4);
  }
}

void MR_CALL 
mercury__ra_list__foldr_bintree_4_p_0(
  MR_Word TypeInfo_for_L_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word P_5,
  MR_Word BinTree_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  if (((MR_tag((MR_Word) BinTree_6)) == (MR_Integer) 0))
  {
    MR_Box X_8 = (MR_hl_field(0, BinTree_6, (MR_Integer) 0));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));

    func_0(((MR_Box) (P_5)), X_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
  }
  else
  {
    MR_Word L_9 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 1))));
    MR_Word R_10 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 2))));
    MR_Box STATE_VARIABLE_A_14_14;
    MR_Box STATE_VARIABLE_A_15_15;
    MR_Box X_17 = (MR_hl_field(1, BinTree_6, (MR_Integer) 0));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

    mercury__ra_list__foldr_bintree_4_p_0(TypeInfo_for_L_18, TypeInfo_for_A_19, P_5, R_10, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_14_14);
    mercury__ra_list__foldr_bintree_4_p_0(TypeInfo_for_L_18, TypeInfo_for_A_19, P_5, L_9, STATE_VARIABLE_A_14_14, &STATE_VARIABLE_A_15_15);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));
    func_1(((MR_Box) (P_5)), X_17, STATE_VARIABLE_A_15_15, STATE_VARIABLE_A_12);
  }
}

MR_Box MR_CALL 
mercury__ra_list__foldr_3_f_0(
  MR_Word TypeInfo_for_L_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3)
{
  MR_Box HeadVar__4_4;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__4_4 = STATE_VARIABLE_A_0_3;
  else
  {
    MR_Word BinTree_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word RAList_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Box STATE_VARIABLE_A_15_15;

    STATE_VARIABLE_A_15_15 = mercury__ra_list__foldr_3_f_0(TypeInfo_for_L_16, TypeInfo_for_A_17, HeadVar__1_1, RAList_11, STATE_VARIABLE_A_0_3);
    HeadVar__4_4 = mercury__ra_list__foldr_bintree_3_f_0(TypeInfo_for_L_16, TypeInfo_for_A_17, HeadVar__1_1, BinTree_10, STATE_VARIABLE_A_15_15);
  }
  return HeadVar__4_4;
}

MR_Box MR_CALL 
mercury__ra_list__foldr_bintree_3_f_0(
  MR_Word TypeInfo_for_L_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word F_5,
  MR_Word BinTree_6,
  MR_Box STATE_VARIABLE_A_0_11)
{
  MR_Box STATE_VARIABLE_A_12;

  if (((MR_tag((MR_Word) BinTree_6)) == (MR_Integer) 0))
  {
    MR_Box X_8 = (MR_hl_field(0, BinTree_6, (MR_Integer) 0));
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, F_5, (MR_Integer) 1))));

    STATE_VARIABLE_A_12 = func_0(((MR_Box) (F_5)), X_8, STATE_VARIABLE_A_0_11);
  }
  else
  {
    MR_Word L_9 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 1))));
    MR_Word R_10 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 2))));
    MR_Box STATE_VARIABLE_A_14_14;
    MR_Box STATE_VARIABLE_A_15_15;
    MR_Box X_17 = (MR_hl_field(1, BinTree_6, (MR_Integer) 0));
    MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box);

    STATE_VARIABLE_A_14_14 = mercury__ra_list__foldr_bintree_3_f_0(TypeInfo_for_L_18, TypeInfo_for_A_19, F_5, R_10, STATE_VARIABLE_A_0_11);
    STATE_VARIABLE_A_15_15 = mercury__ra_list__foldr_bintree_3_f_0(TypeInfo_for_L_18, TypeInfo_for_A_19, F_5, L_9, STATE_VARIABLE_A_14_14);
    func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, F_5, (MR_Integer) 1))));
    STATE_VARIABLE_A_12 = func_1(((MR_Box) (F_5)), X_17, STATE_VARIABLE_A_15_15);
  }
  return STATE_VARIABLE_A_12;
}

void MR_CALL 
mercury__ra_list__foldl_4_p_10(
  MR_Word TypeInfo_for_L_17,
  MR_Word TypeInfo_for_A_18,
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
      MR_Word BinTree_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word RAList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_16_16;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      mercury__ra_list__foldl_bintree_4_p_10(TypeInfo_for_L_17, TypeInfo_for_A_18, HeadVar__1_1, BinTree_11, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = RAList_12;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_16_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__ra_list__foldl_bintree_4_p_10(
  MR_Word TypeInfo_for_L_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word P_5,
  MR_Word BinTree_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) BinTree_6)) == (MR_Integer) 0))
    {
      MR_Box X_8 = (MR_hl_field(0, BinTree_6, (MR_Integer) 0));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));

      func_0(((MR_Box) (P_5)), X_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
    }
    else
    {
      MR_Word L_9 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 1))));
      MR_Word R_10 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_14_14;
      MR_Box STATE_VARIABLE_A_15_15;
      MR_Box X_17 = (MR_hl_field(1, BinTree_6, (MR_Integer) 0));
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));
      MR_Word next_value_of_BinTree_6;
      MR_Box next_value_of_STATE_VARIABLE_A_0_11;

      func_1(((MR_Box) (P_5)), X_17, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_14_14);
      mercury__ra_list__foldl_bintree_4_p_10(TypeInfo_for_L_18, TypeInfo_for_A_19, P_5, L_9, STATE_VARIABLE_A_14_14, &STATE_VARIABLE_A_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_BinTree_6 = R_10;
      next_value_of_STATE_VARIABLE_A_0_11 = STATE_VARIABLE_A_15_15;
      BinTree_6 = next_value_of_BinTree_6;
      STATE_VARIABLE_A_0_11 = next_value_of_STATE_VARIABLE_A_0_11;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__ra_list__foldl_4_p_9(
  MR_Word TypeInfo_for_L_17,
  MR_Word TypeInfo_for_A_18,
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
      MR_Word BinTree_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word RAList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_16_16;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      mercury__ra_list__foldl_bintree_4_p_9(TypeInfo_for_L_17, TypeInfo_for_A_18, HeadVar__1_1, BinTree_11, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = RAList_12;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_16_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__ra_list__foldl_bintree_4_p_9(
  MR_Word TypeInfo_for_L_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word P_5,
  MR_Word BinTree_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) BinTree_6)) == (MR_Integer) 0))
    {
      MR_Box X_8 = (MR_hl_field(0, BinTree_6, (MR_Integer) 0));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));

      func_0(((MR_Box) (P_5)), X_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
    }
    else
    {
      MR_Word L_9 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 1))));
      MR_Word R_10 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_14_14;
      MR_Box STATE_VARIABLE_A_15_15;
      MR_Box X_17 = (MR_hl_field(1, BinTree_6, (MR_Integer) 0));
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));
      MR_Word next_value_of_BinTree_6;
      MR_Box next_value_of_STATE_VARIABLE_A_0_11;

      func_1(((MR_Box) (P_5)), X_17, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_14_14);
      mercury__ra_list__foldl_bintree_4_p_9(TypeInfo_for_L_18, TypeInfo_for_A_19, P_5, L_9, STATE_VARIABLE_A_14_14, &STATE_VARIABLE_A_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_BinTree_6 = R_10;
      next_value_of_STATE_VARIABLE_A_0_11 = STATE_VARIABLE_A_15_15;
      BinTree_6 = next_value_of_BinTree_6;
      STATE_VARIABLE_A_0_11 = next_value_of_STATE_VARIABLE_A_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__ra_list__foldl_4_p_8_1(
  void * env_ptr_arg)
{
  struct mercury__ra_list__foldl_4_p_8_env_0_s * env_ptr = (struct mercury__ra_list__foldl_4_p_8_env_0_s *) (env_ptr_arg);

  mercury__ra_list__foldl_4_p_8((env_ptr)->mercury__ra_list__foldl_4_p_8_env_0__TypeInfo_for_L_17, (env_ptr)->mercury__ra_list__foldl_4_p_8_env_0__TypeInfo_for_A_18, (env_ptr)->mercury__ra_list__foldl_4_p_8_env_0__HeadVar__1_1, (env_ptr)->mercury__ra_list__foldl_4_p_8_env_0__RAList_12, (env_ptr)->mercury__ra_list__foldl_4_p_8_env_0__STATE_VARIABLE_A_16_16, (env_ptr)->mercury__ra_list__foldl_4_p_8_env_0__STATE_VARIABLE_A_4, (env_ptr)->mercury__ra_list__foldl_4_p_8_env_0__cont, (env_ptr)->mercury__ra_list__foldl_4_p_8_env_0__cont_env_ptr);
}

void MR_CALL 
mercury__ra_list__foldl_4_p_8(
  MR_Word TypeInfo_for_L_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__ra_list__foldl_4_p_8_env_0_s env;

  (env).mercury__ra_list__foldl_4_p_8_env_0__TypeInfo_for_L_17 = TypeInfo_for_L_17;
  (env).mercury__ra_list__foldl_4_p_8_env_0__TypeInfo_for_A_18 = TypeInfo_for_A_18;
  (env).mercury__ra_list__foldl_4_p_8_env_0__HeadVar__1_1 = HeadVar__1_1;
  (env).mercury__ra_list__foldl_4_p_8_env_0__STATE_VARIABLE_A_4 = STATE_VARIABLE_A_4;
  (env).mercury__ra_list__foldl_4_p_8_env_0__cont = cont;
  (env).mercury__ra_list__foldl_4_p_8_env_0__cont_env_ptr = cont_env_ptr;
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *((env).mercury__ra_list__foldl_4_p_8_env_0__STATE_VARIABLE_A_4) = STATE_VARIABLE_A_0_3;
    ((env).mercury__ra_list__foldl_4_p_8_env_0__cont)((env).mercury__ra_list__foldl_4_p_8_env_0__cont_env_ptr);
  }
  else
  {
    MR_Word BinTree_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer _Size_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    (env).mercury__ra_list__foldl_4_p_8_env_0__RAList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    mercury__ra_list__foldl_bintree_4_p_8((env).mercury__ra_list__foldl_4_p_8_env_0__TypeInfo_for_L_17, (env).mercury__ra_list__foldl_4_p_8_env_0__TypeInfo_for_A_18, (env).mercury__ra_list__foldl_4_p_8_env_0__HeadVar__1_1, BinTree_11, STATE_VARIABLE_A_0_3, &(env).mercury__ra_list__foldl_4_p_8_env_0__STATE_VARIABLE_A_16_16, mercury__ra_list__foldl_4_p_8_1, &env);
  }
}

static void MR_CALL 
mercury__ra_list__foldl_bintree_4_p_8_2(
  void * env_ptr_arg)
{
  struct mercury__ra_list__foldl_bintree_4_p_8_env_0_s * env_ptr = (struct mercury__ra_list__foldl_bintree_4_p_8_env_0_s *) (env_ptr_arg);

  mercury__ra_list__foldl_bintree_4_p_8((env_ptr)->mercury__ra_list__foldl_bintree_4_p_8_env_0__TypeInfo_for_L_18, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_8_env_0__TypeInfo_for_A_19, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_8_env_0__P_5, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_8_env_0__R_10, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_8_env_0__STATE_VARIABLE_A_15_15, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_8_env_0__STATE_VARIABLE_A_12, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_8_env_0__cont, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_8_env_0__cont_env_ptr);
}

static void MR_CALL 
mercury__ra_list__foldl_bintree_4_p_8_1(
  void * env_ptr_arg)
{
  struct mercury__ra_list__foldl_bintree_4_p_8_env_0_s * env_ptr = (struct mercury__ra_list__foldl_bintree_4_p_8_env_0_s *) (env_ptr_arg);

  mercury__ra_list__foldl_bintree_4_p_8((env_ptr)->mercury__ra_list__foldl_bintree_4_p_8_env_0__TypeInfo_for_L_18, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_8_env_0__TypeInfo_for_A_19, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_8_env_0__P_5, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_8_env_0__L_9, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_8_env_0__STATE_VARIABLE_A_14_14, &(env_ptr)->mercury__ra_list__foldl_bintree_4_p_8_env_0__STATE_VARIABLE_A_15_15, mercury__ra_list__foldl_bintree_4_p_8_2, env_ptr);
}

void MR_CALL 
mercury__ra_list__foldl_bintree_4_p_8(
  MR_Word TypeInfo_for_L_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word P_5,
  MR_Word BinTree_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__ra_list__foldl_bintree_4_p_8_env_0_s env;

  (env).mercury__ra_list__foldl_bintree_4_p_8_env_0__TypeInfo_for_L_18 = TypeInfo_for_L_18;
  (env).mercury__ra_list__foldl_bintree_4_p_8_env_0__TypeInfo_for_A_19 = TypeInfo_for_A_19;
  (env).mercury__ra_list__foldl_bintree_4_p_8_env_0__P_5 = P_5;
  (env).mercury__ra_list__foldl_bintree_4_p_8_env_0__STATE_VARIABLE_A_12 = STATE_VARIABLE_A_12;
  (env).mercury__ra_list__foldl_bintree_4_p_8_env_0__cont = cont;
  (env).mercury__ra_list__foldl_bintree_4_p_8_env_0__cont_env_ptr = cont_env_ptr;
  if (((MR_tag((MR_Word) BinTree_6)) == (MR_Integer) 0))
  {
    MR_Box X_8 = (MR_hl_field(0, BinTree_6, (MR_Integer) 0));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(0, (env).mercury__ra_list__foldl_bintree_4_p_8_env_0__P_5, (MR_Integer) 1))));

    func_0(((MR_Box) ((env).mercury__ra_list__foldl_bintree_4_p_8_env_0__P_5)), X_8, STATE_VARIABLE_A_0_11, (env).mercury__ra_list__foldl_bintree_4_p_8_env_0__STATE_VARIABLE_A_12, (env).mercury__ra_list__foldl_bintree_4_p_8_env_0__cont, (env).mercury__ra_list__foldl_bintree_4_p_8_env_0__cont_env_ptr);
  }
  else
  {
    MR_Box X_17 = (MR_hl_field(1, BinTree_6, (MR_Integer) 0));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

    (env).mercury__ra_list__foldl_bintree_4_p_8_env_0__L_9 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 1))));
    (env).mercury__ra_list__foldl_bintree_4_p_8_env_0__R_10 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 2))));
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(0, (env).mercury__ra_list__foldl_bintree_4_p_8_env_0__P_5, (MR_Integer) 1))));
    func_1(((MR_Box) ((env).mercury__ra_list__foldl_bintree_4_p_8_env_0__P_5)), X_17, STATE_VARIABLE_A_0_11, &(env).mercury__ra_list__foldl_bintree_4_p_8_env_0__STATE_VARIABLE_A_14_14, mercury__ra_list__foldl_bintree_4_p_8_1, &env);
  }
}

static void MR_CALL 
mercury__ra_list__foldl_4_p_7_1(
  void * env_ptr_arg)
{
  struct mercury__ra_list__foldl_4_p_7_env_0_s * env_ptr = (struct mercury__ra_list__foldl_4_p_7_env_0_s *) (env_ptr_arg);

  mercury__ra_list__foldl_4_p_7((env_ptr)->mercury__ra_list__foldl_4_p_7_env_0__TypeInfo_for_L_17, (env_ptr)->mercury__ra_list__foldl_4_p_7_env_0__TypeInfo_for_A_18, (env_ptr)->mercury__ra_list__foldl_4_p_7_env_0__HeadVar__1_1, (env_ptr)->mercury__ra_list__foldl_4_p_7_env_0__RAList_12, (env_ptr)->mercury__ra_list__foldl_4_p_7_env_0__STATE_VARIABLE_A_16_16, (env_ptr)->mercury__ra_list__foldl_4_p_7_env_0__STATE_VARIABLE_A_4, (env_ptr)->mercury__ra_list__foldl_4_p_7_env_0__cont, (env_ptr)->mercury__ra_list__foldl_4_p_7_env_0__cont_env_ptr);
}

void MR_CALL 
mercury__ra_list__foldl_4_p_7(
  MR_Word TypeInfo_for_L_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__ra_list__foldl_4_p_7_env_0_s env;

  (env).mercury__ra_list__foldl_4_p_7_env_0__TypeInfo_for_L_17 = TypeInfo_for_L_17;
  (env).mercury__ra_list__foldl_4_p_7_env_0__TypeInfo_for_A_18 = TypeInfo_for_A_18;
  (env).mercury__ra_list__foldl_4_p_7_env_0__HeadVar__1_1 = HeadVar__1_1;
  (env).mercury__ra_list__foldl_4_p_7_env_0__STATE_VARIABLE_A_4 = STATE_VARIABLE_A_4;
  (env).mercury__ra_list__foldl_4_p_7_env_0__cont = cont;
  (env).mercury__ra_list__foldl_4_p_7_env_0__cont_env_ptr = cont_env_ptr;
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *((env).mercury__ra_list__foldl_4_p_7_env_0__STATE_VARIABLE_A_4) = STATE_VARIABLE_A_0_3;
    ((env).mercury__ra_list__foldl_4_p_7_env_0__cont)((env).mercury__ra_list__foldl_4_p_7_env_0__cont_env_ptr);
  }
  else
  {
    MR_Word BinTree_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer _Size_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    (env).mercury__ra_list__foldl_4_p_7_env_0__RAList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    mercury__ra_list__foldl_bintree_4_p_7((env).mercury__ra_list__foldl_4_p_7_env_0__TypeInfo_for_L_17, (env).mercury__ra_list__foldl_4_p_7_env_0__TypeInfo_for_A_18, (env).mercury__ra_list__foldl_4_p_7_env_0__HeadVar__1_1, BinTree_11, STATE_VARIABLE_A_0_3, &(env).mercury__ra_list__foldl_4_p_7_env_0__STATE_VARIABLE_A_16_16, mercury__ra_list__foldl_4_p_7_1, &env);
  }
}

static void MR_CALL 
mercury__ra_list__foldl_bintree_4_p_7_2(
  void * env_ptr_arg)
{
  struct mercury__ra_list__foldl_bintree_4_p_7_env_0_s * env_ptr = (struct mercury__ra_list__foldl_bintree_4_p_7_env_0_s *) (env_ptr_arg);

  mercury__ra_list__foldl_bintree_4_p_7((env_ptr)->mercury__ra_list__foldl_bintree_4_p_7_env_0__TypeInfo_for_L_18, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_7_env_0__TypeInfo_for_A_19, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_7_env_0__P_5, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_7_env_0__R_10, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_7_env_0__STATE_VARIABLE_A_15_15, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_7_env_0__STATE_VARIABLE_A_12, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_7_env_0__cont, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_7_env_0__cont_env_ptr);
}

static void MR_CALL 
mercury__ra_list__foldl_bintree_4_p_7_1(
  void * env_ptr_arg)
{
  struct mercury__ra_list__foldl_bintree_4_p_7_env_0_s * env_ptr = (struct mercury__ra_list__foldl_bintree_4_p_7_env_0_s *) (env_ptr_arg);

  mercury__ra_list__foldl_bintree_4_p_7((env_ptr)->mercury__ra_list__foldl_bintree_4_p_7_env_0__TypeInfo_for_L_18, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_7_env_0__TypeInfo_for_A_19, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_7_env_0__P_5, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_7_env_0__L_9, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_7_env_0__STATE_VARIABLE_A_14_14, &(env_ptr)->mercury__ra_list__foldl_bintree_4_p_7_env_0__STATE_VARIABLE_A_15_15, mercury__ra_list__foldl_bintree_4_p_7_2, env_ptr);
}

void MR_CALL 
mercury__ra_list__foldl_bintree_4_p_7(
  MR_Word TypeInfo_for_L_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word P_5,
  MR_Word BinTree_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__ra_list__foldl_bintree_4_p_7_env_0_s env;

  (env).mercury__ra_list__foldl_bintree_4_p_7_env_0__TypeInfo_for_L_18 = TypeInfo_for_L_18;
  (env).mercury__ra_list__foldl_bintree_4_p_7_env_0__TypeInfo_for_A_19 = TypeInfo_for_A_19;
  (env).mercury__ra_list__foldl_bintree_4_p_7_env_0__P_5 = P_5;
  (env).mercury__ra_list__foldl_bintree_4_p_7_env_0__STATE_VARIABLE_A_12 = STATE_VARIABLE_A_12;
  (env).mercury__ra_list__foldl_bintree_4_p_7_env_0__cont = cont;
  (env).mercury__ra_list__foldl_bintree_4_p_7_env_0__cont_env_ptr = cont_env_ptr;
  if (((MR_tag((MR_Word) BinTree_6)) == (MR_Integer) 0))
  {
    MR_Box X_8 = (MR_hl_field(0, BinTree_6, (MR_Integer) 0));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(0, (env).mercury__ra_list__foldl_bintree_4_p_7_env_0__P_5, (MR_Integer) 1))));

    func_0(((MR_Box) ((env).mercury__ra_list__foldl_bintree_4_p_7_env_0__P_5)), X_8, STATE_VARIABLE_A_0_11, (env).mercury__ra_list__foldl_bintree_4_p_7_env_0__STATE_VARIABLE_A_12, (env).mercury__ra_list__foldl_bintree_4_p_7_env_0__cont, (env).mercury__ra_list__foldl_bintree_4_p_7_env_0__cont_env_ptr);
  }
  else
  {
    MR_Box X_17 = (MR_hl_field(1, BinTree_6, (MR_Integer) 0));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

    (env).mercury__ra_list__foldl_bintree_4_p_7_env_0__L_9 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 1))));
    (env).mercury__ra_list__foldl_bintree_4_p_7_env_0__R_10 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 2))));
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(0, (env).mercury__ra_list__foldl_bintree_4_p_7_env_0__P_5, (MR_Integer) 1))));
    func_1(((MR_Box) ((env).mercury__ra_list__foldl_bintree_4_p_7_env_0__P_5)), X_17, STATE_VARIABLE_A_0_11, &(env).mercury__ra_list__foldl_bintree_4_p_7_env_0__STATE_VARIABLE_A_14_14, mercury__ra_list__foldl_bintree_4_p_7_1, &env);
  }
}

static void MR_CALL 
mercury__ra_list__foldl_4_p_6_1(
  void * env_ptr_arg)
{
  struct mercury__ra_list__foldl_4_p_6_env_0_s * env_ptr = (struct mercury__ra_list__foldl_4_p_6_env_0_s *) (env_ptr_arg);

  mercury__ra_list__foldl_4_p_6((env_ptr)->mercury__ra_list__foldl_4_p_6_env_0__TypeInfo_for_L_17, (env_ptr)->mercury__ra_list__foldl_4_p_6_env_0__TypeInfo_for_A_18, (env_ptr)->mercury__ra_list__foldl_4_p_6_env_0__HeadVar__1_1, (env_ptr)->mercury__ra_list__foldl_4_p_6_env_0__RAList_12, (env_ptr)->mercury__ra_list__foldl_4_p_6_env_0__STATE_VARIABLE_A_16_16, (env_ptr)->mercury__ra_list__foldl_4_p_6_env_0__STATE_VARIABLE_A_4, (env_ptr)->mercury__ra_list__foldl_4_p_6_env_0__cont, (env_ptr)->mercury__ra_list__foldl_4_p_6_env_0__cont_env_ptr);
}

void MR_CALL 
mercury__ra_list__foldl_4_p_6(
  MR_Word TypeInfo_for_L_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3,
  MR_Box * STATE_VARIABLE_A_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__ra_list__foldl_4_p_6_env_0_s env;

  (env).mercury__ra_list__foldl_4_p_6_env_0__TypeInfo_for_L_17 = TypeInfo_for_L_17;
  (env).mercury__ra_list__foldl_4_p_6_env_0__TypeInfo_for_A_18 = TypeInfo_for_A_18;
  (env).mercury__ra_list__foldl_4_p_6_env_0__HeadVar__1_1 = HeadVar__1_1;
  (env).mercury__ra_list__foldl_4_p_6_env_0__STATE_VARIABLE_A_4 = STATE_VARIABLE_A_4;
  (env).mercury__ra_list__foldl_4_p_6_env_0__cont = cont;
  (env).mercury__ra_list__foldl_4_p_6_env_0__cont_env_ptr = cont_env_ptr;
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *((env).mercury__ra_list__foldl_4_p_6_env_0__STATE_VARIABLE_A_4) = STATE_VARIABLE_A_0_3;
    ((env).mercury__ra_list__foldl_4_p_6_env_0__cont)((env).mercury__ra_list__foldl_4_p_6_env_0__cont_env_ptr);
  }
  else
  {
    MR_Word BinTree_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer _Size_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    (env).mercury__ra_list__foldl_4_p_6_env_0__RAList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    mercury__ra_list__foldl_bintree_4_p_6((env).mercury__ra_list__foldl_4_p_6_env_0__TypeInfo_for_L_17, (env).mercury__ra_list__foldl_4_p_6_env_0__TypeInfo_for_A_18, (env).mercury__ra_list__foldl_4_p_6_env_0__HeadVar__1_1, BinTree_11, STATE_VARIABLE_A_0_3, &(env).mercury__ra_list__foldl_4_p_6_env_0__STATE_VARIABLE_A_16_16, mercury__ra_list__foldl_4_p_6_1, &env);
  }
}

static void MR_CALL 
mercury__ra_list__foldl_bintree_4_p_6_2(
  void * env_ptr_arg)
{
  struct mercury__ra_list__foldl_bintree_4_p_6_env_0_s * env_ptr = (struct mercury__ra_list__foldl_bintree_4_p_6_env_0_s *) (env_ptr_arg);

  mercury__ra_list__foldl_bintree_4_p_6((env_ptr)->mercury__ra_list__foldl_bintree_4_p_6_env_0__TypeInfo_for_L_18, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_6_env_0__TypeInfo_for_A_19, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_6_env_0__P_5, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_6_env_0__R_10, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_6_env_0__STATE_VARIABLE_A_15_15, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_6_env_0__STATE_VARIABLE_A_12, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_6_env_0__cont, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_6_env_0__cont_env_ptr);
}

static void MR_CALL 
mercury__ra_list__foldl_bintree_4_p_6_1(
  void * env_ptr_arg)
{
  struct mercury__ra_list__foldl_bintree_4_p_6_env_0_s * env_ptr = (struct mercury__ra_list__foldl_bintree_4_p_6_env_0_s *) (env_ptr_arg);

  mercury__ra_list__foldl_bintree_4_p_6((env_ptr)->mercury__ra_list__foldl_bintree_4_p_6_env_0__TypeInfo_for_L_18, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_6_env_0__TypeInfo_for_A_19, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_6_env_0__P_5, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_6_env_0__L_9, (env_ptr)->mercury__ra_list__foldl_bintree_4_p_6_env_0__STATE_VARIABLE_A_14_14, &(env_ptr)->mercury__ra_list__foldl_bintree_4_p_6_env_0__STATE_VARIABLE_A_15_15, mercury__ra_list__foldl_bintree_4_p_6_2, env_ptr);
}

void MR_CALL 
mercury__ra_list__foldl_bintree_4_p_6(
  MR_Word TypeInfo_for_L_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word P_5,
  MR_Word BinTree_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__ra_list__foldl_bintree_4_p_6_env_0_s env;

  (env).mercury__ra_list__foldl_bintree_4_p_6_env_0__TypeInfo_for_L_18 = TypeInfo_for_L_18;
  (env).mercury__ra_list__foldl_bintree_4_p_6_env_0__TypeInfo_for_A_19 = TypeInfo_for_A_19;
  (env).mercury__ra_list__foldl_bintree_4_p_6_env_0__P_5 = P_5;
  (env).mercury__ra_list__foldl_bintree_4_p_6_env_0__STATE_VARIABLE_A_12 = STATE_VARIABLE_A_12;
  (env).mercury__ra_list__foldl_bintree_4_p_6_env_0__cont = cont;
  (env).mercury__ra_list__foldl_bintree_4_p_6_env_0__cont_env_ptr = cont_env_ptr;
  if (((MR_tag((MR_Word) BinTree_6)) == (MR_Integer) 0))
  {
    MR_Box X_8 = (MR_hl_field(0, BinTree_6, (MR_Integer) 0));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(0, (env).mercury__ra_list__foldl_bintree_4_p_6_env_0__P_5, (MR_Integer) 1))));

    func_0(((MR_Box) ((env).mercury__ra_list__foldl_bintree_4_p_6_env_0__P_5)), X_8, STATE_VARIABLE_A_0_11, (env).mercury__ra_list__foldl_bintree_4_p_6_env_0__STATE_VARIABLE_A_12, (env).mercury__ra_list__foldl_bintree_4_p_6_env_0__cont, (env).mercury__ra_list__foldl_bintree_4_p_6_env_0__cont_env_ptr);
  }
  else
  {
    MR_Box X_17 = (MR_hl_field(1, BinTree_6, (MR_Integer) 0));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

    (env).mercury__ra_list__foldl_bintree_4_p_6_env_0__L_9 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 1))));
    (env).mercury__ra_list__foldl_bintree_4_p_6_env_0__R_10 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 2))));
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(0, (env).mercury__ra_list__foldl_bintree_4_p_6_env_0__P_5, (MR_Integer) 1))));
    func_1(((MR_Box) ((env).mercury__ra_list__foldl_bintree_4_p_6_env_0__P_5)), X_17, STATE_VARIABLE_A_0_11, &(env).mercury__ra_list__foldl_bintree_4_p_6_env_0__STATE_VARIABLE_A_14_14, mercury__ra_list__foldl_bintree_4_p_6_1, &env);
  }
}

MR_bool MR_CALL 
mercury__ra_list__foldl_4_p_5(
  MR_Word TypeInfo_for_L_17,
  MR_Word TypeInfo_for_A_18,
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
      MR_Word BinTree_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word RAList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_16_16;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      succeeded = mercury__ra_list__foldl_bintree_4_p_5(TypeInfo_for_L_17, TypeInfo_for_A_18, HeadVar__1_1, BinTree_11, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_16_16);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = RAList_12;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_16_16;
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
mercury__ra_list__foldl_bintree_4_p_5(
  MR_Word TypeInfo_for_L_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word P_5,
  MR_Word BinTree_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) BinTree_6)) == (MR_Integer) 0))
    {
      MR_Box X_8 = (MR_hl_field(0, BinTree_6, (MR_Integer) 0));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (P_5)), X_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
    }
    else
    {
      MR_Word L_9 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 1))));
      MR_Word R_10 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_14_14;
      MR_Box STATE_VARIABLE_A_15_15;
      MR_Box X_17 = (MR_hl_field(1, BinTree_6, (MR_Integer) 0));
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));
      MR_Word next_value_of_BinTree_6;
      MR_Box next_value_of_STATE_VARIABLE_A_0_11;

      succeeded = func_1(((MR_Box) (P_5)), X_17, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_14_14);
      if (succeeded)
      {
        succeeded = mercury__ra_list__foldl_bintree_4_p_5(TypeInfo_for_L_18, TypeInfo_for_A_19, P_5, L_9, STATE_VARIABLE_A_14_14, &STATE_VARIABLE_A_15_15);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_BinTree_6 = R_10;
          next_value_of_STATE_VARIABLE_A_0_11 = STATE_VARIABLE_A_15_15;
          BinTree_6 = next_value_of_BinTree_6;
          STATE_VARIABLE_A_0_11 = next_value_of_STATE_VARIABLE_A_0_11;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__ra_list__foldl_4_p_4(
  MR_Word TypeInfo_for_L_17,
  MR_Word TypeInfo_for_A_18,
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
      MR_Word BinTree_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word RAList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_16_16;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      succeeded = mercury__ra_list__foldl_bintree_4_p_4(TypeInfo_for_L_17, TypeInfo_for_A_18, HeadVar__1_1, BinTree_11, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_16_16);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = RAList_12;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_16_16;
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
mercury__ra_list__foldl_bintree_4_p_4(
  MR_Word TypeInfo_for_L_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word P_5,
  MR_Word BinTree_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) BinTree_6)) == (MR_Integer) 0))
    {
      MR_Box X_8 = (MR_hl_field(0, BinTree_6, (MR_Integer) 0));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (P_5)), X_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
    }
    else
    {
      MR_Word L_9 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 1))));
      MR_Word R_10 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_14_14;
      MR_Box STATE_VARIABLE_A_15_15;
      MR_Box X_17 = (MR_hl_field(1, BinTree_6, (MR_Integer) 0));
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));
      MR_Word next_value_of_BinTree_6;
      MR_Box next_value_of_STATE_VARIABLE_A_0_11;

      succeeded = func_1(((MR_Box) (P_5)), X_17, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_14_14);
      if (succeeded)
      {
        succeeded = mercury__ra_list__foldl_bintree_4_p_4(TypeInfo_for_L_18, TypeInfo_for_A_19, P_5, L_9, STATE_VARIABLE_A_14_14, &STATE_VARIABLE_A_15_15);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_BinTree_6 = R_10;
          next_value_of_STATE_VARIABLE_A_0_11 = STATE_VARIABLE_A_15_15;
          BinTree_6 = next_value_of_BinTree_6;
          STATE_VARIABLE_A_0_11 = next_value_of_STATE_VARIABLE_A_0_11;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__ra_list__foldl_4_p_3(
  MR_Word TypeInfo_for_L_17,
  MR_Word TypeInfo_for_A_18,
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
      MR_Word BinTree_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word RAList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_16_16;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      succeeded = mercury__ra_list__foldl_bintree_4_p_3(TypeInfo_for_L_17, TypeInfo_for_A_18, HeadVar__1_1, BinTree_11, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_16_16);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = RAList_12;
        next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_16_16;
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
mercury__ra_list__foldl_bintree_4_p_3(
  MR_Word TypeInfo_for_L_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word P_5,
  MR_Word BinTree_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) BinTree_6)) == (MR_Integer) 0))
    {
      MR_Box X_8 = (MR_hl_field(0, BinTree_6, (MR_Integer) 0));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (P_5)), X_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
    }
    else
    {
      MR_Word L_9 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 1))));
      MR_Word R_10 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_14_14;
      MR_Box STATE_VARIABLE_A_15_15;
      MR_Box X_17 = (MR_hl_field(1, BinTree_6, (MR_Integer) 0));
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));
      MR_Word next_value_of_BinTree_6;
      MR_Box next_value_of_STATE_VARIABLE_A_0_11;

      succeeded = func_1(((MR_Box) (P_5)), X_17, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_14_14);
      if (succeeded)
      {
        succeeded = mercury__ra_list__foldl_bintree_4_p_3(TypeInfo_for_L_18, TypeInfo_for_A_19, P_5, L_9, STATE_VARIABLE_A_14_14, &STATE_VARIABLE_A_15_15);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_BinTree_6 = R_10;
          next_value_of_STATE_VARIABLE_A_0_11 = STATE_VARIABLE_A_15_15;
          BinTree_6 = next_value_of_BinTree_6;
          STATE_VARIABLE_A_0_11 = next_value_of_STATE_VARIABLE_A_0_11;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__ra_list__foldl_4_p_2(
  MR_Word TypeInfo_for_L_17,
  MR_Word TypeInfo_for_A_18,
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
      MR_Word BinTree_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word RAList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_16_16;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      mercury__ra_list__foldl_bintree_4_p_2(TypeInfo_for_L_17, TypeInfo_for_A_18, HeadVar__1_1, BinTree_11, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = RAList_12;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_16_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__ra_list__foldl_bintree_4_p_2(
  MR_Word TypeInfo_for_L_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word P_5,
  MR_Word BinTree_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) BinTree_6)) == (MR_Integer) 0))
    {
      MR_Box X_8 = (MR_hl_field(0, BinTree_6, (MR_Integer) 0));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));

      func_0(((MR_Box) (P_5)), X_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
    }
    else
    {
      MR_Word L_9 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 1))));
      MR_Word R_10 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_14_14;
      MR_Box STATE_VARIABLE_A_15_15;
      MR_Box X_17 = (MR_hl_field(1, BinTree_6, (MR_Integer) 0));
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));
      MR_Word next_value_of_BinTree_6;
      MR_Box next_value_of_STATE_VARIABLE_A_0_11;

      func_1(((MR_Box) (P_5)), X_17, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_14_14);
      mercury__ra_list__foldl_bintree_4_p_2(TypeInfo_for_L_18, TypeInfo_for_A_19, P_5, L_9, STATE_VARIABLE_A_14_14, &STATE_VARIABLE_A_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_BinTree_6 = R_10;
      next_value_of_STATE_VARIABLE_A_0_11 = STATE_VARIABLE_A_15_15;
      BinTree_6 = next_value_of_BinTree_6;
      STATE_VARIABLE_A_0_11 = next_value_of_STATE_VARIABLE_A_0_11;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__ra_list__foldl_4_p_1(
  MR_Word TypeInfo_for_L_17,
  MR_Word TypeInfo_for_A_18,
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
      MR_Word BinTree_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word RAList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_16_16;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      mercury__ra_list__foldl_bintree_4_p_1(TypeInfo_for_L_17, TypeInfo_for_A_18, HeadVar__1_1, BinTree_11, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = RAList_12;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_16_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__ra_list__foldl_bintree_4_p_1(
  MR_Word TypeInfo_for_L_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word P_5,
  MR_Word BinTree_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) BinTree_6)) == (MR_Integer) 0))
    {
      MR_Box X_8 = (MR_hl_field(0, BinTree_6, (MR_Integer) 0));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));

      func_0(((MR_Box) (P_5)), X_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
    }
    else
    {
      MR_Word L_9 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 1))));
      MR_Word R_10 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_14_14;
      MR_Box STATE_VARIABLE_A_15_15;
      MR_Box X_17 = (MR_hl_field(1, BinTree_6, (MR_Integer) 0));
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));
      MR_Word next_value_of_BinTree_6;
      MR_Box next_value_of_STATE_VARIABLE_A_0_11;

      func_1(((MR_Box) (P_5)), X_17, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_14_14);
      mercury__ra_list__foldl_bintree_4_p_1(TypeInfo_for_L_18, TypeInfo_for_A_19, P_5, L_9, STATE_VARIABLE_A_14_14, &STATE_VARIABLE_A_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_BinTree_6 = R_10;
      next_value_of_STATE_VARIABLE_A_0_11 = STATE_VARIABLE_A_15_15;
      BinTree_6 = next_value_of_BinTree_6;
      STATE_VARIABLE_A_0_11 = next_value_of_STATE_VARIABLE_A_0_11;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__ra_list__foldl_4_p_0(
  MR_Word TypeInfo_for_L_17,
  MR_Word TypeInfo_for_A_18,
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
      MR_Word BinTree_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word RAList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_16_16;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      mercury__ra_list__foldl_bintree_4_p_0(TypeInfo_for_L_17, TypeInfo_for_A_18, HeadVar__1_1, BinTree_11, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = RAList_12;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_16_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__ra_list__foldl_bintree_4_p_0(
  MR_Word TypeInfo_for_L_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word P_5,
  MR_Word BinTree_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) BinTree_6)) == (MR_Integer) 0))
    {
      MR_Box X_8 = (MR_hl_field(0, BinTree_6, (MR_Integer) 0));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));

      func_0(((MR_Box) (P_5)), X_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
    }
    else
    {
      MR_Word L_9 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 1))));
      MR_Word R_10 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_14_14;
      MR_Box STATE_VARIABLE_A_15_15;
      MR_Box X_17 = (MR_hl_field(1, BinTree_6, (MR_Integer) 0));
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));
      MR_Word next_value_of_BinTree_6;
      MR_Box next_value_of_STATE_VARIABLE_A_0_11;

      func_1(((MR_Box) (P_5)), X_17, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_14_14);
      mercury__ra_list__foldl_bintree_4_p_0(TypeInfo_for_L_18, TypeInfo_for_A_19, P_5, L_9, STATE_VARIABLE_A_14_14, &STATE_VARIABLE_A_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_BinTree_6 = R_10;
      next_value_of_STATE_VARIABLE_A_0_11 = STATE_VARIABLE_A_15_15;
      BinTree_6 = next_value_of_BinTree_6;
      STATE_VARIABLE_A_0_11 = next_value_of_STATE_VARIABLE_A_0_11;
      continue;
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__ra_list__foldl_3_f_0(
  MR_Word TypeInfo_for_L_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_3)
{
  while (MR_TRUE)
  {
    MR_Box HeadVar__4_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = STATE_VARIABLE_A_0_3;
    else
    {
      MR_Word BinTree_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word RAList_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_15_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_A_0_3;

      STATE_VARIABLE_A_15_15 = mercury__ra_list__foldl_bintree_3_f_0(TypeInfo_for_L_16, TypeInfo_for_A_17, HeadVar__1_1, BinTree_10, STATE_VARIABLE_A_0_3);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = RAList_11;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      continue;
    }
    return HeadVar__4_4;
    break;
  }
}

MR_Box MR_CALL 
mercury__ra_list__foldl_bintree_3_f_0(
  MR_Word TypeInfo_for_L_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word F_5,
  MR_Word BinTree_6,
  MR_Box STATE_VARIABLE_A_0_11)
{
  while (MR_TRUE)
  {
    MR_Box STATE_VARIABLE_A_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) BinTree_6)) == (MR_Integer) 0))
    {
      MR_Box X_8 = (MR_hl_field(0, BinTree_6, (MR_Integer) 0));
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, F_5, (MR_Integer) 1))));

      STATE_VARIABLE_A_12 = func_0(((MR_Box) (F_5)), X_8, STATE_VARIABLE_A_0_11);
    }
    else
    {
      MR_Word L_9 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 1))));
      MR_Word R_10 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_14_14;
      MR_Box STATE_VARIABLE_A_15_15;
      MR_Box X_17 = (MR_hl_field(1, BinTree_6, (MR_Integer) 0));
      MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, F_5, (MR_Integer) 1))));
      MR_Word next_value_of_BinTree_6;
      MR_Box next_value_of_STATE_VARIABLE_A_0_11;

      STATE_VARIABLE_A_14_14 = func_1(((MR_Box) (F_5)), X_17, STATE_VARIABLE_A_0_11);
      STATE_VARIABLE_A_15_15 = mercury__ra_list__foldl_bintree_3_f_0(TypeInfo_for_L_18, TypeInfo_for_A_19, F_5, L_9, STATE_VARIABLE_A_14_14);
      // direct tailcall eliminated
      ;
      next_value_of_BinTree_6 = R_10;
      next_value_of_STATE_VARIABLE_A_0_11 = STATE_VARIABLE_A_15_15;
      BinTree_6 = next_value_of_BinTree_6;
      STATE_VARIABLE_A_0_11 = next_value_of_STATE_VARIABLE_A_0_11;
      continue;
    }
    return STATE_VARIABLE_A_12;
    break;
  }
}

MR_bool MR_CALL 
mercury__ra_list__map_3_p_5(
  MR_Word TypeInfo_for_X_11,
  MR_Word TypeInfo_for_Y_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
    else
    {
      MR_Integer Size_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BinTree0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word RAList0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      MR_Word BinTree_9;
      MR_Word RAList_10;
      MR_Integer Var_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
        BinTree_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
        RAList_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
        succeeded = (Size_6 == Var_13);
        if (succeeded)
        {
          succeeded = mercury__ra_list__map_bintree_3_p_5(TypeInfo_for_X_11, TypeInfo_for_Y_12, HeadVar__1_1, BinTree0_7, BinTree_9);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__2_2 = RAList0_8;
            next_value_of_HeadVar__3_3 = RAList_10;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__ra_list__map_bintree_3_p_5(
  MR_Word TypeInfo_for_X_15,
  MR_Word TypeInfo_for_Y_16,
  MR_Word P_4,
  MR_Word BinTree0_5,
  MR_Word BinTree_6)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) BinTree0_5)) == (MR_Integer) 0))
  {
    MR_Box X0_7 = (MR_hl_field(0, BinTree0_5, (MR_Integer) 0));
    MR_Box X_8;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

    succeeded = ((MR_tag((MR_Word) BinTree_6)) == (MR_Integer) 0);
    if (succeeded)
    {
      X_8 = (MR_hl_field(0, BinTree_6, (MR_Integer) 0));
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, P_4, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_4)), X0_7, X_8);
    }
  }
  else
  {
    MR_Word L0_9 = ((MR_Word) ((MR_hl_field(1, BinTree0_5, (MR_Integer) 1))));
    MR_Word R0_10 = ((MR_Word) ((MR_hl_field(1, BinTree0_5, (MR_Integer) 2))));
    MR_Word L_11;
    MR_Word R_12;
    MR_Box X0_13 = (MR_hl_field(1, BinTree0_5, (MR_Integer) 0));
    MR_Box X_14;
    MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box);

    succeeded = ((MR_tag((MR_Word) BinTree_6)) == (MR_Integer) 1);
    if (succeeded)
    {
      X_14 = (MR_hl_field(1, BinTree_6, (MR_Integer) 0));
      L_11 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 1))));
      R_12 = ((MR_Word) ((MR_hl_field(1, BinTree_6, (MR_Integer) 2))));
      succeeded = mercury__ra_list__map_bintree_3_p_5(TypeInfo_for_X_15, TypeInfo_for_Y_16, P_4, L0_9, L_11);
      if (succeeded)
      {
        succeeded = mercury__ra_list__map_bintree_3_p_5(TypeInfo_for_X_15, TypeInfo_for_Y_16, P_4, R0_10, R_12);
        if (succeeded)
        {
          func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, P_4, (MR_Integer) 1))));
          succeeded = func_1(((MR_Box) (P_4)), X0_13, X_14);
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
mercury__ra_list__map_3_p_4_2(
  void * env_ptr_arg)
{
  struct mercury__ra_list__map_3_p_4_env_0_s * env_ptr = (struct mercury__ra_list__map_3_p_4_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *((env_ptr)->mercury__ra_list__map_3_p_4_env_0__HeadVar__3_3) = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((env_ptr)->mercury__ra_list__map_3_p_4_env_0__Size_6));
    MR_hl_field(1, base, 1) = ((MR_Box) ((env_ptr)->mercury__ra_list__map_3_p_4_env_0__BinTree_9));
    MR_hl_field(1, base, 2) = ((MR_Box) ((env_ptr)->mercury__ra_list__map_3_p_4_env_0__RAList_10));
  }
  ((env_ptr)->mercury__ra_list__map_3_p_4_env_0__cont)((env_ptr)->mercury__ra_list__map_3_p_4_env_0__cont_env_ptr);
}

static void MR_CALL 
mercury__ra_list__map_3_p_4_1(
  void * env_ptr_arg)
{
  struct mercury__ra_list__map_3_p_4_env_0_s * env_ptr = (struct mercury__ra_list__map_3_p_4_env_0_s *) (env_ptr_arg);

  mercury__ra_list__map_3_p_4((env_ptr)->mercury__ra_list__map_3_p_4_env_0__TypeInfo_for_X_11, (env_ptr)->mercury__ra_list__map_3_p_4_env_0__TypeInfo_for_Y_12, (env_ptr)->mercury__ra_list__map_3_p_4_env_0__HeadVar__1_1, (env_ptr)->mercury__ra_list__map_3_p_4_env_0__RAList0_8, &(env_ptr)->mercury__ra_list__map_3_p_4_env_0__RAList_10, mercury__ra_list__map_3_p_4_2, env_ptr);
}

void MR_CALL 
mercury__ra_list__map_3_p_4(
  MR_Word TypeInfo_for_X_11,
  MR_Word TypeInfo_for_Y_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__ra_list__map_3_p_4_env_0_s env;

  (env).mercury__ra_list__map_3_p_4_env_0__TypeInfo_for_X_11 = TypeInfo_for_X_11;
  (env).mercury__ra_list__map_3_p_4_env_0__TypeInfo_for_Y_12 = TypeInfo_for_Y_12;
  (env).mercury__ra_list__map_3_p_4_env_0__HeadVar__1_1 = HeadVar__1_1;
  (env).mercury__ra_list__map_3_p_4_env_0__HeadVar__3_3 = HeadVar__3_3;
  (env).mercury__ra_list__map_3_p_4_env_0__cont = cont;
  (env).mercury__ra_list__map_3_p_4_env_0__cont_env_ptr = cont_env_ptr;
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *((env).mercury__ra_list__map_3_p_4_env_0__HeadVar__3_3) = (MR_Word) ((MR_Unsigned) 0U);
    ((env).mercury__ra_list__map_3_p_4_env_0__cont)((env).mercury__ra_list__map_3_p_4_env_0__cont_env_ptr);
  }
  else
  {
    MR_Word BinTree0_7;

    (env).mercury__ra_list__map_3_p_4_env_0__Size_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    BinTree0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    (env).mercury__ra_list__map_3_p_4_env_0__RAList0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    mercury__ra_list__map_bintree_3_p_4((env).mercury__ra_list__map_3_p_4_env_0__TypeInfo_for_X_11, (env).mercury__ra_list__map_3_p_4_env_0__TypeInfo_for_Y_12, (env).mercury__ra_list__map_3_p_4_env_0__HeadVar__1_1, BinTree0_7, &(env).mercury__ra_list__map_3_p_4_env_0__BinTree_9, mercury__ra_list__map_3_p_4_1, &env);
  }
}

static void MR_CALL 
mercury__ra_list__map_bintree_3_p_4_1(
  void * env_ptr_arg)
{
  struct mercury__ra_list__map_bintree_3_p_4_env_0_s * env_ptr = (struct mercury__ra_list__map_bintree_3_p_4_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *((env_ptr)->mercury__ra_list__map_bintree_3_p_4_env_0__BinTree_6) = base;
    MR_hl_field(0, base, 0) = (env_ptr)->mercury__ra_list__map_bintree_3_p_4_env_0__X_8;
  }
  ((env_ptr)->mercury__ra_list__map_bintree_3_p_4_env_0__cont)((env_ptr)->mercury__ra_list__map_bintree_3_p_4_env_0__cont_env_ptr);
}

static void MR_CALL 
mercury__ra_list__map_bintree_3_p_4_4(
  void * env_ptr_arg)
{
  struct mercury__ra_list__map_bintree_3_p_4_env_0_s * env_ptr = (struct mercury__ra_list__map_bintree_3_p_4_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *((env_ptr)->mercury__ra_list__map_bintree_3_p_4_env_0__BinTree_6) = base;
    MR_hl_field(1, base, 0) = (env_ptr)->mercury__ra_list__map_bintree_3_p_4_env_0__X_14;
    MR_hl_field(1, base, 1) = ((MR_Box) ((env_ptr)->mercury__ra_list__map_bintree_3_p_4_env_0__L_11));
    MR_hl_field(1, base, 2) = ((MR_Box) ((env_ptr)->mercury__ra_list__map_bintree_3_p_4_env_0__R_12));
  }
  ((env_ptr)->mercury__ra_list__map_bintree_3_p_4_env_0__cont)((env_ptr)->mercury__ra_list__map_bintree_3_p_4_env_0__cont_env_ptr);
}

static void MR_CALL 
mercury__ra_list__map_bintree_3_p_4_3(
  void * env_ptr_arg)
{
  struct mercury__ra_list__map_bintree_3_p_4_env_0_s * env_ptr = (struct mercury__ra_list__map_bintree_3_p_4_env_0_s *) (env_ptr_arg);

  mercury__ra_list__map_bintree_3_p_4((env_ptr)->mercury__ra_list__map_bintree_3_p_4_env_0__TypeInfo_for_X_15, (env_ptr)->mercury__ra_list__map_bintree_3_p_4_env_0__TypeInfo_for_Y_16, (env_ptr)->mercury__ra_list__map_bintree_3_p_4_env_0__P_4, (env_ptr)->mercury__ra_list__map_bintree_3_p_4_env_0__R0_10, &(env_ptr)->mercury__ra_list__map_bintree_3_p_4_env_0__R_12, mercury__ra_list__map_bintree_3_p_4_4, env_ptr);
}

static void MR_CALL 
mercury__ra_list__map_bintree_3_p_4_2(
  void * env_ptr_arg)
{
  struct mercury__ra_list__map_bintree_3_p_4_env_0_s * env_ptr = (struct mercury__ra_list__map_bintree_3_p_4_env_0_s *) (env_ptr_arg);

  mercury__ra_list__map_bintree_3_p_4((env_ptr)->mercury__ra_list__map_bintree_3_p_4_env_0__TypeInfo_for_X_15, (env_ptr)->mercury__ra_list__map_bintree_3_p_4_env_0__TypeInfo_for_Y_16, (env_ptr)->mercury__ra_list__map_bintree_3_p_4_env_0__P_4, (env_ptr)->mercury__ra_list__map_bintree_3_p_4_env_0__L0_9, &(env_ptr)->mercury__ra_list__map_bintree_3_p_4_env_0__L_11, mercury__ra_list__map_bintree_3_p_4_3, env_ptr);
}

void MR_CALL 
mercury__ra_list__map_bintree_3_p_4(
  MR_Word TypeInfo_for_X_15,
  MR_Word TypeInfo_for_Y_16,
  MR_Word P_4,
  MR_Word BinTree0_5,
  MR_Word * BinTree_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__ra_list__map_bintree_3_p_4_env_0_s env;

  (env).mercury__ra_list__map_bintree_3_p_4_env_0__TypeInfo_for_X_15 = TypeInfo_for_X_15;
  (env).mercury__ra_list__map_bintree_3_p_4_env_0__TypeInfo_for_Y_16 = TypeInfo_for_Y_16;
  (env).mercury__ra_list__map_bintree_3_p_4_env_0__P_4 = P_4;
  (env).mercury__ra_list__map_bintree_3_p_4_env_0__BinTree_6 = BinTree_6;
  (env).mercury__ra_list__map_bintree_3_p_4_env_0__cont = cont;
  (env).mercury__ra_list__map_bintree_3_p_4_env_0__cont_env_ptr = cont_env_ptr;
  if (((MR_tag((MR_Word) BinTree0_5)) == (MR_Integer) 0))
  {
    MR_Box X0_7 = (MR_hl_field(0, BinTree0_5, (MR_Integer) 0));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(0, (env).mercury__ra_list__map_bintree_3_p_4_env_0__P_4, (MR_Integer) 1))));

    func_0(((MR_Box) ((env).mercury__ra_list__map_bintree_3_p_4_env_0__P_4)), X0_7, &(env).mercury__ra_list__map_bintree_3_p_4_env_0__X_8, mercury__ra_list__map_bintree_3_p_4_1, &env);
  }
  else
  {
    MR_Box X0_13 = (MR_hl_field(1, BinTree0_5, (MR_Integer) 0));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

    (env).mercury__ra_list__map_bintree_3_p_4_env_0__L0_9 = ((MR_Word) ((MR_hl_field(1, BinTree0_5, (MR_Integer) 1))));
    (env).mercury__ra_list__map_bintree_3_p_4_env_0__R0_10 = ((MR_Word) ((MR_hl_field(1, BinTree0_5, (MR_Integer) 2))));
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(0, (env).mercury__ra_list__map_bintree_3_p_4_env_0__P_4, (MR_Integer) 1))));
    func_1(((MR_Box) ((env).mercury__ra_list__map_bintree_3_p_4_env_0__P_4)), X0_13, &(env).mercury__ra_list__map_bintree_3_p_4_env_0__X_14, mercury__ra_list__map_bintree_3_p_4_2, &env);
  }
}

static void MR_CALL 
mercury__ra_list__map_3_p_3_2(
  void * env_ptr_arg)
{
  struct mercury__ra_list__map_3_p_3_env_0_s * env_ptr = (struct mercury__ra_list__map_3_p_3_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *((env_ptr)->mercury__ra_list__map_3_p_3_env_0__HeadVar__3_3) = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((env_ptr)->mercury__ra_list__map_3_p_3_env_0__Size_6));
    MR_hl_field(1, base, 1) = ((MR_Box) ((env_ptr)->mercury__ra_list__map_3_p_3_env_0__BinTree_9));
    MR_hl_field(1, base, 2) = ((MR_Box) ((env_ptr)->mercury__ra_list__map_3_p_3_env_0__RAList_10));
  }
  ((env_ptr)->mercury__ra_list__map_3_p_3_env_0__cont)((env_ptr)->mercury__ra_list__map_3_p_3_env_0__cont_env_ptr);
}

static void MR_CALL 
mercury__ra_list__map_3_p_3_1(
  void * env_ptr_arg)
{
  struct mercury__ra_list__map_3_p_3_env_0_s * env_ptr = (struct mercury__ra_list__map_3_p_3_env_0_s *) (env_ptr_arg);

  mercury__ra_list__map_3_p_3((env_ptr)->mercury__ra_list__map_3_p_3_env_0__TypeInfo_for_X_11, (env_ptr)->mercury__ra_list__map_3_p_3_env_0__TypeInfo_for_Y_12, (env_ptr)->mercury__ra_list__map_3_p_3_env_0__HeadVar__1_1, (env_ptr)->mercury__ra_list__map_3_p_3_env_0__RAList0_8, &(env_ptr)->mercury__ra_list__map_3_p_3_env_0__RAList_10, mercury__ra_list__map_3_p_3_2, env_ptr);
}

void MR_CALL 
mercury__ra_list__map_3_p_3(
  MR_Word TypeInfo_for_X_11,
  MR_Word TypeInfo_for_Y_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__ra_list__map_3_p_3_env_0_s env;

  (env).mercury__ra_list__map_3_p_3_env_0__TypeInfo_for_X_11 = TypeInfo_for_X_11;
  (env).mercury__ra_list__map_3_p_3_env_0__TypeInfo_for_Y_12 = TypeInfo_for_Y_12;
  (env).mercury__ra_list__map_3_p_3_env_0__HeadVar__1_1 = HeadVar__1_1;
  (env).mercury__ra_list__map_3_p_3_env_0__HeadVar__3_3 = HeadVar__3_3;
  (env).mercury__ra_list__map_3_p_3_env_0__cont = cont;
  (env).mercury__ra_list__map_3_p_3_env_0__cont_env_ptr = cont_env_ptr;
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *((env).mercury__ra_list__map_3_p_3_env_0__HeadVar__3_3) = (MR_Word) ((MR_Unsigned) 0U);
    ((env).mercury__ra_list__map_3_p_3_env_0__cont)((env).mercury__ra_list__map_3_p_3_env_0__cont_env_ptr);
  }
  else
  {
    MR_Word BinTree0_7;

    (env).mercury__ra_list__map_3_p_3_env_0__Size_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    BinTree0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    (env).mercury__ra_list__map_3_p_3_env_0__RAList0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    mercury__ra_list__map_bintree_3_p_3((env).mercury__ra_list__map_3_p_3_env_0__TypeInfo_for_X_11, (env).mercury__ra_list__map_3_p_3_env_0__TypeInfo_for_Y_12, (env).mercury__ra_list__map_3_p_3_env_0__HeadVar__1_1, BinTree0_7, &(env).mercury__ra_list__map_3_p_3_env_0__BinTree_9, mercury__ra_list__map_3_p_3_1, &env);
  }
}

static void MR_CALL 
mercury__ra_list__map_bintree_3_p_3_1(
  void * env_ptr_arg)
{
  struct mercury__ra_list__map_bintree_3_p_3_env_0_s * env_ptr = (struct mercury__ra_list__map_bintree_3_p_3_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *((env_ptr)->mercury__ra_list__map_bintree_3_p_3_env_0__BinTree_6) = base;
    MR_hl_field(0, base, 0) = (env_ptr)->mercury__ra_list__map_bintree_3_p_3_env_0__X_8;
  }
  ((env_ptr)->mercury__ra_list__map_bintree_3_p_3_env_0__cont)((env_ptr)->mercury__ra_list__map_bintree_3_p_3_env_0__cont_env_ptr);
}

static void MR_CALL 
mercury__ra_list__map_bintree_3_p_3_4(
  void * env_ptr_arg)
{
  struct mercury__ra_list__map_bintree_3_p_3_env_0_s * env_ptr = (struct mercury__ra_list__map_bintree_3_p_3_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *((env_ptr)->mercury__ra_list__map_bintree_3_p_3_env_0__BinTree_6) = base;
    MR_hl_field(1, base, 0) = (env_ptr)->mercury__ra_list__map_bintree_3_p_3_env_0__X_14;
    MR_hl_field(1, base, 1) = ((MR_Box) ((env_ptr)->mercury__ra_list__map_bintree_3_p_3_env_0__L_11));
    MR_hl_field(1, base, 2) = ((MR_Box) ((env_ptr)->mercury__ra_list__map_bintree_3_p_3_env_0__R_12));
  }
  ((env_ptr)->mercury__ra_list__map_bintree_3_p_3_env_0__cont)((env_ptr)->mercury__ra_list__map_bintree_3_p_3_env_0__cont_env_ptr);
}

static void MR_CALL 
mercury__ra_list__map_bintree_3_p_3_3(
  void * env_ptr_arg)
{
  struct mercury__ra_list__map_bintree_3_p_3_env_0_s * env_ptr = (struct mercury__ra_list__map_bintree_3_p_3_env_0_s *) (env_ptr_arg);

  mercury__ra_list__map_bintree_3_p_3((env_ptr)->mercury__ra_list__map_bintree_3_p_3_env_0__TypeInfo_for_X_15, (env_ptr)->mercury__ra_list__map_bintree_3_p_3_env_0__TypeInfo_for_Y_16, (env_ptr)->mercury__ra_list__map_bintree_3_p_3_env_0__P_4, (env_ptr)->mercury__ra_list__map_bintree_3_p_3_env_0__R0_10, &(env_ptr)->mercury__ra_list__map_bintree_3_p_3_env_0__R_12, mercury__ra_list__map_bintree_3_p_3_4, env_ptr);
}

static void MR_CALL 
mercury__ra_list__map_bintree_3_p_3_2(
  void * env_ptr_arg)
{
  struct mercury__ra_list__map_bintree_3_p_3_env_0_s * env_ptr = (struct mercury__ra_list__map_bintree_3_p_3_env_0_s *) (env_ptr_arg);

  mercury__ra_list__map_bintree_3_p_3((env_ptr)->mercury__ra_list__map_bintree_3_p_3_env_0__TypeInfo_for_X_15, (env_ptr)->mercury__ra_list__map_bintree_3_p_3_env_0__TypeInfo_for_Y_16, (env_ptr)->mercury__ra_list__map_bintree_3_p_3_env_0__P_4, (env_ptr)->mercury__ra_list__map_bintree_3_p_3_env_0__L0_9, &(env_ptr)->mercury__ra_list__map_bintree_3_p_3_env_0__L_11, mercury__ra_list__map_bintree_3_p_3_3, env_ptr);
}

void MR_CALL 
mercury__ra_list__map_bintree_3_p_3(
  MR_Word TypeInfo_for_X_15,
  MR_Word TypeInfo_for_Y_16,
  MR_Word P_4,
  MR_Word BinTree0_5,
  MR_Word * BinTree_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__ra_list__map_bintree_3_p_3_env_0_s env;

  (env).mercury__ra_list__map_bintree_3_p_3_env_0__TypeInfo_for_X_15 = TypeInfo_for_X_15;
  (env).mercury__ra_list__map_bintree_3_p_3_env_0__TypeInfo_for_Y_16 = TypeInfo_for_Y_16;
  (env).mercury__ra_list__map_bintree_3_p_3_env_0__P_4 = P_4;
  (env).mercury__ra_list__map_bintree_3_p_3_env_0__BinTree_6 = BinTree_6;
  (env).mercury__ra_list__map_bintree_3_p_3_env_0__cont = cont;
  (env).mercury__ra_list__map_bintree_3_p_3_env_0__cont_env_ptr = cont_env_ptr;
  if (((MR_tag((MR_Word) BinTree0_5)) == (MR_Integer) 0))
  {
    MR_Box X0_7 = (MR_hl_field(0, BinTree0_5, (MR_Integer) 0));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(0, (env).mercury__ra_list__map_bintree_3_p_3_env_0__P_4, (MR_Integer) 1))));

    func_0(((MR_Box) ((env).mercury__ra_list__map_bintree_3_p_3_env_0__P_4)), X0_7, &(env).mercury__ra_list__map_bintree_3_p_3_env_0__X_8, mercury__ra_list__map_bintree_3_p_3_1, &env);
  }
  else
  {
    MR_Box X0_13 = (MR_hl_field(1, BinTree0_5, (MR_Integer) 0));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

    (env).mercury__ra_list__map_bintree_3_p_3_env_0__L0_9 = ((MR_Word) ((MR_hl_field(1, BinTree0_5, (MR_Integer) 1))));
    (env).mercury__ra_list__map_bintree_3_p_3_env_0__R0_10 = ((MR_Word) ((MR_hl_field(1, BinTree0_5, (MR_Integer) 2))));
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(0, (env).mercury__ra_list__map_bintree_3_p_3_env_0__P_4, (MR_Integer) 1))));
    func_1(((MR_Box) ((env).mercury__ra_list__map_bintree_3_p_3_env_0__P_4)), X0_13, &(env).mercury__ra_list__map_bintree_3_p_3_env_0__X_14, mercury__ra_list__map_bintree_3_p_3_2, &env);
  }
}

MR_bool MR_CALL 
mercury__ra_list__map_3_p_2(
  MR_Word TypeInfo_for_X_11,
  MR_Word TypeInfo_for_Y_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Integer Size_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word BinTree0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word RAList0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word BinTree_9;
    MR_Word * AddrRAList_13;

    succeeded = mercury__ra_list__map_bintree_3_p_2(TypeInfo_for_X_11, TypeInfo_for_Y_12, HeadVar__1_1, BinTree0_7, &BinTree_9);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Size_6));
        MR_hl_field(1, base, 1) = ((MR_Box) (BinTree_9));
        MR_hl_field(1, base, 2) = NULL;
      }
      AddrRAList_13 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, (MR_Integer) 2)));
      succeeded = mercury__ra_list__LCMC__pred__map__1_3_p_2(TypeInfo_for_X_11, TypeInfo_for_Y_12, HeadVar__1_1, RAList0_8, AddrRAList_13);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ra_list__LCMC__pred__map__1_3_p_2(
  MR_Word TypeInfo_for_X_11,
  MR_Word TypeInfo_for_Y_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__3_14 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer Size_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BinTree0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word RAList0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      MR_Word BinTree_9;
      MR_Word HeadVar__3_3;
      MR_Word * AddrRAList_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_14;

      succeeded = mercury__ra_list__map_bintree_3_p_2(TypeInfo_for_X_11, TypeInfo_for_Y_12, HeadVar__1_1, BinTree0_7, &BinTree_9);
      if (succeeded)
      {
        {
          HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Size_6));
          MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (BinTree_9));
          MR_hl_field(1, HeadVar__3_3, 2) = NULL;
        }
        AddrRAList_13 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2)));
        *AddrOfHeadVar__3_14 = HeadVar__3_3;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = RAList0_8;
        next_value_of_AddrOfHeadVar__3_14 = AddrRAList_13;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        AddrOfHeadVar__3_14 = next_value_of_AddrOfHeadVar__3_14;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__ra_list__LCMC__pred__map_bintree__1_3_p_2(
  MR_Word TypeInfo_for_X_15,
  MR_Word TypeInfo_for_Y_16,
  MR_Word P_4,
  MR_Word BinTree0_5,
  MR_Word * AddrOfBinTree_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) BinTree0_5)) == (MR_Integer) 0))
    {
      MR_Word BinTree_6;
      MR_Box X0_7 = (MR_hl_field(0, BinTree0_5, (MR_Integer) 0));
      MR_Box X_8;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_4, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (P_4)), X0_7, &X_8);
      if (succeeded)
      {
        {
          BinTree_6 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, BinTree_6, 0) = X_8;
        }
        *AddrOfBinTree_18 = BinTree_6;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word L0_9 = ((MR_Word) ((MR_hl_field(1, BinTree0_5, (MR_Integer) 1))));
      MR_Word R0_10 = ((MR_Word) ((MR_hl_field(1, BinTree0_5, (MR_Integer) 2))));
      MR_Word L_11;
      MR_Box X0_13 = (MR_hl_field(1, BinTree0_5, (MR_Integer) 0));
      MR_Box X_14;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_4, (MR_Integer) 1))));
      MR_Word * AddrR_17;
      MR_Word BinTree_19;
      MR_Word next_value_of_BinTree0_5;
      MR_Word * next_value_of_AddrOfBinTree_18;

      succeeded = func_1(((MR_Box) (P_4)), X0_13, &X_14);
      if (succeeded)
      {
        succeeded = mercury__ra_list__map_bintree_3_p_2(TypeInfo_for_X_15, TypeInfo_for_Y_16, P_4, L0_9, &L_11);
        if (succeeded)
        {
          {
            BinTree_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, BinTree_19, 0) = X_14;
            MR_hl_field(1, BinTree_19, 1) = ((MR_Box) (L_11));
            MR_hl_field(1, BinTree_19, 2) = NULL;
          }
          AddrR_17 = (MR_Word *) (&(MR_hl_field(1, BinTree_19, (MR_Integer) 2)));
          *AddrOfBinTree_18 = BinTree_19;
          // direct tailcall eliminated
          ;
          next_value_of_BinTree0_5 = R0_10;
          next_value_of_AddrOfBinTree_18 = AddrR_17;
          BinTree0_5 = next_value_of_BinTree0_5;
          AddrOfBinTree_18 = next_value_of_AddrOfBinTree_18;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__ra_list__map_bintree_3_p_2(
  MR_Word TypeInfo_for_X_15,
  MR_Word TypeInfo_for_Y_16,
  MR_Word P_4,
  MR_Word BinTree0_5,
  MR_Word * BinTree_6)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) BinTree0_5)) == (MR_Integer) 0))
  {
    MR_Box X0_7 = (MR_hl_field(0, BinTree0_5, (MR_Integer) 0));
    MR_Box X_8;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_4, (MR_Integer) 1))));

    succeeded = func_0(((MR_Box) (P_4)), X0_7, &X_8);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *BinTree_6 = base;
        MR_hl_field(0, base, 0) = X_8;
      }
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_Word L0_9 = ((MR_Word) ((MR_hl_field(1, BinTree0_5, (MR_Integer) 1))));
    MR_Word R0_10 = ((MR_Word) ((MR_hl_field(1, BinTree0_5, (MR_Integer) 2))));
    MR_Word L_11;
    MR_Box X0_13 = (MR_hl_field(1, BinTree0_5, (MR_Integer) 0));
    MR_Box X_14;
    MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_4, (MR_Integer) 1))));
    MR_Word * AddrR_17;

    succeeded = func_1(((MR_Box) (P_4)), X0_13, &X_14);
    if (succeeded)
    {
      succeeded = mercury__ra_list__map_bintree_3_p_2(TypeInfo_for_X_15, TypeInfo_for_Y_16, P_4, L0_9, &L_11);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *BinTree_6 = base;
          MR_hl_field(1, base, 0) = X_14;
          MR_hl_field(1, base, 1) = ((MR_Box) (L_11));
          MR_hl_field(1, base, 2) = NULL;
        }
        AddrR_17 = (MR_Word *) (&(MR_hl_field(1, *BinTree_6, (MR_Integer) 2)));
        succeeded = mercury__ra_list__LCMC__pred__map_bintree__1_3_p_2(TypeInfo_for_X_15, TypeInfo_for_Y_16, P_4, R0_10, AddrR_17);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__ra_list__map_3_p_1(
  MR_Word TypeInfo_for_X_11,
  MR_Word TypeInfo_for_Y_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer Size_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word BinTree0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word RAList0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word BinTree_9;
    MR_Word * AddrRAList_13;

    mercury__ra_list__map_bintree_3_p_1(TypeInfo_for_X_11, TypeInfo_for_Y_12, HeadVar__1_1, BinTree0_7, &BinTree_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Size_6));
      MR_hl_field(1, base, 1) = ((MR_Box) (BinTree_9));
      MR_hl_field(1, base, 2) = NULL;
    }
    AddrRAList_13 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, (MR_Integer) 2)));
    mercury__ra_list__LCMC__pred__map__1_3_p_1(TypeInfo_for_X_11, TypeInfo_for_Y_12, HeadVar__1_1, RAList0_8, AddrRAList_13);
  }
}

void MR_CALL 
mercury__ra_list__LCMC__pred__map__1_3_p_1(
  MR_Word TypeInfo_for_X_11,
  MR_Word TypeInfo_for_Y_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_14 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer Size_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BinTree0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word RAList0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      MR_Word BinTree_9;
      MR_Word HeadVar__3_3;
      MR_Word * AddrRAList_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_14;

      mercury__ra_list__map_bintree_3_p_1(TypeInfo_for_X_11, TypeInfo_for_Y_12, HeadVar__1_1, BinTree0_7, &BinTree_9);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Size_6));
        MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (BinTree_9));
        MR_hl_field(1, HeadVar__3_3, 2) = NULL;
      }
      AddrRAList_13 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2)));
      *AddrOfHeadVar__3_14 = HeadVar__3_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = RAList0_8;
      next_value_of_AddrOfHeadVar__3_14 = AddrRAList_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_14 = next_value_of_AddrOfHeadVar__3_14;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__ra_list__LCMC__pred__map_bintree__1_3_p_1(
  MR_Word TypeInfo_for_X_15,
  MR_Word TypeInfo_for_Y_16,
  MR_Word P_4,
  MR_Word BinTree0_5,
  MR_Word * AddrOfBinTree_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) BinTree0_5)) == (MR_Integer) 0))
    {
      MR_Word BinTree_6;
      MR_Box X0_7 = (MR_hl_field(0, BinTree0_5, (MR_Integer) 0));
      MR_Box X_8;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_4, (MR_Integer) 1))));

      func_0(((MR_Box) (P_4)), X0_7, &X_8);
      {
        BinTree_6 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, BinTree_6, 0) = X_8;
      }
      *AddrOfBinTree_18 = BinTree_6;
    }
    else
    {
      MR_Word L0_9 = ((MR_Word) ((MR_hl_field(1, BinTree0_5, (MR_Integer) 1))));
      MR_Word R0_10 = ((MR_Word) ((MR_hl_field(1, BinTree0_5, (MR_Integer) 2))));
      MR_Word L_11;
      MR_Box X0_13 = (MR_hl_field(1, BinTree0_5, (MR_Integer) 0));
      MR_Box X_14;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_4, (MR_Integer) 1))));
      MR_Word * AddrR_17;
      MR_Word BinTree_19;
      MR_Word next_value_of_BinTree0_5;
      MR_Word * next_value_of_AddrOfBinTree_18;

      func_1(((MR_Box) (P_4)), X0_13, &X_14);
      mercury__ra_list__map_bintree_3_p_1(TypeInfo_for_X_15, TypeInfo_for_Y_16, P_4, L0_9, &L_11);
      {
        BinTree_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, BinTree_19, 0) = X_14;
        MR_hl_field(1, BinTree_19, 1) = ((MR_Box) (L_11));
        MR_hl_field(1, BinTree_19, 2) = NULL;
      }
      AddrR_17 = (MR_Word *) (&(MR_hl_field(1, BinTree_19, (MR_Integer) 2)));
      *AddrOfBinTree_18 = BinTree_19;
      // direct tailcall eliminated
      ;
      next_value_of_BinTree0_5 = R0_10;
      next_value_of_AddrOfBinTree_18 = AddrR_17;
      BinTree0_5 = next_value_of_BinTree0_5;
      AddrOfBinTree_18 = next_value_of_AddrOfBinTree_18;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__ra_list__map_bintree_3_p_1(
  MR_Word TypeInfo_for_X_15,
  MR_Word TypeInfo_for_Y_16,
  MR_Word P_4,
  MR_Word BinTree0_5,
  MR_Word * BinTree_6)
{
  if (((MR_tag((MR_Word) BinTree0_5)) == (MR_Integer) 0))
  {
    MR_Box X0_7 = (MR_hl_field(0, BinTree0_5, (MR_Integer) 0));
    MR_Box X_8;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_4, (MR_Integer) 1))));

    func_0(((MR_Box) (P_4)), X0_7, &X_8);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *BinTree_6 = base;
      MR_hl_field(0, base, 0) = X_8;
    }
  }
  else
  {
    MR_Word L0_9 = ((MR_Word) ((MR_hl_field(1, BinTree0_5, (MR_Integer) 1))));
    MR_Word R0_10 = ((MR_Word) ((MR_hl_field(1, BinTree0_5, (MR_Integer) 2))));
    MR_Word L_11;
    MR_Box X0_13 = (MR_hl_field(1, BinTree0_5, (MR_Integer) 0));
    MR_Box X_14;
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_4, (MR_Integer) 1))));
    MR_Word * AddrR_17;

    func_1(((MR_Box) (P_4)), X0_13, &X_14);
    mercury__ra_list__map_bintree_3_p_1(TypeInfo_for_X_15, TypeInfo_for_Y_16, P_4, L0_9, &L_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *BinTree_6 = base;
      MR_hl_field(1, base, 0) = X_14;
      MR_hl_field(1, base, 1) = ((MR_Box) (L_11));
      MR_hl_field(1, base, 2) = NULL;
    }
    AddrR_17 = (MR_Word *) (&(MR_hl_field(1, *BinTree_6, (MR_Integer) 2)));
    mercury__ra_list__LCMC__pred__map_bintree__1_3_p_1(TypeInfo_for_X_15, TypeInfo_for_Y_16, P_4, R0_10, AddrR_17);
  }
}

void MR_CALL 
mercury__ra_list__map_3_p_0(
  MR_Word TypeInfo_for_X_11,
  MR_Word TypeInfo_for_Y_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer Size_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word BinTree0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word RAList0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word BinTree_9;
    MR_Word * AddrRAList_13;

    mercury__ra_list__map_bintree_3_p_0(TypeInfo_for_X_11, TypeInfo_for_Y_12, HeadVar__1_1, BinTree0_7, &BinTree_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Size_6));
      MR_hl_field(1, base, 1) = ((MR_Box) (BinTree_9));
      MR_hl_field(1, base, 2) = NULL;
    }
    AddrRAList_13 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, (MR_Integer) 2)));
    mercury__ra_list__LCMC__pred__map__1_3_p_0(TypeInfo_for_X_11, TypeInfo_for_Y_12, HeadVar__1_1, RAList0_8, AddrRAList_13);
  }
}

void MR_CALL 
mercury__ra_list__LCMC__pred__map__1_3_p_0(
  MR_Word TypeInfo_for_X_11,
  MR_Word TypeInfo_for_Y_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_14 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer Size_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BinTree0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word RAList0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      MR_Word BinTree_9;
      MR_Word HeadVar__3_3;
      MR_Word * AddrRAList_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_14;

      mercury__ra_list__map_bintree_3_p_0(TypeInfo_for_X_11, TypeInfo_for_Y_12, HeadVar__1_1, BinTree0_7, &BinTree_9);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Size_6));
        MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (BinTree_9));
        MR_hl_field(1, HeadVar__3_3, 2) = NULL;
      }
      AddrRAList_13 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2)));
      *AddrOfHeadVar__3_14 = HeadVar__3_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = RAList0_8;
      next_value_of_AddrOfHeadVar__3_14 = AddrRAList_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_14 = next_value_of_AddrOfHeadVar__3_14;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__ra_list__LCMC__pred__map_bintree__1_3_p_0(
  MR_Word TypeInfo_for_X_15,
  MR_Word TypeInfo_for_Y_16,
  MR_Word P_4,
  MR_Word BinTree0_5,
  MR_Word * AddrOfBinTree_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) BinTree0_5)) == (MR_Integer) 0))
    {
      MR_Word BinTree_6;
      MR_Box X0_7 = (MR_hl_field(0, BinTree0_5, (MR_Integer) 0));
      MR_Box X_8;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_4, (MR_Integer) 1))));

      func_0(((MR_Box) (P_4)), X0_7, &X_8);
      {
        BinTree_6 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, BinTree_6, 0) = X_8;
      }
      *AddrOfBinTree_18 = BinTree_6;
    }
    else
    {
      MR_Word L0_9 = ((MR_Word) ((MR_hl_field(1, BinTree0_5, (MR_Integer) 1))));
      MR_Word R0_10 = ((MR_Word) ((MR_hl_field(1, BinTree0_5, (MR_Integer) 2))));
      MR_Word L_11;
      MR_Box X0_13 = (MR_hl_field(1, BinTree0_5, (MR_Integer) 0));
      MR_Box X_14;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_4, (MR_Integer) 1))));
      MR_Word * AddrR_17;
      MR_Word BinTree_19;
      MR_Word next_value_of_BinTree0_5;
      MR_Word * next_value_of_AddrOfBinTree_18;

      func_1(((MR_Box) (P_4)), X0_13, &X_14);
      mercury__ra_list__map_bintree_3_p_0(TypeInfo_for_X_15, TypeInfo_for_Y_16, P_4, L0_9, &L_11);
      {
        BinTree_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, BinTree_19, 0) = X_14;
        MR_hl_field(1, BinTree_19, 1) = ((MR_Box) (L_11));
        MR_hl_field(1, BinTree_19, 2) = NULL;
      }
      AddrR_17 = (MR_Word *) (&(MR_hl_field(1, BinTree_19, (MR_Integer) 2)));
      *AddrOfBinTree_18 = BinTree_19;
      // direct tailcall eliminated
      ;
      next_value_of_BinTree0_5 = R0_10;
      next_value_of_AddrOfBinTree_18 = AddrR_17;
      BinTree0_5 = next_value_of_BinTree0_5;
      AddrOfBinTree_18 = next_value_of_AddrOfBinTree_18;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__ra_list__map_bintree_3_p_0(
  MR_Word TypeInfo_for_X_15,
  MR_Word TypeInfo_for_Y_16,
  MR_Word P_4,
  MR_Word BinTree0_5,
  MR_Word * BinTree_6)
{
  if (((MR_tag((MR_Word) BinTree0_5)) == (MR_Integer) 0))
  {
    MR_Box X0_7 = (MR_hl_field(0, BinTree0_5, (MR_Integer) 0));
    MR_Box X_8;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_4, (MR_Integer) 1))));

    func_0(((MR_Box) (P_4)), X0_7, &X_8);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *BinTree_6 = base;
      MR_hl_field(0, base, 0) = X_8;
    }
  }
  else
  {
    MR_Word L0_9 = ((MR_Word) ((MR_hl_field(1, BinTree0_5, (MR_Integer) 1))));
    MR_Word R0_10 = ((MR_Word) ((MR_hl_field(1, BinTree0_5, (MR_Integer) 2))));
    MR_Word L_11;
    MR_Box X0_13 = (MR_hl_field(1, BinTree0_5, (MR_Integer) 0));
    MR_Box X_14;
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_4, (MR_Integer) 1))));
    MR_Word * AddrR_17;

    func_1(((MR_Box) (P_4)), X0_13, &X_14);
    mercury__ra_list__map_bintree_3_p_0(TypeInfo_for_X_15, TypeInfo_for_Y_16, P_4, L0_9, &L_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *BinTree_6 = base;
      MR_hl_field(1, base, 0) = X_14;
      MR_hl_field(1, base, 1) = ((MR_Box) (L_11));
      MR_hl_field(1, base, 2) = NULL;
    }
    AddrR_17 = (MR_Word *) (&(MR_hl_field(1, *BinTree_6, (MR_Integer) 2)));
    mercury__ra_list__LCMC__pred__map_bintree__1_3_p_0(TypeInfo_for_X_15, TypeInfo_for_Y_16, P_4, R0_10, AddrR_17);
  }
}

MR_Word MR_CALL 
mercury__ra_list__map_2_f_0(
  MR_Word TypeInfo_for_X_11,
  MR_Word TypeInfo_for_Y_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer Size_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word BinTree0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word RAList0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word BinTree_9;
    MR_Word * AddrRAList_13;

    BinTree_9 = mercury__ra_list__map_bintree_2_f_0(TypeInfo_for_X_11, TypeInfo_for_Y_12, HeadVar__1_1, BinTree0_7);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Size_6));
      MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (BinTree_9));
      MR_hl_field(1, HeadVar__3_3, 2) = NULL;
    }
    AddrRAList_13 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2)));
    mercury__ra_list__LCMC__func__map__1_3_p_0(TypeInfo_for_X_11, TypeInfo_for_Y_12, HeadVar__1_1, RAList0_8, AddrRAList_13);
  }
  return HeadVar__3_3;
}

void MR_CALL 
mercury__ra_list__LCMC__func__map__1_3_p_0(
  MR_Word TypeInfo_for_X_11,
  MR_Word TypeInfo_for_Y_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_14 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer Size_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BinTree0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word RAList0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      MR_Word BinTree_9;
      MR_Word HeadVar__3_3;
      MR_Word * AddrRAList_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_14;

      BinTree_9 = mercury__ra_list__map_bintree_2_f_0(TypeInfo_for_X_11, TypeInfo_for_Y_12, HeadVar__1_1, BinTree0_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Size_6));
        MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (BinTree_9));
        MR_hl_field(1, HeadVar__3_3, 2) = NULL;
      }
      AddrRAList_13 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2)));
      *AddrOfHeadVar__3_14 = HeadVar__3_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = RAList0_8;
      next_value_of_AddrOfHeadVar__3_14 = AddrRAList_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_14 = next_value_of_AddrOfHeadVar__3_14;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__ra_list__LCMC__func__map_bintree__1_3_p_0(
  MR_Word TypeInfo_for_X_15,
  MR_Word TypeInfo_for_Y_16,
  MR_Word F_4,
  MR_Word BinTree0_5,
  MR_Word * AddrOfBinTree_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) BinTree0_5)) == (MR_Integer) 0))
    {
      MR_Word BinTree_6;
      MR_Box X0_7 = (MR_hl_field(0, BinTree0_5, (MR_Integer) 0));
      MR_Box X_8;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, F_4, (MR_Integer) 1))));

      X_8 = func_0(((MR_Box) (F_4)), X0_7);
      {
        BinTree_6 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, BinTree_6, 0) = X_8;
      }
      *AddrOfBinTree_18 = BinTree_6;
    }
    else
    {
      MR_Word L0_9 = ((MR_Word) ((MR_hl_field(1, BinTree0_5, (MR_Integer) 1))));
      MR_Word R0_10 = ((MR_Word) ((MR_hl_field(1, BinTree0_5, (MR_Integer) 2))));
      MR_Word L_11;
      MR_Box X0_13 = (MR_hl_field(1, BinTree0_5, (MR_Integer) 0));
      MR_Box X_14;
      MR_Box MR_CALL (* func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, F_4, (MR_Integer) 1))));
      MR_Word * AddrR_17;
      MR_Word BinTree_19;
      MR_Word next_value_of_BinTree0_5;
      MR_Word * next_value_of_AddrOfBinTree_18;

      X_14 = func_1(((MR_Box) (F_4)), X0_13);
      L_11 = mercury__ra_list__map_bintree_2_f_0(TypeInfo_for_X_15, TypeInfo_for_Y_16, F_4, L0_9);
      {
        BinTree_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, BinTree_19, 0) = X_14;
        MR_hl_field(1, BinTree_19, 1) = ((MR_Box) (L_11));
        MR_hl_field(1, BinTree_19, 2) = NULL;
      }
      AddrR_17 = (MR_Word *) (&(MR_hl_field(1, BinTree_19, (MR_Integer) 2)));
      *AddrOfBinTree_18 = BinTree_19;
      // direct tailcall eliminated
      ;
      next_value_of_BinTree0_5 = R0_10;
      next_value_of_AddrOfBinTree_18 = AddrR_17;
      BinTree0_5 = next_value_of_BinTree0_5;
      AddrOfBinTree_18 = next_value_of_AddrOfBinTree_18;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__ra_list__map_bintree_2_f_0(
  MR_Word TypeInfo_for_X_15,
  MR_Word TypeInfo_for_Y_16,
  MR_Word F_4,
  MR_Word BinTree0_5)
{
  MR_Word BinTree_6;

  if (((MR_tag((MR_Word) BinTree0_5)) == (MR_Integer) 0))
  {
    MR_Box X0_7 = (MR_hl_field(0, BinTree0_5, (MR_Integer) 0));
    MR_Box X_8;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, F_4, (MR_Integer) 1))));

    X_8 = func_0(((MR_Box) (F_4)), X0_7);
    {
      BinTree_6 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, BinTree_6, 0) = X_8;
    }
  }
  else
  {
    MR_Word L0_9 = ((MR_Word) ((MR_hl_field(1, BinTree0_5, (MR_Integer) 1))));
    MR_Word R0_10 = ((MR_Word) ((MR_hl_field(1, BinTree0_5, (MR_Integer) 2))));
    MR_Word L_11;
    MR_Box X0_13 = (MR_hl_field(1, BinTree0_5, (MR_Integer) 0));
    MR_Box X_14;
    MR_Box MR_CALL (* func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, F_4, (MR_Integer) 1))));
    MR_Word * AddrR_17;

    X_14 = func_1(((MR_Box) (F_4)), X0_13);
    L_11 = mercury__ra_list__map_bintree_2_f_0(TypeInfo_for_X_15, TypeInfo_for_Y_16, F_4, L0_9);
    {
      BinTree_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, BinTree_6, 0) = X_14;
      MR_hl_field(1, BinTree_6, 1) = ((MR_Box) (L_11));
      MR_hl_field(1, BinTree_6, 2) = NULL;
    }
    AddrR_17 = (MR_Word *) (&(MR_hl_field(1, BinTree_6, (MR_Integer) 2)));
    mercury__ra_list__LCMC__func__map_bintree__1_3_p_0(TypeInfo_for_X_15, TypeInfo_for_Y_16, F_4, R0_10, AddrR_17);
  }
  return BinTree_6;
}

void MR_CALL 
mercury__ra_list__ra_list_to_list_2_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word RAList_3,
  MR_Word * List_4)
{
  if ((RAList_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *List_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word BinTree_6 = ((MR_Word) ((MR_hl_field(1, RAList_3, (MR_Integer) 1))));
    MR_Word RAListTail_7 = ((MR_Word) ((MR_hl_field(1, RAList_3, (MR_Integer) 2))));
    MR_Word Tail_8;

    mercury__ra_list__ra_list_to_list_2_p_0(TypeInfo_for_T_9, RAListTail_7, &Tail_8);
    mercury__ra_list__ra_list_to_list_acc_bintree_3_p_0(TypeInfo_for_T_9, BinTree_6, Tail_8, List_4);
  }
}

void MR_CALL 
mercury__ra_list__LCMC__pred__ra_list_to_list_acc_bintree__1_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word BinTree_4,
  MR_Word Tail0_5,
  MR_Word * AddrOfList_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) BinTree_4)) == (MR_Integer) 0))
    {
      MR_Word List_6;
      MR_Box X_7 = (MR_hl_field(0, BinTree_4, (MR_Integer) 0));

      {
        List_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, List_6, 0) = X_7;
        MR_hl_field(1, List_6, 1) = ((MR_Box) (Tail0_5));
      }
      *AddrOfList_15 = List_6;
    }
    else
    {
      MR_Word L_8 = ((MR_Word) ((MR_hl_field(1, BinTree_4, (MR_Integer) 1))));
      MR_Word R_9 = ((MR_Word) ((MR_hl_field(1, BinTree_4, (MR_Integer) 2))));
      MR_Word Tail1_10;
      MR_Box X_12 = (MR_hl_field(1, BinTree_4, (MR_Integer) 0));
      MR_Word * AddrTail2_14;
      MR_Word List_16;
      MR_Word next_value_of_BinTree_4;
      MR_Word next_value_of_Tail0_5;
      MR_Word * next_value_of_AddrOfList_15;

      mercury__ra_list__ra_list_to_list_acc_bintree_3_p_0(TypeInfo_for_T_13, R_9, Tail0_5, &Tail1_10);
      {
        List_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, List_16, 0) = X_12;
        MR_hl_field(1, List_16, 1) = NULL;
      }
      AddrTail2_14 = (MR_Word *) (&(MR_hl_field(1, List_16, (MR_Integer) 1)));
      *AddrOfList_15 = List_16;
      // direct tailcall eliminated
      ;
      next_value_of_BinTree_4 = L_8;
      next_value_of_Tail0_5 = Tail1_10;
      next_value_of_AddrOfList_15 = AddrTail2_14;
      BinTree_4 = next_value_of_BinTree_4;
      Tail0_5 = next_value_of_Tail0_5;
      AddrOfList_15 = next_value_of_AddrOfList_15;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__ra_list__ra_list_to_list_acc_bintree_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word BinTree_4,
  MR_Word Tail0_5,
  MR_Word * List_6)
{
  if (((MR_tag((MR_Word) BinTree_4)) == (MR_Integer) 0))
  {
    MR_Box X_7 = (MR_hl_field(0, BinTree_4, (MR_Integer) 0));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *List_6 = base;
      MR_hl_field(1, base, 0) = X_7;
      MR_hl_field(1, base, 1) = ((MR_Box) (Tail0_5));
    }
  }
  else
  {
    MR_Word L_8 = ((MR_Word) ((MR_hl_field(1, BinTree_4, (MR_Integer) 1))));
    MR_Word R_9 = ((MR_Word) ((MR_hl_field(1, BinTree_4, (MR_Integer) 2))));
    MR_Word Tail1_10;
    MR_Box X_12 = (MR_hl_field(1, BinTree_4, (MR_Integer) 0));
    MR_Word * AddrTail2_14;

    mercury__ra_list__ra_list_to_list_acc_bintree_3_p_0(TypeInfo_for_T_13, R_9, Tail0_5, &Tail1_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *List_6 = base;
      MR_hl_field(1, base, 0) = X_12;
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrTail2_14 = (MR_Word *) (&(MR_hl_field(1, *List_6, (MR_Integer) 1)));
    mercury__ra_list__LCMC__pred__ra_list_to_list_acc_bintree__1_3_p_0(TypeInfo_for_T_13, L_8, Tail1_10, AddrTail2_14);
  }
}

void MR_CALL 
mercury__ra_list__list_to_ra_list_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word List_3,
  MR_Word * RAList_4)
{
  MR_bool succeeded;
  MR_Word RevList_5;
  MR_Integer Size_6;

  mercury__ra_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_112_114_101_112_101_110_100_95_97_110_100_95_99_111_117_110_116_95_95_91_49_93_95_48_5_p_0(List_3, (MR_Word) ((MR_Unsigned) 0U), &RevList_5, (MR_Integer) 0, &Size_6);
  succeeded = (Size_6 == (MR_Integer) 0);
  if (succeeded)
    *RAList_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer MaxSkewBinary_7;

    mercury__ra_list__get_max_bintree_size_3_p_0(Size_6, (MR_Integer) 1, &MaxSkewBinary_7);
    mercury__ra_list__acc_ra_list_5_p_0(TypeInfo_for_T_12, RevList_5, Size_6, MaxSkewBinary_7, (MR_Word) ((MR_Unsigned) 0U), RAList_4);
  }
}

static void MR_CALL 
mercury__ra_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_112_114_101_112_101_110_100_95_97_110_100_95_99_111_117_110_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * L_3,
  MR_Integer STATE_VARIABLE_Size_0_4,
  MR_Integer * STATE_VARIABLE_Size_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *L_3 = HeadVar__2_2;
      *STATE_VARIABLE_Size_5 = STATE_VARIABLE_Size_0_4;
    }
    else
    {
      MR_Box H_10 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
      MR_Word T_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer STATE_VARIABLE_Size_17_17 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Size_0_4 + (MR_Unsigned) 1);
      MR_Word Var_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_STATE_VARIABLE_Size_0_4;

      {
        Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_19, 0) = H_10;
        MR_hl_field(1, Var_19, 1) = ((MR_Box) (HeadVar__2_2));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = T_11;
      next_value_of_HeadVar__2_2 = Var_19;
      next_value_of_STATE_VARIABLE_Size_0_4 = STATE_VARIABLE_Size_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Size_0_4 = next_value_of_STATE_VARIABLE_Size_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__ra_list__acc_ra_list_5_p_0(
  MR_Word TypeInfo_for_T_38,
  MR_Word RevList0_6,
  MR_Integer SizeLeftover0_7,
  MR_Integer SkewBinary0_8,
  MR_Word RAList0_9,
  MR_Word * RAList_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (SizeLeftover0_7 > SkewBinary0_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word BinTree0_11;
      MR_Word RevList1_12;
      MR_Integer SizeLeftover1_13;
      MR_Integer SkewBinary1_14;
      MR_Word RAList1_15;

      mercury__ra_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_100_95_112_114_101_102_105_120_95_116_111_95_98_105_110_116_114_101_101_95_95_91_49_93_95_48_4_p_0(SkewBinary0_8, &BinTree0_11, RevList0_6, &RevList1_12);
      SizeLeftover1_13 = (MR_Integer) ((MR_Unsigned) SizeLeftover0_7 - (MR_Unsigned) SkewBinary0_8);
      SkewBinary1_14 = (SkewBinary0_8 / (MR_Integer) 2);
      {
        RAList1_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, RAList1_15, 0) = ((MR_Box) (SkewBinary0_8));
        MR_hl_field(1, RAList1_15, 1) = ((MR_Box) (BinTree0_11));
        MR_hl_field(1, RAList1_15, 2) = ((MR_Box) (RAList0_9));
      }
      succeeded = (SizeLeftover1_13 < SkewBinary0_8);
      if (succeeded)
      {
        MR_Word next_value_of_RevList0_6 = RevList1_12;
        MR_Integer next_value_of_SizeLeftover0_7 = SizeLeftover1_13;
        MR_Integer next_value_of_SkewBinary0_8 = SkewBinary1_14;
        MR_Word next_value_of_RAList0_9 = RAList1_15;

        // direct tailcall eliminated
        ;
        RevList0_6 = next_value_of_RevList0_6;
        SizeLeftover0_7 = next_value_of_SizeLeftover0_7;
        SkewBinary0_8 = next_value_of_SkewBinary0_8;
        RAList0_9 = next_value_of_RAList0_9;
        continue;
      }
      else
      {
        succeeded = (SizeLeftover1_13 == SkewBinary0_8);
        if (succeeded)
        {
          MR_Word BinTree1_16;
          MR_Word RevList_17;

          mercury__ra_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_100_95_112_114_101_102_105_120_95_116_111_95_98_105_110_116_114_101_101_95_95_91_49_93_95_48_4_p_0(SkewBinary0_8, &BinTree1_16, RevList1_12, &RevList_17);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *RAList_10 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (SkewBinary0_8));
            MR_hl_field(1, base, 1) = ((MR_Box) (BinTree1_16));
            MR_hl_field(1, base, 2) = ((MR_Box) (RAList0_9));
          }
          succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_38, RevList_17, (MR_Word) ((MR_Unsigned) 0U));
          if (!(succeeded))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ra_list.acc_ra_list\'/5", (MR_String) "RevList != []");
              return;
            }
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ra_list.acc_ra_list\'/5", (MR_String) "SizeLeftover0 > SkewBinary0");
            return;
          }
      }
    }
    else
    {
      succeeded = (SizeLeftover0_7 < SkewBinary0_8);
      if (succeeded)
      {
        MR_Integer SkewBinary1_35 = (SkewBinary0_8 / (MR_Integer) 2);
        MR_Integer next_value_of_SkewBinary0_8 = SkewBinary1_35;

        // direct tailcall eliminated
        ;
        SkewBinary0_8 = next_value_of_SkewBinary0_8;
        continue;
      }
      else
      {
        MR_Word BinTree_18;
        MR_Word RevList1_36;
        MR_Integer SizeLeftover1_37;

        mercury__ra_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_100_95_112_114_101_102_105_120_95_116_111_95_98_105_110_116_114_101_101_95_95_91_49_93_95_48_4_p_0(SkewBinary0_8, &BinTree_18, RevList0_6, &RevList1_36);
        SizeLeftover1_37 = (MR_Integer) ((MR_Unsigned) SizeLeftover0_7 - (MR_Unsigned) SkewBinary0_8);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *RAList_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (SkewBinary0_8));
          MR_hl_field(1, base, 1) = ((MR_Box) (BinTree_18));
          MR_hl_field(1, base, 2) = ((MR_Box) (RAList0_9));
        }
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_38, RevList1_36, (MR_Word) ((MR_Unsigned) 0U));
        if (!(succeeded))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ra_list.acc_ra_list\'/5", (MR_String) "RevList1 != []");
            return;
          }
        succeeded = (SizeLeftover1_37 == (MR_Integer) 0);
        if (!(succeeded))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ra_list.acc_ra_list\'/5", (MR_String) "SizeLeftover1 != 0");
            return;
          }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__ra_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_100_95_112_114_101_102_105_120_95_116_111_95_98_105_110_116_114_101_101_95_95_91_49_93_95_48_4_p_0(
  MR_Integer BinTreeSize_5,
  MR_Word * BinTree_6,
  MR_Word STATE_VARIABLE_RevList_0_12,
  MR_Word * STATE_VARIABLE_RevList_13)
{
  MR_bool succeeded = (BinTreeSize_5 == (MR_Integer) 1);

  if (succeeded)
  {
    MR_Box Head_8;

    if ((STATE_VARIABLE_RevList_0_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ra_list.get_next_item_from_rev_list\'/3", (MR_String) "!.RevList = []");
        return;
      }
    else
    {
      Head_8 = (MR_hl_field(1, STATE_VARIABLE_RevList_0_12, (MR_Integer) 0));
      *STATE_VARIABLE_RevList_13 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_RevList_0_12, (MR_Integer) 1))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *BinTree_6 = base;
      MR_hl_field(0, base, 0) = Head_8;
    }
  }
  else
  {
    MR_Integer BinTreeSize2_9 = (BinTreeSize_5 / (MR_Integer) 2);
    MR_Word R_10;
    MR_Word L_11;
    MR_Word STATE_VARIABLE_RevList_16_16;
    MR_Word STATE_VARIABLE_RevList_17_17;
    MR_Box Head_19;

    mercury__ra_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_100_95_112_114_101_102_105_120_95_116_111_95_98_105_110_116_114_101_101_95_95_91_49_93_95_48_4_p_0(BinTreeSize2_9, &R_10, STATE_VARIABLE_RevList_0_12, &STATE_VARIABLE_RevList_16_16);
    mercury__ra_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_100_95_112_114_101_102_105_120_95_116_111_95_98_105_110_116_114_101_101_95_95_91_49_93_95_48_4_p_0(BinTreeSize2_9, &L_11, STATE_VARIABLE_RevList_16_16, &STATE_VARIABLE_RevList_17_17);
    if ((STATE_VARIABLE_RevList_17_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ra_list.get_next_item_from_rev_list\'/3", (MR_String) "!.RevList = []");
        return;
      }
    else
    {
      Head_19 = (MR_hl_field(1, STATE_VARIABLE_RevList_17_17, (MR_Integer) 0));
      *STATE_VARIABLE_RevList_13 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_RevList_17_17, (MR_Integer) 1))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *BinTree_6 = base;
      MR_hl_field(1, base, 0) = Head_19;
      MR_hl_field(1, base, 1) = ((MR_Box) (L_11));
      MR_hl_field(1, base, 2) = ((MR_Box) (R_10));
    }
  }
}

static void MR_CALL 
mercury__ra_list__get_max_bintree_size_3_p_0(
  MR_Integer Size_4,
  MR_Integer CurSkewBinary_5,
  MR_Integer * MaxSkewBinary_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer NextSkewBinary_7;
    MR_Integer Var_8 = (MR_Integer) ((MR_Unsigned) 2 * (MR_Unsigned) CurSkewBinary_5);

    // setup for model_det tailcalls optimized into a loop
    ;
    NextSkewBinary_7 = (MR_Integer) ((MR_Unsigned) Var_8 + (MR_Unsigned) 1);
    succeeded = (Size_4 >= NextSkewBinary_7);
    if (succeeded)
    {
      MR_Integer next_value_of_CurSkewBinary_5 = NextSkewBinary_7;

      // direct tailcall eliminated
      ;
      CurSkewBinary_5 = next_value_of_CurSkewBinary_5;
      continue;
    }
    else
      *MaxSkewBinary_6 = CurSkewBinary_5;
    break;
  }
}

MR_bool MR_CALL 
mercury__ra_list__drop_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Integer N_4,
  MR_Word As_5,
  MR_Word * Bs_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_4 > (MR_Integer) 0);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer Size_7;
      MR_Word Cs_9;

      succeeded = (As_5 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Size_7 = ((MR_Integer) ((MR_hl_field(1, As_5, (MR_Integer) 0))));
        Cs_9 = ((MR_Word) ((MR_hl_field(1, As_5, (MR_Integer) 2))));
        succeeded = (Size_7 < N_4);
        if (succeeded)
        {
          MR_Integer N1_10 = (MR_Integer) ((MR_Unsigned) N_4 - (MR_Unsigned) Size_7);
          MR_Integer next_value_of_N_4 = N1_10;
          MR_Word next_value_of_As_5 = Cs_9;

          // direct tailcall eliminated
          ;
          N_4 = next_value_of_N_4;
          As_5 = next_value_of_As_5;
          continue;
        }
        else
          succeeded = mercury__ra_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(N_4, As_5, Bs_6);
      }
    }
    else
    {
      *Bs_6 = As_5;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
mercury__ra_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(
  MR_Integer N_4,
  MR_Word As_5,
  MR_Word * Bs_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_4 > (MR_Integer) 0);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer N1_7 = (MR_Integer) ((MR_Unsigned) N_4 - (MR_Unsigned) 1);
      MR_Word Cs_8;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Integer Var_28;
      MR_Integer next_value_of_N_4;
      MR_Word next_value_of_As_5;

      succeeded = (As_5 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_28 = ((MR_Integer) ((MR_hl_field(1, As_5, (MR_Integer) 0))));
        Var_27 = ((MR_Word) ((MR_hl_field(1, As_5, (MR_Integer) 1))));
        Var_26 = ((MR_Word) ((MR_hl_field(1, As_5, (MR_Integer) 2))));
        if (((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0))
          Cs_8 = Var_26;
        else
        {
          MR_Word T1_18 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 1))));
          MR_Word T2_19 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 2))));
          MR_Integer Size2_22 = (Var_28 / (MR_Integer) 2);
          MR_Word Var_25;

          {
            Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_25, 0) = ((MR_Box) (Size2_22));
            MR_hl_field(1, Var_25, 1) = ((MR_Box) (T2_19));
            MR_hl_field(1, Var_25, 2) = ((MR_Box) (Var_26));
          }
          {
            Cs_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Cs_8, 0) = ((MR_Box) (Size2_22));
            MR_hl_field(1, Cs_8, 1) = ((MR_Box) (T1_18));
            MR_hl_field(1, Cs_8, 2) = ((MR_Box) (Var_25));
          }
        }
        // direct tailcall eliminated
        ;
        next_value_of_N_4 = N1_7;
        next_value_of_As_5 = Cs_8;
        N_4 = next_value_of_N_4;
        As_5 = next_value_of_As_5;
        continue;
      }
    }
    else
    {
      *Bs_6 = As_5;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__ra_list__append_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word As_4,
  MR_Word Bs_5,
  MR_Word * ABs_6)
{
  MR_bool succeeded = (As_4 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Box AH_7;
  MR_Word AT_8;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Integer Var_27;

  if (succeeded)
  {
    Var_27 = ((MR_Integer) ((MR_hl_field(1, As_4, (MR_Integer) 0))));
    Var_26 = ((MR_Word) ((MR_hl_field(1, As_4, (MR_Integer) 1))));
    Var_25 = ((MR_Word) ((MR_hl_field(1, As_4, (MR_Integer) 2))));
    if (((MR_tag((MR_Word) Var_26)) == (MR_Integer) 0))
    {
      AH_7 = (MR_hl_field(0, Var_26, (MR_Integer) 0));
      AT_8 = Var_25;
    }
    else
    {
      MR_Word T1_17;
      MR_Word T2_18;
      MR_Integer Size2_21;
      MR_Word Var_24;

      AH_7 = (MR_hl_field(1, Var_26, (MR_Integer) 0));
      T1_17 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 1))));
      T2_18 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 2))));
      Size2_21 = (Var_27 / (MR_Integer) 2);
      {
        Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_24, 0) = ((MR_Box) (Size2_21));
        MR_hl_field(1, Var_24, 1) = ((MR_Box) (T2_18));
        MR_hl_field(1, Var_24, 2) = ((MR_Box) (Var_25));
      }
      {
        AT_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, AT_8, 0) = ((MR_Box) (Size2_21));
        MR_hl_field(1, AT_8, 1) = ((MR_Box) (T1_17));
        MR_hl_field(1, AT_8, 2) = ((MR_Box) (Var_24));
      }
    }
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word ATBs_9;
    MR_Integer Size1_31;
    MR_Word T1_32;
    MR_Integer Size2_33;
    MR_Word T2_34;
    MR_Word Rest_35;
    MR_Word Var_37;

    mercury__ra_list__append_3_p_0(TypeInfo_for_T_10, AT_8, Bs_5, &ATBs_9);
    succeeded = (ATBs_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Size1_31 = ((MR_Integer) ((MR_hl_field(1, ATBs_9, (MR_Integer) 0))));
      T1_32 = ((MR_Word) ((MR_hl_field(1, ATBs_9, (MR_Integer) 1))));
      Var_37 = ((MR_Word) ((MR_hl_field(1, ATBs_9, (MR_Integer) 2))));
      succeeded = (Var_37 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Size2_33 = ((MR_Integer) ((MR_hl_field(1, Var_37, (MR_Integer) 0))));
        T2_34 = ((MR_Word) ((MR_hl_field(1, Var_37, (MR_Integer) 1))));
        Rest_35 = ((MR_Word) ((MR_hl_field(1, Var_37, (MR_Integer) 2))));
        succeeded = (Size1_31 == Size2_33);
      }
    }
    if (succeeded)
    {
      MR_Integer NewSize_36;
      MR_Integer Var_38 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Size1_31);
      MR_Word Var_40;

      NewSize_36 = (MR_Integer) ((MR_Unsigned) Var_38 + (MR_Unsigned) Size2_33);
      {
        Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_40, 0) = AH_7;
        MR_hl_field(1, Var_40, 1) = ((MR_Box) (T1_32));
        MR_hl_field(1, Var_40, 2) = ((MR_Box) (T2_34));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *ABs_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (NewSize_36));
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_40));
        MR_hl_field(1, base, 2) = ((MR_Box) (Rest_35));
      }
    }
    else
    {
      MR_Word Var_42;

      {
        Var_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_42, 0) = AH_7;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *ABs_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_42));
        MR_hl_field(1, base, 2) = ((MR_Box) (ATBs_9));
      }
    }
  }
  else
    *ABs_6 = Bs_5;
}

MR_bool MR_CALL 
mercury__ra_list__update_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Integer I_5,
  MR_Box X_6,
  MR_Word List0_7,
  MR_Word * List_8)
{
  MR_bool succeeded = (I_5 >= (MR_Integer) 0);

  if (succeeded)
    succeeded = mercury__ra_list__update_2_4_p_0(TypeInfo_for_T_10, I_5, X_6, List0_7, List_8);
  return succeeded;
}

MR_bool MR_CALL 
mercury__ra_list__update_2_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Integer I_5,
  MR_Box X_6,
  MR_Word List0_7,
  MR_Word * List_8)
{
  MR_bool succeeded = (List0_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Integer Size_9;
  MR_Word T0_10;
  MR_Word Rest_11;

  if (succeeded)
  {
    Size_9 = ((MR_Integer) ((MR_hl_field(1, List0_7, (MR_Integer) 0))));
    T0_10 = ((MR_Word) ((MR_hl_field(1, List0_7, (MR_Integer) 1))));
    Rest_11 = ((MR_Word) ((MR_hl_field(1, List0_7, (MR_Integer) 2))));
    succeeded = (I_5 < Size_9);
    if (succeeded)
    {
      MR_Word T_12;

      succeeded = mercury__ra_list__update_bintree_5_p_0(TypeInfo_for_T_14, Size_9, I_5, X_6, T0_10, &T_12);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *List_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Size_9));
          MR_hl_field(1, base, 1) = ((MR_Box) (T_12));
          MR_hl_field(1, base, 2) = ((MR_Box) (Rest_11));
        }
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Integer NewI_13 = (MR_Integer) ((MR_Unsigned) I_5 - (MR_Unsigned) Size_9);
      MR_Word Var_15;

      succeeded = mercury__ra_list__update_2_4_p_0(TypeInfo_for_T_14, NewI_13, X_6, Rest_11, &Var_15);
      if (succeeded)
      {
        succeeded = mercury__ra_list____Unify____ra_list_1_0(TypeInfo_for_T_14, List0_7, Var_15);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *List_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Size_9));
            MR_hl_field(1, base, 1) = ((MR_Box) (T0_10));
            MR_hl_field(1, base, 2) = ((MR_Box) (List0_7));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ra_list____Unify____ra_list_1_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;
      MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
        succeeded = (ArgX1_5 == ArgY1_6);
        if (succeeded)
        {
          succeeded = mercury__ra_list____Unify____ra_list_bintree_1_0(TypeInfo_for_T_13, ArgX2_7, ArgY2_8);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = ArgX3_9;
            next_value_of_HeadVar__2_2 = ArgY3_10;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__ra_list____Unify____ra_list_bintree_1_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_13, ArgX1_3, ArgY1_4);
      }
    }
    else
    {
      MR_Box ArgX1_5 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;
      MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_13, ArgX1_5, ArgY1_6);
        if (succeeded)
        {
          succeeded = mercury__ra_list____Unify____ra_list_bintree_1_0(TypeInfo_for_T_13, ArgX2_7, ArgY2_8);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = ArgX3_9;
            next_value_of_HeadVar__2_2 = ArgY3_10;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__ra_list__update_bintree_5_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Integer Size_1,
  MR_Integer HeadVar__2_2,
  MR_Box X_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) HeadVar__4_4)) == (MR_Integer) 0))
  {
    succeeded = (HeadVar__2_2 == (MR_Integer) 0);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__5_5 = base;
        MR_hl_field(0, base, 0) = X_3;
      }
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_Box X0_12 = (MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0));
    MR_Word T1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word T2_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 2))));

    succeeded = (HeadVar__2_2 == (MR_Integer) 0);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(1, base, 0) = X_3;
        MR_hl_field(1, base, 1) = ((MR_Box) (T1_13));
        MR_hl_field(1, base, 2) = ((MR_Box) (T2_14));
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer Size2_16 = (Size_1 / (MR_Integer) 2);

      succeeded = (HeadVar__2_2 <= Size2_16);
      if (succeeded)
      {
        MR_Integer NewI_17 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 - (MR_Unsigned) 1);
        MR_Word * AddrT0_29;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(1, base, 0) = X0_12;
          MR_hl_field(1, base, 1) = NULL;
          MR_hl_field(1, base, 2) = ((MR_Box) (T2_14));
        }
        AddrT0_29 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__5_5, (MR_Integer) 1)));
        succeeded = mercury__ra_list__LCMC__pred__update_bintree__1_5_p_0(TypeInfo_for_T_25, Size2_16, NewI_17, X_3, T1_13, AddrT0_29);
      }
      else
      {
        MR_Integer Var_21 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 - (MR_Unsigned) 1);
        MR_Integer NewI_23 = (MR_Integer) ((MR_Unsigned) Var_21 - (MR_Unsigned) Size2_16);
        MR_Word * AddrT0_30;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(1, base, 0) = X0_12;
          MR_hl_field(1, base, 1) = ((MR_Box) (T1_13));
          MR_hl_field(1, base, 2) = NULL;
        }
        AddrT0_30 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__5_5, (MR_Integer) 2)));
        succeeded = mercury__ra_list__LCMC__pred__update_bintree__1_5_p_0(TypeInfo_for_T_25, Size2_16, NewI_23, X_3, T2_14, AddrT0_30);
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ra_list__LCMC__pred__update_bintree__1_5_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Integer Size_1,
  MR_Integer HeadVar__2_2,
  MR_Box X_3,
  MR_Word HeadVar__4_4,
  MR_Word * AddrOfHeadVar__5_31)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) HeadVar__4_4)) == (MR_Integer) 0))
    {
      MR_Word HeadVar__5_5;

      succeeded = (HeadVar__2_2 == (MR_Integer) 0);
      if (succeeded)
      {
        {
          HeadVar__5_5 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HeadVar__5_5, 0) = X_3;
        }
        *AddrOfHeadVar__5_31 = HeadVar__5_5;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Box X0_12 = (MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0));
      MR_Word T1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word T2_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 2))));

      succeeded = (HeadVar__2_2 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word HeadVar__5_32;

        {
          HeadVar__5_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__5_32, 0) = X_3;
          MR_hl_field(1, HeadVar__5_32, 1) = ((MR_Box) (T1_13));
          MR_hl_field(1, HeadVar__5_32, 2) = ((MR_Box) (T2_14));
        }
        *AddrOfHeadVar__5_31 = HeadVar__5_32;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer Size2_16 = (Size_1 / (MR_Integer) 2);

        succeeded = (HeadVar__2_2 <= Size2_16);
        if (succeeded)
        {
          MR_Integer NewI_17 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 - (MR_Unsigned) 1);
          MR_Word * AddrT0_29;
          MR_Word HeadVar__5_33;
          MR_Integer next_value_of_Size_1;
          MR_Integer next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__4_4;
          MR_Word * next_value_of_AddrOfHeadVar__5_31;

          {
            HeadVar__5_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__5_33, 0) = X0_12;
            MR_hl_field(1, HeadVar__5_33, 1) = NULL;
            MR_hl_field(1, HeadVar__5_33, 2) = ((MR_Box) (T2_14));
          }
          AddrT0_29 = (MR_Word *) (&(MR_hl_field(1, HeadVar__5_33, (MR_Integer) 1)));
          *AddrOfHeadVar__5_31 = HeadVar__5_33;
          // direct tailcall eliminated
          ;
          next_value_of_Size_1 = Size2_16;
          next_value_of_HeadVar__2_2 = NewI_17;
          next_value_of_HeadVar__4_4 = T1_13;
          next_value_of_AddrOfHeadVar__5_31 = AddrT0_29;
          Size_1 = next_value_of_Size_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          AddrOfHeadVar__5_31 = next_value_of_AddrOfHeadVar__5_31;
          continue;
        }
        else
        {
          MR_Integer Var_21 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 - (MR_Unsigned) 1);
          MR_Integer NewI_23 = (MR_Integer) ((MR_Unsigned) Var_21 - (MR_Unsigned) Size2_16);
          MR_Word * AddrT0_30;
          MR_Word HeadVar__5_36;
          MR_Integer next_value_of_Size_1;
          MR_Integer next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__4_4;
          MR_Word * next_value_of_AddrOfHeadVar__5_31;

          {
            HeadVar__5_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__5_36, 0) = X0_12;
            MR_hl_field(1, HeadVar__5_36, 1) = ((MR_Box) (T1_13));
            MR_hl_field(1, HeadVar__5_36, 2) = NULL;
          }
          AddrT0_30 = (MR_Word *) (&(MR_hl_field(1, HeadVar__5_36, (MR_Integer) 2)));
          *AddrOfHeadVar__5_31 = HeadVar__5_36;
          // direct tailcall eliminated
          ;
          next_value_of_Size_1 = Size2_16;
          next_value_of_HeadVar__2_2 = NewI_23;
          next_value_of_HeadVar__4_4 = T2_14;
          next_value_of_AddrOfHeadVar__5_31 = AddrT0_30;
          Size_1 = next_value_of_Size_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          AddrOfHeadVar__5_31 = next_value_of_AddrOfHeadVar__5_31;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__ra_list__det_index1_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word List_4,
  MR_Integer I_5,
  MR_Box * X_6)
{
  MR_bool succeeded;
  MR_Box XPrime_7;
  MR_Integer I0_11 = (MR_Integer) ((MR_Unsigned) I_5 - (MR_Unsigned) 1);

  succeeded = (I0_11 >= (MR_Integer) 0);
  if (succeeded)
    succeeded = mercury__ra_list__index0_list_3_p_0(TypeInfo_for_T_10, List_4, I0_11, &XPrime_7);
  if (succeeded)
    *X_6 = XPrime_7;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ra_list.det_index1\'/3", (MR_String) "index1 failed");
      return;
    }
}

void MR_CALL 
mercury__ra_list__det_index0_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word List_4,
  MR_Integer I_5,
  MR_Box * X_6)
{
  MR_bool succeeded = (I_5 >= (MR_Integer) 0);
  MR_Box XPrime_7;

  if (succeeded)
    succeeded = mercury__ra_list__index0_list_3_p_0(TypeInfo_for_T_10, List_4, I_5, &XPrime_7);
  if (succeeded)
    *X_6 = XPrime_7;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ra_list.det_index0\'/3", (MR_String) "index0 failed");
      return;
    }
}

MR_bool MR_CALL 
mercury__ra_list__index1_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word List_4,
  MR_Integer I1_5,
  MR_Box * X_6)
{
  MR_bool succeeded;
  MR_Integer I0_7 = (MR_Integer) ((MR_Unsigned) I1_5 - (MR_Unsigned) 1);

  succeeded = (I0_7 >= (MR_Integer) 0);
  if (succeeded)
    succeeded = mercury__ra_list__index0_list_3_p_0(TypeInfo_for_T_10, List_4, I0_7, X_6);
  return succeeded;
}

MR_bool MR_CALL 
mercury__ra_list__index0_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word List_4,
  MR_Integer I0_5,
  MR_Box * X_6)
{
  MR_bool succeeded = (I0_5 >= (MR_Integer) 0);

  if (succeeded)
    succeeded = mercury__ra_list__index0_list_3_p_0(TypeInfo_for_T_8, List_4, I0_5, X_6);
  return succeeded;
}

MR_bool MR_CALL 
mercury__ra_list__index0_list_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1,
  MR_Integer I_7,
  MR_Box * X_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Integer Size_4;
    MR_Word T_5;
    MR_Word Rest_6;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Size_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      T_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      Rest_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
      succeeded = (I_7 < Size_4);
      if (succeeded)
        succeeded = mercury__ra_list__index0_bintree_4_p_0(TypeInfo_for_T_10, Size_4, T_5, I_7, X_8);
      else
      {
        MR_Integer NewI_9 = (MR_Integer) ((MR_Unsigned) I_7 - (MR_Unsigned) Size_4);
        MR_Word next_value_of_HeadVar__1_1 = Rest_6;
        MR_Integer next_value_of_I_7 = NewI_9;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        I_7 = next_value_of_I_7;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__ra_list__index0_bintree_4_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Integer Size_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Box * X_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      *X_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
      succeeded = (HeadVar__3_3 == (MR_Integer) 0);
    }
    else
    {
      MR_Box X0_8 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      MR_Word T1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word T2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));

      succeeded = (HeadVar__3_3 == (MR_Integer) 0);
      if (succeeded)
      {
        *X_4 = X0_8;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer Size2_13 = (Size_1 / (MR_Integer) 2);

        succeeded = (HeadVar__3_3 <= Size2_13);
        if (succeeded)
        {
          MR_Integer NewI_14 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 - (MR_Unsigned) 1);
          MR_Integer next_value_of_Size_1 = Size2_13;
          MR_Word next_value_of_HeadVar__2_2 = T1_9;
          MR_Integer next_value_of_HeadVar__3_3 = NewI_14;

          // direct tailcall eliminated
          ;
          Size_1 = next_value_of_Size_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        else
        {
          MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 - (MR_Unsigned) 1);
          MR_Integer NewI_19 = (MR_Integer) ((MR_Unsigned) Var_17 - (MR_Unsigned) Size2_13);
          MR_Integer next_value_of_Size_1 = Size2_13;
          MR_Word next_value_of_HeadVar__2_2 = T2_10;
          MR_Integer next_value_of_HeadVar__3_3 = NewI_19;

          // direct tailcall eliminated
          ;
          Size_1 = next_value_of_Size_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__ra_list__length_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word RAList_3,
  MR_Integer * Len_4)
{
  mercury__ra_list__length_acc_3_p_0(TypeInfo_for_T_6, RAList_3, (MR_Integer) 0, Len_4);
}

MR_Integer MR_CALL 
mercury__ra_list__length_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word RAList_3)
{
  MR_Integer Len_4;

  mercury__ra_list__length_acc_3_p_0(TypeInfo_for_T_6, RAList_3, (MR_Integer) 0, &Len_4);
  return Len_4;
}

void MR_CALL 
mercury__ra_list__length_acc_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_Len_0_2,
  MR_Integer * STATE_VARIABLE_Len_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Len_3 = STATE_VARIABLE_Len_0_2;
    else
    {
      MR_Integer BinTreeSize_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Tail_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer STATE_VARIABLE_Len_13_13 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Len_0_2 + (MR_Unsigned) BinTreeSize_7);
      MR_Word next_value_of_HeadVar__1_1 = Tail_9;
      MR_Integer next_value_of_STATE_VARIABLE_Len_0_2 = STATE_VARIABLE_Len_13_13;

      // direct tailcall eliminated
      ;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Len_0_2 = next_value_of_STATE_VARIABLE_Len_0_2;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__ra_list__is_singleton_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word RA_3,
  MR_Box * X_4)
{
  MR_bool succeeded = (RA_3 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Integer Var_5;
  MR_Word Var_6;
  MR_Word Var_7;

  if (succeeded)
  {
    Var_5 = ((MR_Integer) ((MR_hl_field(1, RA_3, (MR_Integer) 0))));
    Var_6 = ((MR_Word) ((MR_hl_field(1, RA_3, (MR_Integer) 1))));
    Var_7 = ((MR_Word) ((MR_hl_field(1, RA_3, (MR_Integer) 2))));
    succeeded = (Var_5 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_6)) == (MR_Integer) 0);
      if (succeeded)
      {
        *X_4 = (MR_hl_field(0, Var_6, (MR_Integer) 0));
        succeeded = (Var_7 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ra_list__is_not_empty_1_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word RA_2)
{
  MR_bool succeeded = (RA_2 != (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
  {
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ra_list__is_non_empty_1_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word RA_2)
{
  MR_bool succeeded = (RA_2 != (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
  {
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ra_list__is_empty_1_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word RA_2)
{
  MR_bool succeeded = (RA_2 == (MR_Word) ((MR_Unsigned) 0U));

  return succeeded;
}

MR_bool MR_CALL 
mercury__ra_list__head_tail_3_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word HeadVar__1_1,
  MR_Box * X_2,
  MR_Word * Tail_3)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Integer Var_21;

  if (succeeded)
  {
    Var_21 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    Var_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    if (((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0))
    {
      *X_2 = (MR_hl_field(0, Var_20, (MR_Integer) 0));
      *Tail_3 = Var_19;
    }
    else
    {
      MR_Word T1_10;
      MR_Word T2_11;
      MR_Integer Size2_14;
      MR_Word Var_17;

      *X_2 = (MR_hl_field(1, Var_20, (MR_Integer) 0));
      T1_10 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 1))));
      T2_11 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 2))));
      Size2_14 = (Var_21 / (MR_Integer) 2);
      {
        Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_17, 0) = ((MR_Box) (Size2_14));
        MR_hl_field(1, Var_17, 1) = ((MR_Box) (T2_11));
        MR_hl_field(1, Var_17, 2) = ((MR_Box) (Var_19));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Tail_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Size2_14));
        MR_hl_field(1, base, 1) = ((MR_Box) (T1_10));
        MR_hl_field(1, base, 2) = ((MR_Box) (Var_17));
      }
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ra_list__tail_2_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word HeadVar__1_1,
  MR_Word * Tail_2)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Integer Var_20;

  if (succeeded)
  {
    Var_20 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    Var_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    Var_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    if (((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0))
      *Tail_2 = Var_18;
    else
    {
      MR_Word T1_9 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 1))));
      MR_Word T2_10 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 2))));
      MR_Integer Size2_13 = (Var_20 / (MR_Integer) 2);
      MR_Word Var_16;

      {
        Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_16, 0) = ((MR_Box) (Size2_13));
        MR_hl_field(1, Var_16, 1) = ((MR_Box) (T2_10));
        MR_hl_field(1, Var_16, 2) = ((MR_Box) (Var_18));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Tail_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Size2_13));
        MR_hl_field(1, base, 1) = ((MR_Box) (T1_9));
        MR_hl_field(1, base, 2) = ((MR_Box) (Var_16));
      }
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ra_list__head_2_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Box * X_2)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Var_15;

  if (succeeded)
  {
    Var_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    if (((MR_tag((MR_Word) Var_15)) == (MR_Integer) 0))
      *X_2 = (MR_hl_field(0, Var_15, (MR_Integer) 0));
    else
      *X_2 = (MR_hl_field(1, Var_15, (MR_Integer) 0));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__ra_list__cons_3_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Box X_4,
  MR_Word List0_5,
  MR_Word * List_6)
{
  MR_bool succeeded = (List0_5 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Integer Size1_7;
  MR_Word T1_8;
  MR_Integer Size2_9;
  MR_Word T2_10;
  MR_Word Rest_11;
  MR_Word Var_13;

  if (succeeded)
  {
    Size1_7 = ((MR_Integer) ((MR_hl_field(1, List0_5, (MR_Integer) 0))));
    T1_8 = ((MR_Word) ((MR_hl_field(1, List0_5, (MR_Integer) 1))));
    Var_13 = ((MR_Word) ((MR_hl_field(1, List0_5, (MR_Integer) 2))));
    succeeded = (Var_13 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Size2_9 = ((MR_Integer) ((MR_hl_field(1, Var_13, (MR_Integer) 0))));
      T2_10 = ((MR_Word) ((MR_hl_field(1, Var_13, (MR_Integer) 1))));
      Rest_11 = ((MR_Word) ((MR_hl_field(1, Var_13, (MR_Integer) 2))));
      succeeded = (Size1_7 == Size2_9);
    }
  }
  if (succeeded)
  {
    MR_Integer NewSize_12;
    MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Size1_7);
    MR_Word Var_16;

    NewSize_12 = (MR_Integer) ((MR_Unsigned) Var_14 + (MR_Unsigned) Size2_9);
    {
      Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_16, 0) = X_4;
      MR_hl_field(1, Var_16, 1) = ((MR_Box) (T1_8));
      MR_hl_field(1, Var_16, 2) = ((MR_Box) (T2_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *List_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (NewSize_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_16));
      MR_hl_field(1, base, 2) = ((MR_Box) (Rest_11));
    }
  }
  else
  {
    MR_Word Var_18;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_18, 0) = X_4;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *List_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(1, base, 2) = ((MR_Box) (List0_5));
    }
  }
}

MR_Word MR_CALL 
mercury__ra_list__singleton_1_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Box X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5;

  {
    Var_5 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_5, 0) = X_3;
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_5));
    MR_hl_field(1, HeadVar__2_2, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__2_2;
}

void MR_CALL 
mercury__ra_list__init_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
mercury__ra_list____Unify____ra_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__ra_list____Unify____ra_list_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__ra_list____Compare____ra_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__ra_list____Compare____ra_list_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__ra_list____Unify____ra_list_bintree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__ra_list____Unify____ra_list_bintree_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__ra_list____Compare____ra_list_bintree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__ra_list____Compare____ra_list_bintree_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ra_list__init(void)
{
}

void mercury__ra_list__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__ra_list__ra_list__type_ctor_info_ra_list_1);
	MR_register_type_ctor_info(&mercury__ra_list__ra_list__type_ctor_info_ra_list_bintree_1);
}

void mercury__ra_list__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ra_list__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ra_list.
