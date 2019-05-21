/*
** Automatically generated from `ssdb.m'
** by the Mercury compiler,
** version rotd-2017-08-08
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


/* :- module ssdb. */
/* :- implementation. */

/*
INIT mercury__ssdb__init
REQUIRED_INIT mercury__ssdb__required_init
ENDINIT
*/

#include "ssdb.mih"
#include "ssdb.mh"


#include "mdb.mih"
#include "mdbcomp.mih"
#include "mdb.browse.mih"
#include "mdb.browser_info.mih"
#include "mdb.browser_term.mih"
#include "mdb.listing.mih"
#include "mdb.parse.mih"
#include "mdb.term_rep.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
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
#include "unit.mih"
#include "univ.mih"
#include "string.format.mih"
#include "string.parse_util.mih"























struct ssdb__delete_breakpoint_3_p_0_env_0_s {
  MR_Integer ssdb__delete_breakpoint_3_p_0_env_0__Num_4;
  MR_bool ssdb__delete_breakpoint_3_p_0_env_0__succeeded;
  MR_Word ssdb__delete_breakpoint_3_p_0_env_0__BreakPoints0_6;
  MR_Word ssdb__delete_breakpoint_3_p_0_env_0__ProcId_7;
  MR_Word ssdb__delete_breakpoint_3_p_0_env_0__BreakPoint_8;
  jmp_buf ssdb__delete_breakpoint_3_p_0_env_0__commit_0;
  MR_Integer ssdb__delete_breakpoint_3_p_0_env_0__Var_44;
  MR_Box ssdb__delete_breakpoint_3_p_0_env_0__conv1_ProcId_7;
  MR_Box ssdb__delete_breakpoint_3_p_0_env_0__conv0_BreakPoint_8;
};

struct ssdb__modify_breakpoint_state_4_p_0_env_0_s {
  MR_Integer ssdb__modify_breakpoint_state_4_p_0_env_0__Num_5;
  MR_bool ssdb__modify_breakpoint_state_4_p_0_env_0__succeeded;
  MR_Word ssdb__modify_breakpoint_state_4_p_0_env_0__BreakPoints0_8;
  MR_Word ssdb__modify_breakpoint_state_4_p_0_env_0__Key_9;
  MR_Word ssdb__modify_breakpoint_state_4_p_0_env_0__BreakPoint0_10;
  jmp_buf ssdb__modify_breakpoint_state_4_p_0_env_0__commit_0;
  MR_Integer ssdb__modify_breakpoint_state_4_p_0_env_0__Var_50;
  MR_Box ssdb__modify_breakpoint_state_4_p_0_env_0__conv1_Key_9;
  MR_Box ssdb__modify_breakpoint_state_4_p_0_env_0__conv0_BreakPoint0_10;
};

struct ssdb__exception_handler_exists_2_p_0_env_0_s {
  MR_Integer ssdb__exception_handler_exists_2_p_0_env_0__CSN_3;
  MR_Word ssdb__exception_handler_exists_2_p_0_env_0__StackFrames_4;
  MR_bool ssdb__exception_handler_exists_2_p_0_env_0__succeeded;
  jmp_buf ssdb__exception_handler_exists_2_p_0_env_0__commit_0;
  MR_Word ssdb__exception_handler_exists_2_p_0_env_0__StackFrame_5;
  MR_Integer ssdb__exception_handler_exists_2_p_0_env_0__Var_6;
  MR_Word ssdb__exception_handler_exists_2_p_0_env_0__Var_10;
  MR_String ssdb__exception_handler_exists_2_p_0_env_0__Name_24;
  MR_String ssdb__exception_handler_exists_2_p_0_env_0__Var_25;
  MR_Box ssdb__exception_handler_exists_2_p_0_env_0__conv0_StackFrame_5;
};


static const MR_FA_PseudoTypeInfo_Struct1 ssdb__maybe__pti_maybe_1__plain_mdb__browser_info__type_ctor_info_portray_format_0;

static const MR_FA_PseudoTypeInfo_Struct1 ssdb__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_bp_state_0_0;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_bp_state_0_1;

static const MR_EnumFunctorDescPtr ssdb__ssdb__enum_value_ordered_bp_state_0[2];

static const MR_EnumFunctorDescPtr ssdb__ssdb__enum_name_ordered_bp_state_0[2];

static const MR_Integer ssdb__ssdb__functor_number_map_bp_state_0[2];

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_breakpoint_0_0[3];

static const MR_ConstString ssdb__ssdb__field_names_breakpoint_0_0[3];

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_breakpoint_0_0;

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_breakpoint_0_0[1];

static const MR_DuPtagLayout ssdb__ssdb__du_ptag_ordered_breakpoint_0[1];

static const MR_DuFunctorDescPtr ssdb__ssdb__du_name_ordered_breakpoint_0[1];

static const MR_Integer ssdb__ssdb__functor_number_map_breakpoint_0[1];

static const MR_FA_TypeInfo_Struct2 ssdb__tree234__ti_tree234_2ssdb__type_ctor_info_ssdb_proc_id_0ssdb__type_ctor_info_breakpoint_0;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_debugger_state_0_0;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_debugger_state_0_1;

static const MR_EnumFunctorDescPtr ssdb__ssdb__enum_value_ordered_debugger_state_0[2];

static const MR_EnumFunctorDescPtr ssdb__ssdb__enum_name_ordered_debugger_state_0[2];

static const MR_Integer ssdb__ssdb__functor_number_map_debugger_state_0[2];

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_format_config_0_0[7];

static const MR_ConstString ssdb__ssdb__field_names_format_config_0_0[7];

static const MR_DuArgLocn ssdb__ssdb__field_locns_format_config_0_0[7];

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_format_config_0_0;

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_format_config_0_0[1];

static const MR_DuPtagLayout ssdb__ssdb__du_ptag_ordered_format_config_0[1];

static const MR_DuFunctorDescPtr ssdb__ssdb__du_name_ordered_format_config_0[1];

static const MR_Integer ssdb__ssdb__functor_number_map_format_config_0[1];

static const MR_FA_TypeInfo_Struct1 ssdb__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_list_params_0_0[2];

static const MR_ConstString ssdb__ssdb__field_names_list_params_0_0[2];

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_list_params_0_0;

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_list_params_0_0[1];

static const MR_DuPtagLayout ssdb__ssdb__du_ptag_ordered_list_params_0[1];

static const MR_DuFunctorDescPtr ssdb__ssdb__du_name_ordered_list_params_0[1];

static const MR_Integer ssdb__ssdb__functor_number_map_list_params_0[1];

static const MR_FA_TypeInfo_Struct1 ssdb__list__ti_list_1ssdb__type_ctor_info_var_value_0;

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_next_stop_0_0;

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_next_stop_0_1[1];

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_next_stop_0_1;

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_next_stop_0_2;

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_next_stop_0_3[2];

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_next_stop_0_3;

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_next_stop_0_4[2];

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_next_stop_0_4;

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_next_stop_0_5;

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_next_stop_0_6[1];

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_next_stop_0_6;

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_next_stop_0_7;

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_next_stop_0_0[4];

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_next_stop_0_1[1];

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_next_stop_0_2[1];

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_next_stop_0_3[2];

static const MR_DuPtagLayout ssdb__ssdb__du_ptag_ordered_next_stop_0[4];

static const MR_DuFunctorDescPtr ssdb__ssdb__du_name_ordered_next_stop_0[8];

static const MR_Integer ssdb__ssdb__functor_number_map_next_stop_0[8];

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_0;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_1;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_2;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_3;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_4;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_5;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_6;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_7;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_8;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_9;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_10;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_11;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_12;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_13;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_14;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_15;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_16;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_17;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_18;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_19;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_20;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_21;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_22;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_23;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_24;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_25;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_26;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_27;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_28;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_29;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_30;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_31;

static const MR_EnumFunctorDescPtr ssdb__ssdb__enum_value_ordered_ssdb_cmd_0[32];

static const MR_EnumFunctorDescPtr ssdb__ssdb__enum_name_ordered_ssdb_cmd_0[32];

static const MR_Integer ssdb__ssdb__functor_number_map_ssdb_cmd_0[32];

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_0;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_1;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_2;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_3;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_4;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_5;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_6;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_7;

static const MR_EnumFunctorDescPtr ssdb__ssdb__enum_value_ordered_ssdb_event_type_0[8];

static const MR_EnumFunctorDescPtr ssdb__ssdb__enum_name_ordered_ssdb_event_type_0[8];

static const MR_Integer ssdb__ssdb__functor_number_map_ssdb_event_type_0[8];

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_ssdb_proc_id_0_0[2];

static const MR_ConstString ssdb__ssdb__field_names_ssdb_proc_id_0_0[2];

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_ssdb_proc_id_0_0;

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_ssdb_proc_id_0_0[1];

static const MR_DuPtagLayout ssdb__ssdb__du_ptag_ordered_ssdb_proc_id_0[1];

static const MR_DuFunctorDescPtr ssdb__ssdb__du_name_ordered_ssdb_proc_id_0[1];

static const MR_Integer ssdb__ssdb__functor_number_map_ssdb_proc_id_0[1];

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_retry_0_0;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_retry_0_1;

static const MR_EnumFunctorDescPtr ssdb__ssdb__enum_value_ordered_ssdb_retry_0[2];

static const MR_EnumFunctorDescPtr ssdb__ssdb__enum_name_ordered_ssdb_retry_0[2];

static const MR_Integer ssdb__ssdb__functor_number_map_ssdb_retry_0[2];

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_tracing_level_0_0;

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_tracing_level_0_1;

static const MR_EnumFunctorDescPtr ssdb__ssdb__enum_value_ordered_ssdb_tracing_level_0[2];

static const MR_EnumFunctorDescPtr ssdb__ssdb__enum_name_ordered_ssdb_tracing_level_0[2];

static const MR_Integer ssdb__ssdb__functor_number_map_ssdb_tracing_level_0[2];

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_stack_frame_0_0[8];

static const MR_ConstString ssdb__ssdb__field_names_stack_frame_0_0[8];

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_stack_frame_0_0;

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_stack_frame_0_0[1];

static const MR_DuPtagLayout ssdb__ssdb__du_ptag_ordered_stack_frame_0[1];

static const MR_DuFunctorDescPtr ssdb__ssdb__du_name_ordered_stack_frame_0[1];

static const MR_Integer ssdb__ssdb__functor_number_map_stack_frame_0[1];

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_var_value_0_0[2];

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_var_value_0_0;

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_var_value_0_1[3];

static const MR_DuExistLocn ssdb__ssdb__exist_locns_var_value_0_1[1];

static const MR_DuExistInfo ssdb__ssdb__exist_info_var_value_0_1;

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_var_value_0_1;

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_var_value_0_2[2];

static const MR_DuExistLocn ssdb__ssdb__exist_locns_var_value_0_2[1];

static const MR_DuExistInfo ssdb__ssdb__exist_info_var_value_0_2;

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_var_value_0_2;

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_var_value_0_0[1];

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_var_value_0_1[1];

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_var_value_0_2[1];

static const MR_DuPtagLayout ssdb__ssdb__du_ptag_ordered_var_value_0[3];

static const MR_DuFunctorDescPtr ssdb__ssdb__du_name_ordered_var_value_0[3];

static const MR_Integer ssdb__ssdb__functor_number_map_var_value_0[3];

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_what_next_0_0;

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_what_next_0_1;

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_what_next_0_2;

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_what_next_0_3[1];

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_what_next_0_3;

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_what_next_0_4;

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_what_next_0_5;

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_what_next_0_6[1];

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_what_next_0_6;

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_what_next_0_7[1];

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_what_next_0_7;

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_what_next_0_8[1];

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_what_next_0_8;

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_what_next_0_0[5];

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_what_next_0_1[1];

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_what_next_0_2[1];

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_what_next_0_3[2];

static const MR_DuPtagLayout ssdb__ssdb__du_ptag_ordered_what_next_0[4];

static const MR_DuFunctorDescPtr ssdb__ssdb__du_name_ordered_what_next_0[9];

static const MR_Integer ssdb__ssdb__functor_number_map_what_next_0[9];

static MR_bool MR_CALL 
ssdb__IntroducedFrom__pred__print_var_with_name__3089__1_2_p_0(
  MR_String ssdb__VarName_8,
  MR_Word ssdb__LambdaHeadVar__1_20);

static MR_Word MR_CALL 
ssdb__IntroducedFrom__func__modify_breakpoint_states__2783__1_2_f_0(
  MR_Word ssdb__State_4,
  MR_Word ssdb__LambdaHeadVar__1_14);

static void MR_CALL 
ssdb____Compare____what_next_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2,
  MR_Word ssdb__HeadVar__3_3);

static MR_bool MR_CALL 
ssdb____Unify____what_next_0_0(
  MR_Word ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2);

static void MR_CALL 
ssdb____Compare____stack_frame_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2,
  MR_Word ssdb__HeadVar__3_3);

static MR_bool MR_CALL 
ssdb____Unify____stack_frame_0_0(
  MR_Word ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2);

static void MR_CALL 
ssdb____Compare____ssdb_cmd_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2,
  MR_Word ssdb__HeadVar__3_3);

static MR_bool MR_CALL 
ssdb____Unify____ssdb_cmd_0_0(
  MR_Word ssdb__HeadVar__2_1,
  MR_Word ssdb__HeadVar__2_2);

static void MR_CALL 
ssdb____Compare____next_stop_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2,
  MR_Word ssdb__HeadVar__3_3);

static MR_bool MR_CALL 
ssdb____Unify____next_stop_0_0(
  MR_Word ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2);

static void MR_CALL 
ssdb____Compare____list_params_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2,
  MR_Word ssdb__HeadVar__3_3);

static MR_bool MR_CALL 
ssdb____Unify____list_params_0_0(
  MR_Word ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2);

static void MR_CALL 
ssdb____Compare____format_config_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2,
  MR_Word ssdb__HeadVar__3_3);

static MR_bool MR_CALL 
ssdb____Unify____format_config_0_0(
  MR_Word ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2);

static void MR_CALL 
ssdb____Compare____breakpoints_map_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2,
  MR_Word ssdb__HeadVar__3_3);

static MR_bool MR_CALL 
ssdb____Unify____breakpoints_map_0_0(
  MR_Word ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2);

static void MR_CALL 
ssdb____Compare____breakpoint_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2,
  MR_Word ssdb__HeadVar__3_3);

static MR_bool MR_CALL 
ssdb____Unify____breakpoint_0_0(
  MR_Word ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2);

static void MR_CALL 
ssdb____Compare____bp_state_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2,
  MR_Word ssdb__HeadVar__3_3);

static MR_bool MR_CALL 
ssdb____Unify____bp_state_0_0(
  MR_Word ssdb__HeadVar__2_1,
  MR_Word ssdb__HeadVar__2_2);

static void MR_CALL 
ssdb__unsafe_set_debugger_state_1_p_0(
  MR_Word ssdb__X_1);

static void MR_CALL 
ssdb__unsafe_get_debugger_state_1_p_0(
  MR_Word * ssdb__X_1);

static void MR_CALL 
ssdb__unlock_debugger_state_0_p_0(void);

static void MR_CALL 
ssdb__lock_debugger_state_0_p_0(void);

static void MR_CALL 
ssdb__initialise_mutable_debugger_state_0_p_0(void);

static void MR_CALL 
ssdb__pre_initialise_mutable_debugger_state_0_p_0(void);

static void MR_CALL 
ssdb__unsafe_set_saved_output_stream_1_p_0(
  MR_Word ssdb__X_1);

static void MR_CALL 
ssdb__unsafe_get_saved_output_stream_1_p_0(
  MR_Word * ssdb__X_1);

static void MR_CALL 
ssdb__unlock_saved_output_stream_0_p_0(void);

static void MR_CALL 
ssdb__lock_saved_output_stream_0_p_0(void);

static void MR_CALL 
ssdb__initialise_mutable_saved_output_stream_0_p_0(void);

static void MR_CALL 
ssdb__pre_initialise_mutable_saved_output_stream_0_p_0(void);

static void MR_CALL 
ssdb__unsafe_set_saved_input_stream_1_p_0(
  MR_Word ssdb__X_1);

static void MR_CALL 
ssdb__unsafe_get_saved_input_stream_1_p_0(
  MR_Word * ssdb__X_1);

static void MR_CALL 
ssdb__unlock_saved_input_stream_0_p_0(void);

static void MR_CALL 
ssdb__lock_saved_input_stream_0_p_0(void);

static void MR_CALL 
ssdb__initialise_mutable_saved_input_stream_0_p_0(void);

static void MR_CALL 
ssdb__pre_initialise_mutable_saved_input_stream_0_p_0(void);

static void MR_CALL 
ssdb__unsafe_set_tty_out_1_p_0(
  MR_Word ssdb__X_1);

static void MR_CALL 
ssdb__unsafe_get_tty_out_1_p_0(
  MR_Word * ssdb__X_1);

static void MR_CALL 
ssdb__unlock_tty_out_0_p_0(void);

static void MR_CALL 
ssdb__lock_tty_out_0_p_0(void);

static void MR_CALL 
ssdb__initialise_mutable_tty_out_0_p_0(void);

static void MR_CALL 
ssdb__pre_initialise_mutable_tty_out_0_p_0(void);

static void MR_CALL 
ssdb__unsafe_set_tty_in_1_p_0(
  MR_Word ssdb__X_1);

static void MR_CALL 
ssdb__unsafe_get_tty_in_1_p_0(
  MR_Word * ssdb__X_1);

static void MR_CALL 
ssdb__unlock_tty_in_0_p_0(void);

static void MR_CALL 
ssdb__lock_tty_in_0_p_0(void);

static void MR_CALL 
ssdb__initialise_mutable_tty_in_0_p_0(void);

static void MR_CALL 
ssdb__pre_initialise_mutable_tty_in_0_p_0(void);

static void MR_CALL 
ssdb__unsafe_set_list_params_1_p_0(
  MR_Word ssdb__X_1);

static void MR_CALL 
ssdb__unsafe_get_list_params_1_p_0(
  MR_Word * ssdb__X_1);

static void MR_CALL 
ssdb__unlock_list_params_0_p_0(void);

static void MR_CALL 
ssdb__lock_list_params_0_p_0(void);

static void MR_CALL 
ssdb__initialise_mutable_list_params_0_p_0(void);

static void MR_CALL 
ssdb__pre_initialise_mutable_list_params_0_p_0(void);

static void MR_CALL 
ssdb__unsafe_set_browser_state_1_p_0(
  MR_Word ssdb__X_1);

static void MR_CALL 
ssdb__unsafe_get_browser_state_1_p_0(
  MR_Word * ssdb__X_1);

static void MR_CALL 
ssdb__unlock_browser_state_0_p_0(void);

static void MR_CALL 
ssdb__lock_browser_state_0_p_0(void);

static void MR_CALL 
ssdb__initialise_mutable_browser_state_0_p_0(void);

static void MR_CALL 
ssdb__pre_initialise_mutable_browser_state_0_p_0(void);

static void MR_CALL 
ssdb__unsafe_set_breakpoints_filter_1_p_0(
  MR_Box ssdb__X_1);

static void MR_CALL 
ssdb__unsafe_get_breakpoints_filter_1_p_0(
  MR_Box * ssdb__X_1);

static void MR_CALL 
ssdb__unlock_breakpoints_filter_0_p_0(void);

static void MR_CALL 
ssdb__lock_breakpoints_filter_0_p_0(void);

static void MR_CALL 
ssdb__initialise_mutable_breakpoints_filter_0_p_0(void);

static void MR_CALL 
ssdb__pre_initialise_mutable_breakpoints_filter_0_p_0(void);

static void MR_CALL 
ssdb__unsafe_set_breakpoints_map_1_p_0(
  MR_Word ssdb__X_1);

static void MR_CALL 
ssdb__unsafe_get_breakpoints_map_1_p_0(
  MR_Word * ssdb__X_1);

static void MR_CALL 
ssdb__unlock_breakpoints_map_0_p_0(void);

static void MR_CALL 
ssdb__lock_breakpoints_map_0_p_0(void);

static void MR_CALL 
ssdb__initialise_mutable_breakpoints_map_0_p_0(void);

static void MR_CALL 
ssdb__pre_initialise_mutable_breakpoints_map_0_p_0(void);

static void MR_CALL 
ssdb__unsafe_set_aliases_1_p_0(
  MR_Word ssdb__X_1);

static void MR_CALL 
ssdb__unsafe_get_aliases_1_p_0(
  MR_Word * ssdb__X_1);

static void MR_CALL 
ssdb__unlock_aliases_0_p_0(void);

static void MR_CALL 
ssdb__lock_aliases_0_p_0(void);

static void MR_CALL 
ssdb__initialise_mutable_aliases_0_p_0(void);

static void MR_CALL 
ssdb__pre_initialise_mutable_aliases_0_p_0(void);

static void MR_CALL 
ssdb__unsafe_set_command_queue_1_p_0(
  MR_Word ssdb__X_1);

static void MR_CALL 
ssdb__unsafe_get_command_queue_1_p_0(
  MR_Word * ssdb__X_1);

static void MR_CALL 
ssdb__unlock_command_queue_0_p_0(void);

static void MR_CALL 
ssdb__lock_command_queue_0_p_0(void);

static void MR_CALL 
ssdb__initialise_mutable_command_queue_0_p_0(void);

static void MR_CALL 
ssdb__pre_initialise_mutable_command_queue_0_p_0(void);

static void MR_CALL 
ssdb__unsafe_set_nondet_shadow_stack_depth_1_p_0(
  MR_Integer ssdb__X_1);

static void MR_CALL 
ssdb__unsafe_get_nondet_shadow_stack_depth_1_p_0(
  MR_Integer * ssdb__X_1);

static void MR_CALL 
ssdb__unlock_nondet_shadow_stack_depth_0_p_0(void);

static void MR_CALL 
ssdb__lock_nondet_shadow_stack_depth_0_p_0(void);

static void MR_CALL 
ssdb__initialise_mutable_nondet_shadow_stack_depth_0_p_0(void);

static void MR_CALL 
ssdb__pre_initialise_mutable_nondet_shadow_stack_depth_0_p_0(void);

static void MR_CALL 
ssdb__unsafe_set_nondet_shadow_stack_1_p_0(
  MR_Word ssdb__X_1);

static void MR_CALL 
ssdb__unsafe_get_nondet_shadow_stack_1_p_0(
  MR_Word * ssdb__X_1);

static void MR_CALL 
ssdb__unlock_nondet_shadow_stack_0_p_0(void);

static void MR_CALL 
ssdb__lock_nondet_shadow_stack_0_p_0(void);

static void MR_CALL 
ssdb__initialise_mutable_nondet_shadow_stack_0_p_0(void);

static void MR_CALL 
ssdb__pre_initialise_mutable_nondet_shadow_stack_0_p_0(void);

static void MR_CALL 
ssdb__unsafe_set_shadow_stack_depth_1_p_0(
  MR_Integer ssdb__X_1);

static void MR_CALL 
ssdb__unsafe_get_shadow_stack_depth_1_p_0(
  MR_Integer * ssdb__X_1);

static void MR_CALL 
ssdb__unlock_shadow_stack_depth_0_p_0(void);

static void MR_CALL 
ssdb__lock_shadow_stack_depth_0_p_0(void);

static void MR_CALL 
ssdb__initialise_mutable_shadow_stack_depth_0_p_0(void);

static void MR_CALL 
ssdb__pre_initialise_mutable_shadow_stack_depth_0_p_0(void);

static void MR_CALL 
ssdb__unsafe_set_shadow_stack_1_p_0(
  MR_Word ssdb__X_1);

static void MR_CALL 
ssdb__unsafe_get_shadow_stack_1_p_0(
  MR_Word * ssdb__X_1);

static void MR_CALL 
ssdb__unlock_shadow_stack_0_p_0(void);

static void MR_CALL 
ssdb__lock_shadow_stack_0_p_0(void);

static void MR_CALL 
ssdb__initialise_mutable_shadow_stack_0_p_0(void);

static void MR_CALL 
ssdb__pre_initialise_mutable_shadow_stack_0_p_0(void);

static void MR_CALL 
ssdb__unsafe_set_cur_ssdb_next_stop_1_p_0(
  MR_Word ssdb__X_1);

static void MR_CALL 
ssdb__unsafe_get_cur_ssdb_next_stop_1_p_0(
  MR_Word * ssdb__X_1);

static void MR_CALL 
ssdb__unlock_cur_ssdb_next_stop_0_p_0(void);

static void MR_CALL 
ssdb__lock_cur_ssdb_next_stop_0_p_0(void);

static void MR_CALL 
ssdb__initialise_mutable_cur_ssdb_next_stop_0_p_0(void);

static void MR_CALL 
ssdb__pre_initialise_mutable_cur_ssdb_next_stop_0_p_0(void);

static void MR_CALL 
ssdb__get_cur_ssdb_csn_1_p_0(
  MR_Integer * ssdb__X_2);

static void MR_CALL 
ssdb__unsafe_set_cur_ssdb_csn_1_p_0(
  MR_Integer ssdb__X_1);

static void MR_CALL 
ssdb__unsafe_get_cur_ssdb_csn_1_p_0(
  MR_Integer * ssdb__X_1);

static void MR_CALL 
ssdb__unlock_cur_ssdb_csn_0_p_0(void);

static void MR_CALL 
ssdb__lock_cur_ssdb_csn_0_p_0(void);

static void MR_CALL 
ssdb__initialise_mutable_cur_ssdb_csn_0_p_0(void);

static void MR_CALL 
ssdb__pre_initialise_mutable_cur_ssdb_csn_0_p_0(void);

static void MR_CALL 
ssdb__unsafe_set_cur_ssdb_event_number_1_p_0(
  MR_Integer ssdb__X_1);

static void MR_CALL 
ssdb__unsafe_get_cur_ssdb_event_number_1_p_0(
  MR_Integer * ssdb__X_1);

static void MR_CALL 
ssdb__unlock_cur_ssdb_event_number_0_p_0(void);

static void MR_CALL 
ssdb__lock_cur_ssdb_event_number_0_p_0(void);

static void MR_CALL 
ssdb__initialise_mutable_cur_ssdb_event_number_0_p_0(void);

static void MR_CALL 
ssdb__pre_initialise_mutable_cur_ssdb_event_number_0_p_0(void);

static void MR_CALL 
ssdb__unsafe_set_cur_line_number_1_p_0(
  MR_Integer ssdb__X_1);

static void MR_CALL 
ssdb__unsafe_get_cur_line_number_1_p_0(
  MR_Integer * ssdb__X_1);

static void MR_CALL 
ssdb__unlock_cur_line_number_0_p_0(void);

static void MR_CALL 
ssdb__lock_cur_line_number_0_p_0(void);

static void MR_CALL 
ssdb__initialise_mutable_cur_line_number_0_p_0(void);

static void MR_CALL 
ssdb__pre_initialise_mutable_cur_line_number_0_p_0(void);

static void MR_CALL 
ssdb__unsafe_set_cur_filename_1_p_0(
  MR_String ssdb__X_1);

static void MR_CALL 
ssdb__unsafe_get_cur_filename_1_p_0(
  MR_String * ssdb__X_1);

static void MR_CALL 
ssdb__unlock_cur_filename_0_p_0(void);

static void MR_CALL 
ssdb__lock_cur_filename_0_p_0(void);

static void MR_CALL 
ssdb__initialise_mutable_cur_filename_0_p_0(void);

static void MR_CALL 
ssdb__pre_initialise_mutable_cur_filename_0_p_0(void);

static void MR_CALL 
ssdb__exit_process_2_p_0(void);

static MR_bool MR_CALL 
ssdb__safe_to_write_1_p_0(
  MR_Word ssdb__TypeInfo_for_T_3,
  MR_Box ssdb__HeadVar__1_1);

static MR_bool MR_CALL 
ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_102_101_95_116_111_95_119_114_105_116_101_95_95_91_49_93_95_48_1_p_0(
  MR_Box ssdb__HeadVar__1_1);

static MR_Integer MR_CALL 
ssdb__bp_number_1_f_0(
  MR_Word ssdb__HeadVar__1_1);

static MR_bool MR_CALL 
ssdb__non_dot_1_p_0(
  MR_Char ssdb__C_2);

static void MR_CALL 
ssdb__rollback_nondet_stack_3_p_0(
  MR_Integer ssdb__TargetCSN_4);

static void MR_CALL 
ssdb__rollback_stack_3_p_0(
  MR_Integer ssdb__TargetCSN_4);

static void MR_CALL 
ssdb__handle_event_excp_3_p_0(
  MR_String ssdb__ModuleName_4,
  MR_String ssdb__ProcName_5,
  MR_Word ssdb__Univ_6);

static void MR_CALL 
ssdb__handle_event_excp_2_5_p_0(
  MR_Word ssdb__ProcId_6,
  MR_Word ssdb__ListVarValue_7,
  MR_Word ssdb__Level_8);

static void MR_CALL 
ssdb__step_next_stop_2_p_0(void);

static void MR_CALL 
ssdb__init_debugger_state_2_p_0(void);

static void MR_CALL 
ssdb__install_sigint_handler_2_p_0(void);

static void MR_CALL 
ssdb__add_source_commands_2_p_0(void);

static void MR_CALL 
ssdb__lookup_nondet_stack_frame_5_p_0(
  MR_Word ssdb__ProcId_6,
  MR_Integer ssdb__Depth_7,
  MR_Word * ssdb__StackFrame_8);

static void MR_CALL 
ssdb__search_nondet_stack_frame_2_7_p_0(
  MR_Word ssdb__ProcId_8,
  MR_Integer ssdb__Depth_9,
  MR_Integer ssdb__N_10,
  MR_Integer ssdb__StackDepth_11,
  MR_Word * ssdb__MaybeStackFrame_12);

static void MR_CALL 
ssdb__nondet_stack_pop_2_p_0(void);

static void MR_CALL 
ssdb__stack_pop_2_p_0(void);

static void MR_CALL 
ssdb__nondet_stack_push_3_p_0(
  MR_Word ssdb__Frame_4);

static void MR_CALL 
ssdb__restore_streams_2_p_0(void);

static void MR_CALL 
ssdb__save_streams_2_p_0(void);

static void MR_CALL 
ssdb__execute_ssdb_retry_2_6_p_0(
  MR_Integer ssdb__Num_7,
  MR_Word ssdb__Event_8,
  MR_Integer ssdb__Depth_9,
  MR_Word * ssdb__WhatNext_10);

static void MR_CALL 
ssdb__execute_ssdb_retry_6_p_0(
  MR_Word ssdb__Args_7,
  MR_Word ssdb__Event_8,
  MR_Integer ssdb__Depth_9,
  MR_Word * ssdb__WhatNext_10);

static void MR_CALL 
ssdb__execute_ssdb_exception_6_p_0(
  MR_Word ssdb__Args_7,
  MR_Word ssdb__Event_8,
  MR_Integer ssdb__Depth_9,
  MR_Word * ssdb__WhatNext_10);

static void MR_CALL 
ssdb__execute_ssdb_return_6_p_0(
  MR_Word ssdb__Args_7,
  MR_Word ssdb__Event_8,
  MR_Integer ssdb__Depth_9,
  MR_Word * ssdb__WhatNext_10);

static void MR_CALL 
ssdb__execute_ssdb_finish_6_p_0(
  MR_Word ssdb__Args_7,
  MR_Word ssdb__Event_8,
  MR_Integer ssdb__Depth_9,
  MR_Word * ssdb__WhatNext_10);

static void MR_CALL 
ssdb__execute_ssdb_continue_6_p_0(
  MR_Word ssdb__Args_7,
  MR_Word ssdb__Event_8,
  MR_Integer ssdb__Depth_9,
  MR_Word * ssdb__WhatNext_10);

static void MR_CALL 
ssdb__execute_ssdb_goto_6_p_0(
  MR_Word ssdb__Args_7,
  MR_Word ssdb__Event_8,
  MR_Integer ssdb__Depth_9,
  MR_Word * ssdb__WhatNext_10);

static void MR_CALL 
ssdb__execute_ssdb_next_6_p_0(
  MR_Word ssdb__Args_7,
  MR_Word ssdb__Event_8,
  MR_Integer ssdb__Depth_9,
  MR_Word * ssdb__WhatNext_10);

static void MR_CALL 
ssdb__execute_ssdb_step_6_p_0(
  MR_Word ssdb__Args_7,
  MR_Word ssdb__Event_8,
  MR_Integer ssdb__Depth_9,
  MR_Word * ssdb__WhatNext_10);

static void MR_CALL 
ssdb__execute_cmd_8_p_0(
  MR_Word ssdb__Cmd_9,
  MR_Word ssdb__Args_10,
  MR_Word ssdb__Interacting_11,
  MR_Word ssdb__Event_12,
  MR_Integer ssdb__Depth_13,
  MR_Word * ssdb__WhatNext_14);

static void MR_CALL 
ssdb__execute_cmd_string_8_p_0(
  MR_String ssdb__CmdWord_9,
  MR_Word ssdb__ArgWords_10,
  MR_Word ssdb__Interacting_11,
  MR_Word ssdb__Event_12,
  MR_Integer ssdb__Depth_13,
  MR_Word * ssdb__WhatNext_14);

static void MR_CALL 
ssdb__expand_alias_and_execute_7_p_0(
  MR_Word ssdb__Words_8,
  MR_Word ssdb__Interacting_9,
  MR_Word ssdb__Event_10,
  MR_Integer ssdb__Depth_11,
  MR_Word * ssdb__WhatNext_12);

static void MR_CALL 
ssdb__read_and_execute_cmd_2_6_p_0(
  MR_Integer ssdb__N_7,
  MR_Word ssdb__Event_8,
  MR_Integer ssdb__Depth_9,
  MR_Word * ssdb__WhatNext_10);

static void MR_CALL 
ssdb__read_and_execute_cmd_5_p_0(
  MR_Word ssdb__Event_6,
  MR_Integer ssdb__Depth_7,
  MR_Word * ssdb__WhatNext_8);

static void MR_CALL 
ssdb__execute_ssdb_quit_4_p_0(
  MR_Word ssdb__Args_5,
  MR_Word ssdb__Interacting_6);

static void MR_CALL 
ssdb__execute_ssdb_source_3_p_0(
  MR_Word ssdb__Args_4);

static void MR_CALL 
ssdb__read_command_lines_5_p_0(
  MR_Word ssdb__Stream_6,
  MR_Word ssdb__STATE_VARIABLE_RevLines_0_16,
  MR_Word * ssdb__STATE_VARIABLE_RevLines_17);

static void MR_CALL 
ssdb__execute_ssdb_delete_3_p_0_1(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3);

static void MR_CALL 
ssdb__execute_ssdb_delete_3_p_0(
  MR_Word ssdb__Args_4);

static void MR_CALL 
ssdb__delete_breakpoint_3_p_0_5(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3);

static void MR_CALL 
ssdb__delete_breakpoint_3_p_0_1(
  void * ssdb__env_ptr_arg);

static void MR_CALL 
ssdb__delete_breakpoint_3_p_0_3(
  void * ssdb__env_ptr_arg);

static void MR_CALL 
ssdb__delete_breakpoint_3_p_0_2(
  void * ssdb__env_ptr_arg);

static void MR_CALL 
ssdb__delete_breakpoint_3_p_0_4(
  void * ssdb__env_ptr_arg);

static void MR_CALL 
ssdb__delete_breakpoint_3_p_0(
  MR_Integer ssdb__Num_4);

static void MR_CALL 
ssdb__execute_ssdb_disable_3_p_0_3(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3);

static void MR_CALL 
ssdb__execute_ssdb_disable_3_p_0_2(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3);

static MR_Box MR_CALL 
ssdb__execute_ssdb_disable_3_p_0_1(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1);

static void MR_CALL 
ssdb__execute_ssdb_disable_3_p_0(
  MR_Word ssdb__Args_4);

static void MR_CALL 
ssdb__execute_ssdb_enable_3_p_0_3(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3);

static void MR_CALL 
ssdb__execute_ssdb_enable_3_p_0_2(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3);

static MR_Box MR_CALL 
ssdb__execute_ssdb_enable_3_p_0_1(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1);

static void MR_CALL 
ssdb__execute_ssdb_enable_3_p_0(
  MR_Word ssdb__Args_4);

static void MR_CALL 
ssdb__modify_breakpoint_state_4_p_0_5(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3);

static void MR_CALL 
ssdb__modify_breakpoint_state_4_p_0_1(
  void * ssdb__env_ptr_arg);

static void MR_CALL 
ssdb__modify_breakpoint_state_4_p_0_3(
  void * ssdb__env_ptr_arg);

static void MR_CALL 
ssdb__modify_breakpoint_state_4_p_0_2(
  void * ssdb__env_ptr_arg);

static void MR_CALL 
ssdb__modify_breakpoint_state_4_p_0_4(
  void * ssdb__env_ptr_arg);

static void MR_CALL 
ssdb__modify_breakpoint_state_4_p_0(
  MR_Integer ssdb__Num_5,
  MR_Word ssdb__State_6);

static MR_bool MR_CALL 
ssdb__execute_ssdb_break_3_p_0_2(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1);

static void MR_CALL 
ssdb__execute_ssdb_break_3_p_0_1(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3);

static void MR_CALL 
ssdb__execute_ssdb_break_3_p_0(
  MR_Word ssdb__Args_4);

static MR_Box MR_CALL 
ssdb__add_breakpoint_3_p_0_1(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1);

static void MR_CALL 
ssdb__add_breakpoint_3_p_0(
  MR_Word ssdb__ProcId_4);

static void MR_CALL 
ssdb__print_breakpoint_3_p_0(
  MR_Word ssdb__BreakPoint_4);

static void MR_CALL 
ssdb__set_breakpoints_filter_bits_3_p_0(
  MR_Word ssdb__BreakPoint_4,
  MR_Box ssdb__STATE_VARIABLE_Bitmap_0_11,
  MR_Box * ssdb__STATE_VARIABLE_Bitmap_12);

static void MR_CALL 
ssdb__first_unseen_3_p_0(
  MR_Word ssdb__HeadVar__1_1,
  MR_Integer ssdb__HeadVar__2_2,
  MR_Integer * ssdb__N_3);

static void MR_CALL 
ssdb__execute_ssdb_list_context_lines_3_p_0(
  MR_Word ssdb__Args_4);

static void MR_CALL 
ssdb__execute_ssdb_pop_list_dir_3_p_0(
  MR_Word ssdb__Args_4);

static void MR_CALL 
ssdb__execute_ssdb_push_list_dir_3_p_0_1(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3);

static void MR_CALL 
ssdb__execute_ssdb_push_list_dir_3_p_0(
  MR_Word ssdb__Args_4);

static void MR_CALL 
ssdb__execute_ssdb_list_path_3_p_0_1(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3);

static void MR_CALL 
ssdb__execute_ssdb_list_path_3_p_0(
  MR_Word ssdb__Args_4);

static void MR_CALL 
ssdb__execute_ssdb_list_4_p_0(
  MR_Word ssdb__Args_5,
  MR_Integer ssdb__Depth_6);

static void MR_CALL 
ssdb__execute_ssdb_list_2_4_p_0(
  MR_Integer ssdb__ContextLines_5,
  MR_Integer ssdb__Depth_6);

static void MR_CALL 
ssdb__execute_ssdb_unalias_4_p_0(
  MR_Word ssdb__Args_5,
  MR_Word ssdb__Interacting_6);

static void MR_CALL 
ssdb__execute_ssdb_alias_4_p_0_1(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3,
  MR_Box * ssdb__wrapper_arg_4);

static void MR_CALL 
ssdb__execute_ssdb_alias_4_p_0(
  MR_Word ssdb__Args_5,
  MR_Word ssdb__Interacting_6);

static void MR_CALL 
ssdb__print_alias_4_p_0_1(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3);

static void MR_CALL 
ssdb__print_alias_4_p_0(
  MR_String ssdb__Name_5,
  MR_Word ssdb__Command_6);

static void MR_CALL 
ssdb__execute_ssdb_format_param_3_p_0(
  MR_Word ssdb__STATE_VARIABLE_Args_0_20);

static void MR_CALL 
ssdb__process_options__ho1_5_p_0(
  MR_Word ssdb__Args0_7,
  MR_Word * ssdb__Args_8,
  MR_Word ssdb__Data0_9,
  MR_Word * ssdb__Res_10);

static void MR_CALL 
ssdb__process_short_options__ho6_4_p_0(
  MR_Word ssdb__Chars_6,
  MR_Word ssdb__Data0_7,
  MR_Word * ssdb__Res_8);

static MR_bool MR_CALL 
ssdb__format_param_options_3_p_0(
  MR_String ssdb__Opt_4,
  MR_Word ssdb__STATE_VARIABLE_Config_0_6,
  MR_Word * ssdb__STATE_VARIABLE_Config_7);

static void MR_CALL 
ssdb__execute_ssdb_format_3_p_0(
  MR_Word ssdb__STATE_VARIABLE_Args_0_21);

static void MR_CALL 
ssdb__process_options__ho2_5_p_0(
  MR_Word ssdb__Args0_7,
  MR_Word * ssdb__Args_8,
  MR_Word ssdb__Data0_9,
  MR_Word * ssdb__Res_10);

static void MR_CALL 
ssdb__process_short_options__ho5_4_p_0(
  MR_Word ssdb__Chars_6,
  MR_Word ssdb__Data0_7,
  MR_Word * ssdb__Res_8);

static MR_bool MR_CALL 
ssdb__format_options_3_p_0(
  MR_String ssdb__Opt_4,
  MR_Word ssdb__STATE_VARIABLE_Config_0_6,
  MR_Word * ssdb__STATE_VARIABLE_Config_7);

static void MR_CALL 
ssdb__execute_ssdb_current_4_p_0(
  MR_Word ssdb__Args_5,
  MR_Word ssdb__Event_6);

static void MR_CALL 
ssdb__print_event_info_4_p_0(
  MR_Word ssdb__Event_5,
  MR_Integer ssdb__EventNum_6);

static void MR_CALL 
ssdb__execute_ssdb_level_5_p_0(
  MR_Word ssdb__Args_6,
  MR_Integer ssdb__STATE_VARIABLE_Depth_0_14,
  MR_Integer * ssdb__STATE_VARIABLE_Depth_15);

static void MR_CALL 
ssdb__execute_ssdb_up_5_p_0(
  MR_Word ssdb__Args_6,
  MR_Integer ssdb__STATE_VARIABLE_Depth_0_9,
  MR_Integer * ssdb__STATE_VARIABLE_Depth_10);

static void MR_CALL 
ssdb__execute_ssdb_down_5_p_0(
  MR_Word ssdb__Args_6,
  MR_Integer ssdb__STATE_VARIABLE_Depth_0_9,
  MR_Integer * ssdb__STATE_VARIABLE_Depth_10);

static void MR_CALL 
ssdb__change_depth_5_p_0(
  MR_Integer ssdb__ChangedDepth_6,
  MR_Integer ssdb__STATE_VARIABLE_Depth_0_10,
  MR_Integer * ssdb__STATE_VARIABLE_Depth_11);

static void MR_CALL 
ssdb__print_frame_info_4_p_0(
  MR_Word ssdb__StackFrame_5,
  MR_Integer ssdb__StackDepth_6);

static void MR_CALL 
ssdb__execute_ssdb_vars_4_p_0(
  MR_Word ssdb__Args_5,
  MR_Integer ssdb__Depth_6);

static void MR_CALL 
ssdb__print_vars_list_4_p_0(
  MR_Word ssdb__HeadVar__1_1,
  MR_Integer ssdb__VarNum_2);

static void MR_CALL 
ssdb__execute_ssdb_browse_4_p_0(
  MR_Word ssdb__Args_5,
  MR_Integer ssdb__Depth_6);

static void MR_CALL 
ssdb__browse_var_4_p_0(
  MR_Word ssdb__ListVarValue_5,
  MR_String ssdb__VarName_6);

static void MR_CALL 
ssdb__list_var_value_to_assoc_list_2_p_0(
  MR_Word ssdb__HeadVar__1_1,
  MR_Word * ssdb__HeadVar__2_2);

static void MR_CALL 
ssdb__browse_term_3_p_0(
  MR_Word ssdb__Term_4);

static void MR_CALL 
ssdb__execute_ssdb_print_4_p_0(
  MR_Word ssdb__STATE_VARIABLE_Args_0_17,
  MR_Integer ssdb__Depth_6);

static void MR_CALL 
ssdb__process_options__ho3_5_p_0(
  MR_Word ssdb__Args0_7,
  MR_Word * ssdb__Args_8,
  MR_Word ssdb__Data0_9,
  MR_Word * ssdb__Res_10);

static void MR_CALL 
ssdb__process_short_options__ho4_4_p_0(
  MR_Word ssdb__Chars_6,
  MR_Word ssdb__Data0_7,
  MR_Word * ssdb__Res_8);

static MR_bool MR_CALL 
ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_p_0(
  MR_String ssdb__HeadVar__1_1,
  MR_Word * ssdb__HeadVar__3_3);

static void MR_CALL 
ssdb__print_browser_term_5_p_0(
  MR_Word ssdb__MaybeFormat_6,
  MR_Word ssdb__CallerType_7,
  MR_Word ssdb__Term_8);

static void MR_CALL 
ssdb__print_var_with_name_5_p_0_2(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3);

static MR_bool MR_CALL 
ssdb__print_var_with_name_5_p_0_1(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1);

static void MR_CALL 
ssdb__print_var_with_name_5_p_0(
  MR_Word ssdb__MaybeFormat_6,
  MR_Word ssdb__VarDescs_7,
  MR_String ssdb__VarName_8);

static void MR_CALL 
ssdb__print_var_5_p_0(
  MR_Word ssdb__MaybeFormat_6,
  MR_Word ssdb__CallerType_7,
  MR_Word ssdb__VarValue_8);

static void MR_CALL 
ssdb__safe_write_6_p_0(
  MR_Word ssdb__TypeInfo_for_T_21,
  MR_Word ssdb__MaybeFormat_7,
  MR_Word ssdb__CallerType_8,
  MR_String ssdb__Prefix_9,
  MR_Box ssdb__T_10);

static void MR_CALL 
ssdb__print_vars_5_p_0_1(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3);

static void MR_CALL 
ssdb__print_vars_5_p_0(
  MR_Word ssdb__MaybeFormat_6,
  MR_Word ssdb__CallerType_7,
  MR_Word ssdb__Vars_8);

static void MR_CALL 
ssdb__make_arg_univs_3_p_0(
  MR_Word ssdb__HeadVar__1_1,
  MR_Integer ssdb__Pos_2,
  MR_Word * ssdb__HeadVar__3_3);

static void MR_CALL 
ssdb__execute_ssdb_stack_4_p_0(
  MR_Word ssdb__Args_5,
  MR_Integer ssdb__Depth_6);

static void MR_CALL 
ssdb__print_stack_trace_5_p_0(
  MR_Integer ssdb__CurLevel_6,
  MR_Integer ssdb__StarDepth_7,
  MR_Integer ssdb__RemainingLines_8);

static void MR_CALL 
ssdb__print_stack_frame_6_p_0(
  MR_Char ssdb__Star_7,
  MR_Integer ssdb__Level_8,
  MR_Word ssdb__Frame_9,
  MR_Integer ssdb__SkippedFrames_10);

static void MR_CALL 
ssdb__compress_stack_frames_4_p_0(
  MR_Word ssdb__RefFrame_5,
  MR_Word ssdb__Stack_6,
  MR_Integer ssdb__Count0_7,
  MR_Integer * ssdb__Count_8);

static void MR_CALL 
ssdb__nondet_stack_contains_csn_4_p_0(
  MR_Integer ssdb__CSN_5,
  MR_Word * ssdb__Contains_6);

static void MR_CALL 
ssdb__nondet_stack_contains_csn_2_5_p_0(
  MR_Integer ssdb__CSN_6,
  MR_Integer ssdb__Depth_7,
  MR_Word * ssdb__Contains_8);

static void MR_CALL 
ssdb__print_invalid_argument_2_p_0(void);

static void MR_CALL 
ssdb__print_too_many_arguments_2_p_0(void);

static void MR_CALL 
ssdb__stack_depth_3_p_0(
  MR_Integer * ssdb__Depth_4);

static void MR_CALL 
ssdb__stack_index_4_p_0(
  MR_Integer ssdb__Num_5,
  MR_Word * ssdb__Frame_6);

static void MR_CALL 
ssdb__execute_ssdb_help_3_p_0_1(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3);

static void MR_CALL 
ssdb__execute_ssdb_help_3_p_0(
  MR_Word ssdb__Args_4);

static MR_bool MR_CALL 
ssdb__ssdb_cmd_name_2_p_0(
  MR_String ssdb__HeadVar__1_1,
  MR_Word * ssdb__HeadVar__2_2);

static void MR_CALL 
ssdb__update_next_stop_6_p_0(
  MR_Integer ssdb__EventNum_7,
  MR_Integer ssdb__CSN_8,
  MR_Word ssdb__WhatNext_9,
  MR_Word * ssdb__Retry_10);

static void MR_CALL 
ssdb__should_stop_at_this_event_8_p_0(
  MR_Word ssdb__Event_9,
  MR_Integer ssdb__EventNum_10,
  MR_Integer ssdb__CSN_11,
  MR_Word ssdb__ProcId_12,
  MR_Word * ssdb__ShouldStopAtEvent_13,
  MR_Word * ssdb__AutoRetry_14);

static void MR_CALL 
ssdb__get_shadow_stack_3_p_0(
  MR_Word * ssdb__X_4);

static void MR_CALL 
ssdb__exception_handler_exists_2_p_0_1(
  void * ssdb__env_ptr_arg);

static void MR_CALL 
ssdb__exception_handler_exists_2_p_0_3(
  void * ssdb__env_ptr_arg);

static void MR_CALL 
ssdb__exception_handler_exists_2_p_0_2(
  void * ssdb__env_ptr_arg);

static void MR_CALL 
ssdb__exception_handler_exists_2_p_0_4(
  void * ssdb__env_ptr_arg);

static MR_bool MR_CALL 
ssdb__exception_handler_exists_2_p_0(
  MR_Integer ssdb__CSN_3,
  MR_Word ssdb__StackFrames_4);

static void MR_CALL 
ssdb__reset_counters_for_retry_3_p_0(
  MR_Word ssdb__Frame_4);

static void MR_CALL 
ssdb__is_same_int_3_p_0(
  MR_Integer ssdb__IntA_4,
  MR_Integer ssdb__IntB_5,
  MR_Word * ssdb__IsSame_6);

static void MR_CALL 
ssdb__current_and_parent_frame_tracing_levels_4_p_0(
  MR_Word * ssdb__CurrentLevel_5,
  MR_Word * ssdb__ParentLevel_6);

static void MR_CALL 
ssdb__nondet_stack_index_4_p_0(
  MR_Integer ssdb__Num_5,
  MR_Word * ssdb__Frame_6);

static void MR_CALL 
ssdb__stack_top_3_p_0(
  MR_Word * ssdb__Frame_4);

static void MR_CALL 
ssdb__stack_push_3_p_0(
  MR_Word ssdb__Frame_4);

static MR_bool MR_CALL 
ssdb____Unify____bp_state_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2);

static void MR_CALL 
ssdb____Compare____bp_state_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3);

static MR_bool MR_CALL 
ssdb____Unify____breakpoint_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2);

static void MR_CALL 
ssdb____Compare____breakpoint_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3);

static MR_bool MR_CALL 
ssdb____Unify____breakpoints_map_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2);

static void MR_CALL 
ssdb____Compare____breakpoints_map_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3);

static MR_bool MR_CALL 
ssdb____Unify____debugger_state_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2);

static void MR_CALL 
ssdb____Compare____debugger_state_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3);

static MR_bool MR_CALL 
ssdb____Unify____debugging_paused_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2);

static void MR_CALL 
ssdb____Compare____debugging_paused_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3);

static MR_bool MR_CALL 
ssdb____Unify____format_config_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2);

static void MR_CALL 
ssdb____Compare____format_config_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3);

static MR_bool MR_CALL 
ssdb____Unify____list_params_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2);

static void MR_CALL 
ssdb____Compare____list_params_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3);

static MR_bool MR_CALL 
ssdb____Unify____list_var_value_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2);

static void MR_CALL 
ssdb____Compare____list_var_value_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3);

static MR_bool MR_CALL 
ssdb____Unify____next_stop_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2);

static void MR_CALL 
ssdb____Compare____next_stop_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3);

static MR_bool MR_CALL 
ssdb____Unify____pos_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2);

static void MR_CALL 
ssdb____Compare____pos_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3);

static MR_bool MR_CALL 
ssdb____Unify____ssdb_cmd_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2);

static void MR_CALL 
ssdb____Compare____ssdb_cmd_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3);

static MR_bool MR_CALL 
ssdb____Unify____ssdb_event_type_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2);

static void MR_CALL 
ssdb____Compare____ssdb_event_type_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3);

static MR_bool MR_CALL 
ssdb____Unify____ssdb_proc_id_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2);

static void MR_CALL 
ssdb____Compare____ssdb_proc_id_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3);

static MR_bool MR_CALL 
ssdb____Unify____ssdb_retry_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2);

static void MR_CALL 
ssdb____Compare____ssdb_retry_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3);

static MR_bool MR_CALL 
ssdb____Unify____ssdb_tracing_level_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2);

static void MR_CALL 
ssdb____Compare____ssdb_tracing_level_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3);

static MR_bool MR_CALL 
ssdb____Unify____stack_frame_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2);

static void MR_CALL 
ssdb____Compare____stack_frame_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3);

static MR_bool MR_CALL 
ssdb____Unify____var_name_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2);

static void MR_CALL 
ssdb____Compare____var_name_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3);

static MR_bool MR_CALL 
ssdb____Unify____var_value_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2);

static void MR_CALL 
ssdb____Compare____var_value_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3);

static MR_bool MR_CALL 
ssdb____Unify____what_next_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2);

static void MR_CALL 
ssdb____Compare____what_next_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3);


static /* final */ const MR_Box ssdb_scalar_common_1[55][2];

static /* final */ const MR_Box ssdb_scalar_common_2[16][3];

static /* final */ const MR_Box ssdb_scalar_common_3[6][1];

static /* final */ const MR_Box ssdb_scalar_common_7[5][6];

static /* final */ const MR_Box ssdb_scalar_common_8[1][8];

static /* final */ const MR_Box ssdb_scalar_common_9[2][5];

static /* final */ const MR_Box ssdb_scalar_common_13[1][7];

static /* final */ const MR_Box ssdb_scalar_common_14[3][4];


/* sealed */ struct ssdb__vector_common_type_4_0_s {
  const MR_String ssdb__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct ssdb__vector_common_type_4_0_s ssdb_vector_common_4[69];

/* sealed */ struct ssdb__vector_common_type_5_0_s {
  const MR_Word ssdb__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct ssdb__vector_common_type_5_0_s ssdb_vector_common_5[16];

/* sealed */ struct ssdb__vector_common_type_6_0_s {
  const MR_Word ssdb__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct ssdb__vector_common_type_6_0_s ssdb_vector_common_6[64];

/* sealed */ struct ssdb__vector_common_type_10_0_s {
  const MR_String ssdb__vector_common_type_10_0__vct_10_f_0;
  const MR_Integer ssdb__vector_common_type_10_0__vct_10_f_1;
  const MR_Word ssdb__vector_common_type_10_0__vct_10_f_2;
};

static /* final */ const struct ssdb__vector_common_type_10_0_s ssdb_vector_common_10[16];

/* sealed */ struct ssdb__vector_common_type_11_0_s {
  const MR_String ssdb__vector_common_type_11_0__vct_11_f_0;
  const MR_Integer ssdb__vector_common_type_11_0__vct_11_f_1;
};

static /* final */ const struct ssdb__vector_common_type_11_0_s ssdb_vector_common_11[10];

/* sealed */ struct ssdb__vector_common_type_12_0_s {
  const MR_String ssdb__vector_common_type_12_0__vct_12_f_0;
  const MR_Word ssdb__vector_common_type_12_0__vct_12_f_1;
};

static /* final */ const struct ssdb__vector_common_type_12_0_s ssdb_vector_common_12[4];



static /* final */ const MR_Box ssdb_scalar_common_1[55][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ssdb__ssdb__type_ctor_info_var_value_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "alias NUMBER step")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "alias EMPTY step")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "alias e exception")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "alias excp exception")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "alias \? help")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "alias h help")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "alias b break")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "alias c continue")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "alias d stack")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "alias P print *")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "alias p print")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "alias v vars")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "alias r retry")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "alias f finish")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "alias g goto")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "alias s step")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "quit [-y]")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "source FILENAME")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "help")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "delete NUM|*")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "disable NUM|*")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "enable NUM|*")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "break info")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "break MODULE.PRED")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[24])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "pop_list_dir")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[25])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "push_list_dir DIR ...")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "list_path [DIR ...]")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "list [NUM]")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "unalias NAME")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "alias NAME COMMAND [COMMAND-PARAMETER ...]")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) "alias [NAME]")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[31])))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) "format_param [-APBfpv] depth|size|width|lines NUM")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_String) "format [-APB] flat|raw_pretty|pretty|verbose")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[33])))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_String) "current")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "level NUM")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_String) "down [NUM]")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_String) "up [NUM]")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[37])))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_String) "stack [NUM]")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[38])))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_String) "vars")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[39])))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_String) "browse VAR|NUM")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[40])))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_String) "print [-fprv] *")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[41])))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_String) "print [-fprv] VAR|NUM")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_String) "print [-fprv]")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[43])))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_String) "retry [NUM]")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[44])))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_String) "exception")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[45])))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_String) "continue")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_String) "goto NUM")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[47])))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_String) "next")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_String) "step [NUM]")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[49])))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_String) "Supported commands: (type \140alias\' to show aliases)")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[50])))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_String) "-y")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_String) "source .ssdbrc")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ssdb_scalar_common_2[16][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ssdb__ssdb__type_ctor_info_ssdb_proc_id_0)),
    ((MR_Box) (&ssdb__ssdb__type_ctor_info_breakpoint_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ssdb_scalar_common_7[0])),
    ((MR_Box) (ssdb__execute_ssdb_help_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ssdb_scalar_common_7[0])),
    ((MR_Box) (ssdb__print_alias_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ssdb_scalar_common_13[0])),
    ((MR_Box) (ssdb__execute_ssdb_alias_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ssdb_scalar_common_7[0])),
    ((MR_Box) (ssdb__execute_ssdb_list_path_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ssdb_scalar_common_7[1])),
    ((MR_Box) (ssdb__execute_ssdb_push_list_dir_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ssdb_scalar_common_9[1])),
    ((MR_Box) (ssdb__add_breakpoint_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ssdb_scalar_common_7[2])),
    ((MR_Box) (ssdb__execute_ssdb_break_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ssdb_scalar_common_14[0])),
    ((MR_Box) (ssdb__execute_ssdb_break_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ssdb_scalar_common_7[3])),
    ((MR_Box) (ssdb__modify_breakpoint_state_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ssdb_scalar_common_7[3])),
    ((MR_Box) (ssdb__execute_ssdb_enable_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ssdb_scalar_common_7[2])),
    ((MR_Box) (ssdb__execute_ssdb_enable_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ssdb_scalar_common_7[3])),
    ((MR_Box) (ssdb__execute_ssdb_disable_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&ssdb_scalar_common_7[2])),
    ((MR_Box) (ssdb__execute_ssdb_disable_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&ssdb_scalar_common_7[3])),
    ((MR_Box) (ssdb__delete_breakpoint_3_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&ssdb_scalar_common_7[2])),
    ((MR_Box) (ssdb__execute_ssdb_delete_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ssdb_scalar_common_3[6][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((((MR_Integer) 0 << (MR_Integer) 4)) | (((((MR_Integer) 0 << (MR_Integer) 5)) | (((MR_Integer) 0 << (MR_Integer) 6)))))))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box ssdb_scalar_common_7[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ssdb__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ssdb__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ssdb__ssdb__type_ctor_info_breakpoint_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ssdb__ssdb__type_ctor_info_breakpoint_0)),
    ((MR_Box) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0)),
    ((MR_Box) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ssdb__ssdb__type_ctor_info_bp_state_0)),
    ((MR_Box) (&ssdb__ssdb__type_ctor_info_breakpoint_0)),
    ((MR_Box) (&ssdb__ssdb__type_ctor_info_breakpoint_0))
  },
};

static /* final */ const MR_Box ssdb_scalar_common_8[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ssdb__maybe__pti_maybe_1__plain_mdb__browser_info__type_ctor_info_portray_format_0)),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_browse_caller_type_0)),
    ((MR_Box) (&ssdb__ssdb__type_ctor_info_var_value_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ssdb_scalar_common_9[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ssdb__ssdb__type_ctor_info_var_value_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ssdb__ssdb__type_ctor_info_breakpoint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ssdb_scalar_common_13[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ssdb__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ssdb_scalar_common_14[3][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ssdb_scalar_common_7[4])),
    ((MR_Box) (ssdb__execute_ssdb_enable_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ssdb_scalar_common_7[4])),
    ((MR_Box) (ssdb__execute_ssdb_disable_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};


static /* final */ const struct ssdb__vector_common_type_4_0_s ssdb_vector_common_4[69] = {
  /* row 0 */   {     (MR_String) "incremental_try_all" },
  /* row 1 */   {     (MR_String) "try" },
  /* row 2 */   {     (MR_String) "try_all" },
  /* row 3 */   {     (MR_String) "try_io" },
  /* row 4 */   {     (MR_String) "try_store" },
  /* row 5 */   {     (MR_String) "-A" },
  /* row 6 */   {     (MR_String) "-B" },
  /* row 7 */   {     NULL },
  /* row 8 */   {     NULL },
  /* row 9 */   {     NULL },
  /* row 10 */   {     (MR_String) "--verbose" },
  /* row 11 */   {     NULL },
  /* row 12 */   {     NULL },
  /* row 13 */   {     NULL },
  /* row 14 */   {     NULL },
  /* row 15 */   {     NULL },
  /* row 16 */   {     NULL },
  /* row 17 */   {     NULL },
  /* row 18 */   {     NULL },
  /* row 19 */   {     NULL },
  /* row 20 */   {     NULL },
  /* row 21 */   {     NULL },
  /* row 22 */   {     (MR_String) "--raw" },
  /* row 23 */   {     NULL },
  /* row 24 */   {     (MR_String) "-P" },
  /* row 25 */   {     NULL },
  /* row 26 */   {     NULL },
  /* row 27 */   {     NULL },
  /* row 28 */   {     NULL },
  /* row 29 */   {     NULL },
  /* row 30 */   {     NULL },
  /* row 31 */   {     NULL },
  /* row 32 */   {     NULL },
  /* row 33 */   {     NULL },
  /* row 34 */   {     NULL },
  /* row 35 */   {     NULL },
  /* row 36 */   {     NULL },
  /* row 37 */   {     NULL },
  /* row 38 */   {     NULL },
  /* row 39 */   {     NULL },
  /* row 40 */   {     NULL },
  /* row 41 */   {     NULL },
  /* row 42 */   {     (MR_String) "-f" },
  /* row 43 */   {     NULL },
  /* row 44 */   {     (MR_String) "--flat" },
  /* row 45 */   {     NULL },
  /* row 46 */   {     NULL },
  /* row 47 */   {     (MR_String) "--pretty" },
  /* row 48 */   {     NULL },
  /* row 49 */   {     NULL },
  /* row 50 */   {     NULL },
  /* row 51 */   {     (MR_String) "--print-all" },
  /* row 52 */   {     NULL },
  /* row 53 */   {     NULL },
  /* row 54 */   {     (MR_String) "-r" },
  /* row 55 */   {     NULL },
  /* row 56 */   {     (MR_String) "-p" },
  /* row 57 */   {     NULL },
  /* row 58 */   {     (MR_String) "-v" },
  /* row 59 */   {     NULL },
  /* row 60 */   {     NULL },
  /* row 61 */   {     (MR_String) "--browse" },
  /* row 62 */   {     NULL },
  /* row 63 */   {     NULL },
  /* row 64 */   {     NULL },
  /* row 65 */   {     (MR_String) "--print" },
  /* row 66 */   {     NULL },
  /* row 67 */   {     NULL },
  /* row 68 */   {     NULL },
};

static /* final */ const struct ssdb__vector_common_type_5_0_s ssdb_vector_common_5[16] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 0 },
  /* row 2 */   {     (MR_Integer) 0 },
  /* row 3 */   {     (MR_Integer) 0 },
  /* row 4 */   {     (MR_Integer) 0 },
  /* row 5 */   {     (MR_Integer) 0 },
  /* row 6 */   {     (MR_Integer) 0 },
  /* row 7 */   {     (MR_Integer) 1 },
  /* row 8 */   {     (MR_Integer) 1 },
  /* row 9 */   {     (MR_Integer) 0 },
  /* row 10 */   {     (MR_Integer) 1 },
  /* row 11 */   {     (MR_Integer) 1 },
  /* row 12 */   {     (MR_Integer) 0 },
  /* row 13 */   {     (MR_Integer) 1 },
  /* row 14 */   {     (MR_Integer) 1 },
  /* row 15 */   {     (MR_Integer) 1 },
};

static /* final */ const struct ssdb__vector_common_type_6_0_s ssdb_vector_common_6[64] = {
  /* row 0 */   {     (MR_Integer) 18 },
  /* row 1 */   {     (MR_Integer) 25 },
  /* row 2 */   {     (MR_Integer) 10 },
  /* row 3 */   {     (MR_Integer) 3 },
  /* row 4 */   {     (MR_Integer) 15 },
  /* row 5 */   {     (MR_Integer) 28 },
  /* row 6 */   {     (MR_Integer) 27 },
  /* row 7 */   {     (MR_Integer) 12 },
  /* row 8 */   {     (MR_Integer) 26 },
  /* row 9 */   {     (MR_Integer) 6 },
  /* row 10 */   {     (MR_Integer) 4 },
  /* row 11 */   {     (MR_Integer) 16 },
  /* row 12 */   {     (MR_Integer) 17 },
  /* row 13 */   {     (MR_Integer) 2 },
  /* row 14 */   {     (MR_Integer) 29 },
  /* row 15 */   {     (MR_Integer) 14 },
  /* row 16 */   {     (MR_Integer) 20 },
  /* row 17 */   {     (MR_Integer) 24 },
  /* row 18 */   {     (MR_Integer) 21 },
  /* row 19 */   {     (MR_Integer) 1 },
  /* row 20 */   {     (MR_Integer) 23 },
  /* row 21 */   {     (MR_Integer) 9 },
  /* row 22 */   {     (MR_Integer) 22 },
  /* row 23 */   {     (MR_Integer) 31 },
  /* row 24 */   {     (MR_Integer) 7 },
  /* row 25 */   {     (MR_Integer) 5 },
  /* row 26 */   {     (MR_Integer) 30 },
  /* row 27 */   {     (MR_Integer) 8 },
  /* row 28 */   {     (MR_Integer) 0 },
  /* row 29 */   {     (MR_Integer) 19 },
  /* row 30 */   {     (MR_Integer) 13 },
  /* row 31 */   {     (MR_Integer) 11 },
  /* row 32 */   {     (MR_Integer) 18 },
  /* row 33 */   {     (MR_Integer) 25 },
  /* row 34 */   {     (MR_Integer) 10 },
  /* row 35 */   {     (MR_Integer) 3 },
  /* row 36 */   {     (MR_Integer) 15 },
  /* row 37 */   {     (MR_Integer) 28 },
  /* row 38 */   {     (MR_Integer) 27 },
  /* row 39 */   {     (MR_Integer) 12 },
  /* row 40 */   {     (MR_Integer) 26 },
  /* row 41 */   {     (MR_Integer) 6 },
  /* row 42 */   {     (MR_Integer) 4 },
  /* row 43 */   {     (MR_Integer) 16 },
  /* row 44 */   {     (MR_Integer) 17 },
  /* row 45 */   {     (MR_Integer) 2 },
  /* row 46 */   {     (MR_Integer) 29 },
  /* row 47 */   {     (MR_Integer) 14 },
  /* row 48 */   {     (MR_Integer) 20 },
  /* row 49 */   {     (MR_Integer) 24 },
  /* row 50 */   {     (MR_Integer) 21 },
  /* row 51 */   {     (MR_Integer) 1 },
  /* row 52 */   {     (MR_Integer) 23 },
  /* row 53 */   {     (MR_Integer) 9 },
  /* row 54 */   {     (MR_Integer) 22 },
  /* row 55 */   {     (MR_Integer) 31 },
  /* row 56 */   {     (MR_Integer) 7 },
  /* row 57 */   {     (MR_Integer) 5 },
  /* row 58 */   {     (MR_Integer) 30 },
  /* row 59 */   {     (MR_Integer) 8 },
  /* row 60 */   {     (MR_Integer) 0 },
  /* row 61 */   {     (MR_Integer) 19 },
  /* row 62 */   {     (MR_Integer) 13 },
  /* row 63 */   {     (MR_Integer) 11 },
};

static /* final */ const struct ssdb__vector_common_type_10_0_s ssdb_vector_common_10[16] = {
  /* row 0 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "--raw",
    (MR_Integer) -1,
    (MR_Word) MR_mkword(MR_mktag(1), &ssdb_scalar_common_3[4])
  },
  /* row 2 */
  {
    (MR_String) "-f",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &ssdb_scalar_common_3[2])
  },
  /* row 3 */
  {
    (MR_String) "--verbose",
    (MR_Integer) -1,
    (MR_Word) MR_mkword(MR_mktag(1), &ssdb_scalar_common_3[5])
  },
  /* row 4 */
  {
    (MR_String) "-v",
    (MR_Integer) -1,
    (MR_Word) MR_mkword(MR_mktag(1), &ssdb_scalar_common_3[5])
  },
  /* row 5 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 6 */
  {
    (MR_String) "--pretty",
    (MR_Integer) -1,
    (MR_Word) MR_mkword(MR_mktag(1), &ssdb_scalar_common_3[3])
  },
  /* row 7 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 8 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 9 */
  {
    (MR_String) "--flat",
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(1), &ssdb_scalar_common_3[2])
  },
  /* row 10 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 11 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 12 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 13 */
  {
    (MR_String) "-r",
    (MR_Integer) -1,
    (MR_Word) MR_mkword(MR_mktag(1), &ssdb_scalar_common_3[4])
  },
  /* row 14 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 15 */
  {
    (MR_String) "-p",
    (MR_Integer) -1,
    (MR_Word) MR_mkword(MR_mktag(1), &ssdb_scalar_common_3[3])
  },
};

static /* final */ const struct ssdb__vector_common_type_11_0_s ssdb_vector_common_11[10] = {
  /* row 0 */
  {
    (MR_String) "--browse",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "--print",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "--print-all",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "-A",
    (MR_Integer) 2
  },
  /* row 4 */
  {
    (MR_String) "-B",
    (MR_Integer) 0
  },
  /* row 5 */
  {
    (MR_String) "-P",
    (MR_Integer) 1
  },
  /* row 6 */
  {
    (MR_String) "depth",
    (MR_Integer) 0
  },
  /* row 7 */
  {
    (MR_String) "lines",
    (MR_Integer) 1
  },
  /* row 8 */
  {
    (MR_String) "size",
    (MR_Integer) 2
  },
  /* row 9 */
  {
    (MR_String) "width",
    (MR_Integer) 3
  },
};

static /* final */ const struct ssdb__vector_common_type_12_0_s ssdb_vector_common_12[4] = {
  /* row 0 */
  {
    (MR_String) "flat",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "pretty",
    (MR_Integer) 3
  },
  /* row 2 */
  {
    (MR_String) "raw_pretty",
    (MR_Integer) 1
  },
  /* row 3 */
  {
    (MR_String) "verbose",
    (MR_Integer) 2
  },
};


#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "ssdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.listing.mh"
#include "mdbcomp.rtti_access.mh"
#line 472 "ssdb.m"

static void MR_ssdb_sigint_handler(void)
{
    SSDB_step_next_stop();
}

#line 287 "ssdb.m"
MR_String ssdb__mutable_variable_cur_filename;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_filename_lock;
#endif

#line 289 "ssdb.m"
MR_Integer ssdb__mutable_variable_cur_line_number;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_line_number_lock;
#endif

#line 292 "ssdb.m"
MR_Integer ssdb__mutable_variable_cur_ssdb_event_number;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_event_number_lock;
#endif

#line 295 "ssdb.m"
MR_Integer ssdb__mutable_variable_cur_ssdb_csn;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_csn_lock;
#endif

#line 298 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_ssdb_next_stop;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_next_stop_lock;
#endif

#line 301 "ssdb.m"
MR_Word ssdb__mutable_variable_shadow_stack;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_shadow_stack_lock;
#endif

#line 303 "ssdb.m"
MR_Integer ssdb__mutable_variable_shadow_stack_depth;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_shadow_stack_depth_lock;
#endif

#line 306 "ssdb.m"
MR_Word ssdb__mutable_variable_nondet_shadow_stack;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_nondet_shadow_stack_lock;
#endif

#line 308 "ssdb.m"
MR_Integer ssdb__mutable_variable_nondet_shadow_stack_depth;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_nondet_shadow_stack_depth_lock;
#endif

#line 311 "ssdb.m"
MR_Word ssdb__mutable_variable_command_queue;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_command_queue_lock;
#endif

#line 314 "ssdb.m"
MR_Word ssdb__mutable_variable_aliases;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_aliases_lock;
#endif

#line 317 "ssdb.m"
MR_Word ssdb__mutable_variable_breakpoints_map;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_breakpoints_map_lock;
#endif

#line 319 "ssdb.m"
MR_BitmapPtr ssdb__mutable_variable_breakpoints_filter;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_breakpoints_filter_lock;
#endif

#line 324 "ssdb.m"
MR_Word ssdb__mutable_variable_browser_state;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_browser_state_lock;
#endif

#line 333 "ssdb.m"
MR_Word ssdb__mutable_variable_list_params;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_list_params_lock;
#endif

#line 342 "ssdb.m"
MR_Word ssdb__mutable_variable_tty_in;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_tty_in_lock;
#endif

#line 344 "ssdb.m"
MR_Word ssdb__mutable_variable_tty_out;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_tty_out_lock;
#endif

#line 347 "ssdb.m"
MR_Word ssdb__mutable_variable_saved_input_stream;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_saved_input_stream_lock;
#endif

#line 349 "ssdb.m"
MR_Word ssdb__mutable_variable_saved_output_stream;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_saved_output_stream_lock;
#endif

#line 357 "ssdb.m"
MR_Unsigned ssdb__mutable_variable_debugger_state;

#line 287 "ssdb.m"
void 
ssdb__user_init_pred_0(void)
#line 287 "ssdb.m"
{
#line 287 "ssdb.m"
	ssdb__initialise_mutable_cur_filename_0_p_0();
}

#line 289 "ssdb.m"
void 
ssdb__user_init_pred_1(void)
#line 289 "ssdb.m"
{
#line 289 "ssdb.m"
	ssdb__initialise_mutable_cur_line_number_0_p_0();
}

#line 292 "ssdb.m"
void 
ssdb__user_init_pred_2(void)
#line 292 "ssdb.m"
{
#line 292 "ssdb.m"
	ssdb__initialise_mutable_cur_ssdb_event_number_0_p_0();
}

#line 295 "ssdb.m"
void 
ssdb__user_init_pred_3(void)
#line 295 "ssdb.m"
{
#line 295 "ssdb.m"
	ssdb__initialise_mutable_cur_ssdb_csn_0_p_0();
}

#line 298 "ssdb.m"
void 
ssdb__user_init_pred_4(void)
#line 298 "ssdb.m"
{
#line 298 "ssdb.m"
	ssdb__initialise_mutable_cur_ssdb_next_stop_0_p_0();
}

#line 301 "ssdb.m"
void 
ssdb__user_init_pred_5(void)
#line 301 "ssdb.m"
{
#line 301 "ssdb.m"
	ssdb__initialise_mutable_shadow_stack_0_p_0();
}

#line 303 "ssdb.m"
void 
ssdb__user_init_pred_6(void)
#line 303 "ssdb.m"
{
#line 303 "ssdb.m"
	ssdb__initialise_mutable_shadow_stack_depth_0_p_0();
}

#line 306 "ssdb.m"
void 
ssdb__user_init_pred_7(void)
#line 306 "ssdb.m"
{
#line 306 "ssdb.m"
	ssdb__initialise_mutable_nondet_shadow_stack_0_p_0();
}

#line 308 "ssdb.m"
void 
ssdb__user_init_pred_8(void)
#line 308 "ssdb.m"
{
#line 308 "ssdb.m"
	ssdb__initialise_mutable_nondet_shadow_stack_depth_0_p_0();
}

#line 311 "ssdb.m"
void 
ssdb__user_init_pred_9(void)
#line 311 "ssdb.m"
{
#line 311 "ssdb.m"
	ssdb__initialise_mutable_command_queue_0_p_0();
}

#line 314 "ssdb.m"
void 
ssdb__user_init_pred_10(void)
#line 314 "ssdb.m"
{
#line 314 "ssdb.m"
	ssdb__initialise_mutable_aliases_0_p_0();
}

#line 317 "ssdb.m"
void 
ssdb__user_init_pred_11(void)
#line 317 "ssdb.m"
{
#line 317 "ssdb.m"
	ssdb__initialise_mutable_breakpoints_map_0_p_0();
}

#line 319 "ssdb.m"
void 
ssdb__user_init_pred_12(void)
#line 319 "ssdb.m"
{
#line 319 "ssdb.m"
	ssdb__initialise_mutable_breakpoints_filter_0_p_0();
}

#line 324 "ssdb.m"
void 
ssdb__user_init_pred_13(void)
#line 324 "ssdb.m"
{
#line 324 "ssdb.m"
	ssdb__initialise_mutable_browser_state_0_p_0();
}

#line 333 "ssdb.m"
void 
ssdb__user_init_pred_14(void)
#line 333 "ssdb.m"
{
#line 333 "ssdb.m"
	ssdb__initialise_mutable_list_params_0_p_0();
}

#line 342 "ssdb.m"
void 
ssdb__user_init_pred_15(void)
#line 342 "ssdb.m"
{
#line 342 "ssdb.m"
	ssdb__initialise_mutable_tty_in_0_p_0();
}

#line 344 "ssdb.m"
void 
ssdb__user_init_pred_16(void)
#line 344 "ssdb.m"
{
#line 344 "ssdb.m"
	ssdb__initialise_mutable_tty_out_0_p_0();
}

#line 347 "ssdb.m"
void 
ssdb__user_init_pred_17(void)
#line 347 "ssdb.m"
{
#line 347 "ssdb.m"
	ssdb__initialise_mutable_saved_input_stream_0_p_0();
}

#line 349 "ssdb.m"
void 
ssdb__user_init_pred_18(void)
#line 349 "ssdb.m"
{
#line 349 "ssdb.m"
	ssdb__initialise_mutable_saved_output_stream_0_p_0();
}

#line 357 "ssdb.m"
void 
ssdb__user_init_pred_19(void)
#line 357 "ssdb.m"
{
#line 357 "ssdb.m"
	ssdb__initialise_mutable_debugger_state_0_p_0();
}

#line 360 "ssdb.m"
void 
ssdb__user_init_pred_20(void)
#line 360 "ssdb.m"
{
#line 360 "ssdb.m"
	ssdb__init_debugger_state_2_p_0();
}

#line 532 "ssdb.m"
void 
SSDB_step_next_stop(void)
#line 532 "ssdb.m"
{
#line 532 "ssdb.m"
	ssdb__step_next_stop_2_p_0();
}


static const MR_FA_PseudoTypeInfo_Struct1 ssdb__maybe__pti_maybe_1__plain_mdb__browser_info__type_ctor_info_portray_format_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ssdb__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_bp_state_0_0 = {
  (MR_String) "bp_state_enabled",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_bp_state_0_1 = {
  (MR_String) "bp_state_disabled",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ssdb__ssdb__enum_value_ordered_bp_state_0[2] = {
  &ssdb__ssdb__enum_functor_desc_bp_state_0_0,
  &ssdb__ssdb__enum_functor_desc_bp_state_0_1
};

static const MR_EnumFunctorDescPtr ssdb__ssdb__enum_name_ordered_bp_state_0[2] = {
  &ssdb__ssdb__enum_functor_desc_bp_state_0_1,
  &ssdb__ssdb__enum_functor_desc_bp_state_0_0
};

static const MR_Integer ssdb__ssdb__functor_number_map_bp_state_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ssdb__ssdb__type_ctor_info_bp_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ssdb____Unify____bp_state_0_0_10001)),
  ((MR_Box) (ssdb____Compare____bp_state_0_0_10001)),
  (MR_String) "ssdb",
  (MR_String) "bp_state",
  {     ssdb__ssdb__enum_name_ordered_bp_state_0 },
  {     ssdb__ssdb__enum_value_ordered_bp_state_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ssdb__ssdb__functor_number_map_bp_state_0
};

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_breakpoint_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0,
  (MR_PseudoTypeInfo) &ssdb__ssdb__type_ctor_info_bp_state_0
};

static const MR_ConstString ssdb__ssdb__field_names_breakpoint_0_0[3] = {
  (MR_String) "bp_number",
  (MR_String) "bp_proc_id",
  (MR_String) "bp_state"
};

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_breakpoint_0_0 = {
  (MR_String) "breakpoint",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ssdb__ssdb__field_types_breakpoint_0_0,
  ssdb__ssdb__field_names_breakpoint_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_breakpoint_0_0[1] = {
  &ssdb__ssdb__du_functor_desc_breakpoint_0_0
};

static const MR_DuPtagLayout ssdb__ssdb__du_ptag_ordered_breakpoint_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ssdb__ssdb__du_stag_ordered_breakpoint_0_0
  }
};

static const MR_DuFunctorDescPtr ssdb__ssdb__du_name_ordered_breakpoint_0[1] = {
  &ssdb__ssdb__du_functor_desc_breakpoint_0_0
};

static const MR_Integer ssdb__ssdb__functor_number_map_breakpoint_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ssdb__ssdb__type_ctor_info_breakpoint_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ssdb____Unify____breakpoint_0_0_10001)),
  ((MR_Box) (ssdb____Compare____breakpoint_0_0_10001)),
  (MR_String) "ssdb",
  (MR_String) "breakpoint",
  {     ssdb__ssdb__du_name_ordered_breakpoint_0 },
  {     ssdb__ssdb__du_ptag_ordered_breakpoint_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ssdb__ssdb__functor_number_map_breakpoint_0
};

static const MR_FA_TypeInfo_Struct2 ssdb__tree234__ti_tree234_2ssdb__type_ctor_info_ssdb_proc_id_0ssdb__type_ctor_info_breakpoint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0,
    (MR_TypeInfo) &ssdb__ssdb__type_ctor_info_breakpoint_0
  }
};

const MR_TypeCtorInfo_Struct ssdb__ssdb__type_ctor_info_breakpoints_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ssdb____Unify____breakpoints_map_0_0_10001)),
  ((MR_Box) (ssdb____Compare____breakpoints_map_0_0_10001)),
  (MR_String) "ssdb",
  (MR_String) "breakpoints_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ssdb__tree234__ti_tree234_2ssdb__type_ctor_info_ssdb_proc_id_0ssdb__type_ctor_info_breakpoint_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_debugger_state_0_0 = {
  (MR_String) "debugger_off",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_debugger_state_0_1 = {
  (MR_String) "debugger_on",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ssdb__ssdb__enum_value_ordered_debugger_state_0[2] = {
  &ssdb__ssdb__enum_functor_desc_debugger_state_0_0,
  &ssdb__ssdb__enum_functor_desc_debugger_state_0_1
};

static const MR_EnumFunctorDescPtr ssdb__ssdb__enum_name_ordered_debugger_state_0[2] = {
  &ssdb__ssdb__enum_functor_desc_debugger_state_0_0,
  &ssdb__ssdb__enum_functor_desc_debugger_state_0_1
};

static const MR_Integer ssdb__ssdb__functor_number_map_debugger_state_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ssdb__ssdb__type_ctor_info_debugger_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ssdb____Unify____debugger_state_0_0_10001)),
  ((MR_Box) (ssdb____Compare____debugger_state_0_0_10001)),
  (MR_String) "ssdb",
  (MR_String) "debugger_state",
  {     ssdb__ssdb__enum_name_ordered_debugger_state_0 },
  {     ssdb__ssdb__enum_value_ordered_debugger_state_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ssdb__ssdb__functor_number_map_debugger_state_0
};

const MR_TypeCtorInfo_Struct ssdb__ssdb__type_ctor_info_debugging_paused_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ssdb____Unify____debugging_paused_0_0_10001)),
  ((MR_Box) (ssdb____Compare____debugging_paused_0_0_10001)),
  (MR_String) "ssdb",
  (MR_String) "debugging_paused",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ssdb__ssdb__type_ctor_info_debugger_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_format_config_0_0[7] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString ssdb__ssdb__field_names_format_config_0_0[7] = {
  (MR_String) "print",
  (MR_String) "browse",
  (MR_String) "print_all",
  (MR_String) "f",
  (MR_String) "r",
  (MR_String) "v",
  (MR_String) "p"
};

static const MR_DuArgLocn ssdb__ssdb__field_locns_format_config_0_0[7] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 6,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_format_config_0_0 = {
  (MR_String) "format_config",
  (MR_Integer) 7,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ssdb__ssdb__field_types_format_config_0_0,
  ssdb__ssdb__field_names_format_config_0_0,
  ssdb__ssdb__field_locns_format_config_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_format_config_0_0[1] = {
  &ssdb__ssdb__du_functor_desc_format_config_0_0
};

static const MR_DuPtagLayout ssdb__ssdb__du_ptag_ordered_format_config_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ssdb__ssdb__du_stag_ordered_format_config_0_0
  }
};

static const MR_DuFunctorDescPtr ssdb__ssdb__du_name_ordered_format_config_0[1] = {
  &ssdb__ssdb__du_functor_desc_format_config_0_0
};

static const MR_Integer ssdb__ssdb__functor_number_map_format_config_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ssdb__ssdb__type_ctor_info_format_config_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ssdb____Unify____format_config_0_0_10001)),
  ((MR_Box) (ssdb____Compare____format_config_0_0_10001)),
  (MR_String) "ssdb",
  (MR_String) "format_config",
  {     ssdb__ssdb__du_name_ordered_format_config_0 },
  {     ssdb__ssdb__du_ptag_ordered_format_config_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ssdb__ssdb__functor_number_map_format_config_0
};

static const MR_FA_TypeInfo_Struct1 ssdb__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_list_params_0_0[2] = {
  (MR_PseudoTypeInfo) &ssdb__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString ssdb__ssdb__field_names_list_params_0_0[2] = {
  (MR_String) "list_path",
  (MR_String) "list_context_lines"
};

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_list_params_0_0 = {
  (MR_String) "list_params",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ssdb__ssdb__field_types_list_params_0_0,
  ssdb__ssdb__field_names_list_params_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_list_params_0_0[1] = {
  &ssdb__ssdb__du_functor_desc_list_params_0_0
};

static const MR_DuPtagLayout ssdb__ssdb__du_ptag_ordered_list_params_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ssdb__ssdb__du_stag_ordered_list_params_0_0
  }
};

static const MR_DuFunctorDescPtr ssdb__ssdb__du_name_ordered_list_params_0[1] = {
  &ssdb__ssdb__du_functor_desc_list_params_0_0
};

static const MR_Integer ssdb__ssdb__functor_number_map_list_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ssdb__ssdb__type_ctor_info_list_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ssdb____Unify____list_params_0_0_10001)),
  ((MR_Box) (ssdb____Compare____list_params_0_0_10001)),
  (MR_String) "ssdb",
  (MR_String) "list_params",
  {     ssdb__ssdb__du_name_ordered_list_params_0 },
  {     ssdb__ssdb__du_ptag_ordered_list_params_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ssdb__ssdb__functor_number_map_list_params_0
};

static const MR_FA_TypeInfo_Struct1 ssdb__list__ti_list_1ssdb__type_ctor_info_var_value_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ssdb__ssdb__type_ctor_info_var_value_0
  }
};

const MR_TypeCtorInfo_Struct ssdb__ssdb__type_ctor_info_list_var_value_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ssdb____Unify____list_var_value_0_0_10001)),
  ((MR_Box) (ssdb____Compare____list_var_value_0_0_10001)),
  (MR_String) "ssdb",
  (MR_String) "list_var_value",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ssdb__list__ti_list_1ssdb__type_ctor_info_var_value_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_next_stop_0_0 = {
  (MR_String) "ns_step",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_next_stop_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_next_stop_0_1 = {
  (MR_String) "ns_next",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ssdb__ssdb__field_types_next_stop_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_next_stop_0_2 = {
  (MR_String) "ns_continue",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_next_stop_0_3[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ssdb__ssdb__type_ctor_info_ssdb_retry_0
};

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_next_stop_0_3 = {
  (MR_String) "ns_final_port",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 3,
  ssdb__ssdb__field_types_next_stop_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_next_stop_0_4[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ssdb__ssdb__type_ctor_info_ssdb_retry_0
};

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_next_stop_0_4 = {
  (MR_String) "ns_final_port_nondet",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 4,
  ssdb__ssdb__field_types_next_stop_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_next_stop_0_5 = {
  (MR_String) "ns_nonexit",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_next_stop_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_next_stop_0_6 = {
  (MR_String) "ns_goto",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 6,
  ssdb__ssdb__field_types_next_stop_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_next_stop_0_7 = {
  (MR_String) "ns_exception",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_next_stop_0_0[4] = {
  &ssdb__ssdb__du_functor_desc_next_stop_0_0,
  &ssdb__ssdb__du_functor_desc_next_stop_0_2,
  &ssdb__ssdb__du_functor_desc_next_stop_0_5,
  &ssdb__ssdb__du_functor_desc_next_stop_0_7
};

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_next_stop_0_1[1] = {
  &ssdb__ssdb__du_functor_desc_next_stop_0_1
};

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_next_stop_0_2[1] = {
  &ssdb__ssdb__du_functor_desc_next_stop_0_3
};

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_next_stop_0_3[2] = {
  &ssdb__ssdb__du_functor_desc_next_stop_0_4,
  &ssdb__ssdb__du_functor_desc_next_stop_0_6
};

static const MR_DuPtagLayout ssdb__ssdb__du_ptag_ordered_next_stop_0[4] = {
  {
    (MR_Integer) 4,
    MR_SECTAG_LOCAL,
    ssdb__ssdb__du_stag_ordered_next_stop_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ssdb__ssdb__du_stag_ordered_next_stop_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ssdb__ssdb__du_stag_ordered_next_stop_0_2
  },
  {
    (MR_Integer) 2,
    MR_SECTAG_REMOTE,
    ssdb__ssdb__du_stag_ordered_next_stop_0_3
  }
};

static const MR_DuFunctorDescPtr ssdb__ssdb__du_name_ordered_next_stop_0[8] = {
  &ssdb__ssdb__du_functor_desc_next_stop_0_2,
  &ssdb__ssdb__du_functor_desc_next_stop_0_7,
  &ssdb__ssdb__du_functor_desc_next_stop_0_3,
  &ssdb__ssdb__du_functor_desc_next_stop_0_4,
  &ssdb__ssdb__du_functor_desc_next_stop_0_6,
  &ssdb__ssdb__du_functor_desc_next_stop_0_1,
  &ssdb__ssdb__du_functor_desc_next_stop_0_5,
  &ssdb__ssdb__du_functor_desc_next_stop_0_0
};

static const MR_Integer ssdb__ssdb__functor_number_map_next_stop_0[8] = {
  (MR_Integer) 7,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 4,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ssdb__ssdb__type_ctor_info_next_stop_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ssdb____Unify____next_stop_0_0_10001)),
  ((MR_Box) (ssdb____Compare____next_stop_0_0_10001)),
  (MR_String) "ssdb",
  (MR_String) "next_stop",
  {     ssdb__ssdb__du_name_ordered_next_stop_0 },
  {     ssdb__ssdb__du_ptag_ordered_next_stop_0 },
  (MR_Integer) 8,
  (MR_Integer) 4,
  ssdb__ssdb__functor_number_map_next_stop_0
};

const MR_TypeCtorInfo_Struct ssdb__ssdb__type_ctor_info_pos_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ssdb____Unify____pos_0_0_10001)),
  ((MR_Box) (ssdb____Compare____pos_0_0_10001)),
  (MR_String) "ssdb",
  (MR_String) "pos",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_0 = {
  (MR_String) "ssdb_step",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_1 = {
  (MR_String) "ssdb_next",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_2 = {
  (MR_String) "ssdb_goto",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_3 = {
  (MR_String) "ssdb_continue",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_4 = {
  (MR_String) "ssdb_finish",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_5 = {
  (MR_String) "ssdb_return",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_6 = {
  (MR_String) "ssdb_exception",
  (MR_Integer) 6
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_7 = {
  (MR_String) "ssdb_retry",
  (MR_Integer) 7
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_8 = {
  (MR_String) "ssdb_stack",
  (MR_Integer) 8
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_9 = {
  (MR_String) "ssdb_print",
  (MR_Integer) 9
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_10 = {
  (MR_String) "ssdb_browse",
  (MR_Integer) 10
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_11 = {
  (MR_String) "ssdb_vars",
  (MR_Integer) 11
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_12 = {
  (MR_String) "ssdb_down",
  (MR_Integer) 12
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_13 = {
  (MR_String) "ssdb_up",
  (MR_Integer) 13
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_14 = {
  (MR_String) "ssdb_level",
  (MR_Integer) 14
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_15 = {
  (MR_String) "ssdb_current",
  (MR_Integer) 15
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_16 = {
  (MR_String) "ssdb_format",
  (MR_Integer) 16
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_17 = {
  (MR_String) "ssdb_format_param",
  (MR_Integer) 17
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_18 = {
  (MR_String) "ssdb_alias",
  (MR_Integer) 18
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_19 = {
  (MR_String) "ssdb_unalias",
  (MR_Integer) 19
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_20 = {
  (MR_String) "ssdb_list",
  (MR_Integer) 20
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_21 = {
  (MR_String) "ssdb_list_path",
  (MR_Integer) 21
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_22 = {
  (MR_String) "ssdb_push_list_dir",
  (MR_Integer) 22
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_23 = {
  (MR_String) "ssdb_pop_list_dir",
  (MR_Integer) 23
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_24 = {
  (MR_String) "ssdb_list_context_lines",
  (MR_Integer) 24
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_25 = {
  (MR_String) "ssdb_break",
  (MR_Integer) 25
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_26 = {
  (MR_String) "ssdb_enable",
  (MR_Integer) 26
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_27 = {
  (MR_String) "ssdb_disable",
  (MR_Integer) 27
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_28 = {
  (MR_String) "ssdb_delete",
  (MR_Integer) 28
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_29 = {
  (MR_String) "ssdb_help",
  (MR_Integer) 29
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_30 = {
  (MR_String) "ssdb_source",
  (MR_Integer) 30
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_31 = {
  (MR_String) "ssdb_quit",
  (MR_Integer) 31
};

static const MR_EnumFunctorDescPtr ssdb__ssdb__enum_value_ordered_ssdb_cmd_0[32] = {
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_0,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_1,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_2,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_3,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_4,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_5,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_6,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_7,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_8,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_9,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_10,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_11,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_12,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_13,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_14,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_15,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_16,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_17,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_18,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_19,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_20,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_21,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_22,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_23,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_24,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_25,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_26,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_27,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_28,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_29,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_30,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_31
};

static const MR_EnumFunctorDescPtr ssdb__ssdb__enum_name_ordered_ssdb_cmd_0[32] = {
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_18,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_25,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_10,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_3,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_15,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_28,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_27,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_12,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_26,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_6,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_4,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_16,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_17,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_2,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_29,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_14,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_20,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_24,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_21,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_1,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_23,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_9,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_22,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_31,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_7,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_5,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_30,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_8,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_0,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_19,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_13,
  &ssdb__ssdb__enum_functor_desc_ssdb_cmd_0_11
};

static const MR_Integer ssdb__ssdb__functor_number_map_ssdb_cmd_0[32] = {
  (MR_Integer) 28,
  (MR_Integer) 19,
  (MR_Integer) 13,
  (MR_Integer) 3,
  (MR_Integer) 10,
  (MR_Integer) 25,
  (MR_Integer) 9,
  (MR_Integer) 24,
  (MR_Integer) 27,
  (MR_Integer) 21,
  (MR_Integer) 2,
  (MR_Integer) 31,
  (MR_Integer) 7,
  (MR_Integer) 30,
  (MR_Integer) 15,
  (MR_Integer) 4,
  (MR_Integer) 11,
  (MR_Integer) 12,
  (MR_Integer) 0,
  (MR_Integer) 29,
  (MR_Integer) 16,
  (MR_Integer) 18,
  (MR_Integer) 22,
  (MR_Integer) 20,
  (MR_Integer) 17,
  (MR_Integer) 1,
  (MR_Integer) 8,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 14,
  (MR_Integer) 26,
  (MR_Integer) 23
};

const MR_TypeCtorInfo_Struct ssdb__ssdb__type_ctor_info_ssdb_cmd_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ssdb____Unify____ssdb_cmd_0_0_10001)),
  ((MR_Box) (ssdb____Compare____ssdb_cmd_0_0_10001)),
  (MR_String) "ssdb",
  (MR_String) "ssdb_cmd",
  {     ssdb__ssdb__enum_name_ordered_ssdb_cmd_0 },
  {     ssdb__ssdb__enum_value_ordered_ssdb_cmd_0 },
  (MR_Integer) 32,
  (MR_Integer) 4,
  ssdb__ssdb__functor_number_map_ssdb_cmd_0
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_0 = {
  (MR_String) "ssdb_call",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_1 = {
  (MR_String) "ssdb_exit",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_2 = {
  (MR_String) "ssdb_fail",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_3 = {
  (MR_String) "ssdb_call_nondet",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_4 = {
  (MR_String) "ssdb_exit_nondet",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_5 = {
  (MR_String) "ssdb_redo_nondet",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_6 = {
  (MR_String) "ssdb_fail_nondet",
  (MR_Integer) 6
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_7 = {
  (MR_String) "ssdb_excp",
  (MR_Integer) 7
};

static const MR_EnumFunctorDescPtr ssdb__ssdb__enum_value_ordered_ssdb_event_type_0[8] = {
  &ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_0,
  &ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_1,
  &ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_2,
  &ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_3,
  &ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_4,
  &ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_5,
  &ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_6,
  &ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_7
};

static const MR_EnumFunctorDescPtr ssdb__ssdb__enum_name_ordered_ssdb_event_type_0[8] = {
  &ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_0,
  &ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_3,
  &ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_7,
  &ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_1,
  &ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_4,
  &ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_2,
  &ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_6,
  &ssdb__ssdb__enum_functor_desc_ssdb_event_type_0_5
};

static const MR_Integer ssdb__ssdb__functor_number_map_ssdb_event_type_0[8] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 7,
  (MR_Integer) 6,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct ssdb__ssdb__type_ctor_info_ssdb_event_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ssdb____Unify____ssdb_event_type_0_0_10001)),
  ((MR_Box) (ssdb____Compare____ssdb_event_type_0_0_10001)),
  (MR_String) "ssdb",
  (MR_String) "ssdb_event_type",
  {     ssdb__ssdb__enum_name_ordered_ssdb_event_type_0 },
  {     ssdb__ssdb__enum_value_ordered_ssdb_event_type_0 },
  (MR_Integer) 8,
  (MR_Integer) 4,
  ssdb__ssdb__functor_number_map_ssdb_event_type_0
};

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_ssdb_proc_id_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_ConstString ssdb__ssdb__field_names_ssdb_proc_id_0_0[2] = {
  (MR_String) "module_name",
  (MR_String) "proc_name"
};

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_ssdb_proc_id_0_0 = {
  (MR_String) "ssdb_proc_id",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ssdb__ssdb__field_types_ssdb_proc_id_0_0,
  ssdb__ssdb__field_names_ssdb_proc_id_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_ssdb_proc_id_0_0[1] = {
  &ssdb__ssdb__du_functor_desc_ssdb_proc_id_0_0
};

static const MR_DuPtagLayout ssdb__ssdb__du_ptag_ordered_ssdb_proc_id_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ssdb__ssdb__du_stag_ordered_ssdb_proc_id_0_0
  }
};

static const MR_DuFunctorDescPtr ssdb__ssdb__du_name_ordered_ssdb_proc_id_0[1] = {
  &ssdb__ssdb__du_functor_desc_ssdb_proc_id_0_0
};

static const MR_Integer ssdb__ssdb__functor_number_map_ssdb_proc_id_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ssdb__ssdb__type_ctor_info_ssdb_proc_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ssdb____Unify____ssdb_proc_id_0_0_10001)),
  ((MR_Box) (ssdb____Compare____ssdb_proc_id_0_0_10001)),
  (MR_String) "ssdb",
  (MR_String) "ssdb_proc_id",
  {     ssdb__ssdb__du_name_ordered_ssdb_proc_id_0 },
  {     ssdb__ssdb__du_ptag_ordered_ssdb_proc_id_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ssdb__ssdb__functor_number_map_ssdb_proc_id_0
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_retry_0_0 = {
  (MR_String) "do_retry",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_retry_0_1 = {
  (MR_String) "do_not_retry",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ssdb__ssdb__enum_value_ordered_ssdb_retry_0[2] = {
  &ssdb__ssdb__enum_functor_desc_ssdb_retry_0_0,
  &ssdb__ssdb__enum_functor_desc_ssdb_retry_0_1
};

static const MR_EnumFunctorDescPtr ssdb__ssdb__enum_name_ordered_ssdb_retry_0[2] = {
  &ssdb__ssdb__enum_functor_desc_ssdb_retry_0_1,
  &ssdb__ssdb__enum_functor_desc_ssdb_retry_0_0
};

static const MR_Integer ssdb__ssdb__functor_number_map_ssdb_retry_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ssdb__ssdb__type_ctor_info_ssdb_retry_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ssdb____Unify____ssdb_retry_0_0_10001)),
  ((MR_Box) (ssdb____Compare____ssdb_retry_0_0_10001)),
  (MR_String) "ssdb",
  (MR_String) "ssdb_retry",
  {     ssdb__ssdb__enum_name_ordered_ssdb_retry_0 },
  {     ssdb__ssdb__enum_value_ordered_ssdb_retry_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ssdb__ssdb__functor_number_map_ssdb_retry_0
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_tracing_level_0_0 = {
  (MR_String) "deep",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ssdb__ssdb__enum_functor_desc_ssdb_tracing_level_0_1 = {
  (MR_String) "shallow",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ssdb__ssdb__enum_value_ordered_ssdb_tracing_level_0[2] = {
  &ssdb__ssdb__enum_functor_desc_ssdb_tracing_level_0_0,
  &ssdb__ssdb__enum_functor_desc_ssdb_tracing_level_0_1
};

static const MR_EnumFunctorDescPtr ssdb__ssdb__enum_name_ordered_ssdb_tracing_level_0[2] = {
  &ssdb__ssdb__enum_functor_desc_ssdb_tracing_level_0_0,
  &ssdb__ssdb__enum_functor_desc_ssdb_tracing_level_0_1
};

static const MR_Integer ssdb__ssdb__functor_number_map_ssdb_tracing_level_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ssdb__ssdb__type_ctor_info_ssdb_tracing_level_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ssdb____Unify____ssdb_tracing_level_0_0_10001)),
  ((MR_Box) (ssdb____Compare____ssdb_tracing_level_0_0_10001)),
  (MR_String) "ssdb",
  (MR_String) "ssdb_tracing_level",
  {     ssdb__ssdb__enum_name_ordered_ssdb_tracing_level_0 },
  {     ssdb__ssdb__enum_value_ordered_ssdb_tracing_level_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ssdb__ssdb__functor_number_map_ssdb_tracing_level_0
};

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_stack_frame_0_0[8] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ssdb__list__ti_list_1ssdb__type_ctor_info_var_value_0,
  (MR_PseudoTypeInfo) &ssdb__ssdb__type_ctor_info_ssdb_tracing_level_0
};

static const MR_ConstString ssdb__ssdb__field_names_stack_frame_0_0[8] = {
  (MR_String) "sf_event_number",
  (MR_String) "sf_csn",
  (MR_String) "sf_depth",
  (MR_String) "sf_proc_id",
  (MR_String) "sf_call_site_file",
  (MR_String) "sf_call_site_line",
  (MR_String) "sf_list_var_value",
  (MR_String) "sf_tracing_level"
};

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_stack_frame_0_0 = {
  (MR_String) "stack_frame",
  (MR_Integer) 8,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ssdb__ssdb__field_types_stack_frame_0_0,
  ssdb__ssdb__field_names_stack_frame_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_stack_frame_0_0[1] = {
  &ssdb__ssdb__du_functor_desc_stack_frame_0_0
};

static const MR_DuPtagLayout ssdb__ssdb__du_ptag_ordered_stack_frame_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ssdb__ssdb__du_stag_ordered_stack_frame_0_0
  }
};

static const MR_DuFunctorDescPtr ssdb__ssdb__du_name_ordered_stack_frame_0[1] = {
  &ssdb__ssdb__du_functor_desc_stack_frame_0_0
};

static const MR_Integer ssdb__ssdb__functor_number_map_stack_frame_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ssdb__ssdb__type_ctor_info_stack_frame_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ssdb____Unify____stack_frame_0_0_10001)),
  ((MR_Box) (ssdb____Compare____stack_frame_0_0_10001)),
  (MR_String) "ssdb",
  (MR_String) "stack_frame",
  {     ssdb__ssdb__du_name_ordered_stack_frame_0 },
  {     ssdb__ssdb__du_ptag_ordered_stack_frame_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ssdb__ssdb__functor_number_map_stack_frame_0
};

const MR_TypeCtorInfo_Struct ssdb__ssdb__type_ctor_info_var_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ssdb____Unify____var_name_0_0_10001)),
  ((MR_Box) (ssdb____Compare____var_name_0_0_10001)),
  (MR_String) "ssdb",
  (MR_String) "var_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_var_value_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_var_value_0_0 = {
  (MR_String) "unbound_head_var",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ssdb__ssdb__field_types_var_value_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_var_value_0_1[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) (MR_Integer) 513
};

static const MR_DuExistLocn ssdb__ssdb__exist_locns_var_value_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) -1
  }
};

static const MR_DuExistInfo ssdb__ssdb__exist_info_var_value_0_1 = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  ssdb__ssdb__exist_locns_var_value_0_1,
  NULL
};

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_var_value_0_1 = {
  (MR_String) "bound_head_var",
  (MR_Integer) 3,
  (MR_Integer) 4,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ssdb__ssdb__field_types_var_value_0_1,
  NULL,
  NULL,
  &ssdb__ssdb__exist_info_var_value_0_1,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_var_value_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) (MR_Integer) 513
};

static const MR_DuExistLocn ssdb__ssdb__exist_locns_var_value_0_2[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) -1
  }
};

static const MR_DuExistInfo ssdb__ssdb__exist_info_var_value_0_2 = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  ssdb__ssdb__exist_locns_var_value_0_2,
  NULL
};

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_var_value_0_2 = {
  (MR_String) "bound_other_var",
  (MR_Integer) 2,
  (MR_Integer) 2,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  ssdb__ssdb__field_types_var_value_0_2,
  NULL,
  NULL,
  &ssdb__ssdb__exist_info_var_value_0_2,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_var_value_0_0[1] = {
  &ssdb__ssdb__du_functor_desc_var_value_0_0
};

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_var_value_0_1[1] = {
  &ssdb__ssdb__du_functor_desc_var_value_0_1
};

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_var_value_0_2[1] = {
  &ssdb__ssdb__du_functor_desc_var_value_0_2
};

static const MR_DuPtagLayout ssdb__ssdb__du_ptag_ordered_var_value_0[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ssdb__ssdb__du_stag_ordered_var_value_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ssdb__ssdb__du_stag_ordered_var_value_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ssdb__ssdb__du_stag_ordered_var_value_0_2
  }
};

static const MR_DuFunctorDescPtr ssdb__ssdb__du_name_ordered_var_value_0[3] = {
  &ssdb__ssdb__du_functor_desc_var_value_0_1,
  &ssdb__ssdb__du_functor_desc_var_value_0_2,
  &ssdb__ssdb__du_functor_desc_var_value_0_0
};

static const MR_Integer ssdb__ssdb__functor_number_map_var_value_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ssdb__ssdb__type_ctor_info_var_value_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ssdb____Unify____var_value_0_0_10001)),
  ((MR_Box) (ssdb____Compare____var_value_0_0_10001)),
  (MR_String) "ssdb",
  (MR_String) "var_value",
  {     ssdb__ssdb__du_name_ordered_var_value_0 },
  {     ssdb__ssdb__du_ptag_ordered_var_value_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  ssdb__ssdb__functor_number_map_var_value_0
};

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_what_next_0_0 = {
  (MR_String) "wn_step",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_what_next_0_1 = {
  (MR_String) "wn_next",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_what_next_0_2 = {
  (MR_String) "wn_continue",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_what_next_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_what_next_0_3 = {
  (MR_String) "wn_finish",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 3,
  ssdb__ssdb__field_types_what_next_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_what_next_0_4 = {
  (MR_String) "wn_return",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_what_next_0_5 = {
  (MR_String) "wn_exception",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_what_next_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_what_next_0_6 = {
  (MR_String) "wn_retry",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 6,
  ssdb__ssdb__field_types_what_next_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_what_next_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_what_next_0_7 = {
  (MR_String) "wn_retry_nondet",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 7,
  ssdb__ssdb__field_types_what_next_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ssdb__ssdb__field_types_what_next_0_8[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc ssdb__ssdb__du_functor_desc_what_next_0_8 = {
  (MR_String) "wn_goto",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 8,
  ssdb__ssdb__field_types_what_next_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_what_next_0_0[5] = {
  &ssdb__ssdb__du_functor_desc_what_next_0_0,
  &ssdb__ssdb__du_functor_desc_what_next_0_1,
  &ssdb__ssdb__du_functor_desc_what_next_0_2,
  &ssdb__ssdb__du_functor_desc_what_next_0_4,
  &ssdb__ssdb__du_functor_desc_what_next_0_5
};

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_what_next_0_1[1] = {
  &ssdb__ssdb__du_functor_desc_what_next_0_3
};

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_what_next_0_2[1] = {
  &ssdb__ssdb__du_functor_desc_what_next_0_6
};

static const MR_DuFunctorDescPtr ssdb__ssdb__du_stag_ordered_what_next_0_3[2] = {
  &ssdb__ssdb__du_functor_desc_what_next_0_7,
  &ssdb__ssdb__du_functor_desc_what_next_0_8
};

static const MR_DuPtagLayout ssdb__ssdb__du_ptag_ordered_what_next_0[4] = {
  {
    (MR_Integer) 5,
    MR_SECTAG_LOCAL,
    ssdb__ssdb__du_stag_ordered_what_next_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ssdb__ssdb__du_stag_ordered_what_next_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ssdb__ssdb__du_stag_ordered_what_next_0_2
  },
  {
    (MR_Integer) 2,
    MR_SECTAG_REMOTE,
    ssdb__ssdb__du_stag_ordered_what_next_0_3
  }
};

static const MR_DuFunctorDescPtr ssdb__ssdb__du_name_ordered_what_next_0[9] = {
  &ssdb__ssdb__du_functor_desc_what_next_0_2,
  &ssdb__ssdb__du_functor_desc_what_next_0_5,
  &ssdb__ssdb__du_functor_desc_what_next_0_3,
  &ssdb__ssdb__du_functor_desc_what_next_0_8,
  &ssdb__ssdb__du_functor_desc_what_next_0_1,
  &ssdb__ssdb__du_functor_desc_what_next_0_6,
  &ssdb__ssdb__du_functor_desc_what_next_0_7,
  &ssdb__ssdb__du_functor_desc_what_next_0_4,
  &ssdb__ssdb__du_functor_desc_what_next_0_0
};

static const MR_Integer ssdb__ssdb__functor_number_map_what_next_0[9] = {
  (MR_Integer) 8,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 7,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct ssdb__ssdb__type_ctor_info_what_next_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ssdb____Unify____what_next_0_0_10001)),
  ((MR_Box) (ssdb____Compare____what_next_0_0_10001)),
  (MR_String) "ssdb",
  (MR_String) "what_next",
  {     ssdb__ssdb__du_name_ordered_what_next_0 },
  {     ssdb__ssdb__du_ptag_ordered_what_next_0 },
  (MR_Integer) 9,
  (MR_Integer) 4,
  ssdb__ssdb__functor_number_map_what_next_0
};

static MR_bool MR_CALL 
ssdb__IntroducedFrom__pred__print_var_with_name__3089__1_2_p_0(
  MR_String ssdb__VarName_8,
  MR_Word ssdb__LambdaHeadVar__1_20)
{
  {
    MR_bool ssdb__succeeded;
    MR_String ssdb__Var_21;

    switch (MR_tag((MR_Word) ssdb__LambdaHeadVar__1_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer ssdb__Var_29;

          ssdb__Var_21 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__LambdaHeadVar__1_20, (MR_Integer) 0)));
          ssdb__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__LambdaHeadVar__1_20, (MR_Integer) 1)));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ssdb__TypeInfo_10_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__LambdaHeadVar__1_20, (MR_Integer) 0)));
          MR_Integer ssdb__Var_31;
          MR_Box ssdb__Var_32;

          ssdb__Var_21 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__LambdaHeadVar__1_20, (MR_Integer) 1)));
          ssdb__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ssdb__LambdaHeadVar__1_20, (MR_Integer) 2)));
          ssdb__Var_32 = (MR_hl_field(MR_mktag(1), ssdb__LambdaHeadVar__1_20, (MR_Integer) 3));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ssdb__TypeInfo_11_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), ssdb__LambdaHeadVar__1_20, (MR_Integer) 0)));
          MR_Box ssdb__Var_34;

          ssdb__Var_21 = ((MR_String) (MR_hl_field(MR_mktag(2), ssdb__LambdaHeadVar__1_20, (MR_Integer) 1)));
          ssdb__Var_34 = (MR_hl_field(MR_mktag(2), ssdb__LambdaHeadVar__1_20, (MR_Integer) 2));
        }
        break;
    }
    ssdb__succeeded = mercury__string__prefix_2_p_0(ssdb__Var_21, ssdb__VarName_8);
    return ssdb__succeeded;
  }
}

static MR_Word MR_CALL 
ssdb__IntroducedFrom__func__modify_breakpoint_states__2783__1_2_f_0(
  MR_Word ssdb__State_4,
  MR_Word ssdb__LambdaHeadVar__1_14)
{
  {
    MR_Word ssdb__LambdaHeadVar__2_15;
    MR_Integer ssdb__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__LambdaHeadVar__1_14, (MR_Integer) 0)));
    MR_Word ssdb__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__LambdaHeadVar__1_14, (MR_Integer) 1)));
    MR_Word ssdb__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__LambdaHeadVar__1_14, (MR_Integer) 2)));

    {
      ssdb__LambdaHeadVar__2_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ssdb__LambdaHeadVar__2_15, 0) = ((MR_Box) (ssdb__Var_20));
      MR_hl_field(MR_mktag(0), ssdb__LambdaHeadVar__2_15, 1) = ((MR_Box) (ssdb__Var_21));
      MR_hl_field(MR_mktag(0), ssdb__LambdaHeadVar__2_15, 2) = ((MR_Box) (ssdb__State_4));
    }
    return ssdb__LambdaHeadVar__2_15;
  }
}

static void MR_CALL 
ssdb____Compare____what_next_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2,
  MR_Word ssdb__HeadVar__3_3)
{
  {
    MR_bool ssdb__succeeded;
    MR_Integer ssdb__CastX_76 = (MR_Integer) ssdb__HeadVar__2_2;
    MR_Integer ssdb__CastY_77 = (MR_Integer) ssdb__HeadVar__3_3;

    ssdb__succeeded = (ssdb__CastX_76 == ssdb__CastY_77);
    if (ssdb__succeeded)
      *ssdb__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) ssdb__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ssdb__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) ssdb__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ssdb__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) ssdb__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ssdb__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) ssdb__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ssdb__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) ssdb__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ssdb__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 4:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 4:
              switch (MR_tag((MR_Word) ssdb__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ssdb__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ssdb__Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) ssdb__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(ssdb__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ssdb__ArgY1_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__3_3, (MR_Integer) 0)));

                  mercury__private_builtin__builtin_compare_int_3_p_0(ssdb__HeadVar__1_1, ssdb__Var_82, ssdb__ArgY1_20);
                }
                break;
              case (MR_Integer) 2:
                *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ssdb__Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ssdb__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) ssdb__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(ssdb__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer ssdb__ArgY1_45 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ssdb__HeadVar__3_3, (MR_Integer) 0)));

                  mercury__private_builtin__builtin_compare_int_3_p_0(ssdb__HeadVar__1_1, ssdb__Var_84, ssdb__ArgY1_45);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer ssdb__Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) ssdb__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(ssdb__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Integer ssdb__ArgY1_60 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__3_3, (MR_Integer) 1)));

                          mercury__private_builtin__builtin_compare_int_3_p_0(ssdb__HeadVar__1_1, ssdb__Var_85, ssdb__ArgY1_60);
                        }
                        break;
                      case (MR_Integer) 1:
                        *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ssdb__Var_83 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) ssdb__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(ssdb__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Integer ssdb__ArgY1_75 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__3_3, (MR_Integer) 1)));

                          mercury__private_builtin__builtin_compare_int_3_p_0(ssdb__HeadVar__1_1, ssdb__Var_83, ssdb__ArgY1_75);
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
ssdb____Unify____what_next_0_0(
  MR_Word ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2)
{
  {
    MR_bool ssdb__succeeded;
    MR_Integer ssdb__CastX_21 = (MR_Integer) ssdb__HeadVar__1_1;
    MR_Integer ssdb__CastY_22 = (MR_Integer) ssdb__HeadVar__2_2;

    ssdb__succeeded = (ssdb__CastX_21 == ssdb__CastY_22);
    if (ssdb__succeeded)
      ssdb__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) ssdb__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ssdb__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer ssdb__CastX_3 = (MR_Integer) ssdb__HeadVar__1_1;
                MR_Integer ssdb__CastY_4 = (MR_Integer) ssdb__HeadVar__2_2;

                ssdb__succeeded = (ssdb__CastY_4 == ssdb__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ssdb__CastX_5 = (MR_Integer) ssdb__HeadVar__1_1;
                MR_Integer ssdb__CastY_6 = (MR_Integer) ssdb__HeadVar__2_2;

                ssdb__succeeded = (ssdb__CastY_6 == ssdb__CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer ssdb__CastX_7 = (MR_Integer) ssdb__HeadVar__1_1;
                MR_Integer ssdb__CastY_8 = (MR_Integer) ssdb__HeadVar__2_2;

                ssdb__succeeded = (ssdb__CastY_8 == ssdb__CastX_7);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer ssdb__CastX_11 = (MR_Integer) ssdb__HeadVar__1_1;
                MR_Integer ssdb__CastY_12 = (MR_Integer) ssdb__HeadVar__2_2;

                ssdb__succeeded = (ssdb__CastY_12 == ssdb__CastX_11);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer ssdb__CastX_13 = (MR_Integer) ssdb__HeadVar__1_1;
                MR_Integer ssdb__CastY_14 = (MR_Integer) ssdb__HeadVar__2_2;

                ssdb__succeeded = (ssdb__CastY_14 == ssdb__CastX_13);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ssdb__ArgX1_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer ssdb__ArgY1_10;

            ssdb__succeeded = ((MR_tag((MR_Word) ssdb__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (ssdb__succeeded)
            {
              ssdb__ArgY1_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__2_2, (MR_Integer) 0)));
              ssdb__succeeded = (ssdb__ArgX1_9 == ssdb__ArgY1_10);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ssdb__ArgX1_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ssdb__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer ssdb__ArgY1_16;

            ssdb__succeeded = ((MR_tag((MR_Word) ssdb__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (ssdb__succeeded)
            {
              ssdb__ArgY1_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ssdb__HeadVar__2_2, (MR_Integer) 0)));
              ssdb__succeeded = (ssdb__ArgX1_15 == ssdb__ArgY1_16);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer ssdb__ArgX1_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer ssdb__ArgY1_18;

                ssdb__succeeded = ((((MR_tag((MR_Word) ssdb__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (ssdb__succeeded)
                {
                  ssdb__ArgY1_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__2_2, (MR_Integer) 1)));
                  ssdb__succeeded = (ssdb__ArgX1_17 == ssdb__ArgY1_18);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ssdb__ArgX1_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer ssdb__ArgY1_20;

                ssdb__succeeded = ((((MR_tag((MR_Word) ssdb__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (ssdb__succeeded)
                {
                  ssdb__ArgY1_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__2_2, (MR_Integer) 1)));
                  ssdb__succeeded = (ssdb__ArgX1_19 == ssdb__ArgY1_20);
                }
              }
              break;
          }
          break;
      }
    return ssdb__succeeded;
  }
}

void MR_CALL 
ssdb____Compare____var_value_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2,
  MR_Word ssdb__HeadVar__3_3)
{
  {
    MR_bool ssdb__succeeded;
    MR_Integer ssdb__CastX_50 = (MR_Integer) ssdb__HeadVar__2_2;
    MR_Integer ssdb__CastY_51 = (MR_Integer) ssdb__HeadVar__3_3;

    ssdb__succeeded = (ssdb__CastX_50 == ssdb__CastY_51);
    if (ssdb__succeeded)
      *ssdb__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) ssdb__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer ssdb__Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 1)));
            MR_String ssdb__Var_77 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) ssdb__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String ssdb__ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer ssdb__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word ssdb__Var_8;

                  mercury__private_builtin__builtin_compare_string_3_p_0(&ssdb__Var_8, ssdb__Var_77, ssdb__ArgY1_5);
                  ssdb__succeeded = (ssdb__Var_8 == (MR_Integer) 0);
                  ssdb__succeeded = !(ssdb__succeeded);
                  if (ssdb__succeeded)
                    *ssdb__HeadVar__1_1 = ssdb__Var_8;
                  else
                    mercury__private_builtin__builtin_compare_int_3_p_0(ssdb__HeadVar__1_1, ssdb__Var_76, ssdb__ArgY2_7);
                }
                break;
              case (MR_Integer) 1:
                *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ssdb__TypeInfo_60_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__2_2, (MR_Integer) 0)));
            MR_Box ssdb__Var_69 = (MR_hl_field(MR_mktag(1), ssdb__HeadVar__2_2, (MR_Integer) 3));
            MR_Integer ssdb__Var_70 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__2_2, (MR_Integer) 2)));
            MR_String ssdb__Var_71 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__2_2, (MR_Integer) 1)));

            switch (MR_tag((MR_Word) ssdb__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ssdb__TypeInfo_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__3_3, (MR_Integer) 0)));
                  MR_String ssdb__ArgY1_24 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Integer ssdb__ArgY2_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Box ssdb__ArgY3_28 = (MR_hl_field(MR_mktag(1), ssdb__HeadVar__3_3, (MR_Integer) 3));
                  MR_Word ssdb__Var_29;

                  mercury__private_builtin__builtin_compare_string_3_p_0(&ssdb__Var_29, ssdb__Var_71, ssdb__ArgY1_24);
                  ssdb__succeeded = (ssdb__Var_29 == (MR_Integer) 0);
                  ssdb__succeeded = !(ssdb__succeeded);
                  if (ssdb__succeeded)
                    *ssdb__HeadVar__1_1 = ssdb__Var_29;
                  else
                  {
                    MR_Word ssdb__Var_30;

                    mercury__private_builtin__builtin_compare_int_3_p_0(&ssdb__Var_30, ssdb__Var_70, ssdb__ArgY2_26);
                    ssdb__succeeded = (ssdb__Var_30 == (MR_Integer) 0);
                    ssdb__succeeded = !(ssdb__succeeded);
                    if (ssdb__succeeded)
                      *ssdb__HeadVar__1_1 = ssdb__Var_30;
                    else
                      mercury__private_builtin__typed_compare_3_p_0(ssdb__TypeInfo_60_72, ssdb__TypeInfo_61_61, ssdb__HeadVar__1_1, ssdb__Var_69, ssdb__ArgY3_28);
                  }
                }
                break;
              case (MR_Integer) 2:
                *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ssdb__TypeInfo_55_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), ssdb__HeadVar__2_2, (MR_Integer) 0)));
            MR_Box ssdb__Var_73 = (MR_hl_field(MR_mktag(2), ssdb__HeadVar__2_2, (MR_Integer) 2));
            MR_String ssdb__Var_74 = ((MR_String) (MR_hl_field(MR_mktag(2), ssdb__HeadVar__2_2, (MR_Integer) 1)));

            switch (MR_tag((MR_Word) ssdb__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ssdb__TypeInfo_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), ssdb__HeadVar__3_3, (MR_Integer) 0)));
                  MR_String ssdb__ArgY1_46 = ((MR_String) (MR_hl_field(MR_mktag(2), ssdb__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Box ssdb__ArgY2_48 = (MR_hl_field(MR_mktag(2), ssdb__HeadVar__3_3, (MR_Integer) 2));
                  MR_Word ssdb__Var_49;

                  mercury__private_builtin__builtin_compare_string_3_p_0(&ssdb__Var_49, ssdb__Var_74, ssdb__ArgY1_46);
                  ssdb__succeeded = (ssdb__Var_49 == (MR_Integer) 0);
                  ssdb__succeeded = !(ssdb__succeeded);
                  if (ssdb__succeeded)
                    *ssdb__HeadVar__1_1 = ssdb__Var_49;
                  else
                    mercury__private_builtin__typed_compare_3_p_0(ssdb__TypeInfo_55_75, ssdb__TypeInfo_53_53, ssdb__HeadVar__1_1, ssdb__Var_73, ssdb__ArgY2_48);
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
ssdb____Unify____var_value_0_0(
  MR_Word ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2)
{
  {
    MR_bool ssdb__succeeded;
    MR_Integer ssdb__CastX_17 = (MR_Integer) ssdb__HeadVar__1_1;
    MR_Integer ssdb__CastY_18 = (MR_Integer) ssdb__HeadVar__2_2;

    ssdb__succeeded = (ssdb__CastX_17 == ssdb__CastY_18);
    if (ssdb__succeeded)
      ssdb__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) ssdb__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String ssdb__ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 0)));
            MR_String ssdb__ArgY1_4;
            MR_Integer ssdb__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer ssdb__ArgY2_6;

            ssdb__succeeded = ((MR_tag((MR_Word) ssdb__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (ssdb__succeeded)
            {
              ssdb__ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 0)));
              ssdb__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 1)));
              ssdb__succeeded = (strcmp(ssdb__ArgX1_3, ssdb__ArgY1_4) == 0);
              if (ssdb__succeeded)
                ssdb__succeeded = (ssdb__ArgX2_5 == ssdb__ArgY2_6);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ssdb__TypeInfo_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ssdb__TypeInfo_20_20;
            MR_String ssdb__ArgX1_7 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__1_1, (MR_Integer) 1)));
            MR_String ssdb__ArgY1_8;
            MR_Integer ssdb__ArgX2_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__1_1, (MR_Integer) 2)));
            MR_Integer ssdb__ArgY2_10;
            MR_Box ssdb__ArgX3_11 = (MR_hl_field(MR_mktag(1), ssdb__HeadVar__1_1, (MR_Integer) 3));
            MR_Box ssdb__ArgY3_12;

            ssdb__succeeded = ((MR_tag((MR_Word) ssdb__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (ssdb__succeeded)
            {
              ssdb__TypeInfo_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__2_2, (MR_Integer) 0)));
              ssdb__ArgY1_8 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__2_2, (MR_Integer) 1)));
              ssdb__ArgY2_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__2_2, (MR_Integer) 2)));
              ssdb__ArgY3_12 = (MR_hl_field(MR_mktag(1), ssdb__HeadVar__2_2, (MR_Integer) 3));
              ssdb__succeeded = (strcmp(ssdb__ArgX1_7, ssdb__ArgY1_8) == 0);
              if (ssdb__succeeded)
              {
                ssdb__succeeded = (ssdb__ArgX2_9 == ssdb__ArgY2_10);
                if (ssdb__succeeded)
                  ssdb__succeeded = mercury__private_builtin__typed_unify_2_p_0(ssdb__TypeInfo_19_19, ssdb__TypeInfo_20_20, ssdb__ArgX3_11, ssdb__ArgY3_12);
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ssdb__TypeInfo_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ssdb__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ssdb__TypeInfo_22_22;
            MR_String ssdb__ArgX1_13 = ((MR_String) (MR_hl_field(MR_mktag(2), ssdb__HeadVar__1_1, (MR_Integer) 1)));
            MR_String ssdb__ArgY1_14;
            MR_Box ssdb__ArgX2_15 = (MR_hl_field(MR_mktag(2), ssdb__HeadVar__1_1, (MR_Integer) 2));
            MR_Box ssdb__ArgY2_16;

            ssdb__succeeded = ((MR_tag((MR_Word) ssdb__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (ssdb__succeeded)
            {
              ssdb__TypeInfo_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ssdb__HeadVar__2_2, (MR_Integer) 0)));
              ssdb__ArgY1_14 = ((MR_String) (MR_hl_field(MR_mktag(2), ssdb__HeadVar__2_2, (MR_Integer) 1)));
              ssdb__ArgY2_16 = (MR_hl_field(MR_mktag(2), ssdb__HeadVar__2_2, (MR_Integer) 2));
              ssdb__succeeded = (strcmp(ssdb__ArgX1_13, ssdb__ArgY1_14) == 0);
              if (ssdb__succeeded)
                ssdb__succeeded = mercury__private_builtin__typed_unify_2_p_0(ssdb__TypeInfo_21_21, ssdb__TypeInfo_22_22, ssdb__ArgX2_15, ssdb__ArgY2_16);
            }
          }
          break;
      }
    return ssdb__succeeded;
  }
}

void MR_CALL 
ssdb____Compare____var_name_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_String ssdb__HeadVar__2_2,
  MR_String ssdb__HeadVar__3_3)
{
  {
    MR_String ssdb__Cast_HeadVar1_4 = ssdb__HeadVar__2_2;
    MR_String ssdb__Cast_HeadVar2_5 = ssdb__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_string_3_p_0(ssdb__HeadVar__1_1, ssdb__Cast_HeadVar1_4, ssdb__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
ssdb____Unify____var_name_0_0(
  MR_String ssdb__HeadVar__1_1,
  MR_String ssdb__HeadVar__2_2)
{
  {
    MR_bool ssdb__succeeded;
    MR_String ssdb__Cast_HeadVar1_3 = ssdb__HeadVar__1_1;
    MR_String ssdb__Cast_HeadVar2_4 = ssdb__HeadVar__2_2;

    ssdb__succeeded = (strcmp(ssdb__Cast_HeadVar1_3, ssdb__Cast_HeadVar2_4) == 0);
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____stack_frame_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2,
  MR_Word ssdb__HeadVar__3_3)
{
  {
    MR_bool ssdb__succeeded;
    MR_Integer ssdb__CastX_27 = (MR_Integer) ssdb__HeadVar__2_2;
    MR_Integer ssdb__CastY_28 = (MR_Integer) ssdb__HeadVar__3_3;

    ssdb__succeeded = (ssdb__CastX_27 == ssdb__CastY_28);
    if (ssdb__succeeded)
      *ssdb__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ssdb__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ssdb__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer ssdb__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ssdb__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer ssdb__ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ssdb__ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ssdb__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ssdb__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__3_3, (MR_Integer) 3)));
      MR_String ssdb__ArgX5_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 4)));
      MR_String ssdb__ArgY5_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__3_3, (MR_Integer) 4)));
      MR_Integer ssdb__ArgX6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 5)));
      MR_Integer ssdb__ArgY6_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__3_3, (MR_Integer) 5)));
      MR_Word ssdb__ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ssdb__ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__3_3, (MR_Integer) 6)));
      MR_Word ssdb__ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ssdb__ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__3_3, (MR_Integer) 7)));
      MR_Word ssdb__Var_20;

      mercury__private_builtin__builtin_compare_int_3_p_0(&ssdb__Var_20, ssdb__ArgX1_4, ssdb__ArgY1_5);
      ssdb__succeeded = (ssdb__Var_20 == (MR_Integer) 0);
      ssdb__succeeded = !(ssdb__succeeded);
      if (ssdb__succeeded)
        *ssdb__HeadVar__1_1 = ssdb__Var_20;
      else
      {
        MR_Word ssdb__Var_21;

        mercury__private_builtin__builtin_compare_int_3_p_0(&ssdb__Var_21, ssdb__ArgX2_6, ssdb__ArgY2_7);
        ssdb__succeeded = (ssdb__Var_21 == (MR_Integer) 0);
        ssdb__succeeded = !(ssdb__succeeded);
        if (ssdb__succeeded)
          *ssdb__HeadVar__1_1 = ssdb__Var_21;
        else
        {
          MR_Word ssdb__Var_22;

          mercury__private_builtin__builtin_compare_int_3_p_0(&ssdb__Var_22, ssdb__ArgX3_8, ssdb__ArgY3_9);
          ssdb__succeeded = (ssdb__Var_22 == (MR_Integer) 0);
          ssdb__succeeded = !(ssdb__succeeded);
          if (ssdb__succeeded)
            *ssdb__HeadVar__1_1 = ssdb__Var_22;
          else
          {
            MR_Word ssdb__Var_23;

            ssdb____Compare____ssdb_proc_id_0_0(&ssdb__Var_23, ssdb__ArgX4_10, ssdb__ArgY4_11);
            ssdb__succeeded = (ssdb__Var_23 == (MR_Integer) 0);
            ssdb__succeeded = !(ssdb__succeeded);
            if (ssdb__succeeded)
              *ssdb__HeadVar__1_1 = ssdb__Var_23;
            else
            {
              MR_Word ssdb__Var_24;

              mercury__private_builtin__builtin_compare_string_3_p_0(&ssdb__Var_24, ssdb__ArgX5_12, ssdb__ArgY5_13);
              ssdb__succeeded = (ssdb__Var_24 == (MR_Integer) 0);
              ssdb__succeeded = !(ssdb__succeeded);
              if (ssdb__succeeded)
                *ssdb__HeadVar__1_1 = ssdb__Var_24;
              else
              {
                MR_Word ssdb__Var_25;

                mercury__private_builtin__builtin_compare_int_3_p_0(&ssdb__Var_25, ssdb__ArgX6_14, ssdb__ArgY6_15);
                ssdb__succeeded = (ssdb__Var_25 == (MR_Integer) 0);
                ssdb__succeeded = !(ssdb__succeeded);
                if (ssdb__succeeded)
                  *ssdb__HeadVar__1_1 = ssdb__Var_25;
                else
                {
                  MR_Word ssdb__Var_26;

                  mercury__builtin__compare_3_p_0((MR_Word) &ssdb_scalar_common_1[1], &ssdb__Var_26, ((MR_Box) (ssdb__ArgX7_16)), ((MR_Box) (ssdb__ArgY7_17)));
                  ssdb__succeeded = (ssdb__Var_26 == (MR_Integer) 0);
                  ssdb__succeeded = !(ssdb__succeeded);
                  if (ssdb__succeeded)
                    *ssdb__HeadVar__1_1 = ssdb__Var_26;
                  else
                  {
                    MR_Integer ssdb__Var_37 = (MR_Integer) ssdb__ArgX8_18;
                    MR_Integer ssdb__Var_38 = (MR_Integer) ssdb__ArgY8_19;

                    mercury__private_builtin__builtin_compare_int_3_p_0(ssdb__HeadVar__1_1, ssdb__Var_37, ssdb__Var_38);
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

static MR_bool MR_CALL 
ssdb____Unify____stack_frame_0_0(
  MR_Word ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2)
{
  {
    MR_bool ssdb__succeeded;
    MR_Integer ssdb__CastX_19 = (MR_Integer) ssdb__HeadVar__1_1;
    MR_Integer ssdb__CastY_20 = (MR_Integer) ssdb__HeadVar__2_2;

    ssdb__succeeded = (ssdb__CastX_19 == ssdb__CastY_20);
    if (ssdb__succeeded)
      ssdb__succeeded = MR_TRUE;
    else
    {
      MR_Word ssdb__TypeInfo_21_21;
      MR_Integer ssdb__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ssdb__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ssdb__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ssdb__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ssdb__ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer ssdb__ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ssdb__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ssdb__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 3)));
      MR_String ssdb__ArgX5_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 4)));
      MR_String ssdb__ArgY5_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 4)));
      MR_Integer ssdb__ArgX6_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 5)));
      MR_Integer ssdb__ArgY6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ssdb__ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ssdb__ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ssdb__ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 7)));
      MR_Word ssdb__ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 7)));

      ssdb__succeeded = (ssdb__ArgX1_3 == ssdb__ArgY1_4);
      if (ssdb__succeeded)
      {
        ssdb__succeeded = (ssdb__ArgX2_5 == ssdb__ArgY2_6);
        if (ssdb__succeeded)
        {
          ssdb__succeeded = (ssdb__ArgX3_7 == ssdb__ArgY3_8);
          if (ssdb__succeeded)
          {
            ssdb__succeeded = ssdb____Unify____ssdb_proc_id_0_0(ssdb__ArgX4_9, ssdb__ArgY4_10);
            if (ssdb__succeeded)
            {
              ssdb__succeeded = (strcmp(ssdb__ArgX5_11, ssdb__ArgY5_12) == 0);
              if (ssdb__succeeded)
              {
                ssdb__succeeded = (ssdb__ArgX6_13 == ssdb__ArgY6_14);
                if (ssdb__succeeded)
                {
                  ssdb__TypeInfo_21_21 = (MR_Word) &ssdb_scalar_common_1[1];
                  ssdb__succeeded = mercury__builtin__unify_2_p_0(ssdb__TypeInfo_21_21, ((MR_Box) (ssdb__ArgX7_15)), ((MR_Box) (ssdb__ArgY7_16)));
                  if (ssdb__succeeded)
                    ssdb__succeeded = (ssdb__ArgX8_17 == ssdb__ArgY8_18);
                }
              }
            }
          }
        }
      }
    }
    return ssdb__succeeded;
  }
}

void MR_CALL 
ssdb____Compare____ssdb_tracing_level_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2,
  MR_Word ssdb__HeadVar__3_3)
{
  {
    MR_Integer ssdb__Cast_HeadVar1_4 = (MR_Integer) ssdb__HeadVar__2_2;
    MR_Integer ssdb__Cast_HeadVar2_5 = (MR_Integer) ssdb__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(ssdb__HeadVar__1_1, ssdb__Cast_HeadVar1_4, ssdb__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
ssdb____Unify____ssdb_tracing_level_0_0(
  MR_Word ssdb__HeadVar__2_1,
  MR_Word ssdb__HeadVar__2_2)
{
  {
    MR_bool ssdb__succeeded = (ssdb__HeadVar__2_1 == ssdb__HeadVar__2_2);

    return ssdb__succeeded;
  }
}

void MR_CALL 
ssdb____Compare____ssdb_retry_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2,
  MR_Word ssdb__HeadVar__3_3)
{
  {
    MR_Integer ssdb__Cast_HeadVar1_4 = (MR_Integer) ssdb__HeadVar__2_2;
    MR_Integer ssdb__Cast_HeadVar2_5 = (MR_Integer) ssdb__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(ssdb__HeadVar__1_1, ssdb__Cast_HeadVar1_4, ssdb__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
ssdb____Unify____ssdb_retry_0_0(
  MR_Word ssdb__HeadVar__2_1,
  MR_Word ssdb__HeadVar__2_2)
{
  {
    MR_bool ssdb__succeeded = (ssdb__HeadVar__2_1 == ssdb__HeadVar__2_2);

    return ssdb__succeeded;
  }
}

void MR_CALL 
ssdb____Compare____ssdb_event_type_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2,
  MR_Word ssdb__HeadVar__3_3)
{
  {
    MR_Integer ssdb__Cast_HeadVar1_4 = (MR_Integer) ssdb__HeadVar__2_2;
    MR_Integer ssdb__Cast_HeadVar2_5 = (MR_Integer) ssdb__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(ssdb__HeadVar__1_1, ssdb__Cast_HeadVar1_4, ssdb__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
ssdb____Unify____ssdb_event_type_0_0(
  MR_Word ssdb__HeadVar__2_1,
  MR_Word ssdb__HeadVar__2_2)
{
  {
    MR_bool ssdb__succeeded = (ssdb__HeadVar__2_1 == ssdb__HeadVar__2_2);

    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____ssdb_cmd_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2,
  MR_Word ssdb__HeadVar__3_3)
{
  {
    MR_Integer ssdb__Cast_HeadVar1_4 = (MR_Integer) ssdb__HeadVar__2_2;
    MR_Integer ssdb__Cast_HeadVar2_5 = (MR_Integer) ssdb__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(ssdb__HeadVar__1_1, ssdb__Cast_HeadVar1_4, ssdb__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
ssdb____Unify____ssdb_cmd_0_0(
  MR_Word ssdb__HeadVar__2_1,
  MR_Word ssdb__HeadVar__2_2)
{
  {
    MR_bool ssdb__succeeded = (ssdb__HeadVar__2_1 == ssdb__HeadVar__2_2);

    return ssdb__succeeded;
  }
}

void MR_CALL 
ssdb____Compare____pos_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Integer ssdb__HeadVar__2_2,
  MR_Integer ssdb__HeadVar__3_3)
{
  {
    MR_Integer ssdb__Cast_HeadVar1_4 = ssdb__HeadVar__2_2;
    MR_Integer ssdb__Cast_HeadVar2_5 = ssdb__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(ssdb__HeadVar__1_1, ssdb__Cast_HeadVar1_4, ssdb__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
ssdb____Unify____pos_0_0(
  MR_Integer ssdb__HeadVar__1_1,
  MR_Integer ssdb__HeadVar__2_2)
{
  {
    MR_bool ssdb__succeeded;
    MR_Integer ssdb__Cast_HeadVar1_3 = ssdb__HeadVar__1_1;
    MR_Integer ssdb__Cast_HeadVar2_4 = ssdb__HeadVar__2_2;

    ssdb__succeeded = (ssdb__Cast_HeadVar1_3 == ssdb__Cast_HeadVar2_4);
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____next_stop_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2,
  MR_Word ssdb__HeadVar__3_3)
{
  {
    MR_bool ssdb__succeeded;
    MR_Integer ssdb__CastX_102 = (MR_Integer) ssdb__HeadVar__2_2;
    MR_Integer ssdb__CastY_103 = (MR_Integer) ssdb__HeadVar__3_3;

    ssdb__succeeded = (ssdb__CastX_102 == ssdb__CastY_103);
    if (ssdb__succeeded)
      *ssdb__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) ssdb__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ssdb__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) ssdb__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ssdb__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) ssdb__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ssdb__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) ssdb__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ssdb__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) ssdb__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ssdb__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ssdb__Var_115 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) ssdb__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(ssdb__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ssdb__ArgY1_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__3_3, (MR_Integer) 0)));

                  mercury__private_builtin__builtin_compare_int_3_p_0(ssdb__HeadVar__1_1, ssdb__Var_115, ssdb__ArgY1_12);
                }
                break;
              case (MR_Integer) 2:
                *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ssdb__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(2), ssdb__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer ssdb__Var_111 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ssdb__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) ssdb__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(ssdb__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer ssdb__ArgY1_38 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ssdb__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ssdb__ArgY2_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), ssdb__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word ssdb__Var_41;

                  mercury__private_builtin__builtin_compare_int_3_p_0(&ssdb__Var_41, ssdb__Var_111, ssdb__ArgY1_38);
                  ssdb__succeeded = (ssdb__Var_41 == (MR_Integer) 0);
                  ssdb__succeeded = !(ssdb__succeeded);
                  if (ssdb__succeeded)
                    *ssdb__HeadVar__1_1 = ssdb__Var_41;
                  else
                  {
                    MR_Integer ssdb__Var_116 = (MR_Integer) ssdb__Var_110;
                    MR_Integer ssdb__Var_117 = (MR_Integer) ssdb__ArgY2_40;

                    mercury__private_builtin__builtin_compare_int_3_p_0(ssdb__HeadVar__1_1, ssdb__Var_116, ssdb__Var_117);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ssdb__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__2_2, (MR_Integer) 2)));
                MR_Integer ssdb__Var_113 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) ssdb__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(ssdb__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Integer ssdb__ArgY1_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word ssdb__ArgY2_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word ssdb__Var_68;

                          mercury__private_builtin__builtin_compare_int_3_p_0(&ssdb__Var_68, ssdb__Var_113, ssdb__ArgY1_65);
                          ssdb__succeeded = (ssdb__Var_68 == (MR_Integer) 0);
                          ssdb__succeeded = !(ssdb__succeeded);
                          if (ssdb__succeeded)
                            *ssdb__HeadVar__1_1 = ssdb__Var_68;
                          else
                          {
                            MR_Integer ssdb__Var_118 = (MR_Integer) ssdb__Var_112;
                            MR_Integer ssdb__Var_119 = (MR_Integer) ssdb__ArgY2_67;

                            mercury__private_builtin__builtin_compare_int_3_p_0(ssdb__HeadVar__1_1, ssdb__Var_118, ssdb__Var_119);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ssdb__Var_114 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) ssdb__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(ssdb__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *ssdb__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *ssdb__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Integer ssdb__ArgY1_94 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__3_3, (MR_Integer) 1)));

                          mercury__private_builtin__builtin_compare_int_3_p_0(ssdb__HeadVar__1_1, ssdb__Var_114, ssdb__ArgY1_94);
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
ssdb____Unify____next_stop_0_0(
  MR_Word ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2)
{
  {
    MR_bool ssdb__succeeded;
    MR_Integer ssdb__CastX_23 = (MR_Integer) ssdb__HeadVar__1_1;
    MR_Integer ssdb__CastY_24 = (MR_Integer) ssdb__HeadVar__2_2;

    ssdb__succeeded = (ssdb__CastX_23 == ssdb__CastY_24);
    if (ssdb__succeeded)
      ssdb__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) ssdb__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ssdb__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer ssdb__CastX_3 = (MR_Integer) ssdb__HeadVar__1_1;
                MR_Integer ssdb__CastY_4 = (MR_Integer) ssdb__HeadVar__2_2;

                ssdb__succeeded = (ssdb__CastY_4 == ssdb__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ssdb__CastX_7 = (MR_Integer) ssdb__HeadVar__1_1;
                MR_Integer ssdb__CastY_8 = (MR_Integer) ssdb__HeadVar__2_2;

                ssdb__succeeded = (ssdb__CastY_8 == ssdb__CastX_7);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer ssdb__CastX_17 = (MR_Integer) ssdb__HeadVar__1_1;
                MR_Integer ssdb__CastY_18 = (MR_Integer) ssdb__HeadVar__2_2;

                ssdb__succeeded = (ssdb__CastY_18 == ssdb__CastX_17);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer ssdb__CastX_21 = (MR_Integer) ssdb__HeadVar__1_1;
                MR_Integer ssdb__CastY_22 = (MR_Integer) ssdb__HeadVar__2_2;

                ssdb__succeeded = (ssdb__CastY_22 == ssdb__CastX_21);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ssdb__ArgX1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer ssdb__ArgY1_6;

            ssdb__succeeded = ((MR_tag((MR_Word) ssdb__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (ssdb__succeeded)
            {
              ssdb__ArgY1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__2_2, (MR_Integer) 0)));
              ssdb__succeeded = (ssdb__ArgX1_5 == ssdb__ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ssdb__ArgX1_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ssdb__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer ssdb__ArgY1_10;
            MR_Word ssdb__ArgX2_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ssdb__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ssdb__ArgY2_12;

            ssdb__succeeded = ((MR_tag((MR_Word) ssdb__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (ssdb__succeeded)
            {
              ssdb__ArgY1_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ssdb__HeadVar__2_2, (MR_Integer) 0)));
              ssdb__ArgY2_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ssdb__HeadVar__2_2, (MR_Integer) 1)));
              ssdb__succeeded = (ssdb__ArgX1_9 == ssdb__ArgY1_10);
              if (ssdb__succeeded)
                ssdb__succeeded = (ssdb__ArgX2_11 == ssdb__ArgY2_12);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer ssdb__ArgX1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer ssdb__ArgY1_14;
                MR_Word ssdb__ArgX2_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word ssdb__ArgY2_16;

                ssdb__succeeded = ((((MR_tag((MR_Word) ssdb__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (ssdb__succeeded)
                {
                  ssdb__ArgY1_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__2_2, (MR_Integer) 1)));
                  ssdb__ArgY2_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__2_2, (MR_Integer) 2)));
                  ssdb__succeeded = (ssdb__ArgX1_13 == ssdb__ArgY1_14);
                  if (ssdb__succeeded)
                    ssdb__succeeded = (ssdb__ArgX2_15 == ssdb__ArgY2_16);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ssdb__ArgX1_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer ssdb__ArgY1_20;

                ssdb__succeeded = ((((MR_tag((MR_Word) ssdb__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (ssdb__succeeded)
                {
                  ssdb__ArgY1_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ssdb__HeadVar__2_2, (MR_Integer) 1)));
                  ssdb__succeeded = (ssdb__ArgX1_19 == ssdb__ArgY1_20);
                }
              }
              break;
          }
          break;
      }
    return ssdb__succeeded;
  }
}

void MR_CALL 
ssdb____Compare____list_var_value_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2,
  MR_Word ssdb__HeadVar__3_3)
{
  {
    MR_Word ssdb__Cast_HeadVar1_4 = ssdb__HeadVar__2_2;
    MR_Word ssdb__Cast_HeadVar2_5 = ssdb__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ssdb_scalar_common_1[1], ssdb__HeadVar__1_1, ((MR_Box) (ssdb__Cast_HeadVar1_4)), ((MR_Box) (ssdb__Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
ssdb____Unify____list_var_value_0_0(
  MR_Word ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2)
{
  {
    MR_bool ssdb__succeeded;
    MR_Word ssdb__Cast_HeadVar1_3 = ssdb__HeadVar__1_1;
    MR_Word ssdb__Cast_HeadVar2_4 = ssdb__HeadVar__2_2;

    ssdb__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ssdb_scalar_common_1[1], ((MR_Box) (ssdb__Cast_HeadVar1_3)), ((MR_Box) (ssdb__Cast_HeadVar2_4)));
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____list_params_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2,
  MR_Word ssdb__HeadVar__3_3)
{
  {
    MR_bool ssdb__succeeded;
    MR_Integer ssdb__CastX_9 = (MR_Integer) ssdb__HeadVar__2_2;
    MR_Integer ssdb__CastY_10 = (MR_Integer) ssdb__HeadVar__3_3;

    ssdb__succeeded = (ssdb__CastX_9 == ssdb__CastY_10);
    if (ssdb__succeeded)
      *ssdb__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ssdb__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ssdb__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer ssdb__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ssdb__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ssdb__Var_8;

      mercury__builtin__compare_3_p_0((MR_Word) &ssdb_scalar_common_1[0], &ssdb__Var_8, ((MR_Box) (ssdb__ArgX1_4)), ((MR_Box) (ssdb__ArgY1_5)));
      ssdb__succeeded = (ssdb__Var_8 == (MR_Integer) 0);
      ssdb__succeeded = !(ssdb__succeeded);
      if (ssdb__succeeded)
        *ssdb__HeadVar__1_1 = ssdb__Var_8;
      else
        mercury__private_builtin__builtin_compare_int_3_p_0(ssdb__HeadVar__1_1, ssdb__ArgX2_6, ssdb__ArgY2_7);
    }
  }
}

static MR_bool MR_CALL 
ssdb____Unify____list_params_0_0(
  MR_Word ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2)
{
  {
    MR_bool ssdb__succeeded;
    MR_Integer ssdb__CastX_7 = (MR_Integer) ssdb__HeadVar__1_1;
    MR_Integer ssdb__CastY_8 = (MR_Integer) ssdb__HeadVar__2_2;

    ssdb__succeeded = (ssdb__CastX_7 == ssdb__CastY_8);
    if (ssdb__succeeded)
      ssdb__succeeded = MR_TRUE;
    else
    {
      MR_Word ssdb__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ssdb__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ssdb__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ssdb__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 1)));

      ssdb__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ssdb_scalar_common_1[0], ((MR_Box) (ssdb__ArgX1_3)), ((MR_Box) (ssdb__ArgY1_4)));
      if (ssdb__succeeded)
        ssdb__succeeded = (ssdb__ArgX2_5 == ssdb__ArgY2_6);
    }
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____format_config_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2,
  MR_Word ssdb__HeadVar__3_3)
{
  {
    MR_bool ssdb__succeeded;
    MR_Integer ssdb__CastX_24 = (MR_Integer) ssdb__HeadVar__2_2;
    MR_Integer ssdb__CastY_25 = (MR_Integer) ssdb__HeadVar__3_3;

    ssdb__succeeded = (ssdb__CastX_24 == ssdb__CastY_25);
    if (ssdb__succeeded)
      *ssdb__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ssdb__ArgX1_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ssdb__ArgY1_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ssdb__ArgX2_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ssdb__ArgY2_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ssdb__ArgX3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ssdb__ArgY3_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ssdb__ArgX4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ssdb__ArgY4_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ssdb__ArgX5_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ssdb__ArgY5_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ssdb__ArgX6_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ssdb__ArgY6_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ssdb__ArgX7_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word ssdb__ArgY7_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word ssdb__Var_18;
      MR_Integer ssdb__Var_33 = (MR_Integer) ssdb__ArgX1_4;
      MR_Integer ssdb__Var_34 = (MR_Integer) ssdb__ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&ssdb__Var_18, ssdb__Var_33, ssdb__Var_34);
      ssdb__succeeded = (ssdb__Var_18 == (MR_Integer) 0);
      ssdb__succeeded = !(ssdb__succeeded);
      if (ssdb__succeeded)
        *ssdb__HeadVar__1_1 = ssdb__Var_18;
      else
      {
        MR_Word ssdb__Var_19;
        MR_Integer ssdb__Var_35 = (MR_Integer) ssdb__ArgX2_6;
        MR_Integer ssdb__Var_36 = (MR_Integer) ssdb__ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&ssdb__Var_19, ssdb__Var_35, ssdb__Var_36);
        ssdb__succeeded = (ssdb__Var_19 == (MR_Integer) 0);
        ssdb__succeeded = !(ssdb__succeeded);
        if (ssdb__succeeded)
          *ssdb__HeadVar__1_1 = ssdb__Var_19;
        else
        {
          MR_Word ssdb__Var_20;
          MR_Integer ssdb__Var_37 = (MR_Integer) ssdb__ArgX3_8;
          MR_Integer ssdb__Var_38 = (MR_Integer) ssdb__ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(&ssdb__Var_20, ssdb__Var_37, ssdb__Var_38);
          ssdb__succeeded = (ssdb__Var_20 == (MR_Integer) 0);
          ssdb__succeeded = !(ssdb__succeeded);
          if (ssdb__succeeded)
            *ssdb__HeadVar__1_1 = ssdb__Var_20;
          else
          {
            MR_Word ssdb__Var_21;
            MR_Integer ssdb__Var_39 = (MR_Integer) ssdb__ArgX4_10;
            MR_Integer ssdb__Var_40 = (MR_Integer) ssdb__ArgY4_11;

            mercury__private_builtin__builtin_compare_int_3_p_0(&ssdb__Var_21, ssdb__Var_39, ssdb__Var_40);
            ssdb__succeeded = (ssdb__Var_21 == (MR_Integer) 0);
            ssdb__succeeded = !(ssdb__succeeded);
            if (ssdb__succeeded)
              *ssdb__HeadVar__1_1 = ssdb__Var_21;
            else
            {
              MR_Word ssdb__Var_22;
              MR_Integer ssdb__Var_41 = (MR_Integer) ssdb__ArgX5_12;
              MR_Integer ssdb__Var_42 = (MR_Integer) ssdb__ArgY5_13;

              mercury__private_builtin__builtin_compare_int_3_p_0(&ssdb__Var_22, ssdb__Var_41, ssdb__Var_42);
              ssdb__succeeded = (ssdb__Var_22 == (MR_Integer) 0);
              ssdb__succeeded = !(ssdb__succeeded);
              if (ssdb__succeeded)
                *ssdb__HeadVar__1_1 = ssdb__Var_22;
              else
              {
                MR_Word ssdb__Var_23;
                MR_Integer ssdb__Var_43 = (MR_Integer) ssdb__ArgX6_14;
                MR_Integer ssdb__Var_44 = (MR_Integer) ssdb__ArgY6_15;

                mercury__private_builtin__builtin_compare_int_3_p_0(&ssdb__Var_23, ssdb__Var_43, ssdb__Var_44);
                ssdb__succeeded = (ssdb__Var_23 == (MR_Integer) 0);
                ssdb__succeeded = !(ssdb__succeeded);
                if (ssdb__succeeded)
                  *ssdb__HeadVar__1_1 = ssdb__Var_23;
                else
                {
                  MR_Integer ssdb__Var_45 = (MR_Integer) ssdb__ArgX7_16;
                  MR_Integer ssdb__Var_46 = (MR_Integer) ssdb__ArgY7_17;

                  mercury__private_builtin__builtin_compare_int_3_p_0(ssdb__HeadVar__1_1, ssdb__Var_45, ssdb__Var_46);
                }
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ssdb____Unify____format_config_0_0(
  MR_Word ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2)
{
  {
    MR_bool ssdb__succeeded;
    MR_Integer ssdb__CastX_17 = (MR_Integer) ssdb__HeadVar__1_1;
    MR_Integer ssdb__CastY_18 = (MR_Integer) ssdb__HeadVar__2_2;

    ssdb__succeeded = (ssdb__CastX_17 == ssdb__CastY_18);
    if (ssdb__succeeded)
      ssdb__succeeded = MR_TRUE;
    else
    {
      MR_Word ssdb__ArgX1_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ssdb__ArgY1_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ssdb__ArgX2_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ssdb__ArgY2_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ssdb__ArgX3_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ssdb__ArgY3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ssdb__ArgX4_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ssdb__ArgY4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ssdb__ArgX5_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ssdb__ArgY5_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ssdb__ArgX6_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ssdb__ArgY6_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ssdb__ArgX7_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word ssdb__ArgY7_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);

      ssdb__succeeded = (ssdb__ArgX1_3 == ssdb__ArgY1_4);
      if (ssdb__succeeded)
      {
        ssdb__succeeded = (ssdb__ArgX2_5 == ssdb__ArgY2_6);
        if (ssdb__succeeded)
        {
          ssdb__succeeded = (ssdb__ArgX3_7 == ssdb__ArgY3_8);
          if (ssdb__succeeded)
          {
            ssdb__succeeded = (ssdb__ArgX4_9 == ssdb__ArgY4_10);
            if (ssdb__succeeded)
            {
              ssdb__succeeded = (ssdb__ArgX5_11 == ssdb__ArgY5_12);
              if (ssdb__succeeded)
              {
                ssdb__succeeded = (ssdb__ArgX6_13 == ssdb__ArgY6_14);
                if (ssdb__succeeded)
                  ssdb__succeeded = (ssdb__ArgX7_15 == ssdb__ArgY7_16);
              }
            }
          }
        }
      }
    }
    return ssdb__succeeded;
  }
}

void MR_CALL 
ssdb____Compare____debugging_paused_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2,
  MR_Word ssdb__HeadVar__3_3)
{
  {
    MR_Word ssdb__Cast_HeadVar1_4 = ssdb__HeadVar__2_2;
    MR_Word ssdb__Cast_HeadVar2_5 = ssdb__HeadVar__3_3;
    MR_Integer ssdb__Var_7 = (MR_Integer) ssdb__Cast_HeadVar1_4;
    MR_Integer ssdb__Var_8 = (MR_Integer) ssdb__Cast_HeadVar2_5;

    mercury__private_builtin__builtin_compare_int_3_p_0(ssdb__HeadVar__1_1, ssdb__Var_7, ssdb__Var_8);
  }
}

MR_bool MR_CALL 
ssdb____Unify____debugging_paused_0_0(
  MR_Word ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2)
{
  {
    MR_bool ssdb__succeeded;
    MR_Word ssdb__Cast_HeadVar1_3 = ssdb__HeadVar__1_1;
    MR_Word ssdb__Cast_HeadVar2_4 = ssdb__HeadVar__2_2;

    ssdb__succeeded = (ssdb__Cast_HeadVar1_3 == ssdb__Cast_HeadVar2_4);
    return ssdb__succeeded;
  }
}

void MR_CALL 
ssdb____Compare____debugger_state_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2,
  MR_Word ssdb__HeadVar__3_3)
{
  {
    MR_Integer ssdb__Cast_HeadVar1_4 = (MR_Integer) ssdb__HeadVar__2_2;
    MR_Integer ssdb__Cast_HeadVar2_5 = (MR_Integer) ssdb__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(ssdb__HeadVar__1_1, ssdb__Cast_HeadVar1_4, ssdb__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
ssdb____Unify____debugger_state_0_0(
  MR_Word ssdb__HeadVar__2_1,
  MR_Word ssdb__HeadVar__2_2)
{
  {
    MR_bool ssdb__succeeded = (ssdb__HeadVar__2_1 == ssdb__HeadVar__2_2);

    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____breakpoints_map_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2,
  MR_Word ssdb__HeadVar__3_3)
{
  {
    MR_Word ssdb__Cast_HeadVar1_4 = ssdb__HeadVar__2_2;
    MR_Word ssdb__Cast_HeadVar2_5 = ssdb__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ssdb_scalar_common_2[0], ssdb__HeadVar__1_1, ((MR_Box) (ssdb__Cast_HeadVar1_4)), ((MR_Box) (ssdb__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ssdb____Unify____breakpoints_map_0_0(
  MR_Word ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2)
{
  {
    MR_bool ssdb__succeeded;
    MR_Word ssdb__Cast_HeadVar1_3 = ssdb__HeadVar__1_1;
    MR_Word ssdb__Cast_HeadVar2_4 = ssdb__HeadVar__2_2;

    ssdb__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ssdb_scalar_common_2[0], ((MR_Box) (ssdb__Cast_HeadVar1_3)), ((MR_Box) (ssdb__Cast_HeadVar2_4)));
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____breakpoint_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2,
  MR_Word ssdb__HeadVar__3_3)
{
  {
    MR_bool ssdb__succeeded;
    MR_Integer ssdb__CastX_12 = (MR_Integer) ssdb__HeadVar__2_2;
    MR_Integer ssdb__CastY_13 = (MR_Integer) ssdb__HeadVar__3_3;

    ssdb__succeeded = (ssdb__CastX_12 == ssdb__CastY_13);
    if (ssdb__succeeded)
      *ssdb__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ssdb__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ssdb__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ssdb__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ssdb__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ssdb__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ssdb__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ssdb__Var_10;

      mercury__private_builtin__builtin_compare_int_3_p_0(&ssdb__Var_10, ssdb__ArgX1_4, ssdb__ArgY1_5);
      ssdb__succeeded = (ssdb__Var_10 == (MR_Integer) 0);
      ssdb__succeeded = !(ssdb__succeeded);
      if (ssdb__succeeded)
        *ssdb__HeadVar__1_1 = ssdb__Var_10;
      else
      {
        MR_Word ssdb__Var_11;

        ssdb____Compare____ssdb_proc_id_0_0(&ssdb__Var_11, ssdb__ArgX2_6, ssdb__ArgY2_7);
        ssdb__succeeded = (ssdb__Var_11 == (MR_Integer) 0);
        ssdb__succeeded = !(ssdb__succeeded);
        if (ssdb__succeeded)
          *ssdb__HeadVar__1_1 = ssdb__Var_11;
        else
        {
          MR_Integer ssdb__Var_17 = (MR_Integer) ssdb__ArgX3_8;
          MR_Integer ssdb__Var_18 = (MR_Integer) ssdb__ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(ssdb__HeadVar__1_1, ssdb__Var_17, ssdb__Var_18);
        }
      }
    }
  }
}

void MR_CALL 
ssdb____Compare____ssdb_proc_id_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2,
  MR_Word ssdb__HeadVar__3_3)
{
  {
    MR_bool ssdb__succeeded;
    MR_Integer ssdb__CastX_9 = (MR_Integer) ssdb__HeadVar__2_2;
    MR_Integer ssdb__CastY_10 = (MR_Integer) ssdb__HeadVar__3_3;

    ssdb__succeeded = (ssdb__CastX_9 == ssdb__CastY_10);
    if (ssdb__succeeded)
      *ssdb__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ssdb__ArgX1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 0)));
      MR_String ssdb__ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__3_3, (MR_Integer) 0)));
      MR_String ssdb__ArgX2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 1)));
      MR_String ssdb__ArgY2_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ssdb__Var_8;

      mercury__private_builtin__builtin_compare_string_3_p_0(&ssdb__Var_8, ssdb__ArgX1_4, ssdb__ArgY1_5);
      ssdb__succeeded = (ssdb__Var_8 == (MR_Integer) 0);
      ssdb__succeeded = !(ssdb__succeeded);
      if (ssdb__succeeded)
        *ssdb__HeadVar__1_1 = ssdb__Var_8;
      else
        mercury__private_builtin__builtin_compare_string_3_p_0(ssdb__HeadVar__1_1, ssdb__ArgX2_6, ssdb__ArgY2_7);
    }
  }
}

static MR_bool MR_CALL 
ssdb____Unify____breakpoint_0_0(
  MR_Word ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2)
{
  {
    MR_bool ssdb__succeeded;
    MR_Integer ssdb__CastX_9 = (MR_Integer) ssdb__HeadVar__1_1;
    MR_Integer ssdb__CastY_10 = (MR_Integer) ssdb__HeadVar__2_2;

    ssdb__succeeded = (ssdb__CastX_9 == ssdb__CastY_10);
    if (ssdb__succeeded)
      ssdb__succeeded = MR_TRUE;
    else
    {
      MR_Integer ssdb__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ssdb__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ssdb__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ssdb__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ssdb__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ssdb__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 2)));

      ssdb__succeeded = (ssdb__ArgX1_3 == ssdb__ArgY1_4);
      if (ssdb__succeeded)
      {
        ssdb__succeeded = ssdb____Unify____ssdb_proc_id_0_0(ssdb__ArgX2_5, ssdb__ArgY2_6);
        if (ssdb__succeeded)
          ssdb__succeeded = (ssdb__ArgX3_7 == ssdb__ArgY3_8);
      }
    }
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____bp_state_0_0(
  MR_Word * ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2,
  MR_Word ssdb__HeadVar__3_3)
{
  {
    MR_Integer ssdb__Cast_HeadVar1_4 = (MR_Integer) ssdb__HeadVar__2_2;
    MR_Integer ssdb__Cast_HeadVar2_5 = (MR_Integer) ssdb__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(ssdb__HeadVar__1_1, ssdb__Cast_HeadVar1_4, ssdb__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
ssdb____Unify____bp_state_0_0(
  MR_Word ssdb__HeadVar__2_1,
  MR_Word ssdb__HeadVar__2_2)
{
  {
    MR_bool ssdb__succeeded = (ssdb__HeadVar__2_1 == ssdb__HeadVar__2_2);

    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb__unsafe_set_debugger_state_1_p_0(
  MR_Word ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_set_debugger_state_1_p_0

	MR_Word X;

	X =  ssdb__X_1 ;
		{
MR_set_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_get_debugger_state_1_p_0(
  MR_Word * ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_get_debugger_state_1_p_0

	MR_Word X;

		{
MR_get_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);


		;}
#undef MR_PROC_LABEL
	 *ssdb__X_1  = X;
}
  }
}

static void MR_CALL 
ssdb__unlock_debugger_state_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__unlock_debugger_state_0_p_0


		{


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__lock_debugger_state_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__lock_debugger_state_0_p_0


		{


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__initialise_mutable_debugger_state_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__initialise_mutable_debugger_state_0_p_0


		{
ssdb__mutable_variable_debugger_state = MR_new_thread_local_mutable_index();


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_debugger_state_0_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_debugger_state_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
MR_set_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_debugger_state_0_p_0


		{


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__pre_initialise_mutable_debugger_state_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__pre_initialise_mutable_debugger_state_0_p_0


		{
ssdb__mutable_variable_debugger_state = MR_new_thread_local_mutable_index();


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_set_saved_output_stream_1_p_0(
  MR_Word ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_set_saved_output_stream_1_p_0

	MR_Word X;

	X =  ssdb__X_1 ;
		{
ssdb__mutable_variable_saved_output_stream = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_get_saved_output_stream_1_p_0(
  MR_Word * ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_get_saved_output_stream_1_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_saved_output_stream;


		;}
#undef MR_PROC_LABEL
	 *ssdb__X_1  = X;
}
  }
}

static void MR_CALL 
ssdb__unlock_saved_output_stream_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__unlock_saved_output_stream_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                    "ssdb__mutable_variable_saved_output_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__lock_saved_output_stream_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__lock_saved_output_stream_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                    "ssdb__mutable_variable_saved_output_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__initialise_mutable_saved_output_stream_0_p_0(void)
{
  {
    MR_Word ssdb__X_1;

{
#define MR_PROC_LABEL ssdb__initialise_mutable_saved_output_stream_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_saved_output_stream_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
    ssdb__X_1 = mercury__io__stdout_stream_0_f_0();
{
#define MR_PROC_LABEL ssdb__initialise_mutable_saved_output_stream_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                    "ssdb__mutable_variable_saved_output_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_saved_output_stream_0_p_0

	MR_Word X;

	X =  ssdb__X_1 ;
		{
ssdb__mutable_variable_saved_output_stream = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_saved_output_stream_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                    "ssdb__mutable_variable_saved_output_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__pre_initialise_mutable_saved_output_stream_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__pre_initialise_mutable_saved_output_stream_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_saved_output_stream_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_set_saved_input_stream_1_p_0(
  MR_Word ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_set_saved_input_stream_1_p_0

	MR_Word X;

	X =  ssdb__X_1 ;
		{
ssdb__mutable_variable_saved_input_stream = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_get_saved_input_stream_1_p_0(
  MR_Word * ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_get_saved_input_stream_1_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_saved_input_stream;


		;}
#undef MR_PROC_LABEL
	 *ssdb__X_1  = X;
}
  }
}

static void MR_CALL 
ssdb__unlock_saved_input_stream_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__unlock_saved_input_stream_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                    "ssdb__mutable_variable_saved_input_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__lock_saved_input_stream_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__lock_saved_input_stream_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                    "ssdb__mutable_variable_saved_input_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__initialise_mutable_saved_input_stream_0_p_0(void)
{
  {
    MR_Word ssdb__X_1;

{
#define MR_PROC_LABEL ssdb__initialise_mutable_saved_input_stream_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_saved_input_stream_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
    ssdb__X_1 = mercury__io__stdin_stream_0_f_0();
{
#define MR_PROC_LABEL ssdb__initialise_mutable_saved_input_stream_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                    "ssdb__mutable_variable_saved_input_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_saved_input_stream_0_p_0

	MR_Word X;

	X =  ssdb__X_1 ;
		{
ssdb__mutable_variable_saved_input_stream = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_saved_input_stream_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                    "ssdb__mutable_variable_saved_input_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__pre_initialise_mutable_saved_input_stream_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__pre_initialise_mutable_saved_input_stream_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_saved_input_stream_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_set_tty_out_1_p_0(
  MR_Word ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_set_tty_out_1_p_0

	MR_Word X;

	X =  ssdb__X_1 ;
		{
ssdb__mutable_variable_tty_out = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_get_tty_out_1_p_0(
  MR_Word * ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_get_tty_out_1_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_tty_out;


		;}
#undef MR_PROC_LABEL
	 *ssdb__X_1  = X;
}
  }
}

static void MR_CALL 
ssdb__unlock_tty_out_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__unlock_tty_out_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_out_lock,
                    "ssdb__mutable_variable_tty_out_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__lock_tty_out_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__lock_tty_out_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_out_lock,
                    "ssdb__mutable_variable_tty_out_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__initialise_mutable_tty_out_0_p_0(void)
{
  {
    MR_Word ssdb__X_1;

{
#define MR_PROC_LABEL ssdb__initialise_mutable_tty_out_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_tty_out_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
    ssdb__X_1 = mercury__io__stdout_stream_0_f_0();
{
#define MR_PROC_LABEL ssdb__initialise_mutable_tty_out_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_out_lock,
                    "ssdb__mutable_variable_tty_out_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_tty_out_0_p_0

	MR_Word X;

	X =  ssdb__X_1 ;
		{
ssdb__mutable_variable_tty_out = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_tty_out_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_out_lock,
                    "ssdb__mutable_variable_tty_out_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__pre_initialise_mutable_tty_out_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__pre_initialise_mutable_tty_out_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_tty_out_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_set_tty_in_1_p_0(
  MR_Word ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_set_tty_in_1_p_0

	MR_Word X;

	X =  ssdb__X_1 ;
		{
ssdb__mutable_variable_tty_in = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_get_tty_in_1_p_0(
  MR_Word * ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_get_tty_in_1_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_tty_in;


		;}
#undef MR_PROC_LABEL
	 *ssdb__X_1  = X;
}
  }
}

static void MR_CALL 
ssdb__unlock_tty_in_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__unlock_tty_in_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_in_lock,
                    "ssdb__mutable_variable_tty_in_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__lock_tty_in_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__lock_tty_in_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_in_lock,
                    "ssdb__mutable_variable_tty_in_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__initialise_mutable_tty_in_0_p_0(void)
{
  {
    MR_Word ssdb__X_1;

{
#define MR_PROC_LABEL ssdb__initialise_mutable_tty_in_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_tty_in_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
    ssdb__X_1 = mercury__io__stdin_stream_0_f_0();
{
#define MR_PROC_LABEL ssdb__initialise_mutable_tty_in_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_in_lock,
                    "ssdb__mutable_variable_tty_in_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_tty_in_0_p_0

	MR_Word X;

	X =  ssdb__X_1 ;
		{
ssdb__mutable_variable_tty_in = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_tty_in_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_in_lock,
                    "ssdb__mutable_variable_tty_in_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__pre_initialise_mutable_tty_in_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__pre_initialise_mutable_tty_in_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_tty_in_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_set_list_params_1_p_0(
  MR_Word ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_set_list_params_1_p_0

	MR_Word X;

	X =  ssdb__X_1 ;
		{
ssdb__mutable_variable_list_params = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_get_list_params_1_p_0(
  MR_Word * ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_get_list_params_1_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_list_params;


		;}
#undef MR_PROC_LABEL
	 *ssdb__X_1  = X;
}
  }
}

static void MR_CALL 
ssdb__unlock_list_params_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__unlock_list_params_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__lock_list_params_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__lock_list_params_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__initialise_mutable_list_params_0_p_0(void)
{
  {
    MR_Word ssdb__X_1;
    MR_Word ssdb__Var_2;

{
#define MR_PROC_LABEL ssdb__initialise_mutable_list_params_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_list_params_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
    ssdb__Var_2 = mdb__listing__new_list_path_0_f_0();
    {
      ssdb__X_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ssdb__X_1, 0) = ((MR_Box) (ssdb__Var_2));
      MR_hl_field(MR_mktag(0), ssdb__X_1, 1) = ((MR_Box) ((MR_Integer) 2));
    }
{
#define MR_PROC_LABEL ssdb__initialise_mutable_list_params_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_list_params_0_p_0

	MR_Word X;

	X =  ssdb__X_1 ;
		{
ssdb__mutable_variable_list_params = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_list_params_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__pre_initialise_mutable_list_params_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__pre_initialise_mutable_list_params_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_list_params_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_set_browser_state_1_p_0(
  MR_Word ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_set_browser_state_1_p_0

	MR_Word X;

	X =  ssdb__X_1 ;
		{
ssdb__mutable_variable_browser_state = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_get_browser_state_1_p_0(
  MR_Word * ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_get_browser_state_1_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_browser_state;


		;}
#undef MR_PROC_LABEL
	 *ssdb__X_1  = X;
}
  }
}

static void MR_CALL 
ssdb__unlock_browser_state_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__unlock_browser_state_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__lock_browser_state_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__lock_browser_state_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__initialise_mutable_browser_state_0_p_0(void)
{
  {
    MR_Word ssdb__X_1;

{
#define MR_PROC_LABEL ssdb__initialise_mutable_browser_state_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_browser_state_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
    mdb__browser_info__init_persistent_state_1_p_0(&ssdb__X_1);
{
#define MR_PROC_LABEL ssdb__initialise_mutable_browser_state_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_browser_state_0_p_0

	MR_Word X;

	X =  ssdb__X_1 ;
		{
ssdb__mutable_variable_browser_state = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_browser_state_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__pre_initialise_mutable_browser_state_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__pre_initialise_mutable_browser_state_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_browser_state_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_set_breakpoints_filter_1_p_0(
  MR_Box ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_set_breakpoints_filter_1_p_0

	MR_BitmapPtr X;

	X = (MR_BitmapPtr) ssdb__X_1 ;
		{
ssdb__mutable_variable_breakpoints_filter = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_get_breakpoints_filter_1_p_0(
  MR_Box * ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_get_breakpoints_filter_1_p_0

	MR_BitmapPtr X;

		{
X = ssdb__mutable_variable_breakpoints_filter;


		;}
#undef MR_PROC_LABEL
	 *ssdb__X_1  = (MR_Box) X;
}
  }
}

static void MR_CALL 
ssdb__unlock_breakpoints_filter_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__unlock_breakpoints_filter_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                    "ssdb__mutable_variable_breakpoints_filter_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__lock_breakpoints_filter_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__lock_breakpoints_filter_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                    "ssdb__mutable_variable_breakpoints_filter_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__initialise_mutable_breakpoints_filter_0_p_0(void)
{
  {
    MR_Box ssdb__X_1;

{
#define MR_PROC_LABEL ssdb__initialise_mutable_breakpoints_filter_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_breakpoints_filter_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
    ssdb__X_1 = mercury__bitmap__init_1_f_0(((MR_Integer) 65535 + (MR_Integer) 1));
{
#define MR_PROC_LABEL ssdb__initialise_mutable_breakpoints_filter_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                    "ssdb__mutable_variable_breakpoints_filter_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_breakpoints_filter_0_p_0

	MR_BitmapPtr X;

	X = (MR_BitmapPtr) ssdb__X_1 ;
		{
ssdb__mutable_variable_breakpoints_filter = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_breakpoints_filter_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                    "ssdb__mutable_variable_breakpoints_filter_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__pre_initialise_mutable_breakpoints_filter_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__pre_initialise_mutable_breakpoints_filter_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_breakpoints_filter_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_set_breakpoints_map_1_p_0(
  MR_Word ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_set_breakpoints_map_1_p_0

	MR_Word X;

	X =  ssdb__X_1 ;
		{
ssdb__mutable_variable_breakpoints_map = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_get_breakpoints_map_1_p_0(
  MR_Word * ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_get_breakpoints_map_1_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_breakpoints_map;


		;}
#undef MR_PROC_LABEL
	 *ssdb__X_1  = X;
}
  }
}

static void MR_CALL 
ssdb__unlock_breakpoints_map_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__unlock_breakpoints_map_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__lock_breakpoints_map_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__lock_breakpoints_map_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__initialise_mutable_breakpoints_map_0_p_0(void)
{
  {
    MR_Word ssdb__X_1;

{
#define MR_PROC_LABEL ssdb__initialise_mutable_breakpoints_map_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_breakpoints_map_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
    ssdb__X_1 = mercury__map__init_0_f_0((MR_Word) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0, (MR_Word) &ssdb__ssdb__type_ctor_info_breakpoint_0);
{
#define MR_PROC_LABEL ssdb__initialise_mutable_breakpoints_map_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_breakpoints_map_0_p_0

	MR_Word X;

	X =  ssdb__X_1 ;
		{
ssdb__mutable_variable_breakpoints_map = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_breakpoints_map_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__pre_initialise_mutable_breakpoints_map_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__pre_initialise_mutable_breakpoints_map_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_breakpoints_map_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_set_aliases_1_p_0(
  MR_Word ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_set_aliases_1_p_0

	MR_Word X;

	X =  ssdb__X_1 ;
		{
ssdb__mutable_variable_aliases = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_get_aliases_1_p_0(
  MR_Word * ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_get_aliases_1_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_aliases;


		;}
#undef MR_PROC_LABEL
	 *ssdb__X_1  = X;
}
  }
}

static void MR_CALL 
ssdb__unlock_aliases_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__unlock_aliases_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_aliases_lock,
                    "ssdb__mutable_variable_aliases_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__lock_aliases_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__lock_aliases_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_aliases_lock,
                    "ssdb__mutable_variable_aliases_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__initialise_mutable_aliases_0_p_0(void)
{
  {
    MR_Word ssdb__X_1;

{
#define MR_PROC_LABEL ssdb__initialise_mutable_aliases_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_aliases_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
    ssdb__X_1 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ssdb_scalar_common_1[0]);
{
#define MR_PROC_LABEL ssdb__initialise_mutable_aliases_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_aliases_lock,
                    "ssdb__mutable_variable_aliases_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_aliases_0_p_0

	MR_Word X;

	X =  ssdb__X_1 ;
		{
ssdb__mutable_variable_aliases = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_aliases_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_aliases_lock,
                    "ssdb__mutable_variable_aliases_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__pre_initialise_mutable_aliases_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__pre_initialise_mutable_aliases_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_aliases_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_set_command_queue_1_p_0(
  MR_Word ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_set_command_queue_1_p_0

	MR_Word X;

	X =  ssdb__X_1 ;
		{
ssdb__mutable_variable_command_queue = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_get_command_queue_1_p_0(
  MR_Word * ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_get_command_queue_1_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_command_queue;


		;}
#undef MR_PROC_LABEL
	 *ssdb__X_1  = X;
}
  }
}

static void MR_CALL 
ssdb__unlock_command_queue_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__unlock_command_queue_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_command_queue_lock,
                    "ssdb__mutable_variable_command_queue_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__lock_command_queue_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__lock_command_queue_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_command_queue_lock,
                    "ssdb__mutable_variable_command_queue_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__initialise_mutable_command_queue_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__initialise_mutable_command_queue_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_command_queue_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_command_queue_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_command_queue_lock,
                    "ssdb__mutable_variable_command_queue_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_command_queue_0_p_0

	MR_Word X;

	X =  (MR_Word) MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[17]) ;
		{
ssdb__mutable_variable_command_queue = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_command_queue_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_command_queue_lock,
                    "ssdb__mutable_variable_command_queue_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__pre_initialise_mutable_command_queue_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__pre_initialise_mutable_command_queue_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_command_queue_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_set_nondet_shadow_stack_depth_1_p_0(
  MR_Integer ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_set_nondet_shadow_stack_depth_1_p_0

	MR_Integer X;

	X =  ssdb__X_1 ;
		{
ssdb__mutable_variable_nondet_shadow_stack_depth = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_get_nondet_shadow_stack_depth_1_p_0(
  MR_Integer * ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_get_nondet_shadow_stack_depth_1_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_nondet_shadow_stack_depth;


		;}
#undef MR_PROC_LABEL
	 *ssdb__X_1  = X;
}
  }
}

static void MR_CALL 
ssdb__unlock_nondet_shadow_stack_depth_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__unlock_nondet_shadow_stack_depth_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__lock_nondet_shadow_stack_depth_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__lock_nondet_shadow_stack_depth_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__initialise_mutable_nondet_shadow_stack_depth_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__initialise_mutable_nondet_shadow_stack_depth_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_nondet_shadow_stack_depth_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_nondet_shadow_stack_depth_0_p_0

	MR_Integer X;

	X =  (MR_Integer) 0 ;
		{
ssdb__mutable_variable_nondet_shadow_stack_depth = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_nondet_shadow_stack_depth_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__pre_initialise_mutable_nondet_shadow_stack_depth_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__pre_initialise_mutable_nondet_shadow_stack_depth_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_set_nondet_shadow_stack_1_p_0(
  MR_Word ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_set_nondet_shadow_stack_1_p_0

	MR_Word X;

	X =  ssdb__X_1 ;
		{
ssdb__mutable_variable_nondet_shadow_stack = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_get_nondet_shadow_stack_1_p_0(
  MR_Word * ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_get_nondet_shadow_stack_1_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_nondet_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 *ssdb__X_1  = X;
}
  }
}

static void MR_CALL 
ssdb__unlock_nondet_shadow_stack_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__unlock_nondet_shadow_stack_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__lock_nondet_shadow_stack_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__lock_nondet_shadow_stack_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__initialise_mutable_nondet_shadow_stack_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__initialise_mutable_nondet_shadow_stack_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_nondet_shadow_stack_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_nondet_shadow_stack_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_nondet_shadow_stack_0_p_0

	MR_Word X;

	X =  (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) ;
		{
ssdb__mutable_variable_nondet_shadow_stack = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_nondet_shadow_stack_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__pre_initialise_mutable_nondet_shadow_stack_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__pre_initialise_mutable_nondet_shadow_stack_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_nondet_shadow_stack_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_set_shadow_stack_depth_1_p_0(
  MR_Integer ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_set_shadow_stack_depth_1_p_0

	MR_Integer X;

	X =  ssdb__X_1 ;
		{
ssdb__mutable_variable_shadow_stack_depth = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_get_shadow_stack_depth_1_p_0(
  MR_Integer * ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_get_shadow_stack_depth_1_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_shadow_stack_depth;


		;}
#undef MR_PROC_LABEL
	 *ssdb__X_1  = X;
}
  }
}

static void MR_CALL 
ssdb__unlock_shadow_stack_depth_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__unlock_shadow_stack_depth_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__lock_shadow_stack_depth_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__lock_shadow_stack_depth_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__initialise_mutable_shadow_stack_depth_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__initialise_mutable_shadow_stack_depth_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_shadow_stack_depth_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_shadow_stack_depth_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_shadow_stack_depth_0_p_0

	MR_Integer X;

	X =  (MR_Integer) 0 ;
		{
ssdb__mutable_variable_shadow_stack_depth = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_shadow_stack_depth_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__pre_initialise_mutable_shadow_stack_depth_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__pre_initialise_mutable_shadow_stack_depth_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_shadow_stack_depth_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_set_shadow_stack_1_p_0(
  MR_Word ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_set_shadow_stack_1_p_0

	MR_Word X;

	X =  ssdb__X_1 ;
		{
ssdb__mutable_variable_shadow_stack = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_get_shadow_stack_1_p_0(
  MR_Word * ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_get_shadow_stack_1_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 *ssdb__X_1  = X;
}
  }
}

static void MR_CALL 
ssdb__unlock_shadow_stack_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__unlock_shadow_stack_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__lock_shadow_stack_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__lock_shadow_stack_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__initialise_mutable_shadow_stack_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__initialise_mutable_shadow_stack_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_shadow_stack_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_shadow_stack_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_shadow_stack_0_p_0

	MR_Word X;

	X =  (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) ;
		{
ssdb__mutable_variable_shadow_stack = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_shadow_stack_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__pre_initialise_mutable_shadow_stack_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__pre_initialise_mutable_shadow_stack_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_shadow_stack_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_set_cur_ssdb_next_stop_1_p_0(
  MR_Word ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_set_cur_ssdb_next_stop_1_p_0

	MR_Word X;

	X =  ssdb__X_1 ;
		{
ssdb__mutable_variable_cur_ssdb_next_stop = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_get_cur_ssdb_next_stop_1_p_0(
  MR_Word * ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_get_cur_ssdb_next_stop_1_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_cur_ssdb_next_stop;


		;}
#undef MR_PROC_LABEL
	 *ssdb__X_1  = X;
}
  }
}

static void MR_CALL 
ssdb__unlock_cur_ssdb_next_stop_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__unlock_cur_ssdb_next_stop_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                    "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__lock_cur_ssdb_next_stop_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__lock_cur_ssdb_next_stop_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                    "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__initialise_mutable_cur_ssdb_next_stop_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__initialise_mutable_cur_ssdb_next_stop_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_next_stop_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_cur_ssdb_next_stop_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                    "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_cur_ssdb_next_stop_0_p_0

	MR_Word X;

	X =  (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) ;
		{
ssdb__mutable_variable_cur_ssdb_next_stop = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_cur_ssdb_next_stop_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                    "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__pre_initialise_mutable_cur_ssdb_next_stop_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__pre_initialise_mutable_cur_ssdb_next_stop_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_next_stop_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__get_cur_ssdb_csn_1_p_0(
  MR_Integer * ssdb__X_2)
{
  {
{
#define MR_PROC_LABEL ssdb__get_cur_ssdb_csn_1_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                    "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__get_cur_ssdb_csn_1_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_cur_ssdb_csn;


		;}
#undef MR_PROC_LABEL
	 *ssdb__X_2  = X;
}
{
#define MR_PROC_LABEL ssdb__get_cur_ssdb_csn_1_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                    "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_set_cur_ssdb_csn_1_p_0(
  MR_Integer ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_set_cur_ssdb_csn_1_p_0

	MR_Integer X;

	X =  ssdb__X_1 ;
		{
ssdb__mutable_variable_cur_ssdb_csn = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_get_cur_ssdb_csn_1_p_0(
  MR_Integer * ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_get_cur_ssdb_csn_1_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_cur_ssdb_csn;


		;}
#undef MR_PROC_LABEL
	 *ssdb__X_1  = X;
}
  }
}

static void MR_CALL 
ssdb__unlock_cur_ssdb_csn_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__unlock_cur_ssdb_csn_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                    "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__lock_cur_ssdb_csn_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__lock_cur_ssdb_csn_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                    "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__initialise_mutable_cur_ssdb_csn_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__initialise_mutable_cur_ssdb_csn_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_csn_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_cur_ssdb_csn_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                    "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_cur_ssdb_csn_0_p_0

	MR_Integer X;

	X =  (MR_Integer) 0 ;
		{
ssdb__mutable_variable_cur_ssdb_csn = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_cur_ssdb_csn_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                    "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__pre_initialise_mutable_cur_ssdb_csn_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__pre_initialise_mutable_cur_ssdb_csn_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_csn_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_set_cur_ssdb_event_number_1_p_0(
  MR_Integer ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_set_cur_ssdb_event_number_1_p_0

	MR_Integer X;

	X =  ssdb__X_1 ;
		{
ssdb__mutable_variable_cur_ssdb_event_number = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_get_cur_ssdb_event_number_1_p_0(
  MR_Integer * ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_get_cur_ssdb_event_number_1_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_cur_ssdb_event_number;


		;}
#undef MR_PROC_LABEL
	 *ssdb__X_1  = X;
}
  }
}

static void MR_CALL 
ssdb__unlock_cur_ssdb_event_number_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__unlock_cur_ssdb_event_number_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__lock_cur_ssdb_event_number_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__lock_cur_ssdb_event_number_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__initialise_mutable_cur_ssdb_event_number_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__initialise_mutable_cur_ssdb_event_number_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_event_number_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_cur_ssdb_event_number_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_cur_ssdb_event_number_0_p_0

	MR_Integer X;

	X =  (MR_Integer) 0 ;
		{
ssdb__mutable_variable_cur_ssdb_event_number = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_cur_ssdb_event_number_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__pre_initialise_mutable_cur_ssdb_event_number_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__pre_initialise_mutable_cur_ssdb_event_number_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_event_number_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_set_cur_line_number_1_p_0(
  MR_Integer ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_set_cur_line_number_1_p_0

	MR_Integer X;

	X =  ssdb__X_1 ;
		{
ssdb__mutable_variable_cur_line_number = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_get_cur_line_number_1_p_0(
  MR_Integer * ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_get_cur_line_number_1_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_cur_line_number;


		;}
#undef MR_PROC_LABEL
	 *ssdb__X_1  = X;
}
  }
}

static void MR_CALL 
ssdb__unlock_cur_line_number_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__unlock_cur_line_number_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_line_number_lock,
                    "ssdb__mutable_variable_cur_line_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__lock_cur_line_number_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__lock_cur_line_number_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_line_number_lock,
                    "ssdb__mutable_variable_cur_line_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__initialise_mutable_cur_line_number_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__initialise_mutable_cur_line_number_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_line_number_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_cur_line_number_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_line_number_lock,
                    "ssdb__mutable_variable_cur_line_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_cur_line_number_0_p_0

	MR_Integer X;

	X =  (MR_Integer) 0 ;
		{
ssdb__mutable_variable_cur_line_number = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_cur_line_number_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_line_number_lock,
                    "ssdb__mutable_variable_cur_line_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__pre_initialise_mutable_cur_line_number_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__pre_initialise_mutable_cur_line_number_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_line_number_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_set_cur_filename_1_p_0(
  MR_String ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_set_cur_filename_1_p_0

	MR_String X;

	X =  ssdb__X_1 ;
		{
ssdb__mutable_variable_cur_filename = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__unsafe_get_cur_filename_1_p_0(
  MR_String * ssdb__X_1)
{
  {
{
#define MR_PROC_LABEL ssdb__unsafe_get_cur_filename_1_p_0

	MR_String X;

		{
X = ssdb__mutable_variable_cur_filename;


		;}
#undef MR_PROC_LABEL
	 *ssdb__X_1  = X;
}
  }
}

static void MR_CALL 
ssdb__unlock_cur_filename_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__unlock_cur_filename_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_filename_lock,
                    "ssdb__mutable_variable_cur_filename_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__lock_cur_filename_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__lock_cur_filename_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_filename_lock,
                    "ssdb__mutable_variable_cur_filename_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__initialise_mutable_cur_filename_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__initialise_mutable_cur_filename_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_filename_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_cur_filename_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_filename_lock,
                    "ssdb__mutable_variable_cur_filename_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_cur_filename_0_p_0

	MR_String X;

	X =  (MR_String) "" ;
		{
ssdb__mutable_variable_cur_filename = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__initialise_mutable_cur_filename_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_filename_lock,
                    "ssdb__mutable_variable_cur_filename_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__pre_initialise_mutable_cur_filename_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__pre_initialise_mutable_cur_filename_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_filename_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__exit_process_2_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__exit_process_2_p_0


		{

    exit(0);


		;}
#undef MR_PROC_LABEL
}
  }
}

static MR_bool MR_CALL 
ssdb__safe_to_write_1_p_0(
  MR_Word ssdb__TypeInfo_for_T_3,
  MR_Box ssdb__HeadVar__1_1)
{
  {
    MR_bool ssdb__succeeded;

    ssdb__succeeded = ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_102_101_95_116_111_95_119_114_105_116_101_95_95_91_49_93_95_48_1_p_0(ssdb__HeadVar__1_1);
    return ssdb__succeeded;
  }
}

static MR_bool MR_CALL 
ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_102_101_95_116_111_95_119_114_105_116_101_95_95_91_49_93_95_48_1_p_0(
  MR_Box ssdb__HeadVar__1_1)
{
  {
    MR_bool ssdb__succeeded;
    MR_Word ssdb__TypeInfo_for_T_4;

{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_102_101_95_116_111_95_119_114_105_116_101_95_95_91_49_93_95_48_1_p_0

	MR_Word T;
	MR_bool SUCCESS_INDICATOR;

	T = (MR_Word) ssdb__HeadVar__1_1 ;
		{

    SUCCESS_INDICATOR = (T != 0);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
ssdb__succeeded  = SUCCESS_INDICATOR;
}
    return ssdb__succeeded;
  }
}

static MR_Integer MR_CALL 
ssdb__bp_number_1_f_0(
  MR_Word ssdb__HeadVar__1_1)
{
  {
    MR_Integer ssdb__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ssdb__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ssdb__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 2)));

    return ssdb__HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
ssdb__non_dot_1_p_0(
  MR_Char ssdb__C_2)
{
  {
    MR_bool ssdb__succeeded = (ssdb__C_2 == (MR_Char) 46);

    ssdb__succeeded = !(ssdb__succeeded);
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb__rollback_nondet_stack_3_p_0(
  MR_Integer ssdb__TargetCSN_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ssdb__succeeded;
      MR_Integer ssdb__StackDepth_6;

{
#define MR_PROC_LABEL ssdb__rollback_nondet_stack_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__rollback_nondet_stack_3_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_nondet_shadow_stack_depth;


		;}
#undef MR_PROC_LABEL
	 ssdb__StackDepth_6  = X;
}
{
#define MR_PROC_LABEL ssdb__rollback_nondet_stack_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      ssdb__succeeded = (ssdb__StackDepth_6 == (MR_Integer) 0);
      if (!(ssdb__succeeded))
      {
        MR_Word ssdb__StackFrame_7;
        MR_Word ssdb__Stack_36;
        MR_Box ssdb__conv0_StackFrame_7;
        MR_Integer ssdb__Var_13;
        MR_Integer ssdb__Var_16;
        MR_Integer ssdb__Var_17;
        MR_Word ssdb__Var_18;
        MR_String ssdb__Var_19;
        MR_Integer ssdb__Var_20;
        MR_Word ssdb__Var_21;
        MR_Word ssdb__Var_22;

{
#define MR_PROC_LABEL ssdb__rollback_nondet_stack_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__rollback_nondet_stack_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_nondet_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_36  = X;
}
{
#define MR_PROC_LABEL ssdb__rollback_nondet_stack_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__list__det_index0_3_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_stack_frame_0, ssdb__Stack_36, (MR_Integer) 0, &ssdb__conv0_StackFrame_7);
        ssdb__StackFrame_7 = ((MR_Word) ssdb__conv0_StackFrame_7);
        ssdb__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_7, (MR_Integer) 0)));
        ssdb__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_7, (MR_Integer) 1)));
        ssdb__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_7, (MR_Integer) 2)));
        ssdb__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_7, (MR_Integer) 3)));
        ssdb__Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_7, (MR_Integer) 4)));
        ssdb__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_7, (MR_Integer) 5)));
        ssdb__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_7, (MR_Integer) 6)));
        ssdb__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_7, (MR_Integer) 7)));
        ssdb__succeeded = (ssdb__Var_13 <= ssdb__TargetCSN_4);
        if (!(ssdb__succeeded))
        {
          MR_Word ssdb__Stack_45;
          MR_Integer ssdb__Depth_46;

{
#define MR_PROC_LABEL ssdb__rollback_nondet_stack_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__rollback_nondet_stack_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_nondet_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_45  = X;
}
{
#define MR_PROC_LABEL ssdb__rollback_nondet_stack_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__rollback_nondet_stack_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__rollback_nondet_stack_3_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_nondet_shadow_stack_depth;


		;}
#undef MR_PROC_LABEL
	 ssdb__Depth_46  = X;
}
{
#define MR_PROC_LABEL ssdb__rollback_nondet_stack_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          if ((ssdb__Stack_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__error_1_p_0((MR_String) "ssdb: nondet_stack_pop on empty stack");
              return;
            }
          }
          else
          {
            MR_Word ssdb__StackTail_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_45, (MR_Integer) 1)));
            MR_Integer ssdb__Var_52;
            MR_Word ssdb__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_45, (MR_Integer) 0)));

{
#define MR_PROC_LABEL ssdb__rollback_nondet_stack_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__rollback_nondet_stack_3_p_0

	MR_Word X;

	X =  ssdb__StackTail_48 ;
		{
ssdb__mutable_variable_nondet_shadow_stack = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__rollback_nondet_stack_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
            ssdb__Var_52 = (ssdb__Depth_46 - (MR_Integer) 1);
{
#define MR_PROC_LABEL ssdb__rollback_nondet_stack_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__rollback_nondet_stack_3_p_0

	MR_Integer X;

	X =  ssdb__Var_52 ;
		{
ssdb__mutable_variable_nondet_shadow_stack_depth = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__rollback_nondet_stack_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          }
          /* direct tailcall eliminated */
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ssdb__rollback_stack_3_p_0(
  MR_Integer ssdb__TargetCSN_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ssdb__succeeded;
      MR_Word ssdb__StackFrame_6;
      MR_Word ssdb__Stack_33;
      MR_Integer ssdb__Var_10;
      MR_Integer ssdb__Var_15;
      MR_Integer ssdb__Var_16;
      MR_Word ssdb__Var_17;
      MR_String ssdb__Var_18;
      MR_Integer ssdb__Var_19;
      MR_Word ssdb__Var_20;
      MR_Word ssdb__Var_21;

{
#define MR_PROC_LABEL ssdb__rollback_stack_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__rollback_stack_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_33  = X;
}
{
#define MR_PROC_LABEL ssdb__rollback_stack_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      if ((ssdb__Stack_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__error_1_p_0((MR_String) "ssdb: stack_top on empty stack");
          return;
        }
      }
      else
      {
        MR_Word ssdb__Var_34;

        ssdb__StackFrame_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_33, (MR_Integer) 0)));
        ssdb__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_33, (MR_Integer) 1)));
      }
      ssdb__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_6, (MR_Integer) 0)));
      ssdb__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_6, (MR_Integer) 1)));
      ssdb__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_6, (MR_Integer) 2)));
      ssdb__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_6, (MR_Integer) 3)));
      ssdb__Var_18 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_6, (MR_Integer) 4)));
      ssdb__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_6, (MR_Integer) 5)));
      ssdb__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_6, (MR_Integer) 6)));
      ssdb__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_6, (MR_Integer) 7)));
      ssdb__succeeded = (ssdb__Var_10 <= ssdb__TargetCSN_4);
      if (ssdb__succeeded)
      {
{
#define MR_PROC_LABEL ssdb__rollback_stack_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                    "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__rollback_stack_3_p_0

	MR_Integer X;

	X =  ssdb__Var_10 ;
		{
ssdb__mutable_variable_cur_ssdb_csn = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__rollback_stack_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                    "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      }
      else
      {
        MR_Word ssdb__Stack_46;
        MR_Integer ssdb__Depth_47;

{
#define MR_PROC_LABEL ssdb__rollback_stack_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__rollback_stack_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_46  = X;
}
{
#define MR_PROC_LABEL ssdb__rollback_stack_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__rollback_stack_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__rollback_stack_3_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_shadow_stack_depth;


		;}
#undef MR_PROC_LABEL
	 ssdb__Depth_47  = X;
}
{
#define MR_PROC_LABEL ssdb__rollback_stack_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
        if ((ssdb__Stack_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__require__error_1_p_0((MR_String) "ssdb: stack_pop on empty stack");
            return;
          }
        }
        else
        {
          MR_Word ssdb__StackTail_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_46, (MR_Integer) 1)));
          MR_Integer ssdb__Var_53;
          MR_Word ssdb__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_46, (MR_Integer) 0)));

{
#define MR_PROC_LABEL ssdb__rollback_stack_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__rollback_stack_3_p_0

	MR_Word X;

	X =  ssdb__StackTail_49 ;
		{
ssdb__mutable_variable_shadow_stack = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__rollback_stack_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__Var_53 = (ssdb__Depth_47 - (MR_Integer) 1);
{
#define MR_PROC_LABEL ssdb__rollback_stack_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__rollback_stack_3_p_0

	MR_Integer X;

	X =  ssdb__Var_53 ;
		{
ssdb__mutable_variable_shadow_stack_depth = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__rollback_stack_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
        }
        /* direct tailcall eliminated */
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ssdb__handle_event_excp_3_p_0(
  MR_String ssdb__ModuleName_4,
  MR_String ssdb__ProcName_5,
  MR_Word ssdb__Univ_6)
{
  {
    MR_Word ssdb__DebuggerState_8;

    mercury__private_builtin__dummy_var = mercury__private_builtin__dummy_var;
    mercury__builtin__impure_true_0_p_0();
{
#define MR_PROC_LABEL ssdb__handle_event_excp_3_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_excp_3_p_0

	MR_Word X;

		{
MR_get_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);


		;}
#undef MR_PROC_LABEL
	 ssdb__DebuggerState_8  = X;
}
{
#define MR_PROC_LABEL ssdb__handle_event_excp_3_p_0


		{


		;}
#undef MR_PROC_LABEL
}
    switch (ssdb__DebuggerState_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ssdb__ProcId_9;
          MR_Word ssdb__VarDescs_10;
          MR_Word ssdb__Var_13;

          {
            ssdb__ProcId_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ssdb__ProcId_9, 0) = ((MR_Box) (ssdb__ModuleName_4));
            MR_hl_field(MR_mktag(0), ssdb__ProcId_9, 1) = ((MR_Box) (ssdb__ProcName_5));
          }
          {
            ssdb__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ssdb__Var_13, 0) = ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0));
            MR_hl_field(MR_mktag(1), ssdb__Var_13, 1) = ((MR_Box) ((MR_String) "Univ"));
            MR_hl_field(MR_mktag(1), ssdb__Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(1), ssdb__Var_13, 3) = ((MR_Box) (ssdb__Univ_6));
          }
          {
            ssdb__VarDescs_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ssdb__VarDescs_10, 0) = ((MR_Box) (ssdb__Var_13));
            MR_hl_field(MR_mktag(1), ssdb__VarDescs_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          ssdb__handle_event_excp_2_5_p_0(ssdb__ProcId_9, ssdb__VarDescs_10, (MR_Integer) 0);
        }
        break;
    }
    mercury__builtin__impure_true_0_p_0();
  }
}

static void MR_CALL 
ssdb__handle_event_excp_2_5_p_0(
  MR_Word ssdb__ProcId_6,
  MR_Word ssdb__ListVarValue_7,
  MR_Word ssdb__Level_8)
{
  {
    MR_Integer ssdb__EventNum_10;
    MR_Integer ssdb__CSN_11;
    MR_Integer ssdb__OldDepth_12;
    MR_Integer ssdb__Depth_13;
    MR_String ssdb__SiteFile_14;
    MR_Integer ssdb__SiteLine_15;
    MR_Word ssdb__StackFrame_16;
    MR_Word ssdb__Stop_18;
    MR_Integer ssdb__EventNum0_42;
    MR_Integer ssdb__CSN0_56;
    MR_Word ssdb___AutoRetry_19;

{
#define MR_PROC_LABEL ssdb__handle_event_excp_2_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_excp_2_5_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_cur_ssdb_event_number;


		;}
#undef MR_PROC_LABEL
	 ssdb__EventNum0_42  = X;
}
{
#define MR_PROC_LABEL ssdb__handle_event_excp_2_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    ssdb__EventNum_10 = (ssdb__EventNum0_42 + (MR_Integer) 1);
{
#define MR_PROC_LABEL ssdb__handle_event_excp_2_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_excp_2_5_p_0

	MR_Integer X;

	X =  ssdb__EventNum_10 ;
		{
ssdb__mutable_variable_cur_ssdb_event_number = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_excp_2_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_excp_2_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                    "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_excp_2_5_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_cur_ssdb_csn;


		;}
#undef MR_PROC_LABEL
	 ssdb__CSN0_56  = X;
}
{
#define MR_PROC_LABEL ssdb__handle_event_excp_2_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                    "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    ssdb__CSN_11 = (ssdb__CSN0_56 + (MR_Integer) 1);
{
#define MR_PROC_LABEL ssdb__handle_event_excp_2_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                    "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_excp_2_5_p_0

	MR_Integer X;

	X =  ssdb__CSN_11 ;
		{
ssdb__mutable_variable_cur_ssdb_csn = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_excp_2_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                    "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_excp_2_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_excp_2_5_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_shadow_stack_depth;


		;}
#undef MR_PROC_LABEL
	 ssdb__OldDepth_12  = X;
}
{
#define MR_PROC_LABEL ssdb__handle_event_excp_2_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    ssdb__Depth_13 = (ssdb__OldDepth_12 + (MR_Integer) 1);
{
#define MR_PROC_LABEL ssdb__handle_event_excp_2_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_filename_lock,
                    "ssdb__mutable_variable_cur_filename_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_excp_2_5_p_0

	MR_String X;

		{
X = ssdb__mutable_variable_cur_filename;


		;}
#undef MR_PROC_LABEL
	 ssdb__SiteFile_14  = X;
}
{
#define MR_PROC_LABEL ssdb__handle_event_excp_2_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_filename_lock,
                    "ssdb__mutable_variable_cur_filename_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_excp_2_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_line_number_lock,
                    "ssdb__mutable_variable_cur_line_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_excp_2_5_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_cur_line_number;


		;}
#undef MR_PROC_LABEL
	 ssdb__SiteLine_15  = X;
}
{
#define MR_PROC_LABEL ssdb__handle_event_excp_2_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_line_number_lock,
                    "ssdb__mutable_variable_cur_line_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    {
      ssdb__StackFrame_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ssdb__StackFrame_16, 0) = ((MR_Box) (ssdb__EventNum_10));
      MR_hl_field(MR_mktag(0), ssdb__StackFrame_16, 1) = ((MR_Box) (ssdb__CSN_11));
      MR_hl_field(MR_mktag(0), ssdb__StackFrame_16, 2) = ((MR_Box) (ssdb__Depth_13));
      MR_hl_field(MR_mktag(0), ssdb__StackFrame_16, 3) = ((MR_Box) (ssdb__ProcId_6));
      MR_hl_field(MR_mktag(0), ssdb__StackFrame_16, 4) = ((MR_Box) (ssdb__SiteFile_14));
      MR_hl_field(MR_mktag(0), ssdb__StackFrame_16, 5) = ((MR_Box) (ssdb__SiteLine_15));
      MR_hl_field(MR_mktag(0), ssdb__StackFrame_16, 6) = ((MR_Box) (ssdb__ListVarValue_7));
      MR_hl_field(MR_mktag(0), ssdb__StackFrame_16, 7) = ((MR_Box) (ssdb__Level_8));
    }
    ssdb__stack_push_3_p_0(ssdb__StackFrame_16);
    ssdb__should_stop_at_this_event_8_p_0((MR_Integer) 7, ssdb__EventNum_10, ssdb__CSN_11, ssdb__ProcId_6, &ssdb__Stop_18, &ssdb___AutoRetry_19);
    switch (ssdb__Stop_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ssdb__WhatNext_20;
          MR_Word ssdb___Retry_21;

          ssdb__save_streams_2_p_0();
          ssdb__print_event_info_4_p_0((MR_Integer) 7, ssdb__EventNum_10);
          ssdb__read_and_execute_cmd_2_6_p_0((MR_Integer) 0, (MR_Integer) 7, (MR_Integer) 0, &ssdb__WhatNext_20);
          ssdb__update_next_stop_6_p_0(ssdb__EventNum_10, ssdb__CSN_11, ssdb__WhatNext_20, &ssdb___Retry_21);
          ssdb__restore_streams_2_p_0();
        }
        break;
    }
  }
}

static void MR_CALL 
ssdb__step_next_stop_2_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__step_next_stop_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                    "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__step_next_stop_2_p_0

	MR_Word X;

	X =  (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) ;
		{
ssdb__mutable_variable_cur_ssdb_next_stop = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__step_next_stop_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                    "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__init_debugger_state_2_p_0(void)
{
  {
    MR_bool ssdb__succeeded;
    MR_Word ssdb__MaybeEnv_4;
    MR_Word ssdb__MaybeTTY_5;

    mercury__io__get_environment_var_4_p_0((MR_String) "SSDB", &ssdb__MaybeEnv_4);
    mercury__io__get_environment_var_4_p_0((MR_String) "SSDB_TTY", &ssdb__MaybeTTY_5);
    {
      MR_String ssdb__Var_6;

      ssdb__succeeded = ((MR_tag((MR_Word) ssdb__MaybeEnv_4)) == (MR_mktag((MR_Integer) 1)));
      if (ssdb__succeeded)
        ssdb__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__MaybeEnv_4, (MR_Integer) 0)));
    }
    if (!(ssdb__succeeded))
    {
      MR_String ssdb__Var_7;

      ssdb__succeeded = ((MR_tag((MR_Word) ssdb__MaybeTTY_5)) == (MR_mktag((MR_Integer) 1)));
      if (ssdb__succeeded)
        ssdb__Var_7 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__MaybeTTY_5, (MR_Integer) 0)));
    }
    if (ssdb__succeeded)
    {
      MR_String ssdb__Var_28;

      if (!((ssdb__MaybeTTY_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        MR_String ssdb__FileName_8 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__MaybeTTY_5, (MR_Integer) 0)));
        MR_Word ssdb__InputRes_9;
        MR_Word ssdb__OutputRes_12;

        mercury__io__open_input_4_p_0(ssdb__FileName_8, &ssdb__InputRes_9);
        if (!(((MR_tag((MR_Word) ssdb__InputRes_9)) == (MR_mktag((MR_Integer) 1)))))
        {
          MR_Word ssdb__InputStream_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__InputRes_9, (MR_Integer) 0)));

{
#define MR_PROC_LABEL ssdb__init_debugger_state_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_in_lock,
                    "ssdb__mutable_variable_tty_in_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__init_debugger_state_2_p_0

	MR_Word X;

	X =  ssdb__InputStream_10 ;
		{
ssdb__mutable_variable_tty_in = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__init_debugger_state_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_in_lock,
                    "ssdb__mutable_variable_tty_in_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
        }
        mercury__io__open_output_4_p_0(ssdb__FileName_8, &ssdb__OutputRes_12);
        if (!(((MR_tag((MR_Word) ssdb__OutputRes_12)) == (MR_mktag((MR_Integer) 1)))))
        {
          MR_Word ssdb__OutputStream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__OutputRes_12, (MR_Integer) 0)));

{
#define MR_PROC_LABEL ssdb__init_debugger_state_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_out_lock,
                    "ssdb__mutable_variable_tty_out_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__init_debugger_state_2_p_0

	MR_Word X;

	X =  ssdb__OutputStream_13 ;
		{
ssdb__mutable_variable_tty_out = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__init_debugger_state_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_out_lock,
                    "ssdb__mutable_variable_tty_out_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
        }
      }
      ssdb__install_sigint_handler_2_p_0();
      ssdb__add_source_commands_2_p_0();
      ssdb__succeeded = ((MR_tag((MR_Word) ssdb__MaybeEnv_4)) == (MR_mktag((MR_Integer) 1)));
      if (ssdb__succeeded)
      {
        ssdb__Var_28 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__MaybeEnv_4, (MR_Integer) 0)));
        ssdb__succeeded = (strcmp(ssdb__Var_28, (MR_String) "0") == 0);
      }
      if (ssdb__succeeded)
      {
{
#define MR_PROC_LABEL ssdb__init_debugger_state_2_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__init_debugger_state_2_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
MR_set_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__init_debugger_state_2_p_0


		{


		;}
#undef MR_PROC_LABEL
}
      }
      else
      {
{
#define MR_PROC_LABEL ssdb__init_debugger_state_2_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__init_debugger_state_2_p_0

	MR_Word X;

	X =  (MR_Integer) 1 ;
		{
MR_set_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__init_debugger_state_2_p_0


		{


		;}
#undef MR_PROC_LABEL
}
      }
    }
    else
    {
{
#define MR_PROC_LABEL ssdb__init_debugger_state_2_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__init_debugger_state_2_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
MR_set_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__init_debugger_state_2_p_0


		{


		;}
#undef MR_PROC_LABEL
}
    }
  }
}

static void MR_CALL 
ssdb__install_sigint_handler_2_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__install_sigint_handler_2_p_0


		{

    MR_setup_signal(SIGINT, (MR_Code *) MR_ssdb_sigint_handler,
        MR_FALSE, "ssdb: cannot install SIGINT signal handler");


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__add_source_commands_2_p_0(void)
{
  {
    MR_Word ssdb__MaybeHome_4;
    MR_Word ssdb__Res_44;

    mercury__io__get_environment_var_4_p_0((MR_String) "HOME", &ssdb__MaybeHome_4);
    if (!((ssdb__MaybeHome_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_String ssdb__Home_5 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__MaybeHome_4, (MR_Integer) 0)));
      MR_String ssdb__Var_10;
      MR_Word ssdb__Res_19;

      ssdb__Var_10 = mercury__dir__f_slash_2_f_0(ssdb__Home_5, (MR_String) ".ssdbrc");
      mercury__io__check_file_accessibility_5_p_0(ssdb__Var_10, (MR_Word) MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[53]), &ssdb__Res_19);
      if ((ssdb__Res_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_String ssdb__Command_20;
        MR_Word ssdb__Queue_21;
        MR_Word ssdb__Var_29;
        MR_Word ssdb__Var_31;

        ssdb__Command_20 = mercury__string__f_43_43_2_f_0((MR_String) "source ", ssdb__Var_10);
{
#define MR_PROC_LABEL ssdb__add_source_commands_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_command_queue_lock,
                    "ssdb__mutable_variable_command_queue_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__add_source_commands_2_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_command_queue;


		;}
#undef MR_PROC_LABEL
	 ssdb__Queue_21  = X;
}
{
#define MR_PROC_LABEL ssdb__add_source_commands_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_command_queue_lock,
                    "ssdb__mutable_variable_command_queue_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
        {
          ssdb__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ssdb__Var_31, 0) = ((MR_Box) (ssdb__Command_20));
          MR_hl_field(MR_mktag(1), ssdb__Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        ssdb__Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ssdb__Queue_21, ssdb__Var_31);
{
#define MR_PROC_LABEL ssdb__add_source_commands_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_command_queue_lock,
                    "ssdb__mutable_variable_command_queue_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__add_source_commands_2_p_0

	MR_Word X;

	X =  ssdb__Var_29 ;
		{
ssdb__mutable_variable_command_queue = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__add_source_commands_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_command_queue_lock,
                    "ssdb__mutable_variable_command_queue_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      }
      else
      {
      }
    }
    mercury__io__check_file_accessibility_5_p_0((MR_String) ".ssdbrc", (MR_Word) MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[53]), &ssdb__Res_44);
    if ((ssdb__Res_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word ssdb__Queue_46;
      MR_Word ssdb__Var_54;

{
#define MR_PROC_LABEL ssdb__add_source_commands_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_command_queue_lock,
                    "ssdb__mutable_variable_command_queue_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__add_source_commands_2_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_command_queue;


		;}
#undef MR_PROC_LABEL
	 ssdb__Queue_46  = X;
}
{
#define MR_PROC_LABEL ssdb__add_source_commands_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_command_queue_lock,
                    "ssdb__mutable_variable_command_queue_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      ssdb__Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ssdb__Queue_46, (MR_Word) MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[54]));
{
#define MR_PROC_LABEL ssdb__add_source_commands_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_command_queue_lock,
                    "ssdb__mutable_variable_command_queue_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__add_source_commands_2_p_0

	MR_Word X;

	X =  ssdb__Var_54 ;
		{
ssdb__mutable_variable_command_queue = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__add_source_commands_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_command_queue_lock,
                    "ssdb__mutable_variable_command_queue_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    }
    else
    {
    }
  }
}

void MR_CALL 
ssdb__enable_debugging_2_p_0(void)
{
  {
{
#define MR_PROC_LABEL ssdb__enable_debugging_2_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__enable_debugging_2_p_0

	MR_Word X;

	X =  (MR_Integer) 1 ;
		{
MR_set_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__enable_debugging_2_p_0


		{


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
ssdb__resume_debugging_3_p_0(
  MR_Word ssdb__Paused_4)
{
  switch (ssdb__Paused_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
{
#define MR_PROC_LABEL ssdb__resume_debugging_3_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__resume_debugging_3_p_0

	MR_Word X;

	X =  (MR_Integer) 1 ;
		{
MR_set_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__resume_debugging_3_p_0


		{


		;}
#undef MR_PROC_LABEL
}
      }
      break;
  }
}

void MR_CALL 
ssdb__pause_debugging_3_p_0(
  MR_Word * ssdb__Paused_4)
{
  {
{
#define MR_PROC_LABEL ssdb__pause_debugging_3_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__pause_debugging_3_p_0

	MR_Word X;

		{
MR_get_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);


		;}
#undef MR_PROC_LABEL
	 *ssdb__Paused_4  = X;
}
{
#define MR_PROC_LABEL ssdb__pause_debugging_3_p_0


		{


		;}
#undef MR_PROC_LABEL
}
    switch (*ssdb__Paused_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
{
#define MR_PROC_LABEL ssdb__pause_debugging_3_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__pause_debugging_3_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
MR_set_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__pause_debugging_3_p_0


		{


		;}
#undef MR_PROC_LABEL
}
        }
        break;
    }
  }
}

void MR_CALL 
ssdb__handle_event_redo_nondet_2_p_0(
  MR_Word ssdb__ProcId_3,
  MR_Word ssdb___ListVarValue_4)
{
  ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_p_0(ssdb__ProcId_3);
}

void MR_CALL 
ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_p_0(
  MR_Word ssdb__ProcId_3)
{
  {
    MR_Word ssdb__DebuggerState_6;

    mercury__private_builtin__dummy_var = mercury__private_builtin__dummy_var;
    mercury__builtin__impure_true_0_p_0();
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_p_0

	MR_Word X;

		{
MR_get_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);


		;}
#undef MR_PROC_LABEL
	 ssdb__DebuggerState_6  = X;
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_p_0


		{


		;}
#undef MR_PROC_LABEL
}
    switch (ssdb__DebuggerState_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ssdb__EventNum_8;
          MR_Integer ssdb__OldDepth_9;
          MR_Integer ssdb__Depth_10;
          MR_Word ssdb__StackFrame_11;
          MR_Integer ssdb__CSN_12;
          MR_Word ssdb__Stop_13;
          MR_Integer ssdb__EventNum0_53;
          MR_Word ssdb__Stack_75;
          MR_Integer ssdb__Depth_76;
          MR_Word ssdb__Var_78;
          MR_Integer ssdb__Var_81;
          MR_Integer ssdb__Var_31;
          MR_Integer ssdb__Var_32;
          MR_Word ssdb__Var_33;
          MR_String ssdb__Var_34;
          MR_Integer ssdb__Var_35;
          MR_Word ssdb__Var_36;
          MR_Word ssdb__Var_37;
          MR_Word ssdb___AutoRetry_14;

{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_cur_ssdb_event_number;


		;}
#undef MR_PROC_LABEL
	 ssdb__EventNum0_53  = X;
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__EventNum_8 = (ssdb__EventNum0_53 + (MR_Integer) 1);
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_p_0

	MR_Integer X;

	X =  ssdb__EventNum_8 ;
		{
ssdb__mutable_variable_cur_ssdb_event_number = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_shadow_stack_depth;


		;}
#undef MR_PROC_LABEL
	 ssdb__OldDepth_9  = X;
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__Depth_10 = (ssdb__OldDepth_9 + (MR_Integer) 1);
          ssdb__lookup_nondet_stack_frame_5_p_0(ssdb__ProcId_3, ssdb__Depth_10, &ssdb__StackFrame_11);
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_75  = X;
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          {
            ssdb__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ssdb__Var_78, 0) = ((MR_Box) (ssdb__StackFrame_11));
            MR_hl_field(MR_mktag(1), ssdb__Var_78, 1) = ((MR_Box) (ssdb__Stack_75));
          }
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_p_0

	MR_Word X;

	X =  ssdb__Var_78 ;
		{
ssdb__mutable_variable_shadow_stack = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_shadow_stack_depth;


		;}
#undef MR_PROC_LABEL
	 ssdb__Depth_76  = X;
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__Var_81 = (ssdb__Depth_76 + (MR_Integer) 1);
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_p_0

	MR_Integer X;

	X =  ssdb__Var_81 ;
		{
ssdb__mutable_variable_shadow_stack_depth = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_11, (MR_Integer) 0)));
          ssdb__CSN_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_11, (MR_Integer) 1)));
          ssdb__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_11, (MR_Integer) 2)));
          ssdb__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_11, (MR_Integer) 3)));
          ssdb__Var_34 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_11, (MR_Integer) 4)));
          ssdb__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_11, (MR_Integer) 5)));
          ssdb__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_11, (MR_Integer) 6)));
          ssdb__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_11, (MR_Integer) 7)));
          ssdb__should_stop_at_this_event_8_p_0((MR_Integer) 5, ssdb__EventNum_8, ssdb__CSN_12, ssdb__ProcId_3, &ssdb__Stop_13, &ssdb___AutoRetry_14);
          switch (ssdb__Stop_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ssdb__WhatNext_15;
                MR_Word ssdb___Retry_16;

                ssdb__save_streams_2_p_0();
                ssdb__print_event_info_4_p_0((MR_Integer) 5, ssdb__EventNum_8);
                ssdb__read_and_execute_cmd_5_p_0((MR_Integer) 5, (MR_Integer) 0, &ssdb__WhatNext_15);
                ssdb__update_next_stop_6_p_0(ssdb__EventNum_8, ssdb__CSN_12, ssdb__WhatNext_15, &ssdb___Retry_16);
                ssdb__restore_streams_2_p_0();
              }
              break;
          }
        }
        break;
    }
    mercury__builtin__impure_true_0_p_0();
  }
}

static void MR_CALL 
ssdb__lookup_nondet_stack_frame_5_p_0(
  MR_Word ssdb__ProcId_6,
  MR_Integer ssdb__Depth_7,
  MR_Word * ssdb__StackFrame_8)
{
  {
    MR_Word ssdb__MaybeStackFrame_10;
    MR_Integer ssdb__StackDepth_21;

{
#define MR_PROC_LABEL ssdb__lookup_nondet_stack_frame_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__lookup_nondet_stack_frame_5_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_nondet_shadow_stack_depth;


		;}
#undef MR_PROC_LABEL
	 ssdb__StackDepth_21  = X;
}
{
#define MR_PROC_LABEL ssdb__lookup_nondet_stack_frame_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    ssdb__search_nondet_stack_frame_2_7_p_0(ssdb__ProcId_6, ssdb__Depth_7, (MR_Integer) 0, ssdb__StackDepth_21, &ssdb__MaybeStackFrame_10);
    if ((ssdb__MaybeStackFrame_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__error_1_p_0((MR_String) "ssdb: lookup_nondet_stack_frame");
        return;
      }
    }
    else
      *ssdb__StackFrame_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__MaybeStackFrame_10, (MR_Integer) 0)));
  }
}

static void MR_CALL 
ssdb__search_nondet_stack_frame_2_7_p_0(
  MR_Word ssdb__ProcId_8,
  MR_Integer ssdb__Depth_9,
  MR_Integer ssdb__N_10,
  MR_Integer ssdb__StackDepth_11,
  MR_Word * ssdb__MaybeStackFrame_12)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ssdb__succeeded = (ssdb__N_10 >= ssdb__StackDepth_11);

      if (ssdb__succeeded)
        *ssdb__MaybeStackFrame_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word ssdb__Frame_14;
        MR_Word ssdb__Stack_58;
        MR_Box ssdb__conv0_Frame_14;
        MR_String ssdb__Var_18;
        MR_Word ssdb__Var_19;
        MR_Integer ssdb__Var_27;
        MR_String ssdb__Var_32;
        MR_String ssdb__Var_33;
        MR_String ssdb__Var_50;
        MR_Integer ssdb__Var_25;
        MR_Integer ssdb__Var_26;
        MR_String ssdb__Var_28;
        MR_Integer ssdb__Var_29;
        MR_Word ssdb__Var_30;
        MR_Word ssdb__Var_31;

{
#define MR_PROC_LABEL ssdb__search_nondet_stack_frame_2_7_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__search_nondet_stack_frame_2_7_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_nondet_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_58  = X;
}
{
#define MR_PROC_LABEL ssdb__search_nondet_stack_frame_2_7_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__list__det_index0_3_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_stack_frame_0, ssdb__Stack_58, ssdb__N_10, &ssdb__conv0_Frame_14);
        ssdb__Frame_14 = ((MR_Word) ssdb__conv0_Frame_14);
        ssdb__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_14, (MR_Integer) 0)));
        ssdb__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_14, (MR_Integer) 1)));
        ssdb__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_14, (MR_Integer) 2)));
        ssdb__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_14, (MR_Integer) 3)));
        ssdb__Var_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__Frame_14, (MR_Integer) 4)));
        ssdb__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_14, (MR_Integer) 5)));
        ssdb__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_14, (MR_Integer) 6)));
        ssdb__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_14, (MR_Integer) 7)));
        ssdb__succeeded = (ssdb__Depth_9 == ssdb__Var_27);
        if (ssdb__succeeded)
        {
          ssdb__Var_18 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__Var_19, (MR_Integer) 0)));
          ssdb__Var_32 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__Var_19, (MR_Integer) 1)));
          ssdb__Var_50 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__ProcId_8, (MR_Integer) 0)));
          ssdb__Var_33 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__ProcId_8, (MR_Integer) 1)));
          ssdb__succeeded = (strcmp(ssdb__Var_18, ssdb__Var_50) == 0);
          if (ssdb__succeeded)
            ssdb__succeeded = (strcmp(ssdb__Var_32, ssdb__Var_33) == 0);
        }
        if (ssdb__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ssdb__MaybeStackFrame_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ssdb__Frame_14));
          }
        else
        {
          MR_Integer ssdb__Var_22 = (ssdb__N_10 + (MR_Integer) 1);

          /* direct tailcall eliminated */
          {
            MR_Integer ssdb__next_value_of_N_10 = ssdb__Var_22;

            ssdb__N_10 = ssdb__next_value_of_N_10;
          }
          continue;
        }
      }
    }
    break;
  }
}

void MR_CALL 
ssdb__handle_event_fail_nondet_3_p_0(
  MR_Word ssdb__ProcId_4,
  MR_Word ssdb___ListVarValue_5,
  MR_Word * ssdb__Retry_6)
{
  ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_p_0(ssdb__ProcId_4, ssdb__Retry_6);
}

void MR_CALL 
ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_p_0(
  MR_Word ssdb__ProcId_4,
  MR_Word * ssdb__Retry_6)
{
  {
    MR_Word ssdb__DebuggerState_8;

    mercury__private_builtin__dummy_var = mercury__private_builtin__dummy_var;
    mercury__builtin__impure_true_0_p_0();
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_p_0

	MR_Word X;

		{
MR_get_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);


		;}
#undef MR_PROC_LABEL
	 ssdb__DebuggerState_8  = X;
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_p_0


		{


		;}
#undef MR_PROC_LABEL
}
    switch (ssdb__DebuggerState_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ssdb__Retry_6 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ssdb__EventNum_30;
          MR_Integer ssdb__CSN_31;
          MR_Word ssdb__Stop_32;
          MR_Word ssdb__AutoRetry_33;
          MR_Integer ssdb__EventNum0_50;
          MR_Word ssdb__Frame_64;
          MR_Word ssdb__Stack_77;
          MR_Integer ssdb__Var_66;
          MR_Integer ssdb__Var_67;
          MR_Word ssdb__Var_68;
          MR_String ssdb__Var_69;
          MR_Integer ssdb__Var_70;
          MR_Word ssdb__Var_71;
          MR_Word ssdb__Var_72;

{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_cur_ssdb_event_number;


		;}
#undef MR_PROC_LABEL
	 ssdb__EventNum0_50  = X;
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__EventNum_30 = (ssdb__EventNum0_50 + (MR_Integer) 1);
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_p_0

	MR_Integer X;

	X =  ssdb__EventNum_30 ;
		{
ssdb__mutable_variable_cur_ssdb_event_number = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_77  = X;
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          if ((ssdb__Stack_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__error_1_p_0((MR_String) "ssdb: stack_top on empty stack");
              return;
            }
          }
          else
          {
            MR_Word ssdb__Var_78;

            ssdb__Frame_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_77, (MR_Integer) 0)));
            ssdb__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_77, (MR_Integer) 1)));
          }
          ssdb__Var_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_64, (MR_Integer) 0)));
          ssdb__CSN_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_64, (MR_Integer) 1)));
          ssdb__Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_64, (MR_Integer) 2)));
          ssdb__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_64, (MR_Integer) 3)));
          ssdb__Var_69 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__Frame_64, (MR_Integer) 4)));
          ssdb__Var_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_64, (MR_Integer) 5)));
          ssdb__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_64, (MR_Integer) 6)));
          ssdb__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_64, (MR_Integer) 7)));
          ssdb__should_stop_at_this_event_8_p_0((MR_Integer) 6, ssdb__EventNum_30, ssdb__CSN_31, ssdb__ProcId_4, &ssdb__Stop_32, &ssdb__AutoRetry_33);
          switch (ssdb__Stop_32) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *ssdb__Retry_6 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ssdb__WhatNext_34;

                switch (ssdb__AutoRetry_33) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word ssdb__InputStream_95;
                      MR_Word ssdb__OutputStream_96;
                      MR_Word ssdb__Var_97;
                      MR_Word ssdb__Var_98;

                      ssdb__save_streams_2_p_0();
                      ssdb__print_event_info_4_p_0((MR_Integer) 6, ssdb__EventNum_30);
                      ssdb__read_and_execute_cmd_2_6_p_0((MR_Integer) 0, (MR_Integer) 6, (MR_Integer) 0, &ssdb__WhatNext_34);
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                    "ssdb__mutable_variable_saved_input_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_saved_input_stream;


		;}
#undef MR_PROC_LABEL
	 ssdb__InputStream_95  = X;
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                    "ssdb__mutable_variable_saved_input_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                    "ssdb__mutable_variable_saved_output_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_saved_output_stream;


		;}
#undef MR_PROC_LABEL
	 ssdb__OutputStream_96  = X;
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                    "ssdb__mutable_variable_saved_output_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
                      mercury__io__set_input_stream_4_p_0(ssdb__InputStream_95, &ssdb__Var_97);
                      mercury__io__set_output_stream_4_p_0(ssdb__OutputStream_96, &ssdb__Var_98);
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      ssdb__WhatNext_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ssdb__WhatNext_34, 0) = ((MR_Box) (ssdb__CSN_31));
                    }
                    break;
                }
                ssdb__update_next_stop_6_p_0(ssdb__EventNum_30, ssdb__CSN_31, ssdb__WhatNext_34, ssdb__Retry_6);
              }
              break;
          }
          ssdb__stack_pop_2_p_0();
          ssdb__nondet_stack_pop_2_p_0();
        }
        break;
    }
    mercury__builtin__impure_true_0_p_0();
  }
}

static void MR_CALL 
ssdb__nondet_stack_pop_2_p_0(void)
{
  {
    MR_Word ssdb__Stack_4;
    MR_Integer ssdb__Depth_5;

{
#define MR_PROC_LABEL ssdb__nondet_stack_pop_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__nondet_stack_pop_2_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_nondet_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_4  = X;
}
{
#define MR_PROC_LABEL ssdb__nondet_stack_pop_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__nondet_stack_pop_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__nondet_stack_pop_2_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_nondet_shadow_stack_depth;


		;}
#undef MR_PROC_LABEL
	 ssdb__Depth_5  = X;
}
{
#define MR_PROC_LABEL ssdb__nondet_stack_pop_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    if ((ssdb__Stack_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__error_1_p_0((MR_String) "ssdb: nondet_stack_pop on empty stack");
        return;
      }
    }
    else
    {
      MR_Word ssdb__StackTail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_4, (MR_Integer) 1)));
      MR_Integer ssdb__Var_13;
      MR_Word ssdb__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_4, (MR_Integer) 0)));

{
#define MR_PROC_LABEL ssdb__nondet_stack_pop_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__nondet_stack_pop_2_p_0

	MR_Word X;

	X =  ssdb__StackTail_7 ;
		{
ssdb__mutable_variable_nondet_shadow_stack = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__nondet_stack_pop_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      ssdb__Var_13 = (ssdb__Depth_5 - (MR_Integer) 1);
{
#define MR_PROC_LABEL ssdb__nondet_stack_pop_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__nondet_stack_pop_2_p_0

	MR_Integer X;

	X =  ssdb__Var_13 ;
		{
ssdb__mutable_variable_nondet_shadow_stack_depth = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__nondet_stack_pop_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    }
  }
}

void MR_CALL 
ssdb__handle_event_fail_3_p_0(
  MR_Word ssdb__ProcId_4,
  MR_Word ssdb___ListVarValue_5,
  MR_Word * ssdb__Retry_6)
{
  ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_p_0(ssdb__ProcId_4, ssdb__Retry_6);
}

void MR_CALL 
ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_p_0(
  MR_Word ssdb__ProcId_4,
  MR_Word * ssdb__Retry_6)
{
  {
    MR_Word ssdb__DebuggerState_8;

    mercury__private_builtin__dummy_var = mercury__private_builtin__dummy_var;
    mercury__builtin__impure_true_0_p_0();
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_p_0

	MR_Word X;

		{
MR_get_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);


		;}
#undef MR_PROC_LABEL
	 ssdb__DebuggerState_8  = X;
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_p_0


		{


		;}
#undef MR_PROC_LABEL
}
    switch (ssdb__DebuggerState_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ssdb__Retry_6 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ssdb__EventNum_30;
          MR_Integer ssdb__CSN_31;
          MR_Word ssdb__Stop_32;
          MR_Word ssdb__AutoRetry_33;
          MR_Integer ssdb__EventNum0_50;
          MR_Word ssdb__Frame_64;
          MR_Word ssdb__Stack_77;
          MR_Integer ssdb__Var_66;
          MR_Integer ssdb__Var_67;
          MR_Word ssdb__Var_68;
          MR_String ssdb__Var_69;
          MR_Integer ssdb__Var_70;
          MR_Word ssdb__Var_71;
          MR_Word ssdb__Var_72;

{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_cur_ssdb_event_number;


		;}
#undef MR_PROC_LABEL
	 ssdb__EventNum0_50  = X;
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__EventNum_30 = (ssdb__EventNum0_50 + (MR_Integer) 1);
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_p_0

	MR_Integer X;

	X =  ssdb__EventNum_30 ;
		{
ssdb__mutable_variable_cur_ssdb_event_number = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_77  = X;
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          if ((ssdb__Stack_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__error_1_p_0((MR_String) "ssdb: stack_top on empty stack");
              return;
            }
          }
          else
          {
            MR_Word ssdb__Var_78;

            ssdb__Frame_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_77, (MR_Integer) 0)));
            ssdb__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_77, (MR_Integer) 1)));
          }
          ssdb__Var_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_64, (MR_Integer) 0)));
          ssdb__CSN_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_64, (MR_Integer) 1)));
          ssdb__Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_64, (MR_Integer) 2)));
          ssdb__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_64, (MR_Integer) 3)));
          ssdb__Var_69 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__Frame_64, (MR_Integer) 4)));
          ssdb__Var_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_64, (MR_Integer) 5)));
          ssdb__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_64, (MR_Integer) 6)));
          ssdb__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_64, (MR_Integer) 7)));
          ssdb__should_stop_at_this_event_8_p_0((MR_Integer) 2, ssdb__EventNum_30, ssdb__CSN_31, ssdb__ProcId_4, &ssdb__Stop_32, &ssdb__AutoRetry_33);
          switch (ssdb__Stop_32) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *ssdb__Retry_6 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ssdb__WhatNext_34;

                switch (ssdb__AutoRetry_33) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word ssdb__InputStream_95;
                      MR_Word ssdb__OutputStream_96;
                      MR_Word ssdb__Var_97;
                      MR_Word ssdb__Var_98;

                      ssdb__save_streams_2_p_0();
                      ssdb__print_event_info_4_p_0((MR_Integer) 2, ssdb__EventNum_30);
                      ssdb__read_and_execute_cmd_2_6_p_0((MR_Integer) 0, (MR_Integer) 2, (MR_Integer) 0, &ssdb__WhatNext_34);
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                    "ssdb__mutable_variable_saved_input_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_saved_input_stream;


		;}
#undef MR_PROC_LABEL
	 ssdb__InputStream_95  = X;
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                    "ssdb__mutable_variable_saved_input_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                    "ssdb__mutable_variable_saved_output_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_saved_output_stream;


		;}
#undef MR_PROC_LABEL
	 ssdb__OutputStream_96  = X;
}
{
#define MR_PROC_LABEL ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                    "ssdb__mutable_variable_saved_output_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
                      mercury__io__set_input_stream_4_p_0(ssdb__InputStream_95, &ssdb__Var_97);
                      mercury__io__set_output_stream_4_p_0(ssdb__OutputStream_96, &ssdb__Var_98);
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      ssdb__WhatNext_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ssdb__WhatNext_34, 0) = ((MR_Box) (ssdb__CSN_31));
                    }
                    break;
                }
                ssdb__update_next_stop_6_p_0(ssdb__EventNum_30, ssdb__CSN_31, ssdb__WhatNext_34, ssdb__Retry_6);
              }
              break;
          }
          ssdb__stack_pop_2_p_0();
        }
        break;
    }
    mercury__builtin__impure_true_0_p_0();
  }
}

void MR_CALL 
ssdb__handle_event_exit_nondet_2_p_0(
  MR_Word ssdb__ProcId_3,
  MR_Word ssdb__ListVarValue_4)
{
  {
    MR_Word ssdb__DebuggerState_6;

    mercury__private_builtin__dummy_var = mercury__private_builtin__dummy_var;
    mercury__builtin__impure_true_0_p_0();
{
#define MR_PROC_LABEL ssdb__handle_event_exit_nondet_2_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_exit_nondet_2_p_0

	MR_Word X;

		{
MR_get_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);


		;}
#undef MR_PROC_LABEL
	 ssdb__DebuggerState_6  = X;
}
{
#define MR_PROC_LABEL ssdb__handle_event_exit_nondet_2_p_0


		{


		;}
#undef MR_PROC_LABEL
}
    switch (ssdb__DebuggerState_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ssdb__EventNum_30;
          MR_Integer ssdb__CSN_31;
          MR_Word ssdb__Stop_32;
          MR_Word ssdb__AutoRetry_33;
          MR_Integer ssdb__EventNum0_50;
          MR_Word ssdb__Frame_64;
          MR_Word ssdb__Stack_77;
          MR_Integer ssdb__Var_66;
          MR_Integer ssdb__Var_67;
          MR_Word ssdb__Var_68;
          MR_String ssdb__Var_69;
          MR_Integer ssdb__Var_70;
          MR_Word ssdb__Var_71;
          MR_Word ssdb__Var_72;

{
#define MR_PROC_LABEL ssdb__handle_event_exit_nondet_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_exit_nondet_2_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_cur_ssdb_event_number;


		;}
#undef MR_PROC_LABEL
	 ssdb__EventNum0_50  = X;
}
{
#define MR_PROC_LABEL ssdb__handle_event_exit_nondet_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__EventNum_30 = (ssdb__EventNum0_50 + (MR_Integer) 1);
{
#define MR_PROC_LABEL ssdb__handle_event_exit_nondet_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_exit_nondet_2_p_0

	MR_Integer X;

	X =  ssdb__EventNum_30 ;
		{
ssdb__mutable_variable_cur_ssdb_event_number = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_exit_nondet_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_exit_nondet_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_exit_nondet_2_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_77  = X;
}
{
#define MR_PROC_LABEL ssdb__handle_event_exit_nondet_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          if ((ssdb__Stack_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__error_1_p_0((MR_String) "ssdb: stack_top on empty stack");
              return;
            }
          }
          else
          {
            MR_Word ssdb__Var_78;

            ssdb__Frame_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_77, (MR_Integer) 0)));
            ssdb__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_77, (MR_Integer) 1)));
          }
          ssdb__Var_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_64, (MR_Integer) 0)));
          ssdb__CSN_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_64, (MR_Integer) 1)));
          ssdb__Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_64, (MR_Integer) 2)));
          ssdb__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_64, (MR_Integer) 3)));
          ssdb__Var_69 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__Frame_64, (MR_Integer) 4)));
          ssdb__Var_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_64, (MR_Integer) 5)));
          ssdb__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_64, (MR_Integer) 6)));
          ssdb__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_64, (MR_Integer) 7)));
          ssdb__should_stop_at_this_event_8_p_0((MR_Integer) 4, ssdb__EventNum_30, ssdb__CSN_31, ssdb__ProcId_3, &ssdb__Stop_32, &ssdb__AutoRetry_33);
          switch (ssdb__Stop_32) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ssdb__WhatNext_34;
                MR_Word ssdb___Retry_111;

                switch (ssdb__AutoRetry_33) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word ssdb__Stack0_88;

{
#define MR_PROC_LABEL ssdb__handle_event_exit_nondet_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_exit_nondet_2_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack0_88  = X;
}
{
#define MR_PROC_LABEL ssdb__handle_event_exit_nondet_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
                      if ((ssdb__Stack0_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        {
                          mercury__require__error_1_p_0((MR_String) "ssdb: update_top_var_list on empty stack");
                          return;
                        }
                      }
                      else
                      {
                        MR_Word ssdb__Frame0_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack0_88, (MR_Integer) 0)));
                        MR_Word ssdb__Frames_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack0_88, (MR_Integer) 1)));
                        MR_Word ssdb__Frame_91;
                        MR_Word ssdb__Var_93;
                        MR_Integer ssdb__Var_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame0_89, (MR_Integer) 0)));
                        MR_Integer ssdb__Var_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame0_89, (MR_Integer) 1)));
                        MR_Integer ssdb__Var_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame0_89, (MR_Integer) 2)));
                        MR_Word ssdb__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame0_89, (MR_Integer) 3)));
                        MR_String ssdb__Var_100 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__Frame0_89, (MR_Integer) 4)));
                        MR_Integer ssdb__Var_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame0_89, (MR_Integer) 5)));
                        MR_Word ssdb__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame0_89, (MR_Integer) 7)));
                        MR_Word ssdb__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame0_89, (MR_Integer) 6)));

                        {
                          ssdb__Frame_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ssdb__Frame_91, 0) = ((MR_Box) (ssdb__Var_96));
                          MR_hl_field(MR_mktag(0), ssdb__Frame_91, 1) = ((MR_Box) (ssdb__Var_97));
                          MR_hl_field(MR_mktag(0), ssdb__Frame_91, 2) = ((MR_Box) (ssdb__Var_98));
                          MR_hl_field(MR_mktag(0), ssdb__Frame_91, 3) = ((MR_Box) (ssdb__Var_99));
                          MR_hl_field(MR_mktag(0), ssdb__Frame_91, 4) = ((MR_Box) (ssdb__Var_100));
                          MR_hl_field(MR_mktag(0), ssdb__Frame_91, 5) = ((MR_Box) (ssdb__Var_101));
                          MR_hl_field(MR_mktag(0), ssdb__Frame_91, 6) = ((MR_Box) (ssdb__ListVarValue_4));
                          MR_hl_field(MR_mktag(0), ssdb__Frame_91, 7) = ((MR_Box) (ssdb__Var_103));
                        }
                        {
                          ssdb__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ssdb__Var_93, 0) = ((MR_Box) (ssdb__Frame_91));
                          MR_hl_field(MR_mktag(1), ssdb__Var_93, 1) = ((MR_Box) (ssdb__Frames_90));
                        }
{
#define MR_PROC_LABEL ssdb__handle_event_exit_nondet_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_exit_nondet_2_p_0

	MR_Word X;

	X =  ssdb__Var_93 ;
		{
ssdb__mutable_variable_shadow_stack = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_exit_nondet_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
                      }
                      ssdb__save_streams_2_p_0();
                      ssdb__print_event_info_4_p_0((MR_Integer) 4, ssdb__EventNum_30);
                      ssdb__read_and_execute_cmd_5_p_0((MR_Integer) 4, (MR_Integer) 0, &ssdb__WhatNext_34);
                      ssdb__restore_streams_2_p_0();
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      ssdb__WhatNext_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ssdb__WhatNext_34, 0) = ((MR_Box) (ssdb__CSN_31));
                    }
                    break;
                }
                ssdb__update_next_stop_6_p_0(ssdb__EventNum_30, ssdb__CSN_31, ssdb__WhatNext_34, &ssdb___Retry_111);
              }
              break;
          }
          ssdb__stack_pop_2_p_0();
        }
        break;
    }
    mercury__builtin__impure_true_0_p_0();
  }
}

void MR_CALL 
ssdb__handle_event_exit_3_p_0(
  MR_Word ssdb__ProcId_4,
  MR_Word ssdb__ListVarValue_5,
  MR_Word * ssdb__Retry_6)
{
  {
    MR_Word ssdb__DebuggerState_8;

    mercury__private_builtin__dummy_var = mercury__private_builtin__dummy_var;
    mercury__builtin__impure_true_0_p_0();
{
#define MR_PROC_LABEL ssdb__handle_event_exit_3_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_exit_3_p_0

	MR_Word X;

		{
MR_get_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);


		;}
#undef MR_PROC_LABEL
	 ssdb__DebuggerState_8  = X;
}
{
#define MR_PROC_LABEL ssdb__handle_event_exit_3_p_0


		{


		;}
#undef MR_PROC_LABEL
}
    switch (ssdb__DebuggerState_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ssdb__Retry_6 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ssdb__EventNum_31;
          MR_Integer ssdb__CSN_32;
          MR_Word ssdb__Stop_33;
          MR_Word ssdb__AutoRetry_34;
          MR_Integer ssdb__EventNum0_51;
          MR_Word ssdb__Frame_65;
          MR_Word ssdb__Stack_78;
          MR_Integer ssdb__Var_67;
          MR_Integer ssdb__Var_68;
          MR_Word ssdb__Var_69;
          MR_String ssdb__Var_70;
          MR_Integer ssdb__Var_71;
          MR_Word ssdb__Var_72;
          MR_Word ssdb__Var_73;

{
#define MR_PROC_LABEL ssdb__handle_event_exit_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_exit_3_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_cur_ssdb_event_number;


		;}
#undef MR_PROC_LABEL
	 ssdb__EventNum0_51  = X;
}
{
#define MR_PROC_LABEL ssdb__handle_event_exit_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__EventNum_31 = (ssdb__EventNum0_51 + (MR_Integer) 1);
{
#define MR_PROC_LABEL ssdb__handle_event_exit_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_exit_3_p_0

	MR_Integer X;

	X =  ssdb__EventNum_31 ;
		{
ssdb__mutable_variable_cur_ssdb_event_number = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_exit_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_exit_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_exit_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_78  = X;
}
{
#define MR_PROC_LABEL ssdb__handle_event_exit_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          if ((ssdb__Stack_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__error_1_p_0((MR_String) "ssdb: stack_top on empty stack");
              return;
            }
          }
          else
          {
            MR_Word ssdb__Var_79;

            ssdb__Frame_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_78, (MR_Integer) 0)));
            ssdb__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_78, (MR_Integer) 1)));
          }
          ssdb__Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_65, (MR_Integer) 0)));
          ssdb__CSN_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_65, (MR_Integer) 1)));
          ssdb__Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_65, (MR_Integer) 2)));
          ssdb__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_65, (MR_Integer) 3)));
          ssdb__Var_70 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__Frame_65, (MR_Integer) 4)));
          ssdb__Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_65, (MR_Integer) 5)));
          ssdb__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_65, (MR_Integer) 6)));
          ssdb__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_65, (MR_Integer) 7)));
          ssdb__should_stop_at_this_event_8_p_0((MR_Integer) 1, ssdb__EventNum_31, ssdb__CSN_32, ssdb__ProcId_4, &ssdb__Stop_33, &ssdb__AutoRetry_34);
          switch (ssdb__Stop_33) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *ssdb__Retry_6 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ssdb__WhatNext_35;

                switch (ssdb__AutoRetry_34) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word ssdb__Stack0_89;

{
#define MR_PROC_LABEL ssdb__handle_event_exit_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_exit_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack0_89  = X;
}
{
#define MR_PROC_LABEL ssdb__handle_event_exit_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
                      if ((ssdb__Stack0_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        {
                          mercury__require__error_1_p_0((MR_String) "ssdb: update_top_var_list on empty stack");
                          return;
                        }
                      }
                      else
                      {
                        MR_Word ssdb__Frame0_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack0_89, (MR_Integer) 0)));
                        MR_Word ssdb__Frames_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack0_89, (MR_Integer) 1)));
                        MR_Word ssdb__Frame_92;
                        MR_Word ssdb__Var_94;
                        MR_Integer ssdb__Var_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame0_90, (MR_Integer) 0)));
                        MR_Integer ssdb__Var_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame0_90, (MR_Integer) 1)));
                        MR_Integer ssdb__Var_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame0_90, (MR_Integer) 2)));
                        MR_Word ssdb__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame0_90, (MR_Integer) 3)));
                        MR_String ssdb__Var_101 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__Frame0_90, (MR_Integer) 4)));
                        MR_Integer ssdb__Var_102 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame0_90, (MR_Integer) 5)));
                        MR_Word ssdb__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame0_90, (MR_Integer) 7)));
                        MR_Word ssdb__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame0_90, (MR_Integer) 6)));

                        {
                          ssdb__Frame_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ssdb__Frame_92, 0) = ((MR_Box) (ssdb__Var_97));
                          MR_hl_field(MR_mktag(0), ssdb__Frame_92, 1) = ((MR_Box) (ssdb__Var_98));
                          MR_hl_field(MR_mktag(0), ssdb__Frame_92, 2) = ((MR_Box) (ssdb__Var_99));
                          MR_hl_field(MR_mktag(0), ssdb__Frame_92, 3) = ((MR_Box) (ssdb__Var_100));
                          MR_hl_field(MR_mktag(0), ssdb__Frame_92, 4) = ((MR_Box) (ssdb__Var_101));
                          MR_hl_field(MR_mktag(0), ssdb__Frame_92, 5) = ((MR_Box) (ssdb__Var_102));
                          MR_hl_field(MR_mktag(0), ssdb__Frame_92, 6) = ((MR_Box) (ssdb__ListVarValue_5));
                          MR_hl_field(MR_mktag(0), ssdb__Frame_92, 7) = ((MR_Box) (ssdb__Var_104));
                        }
                        {
                          ssdb__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ssdb__Var_94, 0) = ((MR_Box) (ssdb__Frame_92));
                          MR_hl_field(MR_mktag(1), ssdb__Var_94, 1) = ((MR_Box) (ssdb__Frames_91));
                        }
{
#define MR_PROC_LABEL ssdb__handle_event_exit_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_exit_3_p_0

	MR_Word X;

	X =  ssdb__Var_94 ;
		{
ssdb__mutable_variable_shadow_stack = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_exit_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
                      }
                      ssdb__save_streams_2_p_0();
                      ssdb__print_event_info_4_p_0((MR_Integer) 1, ssdb__EventNum_31);
                      ssdb__read_and_execute_cmd_5_p_0((MR_Integer) 1, (MR_Integer) 0, &ssdb__WhatNext_35);
                      ssdb__restore_streams_2_p_0();
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      ssdb__WhatNext_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ssdb__WhatNext_35, 0) = ((MR_Box) (ssdb__CSN_32));
                    }
                    break;
                }
                ssdb__update_next_stop_6_p_0(ssdb__EventNum_31, ssdb__CSN_32, ssdb__WhatNext_35, ssdb__Retry_6);
              }
              break;
          }
          ssdb__stack_pop_2_p_0();
        }
        break;
    }
    mercury__builtin__impure_true_0_p_0();
  }
}

static void MR_CALL 
ssdb__stack_pop_2_p_0(void)
{
  {
    MR_Word ssdb__Stack_4;
    MR_Integer ssdb__Depth_5;

{
#define MR_PROC_LABEL ssdb__stack_pop_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__stack_pop_2_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_4  = X;
}
{
#define MR_PROC_LABEL ssdb__stack_pop_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__stack_pop_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__stack_pop_2_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_shadow_stack_depth;


		;}
#undef MR_PROC_LABEL
	 ssdb__Depth_5  = X;
}
{
#define MR_PROC_LABEL ssdb__stack_pop_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    if ((ssdb__Stack_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__error_1_p_0((MR_String) "ssdb: stack_pop on empty stack");
        return;
      }
    }
    else
    {
      MR_Word ssdb__StackTail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_4, (MR_Integer) 1)));
      MR_Integer ssdb__Var_13;
      MR_Word ssdb__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_4, (MR_Integer) 0)));

{
#define MR_PROC_LABEL ssdb__stack_pop_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__stack_pop_2_p_0

	MR_Word X;

	X =  ssdb__StackTail_7 ;
		{
ssdb__mutable_variable_shadow_stack = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__stack_pop_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      ssdb__Var_13 = (ssdb__Depth_5 - (MR_Integer) 1);
{
#define MR_PROC_LABEL ssdb__stack_pop_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__stack_pop_2_p_0

	MR_Integer X;

	X =  ssdb__Var_13 ;
		{
ssdb__mutable_variable_shadow_stack_depth = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__stack_pop_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    }
  }
}

void MR_CALL 
ssdb__handle_event_call_nondet_3_p_0(
  MR_Word ssdb__ProcId_4,
  MR_Word ssdb__ListVarValue_5,
  MR_Word ssdb__Level_6)
{
  {
    MR_Word ssdb__DebuggerState_8;

    mercury__private_builtin__dummy_var = mercury__private_builtin__dummy_var;
    mercury__builtin__impure_true_0_p_0();
{
#define MR_PROC_LABEL ssdb__handle_event_call_nondet_3_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_nondet_3_p_0

	MR_Word X;

		{
MR_get_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);


		;}
#undef MR_PROC_LABEL
	 ssdb__DebuggerState_8  = X;
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_nondet_3_p_0


		{


		;}
#undef MR_PROC_LABEL
}
    switch (ssdb__DebuggerState_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ssdb__EventNum_31;
          MR_Integer ssdb__CSN_32;
          MR_Integer ssdb__OldDepth_33;
          MR_Integer ssdb__Depth_34;
          MR_String ssdb__SiteFile_35;
          MR_Integer ssdb__SiteLine_36;
          MR_Word ssdb__StackFrame_37;
          MR_Word ssdb__Stop_38;
          MR_Integer ssdb__EventNum0_61;
          MR_Integer ssdb__CSN0_75;
          MR_Word ssdb___AutoRetry_39;

{
#define MR_PROC_LABEL ssdb__handle_event_call_nondet_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_nondet_3_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_cur_ssdb_event_number;


		;}
#undef MR_PROC_LABEL
	 ssdb__EventNum0_61  = X;
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_nondet_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__EventNum_31 = (ssdb__EventNum0_61 + (MR_Integer) 1);
{
#define MR_PROC_LABEL ssdb__handle_event_call_nondet_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_nondet_3_p_0

	MR_Integer X;

	X =  ssdb__EventNum_31 ;
		{
ssdb__mutable_variable_cur_ssdb_event_number = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_nondet_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_nondet_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                    "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_nondet_3_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_cur_ssdb_csn;


		;}
#undef MR_PROC_LABEL
	 ssdb__CSN0_75  = X;
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_nondet_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                    "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__CSN_32 = (ssdb__CSN0_75 + (MR_Integer) 1);
{
#define MR_PROC_LABEL ssdb__handle_event_call_nondet_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                    "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_nondet_3_p_0

	MR_Integer X;

	X =  ssdb__CSN_32 ;
		{
ssdb__mutable_variable_cur_ssdb_csn = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_nondet_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                    "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_nondet_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_nondet_3_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_shadow_stack_depth;


		;}
#undef MR_PROC_LABEL
	 ssdb__OldDepth_33  = X;
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_nondet_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__Depth_34 = (ssdb__OldDepth_33 + (MR_Integer) 1);
{
#define MR_PROC_LABEL ssdb__handle_event_call_nondet_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_filename_lock,
                    "ssdb__mutable_variable_cur_filename_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_nondet_3_p_0

	MR_String X;

		{
X = ssdb__mutable_variable_cur_filename;


		;}
#undef MR_PROC_LABEL
	 ssdb__SiteFile_35  = X;
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_nondet_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_filename_lock,
                    "ssdb__mutable_variable_cur_filename_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_nondet_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_line_number_lock,
                    "ssdb__mutable_variable_cur_line_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_nondet_3_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_cur_line_number;


		;}
#undef MR_PROC_LABEL
	 ssdb__SiteLine_36  = X;
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_nondet_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_line_number_lock,
                    "ssdb__mutable_variable_cur_line_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          {
            ssdb__StackFrame_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ssdb__StackFrame_37, 0) = ((MR_Box) (ssdb__EventNum_31));
            MR_hl_field(MR_mktag(0), ssdb__StackFrame_37, 1) = ((MR_Box) (ssdb__CSN_32));
            MR_hl_field(MR_mktag(0), ssdb__StackFrame_37, 2) = ((MR_Box) (ssdb__Depth_34));
            MR_hl_field(MR_mktag(0), ssdb__StackFrame_37, 3) = ((MR_Box) (ssdb__ProcId_4));
            MR_hl_field(MR_mktag(0), ssdb__StackFrame_37, 4) = ((MR_Box) (ssdb__SiteFile_35));
            MR_hl_field(MR_mktag(0), ssdb__StackFrame_37, 5) = ((MR_Box) (ssdb__SiteLine_36));
            MR_hl_field(MR_mktag(0), ssdb__StackFrame_37, 6) = ((MR_Box) (ssdb__ListVarValue_5));
            MR_hl_field(MR_mktag(0), ssdb__StackFrame_37, 7) = ((MR_Box) (ssdb__Level_6));
          }
          ssdb__stack_push_3_p_0(ssdb__StackFrame_37);
          ssdb__nondet_stack_push_3_p_0(ssdb__StackFrame_37);
          ssdb__should_stop_at_this_event_8_p_0((MR_Integer) 3, ssdb__EventNum_31, ssdb__CSN_32, ssdb__ProcId_4, &ssdb__Stop_38, &ssdb___AutoRetry_39);
          switch (ssdb__Stop_38) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ssdb__WhatNext_40;
                MR_Word ssdb___Retry_41;

                ssdb__save_streams_2_p_0();
                ssdb__print_event_info_4_p_0((MR_Integer) 3, ssdb__EventNum_31);
                ssdb__read_and_execute_cmd_2_6_p_0((MR_Integer) 0, (MR_Integer) 3, (MR_Integer) 0, &ssdb__WhatNext_40);
                ssdb__update_next_stop_6_p_0(ssdb__EventNum_31, ssdb__CSN_32, ssdb__WhatNext_40, &ssdb___Retry_41);
                ssdb__restore_streams_2_p_0();
              }
              break;
          }
        }
        break;
    }
    mercury__builtin__impure_true_0_p_0();
  }
}

static void MR_CALL 
ssdb__nondet_stack_push_3_p_0(
  MR_Word ssdb__Frame_4)
{
  {
    MR_Word ssdb__Stack_6;
    MR_Integer ssdb__Depth_7;
    MR_Word ssdb__Var_11;
    MR_Integer ssdb__Var_14;

{
#define MR_PROC_LABEL ssdb__nondet_stack_push_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__nondet_stack_push_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_nondet_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_6  = X;
}
{
#define MR_PROC_LABEL ssdb__nondet_stack_push_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    {
      ssdb__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ssdb__Var_11, 0) = ((MR_Box) (ssdb__Frame_4));
      MR_hl_field(MR_mktag(1), ssdb__Var_11, 1) = ((MR_Box) (ssdb__Stack_6));
    }
{
#define MR_PROC_LABEL ssdb__nondet_stack_push_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__nondet_stack_push_3_p_0

	MR_Word X;

	X =  ssdb__Var_11 ;
		{
ssdb__mutable_variable_nondet_shadow_stack = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__nondet_stack_push_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__nondet_stack_push_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__nondet_stack_push_3_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_nondet_shadow_stack_depth;


		;}
#undef MR_PROC_LABEL
	 ssdb__Depth_7  = X;
}
{
#define MR_PROC_LABEL ssdb__nondet_stack_push_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    ssdb__Var_14 = (ssdb__Depth_7 + (MR_Integer) 1);
{
#define MR_PROC_LABEL ssdb__nondet_stack_push_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__nondet_stack_push_3_p_0

	MR_Integer X;

	X =  ssdb__Var_14 ;
		{
ssdb__mutable_variable_nondet_shadow_stack_depth = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__nondet_stack_push_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
ssdb__handle_event_call_3_p_0(
  MR_Word ssdb__ProcId_4,
  MR_Word ssdb__ListVarValue_5,
  MR_Word ssdb__Level_6)
{
  {
    MR_Word ssdb__DebuggerState_8;

    mercury__private_builtin__dummy_var = mercury__private_builtin__dummy_var;
    mercury__builtin__impure_true_0_p_0();
{
#define MR_PROC_LABEL ssdb__handle_event_call_3_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_3_p_0

	MR_Word X;

		{
MR_get_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);


		;}
#undef MR_PROC_LABEL
	 ssdb__DebuggerState_8  = X;
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_3_p_0


		{


		;}
#undef MR_PROC_LABEL
}
    switch (ssdb__DebuggerState_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ssdb__EventNum_31;
          MR_Integer ssdb__CSN_32;
          MR_Integer ssdb__OldDepth_33;
          MR_Integer ssdb__Depth_34;
          MR_String ssdb__SiteFile_35;
          MR_Integer ssdb__SiteLine_36;
          MR_Word ssdb__StackFrame_37;
          MR_Word ssdb__Stop_38;
          MR_Integer ssdb__EventNum0_61;
          MR_Integer ssdb__CSN0_75;
          MR_Word ssdb___AutoRetry_39;

{
#define MR_PROC_LABEL ssdb__handle_event_call_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_3_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_cur_ssdb_event_number;


		;}
#undef MR_PROC_LABEL
	 ssdb__EventNum0_61  = X;
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__EventNum_31 = (ssdb__EventNum0_61 + (MR_Integer) 1);
{
#define MR_PROC_LABEL ssdb__handle_event_call_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_3_p_0

	MR_Integer X;

	X =  ssdb__EventNum_31 ;
		{
ssdb__mutable_variable_cur_ssdb_event_number = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                    "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_3_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_cur_ssdb_csn;


		;}
#undef MR_PROC_LABEL
	 ssdb__CSN0_75  = X;
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                    "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__CSN_32 = (ssdb__CSN0_75 + (MR_Integer) 1);
{
#define MR_PROC_LABEL ssdb__handle_event_call_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                    "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_3_p_0

	MR_Integer X;

	X =  ssdb__CSN_32 ;
		{
ssdb__mutable_variable_cur_ssdb_csn = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                    "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_3_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_shadow_stack_depth;


		;}
#undef MR_PROC_LABEL
	 ssdb__OldDepth_33  = X;
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__Depth_34 = (ssdb__OldDepth_33 + (MR_Integer) 1);
{
#define MR_PROC_LABEL ssdb__handle_event_call_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_filename_lock,
                    "ssdb__mutable_variable_cur_filename_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_3_p_0

	MR_String X;

		{
X = ssdb__mutable_variable_cur_filename;


		;}
#undef MR_PROC_LABEL
	 ssdb__SiteFile_35  = X;
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_filename_lock,
                    "ssdb__mutable_variable_cur_filename_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_line_number_lock,
                    "ssdb__mutable_variable_cur_line_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_3_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_cur_line_number;


		;}
#undef MR_PROC_LABEL
	 ssdb__SiteLine_36  = X;
}
{
#define MR_PROC_LABEL ssdb__handle_event_call_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_line_number_lock,
                    "ssdb__mutable_variable_cur_line_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          {
            ssdb__StackFrame_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ssdb__StackFrame_37, 0) = ((MR_Box) (ssdb__EventNum_31));
            MR_hl_field(MR_mktag(0), ssdb__StackFrame_37, 1) = ((MR_Box) (ssdb__CSN_32));
            MR_hl_field(MR_mktag(0), ssdb__StackFrame_37, 2) = ((MR_Box) (ssdb__Depth_34));
            MR_hl_field(MR_mktag(0), ssdb__StackFrame_37, 3) = ((MR_Box) (ssdb__ProcId_4));
            MR_hl_field(MR_mktag(0), ssdb__StackFrame_37, 4) = ((MR_Box) (ssdb__SiteFile_35));
            MR_hl_field(MR_mktag(0), ssdb__StackFrame_37, 5) = ((MR_Box) (ssdb__SiteLine_36));
            MR_hl_field(MR_mktag(0), ssdb__StackFrame_37, 6) = ((MR_Box) (ssdb__ListVarValue_5));
            MR_hl_field(MR_mktag(0), ssdb__StackFrame_37, 7) = ((MR_Box) (ssdb__Level_6));
          }
          ssdb__stack_push_3_p_0(ssdb__StackFrame_37);
          ssdb__should_stop_at_this_event_8_p_0((MR_Integer) 0, ssdb__EventNum_31, ssdb__CSN_32, ssdb__ProcId_4, &ssdb__Stop_38, &ssdb___AutoRetry_39);
          switch (ssdb__Stop_38) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ssdb__WhatNext_40;
                MR_Word ssdb___Retry_41;

                ssdb__save_streams_2_p_0();
                ssdb__print_event_info_4_p_0((MR_Integer) 0, ssdb__EventNum_31);
                ssdb__read_and_execute_cmd_2_6_p_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, &ssdb__WhatNext_40);
                ssdb__update_next_stop_6_p_0(ssdb__EventNum_31, ssdb__CSN_32, ssdb__WhatNext_40, &ssdb___Retry_41);
                ssdb__restore_streams_2_p_0();
              }
              break;
          }
        }
        break;
    }
    mercury__builtin__impure_true_0_p_0();
  }
}

static void MR_CALL 
ssdb__restore_streams_2_p_0(void)
{
  {
    MR_Word ssdb__InputStream_4;
    MR_Word ssdb__OutputStream_5;
    MR_Word ssdb__Var_6;
    MR_Word ssdb__Var_7;

{
#define MR_PROC_LABEL ssdb__restore_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                    "ssdb__mutable_variable_saved_input_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__restore_streams_2_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_saved_input_stream;


		;}
#undef MR_PROC_LABEL
	 ssdb__InputStream_4  = X;
}
{
#define MR_PROC_LABEL ssdb__restore_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                    "ssdb__mutable_variable_saved_input_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__restore_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                    "ssdb__mutable_variable_saved_output_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__restore_streams_2_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_saved_output_stream;


		;}
#undef MR_PROC_LABEL
	 ssdb__OutputStream_5  = X;
}
{
#define MR_PROC_LABEL ssdb__restore_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                    "ssdb__mutable_variable_saved_output_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    mercury__io__set_input_stream_4_p_0(ssdb__InputStream_4, &ssdb__Var_6);
    mercury__io__set_output_stream_4_p_0(ssdb__OutputStream_5, &ssdb__Var_7);
  }
}

static void MR_CALL 
ssdb__save_streams_2_p_0(void)
{
  {
    MR_Word ssdb__TTY_in_4;
    MR_Word ssdb__TTY_out_5;
    MR_Word ssdb__OldInputStream_6;
    MR_Word ssdb__OldOutputStream_7;

{
#define MR_PROC_LABEL ssdb__save_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_in_lock,
                    "ssdb__mutable_variable_tty_in_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__save_streams_2_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_tty_in;


		;}
#undef MR_PROC_LABEL
	 ssdb__TTY_in_4  = X;
}
{
#define MR_PROC_LABEL ssdb__save_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_in_lock,
                    "ssdb__mutable_variable_tty_in_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__save_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_out_lock,
                    "ssdb__mutable_variable_tty_out_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__save_streams_2_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_tty_out;


		;}
#undef MR_PROC_LABEL
	 ssdb__TTY_out_5  = X;
}
{
#define MR_PROC_LABEL ssdb__save_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_out_lock,
                    "ssdb__mutable_variable_tty_out_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    mercury__io__set_input_stream_4_p_0(ssdb__TTY_in_4, &ssdb__OldInputStream_6);
    mercury__io__set_output_stream_4_p_0(ssdb__TTY_out_5, &ssdb__OldOutputStream_7);
{
#define MR_PROC_LABEL ssdb__save_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                    "ssdb__mutable_variable_saved_input_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__save_streams_2_p_0

	MR_Word X;

	X =  ssdb__OldInputStream_6 ;
		{
ssdb__mutable_variable_saved_input_stream = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__save_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                    "ssdb__mutable_variable_saved_input_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__save_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                    "ssdb__mutable_variable_saved_output_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__save_streams_2_p_0

	MR_Word X;

	X =  ssdb__OldOutputStream_7 ;
		{
ssdb__mutable_variable_saved_output_stream = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__save_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                    "ssdb__mutable_variable_saved_output_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__execute_ssdb_retry_2_6_p_0(
  MR_Integer ssdb__Num_7,
  MR_Word ssdb__Event_8,
  MR_Integer ssdb__Depth_9,
  MR_Word * ssdb__WhatNext_10)
{
  {
    MR_Word ssdb__Frame_12;
    MR_Integer ssdb__CSN_13;
    MR_Word ssdb__Stack_34;
    MR_Box ssdb__conv0_Frame_12;
    MR_Integer ssdb__Var_22;
    MR_Integer ssdb__Var_23;
    MR_Word ssdb__Var_24;
    MR_String ssdb__Var_25;
    MR_Integer ssdb__Var_26;
    MR_Word ssdb__Var_27;
    MR_Word ssdb__Var_28;

{
#define MR_PROC_LABEL ssdb__execute_ssdb_retry_2_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_retry_2_6_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_34  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_retry_2_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    mercury__list__det_index0_3_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_stack_frame_0, ssdb__Stack_34, ssdb__Num_7, &ssdb__conv0_Frame_12);
    ssdb__Frame_12 = ((MR_Word) ssdb__conv0_Frame_12);
    ssdb__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_12, (MR_Integer) 0)));
    ssdb__CSN_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_12, (MR_Integer) 1)));
    ssdb__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_12, (MR_Integer) 2)));
    ssdb__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_12, (MR_Integer) 3)));
    ssdb__Var_25 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__Frame_12, (MR_Integer) 4)));
    ssdb__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_12, (MR_Integer) 5)));
    ssdb__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_12, (MR_Integer) 6)));
    ssdb__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_12, (MR_Integer) 7)));
    switch (ssdb__Event_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 3:
      case (MR_Integer) 7:
      case (MR_Integer) 5:
        {
          mercury__io__write_string_3_p_0((MR_String) "Cannot retry at call or redo port.\n");
          ssdb__read_and_execute_cmd_2_6_p_0((MR_Integer) 0, ssdb__Event_8, ssdb__Depth_9, ssdb__WhatNext_10);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
      case (MR_Integer) 6:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ssdb__WhatNext_10 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ssdb__CSN_13));
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word ssdb__Found_14;
          MR_Integer ssdb__StackDepth_53;
          MR_Integer ssdb__Var_55;

{
#define MR_PROC_LABEL ssdb__execute_ssdb_retry_2_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_retry_2_6_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_nondet_shadow_stack_depth;


		;}
#undef MR_PROC_LABEL
	 ssdb__StackDepth_53  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_retry_2_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__Var_55 = (ssdb__StackDepth_53 - (MR_Integer) 1);
          ssdb__nondet_stack_contains_csn_2_5_p_0(ssdb__CSN_13, ssdb__Var_55, &ssdb__Found_14);
          switch (ssdb__Found_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ssdb__WhatNext_10 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ssdb__CSN_13));
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ssdb__WhatNext_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ssdb__CSN_13));
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ssdb__execute_ssdb_retry_6_p_0(
  MR_Word ssdb__Args_7,
  MR_Word ssdb__Event_8,
  MR_Integer ssdb__Depth_9,
  MR_Word * ssdb__WhatNext_10)
{
  {
    MR_bool ssdb__succeeded;

    if ((ssdb__Args_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word ssdb__Frame_58;
      MR_Integer ssdb__CSN_59;
      MR_Integer ssdb__Var_66;
      MR_Integer ssdb__Var_67;
      MR_Word ssdb__Var_68;
      MR_String ssdb__Var_69;
      MR_Integer ssdb__Var_70;
      MR_Word ssdb__Var_71;
      MR_Word ssdb__Var_72;

      ssdb__stack_index_4_p_0((MR_Integer) 0, &ssdb__Frame_58);
      ssdb__Var_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_58, (MR_Integer) 0)));
      ssdb__CSN_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_58, (MR_Integer) 1)));
      ssdb__Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_58, (MR_Integer) 2)));
      ssdb__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_58, (MR_Integer) 3)));
      ssdb__Var_69 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__Frame_58, (MR_Integer) 4)));
      ssdb__Var_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_58, (MR_Integer) 5)));
      ssdb__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_58, (MR_Integer) 6)));
      ssdb__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_58, (MR_Integer) 7)));
      switch (ssdb__Event_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 3:
        case (MR_Integer) 7:
        case (MR_Integer) 5:
          {
            mercury__io__write_string_3_p_0((MR_String) "Cannot retry at call or redo port.\n");
            ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_8, ssdb__Depth_9, ssdb__WhatNext_10);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 6:
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ssdb__WhatNext_10 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ssdb__CSN_59));
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ssdb__Found_60;

            ssdb__nondet_stack_contains_csn_4_p_0(ssdb__CSN_59, &ssdb__Found_60);
            switch (ssdb__Found_60) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *ssdb__WhatNext_10 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ssdb__CSN_59));
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ssdb__WhatNext_10 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ssdb__CSN_59));
                }
                break;
            }
          }
          break;
      }
    }
    else
    {
      MR_Word ssdb__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Args_7, (MR_Integer) 1)));
      MR_String ssdb__Var_39 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Args_7, (MR_Integer) 0)));

      if ((ssdb__Var_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer ssdb__Num_13;
        MR_Integer ssdb__Var_75;

        ssdb__succeeded = mercury__string__to_int_2_p_0(ssdb__Var_39, &ssdb__Num_13);
        if (ssdb__succeeded)
        {
          ssdb__Var_75 = (MR_Integer) 0;
          ssdb__succeeded = (ssdb__Num_13 >= ssdb__Var_75);
        }
        if (ssdb__succeeded)
        {
          MR_Integer ssdb__CurDepth_14;

{
#define MR_PROC_LABEL ssdb__execute_ssdb_retry_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_retry_6_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_shadow_stack_depth;


		;}
#undef MR_PROC_LABEL
	 ssdb__CurDepth_14  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_retry_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__succeeded = (ssdb__Num_13 < ssdb__CurDepth_14);
          if (ssdb__succeeded)
            ssdb__execute_ssdb_retry_2_6_p_0(ssdb__Num_13, ssdb__Event_8, ssdb__Depth_9, ssdb__WhatNext_10);
          else
          {
            MR_Integer ssdb__Var_30 = (ssdb__CurDepth_14 - (MR_Integer) 1);
            MR_String ssdb__Var_43;

            mercury__io__write_string_3_p_0((MR_String) "The depth must be between 0 and ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ssdb_scalar_common_3[1], ssdb__Var_30, &ssdb__Var_43);
            mercury__io__write_string_3_p_0(ssdb__Var_43);
            mercury__io__write_string_3_p_0((MR_String) ".\n");
            ssdb__read_and_execute_cmd_2_6_p_0((MR_Integer) 0, ssdb__Event_8, ssdb__Depth_9, ssdb__WhatNext_10);
          }
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "ssdb: invalid argument to command.\n");
          ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_8, ssdb__Depth_9, ssdb__WhatNext_10);
        }
      }
      else
      {
        ssdb__print_too_many_arguments_2_p_0();
        ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_8, ssdb__Depth_9, ssdb__WhatNext_10);
      }
    }
  }
}

static void MR_CALL 
ssdb__execute_ssdb_exception_6_p_0(
  MR_Word ssdb__Args_7,
  MR_Word ssdb__Event_8,
  MR_Integer ssdb__Depth_9,
  MR_Word * ssdb__WhatNext_10)
{
  if ((ssdb__Args_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *ssdb__WhatNext_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
  else
  {
    mercury__io__write_string_3_p_0((MR_String) "The exception command accepts no arguments.\n");
    ssdb__read_and_execute_cmd_2_6_p_0((MR_Integer) 0, ssdb__Event_8, ssdb__Depth_9, ssdb__WhatNext_10);
  }
}

static void MR_CALL 
ssdb__execute_ssdb_return_6_p_0(
  MR_Word ssdb__Args_7,
  MR_Word ssdb__Event_8,
  MR_Integer ssdb__Depth_9,
  MR_Word * ssdb__WhatNext_10)
{
  if ((ssdb__Args_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    switch (ssdb__Event_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 3:
      case (MR_Integer) 7:
      case (MR_Integer) 2:
      case (MR_Integer) 6:
      case (MR_Integer) 5:
        {
          mercury__io__write_string_3_p_0((MR_String) "This command is a no-op from this port.\n");
          ssdb__read_and_execute_cmd_2_6_p_0((MR_Integer) 0, ssdb__Event_8, ssdb__Depth_9, ssdb__WhatNext_10);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 4:
        *ssdb__WhatNext_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
        break;
    }
  else
  {
    mercury__io__write_string_3_p_0((MR_String) "ssdb: too many arguments to command.\n");
    ssdb__read_and_execute_cmd_2_6_p_0((MR_Integer) 0, ssdb__Event_8, ssdb__Depth_9, ssdb__WhatNext_10);
  }
}

static void MR_CALL 
ssdb__execute_ssdb_finish_6_p_0(
  MR_Word ssdb__Args_7,
  MR_Word ssdb__Event_8,
  MR_Integer ssdb__Depth_9,
  MR_Word * ssdb__WhatNext_10)
{
  {
    MR_bool ssdb__succeeded;

    if ((ssdb__Args_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      switch (ssdb__Event_8) {
        default:
          ssdb__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          ssdb__succeeded = MR_TRUE;
          break;
        case (MR_Integer) 3:
          ssdb__succeeded = MR_TRUE;
          break;
        case (MR_Integer) 5:
          ssdb__succeeded = MR_TRUE;
          break;
      }
      if (ssdb__succeeded)
      {
        MR_Word ssdb__StackFrame_12;
        MR_Integer ssdb__CSN_13;
        MR_Word ssdb__Stack_85;
        MR_Integer ssdb__Var_54;
        MR_Integer ssdb__Var_55;
        MR_Word ssdb__Var_56;
        MR_String ssdb__Var_57;
        MR_Integer ssdb__Var_58;
        MR_Word ssdb__Var_59;
        MR_Word ssdb__Var_60;

{
#define MR_PROC_LABEL ssdb__execute_ssdb_finish_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_finish_6_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_85  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_finish_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
        if ((ssdb__Stack_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__require__error_1_p_0((MR_String) "ssdb: stack_top on empty stack");
            return;
          }
        }
        else
        {
          MR_Word ssdb__Var_86;

          ssdb__StackFrame_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_85, (MR_Integer) 0)));
          ssdb__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_85, (MR_Integer) 1)));
        }
        ssdb__Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_12, (MR_Integer) 0)));
        ssdb__CSN_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_12, (MR_Integer) 1)));
        ssdb__Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_12, (MR_Integer) 2)));
        ssdb__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_12, (MR_Integer) 3)));
        ssdb__Var_57 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_12, (MR_Integer) 4)));
        ssdb__Var_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_12, (MR_Integer) 5)));
        ssdb__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_12, (MR_Integer) 6)));
        ssdb__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_12, (MR_Integer) 7)));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ssdb__WhatNext_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ssdb__CSN_13));
        }
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "The \140finish\' command can be executed only at a call or redo port.\n");
        ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_8, ssdb__Depth_9, ssdb__WhatNext_10);
      }
    }
    else
    {
      MR_Word ssdb__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Args_7, (MR_Integer) 1)));
      MR_String ssdb__Var_69 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Args_7, (MR_Integer) 0)));

      if ((ssdb__Var_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer ssdb__Num_15;
        MR_Integer ssdb__Var_94;

        ssdb__succeeded = mercury__string__to_int_2_p_0(ssdb__Var_69, &ssdb__Num_15);
        if (ssdb__succeeded)
        {
          ssdb__Var_94 = (MR_Integer) 0;
          ssdb__succeeded = (ssdb__Num_15 >= ssdb__Var_94);
        }
        if (ssdb__succeeded)
        {
          MR_Integer ssdb__CurDepth_16;

          ssdb__stack_depth_3_p_0(&ssdb__CurDepth_16);
          ssdb__succeeded = (ssdb__Num_15 < ssdb__CurDepth_16);
          if (ssdb__succeeded)
          {
            MR_Word ssdb__StackFrame_44;
            MR_Integer ssdb__CSN_45;
            MR_Integer ssdb__Var_61;
            MR_Integer ssdb__Var_62;
            MR_Word ssdb__Var_63;
            MR_String ssdb__Var_64;
            MR_Integer ssdb__Var_65;
            MR_Word ssdb__Var_66;
            MR_Word ssdb__Var_67;

            ssdb__stack_index_4_p_0(ssdb__Num_15, &ssdb__StackFrame_44);
            ssdb__Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_44, (MR_Integer) 0)));
            ssdb__CSN_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_44, (MR_Integer) 1)));
            ssdb__Var_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_44, (MR_Integer) 2)));
            ssdb__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_44, (MR_Integer) 3)));
            ssdb__Var_64 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_44, (MR_Integer) 4)));
            ssdb__Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_44, (MR_Integer) 5)));
            ssdb__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_44, (MR_Integer) 6)));
            ssdb__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_44, (MR_Integer) 7)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *ssdb__WhatNext_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ssdb__CSN_45));
            }
          }
          else
          {
            MR_Integer ssdb__Var_32 = (ssdb__CurDepth_16 - (MR_Integer) 1);
            MR_String ssdb__Var_73;

            mercury__io__write_string_3_p_0((MR_String) "The depth must be between 0 and ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ssdb_scalar_common_3[1], ssdb__Var_32, &ssdb__Var_73);
            mercury__io__write_string_3_p_0(ssdb__Var_73);
            mercury__io__write_string_3_p_0((MR_String) ".\n");
            ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_8, ssdb__Depth_9, ssdb__WhatNext_10);
          }
        }
        else
        {
          ssdb__print_invalid_argument_2_p_0();
          ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_8, ssdb__Depth_9, ssdb__WhatNext_10);
        }
      }
      else
      {
        ssdb__print_too_many_arguments_2_p_0();
        ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_8, ssdb__Depth_9, ssdb__WhatNext_10);
      }
    }
  }
}

static void MR_CALL 
ssdb__execute_ssdb_continue_6_p_0(
  MR_Word ssdb__Args_7,
  MR_Word ssdb__Event_8,
  MR_Integer ssdb__Depth_9,
  MR_Word * ssdb__WhatNext_10)
{
  if ((ssdb__Args_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *ssdb__WhatNext_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
  else
  {
    mercury__io__write_string_3_p_0((MR_String) "ssdb: too many arguments to command.\n");
    ssdb__read_and_execute_cmd_2_6_p_0((MR_Integer) 0, ssdb__Event_8, ssdb__Depth_9, ssdb__WhatNext_10);
  }
}

static void MR_CALL 
ssdb__execute_ssdb_goto_6_p_0(
  MR_Word ssdb__Args_7,
  MR_Word ssdb__Event_8,
  MR_Integer ssdb__Depth_9,
  MR_Word * ssdb__WhatNext_10)
{
  {
    MR_bool ssdb__succeeded;

    if ((ssdb__Args_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "ssdb: command requires integer argument.\n");
      ssdb__read_and_execute_cmd_2_6_p_0((MR_Integer) 0, ssdb__Event_8, ssdb__Depth_9, ssdb__WhatNext_10);
    }
    else
    {
      MR_Word ssdb__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Args_7, (MR_Integer) 1)));
      MR_String ssdb__Var_33 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Args_7, (MR_Integer) 0)));

      if ((ssdb__Var_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer ssdb__Num_13;
        MR_Integer ssdb__Var_49;

        ssdb__succeeded = mercury__string__to_int_2_p_0(ssdb__Var_33, &ssdb__Num_13);
        if (ssdb__succeeded)
        {
          ssdb__Var_49 = (MR_Integer) 0;
          ssdb__succeeded = (ssdb__Num_13 >= ssdb__Var_49);
        }
        if (ssdb__succeeded)
        {
          MR_Integer ssdb__CurEventNum_14;

{
#define MR_PROC_LABEL ssdb__execute_ssdb_goto_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_goto_6_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_cur_ssdb_event_number;


		;}
#undef MR_PROC_LABEL
	 ssdb__CurEventNum_14  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_goto_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__succeeded = (ssdb__Num_13 > ssdb__CurEventNum_14);
          if (ssdb__succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ssdb__WhatNext_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ssdb__Num_13));
            }
          else
          {
            mercury__io__write_string_3_p_0((MR_String) "The debugger cannot go to a past event.\n");
            ssdb__read_and_execute_cmd_2_6_p_0((MR_Integer) 0, ssdb__Event_8, ssdb__Depth_9, ssdb__WhatNext_10);
          }
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "ssdb: invalid argument to command.\n");
          ssdb__read_and_execute_cmd_2_6_p_0((MR_Integer) 0, ssdb__Event_8, ssdb__Depth_9, ssdb__WhatNext_10);
        }
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "ssdb: too many arguments to command.\n");
        ssdb__read_and_execute_cmd_2_6_p_0((MR_Integer) 0, ssdb__Event_8, ssdb__Depth_9, ssdb__WhatNext_10);
      }
    }
  }
}

static void MR_CALL 
ssdb__execute_ssdb_next_6_p_0(
  MR_Word ssdb__Args_7,
  MR_Word ssdb__Event_8,
  MR_Integer ssdb__Depth_9,
  MR_Word * ssdb__WhatNext_10)
{
  {
    MR_bool ssdb__succeeded;

    if ((ssdb__Args_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      switch (ssdb__Event_8) {
        default:
          ssdb__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          ssdb__succeeded = MR_TRUE;
          break;
        case (MR_Integer) 3:
          ssdb__succeeded = MR_TRUE;
          break;
        case (MR_Integer) 5:
          ssdb__succeeded = MR_TRUE;
          break;
      }
      if (ssdb__succeeded)
        *ssdb__WhatNext_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "The \140next\' command can be executed only at a call or redo port.\n");
        ssdb__read_and_execute_cmd_2_6_p_0((MR_Integer) 0, ssdb__Event_8, ssdb__Depth_9, ssdb__WhatNext_10);
      }
    }
    else
    {
      mercury__io__write_string_3_p_0((MR_String) "ssdb: too many arguments to command.\n");
      ssdb__read_and_execute_cmd_2_6_p_0((MR_Integer) 0, ssdb__Event_8, ssdb__Depth_9, ssdb__WhatNext_10);
    }
  }
}

static void MR_CALL 
ssdb__execute_ssdb_step_6_p_0(
  MR_Word ssdb__Args_7,
  MR_Word ssdb__Event_8,
  MR_Integer ssdb__Depth_9,
  MR_Word * ssdb__WhatNext_10)
{
  {
    MR_bool ssdb__succeeded;

    if ((ssdb__Args_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ssdb__WhatNext_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Integer ssdb__N_15;
      MR_String ssdb__NStr_14 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Args_7, (MR_Integer) 0)));
      MR_Word ssdb__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Args_7, (MR_Integer) 1)));
      MR_Integer ssdb__Var_20;

      ssdb__succeeded = (ssdb__Var_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (ssdb__succeeded)
      {
        ssdb__succeeded = mercury__string__to_int_2_p_0(ssdb__NStr_14, &ssdb__N_15);
        if (ssdb__succeeded)
        {
          ssdb__Var_20 = (MR_Integer) 0;
          ssdb__succeeded = (ssdb__N_15 > ssdb__Var_20);
        }
      }
      if (ssdb__succeeded)
      {
        MR_Integer ssdb__EventNumber_16;
        MR_Integer ssdb__Var_22;

{
#define MR_PROC_LABEL ssdb__execute_ssdb_step_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_step_6_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_cur_ssdb_event_number;


		;}
#undef MR_PROC_LABEL
	 ssdb__EventNumber_16  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_step_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
        ssdb__Var_22 = (ssdb__EventNumber_16 + ssdb__N_15);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ssdb__WhatNext_10 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ssdb__Var_22));
        }
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "ssdb: command requires integer argument.\n");
        ssdb__read_and_execute_cmd_2_6_p_0((MR_Integer) 0, ssdb__Event_8, ssdb__Depth_9, ssdb__WhatNext_10);
      }
    }
  }
}

static void MR_CALL 
ssdb__execute_cmd_8_p_0(
  MR_Word ssdb__Cmd_9,
  MR_Word ssdb__Args_10,
  MR_Word ssdb__Interacting_11,
  MR_Word ssdb__Event_12,
  MR_Integer ssdb__Depth_13,
  MR_Word * ssdb__WhatNext_14)
{
  switch (ssdb__Cmd_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 18:
      {
        ssdb__execute_ssdb_alias_4_p_0(ssdb__Args_10, ssdb__Interacting_11);
        ssdb__read_and_execute_cmd_2_6_p_0((MR_Integer) 0, ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      }
      break;
    case (MR_Integer) 25:
      {
        ssdb__execute_ssdb_break_3_p_0(ssdb__Args_10);
        ssdb__read_and_execute_cmd_2_6_p_0((MR_Integer) 0, ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      }
      break;
    case (MR_Integer) 10:
      {
        ssdb__execute_ssdb_browse_4_p_0(ssdb__Args_10, ssdb__Depth_13);
        ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      }
      break;
    case (MR_Integer) 3:
      ssdb__execute_ssdb_continue_6_p_0(ssdb__Args_10, ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      break;
    case (MR_Integer) 15:
      {
        ssdb__execute_ssdb_current_4_p_0(ssdb__Args_10, ssdb__Event_12);
        ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      }
      break;
    case (MR_Integer) 28:
      {
        ssdb__execute_ssdb_delete_3_p_0(ssdb__Args_10);
        ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      }
      break;
    case (MR_Integer) 27:
      {
        ssdb__execute_ssdb_disable_3_p_0(ssdb__Args_10);
        ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      }
      break;
    case (MR_Integer) 12:
      {
        MR_Integer ssdb__NewDepth_16;

        ssdb__execute_ssdb_down_5_p_0(ssdb__Args_10, ssdb__Depth_13, &ssdb__NewDepth_16);
        ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_12, ssdb__NewDepth_16, ssdb__WhatNext_14);
      }
      break;
    case (MR_Integer) 26:
      {
        ssdb__execute_ssdb_enable_3_p_0(ssdb__Args_10);
        ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      }
      break;
    case (MR_Integer) 6:
      ssdb__execute_ssdb_exception_6_p_0(ssdb__Args_10, ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      break;
    case (MR_Integer) 4:
      ssdb__execute_ssdb_finish_6_p_0(ssdb__Args_10, ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      break;
    case (MR_Integer) 16:
      {
        ssdb__execute_ssdb_format_3_p_0(ssdb__Args_10);
        ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      }
      break;
    case (MR_Integer) 17:
      {
        ssdb__execute_ssdb_format_param_3_p_0(ssdb__Args_10);
        ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      }
      break;
    case (MR_Integer) 2:
      ssdb__execute_ssdb_goto_6_p_0(ssdb__Args_10, ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      break;
    case (MR_Integer) 29:
      {
        ssdb__execute_ssdb_help_3_p_0(ssdb__Args_10);
        ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      }
      break;
    case (MR_Integer) 14:
      {
        MR_Integer ssdb__NewDepth_62;

        ssdb__execute_ssdb_level_5_p_0(ssdb__Args_10, ssdb__Depth_13, &ssdb__NewDepth_62);
        ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_12, ssdb__NewDepth_62, ssdb__WhatNext_14);
      }
      break;
    case (MR_Integer) 20:
      {
        ssdb__execute_ssdb_list_4_p_0(ssdb__Args_10, ssdb__Depth_13);
        ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      }
      break;
    case (MR_Integer) 24:
      {
        ssdb__execute_ssdb_list_context_lines_3_p_0(ssdb__Args_10);
        ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      }
      break;
    case (MR_Integer) 21:
      {
        ssdb__execute_ssdb_list_path_3_p_0(ssdb__Args_10);
        ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      }
      break;
    case (MR_Integer) 1:
      ssdb__execute_ssdb_next_6_p_0(ssdb__Args_10, ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      break;
    case (MR_Integer) 23:
      {
        ssdb__execute_ssdb_pop_list_dir_3_p_0(ssdb__Args_10);
        ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      }
      break;
    case (MR_Integer) 9:
      {
        ssdb__execute_ssdb_print_4_p_0(ssdb__Args_10, ssdb__Depth_13);
        ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      }
      break;
    case (MR_Integer) 22:
      {
        ssdb__execute_ssdb_push_list_dir_3_p_0(ssdb__Args_10);
        ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      }
      break;
    case (MR_Integer) 31:
      {
        ssdb__execute_ssdb_quit_4_p_0(ssdb__Args_10, ssdb__Interacting_11);
        ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      }
      break;
    case (MR_Integer) 7:
      ssdb__execute_ssdb_retry_6_p_0(ssdb__Args_10, ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      break;
    case (MR_Integer) 5:
      ssdb__execute_ssdb_return_6_p_0(ssdb__Args_10, ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      break;
    case (MR_Integer) 30:
      {
        ssdb__execute_ssdb_source_3_p_0(ssdb__Args_10);
        ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      }
      break;
    case (MR_Integer) 8:
      {
        ssdb__execute_ssdb_stack_4_p_0(ssdb__Args_10, ssdb__Depth_13);
        ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      }
      break;
    case (MR_Integer) 0:
      ssdb__execute_ssdb_step_6_p_0(ssdb__Args_10, ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      break;
    case (MR_Integer) 19:
      {
        ssdb__execute_ssdb_unalias_4_p_0(ssdb__Args_10, ssdb__Interacting_11);
        ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      }
      break;
    case (MR_Integer) 13:
      {
        MR_Integer ssdb__NewDepth_74;

        ssdb__execute_ssdb_up_5_p_0(ssdb__Args_10, ssdb__Depth_13, &ssdb__NewDepth_74);
        ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_12, ssdb__NewDepth_74, ssdb__WhatNext_14);
      }
      break;
    case (MR_Integer) 11:
      {
        ssdb__execute_ssdb_vars_4_p_0(ssdb__Args_10, ssdb__Depth_13);
        ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
      }
      break;
  }
}

static void MR_CALL 
ssdb__execute_cmd_string_8_p_0(
  MR_String ssdb__CmdWord_9,
  MR_Word ssdb__ArgWords_10,
  MR_Word ssdb__Interacting_11,
  MR_Word ssdb__Event_12,
  MR_Integer ssdb__Depth_13,
  MR_Word * ssdb__WhatNext_14)
{
  {
    MR_bool ssdb__succeeded;
    MR_Word ssdb__Cmd_16;

    {
      MR_Integer ssdb__case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(ssdb__CmdWord_9, 0)) {
        case (MR_Integer) 97:
          if (MR_offset_streq(1, ssdb__CmdWord_9, (MR_String) "alias"))
            ssdb__case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 98:
          if (((MR_nth_code_unit(ssdb__CmdWord_9, 1)) == (MR_Integer) 114))
            switch (MR_nth_code_unit(ssdb__CmdWord_9, 2)) {
              case (MR_Integer) 101:
                if (MR_offset_streq(3, ssdb__CmdWord_9, (MR_String) "break"))
                  ssdb__case_num_0 = (MR_Integer) 1;
                break;
              case (MR_Integer) 111:
                if (MR_offset_streq(3, ssdb__CmdWord_9, (MR_String) "browse"))
                  ssdb__case_num_0 = (MR_Integer) 2;
                break;
            }
          break;
        case (MR_Integer) 99:
          switch (MR_nth_code_unit(ssdb__CmdWord_9, 1)) {
            case (MR_Integer) 111:
              if (MR_offset_streq(2, ssdb__CmdWord_9, (MR_String) "continue"))
                ssdb__case_num_0 = (MR_Integer) 3;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, ssdb__CmdWord_9, (MR_String) "current"))
                ssdb__case_num_0 = (MR_Integer) 4;
              break;
          }
          break;
        case (MR_Integer) 100:
          switch (MR_nth_code_unit(ssdb__CmdWord_9, 1)) {
            case (MR_Integer) 101:
              if (MR_offset_streq(2, ssdb__CmdWord_9, (MR_String) "delete"))
                ssdb__case_num_0 = (MR_Integer) 5;
              break;
            case (MR_Integer) 105:
              if (MR_offset_streq(2, ssdb__CmdWord_9, (MR_String) "disable"))
                ssdb__case_num_0 = (MR_Integer) 6;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, ssdb__CmdWord_9, (MR_String) "down"))
                ssdb__case_num_0 = (MR_Integer) 7;
              break;
          }
          break;
        case (MR_Integer) 101:
          switch (MR_nth_code_unit(ssdb__CmdWord_9, 1)) {
            case (MR_Integer) 110:
              if (MR_offset_streq(2, ssdb__CmdWord_9, (MR_String) "enable"))
                ssdb__case_num_0 = (MR_Integer) 8;
              break;
            case (MR_Integer) 120:
              if (MR_offset_streq(2, ssdb__CmdWord_9, (MR_String) "exception"))
                ssdb__case_num_0 = (MR_Integer) 9;
              break;
          }
          break;
        case (MR_Integer) 102:
          switch (MR_nth_code_unit(ssdb__CmdWord_9, 1)) {
            case (MR_Integer) 105:
              if (MR_offset_streq(2, ssdb__CmdWord_9, (MR_String) "finish"))
                ssdb__case_num_0 = (MR_Integer) 10;
              break;
            case (MR_Integer) 111:
              if (((((((((MR_nth_code_unit(ssdb__CmdWord_9, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(ssdb__CmdWord_9, 3)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(ssdb__CmdWord_9, 4)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(ssdb__CmdWord_9, 5)) == (MR_Integer) 116))))
                switch (MR_nth_code_unit(ssdb__CmdWord_9, 6)) {
                  case (MR_Integer) 0:
                    ssdb__case_num_0 = (MR_Integer) 11;
                    break;
                  case (MR_Integer) 95:
                    if (MR_offset_streq(7, ssdb__CmdWord_9, (MR_String) "format_param"))
                      ssdb__case_num_0 = (MR_Integer) 12;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 103:
          if (MR_offset_streq(1, ssdb__CmdWord_9, (MR_String) "goto"))
            ssdb__case_num_0 = (MR_Integer) 13;
          break;
        case (MR_Integer) 104:
          if (MR_offset_streq(1, ssdb__CmdWord_9, (MR_String) "help"))
            ssdb__case_num_0 = (MR_Integer) 14;
          break;
        case (MR_Integer) 108:
          switch (MR_nth_code_unit(ssdb__CmdWord_9, 1)) {
            case (MR_Integer) 101:
              if (MR_offset_streq(2, ssdb__CmdWord_9, (MR_String) "level"))
                ssdb__case_num_0 = (MR_Integer) 15;
              break;
            case (MR_Integer) 105:
              if (((((MR_nth_code_unit(ssdb__CmdWord_9, 2)) == (MR_Integer) 115)) && (((MR_nth_code_unit(ssdb__CmdWord_9, 3)) == (MR_Integer) 116))))
                switch (MR_nth_code_unit(ssdb__CmdWord_9, 4)) {
                  case (MR_Integer) 0:
                    ssdb__case_num_0 = (MR_Integer) 16;
                    break;
                  case (MR_Integer) 95:
                    switch (MR_nth_code_unit(ssdb__CmdWord_9, 5)) {
                      case (MR_Integer) 99:
                        if (MR_offset_streq(6, ssdb__CmdWord_9, (MR_String) "list_context_lines"))
                          ssdb__case_num_0 = (MR_Integer) 17;
                        break;
                      case (MR_Integer) 112:
                        if (MR_offset_streq(6, ssdb__CmdWord_9, (MR_String) "list_path"))
                          ssdb__case_num_0 = (MR_Integer) 18;
                        break;
                    }
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 110:
          if (MR_offset_streq(1, ssdb__CmdWord_9, (MR_String) "next"))
            ssdb__case_num_0 = (MR_Integer) 19;
          break;
        case (MR_Integer) 112:
          switch (MR_nth_code_unit(ssdb__CmdWord_9, 1)) {
            case (MR_Integer) 111:
              if (MR_offset_streq(2, ssdb__CmdWord_9, (MR_String) "pop_list_dir"))
                ssdb__case_num_0 = (MR_Integer) 20;
              break;
            case (MR_Integer) 114:
              if (MR_offset_streq(2, ssdb__CmdWord_9, (MR_String) "print"))
                ssdb__case_num_0 = (MR_Integer) 21;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, ssdb__CmdWord_9, (MR_String) "push_list_dir"))
                ssdb__case_num_0 = (MR_Integer) 22;
              break;
          }
          break;
        case (MR_Integer) 113:
          if (MR_offset_streq(1, ssdb__CmdWord_9, (MR_String) "quit"))
            ssdb__case_num_0 = (MR_Integer) 23;
          break;
        case (MR_Integer) 114:
          if (((((MR_nth_code_unit(ssdb__CmdWord_9, 1)) == (MR_Integer) 101)) && (((MR_nth_code_unit(ssdb__CmdWord_9, 2)) == (MR_Integer) 116))))
            switch (MR_nth_code_unit(ssdb__CmdWord_9, 3)) {
              case (MR_Integer) 114:
                if (MR_offset_streq(4, ssdb__CmdWord_9, (MR_String) "retry"))
                  ssdb__case_num_0 = (MR_Integer) 24;
                break;
              case (MR_Integer) 117:
                if (MR_offset_streq(4, ssdb__CmdWord_9, (MR_String) "return"))
                  ssdb__case_num_0 = (MR_Integer) 25;
                break;
            }
          break;
        case (MR_Integer) 115:
          switch (MR_nth_code_unit(ssdb__CmdWord_9, 1)) {
            case (MR_Integer) 111:
              if (MR_offset_streq(2, ssdb__CmdWord_9, (MR_String) "source"))
                ssdb__case_num_0 = (MR_Integer) 26;
              break;
            case (MR_Integer) 116:
              switch (MR_nth_code_unit(ssdb__CmdWord_9, 2)) {
                case (MR_Integer) 97:
                  if (MR_offset_streq(3, ssdb__CmdWord_9, (MR_String) "stack"))
                    ssdb__case_num_0 = (MR_Integer) 27;
                  break;
                case (MR_Integer) 101:
                  if (MR_offset_streq(3, ssdb__CmdWord_9, (MR_String) "step"))
                    ssdb__case_num_0 = (MR_Integer) 28;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 117:
          switch (MR_nth_code_unit(ssdb__CmdWord_9, 1)) {
            case (MR_Integer) 110:
              if (MR_offset_streq(2, ssdb__CmdWord_9, (MR_String) "unalias"))
                ssdb__case_num_0 = (MR_Integer) 29;
              break;
            case (MR_Integer) 112:
              if (MR_offset_streq(2, ssdb__CmdWord_9, (MR_String) "up"))
                ssdb__case_num_0 = (MR_Integer) 30;
              break;
          }
          break;
        case (MR_Integer) 118:
          if (MR_offset_streq(1, ssdb__CmdWord_9, (MR_String) "vars"))
            ssdb__case_num_0 = (MR_Integer) 31;
          break;
      }
      if ((ssdb__case_num_0 < (MR_Integer) 0))
        ssdb__succeeded = MR_FALSE;
      else
      {
        /* we found a match; look up the results */
        ssdb__Cmd_16 = ((&ssdb_vector_common_6[32 + ssdb__case_num_0]))->ssdb__vector_common_type_6_0__vct_6_f_0;
        ssdb__succeeded = MR_TRUE;
      }
    }
    if (ssdb__succeeded)
      ssdb__execute_cmd_8_p_0(ssdb__Cmd_16, ssdb__ArgWords_10, ssdb__Interacting_11, ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
    else
    {
      mercury__io__write_string_3_p_0((MR_String) "Unknown command \140");
      mercury__io__write_string_3_p_0(ssdb__CmdWord_9);
      mercury__io__write_string_3_p_0((MR_String) "\' (try \"help\").\n");
      ssdb__read_and_execute_cmd_2_6_p_0((MR_Integer) 0, ssdb__Event_12, ssdb__Depth_13, ssdb__WhatNext_14);
    }
  }
}

static void MR_CALL 
ssdb__expand_alias_and_execute_7_p_0(
  MR_Word ssdb__Words_8,
  MR_Word ssdb__Interacting_9,
  MR_Word ssdb__Event_10,
  MR_Integer ssdb__Depth_11,
  MR_Word * ssdb__WhatNext_12)
{
  {
    MR_bool ssdb__succeeded;
    MR_Word ssdb__Aliases_14;

{
#define MR_PROC_LABEL ssdb__expand_alias_and_execute_7_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_aliases_lock,
                    "ssdb__mutable_variable_aliases_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__expand_alias_and_execute_7_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_aliases;


		;}
#undef MR_PROC_LABEL
	 ssdb__Aliases_14  = X;
}
{
#define MR_PROC_LABEL ssdb__expand_alias_and_execute_7_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_aliases_lock,
                    "ssdb__mutable_variable_aliases_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    if ((ssdb__Words_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_String ssdb__AliasWord_15;
      MR_Word ssdb__AliasWords_16;
      MR_Word ssdb__Var_32;
      MR_Box ssdb__conv0_Var_32;

      ssdb__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ssdb_scalar_common_1[0], ssdb__Aliases_14, ((MR_Box) ((MR_String) "EMPTY")), &ssdb__conv0_Var_32);
      if (ssdb__succeeded)
      {
        ssdb__Var_32 = ((MR_Word) ssdb__conv0_Var_32);
        ssdb__succeeded = MR_TRUE;
      }
      if (ssdb__succeeded)
      {
        ssdb__succeeded = ((MR_tag((MR_Word) ssdb__Var_32)) == (MR_mktag((MR_Integer) 1)));
        if (ssdb__succeeded)
        {
          ssdb__AliasWord_15 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Var_32, (MR_Integer) 0)));
          ssdb__AliasWords_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Var_32, (MR_Integer) 1)));
        }
      }
      if (ssdb__succeeded)
      {
        MR_Word ssdb__Cmd_61;

        ssdb__succeeded = ssdb__ssdb_cmd_name_2_p_0(ssdb__AliasWord_15, &ssdb__Cmd_61);
        if (ssdb__succeeded)
          ssdb__execute_cmd_8_p_0(ssdb__Cmd_61, ssdb__AliasWords_16, ssdb__Interacting_9, ssdb__Event_10, ssdb__Depth_11, ssdb__WhatNext_12);
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "Unknown command \140");
          mercury__io__write_string_3_p_0(ssdb__AliasWord_15);
          mercury__io__write_string_3_p_0((MR_String) "\' (try \"help\").\n");
          ssdb__read_and_execute_cmd_5_p_0(ssdb__Event_10, ssdb__Depth_11, ssdb__WhatNext_12);
        }
      }
      else
      {
        ssdb__read_and_execute_cmd_2_6_p_0((MR_Integer) 0, ssdb__Event_10, ssdb__Depth_11, ssdb__WhatNext_12);
      }
    }
    else
    {
      MR_String ssdb__FirstWord_17 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Words_8, (MR_Integer) 0)));
      MR_Word ssdb__LaterWords_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Words_8, (MR_Integer) 1)));
      MR_String ssdb__AliasWord_37;
      MR_Word ssdb__AliasWords_38;
      MR_Word ssdb__TypeCtorInfo_43_43;
      MR_Word ssdb__TypeInfo_44_44;
      MR_Integer ssdb__Var_19;
      MR_String ssdb__Var_23;
      MR_Word ssdb__Var_24;
      MR_Integer ssdb__Var_83;
      MR_Box ssdb__conv1_Var_24;

      ssdb__succeeded = mercury__string__to_int_2_p_0(ssdb__FirstWord_17, &ssdb__Var_19);
      if (ssdb__succeeded)
      {
        ssdb__Var_83 = (MR_Integer) 0;
        ssdb__succeeded = (ssdb__Var_19 >= ssdb__Var_83);
        if (ssdb__succeeded)
        {
          ssdb__Var_23 = (MR_String) "NUMBER";
          ssdb__TypeCtorInfo_43_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          ssdb__TypeInfo_44_44 = (MR_Word) &ssdb_scalar_common_1[0];
          ssdb__succeeded = mercury__map__search_3_p_0(ssdb__TypeCtorInfo_43_43, ssdb__TypeInfo_44_44, ssdb__Aliases_14, ((MR_Box) (ssdb__Var_23)), &ssdb__conv1_Var_24);
          if (ssdb__succeeded)
          {
            ssdb__Var_24 = ((MR_Word) ssdb__conv1_Var_24);
            ssdb__succeeded = MR_TRUE;
          }
          if (ssdb__succeeded)
          {
            ssdb__succeeded = ((MR_tag((MR_Word) ssdb__Var_24)) == (MR_mktag((MR_Integer) 1)));
            if (ssdb__succeeded)
            {
              ssdb__AliasWord_37 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Var_24, (MR_Integer) 0)));
              ssdb__AliasWords_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Var_24, (MR_Integer) 1)));
            }
          }
        }
      }
      if (ssdb__succeeded)
      {
        MR_Word ssdb__Var_25;

        ssdb__Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ssdb__AliasWords_38, ssdb__Words_8);
        ssdb__execute_cmd_string_8_p_0(ssdb__AliasWord_37, ssdb__Var_25, ssdb__Interacting_9, ssdb__Event_10, ssdb__Depth_11, ssdb__WhatNext_12);
      }
      else
      {
        MR_String ssdb__AliasWord_35;
        MR_Word ssdb__AliasWords_36;
        MR_Word ssdb__Var_27;
        MR_Box ssdb__conv2_Var_27;

        ssdb__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ssdb_scalar_common_1[0], ssdb__Aliases_14, ((MR_Box) (ssdb__FirstWord_17)), &ssdb__conv2_Var_27);
        if (ssdb__succeeded)
        {
          ssdb__Var_27 = ((MR_Word) ssdb__conv2_Var_27);
          ssdb__succeeded = MR_TRUE;
        }
        if (ssdb__succeeded)
        {
          ssdb__succeeded = ((MR_tag((MR_Word) ssdb__Var_27)) == (MR_mktag((MR_Integer) 1)));
          if (ssdb__succeeded)
          {
            ssdb__AliasWord_35 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Var_27, (MR_Integer) 0)));
            ssdb__AliasWords_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Var_27, (MR_Integer) 1)));
          }
        }
        if (ssdb__succeeded)
        {
          MR_Word ssdb__Var_28;

          ssdb__Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ssdb__AliasWords_36, ssdb__LaterWords_18);
          ssdb__execute_cmd_string_8_p_0(ssdb__AliasWord_35, ssdb__Var_28, ssdb__Interacting_9, ssdb__Event_10, ssdb__Depth_11, ssdb__WhatNext_12);
        }
        else
          ssdb__execute_cmd_string_8_p_0(ssdb__FirstWord_17, ssdb__LaterWords_18, ssdb__Interacting_9, ssdb__Event_10, ssdb__Depth_11, ssdb__WhatNext_12);
      }
    }
  }
}

static void MR_CALL 
ssdb__read_and_execute_cmd_2_6_p_0(
  MR_Integer ssdb__N_7,
  MR_Word ssdb__Event_8,
  MR_Integer ssdb__Depth_9,
  MR_Word * ssdb__WhatNext_10)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ssdb__succeeded;
      MR_Word ssdb__Queue0_12;

{
#define MR_PROC_LABEL ssdb__read_and_execute_cmd_2_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_command_queue_lock,
                    "ssdb__mutable_variable_command_queue_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__read_and_execute_cmd_2_6_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_command_queue;


		;}
#undef MR_PROC_LABEL
	 ssdb__Queue0_12  = X;
}
{
#define MR_PROC_LABEL ssdb__read_and_execute_cmd_2_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_command_queue_lock,
                    "ssdb__mutable_variable_command_queue_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      if ((ssdb__Queue0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ssdb__Result_13;

        mercury__io__write_string_3_p_0((MR_String) "ssdb> ");
        mercury__io__flush_output_2_p_0();
        mercury__io__read_line_as_string_3_p_0(&ssdb__Result_13);
        switch (MR_tag((MR_Word) ssdb__Result_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ssdb__execute_cmd_8_p_0((MR_Integer) 31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, ssdb__Event_8, ssdb__Depth_9, ssdb__WhatNext_10);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ssdb__String_17 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Result_13, (MR_Integer) 0)));
              MR_Word ssdb__Words_18;

              ssdb__Words_18 = mercury__string__words_1_f_0(ssdb__String_17);
              ssdb__expand_alias_and_execute_7_p_0(ssdb__Words_18, (MR_Integer) 1, ssdb__Event_8, ssdb__Depth_9, ssdb__WhatNext_10);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ssdb__Error_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ssdb__Result_13, (MR_Integer) 0)));
              MR_String ssdb__Msg_20;

              mercury__io__error_message_2_p_0(ssdb__Error_19, &ssdb__Msg_20);
              mercury__io__write_string_3_p_0((MR_String) "could not read command: ");
              mercury__io__write_string_3_p_0(ssdb__Msg_20);
              mercury__io__write_string_3_p_0((MR_String) "\n");
              ssdb__succeeded = (ssdb__N_7 > (MR_Integer) 10);
              if (ssdb__succeeded)
              {
                ssdb__execute_cmd_8_p_0((MR_Integer) 31, (MR_Word) MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[52]), (MR_Integer) 0, ssdb__Event_8, ssdb__Depth_9, ssdb__WhatNext_10);
              }
              else
              {
                MR_Integer ssdb__Var_41 = (ssdb__N_7 + (MR_Integer) 1);

                /* direct tailcall eliminated */
                {
                  MR_Integer ssdb__next_value_of_N_7 = ssdb__Var_41;

                  ssdb__N_7 = ssdb__next_value_of_N_7;
                }
                continue;
              }
            }
            break;
        }
      }
      else
      {
        MR_Word ssdb__Queue_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Queue0_12, (MR_Integer) 1)));
        MR_String ssdb__String_61 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Queue0_12, (MR_Integer) 0)));
        MR_Word ssdb__Words_62;

{
#define MR_PROC_LABEL ssdb__read_and_execute_cmd_2_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_command_queue_lock,
                    "ssdb__mutable_variable_command_queue_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__read_and_execute_cmd_2_6_p_0

	MR_Word X;

	X =  ssdb__Queue_16 ;
		{
ssdb__mutable_variable_command_queue = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__read_and_execute_cmd_2_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_command_queue_lock,
                    "ssdb__mutable_variable_command_queue_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
        ssdb__Words_62 = mercury__string__words_1_f_0(ssdb__String_61);
        ssdb__expand_alias_and_execute_7_p_0(ssdb__Words_62, (MR_Integer) 0, ssdb__Event_8, ssdb__Depth_9, ssdb__WhatNext_10);
      }
    }
    break;
  }
}

static void MR_CALL 
ssdb__read_and_execute_cmd_5_p_0(
  MR_Word ssdb__Event_6,
  MR_Integer ssdb__Depth_7,
  MR_Word * ssdb__WhatNext_8)
{
  {
    ssdb__read_and_execute_cmd_2_6_p_0((MR_Integer) 0, ssdb__Event_6, ssdb__Depth_7, ssdb__WhatNext_8);
  }
}

static void MR_CALL 
ssdb__execute_ssdb_quit_4_p_0(
  MR_Word ssdb__Args_5,
  MR_Word ssdb__Interacting_6)
{
  {
    MR_bool ssdb__succeeded;

    if ((ssdb__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      switch (ssdb__Interacting_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ssdb__Result_8;

            mercury__io__write_string_3_p_0((MR_String) "ssdb: are you sure you want to quit\? ");
            mercury__io__flush_output_2_p_0();
            mercury__io__read_line_as_string_3_p_0(&ssdb__Result_8);
            switch (MR_tag((MR_Word) ssdb__Result_8)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
{
#define MR_PROC_LABEL ssdb__execute_ssdb_quit_4_p_0


		{

    exit(0);


		;}
#undef MR_PROC_LABEL
}
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String ssdb__String_9 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Result_8, (MR_Integer) 0)));

                  ssdb__succeeded = mercury__string__prefix_2_p_0(ssdb__String_9, (MR_String) "y");
                  if (!(ssdb__succeeded))
                  {
                    ssdb__succeeded = mercury__string__prefix_2_p_0(ssdb__String_9, (MR_String) "Y");
                  }
                  if (ssdb__succeeded)
                  {
{
#define MR_PROC_LABEL ssdb__execute_ssdb_quit_4_p_0


		{

    exit(0);


		;}
#undef MR_PROC_LABEL
}
                  }
                  else
                  {
                  }
                }
                break;
              case (MR_Integer) 2:
                {
{
#define MR_PROC_LABEL ssdb__execute_ssdb_quit_4_p_0


		{

    exit(0);


		;}
#undef MR_PROC_LABEL
}
                }
                break;
            }
          }
          break;
      }
    else
    {
      MR_String ssdb__Var_15 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Args_5, (MR_Integer) 0)));
      MR_Word ssdb__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Args_5, (MR_Integer) 1)));

      ssdb__succeeded = (strcmp(ssdb__Var_15, (MR_String) "-y") == 0);
      if (ssdb__succeeded)
        ssdb__succeeded = (ssdb__Var_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (ssdb__succeeded)
      {
{
#define MR_PROC_LABEL ssdb__execute_ssdb_quit_4_p_0


		{

    exit(0);


		;}
#undef MR_PROC_LABEL
}
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "ssdb: invalid argument.\n");
      }
    }
  }
}

static void MR_CALL 
ssdb__execute_ssdb_source_3_p_0(
  MR_Word ssdb__Args_4)
{
  {
    MR_bool ssdb__succeeded = ((MR_tag((MR_Word) ssdb__Args_4)) == (MR_mktag((MR_Integer) 1)));
    MR_String ssdb__FileName_6;
    MR_Word ssdb__Var_16;

    if (ssdb__succeeded)
    {
      ssdb__FileName_6 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Args_4, (MR_Integer) 0)));
      ssdb__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Args_4, (MR_Integer) 1)));
      ssdb__succeeded = (ssdb__Var_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (ssdb__succeeded)
    {
      MR_Word ssdb__OpenRes_7;

      mercury__io__open_input_4_p_0(ssdb__FileName_6, &ssdb__OpenRes_7);
      if (((MR_tag((MR_Word) ssdb__OpenRes_7)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ssdb__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__OpenRes_7, (MR_Integer) 0)));
        MR_Word ssdb__ErrorStream_13;
        MR_String ssdb__Var_21;

        mercury__io__stderr_stream_3_p_0(&ssdb__ErrorStream_13);
        mercury__io__write_string_4_p_0(ssdb__ErrorStream_13, (MR_String) "ssdb: ");
        ssdb__Var_21 = mercury__io__error_message_1_f_0(ssdb__Error_12);
        mercury__io__write_string_4_p_0(ssdb__ErrorStream_13, ssdb__Var_21);
        mercury__io__nl_3_p_0(ssdb__ErrorStream_13);
      }
      else
      {
        MR_Word ssdb__TypeCtorInfo_32_32;
        MR_Word ssdb__Stream_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__OpenRes_7, (MR_Integer) 0)));
        MR_Word ssdb__RevLines_9;
        MR_Word ssdb__Queue0_10;
        MR_Word ssdb__Queue_11;
        MR_Word ssdb__Var_28;

        ssdb__read_command_lines_5_p_0(ssdb__Stream_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ssdb__RevLines_9);
        mercury__io__close_input_3_p_0(ssdb__Stream_8);
{
#define MR_PROC_LABEL ssdb__execute_ssdb_source_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_command_queue_lock,
                    "ssdb__mutable_variable_command_queue_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_source_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_command_queue;


		;}
#undef MR_PROC_LABEL
	 ssdb__Queue0_10  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_source_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_command_queue_lock,
                    "ssdb__mutable_variable_command_queue_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
        ssdb__TypeCtorInfo_32_32 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        ssdb__Var_28 = mercury__list__reverse_1_f_0(ssdb__TypeCtorInfo_32_32, ssdb__RevLines_9);
        ssdb__Queue_11 = mercury__list__f_43_43_2_f_0(ssdb__TypeCtorInfo_32_32, ssdb__Var_28, ssdb__Queue0_10);
{
#define MR_PROC_LABEL ssdb__execute_ssdb_source_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_command_queue_lock,
                    "ssdb__mutable_variable_command_queue_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_source_3_p_0

	MR_Word X;

	X =  ssdb__Queue_11 ;
		{
ssdb__mutable_variable_command_queue = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_source_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_command_queue_lock,
                    "ssdb__mutable_variable_command_queue_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      }
    }
    else
    {
      mercury__io__write_string_3_p_0((MR_String) "ssdb: \140source\' command expects filename argument.\n");
    }
  }
}

static void MR_CALL 
ssdb__read_command_lines_5_p_0(
  MR_Word ssdb__Stream_6,
  MR_Word ssdb__STATE_VARIABLE_RevLines_0_16,
  MR_Word * ssdb__STATE_VARIABLE_RevLines_17)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ssdb__succeeded;
      MR_Word ssdb__Res_9;

      mercury__io__read_line_as_string_4_p_0(ssdb__Stream_6, &ssdb__Res_9);
      switch (MR_tag((MR_Word) ssdb__Res_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *ssdb__STATE_VARIABLE_RevLines_17 = ssdb__STATE_VARIABLE_RevLines_0_16;
          break;
        case (MR_Integer) 1:
          {
            MR_String ssdb__Line_10 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Res_9, (MR_Integer) 0)));
            MR_Word ssdb__Words_11;
            MR_Word ssdb__STATE_VARIABLE_RevLines_28_28;

            ssdb__Words_11 = mercury__string__words_1_f_0(ssdb__Line_10);
            if ((ssdb__Words_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              ssdb__STATE_VARIABLE_RevLines_28_28 = ssdb__STATE_VARIABLE_RevLines_0_16;
            else
            {
              MR_String ssdb__First_12 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Words_11, (MR_Integer) 0)));
              MR_Word ssdb__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Words_11, (MR_Integer) 1)));

              ssdb__succeeded = mercury__string__prefix_2_p_0(ssdb__First_12, (MR_String) "#");
              if (ssdb__succeeded)
                ssdb__STATE_VARIABLE_RevLines_28_28 = ssdb__STATE_VARIABLE_RevLines_0_16;
              else
                {
                  ssdb__STATE_VARIABLE_RevLines_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ssdb__STATE_VARIABLE_RevLines_28_28, 0) = ((MR_Box) (ssdb__Line_10));
                  MR_hl_field(MR_mktag(1), ssdb__STATE_VARIABLE_RevLines_28_28, 1) = ((MR_Box) (ssdb__STATE_VARIABLE_RevLines_0_16));
                }
            }
            /* direct tailcall eliminated */
            {
              MR_Word ssdb__next_value_of_STATE_VARIABLE_RevLines_0_16 = ssdb__STATE_VARIABLE_RevLines_28_28;

              ssdb__STATE_VARIABLE_RevLines_0_16 = ssdb__next_value_of_STATE_VARIABLE_RevLines_0_16;
            }
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ssdb__Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ssdb__Res_9, (MR_Integer) 0)));
            MR_Word ssdb__ErrorStream_15;
            MR_String ssdb__Var_24;

            mercury__io__stderr_stream_3_p_0(&ssdb__ErrorStream_15);
            mercury__io__write_string_4_p_0(ssdb__ErrorStream_15, (MR_String) "ssdb: ");
            ssdb__Var_24 = mercury__io__error_message_1_f_0(ssdb__Error_14);
            mercury__io__write_string_4_p_0(ssdb__ErrorStream_15, ssdb__Var_24);
            mercury__io__nl_3_p_0(ssdb__ErrorStream_15);
            *ssdb__STATE_VARIABLE_RevLines_17 = ssdb__STATE_VARIABLE_RevLines_0_16;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
ssdb__execute_ssdb_delete_3_p_0_1(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3)
{
  {
    MR_Box ssdb__closure = ssdb__closure_arg;

    ssdb__print_breakpoint_3_p_0(((MR_Word) ssdb__wrapper_arg_1));
  }
}

static void MR_CALL 
ssdb__execute_ssdb_delete_3_p_0(
  MR_Word ssdb__Args_4)
{
  {
    MR_bool ssdb__succeeded;

    if ((ssdb__Args_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "ssdb: command requires argument.\n");
    }
    else
    {
      MR_Word ssdb__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Args_4, (MR_Integer) 1)));
      MR_String ssdb__Var_29 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Args_4, (MR_Integer) 0)));

      if ((ssdb__Var_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ssdb__succeeded = (strcmp(ssdb__Var_29, (MR_String) "*") == 0);
        if (ssdb__succeeded)
        {
          MR_Word ssdb__BreakPoints_7;
          MR_Word ssdb__Var_19;
          MR_Box ssdb__Var_21;

{
#define MR_PROC_LABEL ssdb__execute_ssdb_delete_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_delete_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_breakpoints_map;


		;}
#undef MR_PROC_LABEL
	 ssdb__BreakPoints_7  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_delete_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0, (MR_Word) &ssdb__ssdb__type_ctor_info_breakpoint_0, ssdb__BreakPoints_7);
          if (ssdb__succeeded)
          {
            mercury__io__write_string_3_p_0((MR_String) "There are no break points.\n");
          }
          else
          {
            MR_Word ssdb__TypeCtorInfo_17_51 = (MR_Word) &ssdb__ssdb__type_ctor_info_breakpoint_0;
            MR_Word ssdb__SortedBreakPoints_42;
            MR_Word ssdb__Var_45;
            MR_Box ssdb__conv0_STATE_VARIABLE_IO_18_18;

            ssdb__Var_45 = mercury__map__values_1_f_0((MR_Word) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0, ssdb__TypeCtorInfo_17_51, ssdb__BreakPoints_7);
            mercury__list__sort_2_p_0(ssdb__TypeCtorInfo_17_51, ssdb__Var_45, &ssdb__SortedBreakPoints_42);
            mercury__list__foldl_4_p_2(ssdb__TypeCtorInfo_17_51, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ssdb_scalar_common_2[15], ssdb__SortedBreakPoints_42, ((MR_Box) ((MR_Integer) 0)), &ssdb__conv0_STATE_VARIABLE_IO_18_18);
          }
          ssdb__Var_19 = mercury__map__init_0_f_0((MR_Word) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0, (MR_Word) &ssdb__ssdb__type_ctor_info_breakpoint_0);
{
#define MR_PROC_LABEL ssdb__execute_ssdb_delete_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_delete_3_p_0

	MR_Word X;

	X =  ssdb__Var_19 ;
		{
ssdb__mutable_variable_breakpoints_map = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_delete_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__Var_21 = mercury__bitmap__init_1_f_0(((MR_Integer) 65535 + (MR_Integer) 1));
{
#define MR_PROC_LABEL ssdb__execute_ssdb_delete_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                    "ssdb__mutable_variable_breakpoints_filter_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_delete_3_p_0

	MR_BitmapPtr X;

	X = (MR_BitmapPtr) ssdb__Var_21 ;
		{
ssdb__mutable_variable_breakpoints_filter = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_delete_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                    "ssdb__mutable_variable_breakpoints_filter_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
        }
        else
        {
          MR_Integer ssdb__Num_8;
          MR_Integer ssdb__Var_67;

          ssdb__succeeded = mercury__string__to_int_2_p_0(ssdb__Var_29, &ssdb__Num_8);
          if (ssdb__succeeded)
          {
            ssdb__Var_67 = (MR_Integer) 0;
            ssdb__succeeded = (ssdb__Num_8 >= ssdb__Var_67);
          }
          if (ssdb__succeeded)
            ssdb__delete_breakpoint_3_p_0(ssdb__Num_8);
          else
          {
            mercury__io__write_string_3_p_0((MR_String) "ssdb: invalid argument to command.\n");
          }
        }
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "ssdb: too many arguments to command.\n");
      }
    }
  }
}

static void MR_CALL 
ssdb__delete_breakpoint_3_p_0_5(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3)
{
  {
    MR_Box ssdb__closure = ssdb__closure_arg;
    MR_Box ssdb__conv2_STATE_VARIABLE_Bitmap_12;

    ssdb__set_breakpoints_filter_bits_3_p_0(((MR_Word) ssdb__wrapper_arg_1), ((MR_Box) ssdb__wrapper_arg_2), &ssdb__conv2_STATE_VARIABLE_Bitmap_12);
    *ssdb__wrapper_arg_3 = ((MR_Box) (ssdb__conv2_STATE_VARIABLE_Bitmap_12));
  }
}

static void MR_CALL 
ssdb__delete_breakpoint_3_p_0_1(
  void * ssdb__env_ptr_arg)
{
  {
    struct ssdb__delete_breakpoint_3_p_0_env_0_s * ssdb__env_ptr = (struct ssdb__delete_breakpoint_3_p_0_env_0_s *) ssdb__env_ptr_arg;

    MR_builtin_longjmp((ssdb__env_ptr)->ssdb__delete_breakpoint_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ssdb__delete_breakpoint_3_p_0_3(
  void * ssdb__env_ptr_arg)
{
  {
    struct ssdb__delete_breakpoint_3_p_0_env_0_s * ssdb__env_ptr = (struct ssdb__delete_breakpoint_3_p_0_env_0_s *) ssdb__env_ptr_arg;

    (ssdb__env_ptr)->ssdb__delete_breakpoint_3_p_0_env_0__ProcId_7 = ((MR_Word) (ssdb__env_ptr)->ssdb__delete_breakpoint_3_p_0_env_0__conv1_ProcId_7);
    (ssdb__env_ptr)->ssdb__delete_breakpoint_3_p_0_env_0__BreakPoint_8 = ((MR_Word) (ssdb__env_ptr)->ssdb__delete_breakpoint_3_p_0_env_0__conv0_BreakPoint_8);
    ssdb__delete_breakpoint_3_p_0_2(ssdb__env_ptr);
  }
}

static void MR_CALL 
ssdb__delete_breakpoint_3_p_0_2(
  void * ssdb__env_ptr_arg)
{
  {
    struct ssdb__delete_breakpoint_3_p_0_env_0_s * ssdb__env_ptr = (struct ssdb__delete_breakpoint_3_p_0_env_0_s *) ssdb__env_ptr_arg;

    {
      MR_Word ssdb__Var_45;
      MR_Word ssdb__Var_46;

      (ssdb__env_ptr)->ssdb__delete_breakpoint_3_p_0_env_0__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (ssdb__env_ptr)->ssdb__delete_breakpoint_3_p_0_env_0__BreakPoint_8, (MR_Integer) 0)));
      ssdb__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ssdb__env_ptr)->ssdb__delete_breakpoint_3_p_0_env_0__BreakPoint_8, (MR_Integer) 1)));
      ssdb__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ssdb__env_ptr)->ssdb__delete_breakpoint_3_p_0_env_0__BreakPoint_8, (MR_Integer) 2)));
      (ssdb__env_ptr)->ssdb__delete_breakpoint_3_p_0_env_0__succeeded = ((ssdb__env_ptr)->ssdb__delete_breakpoint_3_p_0_env_0__Num_4 == (ssdb__env_ptr)->ssdb__delete_breakpoint_3_p_0_env_0__Var_44);
      if ((ssdb__env_ptr)->ssdb__delete_breakpoint_3_p_0_env_0__succeeded)
        ssdb__delete_breakpoint_3_p_0_1(ssdb__env_ptr);
    }
  }
}

static void MR_CALL 
ssdb__delete_breakpoint_3_p_0_4(
  void * ssdb__env_ptr_arg)
{
  {
    struct ssdb__delete_breakpoint_3_p_0_env_0_s * ssdb__env_ptr = (struct ssdb__delete_breakpoint_3_p_0_env_0_s *) ssdb__env_ptr_arg;

    if (MR_builtin_setjmp((ssdb__env_ptr)->ssdb__delete_breakpoint_3_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__map__member_3_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0, (MR_Word) &ssdb__ssdb__type_ctor_info_breakpoint_0, (ssdb__env_ptr)->ssdb__delete_breakpoint_3_p_0_env_0__BreakPoints0_6, &(ssdb__env_ptr)->ssdb__delete_breakpoint_3_p_0_env_0__conv1_ProcId_7, &(ssdb__env_ptr)->ssdb__delete_breakpoint_3_p_0_env_0__conv0_BreakPoint_8, ssdb__delete_breakpoint_3_p_0_3, ssdb__env_ptr);
        }
        (ssdb__env_ptr)->ssdb__delete_breakpoint_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ssdb__env_ptr)->ssdb__delete_breakpoint_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ssdb__delete_breakpoint_3_p_0(
  MR_Integer ssdb__Num_4)
{
  {
    struct ssdb__delete_breakpoint_3_p_0_env_0_s ssdb__env;

    (ssdb__env).ssdb__delete_breakpoint_3_p_0_env_0__Num_4 = ssdb__Num_4;
{
#define MR_PROC_LABEL ssdb__delete_breakpoint_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__delete_breakpoint_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_breakpoints_map;


		;}
#undef MR_PROC_LABEL
	 (ssdb__env).ssdb__delete_breakpoint_3_p_0_env_0__BreakPoints0_6  = X;
}
{
#define MR_PROC_LABEL ssdb__delete_breakpoint_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    ssdb__delete_breakpoint_3_p_0_4(&ssdb__env);
    if ((ssdb__env).ssdb__delete_breakpoint_3_p_0_env_0__succeeded)
    {
      MR_Word ssdb__BreakPoints_9;
      MR_Box ssdb__Filter_10;
      MR_Box ssdb__Var_53;
      MR_Box ssdb__conv3_Filter_10;

      mercury__map__delete_3_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0, (MR_Word) &ssdb__ssdb__type_ctor_info_breakpoint_0, ((MR_Box) ((ssdb__env).ssdb__delete_breakpoint_3_p_0_env_0__ProcId_7)), (ssdb__env).ssdb__delete_breakpoint_3_p_0_env_0__BreakPoints0_6, &ssdb__BreakPoints_9);
{
#define MR_PROC_LABEL ssdb__delete_breakpoint_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__delete_breakpoint_3_p_0

	MR_Word X;

	X =  ssdb__BreakPoints_9 ;
		{
ssdb__mutable_variable_breakpoints_map = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__delete_breakpoint_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      ssdb__Var_53 = mercury__bitmap__init_1_f_0(((MR_Integer) 65535 + (MR_Integer) 1));
      mercury__map__foldl_values_4_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_breakpoint_0, (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0, (MR_Word) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0, (MR_Word) &ssdb_scalar_common_2[14], ssdb__BreakPoints_9, ((MR_Box) (ssdb__Var_53)), &ssdb__conv3_Filter_10);
      ssdb__Filter_10 = ((MR_Box) ssdb__conv3_Filter_10);
{
#define MR_PROC_LABEL ssdb__delete_breakpoint_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                    "ssdb__mutable_variable_breakpoints_filter_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__delete_breakpoint_3_p_0

	MR_BitmapPtr X;

	X = (MR_BitmapPtr) ssdb__Filter_10 ;
		{
ssdb__mutable_variable_breakpoints_filter = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__delete_breakpoint_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                    "ssdb__mutable_variable_breakpoints_filter_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      ssdb__print_breakpoint_3_p_0((ssdb__env).ssdb__delete_breakpoint_3_p_0_env_0__BreakPoint_8);
    }
    else
    {
      MR_String ssdb__Var_27;

      mercury__io__write_string_3_p_0((MR_String) "ssdb: break point #");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ssdb_scalar_common_3[1], (ssdb__env).ssdb__delete_breakpoint_3_p_0_env_0__Num_4, &ssdb__Var_27);
      mercury__io__write_string_3_p_0(ssdb__Var_27);
      mercury__io__write_string_3_p_0((MR_String) " does not exist.\n");
    }
  }
}

static void MR_CALL 
ssdb__execute_ssdb_disable_3_p_0_3(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3)
{
  {
    MR_Box ssdb__closure = ssdb__closure_arg;

    ssdb__print_breakpoint_3_p_0(((MR_Word) ssdb__wrapper_arg_1));
  }
}

static void MR_CALL 
ssdb__execute_ssdb_disable_3_p_0_2(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3)
{
  {
    MR_Box ssdb__closure = ssdb__closure_arg;
    MR_Box ssdb__conv1_STATE_VARIABLE_Bitmap_12;

    ssdb__set_breakpoints_filter_bits_3_p_0(((MR_Word) ssdb__wrapper_arg_1), ((MR_Box) ssdb__wrapper_arg_2), &ssdb__conv1_STATE_VARIABLE_Bitmap_12);
    *ssdb__wrapper_arg_3 = ((MR_Box) (ssdb__conv1_STATE_VARIABLE_Bitmap_12));
  }
}

static MR_Box MR_CALL 
ssdb__execute_ssdb_disable_3_p_0_1(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1)
{
  {
    MR_Box ssdb__wrapper_arg_2;
    MR_Box ssdb__closure = ssdb__closure_arg;
    MR_Word ssdb__conv0_LambdaHeadVar__2_15;

    ssdb__conv0_LambdaHeadVar__2_15 = ssdb__IntroducedFrom__func__modify_breakpoint_states__2783__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__closure, (MR_Integer) 3))), ((MR_Word) ssdb__wrapper_arg_1));
    ssdb__wrapper_arg_2 = ((MR_Box) (ssdb__conv0_LambdaHeadVar__2_15));
    return ssdb__wrapper_arg_2;
  }
}

static void MR_CALL 
ssdb__execute_ssdb_disable_3_p_0(
  MR_Word ssdb__Args_4)
{
  {
    MR_bool ssdb__succeeded;

    if ((ssdb__Args_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "ssdb: command requires argument.\n");
    }
    else
    {
      MR_Word ssdb__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Args_4, (MR_Integer) 1)));
      MR_String ssdb__Var_23 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Args_4, (MR_Integer) 0)));

      if ((ssdb__Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ssdb__succeeded = (strcmp(ssdb__Var_23, (MR_String) "*") == 0);
        if (ssdb__succeeded)
        {
          MR_Word ssdb__TypeCtorInfo_23_48;
          MR_Word ssdb__BreakPoints0_33;
          MR_Word ssdb__BreakPoints_36;
          MR_Box ssdb__Filter_37;
          MR_Box ssdb__Var_59;
          MR_Box ssdb__conv2_Filter_37;

{
#define MR_PROC_LABEL ssdb__execute_ssdb_disable_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_disable_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_breakpoints_map;


		;}
#undef MR_PROC_LABEL
	 ssdb__BreakPoints0_33  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_disable_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__TypeCtorInfo_23_48 = (MR_Word) &ssdb__ssdb__type_ctor_info_breakpoint_0;
          ssdb__BreakPoints_36 = mercury__map__map_values_only_2_f_0(ssdb__TypeCtorInfo_23_48, ssdb__TypeCtorInfo_23_48, (MR_Word) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0, (MR_Word) &ssdb_scalar_common_14[2], ssdb__BreakPoints0_33);
{
#define MR_PROC_LABEL ssdb__execute_ssdb_disable_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_disable_3_p_0

	MR_Word X;

	X =  ssdb__BreakPoints_36 ;
		{
ssdb__mutable_variable_breakpoints_map = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_disable_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__Var_59 = mercury__bitmap__init_1_f_0(((MR_Integer) 65535 + (MR_Integer) 1));
          mercury__map__foldl_values_4_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_breakpoint_0, (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0, (MR_Word) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0, (MR_Word) &ssdb_scalar_common_2[12], ssdb__BreakPoints_36, ((MR_Box) (ssdb__Var_59)), &ssdb__conv2_Filter_37);
          ssdb__Filter_37 = ((MR_Box) ssdb__conv2_Filter_37);
{
#define MR_PROC_LABEL ssdb__execute_ssdb_disable_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                    "ssdb__mutable_variable_breakpoints_filter_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_disable_3_p_0

	MR_BitmapPtr X;

	X = (MR_BitmapPtr) ssdb__Filter_37 ;
		{
ssdb__mutable_variable_breakpoints_filter = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_disable_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                    "ssdb__mutable_variable_breakpoints_filter_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0, (MR_Word) &ssdb__ssdb__type_ctor_info_breakpoint_0, ssdb__BreakPoints_36);
          if (ssdb__succeeded)
          {
            mercury__io__write_string_3_p_0((MR_String) "There are no break points.\n");
          }
          else
          {
            MR_Word ssdb__TypeCtorInfo_17_85 = (MR_Word) &ssdb__ssdb__type_ctor_info_breakpoint_0;
            MR_Word ssdb__SortedBreakPoints_76;
            MR_Word ssdb__Var_79;
            MR_Box ssdb__conv3_STATE_VARIABLE_IO_12;

            ssdb__Var_79 = mercury__map__values_1_f_0((MR_Word) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0, ssdb__TypeCtorInfo_17_85, ssdb__BreakPoints_36);
            mercury__list__sort_2_p_0(ssdb__TypeCtorInfo_17_85, ssdb__Var_79, &ssdb__SortedBreakPoints_76);
            mercury__list__foldl_4_p_2(ssdb__TypeCtorInfo_17_85, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ssdb_scalar_common_2[13], ssdb__SortedBreakPoints_76, ((MR_Box) ((MR_Integer) 0)), &ssdb__conv3_STATE_VARIABLE_IO_12);
          }
        }
        else
        {
          MR_Integer ssdb__Num_7;
          MR_Integer ssdb__Var_92;

          ssdb__succeeded = mercury__string__to_int_2_p_0(ssdb__Var_23, &ssdb__Num_7);
          if (ssdb__succeeded)
          {
            ssdb__Var_92 = (MR_Integer) 0;
            ssdb__succeeded = (ssdb__Num_7 >= ssdb__Var_92);
          }
          if (ssdb__succeeded)
          {
            ssdb__modify_breakpoint_state_4_p_0(ssdb__Num_7, (MR_Integer) 1);
          }
          else
          {
            mercury__io__write_string_3_p_0((MR_String) "ssdb: invalid argument to command.\n");
          }
        }
      }
      else
        ssdb__print_too_many_arguments_2_p_0();
    }
  }
}

static void MR_CALL 
ssdb__execute_ssdb_enable_3_p_0_3(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3)
{
  {
    MR_Box ssdb__closure = ssdb__closure_arg;

    ssdb__print_breakpoint_3_p_0(((MR_Word) ssdb__wrapper_arg_1));
  }
}

static void MR_CALL 
ssdb__execute_ssdb_enable_3_p_0_2(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3)
{
  {
    MR_Box ssdb__closure = ssdb__closure_arg;
    MR_Box ssdb__conv1_STATE_VARIABLE_Bitmap_12;

    ssdb__set_breakpoints_filter_bits_3_p_0(((MR_Word) ssdb__wrapper_arg_1), ((MR_Box) ssdb__wrapper_arg_2), &ssdb__conv1_STATE_VARIABLE_Bitmap_12);
    *ssdb__wrapper_arg_3 = ((MR_Box) (ssdb__conv1_STATE_VARIABLE_Bitmap_12));
  }
}

static MR_Box MR_CALL 
ssdb__execute_ssdb_enable_3_p_0_1(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1)
{
  {
    MR_Box ssdb__wrapper_arg_2;
    MR_Box ssdb__closure = ssdb__closure_arg;
    MR_Word ssdb__conv0_LambdaHeadVar__2_15;

    ssdb__conv0_LambdaHeadVar__2_15 = ssdb__IntroducedFrom__func__modify_breakpoint_states__2783__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__closure, (MR_Integer) 3))), ((MR_Word) ssdb__wrapper_arg_1));
    ssdb__wrapper_arg_2 = ((MR_Box) (ssdb__conv0_LambdaHeadVar__2_15));
    return ssdb__wrapper_arg_2;
  }
}

static void MR_CALL 
ssdb__execute_ssdb_enable_3_p_0(
  MR_Word ssdb__Args_4)
{
  {
    MR_bool ssdb__succeeded;

    if ((ssdb__Args_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "ssdb: command requires argument.\n");
    }
    else
    {
      MR_Word ssdb__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Args_4, (MR_Integer) 1)));
      MR_String ssdb__Var_23 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Args_4, (MR_Integer) 0)));

      if ((ssdb__Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ssdb__succeeded = (strcmp(ssdb__Var_23, (MR_String) "*") == 0);
        if (ssdb__succeeded)
        {
          MR_Word ssdb__TypeCtorInfo_23_48;
          MR_Word ssdb__BreakPoints0_33;
          MR_Word ssdb__BreakPoints_36;
          MR_Box ssdb__Filter_37;
          MR_Box ssdb__Var_59;
          MR_Box ssdb__conv2_Filter_37;

{
#define MR_PROC_LABEL ssdb__execute_ssdb_enable_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_enable_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_breakpoints_map;


		;}
#undef MR_PROC_LABEL
	 ssdb__BreakPoints0_33  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_enable_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__TypeCtorInfo_23_48 = (MR_Word) &ssdb__ssdb__type_ctor_info_breakpoint_0;
          ssdb__BreakPoints_36 = mercury__map__map_values_only_2_f_0(ssdb__TypeCtorInfo_23_48, ssdb__TypeCtorInfo_23_48, (MR_Word) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0, (MR_Word) &ssdb_scalar_common_14[1], ssdb__BreakPoints0_33);
{
#define MR_PROC_LABEL ssdb__execute_ssdb_enable_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_enable_3_p_0

	MR_Word X;

	X =  ssdb__BreakPoints_36 ;
		{
ssdb__mutable_variable_breakpoints_map = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_enable_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__Var_59 = mercury__bitmap__init_1_f_0(((MR_Integer) 65535 + (MR_Integer) 1));
          mercury__map__foldl_values_4_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_breakpoint_0, (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0, (MR_Word) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0, (MR_Word) &ssdb_scalar_common_2[10], ssdb__BreakPoints_36, ((MR_Box) (ssdb__Var_59)), &ssdb__conv2_Filter_37);
          ssdb__Filter_37 = ((MR_Box) ssdb__conv2_Filter_37);
{
#define MR_PROC_LABEL ssdb__execute_ssdb_enable_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                    "ssdb__mutable_variable_breakpoints_filter_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_enable_3_p_0

	MR_BitmapPtr X;

	X = (MR_BitmapPtr) ssdb__Filter_37 ;
		{
ssdb__mutable_variable_breakpoints_filter = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_enable_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                    "ssdb__mutable_variable_breakpoints_filter_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0, (MR_Word) &ssdb__ssdb__type_ctor_info_breakpoint_0, ssdb__BreakPoints_36);
          if (ssdb__succeeded)
          {
            mercury__io__write_string_3_p_0((MR_String) "There are no break points.\n");
          }
          else
          {
            MR_Word ssdb__TypeCtorInfo_17_85 = (MR_Word) &ssdb__ssdb__type_ctor_info_breakpoint_0;
            MR_Word ssdb__SortedBreakPoints_76;
            MR_Word ssdb__Var_79;
            MR_Box ssdb__conv3_STATE_VARIABLE_IO_12;

            ssdb__Var_79 = mercury__map__values_1_f_0((MR_Word) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0, ssdb__TypeCtorInfo_17_85, ssdb__BreakPoints_36);
            mercury__list__sort_2_p_0(ssdb__TypeCtorInfo_17_85, ssdb__Var_79, &ssdb__SortedBreakPoints_76);
            mercury__list__foldl_4_p_2(ssdb__TypeCtorInfo_17_85, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ssdb_scalar_common_2[11], ssdb__SortedBreakPoints_76, ((MR_Box) ((MR_Integer) 0)), &ssdb__conv3_STATE_VARIABLE_IO_12);
          }
        }
        else
        {
          MR_Integer ssdb__Num_7;
          MR_Integer ssdb__Var_92;

          ssdb__succeeded = mercury__string__to_int_2_p_0(ssdb__Var_23, &ssdb__Num_7);
          if (ssdb__succeeded)
          {
            ssdb__Var_92 = (MR_Integer) 0;
            ssdb__succeeded = (ssdb__Num_7 >= ssdb__Var_92);
          }
          if (ssdb__succeeded)
          {
            ssdb__modify_breakpoint_state_4_p_0(ssdb__Num_7, (MR_Integer) 0);
          }
          else
          {
            mercury__io__write_string_3_p_0((MR_String) "ssdb: invalid argument to command.\n");
          }
        }
      }
      else
        ssdb__print_too_many_arguments_2_p_0();
    }
  }
}

static void MR_CALL 
ssdb__modify_breakpoint_state_4_p_0_5(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3)
{
  {
    MR_Box ssdb__closure = ssdb__closure_arg;
    MR_Box ssdb__conv2_STATE_VARIABLE_Bitmap_12;

    ssdb__set_breakpoints_filter_bits_3_p_0(((MR_Word) ssdb__wrapper_arg_1), ((MR_Box) ssdb__wrapper_arg_2), &ssdb__conv2_STATE_VARIABLE_Bitmap_12);
    *ssdb__wrapper_arg_3 = ((MR_Box) (ssdb__conv2_STATE_VARIABLE_Bitmap_12));
  }
}

static void MR_CALL 
ssdb__modify_breakpoint_state_4_p_0_1(
  void * ssdb__env_ptr_arg)
{
  {
    struct ssdb__modify_breakpoint_state_4_p_0_env_0_s * ssdb__env_ptr = (struct ssdb__modify_breakpoint_state_4_p_0_env_0_s *) ssdb__env_ptr_arg;

    MR_builtin_longjmp((ssdb__env_ptr)->ssdb__modify_breakpoint_state_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ssdb__modify_breakpoint_state_4_p_0_3(
  void * ssdb__env_ptr_arg)
{
  {
    struct ssdb__modify_breakpoint_state_4_p_0_env_0_s * ssdb__env_ptr = (struct ssdb__modify_breakpoint_state_4_p_0_env_0_s *) ssdb__env_ptr_arg;

    (ssdb__env_ptr)->ssdb__modify_breakpoint_state_4_p_0_env_0__Key_9 = ((MR_Word) (ssdb__env_ptr)->ssdb__modify_breakpoint_state_4_p_0_env_0__conv1_Key_9);
    (ssdb__env_ptr)->ssdb__modify_breakpoint_state_4_p_0_env_0__BreakPoint0_10 = ((MR_Word) (ssdb__env_ptr)->ssdb__modify_breakpoint_state_4_p_0_env_0__conv0_BreakPoint0_10);
    ssdb__modify_breakpoint_state_4_p_0_2(ssdb__env_ptr);
  }
}

static void MR_CALL 
ssdb__modify_breakpoint_state_4_p_0_2(
  void * ssdb__env_ptr_arg)
{
  {
    struct ssdb__modify_breakpoint_state_4_p_0_env_0_s * ssdb__env_ptr = (struct ssdb__modify_breakpoint_state_4_p_0_env_0_s *) ssdb__env_ptr_arg;

    {
      MR_Word ssdb__Var_51;
      MR_Word ssdb__Var_52;

      (ssdb__env_ptr)->ssdb__modify_breakpoint_state_4_p_0_env_0__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (ssdb__env_ptr)->ssdb__modify_breakpoint_state_4_p_0_env_0__BreakPoint0_10, (MR_Integer) 0)));
      ssdb__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ssdb__env_ptr)->ssdb__modify_breakpoint_state_4_p_0_env_0__BreakPoint0_10, (MR_Integer) 1)));
      ssdb__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ssdb__env_ptr)->ssdb__modify_breakpoint_state_4_p_0_env_0__BreakPoint0_10, (MR_Integer) 2)));
      (ssdb__env_ptr)->ssdb__modify_breakpoint_state_4_p_0_env_0__succeeded = ((ssdb__env_ptr)->ssdb__modify_breakpoint_state_4_p_0_env_0__Num_5 == (ssdb__env_ptr)->ssdb__modify_breakpoint_state_4_p_0_env_0__Var_50);
      if ((ssdb__env_ptr)->ssdb__modify_breakpoint_state_4_p_0_env_0__succeeded)
        ssdb__modify_breakpoint_state_4_p_0_1(ssdb__env_ptr);
    }
  }
}

static void MR_CALL 
ssdb__modify_breakpoint_state_4_p_0_4(
  void * ssdb__env_ptr_arg)
{
  {
    struct ssdb__modify_breakpoint_state_4_p_0_env_0_s * ssdb__env_ptr = (struct ssdb__modify_breakpoint_state_4_p_0_env_0_s *) ssdb__env_ptr_arg;

    if (MR_builtin_setjmp((ssdb__env_ptr)->ssdb__modify_breakpoint_state_4_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__map__member_3_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0, (MR_Word) &ssdb__ssdb__type_ctor_info_breakpoint_0, (ssdb__env_ptr)->ssdb__modify_breakpoint_state_4_p_0_env_0__BreakPoints0_8, &(ssdb__env_ptr)->ssdb__modify_breakpoint_state_4_p_0_env_0__conv1_Key_9, &(ssdb__env_ptr)->ssdb__modify_breakpoint_state_4_p_0_env_0__conv0_BreakPoint0_10, ssdb__modify_breakpoint_state_4_p_0_3, ssdb__env_ptr);
        }
        (ssdb__env_ptr)->ssdb__modify_breakpoint_state_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ssdb__env_ptr)->ssdb__modify_breakpoint_state_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ssdb__modify_breakpoint_state_4_p_0(
  MR_Integer ssdb__Num_5,
  MR_Word ssdb__State_6)
{
  {
    struct ssdb__modify_breakpoint_state_4_p_0_env_0_s ssdb__env;

    (ssdb__env).ssdb__modify_breakpoint_state_4_p_0_env_0__Num_5 = ssdb__Num_5;
{
#define MR_PROC_LABEL ssdb__modify_breakpoint_state_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__modify_breakpoint_state_4_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_breakpoints_map;


		;}
#undef MR_PROC_LABEL
	 (ssdb__env).ssdb__modify_breakpoint_state_4_p_0_env_0__BreakPoints0_8  = X;
}
{
#define MR_PROC_LABEL ssdb__modify_breakpoint_state_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    ssdb__modify_breakpoint_state_4_p_0_4(&ssdb__env);
    if ((ssdb__env).ssdb__modify_breakpoint_state_4_p_0_env_0__succeeded)
    {
      MR_Word ssdb__BreakPoint_11;
      MR_Word ssdb__BreakPoints_12;
      MR_Box ssdb__Filter_13;
      MR_Box ssdb__Var_59;
      MR_Integer ssdb__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (ssdb__env).ssdb__modify_breakpoint_state_4_p_0_env_0__BreakPoint0_10, (MR_Integer) 0)));
      MR_Word ssdb__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ssdb__env).ssdb__modify_breakpoint_state_4_p_0_env_0__BreakPoint0_10, (MR_Integer) 1)));
      MR_Word ssdb__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ssdb__env).ssdb__modify_breakpoint_state_4_p_0_env_0__BreakPoint0_10, (MR_Integer) 2)));
      MR_Box ssdb__conv3_Filter_13;

      {
        ssdb__BreakPoint_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ssdb__BreakPoint_11, 0) = ((MR_Box) (ssdb__Var_25));
        MR_hl_field(MR_mktag(0), ssdb__BreakPoint_11, 1) = ((MR_Box) (ssdb__Var_26));
        MR_hl_field(MR_mktag(0), ssdb__BreakPoint_11, 2) = ((MR_Box) (ssdb__State_6));
      }
      mercury__map__det_update_4_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0, (MR_Word) &ssdb__ssdb__type_ctor_info_breakpoint_0, ((MR_Box) ((ssdb__env).ssdb__modify_breakpoint_state_4_p_0_env_0__Key_9)), ((MR_Box) (ssdb__BreakPoint_11)), (ssdb__env).ssdb__modify_breakpoint_state_4_p_0_env_0__BreakPoints0_8, &ssdb__BreakPoints_12);
{
#define MR_PROC_LABEL ssdb__modify_breakpoint_state_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__modify_breakpoint_state_4_p_0

	MR_Word X;

	X =  ssdb__BreakPoints_12 ;
		{
ssdb__mutable_variable_breakpoints_map = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__modify_breakpoint_state_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      ssdb__Var_59 = mercury__bitmap__init_1_f_0(((MR_Integer) 65535 + (MR_Integer) 1));
      mercury__map__foldl_values_4_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_breakpoint_0, (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0, (MR_Word) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0, (MR_Word) &ssdb_scalar_common_2[9], ssdb__BreakPoints_12, ((MR_Box) (ssdb__Var_59)), &ssdb__conv3_Filter_13);
      ssdb__Filter_13 = ((MR_Box) ssdb__conv3_Filter_13);
{
#define MR_PROC_LABEL ssdb__modify_breakpoint_state_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                    "ssdb__mutable_variable_breakpoints_filter_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__modify_breakpoint_state_4_p_0

	MR_BitmapPtr X;

	X = (MR_BitmapPtr) ssdb__Filter_13 ;
		{
ssdb__mutable_variable_breakpoints_filter = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__modify_breakpoint_state_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                    "ssdb__mutable_variable_breakpoints_filter_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      ssdb__print_breakpoint_3_p_0(ssdb__BreakPoint_11);
    }
    else
    {
      MR_String ssdb__Var_33;

      mercury__io__write_string_3_p_0((MR_String) "ssdb: break point #");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ssdb_scalar_common_3[1], (ssdb__env).ssdb__modify_breakpoint_state_4_p_0_env_0__Num_5, &ssdb__Var_33);
      mercury__io__write_string_3_p_0(ssdb__Var_33);
      mercury__io__write_string_3_p_0((MR_String) " does not exist.\n");
    }
  }
}

static MR_bool MR_CALL 
ssdb__execute_ssdb_break_3_p_0_2(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1)
{
  {
    MR_bool ssdb__succeeded;
    MR_Box ssdb__closure = ssdb__closure_arg;

    ssdb__succeeded = ssdb__non_dot_1_p_0(((MR_Char) (MR_Word) ssdb__wrapper_arg_1));
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb__execute_ssdb_break_3_p_0_1(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3)
{
  {
    MR_Box ssdb__closure = ssdb__closure_arg;

    ssdb__print_breakpoint_3_p_0(((MR_Word) ssdb__wrapper_arg_1));
  }
}

static void MR_CALL 
ssdb__execute_ssdb_break_3_p_0(
  MR_Word ssdb__Args_4)
{
  {
    MR_bool ssdb__succeeded;

    if ((ssdb__Args_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "ssdb: command requires argument.\n");
    }
    else
    {
      MR_Word ssdb__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Args_4, (MR_Integer) 1)));
      MR_String ssdb__Var_26 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Args_4, (MR_Integer) 0)));

      if ((ssdb__Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ssdb__succeeded = (strcmp(ssdb__Var_26, (MR_String) "info") == 0);
        if (ssdb__succeeded)
        {
          MR_Word ssdb__BreakPoints_7;

{
#define MR_PROC_LABEL ssdb__execute_ssdb_break_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_break_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_breakpoints_map;


		;}
#undef MR_PROC_LABEL
	 ssdb__BreakPoints_7  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_break_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0, (MR_Word) &ssdb__ssdb__type_ctor_info_breakpoint_0, ssdb__BreakPoints_7);
          if (ssdb__succeeded)
          {
            mercury__io__write_string_3_p_0((MR_String) "There are no break points.\n");
          }
          else
          {
            MR_Word ssdb__TypeCtorInfo_17_48 = (MR_Word) &ssdb__ssdb__type_ctor_info_breakpoint_0;
            MR_Word ssdb__SortedBreakPoints_39;
            MR_Word ssdb__Var_42;
            MR_Box ssdb__conv0_STATE_VARIABLE_IO_15;

            ssdb__Var_42 = mercury__map__values_1_f_0((MR_Word) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0, ssdb__TypeCtorInfo_17_48, ssdb__BreakPoints_7);
            mercury__list__sort_2_p_0(ssdb__TypeCtorInfo_17_48, ssdb__Var_42, &ssdb__SortedBreakPoints_39);
            mercury__list__foldl_4_p_2(ssdb__TypeCtorInfo_17_48, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ssdb_scalar_common_2[7], ssdb__SortedBreakPoints_39, ((MR_Box) ((MR_Integer) 0)), &ssdb__conv0_STATE_VARIABLE_IO_15);
          }
        }
        else
        {
          MR_String ssdb__ModuleName_8;
          MR_String ssdb__PredName_9;
          MR_String ssdb__ModuleDot_56;
          MR_Integer ssdb__Sep_57;
          MR_Integer ssdb__Var_59;
          MR_Integer ssdb__Var_61;
          MR_Integer ssdb__Var_62;

          ssdb__ModuleDot_56 = mercury__string__rstrip_pred_2_f_0((MR_Word) &ssdb_scalar_common_2[8], ssdb__Var_26);
          ssdb__Sep_57 = mercury__string__length_1_f_0(ssdb__ModuleDot_56);
          ssdb__Var_59 = (ssdb__Sep_57 - (MR_Integer) 1);
          ssdb__ModuleName_8 = mercury__string__left_2_f_0(ssdb__Var_26, ssdb__Var_59);
          ssdb__succeeded = (strcmp(ssdb__ModuleName_8, (MR_String) "") == 0);
          ssdb__succeeded = !(ssdb__succeeded);
          if (ssdb__succeeded)
          {
            ssdb__Var_62 = mercury__string__length_1_f_0(ssdb__Var_26);
            ssdb__Var_61 = (ssdb__Var_62 - ssdb__Sep_57);
            ssdb__PredName_9 = mercury__string__right_2_f_0(ssdb__Var_26, ssdb__Var_61);
            ssdb__succeeded = (strcmp(ssdb__PredName_9, (MR_String) "") == 0);
            ssdb__succeeded = !(ssdb__succeeded);
          }
          if (ssdb__succeeded)
          {
            MR_Word ssdb__ProcId_10;

            {
              ssdb__ProcId_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ssdb__ProcId_10, 0) = ((MR_Box) (ssdb__ModuleName_8));
              MR_hl_field(MR_mktag(0), ssdb__ProcId_10, 1) = ((MR_Box) (ssdb__PredName_9));
            }
            ssdb__add_breakpoint_3_p_0(ssdb__ProcId_10);
          }
          else
          {
            mercury__io__write_string_3_p_0((MR_String) "ssdb: invalid argument.\n");
          }
        }
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "ssdb: too many arguments to command.\n");
      }
    }
  }
}

static MR_Box MR_CALL 
ssdb__add_breakpoint_3_p_0_1(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1)
{
  {
    MR_Box ssdb__wrapper_arg_2;
    MR_Box ssdb__closure = ssdb__closure_arg;
    MR_Integer ssdb__conv0_HeadVar__2_2;

    ssdb__conv0_HeadVar__2_2 = ssdb__bp_number_1_f_0(((MR_Word) ssdb__wrapper_arg_1));
    ssdb__wrapper_arg_2 = ((MR_Box) (ssdb__conv0_HeadVar__2_2));
    return ssdb__wrapper_arg_2;
  }
}

static void MR_CALL 
ssdb__add_breakpoint_3_p_0(
  MR_Word ssdb__ProcId_4)
{
  {
    MR_bool ssdb__succeeded;
    MR_Word ssdb__BreakPoints0_6;

{
#define MR_PROC_LABEL ssdb__add_breakpoint_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__add_breakpoint_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_breakpoints_map;


		;}
#undef MR_PROC_LABEL
	 ssdb__BreakPoints0_6  = X;
}
{
#define MR_PROC_LABEL ssdb__add_breakpoint_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    ssdb__succeeded = mercury__map__contains_2_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0, (MR_Word) &ssdb__ssdb__type_ctor_info_breakpoint_0, ssdb__BreakPoints0_6, ((MR_Box) (ssdb__ProcId_4)));
    if (ssdb__succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "The breakpoint already exists.\n");
    }
    else
    {
      MR_Word ssdb__TypeCtorInfo_11_37 = (MR_Word) &ssdb__ssdb__type_ctor_info_breakpoint_0;
      MR_Word ssdb__TypeCtorInfo_12_38;
      MR_Integer ssdb__Number_7;
      MR_Word ssdb__NewBreakPoint_8;
      MR_Word ssdb__BreakPoints_9;
      MR_Box ssdb__Filter0_10;
      MR_Box ssdb__Filter_11;
      MR_Word ssdb__BreakPoints_31;
      MR_Word ssdb__Numbers_32;
      MR_Word ssdb__SortedNumbers_33;

      mercury__map__values_2_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0, ssdb__TypeCtorInfo_11_37, ssdb__BreakPoints0_6, &ssdb__BreakPoints_31);
      ssdb__TypeCtorInfo_12_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      ssdb__Numbers_32 = mercury__list__map_2_f_0(ssdb__TypeCtorInfo_11_37, ssdb__TypeCtorInfo_12_38, (MR_Word) &ssdb_scalar_common_2[6], ssdb__BreakPoints_31);
      mercury__list__sort_2_p_0(ssdb__TypeCtorInfo_12_38, ssdb__Numbers_32, &ssdb__SortedNumbers_33);
      ssdb__first_unseen_3_p_0(ssdb__SortedNumbers_33, (MR_Integer) 0, &ssdb__Number_7);
      {
        ssdb__NewBreakPoint_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ssdb__NewBreakPoint_8, 0) = ((MR_Box) (ssdb__Number_7));
        MR_hl_field(MR_mktag(0), ssdb__NewBreakPoint_8, 1) = ((MR_Box) (ssdb__ProcId_4));
        MR_hl_field(MR_mktag(0), ssdb__NewBreakPoint_8, 2) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__map__det_insert_4_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0, (MR_Word) &ssdb__ssdb__type_ctor_info_breakpoint_0, ((MR_Box) (ssdb__ProcId_4)), ((MR_Box) (ssdb__NewBreakPoint_8)), ssdb__BreakPoints0_6, &ssdb__BreakPoints_9);
{
#define MR_PROC_LABEL ssdb__add_breakpoint_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__add_breakpoint_3_p_0

	MR_Word X;

	X =  ssdb__BreakPoints_9 ;
		{
ssdb__mutable_variable_breakpoints_map = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__add_breakpoint_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__add_breakpoint_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                    "ssdb__mutable_variable_breakpoints_filter_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__add_breakpoint_3_p_0

	MR_BitmapPtr X;

		{
X = ssdb__mutable_variable_breakpoints_filter;


		;}
#undef MR_PROC_LABEL
	 ssdb__Filter0_10  = (MR_Box) X;
}
{
#define MR_PROC_LABEL ssdb__add_breakpoint_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                    "ssdb__mutable_variable_breakpoints_filter_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      ssdb__set_breakpoints_filter_bits_3_p_0(ssdb__NewBreakPoint_8, ssdb__Filter0_10, &ssdb__Filter_11);
{
#define MR_PROC_LABEL ssdb__add_breakpoint_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                    "ssdb__mutable_variable_breakpoints_filter_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__add_breakpoint_3_p_0

	MR_BitmapPtr X;

	X = (MR_BitmapPtr) ssdb__Filter_11 ;
		{
ssdb__mutable_variable_breakpoints_filter = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__add_breakpoint_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                    "ssdb__mutable_variable_breakpoints_filter_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      ssdb__print_breakpoint_3_p_0(ssdb__NewBreakPoint_8);
    }
  }
}

static void MR_CALL 
ssdb__print_breakpoint_3_p_0(
  MR_Word ssdb__BreakPoint_4)
{
  {
    MR_Integer ssdb__Num_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__BreakPoint_4, (MR_Integer) 0)));
    MR_Word ssdb__ProcId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__BreakPoint_4, (MR_Integer) 1)));
    MR_Word ssdb__State_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__BreakPoint_4, (MR_Integer) 2)));
    MR_String ssdb__ModuleName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__ProcId_7, (MR_Integer) 0)));
    MR_String ssdb__PredName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__ProcId_7, (MR_Integer) 1)));
    MR_String ssdb__Enabled_11;
    MR_String ssdb__Var_26;

    switch (ssdb__State_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ssdb__Enabled_11 = (MR_String) "-";
        break;
      case (MR_Integer) 0:
        ssdb__Enabled_11 = (MR_String) "+";
        break;
    }
    mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) &ssdb_scalar_common_3[1], (MR_Integer) 2, ssdb__Num_6, &ssdb__Var_26);
    mercury__io__write_string_3_p_0(ssdb__Var_26);
    mercury__io__write_string_3_p_0((MR_String) ": ");
    mercury__io__write_string_3_p_0(ssdb__Enabled_11);
    mercury__io__write_string_3_p_0((MR_String) " ");
    mercury__io__write_string_3_p_0(ssdb__ModuleName_9);
    mercury__io__write_string_3_p_0((MR_String) ".");
    mercury__io__write_string_3_p_0(ssdb__PredName_10);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

static void MR_CALL 
ssdb__set_breakpoints_filter_bits_3_p_0(
  MR_Word ssdb__BreakPoint_4,
  MR_Box ssdb__STATE_VARIABLE_Bitmap_0_11,
  MR_Box * ssdb__STATE_VARIABLE_Bitmap_12)
{
  {
    MR_Word ssdb__ProcId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__BreakPoint_4, (MR_Integer) 1)));
    MR_Word ssdb__State_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__BreakPoint_4, (MR_Integer) 2)));
    MR_Integer ssdb___Num_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__BreakPoint_4, (MR_Integer) 0)));

    switch (ssdb__State_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *ssdb__STATE_VARIABLE_Bitmap_12 = ssdb__STATE_VARIABLE_Bitmap_0_11;
        break;
      case (MR_Integer) 0:
        {
          MR_String ssdb__ModuleName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__ProcId_7, (MR_Integer) 0)));
          MR_String ssdb__ProcName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__ProcId_7, (MR_Integer) 1)));
          MR_Integer ssdb__Var_13;
          MR_Box ssdb__STATE_VARIABLE_Bitmap_14_14;
          MR_Integer ssdb__Var_15;
          MR_Integer ssdb__Var_18;
          MR_Integer ssdb__Var_22;

          ssdb__Var_18 = mercury__string__hash_1_f_0(ssdb__ModuleName_9);
          ssdb__Var_13 = (ssdb__Var_18 & (MR_Integer) 65535);
          mercury__bitmap__set_3_p_0(ssdb__Var_13, ssdb__STATE_VARIABLE_Bitmap_0_11, &ssdb__STATE_VARIABLE_Bitmap_14_14);
          ssdb__Var_22 = mercury__string__hash_1_f_0(ssdb__ProcName_10);
          ssdb__Var_15 = (ssdb__Var_22 & (MR_Integer) 65535);
          mercury__bitmap__set_3_p_0(ssdb__Var_15, ssdb__STATE_VARIABLE_Bitmap_14_14, ssdb__STATE_VARIABLE_Bitmap_12);
        }
        break;
    }
  }
}

static void MR_CALL 
ssdb__first_unseen_3_p_0(
  MR_Word ssdb__HeadVar__1_1,
  MR_Integer ssdb__HeadVar__2_2,
  MR_Integer * ssdb__N_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ssdb__succeeded;

      if ((ssdb__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *ssdb__N_3 = ssdb__HeadVar__2_2;
      else
      {
        MR_Integer ssdb__H_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ssdb__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__1_1, (MR_Integer) 1)));

        ssdb__succeeded = (ssdb__H_5 == ssdb__HeadVar__2_2);
        if (ssdb__succeeded)
        {
          MR_Integer ssdb__Var_9 = (ssdb__HeadVar__2_2 + (MR_Integer) 1);

          /* direct tailcall eliminated */
          {
            MR_Word ssdb__next_value_of_HeadVar__1_1 = ssdb__T_6;
            MR_Integer ssdb__next_value_of_HeadVar__2_2 = ssdb__Var_9;

            ssdb__HeadVar__1_1 = ssdb__next_value_of_HeadVar__1_1;
            ssdb__HeadVar__2_2 = ssdb__next_value_of_HeadVar__2_2;
          }
          continue;
        }
        else
          *ssdb__N_3 = ssdb__HeadVar__2_2;
      }
    }
    break;
  }
}

static void MR_CALL 
ssdb__execute_ssdb_list_context_lines_3_p_0(
  MR_Word ssdb__Args_4)
{
  {
    MR_bool ssdb__succeeded;

    if ((ssdb__Args_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word ssdb__Params_6;
      MR_Integer ssdb__Lines_7;
      MR_String ssdb__Var_39;
      MR_Word ssdb__Var_31;

{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_context_lines_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_context_lines_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_list_params;


		;}
#undef MR_PROC_LABEL
	 ssdb__Params_6  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_context_lines_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      ssdb__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Params_6, (MR_Integer) 0)));
      ssdb__Lines_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Params_6, (MR_Integer) 1)));
      mercury__io__write_string_3_p_0((MR_String) "Printing ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ssdb_scalar_common_3[1], ssdb__Lines_7, &ssdb__Var_39);
      mercury__io__write_string_3_p_0(ssdb__Var_39);
      mercury__io__write_string_3_p_0((MR_String) " lines around each context listing.\n");
    }
    else
    {
      MR_Word ssdb__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Args_4, (MR_Integer) 1)));
      MR_String ssdb__Var_35 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Args_4, (MR_Integer) 0)));

      if ((ssdb__Var_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer ssdb__N_9;
        MR_Integer ssdb__Var_52;

        ssdb__succeeded = mercury__string__to_int_2_p_0(ssdb__Var_35, &ssdb__N_9);
        if (ssdb__succeeded)
        {
          ssdb__Var_52 = (MR_Integer) 0;
          ssdb__succeeded = (ssdb__N_9 >= ssdb__Var_52);
        }
        if (ssdb__succeeded)
        {
          MR_Word ssdb__Params0_10;
          MR_Word ssdb__Params_28;
          MR_Word ssdb__Var_32;
          MR_Integer ssdb__Var_33;

{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_context_lines_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_context_lines_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_list_params;


		;}
#undef MR_PROC_LABEL
	 ssdb__Params0_10  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_context_lines_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Params0_10, (MR_Integer) 0)));
          ssdb__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Params0_10, (MR_Integer) 1)));
          {
            ssdb__Params_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ssdb__Params_28, 0) = ((MR_Box) (ssdb__Var_32));
            MR_hl_field(MR_mktag(0), ssdb__Params_28, 1) = ((MR_Box) (ssdb__N_9));
          }
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_context_lines_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_context_lines_3_p_0

	MR_Word X;

	X =  ssdb__Params_28 ;
		{
ssdb__mutable_variable_list_params = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_context_lines_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "ssdb: command requires integer argument.\n");
        }
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "ssdb: too many arguments to command.\n");
      }
    }
  }
}

static void MR_CALL 
ssdb__execute_ssdb_pop_list_dir_3_p_0(
  MR_Word ssdb__Args_4)
{
  if ((ssdb__Args_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    MR_Word ssdb__Params0_6;
    MR_Word ssdb__ListPath0_7;
    MR_Word ssdb__ListPath_8;
    MR_Word ssdb__Params_9;
    MR_Integer ssdb__Var_17;
    MR_Integer ssdb__Var_19;
    MR_Word ssdb__Var_18;

{
#define MR_PROC_LABEL ssdb__execute_ssdb_pop_list_dir_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_pop_list_dir_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_list_params;


		;}
#undef MR_PROC_LABEL
	 ssdb__Params0_6  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_pop_list_dir_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    ssdb__ListPath0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Params0_6, (MR_Integer) 0)));
    ssdb__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Params0_6, (MR_Integer) 1)));
    mdb__listing__pop_list_path_2_p_0(ssdb__ListPath0_7, &ssdb__ListPath_8);
    ssdb__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Params0_6, (MR_Integer) 0)));
    ssdb__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Params0_6, (MR_Integer) 1)));
    {
      ssdb__Params_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ssdb__Params_9, 0) = ((MR_Box) (ssdb__ListPath_8));
      MR_hl_field(MR_mktag(0), ssdb__Params_9, 1) = ((MR_Box) (ssdb__Var_19));
    }
{
#define MR_PROC_LABEL ssdb__execute_ssdb_pop_list_dir_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_pop_list_dir_3_p_0

	MR_Word X;

	X =  ssdb__Params_9 ;
		{
ssdb__mutable_variable_list_params = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_pop_list_dir_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
  else
  {
    mercury__io__write_string_3_p_0((MR_String) "ssdb: too many arguments to command.\n");
  }
}

static void MR_CALL 
ssdb__execute_ssdb_push_list_dir_3_p_0_1(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3)
{
  {
    MR_Box ssdb__closure = ssdb__closure_arg;
    MR_Word ssdb__conv0_HeadVar__3_3;

    mdb__listing__push_list_path_3_p_0(((MR_String) ssdb__wrapper_arg_1), ((MR_Word) ssdb__wrapper_arg_2), &ssdb__conv0_HeadVar__3_3);
    *ssdb__wrapper_arg_3 = ((MR_Box) (ssdb__conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
ssdb__execute_ssdb_push_list_dir_3_p_0(
  MR_Word ssdb__Args_4)
{
  if ((ssdb__Args_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    mercury__io__write_string_3_p_0((MR_String) "ssdb: command requires argument.\n");
  }
  else
  {
    MR_Word ssdb__Params0_8;
    MR_Word ssdb__ListPath0_9;
    MR_Word ssdb__ListPath_10;
    MR_Word ssdb__Params_11;
    MR_Integer ssdb__Var_18;
    MR_Box ssdb__conv1_ListPath_10;
    MR_Integer ssdb__Var_20;
    MR_Word ssdb__Var_19;

{
#define MR_PROC_LABEL ssdb__execute_ssdb_push_list_dir_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_push_list_dir_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_list_params;


		;}
#undef MR_PROC_LABEL
	 ssdb__Params0_8  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_push_list_dir_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    ssdb__ListPath0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Params0_8, (MR_Integer) 0)));
    ssdb__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Params0_8, (MR_Integer) 1)));
    mercury__list__foldr_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ssdb_scalar_common_1[0], (MR_Word) &ssdb_scalar_common_2[5], ssdb__Args_4, ((MR_Box) (ssdb__ListPath0_9)), &ssdb__conv1_ListPath_10);
    ssdb__ListPath_10 = ((MR_Word) ssdb__conv1_ListPath_10);
    ssdb__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Params0_8, (MR_Integer) 0)));
    ssdb__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Params0_8, (MR_Integer) 1)));
    {
      ssdb__Params_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ssdb__Params_11, 0) = ((MR_Box) (ssdb__ListPath_10));
      MR_hl_field(MR_mktag(0), ssdb__Params_11, 1) = ((MR_Box) (ssdb__Var_20));
    }
{
#define MR_PROC_LABEL ssdb__execute_ssdb_push_list_dir_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_push_list_dir_3_p_0

	MR_Word X;

	X =  ssdb__Params_11 ;
		{
ssdb__mutable_variable_list_params = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_push_list_dir_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__execute_ssdb_list_path_3_p_0_1(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3)
{
  {
    MR_Box ssdb__closure = ssdb__closure_arg;

    mercury__io__write_string_3_p_0(((MR_String) ssdb__wrapper_arg_1));
  }
}

static void MR_CALL 
ssdb__execute_ssdb_list_path_3_p_0(
  MR_Word ssdb__Args_4)
{
  if ((ssdb__Args_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    MR_Word ssdb__Params_6;
    MR_Word ssdb__Dirs_7;
    MR_Word ssdb__Var_20;
    MR_Integer ssdb__Var_30;

{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_path_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_path_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_list_params;


		;}
#undef MR_PROC_LABEL
	 ssdb__Params_6  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_path_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    ssdb__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Params_6, (MR_Integer) 0)));
    ssdb__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Params_6, (MR_Integer) 1)));
    ssdb__Dirs_7 = mdb__listing__get_list_path_1_f_0(ssdb__Var_20);
    if ((ssdb__Dirs_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "Context search path is empty\n");
    }
    else
    {
      mercury__io__write_string_3_p_0((MR_String) "Context search path: ");
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ssdb__Dirs_7, (MR_String) " ", (MR_Word) &ssdb_scalar_common_2[4]);
      mercury__io__nl_2_p_0();
    }
  }
  else
  {
    MR_Word ssdb__Params0_12;
    MR_Word ssdb__ListPath0_13;
    MR_Word ssdb__ListPath_14;
    MR_Word ssdb__Params_29;
    MR_Integer ssdb__Var_31;
    MR_Integer ssdb__Var_33;
    MR_Word ssdb__Var_32;

{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_path_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_path_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_list_params;


		;}
#undef MR_PROC_LABEL
	 ssdb__Params0_12  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_path_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    ssdb__ListPath0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Params0_12, (MR_Integer) 0)));
    ssdb__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Params0_12, (MR_Integer) 1)));
    mdb__listing__set_list_path_3_p_0(ssdb__Args_4, ssdb__ListPath0_13, &ssdb__ListPath_14);
    ssdb__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Params0_12, (MR_Integer) 0)));
    ssdb__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Params0_12, (MR_Integer) 1)));
    {
      ssdb__Params_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ssdb__Params_29, 0) = ((MR_Box) (ssdb__ListPath_14));
      MR_hl_field(MR_mktag(0), ssdb__Params_29, 1) = ((MR_Box) (ssdb__Var_33));
    }
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_path_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_path_3_p_0

	MR_Word X;

	X =  ssdb__Params_29 ;
		{
ssdb__mutable_variable_list_params = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_path_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__execute_ssdb_list_4_p_0(
  MR_Word ssdb__Args_5,
  MR_Integer ssdb__Depth_6)
{
  {
    MR_bool ssdb__succeeded;

    if ((ssdb__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word ssdb__Params_8;
      MR_Integer ssdb__ContextLines_9;
      MR_Word ssdb__StackFrame_36;
      MR_String ssdb__FileName_37;
      MR_Integer ssdb__MarkLine_38;
      MR_Word ssdb__Stack_74;
      MR_Word ssdb__Var_25;
      MR_Box ssdb__conv0_StackFrame_36;
      MR_Integer ssdb__Var_54;
      MR_Integer ssdb__Var_55;
      MR_Integer ssdb__Var_56;
      MR_Word ssdb__Var_57;
      MR_Word ssdb__Var_59;
      MR_Word ssdb__Var_60;

{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_4_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_list_params;


		;}
#undef MR_PROC_LABEL
	 ssdb__Params_8  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      ssdb__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Params_8, (MR_Integer) 0)));
      ssdb__ContextLines_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Params_8, (MR_Integer) 1)));
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_4_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_74  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__list__det_index0_3_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_stack_frame_0, ssdb__Stack_74, ssdb__Depth_6, &ssdb__conv0_StackFrame_36);
      ssdb__StackFrame_36 = ((MR_Word) ssdb__conv0_StackFrame_36);
      ssdb__Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_36, (MR_Integer) 0)));
      ssdb__Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_36, (MR_Integer) 1)));
      ssdb__Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_36, (MR_Integer) 2)));
      ssdb__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_36, (MR_Integer) 3)));
      ssdb__FileName_37 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_36, (MR_Integer) 4)));
      ssdb__MarkLine_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_36, (MR_Integer) 5)));
      ssdb__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_36, (MR_Integer) 6)));
      ssdb__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_36, (MR_Integer) 7)));
      ssdb__succeeded = (strcmp(ssdb__FileName_37, (MR_String) "") == 0);
      if (ssdb__succeeded)
      {
        mercury__io__write_string_3_p_0((MR_String) "ssdb: sorry, call site is unknown.\n");
      }
      else
      {
        MR_Integer ssdb__FirstLine_39;
        MR_Integer ssdb__LastLine_40;
        MR_Word ssdb__StdOut_41;
        MR_Word ssdb__StdErr_42;
        MR_Word ssdb__Params_43;
        MR_Word ssdb__ListPath_44;
        MR_Integer ssdb__Var_49 = (ssdb__MarkLine_38 - ssdb__ContextLines_9);
        MR_Integer ssdb__Var_68;

        ssdb__FirstLine_39 = mercury__int__max_2_f_0((MR_Integer) 0, ssdb__Var_49);
        ssdb__LastLine_40 = (ssdb__MarkLine_38 + ssdb__ContextLines_9);
        mercury__io__output_stream_3_p_0(&ssdb__StdOut_41);
        mercury__io__stderr_stream_3_p_0(&ssdb__StdErr_42);
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_4_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_list_params;


		;}
#undef MR_PROC_LABEL
	 ssdb__Params_43  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
        ssdb__ListPath_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Params_43, (MR_Integer) 0)));
        ssdb__Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Params_43, (MR_Integer) 1)));
        mdb__listing__list_file_portable_9_p_0(ssdb__StdOut_41, ssdb__StdErr_42, ssdb__FileName_37, ssdb__FirstLine_39, ssdb__LastLine_40, ssdb__MarkLine_38, ssdb__ListPath_44);
      }
    }
    else
    {
      MR_Word ssdb__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Args_5, (MR_Integer) 1)));
      MR_String ssdb__Var_27 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Args_5, (MR_Integer) 0)));

      if ((ssdb__Var_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer ssdb__ContextLines_23;
        MR_Integer ssdb__Var_85;

        ssdb__succeeded = mercury__string__to_int_2_p_0(ssdb__Var_27, &ssdb__ContextLines_23);
        if (ssdb__succeeded)
        {
          ssdb__Var_85 = (MR_Integer) 0;
          ssdb__succeeded = (ssdb__ContextLines_23 >= ssdb__Var_85);
        }
        if (ssdb__succeeded)
          ssdb__execute_ssdb_list_2_4_p_0(ssdb__ContextLines_23, ssdb__Depth_6);
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "ssdb: command requires integer argument.\n");
        }
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "ssdb: too many arguments to command.\n");
      }
    }
  }
}

static void MR_CALL 
ssdb__execute_ssdb_list_2_4_p_0(
  MR_Integer ssdb__ContextLines_5,
  MR_Integer ssdb__Depth_6)
{
  {
    MR_bool ssdb__succeeded;
    MR_Word ssdb__StackFrame_8;
    MR_String ssdb__FileName_9;
    MR_Integer ssdb__MarkLine_10;
    MR_Word ssdb__Stack_48;
    MR_Box ssdb__conv0_StackFrame_8;
    MR_Integer ssdb__Var_28;
    MR_Integer ssdb__Var_29;
    MR_Integer ssdb__Var_30;
    MR_Word ssdb__Var_31;
    MR_Word ssdb__Var_33;
    MR_Word ssdb__Var_34;

{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_2_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_2_4_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_48  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_2_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    mercury__list__det_index0_3_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_stack_frame_0, ssdb__Stack_48, ssdb__Depth_6, &ssdb__conv0_StackFrame_8);
    ssdb__StackFrame_8 = ((MR_Word) ssdb__conv0_StackFrame_8);
    ssdb__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 0)));
    ssdb__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 1)));
    ssdb__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 2)));
    ssdb__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 3)));
    ssdb__FileName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 4)));
    ssdb__MarkLine_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 5)));
    ssdb__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 6)));
    ssdb__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 7)));
    ssdb__succeeded = (strcmp(ssdb__FileName_9, (MR_String) "") == 0);
    if (ssdb__succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "ssdb: sorry, call site is unknown.\n");
    }
    else
    {
      MR_Integer ssdb__FirstLine_11;
      MR_Integer ssdb__LastLine_12;
      MR_Word ssdb__StdOut_13;
      MR_Word ssdb__StdErr_14;
      MR_Word ssdb__Params_15;
      MR_Word ssdb__ListPath_16;
      MR_Integer ssdb__Var_23 = (ssdb__MarkLine_10 - ssdb__ContextLines_5);
      MR_Integer ssdb__Var_42;

      ssdb__FirstLine_11 = mercury__int__max_2_f_0((MR_Integer) 0, ssdb__Var_23);
      ssdb__LastLine_12 = (ssdb__MarkLine_10 + ssdb__ContextLines_5);
      mercury__io__output_stream_3_p_0(&ssdb__StdOut_13);
      mercury__io__stderr_stream_3_p_0(&ssdb__StdErr_14);
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_2_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_2_4_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_list_params;


		;}
#undef MR_PROC_LABEL
	 ssdb__Params_15  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_list_2_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                    "ssdb__mutable_variable_list_params_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      ssdb__ListPath_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Params_15, (MR_Integer) 0)));
      ssdb__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Params_15, (MR_Integer) 1)));
      mdb__listing__list_file_portable_9_p_0(ssdb__StdOut_13, ssdb__StdErr_14, ssdb__FileName_9, ssdb__FirstLine_11, ssdb__LastLine_12, ssdb__MarkLine_10, ssdb__ListPath_16);
    }
  }
}

static void MR_CALL 
ssdb__execute_ssdb_unalias_4_p_0(
  MR_Word ssdb__Args_5,
  MR_Word ssdb__Interacting_6)
{
  {
    MR_bool ssdb__succeeded = ((MR_tag((MR_Word) ssdb__Args_5)) == (MR_mktag((MR_Integer) 1)));
    MR_String ssdb__Name_8;
    MR_Word ssdb__Var_14;

    if (ssdb__succeeded)
    {
      ssdb__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Args_5, (MR_Integer) 0)));
      ssdb__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Args_5, (MR_Integer) 1)));
      ssdb__succeeded = (ssdb__Var_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (ssdb__succeeded)
    {
      MR_Word ssdb__Aliases0_9;
      MR_Word ssdb__Aliases_11;
      MR_Word ssdb__Var_10;
      MR_Box ssdb__conv0_Var_10;

{
#define MR_PROC_LABEL ssdb__execute_ssdb_unalias_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_aliases_lock,
                    "ssdb__mutable_variable_aliases_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_unalias_4_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_aliases;


		;}
#undef MR_PROC_LABEL
	 ssdb__Aliases0_9  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_unalias_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_aliases_lock,
                    "ssdb__mutable_variable_aliases_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      ssdb__succeeded = mercury__map__remove_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ssdb_scalar_common_1[0], ((MR_Box) (ssdb__Name_8)), &ssdb__conv0_Var_10, ssdb__Aliases0_9, &ssdb__Aliases_11);
      if (ssdb__succeeded)
      {
        ssdb__Var_10 = ((MR_Word) ssdb__conv0_Var_10);
        ssdb__succeeded = MR_TRUE;
      }
      if (ssdb__succeeded)
      {
{
#define MR_PROC_LABEL ssdb__execute_ssdb_unalias_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_aliases_lock,
                    "ssdb__mutable_variable_aliases_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_unalias_4_p_0

	MR_Word X;

	X =  ssdb__Aliases_11 ;
		{
ssdb__mutable_variable_aliases = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_unalias_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_aliases_lock,
                    "ssdb__mutable_variable_aliases_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
        switch (ssdb__Interacting_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "Alias \140");
              mercury__io__write_string_3_p_0(ssdb__Name_8);
              mercury__io__write_string_3_p_0((MR_String) "\' removed.\n");
            }
            break;
        }
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "Alias \140");
        mercury__io__write_string_3_p_0(ssdb__Name_8);
        mercury__io__write_string_3_p_0((MR_String) "\' cannot be removed, since it does not exist.\n");
      }
    }
    else
    {
      mercury__io__write_string_3_p_0((MR_String) "ssdb: command requires argument.\n");
    }
  }
}

static void MR_CALL 
ssdb__execute_ssdb_alias_4_p_0_1(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3,
  MR_Box * ssdb__wrapper_arg_4)
{
  {
    MR_Box ssdb__closure = ssdb__closure_arg;

    ssdb__print_alias_4_p_0(((MR_String) ssdb__wrapper_arg_1), ((MR_Word) ssdb__wrapper_arg_2));
  }
}

static void MR_CALL 
ssdb__execute_ssdb_alias_4_p_0(
  MR_Word ssdb__Args_5,
  MR_Word ssdb__Interacting_6)
{
  {
    MR_bool ssdb__succeeded;
    MR_Word ssdb__Aliases0_8;

{
#define MR_PROC_LABEL ssdb__execute_ssdb_alias_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_aliases_lock,
                    "ssdb__mutable_variable_aliases_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_alias_4_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_aliases;


		;}
#undef MR_PROC_LABEL
	 ssdb__Aliases0_8  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_alias_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_aliases_lock,
                    "ssdb__mutable_variable_aliases_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    if ((ssdb__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Box ssdb__conv0_STATE_VARIABLE_IO_16;

      mercury__map__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ssdb_scalar_common_1[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ssdb_scalar_common_2[3], ssdb__Aliases0_8, ((MR_Box) ((MR_Integer) 0)), &ssdb__conv0_STATE_VARIABLE_IO_16);
    }
    else
    {
      MR_Word ssdb__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Args_5, (MR_Integer) 1)));
      MR_String ssdb__Var_45 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Args_5, (MR_Integer) 0)));

      if ((ssdb__Var_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ssdb__Command_10;
        MR_Box ssdb__conv1_Command_10;

        ssdb__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ssdb_scalar_common_1[0], ssdb__Aliases0_8, ((MR_Box) (ssdb__Var_45)), &ssdb__conv1_Command_10);
        if (ssdb__succeeded)
        {
          ssdb__Command_10 = ((MR_Word) ssdb__conv1_Command_10);
          ssdb__succeeded = MR_TRUE;
        }
        if (ssdb__succeeded)
          ssdb__print_alias_4_p_0(ssdb__Var_45, ssdb__Command_10);
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "There is no such alias.\n");
        }
      }
      else
      {
        MR_String ssdb__Command_32 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Var_44, (MR_Integer) 0)));
        MR_Word ssdb__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Var_44, (MR_Integer) 1)));

        {
          MR_Integer ssdb__case_num_0 = (MR_Integer) -1;

          switch (MR_nth_code_unit(ssdb__Command_32, 0)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(1, ssdb__Command_32, (MR_String) "alias"))
                ssdb__case_num_0 = (MR_Integer) 0;
              break;
            case (MR_Integer) 98:
              if (((MR_nth_code_unit(ssdb__Command_32, 1)) == (MR_Integer) 114))
                switch (MR_nth_code_unit(ssdb__Command_32, 2)) {
                  case (MR_Integer) 101:
                    if (MR_offset_streq(3, ssdb__Command_32, (MR_String) "break"))
                      ssdb__case_num_0 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 111:
                    if (MR_offset_streq(3, ssdb__Command_32, (MR_String) "browse"))
                      ssdb__case_num_0 = (MR_Integer) 2;
                    break;
                }
              break;
            case (MR_Integer) 99:
              switch (MR_nth_code_unit(ssdb__Command_32, 1)) {
                case (MR_Integer) 111:
                  if (MR_offset_streq(2, ssdb__Command_32, (MR_String) "continue"))
                    ssdb__case_num_0 = (MR_Integer) 3;
                  break;
                case (MR_Integer) 117:
                  if (MR_offset_streq(2, ssdb__Command_32, (MR_String) "current"))
                    ssdb__case_num_0 = (MR_Integer) 4;
                  break;
              }
              break;
            case (MR_Integer) 100:
              switch (MR_nth_code_unit(ssdb__Command_32, 1)) {
                case (MR_Integer) 101:
                  if (MR_offset_streq(2, ssdb__Command_32, (MR_String) "delete"))
                    ssdb__case_num_0 = (MR_Integer) 5;
                  break;
                case (MR_Integer) 105:
                  if (MR_offset_streq(2, ssdb__Command_32, (MR_String) "disable"))
                    ssdb__case_num_0 = (MR_Integer) 6;
                  break;
                case (MR_Integer) 111:
                  if (MR_offset_streq(2, ssdb__Command_32, (MR_String) "down"))
                    ssdb__case_num_0 = (MR_Integer) 7;
                  break;
              }
              break;
            case (MR_Integer) 101:
              switch (MR_nth_code_unit(ssdb__Command_32, 1)) {
                case (MR_Integer) 110:
                  if (MR_offset_streq(2, ssdb__Command_32, (MR_String) "enable"))
                    ssdb__case_num_0 = (MR_Integer) 8;
                  break;
                case (MR_Integer) 120:
                  if (MR_offset_streq(2, ssdb__Command_32, (MR_String) "exception"))
                    ssdb__case_num_0 = (MR_Integer) 9;
                  break;
              }
              break;
            case (MR_Integer) 102:
              switch (MR_nth_code_unit(ssdb__Command_32, 1)) {
                case (MR_Integer) 105:
                  if (MR_offset_streq(2, ssdb__Command_32, (MR_String) "finish"))
                    ssdb__case_num_0 = (MR_Integer) 10;
                  break;
                case (MR_Integer) 111:
                  if (((((((((MR_nth_code_unit(ssdb__Command_32, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(ssdb__Command_32, 3)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(ssdb__Command_32, 4)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(ssdb__Command_32, 5)) == (MR_Integer) 116))))
                    switch (MR_nth_code_unit(ssdb__Command_32, 6)) {
                      case (MR_Integer) 0:
                        ssdb__case_num_0 = (MR_Integer) 11;
                        break;
                      case (MR_Integer) 95:
                        if (MR_offset_streq(7, ssdb__Command_32, (MR_String) "format_param"))
                          ssdb__case_num_0 = (MR_Integer) 12;
                        break;
                    }
                  break;
              }
              break;
            case (MR_Integer) 103:
              if (MR_offset_streq(1, ssdb__Command_32, (MR_String) "goto"))
                ssdb__case_num_0 = (MR_Integer) 13;
              break;
            case (MR_Integer) 104:
              if (MR_offset_streq(1, ssdb__Command_32, (MR_String) "help"))
                ssdb__case_num_0 = (MR_Integer) 14;
              break;
            case (MR_Integer) 108:
              switch (MR_nth_code_unit(ssdb__Command_32, 1)) {
                case (MR_Integer) 101:
                  if (MR_offset_streq(2, ssdb__Command_32, (MR_String) "level"))
                    ssdb__case_num_0 = (MR_Integer) 15;
                  break;
                case (MR_Integer) 105:
                  if (((((MR_nth_code_unit(ssdb__Command_32, 2)) == (MR_Integer) 115)) && (((MR_nth_code_unit(ssdb__Command_32, 3)) == (MR_Integer) 116))))
                    switch (MR_nth_code_unit(ssdb__Command_32, 4)) {
                      case (MR_Integer) 0:
                        ssdb__case_num_0 = (MR_Integer) 16;
                        break;
                      case (MR_Integer) 95:
                        switch (MR_nth_code_unit(ssdb__Command_32, 5)) {
                          case (MR_Integer) 99:
                            if (MR_offset_streq(6, ssdb__Command_32, (MR_String) "list_context_lines"))
                              ssdb__case_num_0 = (MR_Integer) 17;
                            break;
                          case (MR_Integer) 112:
                            if (MR_offset_streq(6, ssdb__Command_32, (MR_String) "list_path"))
                              ssdb__case_num_0 = (MR_Integer) 18;
                            break;
                        }
                        break;
                    }
                  break;
              }
              break;
            case (MR_Integer) 110:
              if (MR_offset_streq(1, ssdb__Command_32, (MR_String) "next"))
                ssdb__case_num_0 = (MR_Integer) 19;
              break;
            case (MR_Integer) 112:
              switch (MR_nth_code_unit(ssdb__Command_32, 1)) {
                case (MR_Integer) 111:
                  if (MR_offset_streq(2, ssdb__Command_32, (MR_String) "pop_list_dir"))
                    ssdb__case_num_0 = (MR_Integer) 20;
                  break;
                case (MR_Integer) 114:
                  if (MR_offset_streq(2, ssdb__Command_32, (MR_String) "print"))
                    ssdb__case_num_0 = (MR_Integer) 21;
                  break;
                case (MR_Integer) 117:
                  if (MR_offset_streq(2, ssdb__Command_32, (MR_String) "push_list_dir"))
                    ssdb__case_num_0 = (MR_Integer) 22;
                  break;
              }
              break;
            case (MR_Integer) 113:
              if (MR_offset_streq(1, ssdb__Command_32, (MR_String) "quit"))
                ssdb__case_num_0 = (MR_Integer) 23;
              break;
            case (MR_Integer) 114:
              if (((((MR_nth_code_unit(ssdb__Command_32, 1)) == (MR_Integer) 101)) && (((MR_nth_code_unit(ssdb__Command_32, 2)) == (MR_Integer) 116))))
                switch (MR_nth_code_unit(ssdb__Command_32, 3)) {
                  case (MR_Integer) 114:
                    if (MR_offset_streq(4, ssdb__Command_32, (MR_String) "retry"))
                      ssdb__case_num_0 = (MR_Integer) 24;
                    break;
                  case (MR_Integer) 117:
                    if (MR_offset_streq(4, ssdb__Command_32, (MR_String) "return"))
                      ssdb__case_num_0 = (MR_Integer) 25;
                    break;
                }
              break;
            case (MR_Integer) 115:
              switch (MR_nth_code_unit(ssdb__Command_32, 1)) {
                case (MR_Integer) 111:
                  if (MR_offset_streq(2, ssdb__Command_32, (MR_String) "source"))
                    ssdb__case_num_0 = (MR_Integer) 26;
                  break;
                case (MR_Integer) 116:
                  switch (MR_nth_code_unit(ssdb__Command_32, 2)) {
                    case (MR_Integer) 97:
                      if (MR_offset_streq(3, ssdb__Command_32, (MR_String) "stack"))
                        ssdb__case_num_0 = (MR_Integer) 27;
                      break;
                    case (MR_Integer) 101:
                      if (MR_offset_streq(3, ssdb__Command_32, (MR_String) "step"))
                        ssdb__case_num_0 = (MR_Integer) 28;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 117:
              switch (MR_nth_code_unit(ssdb__Command_32, 1)) {
                case (MR_Integer) 110:
                  if (MR_offset_streq(2, ssdb__Command_32, (MR_String) "unalias"))
                    ssdb__case_num_0 = (MR_Integer) 29;
                  break;
                case (MR_Integer) 112:
                  if (MR_offset_streq(2, ssdb__Command_32, (MR_String) "up"))
                    ssdb__case_num_0 = (MR_Integer) 30;
                  break;
              }
              break;
            case (MR_Integer) 118:
              if (MR_offset_streq(1, ssdb__Command_32, (MR_String) "vars"))
                ssdb__case_num_0 = (MR_Integer) 31;
              break;
          }
          if ((ssdb__case_num_0 < (MR_Integer) 0))
            ssdb__succeeded = MR_FALSE;
          else
          {
            /* we found a match; look up the results */
            ssdb__succeeded = MR_TRUE;
          }
        }
        if (ssdb__succeeded)
        {
          MR_Word ssdb__Aliases_14;

          mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ssdb_scalar_common_1[0], ((MR_Box) (ssdb__Var_45)), ((MR_Box) (ssdb__Var_44)), ssdb__Aliases0_8, &ssdb__Aliases_14);
{
#define MR_PROC_LABEL ssdb__execute_ssdb_alias_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_aliases_lock,
                    "ssdb__mutable_variable_aliases_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_alias_4_p_0

	MR_Word X;

	X =  ssdb__Aliases_14 ;
		{
ssdb__mutable_variable_aliases = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_alias_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_aliases_lock,
                    "ssdb__mutable_variable_aliases_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          switch (ssdb__Interacting_6) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              ssdb__print_alias_4_p_0(ssdb__Var_45, ssdb__Var_44);
              break;
          }
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "\140");
          mercury__io__write_string_3_p_0(ssdb__Command_32);
          mercury__io__write_string_3_p_0((MR_String) "\' is not a valid command.\n");
        }
      }
    }
  }
}

static void MR_CALL 
ssdb__print_alias_4_p_0_1(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3)
{
  {
    MR_Box ssdb__closure = ssdb__closure_arg;

    mercury__io__write_string_3_p_0(((MR_String) ssdb__wrapper_arg_1));
  }
}

static void MR_CALL 
ssdb__print_alias_4_p_0(
  MR_String ssdb__Name_5,
  MR_Word ssdb__Command_6)
{
  {
    mercury__io__write_string_3_p_0(ssdb__Name_5);
    mercury__io__write_string_3_p_0((MR_String) "\t=>\t");
    mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ssdb__Command_6, (MR_String) " ", (MR_Word) &ssdb_scalar_common_2[2]);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
ssdb__execute_ssdb_format_param_3_p_0(
  MR_Word ssdb__STATE_VARIABLE_Args_0_20)
{
  {
    MR_bool ssdb__succeeded;
    MR_Word ssdb__Res_7;
    MR_Word ssdb__STATE_VARIABLE_Args_31_31;

    ssdb__process_options__ho1_5_p_0(ssdb__STATE_VARIABLE_Args_0_20, &ssdb__STATE_VARIABLE_Args_31_31, (MR_Word) &ssdb_scalar_common_3[0], &ssdb__Res_7);
    if (((MR_tag((MR_Word) ssdb__Res_7)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word ssdb__Error_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Res_7, (MR_Integer) 0)));
      MR_String ssdb__Var_34;

      mercury__io__write_string_3_p_0((MR_String) "ssdb: ");
      ssdb__Var_34 = mercury__io__error_message_1_f_0(ssdb__Error_19);
      mercury__io__write_string_3_p_0(ssdb__Var_34);
      mercury__io__nl_2_p_0();
    }
    else
    {
      MR_Word ssdb__P_8;
      MR_Word ssdb__B_9;
      MR_Word ssdb__A_10;
      MR_Word ssdb__F_11;
      MR_Word ssdb__Pr_12;
      MR_Word ssdb__V_13;
      MR_Word ssdb__NPr_14;
      MR_Word ssdb__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Res_7, (MR_Integer) 0)));
      MR_Word ssdb__Setting_15;
      MR_String ssdb__Word_47;
      MR_String ssdb__ValueStr_48;
      MR_Integer ssdb__Value_49;
      MR_Word ssdb__Var_50;
      MR_Word ssdb__Var_51;
      MR_Integer ssdb__Var_54;
      MR_Integer ssdb__lo_0;
      MR_Integer ssdb__hi_1;
      MR_Integer ssdb__mid_2;
      MR_Integer ssdb__result_3;

      ssdb__P_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Var_37, (MR_Integer) 0)))) & (MR_Integer) 1);
      ssdb__B_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Var_37, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      ssdb__A_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Var_37, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      ssdb__F_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Var_37, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      ssdb__Pr_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Var_37, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      ssdb__V_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Var_37, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      ssdb__NPr_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Var_37, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      ssdb__succeeded = ((MR_tag((MR_Word) ssdb__STATE_VARIABLE_Args_31_31)) == (MR_mktag((MR_Integer) 1)));
      if (ssdb__succeeded)
      {
        ssdb__Word_47 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__STATE_VARIABLE_Args_31_31, (MR_Integer) 0)));
        ssdb__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__STATE_VARIABLE_Args_31_31, (MR_Integer) 1)));
        ssdb__succeeded = ((MR_tag((MR_Word) ssdb__Var_50)) == (MR_mktag((MR_Integer) 1)));
        if (ssdb__succeeded)
        {
          ssdb__ValueStr_48 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Var_50, (MR_Integer) 0)));
          ssdb__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Var_50, (MR_Integer) 1)));
          ssdb__succeeded = (ssdb__Var_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (ssdb__succeeded)
          {
            ssdb__succeeded = mercury__string__to_int_2_p_0(ssdb__ValueStr_48, &ssdb__Value_49);
            if (ssdb__succeeded)
            {
              ssdb__Var_54 = (MR_Integer) 0;
              ssdb__succeeded = (ssdb__Value_49 >= ssdb__Var_54);
              if (ssdb__succeeded)
              {
                /* binary string jump switch */
                ssdb__lo_0 = (MR_Integer) 0;
                ssdb__hi_1 = (MR_Integer) 3;
                do
                {
                  ssdb__mid_2 = (((ssdb__lo_0 + ssdb__hi_1)) / (MR_Integer) 2);
                  ssdb__result_3 = MR_strcmp(ssdb__Word_47, ((&ssdb_vector_common_11[6 + ssdb__mid_2]))->ssdb__vector_common_type_11_0__vct_11_f_0);
                  if ((ssdb__result_3 == (MR_Integer) 0))
                  {
                    switch (((&ssdb_vector_common_11[6 + ssdb__mid_2]))->ssdb__vector_common_type_11_0__vct_11_f_1) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          /* case "depth" */
                          {
                            ssdb__Setting_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ssdb__Setting_15, 0) = ((MR_Box) (ssdb__Value_49));
                          }
                          ssdb__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          /* case "lines" */
                          {
                            ssdb__Setting_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ssdb__Setting_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), ssdb__Setting_15, 1) = ((MR_Box) (ssdb__Value_49));
                          }
                          ssdb__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          /* case "size" */
                          {
                            ssdb__Setting_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ssdb__Setting_15, 0) = ((MR_Box) (ssdb__Value_49));
                          }
                          ssdb__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          /* case "width" */
                          {
                            ssdb__Setting_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), ssdb__Setting_15, 0) = ((MR_Box) (ssdb__Value_49));
                          }
                          ssdb__succeeded = MR_TRUE;
                        }
                        break;
                    }
                    /* jump out of search loop */
                    goto label_0;
                  }
                  else
                  if ((ssdb__result_3 < (MR_Integer) 0))
                    ssdb__hi_1 = (ssdb__mid_2 - (MR_Integer) 1);
                  else
                    ssdb__lo_0 = (ssdb__mid_2 + (MR_Integer) 1);
                }
                while ((ssdb__lo_0 <= ssdb__hi_1));
                ssdb__succeeded = MR_FALSE;
              label_0:;
              }
            }
          }
        }
      }
      if (ssdb__succeeded)
      {
        MR_Word ssdb__State0_16;
        MR_Word ssdb__State_18;

{
#define MR_PROC_LABEL ssdb__execute_ssdb_format_param_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_format_param_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_browser_state;


		;}
#undef MR_PROC_LABEL
	 ssdb__State0_16  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_format_param_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
        mdb__browser_info__set_browser_param_11_p_0((MR_Integer) 0, ssdb__P_8, ssdb__B_9, ssdb__A_10, ssdb__F_11, ssdb__Pr_12, ssdb__V_13, ssdb__NPr_14, ssdb__Setting_15, ssdb__State0_16, &ssdb__State_18);
{
#define MR_PROC_LABEL ssdb__execute_ssdb_format_param_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_format_param_3_p_0

	MR_Word X;

	X =  ssdb__State_18 ;
		{
ssdb__mutable_variable_browser_state = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_format_param_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "ssdb: invalid format parameter.\n");
      }
    }
  }
}

static void MR_CALL 
ssdb__process_options__ho1_5_p_0(
  MR_Word ssdb__Args0_7,
  MR_Word * ssdb__Args_8,
  MR_Word ssdb__Data0_9,
  MR_Word * ssdb__Res_10)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ssdb__succeeded;

      if ((ssdb__Args0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ssdb__Args_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *ssdb__Res_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ssdb__Data0_9));
        }
      }
      else
      {
        MR_String ssdb__First_11 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Args0_7, (MR_Integer) 0)));
        MR_Word ssdb__Rest_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Args0_7, (MR_Integer) 1)));

        ssdb__succeeded = mercury__string__prefix_2_p_0(ssdb__First_11, (MR_String) "--");
        if (ssdb__succeeded)
        {
          MR_Word ssdb__Data1_13;

          ssdb__succeeded = ssdb__format_param_options_3_p_0(ssdb__First_11, ssdb__Data0_9, &ssdb__Data1_13);
          if (ssdb__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word ssdb__next_value_of_Args0_7 = ssdb__Rest_12;
              MR_Word ssdb__next_value_of_Data0_9 = ssdb__Data1_13;

              ssdb__Args0_7 = ssdb__next_value_of_Args0_7;
              ssdb__Data0_9 = ssdb__next_value_of_Data0_9;
            }
            continue;
          }
          else
          {
            MR_String ssdb__Message_14;
            MR_String ssdb__Var_24;
            MR_Word ssdb__Var_26;

            ssdb__Var_24 = mercury__string__f_43_43_2_f_0(ssdb__First_11, (MR_String) "\'");
            ssdb__Message_14 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognised option \140", ssdb__Var_24);
            ssdb__Var_26 = mercury__io__make_io_error_1_f_0(ssdb__Message_14);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *ssdb__Res_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ssdb__Var_26));
            }
            *ssdb__Args_8 = ssdb__Args0_7;
          }
        }
        else
        {
          MR_Word ssdb__FirstChars_16;
          MR_Word ssdb__Var_28;
          MR_Char ssdb__Var_15;
          MR_Char ssdb__Var_17;
          MR_Word ssdb__Var_18;

          ssdb__succeeded = mercury__string__prefix_2_p_0(ssdb__First_11, (MR_String) "-");
          if (ssdb__succeeded)
          {
            mercury__string__to_char_list_2_p_0(ssdb__First_11, &ssdb__Var_28);
            ssdb__succeeded = ((MR_tag((MR_Word) ssdb__Var_28)) == (MR_mktag((MR_Integer) 1)));
            if (ssdb__succeeded)
            {
              ssdb__Var_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Var_28, (MR_Integer) 0)));
              ssdb__FirstChars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Var_28, (MR_Integer) 1)));
              ssdb__succeeded = ((MR_tag((MR_Word) ssdb__FirstChars_16)) == (MR_mktag((MR_Integer) 1)));
              if (ssdb__succeeded)
              {
                ssdb__Var_17 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), ssdb__FirstChars_16, (MR_Integer) 0)));
                ssdb__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__FirstChars_16, (MR_Integer) 1)));
              }
            }
          }
          if (ssdb__succeeded)
          {
            MR_Word ssdb__Res1_19;

            ssdb__process_short_options__ho6_4_p_0(ssdb__FirstChars_16, ssdb__Data0_9, &ssdb__Res1_19);
            if (((MR_tag((MR_Word) ssdb__Res1_19)) == (MR_mktag((MR_Integer) 1))))
            {
              *ssdb__Res_10 = ssdb__Res1_19;
              *ssdb__Args_8 = ssdb__Args0_7;
            }
            else
            {
              MR_Word ssdb__Data1_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Res1_19, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word ssdb__next_value_of_Args0_7 = ssdb__Rest_12;
                MR_Word ssdb__next_value_of_Data0_9 = ssdb__Data1_29;

                ssdb__Args0_7 = ssdb__next_value_of_Args0_7;
                ssdb__Data0_9 = ssdb__next_value_of_Data0_9;
              }
              continue;
            }
          }
          else
          {
            MR_Word ssdb__Rest1_21;

            ssdb__process_options__ho1_5_p_0(ssdb__Rest_12, &ssdb__Rest1_21, ssdb__Data0_9, ssdb__Res_10);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ssdb__Args_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ssdb__First_11));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ssdb__Rest1_21));
            }
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ssdb__process_short_options__ho6_4_p_0(
  MR_Word ssdb__Chars_6,
  MR_Word ssdb__Data0_7,
  MR_Word * ssdb__Res_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ssdb__succeeded;

      if ((ssdb__Chars_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *ssdb__Res_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ssdb__Data0_7));
        }
      else
      {
        MR_Char ssdb__C_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Chars_6, (MR_Integer) 0)));
        MR_Word ssdb__Cs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Chars_6, (MR_Integer) 1)));
        MR_String ssdb__Option_11;
        MR_Word ssdb__Var_14;
        MR_Word ssdb__Var_16;
        MR_Word ssdb__Data1_12;

        {
          ssdb__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ssdb__Var_16, 0) = ((MR_Box) (MR_Word) (ssdb__C_9));
          MR_hl_field(MR_mktag(1), ssdb__Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ssdb__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ssdb__Var_14, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
          MR_hl_field(MR_mktag(1), ssdb__Var_14, 1) = ((MR_Box) (ssdb__Var_16));
        }
        ssdb__Option_11 = mercury__string__from_char_list_1_f_0(ssdb__Var_14);
        ssdb__succeeded = ssdb__format_param_options_3_p_0(ssdb__Option_11, ssdb__Data0_7, &ssdb__Data1_12);
        if (ssdb__succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Word ssdb__next_value_of_Chars_6 = ssdb__Cs_10;
            MR_Word ssdb__next_value_of_Data0_7 = ssdb__Data1_12;

            ssdb__Chars_6 = ssdb__next_value_of_Chars_6;
            ssdb__Data0_7 = ssdb__next_value_of_Data0_7;
          }
          continue;
        }
        else
        {
          MR_String ssdb__Message_13;
          MR_String ssdb__Var_19;
          MR_Word ssdb__Var_21;

          ssdb__Var_19 = mercury__string__f_43_43_2_f_0(ssdb__Option_11, (MR_String) "\'");
          ssdb__Message_13 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognised option \140", ssdb__Var_19);
          ssdb__Var_21 = mercury__io__make_io_error_1_f_0(ssdb__Message_13);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ssdb__Res_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ssdb__Var_21));
          }
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
ssdb__format_param_options_3_p_0(
  MR_String ssdb__Opt_4,
  MR_Word ssdb__STATE_VARIABLE_Config_0_6,
  MR_Word * ssdb__STATE_VARIABLE_Config_7)
{
  {
    MR_bool ssdb__succeeded;
    MR_Word ssdb__Var_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__STATE_VARIABLE_Config_0_6, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ssdb__Var_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__STATE_VARIABLE_Config_0_6, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ssdb__Var_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__STATE_VARIABLE_Config_0_6, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ssdb__Var_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__STATE_VARIABLE_Config_0_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ssdb__Var_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__STATE_VARIABLE_Config_0_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ssdb__Var_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__STATE_VARIABLE_Config_0_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ssdb__Var_77 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__STATE_VARIABLE_Config_0_6, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Integer ssdb__slot_0 = ((MR_hash_string5(ssdb__Opt_4)) & (MR_Integer) 63);
    MR_String ssdb__str_1 = ((&ssdb_vector_common_4[5 + ssdb__slot_0]))->ssdb__vector_common_type_4_0__vct_4_f_0;

    /* hashed string jump switch */
    /* compute the hash value of the input string */
    /* no collisions; no hash chain loop */
    /* lookup the string for this hash slot */
    /* did we find a match? */
    if ((((ssdb__str_1 != NULL)) && ((strcmp(ssdb__str_1, ssdb__Opt_4) == 0))))
    {
      /* we found a match; dispatch to the corresponding code */
      switch (ssdb__slot_0) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 46:
          {
            /* case "--print-all", "-A" */
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *ssdb__STATE_VARIABLE_Config_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((ssdb__Var_77 | ((((ssdb__Var_76 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | ((((ssdb__Var_74 << (MR_Integer) 3)) | ((((ssdb__Var_73 << (MR_Integer) 4)) | ((((ssdb__Var_72 << (MR_Integer) 5)) | ((ssdb__Var_71 << (MR_Integer) 6)))))))))))))));
            }
            ssdb__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 56:
          {
            /* case "--browse", "-B" */
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *ssdb__STATE_VARIABLE_Config_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((ssdb__Var_77 | (((((MR_Integer) 1 << (MR_Integer) 1)) | ((((ssdb__Var_75 << (MR_Integer) 2)) | ((((ssdb__Var_74 << (MR_Integer) 3)) | ((((ssdb__Var_73 << (MR_Integer) 4)) | ((((ssdb__Var_72 << (MR_Integer) 5)) | ((ssdb__Var_71 << (MR_Integer) 6)))))))))))))));
            }
            ssdb__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 5:
        case (MR_Integer) 53:
          {
            /* case "--verbose", "-v" */
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *ssdb__STATE_VARIABLE_Config_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((ssdb__Var_77 | ((((ssdb__Var_76 << (MR_Integer) 1)) | ((((ssdb__Var_75 << (MR_Integer) 2)) | ((((ssdb__Var_74 << (MR_Integer) 3)) | ((((ssdb__Var_73 << (MR_Integer) 4)) | (((((MR_Integer) 1 << (MR_Integer) 5)) | ((ssdb__Var_71 << (MR_Integer) 6)))))))))))))));
            }
            ssdb__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 17:
        case (MR_Integer) 49:
          {
            /* case "--raw", "-r" */
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *ssdb__STATE_VARIABLE_Config_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((ssdb__Var_77 | ((((ssdb__Var_76 << (MR_Integer) 1)) | ((((ssdb__Var_75 << (MR_Integer) 2)) | ((((ssdb__Var_74 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | ((((ssdb__Var_72 << (MR_Integer) 5)) | ((ssdb__Var_71 << (MR_Integer) 6)))))))))))))));
            }
            ssdb__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 19:
        case (MR_Integer) 60:
          {
            /* case "--print", "-P" */
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *ssdb__STATE_VARIABLE_Config_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (((MR_Integer) 1 | ((((ssdb__Var_76 << (MR_Integer) 1)) | ((((ssdb__Var_75 << (MR_Integer) 2)) | ((((ssdb__Var_74 << (MR_Integer) 3)) | ((((ssdb__Var_73 << (MR_Integer) 4)) | ((((ssdb__Var_72 << (MR_Integer) 5)) | ((ssdb__Var_71 << (MR_Integer) 6)))))))))))))));
            }
            ssdb__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 37:
        case (MR_Integer) 39:
          {
            /* case "--flat", "-f" */
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *ssdb__STATE_VARIABLE_Config_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((ssdb__Var_77 | ((((ssdb__Var_76 << (MR_Integer) 1)) | ((((ssdb__Var_75 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | ((((ssdb__Var_73 << (MR_Integer) 4)) | ((((ssdb__Var_72 << (MR_Integer) 5)) | ((ssdb__Var_71 << (MR_Integer) 6)))))))))))))));
            }
            ssdb__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 42:
        case (MR_Integer) 51:
          {
            /* case "--pretty", "-p" */
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *ssdb__STATE_VARIABLE_Config_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((ssdb__Var_77 | ((((ssdb__Var_76 << (MR_Integer) 1)) | ((((ssdb__Var_75 << (MR_Integer) 2)) | ((((ssdb__Var_74 << (MR_Integer) 3)) | ((((ssdb__Var_73 << (MR_Integer) 4)) | ((((ssdb__Var_72 << (MR_Integer) 5)) | (((MR_Integer) 1 << (MR_Integer) 6)))))))))))))));
            }
            ssdb__succeeded = MR_TRUE;
          }
          break;
      }
      /* jump out of search loop */
      goto label_0;
    }
    ssdb__succeeded = MR_FALSE;
  label_0:;
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb__execute_ssdb_format_3_p_0(
  MR_Word ssdb__STATE_VARIABLE_Args_0_21)
{
  {
    MR_bool ssdb__succeeded;
    MR_Word ssdb__Res_7;
    MR_Word ssdb__STATE_VARIABLE_Args_32_32;

    ssdb__process_options__ho2_5_p_0(ssdb__STATE_VARIABLE_Args_0_21, &ssdb__STATE_VARIABLE_Args_32_32, (MR_Word) &ssdb_scalar_common_3[0], &ssdb__Res_7);
    if (((MR_tag((MR_Word) ssdb__Res_7)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word ssdb__Error_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Res_7, (MR_Integer) 0)));
      MR_String ssdb__Var_35;

      mercury__io__write_string_3_p_0((MR_String) "ssdb: ");
      ssdb__Var_35 = mercury__io__error_message_1_f_0(ssdb__Error_20);
      mercury__io__write_string_3_p_0(ssdb__Var_35);
      mercury__io__nl_2_p_0();
    }
    else
    {
      MR_Word ssdb__P_8;
      MR_Word ssdb__B_9;
      MR_Word ssdb__A_10;
      MR_Word ssdb__F_11;
      MR_Word ssdb__Pr_12;
      MR_Word ssdb__V_13;
      MR_Word ssdb__NPr_14;
      MR_Word ssdb__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Res_7, (MR_Integer) 0)));
      MR_Word ssdb__Format_16;
      MR_String ssdb__Word_15;
      MR_Word ssdb__Var_39;
      MR_Integer ssdb__lo_0;
      MR_Integer ssdb__hi_1;
      MR_Integer ssdb__mid_2;
      MR_Integer ssdb__result_3;

      ssdb__P_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Var_38, (MR_Integer) 0)))) & (MR_Integer) 1);
      ssdb__B_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Var_38, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      ssdb__A_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Var_38, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      ssdb__F_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Var_38, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      ssdb__Pr_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Var_38, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      ssdb__V_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Var_38, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      ssdb__NPr_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Var_38, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      ssdb__succeeded = ((MR_tag((MR_Word) ssdb__STATE_VARIABLE_Args_32_32)) == (MR_mktag((MR_Integer) 1)));
      if (ssdb__succeeded)
      {
        ssdb__Word_15 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__STATE_VARIABLE_Args_32_32, (MR_Integer) 0)));
        ssdb__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__STATE_VARIABLE_Args_32_32, (MR_Integer) 1)));
        ssdb__succeeded = (ssdb__Var_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (ssdb__succeeded)
        {
          /* binary string simple lookup switch */
          ssdb__lo_0 = (MR_Integer) 0;
          ssdb__hi_1 = (MR_Integer) 3;
          do
          {
            ssdb__mid_2 = (((ssdb__lo_0 + ssdb__hi_1)) / (MR_Integer) 2);
            ssdb__result_3 = MR_strcmp(ssdb__Word_15, ((&ssdb_vector_common_12[0 + ssdb__mid_2]))->ssdb__vector_common_type_12_0__vct_12_f_0);
            if ((ssdb__result_3 == (MR_Integer) 0))
            {
              ssdb__Format_16 = ((&ssdb_vector_common_12[0 + ssdb__mid_2]))->ssdb__vector_common_type_12_0__vct_12_f_1;
              ssdb__succeeded = MR_TRUE;
              /* jump out of search loop */
              goto label_0;
            }
            else
            if ((ssdb__result_3 < (MR_Integer) 0))
              ssdb__hi_1 = (ssdb__mid_2 - (MR_Integer) 1);
            else
              ssdb__lo_0 = (ssdb__mid_2 + (MR_Integer) 1);
          }
          while ((ssdb__lo_0 <= ssdb__hi_1));
          ssdb__succeeded = MR_FALSE;
        label_0:;
        }
      }
      if (ssdb__succeeded)
      {
        MR_Word ssdb__State0_17;
        MR_Word ssdb__State_19;
        MR_Word ssdb__Var_41;

{
#define MR_PROC_LABEL ssdb__execute_ssdb_format_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_format_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_browser_state;


		;}
#undef MR_PROC_LABEL
	 ssdb__State0_17  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_format_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
        {
          ssdb__Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ssdb__Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ssdb__Var_41, 1) = ((MR_Box) (ssdb__Format_16));
        }
        mdb__browser_info__set_browser_param_11_p_0((MR_Integer) 0, ssdb__P_8, ssdb__B_9, ssdb__A_10, ssdb__F_11, ssdb__Pr_12, ssdb__V_13, ssdb__NPr_14, ssdb__Var_41, ssdb__State0_17, &ssdb__State_19);
{
#define MR_PROC_LABEL ssdb__execute_ssdb_format_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_format_3_p_0

	MR_Word X;

	X =  ssdb__State_19 ;
		{
ssdb__mutable_variable_browser_state = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_format_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "ssdb: cannot set to unknown format.\n");
      }
    }
  }
}

static void MR_CALL 
ssdb__process_options__ho2_5_p_0(
  MR_Word ssdb__Args0_7,
  MR_Word * ssdb__Args_8,
  MR_Word ssdb__Data0_9,
  MR_Word * ssdb__Res_10)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ssdb__succeeded;

      if ((ssdb__Args0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ssdb__Args_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *ssdb__Res_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ssdb__Data0_9));
        }
      }
      else
      {
        MR_String ssdb__First_11 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Args0_7, (MR_Integer) 0)));
        MR_Word ssdb__Rest_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Args0_7, (MR_Integer) 1)));

        ssdb__succeeded = mercury__string__prefix_2_p_0(ssdb__First_11, (MR_String) "--");
        if (ssdb__succeeded)
        {
          MR_Word ssdb__Data1_13;

          ssdb__succeeded = ssdb__format_options_3_p_0(ssdb__First_11, ssdb__Data0_9, &ssdb__Data1_13);
          if (ssdb__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word ssdb__next_value_of_Args0_7 = ssdb__Rest_12;
              MR_Word ssdb__next_value_of_Data0_9 = ssdb__Data1_13;

              ssdb__Args0_7 = ssdb__next_value_of_Args0_7;
              ssdb__Data0_9 = ssdb__next_value_of_Data0_9;
            }
            continue;
          }
          else
          {
            MR_String ssdb__Message_14;
            MR_String ssdb__Var_24;
            MR_Word ssdb__Var_26;

            ssdb__Var_24 = mercury__string__f_43_43_2_f_0(ssdb__First_11, (MR_String) "\'");
            ssdb__Message_14 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognised option \140", ssdb__Var_24);
            ssdb__Var_26 = mercury__io__make_io_error_1_f_0(ssdb__Message_14);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *ssdb__Res_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ssdb__Var_26));
            }
            *ssdb__Args_8 = ssdb__Args0_7;
          }
        }
        else
        {
          MR_Word ssdb__FirstChars_16;
          MR_Word ssdb__Var_28;
          MR_Char ssdb__Var_15;
          MR_Char ssdb__Var_17;
          MR_Word ssdb__Var_18;

          ssdb__succeeded = mercury__string__prefix_2_p_0(ssdb__First_11, (MR_String) "-");
          if (ssdb__succeeded)
          {
            mercury__string__to_char_list_2_p_0(ssdb__First_11, &ssdb__Var_28);
            ssdb__succeeded = ((MR_tag((MR_Word) ssdb__Var_28)) == (MR_mktag((MR_Integer) 1)));
            if (ssdb__succeeded)
            {
              ssdb__Var_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Var_28, (MR_Integer) 0)));
              ssdb__FirstChars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Var_28, (MR_Integer) 1)));
              ssdb__succeeded = ((MR_tag((MR_Word) ssdb__FirstChars_16)) == (MR_mktag((MR_Integer) 1)));
              if (ssdb__succeeded)
              {
                ssdb__Var_17 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), ssdb__FirstChars_16, (MR_Integer) 0)));
                ssdb__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__FirstChars_16, (MR_Integer) 1)));
              }
            }
          }
          if (ssdb__succeeded)
          {
            MR_Word ssdb__Res1_19;

            ssdb__process_short_options__ho5_4_p_0(ssdb__FirstChars_16, ssdb__Data0_9, &ssdb__Res1_19);
            if (((MR_tag((MR_Word) ssdb__Res1_19)) == (MR_mktag((MR_Integer) 1))))
            {
              *ssdb__Res_10 = ssdb__Res1_19;
              *ssdb__Args_8 = ssdb__Args0_7;
            }
            else
            {
              MR_Word ssdb__Data1_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Res1_19, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word ssdb__next_value_of_Args0_7 = ssdb__Rest_12;
                MR_Word ssdb__next_value_of_Data0_9 = ssdb__Data1_29;

                ssdb__Args0_7 = ssdb__next_value_of_Args0_7;
                ssdb__Data0_9 = ssdb__next_value_of_Data0_9;
              }
              continue;
            }
          }
          else
          {
            MR_Word ssdb__Rest1_21;

            ssdb__process_options__ho2_5_p_0(ssdb__Rest_12, &ssdb__Rest1_21, ssdb__Data0_9, ssdb__Res_10);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ssdb__Args_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ssdb__First_11));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ssdb__Rest1_21));
            }
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ssdb__process_short_options__ho5_4_p_0(
  MR_Word ssdb__Chars_6,
  MR_Word ssdb__Data0_7,
  MR_Word * ssdb__Res_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ssdb__succeeded;

      if ((ssdb__Chars_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *ssdb__Res_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ssdb__Data0_7));
        }
      else
      {
        MR_Char ssdb__C_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Chars_6, (MR_Integer) 0)));
        MR_Word ssdb__Cs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Chars_6, (MR_Integer) 1)));
        MR_String ssdb__Option_11;
        MR_Word ssdb__Var_14;
        MR_Word ssdb__Var_16;
        MR_Word ssdb__Data1_12;

        {
          ssdb__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ssdb__Var_16, 0) = ((MR_Box) (MR_Word) (ssdb__C_9));
          MR_hl_field(MR_mktag(1), ssdb__Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ssdb__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ssdb__Var_14, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
          MR_hl_field(MR_mktag(1), ssdb__Var_14, 1) = ((MR_Box) (ssdb__Var_16));
        }
        ssdb__Option_11 = mercury__string__from_char_list_1_f_0(ssdb__Var_14);
        ssdb__succeeded = ssdb__format_options_3_p_0(ssdb__Option_11, ssdb__Data0_7, &ssdb__Data1_12);
        if (ssdb__succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Word ssdb__next_value_of_Chars_6 = ssdb__Cs_10;
            MR_Word ssdb__next_value_of_Data0_7 = ssdb__Data1_12;

            ssdb__Chars_6 = ssdb__next_value_of_Chars_6;
            ssdb__Data0_7 = ssdb__next_value_of_Data0_7;
          }
          continue;
        }
        else
        {
          MR_String ssdb__Message_13;
          MR_String ssdb__Var_19;
          MR_Word ssdb__Var_21;

          ssdb__Var_19 = mercury__string__f_43_43_2_f_0(ssdb__Option_11, (MR_String) "\'");
          ssdb__Message_13 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognised option \140", ssdb__Var_19);
          ssdb__Var_21 = mercury__io__make_io_error_1_f_0(ssdb__Message_13);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ssdb__Res_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ssdb__Var_21));
          }
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
ssdb__format_options_3_p_0(
  MR_String ssdb__Opt_4,
  MR_Word ssdb__STATE_VARIABLE_Config_0_6,
  MR_Word * ssdb__STATE_VARIABLE_Config_7)
{
  {
    MR_bool ssdb__succeeded;
    MR_Word ssdb__Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__STATE_VARIABLE_Config_0_6, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ssdb__Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__STATE_VARIABLE_Config_0_6, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ssdb__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__STATE_VARIABLE_Config_0_6, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ssdb__Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__STATE_VARIABLE_Config_0_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ssdb__Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__STATE_VARIABLE_Config_0_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ssdb__Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__STATE_VARIABLE_Config_0_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ssdb__Var_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__STATE_VARIABLE_Config_0_6, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Integer ssdb__lo_0 = (MR_Integer) 0;
    MR_Integer ssdb__hi_1 = (MR_Integer) 5;
    MR_Integer ssdb__mid_2;
    MR_Integer ssdb__result_3;

    /* binary string jump switch */
    do
    {
      ssdb__mid_2 = (((ssdb__lo_0 + ssdb__hi_1)) / (MR_Integer) 2);
      ssdb__result_3 = MR_strcmp(ssdb__Opt_4, ((&ssdb_vector_common_11[0 + ssdb__mid_2]))->ssdb__vector_common_type_11_0__vct_11_f_0);
      if ((ssdb__result_3 == (MR_Integer) 0))
      {
        switch (((&ssdb_vector_common_11[0 + ssdb__mid_2]))->ssdb__vector_common_type_11_0__vct_11_f_1) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              /* case "--browse", "-B" */
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *ssdb__STATE_VARIABLE_Config_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((ssdb__Var_41 | (((((MR_Integer) 1 << (MR_Integer) 1)) | ((((ssdb__Var_39 << (MR_Integer) 2)) | ((((ssdb__Var_38 << (MR_Integer) 3)) | ((((ssdb__Var_37 << (MR_Integer) 4)) | ((((ssdb__Var_36 << (MR_Integer) 5)) | ((ssdb__Var_35 << (MR_Integer) 6)))))))))))))));
              }
              ssdb__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              /* case "--print", "-P" */
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *ssdb__STATE_VARIABLE_Config_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (((MR_Integer) 1 | ((((ssdb__Var_40 << (MR_Integer) 1)) | ((((ssdb__Var_39 << (MR_Integer) 2)) | ((((ssdb__Var_38 << (MR_Integer) 3)) | ((((ssdb__Var_37 << (MR_Integer) 4)) | ((((ssdb__Var_36 << (MR_Integer) 5)) | ((ssdb__Var_35 << (MR_Integer) 6)))))))))))))));
              }
              ssdb__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              /* case "--print-all", "-A" */
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *ssdb__STATE_VARIABLE_Config_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((ssdb__Var_41 | ((((ssdb__Var_40 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | ((((ssdb__Var_38 << (MR_Integer) 3)) | ((((ssdb__Var_37 << (MR_Integer) 4)) | ((((ssdb__Var_36 << (MR_Integer) 5)) | ((ssdb__Var_35 << (MR_Integer) 6)))))))))))))));
              }
              ssdb__succeeded = MR_TRUE;
            }
            break;
        }
        /* jump out of search loop */
        goto label_0;
      }
      else
      if ((ssdb__result_3 < (MR_Integer) 0))
        ssdb__hi_1 = (ssdb__mid_2 - (MR_Integer) 1);
      else
        ssdb__lo_0 = (ssdb__mid_2 + (MR_Integer) 1);
    }
    while ((ssdb__lo_0 <= ssdb__hi_1));
    ssdb__succeeded = MR_FALSE;
  label_0:;
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb__execute_ssdb_current_4_p_0(
  MR_Word ssdb__Args_5,
  MR_Word ssdb__Event_6)
{
  if ((ssdb__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    MR_Integer ssdb__EventNum_8;

{
#define MR_PROC_LABEL ssdb__execute_ssdb_current_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_current_4_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_cur_ssdb_event_number;


		;}
#undef MR_PROC_LABEL
	 ssdb__EventNum_8  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_current_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    ssdb__print_event_info_4_p_0(ssdb__Event_6, ssdb__EventNum_8);
  }
  else
  {
    mercury__io__write_string_3_p_0((MR_String) "ssdb: too many arguments to command.\n");
  }
}

static void MR_CALL 
ssdb__print_event_info_4_p_0(
  MR_Word ssdb__Event_5,
  MR_Integer ssdb__EventNum_6)
{
  {
    MR_Word ssdb__StackFrame_8;
    MR_Integer ssdb__CSN_9;
    MR_Word ssdb__ProcId_10;
    MR_Integer ssdb__PrintDepth_11;
    MR_String ssdb__SiteFile_12;
    MR_Integer ssdb__SiteLine_13;
    MR_String ssdb__Var_40;
    MR_String ssdb__Var_44;
    MR_String ssdb__Var_96;
    MR_Integer ssdb__Var_53;
    MR_Word ssdb__Var_58;
    MR_Word ssdb__Var_59;
    MR_String ssdb__Var_88;
    MR_String ssdb__Var_89;

    ssdb__stack_top_3_p_0(&ssdb__StackFrame_8);
    ssdb__Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 0)));
    ssdb__CSN_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 1)));
    ssdb__PrintDepth_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 2)));
    ssdb__ProcId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 3)));
    ssdb__SiteFile_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 4)));
    ssdb__SiteLine_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 5)));
    ssdb__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 6)));
    ssdb__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 7)));
    mercury__io__write_string_3_p_0((MR_String) "\t");
    mercury__io__write_int_3_p_0(ssdb__EventNum_6);
    mercury__io__write_string_3_p_0((MR_String) ":\t");
    mercury__io__write_int_3_p_0(ssdb__CSN_9);
    mercury__io__write_string_3_p_0((MR_String) "  ");
    mercury__io__write_int_3_p_0(ssdb__PrintDepth_11);
    mercury__io__write_string_3_p_0((MR_String) "\t");
    switch (ssdb__Event_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 3:
        {
          mercury__io__write_string_3_p_0((MR_String) "CALL");
        }
        break;
      case (MR_Integer) 7:
        {
          mercury__io__write_string_3_p_0((MR_String) "EXCP");
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 4:
        {
          mercury__io__write_string_3_p_0((MR_String) "EXIT");
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 6:
        {
          mercury__io__write_string_3_p_0((MR_String) "FAIL");
        }
        break;
      case (MR_Integer) 5:
        {
          mercury__io__write_string_3_p_0((MR_String) "REDO");
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) " ");
    ssdb__Var_40 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__ProcId_10, (MR_Integer) 0)));
    ssdb__Var_88 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__ProcId_10, (MR_Integer) 1)));
    mercury__io__write_string_3_p_0(ssdb__Var_40);
    mercury__io__write_string_3_p_0((MR_String) ".");
    ssdb__Var_89 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__ProcId_10, (MR_Integer) 0)));
    ssdb__Var_44 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__ProcId_10, (MR_Integer) 1)));
    mercury__io__write_string_3_p_0(ssdb__Var_44);
    mercury__io__write_string_3_p_0((MR_String) " (");
    mercury__io__write_string_3_p_0(ssdb__SiteFile_12);
    mercury__io__write_string_3_p_0((MR_String) ":");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ssdb_scalar_common_3[1], ssdb__SiteLine_13, &ssdb__Var_96);
    mercury__io__write_string_3_p_0(ssdb__Var_96);
    mercury__io__write_string_3_p_0((MR_String) ")\n");
  }
}

static void MR_CALL 
ssdb__execute_ssdb_level_5_p_0(
  MR_Word ssdb__Args_6,
  MR_Integer ssdb__STATE_VARIABLE_Depth_0_14,
  MR_Integer * ssdb__STATE_VARIABLE_Depth_15)
{
  {
    MR_bool ssdb__succeeded;

    if ((ssdb__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "ssdb: command requires argument.\n");
      *ssdb__STATE_VARIABLE_Depth_15 = ssdb__STATE_VARIABLE_Depth_0_14;
    }
    else
    {
      MR_Word ssdb__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Args_6, (MR_Integer) 1)));
      MR_String ssdb__Var_26 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Args_6, (MR_Integer) 0)));

      if ((ssdb__Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer ssdb__N_10;
        MR_Integer ssdb__Var_34;

        ssdb__succeeded = mercury__string__to_int_2_p_0(ssdb__Var_26, &ssdb__N_10);
        if (ssdb__succeeded)
        {
          ssdb__Var_34 = (MR_Integer) 0;
          ssdb__succeeded = (ssdb__N_10 >= ssdb__Var_34);
        }
        if (ssdb__succeeded)
          ssdb__change_depth_5_p_0(ssdb__N_10, ssdb__STATE_VARIABLE_Depth_0_14, ssdb__STATE_VARIABLE_Depth_15);
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "ssdb: command requires integer argument.\n");
          *ssdb__STATE_VARIABLE_Depth_15 = ssdb__STATE_VARIABLE_Depth_0_14;
        }
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "ssdb: too many arguments to command.\n");
        *ssdb__STATE_VARIABLE_Depth_15 = ssdb__STATE_VARIABLE_Depth_0_14;
      }
    }
  }
}

static void MR_CALL 
ssdb__execute_ssdb_up_5_p_0(
  MR_Word ssdb__Args_6,
  MR_Integer ssdb__STATE_VARIABLE_Depth_0_9,
  MR_Integer * ssdb__STATE_VARIABLE_Depth_10)
{
  {
    MR_bool ssdb__succeeded;

    if ((ssdb__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer ssdb__Var_37 = (ssdb__STATE_VARIABLE_Depth_0_9 + (MR_Integer) 1);

      ssdb__change_depth_5_p_0(ssdb__Var_37, ssdb__STATE_VARIABLE_Depth_0_9, ssdb__STATE_VARIABLE_Depth_10);
    }
    else
    {
      MR_Word ssdb__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Args_6, (MR_Integer) 1)));
      MR_String ssdb__Var_41 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Args_6, (MR_Integer) 0)));

      if ((ssdb__Var_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer ssdb__N_25;
        MR_Integer ssdb__Var_44;

        ssdb__succeeded = mercury__string__to_int_2_p_0(ssdb__Var_41, &ssdb__N_25);
        if (ssdb__succeeded)
        {
          ssdb__Var_44 = (MR_Integer) 0;
          ssdb__succeeded = (ssdb__N_25 >= ssdb__Var_44);
        }
        if (ssdb__succeeded)
        {
          MR_Integer ssdb__Var_32;
          MR_Integer ssdb__Var_35 = (ssdb__N_25 * (MR_Integer) 1);

          ssdb__Var_32 = (ssdb__STATE_VARIABLE_Depth_0_9 + ssdb__Var_35);
          ssdb__change_depth_5_p_0(ssdb__Var_32, ssdb__STATE_VARIABLE_Depth_0_9, ssdb__STATE_VARIABLE_Depth_10);
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "ssdb: command requires integer argument.\n");
          *ssdb__STATE_VARIABLE_Depth_10 = ssdb__STATE_VARIABLE_Depth_0_9;
        }
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "ssdb: too many arguments to command.\n");
        *ssdb__STATE_VARIABLE_Depth_10 = ssdb__STATE_VARIABLE_Depth_0_9;
      }
    }
  }
}

static void MR_CALL 
ssdb__execute_ssdb_down_5_p_0(
  MR_Word ssdb__Args_6,
  MR_Integer ssdb__STATE_VARIABLE_Depth_0_9,
  MR_Integer * ssdb__STATE_VARIABLE_Depth_10)
{
  {
    MR_bool ssdb__succeeded;

    if ((ssdb__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer ssdb__Var_37 = (ssdb__STATE_VARIABLE_Depth_0_9 + (MR_Integer) -1);

      ssdb__change_depth_5_p_0(ssdb__Var_37, ssdb__STATE_VARIABLE_Depth_0_9, ssdb__STATE_VARIABLE_Depth_10);
    }
    else
    {
      MR_Word ssdb__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Args_6, (MR_Integer) 1)));
      MR_String ssdb__Var_41 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Args_6, (MR_Integer) 0)));

      if ((ssdb__Var_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer ssdb__N_25;
        MR_Integer ssdb__Var_44;

        ssdb__succeeded = mercury__string__to_int_2_p_0(ssdb__Var_41, &ssdb__N_25);
        if (ssdb__succeeded)
        {
          ssdb__Var_44 = (MR_Integer) 0;
          ssdb__succeeded = (ssdb__N_25 >= ssdb__Var_44);
        }
        if (ssdb__succeeded)
        {
          MR_Integer ssdb__Var_32;
          MR_Integer ssdb__Var_35 = (ssdb__N_25 * (MR_Integer) -1);

          ssdb__Var_32 = (ssdb__STATE_VARIABLE_Depth_0_9 + ssdb__Var_35);
          ssdb__change_depth_5_p_0(ssdb__Var_32, ssdb__STATE_VARIABLE_Depth_0_9, ssdb__STATE_VARIABLE_Depth_10);
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "ssdb: command requires integer argument.\n");
          *ssdb__STATE_VARIABLE_Depth_10 = ssdb__STATE_VARIABLE_Depth_0_9;
        }
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "ssdb: too many arguments to command.\n");
        *ssdb__STATE_VARIABLE_Depth_10 = ssdb__STATE_VARIABLE_Depth_0_9;
      }
    }
  }
}

static void MR_CALL 
ssdb__change_depth_5_p_0(
  MR_Integer ssdb__ChangedDepth_6,
  MR_Integer ssdb__STATE_VARIABLE_Depth_0_10,
  MR_Integer * ssdb__STATE_VARIABLE_Depth_11)
{
  {
    MR_bool ssdb__succeeded;
    MR_Integer ssdb__StackDepth_9;

{
#define MR_PROC_LABEL ssdb__change_depth_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__change_depth_5_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_shadow_stack_depth;


		;}
#undef MR_PROC_LABEL
	 ssdb__StackDepth_9  = X;
}
{
#define MR_PROC_LABEL ssdb__change_depth_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    ssdb__succeeded = (ssdb__ChangedDepth_6 < (MR_Integer) 0);
    if (ssdb__succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "ssdb: that stack frame does not exist.\n");
      *ssdb__STATE_VARIABLE_Depth_11 = ssdb__STATE_VARIABLE_Depth_0_10;
    }
    else
    {
      ssdb__succeeded = (ssdb__ChangedDepth_6 >= ssdb__StackDepth_9);
      if (ssdb__succeeded)
      {
        mercury__io__write_string_3_p_0((MR_String) "ssdb: not that many ancestors.\n");
        *ssdb__STATE_VARIABLE_Depth_11 = ssdb__STATE_VARIABLE_Depth_0_10;
      }
      else
      {
        MR_Word ssdb__StackFrame_34;
        MR_Integer ssdb__StackDepth_35;
        MR_String ssdb__Var_47;
        MR_Word ssdb__Stack_60;
        MR_Box ssdb__conv0_StackFrame_34;

        mercury__io__write_string_3_p_0((MR_String) "Ancestor level set to ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ssdb_scalar_common_3[1], ssdb__ChangedDepth_6, &ssdb__Var_47);
        mercury__io__write_string_3_p_0(ssdb__Var_47);
        mercury__io__write_string_3_p_0((MR_String) ":\n");
{
#define MR_PROC_LABEL ssdb__change_depth_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__change_depth_5_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_60  = X;
}
{
#define MR_PROC_LABEL ssdb__change_depth_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__list__det_index0_3_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_stack_frame_0, ssdb__Stack_60, ssdb__ChangedDepth_6, &ssdb__conv0_StackFrame_34);
        ssdb__StackFrame_34 = ((MR_Word) ssdb__conv0_StackFrame_34);
{
#define MR_PROC_LABEL ssdb__change_depth_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__change_depth_5_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_shadow_stack_depth;


		;}
#undef MR_PROC_LABEL
	 ssdb__StackDepth_35  = X;
}
{
#define MR_PROC_LABEL ssdb__change_depth_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
        ssdb__print_frame_info_4_p_0(ssdb__StackFrame_34, ssdb__StackDepth_35);
        *ssdb__STATE_VARIABLE_Depth_11 = ssdb__ChangedDepth_6;
      }
    }
  }
}

static void MR_CALL 
ssdb__print_frame_info_4_p_0(
  MR_Word ssdb__StackFrame_5,
  MR_Integer ssdb__StackDepth_6)
{
  {
    MR_Integer ssdb__Depth_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_5, (MR_Integer) 2)));
    MR_Word ssdb__ProcId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_5, (MR_Integer) 3)));
    MR_String ssdb__ModuleName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__ProcId_9, (MR_Integer) 0)));
    MR_String ssdb__ProcName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__ProcId_9, (MR_Integer) 1)));
    MR_String ssdb__SiteFile_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_5, (MR_Integer) 4)));
    MR_Integer ssdb__SiteLine_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_5, (MR_Integer) 5)));
    MR_Integer ssdb__RevDepth_14 = (ssdb__StackDepth_6 - ssdb__Depth_8);
    MR_String ssdb__Var_59;
    MR_Word ssdb__Var_65 = (MR_Word) &ssdb_scalar_common_3[1];
    MR_String ssdb__Var_79;
    MR_Integer ssdb__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_5, (MR_Integer) 0)));
    MR_Integer ssdb__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_5, (MR_Integer) 1)));
    MR_Word ssdb__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_5, (MR_Integer) 6)));
    MR_Word ssdb__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_5, (MR_Integer) 7)));

    mercury__string__format__format_signed_int_component_width_noprec_4_p_0(ssdb__Var_65, (MR_Integer) 4, ssdb__RevDepth_14, &ssdb__Var_59);
    mercury__io__write_string_3_p_0(ssdb__Var_59);
    mercury__io__write_string_3_p_0((MR_String) "  ");
    mercury__io__write_string_3_p_0(ssdb__ModuleName_10);
    mercury__io__write_string_3_p_0((MR_String) ".");
    mercury__io__write_string_3_p_0(ssdb__ProcName_11);
    mercury__io__write_string_3_p_0((MR_String) " (");
    mercury__io__write_string_3_p_0(ssdb__SiteFile_12);
    mercury__io__write_string_3_p_0((MR_String) ":");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ssdb__Var_65, ssdb__SiteLine_13, &ssdb__Var_79);
    mercury__io__write_string_3_p_0(ssdb__Var_79);
    mercury__io__write_string_3_p_0((MR_String) ")\n");
  }
}

static void MR_CALL 
ssdb__execute_ssdb_vars_4_p_0(
  MR_Word ssdb__Args_5,
  MR_Integer ssdb__Depth_6)
{
  if ((ssdb__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    MR_Word ssdb__StackFrame_8;
    MR_Word ssdb__ListVarValue_9;
    MR_Word ssdb__Stack_30;
    MR_Box ssdb__conv0_StackFrame_8;
    MR_Integer ssdb__Var_18;
    MR_Integer ssdb__Var_19;
    MR_Integer ssdb__Var_20;
    MR_Word ssdb__Var_21;
    MR_String ssdb__Var_22;
    MR_Integer ssdb__Var_23;
    MR_Word ssdb__Var_24;

{
#define MR_PROC_LABEL ssdb__execute_ssdb_vars_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_vars_4_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_30  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_vars_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    mercury__list__det_index0_3_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_stack_frame_0, ssdb__Stack_30, ssdb__Depth_6, &ssdb__conv0_StackFrame_8);
    ssdb__StackFrame_8 = ((MR_Word) ssdb__conv0_StackFrame_8);
    ssdb__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 0)));
    ssdb__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 1)));
    ssdb__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 2)));
    ssdb__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 3)));
    ssdb__Var_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 4)));
    ssdb__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 5)));
    ssdb__ListVarValue_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 6)));
    ssdb__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 7)));
    ssdb__print_vars_list_4_p_0(ssdb__ListVarValue_9, (MR_Integer) 1);
  }
  else
  {
    mercury__io__write_string_3_p_0((MR_String) "ssdb: too many arguments to command.\n");
  }
}

static void MR_CALL 
ssdb__print_vars_list_4_p_0(
  MR_Word ssdb__HeadVar__1_1,
  MR_Integer ssdb__VarNum_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ssdb__succeeded;

      if (!((ssdb__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        MR_Word ssdb__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ssdb__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__1_1, (MR_Integer) 1)));
        MR_String ssdb__Name_13;
        MR_Integer ssdb__Pos_14;
        MR_Integer ssdb__Var_34;
        MR_String ssdb__Var_42;
        MR_Word ssdb__Var_48;

        mercury__io__write_string_3_p_0((MR_String) "\t");
        ssdb__Var_48 = (MR_Word) &ssdb_scalar_common_3[1];
        mercury__string__format__format_signed_int_component_width_noprec_4_p_0(ssdb__Var_48, (MR_Integer) 2, ssdb__VarNum_2, &ssdb__Var_42);
        mercury__io__write_string_3_p_0(ssdb__Var_42);
        mercury__io__write_string_3_p_0((MR_String) " ");
        switch (MR_tag((MR_Word) ssdb__Var_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ssdb__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__Var_9, (MR_Integer) 0)));
              ssdb__Pos_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Var_9, (MR_Integer) 1)));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ssdb__TypeInfo_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Var_9, (MR_Integer) 0)));
              MR_Box ssdb__Var_15;

              ssdb__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Var_9, (MR_Integer) 1)));
              ssdb__Pos_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ssdb__Var_9, (MR_Integer) 2)));
              ssdb__Var_15 = (MR_hl_field(MR_mktag(1), ssdb__Var_9, (MR_Integer) 3));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ssdb__TypeInfo_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), ssdb__Var_9, (MR_Integer) 0)));
              MR_Box ssdb__Var_16;

              ssdb__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(2), ssdb__Var_9, (MR_Integer) 1)));
              ssdb__Var_16 = (MR_hl_field(MR_mktag(2), ssdb__Var_9, (MR_Integer) 2));
              ssdb__Pos_14 = (MR_Integer) -1;
            }
            break;
        }
        mercury__io__write_string_3_p_0(ssdb__Name_13);
        ssdb__succeeded = (ssdb__Pos_14 >= (MR_Integer) 0);
        if (ssdb__succeeded)
        {
          MR_Integer ssdb__Var_30 = (ssdb__Pos_14 + (MR_Integer) 1);
          MR_String ssdb__Var_54;

          mercury__io__write_string_3_p_0((MR_String) " (arg ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ssdb__Var_48, ssdb__Var_30, &ssdb__Var_54);
          mercury__io__write_string_3_p_0(ssdb__Var_54);
          mercury__io__write_string_3_p_0((MR_String) ")\n");
        }
        else
          mercury__io__nl_2_p_0();
        ssdb__Var_34 = (ssdb__VarNum_2 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Word ssdb__next_value_of_HeadVar__1_1 = ssdb__Vars_10;
          MR_Integer ssdb__next_value_of_VarNum_2 = ssdb__Var_34;

          ssdb__HeadVar__1_1 = ssdb__next_value_of_HeadVar__1_1;
          ssdb__VarNum_2 = ssdb__next_value_of_VarNum_2;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ssdb__execute_ssdb_browse_4_p_0(
  MR_Word ssdb__Args_5,
  MR_Integer ssdb__Depth_6)
{
  {
    MR_Word ssdb__StackFrame_8;
    MR_Word ssdb__Stack_37;
    MR_Box ssdb__conv0_StackFrame_8;

{
#define MR_PROC_LABEL ssdb__execute_ssdb_browse_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_browse_4_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_37  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_browse_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    mercury__list__det_index0_3_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_stack_frame_0, ssdb__Stack_37, ssdb__Depth_6, &ssdb__conv0_StackFrame_8);
    ssdb__StackFrame_8 = ((MR_Word) ssdb__conv0_StackFrame_8);
    if ((ssdb__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word ssdb__Var_21;
      MR_Word ssdb__ProcId_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 3)));
      MR_String ssdb__ProcName_47 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__ProcId_45, (MR_Integer) 1)));
      MR_Word ssdb__ArgUnivs_48;
      MR_Word ssdb__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 6)));
      MR_Word ssdb__StdIn_70;
      MR_Word ssdb__StdOut_71;
      MR_Word ssdb__State0_72;
      MR_Word ssdb__State_73;
      MR_Integer ssdb__Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 0)));
      MR_Integer ssdb__Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 1)));
      MR_Integer ssdb__Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 2)));
      MR_String ssdb__Var_55 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 4)));
      MR_Integer ssdb__Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 5)));
      MR_Word ssdb__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 7)));
      MR_String ssdb___ModuleName_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__ProcId_45, (MR_Integer) 0)));
      MR_Word ssdb__Var_74;

      ssdb__make_arg_univs_3_p_0(ssdb__Var_57, (MR_Integer) 0, &ssdb__ArgUnivs_48);
      {
        ssdb__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ssdb__Var_21, 0) = ((MR_Box) (ssdb__ProcName_47));
        MR_hl_field(MR_mktag(1), ssdb__Var_21, 1) = ((MR_Box) (ssdb__ArgUnivs_48));
        MR_hl_field(MR_mktag(1), ssdb__Var_21, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      mercury__io__input_stream_3_p_0(&ssdb__StdIn_70);
      mercury__io__output_stream_3_p_0(&ssdb__StdOut_71);
{
#define MR_PROC_LABEL ssdb__execute_ssdb_browse_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_browse_4_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_browser_state;


		;}
#undef MR_PROC_LABEL
	 ssdb__State0_72  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_browse_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      mdb__browse__browse_browser_term_no_modes_8_p_0(ssdb__Var_21, ssdb__StdIn_70, ssdb__StdOut_71, &ssdb__Var_74, ssdb__State0_72, &ssdb__State_73);
{
#define MR_PROC_LABEL ssdb__execute_ssdb_browse_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_browse_4_p_0

	MR_Word X;

	X =  ssdb__State_73 ;
		{
ssdb__mutable_variable_browser_state = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_browse_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    }
    else
    {
      MR_Word ssdb__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Args_5, (MR_Integer) 1)));
      MR_String ssdb__Var_31 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Args_5, (MR_Integer) 0)));

      if ((ssdb__Var_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ssdb__ListVarValue_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 6)));
        MR_Integer ssdb__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 0)));
        MR_Integer ssdb__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 1)));
        MR_Integer ssdb__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 2)));
        MR_Word ssdb__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 3)));
        MR_String ssdb__Var_27 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 4)));
        MR_Integer ssdb__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 5)));
        MR_Word ssdb__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_8, (MR_Integer) 7)));

        ssdb__browse_var_4_p_0(ssdb__ListVarValue_10, ssdb__Var_31);
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "ssdb: too many arguments to command.\n");
      }
    }
  }
}

static void MR_CALL 
ssdb__browse_var_4_p_0(
  MR_Word ssdb__ListVarValue_5,
  MR_String ssdb__VarName_6)
{
  {
    MR_bool ssdb__succeeded;
    MR_Integer ssdb__VarNum_8;
    MR_Integer ssdb__Var_20;

    ssdb__succeeded = mercury__string__to_int_2_p_0(ssdb__VarName_6, &ssdb__VarNum_8);
    if (ssdb__succeeded)
    {
      ssdb__Var_20 = (MR_Integer) 0;
      ssdb__succeeded = (ssdb__VarNum_8 > ssdb__Var_20);
    }
    if (ssdb__succeeded)
    {
      MR_Word ssdb__VarValue_9;
      MR_Box ssdb__conv0_VarValue_9;

      ssdb__succeeded = mercury__list__index1_3_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_var_value_0, ssdb__ListVarValue_5, ssdb__VarNum_8, &ssdb__conv0_VarValue_9);
      if (ssdb__succeeded)
      {
        ssdb__VarValue_9 = ((MR_Word) ssdb__conv0_VarValue_9);
        ssdb__succeeded = MR_TRUE;
      }
      if (ssdb__succeeded)
        switch (MR_tag((MR_Word) ssdb__VarValue_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) "ssdb: the variable is unbound.\n");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ssdb__TypeInfo_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__VarValue_9, (MR_Integer) 0)));
              MR_Box ssdb__Value_12 = (MR_hl_field(MR_mktag(1), ssdb__VarValue_9, (MR_Integer) 3));
              MR_Word ssdb__Univ_13;
              MR_Word ssdb__Var_25;
              MR_Word ssdb__StdIn_45;
              MR_Word ssdb__StdOut_46;
              MR_Word ssdb__State0_47;
              MR_Word ssdb__State_48;
              MR_String ssdb__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__VarValue_9, (MR_Integer) 1)));
              MR_Integer ssdb__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ssdb__VarValue_9, (MR_Integer) 2)));
              MR_Word ssdb__Var_49;

              mercury__univ__type_to_univ_2_p_1(ssdb__TypeInfo_37_37, ssdb__Value_12, &ssdb__Univ_13);
              {
                ssdb__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ssdb__Var_25, 0) = ((MR_Box) (ssdb__Univ_13));
              }
              mercury__io__input_stream_3_p_0(&ssdb__StdIn_45);
              mercury__io__output_stream_3_p_0(&ssdb__StdOut_46);
{
#define MR_PROC_LABEL ssdb__browse_var_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__browse_var_4_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_browser_state;


		;}
#undef MR_PROC_LABEL
	 ssdb__State0_47  = X;
}
{
#define MR_PROC_LABEL ssdb__browse_var_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
              mdb__browse__browse_browser_term_no_modes_8_p_0(ssdb__Var_25, ssdb__StdIn_45, ssdb__StdOut_46, &ssdb__Var_49, ssdb__State0_47, &ssdb__State_48);
{
#define MR_PROC_LABEL ssdb__browse_var_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__browse_var_4_p_0

	MR_Word X;

	X =  ssdb__State_48 ;
		{
ssdb__mutable_variable_browser_state = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__browse_var_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ssdb__TypeInfo_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), ssdb__VarValue_9, (MR_Integer) 0)));
              MR_Word ssdb__Var_23;
              MR_Box ssdb__Value_33 = (MR_hl_field(MR_mktag(2), ssdb__VarValue_9, (MR_Integer) 2));
              MR_Word ssdb__Univ_34;
              MR_Word ssdb__StdIn_65;
              MR_Word ssdb__StdOut_66;
              MR_Word ssdb__State0_67;
              MR_Word ssdb__State_68;
              MR_String ssdb__Var_14 = ((MR_String) (MR_hl_field(MR_mktag(2), ssdb__VarValue_9, (MR_Integer) 1)));
              MR_Word ssdb__Var_69;

              mercury__univ__type_to_univ_2_p_1(ssdb__TypeInfo_38_38, ssdb__Value_33, &ssdb__Univ_34);
              {
                ssdb__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ssdb__Var_23, 0) = ((MR_Box) (ssdb__Univ_34));
              }
              mercury__io__input_stream_3_p_0(&ssdb__StdIn_65);
              mercury__io__output_stream_3_p_0(&ssdb__StdOut_66);
{
#define MR_PROC_LABEL ssdb__browse_var_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__browse_var_4_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_browser_state;


		;}
#undef MR_PROC_LABEL
	 ssdb__State0_67  = X;
}
{
#define MR_PROC_LABEL ssdb__browse_var_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
              mdb__browse__browse_browser_term_no_modes_8_p_0(ssdb__Var_23, ssdb__StdIn_65, ssdb__StdOut_66, &ssdb__Var_69, ssdb__State0_67, &ssdb__State_68);
{
#define MR_PROC_LABEL ssdb__browse_var_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__browse_var_4_p_0

	MR_Word X;

	X =  ssdb__State_68 ;
		{
ssdb__mutable_variable_browser_state = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__browse_var_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
            }
            break;
        }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "ssdb: there aren\'t that many variables.\n");
      }
    }
    else
    {
      MR_Word ssdb__Univ_35;
      MR_Word ssdb__VarDescs_17;
      MR_Box ssdb__conv1_Univ_35;

      ssdb__list_var_value_to_assoc_list_2_p_0(ssdb__ListVarValue_5, &ssdb__VarDescs_17);
      ssdb__succeeded = mercury__assoc_list__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, ssdb__VarDescs_17, ((MR_Box) (ssdb__VarName_6)), &ssdb__conv1_Univ_35);
      if (ssdb__succeeded)
      {
        ssdb__Univ_35 = ((MR_Word) ssdb__conv1_Univ_35);
        ssdb__succeeded = MR_TRUE;
      }
      if (ssdb__succeeded)
      {
        MR_Word ssdb__Var_29;

        {
          ssdb__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ssdb__Var_29, 0) = ((MR_Box) (ssdb__Univ_35));
        }
        ssdb__browse_term_3_p_0(ssdb__Var_29);
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "ssdb: there is no such variable.\n");
      }
    }
  }
}

static void MR_CALL 
ssdb__list_var_value_to_assoc_list_2_p_0(
  MR_Word ssdb__HeadVar__1_1,
  MR_Word * ssdb__HeadVar__2_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((ssdb__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ssdb__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word ssdb__VarValue_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ssdb__VarValues_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__1_1, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) ssdb__VarValue_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            /* direct tailcall eliminated */
            {
              MR_Word ssdb__next_value_of_HeadVar__1_1 = ssdb__VarValues_4;

              ssdb__HeadVar__1_1 = ssdb__next_value_of_HeadVar__1_1;
            }
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ssdb__TypeInfo_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__VarValue_3, (MR_Integer) 0)));
            MR_String ssdb__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__VarValue_3, (MR_Integer) 1)));
            MR_Box ssdb__Value_9 = (MR_hl_field(MR_mktag(1), ssdb__VarValue_3, (MR_Integer) 3));
            MR_Word ssdb__ValueUniv_10;
            MR_Word ssdb__AssocListVarValue0_11;
            MR_Word ssdb__Var_13;
            MR_Integer ssdb___Pos_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ssdb__VarValue_3, (MR_Integer) 2)));

            mercury__univ__type_to_univ_2_p_1(ssdb__TypeInfo_20_20, ssdb__Value_9, &ssdb__ValueUniv_10);
            ssdb__list_var_value_to_assoc_list_2_p_0(ssdb__VarValues_4, &ssdb__AssocListVarValue0_11);
            ssdb__Var_13 = mercury__pair__pair_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, ((MR_Box) (ssdb__Name_8)), ((MR_Box) (ssdb__ValueUniv_10)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ssdb__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ssdb__Var_13));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ssdb__AssocListVarValue0_11));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ssdb__TypeInfo_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ssdb__VarValue_3, (MR_Integer) 0)));
            MR_Word ssdb__Var_12;
            MR_String ssdb__Name_16 = ((MR_String) (MR_hl_field(MR_mktag(2), ssdb__VarValue_3, (MR_Integer) 1)));
            MR_Box ssdb__Value_17 = (MR_hl_field(MR_mktag(2), ssdb__VarValue_3, (MR_Integer) 2));
            MR_Word ssdb__ValueUniv_18;
            MR_Word ssdb__AssocListVarValue0_19;

            mercury__univ__type_to_univ_2_p_1(ssdb__TypeInfo_23_23, ssdb__Value_17, &ssdb__ValueUniv_18);
            ssdb__list_var_value_to_assoc_list_2_p_0(ssdb__VarValues_4, &ssdb__AssocListVarValue0_19);
            ssdb__Var_12 = mercury__pair__pair_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, ((MR_Box) (ssdb__Name_16)), ((MR_Box) (ssdb__ValueUniv_18)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ssdb__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ssdb__Var_12));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ssdb__AssocListVarValue0_19));
            }
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
ssdb__browse_term_3_p_0(
  MR_Word ssdb__Term_4)
{
  {
    MR_Word ssdb__StdIn_6;
    MR_Word ssdb__StdOut_7;
    MR_Word ssdb__State0_8;
    MR_Word ssdb__State_9;
    MR_Word ssdb__Var_10;

    mercury__io__input_stream_3_p_0(&ssdb__StdIn_6);
    mercury__io__output_stream_3_p_0(&ssdb__StdOut_7);
{
#define MR_PROC_LABEL ssdb__browse_term_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__browse_term_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_browser_state;


		;}
#undef MR_PROC_LABEL
	 ssdb__State0_8  = X;
}
{
#define MR_PROC_LABEL ssdb__browse_term_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    mdb__browse__browse_browser_term_no_modes_8_p_0(ssdb__Term_4, ssdb__StdIn_6, ssdb__StdOut_7, &ssdb__Var_10, ssdb__State0_8, &ssdb__State_9);
{
#define MR_PROC_LABEL ssdb__browse_term_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__browse_term_3_p_0

	MR_Word X;

	X =  ssdb__State_9 ;
		{
ssdb__mutable_variable_browser_state = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__browse_term_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__execute_ssdb_print_4_p_0(
  MR_Word ssdb__STATE_VARIABLE_Args_0_17,
  MR_Integer ssdb__Depth_6)
{
  {
    MR_bool ssdb__succeeded;
    MR_Word ssdb__Res_8;
    MR_Word ssdb__STATE_VARIABLE_Args_21_21;

    ssdb__process_options__ho3_5_p_0(ssdb__STATE_VARIABLE_Args_0_17, &ssdb__STATE_VARIABLE_Args_21_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ssdb__Res_8);
    if (((MR_tag((MR_Word) ssdb__Res_8)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word ssdb__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Res_8, (MR_Integer) 0)));
      MR_String ssdb__Var_25;

      mercury__io__write_string_3_p_0((MR_String) "ssdb: ");
      ssdb__Var_25 = mercury__io__error_message_1_f_0(ssdb__Error_16);
      mercury__io__write_string_3_p_0(ssdb__Var_25);
      mercury__io__nl_2_p_0();
    }
    else
    {
      MR_Word ssdb__MaybeFormat_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Res_8, (MR_Integer) 0)));
      MR_Word ssdb__StackFrame_10;
      MR_Word ssdb__Stack_65;
      MR_Box ssdb__conv0_StackFrame_10;

{
#define MR_PROC_LABEL ssdb__execute_ssdb_print_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_print_4_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_65  = X;
}
{
#define MR_PROC_LABEL ssdb__execute_ssdb_print_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      mercury__list__det_index0_3_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_stack_frame_0, ssdb__Stack_65, ssdb__Depth_6, &ssdb__conv0_StackFrame_10);
      ssdb__StackFrame_10 = ((MR_Word) ssdb__conv0_StackFrame_10);
      ssdb__succeeded = (ssdb__STATE_VARIABLE_Args_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (ssdb__succeeded)
      {
        MR_Word ssdb__Term_11;
        MR_Word ssdb__ProcId_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 3)));
        MR_String ssdb__ProcName_75 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__ProcId_73, (MR_Integer) 1)));
        MR_Word ssdb__ArgUnivs_76;
        MR_Word ssdb__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 6)));
        MR_Integer ssdb__Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 0)));
        MR_Integer ssdb__Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 1)));
        MR_Integer ssdb__Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 2)));
        MR_String ssdb__Var_83 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 4)));
        MR_Integer ssdb__Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 5)));
        MR_Word ssdb__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 7)));
        MR_String ssdb___ModuleName_74 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__ProcId_73, (MR_Integer) 0)));

        ssdb__make_arg_univs_3_p_0(ssdb__Var_85, (MR_Integer) 0, &ssdb__ArgUnivs_76);
        {
          ssdb__Term_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ssdb__Term_11, 0) = ((MR_Box) (ssdb__ProcName_75));
          MR_hl_field(MR_mktag(1), ssdb__Term_11, 1) = ((MR_Box) (ssdb__ArgUnivs_76));
          MR_hl_field(MR_mktag(1), ssdb__Term_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        ssdb__print_browser_term_5_p_0(ssdb__MaybeFormat_9, (MR_Integer) 0, ssdb__Term_11);
      }
      else
      {
        MR_String ssdb__Var_31;
        MR_Word ssdb__Var_32;

        ssdb__succeeded = ((MR_tag((MR_Word) ssdb__STATE_VARIABLE_Args_21_21)) == (MR_mktag((MR_Integer) 1)));
        if (ssdb__succeeded)
        {
          ssdb__Var_31 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__STATE_VARIABLE_Args_21_21, (MR_Integer) 0)));
          ssdb__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__STATE_VARIABLE_Args_21_21, (MR_Integer) 1)));
          ssdb__succeeded = (strcmp(ssdb__Var_31, (MR_String) "*") == 0);
          if (ssdb__succeeded)
            ssdb__succeeded = (ssdb__Var_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        if (ssdb__succeeded)
        {
          MR_Word ssdb__ListVarValue_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 6)));
          MR_Integer ssdb__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 0)));
          MR_Integer ssdb__Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 1)));
          MR_Integer ssdb__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 2)));
          MR_Word ssdb__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 3)));
          MR_String ssdb__Var_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 4)));
          MR_Integer ssdb__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 5)));
          MR_Word ssdb__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 7)));

          if ((ssdb__ListVarValue_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            mercury__io__write_string_3_p_0((MR_String) "ssdb: there are no live variables.\n");
          }
          else
          {
            ssdb__print_vars_5_p_0(ssdb__MaybeFormat_9, (MR_Integer) 2, ssdb__ListVarValue_12);
          }
        }
        else
        {
          MR_String ssdb__Arg_15;
          MR_Word ssdb__Var_37;

          ssdb__succeeded = ((MR_tag((MR_Word) ssdb__STATE_VARIABLE_Args_21_21)) == (MR_mktag((MR_Integer) 1)));
          if (ssdb__succeeded)
          {
            ssdb__Arg_15 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__STATE_VARIABLE_Args_21_21, (MR_Integer) 0)));
            ssdb__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__STATE_VARIABLE_Args_21_21, (MR_Integer) 1)));
            ssdb__succeeded = (ssdb__Var_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          if (ssdb__succeeded)
          {
            MR_Word ssdb__ListVarValue_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 6)));
            MR_Integer ssdb__Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 0)));
            MR_Integer ssdb__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 1)));
            MR_Integer ssdb__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 2)));
            MR_Word ssdb__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 3)));
            MR_String ssdb__Var_53 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 4)));
            MR_Integer ssdb__Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 5)));
            MR_Word ssdb__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 7)));

            ssdb__print_var_with_name_5_p_0(ssdb__MaybeFormat_9, ssdb__ListVarValue_40, ssdb__Arg_15);
          }
          else
          {
            mercury__io__write_string_3_p_0((MR_String) "ssdb: too many arguments to command.\n");
          }
        }
      }
    }
  }
}

static void MR_CALL 
ssdb__process_options__ho3_5_p_0(
  MR_Word ssdb__Args0_7,
  MR_Word * ssdb__Args_8,
  MR_Word ssdb__Data0_9,
  MR_Word * ssdb__Res_10)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ssdb__succeeded;

      if ((ssdb__Args0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ssdb__Args_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *ssdb__Res_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ssdb__Data0_9));
        }
      }
      else
      {
        MR_String ssdb__First_11 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Args0_7, (MR_Integer) 0)));
        MR_Word ssdb__Rest_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Args0_7, (MR_Integer) 1)));

        ssdb__succeeded = mercury__string__prefix_2_p_0(ssdb__First_11, (MR_String) "--");
        if (ssdb__succeeded)
        {
          MR_Word ssdb__Data1_13;

          ssdb__succeeded = ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_p_0(ssdb__First_11, &ssdb__Data1_13);
          if (ssdb__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word ssdb__next_value_of_Args0_7 = ssdb__Rest_12;
              MR_Word ssdb__next_value_of_Data0_9 = ssdb__Data1_13;

              ssdb__Args0_7 = ssdb__next_value_of_Args0_7;
              ssdb__Data0_9 = ssdb__next_value_of_Data0_9;
            }
            continue;
          }
          else
          {
            MR_String ssdb__Message_14;
            MR_String ssdb__Var_24;
            MR_Word ssdb__Var_26;

            ssdb__Var_24 = mercury__string__f_43_43_2_f_0(ssdb__First_11, (MR_String) "\'");
            ssdb__Message_14 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognised option \140", ssdb__Var_24);
            ssdb__Var_26 = mercury__io__make_io_error_1_f_0(ssdb__Message_14);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *ssdb__Res_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ssdb__Var_26));
            }
            *ssdb__Args_8 = ssdb__Args0_7;
          }
        }
        else
        {
          MR_Word ssdb__FirstChars_16;
          MR_Word ssdb__Var_28;
          MR_Char ssdb__Var_15;
          MR_Char ssdb__Var_17;
          MR_Word ssdb__Var_18;

          ssdb__succeeded = mercury__string__prefix_2_p_0(ssdb__First_11, (MR_String) "-");
          if (ssdb__succeeded)
          {
            mercury__string__to_char_list_2_p_0(ssdb__First_11, &ssdb__Var_28);
            ssdb__succeeded = ((MR_tag((MR_Word) ssdb__Var_28)) == (MR_mktag((MR_Integer) 1)));
            if (ssdb__succeeded)
            {
              ssdb__Var_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Var_28, (MR_Integer) 0)));
              ssdb__FirstChars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Var_28, (MR_Integer) 1)));
              ssdb__succeeded = ((MR_tag((MR_Word) ssdb__FirstChars_16)) == (MR_mktag((MR_Integer) 1)));
              if (ssdb__succeeded)
              {
                ssdb__Var_17 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), ssdb__FirstChars_16, (MR_Integer) 0)));
                ssdb__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__FirstChars_16, (MR_Integer) 1)));
              }
            }
          }
          if (ssdb__succeeded)
          {
            MR_Word ssdb__Res1_19;

            ssdb__process_short_options__ho4_4_p_0(ssdb__FirstChars_16, ssdb__Data0_9, &ssdb__Res1_19);
            if (((MR_tag((MR_Word) ssdb__Res1_19)) == (MR_mktag((MR_Integer) 1))))
            {
              *ssdb__Res_10 = ssdb__Res1_19;
              *ssdb__Args_8 = ssdb__Args0_7;
            }
            else
            {
              MR_Word ssdb__Data1_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Res1_19, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word ssdb__next_value_of_Args0_7 = ssdb__Rest_12;
                MR_Word ssdb__next_value_of_Data0_9 = ssdb__Data1_29;

                ssdb__Args0_7 = ssdb__next_value_of_Args0_7;
                ssdb__Data0_9 = ssdb__next_value_of_Data0_9;
              }
              continue;
            }
          }
          else
          {
            MR_Word ssdb__Rest1_21;

            ssdb__process_options__ho3_5_p_0(ssdb__Rest_12, &ssdb__Rest1_21, ssdb__Data0_9, ssdb__Res_10);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ssdb__Args_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ssdb__First_11));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ssdb__Rest1_21));
            }
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ssdb__process_short_options__ho4_4_p_0(
  MR_Word ssdb__Chars_6,
  MR_Word ssdb__Data0_7,
  MR_Word * ssdb__Res_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ssdb__succeeded;

      if ((ssdb__Chars_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *ssdb__Res_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ssdb__Data0_7));
        }
      else
      {
        MR_Char ssdb__C_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Chars_6, (MR_Integer) 0)));
        MR_Word ssdb__Cs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Chars_6, (MR_Integer) 1)));
        MR_String ssdb__Option_11;
        MR_Word ssdb__Var_14;
        MR_Word ssdb__Var_16;
        MR_Word ssdb__Data1_12;

        {
          ssdb__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ssdb__Var_16, 0) = ((MR_Box) (MR_Word) (ssdb__C_9));
          MR_hl_field(MR_mktag(1), ssdb__Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ssdb__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ssdb__Var_14, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
          MR_hl_field(MR_mktag(1), ssdb__Var_14, 1) = ((MR_Box) (ssdb__Var_16));
        }
        ssdb__Option_11 = mercury__string__from_char_list_1_f_0(ssdb__Var_14);
        ssdb__succeeded = ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_p_0(ssdb__Option_11, &ssdb__Data1_12);
        if (ssdb__succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Word ssdb__next_value_of_Chars_6 = ssdb__Cs_10;
            MR_Word ssdb__next_value_of_Data0_7 = ssdb__Data1_12;

            ssdb__Chars_6 = ssdb__next_value_of_Chars_6;
            ssdb__Data0_7 = ssdb__next_value_of_Data0_7;
          }
          continue;
        }
        else
        {
          MR_String ssdb__Message_13;
          MR_String ssdb__Var_19;
          MR_Word ssdb__Var_21;

          ssdb__Var_19 = mercury__string__f_43_43_2_f_0(ssdb__Option_11, (MR_String) "\'");
          ssdb__Message_13 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognised option \140", ssdb__Var_19);
          ssdb__Var_21 = mercury__io__make_io_error_1_f_0(ssdb__Message_13);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ssdb__Res_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ssdb__Var_21));
          }
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
ssdb__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_p_0(
  MR_String ssdb__HeadVar__1_1,
  MR_Word * ssdb__HeadVar__3_3)
{
  {
    MR_bool ssdb__succeeded;
    MR_Integer ssdb__slot_0 = ((MR_hash_string4(ssdb__HeadVar__1_1)) & (MR_Integer) 15);
    MR_String ssdb__str_1;

    /* hashed string simple lookup switch */
    /* compute the hash value of the input string */
    /* hash chain loop */
    do
    {
      /* lookup the string for this hash slot */
      ssdb__str_1 = ((&ssdb_vector_common_10[0 + ssdb__slot_0]))->ssdb__vector_common_type_10_0__vct_10_f_0;
      /* did we find a match? */
      if ((((ssdb__str_1 != NULL)) && ((strcmp(ssdb__str_1, ssdb__HeadVar__1_1) == 0))))
      {
        /* we found a match; look up the results */
        *ssdb__HeadVar__3_3 = ((&ssdb_vector_common_10[0 + ssdb__slot_0]))->ssdb__vector_common_type_10_0__vct_10_f_2;
        ssdb__succeeded = MR_TRUE;
        /* jump out of search loop */
        goto label_0;
      }
      else
      {
        /* no match yet, so get next slot in hash chain */
        ssdb__slot_0 = ((&ssdb_vector_common_10[0 + ssdb__slot_0]))->ssdb__vector_common_type_10_0__vct_10_f_1;
      }
    }
    while ((ssdb__slot_0 >= (MR_Integer) 0));
    ssdb__succeeded = MR_FALSE;
  label_0:;
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb__print_browser_term_5_p_0(
  MR_Word ssdb__MaybeFormat_6,
  MR_Word ssdb__CallerType_7,
  MR_Word ssdb__Term_8)
{
  {
    MR_Word ssdb__StdOut_10;
    MR_Word ssdb__State_11;

    mercury__io__output_stream_3_p_0(&ssdb__StdOut_10);
{
#define MR_PROC_LABEL ssdb__print_browser_term_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__print_browser_term_5_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_browser_state;


		;}
#undef MR_PROC_LABEL
	 ssdb__State_11  = X;
}
{
#define MR_PROC_LABEL ssdb__print_browser_term_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    if ((ssdb__MaybeFormat_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mdb__browse__print_browser_term_6_p_0(ssdb__Term_8, ssdb__StdOut_10, ssdb__CallerType_7, ssdb__State_11);
    else
    {
      MR_Word ssdb__Format_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__MaybeFormat_6, (MR_Integer) 0)));

      mdb__browse__print_browser_term_format_7_p_0(ssdb__Term_8, ssdb__StdOut_10, ssdb__CallerType_7, ssdb__Format_12, ssdb__State_11);
    }
  }
}

static void MR_CALL 
ssdb__print_var_with_name_5_p_0_2(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3)
{
  {
    MR_Box ssdb__closure = ssdb__closure_arg;

    ssdb__print_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__closure, (MR_Integer) 4))), ((MR_Word) ssdb__wrapper_arg_1));
  }
}

static MR_bool MR_CALL 
ssdb__print_var_with_name_5_p_0_1(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1)
{
  {
    MR_bool ssdb__succeeded;
    MR_Box ssdb__closure = ssdb__closure_arg;

    ssdb__succeeded = ssdb__IntroducedFrom__pred__print_var_with_name__3089__1_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), ssdb__closure, (MR_Integer) 3))), ((MR_Word) ssdb__wrapper_arg_1));
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb__print_var_with_name_5_p_0(
  MR_Word ssdb__MaybeFormat_6,
  MR_Word ssdb__VarDescs_7,
  MR_String ssdb__VarName_8)
{
  {
    MR_bool ssdb__succeeded;
    MR_Integer ssdb__VarNum_10;
    MR_Integer ssdb__Var_18;

    ssdb__succeeded = mercury__string__to_int_2_p_0(ssdb__VarName_8, &ssdb__VarNum_10);
    if (ssdb__succeeded)
    {
      ssdb__Var_18 = (MR_Integer) 0;
      ssdb__succeeded = (ssdb__VarNum_10 > ssdb__Var_18);
    }
    if (ssdb__succeeded)
    {
      MR_Word ssdb__VarDesc_34;
      MR_Box ssdb__conv0_VarDesc_34;

      ssdb__succeeded = mercury__list__index1_3_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_var_value_0, ssdb__VarDescs_7, ssdb__VarNum_10, &ssdb__conv0_VarDesc_34);
      if (ssdb__succeeded)
      {
        ssdb__VarDesc_34 = ((MR_Word) ssdb__conv0_VarDesc_34);
        ssdb__succeeded = MR_TRUE;
      }
      if (ssdb__succeeded)
      {
        ssdb__print_var_5_p_0(ssdb__MaybeFormat_6, (MR_Integer) 0, ssdb__VarDesc_34);
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "ssdb: there aren\'t that many variables.\n");
      }
    }
    else
    {
      MR_Word ssdb__P_11;
      MR_Word ssdb__MatchVars_13;

      {
        ssdb__P_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ssdb__P_11, 0) = ((MR_Box) (&ssdb_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), ssdb__P_11, 1) = ((MR_Box) (ssdb__print_var_with_name_5_p_0_1));
        MR_hl_field(MR_mktag(0), ssdb__P_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), ssdb__P_11, 3) = ((MR_Box) (ssdb__VarName_8));
      }
      mercury__list__filter_3_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_var_value_0, ssdb__P_11, ssdb__VarDescs_7, &ssdb__MatchVars_13);
      if ((ssdb__MatchVars_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__io__write_string_3_p_0((MR_String) "ssdb: there is no such variable.\n");
      }
      else
      {
        MR_Word ssdb__Var_46;
        MR_Box ssdb__conv1_STATE_VARIABLE_IO_17;

        {
          ssdb__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ssdb__Var_46, 0) = ((MR_Box) (&ssdb_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), ssdb__Var_46, 1) = ((MR_Box) (ssdb__print_var_with_name_5_p_0_2));
          MR_hl_field(MR_mktag(0), ssdb__Var_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ssdb__Var_46, 3) = ((MR_Box) (ssdb__MaybeFormat_6));
          MR_hl_field(MR_mktag(0), ssdb__Var_46, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__list__foldl_4_p_2((MR_Word) &ssdb__ssdb__type_ctor_info_var_value_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ssdb__Var_46, ssdb__MatchVars_13, ((MR_Box) ((MR_Integer) 0)), &ssdb__conv1_STATE_VARIABLE_IO_17);
      }
    }
  }
}

static void MR_CALL 
ssdb__print_var_5_p_0(
  MR_Word ssdb__MaybeFormat_6,
  MR_Word ssdb__CallerType_7,
  MR_Word ssdb__VarValue_8)
{
  {
    MR_bool ssdb__succeeded;

    switch (MR_tag((MR_Word) ssdb__VarValue_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String ssdb__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__VarValue_8, (MR_Integer) 0)));
          MR_Integer ssdb__Pos_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__VarValue_8, (MR_Integer) 1)));

          mercury__io__write_char_3_p_0((MR_Char) 9);
          mercury__io__write_string_3_p_0(ssdb__Name_10);
          ssdb__succeeded = (ssdb__Pos_11 >= (MR_Integer) 0);
          if (ssdb__succeeded)
          {
            MR_Integer ssdb__Var_75;

            mercury__io__write_string_3_p_0((MR_String) " (arg ");
            ssdb__Var_75 = (ssdb__Pos_11 + (MR_Integer) 1);
            mercury__io__write_int_3_p_0(ssdb__Var_75);
            mercury__io__write_string_3_p_0((MR_String) ")\t");
          }
          else
          {
            mercury__io__write_string_3_p_0((MR_String) "\t");
          }
          mercury__io__write_string_3_p_0((MR_String) "_\n");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ssdb__TypeInfo_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__VarValue_8, (MR_Integer) 0)));
          MR_Box ssdb__T_12 = (MR_hl_field(MR_mktag(1), ssdb__VarValue_8, (MR_Integer) 3));
          MR_String ssdb__Prefix_13;
          MR_String ssdb__Name_38 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__VarValue_8, (MR_Integer) 1)));
          MR_Integer ssdb__Pos_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ssdb__VarValue_8, (MR_Integer) 2)));

          ssdb__succeeded = (ssdb__Pos_39 >= (MR_Integer) 0);
          if (ssdb__succeeded)
          {
            MR_Integer ssdb__Var_27 = (ssdb__Pos_39 + (MR_Integer) 1);
            MR_String ssdb__Var_49;
            MR_String ssdb__Var_56;
            MR_String ssdb__Var_58;
            MR_String ssdb__Var_59;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ssdb_scalar_common_3[1], ssdb__Var_27, &ssdb__Var_49);
            ssdb__Var_56 = mercury__string__f_43_43_2_f_0(ssdb__Var_49, (MR_String) ")\t");
            ssdb__Var_58 = mercury__string__f_43_43_2_f_0((MR_String) " (arg ", ssdb__Var_56);
            ssdb__Var_59 = mercury__string__f_43_43_2_f_0(ssdb__Name_38, ssdb__Var_58);
            ssdb__Prefix_13 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ssdb__Var_59);
          }
          else
          {
            MR_String ssdb__Var_62;

            ssdb__Var_62 = mercury__string__f_43_43_2_f_0(ssdb__Name_38, (MR_String) "\t");
            ssdb__Prefix_13 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ssdb__Var_62);
          }
          ssdb__safe_write_6_p_0(ssdb__TypeInfo_43_43, ssdb__MaybeFormat_6, ssdb__CallerType_7, ssdb__Prefix_13, ssdb__T_12);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ssdb__TypeInfo_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), ssdb__VarValue_8, (MR_Integer) 0)));
          MR_String ssdb__Name_40 = ((MR_String) (MR_hl_field(MR_mktag(2), ssdb__VarValue_8, (MR_Integer) 1)));
          MR_Box ssdb__T_41 = (MR_hl_field(MR_mktag(2), ssdb__VarValue_8, (MR_Integer) 2));
          MR_String ssdb__Prefix_42;
          MR_String ssdb__Var_46;

          ssdb__Var_46 = mercury__string__f_43_43_2_f_0(ssdb__Name_40, (MR_String) "\t");
          ssdb__Prefix_42 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ssdb__Var_46);
          ssdb__safe_write_6_p_0(ssdb__TypeInfo_44_44, ssdb__MaybeFormat_6, ssdb__CallerType_7, ssdb__Prefix_42, ssdb__T_41);
        }
        break;
    }
  }
}

static void MR_CALL 
ssdb__safe_write_6_p_0(
  MR_Word ssdb__TypeInfo_for_T_21,
  MR_Word ssdb__MaybeFormat_7,
  MR_Word ssdb__CallerType_8,
  MR_String ssdb__Prefix_9,
  MR_Box ssdb__T_10)
{
  {
    MR_bool ssdb__succeeded;
    MR_Word ssdb__TypeInfo_for_T_39;

{
#define MR_PROC_LABEL ssdb__safe_write_6_p_0

	MR_Word T;
	MR_bool SUCCESS_INDICATOR;

	T = (MR_Word) ssdb__T_10 ;
		{

    SUCCESS_INDICATOR = (T != 0);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
ssdb__succeeded  = SUCCESS_INDICATOR;
}
    if (ssdb__succeeded)
    {
      MR_Word ssdb__Univ_12;
      MR_Word ssdb__Var_16;
      MR_Word ssdb__StdOut_29;
      MR_Word ssdb__State_30;

      mercury__io__write_string_3_p_0(ssdb__Prefix_9);
      mercury__univ__type_to_univ_2_p_1(ssdb__TypeInfo_for_T_21, ssdb__T_10, &ssdb__Univ_12);
      {
        ssdb__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ssdb__Var_16, 0) = ((MR_Box) (ssdb__Univ_12));
      }
      mercury__io__output_stream_3_p_0(&ssdb__StdOut_29);
{
#define MR_PROC_LABEL ssdb__safe_write_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__safe_write_6_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_browser_state;


		;}
#undef MR_PROC_LABEL
	 ssdb__State_30  = X;
}
{
#define MR_PROC_LABEL ssdb__safe_write_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                    "ssdb__mutable_variable_browser_state_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      if ((ssdb__MaybeFormat_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        mdb__browse__print_browser_term_6_p_0(ssdb__Var_16, ssdb__StdOut_29, ssdb__CallerType_8, ssdb__State_30);
      else
      {
        MR_Word ssdb__Format_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__MaybeFormat_7, (MR_Integer) 0)));

        mdb__browse__print_browser_term_format_7_p_0(ssdb__Var_16, ssdb__StdOut_29, ssdb__CallerType_8, ssdb__Format_31, ssdb__State_30);
      }
    }
    else
    {
      mercury__io__write_string_3_p_0(ssdb__Prefix_9);
      mercury__io__write_string_3_p_0((MR_String) "(unsafe)\n");
    }
  }
}

static void MR_CALL 
ssdb__print_vars_5_p_0_1(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3)
{
  {
    MR_Box ssdb__closure = ssdb__closure_arg;

    ssdb__print_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__closure, (MR_Integer) 4))), ((MR_Word) ssdb__wrapper_arg_1));
  }
}

static void MR_CALL 
ssdb__print_vars_5_p_0(
  MR_Word ssdb__MaybeFormat_6,
  MR_Word ssdb__CallerType_7,
  MR_Word ssdb__Vars_8)
{
  {
    MR_Word ssdb__Var_12;
    MR_Box ssdb__conv0_STATE_VARIABLE_IO_11;

    {
      ssdb__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ssdb__Var_12, 0) = ((MR_Box) (&ssdb_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), ssdb__Var_12, 1) = ((MR_Box) (ssdb__print_vars_5_p_0_1));
      MR_hl_field(MR_mktag(0), ssdb__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ssdb__Var_12, 3) = ((MR_Box) (ssdb__MaybeFormat_6));
      MR_hl_field(MR_mktag(0), ssdb__Var_12, 4) = ((MR_Box) (ssdb__CallerType_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) &ssdb__ssdb__type_ctor_info_var_value_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ssdb__Var_12, ssdb__Vars_8, ((MR_Box) ((MR_Integer) 0)), &ssdb__conv0_STATE_VARIABLE_IO_11);
  }
}

static void MR_CALL 
ssdb__make_arg_univs_3_p_0(
  MR_Word ssdb__HeadVar__1_1,
  MR_Integer ssdb__Pos_2,
  MR_Word * ssdb__HeadVar__3_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ssdb__succeeded;

      if ((ssdb__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *ssdb__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word ssdb__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ssdb__Vars_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__HeadVar__1_1, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) ssdb__Var_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ssdb__VarPos_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Var_5, (MR_Integer) 1)));
              MR_Word ssdb__ArgUnivs0_11;
              MR_Word ssdb__Univ_12;
              MR_String ssdb__Var_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__Var_5, (MR_Integer) 0)));

              ssdb__succeeded = (ssdb__VarPos_10 == ssdb__Pos_2);
              if (ssdb__succeeded)
              {
                MR_Integer ssdb__Var_20 = (ssdb__Pos_2 + (MR_Integer) 1);

                ssdb__make_arg_univs_3_p_0(ssdb__Vars_6, ssdb__Var_20, &ssdb__ArgUnivs0_11);
              }
              else
                ssdb__make_arg_univs_3_p_0(ssdb__Vars_6, ssdb__Pos_2, &ssdb__ArgUnivs0_11);
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
              mercury__univ__type_to_univ_2_p_0((MR_Word) &mdb__browse__mdb__browse__type_ctor_info_unbound_0, ((MR_Box) ((MR_Integer) 0)), &ssdb__Univ_12);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ssdb__HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ssdb__Univ_12));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ssdb__ArgUnivs0_11));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ssdb__TypeInfo_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Var_5, (MR_Integer) 0)));
              MR_Box ssdb__Value_14 = (MR_hl_field(MR_mktag(1), ssdb__Var_5, (MR_Integer) 3));
              MR_Integer ssdb__VarPos_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ssdb__Var_5, (MR_Integer) 2)));
              MR_Word ssdb__ArgUnivs0_24;
              MR_Word ssdb__Univ_25;
              MR_String ssdb__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Var_5, (MR_Integer) 1)));

              ssdb__succeeded = (ssdb__VarPos_23 == ssdb__Pos_2);
              if (ssdb__succeeded)
              {
                MR_Integer ssdb__Var_17 = (ssdb__Pos_2 + (MR_Integer) 1);

                ssdb__make_arg_univs_3_p_0(ssdb__Vars_6, ssdb__Var_17, &ssdb__ArgUnivs0_24);
                mercury__univ__type_to_univ_2_p_1(ssdb__TypeInfo_27_27, ssdb__Value_14, &ssdb__Univ_25);
              }
              else
              {
                ssdb__make_arg_univs_3_p_0(ssdb__Vars_6, ssdb__Pos_2, &ssdb__ArgUnivs0_24);
                mercury__private_builtin__dummy_var = (MR_Integer) 0;
                mercury__univ__type_to_univ_2_p_0((MR_Word) &mdb__browse__mdb__browse__type_ctor_info_unbound_0, ((MR_Box) ((MR_Integer) 0)), &ssdb__Univ_25);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ssdb__HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ssdb__Univ_25));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ssdb__ArgUnivs0_24));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              /* direct tailcall eliminated */
              {
                MR_Word ssdb__next_value_of_HeadVar__1_1 = ssdb__Vars_6;

                ssdb__HeadVar__1_1 = ssdb__next_value_of_HeadVar__1_1;
              }
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ssdb__execute_ssdb_stack_4_p_0(
  MR_Word ssdb__Args_5,
  MR_Integer ssdb__Depth_6)
{
  {
    MR_bool ssdb__succeeded;

    if ((ssdb__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer ssdb__Var_20;

      ssdb__Var_20 = mercury__int__max_int_0_f_0();
      ssdb__print_stack_trace_5_p_0((MR_Integer) 0, ssdb__Depth_6, ssdb__Var_20);
    }
    else
    {
      MR_Integer ssdb__N_11;
      MR_String ssdb__NStr_10 = ((MR_String) (MR_hl_field(MR_mktag(1), ssdb__Args_5, (MR_Integer) 0)));
      MR_Word ssdb__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Args_5, (MR_Integer) 1)));
      MR_Integer ssdb__Var_15;

      ssdb__succeeded = (ssdb__Var_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (ssdb__succeeded)
      {
        ssdb__succeeded = mercury__string__to_int_2_p_0(ssdb__NStr_10, &ssdb__N_11);
        if (ssdb__succeeded)
        {
          ssdb__Var_15 = (MR_Integer) 0;
          ssdb__succeeded = (ssdb__N_11 > ssdb__Var_15);
        }
      }
      if (ssdb__succeeded)
      {
        ssdb__print_stack_trace_5_p_0((MR_Integer) 0, ssdb__Depth_6, ssdb__N_11);
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "ssdb: command requires integer argument.\n");
      }
    }
  }
}

static void MR_CALL 
ssdb__print_stack_trace_5_p_0(
  MR_Integer ssdb__CurLevel_6,
  MR_Integer ssdb__StarDepth_7,
  MR_Integer ssdb__RemainingLines_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ssdb__succeeded;
      MR_Integer ssdb__StackDepth_10;
      MR_Integer ssdb__Var_20;
      MR_Integer ssdb__Var_21;

{
#define MR_PROC_LABEL ssdb__print_stack_trace_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__print_stack_trace_5_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_shadow_stack_depth;


		;}
#undef MR_PROC_LABEL
	 ssdb__StackDepth_10  = X;
}
{
#define MR_PROC_LABEL ssdb__print_stack_trace_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      ssdb__succeeded = (ssdb__RemainingLines_8 == (MR_Integer) 0);
      if (ssdb__succeeded)
      {
        ssdb__Var_21 = (MR_Integer) 1;
        ssdb__Var_20 = (ssdb__StackDepth_10 - ssdb__Var_21);
        ssdb__succeeded = (ssdb__CurLevel_6 < ssdb__Var_20);
      }
      if (ssdb__succeeded)
      {
        mercury__io__write_string_3_p_0((MR_String) "<more stack frames snipped>\n");
      }
      else
      {
        ssdb__succeeded = (ssdb__CurLevel_6 < ssdb__StackDepth_10);
        if (ssdb__succeeded)
        {
          MR_Word ssdb__TypeCtorInfo_30_30;
          MR_Word ssdb__Stack0_11;
          MR_Word ssdb__Stack_12;
          MR_Word ssdb__CurFrame_13;
          MR_Integer ssdb__SkippedFrames_14;
          MR_Integer ssdb__NextLevel_15;
          MR_Char ssdb__Star_16;
          MR_Integer ssdb__Var_27;
          MR_Box ssdb__conv0_CurFrame_13;

{
#define MR_PROC_LABEL ssdb__print_stack_trace_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__print_stack_trace_5_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack0_11  = X;
}
{
#define MR_PROC_LABEL ssdb__print_stack_trace_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          ssdb__TypeCtorInfo_30_30 = (MR_Word) &ssdb__ssdb__type_ctor_info_stack_frame_0;
          mercury__list__det_drop_3_p_0(ssdb__TypeCtorInfo_30_30, ssdb__CurLevel_6, ssdb__Stack0_11, &ssdb__Stack_12);
          ssdb__conv0_CurFrame_13 = mercury__list__det_head_1_f_0(ssdb__TypeCtorInfo_30_30, ssdb__Stack_12);
          ssdb__CurFrame_13 = ((MR_Word) ssdb__conv0_CurFrame_13);
          ssdb__compress_stack_frames_4_p_0(ssdb__CurFrame_13, ssdb__Stack_12, (MR_Integer) 0, &ssdb__SkippedFrames_14);
          ssdb__NextLevel_15 = (ssdb__CurLevel_6 + ssdb__SkippedFrames_14);
          ssdb__succeeded = (ssdb__StarDepth_7 >= ssdb__CurLevel_6);
          if (ssdb__succeeded)
            ssdb__succeeded = (ssdb__StarDepth_7 < ssdb__NextLevel_15);
          if (ssdb__succeeded)
            ssdb__Star_16 = (MR_Char) 42;
          else
            ssdb__Star_16 = (MR_Char) 32;
          ssdb__print_stack_frame_6_p_0(ssdb__Star_16, ssdb__CurLevel_6, ssdb__CurFrame_13, ssdb__SkippedFrames_14);
          ssdb__Var_27 = (ssdb__RemainingLines_8 - (MR_Integer) 1);
          /* direct tailcall eliminated */
          {
            MR_Integer ssdb__next_value_of_CurLevel_6 = ssdb__NextLevel_15;
            MR_Integer ssdb__next_value_of_RemainingLines_8 = ssdb__Var_27;

            ssdb__CurLevel_6 = ssdb__next_value_of_CurLevel_6;
            ssdb__RemainingLines_8 = ssdb__next_value_of_RemainingLines_8;
          }
          continue;
        }
        else
        {
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ssdb__print_stack_frame_6_p_0(
  MR_Char ssdb__Star_7,
  MR_Integer ssdb__Level_8,
  MR_Word ssdb__Frame_9,
  MR_Integer ssdb__SkippedFrames_10)
{
  {
    MR_bool ssdb__succeeded;
    MR_String ssdb__Module_12;
    MR_String ssdb__Procedure_13;
    MR_String ssdb__SiteFile_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__Frame_9, (MR_Integer) 4)));
    MR_Integer ssdb__SiteLine_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_9, (MR_Integer) 5)));
    MR_String ssdb__Etc_16;
    MR_Word ssdb__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_9, (MR_Integer) 3)));
    MR_String ssdb__Var_80;
    MR_Word ssdb__Var_86;
    MR_String ssdb__Var_88;
    MR_String ssdb__Var_119;
    MR_Integer ssdb__Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_9, (MR_Integer) 0)));
    MR_Integer ssdb__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_9, (MR_Integer) 1)));
    MR_Integer ssdb__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_9, (MR_Integer) 2)));
    MR_Word ssdb__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_9, (MR_Integer) 6)));
    MR_Word ssdb__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_9, (MR_Integer) 7)));

    ssdb__Module_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__Var_19, (MR_Integer) 0)));
    ssdb__Procedure_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__Var_19, (MR_Integer) 1)));
    ssdb__Var_86 = (MR_Word) &ssdb_scalar_common_3[1];
    mercury__string__format__format_char_component_nowidth_3_p_0(ssdb__Var_86, ssdb__Star_7, &ssdb__Var_80);
    mercury__io__write_string_3_p_0(ssdb__Var_80);
    mercury__string__format__format_signed_int_component_width_noprec_4_p_0(ssdb__Var_86, (MR_Integer) 4, ssdb__Level_8, &ssdb__Var_88);
    mercury__io__write_string_3_p_0(ssdb__Var_88);
    mercury__io__write_string_3_p_0((MR_String) " ");
    ssdb__succeeded = (ssdb__SkippedFrames_10 > (MR_Integer) 1);
    if (ssdb__succeeded)
    {
      MR_String ssdb__Var_98;

      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(ssdb__Var_86, (MR_Integer) 4, ssdb__SkippedFrames_10, &ssdb__Var_98);
      mercury__io__write_string_3_p_0(ssdb__Var_98);
      mercury__io__write_string_3_p_0((MR_String) "*");
      ssdb__Etc_16 = (MR_String) " and others";
    }
    else
    {
      mercury__io__write_string_3_p_0((MR_String) "     ");
      ssdb__Etc_16 = (MR_String) "";
    }
    mercury__io__write_string_3_p_0((MR_String) " ");
    mercury__io__write_string_3_p_0(ssdb__Module_12);
    mercury__io__write_string_3_p_0((MR_String) ".");
    mercury__io__write_string_3_p_0(ssdb__Procedure_13);
    mercury__io__write_string_3_p_0((MR_String) " (");
    mercury__io__write_string_3_p_0(ssdb__SiteFile_14);
    mercury__io__write_string_3_p_0((MR_String) ":");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ssdb__Var_86, ssdb__SiteLine_15, &ssdb__Var_119);
    mercury__io__write_string_3_p_0(ssdb__Var_119);
    mercury__io__write_string_3_p_0(ssdb__Etc_16);
    mercury__io__write_string_3_p_0((MR_String) ")\n");
  }
}

static void MR_CALL 
ssdb__compress_stack_frames_4_p_0(
  MR_Word ssdb__RefFrame_5,
  MR_Word ssdb__Stack_6,
  MR_Integer ssdb__Count0_7,
  MR_Integer * ssdb__Count_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ssdb__succeeded;

      if ((ssdb__Stack_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *ssdb__Count_8 = ssdb__Count0_7;
      else
      {
        MR_Word ssdb__Frame_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_6, (MR_Integer) 0)));
        MR_Word ssdb__Frames_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_6, (MR_Integer) 1)));
        MR_Word ssdb__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__RefFrame_5, (MR_Integer) 3)));
        MR_Word ssdb__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_9, (MR_Integer) 3)));
        MR_Integer ssdb__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__RefFrame_5, (MR_Integer) 0)));
        MR_Integer ssdb__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__RefFrame_5, (MR_Integer) 1)));
        MR_Integer ssdb__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__RefFrame_5, (MR_Integer) 2)));
        MR_String ssdb__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__RefFrame_5, (MR_Integer) 4)));
        MR_Integer ssdb__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__RefFrame_5, (MR_Integer) 5)));
        MR_Word ssdb__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__RefFrame_5, (MR_Integer) 6)));
        MR_Word ssdb__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__RefFrame_5, (MR_Integer) 7)));
        MR_Integer ssdb__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_9, (MR_Integer) 0)));
        MR_Integer ssdb__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_9, (MR_Integer) 1)));
        MR_Integer ssdb__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_9, (MR_Integer) 2)));
        MR_String ssdb__Var_24 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__Frame_9, (MR_Integer) 4)));
        MR_Integer ssdb__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_9, (MR_Integer) 5)));
        MR_Word ssdb__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_9, (MR_Integer) 6)));
        MR_Word ssdb__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_9, (MR_Integer) 7)));

        ssdb__succeeded = ssdb____Unify____ssdb_proc_id_0_0(ssdb__Var_11, ssdb__Var_28);
        if (ssdb__succeeded)
        {
          MR_Integer ssdb__Var_12 = (ssdb__Count0_7 + (MR_Integer) 1);

          /* direct tailcall eliminated */
          {
            MR_Word ssdb__next_value_of_Stack_6 = ssdb__Frames_10;
            MR_Integer ssdb__next_value_of_Count0_7 = ssdb__Var_12;

            ssdb__Stack_6 = ssdb__next_value_of_Stack_6;
            ssdb__Count0_7 = ssdb__next_value_of_Count0_7;
          }
          continue;
        }
        else
          *ssdb__Count_8 = ssdb__Count0_7;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
ssdb____Unify____ssdb_proc_id_0_0(
  MR_Word ssdb__HeadVar__1_1,
  MR_Word ssdb__HeadVar__2_2)
{
  {
    MR_bool ssdb__succeeded;
    MR_Integer ssdb__CastX_7 = (MR_Integer) ssdb__HeadVar__1_1;
    MR_Integer ssdb__CastY_8 = (MR_Integer) ssdb__HeadVar__2_2;

    ssdb__succeeded = (ssdb__CastX_7 == ssdb__CastY_8);
    if (ssdb__succeeded)
      ssdb__succeeded = MR_TRUE;
    else
    {
      MR_String ssdb__ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 0)));
      MR_String ssdb__ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 0)));
      MR_String ssdb__ArgX2_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__1_1, (MR_Integer) 1)));
      MR_String ssdb__ArgY2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__HeadVar__2_2, (MR_Integer) 1)));

      ssdb__succeeded = (strcmp(ssdb__ArgX1_3, ssdb__ArgY1_4) == 0);
      if (ssdb__succeeded)
        ssdb__succeeded = (strcmp(ssdb__ArgX2_5, ssdb__ArgY2_6) == 0);
    }
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb__nondet_stack_contains_csn_4_p_0(
  MR_Integer ssdb__CSN_5,
  MR_Word * ssdb__Contains_6)
{
  {
    MR_Integer ssdb__StackDepth_8;
    MR_Integer ssdb__Var_12;

{
#define MR_PROC_LABEL ssdb__nondet_stack_contains_csn_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__nondet_stack_contains_csn_4_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_nondet_shadow_stack_depth;


		;}
#undef MR_PROC_LABEL
	 ssdb__StackDepth_8  = X;
}
{
#define MR_PROC_LABEL ssdb__nondet_stack_contains_csn_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    ssdb__Var_12 = (ssdb__StackDepth_8 - (MR_Integer) 1);
    ssdb__nondet_stack_contains_csn_2_5_p_0(ssdb__CSN_5, ssdb__Var_12, ssdb__Contains_6);
  }
}

static void MR_CALL 
ssdb__nondet_stack_contains_csn_2_5_p_0(
  MR_Integer ssdb__CSN_6,
  MR_Integer ssdb__Depth_7,
  MR_Word * ssdb__Contains_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ssdb__succeeded = (ssdb__Depth_7 < (MR_Integer) 0);

      if (ssdb__succeeded)
        *ssdb__Contains_8 = (MR_Integer) 0;
      else
      {
        MR_Word ssdb__StackFrame_10;
        MR_Word ssdb__Stack_31;
        MR_Box ssdb__conv0_StackFrame_10;
        MR_Integer ssdb__Var_25;
        MR_Integer ssdb__Var_18;
        MR_Integer ssdb__Var_19;
        MR_Word ssdb__Var_20;
        MR_String ssdb__Var_21;
        MR_Integer ssdb__Var_22;
        MR_Word ssdb__Var_23;
        MR_Word ssdb__Var_24;

{
#define MR_PROC_LABEL ssdb__nondet_stack_contains_csn_2_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__nondet_stack_contains_csn_2_5_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_nondet_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_31  = X;
}
{
#define MR_PROC_LABEL ssdb__nondet_stack_contains_csn_2_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
        mercury__list__det_index0_3_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_stack_frame_0, ssdb__Stack_31, ssdb__Depth_7, &ssdb__conv0_StackFrame_10);
        ssdb__StackFrame_10 = ((MR_Word) ssdb__conv0_StackFrame_10);
        ssdb__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 0)));
        ssdb__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 1)));
        ssdb__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 2)));
        ssdb__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 3)));
        ssdb__Var_21 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 4)));
        ssdb__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 5)));
        ssdb__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 6)));
        ssdb__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__StackFrame_10, (MR_Integer) 7)));
        ssdb__succeeded = (ssdb__CSN_6 == ssdb__Var_25);
        if (ssdb__succeeded)
          *ssdb__Contains_8 = (MR_Integer) 1;
        else
        {
          MR_Integer ssdb__Var_15 = (ssdb__Depth_7 - (MR_Integer) 1);

          /* direct tailcall eliminated */
          {
            MR_Integer ssdb__next_value_of_Depth_7 = ssdb__Var_15;

            ssdb__Depth_7 = ssdb__next_value_of_Depth_7;
          }
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ssdb__print_invalid_argument_2_p_0(void)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "ssdb: invalid argument to command.\n");
  }
}

static void MR_CALL 
ssdb__print_too_many_arguments_2_p_0(void)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "ssdb: too many arguments to command.\n");
  }
}

static void MR_CALL 
ssdb__stack_depth_3_p_0(
  MR_Integer * ssdb__Depth_4)
{
  {
{
#define MR_PROC_LABEL ssdb__stack_depth_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__stack_depth_3_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_shadow_stack_depth;


		;}
#undef MR_PROC_LABEL
	 *ssdb__Depth_4  = X;
}
{
#define MR_PROC_LABEL ssdb__stack_depth_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__stack_index_4_p_0(
  MR_Integer ssdb__Num_5,
  MR_Word * ssdb__Frame_6)
{
  {
    MR_Word ssdb__Stack_8;
    MR_Box ssdb__conv0_Frame_6;

{
#define MR_PROC_LABEL ssdb__stack_index_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__stack_index_4_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_8  = X;
}
{
#define MR_PROC_LABEL ssdb__stack_index_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    mercury__list__det_index0_3_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_stack_frame_0, ssdb__Stack_8, ssdb__Num_5, &ssdb__conv0_Frame_6);
    *ssdb__Frame_6 = ((MR_Word) ssdb__conv0_Frame_6);
  }
}

static void MR_CALL 
ssdb__execute_ssdb_help_3_p_0_1(
  MR_Box ssdb__closure_arg,
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box * ssdb__wrapper_arg_3)
{
  {
    MR_Box ssdb__closure = ssdb__closure_arg;

    mercury__io__write_string_3_p_0(((MR_String) ssdb__wrapper_arg_1));
  }
}

static void MR_CALL 
ssdb__execute_ssdb_help_3_p_0(
  MR_Word ssdb__Args_4)
{
  if ((ssdb__Args_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) MR_mkword(MR_mktag(1), &ssdb_scalar_common_1[51]), (MR_String) "\n", (MR_Word) &ssdb_scalar_common_2[1]);
    mercury__io__write_string_3_p_0((MR_String) "\n\n");
  }
  else
  {
    mercury__io__write_string_3_p_0((MR_String) "ssdb: too many arguments to command.\n");
  }
}

static MR_bool MR_CALL 
ssdb__ssdb_cmd_name_2_p_0(
  MR_String ssdb__HeadVar__1_1,
  MR_Word * ssdb__HeadVar__2_2)
{
  {
    MR_bool ssdb__succeeded;

    {
      MR_Integer ssdb__case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(ssdb__HeadVar__1_1, 0)) {
        case (MR_Integer) 97:
          if (MR_offset_streq(1, ssdb__HeadVar__1_1, (MR_String) "alias"))
            ssdb__case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 98:
          if (((MR_nth_code_unit(ssdb__HeadVar__1_1, 1)) == (MR_Integer) 114))
            switch (MR_nth_code_unit(ssdb__HeadVar__1_1, 2)) {
              case (MR_Integer) 101:
                if (MR_offset_streq(3, ssdb__HeadVar__1_1, (MR_String) "break"))
                  ssdb__case_num_0 = (MR_Integer) 1;
                break;
              case (MR_Integer) 111:
                if (MR_offset_streq(3, ssdb__HeadVar__1_1, (MR_String) "browse"))
                  ssdb__case_num_0 = (MR_Integer) 2;
                break;
            }
          break;
        case (MR_Integer) 99:
          switch (MR_nth_code_unit(ssdb__HeadVar__1_1, 1)) {
            case (MR_Integer) 111:
              if (MR_offset_streq(2, ssdb__HeadVar__1_1, (MR_String) "continue"))
                ssdb__case_num_0 = (MR_Integer) 3;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, ssdb__HeadVar__1_1, (MR_String) "current"))
                ssdb__case_num_0 = (MR_Integer) 4;
              break;
          }
          break;
        case (MR_Integer) 100:
          switch (MR_nth_code_unit(ssdb__HeadVar__1_1, 1)) {
            case (MR_Integer) 101:
              if (MR_offset_streq(2, ssdb__HeadVar__1_1, (MR_String) "delete"))
                ssdb__case_num_0 = (MR_Integer) 5;
              break;
            case (MR_Integer) 105:
              if (MR_offset_streq(2, ssdb__HeadVar__1_1, (MR_String) "disable"))
                ssdb__case_num_0 = (MR_Integer) 6;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, ssdb__HeadVar__1_1, (MR_String) "down"))
                ssdb__case_num_0 = (MR_Integer) 7;
              break;
          }
          break;
        case (MR_Integer) 101:
          switch (MR_nth_code_unit(ssdb__HeadVar__1_1, 1)) {
            case (MR_Integer) 110:
              if (MR_offset_streq(2, ssdb__HeadVar__1_1, (MR_String) "enable"))
                ssdb__case_num_0 = (MR_Integer) 8;
              break;
            case (MR_Integer) 120:
              if (MR_offset_streq(2, ssdb__HeadVar__1_1, (MR_String) "exception"))
                ssdb__case_num_0 = (MR_Integer) 9;
              break;
          }
          break;
        case (MR_Integer) 102:
          switch (MR_nth_code_unit(ssdb__HeadVar__1_1, 1)) {
            case (MR_Integer) 105:
              if (MR_offset_streq(2, ssdb__HeadVar__1_1, (MR_String) "finish"))
                ssdb__case_num_0 = (MR_Integer) 10;
              break;
            case (MR_Integer) 111:
              if (((((((((MR_nth_code_unit(ssdb__HeadVar__1_1, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(ssdb__HeadVar__1_1, 3)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(ssdb__HeadVar__1_1, 4)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(ssdb__HeadVar__1_1, 5)) == (MR_Integer) 116))))
                switch (MR_nth_code_unit(ssdb__HeadVar__1_1, 6)) {
                  case (MR_Integer) 0:
                    ssdb__case_num_0 = (MR_Integer) 11;
                    break;
                  case (MR_Integer) 95:
                    if (MR_offset_streq(7, ssdb__HeadVar__1_1, (MR_String) "format_param"))
                      ssdb__case_num_0 = (MR_Integer) 12;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 103:
          if (MR_offset_streq(1, ssdb__HeadVar__1_1, (MR_String) "goto"))
            ssdb__case_num_0 = (MR_Integer) 13;
          break;
        case (MR_Integer) 104:
          if (MR_offset_streq(1, ssdb__HeadVar__1_1, (MR_String) "help"))
            ssdb__case_num_0 = (MR_Integer) 14;
          break;
        case (MR_Integer) 108:
          switch (MR_nth_code_unit(ssdb__HeadVar__1_1, 1)) {
            case (MR_Integer) 101:
              if (MR_offset_streq(2, ssdb__HeadVar__1_1, (MR_String) "level"))
                ssdb__case_num_0 = (MR_Integer) 15;
              break;
            case (MR_Integer) 105:
              if (((((MR_nth_code_unit(ssdb__HeadVar__1_1, 2)) == (MR_Integer) 115)) && (((MR_nth_code_unit(ssdb__HeadVar__1_1, 3)) == (MR_Integer) 116))))
                switch (MR_nth_code_unit(ssdb__HeadVar__1_1, 4)) {
                  case (MR_Integer) 0:
                    ssdb__case_num_0 = (MR_Integer) 16;
                    break;
                  case (MR_Integer) 95:
                    switch (MR_nth_code_unit(ssdb__HeadVar__1_1, 5)) {
                      case (MR_Integer) 99:
                        if (MR_offset_streq(6, ssdb__HeadVar__1_1, (MR_String) "list_context_lines"))
                          ssdb__case_num_0 = (MR_Integer) 17;
                        break;
                      case (MR_Integer) 112:
                        if (MR_offset_streq(6, ssdb__HeadVar__1_1, (MR_String) "list_path"))
                          ssdb__case_num_0 = (MR_Integer) 18;
                        break;
                    }
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 110:
          if (MR_offset_streq(1, ssdb__HeadVar__1_1, (MR_String) "next"))
            ssdb__case_num_0 = (MR_Integer) 19;
          break;
        case (MR_Integer) 112:
          switch (MR_nth_code_unit(ssdb__HeadVar__1_1, 1)) {
            case (MR_Integer) 111:
              if (MR_offset_streq(2, ssdb__HeadVar__1_1, (MR_String) "pop_list_dir"))
                ssdb__case_num_0 = (MR_Integer) 20;
              break;
            case (MR_Integer) 114:
              if (MR_offset_streq(2, ssdb__HeadVar__1_1, (MR_String) "print"))
                ssdb__case_num_0 = (MR_Integer) 21;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, ssdb__HeadVar__1_1, (MR_String) "push_list_dir"))
                ssdb__case_num_0 = (MR_Integer) 22;
              break;
          }
          break;
        case (MR_Integer) 113:
          if (MR_offset_streq(1, ssdb__HeadVar__1_1, (MR_String) "quit"))
            ssdb__case_num_0 = (MR_Integer) 23;
          break;
        case (MR_Integer) 114:
          if (((((MR_nth_code_unit(ssdb__HeadVar__1_1, 1)) == (MR_Integer) 101)) && (((MR_nth_code_unit(ssdb__HeadVar__1_1, 2)) == (MR_Integer) 116))))
            switch (MR_nth_code_unit(ssdb__HeadVar__1_1, 3)) {
              case (MR_Integer) 114:
                if (MR_offset_streq(4, ssdb__HeadVar__1_1, (MR_String) "retry"))
                  ssdb__case_num_0 = (MR_Integer) 24;
                break;
              case (MR_Integer) 117:
                if (MR_offset_streq(4, ssdb__HeadVar__1_1, (MR_String) "return"))
                  ssdb__case_num_0 = (MR_Integer) 25;
                break;
            }
          break;
        case (MR_Integer) 115:
          switch (MR_nth_code_unit(ssdb__HeadVar__1_1, 1)) {
            case (MR_Integer) 111:
              if (MR_offset_streq(2, ssdb__HeadVar__1_1, (MR_String) "source"))
                ssdb__case_num_0 = (MR_Integer) 26;
              break;
            case (MR_Integer) 116:
              switch (MR_nth_code_unit(ssdb__HeadVar__1_1, 2)) {
                case (MR_Integer) 97:
                  if (MR_offset_streq(3, ssdb__HeadVar__1_1, (MR_String) "stack"))
                    ssdb__case_num_0 = (MR_Integer) 27;
                  break;
                case (MR_Integer) 101:
                  if (MR_offset_streq(3, ssdb__HeadVar__1_1, (MR_String) "step"))
                    ssdb__case_num_0 = (MR_Integer) 28;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 117:
          switch (MR_nth_code_unit(ssdb__HeadVar__1_1, 1)) {
            case (MR_Integer) 110:
              if (MR_offset_streq(2, ssdb__HeadVar__1_1, (MR_String) "unalias"))
                ssdb__case_num_0 = (MR_Integer) 29;
              break;
            case (MR_Integer) 112:
              if (MR_offset_streq(2, ssdb__HeadVar__1_1, (MR_String) "up"))
                ssdb__case_num_0 = (MR_Integer) 30;
              break;
          }
          break;
        case (MR_Integer) 118:
          if (MR_offset_streq(1, ssdb__HeadVar__1_1, (MR_String) "vars"))
            ssdb__case_num_0 = (MR_Integer) 31;
          break;
      }
      if ((ssdb__case_num_0 < (MR_Integer) 0))
        ssdb__succeeded = MR_FALSE;
      else
      {
        /* we found a match; look up the results */
        *ssdb__HeadVar__2_2 = ((&ssdb_vector_common_6[0 + ssdb__case_num_0]))->ssdb__vector_common_type_6_0__vct_6_f_0;
        ssdb__succeeded = MR_TRUE;
      }
    }
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb__update_next_stop_6_p_0(
  MR_Integer ssdb__EventNum_7,
  MR_Integer ssdb__CSN_8,
  MR_Word ssdb__WhatNext_9,
  MR_Word * ssdb__Retry_10)
{
  {
    MR_bool ssdb__succeeded;
    MR_Word ssdb__NextStop_12;

    switch (MR_tag((MR_Word) ssdb__WhatNext_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ssdb__WhatNext_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ssdb__NextStop_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ssdb__Retry_10 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                ssdb__NextStop_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ssdb__NextStop_12, 0) = ((MR_Box) (ssdb__CSN_8));
              }
              *ssdb__Retry_10 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 2:
            {
              ssdb__NextStop_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              *ssdb__Retry_10 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 3:
            {
              ssdb__NextStop_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
              *ssdb__Retry_10 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 4:
            {
              ssdb__NextStop_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
              *ssdb__Retry_10 = (MR_Integer) 1;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ssdb__EndCSN_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ssdb__WhatNext_9, (MR_Integer) 0)));

          {
            ssdb__NextStop_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ssdb__NextStop_12, 0) = ((MR_Box) (ssdb__EndCSN_13));
            MR_hl_field(MR_mktag(2), ssdb__NextStop_12, 1) = ((MR_Box) ((MR_Integer) 1));
          }
          *ssdb__Retry_10 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ssdb__RetryCSN_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ssdb__WhatNext_9, (MR_Integer) 0)));

          ssdb__succeeded = (ssdb__RetryCSN_14 == ssdb__CSN_8);
          if (ssdb__succeeded)
          {
            MR_Word ssdb__Frame_15;
            MR_Word ssdb__Stack_30;
            MR_Integer ssdb__Var_41;
            MR_Integer ssdb__Var_43;
            MR_Integer ssdb__Var_45;
            MR_Integer ssdb__Var_47;
            MR_Integer ssdb__Var_49;
            MR_Integer ssdb__Var_50;
            MR_Word ssdb__Var_51;
            MR_String ssdb__Var_52;
            MR_Integer ssdb__Var_53;
            MR_Word ssdb__Var_54;
            MR_Word ssdb__Var_55;
            MR_Integer ssdb__Var_56;
            MR_Integer ssdb__Var_57;
            MR_Word ssdb__Var_58;
            MR_String ssdb__Var_59;
            MR_Integer ssdb__Var_60;
            MR_Word ssdb__Var_61;
            MR_Word ssdb__Var_62;

            ssdb__NextStop_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ssdb__Retry_10 = (MR_Integer) 0;
{
#define MR_PROC_LABEL ssdb__update_next_stop_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__update_next_stop_6_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_30  = X;
}
{
#define MR_PROC_LABEL ssdb__update_next_stop_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
            if ((ssdb__Stack_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__error_1_p_0((MR_String) "ssdb: stack_top on empty stack");
                return;
              }
            }
            else
            {
              MR_Word ssdb__Var_31;

              ssdb__Frame_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_30, (MR_Integer) 0)));
              ssdb__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_30, (MR_Integer) 1)));
            }
            ssdb__Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_15, (MR_Integer) 0)));
            ssdb__Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_15, (MR_Integer) 1)));
            ssdb__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_15, (MR_Integer) 2)));
            ssdb__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_15, (MR_Integer) 3)));
            ssdb__Var_52 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__Frame_15, (MR_Integer) 4)));
            ssdb__Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_15, (MR_Integer) 5)));
            ssdb__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_15, (MR_Integer) 6)));
            ssdb__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_15, (MR_Integer) 7)));
            ssdb__Var_41 = (ssdb__Var_43 - (MR_Integer) 1);
{
#define MR_PROC_LABEL ssdb__update_next_stop_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__update_next_stop_6_p_0

	MR_Integer X;

	X =  ssdb__Var_41 ;
		{
ssdb__mutable_variable_cur_ssdb_event_number = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__update_next_stop_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
            ssdb__Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_15, (MR_Integer) 0)));
            ssdb__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_15, (MR_Integer) 1)));
            ssdb__Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_15, (MR_Integer) 2)));
            ssdb__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_15, (MR_Integer) 3)));
            ssdb__Var_59 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__Frame_15, (MR_Integer) 4)));
            ssdb__Var_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_15, (MR_Integer) 5)));
            ssdb__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_15, (MR_Integer) 6)));
            ssdb__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_15, (MR_Integer) 7)));
            ssdb__Var_45 = (ssdb__Var_47 - (MR_Integer) 1);
{
#define MR_PROC_LABEL ssdb__update_next_stop_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                    "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__update_next_stop_6_p_0

	MR_Integer X;

	X =  ssdb__Var_45 ;
		{
ssdb__mutable_variable_cur_ssdb_csn = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__update_next_stop_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                    "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          }
          else
          {
            {
              ssdb__NextStop_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ssdb__NextStop_12, 0) = ((MR_Box) (ssdb__RetryCSN_14));
              MR_hl_field(MR_mktag(2), ssdb__NextStop_12, 1) = ((MR_Box) ((MR_Integer) 0));
            }
            *ssdb__Retry_10 = (MR_Integer) 1;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__WhatNext_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ssdb__RetryCSN_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ssdb__WhatNext_9, (MR_Integer) 1)));

              {
                ssdb__NextStop_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ssdb__NextStop_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ssdb__NextStop_12, 1) = ((MR_Box) (ssdb__RetryCSN_25));
                MR_hl_field(MR_mktag(3), ssdb__NextStop_12, 2) = ((MR_Box) ((MR_Integer) 0));
              }
              *ssdb__Retry_10 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ssdb__EventNumToGo_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ssdb__WhatNext_9, (MR_Integer) 1)));

              ssdb__succeeded = (ssdb__EventNum_7 == ssdb__EventNumToGo_16);
              if (ssdb__succeeded)
              {
                ssdb__NextStop_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                *ssdb__Retry_10 = (MR_Integer) 1;
              }
              else
              {
                {
                  ssdb__NextStop_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ssdb__NextStop_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ssdb__NextStop_12, 1) = ((MR_Box) (ssdb__EventNumToGo_16));
                }
                *ssdb__Retry_10 = (MR_Integer) 1;
              }
            }
            break;
        }
        break;
    }
{
#define MR_PROC_LABEL ssdb__update_next_stop_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                    "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__update_next_stop_6_p_0

	MR_Word X;

	X =  ssdb__NextStop_12 ;
		{
ssdb__mutable_variable_cur_ssdb_next_stop = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__update_next_stop_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                    "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__should_stop_at_this_event_8_p_0(
  MR_Word ssdb__Event_9,
  MR_Integer ssdb__EventNum_10,
  MR_Integer ssdb__CSN_11,
  MR_Word ssdb__ProcId_12,
  MR_Word * ssdb__ShouldStopAtEvent_13,
  MR_Word * ssdb__AutoRetry_14)
{
  {
    MR_bool ssdb__succeeded;
    MR_Word ssdb__NextStop_16;
    MR_Word ssdb__ShouldStopAtEvent0_17;
    MR_Word ssdb__CurrentLevel_23;
    MR_Word ssdb__ParentLevel_24;

{
#define MR_PROC_LABEL ssdb__should_stop_at_this_event_8_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                    "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__should_stop_at_this_event_8_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_cur_ssdb_next_stop;


		;}
#undef MR_PROC_LABEL
	 ssdb__NextStop_16  = X;
}
{
#define MR_PROC_LABEL ssdb__should_stop_at_this_event_8_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                    "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    switch (MR_tag((MR_Word) ssdb__NextStop_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ssdb__NextStop_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ssdb__ShouldStopAtEvent0_17 = (MR_Integer) 1;
              *ssdb__AutoRetry_14 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box ssdb__Filter_67;
              MR_String ssdb__ModuleName_68;
              MR_String ssdb__ProcName_69;
              MR_Word ssdb__Var_73;
              MR_Integer ssdb__Var_74;
              MR_Word ssdb__Var_75;
              MR_Integer ssdb__Var_76;
              MR_Integer ssdb__Var_87;
              MR_Integer ssdb__Var_91;
              MR_Integer ssdb__Var_92;

{
#define MR_PROC_LABEL ssdb__should_stop_at_this_event_8_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                    "ssdb__mutable_variable_breakpoints_filter_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__should_stop_at_this_event_8_p_0

	MR_BitmapPtr X;

		{
X = ssdb__mutable_variable_breakpoints_filter;


		;}
#undef MR_PROC_LABEL
	 ssdb__Filter_67  = (MR_Box) X;
}
{
#define MR_PROC_LABEL ssdb__should_stop_at_this_event_8_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                    "ssdb__mutable_variable_breakpoints_filter_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
              ssdb__ModuleName_68 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__ProcId_12, (MR_Integer) 0)));
              ssdb__ProcName_69 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__ProcId_12, (MR_Integer) 1)));
              ssdb__Var_87 = mercury__string__hash_1_f_0(ssdb__ProcName_69);
              ssdb__Var_74 = (ssdb__Var_87 & (MR_Integer) 65535);
              ssdb__Var_73 = mercury__bitmap__unsafe_bit_2_f_0(ssdb__Var_74, ssdb__Filter_67);
              ssdb__succeeded = (ssdb__Var_73 == (MR_Integer) 1);
              if (ssdb__succeeded)
              {
                ssdb__Var_91 = mercury__string__hash_1_f_0(ssdb__ModuleName_68);
                ssdb__Var_92 = (MR_Integer) 65535;
                ssdb__Var_76 = (ssdb__Var_91 & ssdb__Var_92);
                ssdb__Var_75 = mercury__bitmap__unsafe_bit_2_f_0(ssdb__Var_76, ssdb__Filter_67);
                ssdb__succeeded = (ssdb__Var_75 == (MR_Integer) 1);
              }
              if (ssdb__succeeded)
              {
                MR_Word ssdb__BreakPoints_70;
                MR_Word ssdb__BreakPoint_71;
                MR_Word ssdb__Var_78;
                MR_Box ssdb__conv0_BreakPoint_71;
                MR_Integer ssdb__Var_79;
                MR_Word ssdb__Var_80;

{
#define MR_PROC_LABEL ssdb__should_stop_at_this_event_8_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__should_stop_at_this_event_8_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_breakpoints_map;


		;}
#undef MR_PROC_LABEL
	 ssdb__BreakPoints_70  = X;
}
{
#define MR_PROC_LABEL ssdb__should_stop_at_this_event_8_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                    "ssdb__mutable_variable_breakpoints_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
                ssdb__succeeded = mercury__map__search_3_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_ssdb_proc_id_0, (MR_Word) &ssdb__ssdb__type_ctor_info_breakpoint_0, ssdb__BreakPoints_70, ((MR_Box) (ssdb__ProcId_12)), &ssdb__conv0_BreakPoint_71);
                if (ssdb__succeeded)
                {
                  ssdb__BreakPoint_71 = ((MR_Word) ssdb__conv0_BreakPoint_71);
                  ssdb__succeeded = MR_TRUE;
                }
                if (ssdb__succeeded)
                {
                  ssdb__Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__BreakPoint_71, (MR_Integer) 0)));
                  ssdb__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__BreakPoint_71, (MR_Integer) 1)));
                  ssdb__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__BreakPoint_71, (MR_Integer) 2)));
                  ssdb__succeeded = (ssdb__Var_78 == (MR_Integer) 0);
                }
                if (ssdb__succeeded)
                  ssdb__ShouldStopAtEvent0_17 = (MR_Integer) 1;
                else
                  ssdb__ShouldStopAtEvent0_17 = (MR_Integer) 0;
              }
              else
                ssdb__ShouldStopAtEvent0_17 = (MR_Integer) 0;
              *ssdb__AutoRetry_14 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 2:
            {
              ssdb__ShouldStopAtEvent0_17 = ((&ssdb_vector_common_5[8 + ssdb__Event_9]))->ssdb__vector_common_type_5_0__vct_5_f_0;
              *ssdb__AutoRetry_14 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 3:
            {
              ssdb__ShouldStopAtEvent0_17 = ((&ssdb_vector_common_5[0 + ssdb__Event_9]))->ssdb__vector_common_type_5_0__vct_5_f_0;
              *ssdb__AutoRetry_14 = (MR_Integer) 1;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ssdb__StopCSN_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ssdb__NextStop_16, (MR_Integer) 0)));

          ssdb__is_same_int_3_p_0(ssdb__StopCSN_18, ssdb__CSN_11, &ssdb__ShouldStopAtEvent0_17);
          *ssdb__AutoRetry_14 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ssdb__AutoRetry0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ssdb__NextStop_16, (MR_Integer) 1)));
          MR_Integer ssdb__StopCSN_38 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ssdb__NextStop_16, (MR_Integer) 0)));

          switch (ssdb__Event_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 3:
            case (MR_Integer) 5:
              {
                ssdb__ShouldStopAtEvent0_17 = (MR_Integer) 0;
                *ssdb__AutoRetry_14 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ssdb__Stack_21;

                ssdb__get_shadow_stack_3_p_0(&ssdb__Stack_21);
                ssdb__succeeded = ssdb__exception_handler_exists_2_p_0(ssdb__StopCSN_38, ssdb__Stack_21);
                if (ssdb__succeeded)
                  ssdb__ShouldStopAtEvent0_17 = (MR_Integer) 0;
                else
                  ssdb__ShouldStopAtEvent0_17 = (MR_Integer) 1;
                *ssdb__AutoRetry_14 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 4:
            case (MR_Integer) 2:
            case (MR_Integer) 6:
              {
                ssdb__succeeded = (ssdb__StopCSN_38 == ssdb__CSN_11);
                if (ssdb__succeeded)
                {
                  ssdb__ShouldStopAtEvent0_17 = (MR_Integer) 1;
                  *ssdb__AutoRetry_14 = ssdb__AutoRetry0_19;
                  switch (*ssdb__AutoRetry_14) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word ssdb__Frame_20;

                        ssdb__stack_top_3_p_0(&ssdb__Frame_20);
                        ssdb__reset_counters_for_retry_3_p_0(ssdb__Frame_20);
                      }
                      break;
                  }
                }
                else
                {
                  ssdb__ShouldStopAtEvent0_17 = (MR_Integer) 0;
                  *ssdb__AutoRetry_14 = (MR_Integer) 1;
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ssdb__NextStop_16, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ssdb__StopCSN_47 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ssdb__NextStop_16, (MR_Integer) 1)));
              MR_Word ssdb__AutoRetry0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ssdb__NextStop_16, (MR_Integer) 2)));

              switch (ssdb__Event_9) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 3:
                case (MR_Integer) 1:
                case (MR_Integer) 4:
                case (MR_Integer) 2:
                case (MR_Integer) 5:
                  {
                    ssdb__ShouldStopAtEvent0_17 = (MR_Integer) 0;
                    *ssdb__AutoRetry_14 = (MR_Integer) 1;
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word ssdb__Stack_44;

                    ssdb__get_shadow_stack_3_p_0(&ssdb__Stack_44);
                    ssdb__succeeded = ssdb__exception_handler_exists_2_p_0(ssdb__StopCSN_47, ssdb__Stack_44);
                    if (ssdb__succeeded)
                      ssdb__ShouldStopAtEvent0_17 = (MR_Integer) 0;
                    else
                      ssdb__ShouldStopAtEvent0_17 = (MR_Integer) 1;
                    *ssdb__AutoRetry_14 = (MR_Integer) 1;
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    ssdb__succeeded = (ssdb__StopCSN_47 == ssdb__CSN_11);
                    if (ssdb__succeeded)
                    {
                      ssdb__ShouldStopAtEvent0_17 = (MR_Integer) 1;
                      *ssdb__AutoRetry_14 = ssdb__AutoRetry0_48;
                      switch (*ssdb__AutoRetry_14) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            MR_Word ssdb__Frame_39;
                            MR_Integer ssdb__Var_58;
                            MR_Integer ssdb__Var_51;
                            MR_Integer ssdb__Var_52;
                            MR_Word ssdb__Var_53;
                            MR_String ssdb__Var_54;
                            MR_Integer ssdb__Var_55;
                            MR_Word ssdb__Var_56;
                            MR_Word ssdb__Var_57;

                            ssdb__nondet_stack_index_4_p_0((MR_Integer) 0, &ssdb__Frame_39);
                            ssdb__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_39, (MR_Integer) 0)));
                            ssdb__Var_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_39, (MR_Integer) 1)));
                            ssdb__Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_39, (MR_Integer) 2)));
                            ssdb__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_39, (MR_Integer) 3)));
                            ssdb__Var_54 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__Frame_39, (MR_Integer) 4)));
                            ssdb__Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_39, (MR_Integer) 5)));
                            ssdb__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_39, (MR_Integer) 6)));
                            ssdb__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_39, (MR_Integer) 7)));
                            ssdb__succeeded = (ssdb__CSN_11 == ssdb__Var_58);
                            if (ssdb__succeeded)
                              ssdb__reset_counters_for_retry_3_p_0(ssdb__Frame_39);
                            else
                            {
                              {
                                mercury__require__error_1_p_0((MR_String) "ssdb: nondet stack frame has unexpected CSN");
                                return;
                              }
                            }
                          }
                          break;
                      }
                    }
                    else
                    {
                      ssdb__ShouldStopAtEvent0_17 = (MR_Integer) 0;
                      *ssdb__AutoRetry_14 = (MR_Integer) 1;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ssdb__EventNumToGo_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ssdb__NextStop_16, (MR_Integer) 1)));

              ssdb__is_same_int_3_p_0(ssdb__EventNumToGo_22, ssdb__EventNum_10, &ssdb__ShouldStopAtEvent0_17);
              *ssdb__AutoRetry_14 = (MR_Integer) 1;
            }
            break;
        }
        break;
    }
    ssdb__current_and_parent_frame_tracing_levels_4_p_0(&ssdb__CurrentLevel_23, &ssdb__ParentLevel_24);
    ssdb__succeeded = (ssdb__ShouldStopAtEvent0_17 == (MR_Integer) 1);
    if (ssdb__succeeded)
    {
      ssdb__succeeded = (ssdb__CurrentLevel_23 == (MR_Integer) 1);
      if (ssdb__succeeded)
        ssdb__succeeded = (ssdb__ParentLevel_24 == (MR_Integer) 1);
    }
    if (ssdb__succeeded)
      *ssdb__ShouldStopAtEvent_13 = (MR_Integer) 0;
    else
      *ssdb__ShouldStopAtEvent_13 = ssdb__ShouldStopAtEvent0_17;
  }
}

static void MR_CALL 
ssdb__get_shadow_stack_3_p_0(
  MR_Word * ssdb__X_4)
{
  {
{
#define MR_PROC_LABEL ssdb__get_shadow_stack_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__get_shadow_stack_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 *ssdb__X_4  = X;
}
{
#define MR_PROC_LABEL ssdb__get_shadow_stack_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__exception_handler_exists_2_p_0_1(
  void * ssdb__env_ptr_arg)
{
  {
    struct ssdb__exception_handler_exists_2_p_0_env_0_s * ssdb__env_ptr = (struct ssdb__exception_handler_exists_2_p_0_env_0_s *) ssdb__env_ptr_arg;

    MR_builtin_longjmp((ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ssdb__exception_handler_exists_2_p_0_3(
  void * ssdb__env_ptr_arg)
{
  {
    struct ssdb__exception_handler_exists_2_p_0_env_0_s * ssdb__env_ptr = (struct ssdb__exception_handler_exists_2_p_0_env_0_s *) ssdb__env_ptr_arg;

    (ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__StackFrame_5 = ((MR_Word) (ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__conv0_StackFrame_5);
    ssdb__exception_handler_exists_2_p_0_2(ssdb__env_ptr);
  }
}

static void MR_CALL 
ssdb__exception_handler_exists_2_p_0_2(
  void * ssdb__env_ptr_arg)
{
  {
    struct ssdb__exception_handler_exists_2_p_0_env_0_s * ssdb__env_ptr = (struct ssdb__exception_handler_exists_2_p_0_env_0_s *) ssdb__env_ptr_arg;

    {
      MR_Integer ssdb__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__StackFrame_5, (MR_Integer) 0)));
      MR_Integer ssdb__Var_9;
      MR_String ssdb__Var_11;
      MR_Integer ssdb__Var_12;
      MR_Word ssdb__Var_13;
      MR_Word ssdb__Var_14;
      MR_Integer ssdb__lo_1;
      MR_Integer ssdb__hi_2;
      MR_Integer ssdb__mid_3;
      MR_Integer ssdb__result_4;

      (ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__StackFrame_5, (MR_Integer) 1)));
      ssdb__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__StackFrame_5, (MR_Integer) 2)));
      (ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__StackFrame_5, (MR_Integer) 3)));
      ssdb__Var_11 = ((MR_String) (MR_hl_field(MR_mktag(0), (ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__StackFrame_5, (MR_Integer) 4)));
      ssdb__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__StackFrame_5, (MR_Integer) 5)));
      ssdb__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__StackFrame_5, (MR_Integer) 6)));
      ssdb__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__StackFrame_5, (MR_Integer) 7)));
      (ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__succeeded = ((ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__Var_6 >= (ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__CSN_3);
      if ((ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__succeeded)
      {
        (ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__Var_25 = ((MR_String) (MR_hl_field(MR_mktag(0), (ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__Var_10, (MR_Integer) 0)));
        (ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__Name_24 = ((MR_String) (MR_hl_field(MR_mktag(0), (ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__Var_10, (MR_Integer) 1)));
        (ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__succeeded = (strcmp((ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__Var_25, (MR_String) "exception") == 0);
        if ((ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__succeeded)
        {
          /* binary string simple lookup switch */
          ssdb__lo_1 = (MR_Integer) 0;
          ssdb__hi_2 = (MR_Integer) 4;
          do
          {
            ssdb__mid_3 = (((ssdb__lo_1 + ssdb__hi_2)) / (MR_Integer) 2);
            ssdb__result_4 = MR_strcmp((ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__Name_24, ((&ssdb_vector_common_4[0 + ssdb__mid_3]))->ssdb__vector_common_type_4_0__vct_4_f_0);
            if ((ssdb__result_4 == (MR_Integer) 0))
            {
              (ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__succeeded = MR_TRUE;
              /* jump out of search loop */
              goto label_0;
            }
            else
            if ((ssdb__result_4 < (MR_Integer) 0))
              ssdb__hi_2 = (ssdb__mid_3 - (MR_Integer) 1);
            else
              ssdb__lo_1 = (ssdb__mid_3 + (MR_Integer) 1);
          }
          while ((ssdb__lo_1 <= ssdb__hi_2));
          (ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__succeeded = MR_FALSE;
        label_0:;
          if ((ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__succeeded)
            ssdb__exception_handler_exists_2_p_0_1(ssdb__env_ptr);
        }
      }
    }
  }
}

static void MR_CALL 
ssdb__exception_handler_exists_2_p_0_4(
  void * ssdb__env_ptr_arg)
{
  {
    struct ssdb__exception_handler_exists_2_p_0_env_0_s * ssdb__env_ptr = (struct ssdb__exception_handler_exists_2_p_0_env_0_s *) ssdb__env_ptr_arg;

    if (MR_builtin_setjmp((ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &ssdb__ssdb__type_ctor_info_stack_frame_0, &(ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__conv0_StackFrame_5, (ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__StackFrames_4, ssdb__exception_handler_exists_2_p_0_3, ssdb__env_ptr);
        }
        (ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ssdb__env_ptr)->ssdb__exception_handler_exists_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
ssdb__exception_handler_exists_2_p_0(
  MR_Integer ssdb__CSN_3,
  MR_Word ssdb__StackFrames_4)
{
  {
    struct ssdb__exception_handler_exists_2_p_0_env_0_s ssdb__env;

    (ssdb__env).ssdb__exception_handler_exists_2_p_0_env_0__CSN_3 = ssdb__CSN_3;
    (ssdb__env).ssdb__exception_handler_exists_2_p_0_env_0__StackFrames_4 = ssdb__StackFrames_4;
    ssdb__exception_handler_exists_2_p_0_4(&ssdb__env);
    return (ssdb__env).ssdb__exception_handler_exists_2_p_0_env_0__succeeded;
  }
}

static void MR_CALL 
ssdb__reset_counters_for_retry_3_p_0(
  MR_Word ssdb__Frame_4)
{
  {
    MR_Integer ssdb__Var_8;
    MR_Integer ssdb__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_4, (MR_Integer) 0)));
    MR_Integer ssdb__Var_12;
    MR_Integer ssdb__Var_14;
    MR_Integer ssdb__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_4, (MR_Integer) 1)));
    MR_Integer ssdb__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_4, (MR_Integer) 2)));
    MR_Word ssdb__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_4, (MR_Integer) 3)));
    MR_String ssdb__Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__Frame_4, (MR_Integer) 4)));
    MR_Integer ssdb__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_4, (MR_Integer) 5)));
    MR_Word ssdb__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_4, (MR_Integer) 6)));
    MR_Word ssdb__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_4, (MR_Integer) 7)));
    MR_Integer ssdb__Var_23;
    MR_Integer ssdb__Var_24;
    MR_Word ssdb__Var_25;
    MR_String ssdb__Var_26;
    MR_Integer ssdb__Var_27;
    MR_Word ssdb__Var_28;
    MR_Word ssdb__Var_29;

    ssdb__Var_8 = (ssdb__Var_10 - (MR_Integer) 1);
{
#define MR_PROC_LABEL ssdb__reset_counters_for_retry_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__reset_counters_for_retry_3_p_0

	MR_Integer X;

	X =  ssdb__Var_8 ;
		{
ssdb__mutable_variable_cur_ssdb_event_number = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__reset_counters_for_retry_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                    "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    ssdb__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_4, (MR_Integer) 0)));
    ssdb__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_4, (MR_Integer) 1)));
    ssdb__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_4, (MR_Integer) 2)));
    ssdb__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_4, (MR_Integer) 3)));
    ssdb__Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__Frame_4, (MR_Integer) 4)));
    ssdb__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Frame_4, (MR_Integer) 5)));
    ssdb__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_4, (MR_Integer) 6)));
    ssdb__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Frame_4, (MR_Integer) 7)));
    ssdb__Var_12 = (ssdb__Var_14 - (MR_Integer) 1);
{
#define MR_PROC_LABEL ssdb__reset_counters_for_retry_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                    "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__reset_counters_for_retry_3_p_0

	MR_Integer X;

	X =  ssdb__Var_12 ;
		{
ssdb__mutable_variable_cur_ssdb_csn = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__reset_counters_for_retry_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                    "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ssdb__is_same_int_3_p_0(
  MR_Integer ssdb__IntA_4,
  MR_Integer ssdb__IntB_5,
  MR_Word * ssdb__IsSame_6)
{
  {
    MR_bool ssdb__succeeded = (ssdb__IntA_4 == ssdb__IntB_5);

    if (ssdb__succeeded)
      *ssdb__IsSame_6 = (MR_Integer) 1;
    else
      *ssdb__IsSame_6 = (MR_Integer) 0;
  }
}

static void MR_CALL 
ssdb__current_and_parent_frame_tracing_levels_4_p_0(
  MR_Word * ssdb__CurrentLevel_5,
  MR_Word * ssdb__ParentLevel_6)
{
  {
    MR_Word ssdb__Stack_8;

{
#define MR_PROC_LABEL ssdb__current_and_parent_frame_tracing_levels_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__current_and_parent_frame_tracing_levels_4_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_8  = X;
}
{
#define MR_PROC_LABEL ssdb__current_and_parent_frame_tracing_levels_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    if ((ssdb__Stack_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__error_1_p_0((MR_String) "ssdb: current_frame_shallow_traced");
        return;
      }
    }
    else
    {
      MR_Word ssdb__Current_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_8, (MR_Integer) 0)));
      MR_Word ssdb__RestStack_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_8, (MR_Integer) 1)));
      MR_Integer ssdb__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Current_9, (MR_Integer) 0)));
      MR_Integer ssdb__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Current_9, (MR_Integer) 1)));
      MR_Integer ssdb__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Current_9, (MR_Integer) 2)));
      MR_Word ssdb__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Current_9, (MR_Integer) 3)));
      MR_String ssdb__Var_21 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__Current_9, (MR_Integer) 4)));
      MR_Integer ssdb__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Current_9, (MR_Integer) 5)));
      MR_Word ssdb__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Current_9, (MR_Integer) 6)));

      *ssdb__CurrentLevel_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Current_9, (MR_Integer) 7)));
      if ((ssdb__RestStack_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *ssdb__ParentLevel_6 = (MR_Integer) 0;
      else
      {
        MR_Word ssdb__Parent_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__RestStack_10, (MR_Integer) 0)));
        MR_Word ssdb__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__RestStack_10, (MR_Integer) 1)));
        MR_Integer ssdb__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Parent_11, (MR_Integer) 0)));
        MR_Integer ssdb__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Parent_11, (MR_Integer) 1)));
        MR_Integer ssdb__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Parent_11, (MR_Integer) 2)));
        MR_Word ssdb__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Parent_11, (MR_Integer) 3)));
        MR_String ssdb__Var_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ssdb__Parent_11, (MR_Integer) 4)));
        MR_Integer ssdb__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ssdb__Parent_11, (MR_Integer) 5)));
        MR_Word ssdb__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Parent_11, (MR_Integer) 6)));

        *ssdb__ParentLevel_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ssdb__Parent_11, (MR_Integer) 7)));
      }
    }
  }
}

static void MR_CALL 
ssdb__nondet_stack_index_4_p_0(
  MR_Integer ssdb__Num_5,
  MR_Word * ssdb__Frame_6)
{
  {
    MR_Word ssdb__Stack_8;
    MR_Box ssdb__conv0_Frame_6;

{
#define MR_PROC_LABEL ssdb__nondet_stack_index_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__nondet_stack_index_4_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_nondet_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_8  = X;
}
{
#define MR_PROC_LABEL ssdb__nondet_stack_index_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                    "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    mercury__list__det_index0_3_p_0((MR_Word) &ssdb__ssdb__type_ctor_info_stack_frame_0, ssdb__Stack_8, ssdb__Num_5, &ssdb__conv0_Frame_6);
    *ssdb__Frame_6 = ((MR_Word) ssdb__conv0_Frame_6);
  }
}

static void MR_CALL 
ssdb__stack_top_3_p_0(
  MR_Word * ssdb__Frame_4)
{
  {
    MR_Word ssdb__Stack_6;

{
#define MR_PROC_LABEL ssdb__stack_top_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__stack_top_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_6  = X;
}
{
#define MR_PROC_LABEL ssdb__stack_top_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    if ((ssdb__Stack_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__error_1_p_0((MR_String) "ssdb: stack_top on empty stack");
        return;
      }
    }
    else
    {
      MR_Word ssdb__Var_7;

      *ssdb__Frame_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_6, (MR_Integer) 0)));
      ssdb__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ssdb__Stack_6, (MR_Integer) 1)));
    }
  }
}

static void MR_CALL 
ssdb__stack_push_3_p_0(
  MR_Word ssdb__Frame_4)
{
  {
    MR_Word ssdb__Stack_6;
    MR_Integer ssdb__Depth_7;
    MR_Word ssdb__Var_11;
    MR_Integer ssdb__Var_14;

{
#define MR_PROC_LABEL ssdb__stack_push_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__stack_push_3_p_0

	MR_Word X;

		{
X = ssdb__mutable_variable_shadow_stack;


		;}
#undef MR_PROC_LABEL
	 ssdb__Stack_6  = X;
}
{
#define MR_PROC_LABEL ssdb__stack_push_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    {
      ssdb__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ssdb__Var_11, 0) = ((MR_Box) (ssdb__Frame_4));
      MR_hl_field(MR_mktag(1), ssdb__Var_11, 1) = ((MR_Box) (ssdb__Stack_6));
    }
{
#define MR_PROC_LABEL ssdb__stack_push_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__stack_push_3_p_0

	MR_Word X;

	X =  ssdb__Var_11 ;
		{
ssdb__mutable_variable_shadow_stack = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__stack_push_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                    "ssdb__mutable_variable_shadow_stack_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__stack_push_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__stack_push_3_p_0

	MR_Integer X;

		{
X = ssdb__mutable_variable_shadow_stack_depth;


		;}
#undef MR_PROC_LABEL
	 ssdb__Depth_7  = X;
}
{
#define MR_PROC_LABEL ssdb__stack_push_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    ssdb__Var_14 = (ssdb__Depth_7 + (MR_Integer) 1);
{
#define MR_PROC_LABEL ssdb__stack_push_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__stack_push_3_p_0

	MR_Integer X;

	X =  ssdb__Var_14 ;
		{
ssdb__mutable_variable_shadow_stack_depth = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__stack_push_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                    "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
ssdb__set_context_2_p_0(
  MR_String ssdb__FileName_3,
  MR_Integer ssdb__Line_4)
{
  {
{
#define MR_PROC_LABEL ssdb__set_context_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_filename_lock,
                    "ssdb__mutable_variable_cur_filename_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__set_context_2_p_0

	MR_String X;

	X =  ssdb__FileName_3 ;
		{
ssdb__mutable_variable_cur_filename = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__set_context_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_filename_lock,
                    "ssdb__mutable_variable_cur_filename_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__set_context_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_line_number_lock,
                    "ssdb__mutable_variable_cur_line_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__set_context_2_p_0

	MR_Integer X;

	X =  ssdb__Line_4 ;
		{
ssdb__mutable_variable_cur_line_number = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ssdb__set_context_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_line_number_lock,
                    "ssdb__mutable_variable_cur_line_number_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static MR_bool MR_CALL 
ssdb____Unify____bp_state_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2)
{
  {
    MR_bool ssdb__succeeded;

    ssdb__succeeded = ssdb____Unify____bp_state_0_0(((MR_Word) ssdb__wrapper_arg_1), ((MR_Word) ssdb__wrapper_arg_2));
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____bp_state_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3)
{
  {
    MR_Word ssdb__conv0_HeadVar__1_1;

    ssdb____Compare____bp_state_0_0(&ssdb__conv0_HeadVar__1_1, ((MR_Word) ssdb__wrapper_arg_2), ((MR_Word) ssdb__wrapper_arg_3));
    *ssdb__wrapper_arg_1 = ((MR_Box) (ssdb__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ssdb____Unify____breakpoint_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2)
{
  {
    MR_bool ssdb__succeeded;

    ssdb__succeeded = ssdb____Unify____breakpoint_0_0(((MR_Word) ssdb__wrapper_arg_1), ((MR_Word) ssdb__wrapper_arg_2));
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____breakpoint_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3)
{
  {
    MR_Word ssdb__conv0_HeadVar__1_1;

    ssdb____Compare____breakpoint_0_0(&ssdb__conv0_HeadVar__1_1, ((MR_Word) ssdb__wrapper_arg_2), ((MR_Word) ssdb__wrapper_arg_3));
    *ssdb__wrapper_arg_1 = ((MR_Box) (ssdb__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ssdb____Unify____breakpoints_map_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2)
{
  {
    MR_bool ssdb__succeeded;

    ssdb__succeeded = ssdb____Unify____breakpoints_map_0_0(((MR_Word) ssdb__wrapper_arg_1), ((MR_Word) ssdb__wrapper_arg_2));
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____breakpoints_map_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3)
{
  {
    MR_Word ssdb__conv0_HeadVar__1_1;

    ssdb____Compare____breakpoints_map_0_0(&ssdb__conv0_HeadVar__1_1, ((MR_Word) ssdb__wrapper_arg_2), ((MR_Word) ssdb__wrapper_arg_3));
    *ssdb__wrapper_arg_1 = ((MR_Box) (ssdb__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ssdb____Unify____debugger_state_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2)
{
  {
    MR_bool ssdb__succeeded;

    ssdb__succeeded = ssdb____Unify____debugger_state_0_0(((MR_Word) ssdb__wrapper_arg_1), ((MR_Word) ssdb__wrapper_arg_2));
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____debugger_state_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3)
{
  {
    MR_Word ssdb__conv0_HeadVar__1_1;

    ssdb____Compare____debugger_state_0_0(&ssdb__conv0_HeadVar__1_1, ((MR_Word) ssdb__wrapper_arg_2), ((MR_Word) ssdb__wrapper_arg_3));
    *ssdb__wrapper_arg_1 = ((MR_Box) (ssdb__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ssdb____Unify____debugging_paused_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2)
{
  {
    MR_bool ssdb__succeeded;

    ssdb__succeeded = ssdb____Unify____debugging_paused_0_0(((MR_Word) ssdb__wrapper_arg_1), ((MR_Word) ssdb__wrapper_arg_2));
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____debugging_paused_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3)
{
  {
    MR_Word ssdb__conv0_HeadVar__1_1;

    ssdb____Compare____debugging_paused_0_0(&ssdb__conv0_HeadVar__1_1, ((MR_Word) ssdb__wrapper_arg_2), ((MR_Word) ssdb__wrapper_arg_3));
    *ssdb__wrapper_arg_1 = ((MR_Box) (ssdb__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ssdb____Unify____format_config_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2)
{
  {
    MR_bool ssdb__succeeded;

    ssdb__succeeded = ssdb____Unify____format_config_0_0(((MR_Word) ssdb__wrapper_arg_1), ((MR_Word) ssdb__wrapper_arg_2));
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____format_config_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3)
{
  {
    MR_Word ssdb__conv0_HeadVar__1_1;

    ssdb____Compare____format_config_0_0(&ssdb__conv0_HeadVar__1_1, ((MR_Word) ssdb__wrapper_arg_2), ((MR_Word) ssdb__wrapper_arg_3));
    *ssdb__wrapper_arg_1 = ((MR_Box) (ssdb__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ssdb____Unify____list_params_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2)
{
  {
    MR_bool ssdb__succeeded;

    ssdb__succeeded = ssdb____Unify____list_params_0_0(((MR_Word) ssdb__wrapper_arg_1), ((MR_Word) ssdb__wrapper_arg_2));
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____list_params_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3)
{
  {
    MR_Word ssdb__conv0_HeadVar__1_1;

    ssdb____Compare____list_params_0_0(&ssdb__conv0_HeadVar__1_1, ((MR_Word) ssdb__wrapper_arg_2), ((MR_Word) ssdb__wrapper_arg_3));
    *ssdb__wrapper_arg_1 = ((MR_Box) (ssdb__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ssdb____Unify____list_var_value_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2)
{
  {
    MR_bool ssdb__succeeded;

    ssdb__succeeded = ssdb____Unify____list_var_value_0_0(((MR_Word) ssdb__wrapper_arg_1), ((MR_Word) ssdb__wrapper_arg_2));
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____list_var_value_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3)
{
  {
    MR_Word ssdb__conv0_HeadVar__1_1;

    ssdb____Compare____list_var_value_0_0(&ssdb__conv0_HeadVar__1_1, ((MR_Word) ssdb__wrapper_arg_2), ((MR_Word) ssdb__wrapper_arg_3));
    *ssdb__wrapper_arg_1 = ((MR_Box) (ssdb__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ssdb____Unify____next_stop_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2)
{
  {
    MR_bool ssdb__succeeded;

    ssdb__succeeded = ssdb____Unify____next_stop_0_0(((MR_Word) ssdb__wrapper_arg_1), ((MR_Word) ssdb__wrapper_arg_2));
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____next_stop_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3)
{
  {
    MR_Word ssdb__conv0_HeadVar__1_1;

    ssdb____Compare____next_stop_0_0(&ssdb__conv0_HeadVar__1_1, ((MR_Word) ssdb__wrapper_arg_2), ((MR_Word) ssdb__wrapper_arg_3));
    *ssdb__wrapper_arg_1 = ((MR_Box) (ssdb__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ssdb____Unify____pos_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2)
{
  {
    MR_bool ssdb__succeeded;

    ssdb__succeeded = ssdb____Unify____pos_0_0(((MR_Integer) ssdb__wrapper_arg_1), ((MR_Integer) ssdb__wrapper_arg_2));
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____pos_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3)
{
  {
    MR_Word ssdb__conv0_HeadVar__1_1;

    ssdb____Compare____pos_0_0(&ssdb__conv0_HeadVar__1_1, ((MR_Integer) ssdb__wrapper_arg_2), ((MR_Integer) ssdb__wrapper_arg_3));
    *ssdb__wrapper_arg_1 = ((MR_Box) (ssdb__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ssdb____Unify____ssdb_cmd_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2)
{
  {
    MR_bool ssdb__succeeded;

    ssdb__succeeded = ssdb____Unify____ssdb_cmd_0_0(((MR_Word) ssdb__wrapper_arg_1), ((MR_Word) ssdb__wrapper_arg_2));
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____ssdb_cmd_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3)
{
  {
    MR_Word ssdb__conv0_HeadVar__1_1;

    ssdb____Compare____ssdb_cmd_0_0(&ssdb__conv0_HeadVar__1_1, ((MR_Word) ssdb__wrapper_arg_2), ((MR_Word) ssdb__wrapper_arg_3));
    *ssdb__wrapper_arg_1 = ((MR_Box) (ssdb__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ssdb____Unify____ssdb_event_type_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2)
{
  {
    MR_bool ssdb__succeeded;

    ssdb__succeeded = ssdb____Unify____ssdb_event_type_0_0(((MR_Word) ssdb__wrapper_arg_1), ((MR_Word) ssdb__wrapper_arg_2));
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____ssdb_event_type_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3)
{
  {
    MR_Word ssdb__conv0_HeadVar__1_1;

    ssdb____Compare____ssdb_event_type_0_0(&ssdb__conv0_HeadVar__1_1, ((MR_Word) ssdb__wrapper_arg_2), ((MR_Word) ssdb__wrapper_arg_3));
    *ssdb__wrapper_arg_1 = ((MR_Box) (ssdb__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ssdb____Unify____ssdb_proc_id_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2)
{
  {
    MR_bool ssdb__succeeded;

    ssdb__succeeded = ssdb____Unify____ssdb_proc_id_0_0(((MR_Word) ssdb__wrapper_arg_1), ((MR_Word) ssdb__wrapper_arg_2));
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____ssdb_proc_id_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3)
{
  {
    MR_Word ssdb__conv0_HeadVar__1_1;

    ssdb____Compare____ssdb_proc_id_0_0(&ssdb__conv0_HeadVar__1_1, ((MR_Word) ssdb__wrapper_arg_2), ((MR_Word) ssdb__wrapper_arg_3));
    *ssdb__wrapper_arg_1 = ((MR_Box) (ssdb__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ssdb____Unify____ssdb_retry_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2)
{
  {
    MR_bool ssdb__succeeded;

    ssdb__succeeded = ssdb____Unify____ssdb_retry_0_0(((MR_Word) ssdb__wrapper_arg_1), ((MR_Word) ssdb__wrapper_arg_2));
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____ssdb_retry_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3)
{
  {
    MR_Word ssdb__conv0_HeadVar__1_1;

    ssdb____Compare____ssdb_retry_0_0(&ssdb__conv0_HeadVar__1_1, ((MR_Word) ssdb__wrapper_arg_2), ((MR_Word) ssdb__wrapper_arg_3));
    *ssdb__wrapper_arg_1 = ((MR_Box) (ssdb__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ssdb____Unify____ssdb_tracing_level_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2)
{
  {
    MR_bool ssdb__succeeded;

    ssdb__succeeded = ssdb____Unify____ssdb_tracing_level_0_0(((MR_Word) ssdb__wrapper_arg_1), ((MR_Word) ssdb__wrapper_arg_2));
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____ssdb_tracing_level_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3)
{
  {
    MR_Word ssdb__conv0_HeadVar__1_1;

    ssdb____Compare____ssdb_tracing_level_0_0(&ssdb__conv0_HeadVar__1_1, ((MR_Word) ssdb__wrapper_arg_2), ((MR_Word) ssdb__wrapper_arg_3));
    *ssdb__wrapper_arg_1 = ((MR_Box) (ssdb__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ssdb____Unify____stack_frame_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2)
{
  {
    MR_bool ssdb__succeeded;

    ssdb__succeeded = ssdb____Unify____stack_frame_0_0(((MR_Word) ssdb__wrapper_arg_1), ((MR_Word) ssdb__wrapper_arg_2));
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____stack_frame_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3)
{
  {
    MR_Word ssdb__conv0_HeadVar__1_1;

    ssdb____Compare____stack_frame_0_0(&ssdb__conv0_HeadVar__1_1, ((MR_Word) ssdb__wrapper_arg_2), ((MR_Word) ssdb__wrapper_arg_3));
    *ssdb__wrapper_arg_1 = ((MR_Box) (ssdb__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ssdb____Unify____var_name_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2)
{
  {
    MR_bool ssdb__succeeded;

    ssdb__succeeded = ssdb____Unify____var_name_0_0(((MR_String) ssdb__wrapper_arg_1), ((MR_String) ssdb__wrapper_arg_2));
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____var_name_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3)
{
  {
    MR_Word ssdb__conv0_HeadVar__1_1;

    ssdb____Compare____var_name_0_0(&ssdb__conv0_HeadVar__1_1, ((MR_String) ssdb__wrapper_arg_2), ((MR_String) ssdb__wrapper_arg_3));
    *ssdb__wrapper_arg_1 = ((MR_Box) (ssdb__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ssdb____Unify____var_value_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2)
{
  {
    MR_bool ssdb__succeeded;

    ssdb__succeeded = ssdb____Unify____var_value_0_0(((MR_Word) ssdb__wrapper_arg_1), ((MR_Word) ssdb__wrapper_arg_2));
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____var_value_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3)
{
  {
    MR_Word ssdb__conv0_HeadVar__1_1;

    ssdb____Compare____var_value_0_0(&ssdb__conv0_HeadVar__1_1, ((MR_Word) ssdb__wrapper_arg_2), ((MR_Word) ssdb__wrapper_arg_3));
    *ssdb__wrapper_arg_1 = ((MR_Box) (ssdb__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ssdb____Unify____what_next_0_0_10001(
  MR_Box ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2)
{
  {
    MR_bool ssdb__succeeded;

    ssdb__succeeded = ssdb____Unify____what_next_0_0(((MR_Word) ssdb__wrapper_arg_1), ((MR_Word) ssdb__wrapper_arg_2));
    return ssdb__succeeded;
  }
}

static void MR_CALL 
ssdb____Compare____what_next_0_0_10001(
  MR_Box * ssdb__wrapper_arg_1,
  MR_Box ssdb__wrapper_arg_2,
  MR_Box ssdb__wrapper_arg_3)
{
  {
    MR_Word ssdb__conv0_HeadVar__1_1;

    ssdb____Compare____what_next_0_0(&ssdb__conv0_HeadVar__1_1, ((MR_Word) ssdb__wrapper_arg_2), ((MR_Word) ssdb__wrapper_arg_3));
    *ssdb__wrapper_arg_1 = ((MR_Box) (ssdb__conv0_HeadVar__1_1));
  }
}

void mercury__ssdb__init(void)
{
}

void mercury__ssdb__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ssdb__ssdb__type_ctor_info_bp_state_0);
	MR_register_type_ctor_info(&ssdb__ssdb__type_ctor_info_breakpoint_0);
	MR_register_type_ctor_info(&ssdb__ssdb__type_ctor_info_breakpoints_map_0);
	MR_register_type_ctor_info(&ssdb__ssdb__type_ctor_info_debugger_state_0);
	MR_register_type_ctor_info(&ssdb__ssdb__type_ctor_info_debugging_paused_0);
	MR_register_type_ctor_info(&ssdb__ssdb__type_ctor_info_format_config_0);
	MR_register_type_ctor_info(&ssdb__ssdb__type_ctor_info_list_params_0);
	MR_register_type_ctor_info(&ssdb__ssdb__type_ctor_info_list_var_value_0);
	MR_register_type_ctor_info(&ssdb__ssdb__type_ctor_info_next_stop_0);
	MR_register_type_ctor_info(&ssdb__ssdb__type_ctor_info_pos_0);
	MR_register_type_ctor_info(&ssdb__ssdb__type_ctor_info_ssdb_cmd_0);
	MR_register_type_ctor_info(&ssdb__ssdb__type_ctor_info_ssdb_event_type_0);
	MR_register_type_ctor_info(&ssdb__ssdb__type_ctor_info_ssdb_proc_id_0);
	MR_register_type_ctor_info(&ssdb__ssdb__type_ctor_info_ssdb_retry_0);
	MR_register_type_ctor_info(&ssdb__ssdb__type_ctor_info_ssdb_tracing_level_0);
	MR_register_type_ctor_info(&ssdb__ssdb__type_ctor_info_stack_frame_0);
	MR_register_type_ctor_info(&ssdb__ssdb__type_ctor_info_var_name_0);
	MR_register_type_ctor_info(&ssdb__ssdb__type_ctor_info_var_value_0);
	MR_register_type_ctor_info(&ssdb__ssdb__type_ctor_info_what_next_0);
}

void mercury__ssdb__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__ssdb__required_init(void)
{
	ssdb__user_init_pred_0();
	ssdb__user_init_pred_1();
	ssdb__user_init_pred_2();
	ssdb__user_init_pred_3();
	ssdb__user_init_pred_4();
	ssdb__user_init_pred_5();
	ssdb__user_init_pred_6();
	ssdb__user_init_pred_7();
	ssdb__user_init_pred_8();
	ssdb__user_init_pred_9();
	ssdb__user_init_pred_10();
	ssdb__user_init_pred_11();
	ssdb__user_init_pred_12();
	ssdb__user_init_pred_13();
	ssdb__user_init_pred_14();
	ssdb__user_init_pred_15();
	ssdb__user_init_pred_16();
	ssdb__user_init_pred_17();
	ssdb__user_init_pred_18();
	ssdb__user_init_pred_19();
	ssdb__user_init_pred_20();
}

// Ensure everything is compiled with the same grade.
const char *mercury__ssdb__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ssdb. */
