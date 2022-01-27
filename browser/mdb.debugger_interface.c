/*
** Automatically generated from `debugger_interface.m'
** by the Mercury compiler,
** version rotd-2016-02-26
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


/* :- module mdb.debugger_interface. */
/* :- implementation. */

/*
INIT mercury__mdb__debugger_interface__init
ENDINIT
*/

#include "mdb.debugger_interface.mih"
#include "mdb.debugger_interface.mh"


#include "mdb.mih"
#include "mdbcomp.mih"
#include "mdb.interactive_query.mih"
#include "mdb.util.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_0;

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_trace_port_0;

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__list__ti_list_1univ__type_ctor_info_univ_0;

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1list__ti_list_1univ__type_ctor_info_univ_0;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_1[12];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_1;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_2;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_3;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_4;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_5[1];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_5;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_6;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_7;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_8;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_9;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_10;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_11;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_12[1];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_12;

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_13[1];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_13;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_14[1];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_14;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_15[1];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_15;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_16[1];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_16;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_17[1];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_17;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_18[1];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_18;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_19;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_20;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_21;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_22;

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_0[14];

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_1[1];

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_2[1];

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_3[7];

static const MR_DuPtagLayout mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_debugger_request_0[4];

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_debugger_request_0[23];

static const MR_Integer mdb__debugger_interface__mdb__debugger_interface__functor_number_map_debugger_request_0[23];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_0;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_1;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_2;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_3;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_4[13];

static const MR_DuArgLocn mdb__debugger_interface__mdb__debugger_interface__field_locns_debugger_response_0_4[13];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_4;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_5[13];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_5;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_6[2];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_6;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_7[1];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_7;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_8[2];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_8;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_9;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_10;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_11;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_12;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_13[1];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_13;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_14[1];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_14;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_15[5];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_15;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_16[4];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_16;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_17[1];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_17;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_18[3];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_18;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_19;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_20;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_21[1];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_21;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_22;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_23[3];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_23;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_24;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_25;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_26;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_27;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_28[1];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_28;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_29;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_30;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_31;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_32;

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_0[19];

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_1[1];

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_2[1];

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_3[12];

static const MR_DuPtagLayout mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_debugger_response_0[4];

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_debugger_response_0[33];

static const MR_Integer mdb__debugger_interface__mdb__debugger_interface__functor_number_map_debugger_response_0[33];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_0;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_1[1];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_1;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_2[1];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_2;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__debugger_interface__list__pti_list_1__pseudo_1;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_3[1];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_3;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_4[2];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_4;

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_0[1];

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_1[1];

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_2[1];

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_3[2];

static const MR_DuPtagLayout mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_match_1[4];

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_match_1[5];

static const MR_Integer mdb__debugger_interface__mdb__debugger_interface__functor_number_map_match_1[5];

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_pred_match_0_0[2];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_0;

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_pred_match_0_1[2];

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_1;

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_2;

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_0[1];

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_1[1];

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_2[1];

static const MR_DuPtagLayout mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_pred_match_0[3];

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_pred_match_0[3];

static const MR_Integer mdb__debugger_interface__mdb__debugger_interface__functor_number_map_pred_match_0[3];

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____arity_0_0_10001(
  MR_Box mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2);

static void MR_CALL 
mdb__debugger_interface____Compare____arity_0_0_10001(
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2,
  MR_Box mdb__debugger_interface__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____call_number_0_0_10001(
  MR_Box mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2);

static void MR_CALL 
mdb__debugger_interface____Compare____call_number_0_0_10001(
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2,
  MR_Box mdb__debugger_interface__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_request_0_0_10001(
  MR_Box mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2);

static void MR_CALL 
mdb__debugger_interface____Compare____debugger_request_0_0_10001(
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2,
  MR_Box mdb__debugger_interface__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_response_0_0_10001(
  MR_Box mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2);

static void MR_CALL 
mdb__debugger_interface____Compare____debugger_response_0_0_10001(
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2,
  MR_Box mdb__debugger_interface__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____depth_number_0_0_10001(
  MR_Box mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2);

static void MR_CALL 
mdb__debugger_interface____Compare____depth_number_0_0_10001(
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2,
  MR_Box mdb__debugger_interface__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____determinism_0_0_10001(
  MR_Box mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2);

static void MR_CALL 
mdb__debugger_interface____Compare____determinism_0_0_10001(
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2,
  MR_Box mdb__debugger_interface__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____event_number_0_0_10001(
  MR_Box mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2);

static void MR_CALL 
mdb__debugger_interface____Compare____event_number_0_0_10001(
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2,
  MR_Box mdb__debugger_interface__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____match_1_0_10001(
  MR_Box mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2,
  MR_Box mdb__debugger_interface__wrapper_arg_3);

static void MR_CALL 
mdb__debugger_interface____Compare____match_1_0_10001(
  MR_Box mdb__debugger_interface__wrapper_arg_1,
  MR_Box * mdb__debugger_interface__wrapper_arg_2,
  MR_Box mdb__debugger_interface__wrapper_arg_3,
  MR_Box mdb__debugger_interface__wrapper_arg_4);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____pred_match_0_0_10001(
  MR_Box mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2);

static void MR_CALL 
mdb__debugger_interface____Compare____pred_match_0_0_10001(
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2,
  MR_Box mdb__debugger_interface__wrapper_arg_3);

static void MR_CALL 
mdb__debugger_interface____Compare____pred_match_0_0(
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
  MR_Word mdb__debugger_interface__HeadVar__2_2,
  MR_Word mdb__debugger_interface__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____pred_match_0_0(
  MR_Word mdb__debugger_interface__HeadVar__1_1,
  MR_Word mdb__debugger_interface__HeadVar__2_2);

static void MR_CALL 
mdb__debugger_interface____Compare____match_1_0(
  MR_Word mdb__debugger_interface__TypeInfo_for_T_57,
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
  MR_Word mdb__debugger_interface__HeadVar__2_2,
  MR_Word mdb__debugger_interface__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____match_1_0(
  MR_Word mdb__debugger_interface__TypeInfo_for_T_17,
  MR_Word mdb__debugger_interface__HeadVar__1_1,
  MR_Word mdb__debugger_interface__HeadVar__2_2);

static void MR_CALL 
mdb__debugger_interface____Compare____event_number_0_0(
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
  MR_Integer mdb__debugger_interface__HeadVar__2_2,
  MR_Integer mdb__debugger_interface__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____event_number_0_0(
  MR_Integer mdb__debugger_interface__HeadVar__1_1,
  MR_Integer mdb__debugger_interface__HeadVar__2_2);

static void MR_CALL 
mdb__debugger_interface____Compare____determinism_0_0(
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
  MR_Integer mdb__debugger_interface__HeadVar__2_2,
  MR_Integer mdb__debugger_interface__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____determinism_0_0(
  MR_Integer mdb__debugger_interface__HeadVar__1_1,
  MR_Integer mdb__debugger_interface__HeadVar__2_2);

static void MR_CALL 
mdb__debugger_interface____Compare____depth_number_0_0(
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
  MR_Integer mdb__debugger_interface__HeadVar__2_2,
  MR_Integer mdb__debugger_interface__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____depth_number_0_0(
  MR_Integer mdb__debugger_interface__HeadVar__1_1,
  MR_Integer mdb__debugger_interface__HeadVar__2_2);

static void MR_CALL 
mdb__debugger_interface____Compare____debugger_response_0_0(
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
  MR_Word mdb__debugger_interface__HeadVar__2_2,
  MR_Word mdb__debugger_interface__HeadVar__3_3);

static void MR_CALL 
mdb__debugger_interface____Index____debugger_response_0_0(
  MR_Word mdb__debugger_interface__HeadVar__1_1,
  MR_Integer * mdb__debugger_interface__HeadVar__2_2);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_response_0_0(
  MR_Word mdb__debugger_interface__HeadVar__1_1,
  MR_Word mdb__debugger_interface__HeadVar__2_2);

static void MR_CALL 
mdb__debugger_interface____Compare____debugger_request_0_0(
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
  MR_Word mdb__debugger_interface__HeadVar__2_2,
  MR_Word mdb__debugger_interface__HeadVar__3_3);

static void MR_CALL 
mdb__debugger_interface____Index____debugger_request_0_0(
  MR_Word mdb__debugger_interface__HeadVar__1_1,
  MR_Integer * mdb__debugger_interface__HeadVar__2_2);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_request_0_0(
  MR_Word mdb__debugger_interface__HeadVar__1_1,
  MR_Word mdb__debugger_interface__HeadVar__2_2);

static void MR_CALL 
mdb__debugger_interface____Compare____call_number_0_0(
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
  MR_Integer mdb__debugger_interface__HeadVar__2_2,
  MR_Integer mdb__debugger_interface__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____call_number_0_0(
  MR_Integer mdb__debugger_interface__HeadVar__1_1,
  MR_Integer mdb__debugger_interface__HeadVar__2_2);

static void MR_CALL 
mdb__debugger_interface____Compare____arity_0_0(
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
  MR_Integer mdb__debugger_interface__HeadVar__2_2,
  MR_Integer mdb__debugger_interface__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____arity_0_0(
  MR_Integer mdb__debugger_interface__HeadVar__1_1,
  MR_Integer mdb__debugger_interface__HeadVar__2_2);

static void MR_CALL 
mdb__debugger_interface__get_variable_name_2_p_0(
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
  MR_String * mdb__debugger_interface__Options_4);

static void MR_CALL 
mdb__debugger_interface__init_mercury_string_1_p_0(
  MR_String * mdb__debugger_interface__HeadVar__1_1);

static void MR_CALL 
mdb__debugger_interface__get_object_file_name_2_p_0(
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
  MR_String * mdb__debugger_interface__ObjectFileName_4);

static void MR_CALL 
mdb__debugger_interface__get_mmc_options_2_p_0(
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
  MR_String * mdb__debugger_interface__Options_4);

static void MR_CALL 
mdb__debugger_interface__get_list_modules_to_import_3_p_0(
  MR_Word mdb__debugger_interface__DebuggerRequest_4,
  MR_Integer * mdb__debugger_interface__ListLength_5,
  MR_Word * mdb__debugger_interface__ModulesList_6);

static void MR_CALL 
mdb__debugger_interface__read_request_from_socket_5_p_0(
  MR_Word mdb__debugger_interface__SocketStream_6,
  MR_Word * mdb__debugger_interface__Request_7,
  MR_Integer * mdb__debugger_interface__RequestType_8);

static MR_bool MR_CALL 
mdb__debugger_interface__found_match_comp_14_p_0(
  MR_Integer mdb__debugger_interface__EventNumber_15,
  MR_Integer mdb__debugger_interface__CallNumber_16,
  MR_Integer mdb__debugger_interface__DepthNumber_17,
  MR_Word mdb__debugger_interface__Port_18,
  MR_String mdb__debugger_interface__NameType_19,
  MR_String mdb__debugger_interface__ModuleType_20,
  MR_String mdb__debugger_interface__DefModuleName_21,
  MR_String mdb__debugger_interface__PredName_22,
  MR_Integer mdb__debugger_interface__Arity_23,
  MR_Integer mdb__debugger_interface__ModeNum_24,
  MR_Integer mdb__debugger_interface__Determinism_25,
  MR_Word mdb__debugger_interface__Args_26,
  MR_String mdb__debugger_interface__Path_27,
  MR_Word mdb__debugger_interface__DebuggerRequest_28);

static MR_bool MR_CALL 
mdb__debugger_interface__match_2_p_0(
  MR_Word mdb__debugger_interface__TypeInfo_for_T_14,
  MR_Word mdb__debugger_interface__HeadVar__1_1,
  MR_Box mdb__debugger_interface__HeadVar__2_2);

static MR_bool MR_CALL 
mdb__debugger_interface__found_match_user_14_p_0(
  MR_Integer mdb__debugger_interface__EventNumber_15,
  MR_Integer mdb__debugger_interface__CallNumber_16,
  MR_Integer mdb__debugger_interface__DepthNumber_17,
  MR_Word mdb__debugger_interface__Port_18,
  MR_Word mdb__debugger_interface__PredOrFunc_19,
  MR_String mdb__debugger_interface__DeclModuleName_20,
  MR_String mdb__debugger_interface__DefModuleName_21,
  MR_String mdb__debugger_interface__PredName_22,
  MR_Integer mdb__debugger_interface__Arity_23,
  MR_Integer mdb__debugger_interface__ModeNum_24,
  MR_Integer mdb__debugger_interface__Determinism_25,
  MR_Word mdb__debugger_interface__Args_26,
  MR_String mdb__debugger_interface__Path_27,
  MR_Word mdb__debugger_interface__DebuggerRequest_28);

static MR_Integer MR_CALL 
mdb__debugger_interface__get_var_number_1_f_0(
  MR_Word mdb__debugger_interface__DebuggerRequest_3);

static void MR_CALL 
mdb__debugger_interface__output_current_live_var_names_5_p_0(
  MR_Word mdb__debugger_interface__LiveVarNameList_6,
  MR_Word mdb__debugger_interface__LiveVarTypeList_7,
  MR_Word mdb__debugger_interface__OutputStream_8);

static void MR_CALL 
mdb__debugger_interface__output_current_nth_var_4_p_0(
  MR_Word mdb__debugger_interface__Var_5,
  MR_Word mdb__debugger_interface__OutputStream_6);

static void MR_CALL 
mdb__debugger_interface__output_current_vars_5_p_0(
  MR_Word mdb__debugger_interface__VarList_6,
  MR_Word mdb__debugger_interface__StringList_7,
  MR_Word mdb__debugger_interface__OutputStream_8);

static void MR_CALL 
mdb__debugger_interface__output_current_slots_comp_16_p_0(
  MR_Integer mdb__debugger_interface__EventNumber_17,
  MR_Integer mdb__debugger_interface__CallNumber_18,
  MR_Integer mdb__debugger_interface__DepthNumber_19,
  MR_Word mdb__debugger_interface__Port_20,
  MR_String mdb__debugger_interface__NameType_21,
  MR_String mdb__debugger_interface__ModuleType_22,
  MR_String mdb__debugger_interface__DefModuleName_23,
  MR_String mdb__debugger_interface__PredName_24,
  MR_Integer mdb__debugger_interface__Arity_25,
  MR_Integer mdb__debugger_interface__ModeNum_26,
  MR_Integer mdb__debugger_interface__Determinism_27,
  MR_String mdb__debugger_interface__Path_28,
  MR_Integer mdb__debugger_interface__LineNo_29,
  MR_Word mdb__debugger_interface__OutputStream_30);

static void MR_CALL 
mdb__debugger_interface__output_current_slots_user_16_p_0(
  MR_Integer mdb__debugger_interface__EventNumber_17,
  MR_Integer mdb__debugger_interface__CallNumber_18,
  MR_Integer mdb__debugger_interface__DepthNumber_19,
  MR_Word mdb__debugger_interface__Port_20,
  MR_Word mdb__debugger_interface__PredOrFunc_21,
  MR_String mdb__debugger_interface__DeclModuleName_22,
  MR_String mdb__debugger_interface__DefModuleName_23,
  MR_String mdb__debugger_interface__PredName_24,
  MR_Integer mdb__debugger_interface__Arity_25,
  MR_Integer mdb__debugger_interface__ModeNum_26,
  MR_Integer mdb__debugger_interface__Determinism_27,
  MR_String mdb__debugger_interface__Path_28,
  MR_Integer mdb__debugger_interface__LineNo_29,
  MR_Word mdb__debugger_interface__OutputStream_30);


static /* final */ const MR_Box mdb__debugger_interface_scalar_common_1[8][2];




static /* final */ const MR_Box mdb__debugger_interface_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1)),
    ((MR_Box) (&mdb__debugger_interface_scalar_common_1[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "end of file"))
  },
};



#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.debugger_interface.mh"

#line 328 "debugger_interface.m"
void 
ML_DI_output_current_slots_user(
  MR_Integer mdb__debugger_interface__EventNumber_17,
  MR_Integer mdb__debugger_interface__CallNumber_18,
  MR_Integer mdb__debugger_interface__DepthNumber_19,
  MR_Word mdb__debugger_interface__Port_20,
  MR_Word mdb__debugger_interface__PredOrFunc_21,
  MR_String mdb__debugger_interface__DeclModuleName_22,
  MR_String mdb__debugger_interface__DefModuleName_23,
  MR_String mdb__debugger_interface__PredName_24,
  MR_Integer mdb__debugger_interface__Arity_25,
  MR_Integer mdb__debugger_interface__ModeNum_26,
  MR_Integer mdb__debugger_interface__Determinism_27,
  MR_String mdb__debugger_interface__Path_28,
  MR_Integer mdb__debugger_interface__LineNo_29,
  MR_Word mdb__debugger_interface__OutputStream_30)
#line 328 "debugger_interface.m"
{
#line 328 "debugger_interface.m"
	mdb__debugger_interface__output_current_slots_user_16_p_0((MR_Integer) mdb__debugger_interface__EventNumber_17, (MR_Integer) mdb__debugger_interface__CallNumber_18, (MR_Integer) mdb__debugger_interface__DepthNumber_19, (MR_Word) mdb__debugger_interface__Port_20, (MR_Word) mdb__debugger_interface__PredOrFunc_21, (MR_String) mdb__debugger_interface__DeclModuleName_22, (MR_String) mdb__debugger_interface__DefModuleName_23, (MR_String) mdb__debugger_interface__PredName_24, (MR_Integer) mdb__debugger_interface__Arity_25, (MR_Integer) mdb__debugger_interface__ModeNum_26, (MR_Integer) mdb__debugger_interface__Determinism_27, (MR_String) mdb__debugger_interface__Path_28, (MR_Integer) mdb__debugger_interface__LineNo_29, (MR_Word) mdb__debugger_interface__OutputStream_30);
}

#line 354 "debugger_interface.m"
void 
ML_DI_output_current_slots_comp(
  MR_Integer mdb__debugger_interface__EventNumber_17,
  MR_Integer mdb__debugger_interface__CallNumber_18,
  MR_Integer mdb__debugger_interface__DepthNumber_19,
  MR_Word mdb__debugger_interface__Port_20,
  MR_String mdb__debugger_interface__NameType_21,
  MR_String mdb__debugger_interface__ModuleType_22,
  MR_String mdb__debugger_interface__DefModuleName_23,
  MR_String mdb__debugger_interface__PredName_24,
  MR_Integer mdb__debugger_interface__Arity_25,
  MR_Integer mdb__debugger_interface__ModeNum_26,
  MR_Integer mdb__debugger_interface__Determinism_27,
  MR_String mdb__debugger_interface__Path_28,
  MR_Integer mdb__debugger_interface__LineNo_29,
  MR_Word mdb__debugger_interface__OutputStream_30)
#line 354 "debugger_interface.m"
{
#line 354 "debugger_interface.m"
	mdb__debugger_interface__output_current_slots_comp_16_p_0((MR_Integer) mdb__debugger_interface__EventNumber_17, (MR_Integer) mdb__debugger_interface__CallNumber_18, (MR_Integer) mdb__debugger_interface__DepthNumber_19, (MR_Word) mdb__debugger_interface__Port_20, (MR_String) mdb__debugger_interface__NameType_21, (MR_String) mdb__debugger_interface__ModuleType_22, (MR_String) mdb__debugger_interface__DefModuleName_23, (MR_String) mdb__debugger_interface__PredName_24, (MR_Integer) mdb__debugger_interface__Arity_25, (MR_Integer) mdb__debugger_interface__ModeNum_26, (MR_Integer) mdb__debugger_interface__Determinism_27, (MR_String) mdb__debugger_interface__Path_28, (MR_Integer) mdb__debugger_interface__LineNo_29, (MR_Word) mdb__debugger_interface__OutputStream_30);
}

#line 380 "debugger_interface.m"
void 
ML_DI_output_current_vars(
  MR_Word mdb__debugger_interface__VarList_6,
  MR_Word mdb__debugger_interface__StringList_7,
  MR_Word mdb__debugger_interface__OutputStream_8)
#line 380 "debugger_interface.m"
{
#line 380 "debugger_interface.m"
	mdb__debugger_interface__output_current_vars_5_p_0((MR_Word) mdb__debugger_interface__VarList_6, (MR_Word) mdb__debugger_interface__StringList_7, (MR_Word) mdb__debugger_interface__OutputStream_8);
}

#line 395 "debugger_interface.m"
void 
ML_DI_output_current_nth_var(
  MR_Word mdb__debugger_interface__Var_5,
  MR_Word mdb__debugger_interface__OutputStream_6)
#line 395 "debugger_interface.m"
{
#line 395 "debugger_interface.m"
	mdb__debugger_interface__output_current_nth_var_4_p_0((MR_Word) mdb__debugger_interface__Var_5, (MR_Word) mdb__debugger_interface__OutputStream_6);
}

#line 407 "debugger_interface.m"
void 
ML_DI_output_current_live_var_names(
  MR_Word mdb__debugger_interface__LiveVarNameList_6,
  MR_Word mdb__debugger_interface__LiveVarTypeList_7,
  MR_Word mdb__debugger_interface__OutputStream_8)
#line 407 "debugger_interface.m"
{
#line 407 "debugger_interface.m"
	mdb__debugger_interface__output_current_live_var_names_5_p_0((MR_Word) mdb__debugger_interface__LiveVarNameList_6, (MR_Word) mdb__debugger_interface__LiveVarTypeList_7, (MR_Word) mdb__debugger_interface__OutputStream_8);
}

#line 424 "debugger_interface.m"
MR_Integer 
ML_DI_get_var_number(
  MR_Word mdb__debugger_interface__DebuggerRequest_3)
#line 424 "debugger_interface.m"
{
#line 424 "debugger_interface.m"
	MR_Integer ret_value;
	ret_value = (MR_Integer)mdb__debugger_interface__get_var_number_1_f_0((MR_Word) mdb__debugger_interface__DebuggerRequest_3);
	return ret_value;
}

#line 441 "debugger_interface.m"
MR_bool 
ML_DI_found_match_user(
  MR_Integer mdb__debugger_interface__EventNumber_15,
  MR_Integer mdb__debugger_interface__CallNumber_16,
  MR_Integer mdb__debugger_interface__DepthNumber_17,
  MR_Word mdb__debugger_interface__Port_18,
  MR_Word mdb__debugger_interface__PredOrFunc_19,
  MR_String mdb__debugger_interface__DeclModuleName_20,
  MR_String mdb__debugger_interface__DefModuleName_21,
  MR_String mdb__debugger_interface__PredName_22,
  MR_Integer mdb__debugger_interface__Arity_23,
  MR_Integer mdb__debugger_interface__ModeNum_24,
  MR_Integer mdb__debugger_interface__Determinism_25,
  MR_Word mdb__debugger_interface__Args_26,
  MR_String mdb__debugger_interface__Path_27,
  MR_Word mdb__debugger_interface__DebuggerRequest_28)
#line 441 "debugger_interface.m"
{
#line 441 "debugger_interface.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__debugger_interface__found_match_user_14_p_0((MR_Integer) mdb__debugger_interface__EventNumber_15, (MR_Integer) mdb__debugger_interface__CallNumber_16, (MR_Integer) mdb__debugger_interface__DepthNumber_17, (MR_Word) mdb__debugger_interface__Port_18, (MR_Word) mdb__debugger_interface__PredOrFunc_19, (MR_String) mdb__debugger_interface__DeclModuleName_20, (MR_String) mdb__debugger_interface__DefModuleName_21, (MR_String) mdb__debugger_interface__PredName_22, (MR_Integer) mdb__debugger_interface__Arity_23, (MR_Integer) mdb__debugger_interface__ModeNum_24, (MR_Integer) mdb__debugger_interface__Determinism_25, (MR_Word) mdb__debugger_interface__Args_26, (MR_String) mdb__debugger_interface__Path_27, (MR_Word) mdb__debugger_interface__DebuggerRequest_28);
	return ret_value;
}

#line 503 "debugger_interface.m"
MR_bool 
ML_DI_found_match_comp(
  MR_Integer mdb__debugger_interface__EventNumber_15,
  MR_Integer mdb__debugger_interface__CallNumber_16,
  MR_Integer mdb__debugger_interface__DepthNumber_17,
  MR_Word mdb__debugger_interface__Port_18,
  MR_String mdb__debugger_interface__NameType_19,
  MR_String mdb__debugger_interface__ModuleType_20,
  MR_String mdb__debugger_interface__DefModuleName_21,
  MR_String mdb__debugger_interface__PredName_22,
  MR_Integer mdb__debugger_interface__Arity_23,
  MR_Integer mdb__debugger_interface__ModeNum_24,
  MR_Integer mdb__debugger_interface__Determinism_25,
  MR_Word mdb__debugger_interface__Args_26,
  MR_String mdb__debugger_interface__Path_27,
  MR_Word mdb__debugger_interface__DebuggerRequest_28)
#line 503 "debugger_interface.m"
{
#line 503 "debugger_interface.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__debugger_interface__found_match_comp_14_p_0((MR_Integer) mdb__debugger_interface__EventNumber_15, (MR_Integer) mdb__debugger_interface__CallNumber_16, (MR_Integer) mdb__debugger_interface__DepthNumber_17, (MR_Word) mdb__debugger_interface__Port_18, (MR_String) mdb__debugger_interface__NameType_19, (MR_String) mdb__debugger_interface__ModuleType_20, (MR_String) mdb__debugger_interface__DefModuleName_21, (MR_String) mdb__debugger_interface__PredName_22, (MR_Integer) mdb__debugger_interface__Arity_23, (MR_Integer) mdb__debugger_interface__ModeNum_24, (MR_Integer) mdb__debugger_interface__Determinism_25, (MR_Word) mdb__debugger_interface__Args_26, (MR_String) mdb__debugger_interface__Path_27, (MR_Word) mdb__debugger_interface__DebuggerRequest_28);
	return ret_value;
}

#line 555 "debugger_interface.m"
void 
ML_DI_read_request_from_socket(
  MR_Word mdb__debugger_interface__SocketStream_6,
  MR_Word * mdb__debugger_interface__Request_7,
  MR_Integer * mdb__debugger_interface__RequestType_8)
#line 555 "debugger_interface.m"
{
#line 555 "debugger_interface.m"
	mdb__debugger_interface__read_request_from_socket_5_p_0((MR_Word) mdb__debugger_interface__SocketStream_6, (MR_Word *) mdb__debugger_interface__Request_7, (MR_Integer *) mdb__debugger_interface__RequestType_8);
}

#line 586 "debugger_interface.m"
void 
ML_DI_get_list_modules_to_import(
  MR_Word mdb__debugger_interface__DebuggerRequest_4,
  MR_Integer * mdb__debugger_interface__ListLength_5,
  MR_Word * mdb__debugger_interface__ModulesList_6)
#line 586 "debugger_interface.m"
{
#line 586 "debugger_interface.m"
	mdb__debugger_interface__get_list_modules_to_import_3_p_0((MR_Word) mdb__debugger_interface__DebuggerRequest_4, (MR_Integer *) mdb__debugger_interface__ListLength_5, (MR_Word *) mdb__debugger_interface__ModulesList_6);
}

#line 604 "debugger_interface.m"
void 
ML_DI_get_mmc_options(
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
  MR_String * mdb__debugger_interface__Options_4)
#line 604 "debugger_interface.m"
{
#line 604 "debugger_interface.m"
	mdb__debugger_interface__get_mmc_options_2_p_0((MR_Word) mdb__debugger_interface__DebuggerRequest_3, (MR_String *) mdb__debugger_interface__Options_4);
}

#line 621 "debugger_interface.m"
void 
ML_DI_get_object_file_name(
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
  MR_String * mdb__debugger_interface__ObjectFileName_4)
#line 621 "debugger_interface.m"
{
#line 621 "debugger_interface.m"
	mdb__debugger_interface__get_object_file_name_2_p_0((MR_Word) mdb__debugger_interface__DebuggerRequest_3, (MR_String *) mdb__debugger_interface__ObjectFileName_4);
}

#line 634 "debugger_interface.m"
void 
ML_DI_init_mercury_string(
  MR_String * mdb__debugger_interface__HeadVar__1_1)
#line 634 "debugger_interface.m"
{
#line 634 "debugger_interface.m"
	mdb__debugger_interface__init_mercury_string_1_p_0((MR_String *) mdb__debugger_interface__HeadVar__1_1);
}

#line 645 "debugger_interface.m"
void 
ML_DI_get_variable_name(
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
  MR_String * mdb__debugger_interface__Options_4)
#line 645 "debugger_interface.m"
{
#line 645 "debugger_interface.m"
	mdb__debugger_interface__get_variable_name_2_p_0((MR_Word) mdb__debugger_interface__DebuggerRequest_3, (MR_String *) mdb__debugger_interface__Options_4);
}


const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_arity_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__debugger_interface____Unify____arity_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____arity_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "arity",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_call_number_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__debugger_interface____Unify____call_number_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____call_number_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "call_number",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_0 = {
  (MR_String) "hello_reply",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0 = {
  &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_trace_port_0 = {
  &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0 = {
  &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1,
  {
    (MR_TypeInfo) &mdb__debugger_interface__list__ti_list_1univ__type_ctor_info_univ_0
  }
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_1[12] = {
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_trace_port_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_pred_match_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1list__ti_list_1univ__type_ctor_info_univ_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_1 = {
  (MR_String) "forward_move",
  (MR_Integer) 12,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_2 = {
  (MR_String) "current_slots",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_3 = {
  (MR_String) "current_vars",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_4 = {
  (MR_String) "current_live_var_names",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_5 = {
  (MR_String) "current_nth_var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 5,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_5,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_6 = {
  (MR_String) "abort_prog",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 6,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_7 = {
  (MR_String) "no_trace",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_8 = {
  (MR_String) "retry",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 8,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_9 = {
  (MR_String) "stack",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_10 = {
  (MR_String) "nondet_stack",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 10,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_11 = {
  (MR_String) "stack_regs",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 9,
  (MR_Integer) 11,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_12[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_12 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 12,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_12,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_13[1] = {
  (MR_PseudoTypeInfo) &mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_13 = {
  (MR_String) "query",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 13,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_13,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_14[1] = {
  (MR_PseudoTypeInfo) &mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_14 = {
  (MR_String) "cc_query",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 14,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_14,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_15[1] = {
  (MR_PseudoTypeInfo) &mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_15 = {
  (MR_String) "io_query",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 15,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_15,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_16[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_16 = {
  (MR_String) "mmc_options",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 16,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_16,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_17[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_17 = {
  (MR_String) "browse",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 17,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_17,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_18[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_18 = {
  (MR_String) "link_collect",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 18,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_18,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_19 = {
  (MR_String) "collect",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 10,
  (MR_Integer) 19,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_20 = {
  (MR_String) "current_grade",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 11,
  (MR_Integer) 20,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_21 = {
  (MR_String) "collect_arg_on",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 12,
  (MR_Integer) 21,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_22 = {
  (MR_String) "collect_arg_off",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 13,
  (MR_Integer) 22,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_0[14] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_0,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_2,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_3,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_4,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_6,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_7,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_8,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_9,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_10,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_11,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_19,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_20,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_21,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_22
};

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_1[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_1
};

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_2[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_5
};

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_3[7] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_12,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_13,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_14,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_15,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_16,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_17,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_18
};

static const MR_DuPtagLayout mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_debugger_request_0[4] = {
  {
    (MR_Integer) 14,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_2
  },
  {
    (MR_Integer) 7,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_3
  }
};

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_debugger_request_0[23] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_6,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_17,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_14,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_19,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_22,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_21,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_20,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_4,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_5,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_2,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_3,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_12,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_1,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_0,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_15,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_18,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_16,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_7,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_10,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_13,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_8,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_9,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_11
};

static const MR_Integer mdb__debugger_interface__mdb__debugger_interface__functor_number_map_debugger_request_0[23] = {
  (MR_Integer) 13,
  (MR_Integer) 12,
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 7,
  (MR_Integer) 8,
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 20,
  (MR_Integer) 21,
  (MR_Integer) 18,
  (MR_Integer) 22,
  (MR_Integer) 11,
  (MR_Integer) 19,
  (MR_Integer) 2,
  (MR_Integer) 14,
  (MR_Integer) 16,
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_request_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__debugger_interface____Unify____debugger_request_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____debugger_request_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "debugger_request",
  {     mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_debugger_request_0 },
  {     mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_debugger_request_0 },
  (MR_Integer) 23,
  (MR_Integer) 4,
  mdb__debugger_interface__mdb__debugger_interface__functor_number_map_debugger_request_0
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_0 = {
  (MR_String) "hello",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_1 = {
  (MR_String) "start",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_2 = {
  (MR_String) "forward_move_match_found",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_3 = {
  (MR_String) "forward_move_match_not_found",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_4[13] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuArgLocn mdb__debugger_interface__mdb__debugger_interface__field_locns_debugger_response_0_4[13] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 4
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_4 = {
  (MR_String) "current_slots_user",
  (MR_Integer) 13,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 4,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_4,
  NULL,
  mdb__debugger_interface__mdb__debugger_interface__field_locns_debugger_response_0_4,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_5[13] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_5 = {
  (MR_String) "current_slots_comp",
  (MR_Integer) 13,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 5,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_5,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_6[2] = {
  (MR_PseudoTypeInfo) &mdb__debugger_interface__list__ti_list_1univ__type_ctor_info_univ_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_6 = {
  (MR_String) "current_vars",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 6,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_6,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_7 = {
  (MR_String) "current_nth_var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 7,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_7,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_8[2] = {
  (MR_PseudoTypeInfo) &mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_8 = {
  (MR_String) "current_live_var_names",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 8,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_8,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_9 = {
  (MR_String) "last_event",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_10 = {
  (MR_String) "browser_end",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 10,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_11 = {
  (MR_String) "mmc_option_ok",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 11,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_12 = {
  (MR_String) "ok",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 12,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_13[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_13 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 13,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_13,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_14[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_14 = {
  (MR_String) "level",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 14,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_14,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_15[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_15 = {
  (MR_String) "proc",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 15,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_15,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_16[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_16 = {
  (MR_String) "proc",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 16,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_16,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_17[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_17 = {
  (MR_String) "def_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 17,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_17,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_18[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_18 = {
  (MR_String) "detail",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 18,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_18,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_19 = {
  (MR_String) "pred",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 19,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_20 = {
  (MR_String) "func",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 9,
  (MR_Integer) 20,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_21[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_21 = {
  (MR_String) "det",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 9,
  (MR_Integer) 21,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_21,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_22 = {
  (MR_String) "end_stack",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 10,
  (MR_Integer) 22,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_23[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_23 = {
  (MR_String) "stack_regs",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 10,
  (MR_Integer) 23,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_23,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_24 = {
  (MR_String) "link_collect_succeeded",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 11,
  (MR_Integer) 24,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_25 = {
  (MR_String) "link_collect_failed",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 12,
  (MR_Integer) 25,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_26 = {
  (MR_String) "collect_linked",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 13,
  (MR_Integer) 26,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_27 = {
  (MR_String) "collect_not_linked",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 14,
  (MR_Integer) 27,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_28[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_28 = {
  (MR_String) "grade",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 11,
  (MR_Integer) 28,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_28,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_29 = {
  (MR_String) "execution_continuing",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 29,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_30 = {
  (MR_String) "execution_terminated",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 30,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_31 = {
  (MR_String) "collect_arg_on_ok",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 31,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_32 = {
  (MR_String) "collect_arg_off_ok",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 18,
  (MR_Integer) 32,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_0[19] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_0,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_1,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_2,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_3,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_9,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_10,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_11,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_12,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_19,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_20,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_22,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_24,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_25,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_26,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_27,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_29,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_30,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_31,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_32
};

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_1[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_4
};

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_2[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_5
};

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_3[12] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_6,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_7,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_8,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_13,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_14,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_15,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_16,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_17,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_18,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_21,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_23,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_28
};

static const MR_DuPtagLayout mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_debugger_response_0[4] = {
  {
    (MR_Integer) 19,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_2
  },
  {
    (MR_Integer) 12,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_3
  }
};

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_debugger_response_0[33] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_10,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_32,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_31,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_26,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_27,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_8,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_7,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_5,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_4,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_6,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_17,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_21,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_18,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_22,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_13,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_29,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_30,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_2,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_3,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_20,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_28,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_0,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_9,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_14,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_25,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_24,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_11,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_12,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_19,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_16,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_15,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_23,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_1
};

static const MR_Integer mdb__debugger_interface__mdb__debugger_interface__functor_number_map_debugger_response_0[33] = {
  (MR_Integer) 21,
  (MR_Integer) 32,
  (MR_Integer) 17,
  (MR_Integer) 18,
  (MR_Integer) 8,
  (MR_Integer) 7,
  (MR_Integer) 9,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 22,
  (MR_Integer) 0,
  (MR_Integer) 26,
  (MR_Integer) 27,
  (MR_Integer) 14,
  (MR_Integer) 23,
  (MR_Integer) 30,
  (MR_Integer) 29,
  (MR_Integer) 10,
  (MR_Integer) 12,
  (MR_Integer) 28,
  (MR_Integer) 19,
  (MR_Integer) 11,
  (MR_Integer) 13,
  (MR_Integer) 31,
  (MR_Integer) 25,
  (MR_Integer) 24,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 20,
  (MR_Integer) 15,
  (MR_Integer) 16,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__debugger_interface____Unify____debugger_response_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____debugger_response_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "debugger_response",
  {     mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_debugger_response_0 },
  {     mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_debugger_response_0 },
  (MR_Integer) 33,
  (MR_Integer) 4,
  mdb__debugger_interface__mdb__debugger_interface__functor_number_map_debugger_response_0
};

const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_depth_number_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__debugger_interface____Unify____depth_number_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____depth_number_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "depth_number",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_determinism_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__debugger_interface____Unify____determinism_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____determinism_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "determinism",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_event_number_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__debugger_interface____Unify____event_number_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____event_number_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "event_number",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_0 = {
  (MR_String) "nop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_1 = {
  (MR_String) "exact",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_2 = {
  (MR_String) "neg",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__debugger_interface__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_3[1] = {
  (MR_PseudoTypeInfo) &mdb__debugger_interface__list__pti_list_1__pseudo_1
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_3 = {
  (MR_String) "list",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_4[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_4 = {
  (MR_String) "interval",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_4,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_0[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_0
};

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_1[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_1
};

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_2[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_2
};

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_3[2] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_3,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_4
};

static const MR_DuPtagLayout mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_match_1[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_3
  }
};

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_match_1[5] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_1,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_4,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_3,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_2,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_0
};

static const MR_Integer mdb__debugger_interface__mdb__debugger_interface__functor_number_map_match_1[5] = {
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1 = {
  (MR_Integer) 1,
  (MR_Integer) 16,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__debugger_interface____Unify____match_1_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____match_1_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "match",
  {     mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_match_1 },
  {     mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_match_1 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mdb__debugger_interface__mdb__debugger_interface__functor_number_map_match_1
};

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
  }
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_pred_match_0_0[2] = {
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_0 = {
  (MR_String) "match_user_pred",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__debugger_interface__mdb__debugger_interface__field_types_pred_match_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_pred_match_0_1[2] = {
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_1 = {
  (MR_String) "match_compiler_generated_pred",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__debugger_interface__mdb__debugger_interface__field_types_pred_match_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_2 = {
  (MR_String) "match_any_pred",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_0[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_2
};

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_1[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_0
};

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_2[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_1
};

static const MR_DuPtagLayout mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_pred_match_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_2
  }
};

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_pred_match_0[3] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_2,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_1,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_0
};

static const MR_Integer mdb__debugger_interface__mdb__debugger_interface__functor_number_map_pred_match_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_pred_match_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__debugger_interface____Unify____pred_match_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____pred_match_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "pred_match",
  {     mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_pred_match_0 },
  {     mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_pred_match_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdb__debugger_interface__mdb__debugger_interface__functor_number_map_pred_match_0
};

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____arity_0_0_10001(
  MR_Box mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2)
{
  {
    MR_bool mdb__debugger_interface__succeeded;

    {
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____arity_0_0(((MR_Integer) mdb__debugger_interface__wrapper_arg_1), ((MR_Integer) mdb__debugger_interface__wrapper_arg_2));
    }
    return mdb__debugger_interface__succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____arity_0_0_10001(
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2,
  MR_Box mdb__debugger_interface__wrapper_arg_3)
{
  {
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

    {
      mdb__debugger_interface____Compare____arity_0_0(&mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Integer) mdb__debugger_interface__wrapper_arg_2), ((MR_Integer) mdb__debugger_interface__wrapper_arg_3));
    }
    *mdb__debugger_interface__wrapper_arg_1 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____call_number_0_0_10001(
  MR_Box mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2)
{
  {
    MR_bool mdb__debugger_interface__succeeded;

    {
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____call_number_0_0(((MR_Integer) mdb__debugger_interface__wrapper_arg_1), ((MR_Integer) mdb__debugger_interface__wrapper_arg_2));
    }
    return mdb__debugger_interface__succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____call_number_0_0_10001(
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2,
  MR_Box mdb__debugger_interface__wrapper_arg_3)
{
  {
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

    {
      mdb__debugger_interface____Compare____call_number_0_0(&mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Integer) mdb__debugger_interface__wrapper_arg_2), ((MR_Integer) mdb__debugger_interface__wrapper_arg_3));
    }
    *mdb__debugger_interface__wrapper_arg_1 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_request_0_0_10001(
  MR_Box mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2)
{
  {
    MR_bool mdb__debugger_interface__succeeded;

    {
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____debugger_request_0_0(((MR_Word) mdb__debugger_interface__wrapper_arg_1), ((MR_Word) mdb__debugger_interface__wrapper_arg_2));
    }
    return mdb__debugger_interface__succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____debugger_request_0_0_10001(
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2,
  MR_Box mdb__debugger_interface__wrapper_arg_3)
{
  {
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

    {
      mdb__debugger_interface____Compare____debugger_request_0_0(&mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Word) mdb__debugger_interface__wrapper_arg_2), ((MR_Word) mdb__debugger_interface__wrapper_arg_3));
    }
    *mdb__debugger_interface__wrapper_arg_1 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_response_0_0_10001(
  MR_Box mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2)
{
  {
    MR_bool mdb__debugger_interface__succeeded;

    {
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____debugger_response_0_0(((MR_Word) mdb__debugger_interface__wrapper_arg_1), ((MR_Word) mdb__debugger_interface__wrapper_arg_2));
    }
    return mdb__debugger_interface__succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____debugger_response_0_0_10001(
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2,
  MR_Box mdb__debugger_interface__wrapper_arg_3)
{
  {
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

    {
      mdb__debugger_interface____Compare____debugger_response_0_0(&mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Word) mdb__debugger_interface__wrapper_arg_2), ((MR_Word) mdb__debugger_interface__wrapper_arg_3));
    }
    *mdb__debugger_interface__wrapper_arg_1 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____depth_number_0_0_10001(
  MR_Box mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2)
{
  {
    MR_bool mdb__debugger_interface__succeeded;

    {
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____depth_number_0_0(((MR_Integer) mdb__debugger_interface__wrapper_arg_1), ((MR_Integer) mdb__debugger_interface__wrapper_arg_2));
    }
    return mdb__debugger_interface__succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____depth_number_0_0_10001(
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2,
  MR_Box mdb__debugger_interface__wrapper_arg_3)
{
  {
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

    {
      mdb__debugger_interface____Compare____depth_number_0_0(&mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Integer) mdb__debugger_interface__wrapper_arg_2), ((MR_Integer) mdb__debugger_interface__wrapper_arg_3));
    }
    *mdb__debugger_interface__wrapper_arg_1 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____determinism_0_0_10001(
  MR_Box mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2)
{
  {
    MR_bool mdb__debugger_interface__succeeded;

    {
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____determinism_0_0(((MR_Integer) mdb__debugger_interface__wrapper_arg_1), ((MR_Integer) mdb__debugger_interface__wrapper_arg_2));
    }
    return mdb__debugger_interface__succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____determinism_0_0_10001(
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2,
  MR_Box mdb__debugger_interface__wrapper_arg_3)
{
  {
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

    {
      mdb__debugger_interface____Compare____determinism_0_0(&mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Integer) mdb__debugger_interface__wrapper_arg_2), ((MR_Integer) mdb__debugger_interface__wrapper_arg_3));
    }
    *mdb__debugger_interface__wrapper_arg_1 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____event_number_0_0_10001(
  MR_Box mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2)
{
  {
    MR_bool mdb__debugger_interface__succeeded;

    {
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____event_number_0_0(((MR_Integer) mdb__debugger_interface__wrapper_arg_1), ((MR_Integer) mdb__debugger_interface__wrapper_arg_2));
    }
    return mdb__debugger_interface__succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____event_number_0_0_10001(
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2,
  MR_Box mdb__debugger_interface__wrapper_arg_3)
{
  {
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

    {
      mdb__debugger_interface____Compare____event_number_0_0(&mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Integer) mdb__debugger_interface__wrapper_arg_2), ((MR_Integer) mdb__debugger_interface__wrapper_arg_3));
    }
    *mdb__debugger_interface__wrapper_arg_1 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____match_1_0_10001(
  MR_Box mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2,
  MR_Box mdb__debugger_interface__wrapper_arg_3)
{
  {
    MR_bool mdb__debugger_interface__succeeded;

    {
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(((MR_Word) mdb__debugger_interface__wrapper_arg_1), ((MR_Word) mdb__debugger_interface__wrapper_arg_2), ((MR_Word) mdb__debugger_interface__wrapper_arg_3));
    }
    return mdb__debugger_interface__succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____match_1_0_10001(
  MR_Box mdb__debugger_interface__wrapper_arg_1,
  MR_Box * mdb__debugger_interface__wrapper_arg_2,
  MR_Box mdb__debugger_interface__wrapper_arg_3,
  MR_Box mdb__debugger_interface__wrapper_arg_4)
{
  {
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

    {
      mdb__debugger_interface____Compare____match_1_0(((MR_Word) mdb__debugger_interface__wrapper_arg_1), &mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Word) mdb__debugger_interface__wrapper_arg_3), ((MR_Word) mdb__debugger_interface__wrapper_arg_4));
    }
    *mdb__debugger_interface__wrapper_arg_2 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____pred_match_0_0_10001(
  MR_Box mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2)
{
  {
    MR_bool mdb__debugger_interface__succeeded;

    {
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____pred_match_0_0(((MR_Word) mdb__debugger_interface__wrapper_arg_1), ((MR_Word) mdb__debugger_interface__wrapper_arg_2));
    }
    return mdb__debugger_interface__succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____pred_match_0_0_10001(
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
  MR_Box mdb__debugger_interface__wrapper_arg_2,
  MR_Box mdb__debugger_interface__wrapper_arg_3)
{
  {
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

    {
      mdb__debugger_interface____Compare____pred_match_0_0(&mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Word) mdb__debugger_interface__wrapper_arg_2), ((MR_Word) mdb__debugger_interface__wrapper_arg_3));
    }
    *mdb__debugger_interface__wrapper_arg_1 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____pred_match_0_0(
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
  MR_Word mdb__debugger_interface__HeadVar__2_2,
  MR_Word mdb__debugger_interface__HeadVar__3_3)
{
  {
    MR_bool mdb__debugger_interface__succeeded;
    MR_Integer mdb__debugger_interface__CastX_30 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;
    MR_Integer mdb__debugger_interface__CastY_31 = (MR_Integer) mdb__debugger_interface__HeadVar__3_3;

    mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastX_30 == mdb__debugger_interface__CastY_31);
    if (mdb__debugger_interface__succeeded)
      *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__debugger_interface__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mdb__debugger_interface__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mdb__debugger_interface__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mdb__debugger_interface__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mdb__debugger_interface__V_8_8;

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[6], &mdb__debugger_interface__V_8_8, ((MR_Box) (mdb__debugger_interface__V_39_39)), ((MR_Box) (mdb__debugger_interface__V_6_6)));
                  }
                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_8_8 == (MR_Integer) 0);
                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                  if (mdb__debugger_interface__succeeded)
                    *mdb__debugger_interface__HeadVar__1_1 = mdb__debugger_interface__V_8_8;
                  else
                    {
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[3], mdb__debugger_interface__HeadVar__1_1, ((MR_Box) (mdb__debugger_interface__V_38_38)), ((MR_Box) (mdb__debugger_interface__V_7_7)));
                      }
                    }
                }
                break;
              case (MR_Integer) 2:
                *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__debugger_interface__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mdb__debugger_interface__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mdb__debugger_interface__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mdb__debugger_interface__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mdb__debugger_interface__V_23_23;

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[3], &mdb__debugger_interface__V_23_23, ((MR_Box) (mdb__debugger_interface__V_37_37)), ((MR_Box) (mdb__debugger_interface__V_21_21)));
                  }
                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_23_23 == (MR_Integer) 0);
                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                  if (mdb__debugger_interface__succeeded)
                    *mdb__debugger_interface__HeadVar__1_1 = mdb__debugger_interface__V_23_23;
                  else
                    {
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[3], mdb__debugger_interface__HeadVar__1_1, ((MR_Box) (mdb__debugger_interface__V_36_36)), ((MR_Box) (mdb__debugger_interface__V_22_22)));
                      }
                    }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____pred_match_0_0(
  MR_Word mdb__debugger_interface__HeadVar__1_1,
  MR_Word mdb__debugger_interface__HeadVar__2_2)
{
  {
    MR_bool mdb__debugger_interface__succeeded;
    MR_Integer mdb__debugger_interface__CastX_13 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
    MR_Integer mdb__debugger_interface__CastY_14 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

    mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastX_13 == mdb__debugger_interface__CastY_14);
    if (mdb__debugger_interface__succeeded)
      mdb__debugger_interface__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer mdb__debugger_interface__CastX_11 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
            MR_Integer mdb__debugger_interface__CastY_12 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

            mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_12 == mdb__debugger_interface__CastX_11);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__debugger_interface__TypeCtorInfo_17_17;
            MR_Word mdb__debugger_interface__TypeCtorInfo_18_18;
            MR_Word mdb__debugger_interface__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__debugger_interface__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdb__debugger_interface__V_5_5;
            MR_Word mdb__debugger_interface__V_6_6;

            mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__debugger_interface__succeeded)
              {
                mdb__debugger_interface__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
                mdb__debugger_interface__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                mdb__debugger_interface__TypeCtorInfo_17_17 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
                {
                  mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_17_17, mdb__debugger_interface__V_3_3, mdb__debugger_interface__V_5_5);
                }
                if (mdb__debugger_interface__succeeded)
                  {
                    mdb__debugger_interface__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                    {
                      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_18_18, mdb__debugger_interface__V_4_4, mdb__debugger_interface__V_6_6);
                    }
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__debugger_interface__TypeCtorInfo_15_15;
            MR_Word mdb__debugger_interface__TypeCtorInfo_16_16;
            MR_Word mdb__debugger_interface__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__debugger_interface__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdb__debugger_interface__V_9_9;
            MR_Word mdb__debugger_interface__V_10_10;

            mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__debugger_interface__succeeded)
              {
                mdb__debugger_interface__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
                mdb__debugger_interface__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                mdb__debugger_interface__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                {
                  mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_15_15, mdb__debugger_interface__V_7_7, mdb__debugger_interface__V_9_9);
                }
                if (mdb__debugger_interface__succeeded)
                  {
                    mdb__debugger_interface__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                    {
                      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_16_16, mdb__debugger_interface__V_8_8, mdb__debugger_interface__V_10_10);
                    }
                  }
              }
          }
          break;
      }
    return mdb__debugger_interface__succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____match_1_0(
  MR_Word mdb__debugger_interface__TypeInfo_for_T_57,
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
  MR_Word mdb__debugger_interface__HeadVar__2_2,
  MR_Word mdb__debugger_interface__HeadVar__3_3)
{
  {
    MR_bool mdb__debugger_interface__succeeded;
    MR_Integer mdb__debugger_interface__CastX_55 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;
    MR_Integer mdb__debugger_interface__CastY_56 = (MR_Integer) mdb__debugger_interface__HeadVar__3_3;

    mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastX_55 == mdb__debugger_interface__CastY_56);
    if (mdb__debugger_interface__succeeded)
      *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box mdb__debugger_interface__V_60_60 = (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box mdb__debugger_interface__V_11_11 = (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0));

                  {
                    mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_for_T_57, mdb__debugger_interface__HeadVar__1_1, mdb__debugger_interface__V_60_60, mdb__debugger_interface__V_11_11);
                  }
                }
                break;
              case (MR_Integer) 2:
                *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box mdb__debugger_interface__V_64_64 = (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Box mdb__debugger_interface__V_23_23 = (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0));

                  {
                    mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_for_T_57, mdb__debugger_interface__HeadVar__1_1, mdb__debugger_interface__V_64_64, mdb__debugger_interface__V_23_23);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mdb__debugger_interface__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word mdb__debugger_interface__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__list____Compare____list_1_0(mdb__debugger_interface__TypeInfo_for_T_57, mdb__debugger_interface__HeadVar__1_1, mdb__debugger_interface__V_63_63, mdb__debugger_interface__V_35_35);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box mdb__debugger_interface__V_61_61 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2));
                MR_Box mdb__debugger_interface__V_62_62 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1));

                switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Box mdb__debugger_interface__V_52_52 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1));
                          MR_Box mdb__debugger_interface__V_53_53 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2));
                          MR_Word mdb__debugger_interface__V_54_54;

                          {
                            mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_for_T_57, &mdb__debugger_interface__V_54_54, mdb__debugger_interface__V_62_62, mdb__debugger_interface__V_52_52);
                          }
                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_54_54 == (MR_Integer) 0);
                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                          if (mdb__debugger_interface__succeeded)
                            *mdb__debugger_interface__HeadVar__1_1 = mdb__debugger_interface__V_54_54;
                          else
                            {
                              mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_for_T_57, mdb__debugger_interface__HeadVar__1_1, mdb__debugger_interface__V_61_61, mdb__debugger_interface__V_53_53);
                            }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____match_1_0(
  MR_Word mdb__debugger_interface__TypeInfo_for_T_17,
  MR_Word mdb__debugger_interface__HeadVar__1_1,
  MR_Word mdb__debugger_interface__HeadVar__2_2)
{
  {
    MR_bool mdb__debugger_interface__succeeded;
    MR_Integer mdb__debugger_interface__CastX_15 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
    MR_Integer mdb__debugger_interface__CastY_16 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

    mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastX_15 == mdb__debugger_interface__CastY_16);
    if (mdb__debugger_interface__succeeded)
      mdb__debugger_interface__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer mdb__debugger_interface__CastX_3 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
            MR_Integer mdb__debugger_interface__CastY_4 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

            mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_4 == mdb__debugger_interface__CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box mdb__debugger_interface__V_5_5 = (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0));
            MR_Box mdb__debugger_interface__V_6_6;

            mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__debugger_interface__succeeded)
              {
                mdb__debugger_interface__V_6_6 = (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0));
                {
                  mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_for_T_17, mdb__debugger_interface__V_5_5, mdb__debugger_interface__V_6_6);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box mdb__debugger_interface__V_7_7 = (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0));
            MR_Box mdb__debugger_interface__V_8_8;

            mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__debugger_interface__succeeded)
              {
                mdb__debugger_interface__V_8_8 = (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0));
                {
                  mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_for_T_17, mdb__debugger_interface__V_7_7, mdb__debugger_interface__V_8_8);
                }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mdb__debugger_interface__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mdb__debugger_interface__V_10_10;

                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (mdb__debugger_interface__succeeded)
                  {
                    mdb__debugger_interface__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      mdb__debugger_interface__succeeded = mercury__list____Unify____list_1_0(mdb__debugger_interface__TypeInfo_for_T_17, mdb__debugger_interface__V_9_9, mdb__debugger_interface__V_10_10);
                    }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box mdb__debugger_interface__V_11_11 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1));
                MR_Box mdb__debugger_interface__V_12_12 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2));
                MR_Box mdb__debugger_interface__V_13_13;
                MR_Box mdb__debugger_interface__V_14_14;

                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (mdb__debugger_interface__succeeded)
                  {
                    mdb__debugger_interface__V_13_13 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1));
                    mdb__debugger_interface__V_14_14 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2));
                    {
                      mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_for_T_17, mdb__debugger_interface__V_11_11, mdb__debugger_interface__V_13_13);
                    }
                    if (mdb__debugger_interface__succeeded)
                      {
                        mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_for_T_17, mdb__debugger_interface__V_12_12, mdb__debugger_interface__V_14_14);
                      }
                  }
              }
              break;
          }
          break;
      }
    return mdb__debugger_interface__succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____event_number_0_0(
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
  MR_Integer mdb__debugger_interface__HeadVar__2_2,
  MR_Integer mdb__debugger_interface__HeadVar__3_3)
{
  {
    MR_bool mdb__debugger_interface__succeeded;
    MR_Integer mdb__debugger_interface__Cast_HeadVar1_4 = mdb__debugger_interface__HeadVar__2_2;
    MR_Integer mdb__debugger_interface__Cast_HeadVar2_5 = mdb__debugger_interface__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__debugger_interface__HeadVar__1_1, mdb__debugger_interface__Cast_HeadVar1_4, mdb__debugger_interface__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____event_number_0_0(
  MR_Integer mdb__debugger_interface__HeadVar__1_1,
  MR_Integer mdb__debugger_interface__HeadVar__2_2)
{
  {
    MR_bool mdb__debugger_interface__succeeded;
    MR_Integer mdb__debugger_interface__Cast_HeadVar1_3 = mdb__debugger_interface__HeadVar__1_1;
    MR_Integer mdb__debugger_interface__Cast_HeadVar2_4 = mdb__debugger_interface__HeadVar__2_2;

    mdb__debugger_interface__succeeded = (mdb__debugger_interface__Cast_HeadVar1_3 == mdb__debugger_interface__Cast_HeadVar2_4);
    return mdb__debugger_interface__succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____determinism_0_0(
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
  MR_Integer mdb__debugger_interface__HeadVar__2_2,
  MR_Integer mdb__debugger_interface__HeadVar__3_3)
{
  {
    MR_bool mdb__debugger_interface__succeeded;
    MR_Integer mdb__debugger_interface__Cast_HeadVar1_4 = mdb__debugger_interface__HeadVar__2_2;
    MR_Integer mdb__debugger_interface__Cast_HeadVar2_5 = mdb__debugger_interface__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__debugger_interface__HeadVar__1_1, mdb__debugger_interface__Cast_HeadVar1_4, mdb__debugger_interface__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____determinism_0_0(
  MR_Integer mdb__debugger_interface__HeadVar__1_1,
  MR_Integer mdb__debugger_interface__HeadVar__2_2)
{
  {
    MR_bool mdb__debugger_interface__succeeded;
    MR_Integer mdb__debugger_interface__Cast_HeadVar1_3 = mdb__debugger_interface__HeadVar__1_1;
    MR_Integer mdb__debugger_interface__Cast_HeadVar2_4 = mdb__debugger_interface__HeadVar__2_2;

    mdb__debugger_interface__succeeded = (mdb__debugger_interface__Cast_HeadVar1_3 == mdb__debugger_interface__Cast_HeadVar2_4);
    return mdb__debugger_interface__succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____depth_number_0_0(
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
  MR_Integer mdb__debugger_interface__HeadVar__2_2,
  MR_Integer mdb__debugger_interface__HeadVar__3_3)
{
  {
    MR_bool mdb__debugger_interface__succeeded;
    MR_Integer mdb__debugger_interface__Cast_HeadVar1_4 = mdb__debugger_interface__HeadVar__2_2;
    MR_Integer mdb__debugger_interface__Cast_HeadVar2_5 = mdb__debugger_interface__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__debugger_interface__HeadVar__1_1, mdb__debugger_interface__Cast_HeadVar1_4, mdb__debugger_interface__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____depth_number_0_0(
  MR_Integer mdb__debugger_interface__HeadVar__1_1,
  MR_Integer mdb__debugger_interface__HeadVar__2_2)
{
  {
    MR_bool mdb__debugger_interface__succeeded;
    MR_Integer mdb__debugger_interface__Cast_HeadVar1_3 = mdb__debugger_interface__HeadVar__1_1;
    MR_Integer mdb__debugger_interface__Cast_HeadVar2_4 = mdb__debugger_interface__HeadVar__2_2;

    mdb__debugger_interface__succeeded = (mdb__debugger_interface__Cast_HeadVar1_3 == mdb__debugger_interface__Cast_HeadVar2_4);
    return mdb__debugger_interface__succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____debugger_response_0_0(
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
  MR_Word mdb__debugger_interface__HeadVar__2_2,
  MR_Word mdb__debugger_interface__HeadVar__3_3)
{
  {
    MR_bool mdb__debugger_interface__succeeded;
    MR_Integer mdb__debugger_interface__CastX_146 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;
    MR_Integer mdb__debugger_interface__CastY_147 = (MR_Integer) mdb__debugger_interface__HeadVar__3_3;

    mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastX_146 == mdb__debugger_interface__CastY_147);
    if (mdb__debugger_interface__succeeded)
      *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mdb__debugger_interface__V_4_4;
        MR_Integer mdb__debugger_interface__V_5_5;

        {
          mdb__debugger_interface____Index____debugger_response_0_0(mdb__debugger_interface__HeadVar__2_2, &mdb__debugger_interface__V_4_4);
        }
        {
          mdb__debugger_interface____Index____debugger_response_0_0(mdb__debugger_interface__HeadVar__3_3, &mdb__debugger_interface__V_5_5);
        }
        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_4_4 < mdb__debugger_interface__V_5_5);
        if (mdb__debugger_interface__succeeded)
          *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_4_4 > mdb__debugger_interface__V_5_5);
            if (mdb__debugger_interface__succeeded)
              *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
            else
              {
                MR_Word mdb__debugger_interface__V_6_6;

                switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mdb__debugger_interface__HeadVar__2_2)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 9:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 11:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 12:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 13:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 14:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 15:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 16:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 17:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 18:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Integer mdb__debugger_interface__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Integer mdb__debugger_interface__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                      MR_Integer mdb__debugger_interface__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
                      MR_Word mdb__debugger_interface__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 15);
                      MR_Word mdb__debugger_interface__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                      MR_String mdb__debugger_interface__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
                      MR_String mdb__debugger_interface__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 5)));
                      MR_String mdb__debugger_interface__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 6)));
                      MR_Integer mdb__debugger_interface__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 7)));
                      MR_Integer mdb__debugger_interface__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 8)));
                      MR_Integer mdb__debugger_interface__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 9)));
                      MR_String mdb__debugger_interface__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 10)));
                      MR_Integer mdb__debugger_interface__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 11)));
                      MR_Integer mdb__debugger_interface__V_20_20;
                      MR_Integer mdb__debugger_interface__V_21_21;
                      MR_Integer mdb__debugger_interface__V_22_22;
                      MR_Word mdb__debugger_interface__V_23_23;
                      MR_Word mdb__debugger_interface__V_24_24;
                      MR_String mdb__debugger_interface__V_25_25;
                      MR_String mdb__debugger_interface__V_26_26;
                      MR_String mdb__debugger_interface__V_27_27;
                      MR_Integer mdb__debugger_interface__V_28_28;
                      MR_Integer mdb__debugger_interface__V_29_29;
                      MR_Integer mdb__debugger_interface__V_30_30;
                      MR_String mdb__debugger_interface__V_31_31;
                      MR_Integer mdb__debugger_interface__V_32_32;
                      MR_Word mdb__debugger_interface__V_33_33;

                      mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
                      if (mdb__debugger_interface__succeeded)
                        {
                          mdb__debugger_interface__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)));
                          mdb__debugger_interface__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
                          mdb__debugger_interface__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
                          mdb__debugger_interface__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 3)))) & (MR_Integer) 15);
                          mdb__debugger_interface__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                          mdb__debugger_interface__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 4)));
                          mdb__debugger_interface__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 5)));
                          mdb__debugger_interface__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 6)));
                          mdb__debugger_interface__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 7)));
                          mdb__debugger_interface__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 8)));
                          mdb__debugger_interface__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 9)));
                          mdb__debugger_interface__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 10)));
                          mdb__debugger_interface__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 11)));
                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_33_33, mdb__debugger_interface__V_7_7, mdb__debugger_interface__V_20_20);
                          }
                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_33_33 == (MR_Integer) 0);
                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                          if (mdb__debugger_interface__succeeded)
                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_33_33;
                          else
                            {
                              MR_Word mdb__debugger_interface__V_34_34;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_34_34, mdb__debugger_interface__V_8_8, mdb__debugger_interface__V_21_21);
                              }
                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_34_34 == (MR_Integer) 0);
                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                              if (mdb__debugger_interface__succeeded)
                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_34_34;
                              else
                                {
                                  MR_Word mdb__debugger_interface__V_35_35;

                                  {
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_35_35, mdb__debugger_interface__V_9_9, mdb__debugger_interface__V_22_22);
                                  }
                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_35_35 == (MR_Integer) 0);
                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                  if (mdb__debugger_interface__succeeded)
                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_35_35;
                                  else
                                    {
                                      MR_Word mdb__debugger_interface__V_36_36;
                                      MR_Integer mdb__debugger_interface__V_201_201 = (MR_Integer) mdb__debugger_interface__V_10_10;
                                      MR_Integer mdb__debugger_interface__V_202_202 = (MR_Integer) mdb__debugger_interface__V_23_23;

                                      {
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_36_36, mdb__debugger_interface__V_201_201, mdb__debugger_interface__V_202_202);
                                      }
                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_36_36 == (MR_Integer) 0);
                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                      if (mdb__debugger_interface__succeeded)
                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_36_36;
                                      else
                                        {
                                          MR_Word mdb__debugger_interface__V_37_37;
                                          MR_Integer mdb__debugger_interface__V_203_203 = (MR_Integer) mdb__debugger_interface__V_11_11;
                                          MR_Integer mdb__debugger_interface__V_204_204 = (MR_Integer) mdb__debugger_interface__V_24_24;

                                          {
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_37_37, mdb__debugger_interface__V_203_203, mdb__debugger_interface__V_204_204);
                                          }
                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_37_37 == (MR_Integer) 0);
                                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                          if (mdb__debugger_interface__succeeded)
                                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_37_37;
                                          else
                                            {
                                              MR_Word mdb__debugger_interface__V_38_38;

                                              {
                                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_38_38, mdb__debugger_interface__V_12_12, mdb__debugger_interface__V_25_25);
                                              }
                                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_38_38 == (MR_Integer) 0);
                                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                              if (mdb__debugger_interface__succeeded)
                                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_38_38;
                                              else
                                                {
                                                  MR_Word mdb__debugger_interface__V_39_39;

                                                  {
                                                    mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_39_39, mdb__debugger_interface__V_13_13, mdb__debugger_interface__V_26_26);
                                                  }
                                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_39_39 == (MR_Integer) 0);
                                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                                  if (mdb__debugger_interface__succeeded)
                                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_39_39;
                                                  else
                                                    {
                                                      MR_Word mdb__debugger_interface__V_40_40;

                                                      {
                                                        mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_40_40, mdb__debugger_interface__V_14_14, mdb__debugger_interface__V_27_27);
                                                      }
                                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_40_40 == (MR_Integer) 0);
                                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                                      if (mdb__debugger_interface__succeeded)
                                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_40_40;
                                                      else
                                                        {
                                                          MR_Word mdb__debugger_interface__V_41_41;

                                                          {
                                                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_41_41, mdb__debugger_interface__V_15_15, mdb__debugger_interface__V_28_28);
                                                          }
                                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_41_41 == (MR_Integer) 0);
                                                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                                          if (mdb__debugger_interface__succeeded)
                                                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_41_41;
                                                          else
                                                            {
                                                              MR_Word mdb__debugger_interface__V_42_42;

                                                              {
                                                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_42_42, mdb__debugger_interface__V_16_16, mdb__debugger_interface__V_29_29);
                                                              }
                                                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_42_42 == (MR_Integer) 0);
                                                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                                              if (mdb__debugger_interface__succeeded)
                                                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_42_42;
                                                              else
                                                                {
                                                                  MR_Word mdb__debugger_interface__V_43_43;

                                                                  {
                                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_43_43, mdb__debugger_interface__V_17_17, mdb__debugger_interface__V_30_30);
                                                                  }
                                                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_43_43 == (MR_Integer) 0);
                                                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                                                  if (mdb__debugger_interface__succeeded)
                                                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_43_43;
                                                                  else
                                                                    {
                                                                      MR_Word mdb__debugger_interface__V_44_44;

                                                                      {
                                                                        mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_44_44, mdb__debugger_interface__V_18_18, mdb__debugger_interface__V_31_31);
                                                                      }
                                                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_44_44 == (MR_Integer) 0);
                                                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                                                      if (mdb__debugger_interface__succeeded)
                                                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_44_44;
                                                                      else
                                                                        {
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_19_19, mdb__debugger_interface__V_32_32);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Integer mdb__debugger_interface__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Integer mdb__debugger_interface__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                      MR_Integer mdb__debugger_interface__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
                      MR_Word mdb__debugger_interface__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
                      MR_String mdb__debugger_interface__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
                      MR_String mdb__debugger_interface__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 5)));
                      MR_String mdb__debugger_interface__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 6)));
                      MR_String mdb__debugger_interface__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 7)));
                      MR_Integer mdb__debugger_interface__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 8)));
                      MR_Integer mdb__debugger_interface__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 9)));
                      MR_Integer mdb__debugger_interface__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 10)));
                      MR_String mdb__debugger_interface__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 11)));
                      MR_Integer mdb__debugger_interface__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 12)));
                      MR_Integer mdb__debugger_interface__V_58_58;
                      MR_Integer mdb__debugger_interface__V_59_59;
                      MR_Integer mdb__debugger_interface__V_60_60;
                      MR_Word mdb__debugger_interface__V_61_61;
                      MR_String mdb__debugger_interface__V_62_62;
                      MR_String mdb__debugger_interface__V_63_63;
                      MR_String mdb__debugger_interface__V_64_64;
                      MR_String mdb__debugger_interface__V_65_65;
                      MR_Integer mdb__debugger_interface__V_66_66;
                      MR_Integer mdb__debugger_interface__V_67_67;
                      MR_Integer mdb__debugger_interface__V_68_68;
                      MR_String mdb__debugger_interface__V_69_69;
                      MR_Integer mdb__debugger_interface__V_70_70;
                      MR_Word mdb__debugger_interface__V_71_71;

                      mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
                      if (mdb__debugger_interface__succeeded)
                        {
                          mdb__debugger_interface__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)));
                          mdb__debugger_interface__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
                          mdb__debugger_interface__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
                          mdb__debugger_interface__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 3)));
                          mdb__debugger_interface__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 4)));
                          mdb__debugger_interface__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 5)));
                          mdb__debugger_interface__V_64_64 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 6)));
                          mdb__debugger_interface__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 7)));
                          mdb__debugger_interface__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 8)));
                          mdb__debugger_interface__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 9)));
                          mdb__debugger_interface__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 10)));
                          mdb__debugger_interface__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 11)));
                          mdb__debugger_interface__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 12)));
                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_71_71, mdb__debugger_interface__V_45_45, mdb__debugger_interface__V_58_58);
                          }
                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_71_71 == (MR_Integer) 0);
                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                          if (mdb__debugger_interface__succeeded)
                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_71_71;
                          else
                            {
                              MR_Word mdb__debugger_interface__V_72_72;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_72_72, mdb__debugger_interface__V_46_46, mdb__debugger_interface__V_59_59);
                              }
                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_72_72 == (MR_Integer) 0);
                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                              if (mdb__debugger_interface__succeeded)
                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_72_72;
                              else
                                {
                                  MR_Word mdb__debugger_interface__V_73_73;

                                  {
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_73_73, mdb__debugger_interface__V_47_47, mdb__debugger_interface__V_60_60);
                                  }
                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_73_73 == (MR_Integer) 0);
                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                  if (mdb__debugger_interface__succeeded)
                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_73_73;
                                  else
                                    {
                                      MR_Word mdb__debugger_interface__V_74_74;
                                      MR_Integer mdb__debugger_interface__V_199_199 = (MR_Integer) mdb__debugger_interface__V_48_48;
                                      MR_Integer mdb__debugger_interface__V_200_200 = (MR_Integer) mdb__debugger_interface__V_61_61;

                                      {
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_74_74, mdb__debugger_interface__V_199_199, mdb__debugger_interface__V_200_200);
                                      }
                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_74_74 == (MR_Integer) 0);
                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                      if (mdb__debugger_interface__succeeded)
                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_74_74;
                                      else
                                        {
                                          MR_Word mdb__debugger_interface__V_75_75;

                                          {
                                            mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_75_75, mdb__debugger_interface__V_49_49, mdb__debugger_interface__V_62_62);
                                          }
                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_75_75 == (MR_Integer) 0);
                                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                          if (mdb__debugger_interface__succeeded)
                                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_75_75;
                                          else
                                            {
                                              MR_Word mdb__debugger_interface__V_76_76;

                                              {
                                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_76_76, mdb__debugger_interface__V_50_50, mdb__debugger_interface__V_63_63);
                                              }
                                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_76_76 == (MR_Integer) 0);
                                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                              if (mdb__debugger_interface__succeeded)
                                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_76_76;
                                              else
                                                {
                                                  MR_Word mdb__debugger_interface__V_77_77;

                                                  {
                                                    mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_77_77, mdb__debugger_interface__V_51_51, mdb__debugger_interface__V_64_64);
                                                  }
                                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_77_77 == (MR_Integer) 0);
                                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                                  if (mdb__debugger_interface__succeeded)
                                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_77_77;
                                                  else
                                                    {
                                                      MR_Word mdb__debugger_interface__V_78_78;

                                                      {
                                                        mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_78_78, mdb__debugger_interface__V_52_52, mdb__debugger_interface__V_65_65);
                                                      }
                                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_78_78 == (MR_Integer) 0);
                                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                                      if (mdb__debugger_interface__succeeded)
                                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_78_78;
                                                      else
                                                        {
                                                          MR_Word mdb__debugger_interface__V_79_79;

                                                          {
                                                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_79_79, mdb__debugger_interface__V_53_53, mdb__debugger_interface__V_66_66);
                                                          }
                                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_79_79 == (MR_Integer) 0);
                                                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                                          if (mdb__debugger_interface__succeeded)
                                                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_79_79;
                                                          else
                                                            {
                                                              MR_Word mdb__debugger_interface__V_80_80;

                                                              {
                                                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_80_80, mdb__debugger_interface__V_54_54, mdb__debugger_interface__V_67_67);
                                                              }
                                                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_80_80 == (MR_Integer) 0);
                                                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                                              if (mdb__debugger_interface__succeeded)
                                                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_80_80;
                                                              else
                                                                {
                                                                  MR_Word mdb__debugger_interface__V_81_81;

                                                                  {
                                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_81_81, mdb__debugger_interface__V_55_55, mdb__debugger_interface__V_68_68);
                                                                  }
                                                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_81_81 == (MR_Integer) 0);
                                                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                                                  if (mdb__debugger_interface__succeeded)
                                                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_81_81;
                                                                  else
                                                                    {
                                                                      MR_Word mdb__debugger_interface__V_82_82;

                                                                      {
                                                                        mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_82_82, mdb__debugger_interface__V_56_56, mdb__debugger_interface__V_69_69);
                                                                      }
                                                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_82_82 == (MR_Integer) 0);
                                                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                                                      if (mdb__debugger_interface__succeeded)
                                                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_82_82;
                                                                      else
                                                                        {
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_57_57, mdb__debugger_interface__V_70_70);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word mdb__debugger_interface__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word mdb__debugger_interface__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
                          MR_Word mdb__debugger_interface__V_85_85;
                          MR_Word mdb__debugger_interface__V_86_86;
                          MR_Word mdb__debugger_interface__V_87_87;
                          MR_Word mdb__debugger_interface__TypeInfo_174_174;

                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (mdb__debugger_interface__succeeded)
                            {
                              mdb__debugger_interface__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
                              mdb__debugger_interface__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
                              mdb__debugger_interface__TypeInfo_174_174 = (MR_Word) &mdb__debugger_interface_scalar_common_1[0];
                              {
                                mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_174_174, &mdb__debugger_interface__V_87_87, ((MR_Box) (mdb__debugger_interface__V_83_83)), ((MR_Box) (mdb__debugger_interface__V_85_85)));
                              }
                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_87_87 == (MR_Integer) 0);
                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                              if (mdb__debugger_interface__succeeded)
                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_87_87;
                              else
                                {
                                  {
                                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[5], &mdb__debugger_interface__V_6_6, ((MR_Box) (mdb__debugger_interface__V_84_84)), ((MR_Box) (mdb__debugger_interface__V_86_86)));
                                  }
                                }
                              mdb__debugger_interface__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word mdb__debugger_interface__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word mdb__debugger_interface__V_89_89;

                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                          if (mdb__debugger_interface__succeeded)
                            {
                              mdb__debugger_interface__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
                              {
                                mercury__univ____Compare____univ_0_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_88_88, mdb__debugger_interface__V_89_89);
                              }
                              mdb__debugger_interface__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word mdb__debugger_interface__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word mdb__debugger_interface__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
                          MR_Word mdb__debugger_interface__V_92_92;
                          MR_Word mdb__debugger_interface__V_93_93;
                          MR_Word mdb__debugger_interface__V_94_94;
                          MR_Word mdb__debugger_interface__TypeInfo_177_177;

                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                          if (mdb__debugger_interface__succeeded)
                            {
                              mdb__debugger_interface__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
                              mdb__debugger_interface__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
                              mdb__debugger_interface__TypeInfo_177_177 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
                              {
                                mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_177_177, &mdb__debugger_interface__V_94_94, ((MR_Box) (mdb__debugger_interface__V_90_90)), ((MR_Box) (mdb__debugger_interface__V_92_92)));
                              }
                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_94_94 == (MR_Integer) 0);
                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                              if (mdb__debugger_interface__succeeded)
                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_94_94;
                              else
                                {
                                  {
                                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[5], &mdb__debugger_interface__V_6_6, ((MR_Box) (mdb__debugger_interface__V_91_91)), ((MR_Box) (mdb__debugger_interface__V_93_93)));
                                  }
                                }
                              mdb__debugger_interface__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_String mdb__debugger_interface__V_95_95 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                          MR_String mdb__debugger_interface__V_96_96;

                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                          if (mdb__debugger_interface__succeeded)
                            {
                              mdb__debugger_interface__V_96_96 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
                              {
                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_95_95, mdb__debugger_interface__V_96_96);
                              }
                              mdb__debugger_interface__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Integer mdb__debugger_interface__V_97_97 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Integer mdb__debugger_interface__V_98_98;

                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
                          if (mdb__debugger_interface__succeeded)
                            {
                              mdb__debugger_interface__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_97_97, mdb__debugger_interface__V_98_98);
                              }
                              mdb__debugger_interface__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_String mdb__debugger_interface__V_99_99 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                          MR_String mdb__debugger_interface__V_100_100 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
                          MR_String mdb__debugger_interface__V_101_101 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
                          MR_Integer mdb__debugger_interface__V_102_102 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
                          MR_Integer mdb__debugger_interface__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 5)));
                          MR_String mdb__debugger_interface__V_104_104;
                          MR_String mdb__debugger_interface__V_105_105;
                          MR_String mdb__debugger_interface__V_106_106;
                          MR_Integer mdb__debugger_interface__V_107_107;
                          MR_Integer mdb__debugger_interface__V_108_108;
                          MR_Word mdb__debugger_interface__V_109_109;

                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
                          if (mdb__debugger_interface__succeeded)
                            {
                              mdb__debugger_interface__V_104_104 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
                              mdb__debugger_interface__V_105_105 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
                              mdb__debugger_interface__V_106_106 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 3)));
                              mdb__debugger_interface__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 4)));
                              mdb__debugger_interface__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 5)));
                              {
                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_109_109, mdb__debugger_interface__V_99_99, mdb__debugger_interface__V_104_104);
                              }
                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_109_109 == (MR_Integer) 0);
                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                              if (mdb__debugger_interface__succeeded)
                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_109_109;
                              else
                                {
                                  MR_Word mdb__debugger_interface__V_110_110;

                                  {
                                    mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_110_110, mdb__debugger_interface__V_100_100, mdb__debugger_interface__V_105_105);
                                  }
                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_110_110 == (MR_Integer) 0);
                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                  if (mdb__debugger_interface__succeeded)
                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_110_110;
                                  else
                                    {
                                      MR_Word mdb__debugger_interface__V_111_111;

                                      {
                                        mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_111_111, mdb__debugger_interface__V_101_101, mdb__debugger_interface__V_106_106);
                                      }
                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_111_111 == (MR_Integer) 0);
                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                      if (mdb__debugger_interface__succeeded)
                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_111_111;
                                      else
                                        {
                                          MR_Word mdb__debugger_interface__V_112_112;

                                          {
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_112_112, mdb__debugger_interface__V_102_102, mdb__debugger_interface__V_107_107);
                                          }
                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_112_112 == (MR_Integer) 0);
                                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                          if (mdb__debugger_interface__succeeded)
                                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_112_112;
                                          else
                                            {
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_103_103, mdb__debugger_interface__V_108_108);
                                            }
                                        }
                                    }
                                }
                              mdb__debugger_interface__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_String mdb__debugger_interface__V_113_113 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                          MR_String mdb__debugger_interface__V_114_114 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
                          MR_Integer mdb__debugger_interface__V_115_115 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
                          MR_Integer mdb__debugger_interface__V_116_116 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
                          MR_String mdb__debugger_interface__V_117_117;
                          MR_String mdb__debugger_interface__V_118_118;
                          MR_Integer mdb__debugger_interface__V_119_119;
                          MR_Integer mdb__debugger_interface__V_120_120;
                          MR_Word mdb__debugger_interface__V_121_121;

                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (mdb__debugger_interface__succeeded)
                            {
                              mdb__debugger_interface__V_117_117 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
                              mdb__debugger_interface__V_118_118 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
                              mdb__debugger_interface__V_119_119 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 3)));
                              mdb__debugger_interface__V_120_120 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 4)));
                              {
                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_121_121, mdb__debugger_interface__V_113_113, mdb__debugger_interface__V_117_117);
                              }
                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_121_121 == (MR_Integer) 0);
                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                              if (mdb__debugger_interface__succeeded)
                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_121_121;
                              else
                                {
                                  MR_Word mdb__debugger_interface__V_122_122;

                                  {
                                    mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_122_122, mdb__debugger_interface__V_114_114, mdb__debugger_interface__V_118_118);
                                  }
                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_122_122 == (MR_Integer) 0);
                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                  if (mdb__debugger_interface__succeeded)
                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_122_122;
                                  else
                                    {
                                      MR_Word mdb__debugger_interface__V_123_123;

                                      {
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_123_123, mdb__debugger_interface__V_115_115, mdb__debugger_interface__V_119_119);
                                      }
                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_123_123 == (MR_Integer) 0);
                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                      if (mdb__debugger_interface__succeeded)
                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_123_123;
                                      else
                                        {
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_116_116, mdb__debugger_interface__V_120_120);
                                        }
                                    }
                                }
                              mdb__debugger_interface__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          MR_String mdb__debugger_interface__V_124_124 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                          MR_String mdb__debugger_interface__V_125_125;

                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
                          if (mdb__debugger_interface__succeeded)
                            {
                              mdb__debugger_interface__V_125_125 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
                              {
                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_124_124, mdb__debugger_interface__V_125_125);
                              }
                              mdb__debugger_interface__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          MR_Integer mdb__debugger_interface__V_126_126 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Integer mdb__debugger_interface__V_127_127 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
                          MR_Integer mdb__debugger_interface__V_128_128 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
                          MR_Integer mdb__debugger_interface__V_129_129;
                          MR_Integer mdb__debugger_interface__V_130_130;
                          MR_Integer mdb__debugger_interface__V_131_131;
                          MR_Word mdb__debugger_interface__V_132_132;

                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
                          if (mdb__debugger_interface__succeeded)
                            {
                              mdb__debugger_interface__V_129_129 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
                              mdb__debugger_interface__V_130_130 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
                              mdb__debugger_interface__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 3)));
                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_132_132, mdb__debugger_interface__V_126_126, mdb__debugger_interface__V_129_129);
                              }
                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_132_132 == (MR_Integer) 0);
                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                              if (mdb__debugger_interface__succeeded)
                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_132_132;
                              else
                                {
                                  MR_Word mdb__debugger_interface__V_133_133;

                                  {
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_133_133, mdb__debugger_interface__V_127_127, mdb__debugger_interface__V_130_130);
                                  }
                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_133_133 == (MR_Integer) 0);
                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                  if (mdb__debugger_interface__succeeded)
                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_133_133;
                                  else
                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_128_128, mdb__debugger_interface__V_131_131);
                                    }
                                }
                              mdb__debugger_interface__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 9:
                        {
                          MR_String mdb__debugger_interface__V_134_134 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                          MR_String mdb__debugger_interface__V_135_135;

                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
                          if (mdb__debugger_interface__succeeded)
                            {
                              mdb__debugger_interface__V_135_135 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
                              {
                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_134_134, mdb__debugger_interface__V_135_135);
                              }
                              mdb__debugger_interface__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          MR_Integer mdb__debugger_interface__V_136_136 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Integer mdb__debugger_interface__V_137_137 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
                          MR_Integer mdb__debugger_interface__V_138_138 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
                          MR_Integer mdb__debugger_interface__V_139_139;
                          MR_Integer mdb__debugger_interface__V_140_140;
                          MR_Integer mdb__debugger_interface__V_141_141;
                          MR_Word mdb__debugger_interface__V_142_142;

                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
                          if (mdb__debugger_interface__succeeded)
                            {
                              mdb__debugger_interface__V_139_139 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
                              mdb__debugger_interface__V_140_140 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
                              mdb__debugger_interface__V_141_141 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 3)));
                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_142_142, mdb__debugger_interface__V_136_136, mdb__debugger_interface__V_139_139);
                              }
                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_142_142 == (MR_Integer) 0);
                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                              if (mdb__debugger_interface__succeeded)
                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_142_142;
                              else
                                {
                                  MR_Word mdb__debugger_interface__V_143_143;

                                  {
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_143_143, mdb__debugger_interface__V_137_137, mdb__debugger_interface__V_140_140);
                                  }
                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_143_143 == (MR_Integer) 0);
                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                  if (mdb__debugger_interface__succeeded)
                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_143_143;
                                  else
                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_138_138, mdb__debugger_interface__V_141_141);
                                    }
                                }
                              mdb__debugger_interface__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 11:
                        {
                          MR_String mdb__debugger_interface__V_144_144 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                          MR_String mdb__debugger_interface__V_145_145;

                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
                          if (mdb__debugger_interface__succeeded)
                            {
                              mdb__debugger_interface__V_145_145 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
                              {
                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_144_144, mdb__debugger_interface__V_145_145);
                              }
                              mdb__debugger_interface__succeeded = MR_TRUE;
                            }
                        }
                        break;
                    }
                    break;
                }
                if (mdb__debugger_interface__succeeded)
                  *mdb__debugger_interface__HeadVar__1_1 = mdb__debugger_interface__V_6_6;
                else
                  {
                    mercury__private_builtin__compare_error_0_p_0();
                    return;
                  }
              }
          }
      }
  }
}

static void MR_CALL 
mdb__debugger_interface____Index____debugger_response_0_0(
  MR_Word mdb__debugger_interface__HeadVar__1_1,
  MR_Integer * mdb__debugger_interface__HeadVar__2_2)
{
  {
    MR_bool mdb__debugger_interface__succeeded;

    switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mdb__debugger_interface__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 2;
            break;
          case (MR_Integer) 3:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 3;
            break;
          case (MR_Integer) 4:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 9;
            break;
          case (MR_Integer) 5:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 10;
            break;
          case (MR_Integer) 6:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 11;
            break;
          case (MR_Integer) 7:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 12;
            break;
          case (MR_Integer) 8:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 19;
            break;
          case (MR_Integer) 9:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 20;
            break;
          case (MR_Integer) 10:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 22;
            break;
          case (MR_Integer) 11:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 24;
            break;
          case (MR_Integer) 12:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 25;
            break;
          case (MR_Integer) 13:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 26;
            break;
          case (MR_Integer) 14:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 27;
            break;
          case (MR_Integer) 15:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 29;
            break;
          case (MR_Integer) 16:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 30;
            break;
          case (MR_Integer) 17:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 31;
            break;
          case (MR_Integer) 18:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 32;
            break;
        }
        break;
      case (MR_Integer) 1:
        *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 4;
        break;
      case (MR_Integer) 2:
        *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 6;
            break;
          case (MR_Integer) 1:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 7;
            break;
          case (MR_Integer) 2:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 8;
            break;
          case (MR_Integer) 3:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 13;
            break;
          case (MR_Integer) 4:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 14;
            break;
          case (MR_Integer) 5:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 15;
            break;
          case (MR_Integer) 6:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 16;
            break;
          case (MR_Integer) 7:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 17;
            break;
          case (MR_Integer) 8:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 18;
            break;
          case (MR_Integer) 9:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 21;
            break;
          case (MR_Integer) 10:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 23;
            break;
          case (MR_Integer) 11:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 28;
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_response_0_0(
  MR_Word mdb__debugger_interface__HeadVar__1_1,
  MR_Word mdb__debugger_interface__HeadVar__2_2)
{
  {
    MR_bool mdb__debugger_interface__succeeded;
    MR_Integer mdb__debugger_interface__CastX_143 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
    MR_Integer mdb__debugger_interface__CastY_144 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

    mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastX_143 == mdb__debugger_interface__CastY_144);
    if (mdb__debugger_interface__succeeded)
      mdb__debugger_interface__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdb__debugger_interface__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mdb__debugger_interface__CastX_3 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_4 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_4 == mdb__debugger_interface__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mdb__debugger_interface__CastX_5 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_6 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_6 == mdb__debugger_interface__CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer mdb__debugger_interface__CastX_7 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_8 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_8 == mdb__debugger_interface__CastX_7);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer mdb__debugger_interface__CastX_9 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_10 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_10 == mdb__debugger_interface__CastX_9);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer mdb__debugger_interface__CastX_73 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_74 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_74 == mdb__debugger_interface__CastX_73);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer mdb__debugger_interface__CastX_75 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_76 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_76 == mdb__debugger_interface__CastX_75);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Integer mdb__debugger_interface__CastX_77 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_78 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_78 == mdb__debugger_interface__CastX_77);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Integer mdb__debugger_interface__CastX_79 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_80 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_80 == mdb__debugger_interface__CastX_79);
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Integer mdb__debugger_interface__CastX_111 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_112 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_112 == mdb__debugger_interface__CastX_111);
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Integer mdb__debugger_interface__CastX_113 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_114 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_114 == mdb__debugger_interface__CastX_113);
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Integer mdb__debugger_interface__CastX_117 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_118 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_118 == mdb__debugger_interface__CastX_117);
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Integer mdb__debugger_interface__CastX_125 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_126 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_126 == mdb__debugger_interface__CastX_125);
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Integer mdb__debugger_interface__CastX_127 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_128 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_128 == mdb__debugger_interface__CastX_127);
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Integer mdb__debugger_interface__CastX_129 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_130 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_130 == mdb__debugger_interface__CastX_129);
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Integer mdb__debugger_interface__CastX_131 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_132 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_132 == mdb__debugger_interface__CastX_131);
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Integer mdb__debugger_interface__CastX_135 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_136 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_136 == mdb__debugger_interface__CastX_135);
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Integer mdb__debugger_interface__CastX_137 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_138 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_138 == mdb__debugger_interface__CastX_137);
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Integer mdb__debugger_interface__CastX_139 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_140 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_140 == mdb__debugger_interface__CastX_139);
              }
              break;
            case (MR_Integer) 18:
              {
                MR_Integer mdb__debugger_interface__CastX_141 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_142 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_142 == mdb__debugger_interface__CastX_141);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer mdb__debugger_interface__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mdb__debugger_interface__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer mdb__debugger_interface__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mdb__debugger_interface__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 3)))) & (MR_Integer) 15);
            MR_Word mdb__debugger_interface__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
            MR_String mdb__debugger_interface__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 4)));
            MR_String mdb__debugger_interface__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 5)));
            MR_String mdb__debugger_interface__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 6)));
            MR_Integer mdb__debugger_interface__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 7)));
            MR_Integer mdb__debugger_interface__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 8)));
            MR_Integer mdb__debugger_interface__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 9)));
            MR_String mdb__debugger_interface__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 10)));
            MR_Integer mdb__debugger_interface__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 11)));
            MR_Integer mdb__debugger_interface__V_24_24;
            MR_Integer mdb__debugger_interface__V_25_25;
            MR_Integer mdb__debugger_interface__V_26_26;
            MR_Word mdb__debugger_interface__V_27_27;
            MR_Word mdb__debugger_interface__V_28_28;
            MR_String mdb__debugger_interface__V_29_29;
            MR_String mdb__debugger_interface__V_30_30;
            MR_String mdb__debugger_interface__V_31_31;
            MR_Integer mdb__debugger_interface__V_32_32;
            MR_Integer mdb__debugger_interface__V_33_33;
            MR_Integer mdb__debugger_interface__V_34_34;
            MR_String mdb__debugger_interface__V_35_35;
            MR_Integer mdb__debugger_interface__V_36_36;

            mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__debugger_interface__succeeded)
              {
                mdb__debugger_interface__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
                mdb__debugger_interface__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                mdb__debugger_interface__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
                mdb__debugger_interface__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 15);
                mdb__debugger_interface__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                mdb__debugger_interface__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
                mdb__debugger_interface__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 5)));
                mdb__debugger_interface__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 6)));
                mdb__debugger_interface__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 7)));
                mdb__debugger_interface__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 8)));
                mdb__debugger_interface__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 9)));
                mdb__debugger_interface__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 10)));
                mdb__debugger_interface__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 11)));
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_11_11 == mdb__debugger_interface__V_24_24);
                if (mdb__debugger_interface__succeeded)
                  {
                    mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_12_12 == mdb__debugger_interface__V_25_25);
                    if (mdb__debugger_interface__succeeded)
                      {
                        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_13_13 == mdb__debugger_interface__V_26_26);
                        if (mdb__debugger_interface__succeeded)
                          {
                            mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_14_14 == mdb__debugger_interface__V_27_27);
                            if (mdb__debugger_interface__succeeded)
                              {
                                mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_15_15 == mdb__debugger_interface__V_28_28);
                                if (mdb__debugger_interface__succeeded)
                                  {
                                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_16_16, mdb__debugger_interface__V_29_29) == 0);
                                    if (mdb__debugger_interface__succeeded)
                                      {
                                        mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_17_17, mdb__debugger_interface__V_30_30) == 0);
                                        if (mdb__debugger_interface__succeeded)
                                          {
                                            mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_18_18, mdb__debugger_interface__V_31_31) == 0);
                                            if (mdb__debugger_interface__succeeded)
                                              {
                                                mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_19_19 == mdb__debugger_interface__V_32_32);
                                                if (mdb__debugger_interface__succeeded)
                                                  {
                                                    mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_20_20 == mdb__debugger_interface__V_33_33);
                                                    if (mdb__debugger_interface__succeeded)
                                                      {
                                                        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_21_21 == mdb__debugger_interface__V_34_34);
                                                        if (mdb__debugger_interface__succeeded)
                                                          {
                                                            mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_22_22, mdb__debugger_interface__V_35_35) == 0);
                                                            if (mdb__debugger_interface__succeeded)
                                                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_23_23 == mdb__debugger_interface__V_36_36);
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mdb__debugger_interface__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mdb__debugger_interface__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer mdb__debugger_interface__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mdb__debugger_interface__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 3)));
            MR_String mdb__debugger_interface__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 4)));
            MR_String mdb__debugger_interface__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 5)));
            MR_String mdb__debugger_interface__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 6)));
            MR_String mdb__debugger_interface__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 7)));
            MR_Integer mdb__debugger_interface__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 8)));
            MR_Integer mdb__debugger_interface__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 9)));
            MR_Integer mdb__debugger_interface__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 10)));
            MR_String mdb__debugger_interface__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 11)));
            MR_Integer mdb__debugger_interface__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 12)));
            MR_Integer mdb__debugger_interface__V_50_50;
            MR_Integer mdb__debugger_interface__V_51_51;
            MR_Integer mdb__debugger_interface__V_52_52;
            MR_Word mdb__debugger_interface__V_53_53;
            MR_String mdb__debugger_interface__V_54_54;
            MR_String mdb__debugger_interface__V_55_55;
            MR_String mdb__debugger_interface__V_56_56;
            MR_String mdb__debugger_interface__V_57_57;
            MR_Integer mdb__debugger_interface__V_58_58;
            MR_Integer mdb__debugger_interface__V_59_59;
            MR_Integer mdb__debugger_interface__V_60_60;
            MR_String mdb__debugger_interface__V_61_61;
            MR_Integer mdb__debugger_interface__V_62_62;

            mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__debugger_interface__succeeded)
              {
                mdb__debugger_interface__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
                mdb__debugger_interface__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                mdb__debugger_interface__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
                mdb__debugger_interface__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
                mdb__debugger_interface__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
                mdb__debugger_interface__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 5)));
                mdb__debugger_interface__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 6)));
                mdb__debugger_interface__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 7)));
                mdb__debugger_interface__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 8)));
                mdb__debugger_interface__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 9)));
                mdb__debugger_interface__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 10)));
                mdb__debugger_interface__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 11)));
                mdb__debugger_interface__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 12)));
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_37_37 == mdb__debugger_interface__V_50_50);
                if (mdb__debugger_interface__succeeded)
                  {
                    mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_38_38 == mdb__debugger_interface__V_51_51);
                    if (mdb__debugger_interface__succeeded)
                      {
                        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_39_39 == mdb__debugger_interface__V_52_52);
                        if (mdb__debugger_interface__succeeded)
                          {
                            mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_40_40 == mdb__debugger_interface__V_53_53);
                            if (mdb__debugger_interface__succeeded)
                              {
                                mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_41_41, mdb__debugger_interface__V_54_54) == 0);
                                if (mdb__debugger_interface__succeeded)
                                  {
                                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_42_42, mdb__debugger_interface__V_55_55) == 0);
                                    if (mdb__debugger_interface__succeeded)
                                      {
                                        mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_43_43, mdb__debugger_interface__V_56_56) == 0);
                                        if (mdb__debugger_interface__succeeded)
                                          {
                                            mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_44_44, mdb__debugger_interface__V_57_57) == 0);
                                            if (mdb__debugger_interface__succeeded)
                                              {
                                                mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_45_45 == mdb__debugger_interface__V_58_58);
                                                if (mdb__debugger_interface__succeeded)
                                                  {
                                                    mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_46_46 == mdb__debugger_interface__V_59_59);
                                                    if (mdb__debugger_interface__succeeded)
                                                      {
                                                        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_47_47 == mdb__debugger_interface__V_60_60);
                                                        if (mdb__debugger_interface__succeeded)
                                                          {
                                                            mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_48_48, mdb__debugger_interface__V_61_61) == 0);
                                                            if (mdb__debugger_interface__succeeded)
                                                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_49_49 == mdb__debugger_interface__V_62_62);
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mdb__debugger_interface__TypeInfo_148_148;
                MR_Word mdb__debugger_interface__TypeInfo_149_149;
                MR_Word mdb__debugger_interface__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mdb__debugger_interface__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word mdb__debugger_interface__V_65_65;
                MR_Word mdb__debugger_interface__V_66_66;

                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (mdb__debugger_interface__succeeded)
                  {
                    mdb__debugger_interface__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                    mdb__debugger_interface__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
                    mdb__debugger_interface__TypeInfo_148_148 = (MR_Word) &mdb__debugger_interface_scalar_common_1[0];
                    {
                      mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_148_148, ((MR_Box) (mdb__debugger_interface__V_63_63)), ((MR_Box) (mdb__debugger_interface__V_65_65)));
                    }
                    if (mdb__debugger_interface__succeeded)
                      {
                        mdb__debugger_interface__TypeInfo_149_149 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
                        {
                          mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_149_149, ((MR_Box) (mdb__debugger_interface__V_64_64)), ((MR_Box) (mdb__debugger_interface__V_66_66)));
                        }
                      }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mdb__debugger_interface__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mdb__debugger_interface__V_68_68;

                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (mdb__debugger_interface__succeeded)
                  {
                    mdb__debugger_interface__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      mdb__debugger_interface__succeeded = mercury__univ____Unify____univ_0_0(mdb__debugger_interface__V_67_67, mdb__debugger_interface__V_68_68);
                    }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mdb__debugger_interface__TypeInfo_145_145;
                MR_Word mdb__debugger_interface__TypeInfo_146_146;
                MR_Word mdb__debugger_interface__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mdb__debugger_interface__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word mdb__debugger_interface__V_71_71;
                MR_Word mdb__debugger_interface__V_72_72;

                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (mdb__debugger_interface__succeeded)
                  {
                    mdb__debugger_interface__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                    mdb__debugger_interface__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
                    mdb__debugger_interface__TypeInfo_145_145 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
                    {
                      mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_145_145, ((MR_Box) (mdb__debugger_interface__V_69_69)), ((MR_Box) (mdb__debugger_interface__V_71_71)));
                    }
                    if (mdb__debugger_interface__succeeded)
                      {
                        mdb__debugger_interface__TypeInfo_146_146 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
                        {
                          mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_146_146, ((MR_Box) (mdb__debugger_interface__V_70_70)), ((MR_Box) (mdb__debugger_interface__V_72_72)));
                        }
                      }
                  }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String mdb__debugger_interface__V_81_81 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mdb__debugger_interface__V_82_82;

                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (mdb__debugger_interface__succeeded)
                  {
                    mdb__debugger_interface__V_82_82 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_81_81, mdb__debugger_interface__V_82_82) == 0);
                  }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer mdb__debugger_interface__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer mdb__debugger_interface__V_84_84;

                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (mdb__debugger_interface__succeeded)
                  {
                    mdb__debugger_interface__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                    mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_83_83 == mdb__debugger_interface__V_84_84);
                  }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_String mdb__debugger_interface__V_85_85 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mdb__debugger_interface__V_86_86 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
                MR_String mdb__debugger_interface__V_87_87 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 3)));
                MR_Integer mdb__debugger_interface__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 4)));
                MR_Integer mdb__debugger_interface__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 5)));
                MR_String mdb__debugger_interface__V_90_90;
                MR_String mdb__debugger_interface__V_91_91;
                MR_String mdb__debugger_interface__V_92_92;
                MR_Integer mdb__debugger_interface__V_93_93;
                MR_Integer mdb__debugger_interface__V_94_94;

                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (mdb__debugger_interface__succeeded)
                  {
                    mdb__debugger_interface__V_90_90 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                    mdb__debugger_interface__V_91_91 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
                    mdb__debugger_interface__V_92_92 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
                    mdb__debugger_interface__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
                    mdb__debugger_interface__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 5)));
                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_85_85, mdb__debugger_interface__V_90_90) == 0);
                    if (mdb__debugger_interface__succeeded)
                      {
                        mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_86_86, mdb__debugger_interface__V_91_91) == 0);
                        if (mdb__debugger_interface__succeeded)
                          {
                            mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_87_87, mdb__debugger_interface__V_92_92) == 0);
                            if (mdb__debugger_interface__succeeded)
                              {
                                mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_88_88 == mdb__debugger_interface__V_93_93);
                                if (mdb__debugger_interface__succeeded)
                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_89_89 == mdb__debugger_interface__V_94_94);
                              }
                          }
                      }
                  }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_String mdb__debugger_interface__V_95_95 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mdb__debugger_interface__V_96_96 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
                MR_Integer mdb__debugger_interface__V_97_97 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 3)));
                MR_Integer mdb__debugger_interface__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 4)));
                MR_String mdb__debugger_interface__V_99_99;
                MR_String mdb__debugger_interface__V_100_100;
                MR_Integer mdb__debugger_interface__V_101_101;
                MR_Integer mdb__debugger_interface__V_102_102;

                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (mdb__debugger_interface__succeeded)
                  {
                    mdb__debugger_interface__V_99_99 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                    mdb__debugger_interface__V_100_100 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
                    mdb__debugger_interface__V_101_101 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
                    mdb__debugger_interface__V_102_102 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_95_95, mdb__debugger_interface__V_99_99) == 0);
                    if (mdb__debugger_interface__succeeded)
                      {
                        mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_96_96, mdb__debugger_interface__V_100_100) == 0);
                        if (mdb__debugger_interface__succeeded)
                          {
                            mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_97_97 == mdb__debugger_interface__V_101_101);
                            if (mdb__debugger_interface__succeeded)
                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_98_98 == mdb__debugger_interface__V_102_102);
                          }
                      }
                  }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_String mdb__debugger_interface__V_103_103 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mdb__debugger_interface__V_104_104;

                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
                if (mdb__debugger_interface__succeeded)
                  {
                    mdb__debugger_interface__V_104_104 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_103_103, mdb__debugger_interface__V_104_104) == 0);
                  }
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Integer mdb__debugger_interface__V_105_105 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer mdb__debugger_interface__V_106_106 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
                MR_Integer mdb__debugger_interface__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 3)));
                MR_Integer mdb__debugger_interface__V_108_108;
                MR_Integer mdb__debugger_interface__V_109_109;
                MR_Integer mdb__debugger_interface__V_110_110;

                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
                if (mdb__debugger_interface__succeeded)
                  {
                    mdb__debugger_interface__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                    mdb__debugger_interface__V_109_109 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
                    mdb__debugger_interface__V_110_110 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
                    mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_105_105 == mdb__debugger_interface__V_108_108);
                    if (mdb__debugger_interface__succeeded)
                      {
                        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_106_106 == mdb__debugger_interface__V_109_109);
                        if (mdb__debugger_interface__succeeded)
                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_107_107 == mdb__debugger_interface__V_110_110);
                      }
                  }
              }
              break;
            case (MR_Integer) 9:
              {
                MR_String mdb__debugger_interface__V_115_115 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mdb__debugger_interface__V_116_116;

                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
                if (mdb__debugger_interface__succeeded)
                  {
                    mdb__debugger_interface__V_116_116 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_115_115, mdb__debugger_interface__V_116_116) == 0);
                  }
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Integer mdb__debugger_interface__V_119_119 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer mdb__debugger_interface__V_120_120 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
                MR_Integer mdb__debugger_interface__V_121_121 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 3)));
                MR_Integer mdb__debugger_interface__V_122_122;
                MR_Integer mdb__debugger_interface__V_123_123;
                MR_Integer mdb__debugger_interface__V_124_124;

                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
                if (mdb__debugger_interface__succeeded)
                  {
                    mdb__debugger_interface__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                    mdb__debugger_interface__V_123_123 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
                    mdb__debugger_interface__V_124_124 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
                    mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_119_119 == mdb__debugger_interface__V_122_122);
                    if (mdb__debugger_interface__succeeded)
                      {
                        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_120_120 == mdb__debugger_interface__V_123_123);
                        if (mdb__debugger_interface__succeeded)
                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_121_121 == mdb__debugger_interface__V_124_124);
                      }
                  }
              }
              break;
            case (MR_Integer) 11:
              {
                MR_String mdb__debugger_interface__V_133_133 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mdb__debugger_interface__V_134_134;

                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
                if (mdb__debugger_interface__succeeded)
                  {
                    mdb__debugger_interface__V_134_134 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_133_133, mdb__debugger_interface__V_134_134) == 0);
                  }
              }
              break;
          }
          break;
      }
    return mdb__debugger_interface__succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____debugger_request_0_0(
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
  MR_Word mdb__debugger_interface__HeadVar__2_2,
  MR_Word mdb__debugger_interface__HeadVar__3_3)
{
  {
    MR_bool mdb__debugger_interface__succeeded;
    MR_Integer mdb__debugger_interface__CastX_58 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;
    MR_Integer mdb__debugger_interface__CastY_59 = (MR_Integer) mdb__debugger_interface__HeadVar__3_3;

    mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastX_58 == mdb__debugger_interface__CastY_59);
    if (mdb__debugger_interface__succeeded)
      *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mdb__debugger_interface__V_4_4;
        MR_Integer mdb__debugger_interface__V_5_5;

        {
          mdb__debugger_interface____Index____debugger_request_0_0(mdb__debugger_interface__HeadVar__2_2, &mdb__debugger_interface__V_4_4);
        }
        {
          mdb__debugger_interface____Index____debugger_request_0_0(mdb__debugger_interface__HeadVar__3_3, &mdb__debugger_interface__V_5_5);
        }
        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_4_4 < mdb__debugger_interface__V_5_5);
        if (mdb__debugger_interface__succeeded)
          *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_4_4 > mdb__debugger_interface__V_5_5);
            if (mdb__debugger_interface__succeeded)
              *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
            else
              {
                MR_Word mdb__debugger_interface__V_6_6;

                switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mdb__debugger_interface__HeadVar__2_2)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 9:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 11:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 12:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 13:
                        {
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word mdb__debugger_interface__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Word mdb__debugger_interface__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                      MR_Word mdb__debugger_interface__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
                      MR_Word mdb__debugger_interface__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
                      MR_Word mdb__debugger_interface__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
                      MR_Word mdb__debugger_interface__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 5)));
                      MR_Word mdb__debugger_interface__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 6)));
                      MR_Word mdb__debugger_interface__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 7)));
                      MR_Word mdb__debugger_interface__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 8)));
                      MR_Word mdb__debugger_interface__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 9)));
                      MR_Word mdb__debugger_interface__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 10)));
                      MR_Word mdb__debugger_interface__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 11)));
                      MR_Word mdb__debugger_interface__V_19_19;
                      MR_Word mdb__debugger_interface__V_20_20;
                      MR_Word mdb__debugger_interface__V_21_21;
                      MR_Word mdb__debugger_interface__V_22_22;
                      MR_Word mdb__debugger_interface__V_23_23;
                      MR_Word mdb__debugger_interface__V_24_24;
                      MR_Word mdb__debugger_interface__V_25_25;
                      MR_Word mdb__debugger_interface__V_26_26;
                      MR_Word mdb__debugger_interface__V_27_27;
                      MR_Word mdb__debugger_interface__V_28_28;
                      MR_Word mdb__debugger_interface__V_29_29;
                      MR_Word mdb__debugger_interface__V_30_30;
                      MR_Word mdb__debugger_interface__V_31_31;
                      MR_Word mdb__debugger_interface__TypeInfo_60_60;

                      mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
                      if (mdb__debugger_interface__succeeded)
                        {
                          mdb__debugger_interface__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)));
                          mdb__debugger_interface__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
                          mdb__debugger_interface__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
                          mdb__debugger_interface__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 3)));
                          mdb__debugger_interface__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 4)));
                          mdb__debugger_interface__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 5)));
                          mdb__debugger_interface__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 6)));
                          mdb__debugger_interface__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 7)));
                          mdb__debugger_interface__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 8)));
                          mdb__debugger_interface__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 9)));
                          mdb__debugger_interface__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 10)));
                          mdb__debugger_interface__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 11)));
                          mdb__debugger_interface__TypeInfo_60_60 = (MR_Word) &mdb__debugger_interface_scalar_common_1[1];
                          {
                            mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_60_60, &mdb__debugger_interface__V_31_31, ((MR_Box) (mdb__debugger_interface__V_7_7)), ((MR_Box) (mdb__debugger_interface__V_19_19)));
                          }
                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_31_31 == (MR_Integer) 0);
                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                          if (mdb__debugger_interface__succeeded)
                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_31_31;
                          else
                            {
                              MR_Word mdb__debugger_interface__V_32_32;

                              {
                                mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[1], &mdb__debugger_interface__V_32_32, ((MR_Box) (mdb__debugger_interface__V_8_8)), ((MR_Box) (mdb__debugger_interface__V_20_20)));
                              }
                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_32_32 == (MR_Integer) 0);
                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                              if (mdb__debugger_interface__succeeded)
                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_32_32;
                              else
                                {
                                  MR_Word mdb__debugger_interface__V_33_33;

                                  {
                                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[1], &mdb__debugger_interface__V_33_33, ((MR_Box) (mdb__debugger_interface__V_9_9)), ((MR_Box) (mdb__debugger_interface__V_21_21)));
                                  }
                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_33_33 == (MR_Integer) 0);
                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                  if (mdb__debugger_interface__succeeded)
                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_33_33;
                                  else
                                    {
                                      MR_Word mdb__debugger_interface__V_34_34;

                                      {
                                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[2], &mdb__debugger_interface__V_34_34, ((MR_Box) (mdb__debugger_interface__V_10_10)), ((MR_Box) (mdb__debugger_interface__V_22_22)));
                                      }
                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_34_34 == (MR_Integer) 0);
                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                      if (mdb__debugger_interface__succeeded)
                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_34_34;
                                      else
                                        {
                                          MR_Word mdb__debugger_interface__V_35_35;

                                          {
                                            mdb__debugger_interface____Compare____pred_match_0_0(&mdb__debugger_interface__V_35_35, mdb__debugger_interface__V_11_11, mdb__debugger_interface__V_23_23);
                                          }
                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_35_35 == (MR_Integer) 0);
                                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                          if (mdb__debugger_interface__succeeded)
                                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_35_35;
                                          else
                                            {
                                              MR_Word mdb__debugger_interface__V_36_36;

                                              {
                                                mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[3], &mdb__debugger_interface__V_36_36, ((MR_Box) (mdb__debugger_interface__V_12_12)), ((MR_Box) (mdb__debugger_interface__V_24_24)));
                                              }
                                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_36_36 == (MR_Integer) 0);
                                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                              if (mdb__debugger_interface__succeeded)
                                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_36_36;
                                              else
                                                {
                                                  MR_Word mdb__debugger_interface__V_37_37;

                                                  {
                                                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[3], &mdb__debugger_interface__V_37_37, ((MR_Box) (mdb__debugger_interface__V_13_13)), ((MR_Box) (mdb__debugger_interface__V_25_25)));
                                                  }
                                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_37_37 == (MR_Integer) 0);
                                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                                  if (mdb__debugger_interface__succeeded)
                                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_37_37;
                                                  else
                                                    {
                                                      MR_Word mdb__debugger_interface__V_38_38;

                                                      {
                                                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[1], &mdb__debugger_interface__V_38_38, ((MR_Box) (mdb__debugger_interface__V_14_14)), ((MR_Box) (mdb__debugger_interface__V_26_26)));
                                                      }
                                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_38_38 == (MR_Integer) 0);
                                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                                      if (mdb__debugger_interface__succeeded)
                                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_38_38;
                                                      else
                                                        {
                                                          MR_Word mdb__debugger_interface__V_39_39;

                                                          {
                                                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[1], &mdb__debugger_interface__V_39_39, ((MR_Box) (mdb__debugger_interface__V_15_15)), ((MR_Box) (mdb__debugger_interface__V_27_27)));
                                                          }
                                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_39_39 == (MR_Integer) 0);
                                                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                                          if (mdb__debugger_interface__succeeded)
                                                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_39_39;
                                                          else
                                                            {
                                                              MR_Word mdb__debugger_interface__V_40_40;

                                                              {
                                                                mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[1], &mdb__debugger_interface__V_40_40, ((MR_Box) (mdb__debugger_interface__V_16_16)), ((MR_Box) (mdb__debugger_interface__V_28_28)));
                                                              }
                                                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_40_40 == (MR_Integer) 0);
                                                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                                              if (mdb__debugger_interface__succeeded)
                                                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_40_40;
                                                              else
                                                                {
                                                                  MR_Word mdb__debugger_interface__V_41_41;

                                                                  {
                                                                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[4], &mdb__debugger_interface__V_41_41, ((MR_Box) (mdb__debugger_interface__V_17_17)), ((MR_Box) (mdb__debugger_interface__V_29_29)));
                                                                  }
                                                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_41_41 == (MR_Integer) 0);
                                                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
                                                                  if (mdb__debugger_interface__succeeded)
                                                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_41_41;
                                                                  else
                                                                    {
                                                                      {
                                                                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[3], &mdb__debugger_interface__V_6_6, ((MR_Box) (mdb__debugger_interface__V_18_18)), ((MR_Box) (mdb__debugger_interface__V_30_30)));
                                                                      }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Integer mdb__debugger_interface__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Integer mdb__debugger_interface__V_43_43;

                      mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
                      if (mdb__debugger_interface__succeeded)
                        {
                          mdb__debugger_interface__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)));
                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_42_42, mdb__debugger_interface__V_43_43);
                          }
                          mdb__debugger_interface__succeeded = MR_TRUE;
                        }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_String mdb__debugger_interface__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                          MR_String mdb__debugger_interface__V_45_45;

                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (mdb__debugger_interface__succeeded)
                            {
                              mdb__debugger_interface__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
                              {
                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_44_44, mdb__debugger_interface__V_45_45);
                              }
                              mdb__debugger_interface__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word mdb__debugger_interface__TypeInfo_74_74;
                          MR_Word mdb__debugger_interface__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word mdb__debugger_interface__V_47_47;

                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                          if (mdb__debugger_interface__succeeded)
                            {
                              mdb__debugger_interface__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
                              mdb__debugger_interface__TypeInfo_74_74 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
                              {
                                mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_74_74, &mdb__debugger_interface__V_6_6, ((MR_Box) (mdb__debugger_interface__V_46_46)), ((MR_Box) (mdb__debugger_interface__V_47_47)));
                              }
                              mdb__debugger_interface__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word mdb__debugger_interface__TypeInfo_75_75;
                          MR_Word mdb__debugger_interface__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word mdb__debugger_interface__V_49_49;

                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                          if (mdb__debugger_interface__succeeded)
                            {
                              mdb__debugger_interface__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
                              mdb__debugger_interface__TypeInfo_75_75 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
                              {
                                mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_75_75, &mdb__debugger_interface__V_6_6, ((MR_Box) (mdb__debugger_interface__V_48_48)), ((MR_Box) (mdb__debugger_interface__V_49_49)));
                              }
                              mdb__debugger_interface__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word mdb__debugger_interface__TypeInfo_76_76;
                          MR_Word mdb__debugger_interface__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word mdb__debugger_interface__V_51_51;

                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                          if (mdb__debugger_interface__succeeded)
                            {
                              mdb__debugger_interface__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
                              mdb__debugger_interface__TypeInfo_76_76 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
                              {
                                mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_76_76, &mdb__debugger_interface__V_6_6, ((MR_Box) (mdb__debugger_interface__V_50_50)), ((MR_Box) (mdb__debugger_interface__V_51_51)));
                              }
                              mdb__debugger_interface__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_String mdb__debugger_interface__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                          MR_String mdb__debugger_interface__V_53_53;

                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
                          if (mdb__debugger_interface__succeeded)
                            {
                              mdb__debugger_interface__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
                              {
                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_52_52, mdb__debugger_interface__V_53_53);
                              }
                              mdb__debugger_interface__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_String mdb__debugger_interface__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                          MR_String mdb__debugger_interface__V_55_55;

                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
                          if (mdb__debugger_interface__succeeded)
                            {
                              mdb__debugger_interface__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
                              {
                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_54_54, mdb__debugger_interface__V_55_55);
                              }
                              mdb__debugger_interface__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_String mdb__debugger_interface__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                          MR_String mdb__debugger_interface__V_57_57;

                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (mdb__debugger_interface__succeeded)
                            {
                              mdb__debugger_interface__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
                              {
                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_56_56, mdb__debugger_interface__V_57_57);
                              }
                              mdb__debugger_interface__succeeded = MR_TRUE;
                            }
                        }
                        break;
                    }
                    break;
                }
                if (mdb__debugger_interface__succeeded)
                  *mdb__debugger_interface__HeadVar__1_1 = mdb__debugger_interface__V_6_6;
                else
                  {
                    mercury__private_builtin__compare_error_0_p_0();
                    return;
                  }
              }
          }
      }
  }
}

static void MR_CALL 
mdb__debugger_interface____Index____debugger_request_0_0(
  MR_Word mdb__debugger_interface__HeadVar__1_1,
  MR_Integer * mdb__debugger_interface__HeadVar__2_2)
{
  {
    MR_bool mdb__debugger_interface__succeeded;

    switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mdb__debugger_interface__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 3;
            break;
          case (MR_Integer) 3:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 4;
            break;
          case (MR_Integer) 4:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 6;
            break;
          case (MR_Integer) 5:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 7;
            break;
          case (MR_Integer) 6:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 8;
            break;
          case (MR_Integer) 7:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 9;
            break;
          case (MR_Integer) 8:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 10;
            break;
          case (MR_Integer) 9:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 11;
            break;
          case (MR_Integer) 10:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 19;
            break;
          case (MR_Integer) 11:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 20;
            break;
          case (MR_Integer) 12:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 21;
            break;
          case (MR_Integer) 13:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 22;
            break;
        }
        break;
      case (MR_Integer) 1:
        *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 12;
            break;
          case (MR_Integer) 1:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 13;
            break;
          case (MR_Integer) 2:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 14;
            break;
          case (MR_Integer) 3:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 15;
            break;
          case (MR_Integer) 4:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 16;
            break;
          case (MR_Integer) 5:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 17;
            break;
          case (MR_Integer) 6:
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 18;
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_request_0_0(
  MR_Word mdb__debugger_interface__HeadVar__1_1,
  MR_Word mdb__debugger_interface__HeadVar__2_2)
{
  {
    MR_bool mdb__debugger_interface__succeeded;
    MR_Integer mdb__debugger_interface__CastX_71 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
    MR_Integer mdb__debugger_interface__CastY_72 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

    mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastX_71 == mdb__debugger_interface__CastY_72);
    if (mdb__debugger_interface__succeeded)
      mdb__debugger_interface__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdb__debugger_interface__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mdb__debugger_interface__CastX_3 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_4 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_4 == mdb__debugger_interface__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mdb__debugger_interface__CastX_29 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_30 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_30 == mdb__debugger_interface__CastX_29);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer mdb__debugger_interface__CastX_31 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_32 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_32 == mdb__debugger_interface__CastX_31);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer mdb__debugger_interface__CastX_33 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_34 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_34 == mdb__debugger_interface__CastX_33);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer mdb__debugger_interface__CastX_37 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_38 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_38 == mdb__debugger_interface__CastX_37);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer mdb__debugger_interface__CastX_39 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_40 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_40 == mdb__debugger_interface__CastX_39);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Integer mdb__debugger_interface__CastX_41 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_42 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_42 == mdb__debugger_interface__CastX_41);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Integer mdb__debugger_interface__CastX_43 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_44 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_44 == mdb__debugger_interface__CastX_43);
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Integer mdb__debugger_interface__CastX_45 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_46 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_46 == mdb__debugger_interface__CastX_45);
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Integer mdb__debugger_interface__CastX_47 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_48 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_48 == mdb__debugger_interface__CastX_47);
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Integer mdb__debugger_interface__CastX_63 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_64 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_64 == mdb__debugger_interface__CastX_63);
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Integer mdb__debugger_interface__CastX_65 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_66 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_66 == mdb__debugger_interface__CastX_65);
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Integer mdb__debugger_interface__CastX_67 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_68 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_68 == mdb__debugger_interface__CastX_67);
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Integer mdb__debugger_interface__CastX_69 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
                MR_Integer mdb__debugger_interface__CastY_70 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_70 == mdb__debugger_interface__CastX_69);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__debugger_interface__TypeCtorInfo_74_74;
            MR_Word mdb__debugger_interface__TypeCtorInfo_75_75;
            MR_Word mdb__debugger_interface__TypeCtorInfo_76_76;
            MR_Word mdb__debugger_interface__TypeCtorInfo_77_77;
            MR_Word mdb__debugger_interface__TypeCtorInfo_78_78;
            MR_Word mdb__debugger_interface__TypeCtorInfo_79_79;
            MR_Word mdb__debugger_interface__TypeCtorInfo_80_80;
            MR_Word mdb__debugger_interface__TypeCtorInfo_81_81;
            MR_Word mdb__debugger_interface__TypeCtorInfo_82_82;
            MR_Word mdb__debugger_interface__TypeInfo_83_83;
            MR_Word mdb__debugger_interface__TypeCtorInfo_84_84;
            MR_Word mdb__debugger_interface__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__debugger_interface__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdb__debugger_interface__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mdb__debugger_interface__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 3)));
            MR_Word mdb__debugger_interface__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 4)));
            MR_Word mdb__debugger_interface__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 5)));
            MR_Word mdb__debugger_interface__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 6)));
            MR_Word mdb__debugger_interface__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 7)));
            MR_Word mdb__debugger_interface__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 8)));
            MR_Word mdb__debugger_interface__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 9)));
            MR_Word mdb__debugger_interface__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 10)));
            MR_Word mdb__debugger_interface__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 11)));
            MR_Word mdb__debugger_interface__V_17_17;
            MR_Word mdb__debugger_interface__V_18_18;
            MR_Word mdb__debugger_interface__V_19_19;
            MR_Word mdb__debugger_interface__V_20_20;
            MR_Word mdb__debugger_interface__V_21_21;
            MR_Word mdb__debugger_interface__V_22_22;
            MR_Word mdb__debugger_interface__V_23_23;
            MR_Word mdb__debugger_interface__V_24_24;
            MR_Word mdb__debugger_interface__V_25_25;
            MR_Word mdb__debugger_interface__V_26_26;
            MR_Word mdb__debugger_interface__V_27_27;
            MR_Word mdb__debugger_interface__V_28_28;

            mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__debugger_interface__succeeded)
              {
                mdb__debugger_interface__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
                mdb__debugger_interface__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                mdb__debugger_interface__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
                mdb__debugger_interface__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
                mdb__debugger_interface__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
                mdb__debugger_interface__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 5)));
                mdb__debugger_interface__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 6)));
                mdb__debugger_interface__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 7)));
                mdb__debugger_interface__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 8)));
                mdb__debugger_interface__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 9)));
                mdb__debugger_interface__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 10)));
                mdb__debugger_interface__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 11)));
                mdb__debugger_interface__TypeCtorInfo_74_74 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                {
                  mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_74_74, mdb__debugger_interface__V_5_5, mdb__debugger_interface__V_17_17);
                }
                if (mdb__debugger_interface__succeeded)
                  {
                    mdb__debugger_interface__TypeCtorInfo_75_75 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                    {
                      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_75_75, mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_18_18);
                    }
                    if (mdb__debugger_interface__succeeded)
                      {
                        mdb__debugger_interface__TypeCtorInfo_76_76 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                        {
                          mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_76_76, mdb__debugger_interface__V_7_7, mdb__debugger_interface__V_19_19);
                        }
                        if (mdb__debugger_interface__succeeded)
                          {
                            mdb__debugger_interface__TypeCtorInfo_77_77 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0;
                            {
                              mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_77_77, mdb__debugger_interface__V_8_8, mdb__debugger_interface__V_20_20);
                            }
                            if (mdb__debugger_interface__succeeded)
                              {
                                {
                                  mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____pred_match_0_0(mdb__debugger_interface__V_9_9, mdb__debugger_interface__V_21_21);
                                }
                                if (mdb__debugger_interface__succeeded)
                                  {
                                    mdb__debugger_interface__TypeCtorInfo_78_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                                    {
                                      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_78_78, mdb__debugger_interface__V_10_10, mdb__debugger_interface__V_22_22);
                                    }
                                    if (mdb__debugger_interface__succeeded)
                                      {
                                        mdb__debugger_interface__TypeCtorInfo_79_79 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                                        {
                                          mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_79_79, mdb__debugger_interface__V_11_11, mdb__debugger_interface__V_23_23);
                                        }
                                        if (mdb__debugger_interface__succeeded)
                                          {
                                            mdb__debugger_interface__TypeCtorInfo_80_80 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                                            {
                                              mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_80_80, mdb__debugger_interface__V_12_12, mdb__debugger_interface__V_24_24);
                                            }
                                            if (mdb__debugger_interface__succeeded)
                                              {
                                                mdb__debugger_interface__TypeCtorInfo_81_81 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                                                {
                                                  mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_81_81, mdb__debugger_interface__V_13_13, mdb__debugger_interface__V_25_25);
                                                }
                                                if (mdb__debugger_interface__succeeded)
                                                  {
                                                    mdb__debugger_interface__TypeCtorInfo_82_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                                                    {
                                                      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_82_82, mdb__debugger_interface__V_14_14, mdb__debugger_interface__V_26_26);
                                                    }
                                                    if (mdb__debugger_interface__succeeded)
                                                      {
                                                        mdb__debugger_interface__TypeInfo_83_83 = (MR_Word) &mdb__debugger_interface_scalar_common_1[0];
                                                        {
                                                          mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeInfo_83_83, mdb__debugger_interface__V_15_15, mdb__debugger_interface__V_27_27);
                                                        }
                                                        if (mdb__debugger_interface__succeeded)
                                                          {
                                                            mdb__debugger_interface__TypeCtorInfo_84_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                                                            {
                                                              mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_84_84, mdb__debugger_interface__V_16_16, mdb__debugger_interface__V_28_28);
                                                            }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mdb__debugger_interface__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mdb__debugger_interface__V_36_36;

            mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__debugger_interface__succeeded)
              {
                mdb__debugger_interface__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_35_35 == mdb__debugger_interface__V_36_36);
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String mdb__debugger_interface__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mdb__debugger_interface__V_50_50;

                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (mdb__debugger_interface__succeeded)
                  {
                    mdb__debugger_interface__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_49_49, mdb__debugger_interface__V_50_50) == 0);
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mdb__debugger_interface__TypeInfo_86_86;
                MR_Word mdb__debugger_interface__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mdb__debugger_interface__V_52_52;

                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (mdb__debugger_interface__succeeded)
                  {
                    mdb__debugger_interface__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                    mdb__debugger_interface__TypeInfo_86_86 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
                    {
                      mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_86_86, ((MR_Box) (mdb__debugger_interface__V_51_51)), ((MR_Box) (mdb__debugger_interface__V_52_52)));
                    }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mdb__debugger_interface__TypeInfo_73_73;
                MR_Word mdb__debugger_interface__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mdb__debugger_interface__V_54_54;

                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (mdb__debugger_interface__succeeded)
                  {
                    mdb__debugger_interface__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                    mdb__debugger_interface__TypeInfo_73_73 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
                    {
                      mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_73_73, ((MR_Box) (mdb__debugger_interface__V_53_53)), ((MR_Box) (mdb__debugger_interface__V_54_54)));
                    }
                  }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word mdb__debugger_interface__TypeInfo_85_85;
                MR_Word mdb__debugger_interface__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mdb__debugger_interface__V_56_56;

                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (mdb__debugger_interface__succeeded)
                  {
                    mdb__debugger_interface__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                    mdb__debugger_interface__TypeInfo_85_85 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
                    {
                      mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_85_85, ((MR_Box) (mdb__debugger_interface__V_55_55)), ((MR_Box) (mdb__debugger_interface__V_56_56)));
                    }
                  }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_String mdb__debugger_interface__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mdb__debugger_interface__V_58_58;

                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (mdb__debugger_interface__succeeded)
                  {
                    mdb__debugger_interface__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_57_57, mdb__debugger_interface__V_58_58) == 0);
                  }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_String mdb__debugger_interface__V_59_59 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mdb__debugger_interface__V_60_60;

                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (mdb__debugger_interface__succeeded)
                  {
                    mdb__debugger_interface__V_60_60 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_59_59, mdb__debugger_interface__V_60_60) == 0);
                  }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_String mdb__debugger_interface__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mdb__debugger_interface__V_62_62;

                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (mdb__debugger_interface__succeeded)
                  {
                    mdb__debugger_interface__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_61_61, mdb__debugger_interface__V_62_62) == 0);
                  }
              }
              break;
          }
          break;
      }
    return mdb__debugger_interface__succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____call_number_0_0(
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
  MR_Integer mdb__debugger_interface__HeadVar__2_2,
  MR_Integer mdb__debugger_interface__HeadVar__3_3)
{
  {
    MR_bool mdb__debugger_interface__succeeded;
    MR_Integer mdb__debugger_interface__Cast_HeadVar1_4 = mdb__debugger_interface__HeadVar__2_2;
    MR_Integer mdb__debugger_interface__Cast_HeadVar2_5 = mdb__debugger_interface__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__debugger_interface__HeadVar__1_1, mdb__debugger_interface__Cast_HeadVar1_4, mdb__debugger_interface__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____call_number_0_0(
  MR_Integer mdb__debugger_interface__HeadVar__1_1,
  MR_Integer mdb__debugger_interface__HeadVar__2_2)
{
  {
    MR_bool mdb__debugger_interface__succeeded;
    MR_Integer mdb__debugger_interface__Cast_HeadVar1_3 = mdb__debugger_interface__HeadVar__1_1;
    MR_Integer mdb__debugger_interface__Cast_HeadVar2_4 = mdb__debugger_interface__HeadVar__2_2;

    mdb__debugger_interface__succeeded = (mdb__debugger_interface__Cast_HeadVar1_3 == mdb__debugger_interface__Cast_HeadVar2_4);
    return mdb__debugger_interface__succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____arity_0_0(
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
  MR_Integer mdb__debugger_interface__HeadVar__2_2,
  MR_Integer mdb__debugger_interface__HeadVar__3_3)
{
  {
    MR_bool mdb__debugger_interface__succeeded;
    MR_Integer mdb__debugger_interface__Cast_HeadVar1_4 = mdb__debugger_interface__HeadVar__2_2;
    MR_Integer mdb__debugger_interface__Cast_HeadVar2_5 = mdb__debugger_interface__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__debugger_interface__HeadVar__1_1, mdb__debugger_interface__Cast_HeadVar1_4, mdb__debugger_interface__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____arity_0_0(
  MR_Integer mdb__debugger_interface__HeadVar__1_1,
  MR_Integer mdb__debugger_interface__HeadVar__2_2)
{
  {
    MR_bool mdb__debugger_interface__succeeded;
    MR_Integer mdb__debugger_interface__Cast_HeadVar1_3 = mdb__debugger_interface__HeadVar__1_1;
    MR_Integer mdb__debugger_interface__Cast_HeadVar2_4 = mdb__debugger_interface__HeadVar__2_2;

    mdb__debugger_interface__succeeded = (mdb__debugger_interface__Cast_HeadVar1_3 == mdb__debugger_interface__Cast_HeadVar2_4);
    return mdb__debugger_interface__succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface__get_variable_name_2_p_0(
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
  MR_String * mdb__debugger_interface__Options_4)
{
  {
    MR_bool mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
    MR_String mdb__debugger_interface__OptionsPrime_5;

    if (mdb__debugger_interface__succeeded)
      {
        mdb__debugger_interface__OptionsPrime_5 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_3, (MR_Integer) 1)));
        *mdb__debugger_interface__Options_4 = mdb__debugger_interface__OptionsPrime_5;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mdb.debugger_interface", (MR_String) "predicate \140mdb.debugger_interface.get_variable_name\'/2", (MR_String) "not a browse request");
          return;
        }
      }
  }
}

static void MR_CALL 
mdb__debugger_interface__init_mercury_string_1_p_0(
  MR_String * mdb__debugger_interface__HeadVar__1_1)
{
  {
    MR_bool mdb__debugger_interface__succeeded;

    *mdb__debugger_interface__HeadVar__1_1 = (MR_String) "";
  }
}

static void MR_CALL 
mdb__debugger_interface__get_object_file_name_2_p_0(
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
  MR_String * mdb__debugger_interface__ObjectFileName_4)
{
  {
    MR_bool mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
    MR_String mdb__debugger_interface__ObjectFileNamePrime_5;

    if (mdb__debugger_interface__succeeded)
      {
        mdb__debugger_interface__ObjectFileNamePrime_5 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_3, (MR_Integer) 1)));
        *mdb__debugger_interface__ObjectFileName_4 = mdb__debugger_interface__ObjectFileNamePrime_5;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mdb.debugger_interface", (MR_String) "predicate \140mdb.debugger_interface.get_object_file_name\'/2", (MR_String) "not a link_collect request");
          return;
        }
      }
  }
}

static void MR_CALL 
mdb__debugger_interface__get_mmc_options_2_p_0(
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
  MR_String * mdb__debugger_interface__Options_4)
{
  {
    MR_bool mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_String mdb__debugger_interface__OptionsPrim_5;

    if (mdb__debugger_interface__succeeded)
      {
        mdb__debugger_interface__OptionsPrim_5 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_3, (MR_Integer) 1)));
        *mdb__debugger_interface__Options_4 = mdb__debugger_interface__OptionsPrim_5;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mdb.debugger_interface", (MR_String) "predicate \140mdb.debugger_interface.get_mmc_options\'/2", (MR_String) "not a mmc_options request");
          return;
        }
      }
  }
}

static void MR_CALL 
mdb__debugger_interface__get_list_modules_to_import_3_p_0(
  MR_Word mdb__debugger_interface__DebuggerRequest_4,
  MR_Integer * mdb__debugger_interface__ListLength_5,
  MR_Word * mdb__debugger_interface__ModulesList_6)
{
  {
    MR_bool mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Word mdb__debugger_interface__List_7;

    if (mdb__debugger_interface__succeeded)
      {
        mdb__debugger_interface__List_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_4, (MR_Integer) 1)));
        *mdb__debugger_interface__ModulesList_6 = mdb__debugger_interface__List_7;
      }
    else
      {
        MR_Word mdb__debugger_interface__List_12;

        mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_4, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (mdb__debugger_interface__succeeded)
          {
            mdb__debugger_interface__List_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_4, (MR_Integer) 1)));
            *mdb__debugger_interface__ModulesList_6 = mdb__debugger_interface__List_12;
          }
        else
          {
            MR_Word mdb__debugger_interface__List_11;

            mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_4, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (mdb__debugger_interface__succeeded)
              {
                mdb__debugger_interface__List_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_4, (MR_Integer) 1)));
                *mdb__debugger_interface__ModulesList_6 = mdb__debugger_interface__List_11;
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "mdb.debugger_interface", (MR_String) "predicate \140mdb.debugger_interface.get_list_modules_to_import\'/3", (MR_String) "not a query request");
                  return;
                }
              }
          }
      }
    {
      mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, *mdb__debugger_interface__ModulesList_6, mdb__debugger_interface__ListLength_5);
    }
  }
}

static void MR_CALL 
mdb__debugger_interface__read_request_from_socket_5_p_0(
  MR_Word mdb__debugger_interface__SocketStream_6,
  MR_Word * mdb__debugger_interface__Request_7,
  MR_Integer * mdb__debugger_interface__RequestType_8)
{
  {
    MR_bool mdb__debugger_interface__succeeded;
    MR_Word mdb__debugger_interface__MaybeRequest_10;

    {
      mercury__io__read_4_p_0((MR_Word) &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_request_0, mdb__debugger_interface__SocketStream_6, &mdb__debugger_interface__MaybeRequest_10);
    }
    switch (MR_tag((MR_Word) mdb__debugger_interface__MaybeRequest_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *mdb__debugger_interface__Request_7 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__debugger_interface_scalar_common_1[7]);
          *mdb__debugger_interface__RequestType_8 = (MR_Integer) 6;
        }
        break;
      case (MR_Integer) 1:
        {
          *mdb__debugger_interface__Request_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__MaybeRequest_10, (MR_Integer) 0)));
          switch (MR_tag((MR_Word) *mdb__debugger_interface__Request_7)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(*mdb__debugger_interface__Request_7)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 3;
                  break;
                case (MR_Integer) 2:
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 7;
                  break;
                case (MR_Integer) 4:
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 5;
                  break;
                case (MR_Integer) 5:
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 4;
                  break;
                case (MR_Integer) 6:
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 9;
                  break;
                case (MR_Integer) 7:
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 10;
                  break;
                case (MR_Integer) 8:
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 11;
                  break;
                case (MR_Integer) 9:
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 12;
                  break;
                case (MR_Integer) 10:
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 19;
                  break;
                case (MR_Integer) 11:
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 20;
                  break;
                case (MR_Integer) 12:
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 21;
                  break;
                case (MR_Integer) 13:
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 22;
                  break;
              }
              break;
            case (MR_Integer) 1:
              *mdb__debugger_interface__RequestType_8 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *mdb__debugger_interface__RequestType_8 = (MR_Integer) 8;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), *mdb__debugger_interface__Request_7, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 6;
                  break;
                case (MR_Integer) 1:
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 13;
                  break;
                case (MR_Integer) 2:
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 14;
                  break;
                case (MR_Integer) 3:
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 15;
                  break;
                case (MR_Integer) 4:
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 16;
                  break;
                case (MR_Integer) 5:
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 17;
                  break;
                case (MR_Integer) 6:
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 18;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String mdb__debugger_interface__ErrorMsg_12 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__MaybeRequest_10, (MR_Integer) 0)));
          MR_Integer mdb__debugger_interface___LineNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__MaybeRequest_10, (MR_Integer) 1)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mdb__debugger_interface__Request_7 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__debugger_interface__ErrorMsg_12));
          }
          *mdb__debugger_interface__RequestType_8 = (MR_Integer) 6;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface__found_match_comp_14_p_0(
  MR_Integer mdb__debugger_interface__EventNumber_15,
  MR_Integer mdb__debugger_interface__CallNumber_16,
  MR_Integer mdb__debugger_interface__DepthNumber_17,
  MR_Word mdb__debugger_interface__Port_18,
  MR_String mdb__debugger_interface__NameType_19,
  MR_String mdb__debugger_interface__ModuleType_20,
  MR_String mdb__debugger_interface__DefModuleName_21,
  MR_String mdb__debugger_interface__PredName_22,
  MR_Integer mdb__debugger_interface__Arity_23,
  MR_Integer mdb__debugger_interface__ModeNum_24,
  MR_Integer mdb__debugger_interface__Determinism_25,
  MR_Word mdb__debugger_interface__Args_26,
  MR_String mdb__debugger_interface__Path_27,
  MR_Word mdb__debugger_interface__DebuggerRequest_28)
{
  {
    MR_bool mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_28)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mdb__debugger_interface__MatchEventNumber_29;
    MR_Word mdb__debugger_interface__MatchCallNumber_30;
    MR_Word mdb__debugger_interface__MatchDepthNumber_31;
    MR_Word mdb__debugger_interface__MatchPort_32;
    MR_Word mdb__debugger_interface__CompilerGeneratedPredMatch_33;
    MR_Word mdb__debugger_interface__MatchDefModuleName_34;
    MR_Word mdb__debugger_interface__MatchPredName_35;
    MR_Word mdb__debugger_interface__MatchArity_36;
    MR_Word mdb__debugger_interface__MatchModeNum_37;
    MR_Word mdb__debugger_interface__MatchDeterminism_38;
    MR_Word mdb__debugger_interface__MatchArgs_39;
    MR_Word mdb__debugger_interface__MatchPath_40;

    if (mdb__debugger_interface__succeeded)
      {
        mdb__debugger_interface__MatchEventNumber_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 0)));
        mdb__debugger_interface__MatchCallNumber_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 1)));
        mdb__debugger_interface__MatchDepthNumber_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 2)));
        mdb__debugger_interface__MatchPort_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 3)));
        mdb__debugger_interface__CompilerGeneratedPredMatch_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 4)));
        mdb__debugger_interface__MatchDefModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 5)));
        mdb__debugger_interface__MatchPredName_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 6)));
        mdb__debugger_interface__MatchArity_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 7)));
        mdb__debugger_interface__MatchModeNum_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 8)));
        mdb__debugger_interface__MatchDeterminism_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 9)));
        mdb__debugger_interface__MatchArgs_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 10)));
        mdb__debugger_interface__MatchPath_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 11)));
        {
          MR_Word mdb__debugger_interface__TypeCtorInfo_46_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          MR_Word mdb__debugger_interface__TypeCtorInfo_47_47;
          MR_Word mdb__debugger_interface__TypeCtorInfo_49_49;
          MR_Word mdb__debugger_interface__TypeInfo_50_50;
          MR_Word mdb__debugger_interface__MatchNameType_41;
          MR_Word mdb__debugger_interface__MatchModuleType_42;

          {
            mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_46_46, mdb__debugger_interface__MatchEventNumber_29, ((MR_Box) (mdb__debugger_interface__EventNumber_15)));
          }
          if (mdb__debugger_interface__succeeded)
            {
              {
                mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_46_46, mdb__debugger_interface__MatchCallNumber_30, ((MR_Box) (mdb__debugger_interface__CallNumber_16)));
              }
              if (mdb__debugger_interface__succeeded)
                {
                  {
                    mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_46_46, mdb__debugger_interface__MatchDepthNumber_31, ((MR_Box) (mdb__debugger_interface__DepthNumber_17)));
                  }
                  if (mdb__debugger_interface__succeeded)
                    {
                      mdb__debugger_interface__TypeCtorInfo_47_47 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0;
                      {
                        mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_47_47, mdb__debugger_interface__MatchPort_32, ((MR_Box) (mdb__debugger_interface__Port_18)));
                      }
                      if (mdb__debugger_interface__succeeded)
                        {
                          mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__CompilerGeneratedPredMatch_33)) == (MR_mktag((MR_Integer) 2)));
                          if (mdb__debugger_interface__succeeded)
                            {
                              mdb__debugger_interface__MatchNameType_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__CompilerGeneratedPredMatch_33, (MR_Integer) 0)));
                              mdb__debugger_interface__MatchModuleType_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__CompilerGeneratedPredMatch_33, (MR_Integer) 1)));
                              {
                                MR_Word mdb__debugger_interface__TypeCtorInfo_48_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

                                {
                                  mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_48_48, mdb__debugger_interface__MatchNameType_41, ((MR_Box) (mdb__debugger_interface__NameType_19)));
                                }
                                if (mdb__debugger_interface__succeeded)
                                  {
                                    mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_48_48, mdb__debugger_interface__MatchModuleType_42, ((MR_Box) (mdb__debugger_interface__ModuleType_20)));
                                  }
                              }
                            }
                          else
                            mdb__debugger_interface__succeeded = (mdb__debugger_interface__CompilerGeneratedPredMatch_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (mdb__debugger_interface__succeeded)
                            {
                              mdb__debugger_interface__TypeCtorInfo_49_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                              {
                                mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_49_49, mdb__debugger_interface__MatchDefModuleName_34, ((MR_Box) (mdb__debugger_interface__DefModuleName_21)));
                              }
                              if (mdb__debugger_interface__succeeded)
                                {
                                  {
                                    mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_49_49, mdb__debugger_interface__MatchPredName_35, ((MR_Box) (mdb__debugger_interface__PredName_22)));
                                  }
                                  if (mdb__debugger_interface__succeeded)
                                    {
                                      {
                                        mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_46_46, mdb__debugger_interface__MatchArity_36, ((MR_Box) (mdb__debugger_interface__Arity_23)));
                                      }
                                      if (mdb__debugger_interface__succeeded)
                                        {
                                          {
                                            mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_46_46, mdb__debugger_interface__MatchModeNum_37, ((MR_Box) (mdb__debugger_interface__ModeNum_24)));
                                          }
                                          if (mdb__debugger_interface__succeeded)
                                            {
                                              {
                                                mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_46_46, mdb__debugger_interface__MatchDeterminism_38, ((MR_Box) (mdb__debugger_interface__Determinism_25)));
                                              }
                                              if (mdb__debugger_interface__succeeded)
                                                {
                                                  mdb__debugger_interface__TypeInfo_50_50 = (MR_Word) &mdb__debugger_interface_scalar_common_1[0];
                                                  {
                                                    mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeInfo_50_50, mdb__debugger_interface__MatchArgs_39, ((MR_Box) (mdb__debugger_interface__Args_26)));
                                                  }
                                                  if (mdb__debugger_interface__succeeded)
                                                    {
                                                      mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_49_49, mdb__debugger_interface__MatchPath_40, ((MR_Box) (mdb__debugger_interface__Path_27)));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mdb.debugger_interface", (MR_String) "predicate \140mdb.debugger_interface.found_match_comp\'/14", (MR_String) "forward_move expected");
        }
        mdb__debugger_interface__succeeded = MR_TRUE;
      }
    return mdb__debugger_interface__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface__match_2_p_0(
  MR_Word mdb__debugger_interface__TypeInfo_for_T_14,
  MR_Word mdb__debugger_interface__HeadVar__1_1,
  MR_Box mdb__debugger_interface__HeadVar__2_2)
{
  {
    MR_bool mdb__debugger_interface__succeeded;

    switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mdb__debugger_interface__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 1:
        {
          MR_Box mdb__debugger_interface__X_4 = (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0));

          {
            mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_for_T_14, mdb__debugger_interface__HeadVar__2_2, mdb__debugger_interface__X_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mdb__debugger_interface__X_5 = (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0));

          {
            mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_for_T_14, mdb__debugger_interface__X_5, mdb__debugger_interface__HeadVar__2_2);
          }
          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mdb__debugger_interface__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));

              {
                mdb__debugger_interface__succeeded = mercury__list__member_2_p_0(mdb__debugger_interface__TypeInfo_for_T_14, mdb__debugger_interface__HeadVar__2_2, mdb__debugger_interface__L_7);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mdb__debugger_interface__Low_9 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1));
              MR_Box mdb__debugger_interface__High_10 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2));
              MR_Word mdb__debugger_interface__LE_12;
              MR_Word mdb__debugger_interface__GE_13;

              {
                mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_for_T_14, &mdb__debugger_interface__LE_12, mdb__debugger_interface__HeadVar__2_2, mdb__debugger_interface__High_10);
              }
              switch (mdb__debugger_interface__LE_12) {
                default:
                  mdb__debugger_interface__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 1:
                  mdb__debugger_interface__succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 0:
                  mdb__debugger_interface__succeeded = MR_TRUE;
                  break;
              }
              if (mdb__debugger_interface__succeeded)
                {
                  {
                    mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_for_T_14, &mdb__debugger_interface__GE_13, mdb__debugger_interface__HeadVar__2_2, mdb__debugger_interface__Low_9);
                  }
                  switch (mdb__debugger_interface__GE_13) {
                    default:
                      mdb__debugger_interface__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      mdb__debugger_interface__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      mdb__debugger_interface__succeeded = MR_TRUE;
                      break;
                  }
                }
            }
            break;
        }
        break;
    }
    return mdb__debugger_interface__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface__found_match_user_14_p_0(
  MR_Integer mdb__debugger_interface__EventNumber_15,
  MR_Integer mdb__debugger_interface__CallNumber_16,
  MR_Integer mdb__debugger_interface__DepthNumber_17,
  MR_Word mdb__debugger_interface__Port_18,
  MR_Word mdb__debugger_interface__PredOrFunc_19,
  MR_String mdb__debugger_interface__DeclModuleName_20,
  MR_String mdb__debugger_interface__DefModuleName_21,
  MR_String mdb__debugger_interface__PredName_22,
  MR_Integer mdb__debugger_interface__Arity_23,
  MR_Integer mdb__debugger_interface__ModeNum_24,
  MR_Integer mdb__debugger_interface__Determinism_25,
  MR_Word mdb__debugger_interface__Args_26,
  MR_String mdb__debugger_interface__Path_27,
  MR_Word mdb__debugger_interface__DebuggerRequest_28)
{
  {
    MR_bool mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_28)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mdb__debugger_interface__MatchEventNumber_29;
    MR_Word mdb__debugger_interface__MatchCallNumber_30;
    MR_Word mdb__debugger_interface__MatchDepthNumber_31;
    MR_Word mdb__debugger_interface__MatchPort_32;
    MR_Word mdb__debugger_interface__UserPredMatch_33;
    MR_Word mdb__debugger_interface__MatchDefModuleName_34;
    MR_Word mdb__debugger_interface__MatchPredName_35;
    MR_Word mdb__debugger_interface__MatchArity_36;
    MR_Word mdb__debugger_interface__MatchModeNum_37;
    MR_Word mdb__debugger_interface__MatchDeterminism_38;
    MR_Word mdb__debugger_interface__MatchArgs_39;
    MR_Word mdb__debugger_interface__MatchPath_40;

    if (mdb__debugger_interface__succeeded)
      {
        mdb__debugger_interface__MatchEventNumber_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 0)));
        mdb__debugger_interface__MatchCallNumber_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 1)));
        mdb__debugger_interface__MatchDepthNumber_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 2)));
        mdb__debugger_interface__MatchPort_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 3)));
        mdb__debugger_interface__UserPredMatch_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 4)));
        mdb__debugger_interface__MatchDefModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 5)));
        mdb__debugger_interface__MatchPredName_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 6)));
        mdb__debugger_interface__MatchArity_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 7)));
        mdb__debugger_interface__MatchModeNum_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 8)));
        mdb__debugger_interface__MatchDeterminism_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 9)));
        mdb__debugger_interface__MatchArgs_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 10)));
        mdb__debugger_interface__MatchPath_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 11)));
        {
          MR_Word mdb__debugger_interface__TypeCtorInfo_46_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          MR_Word mdb__debugger_interface__TypeCtorInfo_47_47;
          MR_Word mdb__debugger_interface__TypeCtorInfo_50_50;
          MR_Word mdb__debugger_interface__TypeInfo_51_51;
          MR_Word mdb__debugger_interface__MatchPredOrFunc_41;
          MR_Word mdb__debugger_interface__MatchDeclModuleName_42;

          {
            mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_46_46, mdb__debugger_interface__MatchEventNumber_29, ((MR_Box) (mdb__debugger_interface__EventNumber_15)));
          }
          if (mdb__debugger_interface__succeeded)
            {
              {
                mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_46_46, mdb__debugger_interface__MatchCallNumber_30, ((MR_Box) (mdb__debugger_interface__CallNumber_16)));
              }
              if (mdb__debugger_interface__succeeded)
                {
                  {
                    mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_46_46, mdb__debugger_interface__MatchDepthNumber_31, ((MR_Box) (mdb__debugger_interface__DepthNumber_17)));
                  }
                  if (mdb__debugger_interface__succeeded)
                    {
                      mdb__debugger_interface__TypeCtorInfo_47_47 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0;
                      {
                        mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_47_47, mdb__debugger_interface__MatchPort_32, ((MR_Box) (mdb__debugger_interface__Port_18)));
                      }
                      if (mdb__debugger_interface__succeeded)
                        {
                          mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__UserPredMatch_33)) == (MR_mktag((MR_Integer) 1)));
                          if (mdb__debugger_interface__succeeded)
                            {
                              mdb__debugger_interface__MatchPredOrFunc_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__UserPredMatch_33, (MR_Integer) 0)));
                              mdb__debugger_interface__MatchDeclModuleName_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__UserPredMatch_33, (MR_Integer) 1)));
                              {
                                MR_Word mdb__debugger_interface__TypeCtorInfo_49_49;

                                {
                                  mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0, mdb__debugger_interface__MatchPredOrFunc_41, ((MR_Box) (mdb__debugger_interface__PredOrFunc_19)));
                                }
                                if (mdb__debugger_interface__succeeded)
                                  {
                                    mdb__debugger_interface__TypeCtorInfo_49_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                                    {
                                      mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_49_49, mdb__debugger_interface__MatchDeclModuleName_42, ((MR_Box) (mdb__debugger_interface__DeclModuleName_20)));
                                    }
                                  }
                              }
                            }
                          else
                            mdb__debugger_interface__succeeded = (mdb__debugger_interface__UserPredMatch_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (mdb__debugger_interface__succeeded)
                            {
                              mdb__debugger_interface__TypeCtorInfo_50_50 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                              {
                                mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_50_50, mdb__debugger_interface__MatchDefModuleName_34, ((MR_Box) (mdb__debugger_interface__DefModuleName_21)));
                              }
                              if (mdb__debugger_interface__succeeded)
                                {
                                  {
                                    mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_50_50, mdb__debugger_interface__MatchPredName_35, ((MR_Box) (mdb__debugger_interface__PredName_22)));
                                  }
                                  if (mdb__debugger_interface__succeeded)
                                    {
                                      {
                                        mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_46_46, mdb__debugger_interface__MatchArity_36, ((MR_Box) (mdb__debugger_interface__Arity_23)));
                                      }
                                      if (mdb__debugger_interface__succeeded)
                                        {
                                          {
                                            mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_46_46, mdb__debugger_interface__MatchModeNum_37, ((MR_Box) (mdb__debugger_interface__ModeNum_24)));
                                          }
                                          if (mdb__debugger_interface__succeeded)
                                            {
                                              {
                                                mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_46_46, mdb__debugger_interface__MatchDeterminism_38, ((MR_Box) (mdb__debugger_interface__Determinism_25)));
                                              }
                                              if (mdb__debugger_interface__succeeded)
                                                {
                                                  mdb__debugger_interface__TypeInfo_51_51 = (MR_Word) &mdb__debugger_interface_scalar_common_1[0];
                                                  {
                                                    mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeInfo_51_51, mdb__debugger_interface__MatchArgs_39, ((MR_Box) (mdb__debugger_interface__Args_26)));
                                                  }
                                                  if (mdb__debugger_interface__succeeded)
                                                    {
                                                      mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_50_50, mdb__debugger_interface__MatchPath_40, ((MR_Box) (mdb__debugger_interface__Path_27)));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mdb.debugger_interface", (MR_String) "predicate \140mdb.debugger_interface.found_match_user\'/14", (MR_String) "forward_move expected");
        }
        mdb__debugger_interface__succeeded = MR_TRUE;
      }
    return mdb__debugger_interface__succeeded;
  }
}

static MR_Integer MR_CALL 
mdb__debugger_interface__get_var_number_1_f_0(
  MR_Word mdb__debugger_interface__DebuggerRequest_3)
{
  {
    MR_bool mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_3)) == (MR_mktag((MR_Integer) 2)));
    MR_Integer mdb__debugger_interface__VarNumber_4;
    MR_Integer mdb__debugger_interface__Var_5;

    if (mdb__debugger_interface__succeeded)
      {
        mdb__debugger_interface__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__DebuggerRequest_3, (MR_Integer) 0)));
        mdb__debugger_interface__VarNumber_4 = mdb__debugger_interface__Var_5;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mdb.debugger_interface", (MR_String) "function \140mdb.debugger_interface.get_var_number\'/1", (MR_String) "not a current_nth_var request");
        }
      }
    return mdb__debugger_interface__VarNumber_4;
  }
}

static void MR_CALL 
mdb__debugger_interface__output_current_live_var_names_5_p_0(
  MR_Word mdb__debugger_interface__LiveVarNameList_6,
  MR_Word mdb__debugger_interface__LiveVarTypeList_7,
  MR_Word mdb__debugger_interface__OutputStream_8)
{
  {
    MR_bool mdb__debugger_interface__succeeded;
    MR_Word mdb__debugger_interface__CurrentTraceInfo_10;

    {
      mdb__debugger_interface__CurrentTraceInfo_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mdb__debugger_interface__CurrentTraceInfo_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), mdb__debugger_interface__CurrentTraceInfo_10, 1) = ((MR_Box) (mdb__debugger_interface__LiveVarNameList_6));
      MR_hl_field(MR_mktag(3), mdb__debugger_interface__CurrentTraceInfo_10, 2) = ((MR_Box) (mdb__debugger_interface__LiveVarTypeList_7));
    }
    {
      mercury__io__write_4_p_0((MR_Word) &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0, mdb__debugger_interface__OutputStream_8, ((MR_Box) (mdb__debugger_interface__CurrentTraceInfo_10)));
    }
    {
      mercury__io__print_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__debugger_interface__OutputStream_8, ((MR_Box) ((MR_String) ".\n")));
    }
    {
      mercury__io__flush_output_3_p_0(mdb__debugger_interface__OutputStream_8);
    }
  }
}

static void MR_CALL 
mdb__debugger_interface__output_current_nth_var_4_p_0(
  MR_Word mdb__debugger_interface__Var_5,
  MR_Word mdb__debugger_interface__OutputStream_6)
{
  {
    MR_bool mdb__debugger_interface__succeeded;
    MR_Word mdb__debugger_interface__CurrentTraceInfo_8;

    {
      mdb__debugger_interface__CurrentTraceInfo_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mdb__debugger_interface__CurrentTraceInfo_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), mdb__debugger_interface__CurrentTraceInfo_8, 1) = ((MR_Box) (mdb__debugger_interface__Var_5));
    }
    {
      mercury__io__write_4_p_0((MR_Word) &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0, mdb__debugger_interface__OutputStream_6, ((MR_Box) (mdb__debugger_interface__CurrentTraceInfo_8)));
    }
    {
      mercury__io__print_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__debugger_interface__OutputStream_6, ((MR_Box) ((MR_String) ".\n")));
    }
    {
      mercury__io__flush_output_3_p_0(mdb__debugger_interface__OutputStream_6);
    }
  }
}

static void MR_CALL 
mdb__debugger_interface__output_current_vars_5_p_0(
  MR_Word mdb__debugger_interface__VarList_6,
  MR_Word mdb__debugger_interface__StringList_7,
  MR_Word mdb__debugger_interface__OutputStream_8)
{
  {
    MR_bool mdb__debugger_interface__succeeded;
    MR_Word mdb__debugger_interface__CurrentTraceInfo_10;

    {
      mdb__debugger_interface__CurrentTraceInfo_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mdb__debugger_interface__CurrentTraceInfo_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), mdb__debugger_interface__CurrentTraceInfo_10, 1) = ((MR_Box) (mdb__debugger_interface__VarList_6));
      MR_hl_field(MR_mktag(3), mdb__debugger_interface__CurrentTraceInfo_10, 2) = ((MR_Box) (mdb__debugger_interface__StringList_7));
    }
    {
      mercury__io__write_4_p_0((MR_Word) &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0, mdb__debugger_interface__OutputStream_8, ((MR_Box) (mdb__debugger_interface__CurrentTraceInfo_10)));
    }
    {
      mercury__io__print_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__debugger_interface__OutputStream_8, ((MR_Box) ((MR_String) ".\n")));
    }
    {
      mercury__io__flush_output_3_p_0(mdb__debugger_interface__OutputStream_8);
    }
  }
}

static void MR_CALL 
mdb__debugger_interface__output_current_slots_comp_16_p_0(
  MR_Integer mdb__debugger_interface__EventNumber_17,
  MR_Integer mdb__debugger_interface__CallNumber_18,
  MR_Integer mdb__debugger_interface__DepthNumber_19,
  MR_Word mdb__debugger_interface__Port_20,
  MR_String mdb__debugger_interface__NameType_21,
  MR_String mdb__debugger_interface__ModuleType_22,
  MR_String mdb__debugger_interface__DefModuleName_23,
  MR_String mdb__debugger_interface__PredName_24,
  MR_Integer mdb__debugger_interface__Arity_25,
  MR_Integer mdb__debugger_interface__ModeNum_26,
  MR_Integer mdb__debugger_interface__Determinism_27,
  MR_String mdb__debugger_interface__Path_28,
  MR_Integer mdb__debugger_interface__LineNo_29,
  MR_Word mdb__debugger_interface__OutputStream_30)
{
  {
    MR_bool mdb__debugger_interface__succeeded;
    MR_Word mdb__debugger_interface__CurrentTraceInfo_32;

    {
      mdb__debugger_interface__CurrentTraceInfo_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 0) = ((MR_Box) (mdb__debugger_interface__EventNumber_17));
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 1) = ((MR_Box) (mdb__debugger_interface__CallNumber_18));
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 2) = ((MR_Box) (mdb__debugger_interface__DepthNumber_19));
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 3) = ((MR_Box) (mdb__debugger_interface__Port_20));
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 4) = ((MR_Box) (mdb__debugger_interface__NameType_21));
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 5) = ((MR_Box) (mdb__debugger_interface__ModuleType_22));
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 6) = ((MR_Box) (mdb__debugger_interface__DefModuleName_23));
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 7) = ((MR_Box) (mdb__debugger_interface__PredName_24));
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 8) = ((MR_Box) (mdb__debugger_interface__Arity_25));
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 9) = ((MR_Box) (mdb__debugger_interface__ModeNum_26));
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 10) = ((MR_Box) (mdb__debugger_interface__Determinism_27));
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 11) = ((MR_Box) (mdb__debugger_interface__Path_28));
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 12) = ((MR_Box) (mdb__debugger_interface__LineNo_29));
    }
    {
      mercury__io__write_4_p_0((MR_Word) &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0, mdb__debugger_interface__OutputStream_30, ((MR_Box) (mdb__debugger_interface__CurrentTraceInfo_32)));
    }
    {
      mercury__io__print_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__debugger_interface__OutputStream_30, ((MR_Box) ((MR_String) ".\n")));
    }
    {
      mercury__io__flush_output_3_p_0(mdb__debugger_interface__OutputStream_30);
    }
  }
}

static void MR_CALL 
mdb__debugger_interface__output_current_slots_user_16_p_0(
  MR_Integer mdb__debugger_interface__EventNumber_17,
  MR_Integer mdb__debugger_interface__CallNumber_18,
  MR_Integer mdb__debugger_interface__DepthNumber_19,
  MR_Word mdb__debugger_interface__Port_20,
  MR_Word mdb__debugger_interface__PredOrFunc_21,
  MR_String mdb__debugger_interface__DeclModuleName_22,
  MR_String mdb__debugger_interface__DefModuleName_23,
  MR_String mdb__debugger_interface__PredName_24,
  MR_Integer mdb__debugger_interface__Arity_25,
  MR_Integer mdb__debugger_interface__ModeNum_26,
  MR_Integer mdb__debugger_interface__Determinism_27,
  MR_String mdb__debugger_interface__Path_28,
  MR_Integer mdb__debugger_interface__LineNo_29,
  MR_Word mdb__debugger_interface__OutputStream_30)
{
  {
    MR_bool mdb__debugger_interface__succeeded;
    MR_Word mdb__debugger_interface__CurrentTraceInfo_32;

    {
      mdb__debugger_interface__CurrentTraceInfo_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 0) = ((MR_Box) (mdb__debugger_interface__EventNumber_17));
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 1) = ((MR_Box) (mdb__debugger_interface__CallNumber_18));
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 2) = ((MR_Box) (mdb__debugger_interface__DepthNumber_19));
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 3) = ((MR_Box) ((mdb__debugger_interface__Port_20 | ((mdb__debugger_interface__PredOrFunc_21 << (MR_Integer) 4)))));
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 4) = ((MR_Box) (mdb__debugger_interface__DeclModuleName_22));
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 5) = ((MR_Box) (mdb__debugger_interface__DefModuleName_23));
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 6) = ((MR_Box) (mdb__debugger_interface__PredName_24));
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 7) = ((MR_Box) (mdb__debugger_interface__Arity_25));
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 8) = ((MR_Box) (mdb__debugger_interface__ModeNum_26));
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 9) = ((MR_Box) (mdb__debugger_interface__Determinism_27));
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 10) = ((MR_Box) (mdb__debugger_interface__Path_28));
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 11) = ((MR_Box) (mdb__debugger_interface__LineNo_29));
    }
    {
      mercury__io__write_4_p_0((MR_Word) &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0, mdb__debugger_interface__OutputStream_30, ((MR_Box) (mdb__debugger_interface__CurrentTraceInfo_32)));
    }
    {
      mercury__io__print_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__debugger_interface__OutputStream_30, ((MR_Box) ((MR_String) ".\n")));
    }
    {
      mercury__io__flush_output_3_p_0(mdb__debugger_interface__OutputStream_30);
    }
  }
}

void MR_CALL 
mdb__debugger_interface__dummy_pred_to_avoid_warning_about_nothing_exported_0_p_0(void)
{
  {
    MR_bool mdb__debugger_interface__succeeded;

  }
}

void mercury__mdb__debugger_interface__init(void)
{
}

void mercury__mdb__debugger_interface__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_arity_0);
	MR_register_type_ctor_info(&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_call_number_0);
	MR_register_type_ctor_info(&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_request_0);
	MR_register_type_ctor_info(&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0);
	MR_register_type_ctor_info(&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_depth_number_0);
	MR_register_type_ctor_info(&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_determinism_0);
	MR_register_type_ctor_info(&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_event_number_0);
	MR_register_type_ctor_info(&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1);
	MR_register_type_ctor_info(&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_pred_match_0);
}

void mercury__mdb__debugger_interface__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.debugger_interface. */
