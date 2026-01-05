/*
** Automatically generated from `debugger_interface.m'
** by the Mercury compiler,
** version rotd-2026-01-05
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


// :- module mdb.debugger_interface.
// :- implementation.

/*
INIT mercury__mdb__debugger_interface__init
ENDINIT
*/

#include "mdb.debugger_interface.mih"
#include "mdb.debugger_interface.mh"


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
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdb.mih"
#include "mdbcomp.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "mdb.interactive_query.mih"
#include "mdb.util.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"




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

static const MR_DuArgLocn mdb__debugger_interface__mdb__debugger_interface__field_locns_debugger_response_0_5[13];

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

static void MR_CALL 
mdb__debugger_interface____Compare____match_1_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
mdb__debugger_interface____Compare____event_number_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____event_number_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2);

static void MR_CALL 
mdb__debugger_interface____Compare____determinism_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____determinism_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2);

static void MR_CALL 
mdb__debugger_interface____Compare____depth_number_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____depth_number_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2);

static void MR_CALL 
mdb__debugger_interface____Compare____debugger_response_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
mdb__debugger_interface____Index____debugger_response_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_response_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__debugger_interface____Compare____debugger_request_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
mdb__debugger_interface____Compare____pred_match_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
mdb__debugger_interface____Index____debugger_request_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_request_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____pred_match_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____match_1_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__debugger_interface____Compare____call_number_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____call_number_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2);

static void MR_CALL 
mdb__debugger_interface____Compare____arity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____arity_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2);

static void MR_CALL 
mdb__debugger_interface__get_variable_name_2_p_0(
  MR_Word DebuggerRequest_3,
  MR_String * Options_4);

static void MR_CALL 
mdb__debugger_interface__init_mercury_string_1_p_0(
  MR_String * HeadVar__1_1);

static void MR_CALL 
mdb__debugger_interface__get_object_file_name_2_p_0(
  MR_Word DebuggerRequest_3,
  MR_String * ObjectFileName_4);

static void MR_CALL 
mdb__debugger_interface__get_mmc_options_2_p_0(
  MR_Word DebuggerRequest_3,
  MR_String * Options_4);

static void MR_CALL 
mdb__debugger_interface__get_list_modules_to_import_3_p_0(
  MR_Word DebuggerRequest_4,
  MR_Integer * ListLength_5,
  MR_Word * ModulesList_6);

static void MR_CALL 
mdb__debugger_interface__read_request_from_socket_5_p_0(
  MR_Word SocketStream_6,
  MR_Word * Request_7,
  MR_Integer * RequestType_8);

static MR_bool MR_CALL 
mdb__debugger_interface__found_match_comp_14_p_0(
  MR_Integer EventNumber_15,
  MR_Integer CallNumber_16,
  MR_Integer DepthNumber_17,
  MR_Word Port_18,
  MR_String NameType_19,
  MR_String ModuleType_20,
  MR_String DefModuleName_21,
  MR_String PredName_22,
  MR_Integer Arity_23,
  MR_Integer ModeNum_24,
  MR_Integer Determinism_25,
  MR_Word Args_26,
  MR_String Path_27,
  MR_Word DebuggerRequest_28);

static MR_bool MR_CALL 
mdb__debugger_interface__found_match_user_14_p_0(
  MR_Integer EventNumber_15,
  MR_Integer CallNumber_16,
  MR_Integer DepthNumber_17,
  MR_Word Port_18,
  MR_Word PredOrFunc_19,
  MR_String DeclModuleName_20,
  MR_String DefModuleName_21,
  MR_String PredName_22,
  MR_Integer Arity_23,
  MR_Integer ModeNum_24,
  MR_Integer Determinism_25,
  MR_Word Args_26,
  MR_String Path_27,
  MR_Word DebuggerRequest_28);

static MR_bool MR_CALL 
mdb__debugger_interface__match_2_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2);

static MR_Integer MR_CALL 
mdb__debugger_interface__get_var_number_1_f_0(
  MR_Word DebuggerRequest_3);

static void MR_CALL 
mdb__debugger_interface__output_current_live_var_names_5_p_0(
  MR_Word LiveVarNameList_6,
  MR_Word LiveVarTypeList_7,
  MR_Word OutputStream_8);

static void MR_CALL 
mdb__debugger_interface__output_current_nth_var_4_p_0(
  MR_Word Var_5,
  MR_Word OutputStream_6);

static void MR_CALL 
mdb__debugger_interface__output_current_vars_5_p_0(
  MR_Word VarList_6,
  MR_Word StringList_7,
  MR_Word OutputStream_8);

static void MR_CALL 
mdb__debugger_interface__output_current_slots_comp_16_p_0(
  MR_Integer EventNumber_17,
  MR_Integer CallNumber_18,
  MR_Integer DepthNumber_19,
  MR_Word Port_20,
  MR_String NameType_21,
  MR_String ModuleType_22,
  MR_String DefModuleName_23,
  MR_String PredName_24,
  MR_Integer Arity_25,
  MR_Integer ModeNum_26,
  MR_Integer Determinism_27,
  MR_String Path_28,
  MR_Integer LineNo_29,
  MR_Word OutputStream_30);

static void MR_CALL 
mdb__debugger_interface__output_current_slots_user_16_p_0(
  MR_Integer EventNumber_17,
  MR_Integer CallNumber_18,
  MR_Integer DepthNumber_19,
  MR_Word Port_20,
  MR_Word PredOrFunc_21,
  MR_String DeclModuleName_22,
  MR_String DefModuleName_23,
  MR_String PredName_24,
  MR_Integer Arity_25,
  MR_Integer ModeNum_26,
  MR_Integer Determinism_27,
  MR_String Path_28,
  MR_Integer LineNo_29,
  MR_Word OutputStream_30);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____arity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__debugger_interface____Compare____arity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____call_number_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__debugger_interface____Compare____call_number_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_request_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__debugger_interface____Compare____debugger_request_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_response_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__debugger_interface____Compare____debugger_response_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____depth_number_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__debugger_interface____Compare____depth_number_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____determinism_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__debugger_interface____Compare____determinism_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____event_number_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__debugger_interface____Compare____event_number_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____match_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__debugger_interface____Compare____match_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____pred_match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__debugger_interface____Compare____pred_match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdb__debugger_interface_scalar_common_1[8][2];




static /* final */ const MR_Box mdb__debugger_interface_scalar_common_1[8][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1)),
    ((MR_Box) (&mdb__debugger_interface_scalar_common_1[0]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "end of file"))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdb.debugger_interface.mh"

#line 330 "debugger_interface.m"
void 
ML_DI_output_current_slots_user(
  MR_Integer EventNumber_17,
  MR_Integer CallNumber_18,
  MR_Integer DepthNumber_19,
  MR_Word Port_20,
  MR_Word PredOrFunc_21,
  MR_String DeclModuleName_22,
  MR_String DefModuleName_23,
  MR_String PredName_24,
  MR_Integer Arity_25,
  MR_Integer ModeNum_26,
  MR_Integer Determinism_27,
  MR_String Path_28,
  MR_Integer LineNo_29,
  MR_Word OutputStream_30)
#line 330 "debugger_interface.m"
{
#line 330 "debugger_interface.m"
	mdb__debugger_interface__output_current_slots_user_16_p_0((MR_Integer) EventNumber_17, (MR_Integer) CallNumber_18, (MR_Integer) DepthNumber_19, (MR_Word) Port_20, (MR_Word) PredOrFunc_21, (MR_String) DeclModuleName_22, (MR_String) DefModuleName_23, (MR_String) PredName_24, (MR_Integer) Arity_25, (MR_Integer) ModeNum_26, (MR_Integer) Determinism_27, (MR_String) Path_28, (MR_Integer) LineNo_29, (MR_Word) OutputStream_30);
}

#line 356 "debugger_interface.m"
void 
ML_DI_output_current_slots_comp(
  MR_Integer EventNumber_17,
  MR_Integer CallNumber_18,
  MR_Integer DepthNumber_19,
  MR_Word Port_20,
  MR_String NameType_21,
  MR_String ModuleType_22,
  MR_String DefModuleName_23,
  MR_String PredName_24,
  MR_Integer Arity_25,
  MR_Integer ModeNum_26,
  MR_Integer Determinism_27,
  MR_String Path_28,
  MR_Integer LineNo_29,
  MR_Word OutputStream_30)
#line 356 "debugger_interface.m"
{
#line 356 "debugger_interface.m"
	mdb__debugger_interface__output_current_slots_comp_16_p_0((MR_Integer) EventNumber_17, (MR_Integer) CallNumber_18, (MR_Integer) DepthNumber_19, (MR_Word) Port_20, (MR_String) NameType_21, (MR_String) ModuleType_22, (MR_String) DefModuleName_23, (MR_String) PredName_24, (MR_Integer) Arity_25, (MR_Integer) ModeNum_26, (MR_Integer) Determinism_27, (MR_String) Path_28, (MR_Integer) LineNo_29, (MR_Word) OutputStream_30);
}

#line 382 "debugger_interface.m"
void 
ML_DI_output_current_vars(
  MR_Word VarList_6,
  MR_Word StringList_7,
  MR_Word OutputStream_8)
#line 382 "debugger_interface.m"
{
#line 382 "debugger_interface.m"
	mdb__debugger_interface__output_current_vars_5_p_0((MR_Word) VarList_6, (MR_Word) StringList_7, (MR_Word) OutputStream_8);
}

#line 397 "debugger_interface.m"
void 
ML_DI_output_current_nth_var(
  MR_Word Var_5,
  MR_Word OutputStream_6)
#line 397 "debugger_interface.m"
{
#line 397 "debugger_interface.m"
	mdb__debugger_interface__output_current_nth_var_4_p_0((MR_Word) Var_5, (MR_Word) OutputStream_6);
}

#line 409 "debugger_interface.m"
void 
ML_DI_output_current_live_var_names(
  MR_Word LiveVarNameList_6,
  MR_Word LiveVarTypeList_7,
  MR_Word OutputStream_8)
#line 409 "debugger_interface.m"
{
#line 409 "debugger_interface.m"
	mdb__debugger_interface__output_current_live_var_names_5_p_0((MR_Word) LiveVarNameList_6, (MR_Word) LiveVarTypeList_7, (MR_Word) OutputStream_8);
}

#line 426 "debugger_interface.m"
MR_Integer 
ML_DI_get_var_number(
  MR_Word DebuggerRequest_3)
#line 426 "debugger_interface.m"
{
#line 426 "debugger_interface.m"
	MR_Integer ret_value;
	ret_value = (MR_Integer)mdb__debugger_interface__get_var_number_1_f_0((MR_Word) DebuggerRequest_3);
	return ret_value;
}

#line 443 "debugger_interface.m"
MR_bool 
ML_DI_found_match_user(
  MR_Integer EventNumber_15,
  MR_Integer CallNumber_16,
  MR_Integer DepthNumber_17,
  MR_Word Port_18,
  MR_Word PredOrFunc_19,
  MR_String DeclModuleName_20,
  MR_String DefModuleName_21,
  MR_String PredName_22,
  MR_Integer Arity_23,
  MR_Integer ModeNum_24,
  MR_Integer Determinism_25,
  MR_Word Args_26,
  MR_String Path_27,
  MR_Word DebuggerRequest_28)
#line 443 "debugger_interface.m"
{
#line 443 "debugger_interface.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__debugger_interface__found_match_user_14_p_0((MR_Integer) EventNumber_15, (MR_Integer) CallNumber_16, (MR_Integer) DepthNumber_17, (MR_Word) Port_18, (MR_Word) PredOrFunc_19, (MR_String) DeclModuleName_20, (MR_String) DefModuleName_21, (MR_String) PredName_22, (MR_Integer) Arity_23, (MR_Integer) ModeNum_24, (MR_Integer) Determinism_25, (MR_Word) Args_26, (MR_String) Path_27, (MR_Word) DebuggerRequest_28);
	return ret_value;
}

#line 505 "debugger_interface.m"
MR_bool 
ML_DI_found_match_comp(
  MR_Integer EventNumber_15,
  MR_Integer CallNumber_16,
  MR_Integer DepthNumber_17,
  MR_Word Port_18,
  MR_String NameType_19,
  MR_String ModuleType_20,
  MR_String DefModuleName_21,
  MR_String PredName_22,
  MR_Integer Arity_23,
  MR_Integer ModeNum_24,
  MR_Integer Determinism_25,
  MR_Word Args_26,
  MR_String Path_27,
  MR_Word DebuggerRequest_28)
#line 505 "debugger_interface.m"
{
#line 505 "debugger_interface.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__debugger_interface__found_match_comp_14_p_0((MR_Integer) EventNumber_15, (MR_Integer) CallNumber_16, (MR_Integer) DepthNumber_17, (MR_Word) Port_18, (MR_String) NameType_19, (MR_String) ModuleType_20, (MR_String) DefModuleName_21, (MR_String) PredName_22, (MR_Integer) Arity_23, (MR_Integer) ModeNum_24, (MR_Integer) Determinism_25, (MR_Word) Args_26, (MR_String) Path_27, (MR_Word) DebuggerRequest_28);
	return ret_value;
}

#line 557 "debugger_interface.m"
void 
ML_DI_read_request_from_socket(
  MR_Word SocketStream_6,
  MR_Word * Request_7,
  MR_Integer * RequestType_8)
#line 557 "debugger_interface.m"
{
#line 557 "debugger_interface.m"
	mdb__debugger_interface__read_request_from_socket_5_p_0((MR_Word) SocketStream_6, (MR_Word *) Request_7, (MR_Integer *) RequestType_8);
}

#line 588 "debugger_interface.m"
void 
ML_DI_get_list_modules_to_import(
  MR_Word DebuggerRequest_4,
  MR_Integer * ListLength_5,
  MR_Word * ModulesList_6)
#line 588 "debugger_interface.m"
{
#line 588 "debugger_interface.m"
	mdb__debugger_interface__get_list_modules_to_import_3_p_0((MR_Word) DebuggerRequest_4, (MR_Integer *) ListLength_5, (MR_Word *) ModulesList_6);
}

#line 606 "debugger_interface.m"
void 
ML_DI_get_mmc_options(
  MR_Word DebuggerRequest_3,
  MR_String * Options_4)
#line 606 "debugger_interface.m"
{
#line 606 "debugger_interface.m"
	mdb__debugger_interface__get_mmc_options_2_p_0((MR_Word) DebuggerRequest_3, (MR_String *) Options_4);
}

#line 623 "debugger_interface.m"
void 
ML_DI_get_object_file_name(
  MR_Word DebuggerRequest_3,
  MR_String * ObjectFileName_4)
#line 623 "debugger_interface.m"
{
#line 623 "debugger_interface.m"
	mdb__debugger_interface__get_object_file_name_2_p_0((MR_Word) DebuggerRequest_3, (MR_String *) ObjectFileName_4);
}

#line 636 "debugger_interface.m"
void 
ML_DI_init_mercury_string(
  MR_String * HeadVar__1_1)
#line 636 "debugger_interface.m"
{
#line 636 "debugger_interface.m"
	mdb__debugger_interface__init_mercury_string_1_p_0((MR_String *) HeadVar__1_1);
}

#line 647 "debugger_interface.m"
void 
ML_DI_get_variable_name(
  MR_Word DebuggerRequest_3,
  MR_String * Options_4)
#line 647 "debugger_interface.m"
{
#line 647 "debugger_interface.m"
	mdb__debugger_interface__get_variable_name_2_p_0((MR_Word) DebuggerRequest_3, (MR_String *) Options_4);
}


const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_arity_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__debugger_interface____Unify____arity_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____arity_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "arity",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_call_number_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__debugger_interface____Unify____call_number_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____call_number_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "call_number",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_0 = {
  (MR_String) "hello_reply",
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

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0 = {
  &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_trace_port_0 = {
  &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1,
  { (MR_TypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0) }
};

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0 = {
  &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0) }
};

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1,
  { (MR_TypeInfo) (&mdb__debugger_interface__list__ti_list_1univ__type_ctor_info_univ_0) }
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_1[12] = {
  (MR_PseudoTypeInfo) (&mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__debugger_interface__mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_trace_port_0),
  (MR_PseudoTypeInfo) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_pred_match_0),
  (MR_PseudoTypeInfo) (&mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__debugger_interface__mdb__debugger_interface__ti_match_1list__ti_list_1univ__type_ctor_info_univ_0),
  (MR_PseudoTypeInfo) (&mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_1 = {
  (MR_String) "forward_move",
  INT16_C(12),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_2 = {
  (MR_String) "current_slots",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_3 = {
  (MR_String) "current_vars",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_4 = {
  (MR_String) "current_live_var_names",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_5[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_5 = {
  (MR_String) "current_nth_var",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(5),
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_6 = {
  (MR_String) "abort_prog",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(6),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_7 = {
  (MR_String) "no_trace",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(7),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_8 = {
  (MR_String) "retry",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 6,
  INT32_C(8),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_9 = {
  (MR_String) "stack",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 7,
  INT32_C(9),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_10 = {
  (MR_String) "nondet_stack",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 8,
  INT32_C(10),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_11 = {
  (MR_String) "stack_regs",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 9,
  INT32_C(11),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_12[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_12 = {
  (MR_String) "error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(12),
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_12,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_13[1] = { (MR_PseudoTypeInfo) (&mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_13 = {
  (MR_String) "query",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(13),
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_13,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_14[1] = { (MR_PseudoTypeInfo) (&mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_14 = {
  (MR_String) "cc_query",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(14),
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_14,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_15[1] = { (MR_PseudoTypeInfo) (&mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_15 = {
  (MR_String) "io_query",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(15),
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_15,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_16[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_16 = {
  (MR_String) "mmc_options",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(16),
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_16,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_17[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_17 = {
  (MR_String) "browse",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(17),
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_17,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_18[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_18 = {
  (MR_String) "link_collect",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(18),
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_18,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_19 = {
  (MR_String) "collect",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 10,
  INT32_C(19),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_20 = {
  (MR_String) "current_grade",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 11,
  INT32_C(20),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_21 = {
  (MR_String) "collect_arg_on",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 12,
  INT32_C(21),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_22 = {
  (MR_String) "collect_arg_off",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 13,
  INT32_C(22),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_1[1] = { &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_1 };

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_2[1] = { &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_5 };

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
    UINT32_C(14),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(7),
    MR_SECTAG_REMOTE_FULL_WORD,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__debugger_interface____Unify____debugger_request_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____debugger_request_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "debugger_request",
  { mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_debugger_request_0 },
  { mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_debugger_request_0 },
  (MR_Integer) 23,
  UINT16_C(12),
  mdb__debugger_interface__mdb__debugger_interface__functor_number_map_debugger_request_0,

};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_0 = {
  (MR_String) "response_hello",
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

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_1 = {
  (MR_String) "response_start",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_2 = {
  (MR_String) "response_forward_move_match_found",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_3 = {
  (MR_String) "response_forward_move_match_not_found",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_4[13] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0),
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
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
    (MR_Integer) 1,
    (MR_Integer) 4
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
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
  (MR_String) "response_current_slots_user",
  INT16_C(13),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(4),
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_4,
  NULL,
  mdb__debugger_interface__mdb__debugger_interface__field_locns_debugger_response_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_5[13] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn mdb__debugger_interface__mdb__debugger_interface__field_locns_debugger_response_0_5[13] = {
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
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_5 = {
  (MR_String) "response_current_slots_comp",
  INT16_C(13),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(5),
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_5,
  NULL,
  mdb__debugger_interface__mdb__debugger_interface__field_locns_debugger_response_0_5,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_6[2] = {
  (MR_PseudoTypeInfo) (&mdb__debugger_interface__list__ti_list_1univ__type_ctor_info_univ_0),
  (MR_PseudoTypeInfo) (&mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_6 = {
  (MR_String) "response_current_vars",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(6),
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_7[1] = { (MR_PseudoTypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0) };

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_7 = {
  (MR_String) "response_current_nth_var",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(7),
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_8[2] = {
  (MR_PseudoTypeInfo) (&mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_8 = {
  (MR_String) "response_current_live_var_names",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(8),
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_9 = {
  (MR_String) "response_last_event",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(9),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_10 = {
  (MR_String) "response_browser_end",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(10),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_11 = {
  (MR_String) "response_mmc_option_ok",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 6,
  INT32_C(11),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_12 = {
  (MR_String) "response_ok",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 7,
  INT32_C(12),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_13[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_13 = {
  (MR_String) "response_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(13),
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_13,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_14[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_14 = {
  (MR_String) "response_level",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(14),
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_14,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_15[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_15 = {
  (MR_String) "response_proc",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(15),
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_15,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_16[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_16 = {
  (MR_String) "response_proc",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(16),
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_16,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_17[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_17 = {
  (MR_String) "response_def_module",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(17),
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_17,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_18[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_18 = {
  (MR_String) "response_detail",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 8,
  INT32_C(18),
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_18,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_19 = {
  (MR_String) "response_pred",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 8,
  INT32_C(19),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_20 = {
  (MR_String) "response_func",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 9,
  INT32_C(20),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_21[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_21 = {
  (MR_String) "response_det",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 9,
  INT32_C(21),
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_21,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_22 = {
  (MR_String) "response_end_stack",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 10,
  INT32_C(22),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_23[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_23 = {
  (MR_String) "response_stack_regs",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 10,
  INT32_C(23),
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_23,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_24 = {
  (MR_String) "response_link_collect_succeeded",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 11,
  INT32_C(24),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_25 = {
  (MR_String) "response_link_collect_failed",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 12,
  INT32_C(25),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_26 = {
  (MR_String) "response_collect_linked",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 13,
  INT32_C(26),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_27 = {
  (MR_String) "response_collect_not_linked",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 14,
  INT32_C(27),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_28[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_28 = {
  (MR_String) "response_grade",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 11,
  INT32_C(28),
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_28,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_29 = {
  (MR_String) "response_execution_continuing",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 15,
  INT32_C(29),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_30 = {
  (MR_String) "response_execution_terminated",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 16,
  INT32_C(30),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_31 = {
  (MR_String) "response_collect_arg_on_ok",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 17,
  INT32_C(31),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_32 = {
  (MR_String) "response_collect_arg_off_ok",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 18,
  INT32_C(32),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_1[1] = { &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_4 };

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_2[1] = { &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_5 };

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
    UINT32_C(19),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(12),
    MR_SECTAG_REMOTE_FULL_WORD,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__debugger_interface____Unify____debugger_response_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____debugger_response_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "debugger_response",
  { mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_debugger_response_0 },
  { mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_debugger_response_0 },
  (MR_Integer) 33,
  UINT16_C(12),
  mdb__debugger_interface__mdb__debugger_interface__functor_number_map_debugger_response_0,

};

const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_depth_number_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__debugger_interface____Unify____depth_number_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____depth_number_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "depth_number",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_determinism_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__debugger_interface____Unify____determinism_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____determinism_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "determinism",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_event_number_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__debugger_interface____Unify____event_number_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____event_number_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "event_number",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_0 = {
  (MR_String) "nop",
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

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_1[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_1 = {
  (MR_String) "exact",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_2[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_2 = {
  (MR_String) "neg",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__debugger_interface__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_3[1] = { (MR_PseudoTypeInfo) (&mdb__debugger_interface__list__pti_list_1__pseudo_1) };

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_3 = {
  (MR_String) "list",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_4[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_4 = {
  (MR_String) "interval",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_0[1] = { &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_0 };

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_1[1] = { &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_1 };

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_2[1] = { &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_2 };

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_3[2] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_3,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_4
};

static const MR_DuPtagLayout mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_match_1[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__debugger_interface____Unify____match_1_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____match_1_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "match",
  { mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_match_1 },
  { mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_match_1 },
  (MR_Integer) 5,
  UINT16_C(12),
  mdb__debugger_interface__mdb__debugger_interface__functor_number_map_match_1,

};

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1,
  { (MR_TypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0) }
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_pred_match_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdb__debugger_interface__mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_0 = {
  (MR_String) "match_user_pred",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__debugger_interface__mdb__debugger_interface__field_types_pred_match_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_pred_match_0_1[2] = {
  (MR_PseudoTypeInfo) (&mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_1 = {
  (MR_String) "match_compiler_generated_pred",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__debugger_interface__mdb__debugger_interface__field_types_pred_match_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_2 = {
  (MR_String) "match_any_pred",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_0[1] = { &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_2 };

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_1[1] = { &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_0 };

static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_2[1] = { &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_1 };

static const MR_DuPtagLayout mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_pred_match_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__debugger_interface____Unify____pred_match_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____pred_match_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "pred_match",
  { mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_pred_match_0 },
  { mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_pred_match_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mdb__debugger_interface__mdb__debugger_interface__functor_number_map_pred_match_0,

};

static void MR_CALL 
mdb__debugger_interface____Compare____match_1_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Box ArgX1_4 = (MR_hl_field(1, HeadVar__2_2, 0));
              MR_Box ArgY1_5 = (MR_hl_field(1, HeadVar__3_3, 0));

              mercury__builtin__compare_3_p_0(TypeInfo_for_T_17, HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Box ArgX1_6 = (MR_hl_field(2, HeadVar__2_2, 0));
              MR_Box ArgY1_7 = (MR_hl_field(2, HeadVar__3_3, 0));

              mercury__builtin__compare_3_p_0(TypeInfo_for_T_17, HeadVar__1_1, ArgX1_6, ArgY1_7);
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ArgX1_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      mercury__list____Compare____list_1_0(TypeInfo_for_T_17, HeadVar__1_1, ArgX1_8, ArgY1_9);
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Box ArgX1_10 = (MR_hl_field(3, HeadVar__2_2, 1));
                      MR_Box ArgY1_11 = (MR_hl_field(3, HeadVar__3_3, 1));
                      MR_Box ArgX2_13 = (MR_hl_field(3, HeadVar__2_2, 2));
                      MR_Box ArgY2_14 = (MR_hl_field(3, HeadVar__3_3, 2));
                      MR_Word SubResult1_12;

                      mercury__builtin__compare_3_p_0(TypeInfo_for_T_17, &SubResult1_12, ArgX1_10, ArgY1_11);
                      succeeded = (SubResult1_12 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_12;
                      else
                        mercury__builtin__compare_3_p_0(TypeInfo_for_T_17, HeadVar__1_1, ArgX2_13, ArgY2_14);
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

static void MR_CALL 
mdb__debugger_interface____Compare____event_number_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____event_number_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
mdb__debugger_interface____Compare____determinism_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____determinism_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
mdb__debugger_interface____Compare____depth_number_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____depth_number_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
mdb__debugger_interface____Compare____debugger_response_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_146 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_147 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_146 == CastY_147);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer IndexX_4;
    MR_Integer IndexY_5;

    mdb__debugger_interface____Index____debugger_response_0_0(HeadVar__2_2, &IndexX_4);
    mdb__debugger_interface____Index____debugger_response_0_0(HeadVar__3_3, &IndexY_5);
    succeeded = (IndexX_4 < IndexY_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (IndexX_4 > IndexY_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word CompareResult_6;

        switch (MR_tag((MR_Word) HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              CompareResult_6 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Integer ArgY1_8;
              MR_Integer ArgX2_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Integer ArgY2_11;
              MR_Integer ArgX3_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 2))));
              MR_Integer ArgY3_14;
              MR_Word ArgX4_16 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 3))) >> 1)) & (MR_Integer) 15);
              MR_Word ArgY4_17;
              MR_Word ArgX5_19 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 3))) & (MR_Integer) 1);
              MR_Word ArgY5_20;
              MR_String ArgX6_22 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 4))));
              MR_String ArgY6_23;
              MR_String ArgX7_25 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 5))));
              MR_String ArgY7_26;
              MR_String ArgX8_28 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 6))));
              MR_String ArgY8_29;
              MR_Integer ArgX9_31 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 7))));
              MR_Integer ArgY9_32;
              MR_Integer ArgX10_34 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 8))));
              MR_Integer ArgY10_35;
              MR_Integer ArgX11_37 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 9))));
              MR_Integer ArgY11_38;
              MR_String ArgX12_40 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 10))));
              MR_String ArgY12_41;
              MR_Integer ArgX13_43 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 11))));
              MR_Integer ArgY13_44;
              MR_Word SubResult1_9;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));
                ArgY2_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 1))));
                ArgY3_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 2))));
                ArgY4_17 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 3))) >> 1)) & (MR_Integer) 15);
                ArgY5_20 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 3))) & (MR_Integer) 1);
                ArgY6_23 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 4))));
                ArgY7_26 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 5))));
                ArgY8_29 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 6))));
                ArgY9_32 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 7))));
                ArgY10_35 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 8))));
                ArgY11_38 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 9))));
                ArgY12_41 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 10))));
                ArgY13_44 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 11))));
                succeeded = (ArgX1_7 < ArgY1_8);
                if (succeeded)
                {
                  SubResult1_9 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (ArgX1_7 > ArgY1_8);
                  if (succeeded)
                  {
                    SubResult1_9 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                  CompareResult_6 = SubResult1_9;
                else
                {
                  MR_Word SubResult2_12;

                  succeeded = (ArgX2_10 < ArgY2_11);
                  if (succeeded)
                  {
                    SubResult2_12 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (ArgX2_10 > ArgY2_11);
                    if (succeeded)
                    {
                      SubResult2_12 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                  }
                  if (succeeded)
                    CompareResult_6 = SubResult2_12;
                  else
                  {
                    MR_Word SubResult3_15;

                    succeeded = (ArgX3_13 < ArgY3_14);
                    if (succeeded)
                    {
                      SubResult3_15 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX3_13 > ArgY3_14);
                      if (succeeded)
                      {
                        SubResult3_15 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult3_15;
                    else
                    {
                      MR_Word SubResult4_18;
                      MR_Integer Var_201 = (MR_Integer) (ArgX4_16);
                      MR_Integer Var_202 = (MR_Integer) (ArgY4_17);

                      succeeded = (Var_201 < Var_202);
                      if (succeeded)
                      {
                        SubResult4_18 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_201 > Var_202);
                        if (succeeded)
                        {
                          SubResult4_18 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult4_18;
                      else
                      {
                        MR_Word SubResult5_21;
                        MR_Integer Var_203 = (MR_Integer) (ArgX5_19);
                        MR_Integer Var_204 = (MR_Integer) (ArgY5_20);

                        succeeded = (Var_203 < Var_204);
                        if (succeeded)
                        {
                          SubResult5_21 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_203 > Var_204);
                          if (succeeded)
                          {
                            SubResult5_21 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                        }
                        if (succeeded)
                          CompareResult_6 = SubResult5_21;
                        else
                        {
                          MR_Word SubResult6_24;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult6_24, ArgX6_22, ArgY6_23);
                          succeeded = (SubResult6_24 != (MR_Integer) 0);
                          if (succeeded)
                            CompareResult_6 = SubResult6_24;
                          else
                          {
                            MR_Word SubResult7_27;

                            mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult7_27, ArgX7_25, ArgY7_26);
                            succeeded = (SubResult7_27 != (MR_Integer) 0);
                            if (succeeded)
                              CompareResult_6 = SubResult7_27;
                            else
                            {
                              MR_Word SubResult8_30;

                              mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult8_30, ArgX8_28, ArgY8_29);
                              succeeded = (SubResult8_30 != (MR_Integer) 0);
                              if (succeeded)
                                CompareResult_6 = SubResult8_30;
                              else
                              {
                                MR_Word SubResult9_33;

                                succeeded = (ArgX9_31 < ArgY9_32);
                                if (succeeded)
                                {
                                  SubResult9_33 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = (ArgX9_31 > ArgY9_32);
                                  if (succeeded)
                                  {
                                    SubResult9_33 = (MR_Integer) 2;
                                    succeeded = MR_TRUE;
                                  }
                                }
                                if (succeeded)
                                  CompareResult_6 = SubResult9_33;
                                else
                                {
                                  MR_Word SubResult10_36;

                                  succeeded = (ArgX10_34 < ArgY10_35);
                                  if (succeeded)
                                  {
                                    SubResult10_36 = (MR_Integer) 1;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = (ArgX10_34 > ArgY10_35);
                                    if (succeeded)
                                    {
                                      SubResult10_36 = (MR_Integer) 2;
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                  if (succeeded)
                                    CompareResult_6 = SubResult10_36;
                                  else
                                  {
                                    MR_Word SubResult11_39;

                                    succeeded = (ArgX11_37 < ArgY11_38);
                                    if (succeeded)
                                    {
                                      SubResult11_39 = (MR_Integer) 1;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = (ArgX11_37 > ArgY11_38);
                                      if (succeeded)
                                      {
                                        SubResult11_39 = (MR_Integer) 2;
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                    if (succeeded)
                                      CompareResult_6 = SubResult11_39;
                                    else
                                    {
                                      MR_Word SubResult12_42;

                                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult12_42, ArgX12_40, ArgY12_41);
                                      succeeded = (SubResult12_42 != (MR_Integer) 0);
                                      if (succeeded)
                                        CompareResult_6 = SubResult12_42;
                                      else
                                      {
                                        succeeded = (ArgX13_43 < ArgY13_44);
                                        if (succeeded)
                                          CompareResult_6 = (MR_Integer) 1;
                                        else
                                        {
                                          succeeded = (ArgX13_43 > ArgY13_44);
                                          if (succeeded)
                                            CompareResult_6 = (MR_Integer) 2;
                                          else
                                            CompareResult_6 = (MR_Integer) 0;
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
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ArgX1_45 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Integer ArgY1_46;
              MR_Integer ArgX2_48 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Integer ArgY2_49;
              MR_Integer ArgX3_51 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 2))));
              MR_Integer ArgY3_52;
              MR_Word ArgX4_54 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 3))) & (MR_Integer) 15);
              MR_Word ArgY4_55;
              MR_String ArgX5_57 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 4))));
              MR_String ArgY5_58;
              MR_String ArgX6_60 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 5))));
              MR_String ArgY6_61;
              MR_String ArgX7_63 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 6))));
              MR_String ArgY7_64;
              MR_String ArgX8_66 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 7))));
              MR_String ArgY8_67;
              MR_Integer ArgX9_69 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 8))));
              MR_Integer ArgY9_70;
              MR_Integer ArgX10_72 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 9))));
              MR_Integer ArgY10_73;
              MR_Integer ArgX11_75 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 10))));
              MR_Integer ArgY11_76;
              MR_String ArgX12_78 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 11))));
              MR_String ArgY12_79;
              MR_Integer ArgX13_81 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 12))));
              MR_Integer ArgY13_82;
              MR_Word SubResult1_47;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_46 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, 0))));
                ArgY2_49 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, 1))));
                ArgY3_52 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, 2))));
                ArgY4_55 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, 3))) & (MR_Integer) 15);
                ArgY5_58 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, 4))));
                ArgY6_61 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, 5))));
                ArgY7_64 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, 6))));
                ArgY8_67 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, 7))));
                ArgY9_70 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, 8))));
                ArgY10_73 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, 9))));
                ArgY11_76 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, 10))));
                ArgY12_79 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, 11))));
                ArgY13_82 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, 12))));
                succeeded = (ArgX1_45 < ArgY1_46);
                if (succeeded)
                {
                  SubResult1_47 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (ArgX1_45 > ArgY1_46);
                  if (succeeded)
                  {
                    SubResult1_47 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                  CompareResult_6 = SubResult1_47;
                else
                {
                  MR_Word SubResult2_50;

                  succeeded = (ArgX2_48 < ArgY2_49);
                  if (succeeded)
                  {
                    SubResult2_50 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (ArgX2_48 > ArgY2_49);
                    if (succeeded)
                    {
                      SubResult2_50 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                  }
                  if (succeeded)
                    CompareResult_6 = SubResult2_50;
                  else
                  {
                    MR_Word SubResult3_53;

                    succeeded = (ArgX3_51 < ArgY3_52);
                    if (succeeded)
                    {
                      SubResult3_53 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX3_51 > ArgY3_52);
                      if (succeeded)
                      {
                        SubResult3_53 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult3_53;
                    else
                    {
                      MR_Word SubResult4_56;
                      MR_Integer Var_199 = (MR_Integer) (ArgX4_54);
                      MR_Integer Var_200 = (MR_Integer) (ArgY4_55);

                      succeeded = (Var_199 < Var_200);
                      if (succeeded)
                      {
                        SubResult4_56 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_199 > Var_200);
                        if (succeeded)
                        {
                          SubResult4_56 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult4_56;
                      else
                      {
                        MR_Word SubResult5_59;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult5_59, ArgX5_57, ArgY5_58);
                        succeeded = (SubResult5_59 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult5_59;
                        else
                        {
                          MR_Word SubResult6_62;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult6_62, ArgX6_60, ArgY6_61);
                          succeeded = (SubResult6_62 != (MR_Integer) 0);
                          if (succeeded)
                            CompareResult_6 = SubResult6_62;
                          else
                          {
                            MR_Word SubResult7_65;

                            mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult7_65, ArgX7_63, ArgY7_64);
                            succeeded = (SubResult7_65 != (MR_Integer) 0);
                            if (succeeded)
                              CompareResult_6 = SubResult7_65;
                            else
                            {
                              MR_Word SubResult8_68;

                              mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult8_68, ArgX8_66, ArgY8_67);
                              succeeded = (SubResult8_68 != (MR_Integer) 0);
                              if (succeeded)
                                CompareResult_6 = SubResult8_68;
                              else
                              {
                                MR_Word SubResult9_71;

                                succeeded = (ArgX9_69 < ArgY9_70);
                                if (succeeded)
                                {
                                  SubResult9_71 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = (ArgX9_69 > ArgY9_70);
                                  if (succeeded)
                                  {
                                    SubResult9_71 = (MR_Integer) 2;
                                    succeeded = MR_TRUE;
                                  }
                                }
                                if (succeeded)
                                  CompareResult_6 = SubResult9_71;
                                else
                                {
                                  MR_Word SubResult10_74;

                                  succeeded = (ArgX10_72 < ArgY10_73);
                                  if (succeeded)
                                  {
                                    SubResult10_74 = (MR_Integer) 1;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = (ArgX10_72 > ArgY10_73);
                                    if (succeeded)
                                    {
                                      SubResult10_74 = (MR_Integer) 2;
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                  if (succeeded)
                                    CompareResult_6 = SubResult10_74;
                                  else
                                  {
                                    MR_Word SubResult11_77;

                                    succeeded = (ArgX11_75 < ArgY11_76);
                                    if (succeeded)
                                    {
                                      SubResult11_77 = (MR_Integer) 1;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = (ArgX11_75 > ArgY11_76);
                                      if (succeeded)
                                      {
                                        SubResult11_77 = (MR_Integer) 2;
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                    if (succeeded)
                                      CompareResult_6 = SubResult11_77;
                                    else
                                    {
                                      MR_Word SubResult12_80;

                                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult12_80, ArgX12_78, ArgY12_79);
                                      succeeded = (SubResult12_80 != (MR_Integer) 0);
                                      if (succeeded)
                                        CompareResult_6 = SubResult12_80;
                                      else
                                      {
                                        succeeded = (ArgX13_81 < ArgY13_82);
                                        if (succeeded)
                                          CompareResult_6 = (MR_Integer) 1;
                                        else
                                        {
                                          succeeded = (ArgX13_81 > ArgY13_82);
                                          if (succeeded)
                                            CompareResult_6 = (MR_Integer) 2;
                                          else
                                            CompareResult_6 = (MR_Integer) 0;
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
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgX1_83 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_84;
                  MR_Word ArgX2_86 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_87;
                  MR_Word SubResult1_85;
                  MR_Word TypeInfo_177_177;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgY1_84 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_87 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    TypeInfo_177_177 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[0]);
                    mercury__builtin__compare_3_p_0(TypeInfo_177_177, &SubResult1_85, ((MR_Box) (ArgX1_83)), ((MR_Box) (ArgY1_84)));
                    succeeded = (SubResult1_85 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_85;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX2_86)), ((MR_Box) (ArgY2_87)));
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgX1_88 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_89;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgY1_89 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__univ____Compare____univ_0_0(&CompareResult_6, ArgX1_88, ArgY1_89);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgX1_90 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_91;
                  MR_Word ArgX2_93 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_94;
                  MR_Word SubResult1_92;
                  MR_Word TypeInfo_148_148;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgY1_91 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_94 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    TypeInfo_148_148 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[1]);
                    mercury__builtin__compare_3_p_0(TypeInfo_148_148, &SubResult1_92, ((MR_Box) (ArgX1_90)), ((MR_Box) (ArgY1_91)));
                    succeeded = (SubResult1_92 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_92;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX2_93)), ((MR_Box) (ArgY2_94)));
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_String ArgX1_95 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_96;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    ArgY1_96 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_95, ArgY1_96);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Integer ArgX1_97 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Integer ArgY1_98;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    ArgY1_98 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    succeeded = (ArgX1_97 < ArgY1_98);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (ArgX1_97 > ArgY1_98);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_String ArgX1_99 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_100;
                  MR_String ArgX2_102 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_103;
                  MR_String ArgX3_105 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_String ArgY3_106;
                  MR_Integer ArgX4_108 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_Integer ArgY4_109;
                  MR_Integer ArgX5_111 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 5))));
                  MR_Integer ArgY5_112;
                  MR_Word SubResult1_101;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    ArgY1_100 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_103 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_106 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_109 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    ArgY5_112 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 5))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_101, ArgX1_99, ArgY1_100);
                    succeeded = (SubResult1_101 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_101;
                    else
                    {
                      MR_Word SubResult2_104;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_104, ArgX2_102, ArgY2_103);
                      succeeded = (SubResult2_104 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_104;
                      else
                      {
                        MR_Word SubResult3_107;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_107, ArgX3_105, ArgY3_106);
                        succeeded = (SubResult3_107 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_107;
                        else
                        {
                          MR_Word SubResult4_110;

                          succeeded = (ArgX4_108 < ArgY4_109);
                          if (succeeded)
                          {
                            SubResult4_110 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (ArgX4_108 > ArgY4_109);
                            if (succeeded)
                            {
                              SubResult4_110 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                          }
                          if (succeeded)
                            CompareResult_6 = SubResult4_110;
                          else
                          {
                            succeeded = (ArgX5_111 < ArgY5_112);
                            if (succeeded)
                              CompareResult_6 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (ArgX5_111 > ArgY5_112);
                              if (succeeded)
                                CompareResult_6 = (MR_Integer) 2;
                              else
                                CompareResult_6 = (MR_Integer) 0;
                            }
                          }
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_String ArgX1_113 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_114;
                  MR_String ArgX2_116 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_117;
                  MR_Integer ArgX3_119 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Integer ArgY3_120;
                  MR_Integer ArgX4_122 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_Integer ArgY4_123;
                  MR_Word SubResult1_115;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    ArgY1_114 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_117 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_120 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_123 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_115, ArgX1_113, ArgY1_114);
                    succeeded = (SubResult1_115 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_115;
                    else
                    {
                      MR_Word SubResult2_118;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_118, ArgX2_116, ArgY2_117);
                      succeeded = (SubResult2_118 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_118;
                      else
                      {
                        MR_Word SubResult3_121;

                        succeeded = (ArgX3_119 < ArgY3_120);
                        if (succeeded)
                        {
                          SubResult3_121 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (ArgX3_119 > ArgY3_120);
                          if (succeeded)
                          {
                            SubResult3_121 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                        }
                        if (succeeded)
                          CompareResult_6 = SubResult3_121;
                        else
                        {
                          succeeded = (ArgX4_122 < ArgY4_123);
                          if (succeeded)
                            CompareResult_6 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (ArgX4_122 > ArgY4_123);
                            if (succeeded)
                              CompareResult_6 = (MR_Integer) 2;
                            else
                              CompareResult_6 = (MR_Integer) 0;
                          }
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_String ArgX1_124 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_125;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 7)));
                  if (succeeded)
                  {
                    ArgY1_125 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_124, ArgY1_125);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Integer ArgX1_126 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Integer ArgY1_127;
                  MR_Integer ArgX2_129 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Integer ArgY2_130;
                  MR_Integer ArgX3_132 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Integer ArgY3_133;
                  MR_Word SubResult1_128;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 8)));
                  if (succeeded)
                  {
                    ArgY1_127 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_130 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_133 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    succeeded = (ArgX1_126 < ArgY1_127);
                    if (succeeded)
                    {
                      SubResult1_128 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX1_126 > ArgY1_127);
                      if (succeeded)
                      {
                        SubResult1_128 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_128;
                    else
                    {
                      MR_Word SubResult2_131;

                      succeeded = (ArgX2_129 < ArgY2_130);
                      if (succeeded)
                      {
                        SubResult2_131 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_129 > ArgY2_130);
                        if (succeeded)
                        {
                          SubResult2_131 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_131;
                      else
                      {
                        succeeded = (ArgX3_132 < ArgY3_133);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX3_132 > ArgY3_133);
                          if (succeeded)
                            CompareResult_6 = (MR_Integer) 2;
                          else
                            CompareResult_6 = (MR_Integer) 0;
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_String ArgX1_134 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_135;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                    ArgY1_135 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_134, ArgY1_135);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Integer ArgX1_136 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Integer ArgY1_137;
                  MR_Integer ArgX2_139 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Integer ArgY2_140;
                  MR_Integer ArgX3_142 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Integer ArgY3_143;
                  MR_Word SubResult1_138;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 10)));
                  if (succeeded)
                  {
                    ArgY1_137 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_140 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_143 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    succeeded = (ArgX1_136 < ArgY1_137);
                    if (succeeded)
                    {
                      SubResult1_138 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX1_136 > ArgY1_137);
                      if (succeeded)
                      {
                        SubResult1_138 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_138;
                    else
                    {
                      MR_Word SubResult2_141;

                      succeeded = (ArgX2_139 < ArgY2_140);
                      if (succeeded)
                      {
                        SubResult2_141 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_139 > ArgY2_140);
                        if (succeeded)
                        {
                          SubResult2_141 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_141;
                      else
                      {
                        succeeded = (ArgX3_142 < ArgY3_143);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX3_142 > ArgY3_143);
                          if (succeeded)
                            CompareResult_6 = (MR_Integer) 2;
                          else
                            CompareResult_6 = (MR_Integer) 0;
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_String ArgX1_144 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_145;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 11)));
                  if (succeeded)
                  {
                    ArgY1_145 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_144, ArgY1_145);
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            break;
        }
        if (succeeded)
          *HeadVar__1_1 = CompareResult_6;
        else
          {
            mercury__private_builtin__compare_error_0_p_0();
            return;
          }
      }
    }
  }
}

static void MR_CALL 
mdb__debugger_interface____Index____debugger_response_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 2;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 3;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 19;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 20;
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_Integer) 22;
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_Integer) 24;
          break;
        case (MR_Integer) 12:
          *HeadVar__2_2 = (MR_Integer) 25;
          break;
        case (MR_Integer) 13:
          *HeadVar__2_2 = (MR_Integer) 26;
          break;
        case (MR_Integer) 14:
          *HeadVar__2_2 = (MR_Integer) 27;
          break;
        case (MR_Integer) 15:
          *HeadVar__2_2 = (MR_Integer) 29;
          break;
        case (MR_Integer) 16:
          *HeadVar__2_2 = (MR_Integer) 30;
          break;
        case (MR_Integer) 17:
          *HeadVar__2_2 = (MR_Integer) 31;
          break;
        case (MR_Integer) 18:
          *HeadVar__2_2 = (MR_Integer) 32;
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 4;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 5;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 13;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 14;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 15;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 16;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 17;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 18;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 21;
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_Integer) 23;
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_Integer) 28;
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_response_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_107 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_108 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_107 == CastY_108);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_105 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_106 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_106 == CastX_105);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Integer ArgY1_4;
          MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Integer ArgY2_6;
          MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 2))));
          MR_Integer ArgY3_8;
          MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 3))) >> 1)) & (MR_Integer) 15);
          MR_Word ArgY4_10;
          MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 3))) & (MR_Integer) 1);
          MR_Word ArgY5_12;
          MR_String ArgX6_13 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 4))));
          MR_String ArgY6_14;
          MR_String ArgX7_15 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 5))));
          MR_String ArgY7_16;
          MR_String ArgX8_17 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 6))));
          MR_String ArgY8_18;
          MR_Integer ArgX9_19 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 7))));
          MR_Integer ArgY9_20;
          MR_Integer ArgX10_21 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 8))));
          MR_Integer ArgY10_22;
          MR_Integer ArgX11_23 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 9))));
          MR_Integer ArgY11_24;
          MR_String ArgX12_25 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 10))));
          MR_String ArgY12_26;
          MR_Integer ArgX13_27 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 11))));
          MR_Integer ArgY13_28;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
            ArgY3_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 2))));
            ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 3))) >> 1)) & (MR_Integer) 15);
            ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 3))) & (MR_Integer) 1);
            ArgY6_14 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 4))));
            ArgY7_16 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 5))));
            ArgY8_18 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 6))));
            ArgY9_20 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 7))));
            ArgY10_22 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 8))));
            ArgY11_24 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 9))));
            ArgY12_26 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 10))));
            ArgY13_28 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 11))));
            succeeded = (ArgX1_3 == ArgY1_4);
            if (succeeded)
            {
              succeeded = (ArgX2_5 == ArgY2_6);
              if (succeeded)
              {
                succeeded = (ArgX3_7 == ArgY3_8);
                if (succeeded)
                {
                  succeeded = (ArgX4_9 == ArgY4_10);
                  if (succeeded)
                  {
                    succeeded = (ArgX5_11 == ArgY5_12);
                    if (succeeded)
                    {
                      succeeded = (strcmp(ArgX6_13, ArgY6_14) == 0);
                      if (succeeded)
                      {
                        succeeded = (strcmp(ArgX7_15, ArgY7_16) == 0);
                        if (succeeded)
                        {
                          succeeded = (strcmp(ArgX8_17, ArgY8_18) == 0);
                          if (succeeded)
                          {
                            succeeded = (ArgX9_19 == ArgY9_20);
                            if (succeeded)
                            {
                              succeeded = (ArgX10_21 == ArgY10_22);
                              if (succeeded)
                              {
                                succeeded = (ArgX11_23 == ArgY11_24);
                                if (succeeded)
                                {
                                  succeeded = (strcmp(ArgX12_25, ArgY12_26) == 0);
                                  if (succeeded)
                                    succeeded = (ArgX13_27 == ArgY13_28);
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
          MR_Integer ArgX1_29 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Integer ArgY1_30;
          MR_Integer ArgX2_31 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Integer ArgY2_32;
          MR_Integer ArgX3_33 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 2))));
          MR_Integer ArgY3_34;
          MR_Word ArgX4_35 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, 3))) & (MR_Integer) 15);
          MR_Word ArgY4_36;
          MR_String ArgX5_37 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, 4))));
          MR_String ArgY5_38;
          MR_String ArgX6_39 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, 5))));
          MR_String ArgY6_40;
          MR_String ArgX7_41 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, 6))));
          MR_String ArgY7_42;
          MR_String ArgX8_43 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, 7))));
          MR_String ArgY8_44;
          MR_Integer ArgX9_45 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 8))));
          MR_Integer ArgY9_46;
          MR_Integer ArgX10_47 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 9))));
          MR_Integer ArgY10_48;
          MR_Integer ArgX11_49 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 10))));
          MR_Integer ArgY11_50;
          MR_String ArgX12_51 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, 11))));
          MR_String ArgY12_52;
          MR_Integer ArgX13_53 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 12))));
          MR_Integer ArgY13_54;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_30 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_32 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 1))));
            ArgY3_34 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 2))));
            ArgY4_36 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 3))) & (MR_Integer) 15);
            ArgY5_38 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 4))));
            ArgY6_40 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 5))));
            ArgY7_42 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 6))));
            ArgY8_44 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 7))));
            ArgY9_46 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 8))));
            ArgY10_48 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 9))));
            ArgY11_50 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 10))));
            ArgY12_52 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 11))));
            ArgY13_54 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 12))));
            succeeded = (ArgX1_29 == ArgY1_30);
            if (succeeded)
            {
              succeeded = (ArgX2_31 == ArgY2_32);
              if (succeeded)
              {
                succeeded = (ArgX3_33 == ArgY3_34);
                if (succeeded)
                {
                  succeeded = (ArgX4_35 == ArgY4_36);
                  if (succeeded)
                  {
                    succeeded = (strcmp(ArgX5_37, ArgY5_38) == 0);
                    if (succeeded)
                    {
                      succeeded = (strcmp(ArgX6_39, ArgY6_40) == 0);
                      if (succeeded)
                      {
                        succeeded = (strcmp(ArgX7_41, ArgY7_42) == 0);
                        if (succeeded)
                        {
                          succeeded = (strcmp(ArgX8_43, ArgY8_44) == 0);
                          if (succeeded)
                          {
                            succeeded = (ArgX9_45 == ArgY9_46);
                            if (succeeded)
                            {
                              succeeded = (ArgX10_47 == ArgY10_48);
                              if (succeeded)
                              {
                                succeeded = (ArgX11_49 == ArgY11_50);
                                if (succeeded)
                                {
                                  succeeded = (strcmp(ArgX12_51, ArgY12_52) == 0);
                                  if (succeeded)
                                    succeeded = (ArgX13_53 == ArgY13_54);
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
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_112_112;
              MR_Word TypeInfo_113_113;
              MR_Word ArgX1_55 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_56;
              MR_Word ArgX2_57 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_58;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_56 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_58 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                TypeInfo_112_112 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_112_112, ((MR_Box) (ArgX1_55)), ((MR_Box) (ArgY1_56)));
                if (succeeded)
                {
                  TypeInfo_113_113 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_113_113, ((MR_Box) (ArgX2_57)), ((MR_Box) (ArgY2_58)));
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_59 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_60;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_60 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = mercury__univ____Unify____univ_0_0(ArgX1_59, ArgY1_60);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_109_109;
              MR_Word TypeInfo_110_110;
              MR_Word ArgX1_61 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_62;
              MR_Word ArgX2_63 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_64;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_62 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_64 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                TypeInfo_109_109 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_109_109, ((MR_Box) (ArgX1_61)), ((MR_Box) (ArgY1_62)));
                if (succeeded)
                {
                  TypeInfo_110_110 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_110_110, ((MR_Box) (ArgX2_63)), ((MR_Box) (ArgY2_64)));
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String ArgX1_65 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_66;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_66 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_65, ArgY1_66) == 0);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer ArgX1_67 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Integer ArgY1_68;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_68 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (ArgX1_67 == ArgY1_68);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_String ArgX1_69 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_70;
              MR_String ArgX2_71 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_72;
              MR_String ArgX3_73 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_String ArgY3_74;
              MR_Integer ArgX4_75 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Integer ArgY4_76;
              MR_Integer ArgX5_77 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_Integer ArgY5_78;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_70 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_72 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_74 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_76 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_78 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 5))));
                succeeded = (strcmp(ArgX1_69, ArgY1_70) == 0);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_71, ArgY2_72) == 0);
                  if (succeeded)
                  {
                    succeeded = (strcmp(ArgX3_73, ArgY3_74) == 0);
                    if (succeeded)
                    {
                      succeeded = (ArgX4_75 == ArgY4_76);
                      if (succeeded)
                        succeeded = (ArgX5_77 == ArgY5_78);
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_String ArgX1_79 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_80;
              MR_String ArgX2_81 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_82;
              MR_Integer ArgX3_83 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Integer ArgY3_84;
              MR_Integer ArgX4_85 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Integer ArgY4_86;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_80 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_82 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_84 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_86 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = (strcmp(ArgX1_79, ArgY1_80) == 0);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_81, ArgY2_82) == 0);
                  if (succeeded)
                  {
                    succeeded = (ArgX3_83 == ArgY3_84);
                    if (succeeded)
                      succeeded = (ArgX4_85 == ArgY4_86);
                  }
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_String ArgX1_87 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_88;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_88 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_87, ArgY1_88) == 0);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Integer ArgX1_89 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Integer ArgY1_90;
              MR_Integer ArgX2_91 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Integer ArgY2_92;
              MR_Integer ArgX3_93 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Integer ArgY3_94;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ArgY1_90 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_92 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_94 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = (ArgX1_89 == ArgY1_90);
                if (succeeded)
                {
                  succeeded = (ArgX2_91 == ArgY2_92);
                  if (succeeded)
                    succeeded = (ArgX3_93 == ArgY3_94);
                }
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_String ArgX1_95 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_96;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ArgY1_96 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_95, ArgY1_96) == 0);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Integer ArgX1_97 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Integer ArgY1_98;
              MR_Integer ArgX2_99 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Integer ArgY2_100;
              MR_Integer ArgX3_101 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Integer ArgY3_102;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 10)));
              if (succeeded)
              {
                ArgY1_98 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_100 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_102 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = (ArgX1_97 == ArgY1_98);
                if (succeeded)
                {
                  succeeded = (ArgX2_99 == ArgY2_100);
                  if (succeeded)
                    succeeded = (ArgX3_101 == ArgY3_102);
                }
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_String ArgX1_103 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_104;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 11)));
              if (succeeded)
              {
                ArgY1_104 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_103, ArgY1_104) == 0);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
mdb__debugger_interface____Compare____debugger_request_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_58 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_59 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_58 == CastY_59);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer IndexX_4;
    MR_Integer IndexY_5;

    mdb__debugger_interface____Index____debugger_request_0_0(HeadVar__2_2, &IndexX_4);
    mdb__debugger_interface____Index____debugger_request_0_0(HeadVar__3_3, &IndexY_5);
    succeeded = (IndexX_4 < IndexY_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (IndexX_4 > IndexY_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word CompareResult_6;

        switch (MR_tag((MR_Word) HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              CompareResult_6 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_8;
              MR_Word ArgX2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Word ArgY2_11;
              MR_Word ArgX3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
              MR_Word ArgY3_14;
              MR_Word ArgX4_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
              MR_Word ArgY4_17;
              MR_Word ArgX5_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 4))));
              MR_Word ArgY5_20;
              MR_Word ArgX6_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 5))));
              MR_Word ArgY6_23;
              MR_Word ArgX7_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 6))));
              MR_Word ArgY7_26;
              MR_Word ArgX8_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 7))));
              MR_Word ArgY8_29;
              MR_Word ArgX9_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 8))));
              MR_Word ArgY9_32;
              MR_Word ArgX10_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 9))));
              MR_Word ArgY10_35;
              MR_Word ArgX11_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 10))));
              MR_Word ArgY11_38;
              MR_Word ArgX12_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 11))));
              MR_Word ArgY12_41;
              MR_Word SubResult1_9;
              MR_Word TypeInfo_64_64;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
                ArgY2_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
                ArgY3_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
                ArgY4_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 3))));
                ArgY5_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 4))));
                ArgY6_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 5))));
                ArgY7_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 6))));
                ArgY8_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 7))));
                ArgY9_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 8))));
                ArgY10_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 9))));
                ArgY11_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 10))));
                ArgY12_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 11))));
                TypeInfo_64_64 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[2]);
                mercury__builtin__compare_3_p_0(TypeInfo_64_64, &SubResult1_9, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
                succeeded = (SubResult1_9 != (MR_Integer) 0);
                if (succeeded)
                  CompareResult_6 = SubResult1_9;
                else
                {
                  MR_Word SubResult2_12;

                  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[2]), &SubResult2_12, ((MR_Box) (ArgX2_10)), ((MR_Box) (ArgY2_11)));
                  succeeded = (SubResult2_12 != (MR_Integer) 0);
                  if (succeeded)
                    CompareResult_6 = SubResult2_12;
                  else
                  {
                    MR_Word SubResult3_15;

                    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[2]), &SubResult3_15, ((MR_Box) (ArgX3_13)), ((MR_Box) (ArgY3_14)));
                    succeeded = (SubResult3_15 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult3_15;
                    else
                    {
                      MR_Word SubResult4_18;

                      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[3]), &SubResult4_18, ((MR_Box) (ArgX4_16)), ((MR_Box) (ArgY4_17)));
                      succeeded = (SubResult4_18 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult4_18;
                      else
                      {
                        MR_Word SubResult5_21;

                        mdb__debugger_interface____Compare____pred_match_0_0(&SubResult5_21, ArgX5_19, ArgY5_20);
                        succeeded = (SubResult5_21 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult5_21;
                        else
                        {
                          MR_Word SubResult6_24;

                          mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[4]), &SubResult6_24, ((MR_Box) (ArgX6_22)), ((MR_Box) (ArgY6_23)));
                          succeeded = (SubResult6_24 != (MR_Integer) 0);
                          if (succeeded)
                            CompareResult_6 = SubResult6_24;
                          else
                          {
                            MR_Word SubResult7_27;

                            mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[4]), &SubResult7_27, ((MR_Box) (ArgX7_25)), ((MR_Box) (ArgY7_26)));
                            succeeded = (SubResult7_27 != (MR_Integer) 0);
                            if (succeeded)
                              CompareResult_6 = SubResult7_27;
                            else
                            {
                              MR_Word SubResult8_30;

                              mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[2]), &SubResult8_30, ((MR_Box) (ArgX8_28)), ((MR_Box) (ArgY8_29)));
                              succeeded = (SubResult8_30 != (MR_Integer) 0);
                              if (succeeded)
                                CompareResult_6 = SubResult8_30;
                              else
                              {
                                MR_Word SubResult9_33;

                                mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[2]), &SubResult9_33, ((MR_Box) (ArgX9_31)), ((MR_Box) (ArgY9_32)));
                                succeeded = (SubResult9_33 != (MR_Integer) 0);
                                if (succeeded)
                                  CompareResult_6 = SubResult9_33;
                                else
                                {
                                  MR_Word SubResult10_36;

                                  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[2]), &SubResult10_36, ((MR_Box) (ArgX10_34)), ((MR_Box) (ArgY10_35)));
                                  succeeded = (SubResult10_36 != (MR_Integer) 0);
                                  if (succeeded)
                                    CompareResult_6 = SubResult10_36;
                                  else
                                  {
                                    MR_Word SubResult11_39;

                                    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[5]), &SubResult11_39, ((MR_Box) (ArgX11_37)), ((MR_Box) (ArgY11_38)));
                                    succeeded = (SubResult11_39 != (MR_Integer) 0);
                                    if (succeeded)
                                      CompareResult_6 = SubResult11_39;
                                    else
                                      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[4]), &CompareResult_6, ((MR_Box) (ArgX12_40)), ((MR_Box) (ArgY12_41)));
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
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ArgX1_42 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Integer ArgY1_43;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_43 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, 0))));
                succeeded = (ArgX1_42 < ArgY1_43);
                if (succeeded)
                  CompareResult_6 = (MR_Integer) 1;
                else
                {
                  succeeded = (ArgX1_42 > ArgY1_43);
                  if (succeeded)
                    CompareResult_6 = (MR_Integer) 2;
                  else
                    CompareResult_6 = (MR_Integer) 0;
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String ArgX1_44 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_45;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgY1_45 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_44, ArgY1_45);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word TypeInfo_79_79;
                  MR_Word ArgX1_46 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_47;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgY1_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    TypeInfo_79_79 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[1]);
                    mercury__builtin__compare_3_p_0(TypeInfo_79_79, &CompareResult_6, ((MR_Box) (ArgX1_46)), ((MR_Box) (ArgY1_47)));
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word TypeInfo_61_61;
                  MR_Word ArgX1_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_49;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgY1_49 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    TypeInfo_61_61 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[1]);
                    mercury__builtin__compare_3_p_0(TypeInfo_61_61, &CompareResult_6, ((MR_Box) (ArgX1_48)), ((MR_Box) (ArgY1_49)));
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word TypeInfo_76_76;
                  MR_Word ArgX1_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_51;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    ArgY1_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    TypeInfo_76_76 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[1]);
                    mercury__builtin__compare_3_p_0(TypeInfo_76_76, &CompareResult_6, ((MR_Box) (ArgX1_50)), ((MR_Box) (ArgY1_51)));
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_String ArgX1_52 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_53;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    ArgY1_53 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_52, ArgY1_53);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_String ArgX1_54 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_55;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    ArgY1_55 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_54, ArgY1_55);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_String ArgX1_56 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_57;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    ArgY1_57 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_56, ArgY1_57);
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            break;
        }
        if (succeeded)
          *HeadVar__1_1 = CompareResult_6;
        else
          {
            mercury__private_builtin__compare_error_0_p_0();
            return;
          }
      }
    }
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____pred_match_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_14 == CastY_15);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Word SubResult1_6;

              mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[6]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Word ArgX2_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word SubResult1_11;

              mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[4]), &SubResult1_11, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
              succeeded = (SubResult1_11 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_11;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX2_12)), ((MR_Box) (ArgY2_13)));
            }
            break;
        }
        break;
    }
}

static void MR_CALL 
mdb__debugger_interface____Index____debugger_request_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 2;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 3;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 4;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_Integer) 19;
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_Integer) 20;
          break;
        case (MR_Integer) 12:
          *HeadVar__2_2 = (MR_Integer) 21;
          break;
        case (MR_Integer) 13:
          *HeadVar__2_2 = (MR_Integer) 22;
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 5;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 13;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 14;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 15;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 16;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 17;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 18;
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_request_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_45 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_46 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_45 == CastY_46);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_43 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_44 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_44 == CastX_43);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_48_48;
          MR_Word TypeCtorInfo_49_49;
          MR_Word TypeCtorInfo_50_50;
          MR_Word TypeCtorInfo_51_51;
          MR_Word TypeCtorInfo_52_52;
          MR_Word TypeCtorInfo_53_53;
          MR_Word TypeCtorInfo_54_54;
          MR_Word TypeCtorInfo_55_55;
          MR_Word TypeCtorInfo_56_56;
          MR_Word TypeInfo_57_57;
          MR_Word TypeCtorInfo_58_58;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Word ArgY2_6;
          MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
          MR_Word ArgY3_8;
          MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 3))));
          MR_Word ArgY4_10;
          MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 4))));
          MR_Word ArgY5_12;
          MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 5))));
          MR_Word ArgY6_14;
          MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 6))));
          MR_Word ArgY7_16;
          MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 7))));
          MR_Word ArgY8_18;
          MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 8))));
          MR_Word ArgY9_20;
          MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 9))));
          MR_Word ArgY10_22;
          MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 10))));
          MR_Word ArgY11_24;
          MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 11))));
          MR_Word ArgY12_26;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
            ArgY3_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
            ArgY4_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
            ArgY5_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 4))));
            ArgY6_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 5))));
            ArgY7_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 6))));
            ArgY8_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 7))));
            ArgY9_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 8))));
            ArgY10_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 9))));
            ArgY11_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 10))));
            ArgY12_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 11))));
            TypeCtorInfo_48_48 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
            succeeded = mdb__debugger_interface____Unify____match_1_0(TypeCtorInfo_48_48, ArgX1_3, ArgY1_4);
            if (succeeded)
            {
              TypeCtorInfo_49_49 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
              succeeded = mdb__debugger_interface____Unify____match_1_0(TypeCtorInfo_49_49, ArgX2_5, ArgY2_6);
              if (succeeded)
              {
                TypeCtorInfo_50_50 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
                succeeded = mdb__debugger_interface____Unify____match_1_0(TypeCtorInfo_50_50, ArgX3_7, ArgY3_8);
                if (succeeded)
                {
                  TypeCtorInfo_51_51 = (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0);
                  succeeded = mdb__debugger_interface____Unify____match_1_0(TypeCtorInfo_51_51, ArgX4_9, ArgY4_10);
                  if (succeeded)
                  {
                    succeeded = mdb__debugger_interface____Unify____pred_match_0_0(ArgX5_11, ArgY5_12);
                    if (succeeded)
                    {
                      TypeCtorInfo_52_52 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
                      succeeded = mdb__debugger_interface____Unify____match_1_0(TypeCtorInfo_52_52, ArgX6_13, ArgY6_14);
                      if (succeeded)
                      {
                        TypeCtorInfo_53_53 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
                        succeeded = mdb__debugger_interface____Unify____match_1_0(TypeCtorInfo_53_53, ArgX7_15, ArgY7_16);
                        if (succeeded)
                        {
                          TypeCtorInfo_54_54 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
                          succeeded = mdb__debugger_interface____Unify____match_1_0(TypeCtorInfo_54_54, ArgX8_17, ArgY8_18);
                          if (succeeded)
                          {
                            TypeCtorInfo_55_55 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
                            succeeded = mdb__debugger_interface____Unify____match_1_0(TypeCtorInfo_55_55, ArgX9_19, ArgY9_20);
                            if (succeeded)
                            {
                              TypeCtorInfo_56_56 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
                              succeeded = mdb__debugger_interface____Unify____match_1_0(TypeCtorInfo_56_56, ArgX10_21, ArgY10_22);
                              if (succeeded)
                              {
                                TypeInfo_57_57 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[0]);
                                succeeded = mdb__debugger_interface____Unify____match_1_0(TypeInfo_57_57, ArgX11_23, ArgY11_24);
                                if (succeeded)
                                {
                                  TypeCtorInfo_58_58 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
                                  succeeded = mdb__debugger_interface____Unify____match_1_0(TypeCtorInfo_58_58, ArgX12_25, ArgY12_26);
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
          MR_Integer ArgX1_27 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Integer ArgY1_28;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_28 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 0))));
            succeeded = (ArgX1_27 == ArgY1_28);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ArgX1_29 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_30;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_30 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_29, ArgY1_30) == 0);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_60_60;
              MR_Word ArgX1_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_32;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                TypeInfo_60_60 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_60_60, ((MR_Box) (ArgX1_31)), ((MR_Box) (ArgY1_32)));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_47_47;
              MR_Word ArgX1_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_34;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                TypeInfo_47_47 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_47, ((MR_Box) (ArgX1_33)), ((MR_Box) (ArgY1_34)));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_59_59;
              MR_Word ArgX1_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_36;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_36 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                TypeInfo_59_59 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_59_59, ((MR_Box) (ArgX1_35)), ((MR_Box) (ArgY1_36)));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_String ArgX1_37 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_38;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_38 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_37, ArgY1_38) == 0);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_String ArgX1_39 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_40;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_40 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_39, ArgY1_40) == 0);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_String ArgX1_41 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_42;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_42 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_41, ArgY1_42) == 0);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____pred_match_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_12 == CastX_11);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_17_17;
          MR_Word TypeCtorInfo_18_18;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
            TypeCtorInfo_17_17 = (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0);
            succeeded = mdb__debugger_interface____Unify____match_1_0(TypeCtorInfo_17_17, ArgX1_3, ArgY1_4);
            if (succeeded)
            {
              TypeCtorInfo_18_18 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
              succeeded = mdb__debugger_interface____Unify____match_1_0(TypeCtorInfo_18_18, ArgX2_5, ArgY2_6);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeCtorInfo_15_15;
          MR_Word TypeCtorInfo_16_16;
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
            TypeCtorInfo_15_15 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
            succeeded = mdb__debugger_interface____Unify____match_1_0(TypeCtorInfo_15_15, ArgX1_7, ArgY1_8);
            if (succeeded)
            {
              TypeCtorInfo_16_16 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
              succeeded = mdb__debugger_interface____Unify____match_1_0(TypeCtorInfo_16_16, ArgX2_9, ArgY2_10);
            }
          }
        }
        break;
    }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____match_1_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_14 == CastX_13);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box ArgX1_3 = (MR_hl_field(1, HeadVar__1_1, 0));
          MR_Box ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = (MR_hl_field(1, HeadVar__2_2, 0));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_17, ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box ArgX1_5 = (MR_hl_field(2, HeadVar__1_1, 0));
          MR_Box ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = (MR_hl_field(2, HeadVar__2_2, 0));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_17, ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_8;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_17, ArgX1_7, ArgY1_8);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box ArgX1_9 = (MR_hl_field(3, HeadVar__1_1, 1));
              MR_Box ArgY1_10;
              MR_Box ArgX2_11 = (MR_hl_field(3, HeadVar__1_1, 2));
              MR_Box ArgY2_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_10 = (MR_hl_field(3, HeadVar__2_2, 1));
                ArgY2_12 = (MR_hl_field(3, HeadVar__2_2, 2));
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_17, ArgX1_9, ArgY1_10);
                if (succeeded)
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_17, ArgX2_11, ArgY2_12);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
mdb__debugger_interface____Compare____call_number_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____call_number_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
mdb__debugger_interface____Compare____arity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____arity_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
mdb__debugger_interface__get_variable_name_2_p_0(
  MR_Word DebuggerRequest_3,
  MR_String * Options_4)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) DebuggerRequest_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, DebuggerRequest_3, 0)))) == (MR_Integer) 5)));
  MR_String OptionsPrime_5;

  if (succeeded)
  {
    OptionsPrime_5 = ((MR_String) ((MR_hl_field(3, DebuggerRequest_3, 1))));
    *Options_4 = OptionsPrime_5;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdb.debugger_interface.get_variable_name\'/2", (MR_String) "not a browse request");
      return;
    }
}

static void MR_CALL 
mdb__debugger_interface__init_mercury_string_1_p_0(
  MR_String * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_String) "";
}

static void MR_CALL 
mdb__debugger_interface__get_object_file_name_2_p_0(
  MR_Word DebuggerRequest_3,
  MR_String * ObjectFileName_4)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) DebuggerRequest_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, DebuggerRequest_3, 0)))) == (MR_Integer) 6)));
  MR_String ObjectFileNamePrime_5;

  if (succeeded)
  {
    ObjectFileNamePrime_5 = ((MR_String) ((MR_hl_field(3, DebuggerRequest_3, 1))));
    *ObjectFileName_4 = ObjectFileNamePrime_5;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdb.debugger_interface.get_object_file_name\'/2", (MR_String) "not a link_collect request");
      return;
    }
}

static void MR_CALL 
mdb__debugger_interface__get_mmc_options_2_p_0(
  MR_Word DebuggerRequest_3,
  MR_String * Options_4)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) DebuggerRequest_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, DebuggerRequest_3, 0)))) == (MR_Integer) 4)));
  MR_String OptionsPrim_5;

  if (succeeded)
  {
    OptionsPrim_5 = ((MR_String) ((MR_hl_field(3, DebuggerRequest_3, 1))));
    *Options_4 = OptionsPrim_5;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdb.debugger_interface.get_mmc_options\'/2", (MR_String) "not a mmc_options request");
      return;
    }
}

static void MR_CALL 
mdb__debugger_interface__get_list_modules_to_import_3_p_0(
  MR_Word DebuggerRequest_4,
  MR_Integer * ListLength_5,
  MR_Word * ModulesList_6)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) DebuggerRequest_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, DebuggerRequest_4, 0)))) == (MR_Integer) 1)));
  MR_Word List_7;

  if (succeeded)
  {
    List_7 = ((MR_Word) ((MR_hl_field(3, DebuggerRequest_4, 1))));
    *ModulesList_6 = List_7;
  }
  else
  {
    MR_Word List_11;

    succeeded = ((((MR_tag((MR_Word) DebuggerRequest_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, DebuggerRequest_4, 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      List_11 = ((MR_Word) ((MR_hl_field(3, DebuggerRequest_4, 1))));
      *ModulesList_6 = List_11;
    }
    else
    {
      MR_Word List_10;

      succeeded = ((((MR_tag((MR_Word) DebuggerRequest_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, DebuggerRequest_4, 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        List_10 = ((MR_Word) ((MR_hl_field(3, DebuggerRequest_4, 1))));
        *ModulesList_6 = List_10;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdb.debugger_interface.get_list_modules_to_import\'/3", (MR_String) "not a query request");
          return;
        }
    }
  }
  mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), *ModulesList_6, ListLength_5);
}

static void MR_CALL 
mdb__debugger_interface__read_request_from_socket_5_p_0(
  MR_Word SocketStream_6,
  MR_Word * Request_7,
  MR_Integer * RequestType_8)
{
  MR_Word MaybeRequest_10;

  mercury__io__read_4_p_0((MR_Word) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_request_0), SocketStream_6, &MaybeRequest_10);
  switch (MR_tag((MR_Word) MaybeRequest_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Request_7 = (MR_Word) (MR_mkword(3, &mdb__debugger_interface_scalar_common_1[7]));
        *RequestType_8 = (MR_Integer) 6;
      }
      break;
    case (MR_Integer) 1:
      {
        *Request_7 = ((MR_Word) ((MR_hl_field(1, MaybeRequest_10, 0))));
        switch (MR_tag((MR_Word) *Request_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(*Request_7)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *RequestType_8 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                *RequestType_8 = (MR_Integer) 3;
                break;
              case (MR_Integer) 2:
                *RequestType_8 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                *RequestType_8 = (MR_Integer) 7;
                break;
              case (MR_Integer) 4:
                *RequestType_8 = (MR_Integer) 5;
                break;
              case (MR_Integer) 5:
                *RequestType_8 = (MR_Integer) 4;
                break;
              case (MR_Integer) 6:
                *RequestType_8 = (MR_Integer) 9;
                break;
              case (MR_Integer) 7:
                *RequestType_8 = (MR_Integer) 10;
                break;
              case (MR_Integer) 8:
                *RequestType_8 = (MR_Integer) 11;
                break;
              case (MR_Integer) 9:
                *RequestType_8 = (MR_Integer) 12;
                break;
              case (MR_Integer) 10:
                *RequestType_8 = (MR_Integer) 19;
                break;
              case (MR_Integer) 11:
                *RequestType_8 = (MR_Integer) 20;
                break;
              case (MR_Integer) 12:
                *RequestType_8 = (MR_Integer) 21;
                break;
              case (MR_Integer) 13:
                *RequestType_8 = (MR_Integer) 22;
                break;
            }
            break;
          case (MR_Integer) 1:
            *RequestType_8 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            *RequestType_8 = (MR_Integer) 8;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, *Request_7, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *RequestType_8 = (MR_Integer) 6;
                break;
              case (MR_Integer) 1:
                *RequestType_8 = (MR_Integer) 13;
                break;
              case (MR_Integer) 2:
                *RequestType_8 = (MR_Integer) 14;
                break;
              case (MR_Integer) 3:
                *RequestType_8 = (MR_Integer) 15;
                break;
              case (MR_Integer) 4:
                *RequestType_8 = (MR_Integer) 16;
                break;
              case (MR_Integer) 5:
                *RequestType_8 = (MR_Integer) 17;
                break;
              case (MR_Integer) 6:
                *RequestType_8 = (MR_Integer) 18;
                break;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String ErrorMsg_12 = ((MR_String) ((MR_hl_field(2, MaybeRequest_10, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Request_7 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, base, 1) = ((MR_Box) (ErrorMsg_12));
        }
        *RequestType_8 = (MR_Integer) 6;
      }
      break;
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface__found_match_comp_14_p_0(
  MR_Integer EventNumber_15,
  MR_Integer CallNumber_16,
  MR_Integer DepthNumber_17,
  MR_Word Port_18,
  MR_String NameType_19,
  MR_String ModuleType_20,
  MR_String DefModuleName_21,
  MR_String PredName_22,
  MR_Integer Arity_23,
  MR_Integer ModeNum_24,
  MR_Integer Determinism_25,
  MR_Word Args_26,
  MR_String Path_27,
  MR_Word DebuggerRequest_28)
{
  MR_bool succeeded = ((MR_tag((MR_Word) DebuggerRequest_28)) == (MR_Integer) 1);
  MR_Word MatchEventNumber_29;
  MR_Word MatchCallNumber_30;
  MR_Word MatchDepthNumber_31;
  MR_Word MatchPort_32;
  MR_Word CompilerGeneratedPredMatch_33;
  MR_Word MatchDefModuleName_34;
  MR_Word MatchPredName_35;
  MR_Word MatchArity_36;
  MR_Word MatchModeNum_37;
  MR_Word MatchDeterminism_38;
  MR_Word MatchArgs_39;
  MR_Word MatchPath_40;

  if (succeeded)
  {
    MatchEventNumber_29 = ((MR_Word) ((MR_hl_field(1, DebuggerRequest_28, 0))));
    MatchCallNumber_30 = ((MR_Word) ((MR_hl_field(1, DebuggerRequest_28, 1))));
    MatchDepthNumber_31 = ((MR_Word) ((MR_hl_field(1, DebuggerRequest_28, 2))));
    MatchPort_32 = ((MR_Word) ((MR_hl_field(1, DebuggerRequest_28, 3))));
    CompilerGeneratedPredMatch_33 = ((MR_Word) ((MR_hl_field(1, DebuggerRequest_28, 4))));
    MatchDefModuleName_34 = ((MR_Word) ((MR_hl_field(1, DebuggerRequest_28, 5))));
    MatchPredName_35 = ((MR_Word) ((MR_hl_field(1, DebuggerRequest_28, 6))));
    MatchArity_36 = ((MR_Word) ((MR_hl_field(1, DebuggerRequest_28, 7))));
    MatchModeNum_37 = ((MR_Word) ((MR_hl_field(1, DebuggerRequest_28, 8))));
    MatchDeterminism_38 = ((MR_Word) ((MR_hl_field(1, DebuggerRequest_28, 9))));
    MatchArgs_39 = ((MR_Word) ((MR_hl_field(1, DebuggerRequest_28, 10))));
    MatchPath_40 = ((MR_Word) ((MR_hl_field(1, DebuggerRequest_28, 11))));
    {
      MR_Word TypeCtorInfo_46_46;
      MR_Word TypeCtorInfo_48_48;
      MR_Word TypeInfo_49_49;
      MR_Word MatchNameType_41;
      MR_Word MatchModuleType_42;

      succeeded = mdb__debugger_interface__match_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MatchEventNumber_29, ((MR_Box) (EventNumber_15)));
      if (succeeded)
      {
        succeeded = mdb__debugger_interface__match_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MatchCallNumber_30, ((MR_Box) (CallNumber_16)));
        if (succeeded)
        {
          succeeded = mdb__debugger_interface__match_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MatchDepthNumber_31, ((MR_Box) (DepthNumber_17)));
          if (succeeded)
          {
            TypeCtorInfo_46_46 = (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0);
            succeeded = mdb__debugger_interface__match_2_p_0(TypeCtorInfo_46_46, MatchPort_32, ((MR_Box) (Port_18)));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) CompilerGeneratedPredMatch_33)) == (MR_Integer) 2);
              if (succeeded)
              {
                MatchNameType_41 = ((MR_Word) ((MR_hl_field(2, CompilerGeneratedPredMatch_33, 0))));
                MatchModuleType_42 = ((MR_Word) ((MR_hl_field(2, CompilerGeneratedPredMatch_33, 1))));
                succeeded = mdb__debugger_interface__match_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MatchNameType_41, ((MR_Box) (NameType_19)));
                if (succeeded)
                  succeeded = mdb__debugger_interface__match_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MatchModuleType_42, ((MR_Box) (ModuleType_20)));
              }
              else
                succeeded = (CompilerGeneratedPredMatch_33 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TypeCtorInfo_48_48 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
                succeeded = mdb__debugger_interface__match_2_p_0(TypeCtorInfo_48_48, MatchDefModuleName_34, ((MR_Box) (DefModuleName_21)));
                if (succeeded)
                {
                  succeeded = mdb__debugger_interface__match_2_p_0(TypeCtorInfo_48_48, MatchPredName_35, ((MR_Box) (PredName_22)));
                  if (succeeded)
                  {
                    succeeded = mdb__debugger_interface__match_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MatchArity_36, ((MR_Box) (Arity_23)));
                    if (succeeded)
                    {
                      succeeded = mdb__debugger_interface__match_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MatchModeNum_37, ((MR_Box) (ModeNum_24)));
                      if (succeeded)
                      {
                        succeeded = mdb__debugger_interface__match_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MatchDeterminism_38, ((MR_Box) (Determinism_25)));
                        if (succeeded)
                        {
                          TypeInfo_49_49 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[0]);
                          succeeded = mdb__debugger_interface__match_2_p_0(TypeInfo_49_49, MatchArgs_39, ((MR_Box) (Args_26)));
                          if (succeeded)
                            succeeded = mdb__debugger_interface__match_2_p_0(TypeCtorInfo_48_48, MatchPath_40, ((MR_Box) (Path_27)));
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
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdb.debugger_interface.found_match_comp\'/14", (MR_String) "forward_move expected");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__debugger_interface__found_match_user_14_p_0(
  MR_Integer EventNumber_15,
  MR_Integer CallNumber_16,
  MR_Integer DepthNumber_17,
  MR_Word Port_18,
  MR_Word PredOrFunc_19,
  MR_String DeclModuleName_20,
  MR_String DefModuleName_21,
  MR_String PredName_22,
  MR_Integer Arity_23,
  MR_Integer ModeNum_24,
  MR_Integer Determinism_25,
  MR_Word Args_26,
  MR_String Path_27,
  MR_Word DebuggerRequest_28)
{
  MR_bool succeeded = ((MR_tag((MR_Word) DebuggerRequest_28)) == (MR_Integer) 1);
  MR_Word MatchEventNumber_29;
  MR_Word MatchCallNumber_30;
  MR_Word MatchDepthNumber_31;
  MR_Word MatchPort_32;
  MR_Word UserPredMatch_33;
  MR_Word MatchDefModuleName_34;
  MR_Word MatchPredName_35;
  MR_Word MatchArity_36;
  MR_Word MatchModeNum_37;
  MR_Word MatchDeterminism_38;
  MR_Word MatchArgs_39;
  MR_Word MatchPath_40;

  if (succeeded)
  {
    MatchEventNumber_29 = ((MR_Word) ((MR_hl_field(1, DebuggerRequest_28, 0))));
    MatchCallNumber_30 = ((MR_Word) ((MR_hl_field(1, DebuggerRequest_28, 1))));
    MatchDepthNumber_31 = ((MR_Word) ((MR_hl_field(1, DebuggerRequest_28, 2))));
    MatchPort_32 = ((MR_Word) ((MR_hl_field(1, DebuggerRequest_28, 3))));
    UserPredMatch_33 = ((MR_Word) ((MR_hl_field(1, DebuggerRequest_28, 4))));
    MatchDefModuleName_34 = ((MR_Word) ((MR_hl_field(1, DebuggerRequest_28, 5))));
    MatchPredName_35 = ((MR_Word) ((MR_hl_field(1, DebuggerRequest_28, 6))));
    MatchArity_36 = ((MR_Word) ((MR_hl_field(1, DebuggerRequest_28, 7))));
    MatchModeNum_37 = ((MR_Word) ((MR_hl_field(1, DebuggerRequest_28, 8))));
    MatchDeterminism_38 = ((MR_Word) ((MR_hl_field(1, DebuggerRequest_28, 9))));
    MatchArgs_39 = ((MR_Word) ((MR_hl_field(1, DebuggerRequest_28, 10))));
    MatchPath_40 = ((MR_Word) ((MR_hl_field(1, DebuggerRequest_28, 11))));
    {
      MR_Word TypeCtorInfo_46_46;
      MR_Word TypeCtorInfo_49_49;
      MR_Word TypeInfo_50_50;
      MR_Word MatchPredOrFunc_41;
      MR_Word MatchDeclModuleName_42;

      succeeded = mdb__debugger_interface__match_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MatchEventNumber_29, ((MR_Box) (EventNumber_15)));
      if (succeeded)
      {
        succeeded = mdb__debugger_interface__match_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MatchCallNumber_30, ((MR_Box) (CallNumber_16)));
        if (succeeded)
        {
          succeeded = mdb__debugger_interface__match_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MatchDepthNumber_31, ((MR_Box) (DepthNumber_17)));
          if (succeeded)
          {
            TypeCtorInfo_46_46 = (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0);
            succeeded = mdb__debugger_interface__match_2_p_0(TypeCtorInfo_46_46, MatchPort_32, ((MR_Box) (Port_18)));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) UserPredMatch_33)) == (MR_Integer) 1);
              if (succeeded)
              {
                MatchPredOrFunc_41 = ((MR_Word) ((MR_hl_field(1, UserPredMatch_33, 0))));
                MatchDeclModuleName_42 = ((MR_Word) ((MR_hl_field(1, UserPredMatch_33, 1))));
                {
                  MR_Word TypeCtorInfo_48_48;

                  succeeded = mdb__debugger_interface__match_2_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0), MatchPredOrFunc_41, ((MR_Box) (PredOrFunc_19)));
                  if (succeeded)
                  {
                    TypeCtorInfo_48_48 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
                    succeeded = mdb__debugger_interface__match_2_p_0(TypeCtorInfo_48_48, MatchDeclModuleName_42, ((MR_Box) (DeclModuleName_20)));
                  }
                }
              }
              else
                succeeded = (UserPredMatch_33 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TypeCtorInfo_49_49 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
                succeeded = mdb__debugger_interface__match_2_p_0(TypeCtorInfo_49_49, MatchDefModuleName_34, ((MR_Box) (DefModuleName_21)));
                if (succeeded)
                {
                  succeeded = mdb__debugger_interface__match_2_p_0(TypeCtorInfo_49_49, MatchPredName_35, ((MR_Box) (PredName_22)));
                  if (succeeded)
                  {
                    succeeded = mdb__debugger_interface__match_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MatchArity_36, ((MR_Box) (Arity_23)));
                    if (succeeded)
                    {
                      succeeded = mdb__debugger_interface__match_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MatchModeNum_37, ((MR_Box) (ModeNum_24)));
                      if (succeeded)
                      {
                        succeeded = mdb__debugger_interface__match_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MatchDeterminism_38, ((MR_Box) (Determinism_25)));
                        if (succeeded)
                        {
                          TypeInfo_50_50 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[0]);
                          succeeded = mdb__debugger_interface__match_2_p_0(TypeInfo_50_50, MatchArgs_39, ((MR_Box) (Args_26)));
                          if (succeeded)
                            succeeded = mdb__debugger_interface__match_2_p_0(TypeCtorInfo_49_49, MatchPath_40, ((MR_Box) (Path_27)));
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
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdb.debugger_interface.found_match_user\'/14", (MR_String) "forward_move expected");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__debugger_interface__match_2_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 1:
      {
        MR_Box X_4 = (MR_hl_field(1, HeadVar__1_1, 0));

        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_14, HeadVar__2_2, X_4);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box X_5 = (MR_hl_field(2, HeadVar__1_1, 0));

        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_14, X_5, HeadVar__2_2);
        succeeded = !(succeeded);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word L_7 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_14, HeadVar__2_2, L_7);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box Low_9 = (MR_hl_field(3, HeadVar__1_1, 1));
            MR_Box High_10 = (MR_hl_field(3, HeadVar__1_1, 2));
            MR_Word LE_12;
            MR_Word GE_13;

            mercury__builtin__compare_3_p_0(TypeInfo_for_T_14, &LE_12, HeadVar__2_2, High_10);
            switch (LE_12) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 0:
                succeeded = MR_TRUE;
                break;
            }
            if (succeeded)
            {
              mercury__builtin__compare_3_p_0(TypeInfo_for_T_14, &GE_13, HeadVar__2_2, Low_9);
              switch (GE_13) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 2:
                  succeeded = MR_TRUE;
                  break;
              }
            }
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_Integer MR_CALL 
mdb__debugger_interface__get_var_number_1_f_0(
  MR_Word DebuggerRequest_3)
{
  MR_bool succeeded = ((MR_tag((MR_Word) DebuggerRequest_3)) == (MR_Integer) 2);
  MR_Integer VarNumber_4;
  MR_Integer Var_5;

  if (succeeded)
  {
    Var_5 = ((MR_Integer) ((MR_hl_field(2, DebuggerRequest_3, 0))));
    VarNumber_4 = Var_5;
  }
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140mdb.debugger_interface.get_var_number\'/1", (MR_String) "not a current_nth_var request");
  return VarNumber_4;
}

static void MR_CALL 
mdb__debugger_interface__output_current_live_var_names_5_p_0(
  MR_Word LiveVarNameList_6,
  MR_Word LiveVarTypeList_7,
  MR_Word OutputStream_8)
{
  MR_Word Response_10;

  {
    Response_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Response_10, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Response_10, 1) = ((MR_Box) (LiveVarNameList_6));
    MR_hl_field(3, Response_10, 2) = ((MR_Box) (LiveVarTypeList_7));
  }
  mercury__io__write_4_p_0((MR_Word) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0), OutputStream_8, ((MR_Box) (Response_10)));
  mercury__io__print_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OutputStream_8, ((MR_Box) ((MR_String) ".\n")));
  mercury__io__flush_output_3_p_0(OutputStream_8);
}

static void MR_CALL 
mdb__debugger_interface__output_current_nth_var_4_p_0(
  MR_Word Var_5,
  MR_Word OutputStream_6)
{
  MR_Word Response_8;

  {
    Response_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Response_8, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Response_8, 1) = ((MR_Box) (Var_5));
  }
  mercury__io__write_4_p_0((MR_Word) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0), OutputStream_6, ((MR_Box) (Response_8)));
  mercury__io__print_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OutputStream_6, ((MR_Box) ((MR_String) ".\n")));
  mercury__io__flush_output_3_p_0(OutputStream_6);
}

static void MR_CALL 
mdb__debugger_interface__output_current_vars_5_p_0(
  MR_Word VarList_6,
  MR_Word StringList_7,
  MR_Word OutputStream_8)
{
  MR_Word Response_10;

  {
    Response_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Response_10, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Response_10, 1) = ((MR_Box) (VarList_6));
    MR_hl_field(3, Response_10, 2) = ((MR_Box) (StringList_7));
  }
  mercury__io__write_4_p_0((MR_Word) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0), OutputStream_8, ((MR_Box) (Response_10)));
  mercury__io__print_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OutputStream_8, ((MR_Box) ((MR_String) ".\n")));
  mercury__io__flush_output_3_p_0(OutputStream_8);
}

static void MR_CALL 
mdb__debugger_interface__output_current_slots_comp_16_p_0(
  MR_Integer EventNumber_17,
  MR_Integer CallNumber_18,
  MR_Integer DepthNumber_19,
  MR_Word Port_20,
  MR_String NameType_21,
  MR_String ModuleType_22,
  MR_String DefModuleName_23,
  MR_String PredName_24,
  MR_Integer Arity_25,
  MR_Integer ModeNum_26,
  MR_Integer Determinism_27,
  MR_String Path_28,
  MR_Integer LineNo_29,
  MR_Word OutputStream_30)
{
  MR_Word Response_32;

  {
    Response_32 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Response_32, 0) = ((MR_Box) (EventNumber_17));
    MR_hl_field(2, Response_32, 1) = ((MR_Box) (CallNumber_18));
    MR_hl_field(2, Response_32, 2) = ((MR_Box) (DepthNumber_19));
    MR_hl_field(2, Response_32, 3) = (MR_Box) ((MR_Unsigned) (Port_20));
    MR_hl_field(2, Response_32, 4) = ((MR_Box) (NameType_21));
    MR_hl_field(2, Response_32, 5) = ((MR_Box) (ModuleType_22));
    MR_hl_field(2, Response_32, 6) = ((MR_Box) (DefModuleName_23));
    MR_hl_field(2, Response_32, 7) = ((MR_Box) (PredName_24));
    MR_hl_field(2, Response_32, 8) = ((MR_Box) (Arity_25));
    MR_hl_field(2, Response_32, 9) = ((MR_Box) (ModeNum_26));
    MR_hl_field(2, Response_32, 10) = ((MR_Box) (Determinism_27));
    MR_hl_field(2, Response_32, 11) = ((MR_Box) (Path_28));
    MR_hl_field(2, Response_32, 12) = ((MR_Box) (LineNo_29));
  }
  mercury__io__write_4_p_0((MR_Word) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0), OutputStream_30, ((MR_Box) (Response_32)));
  mercury__io__print_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OutputStream_30, ((MR_Box) ((MR_String) ".\n")));
  mercury__io__flush_output_3_p_0(OutputStream_30);
}

static void MR_CALL 
mdb__debugger_interface__output_current_slots_user_16_p_0(
  MR_Integer EventNumber_17,
  MR_Integer CallNumber_18,
  MR_Integer DepthNumber_19,
  MR_Word Port_20,
  MR_Word PredOrFunc_21,
  MR_String DeclModuleName_22,
  MR_String DefModuleName_23,
  MR_String PredName_24,
  MR_Integer Arity_25,
  MR_Integer ModeNum_26,
  MR_Integer Determinism_27,
  MR_String Path_28,
  MR_Integer LineNo_29,
  MR_Word OutputStream_30)
{
  MR_Word Response_32;

  {
    Response_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Response_32, 0) = ((MR_Box) (EventNumber_17));
    MR_hl_field(1, Response_32, 1) = ((MR_Box) (CallNumber_18));
    MR_hl_field(1, Response_32, 2) = ((MR_Box) (DepthNumber_19));
    MR_hl_field(1, Response_32, 3) = (MR_Box) (((((MR_Unsigned) (Port_20) << 1)) | (MR_Unsigned) (PredOrFunc_21)));
    MR_hl_field(1, Response_32, 4) = ((MR_Box) (DeclModuleName_22));
    MR_hl_field(1, Response_32, 5) = ((MR_Box) (DefModuleName_23));
    MR_hl_field(1, Response_32, 6) = ((MR_Box) (PredName_24));
    MR_hl_field(1, Response_32, 7) = ((MR_Box) (Arity_25));
    MR_hl_field(1, Response_32, 8) = ((MR_Box) (ModeNum_26));
    MR_hl_field(1, Response_32, 9) = ((MR_Box) (Determinism_27));
    MR_hl_field(1, Response_32, 10) = ((MR_Box) (Path_28));
    MR_hl_field(1, Response_32, 11) = ((MR_Box) (LineNo_29));
  }
  mercury__io__write_4_p_0((MR_Word) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0), OutputStream_30, ((MR_Box) (Response_32)));
  mercury__io__print_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OutputStream_30, ((MR_Box) ((MR_String) ".\n")));
  mercury__io__flush_output_3_p_0(OutputStream_30);
}

void MR_CALL 
mdb__debugger_interface__dummy_pred_to_avoid_warning_about_nothing_exported_0_p_0(void)
{
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____arity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__debugger_interface____Unify____arity_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__debugger_interface____Compare____arity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__debugger_interface____Compare____arity_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____call_number_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__debugger_interface____Unify____call_number_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__debugger_interface____Compare____call_number_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__debugger_interface____Compare____call_number_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_request_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__debugger_interface____Unify____debugger_request_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__debugger_interface____Compare____debugger_request_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__debugger_interface____Compare____debugger_request_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_response_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__debugger_interface____Unify____debugger_response_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__debugger_interface____Compare____debugger_response_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__debugger_interface____Compare____debugger_response_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____depth_number_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__debugger_interface____Unify____depth_number_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__debugger_interface____Compare____depth_number_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__debugger_interface____Compare____depth_number_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____determinism_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__debugger_interface____Unify____determinism_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__debugger_interface____Compare____determinism_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__debugger_interface____Compare____determinism_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____event_number_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__debugger_interface____Unify____event_number_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__debugger_interface____Compare____event_number_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__debugger_interface____Compare____event_number_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____match_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mdb__debugger_interface____Unify____match_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mdb__debugger_interface____Compare____match_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__debugger_interface____Compare____match_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____pred_match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__debugger_interface____Unify____pred_match_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__debugger_interface____Compare____pred_match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__debugger_interface____Compare____pred_match_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__debugger_interface__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module mdb.debugger_interface.
