/*
** Automatically generated from `debugger_interface.m'
** by the Mercury compiler,
** version DEV
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

static void MR_CALL 
mdb__debugger_interface____Compare____match_1_0(
  MR_Word TypeInfo_for_T_57,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__debugger_interface____Unify____arity_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____arity_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "arity",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_call_number_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__debugger_interface____Unify____call_number_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____call_number_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "call_number",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_0 = {
  (MR_String) "hello_reply",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0 = {
  &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_trace_port_0 = {
  &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1,
  {
    (MR_TypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0 = {
  &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1,
  {
    (MR_TypeInfo) (&mdb__debugger_interface__list__ti_list_1univ__type_ctor_info_univ_0)
  }
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
  (MR_Integer) 12,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_2 = {
  (MR_String) "current_slots",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_3 = {
  (MR_String) "current_vars",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_4 = {
  (MR_String) "current_live_var_names",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_5[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_5 = {
  (MR_String) "current_nth_var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 5,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_6 = {
  (MR_String) "abort_prog",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 6,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_7 = {
  (MR_String) "no_trace",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_8 = {
  (MR_String) "retry",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 8,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_9 = {
  (MR_String) "stack",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_10 = {
  (MR_String) "nondet_stack",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 10,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_11 = {
  (MR_String) "stack_regs",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 9,
  (MR_Integer) 11,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_12[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_12 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 12,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_12,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_13[1] = {
  (MR_PseudoTypeInfo) (&mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_13 = {
  (MR_String) "query",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 13,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_13,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_14[1] = {
  (MR_PseudoTypeInfo) (&mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_14 = {
  (MR_String) "cc_query",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 14,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_14,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_15[1] = {
  (MR_PseudoTypeInfo) (&mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_15 = {
  (MR_String) "io_query",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 15,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_15,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_16[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_16 = {
  (MR_String) "mmc_options",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 16,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_16,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_17[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_17 = {
  (MR_String) "browse",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 17,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_17,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_18[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_18 = {
  (MR_String) "link_collect",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 18,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_18,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_19 = {
  (MR_String) "collect",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 10,
  (MR_Integer) 19,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_20 = {
  (MR_String) "current_grade",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 11,
  (MR_Integer) 20,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_21 = {
  (MR_String) "collect_arg_on",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 12,
  (MR_Integer) 21,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_22 = {
  (MR_String) "collect_arg_off",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 13,
  (MR_Integer) 22,
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
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_2,
    INT8_C(-1)
  },
  {
    (MR_Integer) 7,
    MR_SECTAG_REMOTE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_3,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
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
  (MR_String) "response_hello",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_1 = {
  (MR_String) "response_start",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_2 = {
  (MR_String) "response_forward_move_match_found",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_3 = {
  (MR_String) "response_forward_move_match_not_found",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 3,
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
  (MR_Integer) 13,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 4,
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

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_5 = {
  (MR_String) "response_current_slots_comp",
  (MR_Integer) 13,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 5,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_5,
  NULL,
  NULL,
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
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 6,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_7[1] = {
  (MR_PseudoTypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_7 = {
  (MR_String) "response_current_nth_var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 7,
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
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 8,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_9 = {
  (MR_String) "response_last_event",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_10 = {
  (MR_String) "response_browser_end",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 10,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_11 = {
  (MR_String) "response_mmc_option_ok",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 11,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_12 = {
  (MR_String) "response_ok",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 12,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_13[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_13 = {
  (MR_String) "response_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 13,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_13,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_14[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_14 = {
  (MR_String) "response_level",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 14,
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
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 15,
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
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 16,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_16,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_17[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_17 = {
  (MR_String) "response_def_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 17,
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
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 18,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_18,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_19 = {
  (MR_String) "response_pred",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 19,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_20 = {
  (MR_String) "response_func",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 9,
  (MR_Integer) 20,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_21[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_21 = {
  (MR_String) "response_det",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 9,
  (MR_Integer) 21,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_21,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_22 = {
  (MR_String) "response_end_stack",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 10,
  (MR_Integer) 22,
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
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 10,
  (MR_Integer) 23,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_23,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_24 = {
  (MR_String) "response_link_collect_succeeded",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 11,
  (MR_Integer) 24,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_25 = {
  (MR_String) "response_link_collect_failed",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 12,
  (MR_Integer) 25,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_26 = {
  (MR_String) "response_collect_linked",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 13,
  (MR_Integer) 26,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_27 = {
  (MR_String) "response_collect_not_linked",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 14,
  (MR_Integer) 27,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_28[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_28 = {
  (MR_String) "response_grade",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 11,
  (MR_Integer) 28,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_28,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_29 = {
  (MR_String) "response_execution_continuing",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 29,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_30 = {
  (MR_String) "response_execution_terminated",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 30,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_31 = {
  (MR_String) "response_collect_arg_on_ok",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 31,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_32 = {
  (MR_String) "response_collect_arg_off_ok",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 18,
  (MR_Integer) 32,
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
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_2,
    INT8_C(-1)
  },
  {
    (MR_Integer) 12,
    MR_SECTAG_REMOTE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_3,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__debugger_interface____Unify____depth_number_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____depth_number_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "depth_number",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_determinism_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__debugger_interface____Unify____determinism_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____determinism_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "determinism",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_event_number_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__debugger_interface____Unify____event_number_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____event_number_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "event_number",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_0 = {
  (MR_String) "nop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_1[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_1 = {
  (MR_String) "exact",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_2[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_2 = {
  (MR_String) "neg",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__debugger_interface__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_3[1] = {
  (MR_PseudoTypeInfo) (&mdb__debugger_interface__list__pti_list_1__pseudo_1)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_3 = {
  (MR_String) "list",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
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
  (MR_Integer) 2,
  (MR_Integer) 3,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_2,
    INT8_C(-1)
  },
  {
    (MR_Integer) 2,
    MR_SECTAG_REMOTE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_3,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
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
    (MR_TypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)
  }
};

static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_pred_match_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdb__debugger_interface__mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_0 = {
  (MR_String) "match_user_pred",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
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
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__debugger_interface__mdb__debugger_interface__field_types_pred_match_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_2 = {
  (MR_String) "match_any_pred",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_2,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
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

static void MR_CALL 
mdb__debugger_interface____Compare____match_1_0(
  MR_Word TypeInfo_for_T_57,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_55 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_56 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_55 == CastY_56);
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
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box Var_60 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box ArgY1_11 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));

                  mercury__builtin__compare_3_p_0(TypeInfo_for_T_57, HeadVar__1_1, Var_60, ArgY1_11);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box Var_64 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Box ArgY1_23 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0));

                  mercury__builtin__compare_3_p_0(TypeInfo_for_T_57, HeadVar__1_1, Var_64, ArgY1_23);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ArgY1_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          mercury__list____Compare____list_1_0(TypeInfo_for_T_57, HeadVar__1_1, Var_63, ArgY1_35);
                        }
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box Var_61 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
                MR_Box Var_62 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Box ArgY1_51 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1));
                          MR_Box ArgY2_53 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2));
                          MR_Word Var_54;

                          mercury__builtin__compare_3_p_0(TypeInfo_for_T_57, &Var_54, Var_62, ArgY1_51);
                          succeeded = (Var_54 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_54;
                          else
                            mercury__builtin__compare_3_p_0(TypeInfo_for_T_57, HeadVar__1_1, Var_61, ArgY2_53);
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

static void MR_CALL 
mdb__debugger_interface____Compare____event_number_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____event_number_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____determinism_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____determinism_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____depth_number_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____depth_number_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____debugger_response_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_146 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_147 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_146 == CastY_147);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer Var_4;
      MR_Integer Var_5;

      mdb__debugger_interface____Index____debugger_response_0_0(HeadVar__2_2, &Var_4);
      mdb__debugger_interface____Index____debugger_response_0_0(HeadVar__3_3, &Var_5);
      succeeded = (Var_4 < Var_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_4 > Var_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
        {
          MR_Word Var_6;

          switch (MR_tag((MR_Word) HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__2_2)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 11:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 12:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 13:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 14:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 15:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 16:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 17:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 18:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
                MR_Integer ArgY1_8;
                MR_Integer ArgX2_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
                MR_Integer ArgY2_10;
                MR_Integer ArgX3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
                MR_Integer ArgY3_12;
                MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))) >> (MR_Integer) 1)) & (MR_Integer) 15);
                MR_Word ArgY4_14;
                MR_Word ArgX5_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
                MR_Word ArgY5_16;
                MR_String ArgX6_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4))));
                MR_String ArgY6_18;
                MR_String ArgX7_19 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 5))));
                MR_String ArgY7_20;
                MR_String ArgX8_21 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 6))));
                MR_String ArgY8_22;
                MR_Integer ArgX9_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 7))));
                MR_Integer ArgY9_24;
                MR_Integer ArgX10_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 8))));
                MR_Integer ArgY10_26;
                MR_Integer ArgX11_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 9))));
                MR_Integer ArgY11_28;
                MR_String ArgX12_29 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 10))));
                MR_String ArgY12_30;
                MR_Integer ArgX13_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 11))));
                MR_Integer ArgY13_32;
                MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
                MR_Unsigned packed_args_1;
                MR_Word Var_33;

                succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
                if (succeeded)
                {
                  ArgY1_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  ArgY2_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  ArgY3_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                  packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3)));
                  ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))) >> (MR_Integer) 1)) & (MR_Integer) 15);
                  ArgY5_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
                  ArgY6_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 4))));
                  ArgY7_20 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 5))));
                  ArgY8_22 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 6))));
                  ArgY9_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 7))));
                  ArgY10_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 8))));
                  ArgY11_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 9))));
                  ArgY12_30 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 10))));
                  ArgY13_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 11))));
                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_33, ArgX1_7, ArgY1_8);
                  succeeded = (Var_33 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    Var_6 = Var_33;
                  else
                  {
                    MR_Word Var_34;

                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_34, ArgX2_9, ArgY2_10);
                    succeeded = (Var_34 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      Var_6 = Var_34;
                    else
                    {
                      MR_Word Var_35;

                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_35, ArgX3_11, ArgY3_12);
                      succeeded = (Var_35 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        Var_6 = Var_35;
                      else
                      {
                        MR_Word Var_36;
                        MR_Integer Var_201 = (MR_Integer) (ArgX4_13);
                        MR_Integer Var_202 = (MR_Integer) (ArgY4_14);

                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_36, Var_201, Var_202);
                        succeeded = (Var_36 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          Var_6 = Var_36;
                        else
                        {
                          MR_Word Var_37;
                          MR_Integer Var_203 = (MR_Integer) (ArgX5_15);
                          MR_Integer Var_204 = (MR_Integer) (ArgY5_16);

                          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_37, Var_203, Var_204);
                          succeeded = (Var_37 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            Var_6 = Var_37;
                          else
                          {
                            MR_Word Var_38;

                            mercury__private_builtin__builtin_compare_string_3_p_0(&Var_38, ArgX6_17, ArgY6_18);
                            succeeded = (Var_38 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              Var_6 = Var_38;
                            else
                            {
                              MR_Word Var_39;

                              mercury__private_builtin__builtin_compare_string_3_p_0(&Var_39, ArgX7_19, ArgY7_20);
                              succeeded = (Var_39 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                Var_6 = Var_39;
                              else
                              {
                                MR_Word Var_40;

                                mercury__private_builtin__builtin_compare_string_3_p_0(&Var_40, ArgX8_21, ArgY8_22);
                                succeeded = (Var_40 == (MR_Integer) 0);
                                succeeded = !(succeeded);
                                if (succeeded)
                                  Var_6 = Var_40;
                                else
                                {
                                  MR_Word Var_41;

                                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_41, ArgX9_23, ArgY9_24);
                                  succeeded = (Var_41 == (MR_Integer) 0);
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                    Var_6 = Var_41;
                                  else
                                  {
                                    MR_Word Var_42;

                                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_42, ArgX10_25, ArgY10_26);
                                    succeeded = (Var_42 == (MR_Integer) 0);
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                      Var_6 = Var_42;
                                    else
                                    {
                                      MR_Word Var_43;

                                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_43, ArgX11_27, ArgY11_28);
                                      succeeded = (Var_43 == (MR_Integer) 0);
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                        Var_6 = Var_43;
                                      else
                                      {
                                        MR_Word Var_44;

                                        mercury__private_builtin__builtin_compare_string_3_p_0(&Var_44, ArgX12_29, ArgY12_30);
                                        succeeded = (Var_44 == (MR_Integer) 0);
                                        succeeded = !(succeeded);
                                        if (succeeded)
                                          Var_6 = Var_44;
                                        else
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_6, ArgX13_31, ArgY13_32);
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
                MR_Integer ArgX1_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
                MR_Integer ArgY1_46;
                MR_Integer ArgX2_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
                MR_Integer ArgY2_48;
                MR_Integer ArgX3_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
                MR_Integer ArgY3_50;
                MR_Word ArgX4_51 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
                MR_Word ArgY4_52;
                MR_String ArgX5_53 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
                MR_String ArgY5_54;
                MR_String ArgX6_55 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
                MR_String ArgY6_56;
                MR_String ArgX7_57 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 6))));
                MR_String ArgY7_58;
                MR_String ArgX8_59 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 7))));
                MR_String ArgY8_60;
                MR_Integer ArgX9_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 8))));
                MR_Integer ArgY9_62;
                MR_Integer ArgX10_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 9))));
                MR_Integer ArgY10_64;
                MR_Integer ArgX11_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 10))));
                MR_Integer ArgY11_66;
                MR_String ArgX12_67 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 11))));
                MR_String ArgY12_68;
                MR_Integer ArgX13_69 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 12))));
                MR_Integer ArgY13_70;
                MR_Word Var_71;

                succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
                if (succeeded)
                {
                  ArgY1_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  ArgY2_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  ArgY3_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                  ArgY4_52 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3))));
                  ArgY5_54 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 4))));
                  ArgY6_56 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 5))));
                  ArgY7_58 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 6))));
                  ArgY8_60 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 7))));
                  ArgY9_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 8))));
                  ArgY10_64 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 9))));
                  ArgY11_66 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 10))));
                  ArgY12_68 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 11))));
                  ArgY13_70 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 12))));
                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_71, ArgX1_45, ArgY1_46);
                  succeeded = (Var_71 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    Var_6 = Var_71;
                  else
                  {
                    MR_Word Var_72;

                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_72, ArgX2_47, ArgY2_48);
                    succeeded = (Var_72 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      Var_6 = Var_72;
                    else
                    {
                      MR_Word Var_73;

                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_73, ArgX3_49, ArgY3_50);
                      succeeded = (Var_73 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        Var_6 = Var_73;
                      else
                      {
                        MR_Word Var_74;
                        MR_Integer Var_199 = (MR_Integer) (ArgX4_51);
                        MR_Integer Var_200 = (MR_Integer) (ArgY4_52);

                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_74, Var_199, Var_200);
                        succeeded = (Var_74 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          Var_6 = Var_74;
                        else
                        {
                          MR_Word Var_75;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&Var_75, ArgX5_53, ArgY5_54);
                          succeeded = (Var_75 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            Var_6 = Var_75;
                          else
                          {
                            MR_Word Var_76;

                            mercury__private_builtin__builtin_compare_string_3_p_0(&Var_76, ArgX6_55, ArgY6_56);
                            succeeded = (Var_76 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              Var_6 = Var_76;
                            else
                            {
                              MR_Word Var_77;

                              mercury__private_builtin__builtin_compare_string_3_p_0(&Var_77, ArgX7_57, ArgY7_58);
                              succeeded = (Var_77 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                Var_6 = Var_77;
                              else
                              {
                                MR_Word Var_78;

                                mercury__private_builtin__builtin_compare_string_3_p_0(&Var_78, ArgX8_59, ArgY8_60);
                                succeeded = (Var_78 == (MR_Integer) 0);
                                succeeded = !(succeeded);
                                if (succeeded)
                                  Var_6 = Var_78;
                                else
                                {
                                  MR_Word Var_79;

                                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_79, ArgX9_61, ArgY9_62);
                                  succeeded = (Var_79 == (MR_Integer) 0);
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                    Var_6 = Var_79;
                                  else
                                  {
                                    MR_Word Var_80;

                                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_80, ArgX10_63, ArgY10_64);
                                    succeeded = (Var_80 == (MR_Integer) 0);
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                      Var_6 = Var_80;
                                    else
                                    {
                                      MR_Word Var_81;

                                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_81, ArgX11_65, ArgY11_66);
                                      succeeded = (Var_81 == (MR_Integer) 0);
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                        Var_6 = Var_81;
                                      else
                                      {
                                        MR_Word Var_82;

                                        mercury__private_builtin__builtin_compare_string_3_p_0(&Var_82, ArgX12_67, ArgY12_68);
                                        succeeded = (Var_82 == (MR_Integer) 0);
                                        succeeded = !(succeeded);
                                        if (succeeded)
                                          Var_6 = Var_82;
                                        else
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_6, ArgX13_69, ArgY13_70);
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
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ArgX1_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_84;
                    MR_Word ArgX2_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_86;
                    MR_Word Var_87;
                    MR_Word TypeInfo_174_174;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      ArgY1_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      TypeInfo_174_174 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[0]);
                      mercury__builtin__compare_3_p_0(TypeInfo_174_174, &Var_87, ((MR_Box) (ArgX1_83)), ((MR_Box) (ArgY1_84)));
                      succeeded = (Var_87 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        Var_6 = Var_87;
                      else
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[5]), &Var_6, ((MR_Box) (ArgX2_85)), ((MR_Box) (ArgY2_86)));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ArgX1_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_89;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      ArgY1_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      mercury__univ____Compare____univ_0_0(&Var_6, ArgX1_88, ArgY1_89);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ArgX1_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_91;
                    MR_Word ArgX2_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_93;
                    MR_Word Var_94;
                    MR_Word TypeInfo_177_177;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 2)));
                    if (succeeded)
                    {
                      ArgY1_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      TypeInfo_177_177 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[5]);
                      mercury__builtin__compare_3_p_0(TypeInfo_177_177, &Var_94, ((MR_Box) (ArgX1_90)), ((MR_Box) (ArgY1_91)));
                      succeeded = (Var_94 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        Var_6 = Var_94;
                      else
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[5]), &Var_6, ((MR_Box) (ArgX2_92)), ((MR_Box) (ArgY2_93)));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_String ArgX1_95 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_String ArgY1_96;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 3)));
                    if (succeeded)
                    {
                      ArgY1_96 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_6, ArgX1_95, ArgY1_96);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Integer ArgX1_97 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_98;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 4)));
                    if (succeeded)
                    {
                      ArgY1_98 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_6, ArgX1_97, ArgY1_98);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_String ArgX1_99 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_String ArgY1_100;
                    MR_String ArgX2_101 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_String ArgY2_102;
                    MR_String ArgX3_103 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_String ArgY3_104;
                    MR_Integer ArgX4_105 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                    MR_Integer ArgY4_106;
                    MR_Integer ArgX5_107 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                    MR_Integer ArgY5_108;
                    MR_Word Var_109;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 5)));
                    if (succeeded)
                    {
                      ArgY1_100 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_102 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_104 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                      ArgY4_106 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                      ArgY5_108 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5))));
                      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_109, ArgX1_99, ArgY1_100);
                      succeeded = (Var_109 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        Var_6 = Var_109;
                      else
                      {
                        MR_Word Var_110;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&Var_110, ArgX2_101, ArgY2_102);
                        succeeded = (Var_110 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          Var_6 = Var_110;
                        else
                        {
                          MR_Word Var_111;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&Var_111, ArgX3_103, ArgY3_104);
                          succeeded = (Var_111 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            Var_6 = Var_111;
                          else
                          {
                            MR_Word Var_112;

                            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_112, ArgX4_105, ArgY4_106);
                            succeeded = (Var_112 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              Var_6 = Var_112;
                            else
                              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_6, ArgX5_107, ArgY5_108);
                          }
                        }
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_String ArgX1_113 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_String ArgY1_114;
                    MR_String ArgX2_115 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_String ArgY2_116;
                    MR_Integer ArgX3_117 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Integer ArgY3_118;
                    MR_Integer ArgX4_119 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                    MR_Integer ArgY4_120;
                    MR_Word Var_121;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 6)));
                    if (succeeded)
                    {
                      ArgY1_114 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_116 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_118 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                      ArgY4_120 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_121, ArgX1_113, ArgY1_114);
                      succeeded = (Var_121 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        Var_6 = Var_121;
                      else
                      {
                        MR_Word Var_122;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&Var_122, ArgX2_115, ArgY2_116);
                        succeeded = (Var_122 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          Var_6 = Var_122;
                        else
                        {
                          MR_Word Var_123;

                          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_123, ArgX3_117, ArgY3_118);
                          succeeded = (Var_123 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            Var_6 = Var_123;
                          else
                            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_6, ArgX4_119, ArgY4_120);
                        }
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_String ArgX1_124 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_String ArgY1_125;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 7)));
                    if (succeeded)
                    {
                      ArgY1_125 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_6, ArgX1_124, ArgY1_125);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    MR_Integer ArgX1_126 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_127;
                    MR_Integer ArgX2_128 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Integer ArgY2_129;
                    MR_Integer ArgX3_130 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Integer ArgY3_131;
                    MR_Word Var_132;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 8)));
                    if (succeeded)
                    {
                      ArgY1_127 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_129 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_131 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_132, ArgX1_126, ArgY1_127);
                      succeeded = (Var_132 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        Var_6 = Var_132;
                      else
                      {
                        MR_Word Var_133;

                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_133, ArgX2_128, ArgY2_129);
                        succeeded = (Var_133 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          Var_6 = Var_133;
                        else
                          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_6, ArgX3_130, ArgY3_131);
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    MR_String ArgX1_134 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_String ArgY1_135;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 9)));
                    if (succeeded)
                    {
                      ArgY1_135 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_6, ArgX1_134, ArgY1_135);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    MR_Integer ArgX1_136 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_137;
                    MR_Integer ArgX2_138 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Integer ArgY2_139;
                    MR_Integer ArgX3_140 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Integer ArgY3_141;
                    MR_Word Var_142;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 10)));
                    if (succeeded)
                    {
                      ArgY1_137 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_139 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_141 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_142, ArgX1_136, ArgY1_137);
                      succeeded = (Var_142 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        Var_6 = Var_142;
                      else
                      {
                        MR_Word Var_143;

                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_143, ArgX2_138, ArgY2_139);
                        succeeded = (Var_143 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          Var_6 = Var_143;
                        else
                          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_6, ArgX3_140, ArgY3_141);
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 11:
                  {
                    MR_String ArgX1_144 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_String ArgY1_145;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 11)));
                    if (succeeded)
                    {
                      ArgY1_145 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_6, ArgX1_144, ArgY1_145);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
              break;
          }
          if (succeeded)
            *HeadVar__1_1 = Var_6;
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
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
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
  {
    MR_bool succeeded;
    MR_Integer CastX_143 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_144 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_143 == CastY_144);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_8 == CastX_7);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_10 == CastX_9);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer CastX_73 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_74 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_74 == CastX_73);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer CastX_75 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_76 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_76 == CastX_75);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Integer CastX_77 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_78 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_78 == CastX_77);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Integer CastX_79 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_80 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_80 == CastX_79);
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Integer CastX_111 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_112 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_112 == CastX_111);
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Integer CastX_113 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_114 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_114 == CastX_113);
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Integer CastX_117 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_118 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_118 == CastX_117);
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Integer CastX_125 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_126 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_126 == CastX_125);
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Integer CastX_127 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_128 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_128 == CastX_127);
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Integer CastX_129 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_130 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_130 == CastX_129);
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Integer CastX_131 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_132 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_132 == CastX_131);
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Integer CastX_135 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_136 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_136 == CastX_135);
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Integer CastX_137 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_138 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_138 == CastX_137);
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Integer CastX_139 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_140 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_140 == CastX_139);
              }
              break;
            case (MR_Integer) 18:
              {
                MR_Integer CastX_141 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_142 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_142 == CastX_141);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ArgX1_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_12;
            MR_Integer ArgX2_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Integer ArgY2_14;
            MR_Integer ArgX3_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
            MR_Integer ArgY3_16;
            MR_Word ArgX4_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))) >> (MR_Integer) 1)) & (MR_Integer) 15);
            MR_Word ArgY4_18;
            MR_Word ArgX5_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
            MR_Word ArgY5_20;
            MR_String ArgX6_21 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 4))));
            MR_String ArgY6_22;
            MR_String ArgX7_23 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 5))));
            MR_String ArgY7_24;
            MR_String ArgX8_25 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 6))));
            MR_String ArgY8_26;
            MR_Integer ArgX9_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 7))));
            MR_Integer ArgY9_28;
            MR_Integer ArgX10_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 8))));
            MR_Integer ArgY10_30;
            MR_Integer ArgX11_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 9))));
            MR_Integer ArgY11_32;
            MR_String ArgX12_33 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 10))));
            MR_String ArgY12_34;
            MR_Integer ArgX13_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 11))));
            MR_Integer ArgY13_36;
            MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
            MR_Unsigned packed_args_1;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
              packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
              ArgY4_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))) >> (MR_Integer) 1)) & (MR_Integer) 15);
              ArgY5_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
              ArgY6_22 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4))));
              ArgY7_24 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 5))));
              ArgY8_26 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 6))));
              ArgY9_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 7))));
              ArgY10_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 8))));
              ArgY11_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 9))));
              ArgY12_34 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 10))));
              ArgY13_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 11))));
              succeeded = (ArgX1_11 == ArgY1_12);
              if (succeeded)
              {
                succeeded = (ArgX2_13 == ArgY2_14);
                if (succeeded)
                {
                  succeeded = (ArgX3_15 == ArgY3_16);
                  if (succeeded)
                  {
                    succeeded = (ArgX4_17 == ArgY4_18);
                    if (succeeded)
                    {
                      succeeded = (ArgX5_19 == ArgY5_20);
                      if (succeeded)
                      {
                        succeeded = (strcmp(ArgX6_21, ArgY6_22) == 0);
                        if (succeeded)
                        {
                          succeeded = (strcmp(ArgX7_23, ArgY7_24) == 0);
                          if (succeeded)
                          {
                            succeeded = (strcmp(ArgX8_25, ArgY8_26) == 0);
                            if (succeeded)
                            {
                              succeeded = (ArgX9_27 == ArgY9_28);
                              if (succeeded)
                              {
                                succeeded = (ArgX10_29 == ArgY10_30);
                                if (succeeded)
                                {
                                  succeeded = (ArgX11_31 == ArgY11_32);
                                  if (succeeded)
                                  {
                                    succeeded = (strcmp(ArgX12_33, ArgY12_34) == 0);
                                    if (succeeded)
                                      succeeded = (ArgX13_35 == ArgY13_36);
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
            MR_Integer ArgX1_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_38;
            MR_Integer ArgX2_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Integer ArgY2_40;
            MR_Integer ArgX3_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
            MR_Integer ArgY3_42;
            MR_Word ArgX4_43 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word ArgY4_44;
            MR_String ArgX5_45 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 4))));
            MR_String ArgY5_46;
            MR_String ArgX6_47 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 5))));
            MR_String ArgY6_48;
            MR_String ArgX7_49 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 6))));
            MR_String ArgY7_50;
            MR_String ArgX8_51 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 7))));
            MR_String ArgY8_52;
            MR_Integer ArgX9_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 8))));
            MR_Integer ArgY9_54;
            MR_Integer ArgX10_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 9))));
            MR_Integer ArgY10_56;
            MR_Integer ArgX11_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 10))));
            MR_Integer ArgY11_58;
            MR_String ArgX12_59 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 11))));
            MR_String ArgY12_60;
            MR_Integer ArgX13_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 12))));
            MR_Integer ArgY13_62;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
              ArgY4_44 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
              ArgY5_46 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
              ArgY6_48 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
              ArgY7_50 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 6))));
              ArgY8_52 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 7))));
              ArgY9_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 8))));
              ArgY10_56 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 9))));
              ArgY11_58 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 10))));
              ArgY12_60 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 11))));
              ArgY13_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 12))));
              succeeded = (ArgX1_37 == ArgY1_38);
              if (succeeded)
              {
                succeeded = (ArgX2_39 == ArgY2_40);
                if (succeeded)
                {
                  succeeded = (ArgX3_41 == ArgY3_42);
                  if (succeeded)
                  {
                    succeeded = (ArgX4_43 == ArgY4_44);
                    if (succeeded)
                    {
                      succeeded = (strcmp(ArgX5_45, ArgY5_46) == 0);
                      if (succeeded)
                      {
                        succeeded = (strcmp(ArgX6_47, ArgY6_48) == 0);
                        if (succeeded)
                        {
                          succeeded = (strcmp(ArgX7_49, ArgY7_50) == 0);
                          if (succeeded)
                          {
                            succeeded = (strcmp(ArgX8_51, ArgY8_52) == 0);
                            if (succeeded)
                            {
                              succeeded = (ArgX9_53 == ArgY9_54);
                              if (succeeded)
                              {
                                succeeded = (ArgX10_55 == ArgY10_56);
                                if (succeeded)
                                {
                                  succeeded = (ArgX11_57 == ArgY11_58);
                                  if (succeeded)
                                  {
                                    succeeded = (strcmp(ArgX12_59, ArgY12_60) == 0);
                                    if (succeeded)
                                      succeeded = (ArgX13_61 == ArgY13_62);
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
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word TypeInfo_148_148;
                MR_Word TypeInfo_149_149;
                MR_Word ArgX1_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_64;
                MR_Word ArgX2_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_66;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  TypeInfo_148_148 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_148_148, ((MR_Box) (ArgX1_63)), ((MR_Box) (ArgY1_64)));
                  if (succeeded)
                  {
                    TypeInfo_149_149 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[5]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_149_149, ((MR_Box) (ArgX2_65)), ((MR_Box) (ArgY2_66)));
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_68;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = mercury__univ____Unify____univ_0_0(ArgX1_67, ArgY1_68);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypeInfo_145_145;
                MR_Word TypeInfo_146_146;
                MR_Word ArgX1_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_70;
                MR_Word ArgX2_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_72;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  TypeInfo_145_145 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[5]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_145_145, ((MR_Box) (ArgX1_69)), ((MR_Box) (ArgY1_70)));
                  if (succeeded)
                  {
                    TypeInfo_146_146 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[5]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_146_146, ((MR_Box) (ArgX2_71)), ((MR_Box) (ArgY2_72)));
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String ArgX1_81 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_82;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_82 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_81, ArgY1_82) == 0);
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer ArgX1_83 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_84;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  ArgY1_84 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (ArgX1_83 == ArgY1_84);
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_String ArgX1_85 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_86;
                MR_String ArgX2_87 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_String ArgY2_88;
                MR_String ArgX3_89 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_String ArgY3_90;
                MR_Integer ArgX4_91 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Integer ArgY4_92;
                MR_Integer ArgX5_93 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
                MR_Integer ArgY5_94;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 5)));
                if (succeeded)
                {
                  ArgY1_86 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_88 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_90 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_92 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  ArgY5_94 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                  succeeded = (strcmp(ArgX1_85, ArgY1_86) == 0);
                  if (succeeded)
                  {
                    succeeded = (strcmp(ArgX2_87, ArgY2_88) == 0);
                    if (succeeded)
                    {
                      succeeded = (strcmp(ArgX3_89, ArgY3_90) == 0);
                      if (succeeded)
                      {
                        succeeded = (ArgX4_91 == ArgY4_92);
                        if (succeeded)
                          succeeded = (ArgX5_93 == ArgY5_94);
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_String ArgX1_95 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_96;
                MR_String ArgX2_97 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_String ArgY2_98;
                MR_Integer ArgX3_99 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Integer ArgY3_100;
                MR_Integer ArgX4_101 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Integer ArgY4_102;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  ArgY1_96 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_98 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_100 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_102 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  succeeded = (strcmp(ArgX1_95, ArgY1_96) == 0);
                  if (succeeded)
                  {
                    succeeded = (strcmp(ArgX2_97, ArgY2_98) == 0);
                    if (succeeded)
                    {
                      succeeded = (ArgX3_99 == ArgY3_100);
                      if (succeeded)
                        succeeded = (ArgX4_101 == ArgY4_102);
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_String ArgX1_103 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_104;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 7)));
                if (succeeded)
                {
                  ArgY1_104 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_103, ArgY1_104) == 0);
                }
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Integer ArgX1_105 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_106;
                MR_Integer ArgX2_107 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Integer ArgY2_108;
                MR_Integer ArgX3_109 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Integer ArgY3_110;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 8)));
                if (succeeded)
                {
                  ArgY1_106 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_108 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_110 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  succeeded = (ArgX1_105 == ArgY1_106);
                  if (succeeded)
                  {
                    succeeded = (ArgX2_107 == ArgY2_108);
                    if (succeeded)
                      succeeded = (ArgX3_109 == ArgY3_110);
                  }
                }
              }
              break;
            case (MR_Integer) 9:
              {
                MR_String ArgX1_115 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_116;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 9)));
                if (succeeded)
                {
                  ArgY1_116 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_115, ArgY1_116) == 0);
                }
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Integer ArgX1_119 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_120;
                MR_Integer ArgX2_121 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Integer ArgY2_122;
                MR_Integer ArgX3_123 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Integer ArgY3_124;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 10)));
                if (succeeded)
                {
                  ArgY1_120 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_122 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_124 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  succeeded = (ArgX1_119 == ArgY1_120);
                  if (succeeded)
                  {
                    succeeded = (ArgX2_121 == ArgY2_122);
                    if (succeeded)
                      succeeded = (ArgX3_123 == ArgY3_124);
                  }
                }
              }
              break;
            case (MR_Integer) 11:
              {
                MR_String ArgX1_133 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_134;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 11)));
                if (succeeded)
                {
                  ArgY1_134 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_133, ArgY1_134) == 0);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____debugger_request_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_58 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_59 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_58 == CastY_59);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer Var_4;
      MR_Integer Var_5;

      mdb__debugger_interface____Index____debugger_request_0_0(HeadVar__2_2, &Var_4);
      mdb__debugger_interface____Index____debugger_request_0_0(HeadVar__3_3, &Var_5);
      succeeded = (Var_4 < Var_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_4 > Var_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
        {
          MR_Word Var_6;

          switch (MR_tag((MR_Word) HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__2_2)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 11:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 12:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 13:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
                MR_Word ArgY1_8;
                MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
                MR_Word ArgY2_10;
                MR_Word ArgX3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word ArgY3_12;
                MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
                MR_Word ArgY4_14;
                MR_Word ArgX5_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4))));
                MR_Word ArgY5_16;
                MR_Word ArgX6_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 5))));
                MR_Word ArgY6_18;
                MR_Word ArgX7_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 6))));
                MR_Word ArgY7_20;
                MR_Word ArgX8_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 7))));
                MR_Word ArgY8_22;
                MR_Word ArgX9_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 8))));
                MR_Word ArgY9_24;
                MR_Word ArgX10_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 9))));
                MR_Word ArgY10_26;
                MR_Word ArgX11_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 10))));
                MR_Word ArgY11_28;
                MR_Word ArgX12_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 11))));
                MR_Word ArgY12_30;
                MR_Word Var_31;
                MR_Word TypeInfo_60_60;

                succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
                if (succeeded)
                {
                  ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  ArgY3_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                  ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))));
                  ArgY5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 4))));
                  ArgY6_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 5))));
                  ArgY7_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 6))));
                  ArgY8_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 7))));
                  ArgY9_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 8))));
                  ArgY10_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 9))));
                  ArgY11_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 10))));
                  ArgY12_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 11))));
                  TypeInfo_60_60 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[1]);
                  mercury__builtin__compare_3_p_0(TypeInfo_60_60, &Var_31, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
                  succeeded = (Var_31 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    Var_6 = Var_31;
                  else
                  {
                    MR_Word Var_32;

                    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[1]), &Var_32, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
                    succeeded = (Var_32 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      Var_6 = Var_32;
                    else
                    {
                      MR_Word Var_33;

                      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[1]), &Var_33, ((MR_Box) (ArgX3_11)), ((MR_Box) (ArgY3_12)));
                      succeeded = (Var_33 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        Var_6 = Var_33;
                      else
                      {
                        MR_Word Var_34;

                        mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[2]), &Var_34, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
                        succeeded = (Var_34 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          Var_6 = Var_34;
                        else
                        {
                          MR_Word Var_35;

                          mdb__debugger_interface____Compare____pred_match_0_0(&Var_35, ArgX5_15, ArgY5_16);
                          succeeded = (Var_35 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            Var_6 = Var_35;
                          else
                          {
                            MR_Word Var_36;

                            mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[3]), &Var_36, ((MR_Box) (ArgX6_17)), ((MR_Box) (ArgY6_18)));
                            succeeded = (Var_36 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              Var_6 = Var_36;
                            else
                            {
                              MR_Word Var_37;

                              mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[3]), &Var_37, ((MR_Box) (ArgX7_19)), ((MR_Box) (ArgY7_20)));
                              succeeded = (Var_37 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                Var_6 = Var_37;
                              else
                              {
                                MR_Word Var_38;

                                mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[1]), &Var_38, ((MR_Box) (ArgX8_21)), ((MR_Box) (ArgY8_22)));
                                succeeded = (Var_38 == (MR_Integer) 0);
                                succeeded = !(succeeded);
                                if (succeeded)
                                  Var_6 = Var_38;
                                else
                                {
                                  MR_Word Var_39;

                                  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[1]), &Var_39, ((MR_Box) (ArgX9_23)), ((MR_Box) (ArgY9_24)));
                                  succeeded = (Var_39 == (MR_Integer) 0);
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                    Var_6 = Var_39;
                                  else
                                  {
                                    MR_Word Var_40;

                                    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[1]), &Var_40, ((MR_Box) (ArgX10_25)), ((MR_Box) (ArgY10_26)));
                                    succeeded = (Var_40 == (MR_Integer) 0);
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                      Var_6 = Var_40;
                                    else
                                    {
                                      MR_Word Var_41;

                                      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[4]), &Var_41, ((MR_Box) (ArgX11_27)), ((MR_Box) (ArgY11_28)));
                                      succeeded = (Var_41 == (MR_Integer) 0);
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                        Var_6 = Var_41;
                                      else
                                      {
                                        mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[3]), &Var_6, ((MR_Box) (ArgX12_29)), ((MR_Box) (ArgY12_30)));
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
                MR_Integer ArgX1_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
                MR_Integer ArgY1_43;

                succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
                if (succeeded)
                {
                  ArgY1_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_6, ArgX1_42, ArgY1_43);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_String ArgX1_44 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_String ArgY1_45;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      ArgY1_45 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_6, ArgX1_44, ArgY1_45);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word TypeInfo_74_74;
                    MR_Word ArgX1_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_47;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      ArgY1_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      TypeInfo_74_74 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[5]);
                      mercury__builtin__compare_3_p_0(TypeInfo_74_74, &Var_6, ((MR_Box) (ArgX1_46)), ((MR_Box) (ArgY1_47)));
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word TypeInfo_75_75;
                    MR_Word ArgX1_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_49;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 2)));
                    if (succeeded)
                    {
                      ArgY1_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      TypeInfo_75_75 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[5]);
                      mercury__builtin__compare_3_p_0(TypeInfo_75_75, &Var_6, ((MR_Box) (ArgX1_48)), ((MR_Box) (ArgY1_49)));
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word TypeInfo_76_76;
                    MR_Word ArgX1_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_51;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 3)));
                    if (succeeded)
                    {
                      ArgY1_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      TypeInfo_76_76 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[5]);
                      mercury__builtin__compare_3_p_0(TypeInfo_76_76, &Var_6, ((MR_Box) (ArgX1_50)), ((MR_Box) (ArgY1_51)));
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_String ArgX1_52 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_String ArgY1_53;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 4)));
                    if (succeeded)
                    {
                      ArgY1_53 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_6, ArgX1_52, ArgY1_53);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_String ArgX1_54 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_String ArgY1_55;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 5)));
                    if (succeeded)
                    {
                      ArgY1_55 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_6, ArgX1_54, ArgY1_55);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_String ArgX1_56 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_String ArgY1_57;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 6)));
                    if (succeeded)
                    {
                      ArgY1_57 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_6, ArgX1_56, ArgY1_57);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
              break;
          }
          if (succeeded)
            *HeadVar__1_1 = Var_6;
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
mdb__debugger_interface____Compare____pred_match_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_30 == CastY_31);
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
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word Var_8;

                  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[6]), &Var_8, ((MR_Box) (Var_39)), ((MR_Box) (ArgY1_5)));
                  succeeded = (Var_8 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_8;
                  else
                  {
                    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_38)), ((MR_Box) (ArgY2_7)));
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word Var_23;

                  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[3]), &Var_23, ((MR_Box) (Var_37)), ((MR_Box) (ArgY1_20)));
                  succeeded = (Var_23 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_23;
                  else
                  {
                    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__debugger_interface_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_36)), ((MR_Box) (ArgY2_22)));
                  }
                }
                break;
            }
          }
          break;
      }
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
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
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
  {
    MR_bool succeeded;
    MR_Integer CastX_71 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_72 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_71 == CastY_72);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_29 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_30 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_30 == CastX_29);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_31 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_32 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_32 == CastX_31);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer CastX_33 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_34 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_34 == CastX_33);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer CastX_37 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_38 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_38 == CastX_37);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer CastX_39 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_40 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_40 == CastX_39);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Integer CastX_41 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_42 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_42 == CastX_41);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Integer CastX_43 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_44 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_44 == CastX_43);
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Integer CastX_45 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_46 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_46 == CastX_45);
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Integer CastX_47 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_48 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_48 == CastX_47);
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Integer CastX_63 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_64 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_64 == CastX_63);
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Integer CastX_65 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_66 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_66 == CastX_65);
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Integer CastX_67 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_68 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_68 == CastX_67);
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Integer CastX_69 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_70 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_70 == CastX_69);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtorInfo_74_74;
            MR_Word TypeCtorInfo_75_75;
            MR_Word TypeCtorInfo_76_76;
            MR_Word TypeCtorInfo_77_77;
            MR_Word TypeCtorInfo_78_78;
            MR_Word TypeCtorInfo_79_79;
            MR_Word TypeCtorInfo_80_80;
            MR_Word TypeCtorInfo_81_81;
            MR_Word TypeCtorInfo_82_82;
            MR_Word TypeInfo_83_83;
            MR_Word TypeCtorInfo_84_84;
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;
            MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_8;
            MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_10;
            MR_Word ArgX4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word ArgY4_12;
            MR_Word ArgX5_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 4))));
            MR_Word ArgY5_14;
            MR_Word ArgX6_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 5))));
            MR_Word ArgY6_16;
            MR_Word ArgX7_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 6))));
            MR_Word ArgY7_18;
            MR_Word ArgX8_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 7))));
            MR_Word ArgY8_20;
            MR_Word ArgX9_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 8))));
            MR_Word ArgY9_22;
            MR_Word ArgX10_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 9))));
            MR_Word ArgY10_24;
            MR_Word ArgX11_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 10))));
            MR_Word ArgY11_26;
            MR_Word ArgX12_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 11))));
            MR_Word ArgY12_28;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
              ArgY4_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
              ArgY5_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4))));
              ArgY6_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 5))));
              ArgY7_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 6))));
              ArgY8_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 7))));
              ArgY9_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 8))));
              ArgY10_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 9))));
              ArgY11_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 10))));
              ArgY12_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 11))));
              TypeCtorInfo_74_74 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
              succeeded = mdb__debugger_interface____Unify____match_1_0(TypeCtorInfo_74_74, ArgX1_5, ArgY1_6);
              if (succeeded)
              {
                TypeCtorInfo_75_75 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
                succeeded = mdb__debugger_interface____Unify____match_1_0(TypeCtorInfo_75_75, ArgX2_7, ArgY2_8);
                if (succeeded)
                {
                  TypeCtorInfo_76_76 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
                  succeeded = mdb__debugger_interface____Unify____match_1_0(TypeCtorInfo_76_76, ArgX3_9, ArgY3_10);
                  if (succeeded)
                  {
                    TypeCtorInfo_77_77 = (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0);
                    succeeded = mdb__debugger_interface____Unify____match_1_0(TypeCtorInfo_77_77, ArgX4_11, ArgY4_12);
                    if (succeeded)
                    {
                      succeeded = mdb__debugger_interface____Unify____pred_match_0_0(ArgX5_13, ArgY5_14);
                      if (succeeded)
                      {
                        TypeCtorInfo_78_78 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
                        succeeded = mdb__debugger_interface____Unify____match_1_0(TypeCtorInfo_78_78, ArgX6_15, ArgY6_16);
                        if (succeeded)
                        {
                          TypeCtorInfo_79_79 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
                          succeeded = mdb__debugger_interface____Unify____match_1_0(TypeCtorInfo_79_79, ArgX7_17, ArgY7_18);
                          if (succeeded)
                          {
                            TypeCtorInfo_80_80 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
                            succeeded = mdb__debugger_interface____Unify____match_1_0(TypeCtorInfo_80_80, ArgX8_19, ArgY8_20);
                            if (succeeded)
                            {
                              TypeCtorInfo_81_81 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
                              succeeded = mdb__debugger_interface____Unify____match_1_0(TypeCtorInfo_81_81, ArgX9_21, ArgY9_22);
                              if (succeeded)
                              {
                                TypeCtorInfo_82_82 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
                                succeeded = mdb__debugger_interface____Unify____match_1_0(TypeCtorInfo_82_82, ArgX10_23, ArgY10_24);
                                if (succeeded)
                                {
                                  TypeInfo_83_83 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[0]);
                                  succeeded = mdb__debugger_interface____Unify____match_1_0(TypeInfo_83_83, ArgX11_25, ArgY11_26);
                                  if (succeeded)
                                  {
                                    TypeCtorInfo_84_84 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
                                    succeeded = mdb__debugger_interface____Unify____match_1_0(TypeCtorInfo_84_84, ArgX12_27, ArgY12_28);
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
            MR_Integer ArgX1_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_36;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_35 == ArgY1_36);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String ArgX1_49 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_50;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_50 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_49, ArgY1_50) == 0);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeInfo_86_86;
                MR_Word ArgX1_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_52;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  TypeInfo_86_86 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[5]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_86_86, ((MR_Box) (ArgX1_51)), ((MR_Box) (ArgY1_52)));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypeInfo_73_73;
                MR_Word ArgX1_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_54;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  TypeInfo_73_73 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[5]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_73_73, ((MR_Box) (ArgX1_53)), ((MR_Box) (ArgY1_54)));
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word TypeInfo_85_85;
                MR_Word ArgX1_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_56;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  TypeInfo_85_85 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[5]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_85_85, ((MR_Box) (ArgX1_55)), ((MR_Box) (ArgY1_56)));
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_String ArgX1_57 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_58;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  ArgY1_58 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_57, ArgY1_58) == 0);
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_String ArgX1_59 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_60;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 5)));
                if (succeeded)
                {
                  ArgY1_60 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_59, ArgY1_60) == 0);
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_String ArgX1_61 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_62;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  ArgY1_62 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_61, ArgY1_62) == 0);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____pred_match_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
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
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
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
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____match_1_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_4 == CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_17, ArgX1_5, ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box ArgX1_7 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_17, ArgX1_7, ArgY1_8);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_10;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_17, ArgX1_9, ArgY1_10);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box ArgX1_11 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1));
                MR_Box ArgY1_12;
                MR_Box ArgX2_13 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2));
                MR_Box ArgY2_14;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_12 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
                  ArgY2_14 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_17, ArgX1_11, ArgY1_12);
                  if (succeeded)
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_17, ArgX2_13, ArgY2_14);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____call_number_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____call_number_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____arity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____arity_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface__get_variable_name_2_p_0(
  MR_Word DebuggerRequest_3,
  MR_String * Options_4)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) DebuggerRequest_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), DebuggerRequest_3, (MR_Integer) 0))) == (MR_Integer) 5)));
    MR_String OptionsPrime_5;

    if (succeeded)
    {
      OptionsPrime_5 = ((MR_String) ((MR_hl_field(MR_mktag(3), DebuggerRequest_3, (MR_Integer) 1))));
      *Options_4 = OptionsPrime_5;
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
  MR_String * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_String) "";
}

static void MR_CALL 
mdb__debugger_interface__get_object_file_name_2_p_0(
  MR_Word DebuggerRequest_3,
  MR_String * ObjectFileName_4)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) DebuggerRequest_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), DebuggerRequest_3, (MR_Integer) 0))) == (MR_Integer) 6)));
    MR_String ObjectFileNamePrime_5;

    if (succeeded)
    {
      ObjectFileNamePrime_5 = ((MR_String) ((MR_hl_field(MR_mktag(3), DebuggerRequest_3, (MR_Integer) 1))));
      *ObjectFileName_4 = ObjectFileNamePrime_5;
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
  MR_Word DebuggerRequest_3,
  MR_String * Options_4)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) DebuggerRequest_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), DebuggerRequest_3, (MR_Integer) 0))) == (MR_Integer) 4)));
    MR_String OptionsPrim_5;

    if (succeeded)
    {
      OptionsPrim_5 = ((MR_String) ((MR_hl_field(MR_mktag(3), DebuggerRequest_3, (MR_Integer) 1))));
      *Options_4 = OptionsPrim_5;
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
  MR_Word DebuggerRequest_4,
  MR_Integer * ListLength_5,
  MR_Word * ModulesList_6)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) DebuggerRequest_4)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), DebuggerRequest_4, (MR_Integer) 0))) == (MR_Integer) 1)));
    MR_Word List_7;

    if (succeeded)
    {
      List_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DebuggerRequest_4, (MR_Integer) 1))));
      *ModulesList_6 = List_7;
    }
    else
    {
      MR_Word List_12;

      succeeded = ((((MR_tag((MR_Word) DebuggerRequest_4)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), DebuggerRequest_4, (MR_Integer) 0))) == (MR_Integer) 2)));
      if (succeeded)
      {
        List_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DebuggerRequest_4, (MR_Integer) 1))));
        *ModulesList_6 = List_12;
      }
      else
      {
        MR_Word List_11;

        succeeded = ((((MR_tag((MR_Word) DebuggerRequest_4)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), DebuggerRequest_4, (MR_Integer) 0))) == (MR_Integer) 3)));
        if (succeeded)
        {
          List_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DebuggerRequest_4, (MR_Integer) 1))));
          *ModulesList_6 = List_11;
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
    mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), *ModulesList_6, ListLength_5);
  }
}

static void MR_CALL 
mdb__debugger_interface__read_request_from_socket_5_p_0(
  MR_Word SocketStream_6,
  MR_Word * Request_7,
  MR_Integer * RequestType_8)
{
  {
    MR_Word MaybeRequest_10;

    mercury__io__read_4_p_0((MR_Word) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_request_0), SocketStream_6, &MaybeRequest_10);
    switch (MR_tag((MR_Word) MaybeRequest_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Request_7 = (MR_Word) (MR_mkword(MR_mktag(3), &mdb__debugger_interface_scalar_common_1[7]));
          *RequestType_8 = (MR_Integer) 6;
        }
        break;
      case (MR_Integer) 1:
        {
          *Request_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRequest_10, (MR_Integer) 0))));
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
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), *Request_7, (MR_Integer) 0)))) {
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
          MR_String ErrorMsg_12 = ((MR_String) ((MR_hl_field(MR_mktag(2), MaybeRequest_10, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Request_7 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ErrorMsg_12));
          }
          *RequestType_8 = (MR_Integer) 6;
        }
        break;
    }
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
      MatchEventNumber_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebuggerRequest_28, (MR_Integer) 0))));
      MatchCallNumber_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebuggerRequest_28, (MR_Integer) 1))));
      MatchDepthNumber_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebuggerRequest_28, (MR_Integer) 2))));
      MatchPort_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebuggerRequest_28, (MR_Integer) 3))));
      CompilerGeneratedPredMatch_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebuggerRequest_28, (MR_Integer) 4))));
      MatchDefModuleName_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebuggerRequest_28, (MR_Integer) 5))));
      MatchPredName_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebuggerRequest_28, (MR_Integer) 6))));
      MatchArity_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebuggerRequest_28, (MR_Integer) 7))));
      MatchModeNum_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebuggerRequest_28, (MR_Integer) 8))));
      MatchDeterminism_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebuggerRequest_28, (MR_Integer) 9))));
      MatchArgs_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebuggerRequest_28, (MR_Integer) 10))));
      MatchPath_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebuggerRequest_28, (MR_Integer) 11))));
      {
        MR_Word TypeCtorInfo_47_47;
        MR_Word TypeCtorInfo_49_49;
        MR_Word TypeInfo_50_50;
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
              TypeCtorInfo_47_47 = (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0);
              succeeded = mdb__debugger_interface__match_2_p_0(TypeCtorInfo_47_47, MatchPort_32, ((MR_Box) (Port_18)));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) CompilerGeneratedPredMatch_33)) == (MR_Integer) 2);
                if (succeeded)
                {
                  MatchNameType_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CompilerGeneratedPredMatch_33, (MR_Integer) 0))));
                  MatchModuleType_42 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CompilerGeneratedPredMatch_33, (MR_Integer) 1))));
                  succeeded = mdb__debugger_interface__match_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MatchNameType_41, ((MR_Box) (NameType_19)));
                  if (succeeded)
                    succeeded = mdb__debugger_interface__match_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MatchModuleType_42, ((MR_Box) (ModuleType_20)));
                }
                else
                  succeeded = (CompilerGeneratedPredMatch_33 == (MR_Word) ((MR_Unsigned) 0U));
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
      mercury__require__unexpected_3_p_0((MR_String) "mdb.debugger_interface", (MR_String) "predicate \140mdb.debugger_interface.found_match_comp\'/14", (MR_String) "forward_move expected");
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
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
      MatchEventNumber_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebuggerRequest_28, (MR_Integer) 0))));
      MatchCallNumber_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebuggerRequest_28, (MR_Integer) 1))));
      MatchDepthNumber_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebuggerRequest_28, (MR_Integer) 2))));
      MatchPort_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebuggerRequest_28, (MR_Integer) 3))));
      UserPredMatch_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebuggerRequest_28, (MR_Integer) 4))));
      MatchDefModuleName_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebuggerRequest_28, (MR_Integer) 5))));
      MatchPredName_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebuggerRequest_28, (MR_Integer) 6))));
      MatchArity_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebuggerRequest_28, (MR_Integer) 7))));
      MatchModeNum_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebuggerRequest_28, (MR_Integer) 8))));
      MatchDeterminism_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebuggerRequest_28, (MR_Integer) 9))));
      MatchArgs_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebuggerRequest_28, (MR_Integer) 10))));
      MatchPath_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebuggerRequest_28, (MR_Integer) 11))));
      {
        MR_Word TypeCtorInfo_47_47;
        MR_Word TypeCtorInfo_50_50;
        MR_Word TypeInfo_51_51;
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
              TypeCtorInfo_47_47 = (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0);
              succeeded = mdb__debugger_interface__match_2_p_0(TypeCtorInfo_47_47, MatchPort_32, ((MR_Box) (Port_18)));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) UserPredMatch_33)) == (MR_Integer) 1);
                if (succeeded)
                {
                  MatchPredOrFunc_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UserPredMatch_33, (MR_Integer) 0))));
                  MatchDeclModuleName_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UserPredMatch_33, (MR_Integer) 1))));
                  {
                    MR_Word TypeCtorInfo_49_49;

                    succeeded = mdb__debugger_interface__match_2_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0), MatchPredOrFunc_41, ((MR_Box) (PredOrFunc_19)));
                    if (succeeded)
                    {
                      TypeCtorInfo_49_49 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
                      succeeded = mdb__debugger_interface__match_2_p_0(TypeCtorInfo_49_49, MatchDeclModuleName_42, ((MR_Box) (DeclModuleName_20)));
                    }
                  }
                }
                else
                  succeeded = (UserPredMatch_33 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  TypeCtorInfo_50_50 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
                  succeeded = mdb__debugger_interface__match_2_p_0(TypeCtorInfo_50_50, MatchDefModuleName_34, ((MR_Box) (DefModuleName_21)));
                  if (succeeded)
                  {
                    succeeded = mdb__debugger_interface__match_2_p_0(TypeCtorInfo_50_50, MatchPredName_35, ((MR_Box) (PredName_22)));
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
                            TypeInfo_51_51 = (MR_Word) (&mdb__debugger_interface_scalar_common_1[0]);
                            succeeded = mdb__debugger_interface__match_2_p_0(TypeInfo_51_51, MatchArgs_39, ((MR_Box) (Args_26)));
                            if (succeeded)
                              succeeded = mdb__debugger_interface__match_2_p_0(TypeCtorInfo_50_50, MatchPath_40, ((MR_Box) (Path_27)));
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
      mercury__require__unexpected_3_p_0((MR_String) "mdb.debugger_interface", (MR_String) "predicate \140mdb.debugger_interface.found_match_user\'/14", (MR_String) "forward_move expected");
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface__match_2_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 1:
        {
          MR_Box X_4 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));

          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_14, HeadVar__2_2, X_4);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box X_5 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));

          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_14, X_5, HeadVar__2_2);
          succeeded = !(succeeded);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word L_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_14, HeadVar__2_2, L_7);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box Low_9 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1));
              MR_Box High_10 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2));
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
}

static MR_Integer MR_CALL 
mdb__debugger_interface__get_var_number_1_f_0(
  MR_Word DebuggerRequest_3)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) DebuggerRequest_3)) == (MR_Integer) 2);
    MR_Integer VarNumber_4;
    MR_Integer Var_5;

    if (succeeded)
    {
      Var_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), DebuggerRequest_3, (MR_Integer) 0))));
      VarNumber_4 = Var_5;
    }
    else
    {
      mercury__require__unexpected_3_p_0((MR_String) "mdb.debugger_interface", (MR_String) "function \140mdb.debugger_interface.get_var_number\'/1", (MR_String) "not a current_nth_var request");
    }
    return VarNumber_4;
  }
}

static void MR_CALL 
mdb__debugger_interface__output_current_live_var_names_5_p_0(
  MR_Word LiveVarNameList_6,
  MR_Word LiveVarTypeList_7,
  MR_Word OutputStream_8)
{
  {
    MR_Word Response_10;

    {
      Response_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Response_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Response_10, 1) = ((MR_Box) (LiveVarNameList_6));
      MR_hl_field(MR_mktag(3), Response_10, 2) = ((MR_Box) (LiveVarTypeList_7));
    }
    mercury__io__write_4_p_0((MR_Word) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0), OutputStream_8, ((MR_Box) (Response_10)));
    mercury__io__print_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OutputStream_8, ((MR_Box) ((MR_String) ".\n")));
    mercury__io__flush_output_3_p_0(OutputStream_8);
  }
}

static void MR_CALL 
mdb__debugger_interface__output_current_nth_var_4_p_0(
  MR_Word Var_5,
  MR_Word OutputStream_6)
{
  {
    MR_Word Response_8;

    {
      Response_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Response_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Response_8, 1) = ((MR_Box) (Var_5));
    }
    mercury__io__write_4_p_0((MR_Word) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0), OutputStream_6, ((MR_Box) (Response_8)));
    mercury__io__print_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OutputStream_6, ((MR_Box) ((MR_String) ".\n")));
    mercury__io__flush_output_3_p_0(OutputStream_6);
  }
}

static void MR_CALL 
mdb__debugger_interface__output_current_vars_5_p_0(
  MR_Word VarList_6,
  MR_Word StringList_7,
  MR_Word OutputStream_8)
{
  {
    MR_Word Response_10;

    {
      Response_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Response_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Response_10, 1) = ((MR_Box) (VarList_6));
      MR_hl_field(MR_mktag(3), Response_10, 2) = ((MR_Box) (StringList_7));
    }
    mercury__io__write_4_p_0((MR_Word) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0), OutputStream_8, ((MR_Box) (Response_10)));
    mercury__io__print_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OutputStream_8, ((MR_Box) ((MR_String) ".\n")));
    mercury__io__flush_output_3_p_0(OutputStream_8);
  }
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
  {
    MR_Word Response_32;

    {
      Response_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Response_32, 0) = ((MR_Box) (EventNumber_17));
      MR_hl_field(MR_mktag(2), Response_32, 1) = ((MR_Box) (CallNumber_18));
      MR_hl_field(MR_mktag(2), Response_32, 2) = ((MR_Box) (DepthNumber_19));
      MR_hl_field(MR_mktag(2), Response_32, 3) = ((MR_Box) (Port_20));
      MR_hl_field(MR_mktag(2), Response_32, 4) = ((MR_Box) (NameType_21));
      MR_hl_field(MR_mktag(2), Response_32, 5) = ((MR_Box) (ModuleType_22));
      MR_hl_field(MR_mktag(2), Response_32, 6) = ((MR_Box) (DefModuleName_23));
      MR_hl_field(MR_mktag(2), Response_32, 7) = ((MR_Box) (PredName_24));
      MR_hl_field(MR_mktag(2), Response_32, 8) = ((MR_Box) (Arity_25));
      MR_hl_field(MR_mktag(2), Response_32, 9) = ((MR_Box) (ModeNum_26));
      MR_hl_field(MR_mktag(2), Response_32, 10) = ((MR_Box) (Determinism_27));
      MR_hl_field(MR_mktag(2), Response_32, 11) = ((MR_Box) (Path_28));
      MR_hl_field(MR_mktag(2), Response_32, 12) = ((MR_Box) (LineNo_29));
    }
    mercury__io__write_4_p_0((MR_Word) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0), OutputStream_30, ((MR_Box) (Response_32)));
    mercury__io__print_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OutputStream_30, ((MR_Box) ((MR_String) ".\n")));
    mercury__io__flush_output_3_p_0(OutputStream_30);
  }
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
  {
    MR_Word Response_32;

    {
      Response_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Response_32, 0) = ((MR_Box) (EventNumber_17));
      MR_hl_field(MR_mktag(1), Response_32, 1) = ((MR_Box) (CallNumber_18));
      MR_hl_field(MR_mktag(1), Response_32, 2) = ((MR_Box) (DepthNumber_19));
      MR_hl_field(MR_mktag(1), Response_32, 3) = (MR_Box) (((((MR_Unsigned) (((MR_Box) (Port_20))) << (MR_Integer) 1)) | (MR_Unsigned) (((MR_Box) (PredOrFunc_21)))));
      MR_hl_field(MR_mktag(1), Response_32, 4) = ((MR_Box) (DeclModuleName_22));
      MR_hl_field(MR_mktag(1), Response_32, 5) = ((MR_Box) (DefModuleName_23));
      MR_hl_field(MR_mktag(1), Response_32, 6) = ((MR_Box) (PredName_24));
      MR_hl_field(MR_mktag(1), Response_32, 7) = ((MR_Box) (Arity_25));
      MR_hl_field(MR_mktag(1), Response_32, 8) = ((MR_Box) (ModeNum_26));
      MR_hl_field(MR_mktag(1), Response_32, 9) = ((MR_Box) (Determinism_27));
      MR_hl_field(MR_mktag(1), Response_32, 10) = ((MR_Box) (Path_28));
      MR_hl_field(MR_mktag(1), Response_32, 11) = ((MR_Box) (LineNo_29));
    }
    mercury__io__write_4_p_0((MR_Word) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0), OutputStream_30, ((MR_Box) (Response_32)));
    mercury__io__print_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OutputStream_30, ((MR_Box) ((MR_String) ".\n")));
    mercury__io__flush_output_3_p_0(OutputStream_30);
  }
}

void MR_CALL 
mdb__debugger_interface__dummy_pred_to_avoid_warning_about_nothing_exported_0_p_0(void)
{
  {
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____arity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__debugger_interface____Unify____arity_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____arity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__debugger_interface____Compare____arity_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____call_number_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__debugger_interface____Unify____call_number_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____call_number_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__debugger_interface____Compare____call_number_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_request_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__debugger_interface____Unify____debugger_request_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____debugger_request_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__debugger_interface____Compare____debugger_request_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_response_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__debugger_interface____Unify____debugger_response_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____debugger_response_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__debugger_interface____Compare____debugger_response_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____depth_number_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__debugger_interface____Unify____depth_number_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____depth_number_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__debugger_interface____Compare____depth_number_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____determinism_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__debugger_interface____Unify____determinism_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____determinism_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__debugger_interface____Compare____determinism_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____event_number_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__debugger_interface____Unify____event_number_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____event_number_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__debugger_interface____Compare____event_number_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____match_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mdb__debugger_interface____Unify____match_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____match_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__debugger_interface____Compare____match_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__debugger_interface____Unify____pred_match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__debugger_interface____Unify____pred_match_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__debugger_interface____Compare____pred_match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__debugger_interface____Compare____pred_match_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__debugger_interface__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdb.debugger_interface.
